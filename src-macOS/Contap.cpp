
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Sphere.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Contap_HContTool.hxx>
#include <Contap_SurfFunction.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <math_Matrix.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <gp_Pnt.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Contap_HCurve2dTool.hxx>
#include <Contap_HContTool.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <Contap_ArcFunction.hxx>
#include <Standard_NoSuchObject.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Contap_SurfFunction.hxx>
#include <math_FunctionSetRoot.hxx>

// module includes
#include <Contap_ArcFunction.hxx>
#include <Contap_ContAna.hxx>
#include <Contap_Contour.hxx>
#include <Contap_HContTool.hxx>
#include <Contap_HCurve2dTool.hxx>
#include <Contap_IType.hxx>
#include <Contap_Line.hxx>
#include <Contap_Point.hxx>
#include <Contap_SequenceOfIWLineOfTheIWalking.hxx>
#include <Contap_SequenceOfPathPointOfTheSearch.hxx>
#include <Contap_SequenceOfSegmentOfTheSearch.hxx>
#include <Contap_SurfFunction.hxx>
#include <Contap_SurfProps.hxx>
#include <Contap_TFunction.hxx>
#include <Contap_TheHSequenceOfPoint.hxx>
#include <Contap_TheIWalking.hxx>
#include <Contap_TheIWLineOfTheIWalking.hxx>
#include <Contap_ThePathPointOfTheSearch.hxx>
#include <Contap_TheSearch.hxx>
#include <Contap_TheSearchInside.hxx>
#include <Contap_TheSegmentOfTheSearch.hxx>
#include <Contap_TheSequenceOfLine.hxx>
#include <Contap_TheSequenceOfPoint.hxx>

// template related includes
// ./opencascade/Contap_SequenceOfPathPointOfTheSearch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Contap_TheSequenceOfLine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Contap_SequenceOfSegmentOfTheSearch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Contap_TheSequenceOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Contap_SequenceOfIWLineOfTheIWalking.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Contap(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Contap"));


//Python trampoline classes

// classes


    static_cast<py::class_<Contap_ArcFunction , shared_ptr<Contap_ArcFunction> , math_FunctionWithDerivative>>(m.attr("Contap_ArcFunction"))
    // constructors
    // custom constructors
    // methods
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Dir & ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Dir & ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Direction"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Dir & , const Standard_Real ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Dir & , const Standard_Real ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Direction"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Pnt & ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Pnt & ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Eye"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Pnt & , const Standard_Real ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Eye"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (Contap_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("A"))
        .def("Value",
             (Standard_Boolean (Contap_ArcFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Contap_ArcFunction::*)( const Standard_Real , Standard_Real & ) >(&Contap_ArcFunction::Value),
             R"#(None)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivative",
             (Standard_Boolean (Contap_ArcFunction::*)( const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (Contap_ArcFunction::*)( const Standard_Real , Standard_Real & ) >(&Contap_ArcFunction::Derivative),
             R"#(None)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Contap_ArcFunction::*)( const Standard_Real , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (Contap_ArcFunction::*)( const Standard_Real , Standard_Real & , Standard_Real & ) >(&Contap_ArcFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("GetStateNumber",
             (Standard_Integer (Contap_ArcFunction::*)() ) static_cast<Standard_Integer (Contap_ArcFunction::*)() >(&Contap_ArcFunction::GetStateNumber),
             R"#(None)#" )
        .def("Valpoint",
             (const gp_Pnt & (Contap_ArcFunction::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (Contap_ArcFunction::*)( const Standard_Integer ) const>(&Contap_ArcFunction::Valpoint),
             R"#(None)#"  , py::arg("Index"))
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Contap_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Contap_ArcFunction::*)() const>(&Contap_ArcFunction::Surface),
             R"#(Returns mySurf field)#" )
        .def("LastComputedPoint",
             (const gp_Pnt & (Contap_ArcFunction::*)() const) static_cast<const gp_Pnt & (Contap_ArcFunction::*)() const>(&Contap_ArcFunction::LastComputedPoint),
             R"#(Returns the point, which has been computed while the last calling Value() method)#" )
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Dir & , const Standard_Real ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Dir & , const Standard_Real ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Direction"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Pnt & , const Standard_Real ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Eye"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Dir & ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Dir & ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Direction"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const gp_Pnt & ) ) static_cast<void (Contap_ArcFunction::*)( const gp_Pnt & ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("Eye"))
        .def("Set",
             (void (Contap_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (Contap_ArcFunction::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_ArcFunction::Set),
             R"#(None)#"  , py::arg("A"))
        .def("Valpoint",
             (const gp_Pnt & (Contap_ArcFunction::*)( const Standard_Integer ) const) static_cast<const gp_Pnt & (Contap_ArcFunction::*)( const Standard_Integer ) const>(&Contap_ArcFunction::Valpoint),
             R"#(None)#"  , py::arg("Index"))
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Contap_ArcFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Contap_ArcFunction::*)() const>(&Contap_ArcFunction::Surface),
             R"#(Returns mySurf field)#" )
        .def("LastComputedPoint",
             (const gp_Pnt & (Contap_ArcFunction::*)() const) static_cast<const gp_Pnt & (Contap_ArcFunction::*)() const>(&Contap_ArcFunction::LastComputedPoint),
             R"#(Returns the point, which has been computed while the last calling Value() method)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_ContAna , shared_ptr<Contap_ContAna> >>(m.attr("Contap_ContAna"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Contap_ContAna::*)() const) static_cast<Standard_Boolean (Contap_ContAna::*)() const>(&Contap_ContAna::IsDone),
             R"#(None)#" )
        .def("NbContours",
             (Standard_Integer (Contap_ContAna::*)() const) static_cast<Standard_Integer (Contap_ContAna::*)() const>(&Contap_ContAna::NbContours),
             R"#(None)#" )
        .def("TypeContour",
             (GeomAbs_CurveType (Contap_ContAna::*)() const) static_cast<GeomAbs_CurveType (Contap_ContAna::*)() const>(&Contap_ContAna::TypeContour),
             R"#(Returns GeomAbs_Line or GeomAbs_Circle, when IsDone() returns True.)#" )
        .def("Circle",
             (gp_Circ (Contap_ContAna::*)() const) static_cast<gp_Circ (Contap_ContAna::*)() const>(&Contap_ContAna::Circle),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (Contap_ContAna::*)() const) static_cast<Standard_Boolean (Contap_ContAna::*)() const>(&Contap_ContAna::IsDone),
             R"#(None)#" )
        .def("NbContours",
             (Standard_Integer (Contap_ContAna::*)() const) static_cast<Standard_Integer (Contap_ContAna::*)() const>(&Contap_ContAna::NbContours),
             R"#(None)#" )
        .def("TypeContour",
             (GeomAbs_CurveType (Contap_ContAna::*)() const) static_cast<GeomAbs_CurveType (Contap_ContAna::*)() const>(&Contap_ContAna::TypeContour),
             R"#(Returns GeomAbs_Line or GeomAbs_Circle, when IsDone() returns True.)#" )
        .def("Circle",
             (gp_Circ (Contap_ContAna::*)() const) static_cast<gp_Circ (Contap_ContAna::*)() const>(&Contap_ContAna::Circle),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_Contour , shared_ptr<Contap_Contour> >>(m.attr("Contap_Contour"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Contap_Contour::*)() const) static_cast<Standard_Boolean (Contap_Contour::*)() const>(&Contap_Contour::IsDone),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (Contap_Contour::*)() const) static_cast<Standard_Boolean (Contap_Contour::*)() const>(&Contap_Contour::IsEmpty),
             R"#(Returns true if the is no line.)#" )
        .def("NbLines",
             (Standard_Integer (Contap_Contour::*)() const) static_cast<Standard_Integer (Contap_Contour::*)() const>(&Contap_Contour::NbLines),
             R"#(None)#" )
        .def("Line",
             (const Contap_Line & (Contap_Contour::*)( const Standard_Integer ) const) static_cast<const Contap_Line & (Contap_Contour::*)( const Standard_Integer ) const>(&Contap_Contour::Line),
             R"#(None)#"  , py::arg("Index"))
        .def("SurfaceFunction",
             (Contap_SurfFunction & (Contap_Contour::*)() ) static_cast<Contap_SurfFunction & (Contap_Contour::*)() >(&Contap_Contour::SurfaceFunction),
             R"#(Returns a reference on the internal SurfaceFunction. This is used to compute tangents on the lines.)#" )
        .def("IsDone",
             (Standard_Boolean (Contap_Contour::*)() const) static_cast<Standard_Boolean (Contap_Contour::*)() const>(&Contap_Contour::IsDone),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (Contap_Contour::*)() const) static_cast<Standard_Boolean (Contap_Contour::*)() const>(&Contap_Contour::IsEmpty),
             R"#(Returns true if the is no line.)#" )
        .def("NbLines",
             (Standard_Integer (Contap_Contour::*)() const) static_cast<Standard_Integer (Contap_Contour::*)() const>(&Contap_Contour::NbLines),
             R"#(None)#" )
        .def("Line",
             (const Contap_Line & (Contap_Contour::*)( const Standard_Integer ) const) static_cast<const Contap_Line & (Contap_Contour::*)( const Standard_Integer ) const>(&Contap_Contour::Line),
             R"#(None)#"  , py::arg("Index"))
        .def("SurfaceFunction",
             (Contap_SurfFunction & (Contap_Contour::*)() ) static_cast<Contap_SurfFunction & (Contap_Contour::*)() >(&Contap_Contour::SurfaceFunction),
             R"#(Returns a reference on the internal SurfaceFunction. This is used to compute tangents on the lines.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Contap_HContTool , shared_ptr<Contap_HContTool>>(m,"Contap_HContTool");

    static_cast<py::class_<Contap_HContTool , shared_ptr<Contap_HContTool> >>(m.attr("Contap_HContTool"))
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
    register_default_constructor<Contap_HCurve2dTool , shared_ptr<Contap_HCurve2dTool>>(m,"Contap_HCurve2dTool");

    static_cast<py::class_<Contap_HCurve2dTool , shared_ptr<Contap_HCurve2dTool> >>(m.attr("Contap_HCurve2dTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FirstParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::FirstParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("LastParameter_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::LastParameter),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Continuity_s",
                    (GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<GeomAbs_Shape (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Continuity),
                    R"#(None)#"  , py::arg("C"))
        .def_static("NbIntervals_s",
                    (Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const GeomAbs_Shape ) >(&Contap_HCurve2dTool::NbIntervals),
                    R"#(Returns the number of intervals for continuity <S>. May be one if Continuity(myclass) >= <S>)#"  , py::arg("C"),  py::arg("S"))
        .def_static("Intervals_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) >(&Contap_HCurve2dTool::Intervals),
                    R"#(Stores in <T> the parameters bounding the intervals of continuity <S>.)#"  , py::arg("C"),  py::arg("T"),  py::arg("S"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::IsClosed),
                    R"#(None)#"  , py::arg("C"))
        .def_static("IsPeriodic_s",
                    (Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::IsPeriodic),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Period_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Period),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Value_s",
                    (gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<gp_Pnt2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&Contap_HCurve2dTool::Value),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"))
        .def_static("D0_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & ) >(&Contap_HCurve2dTool::D0),
                    R"#(Computes the point of parameter U on the curve.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"))
        .def_static("D1_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & ) >(&Contap_HCurve2dTool::D1),
                    R"#(Computes the point of parameter U on the curve with its first derivative. Raised if the continuity of the current interval is not C1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V"))
        .def_static("D2_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & ) >(&Contap_HCurve2dTool::D2),
                    R"#(Returns the point P of parameter U, the first and second derivatives V1 and V2. Raised if the continuity of the current interval is not C2.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def_static("D3_s",
                    (void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) ) static_cast<void (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , gp_Pnt2d & , gp_Vec2d & , gp_Vec2d & , gp_Vec2d & ) >(&Contap_HCurve2dTool::D3),
                    R"#(Returns the point P of parameter U, the first, the second and the third derivative. Raised if the continuity of the current interval is not C3.)#"  , py::arg("C"),  py::arg("U"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def_static("DN_s",
                    (gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Integer ) ) static_cast<gp_Vec2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const Standard_Integer ) >(&Contap_HCurve2dTool::DN),
                    R"#(The returned vector gives the value of the derivative for the order of derivation N. Raised if the continuity of the current interval is not CN. Raised if N < 1.)#"  , py::arg("C"),  py::arg("U"),  py::arg("N"))
        .def_static("Resolution_s",
                    (Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&Contap_HCurve2dTool::Resolution),
                    R"#(Returns the parametric resolution corresponding to the real space resolution <R3d>.)#"  , py::arg("C"),  py::arg("R3d"))
        .def_static("GetType_s",
                    (GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<GeomAbs_CurveType (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::GetType),
                    R"#(Returns the type of the curve in the current interval : Line, Circle, Ellipse, Hyperbola, Parabola, BezierCurve, BSplineCurve, OtherCurve.)#"  , py::arg("C"))
        .def_static("Line_s",
                    (gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Lin2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Line),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Circle_s",
                    (gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Circ2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Circle),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Ellipse_s",
                    (gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Elips2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Ellipse),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Hyperbola_s",
                    (gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Hypr2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Hyperbola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Parabola_s",
                    (gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<gp_Parab2d (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Parabola),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Bezier_s",
                    (opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<opencascade::handle<Geom2d_BezierCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::Bezier),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BSpline_s",
                    (opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_HCurve2dTool::BSpline),
                    R"#(None)#"  , py::arg("C"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_Line , shared_ptr<Contap_Line> >>(m.attr("Contap_Line"))
    // constructors
    // custom constructors
    // methods
        .def("LineOn2S",
             (const opencascade::handle<IntSurf_LineOn2S> & (Contap_Line::*)() const) static_cast<const opencascade::handle<IntSurf_LineOn2S> & (Contap_Line::*)() const>(&Contap_Line::LineOn2S),
             R"#(None)#" )
        .def("Add",
             (void (Contap_Line::*)( const IntSurf_PntOn2S & ) ) static_cast<void (Contap_Line::*)( const IntSurf_PntOn2S & ) >(&Contap_Line::Add),
             R"#(None)#"  , py::arg("P"))
        .def("NbVertex",
             (Standard_Integer (Contap_Line::*)() const) static_cast<Standard_Integer (Contap_Line::*)() const>(&Contap_Line::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (Contap_Point & (Contap_Line::*)( const Standard_Integer ) const) static_cast<Contap_Point & (Contap_Line::*)( const Standard_Integer ) const>(&Contap_Line::Vertex),
             R"#(None)#"  , py::arg("Index"))
        .def("TypeContour",
             (Contap_IType (Contap_Line::*)() const) static_cast<Contap_IType (Contap_Line::*)() const>(&Contap_Line::TypeContour),
             R"#(Returns Contap_Lin for a line, Contap_Circle for a circle, and Contap_Walking for a Walking line, Contap_Restriction for a part of boundarie.)#" )
        .def("NbPnts",
             (Standard_Integer (Contap_Line::*)() const) static_cast<Standard_Integer (Contap_Line::*)() const>(&Contap_Line::NbPnts),
             R"#(None)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (Contap_Line::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (Contap_Line::*)( const Standard_Integer ) const>(&Contap_Line::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("Line",
             (gp_Lin (Contap_Line::*)() const) static_cast<gp_Lin (Contap_Line::*)() const>(&Contap_Line::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (Contap_Line::*)() const) static_cast<gp_Circ (Contap_Line::*)() const>(&Contap_Line::Circle),
             R"#(None)#" )
        .def("LineOn2S",
             (const opencascade::handle<IntSurf_LineOn2S> & (Contap_Line::*)() const) static_cast<const opencascade::handle<IntSurf_LineOn2S> & (Contap_Line::*)() const>(&Contap_Line::LineOn2S),
             R"#(None)#" )
        .def("Add",
             (void (Contap_Line::*)( const IntSurf_PntOn2S & ) ) static_cast<void (Contap_Line::*)( const IntSurf_PntOn2S & ) >(&Contap_Line::Add),
             R"#(None)#"  , py::arg("POn2S"))
        .def("NbVertex",
             (Standard_Integer (Contap_Line::*)() const) static_cast<Standard_Integer (Contap_Line::*)() const>(&Contap_Line::NbVertex),
             R"#(None)#" )
        .def("Vertex",
             (Contap_Point & (Contap_Line::*)( const Standard_Integer ) const) static_cast<Contap_Point & (Contap_Line::*)( const Standard_Integer ) const>(&Contap_Line::Vertex),
             R"#(None)#"  , py::arg("Index"))
        .def("TypeContour",
             (Contap_IType (Contap_Line::*)() const) static_cast<Contap_IType (Contap_Line::*)() const>(&Contap_Line::TypeContour),
             R"#(Returns Contap_Lin for a line, Contap_Circle for a circle, and Contap_Walking for a Walking line, Contap_Restriction for a part of boundarie.)#" )
        .def("NbPnts",
             (Standard_Integer (Contap_Line::*)() const) static_cast<Standard_Integer (Contap_Line::*)() const>(&Contap_Line::NbPnts),
             R"#(None)#" )
        .def("Point",
             (const IntSurf_PntOn2S & (Contap_Line::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (Contap_Line::*)( const Standard_Integer ) const>(&Contap_Line::Point),
             R"#(None)#"  , py::arg("Index"))
        .def("Line",
             (gp_Lin (Contap_Line::*)() const) static_cast<gp_Lin (Contap_Line::*)() const>(&Contap_Line::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (Contap_Line::*)() const) static_cast<gp_Circ (Contap_Line::*)() const>(&Contap_Line::Circle),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_Point , shared_ptr<Contap_Point> >>(m.attr("Contap_Point"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (Contap_Point::*)( const gp_Pnt & , const Standard_Real , const Standard_Real ) ) static_cast<void (Contap_Point::*)( const gp_Pnt & , const Standard_Real , const Standard_Real ) >(&Contap_Point::SetValue),
             R"#(Sets the values for a point.)#"  , py::arg("Pt"),  py::arg("U"),  py::arg("V"))
        .def("SetParameter",
             (void (Contap_Point::*)( const Standard_Real ) ) static_cast<void (Contap_Point::*)( const Standard_Real ) >(&Contap_Point::SetParameter),
             R"#(Set the value of the parameter on the intersection line.)#"  , py::arg("Para"))
        .def("SetVertex",
             (void (Contap_Point::*)( const opencascade::handle<Adaptor3d_HVertex> & ) ) static_cast<void (Contap_Point::*)( const opencascade::handle<Adaptor3d_HVertex> & ) >(&Contap_Point::SetVertex),
             R"#(Sets the values of a point which is a vertex on the initial facet of restriction of one of the surface.)#"  , py::arg("V"))
        .def("SetArc",
             (void (Contap_Point::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) ) static_cast<void (Contap_Point::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) >(&Contap_Point::SetArc),
             R"#(Sets the value of the arc and of the parameter on this arc of the point.)#"  , py::arg("A"),  py::arg("Param"),  py::arg("TLine"),  py::arg("TArc"))
        .def("SetMultiple",
             (void (Contap_Point::*)() ) static_cast<void (Contap_Point::*)() >(&Contap_Point::SetMultiple),
             R"#(None)#" )
        .def("SetInternal",
             (void (Contap_Point::*)() ) static_cast<void (Contap_Point::*)() >(&Contap_Point::SetInternal),
             R"#(None)#" )
        .def("Value",
             (const gp_Pnt & (Contap_Point::*)() const) static_cast<const gp_Pnt & (Contap_Point::*)() const>(&Contap_Point::Value),
             R"#(Returns the intersection point (geometric information).)#" )
        .def("ParameterOnLine",
             (Standard_Real (Contap_Point::*)() const) static_cast<Standard_Real (Contap_Point::*)() const>(&Contap_Point::ParameterOnLine),
             R"#(This method returns the parameter of the point on the intersection line. If the points does not belong to an intersection line, the value returned does not have any sens.)#" )
        .def("IsOnArc",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsOnArc),
             R"#(Returns True when the point is an intersection between the contour and a restriction.)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_Point::*)() const>(&Contap_Point::Arc),
             R"#(Returns the arc of restriction containing the vertex.)#" )
        .def("ParameterOnArc",
             (Standard_Real (Contap_Point::*)() const) static_cast<Standard_Real (Contap_Point::*)() const>(&Contap_Point::ParameterOnArc),
             R"#(Returns the parameter of the point on the arc returned by the method Arc().)#" )
        .def("TransitionOnLine",
             (const IntSurf_Transition & (Contap_Point::*)() const) static_cast<const IntSurf_Transition & (Contap_Point::*)() const>(&Contap_Point::TransitionOnLine),
             R"#(Returns the transition of the point on the contour.)#" )
        .def("TransitionOnArc",
             (const IntSurf_Transition & (Contap_Point::*)() const) static_cast<const IntSurf_Transition & (Contap_Point::*)() const>(&Contap_Point::TransitionOnArc),
             R"#(Returns the transition of the point on the arc.)#" )
        .def("IsVertex",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsVertex),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the surface.)#" )
        .def("Vertex",
             (const opencascade::handle<Adaptor3d_HVertex> & (Contap_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (Contap_Point::*)() const>(&Contap_Point::Vertex),
             R"#(Returns the information about the point when it is on the domain of the patch, i-e when the function IsVertex returns True. Otherwise, an exception is raised.)#" )
        .def("IsMultiple",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsMultiple),
             R"#(Returns True if the point belongs to several lines.)#" )
        .def("IsInternal",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsInternal),
             R"#(Returns True if the point is an internal one, i.e if the tangent to the line on the point and the eye direction are parallel.)#" )
        .def("SetValue",
             (void (Contap_Point::*)( const gp_Pnt & , const Standard_Real , const Standard_Real ) ) static_cast<void (Contap_Point::*)( const gp_Pnt & , const Standard_Real , const Standard_Real ) >(&Contap_Point::SetValue),
             R"#(Sets the values for a point.)#"  , py::arg("Pt"),  py::arg("U"),  py::arg("V"))
        .def("SetParameter",
             (void (Contap_Point::*)( const Standard_Real ) ) static_cast<void (Contap_Point::*)( const Standard_Real ) >(&Contap_Point::SetParameter),
             R"#(Set the value of the parameter on the intersection line.)#"  , py::arg("Para"))
        .def("SetVertex",
             (void (Contap_Point::*)( const opencascade::handle<Adaptor3d_HVertex> & ) ) static_cast<void (Contap_Point::*)( const opencascade::handle<Adaptor3d_HVertex> & ) >(&Contap_Point::SetVertex),
             R"#(Sets the values of a point which is a vertex on the initial facet of restriction of one of the surface.)#"  , py::arg("V"))
        .def("SetArc",
             (void (Contap_Point::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) ) static_cast<void (Contap_Point::*)( const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real , const IntSurf_Transition & , const IntSurf_Transition & ) >(&Contap_Point::SetArc),
             R"#(Sets the value of the arc and of the parameter on this arc of the point.)#"  , py::arg("A"),  py::arg("Param"),  py::arg("TLine"),  py::arg("TArc"))
        .def("SetMultiple",
             (void (Contap_Point::*)() ) static_cast<void (Contap_Point::*)() >(&Contap_Point::SetMultiple),
             R"#(None)#" )
        .def("SetInternal",
             (void (Contap_Point::*)() ) static_cast<void (Contap_Point::*)() >(&Contap_Point::SetInternal),
             R"#(None)#" )
        .def("IsMultiple",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsMultiple),
             R"#(Returns True if the point belongs to several lines.)#" )
        .def("IsInternal",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsInternal),
             R"#(Returns True if the point is an internal one, i.e if the tangent to the line on the point and the eye direction are parallel.)#" )
        .def("Value",
             (const gp_Pnt & (Contap_Point::*)() const) static_cast<const gp_Pnt & (Contap_Point::*)() const>(&Contap_Point::Value),
             R"#(Returns the intersection point (geometric information).)#" )
        .def("ParameterOnLine",
             (Standard_Real (Contap_Point::*)() const) static_cast<Standard_Real (Contap_Point::*)() const>(&Contap_Point::ParameterOnLine),
             R"#(This method returns the parameter of the point on the intersection line. If the points does not belong to an intersection line, the value returned does not have any sens.)#" )
        .def("IsOnArc",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsOnArc),
             R"#(Returns True when the point is an intersection between the contour and a restriction.)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_Point::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_Point::*)() const>(&Contap_Point::Arc),
             R"#(Returns the arc of restriction containing the vertex.)#" )
        .def("TransitionOnLine",
             (const IntSurf_Transition & (Contap_Point::*)() const) static_cast<const IntSurf_Transition & (Contap_Point::*)() const>(&Contap_Point::TransitionOnLine),
             R"#(Returns the transition of the point on the contour.)#" )
        .def("TransitionOnArc",
             (const IntSurf_Transition & (Contap_Point::*)() const) static_cast<const IntSurf_Transition & (Contap_Point::*)() const>(&Contap_Point::TransitionOnArc),
             R"#(Returns the transition of the point on the arc.)#" )
        .def("ParameterOnArc",
             (Standard_Real (Contap_Point::*)() const) static_cast<Standard_Real (Contap_Point::*)() const>(&Contap_Point::ParameterOnArc),
             R"#(Returns the parameter of the point on the arc returned by the method Arc().)#" )
        .def("IsVertex",
             (Standard_Boolean (Contap_Point::*)() const) static_cast<Standard_Boolean (Contap_Point::*)() const>(&Contap_Point::IsVertex),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the surface.)#" )
        .def("Vertex",
             (const opencascade::handle<Adaptor3d_HVertex> & (Contap_Point::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (Contap_Point::*)() const>(&Contap_Point::Vertex),
             R"#(Returns the information about the point when it is on the domain of the patch, i-e when the function IsVertex returns True. Otherwise, an exception is raised.)#" )
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( Contap_Point &self   ){ Standard_Real  U1; Standard_Real  V1; self.Parameters(U1,V1); return std::make_tuple(U1,V1); },
             R"#(Returns the parameters on the surface of the point.)#" )
        .def("Parameters",
             []( Contap_Point &self   ){ Standard_Real  U1; Standard_Real  V1; self.Parameters(U1,V1); return std::make_tuple(U1,V1); },
             R"#(Returns the parameters on the surface of the point.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_SurfFunction , shared_ptr<Contap_SurfFunction> , math_FunctionSetWithDerivatives>>(m.attr("Contap_SurfFunction"))
    // constructors
    // custom constructors
    // methods
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Pnt & ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Pnt & ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Eye"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Dir & ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Dir & ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Dir"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Dir & , const Standard_Real ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Dir & , const Standard_Real ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Dir"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Pnt & , const Standard_Real ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Eye"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const Standard_Real ) ) static_cast<void (Contap_SurfFunction::*)( const Standard_Real ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Tolerance"))
        .def("NbVariables",
             (Standard_Integer (Contap_SurfFunction::*)() const) static_cast<Standard_Integer (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::NbVariables),
             R"#(This method has to return 2.)#" )
        .def("NbEquations",
             (Standard_Integer (Contap_SurfFunction::*)() const) static_cast<Standard_Integer (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::NbEquations),
             R"#(This method has to return 1.)#" )
        .def("Value",
             (Standard_Boolean (Contap_SurfFunction::*)( const math_Vector & , math_Vector & ) ) static_cast<Standard_Boolean (Contap_SurfFunction::*)( const math_Vector & , math_Vector & ) >(&Contap_SurfFunction::Value),
             R"#(The dimension of F is 1.)#"  , py::arg("X"),  py::arg("F"))
        .def("Derivatives",
             (Standard_Boolean (Contap_SurfFunction::*)( const math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Contap_SurfFunction::*)( const math_Vector & , math_Matrix & ) >(&Contap_SurfFunction::Derivatives),
             R"#(The dimension of D is (1,2).)#"  , py::arg("X"),  py::arg("D"))
        .def("Values",
             (Standard_Boolean (Contap_SurfFunction::*)( const math_Vector & , math_Vector & , math_Matrix & ) ) static_cast<Standard_Boolean (Contap_SurfFunction::*)( const math_Vector & , math_Vector & , math_Matrix & ) >(&Contap_SurfFunction::Values),
             R"#(None)#"  , py::arg("X"),  py::arg("F"),  py::arg("D"))
        .def("Root",
             (Standard_Real (Contap_SurfFunction::*)() const) static_cast<Standard_Real (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Root),
             R"#(Root is the value of the function at the solution. It is a vector of dimension 1, i-e a real.)#" )
        .def("Tolerance",
             (Standard_Real (Contap_SurfFunction::*)() const) static_cast<Standard_Real (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Tolerance),
             R"#(Returns the value Tol so that if Abs(Func.Root())<Tol the function is considered null.)#" )
        .def("Point",
             (const gp_Pnt & (Contap_SurfFunction::*)() const) static_cast<const gp_Pnt & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Point),
             R"#(Returns the value of the solution point on the surface.)#" )
        .def("Direction3d",
             (const gp_Vec & (Contap_SurfFunction::*)() ) static_cast<const gp_Vec & (Contap_SurfFunction::*)() >(&Contap_SurfFunction::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (Contap_SurfFunction::*)() ) static_cast<const gp_Dir2d & (Contap_SurfFunction::*)() >(&Contap_SurfFunction::Direction2d),
             R"#(None)#" )
        .def("FunctionType",
             (Contap_TFunction (Contap_SurfFunction::*)() const) static_cast<Contap_TFunction (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::FunctionType),
             R"#(None)#" )
        .def("Eye",
             (const gp_Pnt & (Contap_SurfFunction::*)() const) static_cast<const gp_Pnt & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Eye),
             R"#(None)#" )
        .def("Direction",
             (const gp_Dir & (Contap_SurfFunction::*)() const) static_cast<const gp_Dir & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Direction),
             R"#(None)#" )
        .def("Angle",
             (Standard_Real (Contap_SurfFunction::*)() const) static_cast<Standard_Real (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Angle),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Contap_SurfFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Surface),
             R"#(None)#" )
        .def("PSurface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Contap_SurfFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::PSurface),
             R"#(Method is entered for compatibility with IntPatch_TheSurfFunction.)#" )
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Pnt & ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Pnt & ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Eye"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Dir & ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Dir & ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Direction"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Dir & , const Standard_Real ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Dir & , const Standard_Real ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Direction"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (Contap_SurfFunction::*)( const gp_Pnt & , const Standard_Real ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Eye"),  py::arg("Angle"))
        .def("Set",
             (void (Contap_SurfFunction::*)( const Standard_Real ) ) static_cast<void (Contap_SurfFunction::*)( const Standard_Real ) >(&Contap_SurfFunction::Set),
             R"#(None)#"  , py::arg("Tolerance"))
        .def("Point",
             (const gp_Pnt & (Contap_SurfFunction::*)() const) static_cast<const gp_Pnt & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Point),
             R"#(Returns the value of the solution point on the surface.)#" )
        .def("Root",
             (Standard_Real (Contap_SurfFunction::*)() const) static_cast<Standard_Real (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Root),
             R"#(Root is the value of the function at the solution. It is a vector of dimension 1, i-e a real.)#" )
        .def("Tolerance",
             (Standard_Real (Contap_SurfFunction::*)() const) static_cast<Standard_Real (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Tolerance),
             R"#(Returns the value Tol so that if Abs(Func.Root())<Tol the function is considered null.)#" )
        .def("Direction3d",
             (const gp_Vec & (Contap_SurfFunction::*)() ) static_cast<const gp_Vec & (Contap_SurfFunction::*)() >(&Contap_SurfFunction::Direction3d),
             R"#(None)#" )
        .def("Direction2d",
             (const gp_Dir2d & (Contap_SurfFunction::*)() ) static_cast<const gp_Dir2d & (Contap_SurfFunction::*)() >(&Contap_SurfFunction::Direction2d),
             R"#(None)#" )
        .def("Surface",
             (const opencascade::handle<Adaptor3d_HSurface> & (Contap_SurfFunction::*)() const) static_cast<const opencascade::handle<Adaptor3d_HSurface> & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Surface),
             R"#(None)#" )
        .def("Eye",
             (const gp_Pnt & (Contap_SurfFunction::*)() const) static_cast<const gp_Pnt & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Eye),
             R"#(None)#" )
        .def("Direction",
             (const gp_Dir & (Contap_SurfFunction::*)() const) static_cast<const gp_Dir & (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Direction),
             R"#(None)#" )
        .def("Angle",
             (Standard_Real (Contap_SurfFunction::*)() const) static_cast<Standard_Real (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::Angle),
             R"#(None)#" )
        .def("FunctionType",
             (Contap_TFunction (Contap_SurfFunction::*)() const) static_cast<Contap_TFunction (Contap_SurfFunction::*)() const>(&Contap_SurfFunction::FunctionType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Contap_SurfProps , shared_ptr<Contap_SurfProps>>(m,"Contap_SurfProps");

    static_cast<py::class_<Contap_SurfProps , shared_ptr<Contap_SurfProps> >>(m.attr("Contap_SurfProps"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_TheHSequenceOfPoint ,opencascade::handle<Contap_TheHSequenceOfPoint> , Contap_TheSequenceOfPoint, Standard_Transient>>(m.attr("Contap_TheHSequenceOfPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<Contap_Point> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Contap_TheSequenceOfPoint & (Contap_TheHSequenceOfPoint::*)() const) static_cast<const Contap_TheSequenceOfPoint & (Contap_TheHSequenceOfPoint::*)() const>(&Contap_TheHSequenceOfPoint::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Contap_TheHSequenceOfPoint::*)(  const Contap_Point & ) ) static_cast<void (Contap_TheHSequenceOfPoint::*)(  const Contap_Point & ) >(&Contap_TheHSequenceOfPoint::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Contap_TheHSequenceOfPoint::*)( NCollection_Sequence<Contap_Point> & ) ) static_cast<void (Contap_TheHSequenceOfPoint::*)( NCollection_Sequence<Contap_Point> & ) >(&Contap_TheHSequenceOfPoint::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Contap_TheSequenceOfPoint & (Contap_TheHSequenceOfPoint::*)() ) static_cast<Contap_TheSequenceOfPoint & (Contap_TheHSequenceOfPoint::*)() >(&Contap_TheHSequenceOfPoint::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Contap_TheHSequenceOfPoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Contap_TheHSequenceOfPoint::*)() const>(&Contap_TheHSequenceOfPoint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Contap_TheHSequenceOfPoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Contap_TheHSequenceOfPoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_TheIWLineOfTheIWalking ,opencascade::handle<Contap_TheIWLineOfTheIWalking> , Standard_Transient>>(m.attr("Contap_TheIWLineOfTheIWalking"))
    // constructors
    // custom constructors
    // methods
        .def("Cut",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Integer ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Integer ) >(&Contap_TheIWLineOfTheIWalking::Cut),
             R"#(Cut the line at the point of rank Index.)#"  , py::arg("Index"))
        .def("AddPoint",
             (void (Contap_TheIWLineOfTheIWalking::*)( const IntSurf_PntOn2S & ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const IntSurf_PntOn2S & ) >(&Contap_TheIWLineOfTheIWalking::AddPoint),
             R"#(Add a point in the line.)#"  , py::arg("P"))
        .def("AddStatusFirst",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean ) >(&Contap_TheIWLineOfTheIWalking::AddStatusFirst),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasFirst"))
        .def("AddStatusFirst",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) >(&Contap_TheIWLineOfTheIWalking::AddStatusFirst),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasLast"),  py::arg("Index"),  py::arg("P"))
        .def("AddStatusFirstLast",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&Contap_TheIWLineOfTheIWalking::AddStatusFirstLast),
             R"#(None)#"  , py::arg("Closed"),  py::arg("HasFirst"),  py::arg("HasLast"))
        .def("AddStatusLast",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) >(&Contap_TheIWLineOfTheIWalking::AddStatusLast),
             R"#(None)#"  , py::arg("HasLast"))
        .def("AddStatusLast",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean , const Standard_Integer , const IntSurf_PathPoint & ) >(&Contap_TheIWLineOfTheIWalking::AddStatusLast),
             R"#(None)#"  , py::arg("HasLast"),  py::arg("Index"),  py::arg("P"))
        .def("AddIndexPassing",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Integer ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Integer ) >(&Contap_TheIWLineOfTheIWalking::AddIndexPassing),
             R"#(associer a l 'indice du point sur la ligne l'indice du point passant dans l'iterateur de depart)#"  , py::arg("Index"))
        .def("SetTangentVector",
             (void (Contap_TheIWLineOfTheIWalking::*)( const gp_Vec & , const Standard_Integer ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const gp_Vec & , const Standard_Integer ) >(&Contap_TheIWLineOfTheIWalking::SetTangentVector),
             R"#(None)#"  , py::arg("V"),  py::arg("Index"))
        .def("SetTangencyAtBegining",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) >(&Contap_TheIWLineOfTheIWalking::SetTangencyAtBegining),
             R"#(None)#"  , py::arg("IsTangent"))
        .def("SetTangencyAtEnd",
             (void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) ) static_cast<void (Contap_TheIWLineOfTheIWalking::*)( const Standard_Boolean ) >(&Contap_TheIWLineOfTheIWalking::SetTangencyAtEnd),
             R"#(None)#"  , py::arg("IsTangent"))
        .def("NbPoints",
             (Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::NbPoints),
             R"#(Returns the number of points of the line (including first point and end point : see HasLastPoint and HasFirstPoint).)#" )
        .def("Value",
             (const IntSurf_PntOn2S & (Contap_TheIWLineOfTheIWalking::*)( const Standard_Integer ) const) static_cast<const IntSurf_PntOn2S & (Contap_TheIWLineOfTheIWalking::*)( const Standard_Integer ) const>(&Contap_TheIWLineOfTheIWalking::Value),
             R"#(Returns the point of range Index. If index <= 0 or Index > NbPoints, an exception is raised.)#"  , py::arg("Index"))
        .def("Line",
             (const opencascade::handle<IntSurf_LineOn2S> & (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<const opencascade::handle<IntSurf_LineOn2S> & (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::Line),
             R"#(Returns the LineOn2S contained in the walking line.)#" )
        .def("IsClosed",
             (Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::IsClosed),
             R"#(Returns True if the line is closed.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::HasFirstPoint),
             R"#(Returns True if the first point of the line is a marching point . when is HasFirstPoint==False ,the line begins on the natural bound of the surface.the line can be too long)#" )
        .def("HasLastPoint",
             (Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::HasLastPoint),
             R"#(Returns True if the end point of the line is a marching point (Point from IntWS). when is HasFirstPoint==False ,the line ends on the natural bound of the surface.the line can be too long.)#" )
        .def("FirstPoint",
             (const IntSurf_PathPoint & (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<const IntSurf_PathPoint & (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::FirstPoint),
             R"#(Returns the first point of the line when it is a marching point. An exception is raised if HasFirstPoint returns False.)#" )
        .def("FirstPointIndex",
             (Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::FirstPointIndex),
             R"#(Returns the Index of first point of the line when it is a marching point.This index is the index in the PointStartIterator. An exception is raised if HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntSurf_PathPoint & (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<const IntSurf_PathPoint & (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::LastPoint),
             R"#(Returns the last point of the line when it is a marching point. An exception is raised if HasLastPoint returns False.)#" )
        .def("LastPointIndex",
             (Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::LastPointIndex),
             R"#(Returns the index of last point of the line when it is a marching point.This index is the index in the PointStartIterator. An exception is raised if HasLastPoint returns False.)#" )
        .def("NbPassingPoint",
             (Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Integer (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::NbPassingPoint),
             R"#(returns the number of points belonging to Pnts1 which are passing point.)#" )
        .def("TangentVector",
             (const gp_Vec & (Contap_TheIWLineOfTheIWalking::*)( Standard_Integer & ) const) static_cast<const gp_Vec & (Contap_TheIWLineOfTheIWalking::*)( Standard_Integer & ) const>(&Contap_TheIWLineOfTheIWalking::TangentVector),
             R"#(None)#"  , py::arg("Index"))
        .def("IsTangentAtBegining",
             (Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::IsTangentAtBegining),
             R"#(None)#" )
        .def("IsTangentAtEnd",
             (Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<Standard_Boolean (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::IsTangentAtEnd),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Contap_TheIWLineOfTheIWalking::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Contap_TheIWLineOfTheIWalking::*)() const>(&Contap_TheIWLineOfTheIWalking::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("PassingPoint",
             []( Contap_TheIWLineOfTheIWalking &self , const Standard_Integer Index ){ Standard_Integer  IndexLine; Standard_Integer  IndexPnts; self.PassingPoint(Index,IndexLine,IndexPnts); return std::make_tuple(IndexLine,IndexPnts); },
             R"#(returns the index of the point belonging to the line which is associated to the passing point belonging to Pnts1 an exception is raised if Index > NbPassingPoint())#"  , py::arg("Index"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Contap_TheIWLineOfTheIWalking::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Contap_TheIWLineOfTheIWalking::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_TheIWalking , shared_ptr<Contap_TheIWalking> >>(m.attr("Contap_TheIWalking"))
    // constructors
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (Contap_TheIWalking::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (Contap_TheIWalking::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&Contap_TheIWalking::SetTolerance),
             R"#(Deflection is the maximum deflection admitted between two consecutive points on a resulting polyline. Step is the maximum increment admitted between two consecutive points (in 2d space). Epsilon is the tolerance beyond which 2 points are confused)#"  , py::arg("Epsilon"),  py::arg("Deflection"),  py::arg("Step"))
        .def("IsDone",
             (Standard_Boolean (Contap_TheIWalking::*)() const) static_cast<Standard_Boolean (Contap_TheIWalking::*)() const>(&Contap_TheIWalking::IsDone),
             R"#(Returns true if the calculus was successful.)#" )
        .def("NbLines",
             (Standard_Integer (Contap_TheIWalking::*)() const) static_cast<Standard_Integer (Contap_TheIWalking::*)() const>(&Contap_TheIWalking::NbLines),
             R"#(Returns the number of resulting polylines. An exception is raised if IsDone returns False.)#" )
        .def("Value",
             (const opencascade::handle<Contap_TheIWLineOfTheIWalking> & (Contap_TheIWalking::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Contap_TheIWLineOfTheIWalking> & (Contap_TheIWalking::*)( const Standard_Integer ) const>(&Contap_TheIWalking::Value),
             R"#(Returns the polyline of range Index. An exception is raised if IsDone is False. An exception is raised if Index<=0 or Index>NbLines.)#"  , py::arg("Index"))
        .def("NbSinglePnts",
             (Standard_Integer (Contap_TheIWalking::*)() const) static_cast<Standard_Integer (Contap_TheIWalking::*)() const>(&Contap_TheIWalking::NbSinglePnts),
             R"#(Returns the number of points belonging to Pnts on which no line starts or ends. An exception is raised if IsDone returns False.)#" )
        .def("SinglePnt",
             (const IntSurf_PathPoint & (Contap_TheIWalking::*)( const Standard_Integer ) const) static_cast<const IntSurf_PathPoint & (Contap_TheIWalking::*)( const Standard_Integer ) const>(&Contap_TheIWalking::SinglePnt),
             R"#(Returns the point of range Index . An exception is raised if IsDone returns False. An exception is raised if Index<=0 or Index > NbSinglePnts.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_ThePathPointOfTheSearch , shared_ptr<Contap_ThePathPointOfTheSearch> >>(m.attr("Contap_ThePathPointOfTheSearch"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (Contap_ThePathPointOfTheSearch::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<void (Contap_ThePathPointOfTheSearch::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor3d_HVertex> & , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&Contap_ThePathPointOfTheSearch::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("V"),  py::arg("A"),  py::arg("Parameter"))
        .def("SetValue",
             (void (Contap_ThePathPointOfTheSearch::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) ) static_cast<void (Contap_ThePathPointOfTheSearch::*)( const gp_Pnt & , const Standard_Real , const opencascade::handle<Adaptor2d_HCurve2d> & , const Standard_Real ) >(&Contap_ThePathPointOfTheSearch::SetValue),
             R"#(None)#"  , py::arg("P"),  py::arg("Tol"),  py::arg("A"),  py::arg("Parameter"))
        .def("Value",
             (const gp_Pnt & (Contap_ThePathPointOfTheSearch::*)() const) static_cast<const gp_Pnt & (Contap_ThePathPointOfTheSearch::*)() const>(&Contap_ThePathPointOfTheSearch::Value),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (Contap_ThePathPointOfTheSearch::*)() const) static_cast<Standard_Real (Contap_ThePathPointOfTheSearch::*)() const>(&Contap_ThePathPointOfTheSearch::Tolerance),
             R"#(None)#" )
        .def("IsNew",
             (Standard_Boolean (Contap_ThePathPointOfTheSearch::*)() const) static_cast<Standard_Boolean (Contap_ThePathPointOfTheSearch::*)() const>(&Contap_ThePathPointOfTheSearch::IsNew),
             R"#(None)#" )
        .def("Vertex",
             (const opencascade::handle<Adaptor3d_HVertex> & (Contap_ThePathPointOfTheSearch::*)() const) static_cast<const opencascade::handle<Adaptor3d_HVertex> & (Contap_ThePathPointOfTheSearch::*)() const>(&Contap_ThePathPointOfTheSearch::Vertex),
             R"#(None)#" )
        .def("Arc",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_ThePathPointOfTheSearch::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_ThePathPointOfTheSearch::*)() const>(&Contap_ThePathPointOfTheSearch::Arc),
             R"#(None)#" )
        .def("Parameter",
             (Standard_Real (Contap_ThePathPointOfTheSearch::*)() const) static_cast<Standard_Real (Contap_ThePathPointOfTheSearch::*)() const>(&Contap_ThePathPointOfTheSearch::Parameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_TheSearch , shared_ptr<Contap_TheSearch> >>(m.attr("Contap_TheSearch"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Contap_TheSearch::*)() const) static_cast<Standard_Boolean (Contap_TheSearch::*)() const>(&Contap_TheSearch::IsDone),
             R"#(Returns True if the calculus was successful.)#" )
        .def("AllArcSolution",
             (Standard_Boolean (Contap_TheSearch::*)() const) static_cast<Standard_Boolean (Contap_TheSearch::*)() const>(&Contap_TheSearch::AllArcSolution),
             R"#(Returns true if all arc of the Arcs are solution (inside the surface). An exception is raised if IsDone returns False.)#" )
        .def("NbPoints",
             (Standard_Integer (Contap_TheSearch::*)() const) static_cast<Standard_Integer (Contap_TheSearch::*)() const>(&Contap_TheSearch::NbPoints),
             R"#(Returns the number of resulting points. An exception is raised if IsDone returns False (NotDone).)#" )
        .def("Point",
             (const Contap_ThePathPointOfTheSearch & (Contap_TheSearch::*)( const Standard_Integer ) const) static_cast<const Contap_ThePathPointOfTheSearch & (Contap_TheSearch::*)( const Standard_Integer ) const>(&Contap_TheSearch::Point),
             R"#(Returns the resulting point of range Index. The exception NotDone is raised if IsDone() returns False. The exception OutOfRange is raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
        .def("NbSegments",
             (Standard_Integer (Contap_TheSearch::*)() const) static_cast<Standard_Integer (Contap_TheSearch::*)() const>(&Contap_TheSearch::NbSegments),
             R"#(Returns the number of the resulting segments. An exception is raised if IsDone returns False (NotDone).)#" )
        .def("Segment",
             (const Contap_TheSegmentOfTheSearch & (Contap_TheSearch::*)( const Standard_Integer ) const) static_cast<const Contap_TheSegmentOfTheSearch & (Contap_TheSearch::*)( const Standard_Integer ) const>(&Contap_TheSearch::Segment),
             R"#(Returns the resulting segment of range Index. The exception NotDone is raised if IsDone() returns False. The exception OutOfRange is raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_TheSearchInside , shared_ptr<Contap_TheSearchInside> >>(m.attr("Contap_TheSearchInside"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (Contap_TheSearchInside::*)() const) static_cast<Standard_Boolean (Contap_TheSearchInside::*)() const>(&Contap_TheSearchInside::IsDone),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (Contap_TheSearchInside::*)() const) static_cast<Standard_Integer (Contap_TheSearchInside::*)() const>(&Contap_TheSearchInside::NbPoints),
             R"#(Returns the number of points. The exception NotDone if raised if IsDone returns False.)#" )
        .def("Value",
             (const IntSurf_InteriorPoint & (Contap_TheSearchInside::*)( const Standard_Integer ) const) static_cast<const IntSurf_InteriorPoint & (Contap_TheSearchInside::*)( const Standard_Integer ) const>(&Contap_TheSearchInside::Value),
             R"#(Returns the point of range Index. The exception NotDone if raised if IsDone returns False. The exception OutOfRange if raised if Index <= 0 or Index > NbPoints.)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Contap_TheSegmentOfTheSearch , shared_ptr<Contap_TheSegmentOfTheSearch> >>(m.attr("Contap_TheSegmentOfTheSearch"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (Contap_TheSegmentOfTheSearch::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) ) static_cast<void (Contap_TheSegmentOfTheSearch::*)( const opencascade::handle<Adaptor2d_HCurve2d> & ) >(&Contap_TheSegmentOfTheSearch::SetValue),
             R"#(Defines the concerned arc.)#"  , py::arg("A"))
        .def("Curve",
             (const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_TheSegmentOfTheSearch::*)() const) static_cast<const opencascade::handle<Adaptor2d_HCurve2d> & (Contap_TheSegmentOfTheSearch::*)() const>(&Contap_TheSegmentOfTheSearch::Curve),
             R"#(Returns the geometric curve on the surface 's domain which is solution.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (Contap_TheSegmentOfTheSearch::*)() const) static_cast<Standard_Boolean (Contap_TheSegmentOfTheSearch::*)() const>(&Contap_TheSegmentOfTheSearch::HasFirstPoint),
             R"#(Returns True if there is a vertex (ThePathPoint) defining the lowest valid parameter on the arc.)#" )
        .def("FirstPoint",
             (const Contap_ThePathPointOfTheSearch & (Contap_TheSegmentOfTheSearch::*)() const) static_cast<const Contap_ThePathPointOfTheSearch & (Contap_TheSegmentOfTheSearch::*)() const>(&Contap_TheSegmentOfTheSearch::FirstPoint),
             R"#(Returns the first point.)#" )
        .def("HasLastPoint",
             (Standard_Boolean (Contap_TheSegmentOfTheSearch::*)() const) static_cast<Standard_Boolean (Contap_TheSegmentOfTheSearch::*)() const>(&Contap_TheSegmentOfTheSearch::HasLastPoint),
             R"#(Returns True if there is a vertex (ThePathPoint) defining the greatest valid parameter on the arc.)#" )
        .def("LastPoint",
             (const Contap_ThePathPointOfTheSearch & (Contap_TheSegmentOfTheSearch::*)() const) static_cast<const Contap_ThePathPointOfTheSearch & (Contap_TheSegmentOfTheSearch::*)() const>(&Contap_TheSegmentOfTheSearch::LastPoint),
             R"#(Returns the last point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Contap_ContAna.hxx
// ./opencascade/Contap_TheSearchInside.hxx
// ./opencascade/Contap_Point.hxx
// ./opencascade/Contap_ArcFunction.hxx
// ./opencascade/Contap_SequenceOfPathPointOfTheSearch.hxx
// ./opencascade/Contap_SurfProps.hxx
// ./opencascade/Contap_Contour.hxx
// ./opencascade/Contap_TheHSequenceOfPoint.hxx
// ./opencascade/Contap_ThePathPointOfTheSearch.hxx
// ./opencascade/Contap_TheSequenceOfLine.hxx
// ./opencascade/Contap_SurfFunction.hxx
// ./opencascade/Contap_Line.hxx
// ./opencascade/Contap_SequenceOfSegmentOfTheSearch.hxx
// ./opencascade/Contap_HContTool.hxx
// ./opencascade/Contap_TheSegmentOfTheSearch.hxx
// ./opencascade/Contap_TheSearch.hxx
// ./opencascade/Contap_HCurve2dTool.hxx
// ./opencascade/Contap_IType.hxx
// ./opencascade/Contap_TheIWLineOfTheIWalking.hxx
// ./opencascade/Contap_TheSequenceOfPoint.hxx
// ./opencascade/Contap_TFunction.hxx
// ./opencascade/Contap_TheIWalking.hxx
// ./opencascade/Contap_SequenceOfIWLineOfTheIWalking.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<Contap_ThePathPointOfTheSearch>(m,"Contap_SequenceOfPathPointOfTheSearch");
    register_template_NCollection_Sequence<Contap_Line>(m,"Contap_TheSequenceOfLine");
    register_template_NCollection_Sequence<Contap_TheSegmentOfTheSearch>(m,"Contap_SequenceOfSegmentOfTheSearch");
    register_template_NCollection_Sequence<Contap_Point>(m,"Contap_TheSequenceOfPoint");
    register_template_NCollection_Sequence<opencascade::handle<Contap_TheIWLineOfTheIWalking> >(m,"Contap_SequenceOfIWLineOfTheIWalking");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
