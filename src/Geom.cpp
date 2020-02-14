
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt.hxx>
#include <gp_Parab.hxx>
#include <gp_Sphere.hxx>
#include <gp_Ax2.hxx>
#include <gp_Circ.hxx>
#include <gp_Cylinder.hxx>
#include <gp_GTrsf2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Hypr.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Pnt.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Lin.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <gp_Ax2.hxx>
#include <gp_GTrsf2d.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Elips.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <gp_Pln.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Cone.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Torus.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_GTrsf2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Trsf.hxx>

// module includes
#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_AxisPlacement.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Conic.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_Direction.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Geometry.hxx>
#include <Geom_HSequenceOfBSplineSurface.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_OffsetSurface.hxx>
#include <Geom_OsculatingSurface.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Point.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_SequenceOfBSplineSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_Transformation.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <Geom_Vector.hxx>
#include <Geom_VectorWithMagnitude.hxx>

// template related includes
// ./opencascade/Geom_SequenceOfBSplineSurface.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom"));


//Python trampoline classes
    class Py_Geom_Geometry : public Geom_Geometry{
    public:
        using Geom_Geometry::Geom_Geometry;
        
        
        // public pure virtual
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_AxisPlacement : public Geom_AxisPlacement{
    public:
        using Geom_AxisPlacement::Geom_AxisPlacement;
        
        
        // public pure virtual
        void SetDirection(const gp_Dir & V) override { PYBIND11_OVERLOAD_PURE(void,Geom_AxisPlacement,SetDirection,V) };
        
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_Curve : public Geom_Curve{
    public:
        using Geom_Curve::Geom_Curve;
        
        
        // public pure virtual
        void Reverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,Reverse,) };
        Standard_Real ReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,ReversedParameter,U) };
        Standard_Real FirstParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,FirstParameter,) };
        Standard_Real LastParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,LastParameter,) };
        Standard_Boolean IsClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsClosed,) };
        Standard_Boolean IsPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsPeriodic,) };
        GeomAbs_Shape Continuity() const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,Geom_Curve,Continuity,) };
        Standard_Boolean IsCN(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsCN,N) };
        void D0(const Standard_Real U,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D0,U,P) };
        void D1(const Standard_Real U,gp_Pnt & P,gp_Vec & V1) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D1,U,P,V1) };
        void D2(const Standard_Real U,gp_Pnt & P,gp_Vec & V1,gp_Vec & V2) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D2,U,P,V1,V2) };
        void D3(const Standard_Real U,gp_Pnt & P,gp_Vec & V1,gp_Vec & V2,gp_Vec & V3) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D3,U,P,V1,V2,V3) };
        gp_Vec DN(const Standard_Real U,const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,Geom_Curve,DN,U,N) };
        
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_Point : public Geom_Point{
    public:
        using Geom_Point::Geom_Point;
        
        
        // public pure virtual
        gp_Pnt Pnt() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,Geom_Point,Pnt,) };
        Standard_Real X() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Point,X,) };
        Standard_Real Y() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Point,Y,) };
        Standard_Real Z() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Point,Z,) };
        void Coord(Standard_Real & X,Standard_Real & Y,Standard_Real & Z) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Point,Coord,X,Y,Z) };
        
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_Surface : public Geom_Surface{
    public:
        using Geom_Surface::Geom_Surface;
        
        
        // public pure virtual
        void UReverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,UReverse,) };
        Standard_Real UReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Surface,UReversedParameter,U) };
        void VReverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,VReverse,) };
        Standard_Real VReversedParameter(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Surface,VReversedParameter,V) };
        Standard_Boolean IsUClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUClosed,) };
        Standard_Boolean IsVClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVClosed,) };
        Standard_Boolean IsUPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUPeriodic,) };
        Standard_Boolean IsVPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVPeriodic,) };
        opencascade::handle<Geom_Curve> UIso(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,UIso,U) };
        opencascade::handle<Geom_Curve> VIso(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,VIso,V) };
        GeomAbs_Shape Continuity() const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,Geom_Surface,Continuity,) };
        Standard_Boolean IsCNu(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsCNu,N) };
        Standard_Boolean IsCNv(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsCNv,N) };
        void D0(const Standard_Real U,const Standard_Real V,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D0,U,V,P) };
        void D1(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D1,U,V,P,D1U,D1V) };
        void D2(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D2,U,V,P,D1U,D1V,D2U,D2V,D2UV) };
        void D3(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV,gp_Vec & D3U,gp_Vec & D3V,gp_Vec & D3UUV,gp_Vec & D3UVV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D3,U,V,P,D1U,D1V,D2U,D2V,D2UV,D3U,D3V,D3UUV,D3UVV) };
        gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,Geom_Surface,DN,U,V,Nu,Nv) };
        void Bounds(Standard_Real & U1,Standard_Real & U2,Standard_Real & V1,Standard_Real & V2) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,Bounds,U1,U2,V1,V2) };
        
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_Vector : public Geom_Vector{
    public:
        using Geom_Vector::Geom_Vector;
        
        
        // public pure virtual
        Standard_Real Magnitude() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Vector,Magnitude,) };
        Standard_Real SquareMagnitude() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Vector,SquareMagnitude,) };
        void Cross(const opencascade::handle<Geom_Vector> & Other) override { PYBIND11_OVERLOAD_PURE(void,Geom_Vector,Cross,Other) };
        opencascade::handle<Geom_Vector> Crossed(const opencascade::handle<Geom_Vector> & Other) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Vector>,Geom_Vector,Crossed,Other) };
        void CrossCross(const opencascade::handle<Geom_Vector> & V1,const opencascade::handle<Geom_Vector> & V2) override { PYBIND11_OVERLOAD_PURE(void,Geom_Vector,CrossCross,V1,V2) };
        opencascade::handle<Geom_Vector> CrossCrossed(const opencascade::handle<Geom_Vector> & V1,const opencascade::handle<Geom_Vector> & V2) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Vector>,Geom_Vector,CrossCrossed,V1,V2) };
        
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_BoundedCurve : public Geom_BoundedCurve{
    public:
        using Geom_BoundedCurve::Geom_BoundedCurve;
        
        
        // public pure virtual
        gp_Pnt EndPoint() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,Geom_BoundedCurve,EndPoint,) };
        gp_Pnt StartPoint() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,Geom_BoundedCurve,StartPoint,) };
        
        void Reverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,Reverse,) };
        Standard_Real ReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,ReversedParameter,U) };
        Standard_Real FirstParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,FirstParameter,) };
        Standard_Real LastParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,LastParameter,) };
        Standard_Boolean IsClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsClosed,) };
        Standard_Boolean IsPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsPeriodic,) };
        GeomAbs_Shape Continuity() const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,Geom_Curve,Continuity,) };
        Standard_Boolean IsCN(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsCN,N) };
        void D0(const Standard_Real U,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D0,U,P) };
        void D1(const Standard_Real U,gp_Pnt & P,gp_Vec & V1) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D1,U,P,V1) };
        void D2(const Standard_Real U,gp_Pnt & P,gp_Vec & V1,gp_Vec & V2) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D2,U,P,V1,V2) };
        void D3(const Standard_Real U,gp_Pnt & P,gp_Vec & V1,gp_Vec & V2,gp_Vec & V3) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D3,U,P,V1,V2,V3) };
        gp_Vec DN(const Standard_Real U,const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,Geom_Curve,DN,U,N) };
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_BoundedSurface : public Geom_BoundedSurface{
    public:
        using Geom_BoundedSurface::Geom_BoundedSurface;
        
        
        // public pure virtual
        
        void UReverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,UReverse,) };
        Standard_Real UReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Surface,UReversedParameter,U) };
        void VReverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,VReverse,) };
        Standard_Real VReversedParameter(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Surface,VReversedParameter,V) };
        Standard_Boolean IsUClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUClosed,) };
        Standard_Boolean IsVClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVClosed,) };
        Standard_Boolean IsUPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUPeriodic,) };
        Standard_Boolean IsVPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVPeriodic,) };
        opencascade::handle<Geom_Curve> UIso(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,UIso,U) };
        opencascade::handle<Geom_Curve> VIso(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,VIso,V) };
        GeomAbs_Shape Continuity() const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,Geom_Surface,Continuity,) };
        Standard_Boolean IsCNu(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsCNu,N) };
        Standard_Boolean IsCNv(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsCNv,N) };
        void D0(const Standard_Real U,const Standard_Real V,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D0,U,V,P) };
        void D1(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D1,U,V,P,D1U,D1V) };
        void D2(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D2,U,V,P,D1U,D1V,D2U,D2V,D2UV) };
        void D3(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV,gp_Vec & D3U,gp_Vec & D3V,gp_Vec & D3UUV,gp_Vec & D3UVV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D3,U,V,P,D1U,D1V,D2U,D2V,D2UV,D3U,D3V,D3UUV,D3UVV) };
        gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,Geom_Surface,DN,U,V,Nu,Nv) };
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_Conic : public Geom_Conic{
    public:
        using Geom_Conic::Geom_Conic;
        
        
        // public pure virtual
        Standard_Real Eccentricity() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Conic,Eccentricity,) };
        Standard_Real ReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Conic,ReversedParameter,U) };
        
        Standard_Real FirstParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,FirstParameter,) };
        Standard_Real LastParameter() const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Curve,LastParameter,) };
        Standard_Boolean IsClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsClosed,) };
        Standard_Boolean IsPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Curve,IsPeriodic,) };
        void D0(const Standard_Real U,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D0,U,P) };
        void D1(const Standard_Real U,gp_Pnt & P,gp_Vec & V1) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D1,U,P,V1) };
        void D2(const Standard_Real U,gp_Pnt & P,gp_Vec & V1,gp_Vec & V2) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D2,U,P,V1,V2) };
        void D3(const Standard_Real U,gp_Pnt & P,gp_Vec & V1,gp_Vec & V2,gp_Vec & V3) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Curve,D3,U,P,V1,V2,V3) };
        gp_Vec DN(const Standard_Real U,const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,Geom_Curve,DN,U,N) };
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_ElementarySurface : public Geom_ElementarySurface{
    public:
        using Geom_ElementarySurface::Geom_ElementarySurface;
        
        
        // public pure virtual
        Standard_Real UReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_ElementarySurface,UReversedParameter,U) };
        Standard_Real VReversedParameter(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_ElementarySurface,VReversedParameter,V) };
        
        Standard_Boolean IsUClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUClosed,) };
        Standard_Boolean IsVClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVClosed,) };
        Standard_Boolean IsUPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUPeriodic,) };
        Standard_Boolean IsVPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVPeriodic,) };
        opencascade::handle<Geom_Curve> UIso(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,UIso,U) };
        opencascade::handle<Geom_Curve> VIso(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,VIso,V) };
        void D0(const Standard_Real U,const Standard_Real V,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D0,U,V,P) };
        void D1(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D1,U,V,P,D1U,D1V) };
        void D2(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D2,U,V,P,D1U,D1V,D2U,D2V,D2UV) };
        void D3(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV,gp_Vec & D3U,gp_Vec & D3V,gp_Vec & D3UUV,gp_Vec & D3UVV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D3,U,V,P,D1U,D1V,D2U,D2V,D2UV,D3U,D3V,D3UUV,D3UVV) };
        gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,Geom_Surface,DN,U,V,Nu,Nv) };
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Geom_SweptSurface : public Geom_SweptSurface{
    public:
        using Geom_SweptSurface::Geom_SweptSurface;
        
        
        // public pure virtual
        
        void UReverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,UReverse,) };
        Standard_Real UReversedParameter(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Surface,UReversedParameter,U) };
        void VReverse() override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,VReverse,) };
        Standard_Real VReversedParameter(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Geom_Surface,VReversedParameter,V) };
        Standard_Boolean IsUClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUClosed,) };
        Standard_Boolean IsVClosed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVClosed,) };
        Standard_Boolean IsUPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsUPeriodic,) };
        Standard_Boolean IsVPeriodic() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsVPeriodic,) };
        opencascade::handle<Geom_Curve> UIso(const Standard_Real U) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,UIso,U) };
        opencascade::handle<Geom_Curve> VIso(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Curve>,Geom_Surface,VIso,V) };
        Standard_Boolean IsCNu(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsCNu,N) };
        Standard_Boolean IsCNv(const Standard_Integer N) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Geom_Surface,IsCNv,N) };
        void D0(const Standard_Real U,const Standard_Real V,gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D0,U,V,P) };
        void D1(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D1,U,V,P,D1U,D1V) };
        void D2(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D2,U,V,P,D1U,D1V,D2U,D2V,D2UV) };
        void D3(const Standard_Real U,const Standard_Real V,gp_Pnt & P,gp_Vec & D1U,gp_Vec & D1V,gp_Vec & D2U,gp_Vec & D2V,gp_Vec & D2UV,gp_Vec & D3U,gp_Vec & D3V,gp_Vec & D3UUV,gp_Vec & D3UVV) const  override { PYBIND11_OVERLOAD_PURE(void,Geom_Surface,D3,U,V,P,D1U,D1V,D2U,D2V,D2UV,D3U,D3V,D3UUV,D3UVV) };
        gp_Vec DN(const Standard_Real U,const Standard_Real V,const Standard_Integer Nu,const Standard_Integer Nv) const  override { PYBIND11_OVERLOAD_PURE(gp_Vec,Geom_Surface,DN,U,V,Nu,Nv) };
        void Transform(const gp_Trsf & T) override { PYBIND11_OVERLOAD_PURE(void,Geom_Geometry,Transform,T) };
        opencascade::handle<Geom_Geometry> Copy() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Geom_Geometry>,Geom_Geometry,Copy,) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<Geom_Geometry ,opencascade::handle<Geom_Geometry> ,Py_Geom_Geometry , Standard_Transient >>(m.attr("Geom_Geometry"))
    // constructors
    // custom constructors
    // methods
        .def("Mirror",
             (void (Geom_Geometry::*)( const gp_Pnt &  ) ) static_cast<void (Geom_Geometry::*)( const gp_Pnt &  ) >(&Geom_Geometry::Mirror),
             R"#(Performs the symmetrical transformation of a Geometry with respect to the point P which is the center of the symmetry.)#"  , py::arg("P"))
        .def("Mirror",
             (void (Geom_Geometry::*)( const gp_Ax1 &  ) ) static_cast<void (Geom_Geometry::*)( const gp_Ax1 &  ) >(&Geom_Geometry::Mirror),
             R"#(Performs the symmetrical transformation of a Geometry with respect to an axis placement which is the axis of the symmetry.)#"  , py::arg("A1"))
        .def("Mirror",
             (void (Geom_Geometry::*)( const gp_Ax2 &  ) ) static_cast<void (Geom_Geometry::*)( const gp_Ax2 &  ) >(&Geom_Geometry::Mirror),
             R"#(Performs the symmetrical transformation of a Geometry with respect to a plane. The axis placement A2 locates the plane of the symmetry : (Location, XDirection, YDirection).)#"  , py::arg("A2"))
        .def("Rotate",
             (void (Geom_Geometry::*)( const gp_Ax1 & ,  const Standard_Real  ) ) static_cast<void (Geom_Geometry::*)( const gp_Ax1 & ,  const Standard_Real  ) >(&Geom_Geometry::Rotate),
             R"#(Rotates a Geometry. A1 is the axis of the rotation. Ang is the angular value of the rotation in radians.)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scale",
             (void (Geom_Geometry::*)( const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_Geometry::*)( const gp_Pnt & ,  const Standard_Real  ) >(&Geom_Geometry::Scale),
             R"#(Scales a Geometry. S is the scaling value.)#"  , py::arg("P"),  py::arg("S"))
        .def("Translate",
             (void (Geom_Geometry::*)( const gp_Vec &  ) ) static_cast<void (Geom_Geometry::*)( const gp_Vec &  ) >(&Geom_Geometry::Translate),
             R"#(Translates a Geometry. V is the vector of the tanslation.)#"  , py::arg("V"))
        .def("Translate",
             (void (Geom_Geometry::*)( const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (Geom_Geometry::*)( const gp_Pnt & ,  const gp_Pnt &  ) >(&Geom_Geometry::Translate),
             R"#(Translates a Geometry from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Transform",
             (void (Geom_Geometry::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Geometry::*)( const gp_Trsf &  ) >(&Geom_Geometry::Transform),
             R"#(Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations. (see class Transformation of the package Geom).)#"  , py::arg("T"))
        .def("Mirrored",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Pnt &  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Pnt &  ) const>(&Geom_Geometry::Mirrored),
             R"#(None)#"  , py::arg("P"))
        .def("Mirrored",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Ax1 &  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Ax1 &  ) const>(&Geom_Geometry::Mirrored),
             R"#(None)#"  , py::arg("A1"))
        .def("Mirrored",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Ax2 &  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Ax2 &  ) const>(&Geom_Geometry::Mirrored),
             R"#(None)#"  , py::arg("A2"))
        .def("Rotated",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Ax1 & ,  const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Ax1 & ,  const Standard_Real  ) const>(&Geom_Geometry::Rotated),
             R"#(None)#"  , py::arg("A1"),  py::arg("Ang"))
        .def("Scaled",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Pnt & ,  const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Pnt & ,  const Standard_Real  ) const>(&Geom_Geometry::Scaled),
             R"#(None)#"  , py::arg("P"),  py::arg("S"))
        .def("Transformed",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Trsf &  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Trsf &  ) const>(&Geom_Geometry::Transformed),
             R"#(None)#"  , py::arg("T"))
        .def("Translated",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Vec &  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Vec &  ) const>(&Geom_Geometry::Translated),
             R"#(None)#"  , py::arg("V"))
        .def("Translated",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Pnt & ,  const gp_Pnt &  ) const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)( const gp_Pnt & ,  const gp_Pnt &  ) const>(&Geom_Geometry::Translated),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Geometry::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Geometry::*)() const>(&Geom_Geometry::Copy),
             R"#(Creates a new object which is a copy of this geometric object.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Geometry::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Geometry::*)() const>(&Geom_Geometry::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Geometry::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Geometry::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_HSequenceOfBSplineSurface ,opencascade::handle<Geom_HSequenceOfBSplineSurface>  , Geom_SequenceOfBSplineSurface , Standard_Transient >>(m.attr("Geom_HSequenceOfBSplineSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Geom_BSplineSurface> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Geom_SequenceOfBSplineSurface & (Geom_HSequenceOfBSplineSurface::*)() const) static_cast<const Geom_SequenceOfBSplineSurface & (Geom_HSequenceOfBSplineSurface::*)() const>(&Geom_HSequenceOfBSplineSurface::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Geom_HSequenceOfBSplineSurface::*)(  const opencascade::handle<Geom_BSplineSurface> &  ) ) static_cast<void (Geom_HSequenceOfBSplineSurface::*)(  const opencascade::handle<Geom_BSplineSurface> &  ) >(&Geom_HSequenceOfBSplineSurface::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Geom_HSequenceOfBSplineSurface::*)( NCollection_Sequence<opencascade::handle<Geom_BSplineSurface> > &  ) ) static_cast<void (Geom_HSequenceOfBSplineSurface::*)( NCollection_Sequence<opencascade::handle<Geom_BSplineSurface> > &  ) >(&Geom_HSequenceOfBSplineSurface::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Geom_SequenceOfBSplineSurface & (Geom_HSequenceOfBSplineSurface::*)() ) static_cast<Geom_SequenceOfBSplineSurface & (Geom_HSequenceOfBSplineSurface::*)() >(&Geom_HSequenceOfBSplineSurface::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_HSequenceOfBSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_HSequenceOfBSplineSurface::*)() const>(&Geom_HSequenceOfBSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_HSequenceOfBSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_HSequenceOfBSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_OsculatingSurface ,opencascade::handle<Geom_OsculatingSurface>  , Standard_Transient >>(m.attr("Geom_OsculatingSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("BS"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Init",
             (void (Geom_OsculatingSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) ) static_cast<void (Geom_OsculatingSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) >(&Geom_OsculatingSurface::Init),
             R"#(None)#"  , py::arg("BS"),  py::arg("Tol"))
        .def("BasisSurface",
             (opencascade::handle<Geom_Surface> (Geom_OsculatingSurface::*)() const) static_cast<opencascade::handle<Geom_Surface> (Geom_OsculatingSurface::*)() const>(&Geom_OsculatingSurface::BasisSurface),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (Geom_OsculatingSurface::*)() const) static_cast<Standard_Real (Geom_OsculatingSurface::*)() const>(&Geom_OsculatingSurface::Tolerance),
             R"#(None)#" )
        .def("UOscSurf",
             (Standard_Boolean (Geom_OsculatingSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const) static_cast<Standard_Boolean (Geom_OsculatingSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const>(&Geom_OsculatingSurface::UOscSurf),
             R"#(if Standard_True, L is the local osculating surface along U at the point U,V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("t"),  py::arg("L"))
        .def("VOscSurf",
             (Standard_Boolean (Geom_OsculatingSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const) static_cast<Standard_Boolean (Geom_OsculatingSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const>(&Geom_OsculatingSurface::VOscSurf),
             R"#(if Standard_True, L is the local osculating surface along V at the point U,V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("t"),  py::arg("L"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_OsculatingSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_OsculatingSurface::*)() const>(&Geom_OsculatingSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_OsculatingSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_OsculatingSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Transformation ,opencascade::handle<Geom_Transformation>  , Standard_Transient >>(m.attr("Geom_Transformation"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Transformation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Transformation::*)() const>(&Geom_Transformation::DynamicType),
             R"#(None)#" )
        .def("SetMirror",
             (void (Geom_Transformation::*)( const gp_Pnt &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Pnt &  ) >(&Geom_Transformation::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation with respect to a point P. P is the center of the symmetry.)#"  , py::arg("thePnt"))
        .def("SetMirror",
             (void (Geom_Transformation::*)( const gp_Ax1 &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Ax1 &  ) >(&Geom_Transformation::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation with respect to an axis A1. A1 is the center of the axial symmetry.)#"  , py::arg("theA1"))
        .def("SetMirror",
             (void (Geom_Transformation::*)( const gp_Ax2 &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Ax2 &  ) >(&Geom_Transformation::SetMirror),
             R"#(Makes the transformation into a symmetrical transformation with respect to a plane. The plane of the symmetry is defined with the axis placement A2. It is the plane (Location, XDirection, YDirection).)#"  , py::arg("theA2"))
        .def("SetRotation",
             (void (Geom_Transformation::*)( const gp_Ax1 & ,  const Standard_Real  ) ) static_cast<void (Geom_Transformation::*)( const gp_Ax1 & ,  const Standard_Real  ) >(&Geom_Transformation::SetRotation),
             R"#(Makes the transformation into a rotation. A1 is the axis rotation and Ang is the angular value of the rotation in radians.)#"  , py::arg("theA1"),  py::arg("theAng"))
        .def("SetScale",
             (void (Geom_Transformation::*)( const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_Transformation::*)( const gp_Pnt & ,  const Standard_Real  ) >(&Geom_Transformation::SetScale),
             R"#(Makes the transformation into a scale. P is the center of the scale and S is the scaling value.)#"  , py::arg("thePnt"),  py::arg("theScale"))
        .def("SetTransformation",
             (void (Geom_Transformation::*)( const gp_Ax3 & ,  const gp_Ax3 &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Ax3 & ,  const gp_Ax3 &  ) >(&Geom_Transformation::SetTransformation),
             R"#(Makes a transformation allowing passage from the coordinate system "FromSystem1" to the coordinate system "ToSystem2". Example : In a C++ implementation : Real x1, y1, z1; // are the coordinates of a point in the // local system FromSystem1 Real x2, y2, z2; // are the coordinates of a point in the // local system ToSystem2 gp_Pnt P1 (x1, y1, z1) Geom_Transformation T; T.SetTransformation (FromSystem1, ToSystem2); gp_Pnt P2 = P1.Transformed (T); P2.Coord (x2, y2, z2);)#"  , py::arg("theFromSystem1"),  py::arg("theToSystem2"))
        .def("SetTransformation",
             (void (Geom_Transformation::*)( const gp_Ax3 &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Ax3 &  ) >(&Geom_Transformation::SetTransformation),
             R"#(Makes the transformation allowing passage from the basic coordinate system {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.), VZ (0., 0. ,1.) } to the local coordinate system defined with the Ax2 ToSystem. Same utilisation as the previous method. FromSystem1 is defaulted to the absolute coordinate system.)#"  , py::arg("theToSystem"))
        .def("SetTranslation",
             (void (Geom_Transformation::*)( const gp_Vec &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Vec &  ) >(&Geom_Transformation::SetTranslation),
             R"#(Makes the transformation into a translation. V is the vector of the translation.)#"  , py::arg("theVec"))
        .def("SetTranslation",
             (void (Geom_Transformation::*)( const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Pnt & ,  const gp_Pnt &  ) >(&Geom_Transformation::SetTranslation),
             R"#(Makes the transformation into a translation from the point P1 to the point P2.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetTrsf",
             (void (Geom_Transformation::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Transformation::*)( const gp_Trsf &  ) >(&Geom_Transformation::SetTrsf),
             R"#(Converts the gp_Trsf transformation T into this transformation.)#"  , py::arg("theTrsf"))
        .def("IsNegative",
             (Standard_Boolean (Geom_Transformation::*)() const) static_cast<Standard_Boolean (Geom_Transformation::*)() const>(&Geom_Transformation::IsNegative),
             R"#(Checks whether this transformation is an indirect transformation: returns true if the determinant of the matrix of the vectorial part of the transformation is less than 0.)#" )
        .def("Form",
             (gp_TrsfForm (Geom_Transformation::*)() const) static_cast<gp_TrsfForm (Geom_Transformation::*)() const>(&Geom_Transformation::Form),
             R"#(Returns the nature of this transformation as a value of the gp_TrsfForm enumeration.)#" )
        .def("ScaleFactor",
             (Standard_Real (Geom_Transformation::*)() const) static_cast<Standard_Real (Geom_Transformation::*)() const>(&Geom_Transformation::ScaleFactor),
             R"#(Returns the scale value of the transformation.)#" )
        .def("Trsf",
             (const gp_Trsf & (Geom_Transformation::*)() const) static_cast<const gp_Trsf & (Geom_Transformation::*)() const>(&Geom_Transformation::Trsf),
             R"#(Returns a non transient copy of <me>.)#" )
        .def("Value",
             (Standard_Real (Geom_Transformation::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (Geom_Transformation::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_Transformation::Value),
             R"#(Returns the coefficients of the global matrix of transformation. It is a 3 rows X 4 columns matrix.)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("Invert",
             (void (Geom_Transformation::*)() ) static_cast<void (Geom_Transformation::*)() >(&Geom_Transformation::Invert),
             R"#(Raised if the the transformation is singular. This means that the ScaleFactor is lower or equal to Resolution from package gp.)#" )
        .def("Inverted",
             (opencascade::handle<Geom_Transformation> (Geom_Transformation::*)() const) static_cast<opencascade::handle<Geom_Transformation> (Geom_Transformation::*)() const>(&Geom_Transformation::Inverted),
             R"#(Raised if the the transformation is singular. This means that the ScaleFactor is lower or equal to Resolution from package gp.)#" )
        .def("Multiplied",
             (opencascade::handle<Geom_Transformation> (Geom_Transformation::*)( const opencascade::handle<Geom_Transformation> &  ) const) static_cast<opencascade::handle<Geom_Transformation> (Geom_Transformation::*)( const opencascade::handle<Geom_Transformation> &  ) const>(&Geom_Transformation::Multiplied),
             R"#(Computes the transformation composed with Other and <me>. <me> * Other. Returns a new transformation)#"  , py::arg("Other"))
        .def("Multiply",
             (void (Geom_Transformation::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (Geom_Transformation::*)( const opencascade::handle<Geom_Transformation> &  ) >(&Geom_Transformation::Multiply),
             R"#(Computes the transformation composed with Other and <me> . <me> = <me> * Other.)#"  , py::arg("theOther"))
        .def("Power",
             (void (Geom_Transformation::*)( const Standard_Integer  ) ) static_cast<void (Geom_Transformation::*)( const Standard_Integer  ) >(&Geom_Transformation::Power),
             R"#(Computes the following composition of transformations if N > 0 <me> * <me> * .......* <me>. if N = 0 Identity if N < 0 <me>.Invert() * .........* <me>.Invert())#"  , py::arg("N"))
        .def("Powered",
             (opencascade::handle<Geom_Transformation> (Geom_Transformation::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_Transformation> (Geom_Transformation::*)( const Standard_Integer  ) const>(&Geom_Transformation::Powered),
             R"#(Raised if N < 0 and if the transformation is not inversible)#"  , py::arg("N"))
        .def("PreMultiply",
             (void (Geom_Transformation::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (Geom_Transformation::*)( const opencascade::handle<Geom_Transformation> &  ) >(&Geom_Transformation::PreMultiply),
             R"#(Computes the matrix of the transformation composed with <me> and Other. <me> = Other * <me>)#"  , py::arg("Other"))
        .def("Copy",
             (opencascade::handle<Geom_Transformation> (Geom_Transformation::*)() const) static_cast<opencascade::handle<Geom_Transformation> (Geom_Transformation::*)() const>(&Geom_Transformation::Copy),
             R"#(Creates a new object which is a copy of this transformation.)#" )
    // methods using call by reference i.s.o. return
        .def("Transforms",
             []( Geom_Transformation &self   ){ Standard_Real  theX; Standard_Real  theY; Standard_Real  theZ; self.Transforms(theX,theY,theZ); return std::make_tuple(theX,theY,theZ); },
             R"#(Applies the transformation <me> to the triplet {X, Y, Z}.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Transformation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Transformation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_AxisPlacement ,opencascade::handle<Geom_AxisPlacement> ,Py_Geom_AxisPlacement , Geom_Geometry >>(m.attr("Geom_AxisPlacement"))
    // constructors
    // custom constructors
    // methods
        .def("SetAxis",
             (void (Geom_AxisPlacement::*)( const gp_Ax1 &  ) ) static_cast<void (Geom_AxisPlacement::*)( const gp_Ax1 &  ) >(&Geom_AxisPlacement::SetAxis),
             R"#(Assigns A1 as the "main Axis" of this positioning system. This modifies - its origin, and - its "main Direction". If this positioning system is a Geom_Axis2Placement, then its "X Direction" and "Y Direction" are recomputed. Exceptions For a Geom_Axis2Placement: Standard_ConstructionError if A1 and the previous "X Direction" of the coordinate system are parallel.)#"  , py::arg("A1"))
        .def("SetDirection",
             (void (Geom_AxisPlacement::*)( const gp_Dir &  ) ) static_cast<void (Geom_AxisPlacement::*)( const gp_Dir &  ) >(&Geom_AxisPlacement::SetDirection),
             R"#(Changes the direction of the axis placement. If <me> is an axis placement two axis the main "Direction" is modified and the "XDirection" and "YDirection" are recomputed. Raises ConstructionError only for an axis placement two axis if V and the previous "XDirection" are parallel because it is not possible to calculate the new "XDirection" and the new "YDirection".)#"  , py::arg("V"))
        .def("SetLocation",
             (void (Geom_AxisPlacement::*)( const gp_Pnt &  ) ) static_cast<void (Geom_AxisPlacement::*)( const gp_Pnt &  ) >(&Geom_AxisPlacement::SetLocation),
             R"#(Assigns the point P as the origin of this positioning system.)#"  , py::arg("P"))
        .def("Angle",
             (Standard_Real (Geom_AxisPlacement::*)( const opencascade::handle<Geom_AxisPlacement> &  ) const) static_cast<Standard_Real (Geom_AxisPlacement::*)( const opencascade::handle<Geom_AxisPlacement> &  ) const>(&Geom_AxisPlacement::Angle),
             R"#(Computes the angular value, in radians, between the "main Direction" of this positioning system and that of positioning system Other. The result is a value between 0 and Pi.)#"  , py::arg("Other"))
        .def("Axis",
             (const gp_Ax1 & (Geom_AxisPlacement::*)() const) static_cast<const gp_Ax1 & (Geom_AxisPlacement::*)() const>(&Geom_AxisPlacement::Axis),
             R"#(Returns the main axis of the axis placement. For an "Axis2placement" it is the main axis (Location, Direction ). For an "Axis1Placement" this method returns a copy of <me>.)#" )
        .def("Direction",
             (gp_Dir (Geom_AxisPlacement::*)() const) static_cast<gp_Dir (Geom_AxisPlacement::*)() const>(&Geom_AxisPlacement::Direction),
             R"#(Returns the main "Direction" of an axis placement.)#" )
        .def("Location",
             (gp_Pnt (Geom_AxisPlacement::*)() const) static_cast<gp_Pnt (Geom_AxisPlacement::*)() const>(&Geom_AxisPlacement::Location),
             R"#(Returns the Location point (origin) of the axis placement.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_AxisPlacement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_AxisPlacement::*)() const>(&Geom_AxisPlacement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_AxisPlacement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_AxisPlacement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Curve ,opencascade::handle<Geom_Curve> ,Py_Geom_Curve , Geom_Geometry >>(m.attr("Geom_Curve"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom_Curve::*)() ) static_cast<void (Geom_Curve::*)() >(&Geom_Curve::Reverse),
             R"#(Changes the direction of parametrization of <me>. The "FirstParameter" and the "LastParameter" are not changed but the orientation of the curve is modified. If the curve is bounded the StartPoint of the initial curve becomes the EndPoint of the reversed curve and the EndPoint of the initial curve becomes the StartPoint of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_Curve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Curve::*)( const Standard_Real  ) const>(&Geom_Curve::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("TransformedParameter",
             (Standard_Real (Geom_Curve::*)( const Standard_Real ,  const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_Curve::*)( const Standard_Real ,  const gp_Trsf &  ) const>(&Geom_Curve::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom_Curve::*)( const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_Curve::*)( const gp_Trsf &  ) const>(&Geom_Curve::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Reversed",
             (opencascade::handle<Geom_Curve> (Geom_Curve::*)() const) static_cast<opencascade::handle<Geom_Curve> (Geom_Curve::*)() const>(&Geom_Curve::Reversed),
             R"#(Returns a copy of <me> reversed.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom_Curve::*)() const) static_cast<Standard_Real (Geom_Curve::*)() const>(&Geom_Curve::FirstParameter),
             R"#(Returns the value of the first parameter. Warnings : It can be RealFirst from package Standard if the curve is infinite)#" )
        .def("LastParameter",
             (Standard_Real (Geom_Curve::*)() const) static_cast<Standard_Real (Geom_Curve::*)() const>(&Geom_Curve::LastParameter),
             R"#(Returns the value of the last parameter. Warnings : It can be RealLast from package Standard if the curve is infinite)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_Curve::*)() const) static_cast<Standard_Boolean (Geom_Curve::*)() const>(&Geom_Curve::IsClosed),
             R"#(Returns true if the curve is closed. Some curves such as circle are always closed, others such as line are never closed (by definition). Some Curves such as OffsetCurve can be closed or not. These curves are considered as closed if the distance between the first point and the last point of the curve is lower or equal to the Resolution from package gp wich is a fixed criterion independant of the application.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_Curve::*)() const) static_cast<Standard_Boolean (Geom_Curve::*)() const>(&Geom_Curve::IsPeriodic),
             R"#(Is the parametrization of the curve periodic ? It is possible only if the curve is closed and if the following relation is satisfied : for each parametric value U the distance between the point P(u) and the point P (u + T) is lower or equal to Resolution from package gp, T is the period and must be a constant. There are three possibilities : . the curve is never periodic by definition (SegmentLine) . the curve is always periodic by definition (Circle) . the curve can be defined as periodic (BSpline). In this case a function SetPeriodic allows you to give the shape of the curve. The general rule for this case is : if a curve can be periodic or not the default periodicity set is non periodic and you have to turn (explicitly) the curve into a periodic curve if you want the curve to be periodic.)#" )
        .def("Period",
             (Standard_Real (Geom_Curve::*)() const) static_cast<Standard_Real (Geom_Curve::*)() const>(&Geom_Curve::Period),
             R"#(Returns the period of this curve. Exceptions Standard_NoSuchObject if this curve is not periodic.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom_Curve::*)() const) static_cast<GeomAbs_Shape (Geom_Curve::*)() const>(&Geom_Curve::Continuity),
             R"#(It is the global continuity of the curve C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, G1 : tangency continuity all along the Curve, G2 : curvature continuity all along the Curve, CN : the order of continuity is infinite.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom_Curve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_Curve::*)( const Standard_Integer  ) const>(&Geom_Curve::IsCN),
             R"#(Returns true if the degree of continuity of this curve is at least N. Exceptions - Standard_RangeError if N is less than 0.)#"  , py::arg("N"))
        .def("D0",
             (void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Curve::D0),
             R"#(Returns in P the point of parameter U. If the curve is periodic then the returned point is P(U) with U = Ustart + (U - Uend) where Ustart and Uend are the parametric bounds of the curve.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_Curve::D1),
             R"#(Returns the point P of parameter U and the first derivative V1. Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Curve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Curve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_Curve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the curve is not CN.)#"  , py::arg("U"),  py::arg("N"))
        .def("Value",
             (gp_Pnt (Geom_Curve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (Geom_Curve::*)( const Standard_Real  ) const>(&Geom_Curve::Value),
             R"#(Computes the point of parameter U on <me>. If the curve is periodic then the returned point is P(U) with U = Ustart + (U - Uend) where Ustart and Uend are the parametric bounds of the curve. it is implemented with D0.)#"  , py::arg("U"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Curve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Curve::*)() const>(&Geom_Curve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Curve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Curve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Point ,opencascade::handle<Geom_Point> ,Py_Geom_Point , Geom_Geometry >>(m.attr("Geom_Point"))
    // constructors
    // custom constructors
    // methods
        .def("Pnt",
             (gp_Pnt (Geom_Point::*)() const) static_cast<gp_Pnt (Geom_Point::*)() const>(&Geom_Point::Pnt),
             R"#(returns a non transient copy of <me>)#" )
        .def("X",
             (Standard_Real (Geom_Point::*)() const) static_cast<Standard_Real (Geom_Point::*)() const>(&Geom_Point::X),
             R"#(returns the X coordinate of <me>.)#" )
        .def("Y",
             (Standard_Real (Geom_Point::*)() const) static_cast<Standard_Real (Geom_Point::*)() const>(&Geom_Point::Y),
             R"#(returns the Y coordinate of <me>.)#" )
        .def("Z",
             (Standard_Real (Geom_Point::*)() const) static_cast<Standard_Real (Geom_Point::*)() const>(&Geom_Point::Z),
             R"#(returns the Z coordinate of <me>.)#" )
        .def("Distance",
             (Standard_Real (Geom_Point::*)( const opencascade::handle<Geom_Point> &  ) const) static_cast<Standard_Real (Geom_Point::*)( const opencascade::handle<Geom_Point> &  ) const>(&Geom_Point::Distance),
             R"#(Computes the distance between <me> and <Other>.)#"  , py::arg("Other"))
        .def("SquareDistance",
             (Standard_Real (Geom_Point::*)( const opencascade::handle<Geom_Point> &  ) const) static_cast<Standard_Real (Geom_Point::*)( const opencascade::handle<Geom_Point> &  ) const>(&Geom_Point::SquareDistance),
             R"#(Computes the square distance between <me> and <Other>.)#"  , py::arg("Other"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Point::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Point::*)() const>(&Geom_Point::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( Geom_Point &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Coord(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(returns the Coordinates of <me>.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Point::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Point::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Surface ,opencascade::handle<Geom_Surface> ,Py_Geom_Surface , Geom_Geometry >>(m.attr("Geom_Surface"))
    // constructors
    // custom constructors
    // methods
        .def("UReverse",
             (void (Geom_Surface::*)() ) static_cast<void (Geom_Surface::*)() >(&Geom_Surface::UReverse),
             R"#(Reverses the U direction of parametrization of <me>. The bounds of the surface are not modified.)#" )
        .def("UReversed",
             (opencascade::handle<Geom_Surface> (Geom_Surface::*)() const) static_cast<opencascade::handle<Geom_Surface> (Geom_Surface::*)() const>(&Geom_Surface::UReversed),
             R"#(Reverses the U direction of parametrization of <me>. The bounds of the surface are not modified. A copy of <me> is returned.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Surface::*)( const Standard_Real  ) const>(&Geom_Surface::UReversedParameter),
             R"#(Returns the parameter on the Ureversed surface for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_Surface::*)() ) static_cast<void (Geom_Surface::*)() >(&Geom_Surface::VReverse),
             R"#(Reverses the V direction of parametrization of <me>. The bounds of the surface are not modified.)#" )
        .def("VReversed",
             (opencascade::handle<Geom_Surface> (Geom_Surface::*)() const) static_cast<opencascade::handle<Geom_Surface> (Geom_Surface::*)() const>(&Geom_Surface::VReversed),
             R"#(Reverses the V direction of parametrization of <me>. The bounds of the surface are not modified. A copy of <me> is returned.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Surface::*)( const Standard_Real  ) const>(&Geom_Surface::VReversedParameter),
             R"#(Returns the parameter on the Vreversed surface for the point of parameter V on <me>.)#"  , py::arg("V"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_Surface::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_Surface::*)( const gp_Trsf &  ) const>(&Geom_Surface::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("IsUClosed",
             (Standard_Boolean (Geom_Surface::*)() const) static_cast<Standard_Boolean (Geom_Surface::*)() const>(&Geom_Surface::IsUClosed),
             R"#(Checks whether this surface is closed in the u parametric direction. Returns true if, in the u parametric direction: taking uFirst and uLast as the parametric bounds in the u parametric direction, for each parameter v, the distance between the points P(uFirst, v) and P(uLast, v) is less than or equal to gp::Resolution().)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_Surface::*)() const) static_cast<Standard_Boolean (Geom_Surface::*)() const>(&Geom_Surface::IsVClosed),
             R"#(Checks whether this surface is closed in the u parametric direction. Returns true if, in the v parametric direction: taking vFirst and vLast as the parametric bounds in the v parametric direction, for each parameter u, the distance between the points P(u, vFirst) and P(u, vLast) is less than or equal to gp::Resolution().)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_Surface::*)() const) static_cast<Standard_Boolean (Geom_Surface::*)() const>(&Geom_Surface::IsUPeriodic),
             R"#(Checks if this surface is periodic in the u parametric direction. Returns true if: - this surface is closed in the u parametric direction, and - there is a constant T such that the distance between the points P (u, v) and P (u + T, v) (or the points P (u, v) and P (u, v + T)) is less than or equal to gp::Resolution(). Note: T is the parametric period in the u parametric direction.)#" )
        .def("UPeriod",
             (Standard_Real (Geom_Surface::*)() const) static_cast<Standard_Real (Geom_Surface::*)() const>(&Geom_Surface::UPeriod),
             R"#(Returns the period of this surface in the u parametric direction. raises if the surface is not uperiodic.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_Surface::*)() const) static_cast<Standard_Boolean (Geom_Surface::*)() const>(&Geom_Surface::IsVPeriodic),
             R"#(Checks if this surface is periodic in the v parametric direction. Returns true if: - this surface is closed in the v parametric direction, and - there is a constant T such that the distance between the points P (u, v) and P (u + T, v) (or the points P (u, v) and P (u, v + T)) is less than or equal to gp::Resolution(). Note: T is the parametric period in the v parametric direction.)#" )
        .def("VPeriod",
             (Standard_Real (Geom_Surface::*)() const) static_cast<Standard_Real (Geom_Surface::*)() const>(&Geom_Surface::VPeriod),
             R"#(Returns the period of this surface in the v parametric direction. raises if the surface is not vperiodic.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_Surface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_Surface::*)( const Standard_Real  ) const>(&Geom_Surface::UIso),
             R"#(Computes the U isoparametric curve.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_Surface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_Surface::*)( const Standard_Real  ) const>(&Geom_Surface::VIso),
             R"#(Computes the V isoparametric curve.)#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (Geom_Surface::*)() const) static_cast<GeomAbs_Shape (Geom_Surface::*)() const>(&Geom_Surface::Continuity),
             R"#(Returns the Global Continuity of the surface in direction U and V : C0 : only geometric continuity, C1 : continuity of the first derivative all along the surface, C2 : continuity of the second derivative all along the surface, C3 : continuity of the third derivative all along the surface, G1 : tangency continuity all along the surface, G2 : curvature continuity all along the surface, CN : the order of continuity is infinite. Example : If the surface is C1 in the V parametric direction and C2 in the U parametric direction Shape = C1.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_Surface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_Surface::*)( const Standard_Integer  ) const>(&Geom_Surface::IsCNu),
             R"#(Returns the order of continuity of the surface in the U parametric direction. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_Surface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_Surface::*)( const Standard_Integer  ) const>(&Geom_Surface::IsCNv),
             R"#(Returns the order of continuity of the surface in the V parametric direction. Raised if N < 0.)#"  , py::arg("N"))
        .def("D0",
             (void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Surface::D0),
             R"#(Computes the point of parameter U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Surface::D1),
             R"#(Computes the point P and the first derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Surface::D2),
             R"#(Computes the point P, the first and the second derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Surface::D3),
             R"#(Computes the point P, the first,the second and the third derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_Surface::DN),
             R"#(---Purpose ; Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Value",
             (gp_Pnt (Geom_Surface::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Pnt (Geom_Surface::*)( const Standard_Real ,  const Standard_Real  ) const>(&Geom_Surface::Value),
             R"#(Computes the point of parameter U on the surface.)#"  , py::arg("U"),  py::arg("V"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Surface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Surface::*)() const>(&Geom_Surface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("TransformParameters",
             []( Geom_Surface &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
        .def("Bounds",
             []( Geom_Surface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this surface. If the surface is infinite, this function can return a value equal to Precision::Infinite: instead of Standard_Real::LastReal.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Surface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Surface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Vector ,opencascade::handle<Geom_Vector> ,Py_Geom_Vector , Geom_Geometry >>(m.attr("Geom_Vector"))
    // constructors
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom_Vector::*)() ) static_cast<void (Geom_Vector::*)() >(&Geom_Vector::Reverse),
             R"#(Reverses the vector <me>.)#" )
        .def("Reversed",
             (opencascade::handle<Geom_Vector> (Geom_Vector::*)() const) static_cast<opencascade::handle<Geom_Vector> (Geom_Vector::*)() const>(&Geom_Vector::Reversed),
             R"#(Returns a copy of <me> reversed.)#" )
        .def("Angle",
             (Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) const) static_cast<Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Vector::Angle),
             R"#(Computes the angular value, in radians, between this vector and vector Other. The result is a value between 0 and Pi. Exceptions gp_VectorWithNullMagnitude if: - the magnitude of this vector is less than or equal to gp::Resolution(), or - the magnitude of vector Other is less than or equal to gp::Resolution().)#"  , py::arg("Other"))
        .def("AngleWithRef",
             (Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const) static_cast<Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Vector::AngleWithRef),
             R"#(Computes the angular value, in radians, between this vector and vector Other. The result is a value between -Pi and Pi. The vector VRef defines the positive sense of rotation: the angular value is positive if the cross product this ^ Other has the same orientation as VRef (in relation to the plane defined by this vector and vector Other). Otherwise, it is negative. Exceptions Standard_DomainError if this vector, vector Other and vector VRef are coplanar, except if this vector and vector Other are parallel. gp_VectorWithNullMagnitude if the magnitude of this vector, vector Other or vector VRef is less than or equal to gp::Resolution().)#"  , py::arg("Other"),  py::arg("VRef"))
        .def("Magnitude",
             (Standard_Real (Geom_Vector::*)() const) static_cast<Standard_Real (Geom_Vector::*)() const>(&Geom_Vector::Magnitude),
             R"#(Returns the Magnitude of <me>.)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom_Vector::*)() const) static_cast<Standard_Real (Geom_Vector::*)() const>(&Geom_Vector::SquareMagnitude),
             R"#(Returns the square magnitude of <me>.)#" )
        .def("X",
             (Standard_Real (Geom_Vector::*)() const) static_cast<Standard_Real (Geom_Vector::*)() const>(&Geom_Vector::X),
             R"#(Returns the X coordinate of <me>.)#" )
        .def("Y",
             (Standard_Real (Geom_Vector::*)() const) static_cast<Standard_Real (Geom_Vector::*)() const>(&Geom_Vector::Y),
             R"#(Returns the Y coordinate of <me>.)#" )
        .def("Z",
             (Standard_Real (Geom_Vector::*)() const) static_cast<Standard_Real (Geom_Vector::*)() const>(&Geom_Vector::Z),
             R"#(Returns the Z coordinate of <me>.)#" )
        .def("Cross",
             (void (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) >(&Geom_Vector::Cross),
             R"#(Computes the cross product between <me> and <Other>.)#"  , py::arg("Other"))
        .def("Crossed",
             (opencascade::handle<Geom_Vector> (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_Vector> (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Vector::Crossed),
             R"#(Computes the cross product between <me> and <Other>. A new direction is returned.)#"  , py::arg("Other"))
        .def("CrossCross",
             (void (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) >(&Geom_Vector::CrossCross),
             R"#(Computes the triple vector product <me> ^(V1 ^ V2).)#"  , py::arg("V1"),  py::arg("V2"))
        .def("CrossCrossed",
             (opencascade::handle<Geom_Vector> (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_Vector> (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Vector::CrossCrossed),
             R"#(Computes the triple vector product <me> ^(V1 ^ V2).)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Dot",
             (Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) const) static_cast<Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Vector::Dot),
             R"#(Computes the scalar product of this vector and vector Other.)#"  , py::arg("Other"))
        .def("DotCross",
             (Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const) static_cast<Standard_Real (Geom_Vector::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Vector::DotCross),
             R"#(Computes the triple scalar product. Returns me . (V1 ^ V2))#"  , py::arg("V1"),  py::arg("V2"))
        .def("Vec",
             (const gp_Vec & (Geom_Vector::*)() const) static_cast<const gp_Vec & (Geom_Vector::*)() const>(&Geom_Vector::Vec),
             R"#(Converts this vector into a gp_Vec vector.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Vector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Vector::*)() const>(&Geom_Vector::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( Geom_Vector &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Coord(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Returns the coordinates X, Y and Z of this vector.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Vector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Vector::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Axis1Placement ,opencascade::handle<Geom_Axis1Placement>  , Geom_AxisPlacement >>(m.attr("Geom_Axis1Placement"))
    // constructors
        .def(py::init< const gp_Ax1 & >()  , py::arg("A1") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("Ax1",
             (const gp_Ax1 & (Geom_Axis1Placement::*)() const) static_cast<const gp_Ax1 & (Geom_Axis1Placement::*)() const>(&Geom_Axis1Placement::Ax1),
             R"#(Returns a non transient copy of <me>.)#" )
        .def("Reverse",
             (void (Geom_Axis1Placement::*)() ) static_cast<void (Geom_Axis1Placement::*)() >(&Geom_Axis1Placement::Reverse),
             R"#(Reverses the direction of the axis placement.)#" )
        .def("Reversed",
             (opencascade::handle<Geom_Axis1Placement> (Geom_Axis1Placement::*)() const) static_cast<opencascade::handle<Geom_Axis1Placement> (Geom_Axis1Placement::*)() const>(&Geom_Axis1Placement::Reversed),
             R"#(Returns a copy of <me> reversed.)#" )
        .def("SetDirection",
             (void (Geom_Axis1Placement::*)( const gp_Dir &  ) ) static_cast<void (Geom_Axis1Placement::*)( const gp_Dir &  ) >(&Geom_Axis1Placement::SetDirection),
             R"#(Assigns V to the unit vector of this axis.)#"  , py::arg("V"))
        .def("Transform",
             (void (Geom_Axis1Placement::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Axis1Placement::*)( const gp_Trsf &  ) >(&Geom_Axis1Placement::Transform),
             R"#(Applies the transformation T to this axis.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Axis1Placement::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Axis1Placement::*)() const>(&Geom_Axis1Placement::Copy),
             R"#(Creates a new object, which is a copy of this axis.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Axis1Placement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Axis1Placement::*)() const>(&Geom_Axis1Placement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Axis1Placement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Axis1Placement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Axis2Placement ,opencascade::handle<Geom_Axis2Placement>  , Geom_AxisPlacement >>(m.attr("Geom_Axis2Placement"))
    // constructors
        .def(py::init< const gp_Ax2 & >()  , py::arg("A2") )
        .def(py::init< const gp_Pnt &,const gp_Dir &,const gp_Dir & >()  , py::arg("P"),  py::arg("N"),  py::arg("Vx") )
    // custom constructors
    // methods
        .def("SetAx2",
             (void (Geom_Axis2Placement::*)( const gp_Ax2 &  ) ) static_cast<void (Geom_Axis2Placement::*)( const gp_Ax2 &  ) >(&Geom_Axis2Placement::SetAx2),
             R"#(Assigns the origin and the three unit vectors of A2 to this coordinate system.)#"  , py::arg("A2"))
        .def("SetDirection",
             (void (Geom_Axis2Placement::*)( const gp_Dir &  ) ) static_cast<void (Geom_Axis2Placement::*)( const gp_Dir &  ) >(&Geom_Axis2Placement::SetDirection),
             R"#(Changes the main direction of the axis placement. The "Xdirection" is modified : New XDirection = V ^ (Previous_Xdirection ^ V).)#"  , py::arg("V"))
        .def("SetXDirection",
             (void (Geom_Axis2Placement::*)( const gp_Dir &  ) ) static_cast<void (Geom_Axis2Placement::*)( const gp_Dir &  ) >(&Geom_Axis2Placement::SetXDirection),
             R"#(Changes the "XDirection" of the axis placement, Vx is the new "XDirection". If Vx is not normal to the main direction then "XDirection" is computed as follow : XDirection = Direction ^ ( Vx ^ Direction). The main direction is not modified. Raised if Vx and "Direction" are parallel.)#"  , py::arg("Vx"))
        .def("SetYDirection",
             (void (Geom_Axis2Placement::*)( const gp_Dir &  ) ) static_cast<void (Geom_Axis2Placement::*)( const gp_Dir &  ) >(&Geom_Axis2Placement::SetYDirection),
             R"#(Changes the "YDirection" of the axis placement, Vy is the new "YDirection". If Vy is not normal to the main direction then "YDirection" is computed as follow : YDirection = Direction ^ ( Vy ^ Direction). The main direction is not modified. The "XDirection" is modified. Raised if Vy and the main direction are parallel.)#"  , py::arg("Vy"))
        .def("Ax2",
             (gp_Ax2 (Geom_Axis2Placement::*)() const) static_cast<gp_Ax2 (Geom_Axis2Placement::*)() const>(&Geom_Axis2Placement::Ax2),
             R"#(Returns a non transient copy of <me>.)#" )
        .def("XDirection",
             (const gp_Dir & (Geom_Axis2Placement::*)() const) static_cast<const gp_Dir & (Geom_Axis2Placement::*)() const>(&Geom_Axis2Placement::XDirection),
             R"#(Returns the "XDirection". This is a unit vector.)#" )
        .def("YDirection",
             (const gp_Dir & (Geom_Axis2Placement::*)() const) static_cast<const gp_Dir & (Geom_Axis2Placement::*)() const>(&Geom_Axis2Placement::YDirection),
             R"#(Returns the "YDirection". This is a unit vector.)#" )
        .def("Transform",
             (void (Geom_Axis2Placement::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Axis2Placement::*)( const gp_Trsf &  ) >(&Geom_Axis2Placement::Transform),
             R"#(Transforms an axis placement with a Trsf. The "Location" point, the "XDirection" and the "YDirection" are transformed with T. The resulting main "Direction" of <me> is the cross product between the "XDirection" and the "YDirection" after transformation.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Axis2Placement::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Axis2Placement::*)() const>(&Geom_Axis2Placement::Copy),
             R"#(Creates a new object which is a copy of this coordinate system.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Axis2Placement::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Axis2Placement::*)() const>(&Geom_Axis2Placement::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Axis2Placement::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Axis2Placement::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_BoundedCurve ,opencascade::handle<Geom_BoundedCurve> ,Py_Geom_BoundedCurve , Geom_Curve >>(m.attr("Geom_BoundedCurve"))
    // constructors
    // custom constructors
    // methods
        .def("EndPoint",
             (gp_Pnt (Geom_BoundedCurve::*)() const) static_cast<gp_Pnt (Geom_BoundedCurve::*)() const>(&Geom_BoundedCurve::EndPoint),
             R"#(Returns the end point of the curve.)#" )
        .def("StartPoint",
             (gp_Pnt (Geom_BoundedCurve::*)() const) static_cast<gp_Pnt (Geom_BoundedCurve::*)() const>(&Geom_BoundedCurve::StartPoint),
             R"#(Returns the start point of the curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_BoundedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_BoundedCurve::*)() const>(&Geom_BoundedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_BoundedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_BoundedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_BoundedSurface ,opencascade::handle<Geom_BoundedSurface> ,Py_Geom_BoundedSurface , Geom_Surface >>(m.attr("Geom_BoundedSurface"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_BoundedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_BoundedSurface::*)() const>(&Geom_BoundedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_BoundedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_BoundedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_CartesianPoint ,opencascade::handle<Geom_CartesianPoint>  , Geom_Point >>(m.attr("Geom_CartesianPoint"))
    // constructors
        .def(py::init< const gp_Pnt & >()  , py::arg("P") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y"),  py::arg("Z") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (Geom_CartesianPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_CartesianPoint::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Geom_CartesianPoint::SetCoord),
             R"#(Assigns the coordinates X, Y and Z to this point.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetPnt",
             (void (Geom_CartesianPoint::*)( const gp_Pnt &  ) ) static_cast<void (Geom_CartesianPoint::*)( const gp_Pnt &  ) >(&Geom_CartesianPoint::SetPnt),
             R"#(Set <me> to P.X(), P.Y(), P.Z() coordinates.)#"  , py::arg("P"))
        .def("SetX",
             (void (Geom_CartesianPoint::*)( const Standard_Real  ) ) static_cast<void (Geom_CartesianPoint::*)( const Standard_Real  ) >(&Geom_CartesianPoint::SetX),
             R"#(Changes the X coordinate of me.)#"  , py::arg("X"))
        .def("SetY",
             (void (Geom_CartesianPoint::*)( const Standard_Real  ) ) static_cast<void (Geom_CartesianPoint::*)( const Standard_Real  ) >(&Geom_CartesianPoint::SetY),
             R"#(Changes the Y coordinate of me.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (Geom_CartesianPoint::*)( const Standard_Real  ) ) static_cast<void (Geom_CartesianPoint::*)( const Standard_Real  ) >(&Geom_CartesianPoint::SetZ),
             R"#(Changes the Z coordinate of me.)#"  , py::arg("Z"))
        .def("Pnt",
             (gp_Pnt (Geom_CartesianPoint::*)() const) static_cast<gp_Pnt (Geom_CartesianPoint::*)() const>(&Geom_CartesianPoint::Pnt),
             R"#(Returns a non transient cartesian point with the same coordinates as <me>.)#" )
        .def("X",
             (Standard_Real (Geom_CartesianPoint::*)() const) static_cast<Standard_Real (Geom_CartesianPoint::*)() const>(&Geom_CartesianPoint::X),
             R"#(Returns the X coordinate of <me>.)#" )
        .def("Y",
             (Standard_Real (Geom_CartesianPoint::*)() const) static_cast<Standard_Real (Geom_CartesianPoint::*)() const>(&Geom_CartesianPoint::Y),
             R"#(Returns the Y coordinate of <me>.)#" )
        .def("Z",
             (Standard_Real (Geom_CartesianPoint::*)() const) static_cast<Standard_Real (Geom_CartesianPoint::*)() const>(&Geom_CartesianPoint::Z),
             R"#(Returns the Z coordinate of <me>.)#" )
        .def("Transform",
             (void (Geom_CartesianPoint::*)( const gp_Trsf &  ) ) static_cast<void (Geom_CartesianPoint::*)( const gp_Trsf &  ) >(&Geom_CartesianPoint::Transform),
             R"#(Applies the transformation T to this point.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_CartesianPoint::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_CartesianPoint::*)() const>(&Geom_CartesianPoint::Copy),
             R"#(Creates a new object which is a copy of this point.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_CartesianPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_CartesianPoint::*)() const>(&Geom_CartesianPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Coord",
             []( Geom_CartesianPoint &self   ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; self.Coord(X,Y,Z); return std::make_tuple(X,Y,Z); },
             R"#(Returns the coordinates of <me>.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_CartesianPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_CartesianPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Conic ,opencascade::handle<Geom_Conic> ,Py_Geom_Conic , Geom_Curve >>(m.attr("Geom_Conic"))
    // constructors
    // custom constructors
    // methods
        .def("SetAxis",
             (void (Geom_Conic::*)( const gp_Ax1 &  ) ) static_cast<void (Geom_Conic::*)( const gp_Ax1 &  ) >(&Geom_Conic::SetAxis),
             R"#(Changes the orientation of the conic's plane. The normal axis to the plane is A1. The XAxis and the YAxis are recomputed.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (Geom_Conic::*)( const gp_Pnt &  ) ) static_cast<void (Geom_Conic::*)( const gp_Pnt &  ) >(&Geom_Conic::SetLocation),
             R"#(changes the location point of the conic.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (Geom_Conic::*)( const gp_Ax2 &  ) ) static_cast<void (Geom_Conic::*)( const gp_Ax2 &  ) >(&Geom_Conic::SetPosition),
             R"#(changes the local coordinate system of the conic.)#"  , py::arg("A2"))
        .def("Axis",
             (gp_Ax1 (Geom_Conic::*)() const) static_cast<gp_Ax1 (Geom_Conic::*)() const>(&Geom_Conic::Axis),
             R"#(Returns the "main Axis" of this conic. This axis is normal to the plane of the conic.)#" )
        .def("Eccentricity",
             (Standard_Real (Geom_Conic::*)() const) static_cast<Standard_Real (Geom_Conic::*)() const>(&Geom_Conic::Eccentricity),
             R"#(Returns the eccentricity value of the conic e. e = 0 for a circle 0 < e < 1 for an ellipse (e = 0 if MajorRadius = MinorRadius) e > 1 for a hyperbola e = 1 for a parabola Exceptions Standard_DomainError in the case of a hyperbola if its major radius is null.)#" )
        .def("Location",
             (gp_Pnt (Geom_Conic::*)() const) static_cast<gp_Pnt (Geom_Conic::*)() const>(&Geom_Conic::Location),
             R"#(Returns the location point of the conic. For the circle, the ellipse and the hyperbola it is the center of the conic. For the parabola it is the Apex of the parabola.)#" )
        .def("Position",
             (const gp_Ax2 & (Geom_Conic::*)() const) static_cast<const gp_Ax2 & (Geom_Conic::*)() const>(&Geom_Conic::Position),
             R"#(Returns the local coordinates system of the conic. The main direction of the Axis2Placement is normal to the plane of the conic. The X direction of the Axis2placement is in the plane of the conic and corresponds to the origin for the conic's parametric value u.)#" )
        .def("XAxis",
             (gp_Ax1 (Geom_Conic::*)() const) static_cast<gp_Ax1 (Geom_Conic::*)() const>(&Geom_Conic::XAxis),
             R"#(Returns the XAxis of the conic. This axis defines the origin of parametrization of the conic. This axis is perpendicular to the Axis of the conic. This axis and the Yaxis define the plane of the conic.)#" )
        .def("YAxis",
             (gp_Ax1 (Geom_Conic::*)() const) static_cast<gp_Ax1 (Geom_Conic::*)() const>(&Geom_Conic::YAxis),
             R"#(Returns the YAxis of the conic. The YAxis is perpendicular to the Xaxis. This axis and the Xaxis define the plane of the conic.)#" )
        .def("Reverse",
             (void (Geom_Conic::*)() ) static_cast<void (Geom_Conic::*)() >(&Geom_Conic::Reverse),
             R"#(Reverses the direction of parameterization of <me>. The local coordinate system of the conic is modified.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_Conic::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Conic::*)( const Standard_Real  ) const>(&Geom_Conic::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Continuity",
             (GeomAbs_Shape (Geom_Conic::*)() const) static_cast<GeomAbs_Shape (Geom_Conic::*)() const>(&Geom_Conic::Continuity),
             R"#(The continuity of the conic is Cn.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom_Conic::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_Conic::*)( const Standard_Integer  ) const>(&Geom_Conic::IsCN),
             R"#(Returns True. Raised if N < 0.)#"  , py::arg("N"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Conic::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Conic::*)() const>(&Geom_Conic::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Conic::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Conic::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Direction ,opencascade::handle<Geom_Direction>  , Geom_Vector >>(m.attr("Geom_Direction"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y"),  py::arg("Z") )
        .def(py::init< const gp_Dir & >()  , py::arg("V") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (Geom_Direction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_Direction::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Geom_Direction::SetCoord),
             R"#(Sets <me> to X,Y,Z coordinates.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetDir",
             (void (Geom_Direction::*)( const gp_Dir &  ) ) static_cast<void (Geom_Direction::*)( const gp_Dir &  ) >(&Geom_Direction::SetDir),
             R"#(Converts the gp_Dir unit vector V into this unit vector.)#"  , py::arg("V"))
        .def("SetX",
             (void (Geom_Direction::*)( const Standard_Real  ) ) static_cast<void (Geom_Direction::*)( const Standard_Real  ) >(&Geom_Direction::SetX),
             R"#(Changes the X coordinate of <me>.)#"  , py::arg("X"))
        .def("SetY",
             (void (Geom_Direction::*)( const Standard_Real  ) ) static_cast<void (Geom_Direction::*)( const Standard_Real  ) >(&Geom_Direction::SetY),
             R"#(Changes the Y coordinate of <me>.)#"  , py::arg("Y"))
        .def("SetZ",
             (void (Geom_Direction::*)( const Standard_Real  ) ) static_cast<void (Geom_Direction::*)( const Standard_Real  ) >(&Geom_Direction::SetZ),
             R"#(Changes the Z coordinate of <me>.)#"  , py::arg("Z"))
        .def("Dir",
             (gp_Dir (Geom_Direction::*)() const) static_cast<gp_Dir (Geom_Direction::*)() const>(&Geom_Direction::Dir),
             R"#(Returns the non transient direction with the same coordinates as <me>.)#" )
        .def("Magnitude",
             (Standard_Real (Geom_Direction::*)() const) static_cast<Standard_Real (Geom_Direction::*)() const>(&Geom_Direction::Magnitude),
             R"#(returns 1.0 which is the magnitude of any unit vector.)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom_Direction::*)() const) static_cast<Standard_Real (Geom_Direction::*)() const>(&Geom_Direction::SquareMagnitude),
             R"#(returns 1.0 which is the square magnitude of any unit vector.)#" )
        .def("Cross",
             (void (Geom_Direction::*)( const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_Direction::*)( const opencascade::handle<Geom_Vector> &  ) >(&Geom_Direction::Cross),
             R"#(Computes the cross product between <me> and <Other>.)#"  , py::arg("Other"))
        .def("CrossCross",
             (void (Geom_Direction::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_Direction::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) >(&Geom_Direction::CrossCross),
             R"#(Computes the triple vector product <me> ^(V1 ^ V2).)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Crossed",
             (opencascade::handle<Geom_Vector> (Geom_Direction::*)( const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_Vector> (Geom_Direction::*)( const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Direction::Crossed),
             R"#(Computes the cross product between <me> and <Other>. A new direction is returned.)#"  , py::arg("Other"))
        .def("CrossCrossed",
             (opencascade::handle<Geom_Vector> (Geom_Direction::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_Vector> (Geom_Direction::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const>(&Geom_Direction::CrossCrossed),
             R"#(Computes the triple vector product <me> ^(V1 ^ V2).)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Transform",
             (void (Geom_Direction::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Direction::*)( const gp_Trsf &  ) >(&Geom_Direction::Transform),
             R"#(Applies the transformation T to this unit vector, then normalizes it.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Direction::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Direction::*)() const>(&Geom_Direction::Copy),
             R"#(Creates a new object which is a copy of this unit vector.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Direction::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Direction::*)() const>(&Geom_Direction::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Direction::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Direction::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_ElementarySurface ,opencascade::handle<Geom_ElementarySurface> ,Py_Geom_ElementarySurface , Geom_Surface >>(m.attr("Geom_ElementarySurface"))
    // constructors
    // custom constructors
    // methods
        .def("SetAxis",
             (void (Geom_ElementarySurface::*)( const gp_Ax1 &  ) ) static_cast<void (Geom_ElementarySurface::*)( const gp_Ax1 &  ) >(&Geom_ElementarySurface::SetAxis),
             R"#(Changes the main axis (ZAxis) of the elementary surface.)#"  , py::arg("A1"))
        .def("SetLocation",
             (void (Geom_ElementarySurface::*)( const gp_Pnt &  ) ) static_cast<void (Geom_ElementarySurface::*)( const gp_Pnt &  ) >(&Geom_ElementarySurface::SetLocation),
             R"#(Changes the location of the local coordinates system of the surface.)#"  , py::arg("Loc"))
        .def("SetPosition",
             (void (Geom_ElementarySurface::*)( const gp_Ax3 &  ) ) static_cast<void (Geom_ElementarySurface::*)( const gp_Ax3 &  ) >(&Geom_ElementarySurface::SetPosition),
             R"#(Changes the local coordinates system of the surface.)#"  , py::arg("A3"))
        .def("Axis",
             (gp_Ax1 (Geom_ElementarySurface::*)() const) static_cast<gp_Ax1 (Geom_ElementarySurface::*)() const>(&Geom_ElementarySurface::Axis),
             R"#(Returns the main axis of the surface (ZAxis).)#" )
        .def("Location",
             (gp_Pnt (Geom_ElementarySurface::*)() const) static_cast<gp_Pnt (Geom_ElementarySurface::*)() const>(&Geom_ElementarySurface::Location),
             R"#(Returns the location point of the local coordinate system of the surface.)#" )
        .def("Position",
             (const gp_Ax3 & (Geom_ElementarySurface::*)() const) static_cast<const gp_Ax3 & (Geom_ElementarySurface::*)() const>(&Geom_ElementarySurface::Position),
             R"#(Returns the local coordinates system of the surface.)#" )
        .def("UReverse",
             (void (Geom_ElementarySurface::*)() ) static_cast<void (Geom_ElementarySurface::*)() >(&Geom_ElementarySurface::UReverse),
             R"#(Reverses the U parametric direction of the surface.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_ElementarySurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_ElementarySurface::*)( const Standard_Real  ) const>(&Geom_ElementarySurface::UReversedParameter),
             R"#(Return the parameter on the Ureversed surface for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_ElementarySurface::*)() ) static_cast<void (Geom_ElementarySurface::*)() >(&Geom_ElementarySurface::VReverse),
             R"#(Reverses the V parametric direction of the surface.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_ElementarySurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_ElementarySurface::*)( const Standard_Real  ) const>(&Geom_ElementarySurface::VReversedParameter),
             R"#(Return the parameter on the Vreversed surface for the point of parameter V on <me>.)#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (Geom_ElementarySurface::*)() const) static_cast<GeomAbs_Shape (Geom_ElementarySurface::*)() const>(&Geom_ElementarySurface::Continuity),
             R"#(Returns GeomAbs_CN, the global continuity of any elementary surface.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_ElementarySurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_ElementarySurface::*)( const Standard_Integer  ) const>(&Geom_ElementarySurface::IsCNu),
             R"#(Returns True.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_ElementarySurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_ElementarySurface::*)( const Standard_Integer  ) const>(&Geom_ElementarySurface::IsCNv),
             R"#(Returns True.)#"  , py::arg("N"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_ElementarySurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_ElementarySurface::*)() const>(&Geom_ElementarySurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_ElementarySurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_ElementarySurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Line ,opencascade::handle<Geom_Line>  , Geom_Curve >>(m.attr("Geom_Line"))
    // constructors
        .def(py::init< const gp_Ax1 & >()  , py::arg("A1") )
        .def(py::init< const gp_Lin & >()  , py::arg("L") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
    // custom constructors
    // methods
        .def("SetLin",
             (void (Geom_Line::*)( const gp_Lin &  ) ) static_cast<void (Geom_Line::*)( const gp_Lin &  ) >(&Geom_Line::SetLin),
             R"#(Set <me> so that <me> has the same geometric properties as L.)#"  , py::arg("L"))
        .def("SetDirection",
             (void (Geom_Line::*)( const gp_Dir &  ) ) static_cast<void (Geom_Line::*)( const gp_Dir &  ) >(&Geom_Line::SetDirection),
             R"#(changes the direction of the line.)#"  , py::arg("V"))
        .def("SetLocation",
             (void (Geom_Line::*)( const gp_Pnt &  ) ) static_cast<void (Geom_Line::*)( const gp_Pnt &  ) >(&Geom_Line::SetLocation),
             R"#(changes the "Location" point (origin) of the line.)#"  , py::arg("P"))
        .def("SetPosition",
             (void (Geom_Line::*)( const gp_Ax1 &  ) ) static_cast<void (Geom_Line::*)( const gp_Ax1 &  ) >(&Geom_Line::SetPosition),
             R"#(changes the "Location" and a the "Direction" of <me>.)#"  , py::arg("A1"))
        .def("Lin",
             (gp_Lin (Geom_Line::*)() const) static_cast<gp_Lin (Geom_Line::*)() const>(&Geom_Line::Lin),
             R"#(Returns non transient line from gp with the same geometric properties as <me>)#" )
        .def("Position",
             (const gp_Ax1 & (Geom_Line::*)() const) static_cast<const gp_Ax1 & (Geom_Line::*)() const>(&Geom_Line::Position),
             R"#(Returns the positioning axis of this line; this is also its local coordinate system.)#" )
        .def("Reverse",
             (void (Geom_Line::*)() ) static_cast<void (Geom_Line::*)() >(&Geom_Line::Reverse),
             R"#(Changes the orientation of this line. As a result, the unit vector of the positioning axis of this line is reversed.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_Line::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Line::*)( const Standard_Real  ) const>(&Geom_Line::ReversedParameter),
             R"#(Computes the parameter on the reversed line for the point of parameter U on this line. For a line, the returned value is -U.)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (Geom_Line::*)() const) static_cast<Standard_Real (Geom_Line::*)() const>(&Geom_Line::FirstParameter),
             R"#(Returns the value of the first parameter of this line. This is Standard_Real::RealFirst().)#" )
        .def("LastParameter",
             (Standard_Real (Geom_Line::*)() const) static_cast<Standard_Real (Geom_Line::*)() const>(&Geom_Line::LastParameter),
             R"#(Returns the value of the last parameter of this line. This is Standard_Real::RealLast().)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_Line::*)() const) static_cast<Standard_Boolean (Geom_Line::*)() const>(&Geom_Line::IsClosed),
             R"#(returns False)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_Line::*)() const) static_cast<Standard_Boolean (Geom_Line::*)() const>(&Geom_Line::IsPeriodic),
             R"#(returns False)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom_Line::*)() const) static_cast<GeomAbs_Shape (Geom_Line::*)() const>(&Geom_Line::Continuity),
             R"#(Returns GeomAbs_CN, which is the global continuity of any line.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom_Line::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_Line::*)( const Standard_Integer  ) const>(&Geom_Line::IsCN),
             R"#(returns True. Raised if N < 0.)#"  , py::arg("N"))
        .def("D0",
             (void (Geom_Line::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Line::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Line::D0),
             R"#(Returns in P the point of parameter U. P (U) = O + U * Dir where O is the "Location" point of the line and Dir the direction of the line.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_Line::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_Line::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_Line::D1),
             R"#(Returns the point P of parameter u and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_Line::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Line::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Line::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. V2 is a vector with null magnitude for a line.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_Line::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Line::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Line::D3),
             R"#(V2 and V3 are vectors with null magnitude for a line.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_Line::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Line::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_Line::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom_Line::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Line::*)( const gp_Trsf &  ) >(&Geom_Line::Transform),
             R"#(Applies the transformation T to this line.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom_Line::*)( const Standard_Real ,  const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_Line::*)( const Standard_Real ,  const gp_Trsf &  ) const>(&Geom_Line::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom_Line::*)( const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_Line::*)( const gp_Trsf &  ) const>(&Geom_Line::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Line::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Line::*)() const>(&Geom_Line::Copy),
             R"#(Creates a new object which is a copy of this line.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Line::*)() const>(&Geom_Line::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Line::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Line::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_OffsetCurve ,opencascade::handle<Geom_OffsetCurve>  , Geom_Curve >>(m.attr("Geom_OffsetCurve"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const gp_Dir &,const Standard_Boolean >()  , py::arg("C"),  py::arg("Offset"),  py::arg("V"),  py::arg("isNotCheckC0")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom_OffsetCurve::*)() ) static_cast<void (Geom_OffsetCurve::*)() >(&Geom_OffsetCurve::Reverse),
             R"#(Changes the orientation of this offset curve. As a result: - the basis curve is reversed, - the start point of the initial curve becomes the end point of the reversed curve, - the end point of the initial curve becomes the start point of the reversed curve, and - the first and last parameters are recomputed.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_OffsetCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_OffsetCurve::*)( const Standard_Real  ) const>(&Geom_OffsetCurve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this offset curve.)#"  , py::arg("U"))
        .def("SetBasisCurve",
             (void (Geom_OffsetCurve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Boolean  ) ) static_cast<void (Geom_OffsetCurve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Boolean  ) >(&Geom_OffsetCurve::SetBasisCurve),
             R"#(Changes this offset curve by assigning C as the basis curve from which it is built. If isNotCheckC0 = TRUE checking if basis curve has C0-continuity is not made. Exceptions Standard_ConstructionError if the curve C is not at least "C1" continuous.)#"  , py::arg("C"),  py::arg("isNotCheckC0")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetDirection",
             (void (Geom_OffsetCurve::*)( const gp_Dir &  ) ) static_cast<void (Geom_OffsetCurve::*)( const gp_Dir &  ) >(&Geom_OffsetCurve::SetDirection),
             R"#(Changes this offset curve by assigning V as the reference vector used to compute the offset direction.)#"  , py::arg("V"))
        .def("SetOffsetValue",
             (void (Geom_OffsetCurve::*)( const Standard_Real  ) ) static_cast<void (Geom_OffsetCurve::*)( const Standard_Real  ) >(&Geom_OffsetCurve::SetOffsetValue),
             R"#(Changes this offset curve by assigning D as the offset value.)#"  , py::arg("D"))
        .def("BasisCurve",
             (opencascade::handle<Geom_Curve> (Geom_OffsetCurve::*)() const) static_cast<opencascade::handle<Geom_Curve> (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::BasisCurve),
             R"#(Returns the basis curve of this offset curve. Note: The basis curve can be an offset curve.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom_OffsetCurve::*)() const) static_cast<GeomAbs_Shape (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::Continuity),
             R"#(Returns the global continuity of this offset curve as a value of the GeomAbs_Shape enumeration. The degree of continuity of this offset curve is equal to the degree of continuity of the basis curve minus 1. Continuity of the Offset curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, G1 : tangency continuity all along the Curve, G2 : curvature continuity all along the Curve, CN : the order of continuity is infinite. Warnings : Returns the continuity of the basis curve - 1. The offset curve must have a unique offset direction defined at any point.)#" )
        .def("Direction",
             (const gp_Dir & (Geom_OffsetCurve::*)() const) static_cast<const gp_Dir & (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::Direction),
             R"#(Returns the reference vector of this offset curve. Value and derivatives Warnings : The exception UndefinedValue or UndefinedDerivative is raised if it is not possible to compute a unique offset direction. If T is the first derivative with not null length and V the offset direction the relation ||T(U) ^ V|| != 0 must be satisfied to evaluate the offset curve. No check is done at the creation time and we suppose in this package that the offset curve is well defined.)#" )
        .def("D0",
             (void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_OffsetCurve::D0),
             R"#(Warning! this should not be called if the basis curve is not at least C1. Nevertheless if used on portion where the curve is C1, it is OK)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_OffsetCurve::D1),
             R"#(Warning! this should not be called if the continuity of the basis curve is not C2. Nevertheless, it's OK to use it on portion where the curve is C2)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_OffsetCurve::D2),
             R"#(Warning! this should not be called if the continuity of the basis curve is not C3. Nevertheless, it's OK to use it on portion where the curve is C3)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_OffsetCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_OffsetCurve::D3),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_OffsetCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_OffsetCurve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N.)#"  , py::arg("U"),  py::arg("N"))
        .def("FirstParameter",
             (Standard_Real (Geom_OffsetCurve::*)() const) static_cast<Standard_Real (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::FirstParameter),
             R"#(Returns the value of the first parameter of this offset curve. The first parameter corresponds to the start point of the curve. Note: the first and last parameters of this offset curve are also the ones of its basis curve.)#" )
        .def("LastParameter",
             (Standard_Real (Geom_OffsetCurve::*)() const) static_cast<Standard_Real (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::LastParameter),
             R"#(Returns the value of the last parameter of this offset curve. The last parameter corresponds to the end point. Note: the first and last parameters of this offset curve are also the ones of its basis curve.)#" )
        .def("Offset",
             (Standard_Real (Geom_OffsetCurve::*)() const) static_cast<Standard_Real (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::Offset),
             R"#(Returns the offset value of this offset curve.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_OffsetCurve::*)() const) static_cast<Standard_Boolean (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::IsClosed),
             R"#(Returns True if the distance between the start point and the end point of the curve is lower or equal to Resolution from package gp.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom_OffsetCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_OffsetCurve::*)( const Standard_Integer  ) const>(&Geom_OffsetCurve::IsCN),
             R"#(Returns true if the degree of continuity of the basis curve of this offset curve is at least N + 1. This method answer True if the continuity of the basis curve is N + 1. We suppose in this class that a normal direction to the basis curve (used to compute the offset curve) is defined at any point on the basis curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsPeriodic",
             (Standard_Boolean (Geom_OffsetCurve::*)() const) static_cast<Standard_Boolean (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::IsPeriodic),
             R"#(Returns true if this offset curve is periodic, i.e. if the basis curve of this offset curve is periodic.)#" )
        .def("Period",
             (Standard_Real (Geom_OffsetCurve::*)() const) static_cast<Standard_Real (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::Period),
             R"#(Returns the period of this offset curve, i.e. the period of the basis curve of this offset curve. Exceptions Standard_NoSuchObject if the basis curve is not periodic.)#" )
        .def("Transform",
             (void (Geom_OffsetCurve::*)( const gp_Trsf &  ) ) static_cast<void (Geom_OffsetCurve::*)( const gp_Trsf &  ) >(&Geom_OffsetCurve::Transform),
             R"#(Applies the transformation T to this offset curve. Note: the basis curve is also modified.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom_OffsetCurve::*)( const Standard_Real ,  const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_OffsetCurve::*)( const Standard_Real ,  const gp_Trsf &  ) const>(&Geom_OffsetCurve::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>. me->Transformed(T)->Value(me->TransformedParameter(U,T)) is the same point as me->Value(U).Transformed(T) This methods calls the basis curve method.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom_OffsetCurve::*)( const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_OffsetCurve::*)( const gp_Trsf &  ) const>(&Geom_OffsetCurve::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_OffsetCurve::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::Copy),
             R"#(Creates a new object which is a copy of this offset curve.)#" )
        .def("GetBasisCurveContinuity",
             (GeomAbs_Shape (Geom_OffsetCurve::*)() const) static_cast<GeomAbs_Shape (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::GetBasisCurveContinuity),
             R"#(Returns continuity of the basis curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_OffsetCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_OffsetCurve::*)() const>(&Geom_OffsetCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_OffsetCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_OffsetCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_OffsetSurface ,opencascade::handle<Geom_OffsetSurface>  , Geom_Surface >>(m.attr("Geom_OffsetSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Boolean >()  , py::arg("S"),  py::arg("Offset"),  py::arg("isNotCheckC0")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("SetBasisSurface",
             (void (Geom_OffsetSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Boolean  ) ) static_cast<void (Geom_OffsetSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Boolean  ) >(&Geom_OffsetSurface::SetBasisSurface),
             R"#(Raised if S is not at least C1. Warnings : No check is done to verify that a unique normal direction is defined at any point of the basis surface S. If isNotCheckC0 = TRUE checking if basis surface has C0-continuity is not made. Exceptions Standard_ConstructionError if the surface S is not at least "C1" continuous.)#"  , py::arg("S"),  py::arg("isNotCheckC0")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetOffsetValue",
             (void (Geom_OffsetSurface::*)( const Standard_Real  ) ) static_cast<void (Geom_OffsetSurface::*)( const Standard_Real  ) >(&Geom_OffsetSurface::SetOffsetValue),
             R"#(Changes this offset surface by assigning D as the offset value.)#"  , py::arg("D"))
        .def("Offset",
             (Standard_Real (Geom_OffsetSurface::*)() const) static_cast<Standard_Real (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::Offset),
             R"#(Returns the offset value of this offset surface.)#" )
        .def("BasisSurface",
             (const opencascade::handle<Geom_Surface> & (Geom_OffsetSurface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::BasisSurface),
             R"#(Returns the basis surface of this offset surface. Note: The basis surface can be an offset surface.)#" )
        .def("OsculatingSurface",
             (const opencascade::handle<Geom_OsculatingSurface> & (Geom_OffsetSurface::*)() const) static_cast<const opencascade::handle<Geom_OsculatingSurface> & (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::OsculatingSurface),
             R"#(Returns osculating surface if base surface is B-spline or Bezier)#" )
        .def("UReverse",
             (void (Geom_OffsetSurface::*)() ) static_cast<void (Geom_OffsetSurface::*)() >(&Geom_OffsetSurface::UReverse),
             R"#(Changes the orientation of this offset surface in the u parametric direction. The bounds of the surface are not changed but the given parametric direction is reversed.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_OffsetSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_OffsetSurface::*)( const Standard_Real  ) const>(&Geom_OffsetSurface::UReversedParameter),
             R"#(Computes the u parameter on the modified surface, produced by reversing the u parametric direction of this offset surface, for any point of u parameter U on this offset surface.)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_OffsetSurface::*)() ) static_cast<void (Geom_OffsetSurface::*)() >(&Geom_OffsetSurface::VReverse),
             R"#(Changes the orientation of this offset surface in the v parametric direction. The bounds of the surface are not changed but the given parametric direction is reversed.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_OffsetSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_OffsetSurface::*)( const Standard_Real  ) const>(&Geom_OffsetSurface::VReversedParameter),
             R"#(Computes the v parameter on the modified surface, produced by reversing the or v parametric direction of this offset surface, for any point of v parameter V on this offset surface.)#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (Geom_OffsetSurface::*)() const) static_cast<GeomAbs_Shape (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::Continuity),
             R"#(This method returns the continuity of the basis surface - 1. Continuity of the Offset surface : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Surface, C2 : continuity of the second derivative all along the Surface, C3 : continuity of the third derivative all along the Surface, CN : the order of continuity is infinite. Example : If the basis surface is C2 in the V direction and C3 in the U direction Shape = C1. Warnings : If the basis surface has a unique normal direction defined at any point this method gives the continuity of the offset surface otherwise the effective continuity can be lower than the continuity of the basis surface - 1.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Integer  ) const>(&Geom_OffsetSurface::IsCNu),
             R"#(This method answer True if the continuity of the basis surface is N + 1 in the U parametric direction. We suppose in this class that a unique normal is defined at any point on the basis surface. Raised if N <0.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Integer  ) const>(&Geom_OffsetSurface::IsCNv),
             R"#(This method answer True if the continuity of the basis surface is N + 1 in the V parametric direction. We suppose in this class that a unique normal is defined at any point on the basis surface. Raised if N <0.)#"  , py::arg("N"))
        .def("IsUClosed",
             (Standard_Boolean (Geom_OffsetSurface::*)() const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::IsUClosed),
             R"#(Checks whether this offset surface is closed in the u parametric direction. Returns true if, taking uFirst and uLast as the parametric bounds in the u parametric direction, the distance between the points P(uFirst,v) and P(uLast,v) is less than or equal to gp::Resolution() for each value of the parameter v.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_OffsetSurface::*)() const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::IsVClosed),
             R"#(Checks whether this offset surface is closed in the u or v parametric direction. Returns true if taking vFirst and vLast as the parametric bounds in the v parametric direction, the distance between the points P(u,vFirst) and P(u,vLast) is less than or equal to gp::Resolution() for each value of the parameter u.)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_OffsetSurface::*)() const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::IsUPeriodic),
             R"#(Returns true if this offset surface is periodic in the u parametric direction, i.e. if the basis surface of this offset surface is periodic in this direction.)#" )
        .def("UPeriod",
             (Standard_Real (Geom_OffsetSurface::*)() const) static_cast<Standard_Real (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::UPeriod),
             R"#(Returns the period of this offset surface in the u parametric direction respectively, i.e. the period of the basis surface of this offset surface in this parametric direction. raises if the surface is not uperiodic.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_OffsetSurface::*)() const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::IsVPeriodic),
             R"#(Returns true if this offset surface is periodic in the v parametric direction, i.e. if the basis surface of this offset surface is periodic in this direction.)#" )
        .def("VPeriod",
             (Standard_Real (Geom_OffsetSurface::*)() const) static_cast<Standard_Real (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::VPeriod),
             R"#(Returns the period of this offset surface in the v parametric direction respectively, i.e. the period of the basis surface of this offset surface in this parametric direction. raises if the surface is not vperiodic.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_OffsetSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_OffsetSurface::*)( const Standard_Real  ) const>(&Geom_OffsetSurface::UIso),
             R"#(Computes the U isoparametric curve.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_OffsetSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_OffsetSurface::*)( const Standard_Real  ) const>(&Geom_OffsetSurface::VIso),
             R"#(Computes the V isoparametric curve.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_OffsetSurface::D0),
             R"#(P (U, V) = Pbasis + Offset * Ndir where Ndir = D1Ubasis ^ D1Vbasis / ||D1Ubasis ^ D1Vbasis|| is the normal direction of the basis surface. Pbasis, D1Ubasis, D1Vbasis are the point and the first derivatives on the basis surface. If Ndir is undefined this method computes an approched normal direction using the following limited development : Ndir = N0 + DNdir/DU + DNdir/DV + Eps with Eps->0 which requires to compute the second derivatives on the basis surface. If the normal direction cannot be approximate for this order of derivation the exception UndefinedValue is raised.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_OffsetSurface::D1),
             R"#(Raised if the continuity of the basis surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_OffsetSurface::D2),
             R"#(---Purpose ; Raised if the continuity of the basis surface is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_OffsetSurface::D3),
             R"#(Raised if the continuity of the basis surface is not C4.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_OffsetSurface::DN),
             R"#(Computes the derivative of order Nu in the direction u and Nv in the direction v. ---Purpose ; Raised if the continuity of the basis surface is not CNu + 1 in the U direction and CNv + 1 in the V direction. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_OffsetSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_OffsetSurface::*)( const gp_Trsf &  ) >(&Geom_OffsetSurface::Transform),
             R"#(Applies the transformation T to this offset surface. Note: the basis surface is also modified.)#"  , py::arg("T"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_OffsetSurface::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_OffsetSurface::*)( const gp_Trsf &  ) const>(&Geom_OffsetSurface::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_OffsetSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::Copy),
             R"#(Creates a new object which is a copy of this offset surface.)#" )
        .def("Surface",
             (opencascade::handle<Geom_Surface> (Geom_OffsetSurface::*)() const) static_cast<opencascade::handle<Geom_Surface> (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::Surface),
             R"#(returns an equivalent surface of the offset surface when the basis surface is a canonic surface or a rectangular limited surface on canonic surface or if the offset is null.)#" )
        .def("UOsculatingSurface",
             (Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const>(&Geom_OffsetSurface::UOsculatingSurface),
             R"#(if Standard_True, L is the local osculating surface along U at the point U,V. It means that DL/DU is collinear to DS/DU . If IsOpposite == Standard_True these vectors have opposite direction.)#"  , py::arg("U"),  py::arg("V"),  py::arg("IsOpposite"),  py::arg("UOsculSurf"))
        .def("VOsculatingSurface",
             (Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const) static_cast<Standard_Boolean (Geom_OffsetSurface::*)( const Standard_Real ,  const Standard_Real ,  Standard_Boolean & ,  opencascade::handle<Geom_BSplineSurface> &  ) const>(&Geom_OffsetSurface::VOsculatingSurface),
             R"#(if Standard_True, L is the local osculating surface along V at the point U,V. It means that DL/DV is collinear to DS/DV . If IsOpposite == Standard_True these vectors have opposite direction.)#"  , py::arg("U"),  py::arg("V"),  py::arg("IsOpposite"),  py::arg("VOsculSurf"))
        .def("GetBasisSurfContinuity",
             (GeomAbs_Shape (Geom_OffsetSurface::*)() const) static_cast<GeomAbs_Shape (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::GetBasisSurfContinuity),
             R"#(Returns continuity of the basis surface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_OffsetSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_OffsetSurface::*)() const>(&Geom_OffsetSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( Geom_OffsetSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this offset surface. If the surface is infinite, this function can return: - Standard_Real::RealFirst(), or - Standard_Real::RealLast().)#" )
        .def("TransformParameters",
             []( Geom_OffsetSurface &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_OffsetSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_OffsetSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_SweptSurface ,opencascade::handle<Geom_SweptSurface> ,Py_Geom_SweptSurface , Geom_Surface >>(m.attr("Geom_SweptSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Continuity",
             (GeomAbs_Shape (Geom_SweptSurface::*)() const) static_cast<GeomAbs_Shape (Geom_SweptSurface::*)() const>(&Geom_SweptSurface::Continuity),
             R"#(returns the continuity of the surface : C0 : only geometric continuity, C1 : continuity of the first derivative all along the surface, C2 : continuity of the second derivative all along the surface, C3 : continuity of the third derivative all along the surface, G1 : tangency continuity all along the surface, G2 : curvature continuity all along the surface, CN : the order of continuity is infinite.)#" )
        .def("Direction",
             (const gp_Dir & (Geom_SweptSurface::*)() const) static_cast<const gp_Dir & (Geom_SweptSurface::*)() const>(&Geom_SweptSurface::Direction),
             R"#(Returns the reference direction of the swept surface. For a surface of revolution it is the direction of the revolution axis, for a surface of linear extrusion it is the direction of extrusion.)#" )
        .def("BasisCurve",
             (opencascade::handle<Geom_Curve> (Geom_SweptSurface::*)() const) static_cast<opencascade::handle<Geom_Curve> (Geom_SweptSurface::*)() const>(&Geom_SweptSurface::BasisCurve),
             R"#(Returns the referenced curve of the surface. For a surface of revolution it is the revolution curve, for a surface of linear extrusion it is the extruded curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_SweptSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_SweptSurface::*)() const>(&Geom_SweptSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_SweptSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_SweptSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_VectorWithMagnitude ,opencascade::handle<Geom_VectorWithMagnitude>  , Geom_Vector >>(m.attr("Geom_VectorWithMagnitude"))
    // constructors
        .def(py::init< const gp_Vec & >()  , py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("X"),  py::arg("Y"),  py::arg("Z") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
    // custom constructors
    // methods
        .def("SetCoord",
             (void (Geom_VectorWithMagnitude::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Geom_VectorWithMagnitude::SetCoord),
             R"#(Assigns the values X, Y and Z to the coordinates of this vector.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"))
        .def("SetVec",
             (void (Geom_VectorWithMagnitude::*)( const gp_Vec &  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const gp_Vec &  ) >(&Geom_VectorWithMagnitude::SetVec),
             R"#(Converts the gp_Vec vector V into this vector.)#"  , py::arg("V"))
        .def("SetX",
             (void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom_VectorWithMagnitude::SetX),
             R"#(Changes the X coordinate of <me>.)#"  , py::arg("X"))
        .def("SetY",
             (void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom_VectorWithMagnitude::SetY),
             R"#(Changes the Y coordinate of <me>)#"  , py::arg("Y"))
        .def("SetZ",
             (void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom_VectorWithMagnitude::SetZ),
             R"#(Changes the Z coordinate of <me>.)#"  , py::arg("Z"))
        .def("Magnitude",
             (Standard_Real (Geom_VectorWithMagnitude::*)() const) static_cast<Standard_Real (Geom_VectorWithMagnitude::*)() const>(&Geom_VectorWithMagnitude::Magnitude),
             R"#(Returns the magnitude of <me>.)#" )
        .def("SquareMagnitude",
             (Standard_Real (Geom_VectorWithMagnitude::*)() const) static_cast<Standard_Real (Geom_VectorWithMagnitude::*)() const>(&Geom_VectorWithMagnitude::SquareMagnitude),
             R"#(Returns the square magnitude of <me>.)#" )
        .def("Add",
             (void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) >(&Geom_VectorWithMagnitude::Add),
             R"#(Adds the Vector Other to <me>.)#"  , py::arg("Other"))
        .def("Added",
             (opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) const>(&Geom_VectorWithMagnitude::Added),
             R"#(Adds the vector Other to <me>.)#"  , py::arg("Other"))
        .def("Cross",
             (void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) >(&Geom_VectorWithMagnitude::Cross),
             R"#(Computes the cross product between <me> and Other <me> ^ Other.)#"  , py::arg("Other"))
        .def("Crossed",
             (opencascade::handle<Geom_Vector> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_Vector> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) const>(&Geom_VectorWithMagnitude::Crossed),
             R"#(Computes the cross product between <me> and Other <me> ^ Other. A new vector is returned.)#"  , py::arg("Other"))
        .def("CrossCross",
             (void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) >(&Geom_VectorWithMagnitude::CrossCross),
             R"#(Computes the triple vector product <me> ^ (V1 ^ V2).)#"  , py::arg("V1"),  py::arg("V2"))
        .def("CrossCrossed",
             (opencascade::handle<Geom_Vector> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_Vector> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> & ,  const opencascade::handle<Geom_Vector> &  ) const>(&Geom_VectorWithMagnitude::CrossCrossed),
             R"#(Computes the triple vector product <me> ^ (V1 ^ V2). A new vector is returned.)#"  , py::arg("V1"),  py::arg("V2"))
        .def("Divide",
             (void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom_VectorWithMagnitude::Divide),
             R"#(Divides <me> by a scalar.)#"  , py::arg("Scalar"))
        .def("Divided",
             (opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const Standard_Real  ) const>(&Geom_VectorWithMagnitude::Divided),
             R"#(Divides <me> by a scalar. A new vector is returned.)#"  , py::arg("Scalar"))
        .def("Multiplied",
             (opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const Standard_Real  ) const>(&Geom_VectorWithMagnitude::Multiplied),
             R"#(Computes the product of the vector <me> by a scalar. A new vector is returned.)#"  , py::arg("Scalar"))
        .def("Multiply",
             (void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const Standard_Real  ) >(&Geom_VectorWithMagnitude::Multiply),
             R"#(Computes the product of the vector <me> by a scalar.)#"  , py::arg("Scalar"))
        .def("Normalize",
             (void (Geom_VectorWithMagnitude::*)() ) static_cast<void (Geom_VectorWithMagnitude::*)() >(&Geom_VectorWithMagnitude::Normalize),
             R"#(Normalizes <me>.)#" )
        .def("Normalized",
             (opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)() const) static_cast<opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)() const>(&Geom_VectorWithMagnitude::Normalized),
             R"#(Returns a copy of <me> Normalized.)#" )
        .def("Subtract",
             (void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) >(&Geom_VectorWithMagnitude::Subtract),
             R"#(Subtracts the Vector Other to <me>.)#"  , py::arg("Other"))
        .def("Subtracted",
             (opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) const) static_cast<opencascade::handle<Geom_VectorWithMagnitude> (Geom_VectorWithMagnitude::*)( const opencascade::handle<Geom_Vector> &  ) const>(&Geom_VectorWithMagnitude::Subtracted),
             R"#(Subtracts the vector Other to <me>. A new vector is returned.)#"  , py::arg("Other"))
        .def("Transform",
             (void (Geom_VectorWithMagnitude::*)( const gp_Trsf &  ) ) static_cast<void (Geom_VectorWithMagnitude::*)( const gp_Trsf &  ) >(&Geom_VectorWithMagnitude::Transform),
             R"#(Applies the transformation T to this vector.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_VectorWithMagnitude::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_VectorWithMagnitude::*)() const>(&Geom_VectorWithMagnitude::Copy),
             R"#(Creates a new object which is a copy of this vector.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_VectorWithMagnitude::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_VectorWithMagnitude::*)() const>(&Geom_VectorWithMagnitude::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_VectorWithMagnitude::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_VectorWithMagnitude::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_BSplineCurve ,opencascade::handle<Geom_BSplineCurve>  , Geom_BoundedCurve >>(m.attr("Geom_BSplineCurve"))
    // constructors
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("Knots"),  py::arg("Multiplicities"),  py::arg("Degree"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("Weights"),  py::arg("Knots"),  py::arg("Multiplicities"),  py::arg("Degree"),  py::arg("Periodic")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("CheckRational")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("IncreaseDegree",
             (void (Geom_BSplineCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer  ) >(&Geom_BSplineCurve::IncreaseDegree),
             R"#(Increases the degree of this BSpline curve to Degree. As a result, the poles, weights and multiplicities tables are modified; the knots table is not changed. Nothing is done if Degree is less than or equal to the current degree. Exceptions Standard_ConstructionError if Degree is greater than Geom_BSplineCurve::MaxDegree().)#"  , py::arg("Degree"))
        .def("IncreaseMultiplicity",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineCurve::IncreaseMultiplicity),
             R"#(Increases the multiplicity of the knot <Index> to <M>.)#"  , py::arg("Index"),  py::arg("M"))
        .def("IncreaseMultiplicity",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineCurve::IncreaseMultiplicity),
             R"#(Increases the multiplicities of the knots in [I1,I2] to <M>.)#"  , py::arg("I1"),  py::arg("I2"),  py::arg("M"))
        .def("IncrementMultiplicity",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineCurve::IncrementMultiplicity),
             R"#(Increment the multiplicities of the knots in [I1,I2] by <M>.)#"  , py::arg("I1"),  py::arg("I2"),  py::arg("M"))
        .def("InsertKnot",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) >(&Geom_BSplineCurve::InsertKnot),
             R"#(Inserts a knot value in the sequence of knots. If <U> is an existing knot the multiplicity is increased by <M>.)#"  , py::arg("U"),  py::arg("M")=static_cast<const Standard_Integer>(1),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InsertKnots",
             (void (Geom_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Geom_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Geom_BSplineCurve::InsertKnots),
             R"#(Inserts a set of knots values in the sequence of knots.)#"  , py::arg("Knots"),  py::arg("Mults"),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RemoveKnot",
             (Standard_Boolean (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineCurve::RemoveKnot),
             R"#(Reduces the multiplicity of the knot of index Index to M. If M is equal to 0, the knot is removed. With a modification of this type, the array of poles is also modified. Two different algorithms are systematically used to compute the new poles of the curve. If, for each pole, the distance between the pole calculated using the first algorithm and the same pole calculated using the second algorithm, is less than Tolerance, this ensures that the curve is not modified by more than Tolerance. Under these conditions, true is returned; otherwise, false is returned. A low tolerance is used to prevent modification of the curve. A high tolerance is used to "smooth" the curve. Exceptions Standard_OutOfRange if Index is outside the bounds of the knots table. pole insertion and pole removing this operation is limited to the Uniform or QuasiUniform BSplineCurve. The knot values are modified . If the BSpline is NonUniform or Piecewise Bezier an exception Construction error is raised.)#"  , py::arg("Index"),  py::arg("M"),  py::arg("Tolerance"))
        .def("Reverse",
             (void (Geom_BSplineCurve::*)() ) static_cast<void (Geom_BSplineCurve::*)() >(&Geom_BSplineCurve::Reverse),
             R"#(Changes the direction of parametrization of <me>. The Knot sequence is modified, the FirstParameter and the LastParameter are not modified. The StartPoint of the initial curve becomes the EndPoint of the reversed curve and the EndPoint of the initial curve becomes the StartPoint of the reversed curve.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_BSplineCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_BSplineCurve::*)( const Standard_Real  ) const>(&Geom_BSplineCurve::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Segment",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Geom_BSplineCurve::Segment),
             R"#(Modifies this BSpline curve by segmenting it between U1 and U2. Either of these values can be outside the bounds of the curve, but U2 must be greater than U1. All data structure tables of this BSpline curve are modified, but the knots located between U1 and U2 are retained. The degree of the curve is not modified.)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("theTolerance")=static_cast<const Standard_Real>(Precision :: PConfusion ( )))
        .def("SetKnot",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineCurve::SetKnot),
             R"#(Modifies this BSpline curve by assigning the value K to the knot of index Index in the knots table. This is a relatively local modification because K must be such that: Knots(Index - 1) < K < Knots(Index + 1) The second syntax allows you also to increase the multiplicity of the knot to M (but it is not possible to decrease the multiplicity of the knot with this function). Standard_ConstructionError if: - K is not such that: Knots(Index - 1) < K < Knots(Index + 1) - M is greater than the degree of this BSpline curve or lower than the previous multiplicity of knot of index Index in the knots table. Standard_OutOfRange if Index is outside the bounds of the knots table.)#"  , py::arg("Index"),  py::arg("K"))
        .def("SetKnots",
             (void (Geom_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BSplineCurve::*)(  const NCollection_Array1<Standard_Real> &  ) >(&Geom_BSplineCurve::SetKnots),
             R"#(Modifies this BSpline curve by assigning the array K to its knots table. The multiplicity of the knots is not modified. Exceptions Standard_ConstructionError if the values in the array K are not in ascending order. Standard_OutOfRange if the bounds of the array K are not respectively 1 and the number of knots of this BSpline curve.)#"  , py::arg("K"))
        .def("SetKnot",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) >(&Geom_BSplineCurve::SetKnot),
             R"#(Changes the knot of range Index with its multiplicity. You can increase the multiplicity of a knot but it is not allowed to decrease the multiplicity of an existing knot.)#"  , py::arg("Index"),  py::arg("K"),  py::arg("M"))
        .def("SetPeriodic",
             (void (Geom_BSplineCurve::*)() ) static_cast<void (Geom_BSplineCurve::*)() >(&Geom_BSplineCurve::SetPeriodic),
             R"#(Changes this BSpline curve into a periodic curve. To become periodic, the curve must first be closed. Next, the knot sequence must be periodic. For this, FirstUKnotIndex and LastUKnotIndex are used to compute I1 and I2, the indexes in the knots array of the knots corresponding to the first and last parameters of this BSpline curve. The period is therefore: Knots(I2) - Knots(I1). Consequently, the knots and poles tables are modified. Exceptions Standard_ConstructionError if this BSpline curve is not closed.)#" )
        .def("SetOrigin",
             (void (Geom_BSplineCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer  ) >(&Geom_BSplineCurve::SetOrigin),
             R"#(Assigns the knot of index Index in the knots table as the origin of this periodic BSpline curve. As a consequence, the knots and poles tables are modified. Exceptions Standard_NoSuchObject if this curve is not periodic. Standard_DomainError if Index is outside the bounds of the knots table.)#"  , py::arg("Index"))
        .def("SetOrigin",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Real  ) >(&Geom_BSplineCurve::SetOrigin),
             R"#(Set the origin of a periodic curve at Knot U. If U is not a knot of the BSpline a new knot is inseted. KnotVector and poles are modified. Raised if the curve is not periodic)#"  , py::arg("U"),  py::arg("Tol"))
        .def("SetNotPeriodic",
             (void (Geom_BSplineCurve::*)() ) static_cast<void (Geom_BSplineCurve::*)() >(&Geom_BSplineCurve::SetNotPeriodic),
             R"#(Changes this BSpline curve into a non-periodic curve. If this curve is already non-periodic, it is not modified. Note: the poles and knots tables are modified. Warning If this curve is periodic, as the multiplicity of the first and last knots is not modified, and is not equal to Degree + 1, where Degree is the degree of this BSpline curve, the start and end points of the curve are not its first and last poles.)#" )
        .def("SetPole",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) >(&Geom_BSplineCurve::SetPole),
             R"#(Modifies this BSpline curve by assigning P to the pole of index Index in the poles table. Exceptions Standard_OutOfRange if Index is outside the bounds of the poles table. Standard_ConstructionError if Weight is negative or null.)#"  , py::arg("Index"),  py::arg("P"))
        .def("SetPole",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) >(&Geom_BSplineCurve::SetPole),
             R"#(Modifies this BSpline curve by assigning P to the pole of index Index in the poles table. This syntax also allows you to modify the weight of the modified pole, which becomes Weight. In this case, if this BSpline curve is non-rational, it can become rational and vice versa. Exceptions Standard_OutOfRange if Index is outside the bounds of the poles table. Standard_ConstructionError if Weight is negative or null.)#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight"))
        .def("SetWeight",
             (void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineCurve::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineCurve::SetWeight),
             R"#(Changes the weight for the pole of range Index. If the curve was non rational it can become rational. If the curve was rational it can become non rational.)#"  , py::arg("Index"),  py::arg("Weight"))
        .def("IsCN",
             (Standard_Boolean (Geom_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom_BSplineCurve::IsCN),
             R"#(Returns the continuity of the curve, the curve is at least C0. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsG1",
             (Standard_Boolean (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Boolean (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&Geom_BSplineCurve::IsG1),
             R"#(Check if curve has at least G1 continuity in interval [theTf, theTl] Returns true if IsCN(1) or angle betweem "left" and "right" first derivatives at knots with C0 continuity is less then theAngTol only knots in interval [theTf, theTl] is checked)#"  , py::arg("theTf"),  py::arg("theTl"),  py::arg("theAngTol"))
        .def("IsClosed",
             (Standard_Boolean (Geom_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::IsClosed),
             R"#(Returns true if the distance between the first point and the last point of the curve is lower or equal to Resolution from package gp. Warnings : The first and the last point can be different from the first pole and the last pole of the curve.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::IsPeriodic),
             R"#(Returns True if the curve is periodic.)#" )
        .def("IsRational",
             (Standard_Boolean (Geom_BSplineCurve::*)() const) static_cast<Standard_Boolean (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::IsRational),
             R"#(Returns True if the weights are not identical. The tolerance criterion is Epsilon of the class Real.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom_BSplineCurve::*)() const) static_cast<GeomAbs_Shape (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::Continuity),
             R"#(Returns the global continuity of the curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, CN : the order of continuity is infinite. For a B-spline curve of degree d if a knot Ui has a multiplicity p the B-spline curve is only Cd-p continuous at Ui. So the global continuity of the curve can't be greater than Cd-p where p is the maximum multiplicity of the interior Knots. In the interior of a knot span the curve is infinitely continuously differentiable.)#" )
        .def("Degree",
             (Standard_Integer (Geom_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::Degree),
             R"#(Returns the degree of this BSpline curve. The degree of a Geom_BSplineCurve curve cannot be greater than Geom_BSplineCurve::MaxDegree(). Computation of value and derivatives)#" )
        .def("D0",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_BSplineCurve::D0),
             R"#(Returns in P the point of parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_BSplineCurve::D1),
             R"#(Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineCurve::D2),
             R"#(Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineCurve::D3),
             R"#(Raised if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_BSplineCurve::DN),
             R"#(For the point of parameter U of this BSpline curve, computes the vector corresponding to the Nth derivative. Warning On a point where the continuity of the curve is not the one requested, this function impacts the part defined by the parameter with a value greater than U, i.e. the part of the curve to the "right" of the singularity. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("LocalValue",
             (gp_Pnt (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Pnt (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BSplineCurve::LocalValue),
             R"#(Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"))
        .def("LocalD0",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt &  ) const>(&Geom_BSplineCurve::LocalD0),
             R"#(Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"))
        .def("LocalD1",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_BSplineCurve::LocalD1),
             R"#(Raised if the local continuity of the curve is not C1 between the knot K1 and the knot K2. Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"),  py::arg("V1"))
        .def("LocalD2",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineCurve::LocalD2),
             R"#(Raised if the local continuity of the curve is not C2 between the knot K1 and the knot K2. Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("LocalD3",
             (void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineCurve::LocalD3),
             R"#(Raised if the local continuity of the curve is not C3 between the knot K1 and the knot K2. Raised if FromK1 = ToK2.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("LocalDN",
             (gp_Vec (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_BSplineCurve::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BSplineCurve::LocalDN),
             R"#(Raised if the local continuity of the curve is not CN between the knot K1 and the knot K2. Raised if FromK1 = ToK2. Raised if N < 1.)#"  , py::arg("U"),  py::arg("FromK1"),  py::arg("ToK2"),  py::arg("N"))
        .def("EndPoint",
             (gp_Pnt (Geom_BSplineCurve::*)() const) static_cast<gp_Pnt (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::EndPoint),
             R"#(Returns the last point of the curve. Warnings : The last point of the curve is different from the last pole of the curve if the multiplicity of the last knot is lower than Degree.)#" )
        .def("FirstUKnotIndex",
             (Standard_Integer (Geom_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::FirstUKnotIndex),
             R"#(Returns the index in the knot array of the knot corresponding to the first or last parameter of this BSpline curve. For a BSpline curve, the first (or last) parameter (which gives the start (or end) point of the curve) is a knot value. However, if the multiplicity of the first (or last) knot is less than Degree + 1, where Degree is the degree of the curve, it is not the first (or last) knot of the curve.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom_BSplineCurve::*)() const) static_cast<Standard_Real (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::FirstParameter),
             R"#(Returns the value of the first parameter of this BSpline curve. This is a knot value. The first parameter is the one of the start point of the BSpline curve.)#" )
        .def("Knot",
             (Standard_Real (Geom_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom_BSplineCurve::Knot),
             R"#(Returns the knot of range Index. When there is a knot with a multiplicity greater than 1 the knot is not repeated. The method Multiplicity can be used to get the multiplicity of the Knot. Raised if Index < 1 or Index > NbKnots)#"  , py::arg("Index"))
        .def("Knots",
             (void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BSplineCurve::Knots),
             R"#(returns the knot values of the B-spline curve; Warning A knot with a multiplicity greater than 1 is not repeated in the knot table. The Multiplicity function can be used to obtain the multiplicity of each knot.)#"  , py::arg("K"))
        .def("Knots",
             (const TColStd_Array1OfReal & (Geom_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfReal & (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::Knots),
             R"#(returns the knot values of the B-spline curve; Warning A knot with a multiplicity greater than 1 is not repeated in the knot table. The Multiplicity function can be used to obtain the multiplicity of each knot.)#" )
        .def("KnotSequence",
             (void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BSplineCurve::KnotSequence),
             R"#(Returns K, the knots sequence of this BSpline curve. In this sequence, knots with a multiplicity greater than 1 are repeated. In the case of a non-periodic curve the length of the sequence must be equal to the sum of the NbKnots multiplicities of the knots of the curve (where NbKnots is the number of knots of this BSpline curve). This sum is also equal to : NbPoles + Degree + 1 where NbPoles is the number of poles and Degree the degree of this BSpline curve. In the case of a periodic curve, if there are k periodic knots, the period is Knot(k+1) - Knot(1). The initial sequence is built by writing knots 1 to k+1, which are repeated according to their corresponding multiplicities. If Degree is the degree of the curve, the degree of continuity of the curve at the knot of index 1 (or k+1) is equal to c = Degree + 1 - Mult(1). c knots are then inserted at the beginning and end of the initial sequence: - the c values of knots preceding the first item Knot(k+1) in the initial sequence are inserted at the beginning; the period is subtracted from these c values; - the c values of knots following the last item Knot(1) in the initial sequence are inserted at the end; the period is added to these c values. The length of the sequence must therefore be equal to: NbPoles + 2*Degree - Mult(1) + 2. Example For a non-periodic BSpline curve of degree 2 where: - the array of knots is: { k1 k2 k3 k4 }, - with associated multiplicities: { 3 1 2 3 }, the knot sequence is: K = { k1 k1 k1 k2 k3 k3 k4 k4 k4 } For a periodic BSpline curve of degree 4 , which is "C1" continuous at the first knot, and where : - the periodic knots are: { k1 k2 k3 (k4) } (3 periodic knots: the points of parameter k1 and k4 are identical, the period is p = k4 - k1), - with associated multiplicities: { 3 1 2 (3) }, the degree of continuity at knots k1 and k4 is: Degree + 1 - Mult(i) = 2. 2 supplementary knots are added at the beginning and end of the sequence: - at the beginning: the 2 knots preceding k4 minus the period; in this example, this is k3 - p both times; - at the end: the 2 knots following k1 plus the period; in this example, this is k2 + p and k3 + p. The knot sequence is therefore: K = { k3-p k3-p k1 k1 k1 k2 k3 k3 k4 k4 k4 k2+p k3+p } Exceptions Raised if K.Lower() is less than number of first knot in knot sequence with repetitions or K.Upper() is more than number of last knot in knot sequence with repetitions.)#"  , py::arg("K"))
        .def("KnotSequence",
             (const TColStd_Array1OfReal & (Geom_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfReal & (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::KnotSequence),
             R"#(returns the knots of the B-spline curve. Knots with multiplicit greater than 1 are repeated)#" )
        .def("KnotDistribution",
             (GeomAbs_BSplKnotDistribution (Geom_BSplineCurve::*)() const) static_cast<GeomAbs_BSplKnotDistribution (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::KnotDistribution),
             R"#(Returns NonUniform or Uniform or QuasiUniform or PiecewiseBezier. If all the knots differ by a positive constant from the preceding knot the BSpline Curve can be : - Uniform if all the knots are of multiplicity 1, - QuasiUniform if all the knots are of multiplicity 1 except for the first and last knot which are of multiplicity Degree + 1, - PiecewiseBezier if the first and last knots have multiplicity Degree + 1 and if interior knots have multiplicity Degree A piecewise Bezier with only two knots is a BezierCurve. else the curve is non uniform. The tolerance criterion is Epsilon from class Real.)#" )
        .def("LastUKnotIndex",
             (Standard_Integer (Geom_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::LastUKnotIndex),
             R"#(For a BSpline curve the last parameter (which gives the end point of the curve) is a knot value but if the multiplicity of the last knot index is lower than Degree + 1 it is not the last knot of the curve. This method computes the index of the knot corresponding to the last parameter.)#" )
        .def("LastParameter",
             (Standard_Real (Geom_BSplineCurve::*)() const) static_cast<Standard_Real (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::LastParameter),
             R"#(Computes the parametric value of the end point of the curve. It is a knot value.)#" )
        .def("Multiplicity",
             (Standard_Integer (Geom_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom_BSplineCurve::Multiplicity),
             R"#(Returns the multiplicity of the knots of range Index. Raised if Index < 1 or Index > NbKnots)#"  , py::arg("Index"))
        .def("Multiplicities",
             (void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Integer> &  ) const>(&Geom_BSplineCurve::Multiplicities),
             R"#(Returns the multiplicity of the knots of the curve.)#"  , py::arg("M"))
        .def("Multiplicities",
             (const TColStd_Array1OfInteger & (Geom_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfInteger & (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::Multiplicities),
             R"#(returns the multiplicity of the knots of the curve.)#" )
        .def("NbKnots",
             (Standard_Integer (Geom_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::NbKnots),
             R"#(Returns the number of knots. This method returns the number of knot without repetition of multiple knots.)#" )
        .def("NbPoles",
             (Standard_Integer (Geom_BSplineCurve::*)() const) static_cast<Standard_Integer (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::NbPoles),
             R"#(Returns the number of poles)#" )
        .def("Pole",
             (const gp_Pnt & (Geom_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (Geom_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom_BSplineCurve::Pole),
             R"#(Returns the pole of range Index. Raised if Index < 1 or Index > NbPoles.)#"  , py::arg("Index"))
        .def("Poles",
             (void (Geom_BSplineCurve::*)( NCollection_Array1<gp_Pnt> &  ) const) static_cast<void (Geom_BSplineCurve::*)( NCollection_Array1<gp_Pnt> &  ) const>(&Geom_BSplineCurve::Poles),
             R"#(Returns the poles of the B-spline curve;)#"  , py::arg("P"))
        .def("Poles",
             (const TColgp_Array1OfPnt & (Geom_BSplineCurve::*)() const) static_cast<const TColgp_Array1OfPnt & (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::Poles),
             R"#(Returns the poles of the B-spline curve;)#" )
        .def("StartPoint",
             (gp_Pnt (Geom_BSplineCurve::*)() const) static_cast<gp_Pnt (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::StartPoint),
             R"#(Returns the start point of the curve. Warnings : This point is different from the first pole of the curve if the multiplicity of the first knot is lower than Degree.)#" )
        .def("Weight",
             (Standard_Real (Geom_BSplineCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom_BSplineCurve::*)( const Standard_Integer  ) const>(&Geom_BSplineCurve::Weight),
             R"#(Returns the weight of the pole of range Index . Raised if Index < 1 or Index > NbPoles.)#"  , py::arg("Index"))
        .def("Weights",
             (void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BSplineCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BSplineCurve::Weights),
             R"#(Returns the weights of the B-spline curve;)#"  , py::arg("W"))
        .def("Weights",
             (const TColStd_Array1OfReal * (Geom_BSplineCurve::*)() const) static_cast<const TColStd_Array1OfReal * (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::Weights),
             R"#(Returns the weights of the B-spline curve;)#" )
        .def("Transform",
             (void (Geom_BSplineCurve::*)( const gp_Trsf &  ) ) static_cast<void (Geom_BSplineCurve::*)( const gp_Trsf &  ) >(&Geom_BSplineCurve::Transform),
             R"#(Applies the transformation T to this BSpline curve.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_BSplineCurve::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::Copy),
             R"#(Creates a new object which is a copy of this BSpline curve.)#" )
        .def("IsEqual",
             (Standard_Boolean (Geom_BSplineCurve::*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (Geom_BSplineCurve::*)( const opencascade::handle<Geom_BSplineCurve> & ,  const Standard_Real  ) const>(&Geom_BSplineCurve::IsEqual),
             R"#(Comapare two Bspline curve on identity;)#"  , py::arg("theOther"),  py::arg("thePreci"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_BSplineCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_BSplineCurve::*)() const>(&Geom_BSplineCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("PeriodicNormalization",
             []( Geom_BSplineCurve &self   ){ Standard_Real  U; self.PeriodicNormalization(U); return std::make_tuple(U); },
             R"#(returns the parameter normalized within the period if the curve is periodic : otherwise does not do anything)#" )
        .def("MovePoint",
             []( Geom_BSplineCurve &self , const Standard_Real U,const gp_Pnt & P,const Standard_Integer Index1,const Standard_Integer Index2 ){ Standard_Integer  FirstModifiedPole; Standard_Integer  LastModifiedPole; self.MovePoint(U,P,Index1,Index2,FirstModifiedPole,LastModifiedPole); return std::make_tuple(FirstModifiedPole,LastModifiedPole); },
             R"#(Moves the point of parameter U of this BSpline curve to P. Index1 and Index2 are the indexes in the table of poles of this BSpline curve of the first and last poles designated to be moved. FirstModifiedPole and LastModifiedPole are the indexes of the first and last poles which are effectively modified. In the event of incompatibility between Index1, Index2 and the value U: - no change is made to this BSpline curve, and - the FirstModifiedPole and LastModifiedPole are returned null. Exceptions Standard_OutOfRange if: - Index1 is greater than or equal to Index2, or - Index1 or Index2 is less than 1 or greater than the number of poles of this BSpline curve.)#"  , py::arg("U"),  py::arg("P"),  py::arg("Index1"),  py::arg("Index2"))
        .def("MovePointAndTangent",
             []( Geom_BSplineCurve &self , const Standard_Real U,const gp_Pnt & P,const gp_Vec & Tangent,const Standard_Real Tolerance,const Standard_Integer StartingCondition,const Standard_Integer EndingCondition ){ Standard_Integer  ErrorStatus; self.MovePointAndTangent(U,P,Tangent,Tolerance,StartingCondition,EndingCondition,ErrorStatus); return std::make_tuple(ErrorStatus); },
             R"#(Move a point with parameter U to P. and makes it tangent at U be Tangent. StartingCondition = -1 means first can move EndingCondition = -1 means last point can move StartingCondition = 0 means the first point cannot move EndingCondition = 0 means the last point cannot move StartingCondition = 1 means the first point and tangent cannot move EndingCondition = 1 means the last point and tangent cannot move and so forth ErrorStatus != 0 means that there are not enought degree of freedom with the constrain to deform the curve accordingly)#"  , py::arg("U"),  py::arg("P"),  py::arg("Tangent"),  py::arg("Tolerance"),  py::arg("StartingCondition"),  py::arg("EndingCondition"))
        .def("LocateU",
             []( Geom_BSplineCurve &self , const Standard_Real U,const Standard_Real ParametricTolerance,const Standard_Boolean WithKnotRepetition ){ Standard_Integer  I1; Standard_Integer  I2; self.LocateU(U,ParametricTolerance,I1,I2,WithKnotRepetition); return std::make_tuple(I1,I2); },
             R"#(Locates the parametric value U in the sequence of knots. If "WithKnotRepetition" is True we consider the knot's representation with repetition of multiple knot value, otherwise we consider the knot's representation with no repetition of multiple knot values. Knots (I1) <= U <= Knots (I2) . if I1 = I2 U is a knot value (the tolerance criterion ParametricTolerance is used). . if I1 < 1 => U < Knots (1) - Abs(ParametricTolerance) . if I2 > NbKnots => U > Knots (NbKnots) + Abs(ParametricTolerance))#"  , py::arg("U"),  py::arg("ParametricTolerance"),  py::arg("WithKnotRepetition")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Resolution",
             []( Geom_BSplineCurve &self , const Standard_Real Tolerance3D ){ Standard_Real  UTolerance; self.Resolution(Tolerance3D,UTolerance); return std::make_tuple(UTolerance); },
             R"#(Computes for this BSpline curve the parametric tolerance UTolerance for a given 3D tolerance Tolerance3D. If f(t) is the equation of this BSpline curve, UTolerance ensures that: | t1 - t0| < Utolerance ===> |f(t1) - f(t0)| < Tolerance3D)#"  , py::arg("Tolerance3D"))
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Geom_BSplineCurve::MaxDegree),
                    R"#(Returns the value of the maximum degree of the normalized B-spline basis functions in this package.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_BSplineCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_BSplineCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_BSplineSurface ,opencascade::handle<Geom_BSplineSurface>  , Geom_BoundedSurface >>(m.attr("Geom_BSplineSurface"))
    // constructors
        .def(py::init<  const NCollection_Array2<gp_Pnt> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UPeriodic")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("VPeriodic")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init<  const NCollection_Array2<gp_Pnt> &, const NCollection_Array2<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Real> &, const NCollection_Array1<Standard_Integer> &, const NCollection_Array1<Standard_Integer> &,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Poles"),  py::arg("Weights"),  py::arg("UKnots"),  py::arg("VKnots"),  py::arg("UMults"),  py::arg("VMults"),  py::arg("UDegree"),  py::arg("VDegree"),  py::arg("UPeriodic")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("VPeriodic")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("ExchangeUV",
             (void (Geom_BSplineSurface::*)() ) static_cast<void (Geom_BSplineSurface::*)() >(&Geom_BSplineSurface::ExchangeUV),
             R"#(Exchanges the u and v parametric directions on this BSpline surface. As a consequence: - the poles and weights tables are transposed, - the knots and multiplicities tables are exchanged, - degrees of continuity, and rational, periodic and uniform characteristics are exchanged, and - the orientation of the surface is inverted.)#" )
        .def("SetUPeriodic",
             (void (Geom_BSplineSurface::*)() ) static_cast<void (Geom_BSplineSurface::*)() >(&Geom_BSplineSurface::SetUPeriodic),
             R"#(Sets the surface U periodic. Modifies this surface to be periodic in the U parametric direction. To become periodic in a given parametric direction a surface must be closed in that parametric direction, and the knot sequence relative to that direction must be periodic. To generate this periodic sequence of knots, the functions FirstUKnotIndex and LastUKnotIndex are used to compute I1 and I2. These are the indexes, in the knot array associated with the given parametric direction, of the knots that correspond to the first and last parameters of this BSpline surface in the given parametric direction. Hence the period is: Knots(I1) - Knots(I2) As a result, the knots and poles tables are modified. Exceptions Standard_ConstructionError if the surface is not closed in the given parametric direction.)#" )
        .def("SetVPeriodic",
             (void (Geom_BSplineSurface::*)() ) static_cast<void (Geom_BSplineSurface::*)() >(&Geom_BSplineSurface::SetVPeriodic),
             R"#(Sets the surface V periodic. Modifies this surface to be periodic in the V parametric direction. To become periodic in a given parametric direction a surface must be closed in that parametric direction, and the knot sequence relative to that direction must be periodic. To generate this periodic sequence of knots, the functions FirstVKnotIndex and LastVKnotIndex are used to compute I1 and I2. These are the indexes, in the knot array associated with the given parametric direction, of the knots that correspond to the first and last parameters of this BSpline surface in the given parametric direction. Hence the period is: Knots(I1) - Knots(I2) As a result, the knots and poles tables are modified. Exceptions Standard_ConstructionError if the surface is not closed in the given parametric direction.)#" )
        .def("SetUOrigin",
             (void (Geom_BSplineSurface::*)( const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer  ) >(&Geom_BSplineSurface::SetUOrigin),
             R"#(Assigns the knot of index Index in the knots table in the corresponding parametric direction to be the origin of this periodic BSpline surface. As a consequence, the knots and poles tables are modified. Exceptions Standard_NoSuchObject if this BSpline surface is not periodic in the given parametric direction. Standard_DomainError if Index is outside the bounds of the knots table in the given parametric direction.)#"  , py::arg("Index"))
        .def("SetVOrigin",
             (void (Geom_BSplineSurface::*)( const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer  ) >(&Geom_BSplineSurface::SetVOrigin),
             R"#(Assigns the knot of index Index in the knots table in the corresponding parametric direction to be the origin of this periodic BSpline surface. As a consequence, the knots and poles tables are modified. Exceptions Standard_NoSuchObject if this BSpline surface is not periodic in the given parametric direction. Standard_DomainError if Index is outside the bounds of the knots table in the given parametric direction.)#"  , py::arg("Index"))
        .def("SetUNotPeriodic",
             (void (Geom_BSplineSurface::*)() ) static_cast<void (Geom_BSplineSurface::*)() >(&Geom_BSplineSurface::SetUNotPeriodic),
             R"#(Sets the surface U not periodic. Changes this BSpline surface into a non-periodic surface along U direction. If this surface is already non-periodic, it is not modified. Note: the poles and knots tables are modified.)#" )
        .def("SetVNotPeriodic",
             (void (Geom_BSplineSurface::*)() ) static_cast<void (Geom_BSplineSurface::*)() >(&Geom_BSplineSurface::SetVNotPeriodic),
             R"#(Sets the surface V not periodic. Changes this BSpline surface into a non-periodic surface along V direction. If this surface is already non-periodic, it is not modified. Note: the poles and knots tables are modified.)#" )
        .def("UReverse",
             (void (Geom_BSplineSurface::*)() ) static_cast<void (Geom_BSplineSurface::*)() >(&Geom_BSplineSurface::UReverse),
             R"#(Changes the orientation of this BSpline surface in the U parametric direction. The bounds of the surface are not changed but the given parametric direction is reversed. Hence the orientation of the surface is reversed. The knots and poles tables are modified.)#" )
        .def("VReverse",
             (void (Geom_BSplineSurface::*)() ) static_cast<void (Geom_BSplineSurface::*)() >(&Geom_BSplineSurface::VReverse),
             R"#(Changes the orientation of this BSpline surface in the V parametric direction. The bounds of the surface are not changed but the given parametric direction is reversed. Hence the orientation of the surface is reversed. The knots and poles tables are modified.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_BSplineSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_BSplineSurface::*)( const Standard_Real  ) const>(&Geom_BSplineSurface::UReversedParameter),
             R"#(Computes the u parameter on the modified surface, produced by reversing its U parametric direction, for the point of u parameter U, on this BSpline surface. For a BSpline surface, these functions return respectively: - UFirst + ULast - U, where UFirst, ULast are the values of the first and last parameters of this BSpline surface, in the u parametric directions.)#"  , py::arg("U"))
        .def("VReversedParameter",
             (Standard_Real (Geom_BSplineSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_BSplineSurface::*)( const Standard_Real  ) const>(&Geom_BSplineSurface::VReversedParameter),
             R"#(Computes the v parameter on the modified surface, produced by reversing its V parametric direction, for the point of v parameter V on this BSpline surface. For a BSpline surface, these functions return respectively: - VFirst + VLast - V, VFirst and VLast are the values of the first and last parameters of this BSpline surface, in the v pametric directions.)#"  , py::arg("V"))
        .def("IncreaseDegree",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineSurface::IncreaseDegree),
             R"#(Increases the degrees of this BSpline surface to UDegree and VDegree in the u and v parametric directions respectively. As a result, the tables of poles, weights and multiplicities are modified. The tables of knots is not changed. Note: Nothing is done if the given degree is less than or equal to the current degree in the corresponding parametric direction. Exceptions Standard_ConstructionError if UDegree or VDegree is greater than Geom_BSplineSurface::MaxDegree().)#"  , py::arg("UDegree"),  py::arg("VDegree"))
        .def("InsertUKnots",
             (void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Geom_BSplineSurface::InsertUKnots),
             R"#(Inserts into the knots table for the U parametric direction of this BSpline surface: - the values of the array Knots, with their respective multiplicities, Mults. If the knot value to insert already exists in the table, its multiplicity is: - increased by M, if Add is true (the default), or - increased to M, if Add is false. The tolerance criterion used to check the equality of the knots is the larger of the values ParametricTolerance and Standard_Real::Epsilon(val), where val is the knot value to be inserted. Warning - If a given multiplicity coefficient is null, or negative, nothing is done. - The new multiplicity of a knot is limited to the degree of this BSpline surface in the corresponding parametric direction. Exceptions Standard_ConstructionError if a knot value to insert is outside the bounds of this BSpline surface in the specified parametric direction. The comparison uses the precision criterion ParametricTolerance.)#"  , py::arg("Knots"),  py::arg("Mults"),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InsertVKnots",
             (void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> & ,   const NCollection_Array1<Standard_Integer> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&Geom_BSplineSurface::InsertVKnots),
             R"#(Inserts into the knots table for the V parametric direction of this BSpline surface: - the values of the array Knots, with their respective multiplicities, Mults. If the knot value to insert already exists in the table, its multiplicity is: - increased by M, if Add is true (the default), or - increased to M, if Add is false. The tolerance criterion used to check the equality of the knots is the larger of the values ParametricTolerance and Standard_Real::Epsilon(val), where val is the knot value to be inserted. Warning - If a given multiplicity coefficient is null, or negative, nothing is done. - The new multiplicity of a knot is limited to the degree of this BSpline surface in the corresponding parametric direction. Exceptions Standard_ConstructionError if a knot value to insert is outside the bounds of this BSpline surface in the specified parametric direction. The comparison uses the precision criterion ParametricTolerance.)#"  , py::arg("Knots"),  py::arg("Mults"),  py::arg("ParametricTolerance")=static_cast<const Standard_Real>(0.0),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_True))
        .def("RemoveUKnot",
             (Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineSurface::RemoveUKnot),
             R"#(Reduces to M the multiplicity of the knot of index Index in the U parametric direction. If M is 0, the knot is removed. With a modification of this type, the table of poles is also modified. Two different algorithms are used systematically to compute the new poles of the surface. For each pole, the distance between the pole calculated using the first algorithm and the same pole calculated using the second algorithm, is checked. If this distance is less than Tolerance it ensures that the surface is not modified by more than Tolerance. Under these conditions, the function returns true; otherwise, it returns false. A low tolerance prevents modification of the surface. A high tolerance "smoothes" the surface. Exceptions Standard_OutOfRange if Index is outside the bounds of the knots table of this BSpline surface.)#"  , py::arg("Index"),  py::arg("M"),  py::arg("Tolerance"))
        .def("RemoveVKnot",
             (Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineSurface::RemoveVKnot),
             R"#(Reduces to M the multiplicity of the knot of index Index in the V parametric direction. If M is 0, the knot is removed. With a modification of this type, the table of poles is also modified. Two different algorithms are used systematically to compute the new poles of the surface. For each pole, the distance between the pole calculated using the first algorithm and the same pole calculated using the second algorithm, is checked. If this distance is less than Tolerance it ensures that the surface is not modified by more than Tolerance. Under these conditions, the function returns true; otherwise, it returns false. A low tolerance prevents modification of the surface. A high tolerance "smoothes" the surface. Exceptions Standard_OutOfRange if Index is outside the bounds of the knots table of this BSpline surface.)#"  , py::arg("Index"),  py::arg("M"),  py::arg("Tolerance"))
        .def("IncreaseUMultiplicity",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineSurface::IncreaseUMultiplicity),
             R"#(Increases the multiplicity of the knot of range UIndex in the UKnots sequence. M is the new multiplicity. M must be greater than the previous multiplicity and lower or equal to the degree of the surface in the U parametric direction. Raised if M is not in the range [1, UDegree])#"  , py::arg("UIndex"),  py::arg("M"))
        .def("IncreaseUMultiplicity",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineSurface::IncreaseUMultiplicity),
             R"#(Increases until order M the multiplicity of the set of knots FromI1,...., ToI2 in the U direction. This method can be used to make a B_spline surface into a PiecewiseBezier B_spline surface. If <me> was uniform, it can become non uniform.)#"  , py::arg("FromI1"),  py::arg("ToI2"),  py::arg("M"))
        .def("IncrementUMultiplicity",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineSurface::IncrementUMultiplicity),
             R"#(Increments the multiplicity of the consecutives uknots FromI1..ToI2 by step. The multiplicity of each knot FromI1,.....,ToI2 must be lower or equal to the UDegree of the B_spline.)#"  , py::arg("FromI1"),  py::arg("ToI2"),  py::arg("Step"))
        .def("IncreaseVMultiplicity",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineSurface::IncreaseVMultiplicity),
             R"#(Increases the multiplicity of a knot in the V direction. M is the new multiplicity.)#"  , py::arg("VIndex"),  py::arg("M"))
        .def("IncreaseVMultiplicity",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineSurface::IncreaseVMultiplicity),
             R"#(Increases until order M the multiplicity of the set of knots FromI1,...., ToI2 in the V direction. This method can be used to make a BSplineSurface into a PiecewiseBezier B_spline surface. If <me> was uniform, it can become non-uniform.)#"  , py::arg("FromI1"),  py::arg("ToI2"),  py::arg("M"))
        .def("IncrementVMultiplicity",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BSplineSurface::IncrementVMultiplicity),
             R"#(Increments the multiplicity of the consecutives vknots FromI1..ToI2 by step. The multiplicity of each knot FromI1,.....,ToI2 must be lower or equal to the VDegree of the B_spline.)#"  , py::arg("FromI1"),  py::arg("ToI2"),  py::arg("Step"))
        .def("InsertUKnot",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) >(&Geom_BSplineSurface::InsertUKnot),
             R"#(Inserts a knot value in the sequence of UKnots. If U is a knot value this method increases the multiplicity of the knot if the previous multiplicity was lower than M else it does nothing. The tolerance criterion is ParametricTolerance. ParametricTolerance should be greater or equal than Resolution from package gp.)#"  , py::arg("U"),  py::arg("M"),  py::arg("ParametricTolerance"),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InsertVKnot",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Integer ,  const Standard_Real ,  const Standard_Boolean  ) >(&Geom_BSplineSurface::InsertVKnot),
             R"#(Inserts a knot value in the sequence of VKnots. If V is a knot value this method increases the multiplicity of the knot if the previous multiplicity was lower than M otherwise it does nothing. The tolerance criterion is ParametricTolerance. ParametricTolerance should be greater or equal than Resolution from package gp.)#"  , py::arg("V"),  py::arg("M"),  py::arg("ParametricTolerance"),  py::arg("Add")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Segment",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Geom_BSplineSurface::Segment),
             R"#(Segments the surface between U1 and U2 in the U-Direction. between V1 and V2 in the V-Direction. The control points are modified, the first and the last point are not the same.)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"),  py::arg("theUTolerance")=static_cast<const Standard_Real>(Precision :: PConfusion ( )),  py::arg("theVTolerance")=static_cast<const Standard_Real>(Precision :: PConfusion ( )))
        .def("CheckAndSegment",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Geom_BSplineSurface::CheckAndSegment),
             R"#(Segments the surface between U1 and U2 in the U-Direction. between V1 and V2 in the V-Direction.)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"),  py::arg("theUTolerance")=static_cast<const Standard_Real>(Precision :: PConfusion ( )),  py::arg("theVTolerance")=static_cast<const Standard_Real>(Precision :: PConfusion ( )))
        .def("SetUKnot",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineSurface::SetUKnot),
             R"#(Substitutes the UKnots of range UIndex with K.)#"  , py::arg("UIndex"),  py::arg("K"))
        .def("SetUKnots",
             (void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> &  ) >(&Geom_BSplineSurface::SetUKnots),
             R"#(Changes all the U-knots of the surface. The multiplicity of the knots are not modified.)#"  , py::arg("UK"))
        .def("SetUKnot",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) >(&Geom_BSplineSurface::SetUKnot),
             R"#(Changes the value of the UKnots of range UIndex and increases its multiplicity.)#"  , py::arg("UIndex"),  py::arg("K"),  py::arg("M"))
        .def("SetVKnot",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineSurface::SetVKnot),
             R"#(Substitutes the VKnots of range VIndex with K.)#"  , py::arg("VIndex"),  py::arg("K"))
        .def("SetVKnots",
             (void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BSplineSurface::*)(  const NCollection_Array1<Standard_Real> &  ) >(&Geom_BSplineSurface::SetVKnots),
             R"#(Changes all the V-knots of the surface. The multiplicity of the knots are not modified.)#"  , py::arg("VK"))
        .def("SetVKnot",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Real ,  const Standard_Integer  ) >(&Geom_BSplineSurface::SetVKnot),
             R"#(Changes the value of the VKnots of range VIndex and increases its multiplicity.)#"  , py::arg("VIndex"),  py::arg("K"),  py::arg("M"))
        .def("SetPole",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) >(&Geom_BSplineSurface::SetPole),
             R"#(Substitutes the pole of range (UIndex, VIndex) with P. If the surface is rational the weight of range (UIndex, VIndex) is not modified.)#"  , py::arg("UIndex"),  py::arg("VIndex"),  py::arg("P"))
        .def("SetPole",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) >(&Geom_BSplineSurface::SetPole),
             R"#(Substitutes the pole and the weight of range (UIndex, VIndex) with P and W.)#"  , py::arg("UIndex"),  py::arg("VIndex"),  py::arg("P"),  py::arg("Weight"))
        .def("SetPoleCol",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BSplineSurface::SetPoleCol),
             R"#(Changes a column of poles or a part of this column. Raised if Vindex < 1 or VIndex > NbVPoles.)#"  , py::arg("VIndex"),  py::arg("CPoles"))
        .def("SetPoleCol",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BSplineSurface::SetPoleCol),
             R"#(Changes a column of poles or a part of this column with the corresponding weights. If the surface was rational it can become non rational. If the surface was non rational it can become rational. Raised if Vindex < 1 or VIndex > NbVPoles.)#"  , py::arg("VIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("SetPoleRow",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BSplineSurface::SetPoleRow),
             R"#(Changes a row of poles or a part of this row with the corresponding weights. If the surface was rational it can become non rational. If the surface was non rational it can become rational. Raised if Uindex < 1 or UIndex > NbUPoles.)#"  , py::arg("UIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("SetPoleRow",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BSplineSurface::SetPoleRow),
             R"#(Changes a row of poles or a part of this row. Raised if Uindex < 1 or UIndex > NbUPoles.)#"  , py::arg("UIndex"),  py::arg("CPoles"))
        .def("SetWeight",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Geom_BSplineSurface::SetWeight),
             R"#(Changes the weight of the pole of range UIndex, VIndex. If the surface was non rational it can become rational. If the surface was rational it can become non rational.)#"  , py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Weight"))
        .def("SetWeightCol",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BSplineSurface::SetWeightCol),
             R"#(Changes a column of weights of a part of this column.)#"  , py::arg("VIndex"),  py::arg("CPoleWeights"))
        .def("SetWeightRow",
             (void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BSplineSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BSplineSurface::SetWeightRow),
             R"#(Changes a row of weights or a part of this row.)#"  , py::arg("UIndex"),  py::arg("CPoleWeights"))
        .def("IsUClosed",
             (Standard_Boolean (Geom_BSplineSurface::*)() const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::IsUClosed),
             R"#(Returns true if the first control points row and the last control points row are identical. The tolerance criterion is Resolution from package gp.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_BSplineSurface::*)() const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::IsVClosed),
             R"#(Returns true if the first control points column and the last last control points column are identical. The tolerance criterion is Resolution from package gp.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer  ) const>(&Geom_BSplineSurface::IsCNu),
             R"#(Returns True if the order of continuity of the surface in the U direction is N. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)( const Standard_Integer  ) const>(&Geom_BSplineSurface::IsCNv),
             R"#(Returns True if the order of continuity of the surface in the V direction is N. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_BSplineSurface::*)() const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::IsUPeriodic),
             R"#(Returns True if the surface is closed in the U direction and if the B-spline has been turned into a periodic surface using the function SetUPeriodic.)#" )
        .def("IsURational",
             (Standard_Boolean (Geom_BSplineSurface::*)() const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::IsURational),
             R"#(Returns False if for each row of weights all the weights are identical. The tolerance criterion is resolution from package gp. Example : |1.0, 1.0, 1.0| if Weights = |0.5, 0.5, 0.5| returns False |2.0, 2.0, 2.0|)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_BSplineSurface::*)() const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::IsVPeriodic),
             R"#(Returns True if the surface is closed in the V direction and if the B-spline has been turned into a periodic surface using the function SetVPeriodic.)#" )
        .def("IsVRational",
             (Standard_Boolean (Geom_BSplineSurface::*)() const) static_cast<Standard_Boolean (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::IsVRational),
             R"#(Returns False if for each column of weights all the weights are identical. The tolerance criterion is resolution from package gp. Examples : |1.0, 2.0, 0.5| if Weights = |1.0, 2.0, 0.5| returns False |1.0, 2.0, 0.5|)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom_BSplineSurface::*)() const) static_cast<GeomAbs_Shape (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::Continuity),
             R"#(Returns the continuity of the surface : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Surface, C2 : continuity of the second derivative all along the Surface, C3 : continuity of the third derivative all along the Surface, CN : the order of continuity is infinite. A B-spline surface is infinitely continuously differentiable for the couple of parameters U, V such thats U != UKnots(i) and V != VKnots(i). The continuity of the surface at a knot value depends on the multiplicity of this knot. Example : If the surface is C1 in the V direction and C2 in the U direction this function returns Shape = C1.)#" )
        .def("FirstUKnotIndex",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::FirstUKnotIndex),
             R"#(Computes the Index of the UKnots which gives the first parametric value of the surface in the U direction. The UIso curve corresponding to this value is a boundary curve of the surface.)#" )
        .def("FirstVKnotIndex",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::FirstVKnotIndex),
             R"#(Computes the Index of the VKnots which gives the first parametric value of the surface in the V direction. The VIso curve corresponding to this knot is a boundary curve of the surface.)#" )
        .def("LastUKnotIndex",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::LastUKnotIndex),
             R"#(Computes the Index of the UKnots which gives the last parametric value of the surface in the U direction. The UIso curve corresponding to this knot is a boundary curve of the surface.)#" )
        .def("LastVKnotIndex",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::LastVKnotIndex),
             R"#(Computes the Index of the VKnots which gives the last parametric value of the surface in the V direction. The VIso curve corresponding to this knot is a boundary curve of the surface.)#" )
        .def("NbUKnots",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::NbUKnots),
             R"#(Returns the number of knots in the U direction.)#" )
        .def("NbUPoles",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::NbUPoles),
             R"#(Returns number of poles in the U direction.)#" )
        .def("NbVKnots",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::NbVKnots),
             R"#(Returns the number of knots in the V direction.)#" )
        .def("NbVPoles",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::NbVPoles),
             R"#(Returns the number of poles in the V direction.)#" )
        .def("Pole",
             (const gp_Pnt & (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const gp_Pnt & (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BSplineSurface::Pole),
             R"#(Returns the pole of range (UIndex, VIndex).)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("Poles",
             (void (Geom_BSplineSurface::*)( NCollection_Array2<gp_Pnt> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array2<gp_Pnt> &  ) const>(&Geom_BSplineSurface::Poles),
             R"#(Returns the poles of the B-spline surface.)#"  , py::arg("P"))
        .def("Poles",
             (const TColgp_Array2OfPnt & (Geom_BSplineSurface::*)() const) static_cast<const TColgp_Array2OfPnt & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::Poles),
             R"#(Returns the poles of the B-spline surface.)#" )
        .def("UDegree",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::UDegree),
             R"#(Returns the degree of the normalized B-splines Ni,n in the U direction.)#" )
        .def("UKnot",
             (Standard_Real (Geom_BSplineSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom_BSplineSurface::*)( const Standard_Integer  ) const>(&Geom_BSplineSurface::UKnot),
             R"#(Returns the Knot value of range UIndex. Raised if UIndex < 1 or UIndex > NbUKnots)#"  , py::arg("UIndex"))
        .def("UKnotDistribution",
             (GeomAbs_BSplKnotDistribution (Geom_BSplineSurface::*)() const) static_cast<GeomAbs_BSplKnotDistribution (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::UKnotDistribution),
             R"#(Returns NonUniform or Uniform or QuasiUniform or PiecewiseBezier. If all the knots differ by a positive constant from the preceding knot in the U direction the B-spline surface can be : - Uniform if all the knots are of multiplicity 1, - QuasiUniform if all the knots are of multiplicity 1 except for the first and last knot which are of multiplicity Degree + 1, - PiecewiseBezier if the first and last knots have multiplicity Degree + 1 and if interior knots have multiplicity Degree otherwise the surface is non uniform in the U direction The tolerance criterion is Resolution from package gp.)#" )
        .def("UKnots",
             (void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BSplineSurface::UKnots),
             R"#(Returns the knots in the U direction.)#"  , py::arg("Ku"))
        .def("UKnots",
             (const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const) static_cast<const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::UKnots),
             R"#(Returns the knots in the U direction.)#" )
        .def("UKnotSequence",
             (void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BSplineSurface::UKnotSequence),
             R"#(Returns the uknots sequence. In this sequence the knots with a multiplicity greater than 1 are repeated. Example : Ku = {k1, k1, k1, k2, k3, k3, k4, k4, k4})#"  , py::arg("Ku"))
        .def("UKnotSequence",
             (const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const) static_cast<const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::UKnotSequence),
             R"#(Returns the uknots sequence. In this sequence the knots with a multiplicity greater than 1 are repeated. Example : Ku = {k1, k1, k1, k2, k3, k3, k4, k4, k4})#" )
        .def("UMultiplicity",
             (Standard_Integer (Geom_BSplineSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom_BSplineSurface::*)( const Standard_Integer  ) const>(&Geom_BSplineSurface::UMultiplicity),
             R"#(Returns the multiplicity value of knot of range UIndex in the u direction. Raised if UIndex < 1 or UIndex > NbUKnots.)#"  , py::arg("UIndex"))
        .def("UMultiplicities",
             (void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Integer> &  ) const>(&Geom_BSplineSurface::UMultiplicities),
             R"#(Returns the multiplicities of the knots in the U direction.)#"  , py::arg("Mu"))
        .def("UMultiplicities",
             (const TColStd_Array1OfInteger & (Geom_BSplineSurface::*)() const) static_cast<const TColStd_Array1OfInteger & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::UMultiplicities),
             R"#(Returns the multiplicities of the knots in the U direction.)#" )
        .def("VDegree",
             (Standard_Integer (Geom_BSplineSurface::*)() const) static_cast<Standard_Integer (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::VDegree),
             R"#(Returns the degree of the normalized B-splines Ni,d in the V direction.)#" )
        .def("VKnot",
             (Standard_Real (Geom_BSplineSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom_BSplineSurface::*)( const Standard_Integer  ) const>(&Geom_BSplineSurface::VKnot),
             R"#(Returns the Knot value of range VIndex. Raised if VIndex < 1 or VIndex > NbVKnots)#"  , py::arg("VIndex"))
        .def("VKnotDistribution",
             (GeomAbs_BSplKnotDistribution (Geom_BSplineSurface::*)() const) static_cast<GeomAbs_BSplKnotDistribution (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::VKnotDistribution),
             R"#(Returns NonUniform or Uniform or QuasiUniform or PiecewiseBezier. If all the knots differ by a positive constant from the preceding knot in the V direction the B-spline surface can be : - Uniform if all the knots are of multiplicity 1, - QuasiUniform if all the knots are of multiplicity 1 except for the first and last knot which are of multiplicity Degree + 1, - PiecewiseBezier if the first and last knots have multiplicity Degree + 1 and if interior knots have multiplicity Degree otherwise the surface is non uniform in the V direction. The tolerance criterion is Resolution from package gp.)#" )
        .def("VKnots",
             (void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BSplineSurface::VKnots),
             R"#(Returns the knots in the V direction.)#"  , py::arg("Kv"))
        .def("VKnots",
             (const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const) static_cast<const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::VKnots),
             R"#(Returns the knots in the V direction.)#" )
        .def("VKnotSequence",
             (void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BSplineSurface::VKnotSequence),
             R"#(Returns the vknots sequence. In this sequence the knots with a multiplicity greater than 1 are repeated. Example : Kv = {k1, k1, k1, k2, k3, k3, k4, k4, k4})#"  , py::arg("Kv"))
        .def("VKnotSequence",
             (const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const) static_cast<const TColStd_Array1OfReal & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::VKnotSequence),
             R"#(Returns the vknots sequence. In this sequence the knots with a multiplicity greater than 1 are repeated. Example : Ku = {k1, k1, k1, k2, k3, k3, k4, k4, k4})#" )
        .def("VMultiplicity",
             (Standard_Integer (Geom_BSplineSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom_BSplineSurface::*)( const Standard_Integer  ) const>(&Geom_BSplineSurface::VMultiplicity),
             R"#(Returns the multiplicity value of knot of range VIndex in the v direction. Raised if VIndex < 1 or VIndex > NbVKnots)#"  , py::arg("VIndex"))
        .def("VMultiplicities",
             (void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Integer> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array1<Standard_Integer> &  ) const>(&Geom_BSplineSurface::VMultiplicities),
             R"#(Returns the multiplicities of the knots in the V direction.)#"  , py::arg("Mv"))
        .def("VMultiplicities",
             (const TColStd_Array1OfInteger & (Geom_BSplineSurface::*)() const) static_cast<const TColStd_Array1OfInteger & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::VMultiplicities),
             R"#(Returns the multiplicities of the knots in the V direction.)#" )
        .def("Weight",
             (Standard_Real (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (Geom_BSplineSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BSplineSurface::Weight),
             R"#(Returns the weight value of range UIndex, VIndex.)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("Weights",
             (void (Geom_BSplineSurface::*)( NCollection_Array2<Standard_Real> &  ) const) static_cast<void (Geom_BSplineSurface::*)( NCollection_Array2<Standard_Real> &  ) const>(&Geom_BSplineSurface::Weights),
             R"#(Returns the weights of the B-spline surface.)#"  , py::arg("W"))
        .def("Weights",
             (const TColStd_Array2OfReal * (Geom_BSplineSurface::*)() const) static_cast<const TColStd_Array2OfReal * (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::Weights),
             R"#(Returns the weights of the B-spline surface. value and derivatives computation)#" )
        .def("D0",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_BSplineSurface::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineSurface::D1),
             R"#(Raised if the continuity of the surface is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineSurface::D2),
             R"#(Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineSurface::D3),
             R"#(Raised if the continuity of the surface is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BSplineSurface::DN),
             R"#(Nu is the order of derivation in the U parametric direction and Nv is the order of derivation in the V parametric direction.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("LocalD0",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt &  ) const>(&Geom_BSplineSurface::LocalD0),
             R"#(Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("FromUK1"),  py::arg("ToUK2"),  py::arg("FromVK1"),  py::arg("ToVK2"),  py::arg("P"))
        .def("LocalD1",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineSurface::LocalD1),
             R"#(Raised if the local continuity of the surface is not C1 between the knots FromUK1, ToUK2 and FromVK1, ToVK2. Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("FromUK1"),  py::arg("ToUK2"),  py::arg("FromVK1"),  py::arg("ToVK2"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("LocalD2",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineSurface::LocalD2),
             R"#(Raised if the local continuity of the surface is not C2 between the knots FromUK1, ToUK2 and FromVK1, ToVK2. Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("FromUK1"),  py::arg("ToUK2"),  py::arg("FromVK1"),  py::arg("ToVK2"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("LocalD3",
             (void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BSplineSurface::LocalD3),
             R"#(Raised if the local continuity of the surface is not C3 between the knots FromUK1, ToUK2 and FromVK1, ToVK2. Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("FromUK1"),  py::arg("ToUK2"),  py::arg("FromVK1"),  py::arg("ToVK2"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("LocalDN",
             (gp_Vec (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BSplineSurface::LocalDN),
             R"#(Raised if the local continuity of the surface is not CNu between the knots FromUK1, ToUK2 and CNv between the knots FromVK1, ToVK2. Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("FromUK1"),  py::arg("ToUK2"),  py::arg("FromVK1"),  py::arg("ToVK2"),  py::arg("Nu"),  py::arg("Nv"))
        .def("LocalValue",
             (gp_Pnt (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Pnt (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BSplineSurface::LocalValue),
             R"#(Computes the point of parameter U, V on the BSpline surface patch defines between the knots UK1 UK2, VK1, VK2. U can be out of the bounds [Knot UK1, Knot UK2] and V can be outof the bounds [Knot VK1, Knot VK2] but for the computation we only use the definition of the surface between these knot values. Raises if FromUK1 = ToUK2 or FromVK1 = ToVK2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("FromUK1"),  py::arg("ToUK2"),  py::arg("FromVK1"),  py::arg("ToVK2"))
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real  ) const>(&Geom_BSplineSurface::UIso),
             R"#(Computes the U isoparametric curve. A B-spline curve is returned.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real  ) const>(&Geom_BSplineSurface::VIso),
             R"#(Computes the V isoparametric curve. A B-spline curve is returned.)#"  , py::arg("V"))
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Boolean  ) const>(&Geom_BSplineSurface::UIso),
             R"#(Computes the U isoparametric curve. If CheckRational=False, no try to make it non-rational. A B-spline curve is returned.)#"  , py::arg("U"),  py::arg("CheckRational"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_BSplineSurface::*)( const Standard_Real ,  const Standard_Boolean  ) const>(&Geom_BSplineSurface::VIso),
             R"#(Computes the V isoparametric curve. If CheckRational=False, no try to make it non-rational. A B-spline curve is returned. transformations)#"  , py::arg("V"),  py::arg("CheckRational"))
        .def("Transform",
             (void (Geom_BSplineSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_BSplineSurface::*)( const gp_Trsf &  ) >(&Geom_BSplineSurface::Transform),
             R"#(Applies the transformation T to this BSpline surface.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_BSplineSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::Copy),
             R"#(Creates a new object which is a copy of this BSpline surface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_BSplineSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_BSplineSurface::*)() const>(&Geom_BSplineSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("PeriodicNormalization",
             []( Geom_BSplineSurface &self   ){ Standard_Real  U; Standard_Real  V; self.PeriodicNormalization(U,V); return std::make_tuple(U,V); },
             R"#(returns the parameter normalized within the period if the surface is periodic : otherwise does not do anything)#" )
        .def("LocateU",
             []( Geom_BSplineSurface &self , const Standard_Real U,const Standard_Real ParametricTolerance,const Standard_Boolean WithKnotRepetition ){ Standard_Integer  I1; Standard_Integer  I2; self.LocateU(U,ParametricTolerance,I1,I2,WithKnotRepetition); return std::make_tuple(I1,I2); },
             R"#(Locates the parametric value U in the sequence of UKnots. If "WithKnotRepetition" is True we consider the knot's representation with repetition of multiple knot value, otherwise we consider the knot's representation with no repetition of multiple knot values. UKnots (I1) <= U <= UKnots (I2) . if I1 = I2 U is a knot value (the tolerance criterion ParametricTolerance is used). . if I1 < 1 => U < UKnots(1) - Abs(ParametricTolerance) . if I2 > NbUKnots => U > UKnots(NbUKnots)+Abs(ParametricTolerance))#"  , py::arg("U"),  py::arg("ParametricTolerance"),  py::arg("WithKnotRepetition")=static_cast<const Standard_Boolean>(Standard_False))
        .def("LocateV",
             []( Geom_BSplineSurface &self , const Standard_Real V,const Standard_Real ParametricTolerance,const Standard_Boolean WithKnotRepetition ){ Standard_Integer  I1; Standard_Integer  I2; self.LocateV(V,ParametricTolerance,I1,I2,WithKnotRepetition); return std::make_tuple(I1,I2); },
             R"#(Locates the parametric value V in the sequence of knots. If "WithKnotRepetition" is True we consider the knot's representation with repetition of multiple knot value, otherwise we consider the knot's representation with no repetition of multiple knot values. VKnots (I1) <= V <= VKnots (I2) . if I1 = I2 V is a knot value (the tolerance criterion ParametricTolerance is used). . if I1 < 1 => V < VKnots(1) - Abs(ParametricTolerance) . if I2 > NbVKnots => V > VKnots(NbVKnots)+Abs(ParametricTolerance) poles insertion and removing The following methods are available only if the surface is Uniform or QuasiUniform in the considered direction The knot repartition is modified.)#"  , py::arg("V"),  py::arg("ParametricTolerance"),  py::arg("WithKnotRepetition")=static_cast<const Standard_Boolean>(Standard_False))
        .def("MovePoint",
             []( Geom_BSplineSurface &self , const Standard_Real U,const Standard_Real V,const gp_Pnt & P,const Standard_Integer UIndex1,const Standard_Integer UIndex2,const Standard_Integer VIndex1,const Standard_Integer VIndex2 ){ Standard_Integer  UFirstIndex; Standard_Integer  ULastIndex; Standard_Integer  VFirstIndex; Standard_Integer  VLastIndex; self.MovePoint(U,V,P,UIndex1,UIndex2,VIndex1,VIndex2,UFirstIndex,ULastIndex,VFirstIndex,VLastIndex); return std::make_tuple(UFirstIndex,ULastIndex,VFirstIndex,VLastIndex); },
             R"#(Move a point with parameter U and V to P. given u,v as parameters) to reach a new position UIndex1, UIndex2, VIndex1, VIndex2: indicates the poles which can be moved if Problem in BSplineBasis calculation, no change for the curve and UFirstIndex, VLastIndex = 0 VFirstIndex, VLastIndex = 0)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("UIndex1"),  py::arg("UIndex2"),  py::arg("VIndex1"),  py::arg("VIndex2"))
        .def("Bounds",
             []( Geom_BSplineSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds of the surface. Warnings : These parametric values are the bounds of the array of knots UKnots and VKnots only if the first knots and the last knots have a multiplicity equal to UDegree + 1 or VDegree + 1)#" )
        .def("Resolution",
             []( Geom_BSplineSurface &self , const Standard_Real Tolerance3D ){ Standard_Real  UTolerance; Standard_Real  VTolerance; self.Resolution(Tolerance3D,UTolerance,VTolerance); return std::make_tuple(UTolerance,VTolerance); },
             R"#(Computes two tolerance values for this BSpline surface, based on the given tolerance in 3D space Tolerance3D. The tolerances computed are: - UTolerance in the u parametric direction, and - VTolerance in the v parametric direction. If f(u,v) is the equation of this BSpline surface, UTolerance and VTolerance guarantee that : | u1 - u0 | < UTolerance and | v1 - v0 | < VTolerance ====> |f (u1,v1) - f (u0,v0)| < Tolerance3D)#"  , py::arg("Tolerance3D"))
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Geom_BSplineSurface::MaxDegree),
                    R"#(Returns the value of the maximum degree of the normalized B-spline basis functions in the u and v directions.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_BSplineSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_BSplineSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_BezierCurve ,opencascade::handle<Geom_BezierCurve>  , Geom_BoundedCurve >>(m.attr("Geom_BezierCurve"))
    // constructors
        .def(py::init<  const NCollection_Array1<gp_Pnt> & >()  , py::arg("CurvePoles") )
        .def(py::init<  const NCollection_Array1<gp_Pnt> &, const NCollection_Array1<Standard_Real> & >()  , py::arg("CurvePoles"),  py::arg("PoleWeights") )
    // custom constructors
    // methods
        .def("Increase",
             (void (Geom_BezierCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer  ) >(&Geom_BezierCurve::Increase),
             R"#(Increases the degree of a bezier curve. Degree is the new degree of <me>. Raises ConstructionError if Degree is greater than MaxDegree or lower than 2 or lower than the initial degree of <me>.)#"  , py::arg("Degree"))
        .def("InsertPoleAfter",
             (void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) >(&Geom_BezierCurve::InsertPoleAfter),
             R"#(Inserts a pole P after the pole of range Index. If the curve <me> is rational the weight value for the new pole of range Index is 1.0. raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"),  py::arg("P"))
        .def("InsertPoleAfter",
             (void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) >(&Geom_BezierCurve::InsertPoleAfter),
             R"#(Inserts a pole with its weight in the set of poles after the pole of range Index. If the curve was non rational it can become rational if all the weights are not identical. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight"))
        .def("InsertPoleBefore",
             (void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) >(&Geom_BezierCurve::InsertPoleBefore),
             R"#(Inserts a pole P before the pole of range Index. If the curve <me> is rational the weight value for the new pole of range Index is 1.0. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"),  py::arg("P"))
        .def("InsertPoleBefore",
             (void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) >(&Geom_BezierCurve::InsertPoleBefore),
             R"#(Inserts a pole with its weight in the set of poles after the pole of range Index. If the curve was non rational it can become rational if all the weights are not identical. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight"))
        .def("RemovePole",
             (void (Geom_BezierCurve::*)( const Standard_Integer  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer  ) >(&Geom_BezierCurve::RemovePole),
             R"#(Removes the pole of range Index. If the curve was rational it can become non rational. Raised if Index is not in the range [1, NbPoles] Raised if Degree is lower than 2.)#"  , py::arg("Index"))
        .def("Reverse",
             (void (Geom_BezierCurve::*)() ) static_cast<void (Geom_BezierCurve::*)() >(&Geom_BezierCurve::Reverse),
             R"#(Reverses the direction of parametrization of <me> Value (NewU) = Value (1 - OldU))#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_BezierCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_BezierCurve::*)( const Standard_Real  ) const>(&Geom_BezierCurve::ReversedParameter),
             R"#(Returns the parameter on the reversed curve for the point of parameter U on <me>.)#"  , py::arg("U"))
        .def("Segment",
             (void (Geom_BezierCurve::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Real ,  const Standard_Real  ) >(&Geom_BezierCurve::Segment),
             R"#(Segments the curve between U1 and U2 which can be out of the bounds of the curve. The curve is oriented from U1 to U2. The control points are modified, the first and the last point are not the same but the parametrization range is [0, 1] else it could not be a Bezier curve. Warnings : Even if <me> is not closed it can become closed after the segmentation for example if U1 or U2 are out of the bounds of the curve <me> or if the curve makes loop. After the segmentation the length of a curve can be null.)#"  , py::arg("U1"),  py::arg("U2"))
        .def("SetPole",
             (void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt &  ) >(&Geom_BezierCurve::SetPole),
             R"#(Substitutes the pole of range index with P. If the curve <me> is rational the weight of range Index is not modified. raiseD if Index is not in the range [1, NbPoles])#"  , py::arg("Index"),  py::arg("P"))
        .def("SetPole",
             (void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) >(&Geom_BezierCurve::SetPole),
             R"#(Substitutes the pole and the weights of range Index. If the curve <me> is not rational it can become rational if all the weights are not identical. If the curve was rational it can become non rational if all the weights are identical. Raised if Index is not in the range [1, NbPoles] Raised if Weight <= Resolution from package gp)#"  , py::arg("Index"),  py::arg("P"),  py::arg("Weight"))
        .def("SetWeight",
             (void (Geom_BezierCurve::*)( const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom_BezierCurve::*)( const Standard_Integer ,  const Standard_Real  ) >(&Geom_BezierCurve::SetWeight),
             R"#(Changes the weight of the pole of range Index. If the curve <me> is not rational it can become rational if all the weights are not identical. If the curve was rational it can become non rational if all the weights are identical. Raised if Index is not in the range [1, NbPoles] Raised if Weight <= Resolution from package gp)#"  , py::arg("Index"),  py::arg("Weight"))
        .def("IsClosed",
             (Standard_Boolean (Geom_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::IsClosed),
             R"#(Returns True if the distance between the first point and the last point of the curve is lower or equal to the Resolution from package gp.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom_BezierCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_BezierCurve::*)( const Standard_Integer  ) const>(&Geom_BezierCurve::IsCN),
             R"#(Continuity of the curve, returns True.)#"  , py::arg("N"))
        .def("IsPeriodic",
             (Standard_Boolean (Geom_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::IsPeriodic),
             R"#(Returns True if the parametrization of a curve is periodic. (P(u) = P(u + T) T = constante))#" )
        .def("IsRational",
             (Standard_Boolean (Geom_BezierCurve::*)() const) static_cast<Standard_Boolean (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::IsRational),
             R"#(Returns false if all the weights are identical. The tolerance criterion is Resolution from package gp.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom_BezierCurve::*)() const) static_cast<GeomAbs_Shape (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::Continuity),
             R"#(a Bezier curve is CN)#" )
        .def("Degree",
             (Standard_Integer (Geom_BezierCurve::*)() const) static_cast<Standard_Integer (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::Degree),
             R"#(Returns the polynomial degree of the curve. it is the number of poles - 1 point P and derivatives (V1, V2, V3) computation The Bezier Curve has a Polynomial representation so the parameter U can be out of the bounds of the curve.)#" )
        .def("D0",
             (void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_BezierCurve::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_BezierCurve::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BezierCurve::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BezierCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BezierCurve::D3),
             R"#(For this Bezier curve, computes - the point P of parameter U, or - the point P and one or more of the following values: - V1, the first derivative vector, - V2, the second derivative vector, - V3, the third derivative vector. Note: the parameter U can be outside the bounds of the curve.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_BezierCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_BezierCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_BezierCurve::DN),
             R"#(For the point of parameter U of this Bezier curve, computes the vector corresponding to the Nth derivative. Note: the parameter U can be outside the bounds of the curve. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("StartPoint",
             (gp_Pnt (Geom_BezierCurve::*)() const) static_cast<gp_Pnt (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::StartPoint),
             R"#(Returns Value (U=0.), it is the first control point of the curve.)#" )
        .def("EndPoint",
             (gp_Pnt (Geom_BezierCurve::*)() const) static_cast<gp_Pnt (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::EndPoint),
             R"#(Returns Value (U=1.), it is the last control point of the Bezier curve.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom_BezierCurve::*)() const) static_cast<Standard_Real (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::FirstParameter),
             R"#(Returns the value of the first parameter of this Bezier curve. This is 0.0, which gives the start point of this Bezier curve)#" )
        .def("LastParameter",
             (Standard_Real (Geom_BezierCurve::*)() const) static_cast<Standard_Real (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::LastParameter),
             R"#(Returns the value of the last parameter of this Bezier curve. This is 1.0, which gives the end point of this Bezier curve.)#" )
        .def("NbPoles",
             (Standard_Integer (Geom_BezierCurve::*)() const) static_cast<Standard_Integer (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::NbPoles),
             R"#(Returns the number of poles of this Bezier curve.)#" )
        .def("Pole",
             (const gp_Pnt & (Geom_BezierCurve::*)( const Standard_Integer  ) const) static_cast<const gp_Pnt & (Geom_BezierCurve::*)( const Standard_Integer  ) const>(&Geom_BezierCurve::Pole),
             R"#(Returns the pole of range Index. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"))
        .def("Poles",
             (void (Geom_BezierCurve::*)( NCollection_Array1<gp_Pnt> &  ) const) static_cast<void (Geom_BezierCurve::*)( NCollection_Array1<gp_Pnt> &  ) const>(&Geom_BezierCurve::Poles),
             R"#(Returns all the poles of the curve.)#"  , py::arg("P"))
        .def("Poles",
             (const TColgp_Array1OfPnt & (Geom_BezierCurve::*)() const) static_cast<const TColgp_Array1OfPnt & (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::Poles),
             R"#(Returns all the poles of the curve.)#" )
        .def("Weight",
             (Standard_Real (Geom_BezierCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Real (Geom_BezierCurve::*)( const Standard_Integer  ) const>(&Geom_BezierCurve::Weight),
             R"#(Returns the weight of range Index. Raised if Index is not in the range [1, NbPoles])#"  , py::arg("Index"))
        .def("Weights",
             (void (Geom_BezierCurve::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_BezierCurve::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_BezierCurve::Weights),
             R"#(Returns all the weights of the curve.)#"  , py::arg("W"))
        .def("Weights",
             (const TColStd_Array1OfReal * (Geom_BezierCurve::*)() const) static_cast<const TColStd_Array1OfReal * (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::Weights),
             R"#(Returns all the weights of the curve.)#" )
        .def("Transform",
             (void (Geom_BezierCurve::*)( const gp_Trsf &  ) ) static_cast<void (Geom_BezierCurve::*)( const gp_Trsf &  ) >(&Geom_BezierCurve::Transform),
             R"#(Applies the transformation T to this Bezier curve.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_BezierCurve::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::Copy),
             R"#(Creates a new object which is a copy of this Bezier curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_BezierCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_BezierCurve::*)() const>(&Geom_BezierCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Resolution",
             []( Geom_BezierCurve &self , const Standard_Real Tolerance3D ){ Standard_Real  UTolerance; self.Resolution(Tolerance3D,UTolerance); return std::make_tuple(UTolerance); },
             R"#(Computes for this Bezier curve the parametric tolerance UTolerance for a given 3D tolerance Tolerance3D. If f(t) is the equation of this Bezier curve, UTolerance ensures that: |t1-t0| < UTolerance ===> |f(t1)-f(t0)| < Tolerance3D)#"  , py::arg("Tolerance3D"))
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Geom_BezierCurve::MaxDegree),
                    R"#(Returns the value of the maximum polynomial degree of any Geom_BezierCurve curve. This value is 25.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_BezierCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_BezierCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_BezierSurface ,opencascade::handle<Geom_BezierSurface>  , Geom_BoundedSurface >>(m.attr("Geom_BezierSurface"))
    // constructors
        .def(py::init<  const NCollection_Array2<gp_Pnt> & >()  , py::arg("SurfacePoles") )
        .def(py::init<  const NCollection_Array2<gp_Pnt> &, const NCollection_Array2<Standard_Real> & >()  , py::arg("SurfacePoles"),  py::arg("PoleWeights") )
    // custom constructors
    // methods
        .def("ExchangeUV",
             (void (Geom_BezierSurface::*)() ) static_cast<void (Geom_BezierSurface::*)() >(&Geom_BezierSurface::ExchangeUV),
             R"#(Exchanges the direction U and V on a Bezier surface As a consequence: - the poles and weights tables are transposed, - degrees, rational characteristics and so on are exchanged between the two parametric directions, and - the orientation of the surface is reversed.)#" )
        .def("Increase",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) >(&Geom_BezierSurface::Increase),
             R"#(Increases the degree of this Bezier surface in the two parametric directions.)#"  , py::arg("UDeg"),  py::arg("VDeg"))
        .def("InsertPoleColAfter",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BezierSurface::InsertPoleColAfter),
             R"#(Inserts a column of poles. If the surface is rational the weights values associated with CPoles are equal defaulted to 1.)#"  , py::arg("VIndex"),  py::arg("CPoles"))
        .def("InsertPoleColAfter",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::InsertPoleColAfter),
             R"#(Inserts a column of poles and weights. If the surface was non-rational it can become rational.)#"  , py::arg("VIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("InsertPoleColBefore",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BezierSurface::InsertPoleColBefore),
             R"#(Inserts a column of poles. If the surface is rational the weights values associated with CPoles are equal defaulted to 1.)#"  , py::arg("VIndex"),  py::arg("CPoles"))
        .def("InsertPoleColBefore",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::InsertPoleColBefore),
             R"#(Inserts a column of poles and weights. If the surface was non-rational it can become rational.)#"  , py::arg("VIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("InsertPoleRowAfter",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BezierSurface::InsertPoleRowAfter),
             R"#(Inserts a row of poles. If the surface is rational the weights values associated with CPoles are equal defaulted to 1.)#"  , py::arg("UIndex"),  py::arg("CPoles"))
        .def("InsertPoleRowAfter",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::InsertPoleRowAfter),
             R"#(Inserts a row of poles and weights. If the surface was non-rational it can become rational.)#"  , py::arg("UIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("InsertPoleRowBefore",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BezierSurface::InsertPoleRowBefore),
             R"#(Inserts a row of poles. If the surface is rational the weights values associated with CPoles are equal defaulted to 1.)#"  , py::arg("UIndex"),  py::arg("CPoles"))
        .def("InsertPoleRowBefore",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::InsertPoleRowBefore),
             R"#(Inserts a row of poles and weights. If the surface was non-rational it can become rational.)#"  , py::arg("UIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("RemovePoleCol",
             (void (Geom_BezierSurface::*)( const Standard_Integer  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer  ) >(&Geom_BezierSurface::RemovePoleCol),
             R"#(Removes a column of poles. If the surface was rational it can become non-rational.)#"  , py::arg("VIndex"))
        .def("RemovePoleRow",
             (void (Geom_BezierSurface::*)( const Standard_Integer  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer  ) >(&Geom_BezierSurface::RemovePoleRow),
             R"#(Removes a row of poles. If the surface was rational it can become non-rational.)#"  , py::arg("UIndex"))
        .def("Segment",
             (void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&Geom_BezierSurface::Segment),
             R"#(Modifies this Bezier surface by segmenting it between U1 and U2 in the u parametric direction, and between V1 and V2 in the v parametric direction. U1, U2, V1, and V2 can be outside the bounds of this surface. - U1 and U2 isoparametric Bezier curves, segmented between V1 and V2, become the two bounds of the surface in the v parametric direction (0. and 1. u isoparametric curves). - V1 and V2 isoparametric Bezier curves, segmented between U1 and U2, become the two bounds of the surface in the u parametric direction (0. and 1. v isoparametric curves). The poles and weights tables are modified, but the degree of this surface in the u and v parametric directions does not change. U1 can be greater than U2, and V1 can be greater than V2. In these cases, the corresponding parametric direction is inverted. The orientation of the surface is inverted if one (and only one) parametric direction is inverted.)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"))
        .def("SetPole",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt &  ) >(&Geom_BezierSurface::SetPole),
             R"#(Modifies a pole value. If the surface is rational the weight of range (UIndex, VIndex) is not modified.)#"  , py::arg("UIndex"),  py::arg("VIndex"),  py::arg("P"))
        .def("SetPole",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const gp_Pnt & ,  const Standard_Real  ) >(&Geom_BezierSurface::SetPole),
             R"#(Substitutes the pole and the weight of range UIndex, VIndex. If the surface <me> is not rational it can become rational. if the surface was rational it can become non-rational.)#"  , py::arg("UIndex"),  py::arg("VIndex"),  py::arg("P"),  py::arg("Weight"))
        .def("SetPoleCol",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BezierSurface::SetPoleCol),
             R"#(Modifies a column of poles. The length of CPoles can be lower but not greater than NbUPoles so you can modify just a part of the column. Raised if VIndex < 1 or VIndex > NbVPoles)#"  , py::arg("VIndex"),  py::arg("CPoles"))
        .def("SetPoleCol",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::SetPoleCol),
             R"#(Modifies a column of poles. If the surface was rational it can become non-rational If the surface was non-rational it can become rational. The length of CPoles can be lower but not greater than NbUPoles so you can modify just a part of the column. Raised if VIndex < 1 or VIndex > NbVPoles)#"  , py::arg("VIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("SetPoleRow",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> &  ) >(&Geom_BezierSurface::SetPoleRow),
             R"#(Modifies a row of poles. The length of CPoles can be lower but not greater than NbVPoles so you can modify just a part of the row. Raised if UIndex < 1 or UIndex > NbUPoles)#"  , py::arg("UIndex"),  py::arg("CPoles"))
        .def("SetPoleRow",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<gp_Pnt> & ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::SetPoleRow),
             R"#(Modifies a row of poles and weights. If the surface was rational it can become non-rational. If the surface was non-rational it can become rational. The length of CPoles can be lower but not greater than NbVPoles so you can modify just a part of the row. Raised if UIndex < 1 or UIndex > NbUPoles)#"  , py::arg("UIndex"),  py::arg("CPoles"),  py::arg("CPoleWeights"))
        .def("SetWeight",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Geom_BezierSurface::SetWeight),
             R"#(Modifies the weight of the pole of range UIndex, VIndex. If the surface was non-rational it can become rational. If the surface was rational it can become non-rational.)#"  , py::arg("UIndex"),  py::arg("VIndex"),  py::arg("Weight"))
        .def("SetWeightCol",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::SetWeightCol),
             R"#(Modifies a column of weights. If the surface was rational it can become non-rational. If the surface was non-rational it can become rational. The length of CPoleWeights can be lower but not greater than NbUPoles. Raised if VIndex < 1 or VIndex > NbVPoles)#"  , py::arg("VIndex"),  py::arg("CPoleWeights"))
        .def("SetWeightRow",
             (void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) ) static_cast<void (Geom_BezierSurface::*)( const Standard_Integer ,   const NCollection_Array1<Standard_Real> &  ) >(&Geom_BezierSurface::SetWeightRow),
             R"#(Modifies a row of weights. If the surface was rational it can become non-rational. If the surface was non-rational it can become rational. The length of CPoleWeights can be lower but not greater than NbVPoles. Raised if UIndex < 1 or UIndex > NbUPoles)#"  , py::arg("UIndex"),  py::arg("CPoleWeights"))
        .def("UReverse",
             (void (Geom_BezierSurface::*)() ) static_cast<void (Geom_BezierSurface::*)() >(&Geom_BezierSurface::UReverse),
             R"#(Changes the orientation of this Bezier surface in the u parametric direction. The bounds of the surface are not changed, but the given parametric direction is reversed. Hence, the orientation of the surface is reversed.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_BezierSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_BezierSurface::*)( const Standard_Real  ) const>(&Geom_BezierSurface::UReversedParameter),
             R"#(Computes the u (or v) parameter on the modified surface, produced by reversing its u (or v) parametric direction, for any point of u parameter U (or of v parameter V) on this Bezier surface. In the case of a Bezier surface, these functions return respectively: - 1.-U, or 1.-V.)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_BezierSurface::*)() ) static_cast<void (Geom_BezierSurface::*)() >(&Geom_BezierSurface::VReverse),
             R"#(Changes the orientation of this Bezier surface in the v parametric direction. The bounds of the surface are not changed, but the given parametric direction is reversed. Hence, the orientation of the surface is reversed.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_BezierSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_BezierSurface::*)( const Standard_Real  ) const>(&Geom_BezierSurface::VReversedParameter),
             R"#(Computes the u (or v) parameter on the modified surface, produced by reversing its u (or v) parametric direction, for any point of u parameter U (or of v parameter V) on this Bezier surface. In the case of a Bezier surface, these functions return respectively: - 1.-U, or 1.-V.)#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (Geom_BezierSurface::*)() const) static_cast<GeomAbs_Shape (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::Continuity),
             R"#(Returns the continuity of the surface CN : the order of continuity is infinite.)#" )
        .def("D0",
             (void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_BezierSurface::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BezierSurface::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BezierSurface::D2),
             R"#(None)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_BezierSurface::D3),
             R"#(Computes P, the point of parameters (U, V) of this Bezier surface, and - one or more of the following sets of vectors: - D1U and D1V, the first derivative vectors at this point, - D2U, D2V and D2UV, the second derivative vectors at this point, - D3U, D3V, D3UUV and D3UVV, the third derivative vectors at this point. Note: The parameters U and V can be outside the bounds of the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_BezierSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BezierSurface::DN),
             R"#(Computes the derivative of order Nu in the u parametric direction, and Nv in the v parametric direction, at the point of parameters (U, V) of this Bezier surface. Note: The parameters U and V can be outside the bounds of the surface. Exceptions Standard_RangeError if: - Nu + Nv is less than 1, or Nu or Nv is negative.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("NbUPoles",
             (Standard_Integer (Geom_BezierSurface::*)() const) static_cast<Standard_Integer (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::NbUPoles),
             R"#(Returns the number of poles in the U direction.)#" )
        .def("NbVPoles",
             (Standard_Integer (Geom_BezierSurface::*)() const) static_cast<Standard_Integer (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::NbVPoles),
             R"#(Returns the number of poles in the V direction.)#" )
        .def("Pole",
             (const gp_Pnt & (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const gp_Pnt & (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BezierSurface::Pole),
             R"#(Returns the pole of range UIndex, VIndex Raised if UIndex < 1 or UIndex > NbUPoles, or VIndex < 1 or VIndex > NbVPoles.)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("Poles",
             (void (Geom_BezierSurface::*)( NCollection_Array2<gp_Pnt> &  ) const) static_cast<void (Geom_BezierSurface::*)( NCollection_Array2<gp_Pnt> &  ) const>(&Geom_BezierSurface::Poles),
             R"#(Returns the poles of the Bezier surface.)#"  , py::arg("P"))
        .def("Poles",
             (const TColgp_Array2OfPnt & (Geom_BezierSurface::*)() const) static_cast<const TColgp_Array2OfPnt & (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::Poles),
             R"#(Returns the poles of the Bezier surface.)#" )
        .def("UDegree",
             (Standard_Integer (Geom_BezierSurface::*)() const) static_cast<Standard_Integer (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::UDegree),
             R"#(Returns the degree of the surface in the U direction it is NbUPoles - 1)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_BezierSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_BezierSurface::*)( const Standard_Real  ) const>(&Geom_BezierSurface::UIso),
             R"#(Computes the U isoparametric curve. For a Bezier surface the UIso curve is a Bezier curve.)#"  , py::arg("U"))
        .def("VDegree",
             (Standard_Integer (Geom_BezierSurface::*)() const) static_cast<Standard_Integer (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::VDegree),
             R"#(Returns the degree of the surface in the V direction it is NbVPoles - 1)#" )
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_BezierSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_BezierSurface::*)( const Standard_Real  ) const>(&Geom_BezierSurface::VIso),
             R"#(Computes the V isoparametric curve. For a Bezier surface the VIso curve is a Bezier curve.)#"  , py::arg("V"))
        .def("Weight",
             (Standard_Real (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (Geom_BezierSurface::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_BezierSurface::Weight),
             R"#(Returns the weight of range UIndex, VIndex)#"  , py::arg("UIndex"),  py::arg("VIndex"))
        .def("Weights",
             (void (Geom_BezierSurface::*)( NCollection_Array2<Standard_Real> &  ) const) static_cast<void (Geom_BezierSurface::*)( NCollection_Array2<Standard_Real> &  ) const>(&Geom_BezierSurface::Weights),
             R"#(Returns the weights of the Bezier surface.)#"  , py::arg("W"))
        .def("Weights",
             (const TColStd_Array2OfReal * (Geom_BezierSurface::*)() const) static_cast<const TColStd_Array2OfReal * (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::Weights),
             R"#(Returns the weights of the Bezier surface.)#" )
        .def("IsUClosed",
             (Standard_Boolean (Geom_BezierSurface::*)() const) static_cast<Standard_Boolean (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::IsUClosed),
             R"#(Returns True if the first control points row and the last control points row are identical. The tolerance criterion is Resolution from package gp.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_BezierSurface::*)() const) static_cast<Standard_Boolean (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::IsVClosed),
             R"#(Returns True if the first control points column and the last control points column are identical. The tolerance criterion is Resolution from package gp.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_BezierSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_BezierSurface::*)( const Standard_Integer  ) const>(&Geom_BezierSurface::IsCNu),
             R"#(Returns True, a Bezier surface is always CN)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_BezierSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_BezierSurface::*)( const Standard_Integer  ) const>(&Geom_BezierSurface::IsCNv),
             R"#(Returns True, a BezierSurface is always CN)#"  , py::arg("N"))
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_BezierSurface::*)() const) static_cast<Standard_Boolean (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::IsUPeriodic),
             R"#(Returns False.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_BezierSurface::*)() const) static_cast<Standard_Boolean (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::IsVPeriodic),
             R"#(Returns False.)#" )
        .def("IsURational",
             (Standard_Boolean (Geom_BezierSurface::*)() const) static_cast<Standard_Boolean (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::IsURational),
             R"#(Returns False if the weights are identical in the U direction, The tolerance criterion is Resolution from package gp. Example : |1.0, 1.0, 1.0| if Weights = |0.5, 0.5, 0.5| returns False |2.0, 2.0, 2.0|)#" )
        .def("IsVRational",
             (Standard_Boolean (Geom_BezierSurface::*)() const) static_cast<Standard_Boolean (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::IsVRational),
             R"#(Returns False if the weights are identical in the V direction, The tolerance criterion is Resolution from package gp. Example : |1.0, 2.0, 0.5| if Weights = |1.0, 2.0, 0.5| returns False |1.0, 2.0, 0.5|)#" )
        .def("Transform",
             (void (Geom_BezierSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_BezierSurface::*)( const gp_Trsf &  ) >(&Geom_BezierSurface::Transform),
             R"#(Applies the transformation T to this Bezier surface.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_BezierSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::Copy),
             R"#(Creates a new object which is a copy of this Bezier surface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_BezierSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_BezierSurface::*)() const>(&Geom_BezierSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( Geom_BezierSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this Bezier surface. In the case of a Bezier surface, this function returns U1 = 0, V1 = 0, U2 = 1, V2 = 1.)#" )
        .def("Resolution",
             []( Geom_BezierSurface &self , const Standard_Real Tolerance3D ){ Standard_Real  UTolerance; Standard_Real  VTolerance; self.Resolution(Tolerance3D,UTolerance,VTolerance); return std::make_tuple(UTolerance,VTolerance); },
             R"#(Computes two tolerance values for this Bezier surface, based on the given tolerance in 3D space Tolerance3D. The tolerances computed are: - UTolerance in the u parametric direction, and - VTolerance in the v parametric direction. If f(u,v) is the equation of this Bezier surface, UTolerance and VTolerance guarantee that: | u1 - u0 | < UTolerance and | v1 - v0 | < VTolerance ====> |f (u1,v1) - f (u0,v0)| < Tolerance3D)#"  , py::arg("Tolerance3D"))
    // static methods
        .def_static("MaxDegree_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Geom_BezierSurface::MaxDegree),
                    R"#(Returns the value of the maximum polynomial degree of a Bezier surface. This value is 25.)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_BezierSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_BezierSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Circle ,opencascade::handle<Geom_Circle>  , Geom_Conic >>(m.attr("Geom_Circle"))
    // constructors
        .def(py::init< const gp_Circ & >()  , py::arg("C") )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("SetCirc",
             (void (Geom_Circle::*)( const gp_Circ &  ) ) static_cast<void (Geom_Circle::*)( const gp_Circ &  ) >(&Geom_Circle::SetCirc),
             R"#(Set <me> so that <me> has the same geometric properties as C.)#"  , py::arg("C"))
        .def("SetRadius",
             (void (Geom_Circle::*)( const Standard_Real  ) ) static_cast<void (Geom_Circle::*)( const Standard_Real  ) >(&Geom_Circle::SetRadius),
             R"#(Assigns the value R to the radius of this circle. Note: it is possible to have a circle with a radius equal to 0.0. Exceptions - Standard_ConstructionError if R is negative.)#"  , py::arg("R"))
        .def("Circ",
             (gp_Circ (Geom_Circle::*)() const) static_cast<gp_Circ (Geom_Circle::*)() const>(&Geom_Circle::Circ),
             R"#(returns the non transient circle from gp with the same geometric properties as <me>.)#" )
        .def("Radius",
             (Standard_Real (Geom_Circle::*)() const) static_cast<Standard_Real (Geom_Circle::*)() const>(&Geom_Circle::Radius),
             R"#(Returns the radius of this circle.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_Circle::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Circle::*)( const Standard_Real  ) const>(&Geom_Circle::ReversedParameter),
             R"#(Computes the parameter on the reversed circle for the point of parameter U on this circle. For a circle, the returned value is: 2.*Pi - U.)#"  , py::arg("U"))
        .def("Eccentricity",
             (Standard_Real (Geom_Circle::*)() const) static_cast<Standard_Real (Geom_Circle::*)() const>(&Geom_Circle::Eccentricity),
             R"#(Returns the eccentricity e = 0 for a circle.)#" )
        .def("FirstParameter",
             (Standard_Real (Geom_Circle::*)() const) static_cast<Standard_Real (Geom_Circle::*)() const>(&Geom_Circle::FirstParameter),
             R"#(Returns the value of the first parameter of this circle. This is 0.0, which gives the start point of this circle, or The start point and end point of a circle are coincident.)#" )
        .def("LastParameter",
             (Standard_Real (Geom_Circle::*)() const) static_cast<Standard_Real (Geom_Circle::*)() const>(&Geom_Circle::LastParameter),
             R"#(Returns the value of the last parameter of this circle. This is 2.*Pi, which gives the end point of this circle. The start point and end point of a circle are coincident.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_Circle::*)() const) static_cast<Standard_Boolean (Geom_Circle::*)() const>(&Geom_Circle::IsClosed),
             R"#(returns True.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_Circle::*)() const) static_cast<Standard_Boolean (Geom_Circle::*)() const>(&Geom_Circle::IsPeriodic),
             R"#(returns True.)#" )
        .def("D0",
             (void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Circle::D0),
             R"#(Returns in P the point of parameter U. P = C + R * Cos (U) * XDir + R * Sin (U) * YDir where C is the center of the circle , XDir the XDirection and YDir the YDirection of the circle's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_Circle::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Circle::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Circle::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Circle::D3),
             R"#(Returns the point P of parameter u, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_Circle::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Circle::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_Circle::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom_Circle::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Circle::*)( const gp_Trsf &  ) >(&Geom_Circle::Transform),
             R"#(Applies the transformation T to this circle.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Circle::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Circle::*)() const>(&Geom_Circle::Copy),
             R"#(Creates a new object which is a copy of this circle.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Circle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Circle::*)() const>(&Geom_Circle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Circle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Circle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_ConicalSurface ,opencascade::handle<Geom_ConicalSurface>  , Geom_ElementarySurface >>(m.attr("Geom_ConicalSurface"))
    // constructors
        .def(py::init< const gp_Ax3 &,const Standard_Real,const Standard_Real >()  , py::arg("A3"),  py::arg("Ang"),  py::arg("Radius") )
        .def(py::init< const gp_Cone & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("SetCone",
             (void (Geom_ConicalSurface::*)( const gp_Cone &  ) ) static_cast<void (Geom_ConicalSurface::*)( const gp_Cone &  ) >(&Geom_ConicalSurface::SetCone),
             R"#(Set <me> so that <me> has the same geometric properties as C.)#"  , py::arg("C"))
        .def("SetRadius",
             (void (Geom_ConicalSurface::*)( const Standard_Real  ) ) static_cast<void (Geom_ConicalSurface::*)( const Standard_Real  ) >(&Geom_ConicalSurface::SetRadius),
             R"#(Changes the radius of the conical surface in the placement plane (Z = 0, V = 0). The local coordinate system is not modified. Raised if R < 0.0)#"  , py::arg("R"))
        .def("SetSemiAngle",
             (void (Geom_ConicalSurface::*)( const Standard_Real  ) ) static_cast<void (Geom_ConicalSurface::*)( const Standard_Real  ) >(&Geom_ConicalSurface::SetSemiAngle),
             R"#(Changes the semi angle of the conical surface. Semi-angle can be negative. Its absolute value Abs(Ang) is in range ]0,PI/2[. Raises ConstructionError if Abs(Ang) < Resolution from gp or Abs(Ang) >= PI/2 - Resolution)#"  , py::arg("Ang"))
        .def("Cone",
             (gp_Cone (Geom_ConicalSurface::*)() const) static_cast<gp_Cone (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::Cone),
             R"#(returns a non transient cone with the same geometric properties as <me>.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_ConicalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_ConicalSurface::*)( const Standard_Real  ) const>(&Geom_ConicalSurface::UReversedParameter),
             R"#(return 2.PI - U.)#"  , py::arg("U"))
        .def("VReversedParameter",
             (Standard_Real (Geom_ConicalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_ConicalSurface::*)( const Standard_Real  ) const>(&Geom_ConicalSurface::VReversedParameter),
             R"#(Computes the u (or v) parameter on the modified surface, when reversing its u (or v) parametric direction, for any point of u parameter U (or of v parameter V) on this cone. In the case of a cone, these functions return respectively: - 2.*Pi - U, -V.)#"  , py::arg("V"))
        .def("VReverse",
             (void (Geom_ConicalSurface::*)() ) static_cast<void (Geom_ConicalSurface::*)() >(&Geom_ConicalSurface::VReverse),
             R"#(Changes the orientation of this cone in the v parametric direction. The bounds of the surface are not changed but the v parametric direction is reversed. As a consequence, for a cone: - the "main Direction" of the local coordinate system is reversed, and - the half-angle at the apex is inverted.)#" )
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_ConicalSurface::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_ConicalSurface::*)( const gp_Trsf &  ) const>(&Geom_ConicalSurface::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("Apex",
             (gp_Pnt (Geom_ConicalSurface::*)() const) static_cast<gp_Pnt (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::Apex),
             R"#(Computes the apex of this cone. It is on the negative side of the axis of revolution of this cone if the half-angle at the apex is positive, and on the positive side of the "main Axis" if the half-angle is negative.)#" )
        .def("RefRadius",
             (Standard_Real (Geom_ConicalSurface::*)() const) static_cast<Standard_Real (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::RefRadius),
             R"#(Returns the reference radius of this cone. The reference radius is the radius of the circle formed by the intersection of this cone and its reference plane (i.e. the plane defined by the origin, "X Direction" and "Y Direction" of the local coordinate system of this cone). If the apex of this cone is on the origin of the local coordinate system of this cone, the returned value is 0.)#" )
        .def("SemiAngle",
             (Standard_Real (Geom_ConicalSurface::*)() const) static_cast<Standard_Real (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::SemiAngle),
             R"#(Returns the semi-angle at the apex of this cone. Attention! Semi-angle can be negative.)#" )
        .def("IsUClosed",
             (Standard_Boolean (Geom_ConicalSurface::*)() const) static_cast<Standard_Boolean (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::IsUClosed),
             R"#(returns True.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_ConicalSurface::*)() const) static_cast<Standard_Boolean (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::IsVClosed),
             R"#(returns False.)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_ConicalSurface::*)() const) static_cast<Standard_Boolean (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::IsUPeriodic),
             R"#(Returns True.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_ConicalSurface::*)() const) static_cast<Standard_Boolean (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::IsVPeriodic),
             R"#(Returns False.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_ConicalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_ConicalSurface::*)( const Standard_Real  ) const>(&Geom_ConicalSurface::UIso),
             R"#(Builds the U isoparametric line of this cone. The origin of this line is on the reference plane of this cone (i.e. the plane defined by the origin, "X Direction" and "Y Direction" of the local coordinate system of this cone).)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_ConicalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_ConicalSurface::*)( const Standard_Real  ) const>(&Geom_ConicalSurface::VIso),
             R"#(Builds the V isoparametric circle of this cone. It is the circle on this cone, located in the plane of Z coordinate V*cos(Semi-Angle) in the local coordinate system of this cone. The "Axis" of this circle is the axis of revolution of this cone. Its starting point is defined by the "X Direction" of this cone. Warning If the V isoparametric circle is close to the apex of this cone, the radius of the circle becomes very small. It is possible to have a circle with radius equal to 0.0.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_ConicalSurface::D0),
             R"#(Computes the point P (U, V) on the surface. P (U, V) = Loc + (RefRadius + V * sin (Semi-Angle)) * (cos (U) * XDir + sin (U) * YDir) + V * cos (Semi-Angle) * ZDir where Loc is the origin of the placement plane (XAxis, YAxis) XDir is the direction of the XAxis and YDir the direction of the YAxis.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_ConicalSurface::D1),
             R"#(Computes the current point and the first derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_ConicalSurface::D2),
             R"#(Computes the current point, the first and the second derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_ConicalSurface::D3),
             R"#(Computes the current point, the first,the second and the third derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_ConicalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_ConicalSurface::DN),
             R"#(Computes the derivative of order Nu in the u parametric direction, and Nv in the v parametric direction at the point of parameters (U, V) of this cone. Exceptions Standard_RangeError if: - Nu + Nv is less than 1, - Nu or Nv is negative.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_ConicalSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_ConicalSurface::*)( const gp_Trsf &  ) >(&Geom_ConicalSurface::Transform),
             R"#(Applies the transformation T to this cone.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_ConicalSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::Copy),
             R"#(Creates a new object which is a copy of this cone.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_ConicalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_ConicalSurface::*)() const>(&Geom_ConicalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("TransformParameters",
             []( Geom_ConicalSurface &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
        .def("Bounds",
             []( Geom_ConicalSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(The conical surface is infinite in the V direction so V1 = Realfirst from Standard and V2 = RealLast. U1 = 0 and U2 = 2*PI.)#" )
        .def("Coefficients",
             []( Geom_ConicalSurface &self   ){ Standard_Real  A1; Standard_Real  A2; Standard_Real  A3; Standard_Real  B1; Standard_Real  B2; Standard_Real  B3; Standard_Real  C1; Standard_Real  C2; Standard_Real  C3; Standard_Real  D; self.Coefficients(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); return std::make_tuple(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); },
             R"#(Returns the coefficients of the implicit equation of the quadric in the absolute cartesian coordinate system : These coefficients are normalized. A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_ConicalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_ConicalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_CylindricalSurface ,opencascade::handle<Geom_CylindricalSurface>  , Geom_ElementarySurface >>(m.attr("Geom_CylindricalSurface"))
    // constructors
        .def(py::init< const gp_Ax3 &,const Standard_Real >()  , py::arg("A3"),  py::arg("Radius") )
        .def(py::init< const gp_Cylinder & >()  , py::arg("C") )
    // custom constructors
    // methods
        .def("SetCylinder",
             (void (Geom_CylindricalSurface::*)( const gp_Cylinder &  ) ) static_cast<void (Geom_CylindricalSurface::*)( const gp_Cylinder &  ) >(&Geom_CylindricalSurface::SetCylinder),
             R"#(Set <me> so that <me> has the same geometric properties as C.)#"  , py::arg("C"))
        .def("SetRadius",
             (void (Geom_CylindricalSurface::*)( const Standard_Real  ) ) static_cast<void (Geom_CylindricalSurface::*)( const Standard_Real  ) >(&Geom_CylindricalSurface::SetRadius),
             R"#(Changes the radius of the cylinder. Raised if R < 0.0)#"  , py::arg("R"))
        .def("Cylinder",
             (gp_Cylinder (Geom_CylindricalSurface::*)() const) static_cast<gp_Cylinder (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::Cylinder),
             R"#(returns a non transient cylinder with the same geometric properties as <me>.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_CylindricalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_CylindricalSurface::*)( const Standard_Real  ) const>(&Geom_CylindricalSurface::UReversedParameter),
             R"#(Return the parameter on the Ureversed surface for the point of parameter U on <me>. Return 2.PI - U.)#"  , py::arg("U"))
        .def("VReversedParameter",
             (Standard_Real (Geom_CylindricalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_CylindricalSurface::*)( const Standard_Real  ) const>(&Geom_CylindricalSurface::VReversedParameter),
             R"#(Return the parameter on the Vreversed surface for the point of parameter V on <me>. Return -V)#"  , py::arg("V"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_CylindricalSurface::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_CylindricalSurface::*)( const gp_Trsf &  ) const>(&Geom_CylindricalSurface::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface. me->Transformed(T)->Value(U',V') is the same point as me->Value(U,V).Transformed(T) Where U',V' are obtained by transforming U,V with th 2d transformation returned by me->ParametricTransformation(T) This methods returns a scale centered on the U axis with T.ScaleFactor)#"  , py::arg("T"))
        .def("Radius",
             (Standard_Real (Geom_CylindricalSurface::*)() const) static_cast<Standard_Real (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::Radius),
             R"#(Returns the radius of this cylinder.)#" )
        .def("IsUClosed",
             (Standard_Boolean (Geom_CylindricalSurface::*)() const) static_cast<Standard_Boolean (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::IsUClosed),
             R"#(Returns True.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_CylindricalSurface::*)() const) static_cast<Standard_Boolean (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::IsVClosed),
             R"#(Returns False.)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_CylindricalSurface::*)() const) static_cast<Standard_Boolean (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::IsUPeriodic),
             R"#(Returns True.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_CylindricalSurface::*)() const) static_cast<Standard_Boolean (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::IsVPeriodic),
             R"#(Returns False.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_CylindricalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_CylindricalSurface::*)( const Standard_Real  ) const>(&Geom_CylindricalSurface::UIso),
             R"#(The UIso curve is a Line. The location point of this line is on the placement plane (XAxis, YAxis) of the surface. This line is parallel to the axis of symmetry of the surface.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_CylindricalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_CylindricalSurface::*)( const Standard_Real  ) const>(&Geom_CylindricalSurface::VIso),
             R"#(The VIso curve is a circle. The start point of this circle (U = 0) is defined with the "XAxis" of the surface. The center of the circle is on the symmetry axis.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_CylindricalSurface::D0),
             R"#(Computes the point P (U, V) on the surface. P (U, V) = Loc + Radius * (cos (U) * XDir + sin (U) * YDir) + V * ZDir where Loc is the origin of the placement plane (XAxis, YAxis) XDir is the direction of the XAxis and YDir the direction of the YAxis.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_CylindricalSurface::D1),
             R"#(Computes the current point and the first derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_CylindricalSurface::D2),
             R"#(Computes the current point, the first and the second derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_CylindricalSurface::D3),
             R"#(Computes the current point, the first, the second and the third derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_CylindricalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_CylindricalSurface::DN),
             R"#(Computes the derivative of order Nu in the direction u and Nv in the direction v. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_CylindricalSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_CylindricalSurface::*)( const gp_Trsf &  ) >(&Geom_CylindricalSurface::Transform),
             R"#(Applies the transformation T to this cylinder.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_CylindricalSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::Copy),
             R"#(Creates a new object which is a copy of this cylinder.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_CylindricalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_CylindricalSurface::*)() const>(&Geom_CylindricalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("TransformParameters",
             []( Geom_CylindricalSurface &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>. me->Transformed(T)->Value(U',V') is the same point as me->Value(U,V).Transformed(T) Where U',V' are the new values of U,V after calling me->TranformParameters(U,V,T) This methods multiplies V by T.ScaleFactor())#"  , py::arg("T"))
        .def("Bounds",
             []( Geom_CylindricalSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(The CylindricalSurface is infinite in the V direction so V1 = Realfirst, V2 = RealLast from package Standard. U1 = 0 and U2 = 2*PI.)#" )
        .def("Coefficients",
             []( Geom_CylindricalSurface &self   ){ Standard_Real  A1; Standard_Real  A2; Standard_Real  A3; Standard_Real  B1; Standard_Real  B2; Standard_Real  B3; Standard_Real  C1; Standard_Real  C2; Standard_Real  C3; Standard_Real  D; self.Coefficients(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); return std::make_tuple(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); },
             R"#(Returns the coefficients of the implicit equation of the quadric in the absolute cartesian coordinate system : These coefficients are normalized. A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_CylindricalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_CylindricalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Ellipse ,opencascade::handle<Geom_Ellipse>  , Geom_Conic >>(m.attr("Geom_Ellipse"))
    // constructors
        .def(py::init< const gp_Elips & >()  , py::arg("E") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // custom constructors
    // methods
        .def("SetElips",
             (void (Geom_Ellipse::*)( const gp_Elips &  ) ) static_cast<void (Geom_Ellipse::*)( const gp_Elips &  ) >(&Geom_Ellipse::SetElips),
             R"#(Converts the gp_Elips ellipse E into this ellipse.)#"  , py::arg("E"))
        .def("SetMajorRadius",
             (void (Geom_Ellipse::*)( const Standard_Real  ) ) static_cast<void (Geom_Ellipse::*)( const Standard_Real  ) >(&Geom_Ellipse::SetMajorRadius),
             R"#(Assigns a value to the major radius of this ellipse. ConstructionError raised if MajorRadius < MinorRadius.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (Geom_Ellipse::*)( const Standard_Real  ) ) static_cast<void (Geom_Ellipse::*)( const Standard_Real  ) >(&Geom_Ellipse::SetMinorRadius),
             R"#(Assigns a value to the minor radius of this ellipse. ConstructionError raised if MajorRadius < MinorRadius or if MinorRadius < 0.)#"  , py::arg("MinorRadius"))
        .def("Elips",
             (gp_Elips (Geom_Ellipse::*)() const) static_cast<gp_Elips (Geom_Ellipse::*)() const>(&Geom_Ellipse::Elips),
             R"#(returns the non transient ellipse from gp with the same)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_Ellipse::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Ellipse::*)( const Standard_Real  ) const>(&Geom_Ellipse::ReversedParameter),
             R"#(Computes the parameter on the reversed ellipse for the point of parameter U on this ellipse. For an ellipse, the returned value is: 2.*Pi - U.)#"  , py::arg("U"))
        .def("Directrix1",
             (gp_Ax1 (Geom_Ellipse::*)() const) static_cast<gp_Ax1 (Geom_Ellipse::*)() const>(&Geom_Ellipse::Directrix1),
             R"#(This directrix is the line normal to the XAxis of the ellipse in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the ellipse, where e is the eccentricity of the ellipse. This line is parallel to the "YAxis". The intersection point between directrix1 and the "XAxis" is the "Location" point of the directrix1. This point is on the positive side of the "XAxis". Raised if Eccentricity = 0.0. (The ellipse degenerates into a circle))#" )
        .def("Directrix2",
             (gp_Ax1 (Geom_Ellipse::*)() const) static_cast<gp_Ax1 (Geom_Ellipse::*)() const>(&Geom_Ellipse::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "Directrix1" with respect to the "YAxis" of the ellipse.)#" )
        .def("Eccentricity",
             (Standard_Real (Geom_Ellipse::*)() const) static_cast<Standard_Real (Geom_Ellipse::*)() const>(&Geom_Ellipse::Eccentricity),
             R"#(Returns the eccentricity of the ellipse between 0.0 and 1.0 If f is the distance between the center of the ellipse and the Focus1 then the eccentricity e = f / MajorRadius. Returns 0 if MajorRadius = 0)#" )
        .def("Focal",
             (Standard_Real (Geom_Ellipse::*)() const) static_cast<Standard_Real (Geom_Ellipse::*)() const>(&Geom_Ellipse::Focal),
             R"#(Computes the focal distance. It is the distance between the the two focus of the ellipse.)#" )
        .def("Focus1",
             (gp_Pnt (Geom_Ellipse::*)() const) static_cast<gp_Pnt (Geom_Ellipse::*)() const>(&Geom_Ellipse::Focus1),
             R"#(Returns the first focus of the ellipse. This focus is on the positive side of the "XAxis" of the ellipse.)#" )
        .def("Focus2",
             (gp_Pnt (Geom_Ellipse::*)() const) static_cast<gp_Pnt (Geom_Ellipse::*)() const>(&Geom_Ellipse::Focus2),
             R"#(Returns the second focus of the ellipse. This focus is on the negative side of the "XAxis" of the ellipse.)#" )
        .def("MajorRadius",
             (Standard_Real (Geom_Ellipse::*)() const) static_cast<Standard_Real (Geom_Ellipse::*)() const>(&Geom_Ellipse::MajorRadius),
             R"#(Returns the major radius of this ellipse.)#" )
        .def("MinorRadius",
             (Standard_Real (Geom_Ellipse::*)() const) static_cast<Standard_Real (Geom_Ellipse::*)() const>(&Geom_Ellipse::MinorRadius),
             R"#(Returns the minor radius of this ellipse.)#" )
        .def("Parameter",
             (Standard_Real (Geom_Ellipse::*)() const) static_cast<Standard_Real (Geom_Ellipse::*)() const>(&Geom_Ellipse::Parameter),
             R"#(Returns p = (1 - e * e) * MajorRadius where e is the eccentricity of the ellipse. Returns 0 if MajorRadius = 0)#" )
        .def("FirstParameter",
             (Standard_Real (Geom_Ellipse::*)() const) static_cast<Standard_Real (Geom_Ellipse::*)() const>(&Geom_Ellipse::FirstParameter),
             R"#(Returns the value of the first parameter of this ellipse. This is respectively: - 0.0, which gives the start point of this ellipse, or The start point and end point of an ellipse are coincident.)#" )
        .def("LastParameter",
             (Standard_Real (Geom_Ellipse::*)() const) static_cast<Standard_Real (Geom_Ellipse::*)() const>(&Geom_Ellipse::LastParameter),
             R"#(Returns the value of the last parameter of this ellipse. This is respectively: - 2.*Pi, which gives the end point of this ellipse. The start point and end point of an ellipse are coincident.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_Ellipse::*)() const) static_cast<Standard_Boolean (Geom_Ellipse::*)() const>(&Geom_Ellipse::IsClosed),
             R"#(return True.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_Ellipse::*)() const) static_cast<Standard_Boolean (Geom_Ellipse::*)() const>(&Geom_Ellipse::IsPeriodic),
             R"#(return True.)#" )
        .def("D0",
             (void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Ellipse::D0),
             R"#(Returns in P the point of parameter U. P = C + MajorRadius * Cos (U) * XDir + MinorRadius * Sin (U) * YDir where C is the center of the ellipse , XDir the direction of the "XAxis" and "YDir" the "YAxis" of the ellipse.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_Ellipse::D1),
             R"#(None)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Ellipse::D2),
             R"#(Returns the point P of parameter U. The vectors V1 and V2 are the first and second derivatives at this point.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Ellipse::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Ellipse::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_Ellipse::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Ellipse::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_Ellipse::DN),
             R"#(For the point of parameter U of this ellipse, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom_Ellipse::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Ellipse::*)( const gp_Trsf &  ) >(&Geom_Ellipse::Transform),
             R"#(Applies the transformation T to this ellipse.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Ellipse::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Ellipse::*)() const>(&Geom_Ellipse::Copy),
             R"#(Creates a new object which is a copy of this ellipse.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Ellipse::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Ellipse::*)() const>(&Geom_Ellipse::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Ellipse::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Ellipse::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Hyperbola ,opencascade::handle<Geom_Hyperbola>  , Geom_Conic >>(m.attr("Geom_Hyperbola"))
    // constructors
        .def(py::init< const gp_Hypr & >()  , py::arg("H") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("A2"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
    // custom constructors
    // methods
        .def("SetHypr",
             (void (Geom_Hyperbola::*)( const gp_Hypr &  ) ) static_cast<void (Geom_Hyperbola::*)( const gp_Hypr &  ) >(&Geom_Hyperbola::SetHypr),
             R"#(Converts the gp_Hypr hyperbola H into this hyperbola.)#"  , py::arg("H"))
        .def("SetMajorRadius",
             (void (Geom_Hyperbola::*)( const Standard_Real  ) ) static_cast<void (Geom_Hyperbola::*)( const Standard_Real  ) >(&Geom_Hyperbola::SetMajorRadius),
             R"#(Assigns a value to the major radius of this hyperbola. Exceptions Standard_ConstructionError if: - MajorRadius is less than 0.0, or - MinorRadius is less than 0.0.Raised if MajorRadius < 0.0)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (Geom_Hyperbola::*)( const Standard_Real  ) ) static_cast<void (Geom_Hyperbola::*)( const Standard_Real  ) >(&Geom_Hyperbola::SetMinorRadius),
             R"#(Assigns a value to the minor radius of this hyperbola. Exceptions Standard_ConstructionError if: - MajorRadius is less than 0.0, or - MinorRadius is less than 0.0.Raised if MajorRadius < 0.0)#"  , py::arg("MinorRadius"))
        .def("Hypr",
             (gp_Hypr (Geom_Hyperbola::*)() const) static_cast<gp_Hypr (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Hypr),
             R"#(returns the non transient parabola from gp with the same geometric properties as <me>.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_Hyperbola::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Hyperbola::*)( const Standard_Real  ) const>(&Geom_Hyperbola::ReversedParameter),
             R"#(Computes the parameter on the reversed hyperbola, for the point of parameter U on this hyperbola. For a hyperbola, the returned value is: -U.)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (Geom_Hyperbola::*)() const) static_cast<Standard_Real (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::FirstParameter),
             R"#(Returns RealFirst from Standard.)#" )
        .def("LastParameter",
             (Standard_Real (Geom_Hyperbola::*)() const) static_cast<Standard_Real (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::LastParameter),
             R"#(returns RealLast from Standard.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_Hyperbola::*)() const) static_cast<Standard_Boolean (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::IsClosed),
             R"#(Returns False.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_Hyperbola::*)() const) static_cast<Standard_Boolean (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::IsPeriodic),
             R"#(return False for an hyperbola.)#" )
        .def("Asymptote1",
             (gp_Ax1 (Geom_Hyperbola::*)() const) static_cast<gp_Ax1 (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Asymptote1),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = (B/A)*X. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("Asymptote2",
             (gp_Ax1 (Geom_Hyperbola::*)() const) static_cast<gp_Ax1 (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Asymptote2),
             R"#(In the local coordinate system of the hyperbola the equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the equation of the first asymptote is Y = -(B/A)*X. Raises ConstructionError if MajorRadius = 0.0)#" )
        .def("ConjugateBranch1",
             (gp_Hypr (Geom_Hyperbola::*)() const) static_cast<gp_Hypr (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::ConjugateBranch1),
             R"#(This branch of hyperbola is on the positive side of the YAxis of <me>.)#" )
        .def("ConjugateBranch2",
             (gp_Hypr (Geom_Hyperbola::*)() const) static_cast<gp_Hypr (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::ConjugateBranch2),
             R"#(This branch of hyperbola is on the negative side of the YAxis of <me>. Note: The diagram given under the class purpose indicates where these two branches of hyperbola are positioned in relation to this branch of hyperbola.)#" )
        .def("Directrix1",
             (gp_Ax1 (Geom_Hyperbola::*)() const) static_cast<gp_Ax1 (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Directrix1),
             R"#(This directrix is the line normal to the XAxis of the hyperbola in the local plane (Z = 0) at a distance d = MajorRadius / e from the center of the hyperbola, where e is the eccentricity of the hyperbola. This line is parallel to the YAxis. The intersection point between directrix1 and the XAxis is the location point of the directrix1. This point is on the positive side of the XAxis.)#" )
        .def("Directrix2",
             (gp_Ax1 (Geom_Hyperbola::*)() const) static_cast<gp_Ax1 (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Directrix2),
             R"#(This line is obtained by the symmetrical transformation of "directrix1" with respect to the YAxis of the hyperbola.)#" )
        .def("Eccentricity",
             (Standard_Real (Geom_Hyperbola::*)() const) static_cast<Standard_Real (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Eccentricity),
             R"#(Returns the excentricity of the hyperbola (e > 1). If f is the distance between the location of the hyperbola and the Focus1 then the eccentricity e = f / MajorRadius. raised if MajorRadius = 0.0)#" )
        .def("Focal",
             (Standard_Real (Geom_Hyperbola::*)() const) static_cast<Standard_Real (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Focal),
             R"#(Computes the focal distance. It is the distance between the two focus of the hyperbola.)#" )
        .def("Focus1",
             (gp_Pnt (Geom_Hyperbola::*)() const) static_cast<gp_Pnt (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Focus1),
             R"#(Returns the first focus of the hyperbola. This focus is on the positive side of the XAxis of the hyperbola.)#" )
        .def("Focus2",
             (gp_Pnt (Geom_Hyperbola::*)() const) static_cast<gp_Pnt (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Focus2),
             R"#(Returns the second focus of the hyperbola. This focus is on the negative side of the XAxis of the hyperbola.)#" )
        .def("MajorRadius",
             (Standard_Real (Geom_Hyperbola::*)() const) static_cast<Standard_Real (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::MajorRadius),
             R"#(Returns the major or minor radius of this hyperbola. The major radius is also the distance between the center of the hyperbola and the apex of the main branch (located on the "X Axis" of the hyperbola).)#" )
        .def("MinorRadius",
             (Standard_Real (Geom_Hyperbola::*)() const) static_cast<Standard_Real (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::MinorRadius),
             R"#(Returns the major or minor radius of this hyperbola. The minor radius is also the distance between the center of the hyperbola and the apex of a conjugate branch (located on the "Y Axis" of the hyperbola).)#" )
        .def("OtherBranch",
             (gp_Hypr (Geom_Hyperbola::*)() const) static_cast<gp_Hypr (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::OtherBranch),
             R"#(Computes the "other" branch of this hyperbola. This is the symmetrical branch with respect to the center of this hyperbola. Note: The diagram given under the class purpose indicates where the "other" branch is positioned in relation to this branch of the hyperbola.)#" )
        .def("Parameter",
             (Standard_Real (Geom_Hyperbola::*)() const) static_cast<Standard_Real (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Parameter),
             R"#(Returns p = (e * e - 1) * MajorRadius where e is the eccentricity of the hyperbola. raised if MajorRadius = 0.0)#" )
        .def("D0",
             (void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Hyperbola::D0),
             R"#(Returns in P the point of parameter U. P = C + MajorRadius * Cosh (U) * XDir + MinorRadius * Sinh (U) * YDir where C is the center of the hyperbola , XDir the XDirection and YDir the YDirection of the hyperbola's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_Hyperbola::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Hyperbola::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Hyperbola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Hyperbola::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_Hyperbola::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Hyperbola::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_Hyperbola::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom_Hyperbola::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Hyperbola::*)( const gp_Trsf &  ) >(&Geom_Hyperbola::Transform),
             R"#(Applies the transformation T to this hyperbola.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Hyperbola::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::Copy),
             R"#(Creates a new object which is a copy of this hyperbola.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Hyperbola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Hyperbola::*)() const>(&Geom_Hyperbola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Hyperbola::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Hyperbola::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Parabola ,opencascade::handle<Geom_Parabola>  , Geom_Conic >>(m.attr("Geom_Parabola"))
    // constructors
        .def(py::init< const gp_Parab & >()  , py::arg("Prb") )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("A2"),  py::arg("Focal") )
        .def(py::init< const gp_Ax1 &,const gp_Pnt & >()  , py::arg("D"),  py::arg("F") )
    // custom constructors
    // methods
        .def("SetFocal",
             (void (Geom_Parabola::*)( const Standard_Real  ) ) static_cast<void (Geom_Parabola::*)( const Standard_Real  ) >(&Geom_Parabola::SetFocal),
             R"#(Assigns the value Focal to the focal distance of this parabola. Exceptions Standard_ConstructionError if Focal is negative.)#"  , py::arg("Focal"))
        .def("SetParab",
             (void (Geom_Parabola::*)( const gp_Parab &  ) ) static_cast<void (Geom_Parabola::*)( const gp_Parab &  ) >(&Geom_Parabola::SetParab),
             R"#(Converts the gp_Parab parabola Prb into this parabola.)#"  , py::arg("Prb"))
        .def("Parab",
             (gp_Parab (Geom_Parabola::*)() const) static_cast<gp_Parab (Geom_Parabola::*)() const>(&Geom_Parabola::Parab),
             R"#(Returns the non transient parabola from gp with the same geometric properties as <me>.)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_Parabola::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Parabola::*)( const Standard_Real  ) const>(&Geom_Parabola::ReversedParameter),
             R"#(Computes the parameter on the reversed parabola, for the point of parameter U on this parabola. For a parabola, the returned value is: -U.)#"  , py::arg("U"))
        .def("FirstParameter",
             (Standard_Real (Geom_Parabola::*)() const) static_cast<Standard_Real (Geom_Parabola::*)() const>(&Geom_Parabola::FirstParameter),
             R"#(Returns the value of the first or last parameter of this parabola. This is, respectively: - Standard_Real::RealFirst(), or - Standard_Real::RealLast().)#" )
        .def("LastParameter",
             (Standard_Real (Geom_Parabola::*)() const) static_cast<Standard_Real (Geom_Parabola::*)() const>(&Geom_Parabola::LastParameter),
             R"#(Returns the value of the first or last parameter of this parabola. This is, respectively: - Standard_Real::RealFirst(), or - Standard_Real::RealLast().)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_Parabola::*)() const) static_cast<Standard_Boolean (Geom_Parabola::*)() const>(&Geom_Parabola::IsClosed),
             R"#(Returns False)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_Parabola::*)() const) static_cast<Standard_Boolean (Geom_Parabola::*)() const>(&Geom_Parabola::IsPeriodic),
             R"#(Returns False)#" )
        .def("Directrix",
             (gp_Ax1 (Geom_Parabola::*)() const) static_cast<gp_Ax1 (Geom_Parabola::*)() const>(&Geom_Parabola::Directrix),
             R"#(Computes the directrix of this parabola. This is a line normal to the axis of symmetry, in the plane of this parabola, located on the negative side of its axis of symmetry, at a distance from the apex equal to the focal length. The directrix is returned as an axis (gp_Ax1 object), where the origin is located on the "X Axis" of this parabola.)#" )
        .def("Eccentricity",
             (Standard_Real (Geom_Parabola::*)() const) static_cast<Standard_Real (Geom_Parabola::*)() const>(&Geom_Parabola::Eccentricity),
             R"#(Returns 1. (which is the eccentricity of any parabola).)#" )
        .def("Focus",
             (gp_Pnt (Geom_Parabola::*)() const) static_cast<gp_Pnt (Geom_Parabola::*)() const>(&Geom_Parabola::Focus),
             R"#(Computes the focus of this parabola. The focus is on the positive side of the "X Axis" of the local coordinate system of the parabola.)#" )
        .def("Focal",
             (Standard_Real (Geom_Parabola::*)() const) static_cast<Standard_Real (Geom_Parabola::*)() const>(&Geom_Parabola::Focal),
             R"#(Computes the focal distance of this parabola The focal distance is the distance between the apex and the focus of the parabola.)#" )
        .def("Parameter",
             (Standard_Real (Geom_Parabola::*)() const) static_cast<Standard_Real (Geom_Parabola::*)() const>(&Geom_Parabola::Parameter),
             R"#(Computes the parameter of this parabola which is the distance between its focus and its directrix. This distance is twice the focal length. If P is the parameter of the parabola, the equation of the parabola in its local coordinate system is: Y**2 = 2.*P*X.)#" )
        .def("D0",
             (void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Parabola::D0),
             R"#(Returns in P the point of parameter U. If U = 0 the returned point is the origin of the XAxis and the YAxis of the parabola and it is the vertex of the parabola. P = S + F * (U * U * XDir + * U * YDir) where S is the vertex of the parabola, XDir the XDirection and YDir the YDirection of the parabola's local coordinate system.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_Parabola::D1),
             R"#(Returns the point P of parameter U and the first derivative V1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Parabola::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Parabola::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Parabola::D3),
             R"#(Returns the point P of parameter U, the first second and third derivatives V1 V2 and V3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_Parabola::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Parabola::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_Parabola::DN),
             R"#(For the point of parameter U of this parabola, computes the vector corresponding to the Nth derivative. Exceptions Standard_RangeError if N is less than 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom_Parabola::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Parabola::*)( const gp_Trsf &  ) >(&Geom_Parabola::Transform),
             R"#(Applies the transformation T to this parabola.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom_Parabola::*)( const Standard_Real ,  const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_Parabola::*)( const Standard_Real ,  const gp_Trsf &  ) const>(&Geom_Parabola::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom_Parabola::*)( const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_Parabola::*)( const gp_Trsf &  ) const>(&Geom_Parabola::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Parabola::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Parabola::*)() const>(&Geom_Parabola::Copy),
             R"#(Creates a new object which is a copy of this parabola.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Parabola::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Parabola::*)() const>(&Geom_Parabola::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Parabola::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Parabola::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_Plane ,opencascade::handle<Geom_Plane>  , Geom_ElementarySurface >>(m.attr("Geom_Plane"))
    // constructors
        .def(py::init< const gp_Ax3 & >()  , py::arg("A3") )
        .def(py::init< const gp_Pln & >()  , py::arg("Pl") )
        .def(py::init< const gp_Pnt &,const gp_Dir & >()  , py::arg("P"),  py::arg("V") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("A"),  py::arg("B"),  py::arg("C"),  py::arg("D") )
    // custom constructors
    // methods
        .def("SetPln",
             (void (Geom_Plane::*)( const gp_Pln &  ) ) static_cast<void (Geom_Plane::*)( const gp_Pln &  ) >(&Geom_Plane::SetPln),
             R"#(Set <me> so that <me> has the same geometric properties as Pl.)#"  , py::arg("Pl"))
        .def("Pln",
             (gp_Pln (Geom_Plane::*)() const) static_cast<gp_Pln (Geom_Plane::*)() const>(&Geom_Plane::Pln),
             R"#(Converts this plane into a gp_Pln plane.)#" )
        .def("UReverse",
             (void (Geom_Plane::*)() ) static_cast<void (Geom_Plane::*)() >(&Geom_Plane::UReverse),
             R"#(Changes the orientation of this plane in the u (or v) parametric direction. The bounds of the plane are not changed but the given parametric direction is reversed. Hence the orientation of the surface is reversed.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_Plane::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Plane::*)( const Standard_Real  ) const>(&Geom_Plane::UReversedParameter),
             R"#(Computes the u parameter on the modified plane, produced when reversing the u parametric of this plane, for any point of u parameter U on this plane. In the case of a plane, these methods return - -U.)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_Plane::*)() ) static_cast<void (Geom_Plane::*)() >(&Geom_Plane::VReverse),
             R"#(Changes the orientation of this plane in the u (or v) parametric direction. The bounds of the plane are not changed but the given parametric direction is reversed. Hence the orientation of the surface is reversed.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_Plane::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_Plane::*)( const Standard_Real  ) const>(&Geom_Plane::VReversedParameter),
             R"#(Computes the v parameter on the modified plane, produced when reversing the v parametric of this plane, for any point of v parameter V on this plane. In the case of a plane, these methods return -V.)#"  , py::arg("V"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_Plane::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_Plane::*)( const gp_Trsf &  ) const>(&Geom_Plane::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface. me->Transformed(T)->Value(U',V') is the same point as me->Value(U,V).Transformed(T) Where U',V' are obtained by transforming U,V with th 2d transformation returned by me->ParametricTransformation(T) This methods returns a scale centered on the origin with T.ScaleFactor)#"  , py::arg("T"))
        .def("IsUClosed",
             (Standard_Boolean (Geom_Plane::*)() const) static_cast<Standard_Boolean (Geom_Plane::*)() const>(&Geom_Plane::IsUClosed),
             R"#(return False)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_Plane::*)() const) static_cast<Standard_Boolean (Geom_Plane::*)() const>(&Geom_Plane::IsVClosed),
             R"#(return False)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_Plane::*)() const) static_cast<Standard_Boolean (Geom_Plane::*)() const>(&Geom_Plane::IsUPeriodic),
             R"#(return False.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_Plane::*)() const) static_cast<Standard_Boolean (Geom_Plane::*)() const>(&Geom_Plane::IsVPeriodic),
             R"#(return False.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_Plane::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_Plane::*)( const Standard_Real  ) const>(&Geom_Plane::UIso),
             R"#(Computes the U isoparametric curve. This is a Line parallel to the YAxis of the plane.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_Plane::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_Plane::*)( const Standard_Real  ) const>(&Geom_Plane::VIso),
             R"#(Computes the V isoparametric curve. This is a Line parallel to the XAxis of the plane.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_Plane::D0),
             R"#(Computes the point P (U, V) on <me>. P = O + U * XDir + V * YDir. where O is the "Location" point of the plane, XDir the "XDirection" and YDir the "YDirection" of the plane's local coordinate system.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Plane::D1),
             R"#(Computes the current point and the first derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Plane::D2),
             R"#(Computes the current point, the first and the second derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_Plane::D3),
             R"#(Computes the current point, the first,the second and the third derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_Plane::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_Plane::DN),
             R"#(Computes the derivative of order Nu in the direction u and Nv in the direction v. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_Plane::*)( const gp_Trsf &  ) ) static_cast<void (Geom_Plane::*)( const gp_Trsf &  ) >(&Geom_Plane::Transform),
             R"#(Applies the transformation T to this plane.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_Plane::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_Plane::*)() const>(&Geom_Plane::Copy),
             R"#(Creates a new object which is a copy of this plane.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_Plane::*)() const>(&Geom_Plane::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("TransformParameters",
             []( Geom_Plane &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>. me->Transformed(T)->Value(U',V') is the same point as me->Value(U,V).Transformed(T) Where U',V' are the new values of U,V after calling me->TranformParameters(U,V,T) This methods multiplies U and V by T.ScaleFactor())#"  , py::arg("T"))
        .def("Bounds",
             []( Geom_Plane &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this plane. Because a plane is an infinite surface, the following is always true: - U1 = V1 = Standard_Real::RealFirst() - U2 = V2 = Standard_Real::RealLast().)#" )
        .def("Coefficients",
             []( Geom_Plane &self   ){ Standard_Real  A; Standard_Real  B; Standard_Real  C; Standard_Real  D; self.Coefficients(A,B,C,D); return std::make_tuple(A,B,C,D); },
             R"#(Computes the normalized coefficients of the plane's cartesian equation : Ax + By + Cz + D = 0.0)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_Plane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_Plane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_RectangularTrimmedSurface ,opencascade::handle<Geom_RectangularTrimmedSurface>  , Geom_BoundedSurface >>(m.attr("Geom_RectangularTrimmedSurface"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"),  py::arg("USense")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("VSense")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("Param1"),  py::arg("Param2"),  py::arg("UTrim"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("SetTrim",
             (void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Geom_RectangularTrimmedSurface::SetTrim),
             R"#(Modifies this patch by changing the trim values applied to the original surface The u parametric direction of this patch is oriented from U1 to U2. The v parametric direction of this patch is oriented from V1 to V2. USense and VSense are used for the construction only if the surface is periodic in the corresponding parametric direction, and define the available part of the surface; by default in this case, this patch has the same orientation as the basis surface. Raised if The BasisSurface is not periodic in the UDirection and U1 or U2 are out of the bounds of the BasisSurface. The BasisSurface is not periodic in the VDirection and V1 or V2 are out of the bounds of the BasisSurface. U1 = U2 or V1 = V2)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("V1"),  py::arg("V2"),  py::arg("USense")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("VSense")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetTrim",
             (void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Geom_RectangularTrimmedSurface::SetTrim),
             R"#(Modifies this patch by changing the trim values applied to the original surface The basis surface is trimmed only in one parametric direction: if UTrim is true, the surface is trimmed in the u parametric direction; if it is false, it is trimmed in the v parametric direction. In the "trimmed" direction, this patch is oriented from Param1 to Param2. If the basis surface is periodic in the "trimmed" direction, Sense defines its available part. By default in this case, this patch has the same orientation as the basis surface in this parametric direction. If the basis surface is closed or periodic in the other parametric direction (i.e. not the "trimmed" direction), this patch has the same characteristics as the basis surface in that parametric direction. Raised if The BasisSurface is not periodic in the considered direction and Param1 or Param2 are out of the bounds of the BasisSurface. Param1 = Param2)#"  , py::arg("Param1"),  py::arg("Param2"),  py::arg("UTrim"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True))
        .def("BasisSurface",
             (opencascade::handle<Geom_Surface> (Geom_RectangularTrimmedSurface::*)() const) static_cast<opencascade::handle<Geom_Surface> (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::BasisSurface),
             R"#(Returns the Basis surface of <me>.)#" )
        .def("UReverse",
             (void (Geom_RectangularTrimmedSurface::*)() ) static_cast<void (Geom_RectangularTrimmedSurface::*)() >(&Geom_RectangularTrimmedSurface::UReverse),
             R"#(Changes the orientation of this patch in the u parametric direction. The bounds of the surface are not changed, but the given parametric direction is reversed. Hence the orientation of the surface is reversed.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const>(&Geom_RectangularTrimmedSurface::UReversedParameter),
             R"#(Computes the u parameter on the modified surface, produced by when reversing its u parametric direction, for any point of u parameter U on this patch.)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_RectangularTrimmedSurface::*)() ) static_cast<void (Geom_RectangularTrimmedSurface::*)() >(&Geom_RectangularTrimmedSurface::VReverse),
             R"#(Changes the orientation of this patch in the v parametric direction. The bounds of the surface are not changed, but the given parametric direction is reversed. Hence the orientation of the surface is reversed.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const>(&Geom_RectangularTrimmedSurface::VReversedParameter),
             R"#(Computes the v parameter on the modified surface, produced by when reversing its v parametric direction, for any point of v parameter V on this patch.)#"  , py::arg("V"))
        .def("Continuity",
             (GeomAbs_Shape (Geom_RectangularTrimmedSurface::*)() const) static_cast<GeomAbs_Shape (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::Continuity),
             R"#(Returns the continuity of the surface : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Surface, C2 : continuity of the second derivative all along the Surface, C3 : continuity of the third derivative all along the Surface, CN : the order of continuity is infinite.)#" )
        .def("IsUClosed",
             (Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::IsUClosed),
             R"#(Returns true if this patch is closed in the given parametric direction.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::IsVClosed),
             R"#(Returns true if this patch is closed in the given parametric direction.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_RectangularTrimmedSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_RectangularTrimmedSurface::*)( const Standard_Integer  ) const>(&Geom_RectangularTrimmedSurface::IsCNu),
             R"#(Returns true if the order of derivation in the U parametric direction is N. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_RectangularTrimmedSurface::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_RectangularTrimmedSurface::*)( const Standard_Integer  ) const>(&Geom_RectangularTrimmedSurface::IsCNv),
             R"#(Returns true if the order of derivation in the V parametric direction is N. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::IsUPeriodic),
             R"#(Returns true if this patch is periodic and not trimmed in the given parametric direction.)#" )
        .def("UPeriod",
             (Standard_Real (Geom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Real (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::UPeriod),
             R"#(Returns the period of this patch in the u parametric direction. raises if the surface is not uperiodic.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Boolean (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::IsVPeriodic),
             R"#(Returns true if this patch is periodic and not trimmed in the given parametric direction.)#" )
        .def("VPeriod",
             (Standard_Real (Geom_RectangularTrimmedSurface::*)() const) static_cast<Standard_Real (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::VPeriod),
             R"#(Returns the period of this patch in the v parametric direction. raises if the surface is not vperiodic. value and derivatives)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const>(&Geom_RectangularTrimmedSurface::UIso),
             R"#(computes the U isoparametric curve.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_RectangularTrimmedSurface::*)( const Standard_Real  ) const>(&Geom_RectangularTrimmedSurface::VIso),
             R"#(Computes the V isoparametric curve.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_RectangularTrimmedSurface::D0),
             R"#(Can be raised if the basis surface is an OffsetSurface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_RectangularTrimmedSurface::D1),
             R"#(The returned derivatives have the same orientation as the derivatives of the basis surface even if the trimmed surface has not the same parametric orientation. Warning! UndefinedDerivative raised if the continuity of the surface is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_RectangularTrimmedSurface::D2),
             R"#(The returned derivatives have the same orientation as the derivatives of the basis surface even if the trimmed surface has not the same parametric orientation. Warning! UndefinedDerivative raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_RectangularTrimmedSurface::D3),
             R"#(The returned derivatives have the same orientation as the derivatives of the basis surface even if the trimmed surface has not the same parametric orientation. Warning UndefinedDerivative raised if the continuity of the surface is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_RectangularTrimmedSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_RectangularTrimmedSurface::DN),
             R"#(The returned derivative has the same orientation as the derivative of the basis surface even if the trimmed surface has not the same parametric orientation. Warning! UndefinedDerivative raised if the continuity of the surface is not CNu in the U parametric direction and CNv in the V parametric direction. RangeError Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_RectangularTrimmedSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_RectangularTrimmedSurface::*)( const gp_Trsf &  ) >(&Geom_RectangularTrimmedSurface::Transform),
             R"#(Applies the transformation T to this patch. Warning As a consequence, the basis surface included in the data structure of this patch is also modified.)#"  , py::arg("T"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_RectangularTrimmedSurface::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_RectangularTrimmedSurface::*)( const gp_Trsf &  ) const>(&Geom_RectangularTrimmedSurface::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_RectangularTrimmedSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::Copy),
             R"#(Creates a new object which is a copy of this patch.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_RectangularTrimmedSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_RectangularTrimmedSurface::*)() const>(&Geom_RectangularTrimmedSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( Geom_RectangularTrimmedSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this patch.)#" )
        .def("TransformParameters",
             []( Geom_RectangularTrimmedSurface &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_RectangularTrimmedSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_RectangularTrimmedSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_SphericalSurface ,opencascade::handle<Geom_SphericalSurface>  , Geom_ElementarySurface >>(m.attr("Geom_SphericalSurface"))
    // constructors
        .def(py::init< const gp_Ax3 &,const Standard_Real >()  , py::arg("A3"),  py::arg("Radius") )
        .def(py::init< const gp_Sphere & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("SetRadius",
             (void (Geom_SphericalSurface::*)( const Standard_Real  ) ) static_cast<void (Geom_SphericalSurface::*)( const Standard_Real  ) >(&Geom_SphericalSurface::SetRadius),
             R"#(Assigns the value R to the radius of this sphere. Exceptions Standard_ConstructionError if R is less than 0.0.)#"  , py::arg("R"))
        .def("SetSphere",
             (void (Geom_SphericalSurface::*)( const gp_Sphere &  ) ) static_cast<void (Geom_SphericalSurface::*)( const gp_Sphere &  ) >(&Geom_SphericalSurface::SetSphere),
             R"#(Converts the gp_Sphere S into this sphere.)#"  , py::arg("S"))
        .def("Sphere",
             (gp_Sphere (Geom_SphericalSurface::*)() const) static_cast<gp_Sphere (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::Sphere),
             R"#(Returns a non persistent sphere with the same geometric properties as <me>.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_SphericalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_SphericalSurface::*)( const Standard_Real  ) const>(&Geom_SphericalSurface::UReversedParameter),
             R"#(Computes the u parameter on the modified surface, when reversing its u parametric direction, for any point of u parameter U on this sphere. In the case of a sphere, these functions returns 2.PI - U.)#"  , py::arg("U"))
        .def("VReversedParameter",
             (Standard_Real (Geom_SphericalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_SphericalSurface::*)( const Standard_Real  ) const>(&Geom_SphericalSurface::VReversedParameter),
             R"#(Computes the v parameter on the modified surface, when reversing its v parametric direction, for any point of v parameter V on this sphere. In the case of a sphere, these functions returns -U.)#"  , py::arg("V"))
        .def("Area",
             (Standard_Real (Geom_SphericalSurface::*)() const) static_cast<Standard_Real (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::Area),
             R"#(Computes the aera of the spherical surface.)#" )
        .def("Radius",
             (Standard_Real (Geom_SphericalSurface::*)() const) static_cast<Standard_Real (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::Radius),
             R"#(Computes the coefficients of the implicit equation of this quadric in the absolute Cartesian coordinate system: A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0 An implicit normalization is applied (i.e. A1 = A2 = 1. in the local coordinate system of this sphere).)#" )
        .def("Volume",
             (Standard_Real (Geom_SphericalSurface::*)() const) static_cast<Standard_Real (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::Volume),
             R"#(Computes the volume of the spherical surface.)#" )
        .def("IsUClosed",
             (Standard_Boolean (Geom_SphericalSurface::*)() const) static_cast<Standard_Boolean (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::IsUClosed),
             R"#(Returns True.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_SphericalSurface::*)() const) static_cast<Standard_Boolean (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::IsVClosed),
             R"#(Returns False.)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_SphericalSurface::*)() const) static_cast<Standard_Boolean (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::IsUPeriodic),
             R"#(Returns True.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_SphericalSurface::*)() const) static_cast<Standard_Boolean (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::IsVPeriodic),
             R"#(Returns False.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_SphericalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_SphericalSurface::*)( const Standard_Real  ) const>(&Geom_SphericalSurface::UIso),
             R"#(Computes the U isoparametric curve. The U isoparametric curves of the surface are defined by the section of the spherical surface with plane obtained by rotation of the plane (Location, XAxis, ZAxis) around ZAxis. This plane defines the origin of parametrization u. For a SphericalSurface the UIso curve is a Circle. Warnings : The radius of this circle can be zero.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_SphericalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_SphericalSurface::*)( const Standard_Real  ) const>(&Geom_SphericalSurface::VIso),
             R"#(Computes the V isoparametric curve. The V isoparametric curves of the surface are defined by the section of the spherical surface with plane parallel to the plane (Location, XAxis, YAxis). This plane defines the origin of parametrization V. Be careful if V is close to PI/2 or 3*PI/2 the radius of the circle becomes tiny. It is not forbidden in this toolkit to create circle with radius = 0.0 For a SphericalSurface the VIso curve is a Circle. Warnings : The radius of this circle can be zero.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_SphericalSurface::D0),
             R"#(Computes the point P (U, V) on the surface. P (U, V) = Loc + Radius * Sin (V) * Zdir + Radius * Cos (V) * (cos (U) * XDir + sin (U) * YDir) where Loc is the origin of the placement plane (XAxis, YAxis) XDir is the direction of the XAxis and YDir the direction of the YAxis and ZDir the direction of the ZAxis.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SphericalSurface::D1),
             R"#(Computes the current point and the first derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SphericalSurface::D2),
             R"#(Computes the current point, the first and the second derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SphericalSurface::D3),
             R"#(Computes the current point, the first,the second and the third derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_SphericalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_SphericalSurface::DN),
             R"#(Computes the derivative of order Nu in the direction u and Nv in the direction v. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_SphericalSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_SphericalSurface::*)( const gp_Trsf &  ) >(&Geom_SphericalSurface::Transform),
             R"#(Applies the transformation T to this sphere.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_SphericalSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::Copy),
             R"#(Creates a new object which is a copy of this sphere.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_SphericalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_SphericalSurface::*)() const>(&Geom_SphericalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( Geom_SphericalSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this sphere. For a sphere: U1 = 0, U2 = 2*PI, V1 = -PI/2, V2 = PI/2.)#" )
        .def("Coefficients",
             []( Geom_SphericalSurface &self   ){ Standard_Real  A1; Standard_Real  A2; Standard_Real  A3; Standard_Real  B1; Standard_Real  B2; Standard_Real  B3; Standard_Real  C1; Standard_Real  C2; Standard_Real  C3; Standard_Real  D; self.Coefficients(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); return std::make_tuple(A1,A2,A3,B1,B2,B3,C1,C2,C3,D); },
             R"#(Returns the coefficients of the implicit equation of the quadric in the absolute cartesian coordinates system : These coefficients are normalized. A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_SphericalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_SphericalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_SurfaceOfLinearExtrusion ,opencascade::handle<Geom_SurfaceOfLinearExtrusion>  , Geom_SweptSurface >>(m.attr("Geom_SurfaceOfLinearExtrusion"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Dir & >()  , py::arg("C"),  py::arg("V") )
    // custom constructors
    // methods
        .def("SetDirection",
             (void (Geom_SurfaceOfLinearExtrusion::*)( const gp_Dir &  ) ) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)( const gp_Dir &  ) >(&Geom_SurfaceOfLinearExtrusion::SetDirection),
             R"#(Assigns V as the "direction of extrusion" for this surface of linear extrusion.)#"  , py::arg("V"))
        .def("SetBasisCurve",
             (void (Geom_SurfaceOfLinearExtrusion::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)( const opencascade::handle<Geom_Curve> &  ) >(&Geom_SurfaceOfLinearExtrusion::SetBasisCurve),
             R"#(Modifies this surface of linear extrusion by redefining its "basis curve" (the "extruded curve").)#"  , py::arg("C"))
        .def("UReverse",
             (void (Geom_SurfaceOfLinearExtrusion::*)() ) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)() >(&Geom_SurfaceOfLinearExtrusion::UReverse),
             R"#(Changes the orientation of this surface of linear extrusion in the u parametric direction. The bounds of the surface are not changed, but the given parametric direction is reversed. Hence the orientation of the surface is reversed. In the case of a surface of linear extrusion: - UReverse reverses the basis curve, and - VReverse reverses the direction of linear extrusion.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const>(&Geom_SurfaceOfLinearExtrusion::UReversedParameter),
             R"#(Computes the u parameter on the modified surface, produced by reversing its u parametric direction, for any point of u parameter U on this surface of linear extrusion. In the case of an extruded surface: - UReverseParameter returns the reversed parameter given by the function ReversedParameter called with U on the basis curve,)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_SurfaceOfLinearExtrusion::*)() ) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)() >(&Geom_SurfaceOfLinearExtrusion::VReverse),
             R"#(Changes the orientation of this surface of linear extrusion in the v parametric direction. The bounds of the surface are not changed, but the given parametric direction is reversed. Hence the orientation of the surface is reversed. In the case of a surface of linear extrusion: - UReverse reverses the basis curve, and - VReverse reverses the direction of linear extrusion.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const>(&Geom_SurfaceOfLinearExtrusion::VReversedParameter),
             R"#(Computes the v parameter on the modified surface, produced by reversing its u v parametric direction, for any point of v parameter V on this surface of linear extrusion. In the case of an extruded surface VReverse returns -V.)#"  , py::arg("V"))
        .def("IsUClosed",
             (Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const>(&Geom_SurfaceOfLinearExtrusion::IsUClosed),
             R"#(IsUClosed returns true if the "basis curve" of this surface of linear extrusion is closed.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const>(&Geom_SurfaceOfLinearExtrusion::IsVClosed),
             R"#(IsVClosed always returns false.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Integer  ) const>(&Geom_SurfaceOfLinearExtrusion::IsCNu),
             R"#(IsCNu returns true if the degree of continuity for the "basis curve" of this surface of linear extrusion is at least N. Raises RangeError if N < 0.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Integer  ) const>(&Geom_SurfaceOfLinearExtrusion::IsCNv),
             R"#(IsCNv always returns true.)#"  , py::arg("N"))
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const>(&Geom_SurfaceOfLinearExtrusion::IsUPeriodic),
             R"#(IsUPeriodic returns true if the "basis curve" of this surface of linear extrusion is periodic.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfLinearExtrusion::*)() const>(&Geom_SurfaceOfLinearExtrusion::IsVPeriodic),
             R"#(IsVPeriodic always returns false.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const>(&Geom_SurfaceOfLinearExtrusion::UIso),
             R"#(Computes the U isoparametric curve of this surface of linear extrusion. This is the line parallel to the direction of extrusion, passing through the point of parameter U of the basis curve.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const>(&Geom_SurfaceOfLinearExtrusion::VIso),
             R"#(Computes the V isoparametric curve of this surface of linear extrusion. This curve is obtained by translating the extruded curve in the direction of extrusion, with the magnitude V.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_SurfaceOfLinearExtrusion::D0),
             R"#(Computes the point P (U, V) on the surface. The parameter U is the parameter on the extruded curve. The parametrization V is a linear parametrization, and the direction of parametrization is the direction of extrusion. If the point is on the extruded curve, V = 0.0)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SurfaceOfLinearExtrusion::D1),
             R"#(Computes the current point and the first derivatives in the directions U and V. Raises UndefinedDerivative if the continuity of the surface is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SurfaceOfLinearExtrusion::D2),
             R"#(--- Purpose ; Computes the current point, the first and the second derivatives in the directions U and V. Raises UndefinedDerivative if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SurfaceOfLinearExtrusion::D3),
             R"#(Computes the current point, the first,the second and the third derivatives in the directions U and V. Raises UndefinedDerivative if the continuity of the surface is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_SurfaceOfLinearExtrusion::DN),
             R"#(Computes the derivative of order Nu in the direction u and Nv in the direction v. Raises UndefinedDerivative if the continuity of the surface is not CNu in the u direction and CNv in the v direction. Raises RangeError if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_SurfaceOfLinearExtrusion::*)( const gp_Trsf &  ) ) static_cast<void (Geom_SurfaceOfLinearExtrusion::*)( const gp_Trsf &  ) >(&Geom_SurfaceOfLinearExtrusion::Transform),
             R"#(Applies the transformation T to this surface of linear extrusion.)#"  , py::arg("T"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_SurfaceOfLinearExtrusion::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_SurfaceOfLinearExtrusion::*)( const gp_Trsf &  ) const>(&Geom_SurfaceOfLinearExtrusion::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_SurfaceOfLinearExtrusion::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_SurfaceOfLinearExtrusion::*)() const>(&Geom_SurfaceOfLinearExtrusion::Copy),
             R"#(Creates a new object which is a copy of this surface of linear extrusion.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_SurfaceOfLinearExtrusion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_SurfaceOfLinearExtrusion::*)() const>(&Geom_SurfaceOfLinearExtrusion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( Geom_SurfaceOfLinearExtrusion &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this surface of linear extrusion. A surface of linear extrusion is infinite in the v parametric direction, so: - V1 = Standard_Real::RealFirst() - V2 = Standard_Real::RealLast().)#" )
        .def("TransformParameters",
             []( Geom_SurfaceOfLinearExtrusion &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_SurfaceOfLinearExtrusion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_SurfaceOfLinearExtrusion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_SurfaceOfRevolution ,opencascade::handle<Geom_SurfaceOfRevolution>  , Geom_SweptSurface >>(m.attr("Geom_SurfaceOfRevolution"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Ax1 & >()  , py::arg("C"),  py::arg("A1") )
    // custom constructors
    // methods
        .def("SetAxis",
             (void (Geom_SurfaceOfRevolution::*)( const gp_Ax1 &  ) ) static_cast<void (Geom_SurfaceOfRevolution::*)( const gp_Ax1 &  ) >(&Geom_SurfaceOfRevolution::SetAxis),
             R"#(Changes the axis of revolution. Warnings : It is not checked that the axis is in the plane of the revolved curve.)#"  , py::arg("A1"))
        .def("SetDirection",
             (void (Geom_SurfaceOfRevolution::*)( const gp_Dir &  ) ) static_cast<void (Geom_SurfaceOfRevolution::*)( const gp_Dir &  ) >(&Geom_SurfaceOfRevolution::SetDirection),
             R"#(Changes the direction of the revolution axis. Warnings : It is not checked that the axis is in the plane of the revolved curve.)#"  , py::arg("V"))
        .def("SetBasisCurve",
             (void (Geom_SurfaceOfRevolution::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (Geom_SurfaceOfRevolution::*)( const opencascade::handle<Geom_Curve> &  ) >(&Geom_SurfaceOfRevolution::SetBasisCurve),
             R"#(Changes the revolved curve of the surface. Warnings : It is not checked that the curve C is planar and that the surface axis is in the plane of the curve. It is not checked that the revolved curve C doesn't self-intersects.)#"  , py::arg("C"))
        .def("SetLocation",
             (void (Geom_SurfaceOfRevolution::*)( const gp_Pnt &  ) ) static_cast<void (Geom_SurfaceOfRevolution::*)( const gp_Pnt &  ) >(&Geom_SurfaceOfRevolution::SetLocation),
             R"#(Changes the location point of the revolution axis. Warnings : It is not checked that the axis is in the plane of the revolved curve.)#"  , py::arg("P"))
        .def("Axis",
             (gp_Ax1 (Geom_SurfaceOfRevolution::*)() const) static_cast<gp_Ax1 (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::Axis),
             R"#(Returns the revolution axis of the surface.)#" )
        .def("Location",
             (const gp_Pnt & (Geom_SurfaceOfRevolution::*)() const) static_cast<const gp_Pnt & (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::Location),
             R"#(Returns the location point of the axis of revolution.)#" )
        .def("ReferencePlane",
             (gp_Ax2 (Geom_SurfaceOfRevolution::*)() const) static_cast<gp_Ax2 (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::ReferencePlane),
             R"#(Computes the position of the reference plane of the surface defined by the basis curve and the symmetry axis. The location point is the location point of the revolution's axis, the XDirection of the plane is given by the revolution's axis and the orientation of the normal to the plane is given by the sense of revolution.)#" )
        .def("UReverse",
             (void (Geom_SurfaceOfRevolution::*)() ) static_cast<void (Geom_SurfaceOfRevolution::*)() >(&Geom_SurfaceOfRevolution::UReverse),
             R"#(Changes the orientation of this surface of revolution in the u parametric direction. The bounds of the surface are not changed but the given parametric direction is reversed. Hence the orientation of the surface is reversed. As a consequence: - UReverse reverses the direction of the axis of revolution of this surface,)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const>(&Geom_SurfaceOfRevolution::UReversedParameter),
             R"#(Computes the u parameter on the modified surface, when reversing its u parametric direction, for any point of u parameter U on this surface of revolution. In the case of a revolved surface: - UReversedParameter returns 2.*Pi - U)#"  , py::arg("U"))
        .def("VReverse",
             (void (Geom_SurfaceOfRevolution::*)() ) static_cast<void (Geom_SurfaceOfRevolution::*)() >(&Geom_SurfaceOfRevolution::VReverse),
             R"#(Changes the orientation of this surface of revolution in the v parametric direction. The bounds of the surface are not changed but the given parametric direction is reversed. Hence the orientation of the surface is reversed. As a consequence: - VReverse reverses the meridian of this surface of revolution.)#" )
        .def("VReversedParameter",
             (Standard_Real (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const>(&Geom_SurfaceOfRevolution::VReversedParameter),
             R"#(Computes the v parameter on the modified surface, when reversing its v parametric direction, for any point of v parameter V on this surface of revolution. In the case of a revolved surface: - VReversedParameter returns the reversed parameter given by the function ReversedParameter called with V on the meridian.)#"  , py::arg("V"))
        .def("ParametricTransformation",
             (gp_GTrsf2d (Geom_SurfaceOfRevolution::*)( const gp_Trsf &  ) const) static_cast<gp_GTrsf2d (Geom_SurfaceOfRevolution::*)( const gp_Trsf &  ) const>(&Geom_SurfaceOfRevolution::ParametricTransformation),
             R"#(Returns a 2d transformation used to find the new parameters of a point on the transformed surface.)#"  , py::arg("T"))
        .def("IsUClosed",
             (Standard_Boolean (Geom_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::IsUClosed),
             R"#(IsUClosed always returns true.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::IsVClosed),
             R"#(IsVClosed returns true if the meridian of this surface of revolution is closed.)#" )
        .def("IsCNu",
             (Standard_Boolean (Geom_SurfaceOfRevolution::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_SurfaceOfRevolution::*)( const Standard_Integer  ) const>(&Geom_SurfaceOfRevolution::IsCNu),
             R"#(IsCNu always returns true.)#"  , py::arg("N"))
        .def("IsCNv",
             (Standard_Boolean (Geom_SurfaceOfRevolution::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_SurfaceOfRevolution::*)( const Standard_Integer  ) const>(&Geom_SurfaceOfRevolution::IsCNv),
             R"#(IsCNv returns true if the degree of continuity of the meridian of this surface of revolution is at least N. Raised if N < 0.)#"  , py::arg("N"))
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::IsUPeriodic),
             R"#(Returns True.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::IsVPeriodic),
             R"#(IsVPeriodic returns true if the meridian of this surface of revolution is periodic.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const>(&Geom_SurfaceOfRevolution::UIso),
             R"#(Computes the U isoparametric curve of this surface of revolution. It is the curve obtained by rotating the meridian through an angle U about the axis of revolution.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_SurfaceOfRevolution::*)( const Standard_Real  ) const>(&Geom_SurfaceOfRevolution::VIso),
             R"#(Computes the U isoparametric curve of this surface of revolution. It is the curve obtained by rotating the meridian through an angle U about the axis of revolution.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_SurfaceOfRevolution::D0),
             R"#(Computes the point P (U, V) on the surface. U is the angle of the rotation around the revolution axis. The direction of this axis gives the sense of rotation. V is the parameter of the revolved curve.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SurfaceOfRevolution::D1),
             R"#(Computes the current point and the first derivatives in the directions U and V. Raised if the continuity of the surface is not C1.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SurfaceOfRevolution::D2),
             R"#(Computes the current point, the first and the second derivatives in the directions U and V. Raised if the continuity of the surface is not C2.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_SurfaceOfRevolution::D3),
             R"#(Computes the current point, the first,the second and the third derivatives in the directions U and V. Raised if the continuity of the surface is not C3.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_SurfaceOfRevolution::DN),
             R"#(Computes the derivative of order Nu in the direction u and Nv in the direction v.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_SurfaceOfRevolution::*)( const gp_Trsf &  ) ) static_cast<void (Geom_SurfaceOfRevolution::*)( const gp_Trsf &  ) >(&Geom_SurfaceOfRevolution::Transform),
             R"#(Applies the transformation T to this surface of revolution.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_SurfaceOfRevolution::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::Copy),
             R"#(Creates a new object which is a copy of this surface of revolution.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_SurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_SurfaceOfRevolution::*)() const>(&Geom_SurfaceOfRevolution::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("TransformParameters",
             []( Geom_SurfaceOfRevolution &self , const gp_Trsf & T ){ Standard_Real  U; Standard_Real  V; self.TransformParameters(U,V,T); return std::make_tuple(U,V); },
             R"#(Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.)#"  , py::arg("T"))
        .def("Bounds",
             []( Geom_SurfaceOfRevolution &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2 , V1 and V2 of this surface. A surface of revolution is always complete, so U1 = 0, U2 = 2*PI.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_SurfaceOfRevolution::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_SurfaceOfRevolution::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_ToroidalSurface ,opencascade::handle<Geom_ToroidalSurface>  , Geom_ElementarySurface >>(m.attr("Geom_ToroidalSurface"))
    // constructors
        .def(py::init< const gp_Ax3 &,const Standard_Real,const Standard_Real >()  , py::arg("A3"),  py::arg("MajorRadius"),  py::arg("MinorRadius") )
        .def(py::init< const gp_Torus & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("SetMajorRadius",
             (void (Geom_ToroidalSurface::*)( const Standard_Real  ) ) static_cast<void (Geom_ToroidalSurface::*)( const Standard_Real  ) >(&Geom_ToroidalSurface::SetMajorRadius),
             R"#(Modifies this torus by changing its major radius. Exceptions Standard_ConstructionError if: - MajorRadius is negative, or - MajorRadius - r is less than or equal to gp::Resolution(), where r is the minor radius of this torus.)#"  , py::arg("MajorRadius"))
        .def("SetMinorRadius",
             (void (Geom_ToroidalSurface::*)( const Standard_Real  ) ) static_cast<void (Geom_ToroidalSurface::*)( const Standard_Real  ) >(&Geom_ToroidalSurface::SetMinorRadius),
             R"#(Modifies this torus by changing its minor radius. Exceptions Standard_ConstructionError if: - MinorRadius is negative, or - R - MinorRadius is less than or equal to gp::Resolution(), where R is the major radius of this torus.)#"  , py::arg("MinorRadius"))
        .def("SetTorus",
             (void (Geom_ToroidalSurface::*)( const gp_Torus &  ) ) static_cast<void (Geom_ToroidalSurface::*)( const gp_Torus &  ) >(&Geom_ToroidalSurface::SetTorus),
             R"#(Converts the gp_Torus torus T into this torus.)#"  , py::arg("T"))
        .def("Torus",
             (gp_Torus (Geom_ToroidalSurface::*)() const) static_cast<gp_Torus (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::Torus),
             R"#(Returns the non transient torus with the same geometric properties as <me>.)#" )
        .def("UReversedParameter",
             (Standard_Real (Geom_ToroidalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_ToroidalSurface::*)( const Standard_Real  ) const>(&Geom_ToroidalSurface::UReversedParameter),
             R"#(Return the parameter on the Ureversed surface for the point of parameter U on <me>. Return 2.PI - U.)#"  , py::arg("U"))
        .def("VReversedParameter",
             (Standard_Real (Geom_ToroidalSurface::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_ToroidalSurface::*)( const Standard_Real  ) const>(&Geom_ToroidalSurface::VReversedParameter),
             R"#(Return the parameter on the Ureversed surface for the point of parameter U on <me>. Return 2.PI - U.)#"  , py::arg("U"))
        .def("Area",
             (Standard_Real (Geom_ToroidalSurface::*)() const) static_cast<Standard_Real (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::Area),
             R"#(Computes the aera of the surface.)#" )
        .def("Coefficients",
             (void (Geom_ToroidalSurface::*)( NCollection_Array1<Standard_Real> &  ) const) static_cast<void (Geom_ToroidalSurface::*)( NCollection_Array1<Standard_Real> &  ) const>(&Geom_ToroidalSurface::Coefficients),
             R"#(Returns the coefficients of the implicit equation of the surface in the absolute cartesian coordinate system : Coef(1) * X**4 + Coef(2) * Y**4 + Coef(3) * Z**4 + Coef(4) * X**3 * Y + Coef(5) * X**3 * Z + Coef(6) * Y**3 * X + Coef(7) * Y**3 * Z + Coef(8) * Z**3 * X + Coef(9) * Z**3 * Y + Coef(10) * X**2 * Y**2 + Coef(11) * X**2 * Z**2 + Coef(12) * Y**2 * Z**2 + Coef(13) * X**3 + Coef(14) * Y**3 + Coef(15) * Z**3 + Coef(16) * X**2 * Y + Coef(17) * X**2 * Z + Coef(18) * Y**2 * X + Coef(19) * Y**2 * Z + Coef(20) * Z**2 * X + Coef(21) * Z**2 * Y + Coef(22) * X**2 + Coef(23) * Y**2 + Coef(24) * Z**2 + Coef(25) * X * Y + Coef(26) * X * Z + Coef(27) * Y * Z + Coef(28) * X + Coef(29) * Y + Coef(30) * Z + Coef(31) = 0.0 Raised if the length of Coef is lower than 31.)#"  , py::arg("Coef"))
        .def("MajorRadius",
             (Standard_Real (Geom_ToroidalSurface::*)() const) static_cast<Standard_Real (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::MajorRadius),
             R"#(Returns the major radius, or the minor radius, of this torus.)#" )
        .def("MinorRadius",
             (Standard_Real (Geom_ToroidalSurface::*)() const) static_cast<Standard_Real (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::MinorRadius),
             R"#(Returns the major radius, or the minor radius, of this torus.)#" )
        .def("Volume",
             (Standard_Real (Geom_ToroidalSurface::*)() const) static_cast<Standard_Real (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::Volume),
             R"#(Computes the volume.)#" )
        .def("IsUClosed",
             (Standard_Boolean (Geom_ToroidalSurface::*)() const) static_cast<Standard_Boolean (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::IsUClosed),
             R"#(Returns True.)#" )
        .def("IsVClosed",
             (Standard_Boolean (Geom_ToroidalSurface::*)() const) static_cast<Standard_Boolean (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::IsVClosed),
             R"#(Returns True.)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (Geom_ToroidalSurface::*)() const) static_cast<Standard_Boolean (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::IsUPeriodic),
             R"#(Returns True.)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (Geom_ToroidalSurface::*)() const) static_cast<Standard_Boolean (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::IsVPeriodic),
             R"#(Returns True.)#" )
        .def("UIso",
             (opencascade::handle<Geom_Curve> (Geom_ToroidalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_ToroidalSurface::*)( const Standard_Real  ) const>(&Geom_ToroidalSurface::UIso),
             R"#(Computes the U isoparametric curve.)#"  , py::arg("U"))
        .def("VIso",
             (opencascade::handle<Geom_Curve> (Geom_ToroidalSurface::*)( const Standard_Real  ) const) static_cast<opencascade::handle<Geom_Curve> (Geom_ToroidalSurface::*)( const Standard_Real  ) const>(&Geom_ToroidalSurface::VIso),
             R"#(Computes the V isoparametric curve.)#"  , py::arg("V"))
        .def("D0",
             (void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&Geom_ToroidalSurface::D0),
             R"#(Computes the point P (U, V) on the surface. P (U, V) = Loc + MinorRadius * Sin (V) * Zdir + (MajorRadius + MinorRadius * Cos(V)) * (cos (U) * XDir + sin (U) * YDir) where Loc is the origin of the placement plane (XAxis, YAxis) XDir is the direction of the XAxis and YDir the direction of the YAxis and ZDir the direction of the ZAxis.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_ToroidalSurface::D1),
             R"#(Computes the current point and the first derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_ToroidalSurface::D2),
             R"#(Computes the current point, the first and the second derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_ToroidalSurface::D3),
             R"#(Computes the current point, the first,the second and the third derivatives in the directions U and V.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_ToroidalSurface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Geom_ToroidalSurface::DN),
             R"#(Computes the derivative of order Nu in the direction u and Nv in the direction v. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("Transform",
             (void (Geom_ToroidalSurface::*)( const gp_Trsf &  ) ) static_cast<void (Geom_ToroidalSurface::*)( const gp_Trsf &  ) >(&Geom_ToroidalSurface::Transform),
             R"#(Applies the transformation T to this torus.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_ToroidalSurface::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::Copy),
             R"#(Creates a new object which is a copy of this torus.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_ToroidalSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_ToroidalSurface::*)() const>(&Geom_ToroidalSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Bounds",
             []( Geom_ToroidalSurface &self   ){ Standard_Real  U1; Standard_Real  U2; Standard_Real  V1; Standard_Real  V2; self.Bounds(U1,U2,V1,V2); return std::make_tuple(U1,U2,V1,V2); },
             R"#(Returns the parametric bounds U1, U2, V1 and V2 of this torus. For a torus: U1 = V1 = 0 and U2 = V2 = 2*PI .)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_ToroidalSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_ToroidalSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom_TrimmedCurve ,opencascade::handle<Geom_TrimmedCurve>  , Geom_BoundedCurve >>(m.attr("Geom_TrimmedCurve"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("C"),  py::arg("U1"),  py::arg("U2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theAdjustPeriodic")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Reverse",
             (void (Geom_TrimmedCurve::*)() ) static_cast<void (Geom_TrimmedCurve::*)() >(&Geom_TrimmedCurve::Reverse),
             R"#(Changes the orientation of this trimmed curve. As a result: - the basis curve is reversed, - the start point of the initial curve becomes the end point of the reversed curve, - the end point of the initial curve becomes the start point of the reversed curve, - the first and last parameters are recomputed. If the trimmed curve was defined by: - a basis curve whose parameter range is [ 0., 1. ], - the two trim values U1 (first parameter) and U2 (last parameter), the reversed trimmed curve is defined by: - the reversed basis curve, whose parameter range is still [ 0., 1. ], - the two trim values 1. - U2 (first parameter) and 1. - U1 (last parameter).)#" )
        .def("ReversedParameter",
             (Standard_Real (Geom_TrimmedCurve::*)( const Standard_Real  ) const) static_cast<Standard_Real (Geom_TrimmedCurve::*)( const Standard_Real  ) const>(&Geom_TrimmedCurve::ReversedParameter),
             R"#(Computes the parameter on the reversed curve for the point of parameter U on this trimmed curve.)#"  , py::arg("U"))
        .def("SetTrim",
             (void (Geom_TrimmedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (Geom_TrimmedCurve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Geom_TrimmedCurve::SetTrim),
             R"#(Changes this trimmed curve, by redefining the parameter values U1 and U2 which limit its basis curve. Note: If the basis curve is periodic, the trimmed curve has the same orientation as the basis curve if Sense is true (default value) or the opposite orientation if Sense is false. Warning If the basis curve is periodic and theAdjustPeriodic is True, the bounds of the trimmed curve may be different from U1 and U2 if the parametric origin of the basis curve is within the arc of the trimmed curve. In this case, the modified parameter will be equal to U1 or U2 plus or minus the period. When theAdjustPeriodic is False, parameters U1 and U2 will be the same, without adjustment into the first period. Exceptions Standard_ConstructionError if: - the basis curve is not periodic, and either U1 or U2 are outside the bounds of the basis curve, or - U1 is equal to U2.)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("Sense")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theAdjustPeriodic")=static_cast<const Standard_Boolean>(Standard_True))
        .def("BasisCurve",
             (opencascade::handle<Geom_Curve> (Geom_TrimmedCurve::*)() const) static_cast<opencascade::handle<Geom_Curve> (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::BasisCurve),
             R"#(Returns the basis curve. Warning This function does not return a constant reference. Consequently, any modification of the returned value directly modifies the trimmed curve.)#" )
        .def("Continuity",
             (GeomAbs_Shape (Geom_TrimmedCurve::*)() const) static_cast<GeomAbs_Shape (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::Continuity),
             R"#(Returns the continuity of the curve : C0 : only geometric continuity, C1 : continuity of the first derivative all along the Curve, C2 : continuity of the second derivative all along the Curve, C3 : continuity of the third derivative all along the Curve, CN : the order of continuity is infinite.)#" )
        .def("IsCN",
             (Standard_Boolean (Geom_TrimmedCurve::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom_TrimmedCurve::*)( const Standard_Integer  ) const>(&Geom_TrimmedCurve::IsCN),
             R"#(Returns true if the degree of continuity of the basis curve of this trimmed curve is at least N. A trimmed curve is at least "C0" continuous. Warnings : The continuity of the trimmed curve can be greater than the continuity of the basis curve because you consider only a part of the basis curve. Raised if N < 0.)#"  , py::arg("N"))
        .def("EndPoint",
             (gp_Pnt (Geom_TrimmedCurve::*)() const) static_cast<gp_Pnt (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::EndPoint),
             R"#(Returns the end point of <me>. This point is the evaluation of the curve for the "LastParameter".)#" )
        .def("FirstParameter",
             (Standard_Real (Geom_TrimmedCurve::*)() const) static_cast<Standard_Real (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::FirstParameter),
             R"#(Returns the value of the first parameter of <me>. The first parameter is the parameter of the "StartPoint" of the trimmed curve.)#" )
        .def("IsClosed",
             (Standard_Boolean (Geom_TrimmedCurve::*)() const) static_cast<Standard_Boolean (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::IsClosed),
             R"#(Returns True if the distance between the StartPoint and the EndPoint is lower or equal to Resolution from package gp.)#" )
        .def("IsPeriodic",
             (Standard_Boolean (Geom_TrimmedCurve::*)() const) static_cast<Standard_Boolean (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::IsPeriodic),
             R"#(Always returns FALSE (independently of the type of basis curve).)#" )
        .def("Period",
             (Standard_Real (Geom_TrimmedCurve::*)() const) static_cast<Standard_Real (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::Period),
             R"#(Returns the period of the basis curve of this trimmed curve. Exceptions Standard_NoSuchObject if the basis curve is not periodic.)#" )
        .def("LastParameter",
             (Standard_Real (Geom_TrimmedCurve::*)() const) static_cast<Standard_Real (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::LastParameter),
             R"#(Returns the value of the last parameter of <me>. The last parameter is the parameter of the "EndPoint" of the trimmed curve.)#" )
        .def("StartPoint",
             (gp_Pnt (Geom_TrimmedCurve::*)() const) static_cast<gp_Pnt (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::StartPoint),
             R"#(Returns the start point of <me>. This point is the evaluation of the curve from the "FirstParameter". value and derivatives Warnings : The returned derivatives have the same orientation as the derivatives of the basis curve even if the trimmed curve has not the same orientation as the basis curve.)#" )
        .def("D0",
             (void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&Geom_TrimmedCurve::D0),
             R"#(Returns in P the point of parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&Geom_TrimmedCurve::D1),
             R"#(Raised if the continuity of the curve is not C1.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_TrimmedCurve::D2),
             R"#(Raised if the continuity of the curve is not C2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (Geom_TrimmedCurve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&Geom_TrimmedCurve::D3),
             R"#(Raised if the continuity of the curve is not C3.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (Geom_TrimmedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (Geom_TrimmedCurve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&Geom_TrimmedCurve::DN),
             R"#(N is the order of derivation. Raised if the continuity of the curve is not CN. Raised if N < 1. geometric transformations)#"  , py::arg("U"),  py::arg("N"))
        .def("Transform",
             (void (Geom_TrimmedCurve::*)( const gp_Trsf &  ) ) static_cast<void (Geom_TrimmedCurve::*)( const gp_Trsf &  ) >(&Geom_TrimmedCurve::Transform),
             R"#(Applies the transformation T to this trimmed curve. Warning The basis curve is also modified.)#"  , py::arg("T"))
        .def("TransformedParameter",
             (Standard_Real (Geom_TrimmedCurve::*)( const Standard_Real ,  const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_TrimmedCurve::*)( const Standard_Real ,  const gp_Trsf &  ) const>(&Geom_TrimmedCurve::TransformedParameter),
             R"#(Returns the parameter on the transformed curve for the transform of the point of parameter U on <me>.)#"  , py::arg("U"),  py::arg("T"))
        .def("ParametricTransformation",
             (Standard_Real (Geom_TrimmedCurve::*)( const gp_Trsf &  ) const) static_cast<Standard_Real (Geom_TrimmedCurve::*)( const gp_Trsf &  ) const>(&Geom_TrimmedCurve::ParametricTransformation),
             R"#(Returns a coefficient to compute the parameter on the transformed curve for the transform of the point on <me>.)#"  , py::arg("T"))
        .def("Copy",
             (opencascade::handle<Geom_Geometry> (Geom_TrimmedCurve::*)() const) static_cast<opencascade::handle<Geom_Geometry> (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::Copy),
             R"#(Creates a new object which is a copy of this trimmed curve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Geom_TrimmedCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Geom_TrimmedCurve::*)() const>(&Geom_TrimmedCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Geom_TrimmedCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Geom_TrimmedCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom_BoundedCurve.hxx
// ./opencascade/Geom_BoundedSurface.hxx
// ./opencascade/Geom_ElementarySurface.hxx
// ./opencascade/Geom_Parabola.hxx
// ./opencascade/Geom_SphericalSurface.hxx
// ./opencascade/Geom_Conic.hxx
// ./opencascade/Geom_UndefinedDerivative.hxx
// ./opencascade/Geom_Axis2Placement.hxx
// ./opencascade/Geom_HSequenceOfBSplineSurface.hxx
// ./opencascade/Geom_Circle.hxx
// ./opencascade/Geom_BezierCurve.hxx
// ./opencascade/Geom_Transformation.hxx
// ./opencascade/Geom_CylindricalSurface.hxx
// ./opencascade/Geom_RectangularTrimmedSurface.hxx
// ./opencascade/Geom_CartesianPoint.hxx
// ./opencascade/Geom_Hyperbola.hxx
// ./opencascade/Geom_Geometry.hxx
// ./opencascade/Geom_Vector.hxx
// ./opencascade/Geom_Point.hxx
// ./opencascade/Geom_Line.hxx
// ./opencascade/Geom_Surface.hxx
// ./opencascade/Geom_OsculatingSurface.hxx
// ./opencascade/Geom_Curve.hxx
// ./opencascade/Geom_SurfaceOfRevolution.hxx
// ./opencascade/Geom_Direction.hxx
// ./opencascade/Geom_SurfaceOfLinearExtrusion.hxx
// ./opencascade/Geom_Axis1Placement.hxx
// ./opencascade/Geom_AxisPlacement.hxx
// ./opencascade/Geom_Ellipse.hxx
// ./opencascade/Geom_OffsetCurve.hxx
// ./opencascade/Geom_SequenceOfBSplineSurface.hxx
// ./opencascade/Geom_BezierSurface.hxx
// ./opencascade/Geom_UndefinedValue.hxx
// ./opencascade/Geom_SweptSurface.hxx
// ./opencascade/Geom_BSplineSurface.hxx
// ./opencascade/Geom_Plane.hxx
// ./opencascade/Geom_ConicalSurface.hxx
// ./opencascade/Geom_ToroidalSurface.hxx
// ./opencascade/Geom_OffsetSurface.hxx
// ./opencascade/Geom_BSplineCurve.hxx
// ./opencascade/Geom_TrimmedCurve.hxx
// ./opencascade/Geom_VectorWithMagnitude.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<Geom_BSplineSurface> >(m,"Geom_SequenceOfBSplineSurface");  


// exceptions
register_occ_exception<Geom_UndefinedDerivative>(m, "Geom_UndefinedDerivative");
register_occ_exception<Geom_UndefinedValue>(m, "Geom_UndefinedValue");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
