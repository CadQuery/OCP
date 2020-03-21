
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Standard_OutOfRange.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <IntPatch_ALine.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <StdFail_NotDone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <math_FunctionSetRoot.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Standard_DomainError.hxx>
#include <IntPatch_Line.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Cone.hxx>
#include <gp_Vec.hxx>
#include <gp_XYZ.hxx>
#include <IntPatch_Point.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <math_Vector.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <math_Matrix.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <math_Matrix.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_RLine.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntPatch_Point.hxx>
#include <Adaptor3d_HSurface.hxx>

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
// ./opencascade/IntPatch_SequenceOfIWLineOfTheIWalking.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfLine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntPatch(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntPatch"));


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

// classes


    static_cast<py::class_<IntPatch_ALineToWLine , shared_ptr<IntPatch_ALineToWLine> >>(m.attr("IntPatch_ALineToWLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_ArcFunction , shared_ptr<IntPatch_ArcFunction> , math_FunctionWithDerivative>>(m.attr("IntPatch_ArcFunction"))
    // constructors
    // custom constructors
    // methods
        .def("SetQuadric",
             (void (IntPatch_ArcFunction::*)( const IntSurf_Quadric & ) ) static_cast<void (IntPatch_ArcFunction::*)( const IntSurf_Quadric & ) >(&IntPatch_ArcFunction::SetQuadric),
             R"#(None)#"  , py::arg("Q"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("A"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("S"))
        .def("Value",
             (Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real , Standard_Real & ) >(&IntPatch_ArcFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real , Standard_Real & ) >(&IntPatch_ArcFunction::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (IntPatch_ArcFunction::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&IntPatch_ArcFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("GetStateNumber",
             (Standard_Integer (IntPatch_ArcFunction::*)() ) static_cast<Standard_Integer (IntPatch_ArcFunction::*)() >(&IntPatch_ArcFunction::GetStateNumber),
             R"#(None)#" )
        .def("Valpoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer ) const>(&IntPatch_ArcFunction::Valpoint),
             R"#(None)#"  , py::arg("Index"))
        .def("Quadric",
             (const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const) static_cast<const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Quadric),
             R"#(None)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Arc),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Surface),
             R"#(None)#" )
        .def("LastComputedPoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)() const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::LastComputedPoint),
             R"#(Returns the point, which has been computed while the last calling Value() method)#" )
        .def("Valpoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)( const Standard_Integer ) const>(&IntPatch_ArcFunction::Valpoint),
             R"#(None)#"  , py::arg("Index"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("A"))
        .def("Set",
             (void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<void (IntPatch_ArcFunction::*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntPatch_ArcFunction::Set),
             R"#(None)#"  , py::arg("S"))
        .def("SetQuadric",
             (void (IntPatch_ArcFunction::*)( const IntSurf_Quadric & ) ) static_cast<void (IntPatch_ArcFunction::*)( const IntSurf_Quadric & ) >(&IntPatch_ArcFunction::SetQuadric),
             R"#(None)#"  , py::arg("Q"))
        .def("Quadric",
             (const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const) static_cast<const IntSurf_Quadric & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Quadric),
             R"#(None)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Arc),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::Surface),
             R"#(None)#" )
        .def("LastComputedPoint",
             (const gp_Pnt & (IntPatch_ArcFunction::*)() const) static_cast<const gp_Pnt & (IntPatch_ArcFunction::*)() const>(&IntPatch_ArcFunction::LastComputedPoint),
             R"#(Returns the point, which has been computed while the last calling Value() method)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_CSFunction , shared_ptr<IntPatch_CSFunction> , math_FunctionSetWithDerivatives>>(m.attr("IntPatch_CSFunction"))
    // constructors
    // custom constructors
    // methods
        .def("NbVariables",
             (Standard_Integer (IntPatch_CSFunction::*)() const) static_cast<Standard_Integer (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (IntPatch_CSFunction::*)() const) static_cast<Standard_Integer (IntPatch_CSFunction::*)() const>(&IntPatch_CSFunction::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & , math_Vector & ) >(&IntPatch_CSFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & , math_Matrix & ) >(&IntPatch_CSFunction::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (IntPatch_CSFunction::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&IntPatch_CSFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_CurvIntSurf , shared_ptr<IntPatch_CurvIntSurf> >>(m.attr("IntPatch_CurvIntSurf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntPatch_HCurve2dTool , shared_ptr<IntPatch_HCurve2dTool>>(m,"IntPatch_HCurve2dTool");

    static_cast<py::class_<IntPatch_HCurve2dTool , shared_ptr<IntPatch_HCurve2dTool> >>(m.attr("IntPatch_HCurve2dTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const GeomAbs_Shape ) >(&IntPatch_HCurve2dTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&IntPatch_HCurve2dTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&IntPatch_HCurve2dTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & ) >(&IntPatch_HCurve2dTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) >(&IntPatch_HCurve2dTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&IntPatch_HCurve2dTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&IntPatch_HCurve2dTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Integer ) >(&IntPatch_HCurve2dTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&IntPatch_HCurve2dTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_HCurve2dTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_HInterTool , shared_ptr<IntPatch_HInterTool> >>(m.attr("IntPatch_HInterTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SingularOnUMin_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntPatch_HInterTool::SingularOnUMin),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnUMax_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntPatch_HInterTool::SingularOnUMax),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnVMin_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntPatch_HInterTool::SingularOnVMin),
                    R"#(None)#"  , py::arg("S"))
        .def_static("SingularOnVMax_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntPatch_HInterTool::SingularOnVMax),
                    R"#(None)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_ImpImpIntersection , shared_ptr<IntPatch_ImpImpIntersection> >>(m.attr("IntPatch_ImpImpIntersection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("GetStatus",
             (IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const) static_cast<IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::GetStatus),
             R"#(Returns status)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i.e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpImpIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpImpIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("GetStatus",
             (IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const) static_cast<IntPatch_ImpImpIntersection::IntStatus (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::GetStatus),
             R"#(Returns status)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i.e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpImpIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpImpIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpImpIntersection::*)() const>(&IntPatch_ImpImpIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpImpIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpImpIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_ImpPrmIntersection , shared_ptr<IntPatch_ImpPrmIntersection> >>(m.attr("IntPatch_ImpPrmIntersection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpPrmIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpPrmIntersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_ImpPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_ImpPrmIntersection::*)() const>(&IntPatch_ImpPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_ImpPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_ImpPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_InterferencePolyhedron , shared_ptr<IntPatch_InterferencePolyhedron> , Intf_Interference>>(m.attr("IntPatch_InterferencePolyhedron"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_Intersection , shared_ptr<IntPatch_Intersection> >>(m.attr("IntPatch_Intersection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i-e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer ) const>(&IntPatch_Intersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer ) const>(&IntPatch_Intersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("TangentFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::TangentFaces),
             R"#(Returns True if the two patches are considered as entirely tangent, i-e every restriction arc of one patch is inside the geometric base of the other patch.)#" )
        .def("OppositeFaces",
             (Standard_Boolean (IntPatch_Intersection::*)() const) static_cast<Standard_Boolean (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::OppositeFaces),
             R"#(Returns True when the TangentFaces returns True and the normal vectors evaluated at a point on the first and the second surface are opposite. The exception DomainError is raised if TangentFaces returns False.)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbPnts),
             R"#(Returns the number of "single" points.)#" )
        .def("Point",
             (const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_Intersection::*)( const Standard_Integer ) const>(&IntPatch_Intersection::Point),
             R"#(Returns the point of range Index. An exception is raised if Index<=0 or Index>NbPnt.)#"  , py::arg("Index"))
        .def("NbLines",
             (Standard_Integer (IntPatch_Intersection::*)() const) static_cast<Standard_Integer (IntPatch_Intersection::*)() const>(&IntPatch_Intersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_Intersection::*)( const Standard_Integer ) const>(&IntPatch_Intersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_Line ,opencascade::handle<IntPatch_Line> , Standard_Transient>>(m.attr("IntPatch_Line"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (IntPatch_Line::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IntPatch_Line::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&IntPatch_Line::SetValue),
             R"#(To set the values returned by IsUIsoS1,.... The default values are False.)#"  , py::arg("Uiso1"),  py::arg("Viso1"),  py::arg("Uiso2"),  py::arg("Viso2"))
        .def("ArcType",
             (IntPatch_IType (IntPatch_Line::*)() const) static_cast<IntPatch_IType (IntPatch_Line::*)() const>(&IntPatch_Line::ArcType),
             R"#(Returns the type of geometry 3d (Line, Circle, Parabola, Hyperbola, Ellipse, Analytic, Walking, Restriction))#" )
        .def("IsTangent",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsTangent),
             R"#(Returns TRUE if the intersection is a line of tangency between the 2 patches.)#" )
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS1),
             R"#(Returns the type of the transition of the line for the first surface. The transition is "constant" along the line. The transition is IN if the line is oriented in such a way that the system of vector (N1,N2,T) is right-handed, where N1 is the normal to the first surface at a point P, N2 is the normal to the second surface at a point P, T is the tangent to the intersection line at P. If the system of vector is left-handed, the transition is OUT. When N1 and N2 are colinear all along the intersection line, the transition will be - TOUCH, if it is possible to use the 2nd derivatives to determine the position of one surafce compared to the other (see Situation) - UNDECIDED otherwise.)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS2),
             R"#(Returns the type of the transition of the line for the second surface. The transition is "constant" along the line.)#" )
        .def("SituationS1",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS1),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the first patch compared to the second one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("SituationS2",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS2),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the second patch compared to the first one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("IsUIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS1),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the first patch.)#" )
        .def("IsVIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS1),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the first patch.)#" )
        .def("IsUIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS2),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the second patch.)#" )
        .def("IsVIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS2),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the second patch.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_Line::*)() const>(&IntPatch_Line::DynamicType),
             R"#(None)#" )
        .def("SetValue",
             (void (IntPatch_Line::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IntPatch_Line::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&IntPatch_Line::SetValue),
             R"#(To set the values returned by IsUIsoS1,.... The default values are False.)#"  , py::arg("Uiso1"),  py::arg("Viso1"),  py::arg("Uiso2"),  py::arg("Viso2"))
        .def("ArcType",
             (IntPatch_IType (IntPatch_Line::*)() const) static_cast<IntPatch_IType (IntPatch_Line::*)() const>(&IntPatch_Line::ArcType),
             R"#(Returns the type of geometry 3d (Line, Circle, Parabola, Hyperbola, Ellipse, Analytic, Walking, Restriction))#" )
        .def("IsTangent",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsTangent),
             R"#(Returns TRUE if the intersection is a line of tangency between the 2 patches.)#" )
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS1),
             R"#(Returns the type of the transition of the line for the first surface. The transition is "constant" along the line. The transition is IN if the line is oriented in such a way that the system of vector (N1,N2,T) is right-handed, where N1 is the normal to the first surface at a point P, N2 is the normal to the second surface at a point P, T is the tangent to the intersection line at P. If the system of vector is left-handed, the transition is OUT. When N1 and N2 are colinear all along the intersection line, the transition will be - TOUCH, if it is possible to use the 2nd derivatives to determine the position of one surafce compared to the other (see Situation) - UNDECIDED otherwise.)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (IntPatch_Line::*)() const) static_cast<IntSurf_TypeTrans (IntPatch_Line::*)() const>(&IntPatch_Line::TransitionOnS2),
             R"#(Returns the type of the transition of the line for the second surface. The transition is "constant" along the line.)#" )
        .def("SituationS1",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS1),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the first patch compared to the second one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("SituationS2",
             (IntSurf_Situation (IntPatch_Line::*)() const) static_cast<IntSurf_Situation (IntPatch_Line::*)() const>(&IntPatch_Line::SituationS2),
             R"#(Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of the second patch compared to the first one, when TransitionOnS1 or TransitionOnS2 returns TOUCH. Otherwise, an exception is raised.)#" )
        .def("IsUIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS1),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the first patch.)#" )
        .def("IsVIsoOnS1",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS1),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the first patch.)#" )
        .def("IsUIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsUIsoOnS2),
             R"#(Returns TRUE if the intersection is a U isoparametric curve on the second patch.)#" )
        .def("IsVIsoOnS2",
             (Standard_Boolean (IntPatch_Line::*)() const) static_cast<Standard_Boolean (IntPatch_Line::*)() const>(&IntPatch_Line::IsVIsoOnS2),
             R"#(Returns TRUE if the intersection is a V isoparametric curve on the second patch.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_Line::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_LineConstructor , shared_ptr<IntPatch_LineConstructor> >>(m.attr("IntPatch_LineConstructor"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_Point , shared_ptr<IntPatch_Point> >>(m.attr("IntPatch_Point"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetValue",
             (void (IntPatch_Point::*)( const gp_Pnt & ) ) static_cast<void (IntPatch_Point::*)( const gp_Pnt & ) >(&IntPatch_Point::SetValue),
             R"#(None)#"  , py::arg("Pt"))
        .def("SetValue",
             (void (IntPatch_Point::*)( const IntSurf_PntOn2S & ) ) static_cast<void (IntPatch_Point::*)( const IntSurf_PntOn2S & ) >(&IntPatch_Point::SetValue),
             R"#(Sets the value of <pt> member)#"  , py::arg("thePOn2S"))
        .def("SetTolerance",
             (void (IntPatch_Point::*)( const Standard_Real ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real ) >(&IntPatch_Point::SetTolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("SetParameters",
             (void (IntPatch_Point::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&IntPatch_Point::SetParameters),
             R"#(Sets the values of the parameters of the point on each surface.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("SetParameter",
             (void (IntPatch_Point::*)( const Standard_Real ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real ) >(&IntPatch_Point::SetParameter),
             R"#(Set the value of the parameter on the intersection line.)#"  , py::arg("Para"))
        .def("SetMultiple",
             (void (IntPatch_Point::*)( const Standard_Boolean ) ) static_cast<void (IntPatch_Point::*)( const Standard_Boolean ) >(&IntPatch_Point::SetMultiple),
             R"#(Sets (or unsets) the point as a point on several intersection line.)#"  , py::arg("IsMult"))
        .def("Value",
             (const gp_Pnt & (IntPatch_Point::*)() const) static_cast<const gp_Pnt & (IntPatch_Point::*)() const>(&IntPatch_Point::Value),
             R"#(Returns the intersection point (geometric information).)#" )
        .def("ParameterOnLine",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnLine),
             R"#(This method returns the parameter of the point on the intersection line. If the points does not belong to an intersection line, the value returned does not have any sens.)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::Tolerance),
             R"#(This method returns the fuzziness on the point.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsTangencyPoint),
             R"#(Returns True if the Point is a tangency point between the surfaces. If the Point is on one of the domain (IsOnDomS1 returns True or IsOnDomS2 returns True), an exception is raised.)#" )
        .def("IsMultiple",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsMultiple),
             R"#(Returns True if the point belongs to several intersection lines.)#" )
        .def("IsOnDomS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS1),
             R"#(Returns TRUE if the point is on a boundary of the domain of the first patch.)#" )
        .def("IsVertexOnS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS1),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS1",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS1),
             R"#(Returns the information about the point when it is on the domain of the first patch, i-e when the function IsVertexOnS1 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS1),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionLineArc1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc1),
             R"#(Returns the transition of the point on the intersection line with the arc on S1. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionOnS1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS1),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S1 returned by ArcOnS1(). The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("ParameterOnArc1",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc1),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("IsOnDomS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS2),
             R"#(Returns TRUE if the point is on a boundary of the domain of the second patch.)#" )
        .def("IsVertexOnS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS2),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS2",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS2),
             R"#(Returns the information about the point when it is on the domain of the second patch, i-e when the function IsVertexOnS2 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS2),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionLineArc2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc2),
             R"#(Returns the transition of the point on the intersection line with the arc on S2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionOnS2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS2),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S2 returned by ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("ParameterOnArc2",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc2),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("PntOn2S",
             (const IntSurf_PntOn2S & (IntPatch_Point::*)() const) static_cast<const IntSurf_PntOn2S & (IntPatch_Point::*)() const>(&IntPatch_Point::PntOn2S),
             R"#(Returns the PntOn2S (geometric Point and the parameters))#" )
        .def("SetValue",
             (void (IntPatch_Point::*)( const gp_Pnt & ) ) static_cast<void (IntPatch_Point::*)( const gp_Pnt & ) >(&IntPatch_Point::SetValue),
             R"#(None)#"  , py::arg("Pt"))
        .def("SetValue",
             (void (IntPatch_Point::*)( const IntSurf_PntOn2S & ) ) static_cast<void (IntPatch_Point::*)( const IntSurf_PntOn2S & ) >(&IntPatch_Point::SetValue),
             R"#(Sets the value of <pt> member)#"  , py::arg("thePOn2S"))
        .def("SetTolerance",
             (void (IntPatch_Point::*)( const Standard_Real ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real ) >(&IntPatch_Point::SetTolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("SetParameters",
             (void (IntPatch_Point::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&IntPatch_Point::SetParameters),
             R"#(Sets the values of the parameters of the point on each surface.)#"  , py::arg("U1"),  py::arg("V1"),  py::arg("U2"),  py::arg("V2"))
        .def("SetParameter",
             (void (IntPatch_Point::*)( const Standard_Real ) ) static_cast<void (IntPatch_Point::*)( const Standard_Real ) >(&IntPatch_Point::SetParameter),
             R"#(Set the value of the parameter on the intersection line.)#"  , py::arg("Para"))
        .def("SetMultiple",
             (void (IntPatch_Point::*)( const Standard_Boolean ) ) static_cast<void (IntPatch_Point::*)( const Standard_Boolean ) >(&IntPatch_Point::SetMultiple),
             R"#(Sets (or unsets) the point as a point on several intersection line.)#"  , py::arg("IsMult"))
        .def("Value",
             (const gp_Pnt & (IntPatch_Point::*)() const) static_cast<const gp_Pnt & (IntPatch_Point::*)() const>(&IntPatch_Point::Value),
             R"#(Returns the intersection point (geometric information).)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::Tolerance),
             R"#(This method returns the fuzziness on the point.)#" )
        .def("ParameterOnLine",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnLine),
             R"#(This method returns the parameter of the point on the intersection line. If the points does not belong to an intersection line, the value returned does not have any sens.)#" )
        .def("IsTangencyPoint",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsTangencyPoint),
             R"#(Returns True if the Point is a tangency point between the surfaces. If the Point is on one of the domain (IsOnDomS1 returns True or IsOnDomS2 returns True), an exception is raised.)#" )
        .def("IsMultiple",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsMultiple),
             R"#(Returns True if the point belongs to several intersection lines.)#" )
        .def("IsOnDomS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS1),
             R"#(Returns TRUE if the point is on a boundary of the domain of the first patch.)#" )
        .def("IsVertexOnS1",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS1),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS1",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS1),
             R"#(Returns the information about the point when it is on the domain of the first patch, i-e when the function IsVertexOnS1 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS1),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionLineArc1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc1),
             R"#(Returns the transition of the point on the intersection line with the arc on S1. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("TransitionOnS1",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS1),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S1 returned by ArcOnS1(). The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("ParameterOnArc1",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc1),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS1 returns False.)#" )
        .def("IsOnDomS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsOnDomS2),
             R"#(Returns TRUE if the point is on a boundary of the domain of the second patch.)#" )
        .def("IsVertexOnS2",
             (Standard_Boolean (IntPatch_Point::*)() const) static_cast<Standard_Boolean (IntPatch_Point::*)() const>(&IntPatch_Point::IsVertexOnS2),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS2",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_Point::*)() const>(&IntPatch_Point::VertexOnS2),
             R"#(Returns the information about the point when it is on the domain of the second patch, i-e when the function IsVertexOnS2 returns True. Otherwise, an exception is raised.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_Point::*)() const>(&IntPatch_Point::ArcOnS2),
             R"#(Returns the arc of restriction containing the vertex. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionLineArc2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionLineArc2),
             R"#(Returns the transition of the point on the intersection line with the arc on S2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("TransitionOnS2",
             (const IntSurf_Transition & (IntPatch_Point::*)() const) static_cast<const IntSurf_Transition & (IntPatch_Point::*)() const>(&IntPatch_Point::TransitionOnS2),
             R"#(Returns the transition between the intersection line returned by the method Line and the arc on S2 returned by ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("ParameterOnArc2",
             (Standard_Real (IntPatch_Point::*)() const) static_cast<Standard_Real (IntPatch_Point::*)() const>(&IntPatch_Point::ParameterOnArc2),
             R"#(Returns the parameter of the point on the arc returned by the method ArcOnS2. The exception DomainError is raised if IsOnDomS2 returns False.)#" )
        .def("PntOn2S",
             (const IntSurf_PntOn2S & (IntPatch_Point::*)() const) static_cast<const IntSurf_PntOn2S & (IntPatch_Point::*)() const>(&IntPatch_Point::PntOn2S),
             R"#(Returns the PntOn2S (geometric Point and the parameters))#" )
    // methods using call by reference i.s.o. return
        .def("ParametersOnS1",
             []( IntPatch_Point &self   ){ Standard_Real  U1; Standard_Real  V1; self.ParametersOnS1(U1,V1); return std::make_tuple(U1,V1); },
             R"#(Returns the parameters on the first surface of the point.)#" )
        .def("ParametersOnS2",
             []( IntPatch_Point &self   ){ Standard_Real  U2; Standard_Real  V2; self.ParametersOnS2(U2,V2); return std::make_tuple(U2,V2); },
             R"#(Returns the parameters on the second surface of the point.)#" )
        .def("Parameters",
             []( IntPatch_Point &self   ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; self.Parameters(U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
             R"#(Returns the parameters on the first and on the second surface of the point.)#" )
        .def("ParametersOnS1",
             []( IntPatch_Point &self   ){ Standard_Real  U1; Standard_Real  V1; self.ParametersOnS1(U1,V1); return std::make_tuple(U1,V1); },
             R"#(Returns the parameters on the first surface of the point.)#" )
        .def("ParametersOnS2",
             []( IntPatch_Point &self   ){ Standard_Real  U2; Standard_Real  V2; self.ParametersOnS2(U2,V2); return std::make_tuple(U2,V2); },
             R"#(Returns the parameters on the second surface of the point.)#" )
        .def("Parameters",
             []( IntPatch_Point &self   ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; self.Parameters(U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
             R"#(Returns the parameters on the first and on the second surface of the point.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_Polygo , shared_ptr<IntPatch_Polygo>,Py_IntPatch_Polygo , Intf_Polygon2d>>(m.attr("IntPatch_Polygo"))
    // constructors
    // custom constructors
    // methods
        .def("Error",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::Error),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_Polygo::*)() const) static_cast<Standard_Integer (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt2d (IntPatch_Polygo::*)( const Standard_Integer ) const) static_cast<gp_Pnt2d (IntPatch_Polygo::*)( const Standard_Integer ) const>(&IntPatch_Polygo::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("DeflectionOverEstimation",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::DeflectionOverEstimation),
             R"#(Returns the tolerance of the polygon.)#" )
        .def("NbSegments",
             (Standard_Integer (IntPatch_Polygo::*)() const) static_cast<Standard_Integer (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::NbSegments),
             R"#(Returns the number of Segments in the polyline.)#" )
        .def("Segment",
             (void (IntPatch_Polygo::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (IntPatch_Polygo::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const>(&IntPatch_Polygo::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
        .def("Error",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::Error),
             R"#(None)#" )
        .def("DeflectionOverEstimation",
             (Standard_Real (IntPatch_Polygo::*)() const) static_cast<Standard_Real (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::DeflectionOverEstimation),
             R"#(Returns the tolerance of the polygon.)#" )
        .def("NbSegments",
             (Standard_Integer (IntPatch_Polygo::*)() const) static_cast<Standard_Integer (IntPatch_Polygo::*)() const>(&IntPatch_Polygo::NbSegments),
             R"#(Returns the number of Segments in the polyline.)#" )
        .def("Segment",
             (void (IntPatch_Polygo::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (IntPatch_Polygo::*)( const Standard_Integer , gp_Pnt2d & , gp_Pnt2d & ) const>(&IntPatch_Polygo::Segment),
             R"#(Returns the points of the segment <Index> in the Polygon.)#"  , py::arg("theIndex"),  py::arg("theBegin"),  py::arg("theEnd"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_Polyhedron , shared_ptr<IntPatch_Polyhedron> >>(m.attr("IntPatch_Polyhedron"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntPatch_PolyhedronTool , shared_ptr<IntPatch_PolyhedronTool>>(m,"IntPatch_PolyhedronTool");

    static_cast<py::class_<IntPatch_PolyhedronTool , shared_ptr<IntPatch_PolyhedronTool> >>(m.attr("IntPatch_PolyhedronTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Bounding_s",
                    (const Bnd_Box & (*)( const IntPatch_Polyhedron & ) ) static_cast<const Bnd_Box & (*)( const IntPatch_Polyhedron & ) >(&IntPatch_PolyhedronTool::Bounding),
                    R"#(Give the bounding box of the Polyhedron.)#"  , py::arg("thePolyh"))
        .def_static("ComponentsBounding_s",
                    (const opencascade::handle<Bnd_HArray1OfBox> & (*)( const IntPatch_Polyhedron & ) ) static_cast<const opencascade::handle<Bnd_HArray1OfBox> & (*)( const IntPatch_Polyhedron & ) >(&IntPatch_PolyhedronTool::ComponentsBounding),
                    R"#(Give the array of boxes. The box <n> corresponding to the triangle <n>.)#"  , py::arg("thePolyh"))
        .def_static("DeflectionOverEstimation_s",
                    (Standard_Real (*)( const IntPatch_Polyhedron & ) ) static_cast<Standard_Real (*)( const IntPatch_Polyhedron & ) >(&IntPatch_PolyhedronTool::DeflectionOverEstimation),
                    R"#(Give the tolerance of the polygon.)#"  , py::arg("thePolyh"))
        .def_static("NbTriangles_s",
                    (Standard_Integer (*)( const IntPatch_Polyhedron & ) ) static_cast<Standard_Integer (*)( const IntPatch_Polyhedron & ) >(&IntPatch_PolyhedronTool::NbTriangles),
                    R"#(Give the number of triangles in this polyedral surface.)#"  , py::arg("thePolyh"))
        .def_static("Point_s",
                    (const gp_Pnt & (*)( const IntPatch_Polyhedron & , const Standard_Integer ) ) static_cast<const gp_Pnt & (*)( const IntPatch_Polyhedron & , const Standard_Integer ) >(&IntPatch_PolyhedronTool::Point),
                    R"#(Give the point of index i in the polyedral surface.)#"  , py::arg("thePolyh"),  py::arg("Index"))
        .def_static("TriConnex_s",
                    (Standard_Integer (*)( const IntPatch_Polyhedron & , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & ) ) static_cast<Standard_Integer (*)( const IntPatch_Polyhedron & , const Standard_Integer , const Standard_Integer , const Standard_Integer , Standard_Integer & , Standard_Integer & ) >(&IntPatch_PolyhedronTool::TriConnex),
                    R"#(Gives the addresse Tricon of the triangle connexe to the triangle of address Triang by the edge Pivot Pedge and the third point of this connexe triangle. When we are on a free edge TriCon==0 but the function return the value of the triangle in the other side of Pivot on the free edge. Used to turn around a vertex.)#"  , py::arg("thePolyh"),  py::arg("Triang"),  py::arg("Pivot"),  py::arg("Pedge"),  py::arg("TriCon"),  py::arg("OtherP"))
    // static methods using call by reference i.s.o. return
        .def_static("Triangle_s",
                    []( const IntPatch_Polyhedron & thePolyh,const Standard_Integer Index ){ Standard_Integer  P1; Standard_Integer  P2; Standard_Integer  P3; IntPatch_PolyhedronTool::Triangle(thePolyh,Index,P1,P2,P3); return std::make_tuple(P1,P2,P3); },
                    R"#(Give the indices of the 3 points of the triangle of address Index in the Polyhedron.)#"  , py::arg("thePolyh"),  py::arg("Index"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_PrmPrmIntersection , shared_ptr<IntPatch_PrmPrmIntersection> >>(m.attr("IntPatch_PrmPrmIntersection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("NbLines",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("Index"))
        .def("GrilleInteger",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection::GrilleInteger),
             R"#(None)#"  , py::arg("ix"),  py::arg("iy"),  py::arg("iz"))
        .def("DansGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection::DansGrille),
             R"#(None)#"  , py::arg("t"))
        .def("NbPointsGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbPointsGrille),
             R"#(None)#" )
        .def("CodeReject",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const>(&IntPatch_PrmPrmIntersection::CodeReject),
             R"#(None)#"  , py::arg("x1"),  py::arg("y1"),  py::arg("z1"),  py::arg("x2"),  py::arg("y2"),  py::arg("z2"),  py::arg("x3"),  py::arg("y3"),  py::arg("z3"))
        .def("NbLines",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbLines),
             R"#(Returns the number of intersection lines.)#" )
        .def("Line",
             (const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_Line> & (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection::Line),
             R"#(Returns the line of range Index. An exception is raised if Index<=0 or Index>NbLine.)#"  , py::arg("n"))
        .def("IsEmpty",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsEmpty),
             R"#(Returns true if the is no intersection.)#" )
        .def("IsDone",
             (Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Boolean (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::IsDone),
             R"#(Returns true if the calculus was succesfull.)#" )
        .def("GrilleInteger",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection::GrilleInteger),
             R"#(None)#"  , py::arg("ix"),  py::arg("iy"),  py::arg("iz"))
        .def("DansGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection::DansGrille),
             R"#(None)#"  , py::arg("t"))
        .def("NbPointsGrille",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)() const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)() const>(&IntPatch_PrmPrmIntersection::NbPointsGrille),
             R"#(None)#" )
        .def("CodeReject",
             (Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const>(&IntPatch_PrmPrmIntersection::CodeReject),
             R"#(None)#"  , py::arg("x0"),  py::arg("y0"),  py::arg("z0"),  py::arg("x1"),  py::arg("y1"),  py::arg("z1"),  py::arg("x"),  py::arg("y"),  py::arg("z"))
    // methods using call by reference i.s.o. return
        .def("IntegerGrille",
             []( IntPatch_PrmPrmIntersection &self , const Standard_Integer t ){ Standard_Integer  ix; Standard_Integer  iy; Standard_Integer  iz; self.IntegerGrille(t,ix,iy,iz); return std::make_tuple(ix,iy,iz); },
             R"#(None)#"  , py::arg("t"))
        .def("IntegerGrille",
             []( IntPatch_PrmPrmIntersection &self , const Standard_Integer tt ){ Standard_Integer  ix; Standard_Integer  iy; Standard_Integer  iz; self.IntegerGrille(tt,ix,iy,iz); return std::make_tuple(ix,iy,iz); },
             R"#(None)#"  , py::arg("tt"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_PrmPrmIntersection_T3Bits , shared_ptr<IntPatch_PrmPrmIntersection_T3Bits> >>(m.attr("IntPatch_PrmPrmIntersection_T3Bits"))
    // constructors
    // custom constructors
    // methods
        .def("Add",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) >(&IntPatch_PrmPrmIntersection_T3Bits::Add),
             R"#(None)#"  , py::arg("t"))
        .def("Val",
             (Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection_T3Bits::Val),
             R"#(None)#"  , py::arg("t"))
        .def("Raz",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) >(&IntPatch_PrmPrmIntersection_T3Bits::Raz),
             R"#(None)#"  , py::arg("t"))
        .def("Add",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) >(&IntPatch_PrmPrmIntersection_T3Bits::Add),
             R"#(None)#"  , py::arg("t"))
        .def("Val",
             (Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) const>(&IntPatch_PrmPrmIntersection_T3Bits::Val),
             R"#(None)#"  , py::arg("t"))
        .def("Raz",
             (void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) ) static_cast<void (IntPatch_PrmPrmIntersection_T3Bits::*)( const Standard_Integer ) >(&IntPatch_PrmPrmIntersection_T3Bits::Raz),
             R"#(None)#"  , py::arg("t"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntPatch_RstInt , shared_ptr<IntPatch_RstInt>>(m,"IntPatch_RstInt");

    static_cast<py::class_<IntPatch_RstInt , shared_ptr<IntPatch_RstInt> >>(m.attr("IntPatch_RstInt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntPatch_SpecialPoints , shared_ptr<IntPatch_SpecialPoints>>(m,"IntPatch_SpecialPoints");

    static_cast<py::class_<IntPatch_SpecialPoints , shared_ptr<IntPatch_SpecialPoints> >>(m.attr("IntPatch_SpecialPoints"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_TheIWLineOfTheIWalking ,opencascade::handle<IntPatch_TheIWLineOfTheIWalking> , Standard_Transient>>(m.attr("IntPatch_TheIWLineOfTheIWalking"))
    // constructors
    // custom constructors
    // methods
        .def("Cut",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ) >(&IntPatch_TheIWLineOfTheIWalking::Cut),
             R"#(Cut the line at the point of rank Index.)#"  , py::arg("Index"))
        .def("AddPoint",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const IntSurf_PntOn2S & ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const IntSurf_PntOn2S & ) >(&IntPatch_TheIWLineOfTheIWalking::AddPoint),
             R"#(Add a point in the line.)#"  , py::arg("P"))
        .def("AddStatusFirst",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusFirst),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasFirst"))
        .def("AddStatusFirst",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusFirst),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasLast"),  py::arg("Index"),  py::arg("P"))
        .def("AddStatusFirstLast",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusFirstLast),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasFirst"),  py::arg("HasLast"))
        .def("AddStatusLast",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusLast),
             R"#(None)#"  , py::arg("HasLast"))
        .def("AddStatusLast",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) >(&IntPatch_TheIWLineOfTheIWalking::AddStatusLast),
             R"#(None)#"  , py::arg("HasLast"),  py::arg("Index"),  py::arg("P"))
        .def("AddIndexPassing",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ) >(&IntPatch_TheIWLineOfTheIWalking::AddIndexPassing),
             R"#(associer a l 'indice du point sur la ligne l'indice du point passant dans l'iterateur de depart)#"  , py::arg("Index"))
        .def("SetTangentVector",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const gp_Vec & , const Standard_Integer ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const gp_Vec & , const Standard_Integer ) >(&IntPatch_TheIWLineOfTheIWalking::SetTangentVector),
             R"#(None)#"  , py::arg("V"),  py::arg("Index"))
        .def("SetTangencyAtBegining",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) >(&IntPatch_TheIWLineOfTheIWalking::SetTangencyAtBegining),
             R"#(None)#"  , py::arg("IsTangent"))
        .def("SetTangencyAtEnd",
             (void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) ) static_cast<void (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) >(&IntPatch_TheIWLineOfTheIWalking::SetTangencyAtEnd),
             R"#(None)#"  , py::arg("IsTangent"))
        .def("NbPoints",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::NbPoints),
             R"#(Returns the number of points of the line (including first point and end point : see HasLastPoint and HasFirstPoint).)#" )
        .def("Value",
             (const IntSurf_PntOn2S & (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_TheIWLineOfTheIWalking::*)( const Standard_Integer ) const>(&IntPatch_TheIWLineOfTheIWalking::Value),
             R"#(Returns the point of range Index. If index <= 0 or Index > NbPoints, an exception is raised.)#"  , py::arg("Index"))
        .def("Line",
             (const opencascade::handle<IntSurf_LineOn2S> & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const opencascade::handle<IntSurf_LineOn2S> & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::Line),
             R"#(Returns the LineOn2S contained in the walking line.)#" )
        .def("IsClosed",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::IsClosed),
             R"#(Returns True if the line is closed.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::HasFirstPoint),
             R"#(Returns True if the first point of the line is a marching point . when is HasFirstPoint==False ,the line begins on the natural bound of the surface.the line can be too long)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::HasLastPoint),
             R"#(Returns True if the end point of the line is a marching point (Point from IntWS). when is HasFirstPoint==False ,the line ends on the natural bound of the surface.the line can be too long.)#" )
        .def("FirstPoint",
             (const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::FirstPoint),
             R"#(Returns the first point of the line when it is a marching point. An exception is raised if HasFirstPoint returns False.)#" )
        .def("FirstPointIndex",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::FirstPointIndex),
             R"#(Returns the Index of first point of the line when it is a marching point.This index is the index in the PointStartIterator. An exception is raised if HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const IntSurf_PathPoint & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::LastPoint),
             R"#(Returns the last point of the line when it is a marching point. An exception is raised if HasLastPoint returns False.)#" )
        .def("LastPointIndex",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::LastPointIndex),
             R"#(Returns the index of last point of the line when it is a marching point.This index is the index in the PointStartIterator. An exception is raised if HasLastPoint returns False.)#" )
        .def("NbPassingPoint",
             (Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::NbPassingPoint),
             R"#(returns the number of points belonging to Pnts1 which are passing point.)#" )
        .def("TangentVector",
             (const gp_Vec & (IntPatch_TheIWLineOfTheIWalking::*)( Standard_Integer & ) const) static_cast<const gp_Vec & (IntPatch_TheIWLineOfTheIWalking::*)( Standard_Integer & ) const>(&IntPatch_TheIWLineOfTheIWalking::TangentVector),
             R"#(None)#"  , py::arg("Index"))
        .def("IsTangentAtBegining",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::IsTangentAtBegining),
             R"#(None)#" )
        .def("IsTangentAtEnd",
             (Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::IsTangentAtEnd),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_TheIWLineOfTheIWalking::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_TheIWLineOfTheIWalking::*)() const>(&IntPatch_TheIWLineOfTheIWalking::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("PassingPoint",
             []( IntPatch_TheIWLineOfTheIWalking &self , const Standard_Integer Index ){ Standard_Integer  IndexLine; Standard_Integer  IndexPnts; self.PassingPoint(Index,IndexLine,IndexPnts); return std::make_tuple(IndexLine,IndexPnts); },
             R"#(returns the index of the point belonging to the line which is associated to the passing point belonging to Pnts1 an exception is raised if Index > NbPassingPoint())#"  , py::arg("Index"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_TheIWLineOfTheIWalking::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IntPatch_TheIWLineOfTheIWalking::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_TheIWalking , shared_ptr<IntPatch_TheIWalking> >>(m.attr("IntPatch_TheIWalking"))
    // constructors
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (IntPatch_TheIWalking::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (IntPatch_TheIWalking::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&IntPatch_TheIWalking::SetTolerance),
             R"#(Deflection is the maximum deflection admitted between two consecutive points on a resulting polyline. Step is the maximum increment admitted between two consecutive points (in 2d space). Epsilon is the tolerance beyond which 2 points are confused)#"  , py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Step"))
        .def("IsDone",
             (Standard_Boolean (IntPatch_TheIWalking::*)() const) static_cast<Standard_Boolean (IntPatch_TheIWalking::*)() const>(&IntPatch_TheIWalking::IsDone),
             R"#(Returns true if the calculus was successful.)#" )
        .def("NbLines",
             (Standard_Integer (IntPatch_TheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWalking::*)() const>(&IntPatch_TheIWalking::NbLines),
             R"#(Returns the number of resulting polylines. An exception is raised if IsDone returns False.)#" )
        .def("Value",
             (const opencascade::handle<IntPatch_TheIWLineOfTheIWalking> & (IntPatch_TheIWalking::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IntPatch_TheIWLineOfTheIWalking> & (IntPatch_TheIWalking::*)( const Standard_Integer ) const>(&IntPatch_TheIWalking::Value),
             R"#(Returns the polyline of range Index. An exception is raised if IsDone is False. An exception is raised if Index<=0 or Index>NbLines.)#"  , py::arg("Index"))
        .def("NbSinglePnts",
             (Standard_Integer (IntPatch_TheIWalking::*)() const) static_cast<Standard_Integer (IntPatch_TheIWalking::*)() const>(&IntPatch_TheIWalking::NbSinglePnts),
             R"#(Returns the number of points belonging to Pnts on which no line starts or ends. An exception is raised if IsDone returns False.)#" )
        .def("SinglePnt",
             (const IntSurf_PathPoint & (IntPatch_TheIWalking::*)( const Standard_Integer ) const) static_cast<const IntSurf_PathPoint & (IntPatch_TheIWalking::*)( const Standard_Integer ) const>(&IntPatch_TheIWalking::SinglePnt),
             R"#(Returns the point of range Index . An exception is raised if IsDone returns False. An exception is raised if Index<=0 or Index > NbSinglePnts.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_ThePathPointOfTheSOnBounds , shared_ptr<IntPatch_ThePathPointOfTheSOnBounds> >>(m.attr("IntPatch_ThePathPointOfTheSOnBounds"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&IntPatch_ThePathPointOfTheSOnBounds::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("V"),  py::arg("A"),  py::arg("Parameter"))
        .def("SetValue",
             (void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<void (IntPatch_ThePathPointOfTheSOnBounds::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&IntPatch_ThePathPointOfTheSOnBounds::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("A"),  py::arg("Parameter"))
        .def("Value",
             (const gp_Pnt & (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<const gp_Pnt & (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Value),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Tolerance),
             R"#(None)#" )
        .def("IsNew",
             (Standard_Boolean (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::IsNew),
             R"#(None)#" )
        .def("Vertex",
             (const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Vertex),
             R"#(None)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Arc),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const) static_cast<Standard_Real (IntPatch_ThePathPointOfTheSOnBounds::*)() const>(&IntPatch_ThePathPointOfTheSOnBounds::Parameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_TheSOnBounds , shared_ptr<IntPatch_TheSOnBounds> >>(m.attr("IntPatch_TheSOnBounds"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("AllArcSolution",
             (Standard_Boolean (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::AllArcSolution),
             R"#(Returns true if all arc of the Arcs are solution (inside the surface). An exception is raised if IsDone returns False.)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Integer (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::NbPoints),
             R"#(Returns the number of resulting points. An exception is raised if IsDone returns False (NotDone).)#" )
        .def("Point",
             (const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer ) const) static_cast<const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer ) const>(&IntPatch_TheSOnBounds::Point),
             R"#(Returns the resulting point of range Index. The exception NotDone is raised if IsDone() returns False. The exception OutOfRange is raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
        .def("NbSegments",
             (Standard_Integer (IntPatch_TheSOnBounds::*)() const) static_cast<Standard_Integer (IntPatch_TheSOnBounds::*)() const>(&IntPatch_TheSOnBounds::NbSegments),
             R"#(Returns the number of the resulting segments. An exception is raised if IsDone returns False (NotDone).)#" )
        .def("Segment",
             (const IntPatch_TheSegmentOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer ) const) static_cast<const IntPatch_TheSegmentOfTheSOnBounds & (IntPatch_TheSOnBounds::*)( const Standard_Integer ) const>(&IntPatch_TheSOnBounds::Segment),
             R"#(Returns the resulting segment of range Index. The exception NotDone is raised if IsDone() returns False. The exception OutOfRange is raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_TheSearchInside , shared_ptr<IntPatch_TheSearchInside> >>(m.attr("IntPatch_TheSearchInside"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntPatch_TheSearchInside::*)() const) static_cast<Standard_Boolean (IntPatch_TheSearchInside::*)() const>(&IntPatch_TheSearchInside::IsDone),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_TheSearchInside::*)() const) static_cast<Standard_Integer (IntPatch_TheSearchInside::*)() const>(&IntPatch_TheSearchInside::NbPoints),
             R"#(Returns the number of points. The exception NotDone if raised if IsDone returns False.)#" )
        .def("Value",
             (const IntSurf_InteriorPoint & (IntPatch_TheSearchInside::*)( const Standard_Integer ) const) static_cast<const IntSurf_InteriorPoint & (IntPatch_TheSearchInside::*)( const Standard_Integer ) const>(&IntPatch_TheSearchInside::Value),
             R"#(Returns the point of range Index. The exception NotDone if raised if IsDone returns False. The exception OutOfRange if raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_TheSegmentOfTheSOnBounds , shared_ptr<IntPatch_TheSegmentOfTheSOnBounds> >>(m.attr("IntPatch_TheSegmentOfTheSOnBounds"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (IntPatch_TheSegmentOfTheSOnBounds::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (IntPatch_TheSegmentOfTheSOnBounds::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&IntPatch_TheSegmentOfTheSOnBounds::SetValue),
             R"#(Defines the concerned arc.)#"  , py::arg("A"))
        .def("Curve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::Curve),
             R"#(Returns the geometric curve on the surface 's domain which is solution.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::HasFirstPoint),
             R"#(Returns True if there is a vertex (ThePathPoint) defining the lowest valid parameter on the arc.)#" )
        .def("FirstPoint",
             (const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::FirstPoint),
             R"#(Returns the first point.)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<Standard_Boolean (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::HasLastPoint),
             R"#(Returns True if there is a vertex (ThePathPoint) defining the greatest valid parameter on the arc.)#" )
        .def("LastPoint",
             (const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const) static_cast<const IntPatch_ThePathPointOfTheSOnBounds & (IntPatch_TheSegmentOfTheSOnBounds::*)() const>(&IntPatch_TheSegmentOfTheSOnBounds::LastPoint),
             R"#(Returns the last point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_TheSurfFunction , shared_ptr<IntPatch_TheSurfFunction> , math_FunctionSetWithDerivatives>>(m.attr("IntPatch_TheSurfFunction"))
    // constructors
    // custom constructors
    // methods
        .def("Set",
             (void (IntPatch_TheSurfFunction::*)( const opencascade::handle<Adaptor3d_HSurface> & ) ) static_cast<void (IntPatch_TheSurfFunction::*)( const opencascade::handle<Adaptor3d_HSurface> & ) >(&IntPatch_TheSurfFunction::Set),
             R"#(None)#"  , py::arg("PS"))
        .def("SetImplicitSurface",
             (void (IntPatch_TheSurfFunction::*)( const IntSurf_Quadric & ) ) static_cast<void (IntPatch_TheSurfFunction::*)( const IntSurf_Quadric & ) >(&IntPatch_TheSurfFunction::SetImplicitSurface),
             R"#(None)#"  , py::arg("IS"))
        .def("Set",
             (void (IntPatch_TheSurfFunction::*)( const Standard_Real ) ) static_cast<void (IntPatch_TheSurfFunction::*)( const Standard_Real ) >(&IntPatch_TheSurfFunction::Set),
             R"#(None)#"  , py::arg("Tolerance"))
        .def("NbVariables",
             (Standard_Integer (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Integer (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::NbVariables),
             R"#(None)#" )
        .def("NbEquations",
             (Standard_Integer (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Integer (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::NbEquations),
             R"#(None)#" )
        .def("Value",
             (Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & , math_Vector & ) >(&IntPatch_TheSurfFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & , math_Matrix & ) >(&IntPatch_TheSurfFunction::Derivatives),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (IntPatch_TheSurfFunction::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&IntPatch_TheSurfFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Root",
             (Standard_Real (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Real (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::Root),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (IntPatch_TheSurfFunction::*)() const) static_cast<Standard_Real (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::Tolerance),
             R"#(Returns the value Tol so that if Abs(Func.Root())<Tol the function is considered null.)#" )
        .def("Point",
             (const gp_Pnt & (IntPatch_TheSurfFunction::*)() const) static_cast<const gp_Pnt & (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::Point),
             R"#(None)#" )
        .def("Direction3d",
             (const gp_Vec & (IntPatch_TheSurfFunction::*)() ) static_cast<const gp_Vec & (IntPatch_TheSurfFunction::*)() >(&IntPatch_TheSurfFunction::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (IntPatch_TheSurfFunction::*)() ) static_cast<const gp_Dir2d & (IntPatch_TheSurfFunction::*)() >(&IntPatch_TheSurfFunction::Direction2d),
             R"#(None)#" )
        .def("PSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_TheSurfFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::PSurface),
             R"#(None)#" )
        .def("ISurface",
             (const IntSurf_Quadric & (IntPatch_TheSurfFunction::*)() const) static_cast<const IntSurf_Quadric & (IntPatch_TheSurfFunction::*)() const>(&IntPatch_TheSurfFunction::ISurface),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntPatch_WLineTool , shared_ptr<IntPatch_WLineTool>>(m,"IntPatch_WLineTool");

    static_cast<py::class_<IntPatch_WLineTool , shared_ptr<IntPatch_WLineTool> >>(m.attr("IntPatch_WLineTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_ALine ,opencascade::handle<IntPatch_ALine> , IntPatch_Line>>(m.attr("IntPatch_ALine"))
    // constructors
    // custom constructors
    // methods
        .def("Replace",
             (void (IntPatch_ALine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_ALine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer ) >(&IntPatch_ALine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer ) >(&IntPatch_ALine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("FirstParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const>(&IntPatch_ALine::FirstParameter),
             R"#(Returns the first parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to FirstParamater. Otherwise, the parameter must be greater than FirstParameter.)#"  , py::arg("IsIncluded"))
        .def("LastParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const>(&IntPatch_ALine::LastParameter),
             R"#(Returns the last parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to LastParamater. Otherwise, the parameter must be less than LastParameter.)#"  , py::arg("IsIncluded"))
        .def("Value",
             (gp_Pnt (IntPatch_ALine::*)( const Standard_Real ) ) static_cast<gp_Pnt (IntPatch_ALine::*)( const Standard_Real ) >(&IntPatch_ALine::Value),
             R"#(Returns the point of parameter U on the analytic intersection line.)#"  , py::arg("U"))
        .def("D1",
             (Standard_Boolean (IntPatch_ALine::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<Standard_Boolean (IntPatch_ALine::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) >(&IntPatch_ALine::D1),
             R"#(Returns Standard_True when the derivative at parameter U is defined on the analytic intersection line. In that case, Du is the derivative. Returns Standard_False when it is not possible to evaluate the derivative. In both cases, P is the point at parameter U on the intersection.)#"  , py::arg("U"),  py::arg("P"),  py::arg("Du"))
        .def("FindParameter",
             (void (IntPatch_ALine::*)( const gp_Pnt & , NCollection_List<Standard_Real> & ) const) static_cast<void (IntPatch_ALine::*)( const gp_Pnt & , NCollection_List<Standard_Real> & ) const>(&IntPatch_ALine::FindParameter),
             R"#(Tries to find the parameters of the point P on the curve. If the method returns False, the "projection" is impossible. If the method returns True at least one parameter has been found. theParams is always sorted in ascending order.)#"  , py::arg("P"),  py::arg("theParams"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_ALine::*)() const) static_cast<Standard_Integer (IntPatch_ALine::*)() const>(&IntPatch_ALine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer ) const>(&IntPatch_ALine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer ) ) static_cast<IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer ) >(&IntPatch_ALine::ChangeVertex),
             R"#(Allows modifying the vertex with index theIndex on the line.)#"  , py::arg("theIndex"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_ALine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_ALine::*)() const>(&IntPatch_ALine::DynamicType),
             R"#(None)#" )
        .def("Replace",
             (void (IntPatch_ALine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_ALine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer ) >(&IntPatch_ALine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_ALine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_ALine::*)( const Standard_Integer ) >(&IntPatch_ALine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("FirstParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const>(&IntPatch_ALine::FirstParameter),
             R"#(Returns the first parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to FirstParamater. Otherwise, the parameter must be greater than FirstParameter.)#"  , py::arg("IsIncluded"))
        .def("LastParameter",
             (Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const) static_cast<Standard_Real (IntPatch_ALine::*)( Standard_Boolean & ) const>(&IntPatch_ALine::LastParameter),
             R"#(Returns the last parameter on the intersection line. If IsIncluded returns True, Value and D1 methods can be call with a parameter equal to LastParamater. Otherwise, the parameter must be less than LastParameter.)#"  , py::arg("IsIncluded"))
        .def("Value",
             (gp_Pnt (IntPatch_ALine::*)( const Standard_Real ) ) static_cast<gp_Pnt (IntPatch_ALine::*)( const Standard_Real ) >(&IntPatch_ALine::Value),
             R"#(Returns the point of parameter U on the analytic intersection line.)#"  , py::arg("U"))
        .def("D1",
             (Standard_Boolean (IntPatch_ALine::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) ) static_cast<Standard_Boolean (IntPatch_ALine::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) >(&IntPatch_ALine::D1),
             R"#(Returns Standard_True when the derivative at parameter U is defined on the analytic intersection line. In that case, Du is the derivative. Returns Standard_False when it is not possible to evaluate the derivative. In both cases, P is the point at parameter U on the intersection.)#"  , py::arg("U"),  py::arg("P"),  py::arg("Du"))
        .def("FindParameter",
             (void (IntPatch_ALine::*)( const gp_Pnt & , NCollection_List<Standard_Real> & ) const) static_cast<void (IntPatch_ALine::*)( const gp_Pnt & , NCollection_List<Standard_Real> & ) const>(&IntPatch_ALine::FindParameter),
             R"#(Tries to find the parameters of the point P on the curve. If the method returns False, the "projection" is impossible. If the method returns True at least one parameter has been found. theParams is always sorted in ascending order.)#"  , py::arg("theP"),  py::arg("theParams"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_ALine::*)() const) static_cast<Standard_Boolean (IntPatch_ALine::*)() const>(&IntPatch_ALine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_ALine::*)() const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)() const>(&IntPatch_ALine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_ALine::*)() const) static_cast<Standard_Integer (IntPatch_ALine::*)() const>(&IntPatch_ALine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_ALine::*)( const Standard_Integer ) const>(&IntPatch_ALine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_ALine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_GLine ,opencascade::handle<IntPatch_GLine> , IntPatch_Line>>(m.attr("IntPatch_GLine"))
    // constructors
    // custom constructors
    // methods
        .def("SetFirstPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer ) >(&IntPatch_GLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer ) >(&IntPatch_GLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Line",
             (gp_Lin (IntPatch_GLine::*)() const) static_cast<gp_Lin (IntPatch_GLine::*)() const>(&IntPatch_GLine::Line),
             R"#(Returns the Lin from gp corresponding to the intersection when ArcType returns IntPatch_Line.)#" )
        .def("Circle",
             (gp_Circ (IntPatch_GLine::*)() const) static_cast<gp_Circ (IntPatch_GLine::*)() const>(&IntPatch_GLine::Circle),
             R"#(Returns the Circ from gp corrsponding to the intersection when ArcType returns IntPatch_Circle.)#" )
        .def("Ellipse",
             (gp_Elips (IntPatch_GLine::*)() const) static_cast<gp_Elips (IntPatch_GLine::*)() const>(&IntPatch_GLine::Ellipse),
             R"#(Returns the Elips from gp corrsponding to the intersection when ArcType returns IntPatch_Ellipse.)#" )
        .def("Parabola",
             (gp_Parab (IntPatch_GLine::*)() const) static_cast<gp_Parab (IntPatch_GLine::*)() const>(&IntPatch_GLine::Parabola),
             R"#(Returns the Parab from gp corrsponding to the intersection when ArcType returns IntPatch_Parabola.)#" )
        .def("Hyperbola",
             (gp_Hypr (IntPatch_GLine::*)() const) static_cast<gp_Hypr (IntPatch_GLine::*)() const>(&IntPatch_GLine::Hyperbola),
             R"#(Returns the Hypr from gp corrsponding to the intersection when ArcType returns IntPatch_Hyperbola.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_GLine::*)() const) static_cast<Standard_Integer (IntPatch_GLine::*)() const>(&IntPatch_GLine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer ) const>(&IntPatch_GLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_GLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_GLine::*)() const>(&IntPatch_GLine::DynamicType),
             R"#(None)#" )
        .def("SetFirstPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer ) >(&IntPatch_GLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_GLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_GLine::*)( const Standard_Integer ) >(&IntPatch_GLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Line",
             (gp_Lin (IntPatch_GLine::*)() const) static_cast<gp_Lin (IntPatch_GLine::*)() const>(&IntPatch_GLine::Line),
             R"#(Returns the Lin from gp corresponding to the intersection when ArcType returns IntPatch_Line.)#" )
        .def("Circle",
             (gp_Circ (IntPatch_GLine::*)() const) static_cast<gp_Circ (IntPatch_GLine::*)() const>(&IntPatch_GLine::Circle),
             R"#(Returns the Circ from gp corrsponding to the intersection when ArcType returns IntPatch_Circle.)#" )
        .def("Ellipse",
             (gp_Elips (IntPatch_GLine::*)() const) static_cast<gp_Elips (IntPatch_GLine::*)() const>(&IntPatch_GLine::Ellipse),
             R"#(Returns the Elips from gp corrsponding to the intersection when ArcType returns IntPatch_Ellipse.)#" )
        .def("Parabola",
             (gp_Parab (IntPatch_GLine::*)() const) static_cast<gp_Parab (IntPatch_GLine::*)() const>(&IntPatch_GLine::Parabola),
             R"#(Returns the Parab from gp corrsponding to the intersection when ArcType returns IntPatch_Parabola.)#" )
        .def("Hyperbola",
             (gp_Hypr (IntPatch_GLine::*)() const) static_cast<gp_Hypr (IntPatch_GLine::*)() const>(&IntPatch_GLine::Hyperbola),
             R"#(Returns the Hypr from gp corrsponding to the intersection when ArcType returns IntPatch_Hyperbola.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_GLine::*)() const) static_cast<Standard_Boolean (IntPatch_GLine::*)() const>(&IntPatch_GLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_GLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)() const>(&IntPatch_GLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_GLine::*)() const) static_cast<Standard_Integer (IntPatch_GLine::*)() const>(&IntPatch_GLine::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_GLine::*)( const Standard_Integer ) const>(&IntPatch_GLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_GLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_PointLine ,opencascade::handle<IntPatch_PointLine>,Py_IntPatch_PointLine , IntPatch_Line>>(m.attr("IntPatch_PointLine"))
    // constructors
    // custom constructors
    // methods
        .def("AddVertex",
             (void (IntPatch_PointLine::*)( const IntPatch_Point & , const Standard_Boolean ) ) static_cast<void (IntPatch_PointLine::*)( const IntPatch_Point & , const Standard_Boolean ) >(&IntPatch_PointLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("Pnt"),  py::arg("theIsPrepend")=static_cast<const Standard_Boolean>(Standard_False))
        .def("NbPnts",
             (Standard_Integer (IntPatch_PointLine::*)() const) static_cast<Standard_Integer (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_PointLine::*)() const) static_cast<Standard_Integer (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_PointLine::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_PointLine::*)( const Standard_Integer ) const>(&IntPatch_PointLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer ) const>(&IntPatch_PointLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer ) ) static_cast<IntPatch_Point & (IntPatch_PointLine::*)( const Standard_Integer ) >(&IntPatch_PointLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ClearVertexes",
             (void (IntPatch_PointLine::*)() ) static_cast<void (IntPatch_PointLine::*)() >(&IntPatch_PointLine::ClearVertexes),
             R"#(Removes vertices from the line)#" )
        .def("RemoveVertex",
             (void (IntPatch_PointLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_PointLine::*)( const Standard_Integer ) >(&IntPatch_PointLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_PointLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::Curve),
             R"#(Returns set of intersection points)#" )
        .def("IsOutSurf1Box",
             (Standard_Boolean (IntPatch_PointLine::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (IntPatch_PointLine::*)( const gp_Pnt2d & ) const>(&IntPatch_PointLine::IsOutSurf1Box),
             R"#(Returns TRUE if P1 is out of the box built from the points on 1st surface)#"  , py::arg("P1"))
        .def("IsOutSurf2Box",
             (Standard_Boolean (IntPatch_PointLine::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (IntPatch_PointLine::*)( const gp_Pnt2d & ) const>(&IntPatch_PointLine::IsOutSurf2Box),
             R"#(Returns TRUE if P2 is out of the box built from the points on 2nd surface)#"  , py::arg("P2"))
        .def("IsOutBox",
             (Standard_Boolean (IntPatch_PointLine::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (IntPatch_PointLine::*)( const gp_Pnt & ) const>(&IntPatch_PointLine::IsOutBox),
             R"#(Returns TRUE if P is out of the box built from 3D-points.)#"  , py::arg("P"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_PointLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_PointLine::*)() const>(&IntPatch_PointLine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_PointLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_PolyArc , shared_ptr<IntPatch_PolyArc> , IntPatch_Polygo>>(m.attr("IntPatch_PolyArc"))
    // constructors
    // custom constructors
    // methods
        .def("Closed",
             (Standard_Boolean (IntPatch_PolyArc::*)() const) static_cast<Standard_Boolean (IntPatch_PolyArc::*)() const>(&IntPatch_PolyArc::Closed),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (IntPatch_PolyArc::*)() const) static_cast<Standard_Integer (IntPatch_PolyArc::*)() const>(&IntPatch_PolyArc::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt2d (IntPatch_PolyArc::*)( const Standard_Integer ) const) static_cast<gp_Pnt2d (IntPatch_PolyArc::*)( const Standard_Integer ) const>(&IntPatch_PolyArc::Point),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_PolyLine , shared_ptr<IntPatch_PolyLine> , IntPatch_Polygo>>(m.attr("IntPatch_PolyLine"))
    // constructors
    // custom constructors
    // methods
        .def("NbPoints",
             (Standard_Integer (IntPatch_PolyLine::*)() const) static_cast<Standard_Integer (IntPatch_PolyLine::*)() const>(&IntPatch_PolyLine::NbPoints),
             R"#(None)#" )
        .def("Point",
             (gp_Pnt2d (IntPatch_PolyLine::*)( const Standard_Integer ) const) static_cast<gp_Pnt2d (IntPatch_PolyLine::*)( const Standard_Integer ) const>(&IntPatch_PolyLine::Point),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_RLine ,opencascade::handle<IntPatch_RLine> , IntPatch_PointLine>>(m.attr("IntPatch_RLine"))
    // constructors
    // custom constructors
    // methods
        .def("AddVertex",
             (void (IntPatch_RLine::*)( const IntPatch_Point & , const Standard_Boolean ) ) static_cast<void (IntPatch_RLine::*)( const IntPatch_Point & , const Standard_Boolean ) >(&IntPatch_RLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("Pnt"),  py::arg("theIsPrepend")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Replace",
             (void (IntPatch_RLine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_RLine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Add",
             (void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> & ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> & ) >(&IntPatch_RLine::Add),
             R"#(None)#"  , py::arg("L"))
        .def("IsArcOnS1",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS1),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("IsArcOnS2",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS2),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS1),
             R"#(Returns the concerned arc.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS2),
             R"#(Returns the concerned arc.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) const>(&IntPatch_RLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("RemoveVertex",
             (void (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("HasPolygon",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasPolygon),
             R"#(None)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer ) const>(&IntPatch_RLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const>(&IntPatch_RLine::Curve),
             R"#(Returns set of intersection points)#" )
        .def("IsOutSurf1Box",
             (Standard_Boolean (IntPatch_RLine::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (IntPatch_RLine::*)( const gp_Pnt2d & ) const>(&IntPatch_RLine::IsOutSurf1Box),
             R"#(Returns TRUE if theP is out of the box built from the points on 1st surface)#"  , py::arg("theP"))
        .def("IsOutSurf2Box",
             (Standard_Boolean (IntPatch_RLine::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (IntPatch_RLine::*)( const gp_Pnt2d & ) const>(&IntPatch_RLine::IsOutSurf2Box),
             R"#(Returns TRUE if theP is out of the box built from the points on 2nd surface)#"  , py::arg("theP"))
        .def("IsOutBox",
             (Standard_Boolean (IntPatch_RLine::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (IntPatch_RLine::*)( const gp_Pnt & ) const>(&IntPatch_RLine::IsOutBox),
             R"#(Returns TRUE if theP is out of the box built from 3D-points.)#"  , py::arg("theP"))
        .def("ClearVertexes",
             (void (IntPatch_RLine::*)() ) static_cast<void (IntPatch_RLine::*)() >(&IntPatch_RLine::ClearVertexes),
             R"#(Removes vertices from the line (i.e. cleans svtx member))#" )
        .def("SetCurve",
             (void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> & ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> & ) >(&IntPatch_RLine::SetCurve),
             R"#(None)#"  , py::arg("theNewCurve"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::DynamicType),
             R"#(None)#" )
        .def("ArcOnS1",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS1),
             R"#(Returns the concerned arc.)#" )
        .def("ArcOnS2",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (IntPatch_RLine::*)() const>(&IntPatch_RLine::ArcOnS2),
             R"#(Returns the concerned arc.)#" )
        .def("AddVertex",
             (void (IntPatch_RLine::*)( const IntPatch_Point & , const Standard_Boolean ) ) static_cast<void (IntPatch_RLine::*)( const IntPatch_Point & , const Standard_Boolean ) >(&IntPatch_RLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("thePnt"),  py::arg("theIsPrepend"))
        .def("Replace",
             (void (IntPatch_RLine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_RLine::Replace),
             R"#(Replaces the element of range Index in the list of points.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("Add",
             (void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> & ) ) static_cast<void (IntPatch_RLine::*)( const opencascade::handle<IntSurf_LineOn2S> & ) >(&IntPatch_RLine::Add),
             R"#(None)#"  , py::arg("L"))
        .def("IsArcOnS1",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS1),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("IsArcOnS2",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::IsArcOnS2),
             R"#(Returns True if the intersection is on the domain of the first patch. Returns False if the intersection is on the domain of the second patch.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::FirstPoint),
             R"#(Returns the IntPoint corresponding to the FirstPoint. An exception is raised when HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_RLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)() const>(&IntPatch_RLine::LastPoint),
             R"#(Returns the IntPoint corresponding to the LastPoint. An exception is raised when HasLastPoint returns False.)#" )
        .def("NbVertex",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) const>(&IntPatch_RLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<IntPatch_Point & (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("RemoveVertex",
             (void (IntPatch_RLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_RLine::*)( const Standard_Integer ) >(&IntPatch_RLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("HasPolygon",
             (Standard_Boolean (IntPatch_RLine::*)() const) static_cast<Standard_Boolean (IntPatch_RLine::*)() const>(&IntPatch_RLine::HasPolygon),
             R"#(None)#" )
        .def("NbPnts",
             (Standard_Integer (IntPatch_RLine::*)() const) static_cast<Standard_Integer (IntPatch_RLine::*)() const>(&IntPatch_RLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_RLine::*)( const Standard_Integer ) const>(&IntPatch_RLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_RLine::*)() const>(&IntPatch_RLine::Curve),
             R"#(Returns set of intersection points)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_RLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntPatch_WLine ,opencascade::handle<IntPatch_WLine> , IntPatch_PointLine>>(m.attr("IntPatch_WLine"))
    // constructors
    // custom constructors
    // methods
        .def("AddVertex",
             (void (IntPatch_WLine::*)( const IntPatch_Point & , const Standard_Boolean ) ) static_cast<void (IntPatch_WLine::*)( const IntPatch_Point & , const Standard_Boolean ) >(&IntPatch_WLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("Pnt"),  py::arg("theIsPrepend")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Replace",
             (void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_WLine::Replace),
             R"#(Replaces the element of range Index in the list of points. The exception OutOfRange is raised when Index <= 0 or Index > NbVertex.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("NbPnts",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer ) const>(&IntPatch_WLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint.)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint. Indfirst is the index of the first in the list of vertices.)#"  , py::arg("Indfirst"))
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint. Indlast is the index of the last in the list of vertices.)#"  , py::arg("Indlast"))
        .def("NbVertex",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) const>(&IntPatch_WLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("Curve",
             (opencascade::handle<IntSurf_LineOn2S> (IntPatch_WLine::*)() const) static_cast<opencascade::handle<IntSurf_LineOn2S> (IntPatch_WLine::*)() const>(&IntPatch_WLine::Curve),
             R"#(Returns set of intersection points)#" )
        .def("IsOutSurf1Box",
             (Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d & ) const>(&IntPatch_WLine::IsOutSurf1Box),
             R"#(Returns TRUE if theP is out of the box built from the points on 1st surface)#"  , py::arg("theP"))
        .def("IsOutSurf2Box",
             (Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt2d & ) const>(&IntPatch_WLine::IsOutSurf2Box),
             R"#(Returns TRUE if theP is out of the box built from the points on 2nd surface)#"  , py::arg("theP"))
        .def("IsOutBox",
             (Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (IntPatch_WLine::*)( const gp_Pnt & ) const>(&IntPatch_WLine::IsOutBox),
             R"#(Returns TRUE if theP is out of the box built from 3D-points.)#"  , py::arg("theP"))
        .def("ClearVertexes",
             (void (IntPatch_WLine::*)() ) static_cast<void (IntPatch_WLine::*)() >(&IntPatch_WLine::ClearVertexes),
             R"#(Removes vertices from the line (i.e. cleans svtx member))#" )
        .def("RemoveVertex",
             (void (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("InsertVertexBefore",
             (void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_WLine::InsertVertexBefore),
             R"#(None)#"  , py::arg("theIndex"),  py::arg("thePnt"))
        .def("EnablePurging",
             (void (IntPatch_WLine::*)( const Standard_Boolean ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Boolean ) >(&IntPatch_WLine::EnablePurging),
             R"#(Allows or forbids purging of existing WLine)#"  , py::arg("theIsEnabled"))
        .def("IsPurgingAllowed",
             (Standard_Boolean (IntPatch_WLine::*)() ) static_cast<Standard_Boolean (IntPatch_WLine::*)() >(&IntPatch_WLine::IsPurgingAllowed),
             R"#(Returns TRUE if purging is allowed or forbidden for existing WLine)#" )
        .def("GetCreatingWay",
             (IntPatch_WLine::IntPatch_WLType (IntPatch_WLine::*)() const) static_cast<IntPatch_WLine::IntPatch_WLType (IntPatch_WLine::*)() const>(&IntPatch_WLine::GetCreatingWay),
             R"#(Returns the way of <*this> creation.)#" )
        .def("SetCreatingWayInfo",
             (void (IntPatch_WLine::*)( IntPatch_WLine::IntPatch_WLType ) ) static_cast<void (IntPatch_WLine::*)( IntPatch_WLine::IntPatch_WLType ) >(&IntPatch_WLine::SetCreatingWayInfo),
             R"#(Sets the info about the way of <*this> creation.)#"  , py::arg("theAlgo"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IntPatch_WLine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IntPatch_WLine::*)() const>(&IntPatch_WLine::DynamicType),
             R"#(None)#" )
        .def("AddVertex",
             (void (IntPatch_WLine::*)( const IntPatch_Point & , const Standard_Boolean ) ) static_cast<void (IntPatch_WLine::*)( const IntPatch_Point & , const Standard_Boolean ) >(&IntPatch_WLine::AddVertex),
             R"#(Adds a vertex in the list. If theIsPrepend == TRUE the new vertex will be added before the first element of vertices sequence. Otherwise, to the end of the sequence)#"  , py::arg("thePnt"),  py::arg("theIsPrepend"))
        .def("Replace",
             (void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_WLine::Replace),
             R"#(Replaces the element of range Index in the list of points. The exception OutOfRange is raised when Index <= 0 or Index > NbVertex.)#"  , py::arg("Index"),  py::arg("Pnt"))
        .def("SetFirstPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::SetFirstPoint),
             R"#(None)#"  , py::arg("IndFirst"))
        .def("SetLastPoint",
             (void (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::SetLastPoint),
             R"#(None)#"  , py::arg("IndLast"))
        .def("NbPnts",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbPnts),
             R"#(Returns the number of intersection points.)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (IntPatch_WLine::*)( const Standard_Integer ) const>(&IntPatch_WLine::Point),
             R"#(Returns the intersection point of range Index.)#"  , py::arg("Index"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasFirstPoint),
             R"#(Returns True if the line has a known First point. This point is given by the method FirstPoint().)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntPatch_WLine::*)() const) static_cast<Standard_Boolean (IntPatch_WLine::*)() const>(&IntPatch_WLine::HasLastPoint),
             R"#(Returns True if the line has a known Last point. This point is given by the method LastPoint().)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint.)#" )
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)() const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)() const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint.)#" )
        .def("FirstPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const>(&IntPatch_WLine::FirstPoint),
             R"#(Returns the Point corresponding to the FirstPoint. Indfirst is the index of the first in the list of vertices.)#"  , py::arg("Indfirst"))
        .def("LastPoint",
             (const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( Standard_Integer & ) const>(&IntPatch_WLine::LastPoint),
             R"#(Returns the Point corresponding to the LastPoint. Indlast is the index of the last in the list of vertices.)#"  , py::arg("Indlast"))
        .def("NbVertex",
             (Standard_Integer (IntPatch_WLine::*)() const) static_cast<Standard_Integer (IntPatch_WLine::*)() const>(&IntPatch_WLine::NbVertex),
             R"#(Returns number of vertices (IntPatch_Point) of the line)#" )
        .def("Vertex",
             (const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) const) static_cast<const IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) const>(&IntPatch_WLine::Vertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ChangeVertex",
             (IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<IntPatch_Point & (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::ChangeVertex),
             R"#(Returns the vertex of range Index on the line.)#"  , py::arg("Index"))
        .def("ClearVertexes",
             (void (IntPatch_WLine::*)() ) static_cast<void (IntPatch_WLine::*)() >(&IntPatch_WLine::ClearVertexes),
             R"#(Removes vertices from the line (i.e. cleans svtx member))#" )
        .def("RemoveVertex",
             (void (IntPatch_WLine::*)( const Standard_Integer ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer ) >(&IntPatch_WLine::RemoveVertex),
             R"#(Removes single vertex from the line)#"  , py::arg("theIndex"))
        .def("InsertVertexBefore",
             (void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) ) static_cast<void (IntPatch_WLine::*)( const Standard_Integer , const IntPatch_Point & ) >(&IntPatch_WLine::InsertVertexBefore),
             R"#(None)#"  , py::arg("theIndex"),  py::arg("thePnt"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IntPatch_WLine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntPatch_Point.hxx
// ./opencascade/IntPatch_Polyhedron.hxx
// ./opencascade/IntPatch_WLine.hxx
// ./opencascade/IntPatch_Line.hxx
// ./opencascade/IntPatch_PrmPrmIntersection.hxx
// ./opencascade/IntPatch_TheIWalking.hxx
// ./opencascade/IntPatch_SequenceOfIWLineOfTheIWalking.hxx
// ./opencascade/IntPatch_SpecPntType.hxx
// ./opencascade/IntPatch_HCurve2dTool.hxx
// ./opencascade/IntPatch_ArcFunction.hxx
// ./opencascade/IntPatch_ALineToWLine.hxx
// ./opencascade/IntPatch_CurvIntSurf.hxx
// ./opencascade/IntPatch_HInterTool.hxx
// ./opencascade/IntPatch_SearchPnt.hxx
// ./opencascade/IntPatch_TheSearchInside.hxx
// ./opencascade/IntPatch_Intersection.hxx
// ./opencascade/IntPatch_ImpImpIntersection.hxx
// ./opencascade/IntPatch_ALine.hxx
// ./opencascade/IntPatch_PrmPrmIntersection_T3Bits.hxx
// ./opencascade/IntPatch_Polygo.hxx
// ./opencascade/IntPatch_PolyhedronTool.hxx
// ./opencascade/IntPatch_IType.hxx
// ./opencascade/IntPatch_WLineTool.hxx
// ./opencascade/IntPatch_RLine.hxx
// ./opencascade/IntPatch_ThePathPointOfTheSOnBounds.hxx
// ./opencascade/IntPatch_SequenceOfLine.hxx
// ./opencascade/IntPatch_SequenceOfPoint.hxx
// ./opencascade/IntPatch_TheSegmentOfTheSOnBounds.hxx
// ./opencascade/IntPatch_RstInt.hxx
// ./opencascade/IntPatch_ImpPrmIntersection.hxx
// ./opencascade/IntPatch_PolyArc.hxx
// ./opencascade/IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx
// ./opencascade/IntPatch_SpecialPoints.hxx
// ./opencascade/IntPatch_GLine.hxx
// ./opencascade/IntPatch_InterferencePolyhedron.hxx
// ./opencascade/IntPatch_CSFunction.hxx
// ./opencascade/IntPatch_TheSurfFunction.hxx
// ./opencascade/IntPatch_PolyLine.hxx
// ./opencascade/IntPatch_TheSOnBounds.hxx
// ./opencascade/IntPatch_TheIWLineOfTheIWalking.hxx
// ./opencascade/IntPatch_LineConstructor.hxx
// ./opencascade/IntPatch_SequenceOfPathPointOfTheSOnBounds.hxx
// ./opencascade/IntPatch_PointLine.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<IntPatch_TheIWLineOfTheIWalking> >(m,"IntPatch_SequenceOfIWLineOfTheIWalking");
    register_template_NCollection_Sequence<opencascade::handle<IntPatch_Line> >(m,"IntPatch_SequenceOfLine");
    register_template_NCollection_Sequence<IntPatch_Point>(m,"IntPatch_SequenceOfPoint");
    register_template_NCollection_Sequence<IntPatch_TheSegmentOfTheSOnBounds>(m,"IntPatch_SequenceOfSegmentOfTheSOnBounds");
    register_template_NCollection_Sequence<IntPatch_ThePathPointOfTheSOnBounds>(m,"IntPatch_SequenceOfPathPointOfTheSOnBounds");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
