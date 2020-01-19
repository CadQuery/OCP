
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_BSplineCurve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeConstruct_Curve.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <ShapeConstruct_MakeTriangulation.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <gp_Pnt2d.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ShapeConstruct.hxx>
#include <ShapeConstruct_Curve.hxx>
#include <ShapeConstruct_MakeTriangulation.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeConstruct(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeConstruct"));


//Python trampoline classes

// classes

    register_default_constructor<ShapeConstruct , shared_ptr<ShapeConstruct>>(m,"ShapeConstruct");

    static_cast<py::class_<ShapeConstruct , shared_ptr<ShapeConstruct>  >>(m.attr("ShapeConstruct"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ConvertCurveToBSpline_s",
                    (opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&ShapeConstruct::ConvertCurveToBSpline),
                    R"#(Tool for wire triangulation)#"  , py::arg("C3D"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol3d"),  py::arg("Continuity"),  py::arg("MaxSegments"),  py::arg("MaxDegree"))
        .def_static("ConvertCurveToBSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&ShapeConstruct::ConvertCurveToBSpline),
                    R"#(None)#"  , py::arg("C2D"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol2d"),  py::arg("Continuity"),  py::arg("MaxSegments"),  py::arg("MaxDegree"))
        .def_static("ConvertSurfaceToBSpline_s",
                    (opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&ShapeConstruct::ConvertSurfaceToBSpline),
                    R"#(None)#"  , py::arg("surf"),  py::arg("UF"),  py::arg("UL"),  py::arg("VF"),  py::arg("VL"),  py::arg("Tol3d"),  py::arg("Continuity"),  py::arg("MaxSegments"),  py::arg("MaxDegree"))
        .def_static("JoinPCurves_s",
                    (Standard_Boolean (*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TopTools_HSequenceOfShape> & ,  const TopoDS_Face & ,  TopoDS_Edge &  ) >(&ShapeConstruct::JoinPCurves),
                    R"#(join pcurves of the <theEdge> on the <theFace> try to use pcurves from originas edges <theEdges> Returns false if cannot join pcurves)#"  , py::arg("theEdges"),  py::arg("theFace"),  py::arg("theEdge"))
        .def_static("JoinCurves_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Curve> & ,  const TopAbs_Orientation ,  const TopAbs_Orientation ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  opencascade::handle<Geom_Curve> & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const opencascade::handle<Geom_Curve> & ,  const TopAbs_Orientation ,  const TopAbs_Orientation ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  opencascade::handle<Geom_Curve> & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&ShapeConstruct::JoinCurves),
                    R"#(Method for joininig curves 3D. Parameters : c3d1,ac3d2 - initial curves Orient1, Orient2 - initial edges orientations. first1,last1,first2,last2 - parameters for trimming curves (re-calculate with account of orientation edges) c3dOut - result curve isRev1,isRev2 - out parameters indicative on possible errors. Return value : True - if curves were joined successfully, else - False.)#"  , py::arg("c3d1"),  py::arg("ac3d2"),  py::arg("Orient1"),  py::arg("Orient2"),  py::arg("first1"),  py::arg("last1"),  py::arg("first2"),  py::arg("last2"),  py::arg("c3dOut"),  py::arg("isRev1"),  py::arg("isRev2"))
        .def_static("JoinCurves_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const TopAbs_Orientation ,  const TopAbs_Orientation ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Boolean & ,  Standard_Boolean & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> & ,  const TopAbs_Orientation ,  const TopAbs_Orientation ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real & ,  opencascade::handle<Geom2d_Curve> & ,  Standard_Boolean & ,  Standard_Boolean & ,  const Standard_Boolean  ) >(&ShapeConstruct::JoinCurves),
                    R"#(Method for joininig curves 3D. Parameters : c3d1,ac3d2 - initial curves Orient1, Orient2 - initial edges orientations. first1,last1,first2,last2 - parameters for trimming curves (re-calculate with account of orientation edges) c3dOut - result curve isRev1,isRev2 - out parameters indicative on possible errors. isError - input parameter indicative possible errors due to that one from edges have one vertex Return value : True - if curves were joined successfully, else - False.)#"  , py::arg("c2d1"),  py::arg("ac2d2"),  py::arg("Orient1"),  py::arg("Orient2"),  py::arg("first1"),  py::arg("last1"),  py::arg("first2"),  py::arg("last2"),  py::arg("c2dOut"),  py::arg("isRev1"),  py::arg("isRev2"),  py::arg("isError")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

    register_default_constructor<ShapeConstruct_Curve , shared_ptr<ShapeConstruct_Curve>>(m,"ShapeConstruct_Curve");

    static_cast<py::class_<ShapeConstruct_Curve , shared_ptr<ShapeConstruct_Curve>  >>(m.attr("ShapeConstruct_Curve"))
    // methods
        .def("AdjustCurve",
             (Standard_Boolean (ShapeConstruct_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (ShapeConstruct_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Boolean ,  const Standard_Boolean  ) const>(&ShapeConstruct_Curve::AdjustCurve),
             R"#(Modifies a curve in order to make its bounds confused with given points. Works only on lines and B-Splines, returns True in this case, else returns False. For line considers both bounding points, for B-Splines only specified.)#"  , py::arg("C3D"),  py::arg("P1"),  py::arg("P2"),  py::arg("take1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("take2")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AdjustCurveSegment",
             (Standard_Boolean (ShapeConstruct_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<Standard_Boolean (ShapeConstruct_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) const>(&ShapeConstruct_Curve::AdjustCurveSegment),
             R"#(Modifies a curve in order to make its bounds confused with given points. Works only on lines and B-Splines.)#"  , py::arg("C3D"),  py::arg("P1"),  py::arg("P2"),  py::arg("U1"),  py::arg("U2"))
        .def("AdjustCurve2d",
             (Standard_Boolean (ShapeConstruct_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Boolean ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (ShapeConstruct_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Boolean ,  const Standard_Boolean  ) const>(&ShapeConstruct_Curve::AdjustCurve2d),
             R"#(Modifies a curve in order to make its bounds confused with given points. Works only on lines and B-Splines, returns True in this case, else returns False.)#"  , py::arg("C2D"),  py::arg("P1"),  py::arg("P2"),  py::arg("take1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("take2")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ConvertToBSpline",
             (opencascade::handle<Geom_BSplineCurve> (ShapeConstruct_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Geom_BSplineCurve> (ShapeConstruct_Curve::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ShapeConstruct_Curve::ConvertToBSpline),
             R"#(Converts a curve of any type (only part from first to last) to bspline. The method of conversion depends on the type of original curve: BSpline -> C.Segment(first,last) Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last) Conic and Other -> Approx_Curve3d(C[first,last],prec,C1,9,1000))#"  , py::arg("C"),  py::arg("first"),  py::arg("last"),  py::arg("prec"))
        .def("ConvertToBSpline",
             (opencascade::handle<Geom2d_BSplineCurve> (ShapeConstruct_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Geom2d_BSplineCurve> (ShapeConstruct_Curve::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ShapeConstruct_Curve::ConvertToBSpline),
             R"#(Converts a curve of any type (only part from first to last) to bspline. The method of conversion depends on the type of original curve: BSpline -> C.Segment(first,last) Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last) Conic and Other -> Approx_Curve2d(C[first,last],prec,C1,9,1000))#"  , py::arg("C"),  py::arg("first"),  py::arg("last"),  py::arg("prec"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FixKnots_s",
                    (Standard_Boolean (*)( opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<Standard_Boolean (*)( opencascade::handle<TColStd_HArray1OfReal> &  ) >(&ShapeConstruct_Curve::FixKnots),
                    R"#(None)#"  , py::arg("knots"))
        .def_static("FixKnots_s",
                    (Standard_Boolean (*)( NCollection_Array1<Standard_Real> &  ) ) static_cast<Standard_Boolean (*)( NCollection_Array1<Standard_Real> &  ) >(&ShapeConstruct_Curve::FixKnots),
                    R"#(Fix bspline knots to ensure that there is enough gap between neighbouring values Returns True if something fixed (by shifting knot))#"  , py::arg("knots"))
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ShapeConstruct_MakeTriangulation , shared_ptr<ShapeConstruct_MakeTriangulation>  , BRepBuilderAPI_MakeShape >>(m.attr("ShapeConstruct_MakeTriangulation"))
        .def(py::init<  const NCollection_Array1<gp_Pnt> &,const Standard_Real >()  , py::arg("pnts"),  py::arg("prec")=static_cast<const Standard_Real>(0.0) )
        .def(py::init< const TopoDS_Wire &,const Standard_Real >()  , py::arg("wire"),  py::arg("prec")=static_cast<const Standard_Real>(0.0) )
    // methods
        .def("Build",
             (void (ShapeConstruct_MakeTriangulation::*)() ) static_cast<void (ShapeConstruct_MakeTriangulation::*)() >(&ShapeConstruct_MakeTriangulation::Build),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (ShapeConstruct_MakeTriangulation::*)() const) static_cast<Standard_Boolean (ShapeConstruct_MakeTriangulation::*)() const>(&ShapeConstruct_MakeTriangulation::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<ShapeConstruct_ProjectCurveOnSurface ,opencascade::handle<ShapeConstruct_ProjectCurveOnSurface>  , Standard_Transient >>(m.attr("ShapeConstruct_ProjectCurveOnSurface"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) ) static_cast<void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real  ) >(&ShapeConstruct_ProjectCurveOnSurface::Init),
             R"#(Initializes the object with all necessary parameters, i.e. surface and precision)#"  , py::arg("surf"),  py::arg("preci"))
        .def("Init",
             (void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<ShapeAnalysis_Surface> & ,  const Standard_Real  ) ) static_cast<void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<ShapeAnalysis_Surface> & ,  const Standard_Real  ) >(&ShapeConstruct_ProjectCurveOnSurface::Init),
             R"#(Initializes the object with all necessary parameters, i.e. surface and precision)#"  , py::arg("surf"),  py::arg("preci"))
        .def("SetSurface",
             (void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<Geom_Surface> &  ) >(&ShapeConstruct_ProjectCurveOnSurface::SetSurface),
             R"#(Loads a surface (in the form of Geom_Surface) to project on)#"  , py::arg("surf"))
        .def("SetSurface",
             (void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<ShapeAnalysis_Surface> &  ) ) static_cast<void (ShapeConstruct_ProjectCurveOnSurface::*)( const opencascade::handle<ShapeAnalysis_Surface> &  ) >(&ShapeConstruct_ProjectCurveOnSurface::SetSurface),
             R"#(Loads a surface (in the form of ShapeAnalysis_Surface) to project on)#"  , py::arg("surf"))
        .def("SetPrecision",
             (void (ShapeConstruct_ProjectCurveOnSurface::*)( const Standard_Real  ) ) static_cast<void (ShapeConstruct_ProjectCurveOnSurface::*)( const Standard_Real  ) >(&ShapeConstruct_ProjectCurveOnSurface::SetPrecision),
             R"#(Sets value for current precision)#"  , py::arg("preci"))
        .def("BuildCurveMode",
             (Standard_Boolean & (ShapeConstruct_ProjectCurveOnSurface::*)() ) static_cast<Standard_Boolean & (ShapeConstruct_ProjectCurveOnSurface::*)() >(&ShapeConstruct_ProjectCurveOnSurface::BuildCurveMode),
             R"#(Returns (modifiable) the build-curve-3d mode, by default False If True, if the projected curve has been recomputed by interpolation, the 3d curve is also rebuild by interpolation)#" )
        .def("AdjustOverDegenMode",
             (Standard_Integer & (ShapeConstruct_ProjectCurveOnSurface::*)() ) static_cast<Standard_Integer & (ShapeConstruct_ProjectCurveOnSurface::*)() >(&ShapeConstruct_ProjectCurveOnSurface::AdjustOverDegenMode),
             R"#(Returns (modifiable) the flag specifying to which side of parametrical space adjust part of pcurve which lies on seam. This is required in very rare case when 3d curve which is to be projected goes partly along the seam on the closed surface with singularity (e.g. sphere), goes through the degenerated point and paerly lies on internal area of surface.)#" )
        .def("Status",
             (Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( const ShapeExtend_Status  ) const) static_cast<Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( const ShapeExtend_Status  ) const>(&ShapeConstruct_ProjectCurveOnSurface::Status),
             R"#(Returns the status of last Peform)#"  , py::arg("theStatus"))
        .def("Perform",
             (Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&ShapeConstruct_ProjectCurveOnSurface::Perform),
             R"#(Computes the projection of 3d curve onto a surface using the specialized algorithm. Returns False if projector fails, otherwise, if pcurve computed successfully, returns True. The output curve 2D is guaranteed to be same-parameter with input curve 3D on the interval [First, Last]. If the output curve lies on a direct line the infinite line is returned, in the case same-parameter condition is satisfied. TolFirst and TolLast are the tolerances at the ends of input curve 3D.)#"  , py::arg("c3d"),  py::arg("First"),  py::arg("Last"),  py::arg("c2d"),  py::arg("TolFirst")=static_cast<const Standard_Real>(- 1),  py::arg("TolLast")=static_cast<const Standard_Real>(- 1))
        .def("PerformByProjLib",
             (Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom2d_Curve> & ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (ShapeConstruct_ProjectCurveOnSurface::*)( opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  opencascade::handle<Geom2d_Curve> & ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) >(&ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib),
             R"#(Computes the projection of 3d curve onto a surface using the standard algorithm from ProjLib. Returns False if standard projector fails or raises an exception or cuts the curve by parametrical bounds of the surface. Else, if pcurve computed successfully, returns True. The continuity, maxdeg and nbinterval are parameters of call to Approx_CurveOnSurface. If nbinterval is equal to -1 (default), this value is computed depending on source 3d curve and surface.)#"  , py::arg("c3d"),  py::arg("First"),  py::arg("Last"),  py::arg("c2d"),  py::arg("continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C1),  py::arg("maxdeg")=static_cast<const Standard_Integer>(12),  py::arg("nbinterval")=static_cast<const Standard_Integer>(- 1))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeConstruct_ProjectCurveOnSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeConstruct_ProjectCurveOnSurface::*)() const>(&ShapeConstruct_ProjectCurveOnSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeConstruct_ProjectCurveOnSurface::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeConstruct_ProjectCurveOnSurface::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/ShapeConstruct_MakeTriangulation.hxx
// ./opencascade/ShapeConstruct.hxx
// ./opencascade/ShapeConstruct_Curve.hxx
// ./opencascade/ShapeConstruct_ProjectCurveOnSurface.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
