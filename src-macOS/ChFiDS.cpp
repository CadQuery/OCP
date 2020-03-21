
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <Law_Composite.hxx>
#include <ChFiDS_Spine.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Geom2d_Curve.hxx>
#include <ChFiDS_SurfData.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>

// module includes
#include <ChFiDS_ChamfMethod.hxx>
#include <ChFiDS_ChamfMode.hxx>
#include <ChFiDS_ChamfSpine.hxx>
#include <ChFiDS_CircSection.hxx>
#include <ChFiDS_CommonPoint.hxx>
#include <ChFiDS_ElSpine.hxx>
#include <ChFiDS_ErrorStatus.hxx>
#include <ChFiDS_FaceInterference.hxx>
#include <ChFiDS_FilSpine.hxx>
#include <ChFiDS_HData.hxx>
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx>
#include <ChFiDS_ListIteratorOfListOfHElSpine.hxx>
#include <ChFiDS_ListIteratorOfListOfStripe.hxx>
#include <ChFiDS_ListIteratorOfRegularities.hxx>
#include <ChFiDS_ListOfHElSpine.hxx>
#include <ChFiDS_ListOfStripe.hxx>
#include <ChFiDS_Map.hxx>
#include <ChFiDS_Regul.hxx>
#include <ChFiDS_Regularities.hxx>
#include <ChFiDS_SecArray1.hxx>
#include <ChFiDS_SecHArray1.hxx>
#include <ChFiDS_SequenceOfSpine.hxx>
#include <ChFiDS_SequenceOfSurfData.hxx>
#include <ChFiDS_Spine.hxx>
#include <ChFiDS_State.hxx>
#include <ChFiDS_Stripe.hxx>
#include <ChFiDS_StripeArray1.hxx>
#include <ChFiDS_StripeMap.hxx>
#include <ChFiDS_SurfData.hxx>

// template related includes
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_StripeArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_Regularities.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_Regularities.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_ListOfStripe.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_ListOfStripe.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_SequenceOfSpine.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_SecArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ChFiDS_SequenceOfSurfData.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ChFiDS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ChFiDS"));


//Python trampoline classes

// classes


    static_cast<py::class_<ChFiDS_CircSection , shared_ptr<ChFiDS_CircSection> >>(m.attr("ChFiDS_CircSection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_CommonPoint , shared_ptr<ChFiDS_CommonPoint> >>(m.attr("ChFiDS_CommonPoint"))
    // constructors
    // custom constructors
    // methods
        .def("SetVertex",
             (void (ChFiDS_CommonPoint::*)( const TopoDS_Vertex & ) ) static_cast<void (ChFiDS_CommonPoint::*)( const TopoDS_Vertex & ) >(&ChFiDS_CommonPoint::SetVertex),
             R"#(Sets the values of a point which is a vertex on the initial facet of restriction of one of the surface.)#"  , py::arg("theVertex"))
        .def("SetPoint",
             (void (ChFiDS_CommonPoint::*)( const gp_Pnt & ) ) static_cast<void (ChFiDS_CommonPoint::*)( const gp_Pnt & ) >(&ChFiDS_CommonPoint::SetPoint),
             R"#(Set the 3d point for a commonpoint that is not a vertex or on an arc.)#"  , py::arg("thePoint"))
        .def("SetVector",
             (void (ChFiDS_CommonPoint::*)( const gp_Vec & ) ) static_cast<void (ChFiDS_CommonPoint::*)( const gp_Vec & ) >(&ChFiDS_CommonPoint::SetVector),
             R"#(Set the output 3d vector)#"  , py::arg("theVector"))
        .def("SetTolerance",
             (void (ChFiDS_CommonPoint::*)( const Standard_Real ) ) static_cast<void (ChFiDS_CommonPoint::*)( const Standard_Real ) >(&ChFiDS_CommonPoint::SetTolerance),
             R"#(This method set the fuzziness on the point.)#"  , py::arg("Tol"))
        .def("Tolerance",
             (Standard_Real (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Real (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Tolerance),
             R"#(This method returns the fuzziness on the point.)#" )
        .def("IsVertex",
             (Standard_Boolean (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Boolean (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::IsVertex),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the surface.)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (ChFiDS_CommonPoint::*)() const) static_cast<const TopoDS_Vertex & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Vertex),
             R"#(Returns the information about the point when it is on the domain of the first patch, i-e when the function IsVertex returns True. Otherwise, an exception is raised.)#" )
        .def("IsOnArc",
             (Standard_Boolean (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Boolean (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::IsOnArc),
             R"#(Returns TRUE if the point is a on an edge of the initial restriction facet of the surface.)#" )
        .def("Point",
             (const gp_Pnt & (ChFiDS_CommonPoint::*)() const) static_cast<const gp_Pnt & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Point),
             R"#(Returns the 3d point)#" )
        .def("HasVector",
             (Standard_Boolean (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Boolean (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::HasVector),
             R"#(Returns TRUE if the output vector is stored.)#" )
        .def("Vector",
             (const gp_Vec & (ChFiDS_CommonPoint::*)() const) static_cast<const gp_Vec & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Vector),
             R"#(Returns the output 3d vector)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_ElSpine , shared_ptr<ChFiDS_ElSpine> , Adaptor3d_Curve>>(m.attr("ChFiDS_ElSpine"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::LastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (ChFiDS_ElSpine::*)() const) static_cast<GeomAbs_Shape (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (ChFiDS_ElSpine::*)( const GeomAbs_Shape ) const) static_cast<Standard_Integer (ChFiDS_ElSpine::*)( const GeomAbs_Shape ) const>(&ChFiDS_ElSpine::NbIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("Intervals",
             (void (ChFiDS_ElSpine::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const) static_cast<void (ChFiDS_ElSpine::*)( NCollection_Array1<Standard_Real> & , const GeomAbs_Shape ) const>(&ChFiDS_ElSpine::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (ChFiDS_ElSpine::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (ChFiDS_ElSpine::*)( const Standard_Real , const Standard_Real , const Standard_Real ) const>(&ChFiDS_ElSpine::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion.)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("Resolution",
             (Standard_Real (ChFiDS_ElSpine::*)( const Standard_Real ) const) static_cast<Standard_Real (ChFiDS_ElSpine::*)( const Standard_Real ) const>(&ChFiDS_ElSpine::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (ChFiDS_ElSpine::*)() const) static_cast<GeomAbs_CurveType (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::GetType),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ChFiDS_ElSpine::*)() const) static_cast<Standard_Boolean (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (ChFiDS_ElSpine::*)( const Standard_Real ) const) static_cast<gp_Pnt (ChFiDS_ElSpine::*)( const Standard_Real ) const>(&ChFiDS_ElSpine::Value),
             R"#(None)#"  , py::arg("AbsC"))
        .def("D0",
             (void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & ) const>(&ChFiDS_ElSpine::D0),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"))
        .def("D1",
             (void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & , gp_Vec & ) const>(&ChFiDS_ElSpine::D1),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & ) const>(&ChFiDS_ElSpine::D2),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real , gp_Pnt & , gp_Vec & , gp_Vec & , gp_Vec & ) const>(&ChFiDS_ElSpine::D3),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("Line",
             (gp_Lin (ChFiDS_ElSpine::*)() const) static_cast<gp_Lin (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (ChFiDS_ElSpine::*)() const) static_cast<gp_Circ (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Circle),
             R"#(None)#" )
        .def("Ellipse",
             (gp_Elips (ChFiDS_ElSpine::*)() const) static_cast<gp_Elips (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Ellipse),
             R"#(None)#" )
        .def("Hyperbola",
             (gp_Hypr (ChFiDS_ElSpine::*)() const) static_cast<gp_Hypr (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Hyperbola),
             R"#(None)#" )
        .def("Parabola",
             (gp_Parab (ChFiDS_ElSpine::*)() const) static_cast<gp_Parab (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Parabola),
             R"#(None)#" )
        .def("Bezier",
             (opencascade::handle<Geom_BezierCurve> (ChFiDS_ElSpine::*)() const) static_cast<opencascade::handle<Geom_BezierCurve> (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Bezier),
             R"#(None)#" )
        .def("BSpline",
             (opencascade::handle<Geom_BSplineCurve> (ChFiDS_ElSpine::*)() const) static_cast<opencascade::handle<Geom_BSplineCurve> (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::BSpline),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_FaceInterference , shared_ptr<ChFiDS_FaceInterference> >>(m.attr("ChFiDS_FaceInterference"))
    // constructors
    // custom constructors
    // methods
        .def("SetInterference",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer , const TopAbs_Orientation , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer , const TopAbs_Orientation , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & ) >(&ChFiDS_FaceInterference::SetInterference),
             R"#(None)#"  , py::arg("LineIndex"),  py::arg("Trans"),  py::arg("PCurv1"),  py::arg("PCurv2"))
        .def("SetFirstParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real ) >(&ChFiDS_FaceInterference::SetFirstParameter),
             R"#(None)#"  , py::arg("U1"))
        .def("SetLastParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real ) >(&ChFiDS_FaceInterference::SetLastParameter),
             R"#(None)#"  , py::arg("U1"))
        .def("LineIndex",
             (Standard_Integer (ChFiDS_FaceInterference::*)() const) static_cast<Standard_Integer (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::LineIndex),
             R"#(None)#" )
        .def("SetLineIndex",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer ) >(&ChFiDS_FaceInterference::SetLineIndex),
             R"#(None)#"  , py::arg("I"))
        .def("Transition",
             (TopAbs_Orientation (ChFiDS_FaceInterference::*)() const) static_cast<TopAbs_Orientation (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::Transition),
             R"#(None)#" )
        .def("PCurveOnFace",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::PCurveOnFace),
             R"#(None)#" )
        .def("PCurveOnSurf",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::PCurveOnSurf),
             R"#(None)#" )
        .def("ChangePCurveOnFace",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() >(&ChFiDS_FaceInterference::ChangePCurveOnFace),
             R"#(None)#" )
        .def("ChangePCurveOnSurf",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() >(&ChFiDS_FaceInterference::ChangePCurveOnSurf),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (ChFiDS_FaceInterference::*)() const) static_cast<Standard_Real (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ChFiDS_FaceInterference::*)() const) static_cast<Standard_Real (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::LastParameter),
             R"#(None)#" )
        .def("SetInterference",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer , const TopAbs_Orientation , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer , const TopAbs_Orientation , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & ) >(&ChFiDS_FaceInterference::SetInterference),
             R"#(None)#"  , py::arg("LineIndex"),  py::arg("Trans"),  py::arg("PCurv1"),  py::arg("PCurv2"))
        .def("SetLineIndex",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer ) >(&ChFiDS_FaceInterference::SetLineIndex),
             R"#(None)#"  , py::arg("I"))
        .def("SetFirstParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real ) >(&ChFiDS_FaceInterference::SetFirstParameter),
             R"#(None)#"  , py::arg("U1"))
        .def("SetLastParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real ) >(&ChFiDS_FaceInterference::SetLastParameter),
             R"#(None)#"  , py::arg("U1"))
        .def("LineIndex",
             (Standard_Integer (ChFiDS_FaceInterference::*)() const) static_cast<Standard_Integer (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::LineIndex),
             R"#(None)#" )
        .def("Transition",
             (TopAbs_Orientation (ChFiDS_FaceInterference::*)() const) static_cast<TopAbs_Orientation (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::Transition),
             R"#(None)#" )
        .def("PCurveOnFace",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::PCurveOnFace),
             R"#(None)#" )
        .def("PCurveOnSurf",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::PCurveOnSurf),
             R"#(None)#" )
        .def("ChangePCurveOnFace",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() >(&ChFiDS_FaceInterference::ChangePCurveOnFace),
             R"#(None)#" )
        .def("ChangePCurveOnSurf",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_FaceInterference::*)() >(&ChFiDS_FaceInterference::ChangePCurveOnSurf),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (ChFiDS_FaceInterference::*)() const) static_cast<Standard_Real (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ChFiDS_FaceInterference::*)() const) static_cast<Standard_Real (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::LastParameter),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_HData ,opencascade::handle<ChFiDS_HData> , ChFiDS_SequenceOfSurfData, Standard_Transient>>(m.attr("ChFiDS_HData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() const) static_cast<const ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() const>(&ChFiDS_HData::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (ChFiDS_HData::*)(  const opencascade::handle<ChFiDS_SurfData> & ) ) static_cast<void (ChFiDS_HData::*)(  const opencascade::handle<ChFiDS_SurfData> & ) >(&ChFiDS_HData::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (ChFiDS_HData::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & ) ) static_cast<void (ChFiDS_HData::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & ) >(&ChFiDS_HData::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() ) static_cast<ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() >(&ChFiDS_HData::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_HData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_HData::*)() const>(&ChFiDS_HData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_HData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_HData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_HElSpine ,opencascade::handle<ChFiDS_HElSpine> , Adaptor3d_HCurve>>(m.attr("ChFiDS_HElSpine"))
    // constructors
    // custom constructors
    // methods
        .def("Curve",
             (const Adaptor3d_Curve & (ChFiDS_HElSpine::*)() const) static_cast<const Adaptor3d_Curve & (ChFiDS_HElSpine::*)() const>(&ChFiDS_HElSpine::Curve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("GetCurve",
             (Adaptor3d_Curve & (ChFiDS_HElSpine::*)() ) static_cast<Adaptor3d_Curve & (ChFiDS_HElSpine::*)() >(&ChFiDS_HElSpine::GetCurve),
             R"#(Returns the curve used to create the GenHCurve. This is redefined from HCurve, cannot be inline.)#" )
        .def("ChangeCurve",
             (ChFiDS_ElSpine & (ChFiDS_HElSpine::*)() ) static_cast<ChFiDS_ElSpine & (ChFiDS_HElSpine::*)() >(&ChFiDS_HElSpine::ChangeCurve),
             R"#(Returns the curve used to create the GenHCurve.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_HElSpine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_HElSpine::*)() const>(&ChFiDS_HElSpine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_HElSpine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_HElSpine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_Map , shared_ptr<ChFiDS_Map> >>(m.attr("ChFiDS_Map"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_Regul , shared_ptr<ChFiDS_Regul> >>(m.attr("ChFiDS_Regul"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_SecHArray1 ,opencascade::handle<ChFiDS_SecHArray1> , ChFiDS_SecArray1, Standard_Transient>>(m.attr("ChFiDS_SecHArray1"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const ChFiDS_CircSection & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<ChFiDS_CircSection> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() const) static_cast<const ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() const>(&ChFiDS_SecHArray1::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() ) static_cast<ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() >(&ChFiDS_SecHArray1::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_SecHArray1::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_SecHArray1::*)() const>(&ChFiDS_SecHArray1::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_SecHArray1::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_SecHArray1::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_Spine ,opencascade::handle<ChFiDS_Spine> , Standard_Transient>>(m.attr("ChFiDS_Spine"))
    // constructors
    // custom constructors
    // methods
        .def("SetEdges",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::SetEdges),
             R"#(store edges composing the guideline)#"  , py::arg("E"))
        .def("SetOffsetEdges",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::SetOffsetEdges),
             R"#(store offset edges composing the offset guideline)#"  , py::arg("E"))
        .def("PutInFirst",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::PutInFirst),
             R"#(store the edge at the first position before all others)#"  , py::arg("E"))
        .def("PutInFirstOffset",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::PutInFirstOffset),
             R"#(store the offset edge at the first position before all others)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::NbEdges),
             R"#(None)#" )
        .def("Edges",
             (const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const>(&ChFiDS_Spine::Edges),
             R"#(None)#"  , py::arg("I"))
        .def("OffsetEdges",
             (const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const>(&ChFiDS_Spine::OffsetEdges),
             R"#(None)#"  , py::arg("I"))
        .def("SetFirstStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State ) >(&ChFiDS_Spine::SetFirstStatus),
             R"#(stores if the start of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("SetLastStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State ) >(&ChFiDS_Spine::SetLastStatus),
             R"#(stores if the end of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("AppendElSpine",
             (void (ChFiDS_Spine::*)( const opencascade::handle<ChFiDS_HElSpine> & ) ) static_cast<void (ChFiDS_Spine::*)( const opencascade::handle<ChFiDS_HElSpine> & ) >(&ChFiDS_Spine::AppendElSpine),
             R"#(None)#"  , py::arg("Els"))
        .def("AppendOffsetElSpine",
             (void (ChFiDS_Spine::*)( const opencascade::handle<ChFiDS_HElSpine> & ) ) static_cast<void (ChFiDS_Spine::*)( const opencascade::handle<ChFiDS_HElSpine> & ) >(&ChFiDS_Spine::AppendOffsetElSpine),
             R"#(None)#"  , py::arg("Els"))
        .def("Reset",
             (void (ChFiDS_Spine::*)( const Standard_Boolean ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Boolean ) >(&ChFiDS_Spine::Reset),
             R"#(None)#"  , py::arg("AllData")=static_cast<const Standard_Boolean>(Standard_False))
        .def("CurrentIndexOfElementarySpine",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::CurrentIndexOfElementarySpine),
             R"#(None)#" )
        .def("FirstStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::FirstStatus),
             R"#(returns if the set of edges starts on a free boundary or if the first vertex is a breakpoint or if the set is closed)#" )
        .def("LastStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::LastStatus),
             R"#(returns the state at the end of the set)#" )
        .def("Status",
             (ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean ) const) static_cast<ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean ) const>(&ChFiDS_Spine::Status),
             R"#(None)#"  , py::arg("IsFirst"))
        .def("SetStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State , const Standard_Boolean ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State , const Standard_Boolean ) >(&ChFiDS_Spine::SetStatus),
             R"#(None)#"  , py::arg("S"),  py::arg("IsFirst"))
        .def("IsTangencyExtremity",
             (Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean ) const) static_cast<Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean ) const>(&ChFiDS_Spine::IsTangencyExtremity),
             R"#(returns if the set of edges starts (or end) on Tangency point.)#"  , py::arg("IsFirst"))
        .def("SetTangencyExtremity",
             (void (ChFiDS_Spine::*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Boolean , const Standard_Boolean ) >(&ChFiDS_Spine::SetTangencyExtremity),
             R"#(None)#"  , py::arg("IsTangency"),  py::arg("IsFirst"))
        .def("Mode",
             (ChFiDS_ChamfMode (ChFiDS_Spine::*)() const) static_cast<ChFiDS_ChamfMode (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::Mode),
             R"#(Return the mode of chamfers used)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_Spine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::DynamicType),
             R"#(None)#" )
        .def("SetFirstStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State ) >(&ChFiDS_Spine::SetFirstStatus),
             R"#(stores if the start of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("SetLastStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State ) >(&ChFiDS_Spine::SetLastStatus),
             R"#(stores if the end of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("FirstStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::FirstStatus),
             R"#(returns if the set of edges starts on a free boundary or if the first vertex is a breakpoint or if the set is closed)#" )
        .def("LastStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::LastStatus),
             R"#(returns the state at the end of the set)#" )
        .def("SetStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State , const Standard_Boolean ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State , const Standard_Boolean ) >(&ChFiDS_Spine::SetStatus),
             R"#(None)#"  , py::arg("S"),  py::arg("IsFirst"))
        .def("Status",
             (ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean ) const) static_cast<ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean ) const>(&ChFiDS_Spine::Status),
             R"#(None)#"  , py::arg("IsFirst"))
        .def("SetTangencyExtremity",
             (void (ChFiDS_Spine::*)( const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Boolean , const Standard_Boolean ) >(&ChFiDS_Spine::SetTangencyExtremity),
             R"#(None)#"  , py::arg("IsTangency"),  py::arg("IsFirst"))
        .def("IsTangencyExtremity",
             (Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean ) const) static_cast<Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean ) const>(&ChFiDS_Spine::IsTangencyExtremity),
             R"#(returns if the set of edges starts (or end) on Tangency point.)#"  , py::arg("IsFirst"))
        .def("NbEdges",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::NbEdges),
             R"#(None)#" )
        .def("Edges",
             (const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const>(&ChFiDS_Spine::Edges),
             R"#(None)#"  , py::arg("I"))
        .def("OffsetEdges",
             (const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer ) const>(&ChFiDS_Spine::OffsetEdges),
             R"#(None)#"  , py::arg("I"))
        .def("SetEdges",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::SetEdges),
             R"#(store edges composing the guideline)#"  , py::arg("E"))
        .def("SetOffsetEdges",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::SetOffsetEdges),
             R"#(store offset edges composing the offset guideline)#"  , py::arg("E"))
        .def("PutInFirst",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::PutInFirst),
             R"#(store the edge at the first position before all others)#"  , py::arg("E"))
        .def("PutInFirstOffset",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge & ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge & ) >(&ChFiDS_Spine::PutInFirstOffset),
             R"#(store the offset edge at the first position before all others)#"  , py::arg("E"))
        .def("CurrentIndexOfElementarySpine",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::CurrentIndexOfElementarySpine),
             R"#(None)#" )
        .def("Mode",
             (ChFiDS_ChamfMode (ChFiDS_Spine::*)() const) static_cast<ChFiDS_ChamfMode (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::Mode),
             R"#(Return the mode of chamfers used)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_Spine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_Stripe ,opencascade::handle<ChFiDS_Stripe> , Standard_Transient>>(m.attr("ChFiDS_Stripe"))
    // constructors
    // custom constructors
    // methods
        .def("SetOfSurfData",
             (const opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::SetOfSurfData),
             R"#(None)#" )
        .def("Spine",
             (const opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::Spine),
             R"#(None)#" )
        .def("OrientationOnFace1",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::OrientationOnFace1),
             R"#(None)#" )
        .def("OrientationOnFace2",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::OrientationOnFace2),
             R"#(None)#" )
        .def("Choix",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::Choix),
             R"#(None)#" )
        .def("ChangeSetOfSurfData",
             (opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeSetOfSurfData),
             R"#(None)#" )
        .def("ChangeSpine",
             (opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeSpine),
             R"#(None)#" )
        .def("OrientationOnFace1",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::OrientationOnFace1),
             R"#(None)#"  , py::arg("Or1"))
        .def("OrientationOnFace2",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::OrientationOnFace2),
             R"#(None)#"  , py::arg("Or2"))
        .def("Choix",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::Choix),
             R"#(None)#"  , py::arg("C"))
        .def("ChangeFirstParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) >(&ChFiDS_Stripe::ChangeFirstParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("ChangeLastParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) >(&ChFiDS_Stripe::ChangeLastParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("FirstCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstCurve),
             R"#(None)#" )
        .def("LastCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastCurve),
             R"#(None)#" )
        .def("ChangeFirstCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeFirstCurve),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeLastCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeLastCurve),
             R"#(None)#"  , py::arg("Index"))
        .def("FirstPCurve",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstPCurve),
             R"#(None)#" )
        .def("LastPCurve",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastPCurve),
             R"#(None)#" )
        .def("ChangeFirstPCurve",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeFirstPCurve),
             R"#(None)#" )
        .def("ChangeLastPCurve",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeLastPCurve),
             R"#(None)#" )
        .def("FirstPCurveOrientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstPCurveOrientation),
             R"#(None)#" )
        .def("LastPCurveOrientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastPCurveOrientation),
             R"#(None)#" )
        .def("FirstPCurveOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::FirstPCurveOrientation),
             R"#(None)#"  , py::arg("O"))
        .def("LastPCurveOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::LastPCurveOrientation),
             R"#(None)#"  , py::arg("O"))
        .def("IndexFirstPointOnS1",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexFirstPointOnS1),
             R"#(None)#" )
        .def("IndexFirstPointOnS2",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexFirstPointOnS2),
             R"#(None)#" )
        .def("IndexLastPointOnS1",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexLastPointOnS1),
             R"#(None)#" )
        .def("IndexLastPointOnS2",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexLastPointOnS2),
             R"#(None)#" )
        .def("ChangeIndexFirstPointOnS1",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexFirstPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS1",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::DynamicType),
             R"#(None)#" )
        .def("SetOfSurfData",
             (const opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::SetOfSurfData),
             R"#(None)#" )
        .def("Spine",
             (const opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::Spine),
             R"#(None)#" )
        .def("OrientationOnFace1",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::OrientationOnFace1),
             R"#(None)#" )
        .def("OrientationOnFace2",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::OrientationOnFace2),
             R"#(None)#" )
        .def("Choix",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::Choix),
             R"#(None)#" )
        .def("ChangeSetOfSurfData",
             (opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<ChFiDS_HData> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeSetOfSurfData),
             R"#(None)#" )
        .def("ChangeSpine",
             (opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<ChFiDS_Spine> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeSpine),
             R"#(None)#" )
        .def("OrientationOnFace1",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::OrientationOnFace1),
             R"#(None)#"  , py::arg("Or1"))
        .def("OrientationOnFace2",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::OrientationOnFace2),
             R"#(None)#"  , py::arg("Or2"))
        .def("Choix",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::Choix),
             R"#(None)#"  , py::arg("C"))
        .def("ChangeFirstParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) >(&ChFiDS_Stripe::ChangeFirstParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("ChangeLastParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real , const Standard_Real ) >(&ChFiDS_Stripe::ChangeLastParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("FirstCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstCurve),
             R"#(None)#" )
        .def("LastCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastCurve),
             R"#(None)#" )
        .def("ChangeFirstCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeFirstCurve),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeLastCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeLastCurve),
             R"#(None)#"  , py::arg("Index"))
        .def("FirstPCurve",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstPCurve),
             R"#(None)#" )
        .def("LastPCurve",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastPCurve),
             R"#(None)#" )
        .def("ChangeFirstPCurve",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeFirstPCurve),
             R"#(None)#" )
        .def("ChangeLastPCurve",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::ChangeLastPCurve),
             R"#(None)#" )
        .def("IndexFirstPointOnS1",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexFirstPointOnS1),
             R"#(None)#" )
        .def("IndexLastPointOnS1",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexLastPointOnS1),
             R"#(None)#" )
        .def("IndexFirstPointOnS2",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexFirstPointOnS2),
             R"#(None)#" )
        .def("IndexLastPointOnS2",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::IndexLastPointOnS2),
             R"#(None)#" )
        .def("ChangeIndexFirstPointOnS1",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS1",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexFirstPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("FirstPCurveOrientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstPCurveOrientation),
             R"#(None)#" )
        .def("LastPCurveOrientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastPCurveOrientation),
             R"#(None)#" )
        .def("FirstPCurveOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::FirstPCurveOrientation),
             R"#(None)#"  , py::arg("O"))
        .def("LastPCurveOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ) >(&ChFiDS_Stripe::LastPCurveOrientation),
             R"#(None)#"  , py::arg("O"))
    // methods using call by reference i.s.o. return
        .def("FirstParameters",
             []( ChFiDS_Stripe &self   ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.FirstParameters(Pdeb,Pfin); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#" )
        .def("LastParameters",
             []( ChFiDS_Stripe &self   ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.LastParameters(Pdeb,Pfin); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#" )
        .def("FirstParameters",
             []( ChFiDS_Stripe &self   ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.FirstParameters(Pdeb,Pfin); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#" )
        .def("LastParameters",
             []( ChFiDS_Stripe &self   ){ Standard_Real  Pdeb; Standard_Real  Pfin; self.LastParameters(Pdeb,Pfin); return std::make_tuple(Pdeb,Pfin); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_Stripe::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_StripeMap , shared_ptr<ChFiDS_StripeMap> >>(m.attr("ChFiDS_StripeMap"))
    // constructors
    // custom constructors
    // methods
        .def("Extent",
             (Standard_Integer (ChFiDS_StripeMap::*)() const) static_cast<Standard_Integer (ChFiDS_StripeMap::*)() const>(&ChFiDS_StripeMap::Extent),
             R"#(None)#" )
        .def("FindKey",
             (const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer ) const) static_cast<const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer ) const>(&ChFiDS_StripeMap::FindKey),
             R"#(None)#"  , py::arg("I"))
        .def("Extent",
             (Standard_Integer (ChFiDS_StripeMap::*)() const) static_cast<Standard_Integer (ChFiDS_StripeMap::*)() const>(&ChFiDS_StripeMap::Extent),
             R"#(None)#" )
        .def("FindKey",
             (const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer ) const) static_cast<const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer ) const>(&ChFiDS_StripeMap::FindKey),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_SurfData ,opencascade::handle<ChFiDS_SurfData> , Standard_Transient>>(m.attr("ChFiDS_SurfData"))
    // constructors
    // custom constructors
    // methods
        .def("IndexOfS1",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfS1),
             R"#(None)#" )
        .def("IndexOfS2",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfS2),
             R"#(None)#" )
        .def("IsOnCurve1",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IsOnCurve1),
             R"#(None)#" )
        .def("IsOnCurve2",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IsOnCurve2),
             R"#(None)#" )
        .def("IndexOfC1",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfC1),
             R"#(None)#" )
        .def("IndexOfC2",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfC2),
             R"#(None)#" )
        .def("Surf",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::Surf),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (ChFiDS_SurfData::*)() const) static_cast<TopAbs_Orientation (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::Orientation),
             R"#(None)#" )
        .def("InterferenceOnS1",
             (const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::InterferenceOnS1),
             R"#(None)#" )
        .def("InterferenceOnS2",
             (const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::InterferenceOnS2),
             R"#(None)#" )
        .def("VertexFirstOnS1",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexFirstOnS1),
             R"#(None)#" )
        .def("VertexFirstOnS2",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexFirstOnS2),
             R"#(None)#" )
        .def("VertexLastOnS1",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexLastOnS1),
             R"#(None)#" )
        .def("VertexLastOnS2",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexLastOnS2),
             R"#(None)#" )
        .def("ChangeIndexOfS1",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::ChangeIndexOfS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexOfS2",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::ChangeIndexOfS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeSurf",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::ChangeSurf),
             R"#(None)#"  , py::arg("Index"))
        .def("SetIndexOfC1",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::SetIndexOfC1),
             R"#(None)#"  , py::arg("Index"))
        .def("SetIndexOfC2",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::SetIndexOfC2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeOrientation",
             (TopAbs_Orientation & (ChFiDS_SurfData::*)() ) static_cast<TopAbs_Orientation & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeOrientation),
             R"#(None)#" )
        .def("ChangeInterferenceOnS1",
             (ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeInterferenceOnS1),
             R"#(None)#" )
        .def("ChangeInterferenceOnS2",
             (ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeInterferenceOnS2),
             R"#(None)#" )
        .def("ChangeVertexFirstOnS1",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexFirstOnS1),
             R"#(None)#" )
        .def("ChangeVertexFirstOnS2",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexFirstOnS2),
             R"#(None)#" )
        .def("ChangeVertexLastOnS1",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexLastOnS1),
             R"#(None)#" )
        .def("ChangeVertexLastOnS2",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexLastOnS2),
             R"#(None)#" )
        .def("IsOnCurve",
             (Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer ) const>(&ChFiDS_SurfData::IsOnCurve),
             R"#(None)#"  , py::arg("OnS"))
        .def("IndexOfC",
             (Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer ) const>(&ChFiDS_SurfData::IndexOfC),
             R"#(None)#"  , py::arg("OnS"))
        .def("TwistOnS1",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS2),
             R"#(None)#" )
        .def("TwistOnS1",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean ) >(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#"  , py::arg("T"))
        .def("TwistOnS2",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean ) >(&ChFiDS_SurfData::TwistOnS2),
             R"#(None)#"  , py::arg("T"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_SurfData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::DynamicType),
             R"#(None)#" )
        .def("IndexOfS1",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfS1),
             R"#(None)#" )
        .def("IsOnCurve1",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IsOnCurve1),
             R"#(None)#" )
        .def("IndexOfC1",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfC1),
             R"#(None)#" )
        .def("SetIndexOfC1",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::SetIndexOfC1),
             R"#(None)#"  , py::arg("theIndex"))
        .def("IndexOfS2",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfS2),
             R"#(None)#" )
        .def("IsOnCurve2",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IsOnCurve2),
             R"#(None)#" )
        .def("IndexOfC2",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::IndexOfC2),
             R"#(None)#" )
        .def("SetIndexOfC2",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::SetIndexOfC2),
             R"#(None)#"  , py::arg("theIndex"))
        .def("Surf",
             (Standard_Integer (ChFiDS_SurfData::*)() const) static_cast<Standard_Integer (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::Surf),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (ChFiDS_SurfData::*)() const) static_cast<TopAbs_Orientation (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::Orientation),
             R"#(None)#" )
        .def("InterferenceOnS1",
             (const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::InterferenceOnS1),
             R"#(None)#" )
        .def("InterferenceOnS2",
             (const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::InterferenceOnS2),
             R"#(None)#" )
        .def("VertexFirstOnS1",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexFirstOnS1),
             R"#(None)#" )
        .def("VertexLastOnS1",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexLastOnS1),
             R"#(None)#" )
        .def("VertexFirstOnS2",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexFirstOnS2),
             R"#(None)#" )
        .def("VertexLastOnS2",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::VertexLastOnS2),
             R"#(None)#" )
        .def("ChangeIndexOfS1",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::ChangeIndexOfS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexOfS2",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::ChangeIndexOfS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeSurf",
             (void (ChFiDS_SurfData::*)( const Standard_Integer ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer ) >(&ChFiDS_SurfData::ChangeSurf),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeOrientation",
             (TopAbs_Orientation & (ChFiDS_SurfData::*)() ) static_cast<TopAbs_Orientation & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeOrientation),
             R"#(None)#" )
        .def("ChangeInterferenceOnS1",
             (ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeInterferenceOnS1),
             R"#(None)#" )
        .def("ChangeInterferenceOnS2",
             (ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_FaceInterference & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeInterferenceOnS2),
             R"#(None)#" )
        .def("ChangeVertexFirstOnS1",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexFirstOnS1),
             R"#(None)#" )
        .def("ChangeVertexLastOnS1",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexLastOnS1),
             R"#(None)#" )
        .def("ChangeVertexFirstOnS2",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexFirstOnS2),
             R"#(None)#" )
        .def("ChangeVertexLastOnS2",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ChangeVertexLastOnS2),
             R"#(None)#" )
        .def("IsOnCurve",
             (Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer ) const>(&ChFiDS_SurfData::IsOnCurve),
             R"#(None)#"  , py::arg("OnS"))
        .def("IndexOfC",
             (Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer ) const) static_cast<Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer ) const>(&ChFiDS_SurfData::IndexOfC),
             R"#(None)#"  , py::arg("OnS"))
        .def("TwistOnS1",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS2),
             R"#(None)#" )
        .def("TwistOnS1",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean ) >(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#"  , py::arg("T"))
        .def("TwistOnS2",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean ) >(&ChFiDS_SurfData::TwistOnS2),
             R"#(None)#"  , py::arg("T"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_SurfData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_ChamfSpine ,opencascade::handle<ChFiDS_ChamfSpine> , ChFiDS_Spine>>(m.attr("ChFiDS_ChamfSpine"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_ChamfSpine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_ChamfSpine::*)() const>(&ChFiDS_ChamfSpine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_ChamfSpine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ChFiDS_FilSpine ,opencascade::handle<ChFiDS_FilSpine> , ChFiDS_Spine>>(m.attr("ChFiDS_FilSpine"))
    // constructors
    // custom constructors
    // methods
        .def("Reset",
             (void (ChFiDS_FilSpine::*)( const Standard_Boolean ) ) static_cast<void (ChFiDS_FilSpine::*)( const Standard_Boolean ) >(&ChFiDS_FilSpine::Reset),
             R"#(None)#"  , py::arg("AllData")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AppendElSpine",
             (void (ChFiDS_FilSpine::*)( const opencascade::handle<ChFiDS_HElSpine> & ) ) static_cast<void (ChFiDS_FilSpine::*)( const opencascade::handle<ChFiDS_HElSpine> & ) >(&ChFiDS_FilSpine::AppendElSpine),
             R"#(None)#"  , py::arg("Els"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_FilSpine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_FilSpine::*)() const>(&ChFiDS_FilSpine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_FilSpine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ChFiDS_Map.hxx
// ./opencascade/ChFiDS_FilSpine.hxx
// ./opencascade/ChFiDS_ChamfMethod.hxx
// ./opencascade/ChFiDS_Stripe.hxx
// ./opencascade/ChFiDS_HData.hxx
// ./opencascade/ChFiDS_Regul.hxx
// ./opencascade/ChFiDS_ChamfSpine.hxx
// ./opencascade/ChFiDS_ListIteratorOfListOfStripe.hxx
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
// ./opencascade/ChFiDS_Spine.hxx
// ./opencascade/ChFiDS_State.hxx
// ./opencascade/ChFiDS_CommonPoint.hxx
// ./opencascade/ChFiDS_StripeArray1.hxx
// ./opencascade/ChFiDS_FaceInterference.hxx
// ./opencascade/ChFiDS_ErrorStatus.hxx
// ./opencascade/ChFiDS_ElSpine.hxx
// ./opencascade/ChFiDS_Regularities.hxx
// ./opencascade/ChFiDS_ListOfStripe.hxx
// ./opencascade/ChFiDS_CircSection.hxx
// ./opencascade/ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx
// ./opencascade/ChFiDS_ListIteratorOfListOfHElSpine.hxx
// ./opencascade/ChFiDS_HElSpine.hxx
// ./opencascade/ChFiDS_StripeMap.hxx
// ./opencascade/ChFiDS_ListIteratorOfRegularities.hxx
// ./opencascade/ChFiDS_ChamfMode.hxx
// ./opencascade/ChFiDS_SecHArray1.hxx
// ./opencascade/ChFiDS_SurfData.hxx
// ./opencascade/ChFiDS_SequenceOfSpine.hxx
// ./opencascade/ChFiDS_SecArray1.hxx
// ./opencascade/ChFiDS_SequenceOfSurfData.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<ChFiDS_HElSpine> >(m,"ChFiDS_ListOfHElSpine");
    register_template_NCollection_Array1<opencascade::handle<ChFiDS_Stripe> >(m,"ChFiDS_StripeArray1");
    register_template_NCollection_List<ChFiDS_Regul>(m,"ChFiDS_Regularities");
    register_template_NCollection_List<opencascade::handle<ChFiDS_Stripe> >(m,"ChFiDS_ListOfStripe");
    register_template_NCollection_IndexedDataMap<TopoDS_Vertex, ChFiDS_ListOfStripe, TopTools_ShapeMapHasher>(m,"ChFiDS_IndexedDataMapOfVertexListOfStripe");
    register_template_NCollection_Sequence<opencascade::handle<ChFiDS_Spine> >(m,"ChFiDS_SequenceOfSpine");
    register_template_NCollection_Array1<ChFiDS_CircSection>(m,"ChFiDS_SecArray1");
    register_template_NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> >(m,"ChFiDS_SequenceOfSurfData");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
