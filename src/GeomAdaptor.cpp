
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <GeomAdaptor_GHSurface.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomAdaptor_GHCurve.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>

// module includes
#include <GeomAdaptor.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <GeomAdaptor_GHCurve.hxx>
#include <GeomAdaptor_GHSurface.hxx>
#include <GeomAdaptor_HCurve.hxx>
#include <GeomAdaptor_HSurface.hxx>
#include <GeomAdaptor_HSurfaceOfLinearExtrusion.hxx>
#include <GeomAdaptor_HSurfaceOfRevolution.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <GeomAdaptor_SurfaceOfLinearExtrusion.hxx>
#include <GeomAdaptor_SurfaceOfRevolution.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomAdaptor(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("GeomAdaptor"));


//Python trampoline classes

// classes


    static_cast<py::class_<GeomAdaptor_HSurfaceOfRevolution ,opencascade::handle<GeomAdaptor_HSurfaceOfRevolution>  , Adaptor3d_HSurface >>(m.attr("GeomAdaptor_HSurfaceOfRevolution"))
        .def(py::init<  >()  )
        .def(py::init< const GeomAdaptor_SurfaceOfRevolution & >()  , py::arg("S") )
        .def("Set",
             (void (GeomAdaptor_HSurfaceOfRevolution::*)( const GeomAdaptor_SurfaceOfRevolution &  ) ) static_cast<void (GeomAdaptor_HSurfaceOfRevolution::*)( const GeomAdaptor_SurfaceOfRevolution &  ) >(&GeomAdaptor_HSurfaceOfRevolution::Set),
             R"#(Sets the field of the GenHSurface.)#"  , py::arg("S"))
        .def("Surface",
             (const Adaptor3d_Surface & (GeomAdaptor_HSurfaceOfRevolution::*)() const) static_cast<const Adaptor3d_Surface & (GeomAdaptor_HSurfaceOfRevolution::*)() const>(&GeomAdaptor_HSurfaceOfRevolution::Surface),
             R"#(Returns a reference to the Surface inside the HSurface. This is redefined from HSurface, cannot be inline.)#" )
        .def("ChangeSurface",
             (GeomAdaptor_SurfaceOfRevolution & (GeomAdaptor_HSurfaceOfRevolution::*)() ) static_cast<GeomAdaptor_SurfaceOfRevolution & (GeomAdaptor_HSurfaceOfRevolution::*)() >(&GeomAdaptor_HSurfaceOfRevolution::ChangeSurface),
             R"#(Returns the surface used to create the GenHSurface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomAdaptor_HSurfaceOfRevolution::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomAdaptor_HSurfaceOfRevolution::*)() const>(&GeomAdaptor_HSurfaceOfRevolution::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomAdaptor_HSurfaceOfRevolution::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomAdaptor_HSurfaceOfRevolution::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<GeomAdaptor_Surface ,std::unique_ptr<GeomAdaptor_Surface>  , Adaptor3d_Surface >>(m.attr("GeomAdaptor_Surface"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> & >()  , py::arg("S") )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UFirst"),  py::arg("ULast"),  py::arg("VFirst"),  py::arg("VLast"),  py::arg("TolU")=static_cast<const Standard_Real>(0.0),  py::arg("TolV")=static_cast<const Standard_Real>(0.0) )
        .def("Load",
             (void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> &  ) >(&GeomAdaptor_Surface::Load),
             R"#(None)#"  , py::arg("S"))
        .def("Load",
             (void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAdaptor_Surface::Load),
             R"#(ConstructionError is raised if UFirst>ULast or VFirst>VLast)#"  , py::arg("S"),  py::arg("UFirst"),  py::arg("ULast"),  py::arg("VFirst"),  py::arg("VLast"),  py::arg("TolU")=static_cast<const Standard_Real>(0.0),  py::arg("TolV")=static_cast<const Standard_Real>(0.0))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomAdaptor_Surface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Surface),
             R"#(None)#" )
        .def("FirstUParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (GeomAdaptor_Surface::*)() const) static_cast<GeomAbs_Shape (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (GeomAdaptor_Surface::*)() const) static_cast<GeomAbs_Shape (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::VContinuity),
             R"#(None)#" )
        .def("NbUIntervals",
             (Standard_Integer (GeomAdaptor_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)( const GeomAbs_Shape  ) const>(&GeomAdaptor_Surface::NbUIntervals),
             R"#(Returns the number of U intervals for continuity <S>. May be one if UContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (GeomAdaptor_Surface::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)( const GeomAbs_Shape  ) const>(&GeomAdaptor_Surface::NbVIntervals),
             R"#(Returns the number of V intervals for continuity <S>. May be one if VContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("UIntervals",
             (void (GeomAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (GeomAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&GeomAdaptor_Surface::UIntervals),
             R"#(Returns the intervals with the requested continuity in the U direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("VIntervals",
             (void (GeomAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (GeomAdaptor_Surface::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&GeomAdaptor_Surface::VIntervals),
             R"#(Returns the intervals with the requested continuity in the V direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("UTrim",
             (opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_Surface::UTrim),
             R"#(Returns a surface trimmed in the U direction equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("VTrim",
             (opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_Surface::VTrim),
             R"#(Returns a surface trimmed in the V direction between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsUClosed",
             (Standard_Boolean (GeomAdaptor_Surface::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (GeomAdaptor_Surface::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomAdaptor_Surface::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomAdaptor_Surface::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::VPeriod),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real  ) const) static_cast<gp_Pnt (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_Surface::Value),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"))
        .def("D0",
             (void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt &  ) const>(&GeomAdaptor_Surface::D0),
             R"#(Computes the point of parameters U,V on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"))
        .def("D1",
             (void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomAdaptor_Surface::D1),
             R"#(Computes the point and the first derivatives on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"))
        .def("D2",
             (void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomAdaptor_Surface::D2),
             R"#(Computes the point, the first and second derivatives on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"))
        .def("D3",
             (void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomAdaptor_Surface::D3),
             R"#(Computes the point, the first, second and third derivatives on the surface.)#"  , py::arg("U"),  py::arg("V"),  py::arg("P"),  py::arg("D1U"),  py::arg("D1V"),  py::arg("D2U"),  py::arg("D2V"),  py::arg("D2UV"),  py::arg("D3U"),  py::arg("D3V"),  py::arg("D3UUV"),  py::arg("D3UVV"))
        .def("DN",
             (gp_Vec (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomAdaptor_Surface::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) const>(&GeomAdaptor_Surface::DN),
             R"#(Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V).)#"  , py::arg("U"),  py::arg("V"),  py::arg("Nu"),  py::arg("Nv"))
        .def("UResolution",
             (Standard_Real (GeomAdaptor_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (GeomAdaptor_Surface::*)( const Standard_Real  ) const>(&GeomAdaptor_Surface::UResolution),
             R"#(Returns the parametric U resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (GeomAdaptor_Surface::*)( const Standard_Real  ) const) static_cast<Standard_Real (GeomAdaptor_Surface::*)( const Standard_Real  ) const>(&GeomAdaptor_Surface::VResolution),
             R"#(Returns the parametric V resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (GeomAdaptor_Surface::*)() const) static_cast<GeomAbs_SurfaceType (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("Plane",
             (gp_Pln (GeomAdaptor_Surface::*)() const) static_cast<gp_Pln (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Plane),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (GeomAdaptor_Surface::*)() const) static_cast<gp_Cylinder (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (GeomAdaptor_Surface::*)() const) static_cast<gp_Cone (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (GeomAdaptor_Surface::*)() const) static_cast<gp_Sphere (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (GeomAdaptor_Surface::*)() const) static_cast<gp_Torus (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (GeomAdaptor_Surface::*)() const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (GeomAdaptor_Surface::*)() const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::NbUPoles),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (GeomAdaptor_Surface::*)() const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (GeomAdaptor_Surface::*)() const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::NbVPoles),
             R"#(None)#" )
        .def("NbUKnots",
             (Standard_Integer (GeomAdaptor_Surface::*)() const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::NbUKnots),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (GeomAdaptor_Surface::*)() const) static_cast<Standard_Integer (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::NbVKnots),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (GeomAdaptor_Surface::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (GeomAdaptor_Surface::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::IsVRational),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierSurface> (GeomAdaptor_Surface::*)() const) static_cast<opencascade::handle<Geom_BezierSurface> (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Bezier),
             R"#(This will NOT make a copy of the Bezier Surface : If you want to modify the Surface please make a copy yourself Also it will NOT trim the surface to myU/VFirst/Last.)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineSurface> (GeomAdaptor_Surface::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::BSpline),
             R"#(This will NOT make a copy of the BSpline Surface : If you want to modify the Surface please make a copy yourself Also it will NOT trim the surface to myU/VFirst/Last.)#" )
        .def("AxeOfRevolution",
             (gp_Ax1 (GeomAdaptor_Surface::*)() const) static_cast<gp_Ax1 (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::AxeOfRevolution),
             R"#(None)#" )
        .def("Direction",
             (gp_Dir (GeomAdaptor_Surface::*)() const) static_cast<gp_Dir (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Direction),
             R"#(None)#" )
        .def("BasisCurve",
             (opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_Surface::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::BasisCurve),
             R"#(None)#" )
        .def("BasisSurface",
             (opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_Surface::*)() const) static_cast<opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::BasisSurface),
             R"#(None)#" )
        .def("OffsetValue",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::OffsetValue),
             R"#(None)#" )
        .def("Load",
             (void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> &  ) >(&GeomAdaptor_Surface::Load),
             R"#(None)#"  , py::arg("S"))
        .def("Load",
             (void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAdaptor_Surface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAdaptor_Surface::Load),
             R"#(ConstructionError is raised if UFirst>ULast or VFirst>VLast)#"  , py::arg("S"),  py::arg("UFirst"),  py::arg("ULast"),  py::arg("VFirst"),  py::arg("VLast"),  py::arg("TolU"),  py::arg("TolV"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (GeomAdaptor_Surface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::Surface),
             R"#(None)#" )
        .def("FirstUParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (GeomAdaptor_Surface::*)() const) static_cast<Standard_Real (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::LastVParameter),
             R"#(None)#" )
        .def("GetType",
             (GeomAbs_SurfaceType (GeomAdaptor_Surface::*)() const) static_cast<GeomAbs_SurfaceType (GeomAdaptor_Surface::*)() const>(&GeomAdaptor_Surface::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
;


    static_cast<py::class_<GeomAdaptor_Curve ,std::unique_ptr<GeomAdaptor_Curve>  , Adaptor3d_Curve >>(m.attr("GeomAdaptor_Curve"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Curve> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UFirst"),  py::arg("ULast") )
        .def("Load",
             (void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> &  ) >(&GeomAdaptor_Curve::Load),
             R"#(None)#"  , py::arg("C"))
        .def("Load",
             (void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAdaptor_Curve::Load),
             R"#(ConstructionError is raised if Ufirst>Ulast)#"  , py::arg("C"),  py::arg("UFirst"),  py::arg("ULast"))
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (GeomAdaptor_Curve::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Curve),
             R"#(Provides a curve inherited from Hcurve from Adaptor. This is inherited to provide easy to use constructors.)#" )
        .def("FirstParameter",
             (Standard_Real (GeomAdaptor_Curve::*)() const) static_cast<Standard_Real (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (GeomAdaptor_Curve::*)() const) static_cast<Standard_Real (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (GeomAdaptor_Curve::*)() const) static_cast<GeomAbs_Shape (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (GeomAdaptor_Curve::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (GeomAdaptor_Curve::*)( const GeomAbs_Shape  ) const>(&GeomAdaptor_Curve::NbIntervals),
             R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(me) >= <S>)#"  , py::arg("S"))
        .def("Intervals",
             (void (GeomAdaptor_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (GeomAdaptor_Curve::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&GeomAdaptor_Curve::Intervals),
             R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_Curve::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_Curve::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsClosed",
             (Standard_Boolean (GeomAdaptor_Curve::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::IsClosed),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (GeomAdaptor_Curve::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (GeomAdaptor_Curve::*)() const) static_cast<Standard_Real (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (GeomAdaptor_Curve::*)( const Standard_Real  ) const) static_cast<gp_Pnt (GeomAdaptor_Curve::*)( const Standard_Real  ) const>(&GeomAdaptor_Curve::Value),
             R"#(Computes the point of parameter U on the curve)#"  , py::arg("U"))
        .def("D0",
             (void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt &  ) const>(&GeomAdaptor_Curve::D0),
             R"#(Computes the point of parameter U.)#"  , py::arg("U"),  py::arg("P"))
        .def("D1",
             (void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&GeomAdaptor_Curve::D1),
             R"#(Computes the point of parameter U on the curve with its first derivative.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def("D2",
             (void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomAdaptor_Curve::D2),
             R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (GeomAdaptor_Curve::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&GeomAdaptor_Curve::D3),
             R"#(Returns the point P of parameter U, the first, the second and the third derivative.)#"  , py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("DN",
             (gp_Vec (GeomAdaptor_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const) static_cast<gp_Vec (GeomAdaptor_Curve::*)( const Standard_Real ,  const Standard_Integer  ) const>(&GeomAdaptor_Curve::DN),
             R"#(The returned vector gives the value of the derivative for the order of derivation N. Warning : On the specific case of BSplineCurve: if the curve is cut in interval of continuity CN, the derivatives are computed on the current interval. else the derivatives are computed on the basis curve. Raised if N < 1.)#"  , py::arg("U"),  py::arg("N"))
        .def("Resolution",
             (Standard_Real (GeomAdaptor_Curve::*)( const Standard_Real  ) const) static_cast<Standard_Real (GeomAdaptor_Curve::*)( const Standard_Real  ) const>(&GeomAdaptor_Curve::Resolution),
             R"#(returns the parametric resolution)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (GeomAdaptor_Curve::*)() const) static_cast<GeomAbs_CurveType (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin (GeomAdaptor_Curve::*)() const) static_cast<gp_Lin (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (GeomAdaptor_Curve::*)() const) static_cast<gp_Circ (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (GeomAdaptor_Curve::*)() const) static_cast<gp_Elips (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (GeomAdaptor_Curve::*)() const) static_cast<gp_Hypr (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (GeomAdaptor_Curve::*)() const) static_cast<gp_Parab (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Parabola),
             R"#(None)#" )
        .def("Degree",
             (Standard_Integer (GeomAdaptor_Curve::*)() const) static_cast<Standard_Integer (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Degree),
             R"#(this should NEVER make a copy of the underlying curve to read the relevant information)#" )
        .def("IsRational",
             (Standard_Boolean (GeomAdaptor_Curve::*)() const) static_cast<Standard_Boolean (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::IsRational),
             R"#(this should NEVER make a copy of the underlying curve to read the relevant information)#" )
        .def("NbPoles",
             (Standard_Integer (GeomAdaptor_Curve::*)() const) static_cast<Standard_Integer (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::NbPoles),
             R"#(this should NEVER make a copy of the underlying curve to read the relevant information)#" )
        .def("NbKnots",
             (Standard_Integer (GeomAdaptor_Curve::*)() const) static_cast<Standard_Integer (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::NbKnots),
             R"#(this should NEVER make a copy of the underlying curve to read the relevant information)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (GeomAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Bezier),
             R"#(this will NOT make a copy of the Bezier Curve : If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (GeomAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::BSpline),
             R"#(this will NOT make a copy of the BSpline Curve : If you want to modify the Curve please make a copy yourself Also it will NOT trim the surface to myFirst/Last.)#" )
        .def("OffsetCurve",
             (opencascade::handle<Geom_OffsetCurve> (GeomAdaptor_Curve::*)() const) static_cast<opencascade::handle<Geom_OffsetCurve> (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::OffsetCurve),
             R"#(None)#" )
        .def("Load",
             (void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> &  ) >(&GeomAdaptor_Curve::Load),
             R"#(None)#"  , py::arg("C"))
        .def("Load",
             (void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (GeomAdaptor_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&GeomAdaptor_Curve::Load),
             R"#(ConstructionError is raised if Ufirst>Ulast)#"  , py::arg("C"),  py::arg("UFirst"),  py::arg("ULast"))
        .def("FirstParameter",
             (Standard_Real (GeomAdaptor_Curve::*)() const) static_cast<Standard_Real (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (GeomAdaptor_Curve::*)() const) static_cast<Standard_Real (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::LastParameter),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (GeomAdaptor_Curve::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::Curve),
             R"#(Provides a curve inherited from Hcurve from Adaptor. This is inherited to provide easy to use constructors.)#" )
        .def("GetType",
             (GeomAbs_CurveType (GeomAdaptor_Curve::*)() const) static_cast<GeomAbs_CurveType (GeomAdaptor_Curve::*)() const>(&GeomAdaptor_Curve::GetType),
             R"#(None)#" )
;


    static_cast<py::class_<GeomAdaptor_GHCurve ,opencascade::handle<GeomAdaptor_GHCurve>  , Adaptor3d_HCurve >>(m.attr("GeomAdaptor_GHCurve"))
        .def(py::init<  >()  )
        .def(py::init< const GeomAdaptor_Curve & >()  , py::arg("C") )
        .def("Set",
             (void (GeomAdaptor_GHCurve::*)( const GeomAdaptor_Curve &  ) ) static_cast<void (GeomAdaptor_GHCurve::*)( const GeomAdaptor_Curve &  ) >(&GeomAdaptor_GHCurve::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
        .def("Curve",
             (const Adaptor3d_Curve & (GeomAdaptor_GHCurve::*)() const) static_cast<const Adaptor3d_Curve & (GeomAdaptor_GHCurve::*)() const>(&GeomAdaptor_GHCurve::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (GeomAdaptor_GHCurve::*)() ) static_cast<Adaptor3d_Curve & (GeomAdaptor_GHCurve::*)() >(&GeomAdaptor_GHCurve::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (GeomAdaptor_Curve & (GeomAdaptor_GHCurve::*)() ) static_cast<GeomAdaptor_Curve & (GeomAdaptor_GHCurve::*)() >(&GeomAdaptor_GHCurve::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomAdaptor_GHCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomAdaptor_GHCurve::*)() const>(&GeomAdaptor_GHCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomAdaptor_GHCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomAdaptor_GHCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<GeomAdaptor_SurfaceOfRevolution ,std::unique_ptr<GeomAdaptor_SurfaceOfRevolution>  , GeomAdaptor_Surface >>(m.attr("GeomAdaptor_SurfaceOfRevolution"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const gp_Ax1 & >()  , py::arg("C"),  py::arg("V") )
        .def("Load",
             (void (GeomAdaptor_SurfaceOfRevolution::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) ) static_cast<void (GeomAdaptor_SurfaceOfRevolution::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) >(&GeomAdaptor_SurfaceOfRevolution::Load),
             R"#(Changes the Curve)#"  , py::arg("C"))
        .def("Load",
             (void (GeomAdaptor_SurfaceOfRevolution::*)( const gp_Ax1 &  ) ) static_cast<void (GeomAdaptor_SurfaceOfRevolution::*)( const gp_Ax1 &  ) >(&GeomAdaptor_SurfaceOfRevolution::Load),
             R"#(Changes the Direction)#"  , py::arg("V"))
        .def("AxeOfRevolution",
             (gp_Ax1 (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<gp_Ax1 (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::AxeOfRevolution),
             R"#(None)#" )
        .def("FirstUParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<GeomAbs_Shape (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<GeomAbs_Shape (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::VContinuity),
             R"#(Return CN.)#" )
        .def("NbUIntervals",
             (Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)( const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfRevolution::NbUIntervals),
             R"#(Returns the number of U intervals for continuity <S>. May be one if UContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)( const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfRevolution::NbVIntervals),
             R"#(Returns the number of V intervals for continuity <S>. May be one if VContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("UIntervals",
             (void (GeomAdaptor_SurfaceOfRevolution::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (GeomAdaptor_SurfaceOfRevolution::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfRevolution::UIntervals),
             R"#(Returns the intervals with the requested continuity in the U direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("VIntervals",
             (void (GeomAdaptor_SurfaceOfRevolution::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (GeomAdaptor_SurfaceOfRevolution::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfRevolution::VIntervals),
             R"#(Returns the intervals with the requested continuity in the V direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("UTrim",
             (opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfRevolution::UTrim),
             R"#(Returns a surface trimmed in the U direction equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("VTrim",
             (opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfRevolution::VTrim),
             R"#(Returns a surface trimmed in the V direction between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsUClosed",
             (Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::VPeriod),
             R"#(None)#" )
        .def("UResolution",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real  ) const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfRevolution::UResolution),
             R"#(Returns the parametric U resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real  ) const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfRevolution::*)( const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfRevolution::VResolution),
             R"#(Returns the parametric V resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<GeomAbs_SurfaceType (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("Plane",
             (gp_Pln (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<gp_Pln (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::Plane),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<gp_Cylinder (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<gp_Cone (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::Cone),
             R"#(Apex of the Cone = Cone.Position().Location() ==> ReferenceRadius = 0.)#" )
        .def("Sphere",
             (gp_Sphere (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<gp_Sphere (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<gp_Torus (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::Torus),
             R"#(None)#" )
        .def("VDegree",
             (Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::VDegree),
             R"#(None)#" )
        .def("NbVPoles",
             (Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::NbVPoles),
             R"#(None)#" )
        .def("NbVKnots",
             (Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::NbVKnots),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::IsVRational),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierSurface> (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<opencascade::handle<Geom_BezierSurface> (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineSurface> (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::BSpline),
             R"#(None)#" )
        .def("Axis",
             (const gp_Ax3 & (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<const gp_Ax3 & (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::Axis),
             R"#(None)#" )
        .def("BasisCurve",
             (opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_SurfaceOfRevolution::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_SurfaceOfRevolution::*)() const>(&GeomAdaptor_SurfaceOfRevolution::BasisCurve),
             R"#(None)#" )
;


    static_cast<py::class_<GeomAdaptor_HSurfaceOfLinearExtrusion ,opencascade::handle<GeomAdaptor_HSurfaceOfLinearExtrusion>  , Adaptor3d_HSurface >>(m.attr("GeomAdaptor_HSurfaceOfLinearExtrusion"))
        .def(py::init<  >()  )
        .def(py::init< const GeomAdaptor_SurfaceOfLinearExtrusion & >()  , py::arg("S") )
        .def("Set",
             (void (GeomAdaptor_HSurfaceOfLinearExtrusion::*)( const GeomAdaptor_SurfaceOfLinearExtrusion &  ) ) static_cast<void (GeomAdaptor_HSurfaceOfLinearExtrusion::*)( const GeomAdaptor_SurfaceOfLinearExtrusion &  ) >(&GeomAdaptor_HSurfaceOfLinearExtrusion::Set),
             R"#(Sets the field of the GenHSurface.)#"  , py::arg("S"))
        .def("Surface",
             (const Adaptor3d_Surface & (GeomAdaptor_HSurfaceOfLinearExtrusion::*)() const) static_cast<const Adaptor3d_Surface & (GeomAdaptor_HSurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_HSurfaceOfLinearExtrusion::Surface),
             R"#(Returns a reference to the Surface inside the HSurface. This is redefined from HSurface, cannot be inline.)#" )
        .def("ChangeSurface",
             (GeomAdaptor_SurfaceOfLinearExtrusion & (GeomAdaptor_HSurfaceOfLinearExtrusion::*)() ) static_cast<GeomAdaptor_SurfaceOfLinearExtrusion & (GeomAdaptor_HSurfaceOfLinearExtrusion::*)() >(&GeomAdaptor_HSurfaceOfLinearExtrusion::ChangeSurface),
             R"#(Returns the surface used to create the GenHSurface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomAdaptor_HSurfaceOfLinearExtrusion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomAdaptor_HSurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_HSurfaceOfLinearExtrusion::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomAdaptor_HSurfaceOfLinearExtrusion::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomAdaptor_HSurfaceOfLinearExtrusion::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<GeomAdaptor_HCurve ,opencascade::handle<GeomAdaptor_HCurve>  , GeomAdaptor_GHCurve >>(m.attr("GeomAdaptor_HCurve"))
        .def(py::init<  >()  )
        .def(py::init< const GeomAdaptor_Curve & >()  , py::arg("AS") )
        .def(py::init< const opencascade::handle<Geom_Curve> & >()  , py::arg("S") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UFirst"),  py::arg("ULast") )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomAdaptor_HCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomAdaptor_HCurve::*)() const>(&GeomAdaptor_HCurve::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomAdaptor_HCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomAdaptor_HCurve::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<GeomAdaptor_SurfaceOfLinearExtrusion ,std::unique_ptr<GeomAdaptor_SurfaceOfLinearExtrusion>  , GeomAdaptor_Surface >>(m.attr("GeomAdaptor_SurfaceOfLinearExtrusion"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const gp_Dir & >()  , py::arg("C"),  py::arg("V") )
        .def("Load",
             (void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) ) static_cast<void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const opencascade::handle<Adaptor3d_HCurve> &  ) >(&GeomAdaptor_SurfaceOfLinearExtrusion::Load),
             R"#(Changes the Curve)#"  , py::arg("C"))
        .def("Load",
             (void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const gp_Dir &  ) ) static_cast<void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const gp_Dir &  ) >(&GeomAdaptor_SurfaceOfLinearExtrusion::Load),
             R"#(Changes the Direction)#"  , py::arg("V"))
        .def("FirstUParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::FirstUParameter),
             R"#(None)#" )
        .def("LastUParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::LastUParameter),
             R"#(None)#" )
        .def("FirstVParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::FirstVParameter),
             R"#(None)#" )
        .def("LastVParameter",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::LastVParameter),
             R"#(None)#" )
        .def("UContinuity",
             (GeomAbs_Shape (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<GeomAbs_Shape (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::UContinuity),
             R"#(None)#" )
        .def("VContinuity",
             (GeomAbs_Shape (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<GeomAbs_Shape (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::VContinuity),
             R"#(Return CN.)#" )
        .def("NbUIntervals",
             (Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::NbUIntervals),
             R"#(Returns the number of U intervals for continuity <S>. May be one if UContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("NbVIntervals",
             (Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::NbVIntervals),
             R"#(Returns the number of V intervals for continuity <S>. May be one if VContinuity(me) >= <S>)#"  , py::arg("S"))
        .def("UIntervals",
             (void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::UIntervals),
             R"#(Returns the intervals with the requested continuity in the U direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("VIntervals",
             (void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (GeomAdaptor_SurfaceOfLinearExtrusion::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::VIntervals),
             R"#(Returns the intervals with the requested continuity in the V direction.)#"  , py::arg("T"),  py::arg("S"))
        .def("UTrim",
             (opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::UTrim),
             R"#(Returns a surface trimmed in the U direction equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("VTrim",
             (opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::VTrim),
             R"#(Returns a surface trimmed in the V direction between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion. If <First> >= <Last>)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("IsUClosed",
             (Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::IsVClosed),
             R"#(None)#" )
        .def("IsUPeriodic",
             (Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::IsUPeriodic),
             R"#(None)#" )
        .def("UPeriod",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::UPeriod),
             R"#(None)#" )
        .def("IsVPeriodic",
             (Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::IsVPeriodic),
             R"#(None)#" )
        .def("VPeriod",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::VPeriod),
             R"#(None)#" )
        .def("UResolution",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::UResolution),
             R"#(Returns the parametric U resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("VResolution",
             (Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const) static_cast<Standard_Real (GeomAdaptor_SurfaceOfLinearExtrusion::*)( const Standard_Real  ) const>(&GeomAdaptor_SurfaceOfLinearExtrusion::VResolution),
             R"#(Returns the parametric V resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_SurfaceType (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<GeomAbs_SurfaceType (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::GetType),
             R"#(Returns the type of the surface : Plane, Cylinder, Cone, Sphere, Torus, BezierSurface, BSplineSurface, SurfaceOfRevolution, SurfaceOfExtrusion, OtherSurface)#" )
        .def("Plane",
             (gp_Pln (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<gp_Pln (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::Plane),
             R"#(None)#" )
        .def("Cylinder",
             (gp_Cylinder (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<gp_Cylinder (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::Cylinder),
             R"#(None)#" )
        .def("Cone",
             (gp_Cone (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<gp_Cone (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::Cone),
             R"#(None)#" )
        .def("Sphere",
             (gp_Sphere (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<gp_Sphere (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::Sphere),
             R"#(None)#" )
        .def("Torus",
             (gp_Torus (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<gp_Torus (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::Torus),
             R"#(None)#" )
        .def("UDegree",
             (Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::UDegree),
             R"#(None)#" )
        .def("NbUPoles",
             (Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Integer (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::NbUPoles),
             R"#(None)#" )
        .def("IsURational",
             (Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::IsURational),
             R"#(None)#" )
        .def("IsVRational",
             (Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<Standard_Boolean (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::IsVRational),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<opencascade::handle<Geom_BezierSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<opencascade::handle<Geom_BSplineSurface> (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::BSpline),
             R"#(None)#" )
        .def("AxeOfRevolution",
             (gp_Ax1 (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<gp_Ax1 (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::AxeOfRevolution),
             R"#(None)#" )
        .def("Direction",
             (gp_Dir (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<gp_Dir (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::Direction),
             R"#(None)#" )
        .def("BasisCurve",
             (opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const) static_cast<opencascade::handle<Adaptor3d_HCurve> (GeomAdaptor_SurfaceOfLinearExtrusion::*)() const>(&GeomAdaptor_SurfaceOfLinearExtrusion::BasisCurve),
             R"#(None)#" )
;


    static_cast<py::class_<GeomAdaptor_GHSurface ,opencascade::handle<GeomAdaptor_GHSurface>  , Adaptor3d_HSurface >>(m.attr("GeomAdaptor_GHSurface"))
        .def(py::init<  >()  )
        .def(py::init< const GeomAdaptor_Surface & >()  , py::arg("S") )
        .def("Set",
             (void (GeomAdaptor_GHSurface::*)( const GeomAdaptor_Surface &  ) ) static_cast<void (GeomAdaptor_GHSurface::*)( const GeomAdaptor_Surface &  ) >(&GeomAdaptor_GHSurface::Set),
             R"#(Sets the field of the GenHSurface.)#"  , py::arg("S"))
        .def("Surface",
             (const Adaptor3d_Surface & (GeomAdaptor_GHSurface::*)() const) static_cast<const Adaptor3d_Surface & (GeomAdaptor_GHSurface::*)() const>(&GeomAdaptor_GHSurface::Surface),
             R"#(Returns a reference to the Surface inside the HSurface. This is redefined from HSurface, cannot be inline.)#" )
        .def("ChangeSurface",
             (GeomAdaptor_Surface & (GeomAdaptor_GHSurface::*)() ) static_cast<GeomAdaptor_Surface & (GeomAdaptor_GHSurface::*)() >(&GeomAdaptor_GHSurface::ChangeSurface),
             R"#(Returns the surface used to create the GenHSurface.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomAdaptor_GHSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomAdaptor_GHSurface::*)() const>(&GeomAdaptor_GHSurface::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomAdaptor_GHSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomAdaptor_GHSurface::get_type_descriptor),
                    R"#(None)#" )
;

    register_default_constructor<GeomAdaptor ,std::unique_ptr<GeomAdaptor>>(m,"GeomAdaptor");

    static_cast<py::class_<GeomAdaptor ,std::unique_ptr<GeomAdaptor>  >>(m.attr("GeomAdaptor"))
        .def_static("MakeCurve_s",
                    (opencascade::handle<Geom_Curve> (*)( const Adaptor3d_Curve &  ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const Adaptor3d_Curve &  ) >(&GeomAdaptor::MakeCurve),
                    R"#(Inherited from GHCurve. Provides a curve handled by reference. Build a Geom_Curve using the informations from the Curve from Adaptor3d)#"  , py::arg("C"))
        .def_static("MakeSurface_s",
                    (opencascade::handle<Geom_Surface> (*)( const Adaptor3d_Surface & ,  const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom_Surface> (*)( const Adaptor3d_Surface & ,  const Standard_Boolean  ) >(&GeomAdaptor::MakeSurface),
                    R"#(Build a Geom_Surface using the informations from the Surface from Adaptor3d)#"  , py::arg("theS"),  py::arg("theTrimFlag")=static_cast<const Standard_Boolean>(Standard_True))
;


    static_cast<py::class_<GeomAdaptor_HSurface ,opencascade::handle<GeomAdaptor_HSurface>  , GeomAdaptor_GHSurface >>(m.attr("GeomAdaptor_HSurface"))
        .def(py::init<  >()  )
        .def(py::init< const GeomAdaptor_Surface & >()  , py::arg("AS") )
        .def(py::init< const opencascade::handle<Geom_Surface> & >()  , py::arg("S") )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UFirst"),  py::arg("ULast"),  py::arg("VFirst"),  py::arg("VLast"),  py::arg("TolU")=static_cast<const Standard_Real>(0.0),  py::arg("TolV")=static_cast<const Standard_Real>(0.0) )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (GeomAdaptor_HSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (GeomAdaptor_HSurface::*)() const>(&GeomAdaptor_HSurface::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&GeomAdaptor_HSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&GeomAdaptor_HSurface::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/GeomAdaptor_SurfaceOfRevolution.hxx
// ./opencascade/GeomAdaptor_SurfaceOfLinearExtrusion.hxx
// ./opencascade/GeomAdaptor_HSurfaceOfRevolution.hxx
// ./opencascade/GeomAdaptor_HSurfaceOfLinearExtrusion.hxx
// ./opencascade/GeomAdaptor_Surface.hxx
// ./opencascade/GeomAdaptor.hxx
// ./opencascade/GeomAdaptor_Curve.hxx
// ./opencascade/GeomAdaptor_HCurve.hxx
// ./opencascade/GeomAdaptor_GHCurve.hxx
// ./opencascade/GeomAdaptor_GHSurface.hxx
// ./opencascade/GeomAdaptor_HSurface.hxx

// operators

// register typdefs
// ./opencascade/GeomAdaptor_SurfaceOfRevolution.hxx
// ./opencascade/GeomAdaptor_SurfaceOfLinearExtrusion.hxx
// ./opencascade/GeomAdaptor_HSurfaceOfRevolution.hxx
// ./opencascade/GeomAdaptor_HSurfaceOfLinearExtrusion.hxx
// ./opencascade/GeomAdaptor_Surface.hxx
// ./opencascade/GeomAdaptor.hxx
// ./opencascade/GeomAdaptor_Curve.hxx
// ./opencascade/GeomAdaptor_HCurve.hxx
// ./opencascade/GeomAdaptor_GHCurve.hxx
// ./opencascade/GeomAdaptor_GHSurface.hxx
// ./opencascade/GeomAdaptor_HSurface.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
