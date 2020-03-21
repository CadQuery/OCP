
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <math_FunctionSetRoot.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Cone.hxx>
#include <gp_Vec.hxx>
#include <gp_XYZ.hxx>
#include <IntPatch_Point.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <math_Vector.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_ALine.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntPatch_Point.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_RLine.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Standard_DomainError.hxx>
#include <IntPatch_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Standard_OutOfRange.hxx>

// module includes
#include <IntPatch_ALine.hxx>
#include <IntPatch_ALineToWLine.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <IntPatch_CSFunction.hxx>
#include <IntPatch_CurvIntSurf.hxx>
#include <IntPatch_GLine.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_ImpImpIntersection.hxx>
#include <IntPatch_ImpPrmIntersection.hxx>
#include <IntPatch_InterferencePolyhedron.hxx>
#include <IntPatch_Intersection.hxx>
#include <IntPatch_IType.hxx>
#include <IntPatch_Line.hxx>
#include <IntPatch_LineConstructor.hxx>
#include <IntPatch_Point.hxx>
#include <IntPatch_PointLine.hxx>
#include <IntPatch_PolyArc.hxx>
#include <IntPatch_Polygo.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <IntPatch_PolyhedronTool.hxx>
#include <IntPatch_PolyLine.hxx>
#include <IntPatch_PrmPrmIntersection.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_RstInt.hxx>
#include <IntPatch_SearchPnt.hxx>
#include <IntPatch_SequenceOfIWLineOfTheIWalking.hxx>
#include <IntPatch_SequenceOfLine.hxx>
#include <IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx>
#include <IntPatch_SequenceOfPoint.hxx>
#include <IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx>
#include <IntPatch_SpecialPoints.hxx>
#include <IntPatch_SpecPntType.hxx>
#include <IntPatch_TheIWalking.hxx>
#include <IntPatch_TheIWLineOfTheIWalking.hxx>
#include <IntPatch_ThePathPointOfTheSOnBounds.hxx>
#include <IntPatch_TheSearchInside.hxx>
#include <IntPatch_TheSegmentOfTheSOnBounds.hxx>
#include <IntPatch_TheSOnBounds.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_WLineTool.hxx>

// template related includes
// ./opencascade/IntPatch_SequenceOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfIWLineOfTheIWalking.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfLine.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntPatch_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntPatch", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IntPatch_IType>(m, "IntPatch_IType",R"#(None)#")
        .value("IntPatch_Lin",IntPatch_IType::IntPatch_Lin)
        .value("IntPatch_Circle",IntPatch_IType::IntPatch_Circle)
        .value("IntPatch_Ellipse",IntPatch_IType::IntPatch_Ellipse)
        .value("IntPatch_Parabola",IntPatch_IType::IntPatch_Parabola)
        .value("IntPatch_Hyperbola",IntPatch_IType::IntPatch_Hyperbola)
        .value("IntPatch_Analytic",IntPatch_IType::IntPatch_Analytic)
        .value("IntPatch_Walking",IntPatch_IType::IntPatch_Walking)
        .value("IntPatch_Restriction",IntPatch_IType::IntPatch_Restriction).export_values();
    py::enum_<IntPatch_SpecPntType>(m, "IntPatch_SpecPntType",R"#(This enum describe the different kinds of special (singular) points of Surface-Surface intersection algorithm. Such as pole of sphere, apex of cone, point on U- or V-seam etc.)#")
        .value("IntPatch_SPntNone",IntPatch_SpecPntType::IntPatch_SPntNone)
        .value("IntPatch_SPntSeamU",IntPatch_SpecPntType::IntPatch_SPntSeamU)
        .value("IntPatch_SPntSeamV",IntPatch_SpecPntType::IntPatch_SPntSeamV)
        .value("IntPatch_SPntSeamUV",IntPatch_SpecPntType::IntPatch_SPntSeamUV)
        .value("IntPatch_SPntPoleSeamU",IntPatch_SpecPntType::IntPatch_SPntPoleSeamU)
        .value("IntPatch_SPntPole",IntPatch_SpecPntType::IntPatch_SPntPole).export_values();

//Python trampoline classes
    class Py_IntPatch_Polygo : public IntPatch_Polygo{
    public:
        using IntPatch_Polygo::IntPatch_Polygo;


        // public pure virtual
        Standard_Integer NbPoints() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IntPatch_Polygo,NbPoints,) };
        gp_Pnt2d Point(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,IntPatch_Polygo,Point,Index) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IntPatch_PointLine : public IntPatch_PointLine{
    public:
        using IntPatch_PointLine::IntPatch_PointLine;


        // public pure virtual
        void AddVertex(const IntPatch_Point & Pnt,const Standard_Boolean theIsPrepend) override { PYBIND11_OVERLOAD_PURE(void,IntPatch_PointLine,AddVertex,Pnt,theIsPrepend) };
        Standard_Integer NbPnts() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IntPatch_PointLine,NbPnts,) };
        Standard_Integer NbVertex() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IntPatch_PointLine,NbVertex,) };
        const IntSurf_PntOn2S & Point(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(const IntSurf_PntOn2S &,IntPatch_PointLine,Point,Index) };
        const IntPatch_Point & Vertex(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(const IntPatch_Point &,IntPatch_PointLine,Vertex,Index) };
        IntPatch_Point & ChangeVertex(const Standard_Integer Index) override { PYBIND11_OVERLOAD_PURE(IntPatch_Point &,IntPatch_PointLine,ChangeVertex,Index) };
        void ClearVertexes() override { PYBIND11_OVERLOAD_PURE(void,IntPatch_PointLine,ClearVertexes,) };
        void RemoveVertex(const Standard_Integer theIndex) override { PYBIND11_OVERLOAD_PURE(void,IntPatch_PointLine,RemoveVertex,theIndex) };
        opencascade::handle<IntSurf_LineOn2S> Curve() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<IntSurf_LineOn2S>,IntPatch_PointLine,Curve,) };
        Standard_Boolean IsOutSurf1Box(const gp_Pnt2d & P1) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IntPatch_PointLine,IsOutSurf1Box,P1) };
        Standard_Boolean IsOutSurf2Box(const gp_Pnt2d & P2) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IntPatch_PointLine,IsOutSurf2Box,P2) };
        Standard_Boolean IsOutBox(const gp_Pnt & P) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IntPatch_PointLine,IsOutBox,P) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<IntPatch_Point>(m,"IntPatch_SequenceOfPoint");
    preregister_template_NCollection_Sequence<opencascade::handle<IntPatch_TheIWLineOfTheIWalking> >(m,"IntPatch_SequenceOfIWLineOfTheIWalking");
    preregister_template_NCollection_Sequence<IntPatch_ThePathPointOfTheSOnBounds>(m,"IntPatch_SequenceOfPathPointOfTheSOnBounds");
    preregister_template_NCollection_Sequence<IntPatch_TheSegmentOfTheSOnBounds>(m,"IntPatch_SequenceOfSegmentOfTheSOnBounds");
    preregister_template_NCollection_Sequence<opencascade::handle<IntPatch_Line> >(m,"IntPatch_SequenceOfLine");

// classes forward declarations only
    py::class_<IntPatch_ALineToWLine , shared_ptr<IntPatch_ALineToWLine> >(m,"IntPatch_ALineToWLine",R"#(None)#");
    py::class_<IntPatch_ArcFunction , shared_ptr<IntPatch_ArcFunction> , math_FunctionWithDerivative>(m,"IntPatch_ArcFunction",R"#(None)#");
    py::class_<IntPatch_CSFunction , shared_ptr<IntPatch_CSFunction> , math_FunctionSetWithDerivatives>(m,"IntPatch_CSFunction",R"#(this function is associated to the intersection between a curve on surface and a surface .)#");
    py::class_<IntPatch_CurvIntSurf , shared_ptr<IntPatch_CurvIntSurf> >(m,"IntPatch_CurvIntSurf",R"#(None)#");
    py::class_<IntPatch_HCurve2dTool , shared_ptr<IntPatch_HCurve2dTool> >(m,"IntPatch_HCurve2dTool",R"#(None)#");
    py::class_<IntPatch_HInterTool , shared_ptr<IntPatch_HInterTool> >(m,"IntPatch_HInterTool",R"#(Tool for the intersection between 2 surfaces. Regroupe pour l instant les methodes hors Adaptor3d...)#");
    py::class_<IntPatch_ImpImpIntersection , shared_ptr<IntPatch_ImpImpIntersection> >(m,"IntPatch_ImpImpIntersection",R"#(Implementation of the intersection between two quadric patches : Plane, Cone, Cylinder or Sphere.)#");
    py::class_<IntPatch_ImpPrmIntersection , shared_ptr<IntPatch_ImpPrmIntersection> >(m,"IntPatch_ImpPrmIntersection",R"#(Implementation of the intersection between a natural quadric patch : Plane, Cone, Cylinder or Sphere and a bi-parametrised surface.)#");
    py::class_<IntPatch_InterferencePolyhedron , shared_ptr<IntPatch_InterferencePolyhedron> , Intf_Interference>(m,"IntPatch_InterferencePolyhedron",R"#(Computes the interference between two polyhedra or the self interference of a polyhedron. Points of intersection, polylines of intersection and zones of tangence.)#");
    py::class_<IntPatch_Intersection , shared_ptr<IntPatch_Intersection> >(m,"IntPatch_Intersection",R"#(This class provides a generic algorithm to intersect 2 surfaces.)#");
    py::class_<IntPatch_Line ,opencascade::handle<IntPatch_Line> , Standard_Transient>(m,"IntPatch_Line",R"#(Definition of an intersection line between two surfaces. A line may be either geometric : line, circle, ellipse, parabola, hyperbola, as defined in the class GLine, or analytic, as defined in the class ALine, or defined by a set of points (coming from a walking algorithm) as defined in the class WLine.Definition of an intersection line between two surfaces. A line may be either geometric : line, circle, ellipse, parabola, hyperbola, as defined in the class GLine, or analytic, as defined in the class ALine, or defined by a set of points (coming from a walking algorithm) as defined in the class WLine.Definition of an intersection line between two surfaces. A line may be either geometric : line, circle, ellipse, parabola, hyperbola, as defined in the class GLine, or analytic, as defined in the class ALine, or defined by a set of points (coming from a walking algorithm) as defined in the class WLine.)#");
    py::class_<IntPatch_LineConstructor , shared_ptr<IntPatch_LineConstructor> >(m,"IntPatch_LineConstructor",R"#(The intersections algorithms compute the intersection on two surfaces and return the intersections lines as IntPatch_Line.)#");
    py::class_<IntPatch_Point , shared_ptr<IntPatch_Point> >(m,"IntPatch_Point",R"#(Definition of an intersection point between two surfaces. Such a point is contains geometrical informations (see the Value method) and logical informations.)#");
    py::class_<IntPatch_Polygo , shared_ptr<IntPatch_Polygo>,Py_IntPatch_Polygo , Intf_Polygon2d>(m,"IntPatch_Polygo",R"#(None)#");
    py::class_<IntPatch_Polyhedron , shared_ptr<IntPatch_Polyhedron> >(m,"IntPatch_Polyhedron",R"#(This class provides a linear approximation of the PSurface. preview a constructor on a zone of a surface)#");
    py::class_<IntPatch_PolyhedronTool , shared_ptr<IntPatch_PolyhedronTool> >(m,"IntPatch_PolyhedronTool",R"#(Describe the signature of a polyedral surface with only triangular facets and the necessary informations to compute the interferences.)#");
    py::class_<IntPatch_PrmPrmIntersection , shared_ptr<IntPatch_PrmPrmIntersection> >(m,"IntPatch_PrmPrmIntersection",R"#(Implementation of the Intersection between two bi-parametrised surfaces.)#");
    py::class_<IntPatch_PrmPrmIntersection_T3Bits , shared_ptr<IntPatch_PrmPrmIntersection_T3Bits> >(m,"IntPatch_PrmPrmIntersection_T3Bits",R"#(None)#");
    py::class_<IntPatch_RstInt , shared_ptr<IntPatch_RstInt> >(m,"IntPatch_RstInt",R"#(trouver les points d intersection entre la ligne de cheminement et les arcs de restriction)#");
    py::class_<IntPatch_SpecialPoints , shared_ptr<IntPatch_SpecialPoints> >(m,"IntPatch_SpecialPoints",R"#(None)#");
    py::class_<IntPatch_TheIWLineOfTheIWalking ,opencascade::handle<IntPatch_TheIWLineOfTheIWalking> , Standard_Transient>(m,"IntPatch_TheIWLineOfTheIWalking",R"#()#");
    py::class_<IntPatch_TheIWalking , shared_ptr<IntPatch_TheIWalking> >(m,"IntPatch_TheIWalking",R"#(None)#");
    py::class_<IntPatch_ThePathPointOfTheSOnBounds , shared_ptr<IntPatch_ThePathPointOfTheSOnBounds> >(m,"IntPatch_ThePathPointOfTheSOnBounds",R"#(None)#");
    py::class_<IntPatch_TheSOnBounds , shared_ptr<IntPatch_TheSOnBounds> >(m,"IntPatch_TheSOnBounds",R"#(None)#");
    py::class_<IntPatch_TheSearchInside , shared_ptr<IntPatch_TheSearchInside> >(m,"IntPatch_TheSearchInside",R"#(None)#");
    py::class_<IntPatch_TheSegmentOfTheSOnBounds , shared_ptr<IntPatch_TheSegmentOfTheSOnBounds> >(m,"IntPatch_TheSegmentOfTheSOnBounds",R"#(None)#");
    py::class_<IntPatch_TheSurfFunction , shared_ptr<IntPatch_TheSurfFunction> , math_FunctionSetWithDerivatives>(m,"IntPatch_TheSurfFunction",R"#(None)#");
    py::class_<IntPatch_WLineTool , shared_ptr<IntPatch_WLineTool> >(m,"IntPatch_WLineTool",R"#(IntPatch_WLineTool provides set of static methods related to walking lines.)#");
    py::class_<IntPatch_ALine ,opencascade::handle<IntPatch_ALine> , IntPatch_Line>(m,"IntPatch_ALine",R"#(Implementation of an intersection line described by a parametrized curve.Implementation of an intersection line described by a parametrized curve.Implementation of an intersection line described by a parametrized curve.)#");
    py::class_<IntPatch_GLine ,opencascade::handle<IntPatch_GLine> , IntPatch_Line>(m,"IntPatch_GLine",R"#(Implementation of an intersection line represented by a conic.Implementation of an intersection line represented by a conic.Implementation of an intersection line represented by a conic.)#");
    py::class_<IntPatch_PointLine ,opencascade::handle<IntPatch_PointLine>,Py_IntPatch_PointLine , IntPatch_Line>(m,"IntPatch_PointLine",R"#(Definition of an intersection line between two surfaces. A line defined by a set of points (e.g. coming from a walking algorithm) as defined in the class WLine or RLine (Restriction line).Definition of an intersection line between two surfaces. A line defined by a set of points (e.g. coming from a walking algorithm) as defined in the class WLine or RLine (Restriction line).)#");
    py::class_<IntPatch_PolyArc , shared_ptr<IntPatch_PolyArc> , IntPatch_Polygo>(m,"IntPatch_PolyArc",R"#(None)#");
    py::class_<IntPatch_PolyLine , shared_ptr<IntPatch_PolyLine> , IntPatch_Polygo>(m,"IntPatch_PolyLine",R"#(None)#");
    py::class_<IntPatch_RLine ,opencascade::handle<IntPatch_RLine> , IntPatch_PointLine>(m,"IntPatch_RLine",R"#(Implementation of an intersection line described by a restriction line on one of the surfaces.Implementation of an intersection line described by a restriction line on one of the surfaces.Implementation of an intersection line described by a restriction line on one of the surfaces.)#");
    py::class_<IntPatch_WLine ,opencascade::handle<IntPatch_WLine> , IntPatch_PointLine>(m,"IntPatch_WLine",R"#(Definition of set of points as a result of the intersection between 2 parametrised patches.Definition of set of points as a result of the intersection between 2 parametrised patches.Definition of set of points as a result of the intersection between 2 parametrised patches.)#");

};

// user-defined post-inclusion per module

// user-defined post
