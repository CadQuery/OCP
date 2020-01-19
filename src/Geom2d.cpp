
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <Geom2d_UndefinedValue.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <gp_Elips2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <Geom2d_UndefinedValue.hxx>
#include <Standard_NotImplemented.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Parab2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Trsf2d.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom2d_UndefinedDerivative.hxx>
#include <Geom2d_UndefinedValue.hxx>
#include <gp_Trsf2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
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


    static_cast<py::class_<Geom2d_Geometry ,opencascade::handle<Geom2d_Geometry> ,Py_Geom2d_Geometry , Standard_Transient >>(m.attr("Geom2d_Geometry"))
    // methods
        .def("Mirror",
             (void (Geom2d_Geometry::*)( const gp_Pnt2d &  ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Pnt2d &  ) >(&Geom2d_Geometry::Mirror),
             R"#(Performs the symmetrical transformation of a Geometry with respect to the point P which is the center of the symmetry and assigns the result to this geometric object.)#"  , py::arg("P"))
        .def("Mirror",
             (void (Geom2d_Geometry::*)( const gp_Ax2d &  ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Ax2d &  ) >(&Geom2d_Geometry::Mirror),
             R"#(Performs the symmetrical transformation of a Geometry with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A"))
        .def("Rotate",
             (void (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_Geometry::Rotate),
             R"#(Rotates a Geometry. P is the center of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scale",
             (void (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_Geometry::Scale),
             R"#(Scales a Geometry. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Translate",
             (void (Geom2d_Geometry::*)( const gp_Vec2d &  ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Vec2d &  ) >(&Geom2d_Geometry::Translate),
             R"#(Translates a Geometry. V is the vector of the tanslation.)#"  , py::arg("V"))
        .def("Translate",
             (void (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&Geom2d_Geometry::Translate),
             R"#(Translates a Geometry from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Transform",
             (void (Geom2d_Geometry::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Geometry::*)( const gp_Trsf2d &  ) >(&Geom2d_Geometry::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations. (see class Transformation of the package Geom2d). The following transformations have the same properties as the previous ones but they don't modified the object itself. A copy of the object is returned.)#"  , py::arg("T"))
        .def("Mirrored",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d &  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d &  ) const>(&Geom2d_Geometry::Mirrored),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Ax2d &  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Ax2d &  ) const>(&Geom2d_Geometry::Mirrored),
             R"#(None)#"  , py::arg("A"))
        .def("Rotated",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) const>(&Geom2d_Geometry::Rotated),
             R"#(None)#"  , py::arg("P"),  py::arg("Ang"))
        .def("Scaled",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const Standard_Real  ) const>(&Geom2d_Geometry::Scaled),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Transformed",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Trsf2d &  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Trsf2d &  ) const>(&Geom2d_Geometry::Transformed),
             R"#(None)#"  , py::arg("T"))
        .def("Translated",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Vec2d &  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Vec2d &  ) const>(&Geom2d_Geometry::Translated),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_Geometry::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) const>(&Geom2d_Geometry::Translated),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Geometry::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Transformation ,opencascade::handle<Geom2d_Transformation>  , Standard_Transient >>(m.attr("Geom2d_Transformation"))
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf2d & >()  , py::arg("T") )
    // methods
        .def("SetMirror",
             (void (Geom2d_Transformation::*)( const gp_Pnt2d &  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Pnt2d &  ) >(&Geom2d_Transformation::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation with respect to a point P. P is the center of the symmetry.)#"  , py::arg("P"))
        .def("SetMirror",
             (void (Geom2d_Transformation::*)( const gp_Ax2d &  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Ax2d &  ) >(&Geom2d_Transformation::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation with respect to an axis A. A is the center of the axial symmetry.)#"  , py::arg("A"))
        .def("SetRotation",
             (void (Geom2d_Transformation::*)( const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_Transformation::SetRotation),
             R"#(Assigns to this transformation the geometric properties of a rotation at angle Ang (in radians) about point P.)#"  , py::arg("P"),  py::arg("Ang"))
        .def("SetScale",
             (void (Geom2d_Transformation::*)( const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_Transformation::SetScale),
             R"#(Makes the transformation into a scale. P is the center of the scale and S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("SetTransformation",
             (void (Geom2d_Transformation::*)( const gp_Ax2d & ,  const gp_Ax2d &  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Ax2d & ,  const gp_Ax2d &  ) >(&Geom2d_Transformation::SetTransformation),
             R"#(Makes a transformation allowing passage from the coordinate system "FromSystem1" to the coordinate system "ToSystem2".)#"  , py::arg("FromSystem1"),  py::arg("ToSystem2"))
        .def("SetTransformation",
             (void (Geom2d_Transformation::*)( const gp_Ax2d &  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Ax2d &  ) >(&Geom2d_Transformation::SetTransformation),
             R"#(Makes the transformation allowing passage from the basic coordinate system {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.)} to the local coordinate system defined with the Ax2d ToSystem.)#"  , py::arg("ToSystem"))
        .def("SetTranslation",
             (void (Geom2d_Transformation::*)( const gp_Vec2d &  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Vec2d &  ) >(&Geom2d_Transformation::SetTranslation),
             R"#(Makes the transformation into a translation. V is the vector of the translation.)#"  , py::arg("V"))
        .def("SetTranslation",
             (void (Geom2d_Transformation::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&Geom2d_Transformation::SetTranslation),
             R"#(Makes the transformation into a translation from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetTrsf2d",
             (void (Geom2d_Transformation::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Transformation::*)( const gp_Trsf2d &  ) >(&Geom2d_Transformation::SetTrsf2d),
             R"#(Makes the transformation into a transformation T from package gp.)#"  , py::arg("T"))
        .def("IsNegative",
             (Standard_Boolean (Geom2d_Transformation::*)() const) static_cast<Standard_Boolean (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::IsNegative),
             R"#(Checks whether this transformation is an indirect transformation: returns true if the determinant of the matrix of the vectorial part of the transformation is less than 0.)#" )
        .def("Form",
             (gp_TrsfForm (Geom2d_Transformation::*)() const) static_cast<gp_TrsfForm (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::Form),
             R"#(Returns the nature of this transformation as a value of the gp_TrsfForm enumeration. Returns the nature of the transformation. It can be Identity, Rotation, Translation, PntMirror, Ax1Mirror, Scale, CompoundTrsf)#" )
        .def("ScaleFactor",
             (Standard_Real (Geom2d_Transformation::*)() const) static_cast<Standard_Real (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::ScaleFactor),
             R"#(Returns the scale value of the transformation.)#" )
        .def("Trsf2d",
             (gp_Trsf2d (Geom2d_Transformation::*)() const) static_cast<gp_Trsf2d (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::Trsf2d),
             R"#(Converts this transformation into a gp_Trsf2d transformation. Returns a non persistent copy of <me>. -C++: return const&)#" )
        .def("Value",
             (Standard_Real (Geom2d_Transformation::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (Geom2d_Transformation::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom2d_Transformation::Value),
             R"#(Returns the coefficients of the global matrix of tranformation. It is a 2 rows X 3 columns matrix.)#"  , py::arg("Row"),  py::arg("Col"))
        .def("Invert",
             (void (Geom2d_Transformation::*)() ) static_cast<void (Geom2d_Transformation::*)() >(&Geom2d_Transformation::Invert),
             R"#(Computes the inverse of this transformation. and assigns the result to this transformatio)#" )
        .def("Inverted",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)() const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::Inverted),
             R"#(Computes the inverse of this transformation and creates a new one. Raises ConstructionError if the the transformation is singular. This means that the ScaleFactor is lower or equal to Resolution from package gp.)#" )
        .def("Multiplied",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) const>(&Geom2d_Transformation::Multiplied),
             R"#(Computes the transformation composed with Other and <me>. <me> * Other. Returns a new transformation)#"  , py::arg("Other"))
        .def("Multiply",
             (void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) ) static_cast<void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) >(&Geom2d_Transformation::Multiply),
             R"#(Computes the transformation composed with Other and <me> . <me> = <me> * Other.)#"  , py::arg("Other"))
        .def("Power",
             (void (Geom2d_Transformation::*)( const Standard_Integer  ) ) static_cast<void (Geom2d_Transformation::*)( const Standard_Integer  ) >(&Geom2d_Transformation::Power),
             R"#(Raised if N < 0 and if the transformation is not inversible)#"  , py::arg("N"))
        .def("Powered",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const Standard_Integer  ) const>(&Geom2d_Transformation::Powered),
             R"#(Raised if N < 0 and if the transformation is not inversible)#"  , py::arg("N"))
        .def("PreMultiply",
             (void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) ) static_cast<void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) >(&Geom2d_Transformation::PreMultiply),
             R"#(Computes the matrix of the transformation composed with <me> and Other. <me> = Other * <me>)#"  , py::arg("Other"))
        .def("Copy",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)() const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::Copy),
             R"#(Creates a new object, which is a copy of this transformation.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Transformation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Transformation::*)() const>(&Geom2d_Transformation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Transforms",
             []( Geom2d_Transformation &self   ){ Standard_Real  X; Standard_Real  Y; self.Transforms(X,Y); return std::make_tuple(X,Y); },
             R"#(Applies the transformation <me> to the triplet {X, Y}.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Transformation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Transformation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
        .def("__mul__",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) const>(&Geom2d_Transformation::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__rmul__",
             (opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) const) static_cast<opencascade::handle<Geom2d_Transformation> (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) const>(&Geom2d_Transformation::operator*),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__imul__",
             (void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) ) static_cast<void (Geom2d_Transformation::*)( const opencascade::handle<Geom2d_Transformation> &  ) >(&Geom2d_Transformation::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // Additional methods
;


    static_cast<py::class_<Geom2d_AxisPlacement ,opencascade::handle<Geom2d_AxisPlacement>  , Geom2d_Geometry >>(m.attr("Geom2d_AxisPlacement"))
        .def(py::init< const gp_Ax2d & >()  , py::arg("A") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("P"),  py::arg("V") )
    // methods
        .def("Reverse",
             (void (Geom2d_AxisPlacement::*)() ) static_cast<void (Geom2d_AxisPlacement::*)() >(&Geom2d_AxisPlacement::Reverse),
             R"#(None)#" )
        .def("Reversed",
             (opencascade::handle<Geom2d_AxisPlacement> (Geom2d_AxisPlacement::*)() const) static_cast<opencascade::handle<Geom2d_AxisPlacement> (Geom2d_AxisPlacement::*)() const>(&Geom2d_AxisPlacement::Reversed),
             R"#(Reverses the unit vector of this axis. Note: - Reverse assigns the result to this axis, while - Reversed creates a new one.)#" )
        .def("SetAxis",
             (void (Geom2d_AxisPlacement::*)( const gp_Ax2d &  ) ) static_cast<void (Geom2d_AxisPlacement::*)( const gp_Ax2d &  ) >(&Geom2d_AxisPlacement::SetAxis),
             R"#(Changes the complete definition of the axis placement.)#"  , py::arg("A"))
        .def("SetDirection",
             (void (Geom2d_AxisPlacement::*)( const gp_Dir2d &  ) ) static_cast<void (Geom2d_AxisPlacement::*)( const gp_Dir2d &  ) >(&Geom2d_AxisPlacement::SetDirection),
             R"#(Changes the "Direction" of the axis placement.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (Geom2d_AxisPlacement::*)( const gp_Pnt2d &  ) ) static_cast<void (Geom2d_AxisPlacement::*)( const gp_Pnt2d &  ) >(&Geom2d_AxisPlacement::SetLocation),
             R"#(Changes the "Location" point (origin) of the axis placement.)#"  , py::arg("P"))
        .def("Angle",
             (Standard_Real (Geom2d_AxisPlacement::*)( const opencascade::handle<Geom2d_AxisPlacement> &  ) const) static_cast<Standard_Real (Geom2d_AxisPlacement::*)( const opencascade::handle<Geom2d_AxisPlacement> &  ) const>(&Geom2d_AxisPlacement::Angle),
             R"#(Computes the angle between the "Direction" of two axis placement in radians. The result is comprised between -Pi and Pi.)#"  , py::arg("Other"))
        .def("Ax2d",
             (gp_Ax2d (Geom2d_AxisPlacement::*)() const) static_cast<gp_Ax2d (Geom2d_AxisPlacement::*)() const>(&Geom2d_AxisPlacement::Ax2d),
             R"#(Converts this axis into a gp_Ax2d axis.)#" )
        .def("Direction",
             (gp_Dir2d (Geom2d_AxisPlacement::*)() const) static_cast<gp_Dir2d (Geom2d_AxisPlacement::*)() const>(&Geom2d_AxisPlacement::Direction),
             R"#(Returns the "Direction" of <me>. -C++: return const&)#" )
        .def("Location",
             (gp_Pnt2d (Geom2d_AxisPlacement::*)() const) static_cast<gp_Pnt2d (Geom2d_AxisPlacement::*)() const>(&Geom2d_AxisPlacement::Location),
             R"#(Returns the "Location" point (origin) of the axis placement. -C++: return const&)#" )
        .def("Transform",
             (void (Geom2d_AxisPlacement::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_AxisPlacement::*)( const gp_Trsf2d &  ) >(&Geom2d_AxisPlacement::Transform),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_AxisPlacement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Curve ,opencascade::handle<Geom2d_Curve> ,Py_Geom2d_Curve , Geom2d_Geometry >>(m.attr("Geom2d_Curve"))
    // methods
        .def("Reverse",
             (void (Geom2d_Curve::*)() ) static_cast<void (Geom2d_Curve::*)() >(&Geom2d_Curve::Reverse),
             R"#(Changes the direction of parametrization of <me>. The "FirstParameter" and the "LastParameter" are not changed but the orientation of the curve is modified. If the curve is bounded the StartPoint of the initial curve becomes the EndPoint of the reversed curve and the EndPoint of the initial curve becomes the StartPoint of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Curve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_Curve::*)( const Standard_Real  ) const>(&Geom2d_Curve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this curve. Note: The point of parameter U on this curve is identical to the point of parameter ReversedParameter(U) on the reversed curve.)#"  , py::arg("U"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_Curve::*)( const Standard_Real ,  const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_Curve::*)( const Standard_Real ,  const gp_Trsf2d &  ) const>(&Geom2d_Curve::TransformedParameter),
             R"#(Computes the parameter on the curve transformed by T for the point of parameter U on this curve. Note: this function generally returns U but it can be redefined (for example, on a line).)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_Curve::*)( const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_Curve::*)( const gp_Trsf2d &  ) const>(&Geom2d_Curve::ParametricTransformation),
             R"#(Returns the coefficient required to compute the parametric transformation of this curve when transformation T is applied. This coefficient is the ratio between the parameter of a point on this curve and the parameter of the transformed point on the new curve transformed by T. Note: this function generally returns 1. but it can be redefined (for example, on a line).)#"  , py::arg("T"))
        .def("Reversed",
             (opencascade::handle<Geom2d_Curve> (Geom2d_Curve::*)() const) static_cast<opencascade::handle<Geom2d_Curve> (Geom2d_Curve::*)() const>(&Geom2d_Curve::Reversed),
             R"#(Creates a reversed duplicate Changes the orientation of this curve. The first and last parameters are not changed, but the parametric direction of the curve is reversed. If the curve is bounded: - the start point of the initial curve becomes the end point of the reversed curve, and - the end point of the initial curve becomes the start point of the reversed curve. - Reversed creates a new curve.)#" )
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
             (Standard_Boolean (Geom2d_Curve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2d_Curve::*)( const Standard_Integer  ) const>(&Geom2d_Curve::IsCN),
             R"#(Returns true if the degree of continuity of this curve is at least N. Exceptions Standard_RangeError if N is less than 0.)#"  , py::arg("N"))
        .def("D0",
             (void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_Curve::D0),
             R"#(Returns in P the point of parameter U. If the curve is periodic then the returned point is P(U) with U = Ustart + (U - Uend) where Ustart and Uend are the parametric bounds of the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_Curve::D1),
             R"#(Returns the point P of parameter U and the first derivative V1. Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Curve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Curve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Curve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_Curve::DN),
             R"#(For the point of parameter U of this curve, computes the vector corresponding to the Nth derivative. Exceptions StdFail_UndefinedDerivative if: - the continuity of the curve is not "CN", or - the derivative vector cannot be computed easily; this is the case with specific types of curve (for example, a rational BSpline curve where N is greater than 3). Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Value",
             (gp_Pnt2d (Geom2d_Curve::*)( const Standard_Real  ) const) static_cast<gp_Pnt2d (Geom2d_Curve::*)( const Standard_Real  ) const>(&Geom2d_Curve::Value),
             R"#(Computes the point of parameter U on <me>. If the curve is periodic then the returned point is P(U) with U = Ustart + (U - Uend) where Ustart and Uend are the parametric bounds of the curve.)#"  , py::arg("U"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Curve::*)() const>(&Geom2d_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Curve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Curve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Point ,opencascade::handle<Geom2d_Point> ,Py_Geom2d_Point , Geom2d_Geometry >>(m.attr("Geom2d_Point"))
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
        .def("Distance",
             (Standard_Real (Geom2d_Point::*)( const opencascade::handle<Geom2d_Point> &  ) const) static_cast<Standard_Real (Geom2d_Point::*)( const opencascade::handle<Geom2d_Point> &  ) const>(&Geom2d_Point::Distance),
             R"#(computes the distance between <me> and <Other>.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (Geom2d_Point::*)( const opencascade::handle<Geom2d_Point> &  ) const) static_cast<Standard_Real (Geom2d_Point::*)( const opencascade::handle<Geom2d_Point> &  ) const>(&Geom2d_Point::SquareDistance),
             R"#(computes the square distance between <me> and <Other>.)#"  , py::arg("Other"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Point::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Vector ,opencascade::handle<Geom2d_Vector> ,Py_Geom2d_Vector , Geom2d_Geometry >>(m.attr("Geom2d_Vector"))
    // methods
        .def("Reverse",
             (void (Geom2d_Vector::*)() ) static_cast<void (Geom2d_Vector::*)() >(&Geom2d_Vector::Reverse),
             R"#(Reverses the vector <me>.)#" )
        .def("Reversed",
             (opencascade::handle<Geom2d_Vector> (Geom2d_Vector::*)() const) static_cast<opencascade::handle<Geom2d_Vector> (Geom2d_Vector::*)() const>(&Geom2d_Vector::Reversed),
             R"#(Returns a copy of <me> reversed.)#" )
        .def("Angle",
             (Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_Vector::Angle),
             R"#(Computes the angular value, in radians, between this vector and vector Other. The result is a value between -Pi and Pi. The orientation is from this vector to vector Other. Raises VectorWithNullMagnitude if one of the two vectors is a vector with null magnitude because the angular value is indefinite.)#"  , py::arg("Other"))
        .def("Magnitude",
             (Standard_Real (Geom2d_Vector::*)() const) static_cast<Standard_Real (Geom2d_Vector::*)() const>(&Geom2d_Vector::Magnitude),
             R"#(Returns the Magnitude of <me>.)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom2d_Vector::*)() const) static_cast<Standard_Real (Geom2d_Vector::*)() const>(&Geom2d_Vector::SquareMagnitude),
             R"#(Returns the square magnitude of <me>.)#" )
        .def("X",
             (Standard_Real (Geom2d_Vector::*)() const) static_cast<Standard_Real (Geom2d_Vector::*)() const>(&Geom2d_Vector::X),
             R"#(Returns the X coordinate of <me>.)#" )
        .def("Y",
             (Standard_Real (Geom2d_Vector::*)() const) static_cast<Standard_Real (Geom2d_Vector::*)() const>(&Geom2d_Vector::Y),
             R"#(Returns the Y coordinate of <me>.)#" )
        .def("Crossed",
             (Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_Vector::Crossed),
             R"#(Cross product of <me> with the vector <Other>.)#"  , py::arg("Other"))
        .def("Dot",
             (Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<Standard_Real (Geom2d_Vector::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_Vector::Dot),
             R"#(Returns the scalar product of 2 Vectors.)#"  , py::arg("Other"))
        .def("Vec2d",
             (gp_Vec2d (Geom2d_Vector::*)() const) static_cast<gp_Vec2d (Geom2d_Vector::*)() const>(&Geom2d_Vector::Vec2d),
             R"#(Returns a non persistent copy of <me>.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Vector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Vector::*)() const>(&Geom2d_Vector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( Geom2d_Vector &self   ){ Standard_Real  X; Standard_Real  Y; self.Coord(X,Y); return std::make_tuple(X,Y); },
             R"#(Returns the coordinates of <me>.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Vector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Vector::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_BoundedCurve ,opencascade::handle<Geom2d_BoundedCurve> ,Py_Geom2d_BoundedCurve , Geom2d_Curve >>(m.attr("Geom2d_BoundedCurve"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_BoundedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_CartesianPoint ,opencascade::handle<Geom2d_CartesianPoint>  , Geom2d_Point >>(m.attr("Geom2d_CartesianPoint"))
        .def(py::init< const gp_Pnt2d & >()  , py::arg("P") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y") )
    // methods
        .def("SetCoord",
             (void (Geom2d_CartesianPoint::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2d_CartesianPoint::*)( const Standard_Real ,  const Standard_Real  ) >(&Geom2d_CartesianPoint::SetCoord),
             R"#(Set <me> to X, Y coordinates.)#"  , py::arg("X"),  py::arg("Y"))
        .def("SetPnt2d",
             (void (Geom2d_CartesianPoint::*)( const gp_Pnt2d &  ) ) static_cast<void (Geom2d_CartesianPoint::*)( const gp_Pnt2d &  ) >(&Geom2d_CartesianPoint::SetPnt2d),
             R"#(Set <me> to P.X(), P.Y() coordinates.)#"  , py::arg("P"))
        .def("SetX",
             (void (Geom2d_CartesianPoint::*)( const Standard_Real  ) ) static_cast<void (Geom2d_CartesianPoint::*)( const Standard_Real  ) >(&Geom2d_CartesianPoint::SetX),
             R"#(Changes the X coordinate of me.)#"  , py::arg("X"))
        .def("SetY",
             (void (Geom2d_CartesianPoint::*)( const Standard_Real  ) ) static_cast<void (Geom2d_CartesianPoint::*)( const Standard_Real  ) >(&Geom2d_CartesianPoint::SetY),
             R"#(Changes the Y coordinate of me.)#"  , py::arg("Y"))
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
             (void (Geom2d_CartesianPoint::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_CartesianPoint::*)( const gp_Trsf2d &  ) >(&Geom2d_CartesianPoint::Transform),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_CartesianPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Conic ,opencascade::handle<Geom2d_Conic> ,Py_Geom2d_Conic , Geom2d_Curve >>(m.attr("Geom2d_Conic"))
    // methods
        .def("SetAxis",
             (void (Geom2d_Conic::*)( const gp_Ax22d &  ) ) static_cast<void (Geom2d_Conic::*)( const gp_Ax22d &  ) >(&Geom2d_Conic::SetAxis),
             R"#(Modifies this conic, redefining its local coordinate system partially, by assigning P as its origin)#"  , py::arg("A"))
        .def("SetXAxis",
             (void (Geom2d_Conic::*)( const gp_Ax2d &  ) ) static_cast<void (Geom2d_Conic::*)( const gp_Ax2d &  ) >(&Geom2d_Conic::SetXAxis),
             R"#(None)#"  , py::arg("A"))
        .def("SetYAxis",
             (void (Geom2d_Conic::*)( const gp_Ax2d &  ) ) static_cast<void (Geom2d_Conic::*)( const gp_Ax2d &  ) >(&Geom2d_Conic::SetYAxis),
             R"#(Assigns the origin and unit vector of axis A to the origin of the local coordinate system of this conic and either: - its "X Direction", or - its "Y Direction". The other unit vector of the local coordinate system of this conic is recomputed normal to A, without changing the orientation of the local coordinate system (right-handed or left-handed).)#"  , py::arg("A"))
        .def("SetLocation",
             (void (Geom2d_Conic::*)( const gp_Pnt2d &  ) ) static_cast<void (Geom2d_Conic::*)( const gp_Pnt2d &  ) >(&Geom2d_Conic::SetLocation),
             R"#(Modifies this conic, redefining its local coordinate system fully, by assigning A as this coordinate system.)#"  , py::arg("P"))
        .def("XAxis",
             (gp_Ax2d (Geom2d_Conic::*)() const) static_cast<gp_Ax2d (Geom2d_Conic::*)() const>(&Geom2d_Conic::XAxis),
             R"#(Returns the "XAxis" of the conic. This axis defines the origin of parametrization of the conic. This axis and the "Yaxis" define the local coordinate system of the conic. -C++: return const&)#" )
        .def("YAxis",
             (gp_Ax2d (Geom2d_Conic::*)() const) static_cast<gp_Ax2d (Geom2d_Conic::*)() const>(&Geom2d_Conic::YAxis),
             R"#(Returns the "YAxis" of the conic. The "YAxis" is perpendicular to the "Xaxis".)#" )
        .def("Eccentricity",
             (Standard_Real (Geom2d_Conic::*)() const) static_cast<Standard_Real (Geom2d_Conic::*)() const>(&Geom2d_Conic::Eccentricity),
             R"#(returns the eccentricity value of the conic e. e = 0 for a circle 0 < e < 1 for an ellipse (e = 0 if MajorRadius = MinorRadius) e > 1 for a hyperbola e = 1 for a parabola)#" )
        .def("Location",
             (gp_Pnt2d (Geom2d_Conic::*)() const) static_cast<gp_Pnt2d (Geom2d_Conic::*)() const>(&Geom2d_Conic::Location),
             R"#(Returns the location point of the conic. For the circle, the ellipse and the hyperbola it is the center of the conic. For the parabola it is the vertex of the parabola.)#" )
        .def("Position",
             (const gp_Ax22d & (Geom2d_Conic::*)() const) static_cast<const gp_Ax22d & (Geom2d_Conic::*)() const>(&Geom2d_Conic::Position),
             R"#(Returns the local coordinates system of the conic.)#" )
        .def("Reverse",
             (void (Geom2d_Conic::*)() ) static_cast<void (Geom2d_Conic::*)() >(&Geom2d_Conic::Reverse),
             R"#(Reverses the direction of parameterization of <me>. The local coordinate system of the conic is modified.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Conic::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_Conic::*)( const Standard_Real  ) const>(&Geom2d_Conic::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_Conic::*)() const) static_cast<GeomAbs_Shape (Geom2d_Conic::*)() const>(&Geom2d_Conic::Continuity),
             R"#(Returns GeomAbs_CN which is the global continuity of any conic.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_Conic::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2d_Conic::*)( const Standard_Integer  ) const>(&Geom2d_Conic::IsCN),
             R"#(Returns True, the order of continuity of a conic is infinite.)#"  , py::arg("N"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_Conic::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_Conic::*)() const>(&Geom2d_Conic::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_Conic::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Conic::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Direction ,opencascade::handle<Geom2d_Direction>  , Geom2d_Vector >>(m.attr("Geom2d_Direction"))
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y") )
        .def(py::init< const gp_Dir2d & >()  , py::arg("V") )
    // methods
        .def("SetCoord",
             (void (Geom2d_Direction::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2d_Direction::*)( const Standard_Real ,  const Standard_Real  ) >(&Geom2d_Direction::SetCoord),
             R"#(Assigns the coordinates X and Y to this unit vector, then normalizes it. Exceptions Standard_ConstructionError if Sqrt(X*X + Y*Y) is less than or equal to gp::Resolution().)#"  , py::arg("X"),  py::arg("Y"))
        .def("SetDir2d",
             (void (Geom2d_Direction::*)( const gp_Dir2d &  ) ) static_cast<void (Geom2d_Direction::*)( const gp_Dir2d &  ) >(&Geom2d_Direction::SetDir2d),
             R"#(Converts the gp_Dir2d unit vector V into this unit vector.)#"  , py::arg("V"))
        .def("SetX",
             (void (Geom2d_Direction::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Direction::*)( const Standard_Real  ) >(&Geom2d_Direction::SetX),
             R"#(Assigns a value to the X coordinate of this unit vector, then normalizes it. Exceptions Standard_ConstructionError if the value assigned causes the magnitude of the vector to become less than or equal to gp::Resolution().)#"  , py::arg("X"))
        .def("SetY",
             (void (Geom2d_Direction::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Direction::*)( const Standard_Real  ) >(&Geom2d_Direction::SetY),
             R"#(Assigns a value to the Y coordinate of this unit vector, then normalizes it. Exceptions Standard_ConstructionError if the value assigned causes the magnitude of the vector to become less than or equal to gp::Resolution().)#"  , py::arg("Y"))
        .def("Dir2d",
             (gp_Dir2d (Geom2d_Direction::*)() const) static_cast<gp_Dir2d (Geom2d_Direction::*)() const>(&Geom2d_Direction::Dir2d),
             R"#(Converts this unit vector into a gp_Dir2d unit vector.)#" )
        .def("Magnitude",
             (Standard_Real (Geom2d_Direction::*)() const) static_cast<Standard_Real (Geom2d_Direction::*)() const>(&Geom2d_Direction::Magnitude),
             R"#(returns 1.0)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom2d_Direction::*)() const) static_cast<Standard_Real (Geom2d_Direction::*)() const>(&Geom2d_Direction::SquareMagnitude),
             R"#(returns 1.0)#" )
        .def("Crossed",
             (Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_Direction::Crossed),
             R"#(Computes the cross product between <me> and <Other>.)#"  , py::arg("Other"))
        .def("Transform",
             (void (Geom2d_Direction::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Direction::*)( const gp_Trsf2d &  ) >(&Geom2d_Direction::Transform),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Direction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
        .def("__pow__",
             (Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<Standard_Real (Geom2d_Direction::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_Direction::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // Additional methods
;


    static_cast<py::class_<Geom2d_Line ,opencascade::handle<Geom2d_Line>  , Geom2d_Curve >>(m.attr("Geom2d_Line"))
        .def(py::init< const gp_Ax2d & >()  , py::arg("A") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("L") )
        .def(py::init< const gp_Pnt2d &,const gp_Dir2d & >()  , py::arg("P"),  py::arg("V") )
    // methods
        .def("SetLin2d",
             (void (Geom2d_Line::*)( const gp_Lin2d &  ) ) static_cast<void (Geom2d_Line::*)( const gp_Lin2d &  ) >(&Geom2d_Line::SetLin2d),
             R"#(Set <me> so that <me> has the same geometric properties as L.)#"  , py::arg("L"))
        .def("SetDirection",
             (void (Geom2d_Line::*)( const gp_Dir2d &  ) ) static_cast<void (Geom2d_Line::*)( const gp_Dir2d &  ) >(&Geom2d_Line::SetDirection),
             R"#(changes the direction of the line.)#"  , py::arg("V"))
        .def("Direction",
             (const gp_Dir2d & (Geom2d_Line::*)() const) static_cast<const gp_Dir2d & (Geom2d_Line::*)() const>(&Geom2d_Line::Direction),
             R"#(changes the direction of the line.)#" )
        .def("SetLocation",
             (void (Geom2d_Line::*)( const gp_Pnt2d &  ) ) static_cast<void (Geom2d_Line::*)( const gp_Pnt2d &  ) >(&Geom2d_Line::SetLocation),
             R"#(Changes the "Location" point (origin) of the line.)#"  , py::arg("P"))
        .def("Location",
             (const gp_Pnt2d & (Geom2d_Line::*)() const) static_cast<const gp_Pnt2d & (Geom2d_Line::*)() const>(&Geom2d_Line::Location),
             R"#(Changes the "Location" point (origin) of the line.)#" )
        .def("SetPosition",
             (void (Geom2d_Line::*)( const gp_Ax2d &  ) ) static_cast<void (Geom2d_Line::*)( const gp_Ax2d &  ) >(&Geom2d_Line::SetPosition),
             R"#(Changes the "Location" and a the "Direction" of <me>.)#"  , py::arg("A"))
        .def("Position",
             (const gp_Ax2d & (Geom2d_Line::*)() const) static_cast<const gp_Ax2d & (Geom2d_Line::*)() const>(&Geom2d_Line::Position),
             R"#(None)#" )
        .def("Lin2d",
             (gp_Lin2d (Geom2d_Line::*)() const) static_cast<gp_Lin2d (Geom2d_Line::*)() const>(&Geom2d_Line::Lin2d),
             R"#(Returns non persistent line from gp with the same geometric properties as <me>)#" )
        .def("Reverse",
             (void (Geom2d_Line::*)() ) static_cast<void (Geom2d_Line::*)() >(&Geom2d_Line::Reverse),
             R"#(Changes the orientation of this line. As a result, the unit vector of the positioning axis of this line is reversed.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Line::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_Line::*)( const Standard_Real  ) const>(&Geom2d_Line::ReversedParameter),
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
        .def("Distance",
             (Standard_Real (Geom2d_Line::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Real (Geom2d_Line::*)( const gp_Pnt2d &  ) const>(&Geom2d_Line::Distance),
             R"#(Computes the distance between <me> and the point P.)#"  , py::arg("P"))
        .def("IsCN",
             (Standard_Boolean (Geom2d_Line::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2d_Line::*)( const Standard_Integer  ) const>(&Geom2d_Line::IsCN),
             R"#(Returns True.)#"  , py::arg("N"))
        .def("D0",
             (void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_Line::D0),
             R"#(Returns in P the point of parameter U. P (U) = O + U * Dir where O is the "Location" point of the line and Dir the direction of the line.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_Line::D1),
             R"#(Returns the point P of parameter u and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Line::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. V2 is a vector with null magnitude for a line.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Line::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Line::D3),
             R"#(V2 and V3 are vectors with null magnitude for a line.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Line::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_Line::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_Line::DN),
             R"#(For the point of parameter U of this line, computes the vector corresponding to the Nth derivative. Note: if N is greater than or equal to 2, the result is a vector with null magnitude. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Line::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Line::*)( const gp_Trsf2d &  ) >(&Geom2d_Line::Transform),
             R"#(Applies the transformation T to this line.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_Line::*)( const Standard_Real ,  const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_Line::*)( const Standard_Real ,  const gp_Trsf2d &  ) const>(&Geom2d_Line::TransformedParameter),
             R"#(Computes the parameter on the line transformed by T for the point of parameter U on this line. For a line, the returned value is equal to U multiplied by the scale factor of transformation T.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_Line::*)( const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_Line::*)( const gp_Trsf2d &  ) const>(&Geom2d_Line::ParametricTransformation),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Line::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_OffsetCurve ,opencascade::handle<Geom2d_OffsetCurve>  , Geom2d_Curve >>(m.attr("Geom2d_OffsetCurve"))
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Boolean >()  , py::arg("C"),  py::arg("Offset"),  py::arg("isNotCheckC0")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("Reverse",
             (void (Geom2d_OffsetCurve::*)() ) static_cast<void (Geom2d_OffsetCurve::*)() >(&Geom2d_OffsetCurve::Reverse),
             R"#(Changes the direction of parametrization of <me>. As a result: - the basis curve is reversed, - the start point of the initial curve becomes the end point of the reversed curve, - the end point of the initial curve becomes the start point of the reversed curve, and - the first and last parameters are recomputed.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real  ) const>(&Geom2d_OffsetCurve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this offset curve.)#"  , py::arg("U"))
        .def("SetBasisCurve",
             (void (Geom2d_OffsetCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Boolean  ) ) static_cast<void (Geom2d_OffsetCurve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Boolean  ) >(&Geom2d_OffsetCurve::SetBasisCurve),
             R"#(Changes this offset curve by assigning C as the basis curve from which it is built. If isNotCheckC0 = TRUE checking if basis curve has C0-continuity is not made. Exceptions if isNotCheckC0 = false, Standard_ConstructionError if the curve C is not at least "C1" continuous.)#"  , py::arg("C"),  py::arg("isNotCheckC0")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetOffsetValue",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real  ) ) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real  ) >(&Geom2d_OffsetCurve::SetOffsetValue),
             R"#(Changes this offset curve by assigning D as the offset value.)#"  , py::arg("D"))
        .def("BasisCurve",
             (opencascade::handle<Geom2d_Curve> (Geom2d_OffsetCurve::*)() const) static_cast<opencascade::handle<Geom2d_Curve> (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::BasisCurve),
             R"#(Returns the basis curve of this offset curve. The basis curve can be an offset curve.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_OffsetCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::Continuity),
             R"#(Continuity of the Offset curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, G1 : tangency continuity all along the Curve, G2 : curvature continuity all along the Curve, CN : the order of continuity is infinite. Warnings : Returns the continuity of the basis curve - 1. The offset curve must have a unique normal direction defined at any point. Value and derivatives)#" )
        .def("D0",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_OffsetCurve::D0),
             R"#(Warning! this should not be called if the basis curve is not at least C1. Nevertheless if used on portion where the curve is C1, it is OK)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_OffsetCurve::D1),
             R"#(Warning! this should not be called if the continuity of the basis curve is not C2. Nevertheless, it's OK to use it on portion where the curve is C2)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_OffsetCurve::D2),
             R"#(Warning! This should not be called if the continuity of the basis curve is not C3. Nevertheless, it's OK to use it on portion where the curve is C3)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_OffsetCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_OffsetCurve::D3),
             R"#(Warning! This should not be called if the continuity of the basis curve is not C4. Nevertheless, it's OK to use it on portion where the curve is C4)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_OffsetCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Warning! this should not be called raises UndefunedDerivative if the continuity of the basis curve is not CN+1. Nevertheless, it's OK to use it on portion where the curve is CN+1 raises RangeError if N < 1. raises NotImplemented if N > 3. The following functions compute the value and derivatives on the offset curve and returns the derivatives on the basis curve too. The computation of the value and derivatives on the basis curve are used to evaluate the offset curve Warnings : The exception UndefinedValue or UndefinedDerivative is raised if it is not possible to compute a unique offset direction.)#"  , py::arg("U"),  py::arg("N"))
        .def("FirstParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::FirstParameter),
             R"#(Returns the value of the first parameter of this offset curve. The first parameter corresponds to the start point of the curve. Note: the first and last parameters of this offset curve are also the ones of its basis curve.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::LastParameter),
             R"#(Returns the value of the last parameter of this offset curve. The last parameter corresponds to the end point. Note: the first and last parameters of this offset curve are also the ones of its basis curve.)#" )
        .def("Offset",
             (Standard_Real (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::Offset),
             R"#(Returns the offset value of this offset curve.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Boolean (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::IsClosed),
             R"#(Returns True if the distance between the start point and the end point of the curve is lower or equal to Resolution from package gp.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_OffsetCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2d_OffsetCurve::*)( const Standard_Integer  ) const>(&Geom2d_OffsetCurve::IsCN),
             R"#(Is the order of continuity of the curve N ? Warnings : This method answer True if the continuity of the basis curve is N + 1. We suppose in this class that a normal direction to the basis curve (used to compute the offset curve) is defined at any point on the basis curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Boolean (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::IsPeriodic),
             R"#(Is the parametrization of a curve is periodic ? If the basis curve is a circle or an ellipse the corresponding OffsetCurve is periodic. If the basis curve can't be periodic (for example BezierCurve) the OffsetCurve can't be periodic.)#" )
        .def("Period",
             (Standard_Real (Geom2d_OffsetCurve::*)() const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::Period),
             R"#(Returns the period of this offset curve, i.e. the period of the basis curve of this offset curve. Exceptions Standard_NoSuchObject if the basis curve is not periodic.)#" )
        .def("Transform",
             (void (Geom2d_OffsetCurve::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_OffsetCurve::*)( const gp_Trsf2d &  ) >(&Geom2d_OffsetCurve::Transform),
             R"#(Applies the transformation T to this offset curve. Note: the basis curve is also modified.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real ,  const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)( const Standard_Real ,  const gp_Trsf2d &  ) const>(&Geom2d_OffsetCurve::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_OffsetCurve::*)( const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_OffsetCurve::*)( const gp_Trsf2d &  ) const>(&Geom2d_OffsetCurve::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_OffsetCurve::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::Copy),
             R"#(Creates a new object, which is a copy of this offset curve.)#" )
        .def("GetBasisCurveContinuity",
             (GeomAbs_Shape (Geom2d_OffsetCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::GetBasisCurveContinuity),
             R"#(Returns continuity of the basis curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_OffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_OffsetCurve::*)() const>(&Geom2d_OffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_OffsetCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_OffsetCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_VectorWithMagnitude ,opencascade::handle<Geom2d_VectorWithMagnitude>  , Geom2d_Vector >>(m.attr("Geom2d_VectorWithMagnitude"))
        .def(py::init< const gp_Vec2d & >()  , py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
    // methods
        .def("SetCoord",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real ,  const Standard_Real  ) >(&Geom2d_VectorWithMagnitude::SetCoord),
             R"#(Set <me> to X, Y coordinates.)#"  , py::arg("X"),  py::arg("Y"))
        .def("SetVec2d",
             (void (Geom2d_VectorWithMagnitude::*)( const gp_Vec2d &  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const gp_Vec2d &  ) >(&Geom2d_VectorWithMagnitude::SetVec2d),
             R"#(None)#"  , py::arg("V"))
        .def("SetX",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom2d_VectorWithMagnitude::SetX),
             R"#(Changes the X coordinate of <me>.)#"  , py::arg("X"))
        .def("SetY",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom2d_VectorWithMagnitude::SetY),
             R"#(Changes the Y coordinate of <me>)#"  , py::arg("Y"))
        .def("Magnitude",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)() const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)() const>(&Geom2d_VectorWithMagnitude::Magnitude),
             R"#(Returns the magnitude of <me>.)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)() const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)() const>(&Geom2d_VectorWithMagnitude::SquareMagnitude),
             R"#(Returns the square magnitude of <me>.)#" )
        .def("Add",
             (void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) >(&Geom2d_VectorWithMagnitude::Add),
             R"#(Adds the Vector Other to <me>.)#"  , py::arg("Other"))
        .def("Added",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_VectorWithMagnitude::Added),
             R"#(Adds the vector Other to <me>.)#"  , py::arg("Other"))
        .def("Crossed",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_VectorWithMagnitude::Crossed),
             R"#(Computes the cross product between <me> and Other <me> ^ Other. A new vector is returned.)#"  , py::arg("Other"))
        .def("Divide",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom2d_VectorWithMagnitude::Divide),
             R"#(Divides <me> by a scalar.)#"  , py::arg("Scalar"))
        .def("Divided",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) const>(&Geom2d_VectorWithMagnitude::Divided),
             R"#(Divides <me> by a scalar. A new vector is returned.)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) const>(&Geom2d_VectorWithMagnitude::Multiplied),
             R"#(Computes the product of the vector <me> by a scalar. A new vector is returned.)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom2d_VectorWithMagnitude::Multiply),
             R"#(Computes the product of the vector <me> by a scalar.)#"  , py::arg("Scalar"))
        .def("Normalize",
             (void (Geom2d_VectorWithMagnitude::*)() ) static_cast<void (Geom2d_VectorWithMagnitude::*)() >(&Geom2d_VectorWithMagnitude::Normalize),
             R"#(Normalizes <me>.)#" )
        .def("Normalized",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)() const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)() const>(&Geom2d_VectorWithMagnitude::Normalized),
             R"#(Returns a copy of <me> Normalized.)#" )
        .def("Subtract",
             (void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) >(&Geom2d_VectorWithMagnitude::Subtract),
             R"#(Subtracts the Vector Other to <me>.)#"  , py::arg("Other"))
        .def("Subtracted",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_VectorWithMagnitude::Subtracted),
             R"#(Subtracts the vector Other to <me>. A new vector is returned.)#"  , py::arg("Other"))
        .def("Transform",
             (void (Geom2d_VectorWithMagnitude::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const gp_Trsf2d &  ) >(&Geom2d_VectorWithMagnitude::Transform),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_VectorWithMagnitude::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
        .def("__iadd__",
             (void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) >(&Geom2d_VectorWithMagnitude::operator+=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__add__",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_VectorWithMagnitude::operator+),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__pow__",
             (Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<Standard_Real (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_VectorWithMagnitude::operator^),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__itruediv__",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom2d_VectorWithMagnitude::operator/=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__truediv__",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) const>(&Geom2d_VectorWithMagnitude::operator/),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__imul__",
             (void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom2d_VectorWithMagnitude::operator*=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Scalar"))
        .def("__isub__",
             (void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) ) static_cast<void (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) >(&Geom2d_VectorWithMagnitude::operator-=),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
        .def("__sub__",
             (opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const) static_cast<opencascade::handle<Geom2d_VectorWithMagnitude> (Geom2d_VectorWithMagnitude::*)( const opencascade::handle<Geom2d_Vector> &  ) const>(&Geom2d_VectorWithMagnitude::operator-),
             py::is_operator(),
             R"#(None)#"  , py::arg("Other"))
    // Additional methods
;


    static_cast<py::class_<Geom2d_BSplineCurve ,opencascade::handle<Geom2d_BSplineCurve>  , Geom2d_BoundedCurve >>(m.attr("Geom2d_BSplineCurve"))
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("Knots"),  py::arg("Multiplicities"),  py::arg("Degree"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("Weights"),  py::arg("Knots"),  py::arg("Multiplicities"),  py::arg("Degree"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False) )
    // methods
        .def("IncreaseDegree",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer  ) >(&Geom2d_BSplineCurve::IncreaseDegree),
             R"#(Increases the degree of this BSpline curve to Degree. As a result, the poles, weights and multiplicities tables are modified; the knots table is not changed. Nothing is done if Degree is less than or equal to the current degree. Exceptions Standard_ConstructionError if Degree is greater than Geom2d_BSplineCurve::MaxDegree().)#"  , py::arg("Degree"))
        .def("IncreaseMultiplicity",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Geom2d_BSplineCurve::IncreaseMultiplicity),
             R"#(Increases the multiplicity of the knot <Index> to <M>.)#"  , py::arg("Index"),  py::arg("M"))
        .def("IncreaseMultiplicity",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom2d_BSplineCurve::IncreaseMultiplicity),
             R"#(Increases the multiplicities of the knots in [I1,I2] to <M>.)#"  , py::arg("I1"),  py::arg("I2"),  py::arg("M"))
        .def("IncrementMultiplicity",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom2d_BSplineCurve::IncrementMultiplicity),
             R"#(Increases by M the multiplicity of the knots of indexes I1 to I2 in the knots table of this BSpline curve. For each knot, the resulting multiplicity is limited to the degree of this curve. If M is negative, nothing is done. As a result, the poles and weights tables of this BSpline curve are modified. Warning It is forbidden to modify the multiplicity of the first or last knot of a non-periodic curve. Be careful as Geom2d does not protect against this. Exceptions Standard_OutOfRange if I1 or I2 is outside the bounds of the knots table.)#"  , py::arg("I1"),  py::arg("I2"),  py::arg("M"))
        .def("InsertKnot",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::InsertKnot),
             R"#(Inserts a knot value in the sequence of knots. If <U> is an existing knot the multiplicity is increased by <M>.)#"  , py::arg("U"),  py::arg("M")=static_cast<const Standard_Integer>(1),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0))
        .def("InsertKnots",
             (void (Geom2d_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Geom2d_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Geom2d_BSplineCurve::InsertKnots),
             R"#(Inserts the values of the array Knots, with the respective multiplicities given by the array Mults, into the knots table of this BSpline curve. If a value of the array Knots is an existing knot, its multiplicity is: - increased by M, if Add is true, or - increased to M, if Add is false (default value). The tolerance criterion used for knot equality is the larger of the values ParametricTolerance (defaulted to 0.) and Standard_Real::Epsilon(U), where U is the current knot value. Warning - For a value of the array Knots which is less than the first parameter or greater than the last parameter of this BSpline curve, nothing is done. - For a value of the array Mults which is negative or null, nothing is done. - The multiplicity of a knot is limited to the degree of this BSpline curve.)#"  , py::arg("Knots"),  py::arg("Mults"),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RemoveKnot",
             (Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::RemoveKnot),
             R"#(Reduces the multiplicity of the knot of index Index to M. If M is equal to 0, the knot is removed. With a modification of this type, the array of poles is also modified. Two different algorithms are systematically used to compute the new poles of the curve. If, for each pole, the distance between the pole calculated using the first algorithm and the same pole calculated using the second algorithm, is less than Tolerance, this ensures that the curve is not modified by more than Tolerance. Under these conditions, true is returned; otherwise, false is returned. A low tolerance is used to prevent modification of the curve. A high tolerance is used to "smooth" the curve. Exceptions Standard_OutOfRange if Index is outside the bounds of the knots table.)#"  , py::arg("Index"),  py::arg("M"),  py::arg("Tolerance"))
        .def("InsertPoleAfter",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::InsertPoleAfter),
             R"#(The new pole is inserted after the pole of range Index. If the curve was non rational it can become rational.)#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight")=static_cast<const Standard_Real>(1.0))
        .def("InsertPoleBefore",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::InsertPoleBefore),
             R"#(The new pole is inserted before the pole of range Index. If the curve was non rational it can become rational.)#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight")=static_cast<const Standard_Real>(1.0))
        .def("RemovePole",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer  ) >(&Geom2d_BSplineCurve::RemovePole),
             R"#(Removes the pole of range Index If the curve was rational it can become non rational.)#"  , py::arg("Index"))
        .def("Reverse",
             (void (Geom2d_BSplineCurve::*)() ) static_cast<void (Geom2d_BSplineCurve::*)() >(&Geom2d_BSplineCurve::Reverse),
             R"#(Reverses the orientation of this BSpline curve. As a result - the knots and poles tables are modified; - the start point of the initial curve becomes the end point of the reversed curve; - the end point of the initial curve becomes the start point of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Real  ) const>(&Geom2d_BSplineCurve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this BSpline curve. The returned value is: UFirst + ULast - U, where UFirst and ULast are the values of the first and last parameters of this BSpline curve.)#"  , py::arg("U"))
        .def("Segment",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::Segment),
             R"#(Modifies this BSpline curve by segmenting it between U1 and U2. Either of these values can be outside the bounds of the curve, but U2 must be greater than U1. All data structure tables of this BSpline curve are modified, but the knots located between U1 and U2 are retained. The degree of the curve is not modified. Warnings : Even if <me> is not closed it can become closed after the segmentation for example if U1 or U2 are out of the bounds of the curve <me> or if the curve makes loop. After the segmentation the length of a curve can be null. - The segmentation of a periodic curve over an interval corresponding to its period generates a non-periodic curve with equivalent geometry. Exceptions Standard_DomainError if U2 is less than U1. raises if U2 < U1. Standard_DomainError if U2 - U1 exceeds the period for periodic curves. i.e. ((U2 - U1) - Period) > Precision::PConfusion().)#"  , py::arg("U1"),  py::arg("U2"))
        .def("SetKnot",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::SetKnot),
             R"#(Modifies this BSpline curve by assigning the value K to the knot of index Index in the knots table. This is a relatively local modification because K must be such that: Knots(Index - 1) < K < Knots(Index + 1) Exceptions Standard_ConstructionError if: - K is not such that: Knots(Index - 1) < K < Knots(Index + 1) - M is greater than the degree of this BSpline curve or lower than the previous multiplicity of knot of index Index in the knots table. Standard_OutOfRange if Index is outside the bounds of the knots table.)#"  , py::arg("Index"),  py::arg("K"))
        .def("SetKnots",
             (void (Geom2d_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom2d_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> &  ) >(&Geom2d_BSplineCurve::SetKnots),
             R"#(Modifies this BSpline curve by assigning the array K to its knots table. The multiplicity of the knots is not modified. Exceptions Standard_ConstructionError if the values in the array K are not in ascending order. Standard_OutOfRange if the bounds of the array K are not respectively 1 and the number of knots of this BSpline curve.)#"  , py::arg("K"))
        .def("SetKnot",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) >(&Geom2d_BSplineCurve::SetKnot),
             R"#(Modifies this BSpline curve by assigning the value K to the knot of index Index in the knots table. This is a relatively local modification because K must be such that: Knots(Index - 1) < K < Knots(Index + 1) The second syntax allows you also to increase the multiplicity of the knot to M (but it is not possible to decrease the multiplicity of the knot with this function). Exceptions Standard_ConstructionError if: - K is not such that: Knots(Index - 1) < K < Knots(Index + 1) - M is greater than the degree of this BSpline curve or lower than the previous multiplicity of knot of index Index in the knots table. Standard_OutOfRange if Index is outside the bounds of the knots table.)#"  , py::arg("Index"),  py::arg("K"),  py::arg("M"))
        .def("SetPeriodic",
             (void (Geom2d_BSplineCurve::*)() ) static_cast<void (Geom2d_BSplineCurve::*)() >(&Geom2d_BSplineCurve::SetPeriodic),
             R"#(Changes this BSpline curve into a periodic curve. To become periodic, the curve must first be closed. Next, the knot sequence must be periodic. For this, FirstUKnotIndex and LastUKnotIndex are used to compute I1 and I2, the indexes in the knots array of the knots corresponding to the first and last parameters of this BSpline curve. The period is therefore Knot(I2) - Knot(I1). Consequently, the knots and poles tables are modified. Exceptions Standard_ConstructionError if this BSpline curve is not closed.)#" )
        .def("SetOrigin",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer  ) >(&Geom2d_BSplineCurve::SetOrigin),
             R"#(Assigns the knot of index Index in the knots table as the origin of this periodic BSpline curve. As a consequence, the knots and poles tables are modified. Exceptions Standard_NoSuchObject if this curve is not periodic. Standard_DomainError if Index is outside the bounds of the knots table.)#"  , py::arg("Index"))
        .def("SetNotPeriodic",
             (void (Geom2d_BSplineCurve::*)() ) static_cast<void (Geom2d_BSplineCurve::*)() >(&Geom2d_BSplineCurve::SetNotPeriodic),
             R"#(Changes this BSpline curve into a non-periodic curve. If this curve is already non-periodic, it is not modified. Note that the poles and knots tables are modified. Warning If this curve is periodic, as the multiplicity of the first and last knots is not modified, and is not equal to Degree + 1, where Degree is the degree of this BSpline curve, the start and end points of the curve are not its first and last poles.)#" )
        .def("SetPole",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d &  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d &  ) >(&Geom2d_BSplineCurve::SetPole),
             R"#(Modifies this BSpline curve by assigning P to the pole of index Index in the poles table. Exceptions Standard_OutOfRange if Index is outside the bounds of the poles table. Standard_ConstructionError if Weight is negative or null.)#"  , py::arg("Index"),  py::arg("P"))
        .def("SetPole",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::SetPole),
             R"#(Modifies this BSpline curve by assigning P to the pole of index Index in the poles table. The second syntax also allows you to modify the weight of the modified pole, which becomes Weight. In this case, if this BSpline curve is non-rational, it can become rational and vice versa. Exceptions Standard_OutOfRange if Index is outside the bounds of the poles table. Standard_ConstructionError if Weight is negative or null.)#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight"))
        .def("SetWeight",
             (void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom2d_BSplineCurve::SetWeight),
             R"#(Assigns the weight Weight to the pole of index Index of the poles table. If the curve was non rational it can become rational. If the curve was rational it can become non rational. Exceptions Standard_OutOfRange if Index is outside the bounds of the poles table. Standard_ConstructionError if Weight is negative or null.)#"  , py::arg("Index"),  py::arg("Weight"))
        .def("IsCN",
             (Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom2d_BSplineCurve::IsCN),
             R"#(Returns true if the degree of continuity of this BSpline curve is at least N. A BSpline curve is at least GeomAbs_C0. Exceptions Standard_RangeError if N is negative.)#"  , py::arg("N"))
        .def("IsG1",
             (Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Geom2d_BSplineCurve::IsG1),
             R"#(Check if curve has at least G1 continuity in interval [theTf, theTl] Returns true if IsCN(1) or angle betweem "left" and "right" first derivatives at knots with C0 continuity is less then theAngTol only knots in interval [theTf, theTl] is checked)#"  , py::arg("theTf"),  py::arg("theTl"),  py::arg("theAngTol"))
        .def("IsClosed",
             (Standard_Boolean (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::IsClosed),
             R"#(Returns true if the distance between the first point and the last point of the curve is lower or equal to Resolution from package gp. Warnings : The first and the last point can be different from the first pole and the last pole of the curve.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::IsPeriodic),
             R"#(Returns True if the curve is periodic.)#" )
        .def("IsRational",
             (Standard_Boolean (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::IsRational),
             R"#(Returns True if the weights are not identical. The tolerance criterion is Epsilon of the class Real.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_BSplineCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Continuity),
             R"#(Returns the global continuity of the curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, CN : the order of continuity is infinite. For a B-spline curve of degree d if a knot Ui has a multiplicity p the B-spline curve is only Cd-p continuous at Ui. So the global continuity of the curve can't be greater than Cd-p where p is the maximum multiplicity of the interior Knots. In the interior of a knot span the curve is infinitely continuously differentiable.)#" )
        .def("Degree",
             (Standard_Integer (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Degree),
             R"#(Returns the degree of this BSpline curve. In this class the degree of the basis normalized B-spline functions cannot be greater than "MaxDegree" Computation of value and derivatives)#" )
        .def("D0",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_BSplineCurve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_BSplineCurve::D1),
             R"#(Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_BSplineCurve::D2),
             R"#(Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_BSplineCurve::D3),
             R"#(For this BSpline curve, computes - the point P of parameter U, or - the point P and one or more of the following values: - V1, the first derivative vector, - V2, the second derivative vector, - V3, the third derivative vector. Warning On a point where the continuity of the curve is not the one requested, these functions impact the part defined by the parameter with a value greater than U, i.e. the part of the curve to the "right" of the singularity. Raises UndefinedDerivative if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_BSplineCurve::DN),
             R"#(For the point of parameter U of this BSpline curve, computes the vector corresponding to the Nth derivative. Warning On a point where the continuity of the curve is not the one requested, this function impacts the part defined by the parameter with a value greater than U, i.e. the part of the curve to the "right" of the singularity. Raises UndefinedDerivative if the continuity of the curve is not CN. RangeError if N < 1. The following functions computes the point of parameter U and the derivatives at this point on the B-spline curve arc defined between the knot FromK1 and the knot ToK2. U can be out of bounds [Knot (FromK1), Knot (ToK2)] but for the computation we only use the definition of the curve between these two knots. This method is useful to compute local derivative, if the order of continuity of the whole curve is not greater enough. Inside the parametric domain Knot (FromK1), Knot (ToK2) the evaluations are the same as if we consider the whole definition of the curve. Of course the evaluations are different outside this parametric domain.)#"  , py::arg("U"),  py::arg("N"))
        .def("LocalValue",
             (gp_Pnt2d (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Pnt2d (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom2d_BSplineCurve::LocalValue),
             R"#(Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"))
        .def("LocalD0",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d &  ) const>(&Geom2d_BSplineCurve::LocalD0),
             R"#(Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"))
        .def("LocalD1",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_BSplineCurve::LocalD1),
             R"#(Raised if the local continuity of the curve is not C1 between the knot K1 and the knot K2. Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"),  py::arg("V1"))
        .def("LocalD2",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_BSplineCurve::LocalD2),
             R"#(Raised if the local continuity of the curve is not C2 between the knot K1 and the knot K2. Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("LocalD3",
             (void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_BSplineCurve::LocalD3),
             R"#(Raised if the local continuity of the curve is not C3 between the knot K1 and the knot K2. Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("LocalDN",
             (gp_Vec2d (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom2d_BSplineCurve::LocalDN),
             R"#(Raised if the local continuity of the curve is not CN between the knot K1 and the knot K2. Raised if FromK1 = ToK2. Raised if N < 1.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("N"))
        .def("EndPoint",
             (gp_Pnt2d (Geom2d_BSplineCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::EndPoint),
             R"#(Returns the last point of the curve. Warnings : The last point of the curve is different from the last pole of the curve if the multiplicity of the last knot is lower than Degree.)#" )
        .def("FirstUKnotIndex",
             (Standard_Integer (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::FirstUKnotIndex),
             R"#(For a B-spline curve the first parameter (which gives the start point of the curve) is a knot value but if the multiplicity of the first knot index is lower than Degree + 1 it is not the first knot of the curve. This method computes the index of the knot corresponding to the first parameter.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::FirstParameter),
             R"#(Computes the parametric value of the start point of the curve. It is a knot value.)#" )
        .def("Knot",
             (Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom2d_BSplineCurve::Knot),
             R"#(Returns the knot of range Index. When there is a knot with a multiplicity greater than 1 the knot is not repeated. The method Multiplicity can be used to get the multiplicity of the Knot. Raised if Index < 1 or Index > NbKnots)#"  , py::arg("Index"))
        .def("Knots",
             (void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom2d_BSplineCurve::Knots),
             R"#(returns the knot values of the B-spline curve;)#"  , py::arg("K"))
        .def("Knots",
             (const TColStd_Array1OfReal & (Geom2d_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfReal & (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Knots),
             R"#(returns the knot values of the B-spline curve;)#" )
        .def("KnotSequence",
             (void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom2d_BSplineCurve::KnotSequence),
             R"#(Returns the knots sequence. In this sequence the knots with a multiplicity greater than 1 are repeated. Example : K = {k1, k1, k1, k2, k3, k3, k4, k4, k4})#"  , py::arg("K"))
        .def("KnotSequence",
             (const TColStd_Array1OfReal & (Geom2d_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfReal & (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::KnotSequence),
             R"#(Returns the knots sequence. In this sequence the knots with a multiplicity greater than 1 are repeated. Example : K = {k1, k1, k1, k2, k3, k3, k4, k4, k4})#" )
        .def("KnotDistribution",
             (GeomAbs_BSplKnotDistribution (Geom2d_BSplineCurve::*)() const) static_cast<GeomAbs_BSplKnotDistribution (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::KnotDistribution),
             R"#(Returns NonUniform or Uniform or QuasiUniform or PiecewiseBezier. If all the knots differ by a positive constant from the preceding knot the BSpline Curve can be : - Uniform if all the knots are of multiplicity 1, - QuasiUniform if all the knots are of multiplicity 1 except for the first and last knot which are of multiplicity Degree + 1, - PiecewiseBezier if the first and last knots have multiplicity Degree + 1 and if interior knots have multiplicity Degree A piecewise Bezier with only two knots is a BezierCurve. else the curve is non uniform. The tolerance criterion is Epsilon from class Real.)#" )
        .def("LastUKnotIndex",
             (Standard_Integer (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::LastUKnotIndex),
             R"#(For a BSpline curve the last parameter (which gives the end point of the curve) is a knot value but if the multiplicity of the last knot index is lower than Degree + 1 it is not the last knot of the curve. This method computes the index of the knot corresponding to the last parameter.)#" )
        .def("LastParameter",
             (Standard_Real (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::LastParameter),
             R"#(Computes the parametric value of the end point of the curve. It is a knot value.)#" )
        .def("Multiplicity",
             (Standard_Integer (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom2d_BSplineCurve::Multiplicity),
             R"#(Returns the multiplicity of the knots of range Index. Raised if Index < 1 or Index > NbKnots)#"  , py::arg("Index"))
        .def("Multiplicities",
             (void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Integer> &  ) const>(&Geom2d_BSplineCurve::Multiplicities),
             R"#(Returns the multiplicity of the knots of the curve.)#"  , py::arg("M"))
        .def("Multiplicities",
             (const TColStd_Array1OfInteger & (Geom2d_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfInteger & (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Multiplicities),
             R"#(returns the multiplicity of the knots of the curve.)#" )
        .def("NbKnots",
             (Standard_Integer (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::NbKnots),
             R"#(Returns the number of knots. This method returns the number of knot without repetition of multiple knots.)#" )
        .def("NbPoles",
             (Standard_Integer (Geom2d_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::NbPoles),
             R"#(Returns the number of poles)#" )
        .def("Pole",
             (const gp_Pnt2d & (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt2d & (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom2d_BSplineCurve::Pole),
             R"#(Returns the pole of range Index. Raised if Index < 1 or Index > NbPoles.)#"  , py::arg("Index"))
        .def("Poles",
             (void (Geom2d_BSplineCurve::*)( NCollection_Array1<gp_Pnt2d> &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( NCollection_Array1<gp_Pnt2d> &  ) const>(&Geom2d_BSplineCurve::Poles),
             R"#(Returns the poles of the B-spline curve;)#"  , py::arg("P"))
        .def("Poles",
             (const TColgp_Array1OfPnt2d & (Geom2d_BSplineCurve::*)() const) static_cast<const TColgp_Array1OfPnt2d & (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Poles),
             R"#(Returns the poles of the B-spline curve;)#" )
        .def("StartPoint",
             (gp_Pnt2d (Geom2d_BSplineCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::StartPoint),
             R"#(Returns the start point of the curve. Warnings : This point is different from the first pole of the curve if the multiplicity of the first knot is lower than Degree.)#" )
        .def("Weight",
             (Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom2d_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom2d_BSplineCurve::Weight),
             R"#(Returns the weight of the pole of range Index . Raised if Index < 1 or Index > NbPoles.)#"  , py::arg("Index"))
        .def("Weights",
             (void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom2d_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom2d_BSplineCurve::Weights),
             R"#(Returns the weights of the B-spline curve;)#"  , py::arg("W"))
        .def("Weights",
             (const TColStd_Array1OfReal * (Geom2d_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfReal * (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Weights),
             R"#(Returns the weights of the B-spline curve;)#" )
        .def("Transform",
             (void (Geom2d_BSplineCurve::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_BSplineCurve::*)( const gp_Trsf2d &  ) >(&Geom2d_BSplineCurve::Transform),
             R"#(Applies the transformation T to this BSpline curve.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_BSplineCurve::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::Copy),
             R"#(Creates a new object which is a copy of this BSpline curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_BSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_BSplineCurve::*)() const>(&Geom2d_BSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("PeriodicNormalization",
             []( Geom2d_BSplineCurve &self   ){ Standard_Real  U; self.PeriodicNormalization(U); return std::make_tuple(U); },
             R"#(Computes the parameter normalized within the "first" period of this BSpline curve, if it is periodic: the returned value is in the range Param1 and Param1 + Period, where: - Param1 is the "first parameter", and - Period the period of this BSpline curve. Note: If this curve is not periodic, U is not modified.)#" )
        .def("MovePoint",
             []( Geom2d_BSplineCurve &self , const Standard_Real U,const gp_Pnt2d & P,const Standard_Integer Index1,const Standard_Integer Index2 ){ Standard_Integer  FirstModifiedPole; Standard_Integer  LastModifiedPole; self.MovePoint(U,P,Index1,Index2,FirstModifiedPole,LastModifiedPole); return std::make_tuple(FirstModifiedPole,LastModifiedPole); },
             R"#(Moves the point of parameter U of this BSpline curve to P. Index1 and Index2 are the indexes in the table of poles of this BSpline curve of the first and last poles designated to be moved. FirstModifiedPole and LastModifiedPole are the indexes of the first and last poles, which are effectively modified. In the event of incompatibility between Index1, Index2 and the value U: - no change is made to this BSpline curve, and - the FirstModifiedPole and LastModifiedPole are returned null. Exceptions Standard_OutOfRange if: - Index1 is greater than or equal to Index2, or - Index1 or Index2 is less than 1 or greater than the number of poles of this BSpline curve.)#"  , py::arg("U"),  py::arg("P"),  py::arg("Index1"),  py::arg("Index2"))
        .def("MovePointAndTangent",
             []( Geom2d_BSplineCurve &self , const Standard_Real U,const gp_Pnt2d & P,const gp_Vec2d & Tangent,const Standard_Real Tolerance,const Standard_Integer StartingCondition,const Standard_Integer EndingCondition ){ Standard_Integer  ErrorStatus; self.MovePointAndTangent(U,P,Tangent,Tolerance,StartingCondition,EndingCondition,ErrorStatus); return std::make_tuple(ErrorStatus); },
             R"#(Move a point with parameter U to P. and makes it tangent at U be Tangent. StartingCondition = -1 means first can move EndingCondition = -1 means last point can move StartingCondition = 0 means the first point cannot move EndingCondition = 0 means the last point cannot move StartingCondition = 1 means the first point and tangent cannot move EndingCondition = 1 means the last point and tangent cannot move and so forth ErrorStatus != 0 means that there are not enought degree of freedom with the constrain to deform the curve accordingly)#"  , py::arg("U"),  py::arg("P"),  py::arg("Tangent"),  py::arg("Tolerance"),  py::arg("StartingCondition"),  py::arg("EndingCondition"))
        .def("LocateU",
             []( Geom2d_BSplineCurve &self , const Standard_Real U,const Standard_Real ParametricTolerance,const Standard_Boolean WithKnotRepetition ){ Standard_Integer  I1; Standard_Integer  I2; self.LocateU(U,ParametricTolerance,I1,I2,WithKnotRepetition); return std::make_tuple(I1,I2); },
             R"#(Locates the parametric value U in the sequence of knots. If "WithKnotRepetition" is True we consider the knot's representation with repetition of multiple knot value, otherwise we consider the knot's representation with no repetition of multiple knot values. Knots (I1) <= U <= Knots (I2) . if I1 = I2 U is a knot value (the tolerance criterion ParametricTolerance is used). . if I1 < 1 => U < Knots (1) - Abs(ParametricTolerance) . if I2 > NbKnots => U > Knots (NbKnots) + Abs(ParametricTolerance))#"  , py::arg("U"),  py::arg("ParametricTolerance"),  py::arg("WithKnotRepetition")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Resolution",
             []( Geom2d_BSplineCurve &self , const Standard_Real ToleranceUV ){ Standard_Real  UTolerance; self.Resolution(ToleranceUV,UTolerance); return std::make_tuple(UTolerance); },
             R"#(Computes for this BSpline curve the parametric tolerance UTolerance for a given tolerance Tolerance3D (relative to dimensions in the plane). If f(t) is the equation of this BSpline curve, UTolerance ensures that: | t1 - t0| < Utolerance ===> |f(t1) - f(t0)| < ToleranceUV)#"  , py::arg("ToleranceUV"))
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Geom2d_BSplineCurve::MaxDegree),
                    R"#(Returns the value of the maximum degree of the normalized B-spline basis functions in this package.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_BSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_BSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_BezierCurve ,opencascade::handle<Geom2d_BezierCurve>  , Geom2d_BoundedCurve >>(m.attr("Geom2d_BezierCurve"))
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> & >()  , py::arg("CurvePoles") )
        .def(py::init<  const NCollection_Array1<gp_Pnt2d> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("CurvePoles"),  py::arg("PoleWeights") )
    // methods
        .def("Increase",
             (void (Geom2d_BezierCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Integer  ) >(&Geom2d_BezierCurve::Increase),
             R"#(Increases the degree of a bezier curve. Degree is the new degree of <me>. raises ConstructionError if Degree is greater than MaxDegree or lower than 2 or lower than the initial degree of <me>.)#"  , py::arg("Degree"))
        .def("InsertPoleAfter",
             (void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_BezierCurve::InsertPoleAfter),
             R"#(Inserts a pole with its weight in the set of poles after the pole of range Index. If the curve was non rational it can become rational if all the weights are not identical. Raised if Index is not in the range [0, NbPoles])#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight")=static_cast<const Standard_Real>(1.0))
        .def("InsertPoleBefore",
             (void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_BezierCurve::InsertPoleBefore),
             R"#(Inserts a pole with its weight in the set of poles after the pole of range Index. If the curve was non rational it can become rational if all the weights are not identical. Raised if Index is not in the range [1, NbPoles+1])#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight")=static_cast<const Standard_Real>(1.0))
        .def("RemovePole",
             (void (Geom2d_BezierCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Integer  ) >(&Geom2d_BezierCurve::RemovePole),
             R"#(Removes the pole of range Index. If the curve was rational it can become non rational. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"))
        .def("Reverse",
             (void (Geom2d_BezierCurve::*)() ) static_cast<void (Geom2d_BezierCurve::*)() >(&Geom2d_BezierCurve::Reverse),
             R"#(Reverses the direction of parametrization of <me> Value (NewU) = Value (1 - OldU))#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_BezierCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_BezierCurve::*)( const Standard_Real  ) const>(&Geom2d_BezierCurve::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Segment",
             (void (Geom2d_BezierCurve::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real ,  const Standard_Real  ) >(&Geom2d_BezierCurve::Segment),
             R"#(Segments the curve between U1 and U2 which can be out of the bounds of the curve. The curve is oriented from U1 to U2. The control points are modified, the first and the last point are not the same but the parametrization range is [0, 1] else it could not be a Bezier curve. Warnings : Even if <me> is not closed it can become closed after the segmentation for example if U1 or U2 are out of the bounds of the curve <me> or if the curve makes loop. After the segmentation the length of a curve can be null.)#"  , py::arg("U1"),  py::arg("U2"))
        .def("SetPole",
             (void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d &  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d &  ) >(&Geom2d_BezierCurve::SetPole),
             R"#(Substitutes the pole of range index with P. If the curve <me> is rational the weight of range Index is not modified. raiseD if Index is not in the range [1, NbPoles])#"  , py::arg("Index"),  py::arg("P"))
        .def("SetPole",
             (void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2d_BezierCurve::SetPole),
             R"#(Substitutes the pole and the weights of range Index. If the curve <me> is not rational it can become rational if all the weights are not identical. If the curve was rational it can become non rational if all the weights are identical. Raised if Index is not in the range [1, NbPoles] Raised if Weight <= Resolution from package gp)#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight"))
        .def("SetWeight",
             (void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom2d_BezierCurve::SetWeight),
             R"#(Changes the weight of the pole of range Index. If the curve <me> is not rational it can become rational if all the weights are not identical. If the curve was rational it can become non rational if all the weights are identical. Raised if Index is not in the range [1, NbPoles] Raised if Weight <= Resolution from package gp)#"  , py::arg("Index"),  py::arg("Weight"))
        .def("IsClosed",
             (Standard_Boolean (Geom2d_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::IsClosed),
             R"#(Returns True if the distance between the first point and the last point of the curve is lower or equal to the Resolution from package gp.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_BezierCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2d_BezierCurve::*)( const Standard_Integer  ) const>(&Geom2d_BezierCurve::IsCN),
             R"#(Continuity of the curve, returns True.)#"  , py::arg("N"))
        .def("IsPeriodic",
             (Standard_Boolean (Geom2d_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::IsPeriodic),
             R"#(Returns False. A BezierCurve cannot be periodic in this package)#" )
        .def("IsRational",
             (Standard_Boolean (Geom2d_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::IsRational),
             R"#(Returns false if all the weights are identical. The tolerance criterion is Resolution from package gp.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_BezierCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Continuity),
             R"#(Returns GeomAbs_CN, which is the continuity of any Bezier curve.)#" )
        .def("Degree",
             (Standard_Integer (Geom2d_BezierCurve::*)() const) static_cast<Standard_Integer (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Degree),
             R"#(Returns the polynomial degree of the curve. It is the number of poles less one. In this package the Degree of a Bezier curve cannot be greater than "MaxDegree".)#" )
        .def("D0",
             (void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_BezierCurve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_BezierCurve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_BezierCurve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_BezierCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_BezierCurve::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_BezierCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_BezierCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_BezierCurve::DN),
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
        .def("NbPoles",
             (Standard_Integer (Geom2d_BezierCurve::*)() const) static_cast<Standard_Integer (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::NbPoles),
             R"#(Returns the number of poles for this Bezier curve.)#" )
        .def("Pole",
             (const gp_Pnt2d & (Geom2d_BezierCurve::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt2d & (Geom2d_BezierCurve::*)( const Standard_Integer  ) const>(&Geom2d_BezierCurve::Pole),
             R"#(Returns the pole of range Index. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"))
        .def("Poles",
             (void (Geom2d_BezierCurve::*)( NCollection_Array1<gp_Pnt2d> &  ) const) static_cast<void (Geom2d_BezierCurve::*)( NCollection_Array1<gp_Pnt2d> &  ) const>(&Geom2d_BezierCurve::Poles),
             R"#(Returns all the poles of the curve.)#"  , py::arg("P"))
        .def("Poles",
             (const TColgp_Array1OfPnt2d & (Geom2d_BezierCurve::*)() const) static_cast<const TColgp_Array1OfPnt2d & (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Poles),
             R"#(Returns all the poles of the curve.)#" )
        .def("StartPoint",
             (gp_Pnt2d (Geom2d_BezierCurve::*)() const) static_cast<gp_Pnt2d (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::StartPoint),
             R"#(Returns Value (U=1), it is the first control point of the curve.)#" )
        .def("Weight",
             (Standard_Real (Geom2d_BezierCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom2d_BezierCurve::*)( const Standard_Integer  ) const>(&Geom2d_BezierCurve::Weight),
             R"#(Returns the weight of range Index. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"))
        .def("Weights",
             (void (Geom2d_BezierCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom2d_BezierCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom2d_BezierCurve::Weights),
             R"#(Returns all the weights of the curve.)#"  , py::arg("W"))
        .def("Weights",
             (const TColStd_Array1OfReal * (Geom2d_BezierCurve::*)() const) static_cast<const TColStd_Array1OfReal * (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Weights),
             R"#(Returns all the weights of the curve.)#" )
        .def("Transform",
             (void (Geom2d_BezierCurve::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_BezierCurve::*)( const gp_Trsf2d &  ) >(&Geom2d_BezierCurve::Transform),
             R"#(Applies the transformation T to this Bezier curve.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom2d_Geometry> (Geom2d_BezierCurve::*)() const) static_cast<opencascade::handle<Geom2d_Geometry> (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::Copy),
             R"#(Creates a new object which is a copy of this Bezier curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom2d_BezierCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom2d_BezierCurve::*)() const>(&Geom2d_BezierCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Resolution",
             []( Geom2d_BezierCurve &self , const Standard_Real ToleranceUV ){ Standard_Real  UTolerance; self.Resolution(ToleranceUV,UTolerance); return std::make_tuple(UTolerance); },
             R"#(Computes for this Bezier curve the parametric tolerance UTolerance for a given tolerance Tolerance3D (relative to dimensions in the plane). If f(t) is the equation of this Bezier curve, UTolerance ensures that | t1 - t0| < Utolerance ===> |f(t1) - f(t0)| < ToleranceUV)#"  , py::arg("ToleranceUV"))
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Geom2d_BezierCurve::MaxDegree),
                    R"#(Returns the value of the maximum polynomial degree of a BezierCurve. This value is 25.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom2d_BezierCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_BezierCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Circle ,opencascade::handle<Geom2d_Circle>  , Geom2d_Conic >>(m.attr("Geom2d_Circle"))
        .def(py::init< const gp_Circ2d & >()  , py::arg("C") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("A"),  py::arg("Radius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("A"),  py::arg("Radius") )
    // methods
        .def("SetCirc2d",
             (void (Geom2d_Circle::*)( const gp_Circ2d &  ) ) static_cast<void (Geom2d_Circle::*)( const gp_Circ2d &  ) >(&Geom2d_Circle::SetCirc2d),
             R"#(Converts the gp_Circ2d circle C into this circle.)#"  , py::arg("C"))
        .def("SetRadius",
             (void (Geom2d_Circle::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Circle::*)( const Standard_Real  ) >(&Geom2d_Circle::SetRadius),
             R"#(None)#"  , py::arg("R"))
        .def("Circ2d",
             (gp_Circ2d (Geom2d_Circle::*)() const) static_cast<gp_Circ2d (Geom2d_Circle::*)() const>(&Geom2d_Circle::Circ2d),
             R"#(Returns the non persistent circle from gp with the same geometric properties as <me>.)#" )
        .def("Radius",
             (Standard_Real (Geom2d_Circle::*)() const) static_cast<Standard_Real (Geom2d_Circle::*)() const>(&Geom2d_Circle::Radius),
             R"#(Returns the radius of this circle.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Circle::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_Circle::*)( const Standard_Real  ) const>(&Geom2d_Circle::ReversedParameter),
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
             (void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_Circle::D0),
             R"#(Returns in P the point of parameter U. P = C + R * Cos (U) * XDir + R * Sin (U) * YDir where C is the center of the circle , XDir the XDirection and YDir the YDirection of the circle's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_Circle::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Circle::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Circle::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Circle::D3),
             R"#(Returns the point P of parameter u, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Circle::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_Circle::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_Circle::DN),
             R"#(For the point of parameter U of this circle, computes the vector corresponding to the Nth derivative. Exceptions: Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Circle::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Circle::*)( const gp_Trsf2d &  ) >(&Geom2d_Circle::Transform),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Circle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Ellipse ,opencascade::handle<Geom2d_Ellipse>  , Geom2d_Conic >>(m.attr("Geom2d_Ellipse"))
        .def(py::init< const gp_Elips2d & >()  , py::arg("E") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("Axis"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // methods
        .def("SetElips2d",
             (void (Geom2d_Ellipse::*)( const gp_Elips2d &  ) ) static_cast<void (Geom2d_Ellipse::*)( const gp_Elips2d &  ) >(&Geom2d_Ellipse::SetElips2d),
             R"#(Converts the gp_Elips2d ellipse E into this ellipse.)#"  , py::arg("E"))
        .def("SetMajorRadius",
             (void (Geom2d_Ellipse::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real  ) >(&Geom2d_Ellipse::SetMajorRadius),
             R"#(Assigns a value to the major radius of this ellipse. Exceptions Standard_ConstructionError if: - the major radius of this ellipse becomes less than the minor radius, or - MinorRadius is less than 0.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (Geom2d_Ellipse::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real  ) >(&Geom2d_Ellipse::SetMinorRadius),
             R"#(Assigns a value to the minor radius of this ellipse. Exceptions Standard_ConstructionError if: - the major radius of this ellipse becomes less than the minor radius, or - MinorRadius is less than 0.)#"  , py::arg("MinorRadius"))
        .def("Elips2d",
             (gp_Elips2d (Geom2d_Ellipse::*)() const) static_cast<gp_Elips2d (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Elips2d),
             R"#(Converts this ellipse into a gp_Elips2d ellipse.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Ellipse::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_Ellipse::*)( const Standard_Real  ) const>(&Geom2d_Ellipse::ReversedParameter),
             R"#(Computes the parameter on the reversed ellipse for the point of parameter U on this ellipse. For an ellipse, the returned value is: 2.*Pi - U.)#"  , py::arg("U"))
        .def("Directrix1",
             (gp_Ax2d (Geom2d_Ellipse::*)() const) static_cast<gp_Ax2d (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Directrix1),
             R"#(Computes the directrices of this ellipse. This directrix is the line normal to the XAxis of the ellipse in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the ellipse, where e is the eccentricity of the ellipse. This line is parallel to the "YAxis". The intersection point between directrix1 and the "XAxis" is the "Location" point of the directrix1. This point is on the positive side of the "XAxis". Raises ConstructionError if Eccentricity = 0.0. (The ellipse degenerates into a circle))#" )
        .def("Directrix2",
             (gp_Ax2d (Geom2d_Ellipse::*)() const) static_cast<gp_Ax2d (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the ellipse. Raises ConstructionError if Eccentricity = 0.0. (The ellipse degenerates into a circle).)#" )
        .def("Eccentricity",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Eccentricity),
             R"#(Returns the eccentricity of the ellipse between 0.0 and 1.0 If f is the distance between the center of the ellipse and the Focus1 then the eccentricity e = f / MajorRadius. Returns 0 if MajorRadius = 0)#" )
        .def("Focal",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Focal),
             R"#(Computes the focal distance. The focal distance is the distance between the center and a focus of the ellipse.)#" )
        .def("Focus1",
             (gp_Pnt2d (Geom2d_Ellipse::*)() const) static_cast<gp_Pnt2d (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Focus1),
             R"#(Returns the first focus of the ellipse. This focus is on the positive side of the "XAxis" of the ellipse.)#" )
        .def("Focus2",
             (gp_Pnt2d (Geom2d_Ellipse::*)() const) static_cast<gp_Pnt2d (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Focus2),
             R"#(Returns the second focus of the ellipse. This focus is on the negative side of the "XAxis" of the ellipse.)#" )
        .def("MajorRadius",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::MajorRadius),
             R"#(Returns the major radius of this ellipse.)#" )
        .def("MinorRadius",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::MinorRadius),
             R"#(Returns the minor radius of this ellipse.)#" )
        .def("Parameter",
             (Standard_Real (Geom2d_Ellipse::*)() const) static_cast<Standard_Real (Geom2d_Ellipse::*)() const>(&Geom2d_Ellipse::Parameter),
             R"#(Computes the parameter of this ellipse. This value is given by the formula p = (1 - e * e) * MajorRadius where e is the eccentricity of the ellipse. Returns 0 if MajorRadius = 0)#" )
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
             (void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_Ellipse::D0),
             R"#(Returns in P the point of parameter U. P = C + MajorRadius * Cos (U) * XDir + MinorRadius * Sin (U) * YDir where C is the center of the ellipse , XDir the direction of the "XAxis" and "YDir" the "YAxis" of the ellipse.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_Ellipse::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Ellipse::D2),
             R"#(Returns the point P of parameter U. The vectors V1 and V2 are the first and second derivatives at this point.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Ellipse::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Ellipse::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Ellipse::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_Ellipse::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_Ellipse::DN),
             R"#(For the point of parameter U of this ellipse, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Ellipse::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Ellipse::*)( const gp_Trsf2d &  ) >(&Geom2d_Ellipse::Transform),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Ellipse::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Hyperbola ,opencascade::handle<Geom2d_Hyperbola>  , Geom2d_Conic >>(m.attr("Geom2d_Hyperbola"))
        .def(py::init< const gp_Hypr2d & >()  , py::arg("H") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("MajorAxis"),  py::arg("MajorRadius"),  py::arg("MinorRadius"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real,const Standard_Real >()  , py::arg("Axis"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // methods
        .def("SetHypr2d",
             (void (Geom2d_Hyperbola::*)( const gp_Hypr2d &  ) ) static_cast<void (Geom2d_Hyperbola::*)( const gp_Hypr2d &  ) >(&Geom2d_Hyperbola::SetHypr2d),
             R"#(Converts the gp_Hypr2d hyperbola H into this hyperbola.)#"  , py::arg("H"))
        .def("SetMajorRadius",
             (void (Geom2d_Hyperbola::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real  ) >(&Geom2d_Hyperbola::SetMajorRadius),
             R"#(Assigns a value to the major or minor radius of this hyperbola. Exceptions Standard_ConstructionError if: - MajorRadius is less than 0.0, - MinorRadius is less than 0.0.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (Geom2d_Hyperbola::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real  ) >(&Geom2d_Hyperbola::SetMinorRadius),
             R"#(Assigns a value to the major or minor radius of this hyperbola. Exceptions Standard_ConstructionError if: - MajorRadius is less than 0.0, - MinorRadius is less than 0.0.)#"  , py::arg("MinorRadius"))
        .def("Hypr2d",
             (gp_Hypr2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Hypr2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Hypr2d),
             R"#(Converts this hyperbola into a gp_Hypr2d one.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Hyperbola::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_Hyperbola::*)( const Standard_Real  ) const>(&Geom2d_Hyperbola::ReversedParameter),
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
        .def("Asymptote1",
             (gp_Ax2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Ax2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Asymptote1),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = (B/A)*X where A is the major radius of the hyperbola and B is the minor radius of the hyperbola. Raised if MajorRadius = 0.0)#" )
        .def("Asymptote2",
             (gp_Ax2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Ax2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Asymptote2),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = -(B/A)*X. where A is the major radius of the hyperbola and B is the minor radius of the hyperbola. raised if MajorRadius = 0.0)#" )
        .def("ConjugateBranch1",
             (gp_Hypr2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Hypr2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::ConjugateBranch1),
             R"#(Computes the first conjugate branch relative to this hyperbola. Note: The diagram given under the class purpose indicates where these two branches of hyperbola are positioned in relation to this branch of hyperbola.)#" )
        .def("ConjugateBranch2",
             (gp_Hypr2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Hypr2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::ConjugateBranch2),
             R"#(Computes the second conjugate branch relative to this hyperbola. Note: The diagram given under the class purpose indicates where these two branches of hyperbola are positioned in relation to this branch of hyperbola.)#" )
        .def("Directrix1",
             (gp_Ax2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Ax2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Directrix1),
             R"#(This directrix is the line normal to the XAxis of the hyperbola in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the hyperbola, where e is the eccentricity of the hyperbola. This line is parallel to the "YAxis". The intersection point between directrix1 and the "XAxis" is the location point of the directrix1. This point is on the positive side of the "XAxis".)#" )
        .def("Directrix2",
             (gp_Ax2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Ax2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the hyperbola.)#" )
        .def("Eccentricity",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Eccentricity),
             R"#(Returns the excentricity of the hyperbola (e > 1). If f is the distance between the location of the hyperbola and the Focus1 then the eccentricity e = f / MajorRadius. raised if MajorRadius = 0.0)#" )
        .def("Focal",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Focal),
             R"#(Computes the focal distance. It is the distance between the two focus of the hyperbola.)#" )
        .def("Focus1",
             (gp_Pnt2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Pnt2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Focus1),
             R"#(Returns the first focus of the hyperbola. This focus is on the positive side of the "XAxis" of the hyperbola.)#" )
        .def("Focus2",
             (gp_Pnt2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Pnt2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Focus2),
             R"#(Returns the second focus of the hyperbola. This focus is on the negative side of the "XAxis" of the hyperbola.)#" )
        .def("MajorRadius",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::MajorRadius),
             R"#(Returns the major or minor radius of this hyperbola. The major radius is also the distance between the center of the hyperbola and the apex of the main branch (located on the "X Axis" of the hyperbola).)#" )
        .def("MinorRadius",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::MinorRadius),
             R"#(Returns the major or minor radius of this hyperbola. The minor radius is also the distance between the center of the hyperbola and the apex of a conjugate branch (located on the "Y Axis" of the hyperbola).)#" )
        .def("OtherBranch",
             (gp_Hypr2d (Geom2d_Hyperbola::*)() const) static_cast<gp_Hypr2d (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::OtherBranch),
             R"#(Computes the "other" branch of this hyperbola. This is a symmetrical branch with respect to the center of this hyperbola. Note: The diagram given under the class purpose indicates where the "other" branch is positioned in relation to this branch of the hyperbola. ^ YAxis | FirstConjugateBranch | Other | Main ---------------------------- C ------------------------------------------&gtXAxis Branch | Branch | | SecondConjugateBranch | Warning The major radius can be less than the minor radius.)#" )
        .def("Parameter",
             (Standard_Real (Geom2d_Hyperbola::*)() const) static_cast<Standard_Real (Geom2d_Hyperbola::*)() const>(&Geom2d_Hyperbola::Parameter),
             R"#(Computes the parameter of this hyperbola. The parameter is: p = (e*e - 1) * MajorRadius where e is the eccentricity of this hyperbola and MajorRadius its major radius. Exceptions Standard_DomainError if the major radius of this hyperbola is null.)#" )
        .def("D0",
             (void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_Hyperbola::D0),
             R"#(Returns in P the point of parameter U. P = C + MajorRadius * Cosh (U) * XDir + MinorRadius * Sinh (U) * YDir where C is the center of the hyperbola , XDir the XDirection and YDir the YDirection of the hyperbola's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_Hyperbola::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Hyperbola::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Hyperbola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Hyperbola::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Hyperbola::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_Hyperbola::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_Hyperbola::DN),
             R"#(For the point of parameter U of this hyperbola, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Hyperbola::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Hyperbola::*)( const gp_Trsf2d &  ) >(&Geom2d_Hyperbola::Transform),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Hyperbola::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_Parabola ,opencascade::handle<Geom2d_Parabola>  , Geom2d_Conic >>(m.attr("Geom2d_Parabola"))
        .def(py::init< const gp_Parab2d & >()  , py::arg("Prb") )
        .def(py::init< const gp_Ax2d &,const Standard_Real,const Standard_Boolean >()  , py::arg("MirrorAxis"),  py::arg("Focal"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Ax22d &,const Standard_Real >()  , py::arg("Axis"),  py::arg("Focal") )
        .def(py::init< const gp_Ax2d &,const gp_Pnt2d & >()  , py::arg("D"),  py::arg("F") )
    // methods
        .def("SetFocal",
             (void (Geom2d_Parabola::*)( const Standard_Real  ) ) static_cast<void (Geom2d_Parabola::*)( const Standard_Real  ) >(&Geom2d_Parabola::SetFocal),
             R"#(Assigns the value Focal to the focal length of this parabola. Exceptions Standard_ConstructionError if Focal is negative.)#"  , py::arg("Focal"))
        .def("SetParab2d",
             (void (Geom2d_Parabola::*)( const gp_Parab2d &  ) ) static_cast<void (Geom2d_Parabola::*)( const gp_Parab2d &  ) >(&Geom2d_Parabola::SetParab2d),
             R"#(Converts the gp_Parab2d parabola Prb into this parabola.)#"  , py::arg("Prb"))
        .def("Parab2d",
             (gp_Parab2d (Geom2d_Parabola::*)() const) static_cast<gp_Parab2d (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Parab2d),
             R"#(Returns the non persistent parabola from gp with the same geometric properties as <me>.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_Parabola::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_Parabola::*)( const Standard_Real  ) const>(&Geom2d_Parabola::ReversedParameter),
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
        .def("Directrix",
             (gp_Ax2d (Geom2d_Parabola::*)() const) static_cast<gp_Ax2d (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Directrix),
             R"#(The directrix is parallel to the "YAxis" of the parabola. The "Location" point of the directrix is the intersection point between the directrix and the symmetry axis ("XAxis") of the parabola.)#" )
        .def("Eccentricity",
             (Standard_Real (Geom2d_Parabola::*)() const) static_cast<Standard_Real (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Eccentricity),
             R"#(Returns the eccentricity e = 1.0)#" )
        .def("Focus",
             (gp_Pnt2d (Geom2d_Parabola::*)() const) static_cast<gp_Pnt2d (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Focus),
             R"#(Computes the focus of this parabola The focus is on the positive side of the "X Axis" of the local coordinate system of the parabola.)#" )
        .def("Focal",
             (Standard_Real (Geom2d_Parabola::*)() const) static_cast<Standard_Real (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Focal),
             R"#(Computes the focal length of this parabola. The focal length is the distance between the apex and the focus of the parabola.)#" )
        .def("Parameter",
             (Standard_Real (Geom2d_Parabola::*)() const) static_cast<Standard_Real (Geom2d_Parabola::*)() const>(&Geom2d_Parabola::Parameter),
             R"#(Computes the parameter of this parabola, which is the distance between its focus and its directrix. This distance is twice the focal length. If P is the parameter of the parabola, the equation of the parabola in its local coordinate system is: Y**2 = 2.*P*X.)#" )
        .def("D0",
             (void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_Parabola::D0),
             R"#(Returns in P the point of parameter U. If U = 0 the returned point is the origin of the XAxis and the YAxis of the parabola and it is the vertex of the parabola. P = S + F * (U * U * XDir + * U * YDir) where S is the vertex of the parabola, XDir the XDirection and YDir the YDirection of the parabola's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_Parabola::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Parabola::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_Parabola::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_Parabola::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_Parabola::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_Parabola::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_Parabola::DN),
             R"#(For the point of parameter U of this parabola, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_Parabola::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_Parabola::*)( const gp_Trsf2d &  ) >(&Geom2d_Parabola::Transform),
             R"#(Applies the transformation T to this parabola.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_Parabola::*)( const Standard_Real ,  const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_Parabola::*)( const Standard_Real ,  const gp_Trsf2d &  ) const>(&Geom2d_Parabola::TransformedParameter),
             R"#(Computes the parameter on the transformed parabola, for the point of parameter U on this parabola. For a parabola, the returned value is equal to U multiplied by the scale factor of transformation T.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_Parabola::*)( const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_Parabola::*)( const gp_Trsf2d &  ) const>(&Geom2d_Parabola::ParametricTransformation),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_Parabola::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<Geom2d_TrimmedCurve ,opencascade::handle<Geom2d_TrimmedCurve>  , Geom2d_BoundedCurve >>(m.attr("Geom2d_TrimmedCurve"))
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theAdjustPeriodic")=static_cast<const Standard_Boolean>(Standard_True) )
    // methods
        .def("Reverse",
             (void (Geom2d_TrimmedCurve::*)() ) static_cast<void (Geom2d_TrimmedCurve::*)() >(&Geom2d_TrimmedCurve::Reverse),
             R"#(Changes the direction of parametrization of <me>. The first and the last parametric values are modified. The "StartPoint" of the initial curve becomes the "EndPoint" of the reversed curve and the "EndPoint" of the initial curve becomes the "StartPoint" of the reversed curve. Example - If the trimmed curve is defined by: - a basis curve whose parameter range is [ 0.,1. ], and - the two trim values U1 (first parameter) and U2 (last parameter), the reversed trimmed curve is defined by: - the reversed basis curve, whose parameter range is still [ 0.,1. ], and - the two trim values 1. - U2 (first parameter) and 1. - U1 (last parameter).)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real  ) const>(&Geom2d_TrimmedCurve::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("SetTrim",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Geom2d_TrimmedCurve::SetTrim),
             R"#(Changes this trimmed curve, by redefining the parameter values U1 and U2, which limit its basis curve. Note: If the basis curve is periodic, the trimmed curve has the same orientation as the basis curve if Sense is true (default value) or the opposite orientation if Sense is false. Warning If the basis curve is periodic and theAdjustPeriodic is True, the bounds of the trimmed curve may be different from U1 and U2 if the parametric origin of the basis curve is within the arc of the trimmed curve. In this case, the modified parameter will be equal to U1 or U2 plus or minus the period. If theAdjustPeriodic is False, parameters U1 and U2 will stay unchanged. Exceptions Standard_ConstructionError if: - the basis curve is not periodic, and either U1 or U2 are outside the bounds of the basis curve, or - U1 is equal to U2.)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theAdjustPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("BasisCurve",
             (opencascade::handle<Geom2d_Curve> (Geom2d_TrimmedCurve::*)() const) static_cast<opencascade::handle<Geom2d_Curve> (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::BasisCurve),
             R"#(Returns the basis curve. Warning This function does not return a constant reference. Consequently, any modification of the returned value directly modifies the trimmed curve.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom2d_TrimmedCurve::*)() const) static_cast<GeomAbs_Shape (Geom2d_TrimmedCurve::*)() const>(&Geom2d_TrimmedCurve::Continuity),
             R"#(Returns the global continuity of the basis curve of this trimmed curve. C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, CN : the order of continuity is infinite.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom2d_TrimmedCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2d_TrimmedCurve::*)( const Standard_Integer  ) const>(&Geom2d_TrimmedCurve::IsCN),
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
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d &  ) const>(&Geom2d_TrimmedCurve::D0),
             R"#(If the basis curve is an OffsetCurve sometimes it is not possible to do the evaluation of the curve at the parameter U (see class OffsetCurve).)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d &  ) const>(&Geom2d_TrimmedCurve::D1),
             R"#(Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_TrimmedCurve::D2),
             R"#(Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const) static_cast<void (Geom2d_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt2d & ,  gp_Vec2d & ,  gp_Vec2d & ,  gp_Vec2d &  ) const>(&Geom2d_TrimmedCurve::D3),
             R"#(Raised if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec2d (Geom2d_TrimmedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec2d (Geom2d_TrimmedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom2d_TrimmedCurve::DN),
             R"#(For the point of parameter U of this trimmed curve, computes the vector corresponding to the Nth derivative. Warning The returned derivative vector has the same orientation as the derivative vector of the basis curve, even if the trimmed curve does not have the same orientation as the basis curve. Exceptions Standard_RangeError if N is less than 1. geometric transformations)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom2d_TrimmedCurve::*)( const gp_Trsf2d &  ) ) static_cast<void (Geom2d_TrimmedCurve::*)( const gp_Trsf2d &  ) >(&Geom2d_TrimmedCurve::Transform),
             R"#(Applies the transformation T to this trimmed curve. Warning The basis curve is also modified.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real ,  const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)( const Standard_Real ,  const gp_Trsf2d &  ) const>(&Geom2d_TrimmedCurve::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom2d_TrimmedCurve::*)( const gp_Trsf2d &  ) const) static_cast<Standard_Real (Geom2d_TrimmedCurve::*)( const gp_Trsf2d &  ) const>(&Geom2d_TrimmedCurve::ParametricTransformation),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom2d_TrimmedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/Geom2d_BoundedCurve.hxx
// ./opencascade/Geom2d_TrimmedCurve.hxx
// ./opencascade/Geom2d_Line.hxx
// ./opencascade/Geom2d_VectorWithMagnitude.hxx
// ./opencascade/Geom2d_Point.hxx
// ./opencascade/Geom2d_Vector.hxx
// ./opencascade/Geom2d_UndefinedValue.hxx
// ./opencascade/Geom2d_BSplineCurve.hxx
// ./opencascade/Geom2d_Ellipse.hxx
// ./opencascade/Geom2d_OffsetCurve.hxx
// ./opencascade/Geom2d_Circle.hxx
// ./opencascade/Geom2d_UndefinedDerivative.hxx
// ./opencascade/Geom2d_Conic.hxx
// ./opencascade/Geom2d_Parabola.hxx
// ./opencascade/Geom2d_Geometry.hxx
// ./opencascade/Geom2d_Curve.hxx
// ./opencascade/Geom2d_Transformation.hxx
// ./opencascade/Geom2d_CartesianPoint.hxx
// ./opencascade/Geom2d_AxisPlacement.hxx
// ./opencascade/Geom2d_Direction.hxx
// ./opencascade/Geom2d_BezierCurve.hxx
// ./opencascade/Geom2d_Hyperbola.hxx

// operators

// register typdefs


// exceptions
register_occ_exception<Geom2d_UndefinedDerivative>(m, "Geom2d_UndefinedDerivative");
register_occ_exception<Geom2d_UndefinedValue>(m, "Geom2d_UndefinedValue");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
