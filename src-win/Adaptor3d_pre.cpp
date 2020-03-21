
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_Curve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <gp_Ax1.hxx>
#include <gp_Dir.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_ConstructionError.hxx>
#include <Adaptor2d_HLine2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>

// module includes
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_CurveOnSurfacePtr.hxx>
#include <Adaptor3d_CurvePtr.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HIsoCurve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_InterFunc.hxx>
#include <Adaptor3d_IsoCurve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_SurfacePtr.hxx>
#include <Adaptor3d_TopolTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Adaptor3d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Adaptor3d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_Adaptor3d_HCurve : public Adaptor3d_HCurve{
    public:
        using Adaptor3d_HCurve::Adaptor3d_HCurve;


        // public pure virtual
        const Adaptor3d_Curve & Curve() const  override { PYBIND11_OVERLOAD_PURE(const Adaptor3d_Curve &,Adaptor3d_HCurve,Curve,) };
        Adaptor3d_Curve & GetCurve() override { PYBIND11_OVERLOAD_PURE(Adaptor3d_Curve &,Adaptor3d_HCurve,GetCurve,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Adaptor3d_HSurface : public Adaptor3d_HSurface{
    public:
        using Adaptor3d_HSurface::Adaptor3d_HSurface;


        // public pure virtual
        const Adaptor3d_Surface & Surface() const  override { PYBIND11_OVERLOAD_PURE(const Adaptor3d_Surface &,Adaptor3d_HSurface,Surface,) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<Adaptor3d_Curve , shared_ptr<Adaptor3d_Curve> >(m,"Adaptor3d_Curve",R"#(Root class for 3D curves on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve and those required of the curve by algorithms which use it. Two derived concrete classes are provided: - GeomAdaptor_Curve for a curve from the Geom package - Adaptor3d_CurveOnSurface for a curve lying on a surface from the Geom package.)#");
    py::class_<Adaptor3d_HCurve ,opencascade::handle<Adaptor3d_HCurve>,Py_Adaptor3d_HCurve , Standard_Transient>(m,"Adaptor3d_HCurve",R"#(Root class for 3D curves manipulated by handles, on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve and those required of the curve by algorithms which use it. Two derived concrete classes are provided: - GeomAdaptor_HCurve for a curve from the Geom package - Adaptor3d_HCurveOnSurface for a curve lying on a surface from the Geom package.Root class for 3D curves manipulated by handles, on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve and those required of the curve by algorithms which use it. Two derived concrete classes are provided: - GeomAdaptor_HCurve for a curve from the Geom package - Adaptor3d_HCurveOnSurface for a curve lying on a surface from the Geom package.Root class for 3D curves manipulated by handles, on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve and those required of the curve by algorithms which use it. Two derived concrete classes are provided: - GeomAdaptor_HCurve for a curve from the Geom package - Adaptor3d_HCurveOnSurface for a curve lying on a surface from the Geom package.)#");
    py::class_<Adaptor3d_HSurface ,opencascade::handle<Adaptor3d_HSurface>,Py_Adaptor3d_HSurface , Standard_Transient>(m,"Adaptor3d_HSurface",R"#(Root class for surfaces manipulated by handles, on which geometric algorithms work. An adapted surface is an interface between the services provided by a surface and those required of the surface by algorithms which use it. A derived concrete class is provided: GeomAdaptor_HSurface for a surface from the Geom package.Root class for surfaces manipulated by handles, on which geometric algorithms work. An adapted surface is an interface between the services provided by a surface and those required of the surface by algorithms which use it. A derived concrete class is provided: GeomAdaptor_HSurface for a surface from the Geom package.Root class for surfaces manipulated by handles, on which geometric algorithms work. An adapted surface is an interface between the services provided by a surface and those required of the surface by algorithms which use it. A derived concrete class is provided: GeomAdaptor_HSurface for a surface from the Geom package.)#");
    py::class_<Adaptor3d_HSurfaceTool , shared_ptr<Adaptor3d_HSurfaceTool> >(m,"Adaptor3d_HSurfaceTool",R"#(None)#");
    py::class_<Adaptor3d_HVertex ,opencascade::handle<Adaptor3d_HVertex> , Standard_Transient>(m,"Adaptor3d_HVertex",R"#()#");
    py::class_<Adaptor3d_InterFunc , shared_ptr<Adaptor3d_InterFunc> , math_FunctionWithDerivative>(m,"Adaptor3d_InterFunc",R"#(Used to find the points U(t) = U0 or V(t) = V0 in order to determine the Cn discontinuities of an Adpator_CurveOnSurface relativly to the discontinuities of the surface. Used to find the roots of the functions)#");
    py::class_<Adaptor3d_Surface , shared_ptr<Adaptor3d_Surface> >(m,"Adaptor3d_Surface",R"#(Root class for surfaces on which geometric algorithms work. An adapted surface is an interface between the services provided by a surface and those required of the surface by algorithms which use it. A derived concrete class is provided: GeomAdaptor_Surface for a surface from the Geom package. The Surface class describes the standard behaviour of a surface for generic algorithms.)#");
    py::class_<Adaptor3d_TopolTool ,opencascade::handle<Adaptor3d_TopolTool> , Standard_Transient>(m,"Adaptor3d_TopolTool",R"#(This class provides a default topological tool, based on the Umin,Vmin,Umax,Vmax of an HSurface from Adaptor3d. All methods and fields may be redefined when inheriting from this class. This class is used to instantiate algorithmes as Intersection, outlines,...This class provides a default topological tool, based on the Umin,Vmin,Umax,Vmax of an HSurface from Adaptor3d. All methods and fields may be redefined when inheriting from this class. This class is used to instantiate algorithmes as Intersection, outlines,...This class provides a default topological tool, based on the Umin,Vmin,Umax,Vmax of an HSurface from Adaptor3d. All methods and fields may be redefined when inheriting from this class. This class is used to instantiate algorithmes as Intersection, outlines,...)#");
    py::class_<Adaptor3d_CurveOnSurface , shared_ptr<Adaptor3d_CurveOnSurface> , Adaptor3d_Curve>(m,"Adaptor3d_CurveOnSurface",R"#(An interface between the services provided by a curve lying on a surface from the package Geom and those required of the curve by algorithms which use it. The curve is defined as a 2D curve from the Geom2d package, in the parametric space of the surface.)#");
    py::class_<Adaptor3d_HCurveOnSurface ,opencascade::handle<Adaptor3d_HCurveOnSurface> , Adaptor3d_HCurve>(m,"Adaptor3d_HCurveOnSurface",R"#()#");
    py::class_<Adaptor3d_HIsoCurve ,opencascade::handle<Adaptor3d_HIsoCurve> , Adaptor3d_HCurve>(m,"Adaptor3d_HIsoCurve",R"#()#");
    py::class_<Adaptor3d_IsoCurve , shared_ptr<Adaptor3d_IsoCurve> , Adaptor3d_Curve>(m,"Adaptor3d_IsoCurve",R"#(Defines an isoparametric curve on a surface. The type of isoparametric curve (U or V) is defined with the enumeration IsoType from GeomAbs if NoneIso is given an error is raised.)#");

};

// user-defined post-inclusion per module

// user-defined post
