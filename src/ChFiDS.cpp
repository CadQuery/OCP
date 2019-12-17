
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_TypeMismatch.hxx>
#include <ChFiDS_Spine.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Law_Composite.hxx>
#include <ChFiDS_SurfData.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>

// module includes
#include <ChFiDS_ChamfMethod.hxx>
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
// ./opencascade/ChFiDS_SequenceOfSurfData.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_Regularities.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_Regularities.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_StripeArray1.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_SequenceOfSpine.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_SecArray1.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_ListOfStripe.hxx
#include "NCollection.hxx"
// ./opencascade/ChFiDS_ListOfStripe.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ChFiDS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ChFiDS"));


//Python trampoline classes

// classes


    static_cast<py::class_<ChFiDS_CommonPoint ,std::unique_ptr<ChFiDS_CommonPoint>  >>(m.attr("ChFiDS_CommonPoint"))
        .def(py::init<  >()  )
        .def("Reset",
             (void (ChFiDS_CommonPoint::*)() ) static_cast<void (ChFiDS_CommonPoint::*)() >(&ChFiDS_CommonPoint::Reset),
             R"#(default value for all fields)#" )
        .def("SetVertex",
             (void (ChFiDS_CommonPoint::*)( const TopoDS_Vertex &  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const TopoDS_Vertex &  ) >(&ChFiDS_CommonPoint::SetVertex),
             R"#(Sets the values of a point which is a vertex on the initial facet of restriction of one of the surface.)#"  , py::arg("V"))
        .def("SetArc",
             (void (ChFiDS_CommonPoint::*)( const Standard_Real ,  const TopoDS_Edge & ,  const Standard_Real ,  const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const Standard_Real ,  const TopoDS_Edge & ,  const Standard_Real ,  const TopAbs_Orientation  ) >(&ChFiDS_CommonPoint::SetArc),
             R"#(Sets the values of a point which is on the arc A, at parameter Param.)#"  , py::arg("Tol"),  py::arg("A"),  py::arg("Param"),  py::arg("TArc"))
        .def("SetParameter",
             (void (ChFiDS_CommonPoint::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const Standard_Real  ) >(&ChFiDS_CommonPoint::SetParameter),
             R"#(Sets the value of the parameter on the spine)#"  , py::arg("Param"))
        .def("SetPoint",
             (void (ChFiDS_CommonPoint::*)( const gp_Pnt &  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const gp_Pnt &  ) >(&ChFiDS_CommonPoint::SetPoint),
             R"#(Set the 3d point for a commonpoint that is not a vertex or on an arc.)#"  , py::arg("Point"))
        .def("SetVector",
             (void (ChFiDS_CommonPoint::*)( const gp_Vec &  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const gp_Vec &  ) >(&ChFiDS_CommonPoint::SetVector),
             R"#(Set the output 3d vector)#"  , py::arg("Vector"))
        .def("SetTolerance",
             (void (ChFiDS_CommonPoint::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const Standard_Real  ) >(&ChFiDS_CommonPoint::SetTolerance),
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
        .def("Arc",
             (const TopoDS_Edge & (ChFiDS_CommonPoint::*)() const) static_cast<const TopoDS_Edge & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Arc),
             R"#(Returns the arc of restriction containing the vertex.)#" )
        .def("TransitionOnArc",
             (TopAbs_Orientation (ChFiDS_CommonPoint::*)() const) static_cast<TopAbs_Orientation (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::TransitionOnArc),
             R"#(Returns the transition of the point on the arc returned by Arc().)#" )
        .def("ParameterOnArc",
             (Standard_Real (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Real (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::ParameterOnArc),
             R"#(Returns the parameter of the point on the arc returned by the method Arc().)#" )
        .def("Parameter",
             (Standard_Real (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Real (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Parameter),
             R"#(Returns the parameter the paramter on the spine)#" )
        .def("Point",
             (const gp_Pnt & (ChFiDS_CommonPoint::*)() const) static_cast<const gp_Pnt & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Point),
             R"#(Returns the 3d point)#" )
        .def("HasVector",
             (Standard_Boolean (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Boolean (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::HasVector),
             R"#(Returns TRUE if the output vector is stored.)#" )
        .def("Vector",
             (const gp_Vec & (ChFiDS_CommonPoint::*)() const) static_cast<const gp_Vec & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Vector),
             R"#(Returns the output 3d vector)#" )
        .def("SetVertex",
             (void (ChFiDS_CommonPoint::*)( const TopoDS_Vertex &  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const TopoDS_Vertex &  ) >(&ChFiDS_CommonPoint::SetVertex),
             R"#(Sets the values of a point which is a vertex on the initial facet of restriction of one of the surface.)#"  , py::arg("V"))
        .def("SetPoint",
             (void (ChFiDS_CommonPoint::*)( const gp_Pnt &  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const gp_Pnt &  ) >(&ChFiDS_CommonPoint::SetPoint),
             R"#(Set the 3d point for a commonpoint that is not a vertex or on an arc.)#"  , py::arg("Point"))
        .def("SetVector",
             (void (ChFiDS_CommonPoint::*)( const gp_Vec &  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const gp_Vec &  ) >(&ChFiDS_CommonPoint::SetVector),
             R"#(Set the output 3d vector)#"  , py::arg("Vector"))
        .def("SetTolerance",
             (void (ChFiDS_CommonPoint::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_CommonPoint::*)( const Standard_Real  ) >(&ChFiDS_CommonPoint::SetTolerance),
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
        .def("Point",
             (const gp_Pnt & (ChFiDS_CommonPoint::*)() const) static_cast<const gp_Pnt & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Point),
             R"#(Returns the 3d point)#" )
        .def("HasVector",
             (Standard_Boolean (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Boolean (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::HasVector),
             R"#(Returns TRUE if the output vector is stored.)#" )
        .def("Vector",
             (const gp_Vec & (ChFiDS_CommonPoint::*)() const) static_cast<const gp_Vec & (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::Vector),
             R"#(Returns the output 3d vector)#" )
        .def("IsOnArc",
             (Standard_Boolean (ChFiDS_CommonPoint::*)() const) static_cast<Standard_Boolean (ChFiDS_CommonPoint::*)() const>(&ChFiDS_CommonPoint::IsOnArc),
             R"#(Returns TRUE if the point is a on an edge of the initial restriction facet of the surface.)#" )
;


    static_cast<py::class_<ChFiDS_Stripe ,opencascade::handle<ChFiDS_Stripe>  , Standard_Transient >>(m.attr("ChFiDS_Stripe"))
        .def(py::init<  >()  )
        .def("Reset",
             (void (ChFiDS_Stripe::*)() ) static_cast<void (ChFiDS_Stripe::*)() >(&ChFiDS_Stripe::Reset),
             R"#(Reset everything except Spine.)#" )
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
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::OrientationOnFace1),
             R"#(None)#"  , py::arg("Or1"))
        .def("OrientationOnFace2",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::OrientationOnFace2),
             R"#(None)#"  , py::arg("Or2"))
        .def("Choix",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::Choix),
             R"#(None)#"  , py::arg("C"))
        .def("FirstParameters",
             (void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_Stripe::FirstParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("LastParameters",
             (void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_Stripe::LastParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("ChangeFirstParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_Stripe::ChangeFirstParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("ChangeLastParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_Stripe::ChangeLastParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("FirstCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstCurve),
             R"#(None)#" )
        .def("LastCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastCurve),
             R"#(None)#" )
        .def("ChangeFirstCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeFirstCurve),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeLastCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeLastCurve),
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
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::FirstPCurveOrientation),
             R"#(None)#"  , py::arg("O"))
        .def("LastPCurveOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::LastPCurveOrientation),
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
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexFirstPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS1",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("Parameters",
             (void (ChFiDS_Stripe::*)( const Standard_Boolean ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_Stripe::*)( const Standard_Boolean ,  Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_Stripe::Parameters),
             R"#(None)#"  , py::arg("First"),  py::arg("Pdeb"),  py::arg("Pfin"))
        .def("SetParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_Stripe::SetParameters),
             R"#(None)#"  , py::arg("First"),  py::arg("Pdeb"),  py::arg("Pfin"))
        .def("Curve",
             (Standard_Integer (ChFiDS_Stripe::*)( const Standard_Boolean  ) const) static_cast<Standard_Integer (ChFiDS_Stripe::*)( const Standard_Boolean  ) const>(&ChFiDS_Stripe::Curve),
             R"#(None)#"  , py::arg("First"))
        .def("SetCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&ChFiDS_Stripe::SetCurve),
             R"#(None)#"  , py::arg("Index"),  py::arg("First"))
        .def("PCurve",
             (const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)( const Standard_Boolean  ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)( const Standard_Boolean  ) const>(&ChFiDS_Stripe::PCurve),
             R"#(None)#"  , py::arg("First"))
        .def("ChangePCurve",
             (opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)( const Standard_Boolean  ) ) static_cast<opencascade::handle<Geom2d_Curve> & (ChFiDS_Stripe::*)( const Standard_Boolean  ) >(&ChFiDS_Stripe::ChangePCurve),
             R"#(None)#"  , py::arg("First"))
        .def("Orientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)( const Standard_Integer  ) const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)( const Standard_Integer  ) const>(&ChFiDS_Stripe::Orientation),
             R"#(None)#"  , py::arg("OnS"))
        .def("SetOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ,  const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ,  const Standard_Integer  ) >(&ChFiDS_Stripe::SetOrientation),
             R"#(None)#"  , py::arg("Or"),  py::arg("OnS"))
        .def("Orientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)( const Standard_Boolean  ) const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)( const Standard_Boolean  ) const>(&ChFiDS_Stripe::Orientation),
             R"#(None)#"  , py::arg("First"))
        .def("SetOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation ,  const Standard_Boolean  ) >(&ChFiDS_Stripe::SetOrientation),
             R"#(None)#"  , py::arg("Or"),  py::arg("First"))
        .def("IndexPoint",
             (Standard_Integer (ChFiDS_Stripe::*)( const Standard_Boolean ,  const Standard_Integer  ) const) static_cast<Standard_Integer (ChFiDS_Stripe::*)( const Standard_Boolean ,  const Standard_Integer  ) const>(&ChFiDS_Stripe::IndexPoint),
             R"#(None)#"  , py::arg("First"),  py::arg("OnS"))
        .def("SetIndexPoint",
             (void (ChFiDS_Stripe::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer ,  const Standard_Boolean ,  const Standard_Integer  ) >(&ChFiDS_Stripe::SetIndexPoint),
             R"#(None)#"  , py::arg("Index"),  py::arg("First"),  py::arg("OnS"))
        .def("SolidIndex",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::SolidIndex),
             R"#(None)#" )
        .def("SetSolidIndex",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::SetSolidIndex),
             R"#(None)#"  , py::arg("Index"))
        .def("InDS",
             (void (ChFiDS_Stripe::*)( const Standard_Boolean ,  const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Boolean ,  const Standard_Integer  ) >(&ChFiDS_Stripe::InDS),
             R"#(Set nb of SurfData's at end put in DS)#"  , py::arg("First"),  py::arg("Nb")=static_cast<const Standard_Integer>(1))
        .def("IsInDS",
             (Standard_Integer (ChFiDS_Stripe::*)( const Standard_Boolean  ) const) static_cast<Standard_Integer (ChFiDS_Stripe::*)( const Standard_Boolean  ) const>(&ChFiDS_Stripe::IsInDS),
             R"#(Returns nb of SurfData's at end being in DS)#"  , py::arg("First"))
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
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::OrientationOnFace1),
             R"#(None)#"  , py::arg("Or1"))
        .def("OrientationOnFace2",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::OrientationOnFace2),
             R"#(None)#"  , py::arg("Or2"))
        .def("Choix",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::Choix),
             R"#(None)#"  , py::arg("C"))
        .def("FirstParameters",
             (void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_Stripe::FirstParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("LastParameters",
             (void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_Stripe::*)( Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_Stripe::LastParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("ChangeFirstParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_Stripe::ChangeFirstParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("ChangeLastParameters",
             (void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_Stripe::ChangeLastParameters),
             R"#(None)#"  , py::arg("Pdeb"),  py::arg("Pfin"))
        .def("FirstCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstCurve),
             R"#(None)#" )
        .def("LastCurve",
             (Standard_Integer (ChFiDS_Stripe::*)() const) static_cast<Standard_Integer (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastCurve),
             R"#(None)#" )
        .def("ChangeFirstCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeFirstCurve),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeLastCurve",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeLastCurve),
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
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS1",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexFirstPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexFirstPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexLastPointOnS2",
             (void (ChFiDS_Stripe::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Stripe::*)( const Standard_Integer  ) >(&ChFiDS_Stripe::ChangeIndexLastPointOnS2),
             R"#(None)#"  , py::arg("Index"))
        .def("FirstPCurveOrientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::FirstPCurveOrientation),
             R"#(None)#" )
        .def("LastPCurveOrientation",
             (TopAbs_Orientation (ChFiDS_Stripe::*)() const) static_cast<TopAbs_Orientation (ChFiDS_Stripe::*)() const>(&ChFiDS_Stripe::LastPCurveOrientation),
             R"#(None)#" )
        .def("FirstPCurveOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::FirstPCurveOrientation),
             R"#(None)#"  , py::arg("O"))
        .def("LastPCurveOrientation",
             (void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_Stripe::*)( const TopAbs_Orientation  ) >(&ChFiDS_Stripe::LastPCurveOrientation),
             R"#(None)#"  , py::arg("O"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_Stripe::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_Stripe::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_HElSpine ,opencascade::handle<ChFiDS_HElSpine>  , Adaptor3d_HCurve >>(m.attr("ChFiDS_HElSpine"))
        .def(py::init<  >()  )
        .def(py::init< const ChFiDS_ElSpine & >()  , py::arg("C") )
        .def("Set",
             (void (ChFiDS_HElSpine::*)( const ChFiDS_ElSpine &  ) ) static_cast<void (ChFiDS_HElSpine::*)( const ChFiDS_ElSpine &  ) >(&ChFiDS_HElSpine::Set),
             R"#(Sets the field of the GenHCurve.)#"  , py::arg("C"))
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
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_HElSpine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_HElSpine::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_HData ,std::unique_ptr<ChFiDS_HData>  >>(m.attr("ChFiDS_HData"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > & >()  , py::arg("theOther") )
        .def("Sequence",
             (const ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() const) static_cast<const ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() const>(&ChFiDS_HData::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (ChFiDS_HData::*)(  const opencascade::handle<ChFiDS_SurfData> &  ) ) static_cast<void (ChFiDS_HData::*)(  const opencascade::handle<ChFiDS_SurfData> &  ) >(&ChFiDS_HData::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (ChFiDS_HData::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > &  ) ) static_cast<void (ChFiDS_HData::*)( NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> > &  ) >(&ChFiDS_HData::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() ) static_cast<ChFiDS_SequenceOfSurfData & (ChFiDS_HData::*)() >(&ChFiDS_HData::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_HData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_HData::*)() const>(&ChFiDS_HData::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_HData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_HData::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_Map ,std::unique_ptr<ChFiDS_Map>  >>(m.attr("ChFiDS_Map"))
        .def(py::init<  >()  )
        .def("Fill",
             (void (ChFiDS_Map::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) ) static_cast<void (ChFiDS_Map::*)( const TopoDS_Shape & ,  const TopAbs_ShapeEnum ,  const TopAbs_ShapeEnum  ) >(&ChFiDS_Map::Fill),
             R"#(Fills the map with the subshapes of type T1 as keys and the list of ancestors of type T2 as items.)#"  , py::arg("S"),  py::arg("T1"),  py::arg("T2"))
        .def("Contains",
             (Standard_Boolean (ChFiDS_Map::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (ChFiDS_Map::*)( const TopoDS_Shape &  ) const>(&ChFiDS_Map::Contains),
             R"#(None)#"  , py::arg("S"))
        .def("FindFromKey",
             (const TopTools_ListOfShape & (ChFiDS_Map::*)( const TopoDS_Shape &  ) const) static_cast<const TopTools_ListOfShape & (ChFiDS_Map::*)( const TopoDS_Shape &  ) const>(&ChFiDS_Map::FindFromKey),
             R"#(None)#"  , py::arg("S"))
        .def("FindFromIndex",
             (const TopTools_ListOfShape & (ChFiDS_Map::*)( const Standard_Integer  ) const) static_cast<const TopTools_ListOfShape & (ChFiDS_Map::*)( const Standard_Integer  ) const>(&ChFiDS_Map::FindFromIndex),
             R"#(None)#"  , py::arg("I"))
;


    static_cast<py::class_<ChFiDS_FaceInterference ,std::unique_ptr<ChFiDS_FaceInterference>  >>(m.attr("ChFiDS_FaceInterference"))
        .def(py::init<  >()  )
        .def("SetInterference",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer ,  const TopAbs_Orientation ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer ,  const TopAbs_Orientation ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) >(&ChFiDS_FaceInterference::SetInterference),
             R"#(None)#"  , py::arg("LineIndex"),  py::arg("Trans"),  py::arg("PCurv1"),  py::arg("PCurv2"))
        .def("SetTransition",
             (void (ChFiDS_FaceInterference::*)( const TopAbs_Orientation  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const TopAbs_Orientation  ) >(&ChFiDS_FaceInterference::SetTransition),
             R"#(None)#"  , py::arg("Trans"))
        .def("SetFirstParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real  ) >(&ChFiDS_FaceInterference::SetFirstParameter),
             R"#(None)#"  , py::arg("U1"))
        .def("SetLastParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real  ) >(&ChFiDS_FaceInterference::SetLastParameter),
             R"#(None)#"  , py::arg("U1"))
        .def("SetParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real ,  const Standard_Boolean  ) >(&ChFiDS_FaceInterference::SetParameter),
             R"#(None)#"  , py::arg("U1"),  py::arg("IsFirst"))
        .def("LineIndex",
             (Standard_Integer (ChFiDS_FaceInterference::*)() const) static_cast<Standard_Integer (ChFiDS_FaceInterference::*)() const>(&ChFiDS_FaceInterference::LineIndex),
             R"#(None)#" )
        .def("SetLineIndex",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer  ) >(&ChFiDS_FaceInterference::SetLineIndex),
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
        .def("Parameter",
             (Standard_Real (ChFiDS_FaceInterference::*)( const Standard_Boolean  ) const) static_cast<Standard_Real (ChFiDS_FaceInterference::*)( const Standard_Boolean  ) const>(&ChFiDS_FaceInterference::Parameter),
             R"#(None)#"  , py::arg("IsFirst"))
        .def("SetInterference",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer ,  const TopAbs_Orientation ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer ,  const TopAbs_Orientation ,  const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom2d_Curve> &  ) >(&ChFiDS_FaceInterference::SetInterference),
             R"#(None)#"  , py::arg("LineIndex"),  py::arg("Trans"),  py::arg("PCurv1"),  py::arg("PCurv2"))
        .def("SetLineIndex",
             (void (ChFiDS_FaceInterference::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Integer  ) >(&ChFiDS_FaceInterference::SetLineIndex),
             R"#(None)#"  , py::arg("I"))
        .def("SetFirstParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real  ) >(&ChFiDS_FaceInterference::SetFirstParameter),
             R"#(None)#"  , py::arg("U1"))
        .def("SetLastParameter",
             (void (ChFiDS_FaceInterference::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_FaceInterference::*)( const Standard_Real  ) >(&ChFiDS_FaceInterference::SetLastParameter),
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
;


    static_cast<py::class_<ChFiDS_Regul ,std::unique_ptr<ChFiDS_Regul>  >>(m.attr("ChFiDS_Regul"))
        .def(py::init<  >()  )
        .def("SetCurve",
             (void (ChFiDS_Regul::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Regul::*)( const Standard_Integer  ) >(&ChFiDS_Regul::SetCurve),
             R"#(None)#"  , py::arg("IC"))
        .def("SetS1",
             (void (ChFiDS_Regul::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Regul::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&ChFiDS_Regul::SetS1),
             R"#(None)#"  , py::arg("IS1"),  py::arg("IsFace")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetS2",
             (void (ChFiDS_Regul::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Regul::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&ChFiDS_Regul::SetS2),
             R"#(None)#"  , py::arg("IS2"),  py::arg("IsFace")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsSurface1",
             (Standard_Boolean (ChFiDS_Regul::*)() const) static_cast<Standard_Boolean (ChFiDS_Regul::*)() const>(&ChFiDS_Regul::IsSurface1),
             R"#(None)#" )
        .def("IsSurface2",
             (Standard_Boolean (ChFiDS_Regul::*)() const) static_cast<Standard_Boolean (ChFiDS_Regul::*)() const>(&ChFiDS_Regul::IsSurface2),
             R"#(None)#" )
        .def("Curve",
             (Standard_Integer (ChFiDS_Regul::*)() const) static_cast<Standard_Integer (ChFiDS_Regul::*)() const>(&ChFiDS_Regul::Curve),
             R"#(None)#" )
        .def("S1",
             (Standard_Integer (ChFiDS_Regul::*)() const) static_cast<Standard_Integer (ChFiDS_Regul::*)() const>(&ChFiDS_Regul::S1),
             R"#(None)#" )
        .def("S2",
             (Standard_Integer (ChFiDS_Regul::*)() const) static_cast<Standard_Integer (ChFiDS_Regul::*)() const>(&ChFiDS_Regul::S2),
             R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_SecHArray1 ,std::unique_ptr<ChFiDS_SecHArray1>  >>(m.attr("ChFiDS_SecHArray1"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const ChFiDS_CircSection & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<ChFiDS_CircSection> & >()  , py::arg("theOther") )
        .def("Array1",
             (const ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() const) static_cast<const ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() const>(&ChFiDS_SecHArray1::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() ) static_cast<ChFiDS_SecArray1 & (ChFiDS_SecHArray1::*)() >(&ChFiDS_SecHArray1::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_SecHArray1::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_SecHArray1::*)() const>(&ChFiDS_SecHArray1::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_SecHArray1::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_SecHArray1::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_StripeMap ,std::unique_ptr<ChFiDS_StripeMap>  >>(m.attr("ChFiDS_StripeMap"))
        .def(py::init<  >()  )
        .def("Add",
             (void (ChFiDS_StripeMap::*)( const TopoDS_Vertex & ,  const opencascade::handle<ChFiDS_Stripe> &  ) ) static_cast<void (ChFiDS_StripeMap::*)( const TopoDS_Vertex & ,  const opencascade::handle<ChFiDS_Stripe> &  ) >(&ChFiDS_StripeMap::Add),
             R"#(None)#"  , py::arg("V"),  py::arg("F"))
        .def("Extent",
             (Standard_Integer (ChFiDS_StripeMap::*)() const) static_cast<Standard_Integer (ChFiDS_StripeMap::*)() const>(&ChFiDS_StripeMap::Extent),
             R"#(None)#" )
        .def("FindFromKey",
             (const ChFiDS_ListOfStripe & (ChFiDS_StripeMap::*)( const TopoDS_Vertex &  ) const) static_cast<const ChFiDS_ListOfStripe & (ChFiDS_StripeMap::*)( const TopoDS_Vertex &  ) const>(&ChFiDS_StripeMap::FindFromKey),
             R"#(None)#"  , py::arg("V"))
        .def("FindFromIndex",
             (const ChFiDS_ListOfStripe & (ChFiDS_StripeMap::*)( const Standard_Integer  ) const) static_cast<const ChFiDS_ListOfStripe & (ChFiDS_StripeMap::*)( const Standard_Integer  ) const>(&ChFiDS_StripeMap::FindFromIndex),
             R"#(None)#"  , py::arg("I"))
        .def("FindKey",
             (const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer  ) const>(&ChFiDS_StripeMap::FindKey),
             R"#(None)#"  , py::arg("I"))
        .def("Clear",
             (void (ChFiDS_StripeMap::*)() ) static_cast<void (ChFiDS_StripeMap::*)() >(&ChFiDS_StripeMap::Clear),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (ChFiDS_StripeMap::*)() const) static_cast<Standard_Integer (ChFiDS_StripeMap::*)() const>(&ChFiDS_StripeMap::Extent),
             R"#(None)#" )
        .def("FindKey",
             (const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Vertex & (ChFiDS_StripeMap::*)( const Standard_Integer  ) const>(&ChFiDS_StripeMap::FindKey),
             R"#(None)#"  , py::arg("I"))
;


    static_cast<py::class_<ChFiDS_ElSpine ,std::unique_ptr<ChFiDS_ElSpine>  , Adaptor3d_Curve >>(m.attr("ChFiDS_ElSpine"))
        .def(py::init<  >()  )
        .def("FirstParameter",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::LastParameter),
             R"#(None)#" )
        .def("GetSavedFirstParameter",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::GetSavedFirstParameter),
             R"#(None)#" )
        .def("GetSavedLastParameter",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::GetSavedLastParameter),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (ChFiDS_ElSpine::*)() const) static_cast<GeomAbs_Shape (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Continuity),
             R"#(None)#" )
        .def("NbIntervals",
             (Standard_Integer (ChFiDS_ElSpine::*)( const GeomAbs_Shape  ) const) static_cast<Standard_Integer (ChFiDS_ElSpine::*)( const GeomAbs_Shape  ) const>(&ChFiDS_ElSpine::NbIntervals),
             R"#(None)#"  , py::arg("S"))
        .def("Intervals",
             (void (ChFiDS_ElSpine::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const) static_cast<void (ChFiDS_ElSpine::*)( NCollection_Array1<Standard_Real> & ,  const GeomAbs_Shape  ) const>(&ChFiDS_ElSpine::Intervals),
             R"#(None)#"  , py::arg("T"),  py::arg("S"))
        .def("Trim",
             (opencascade::handle<Adaptor3d_HCurve> (ChFiDS_ElSpine::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Adaptor3d_HCurve> (ChFiDS_ElSpine::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ChFiDS_ElSpine::Trim),
             R"#(Returns a curve equivalent of <me> between parameters <First> and <Last>. <Tol> is used to test for 3d points confusion.)#"  , py::arg("First"),  py::arg("Last"),  py::arg("Tol"))
        .def("Resolution",
             (Standard_Real (ChFiDS_ElSpine::*)( const Standard_Real  ) const) static_cast<Standard_Real (ChFiDS_ElSpine::*)( const Standard_Real  ) const>(&ChFiDS_ElSpine::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("GetType",
             (GeomAbs_CurveType (ChFiDS_ElSpine::*)() const) static_cast<GeomAbs_CurveType (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::GetType),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (ChFiDS_ElSpine::*)() const) static_cast<Standard_Boolean (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::IsPeriodic),
             R"#(None)#" )
        .def("SetPeriodic",
             (void (ChFiDS_ElSpine::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Boolean  ) >(&ChFiDS_ElSpine::SetPeriodic),
             R"#(None)#"  , py::arg("I"))
        .def("Period",
             (Standard_Real (ChFiDS_ElSpine::*)() const) static_cast<Standard_Real (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Period),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (ChFiDS_ElSpine::*)( const Standard_Real  ) const) static_cast<gp_Pnt (ChFiDS_ElSpine::*)( const Standard_Real  ) const>(&ChFiDS_ElSpine::Value),
             R"#(None)#"  , py::arg("AbsC"))
        .def("D0",
             (void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt &  ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt &  ) const>(&ChFiDS_ElSpine::D0),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"))
        .def("D1",
             (void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) const>(&ChFiDS_ElSpine::D1),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) const>(&ChFiDS_ElSpine::D2),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("D3",
             (void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec & ,  gp_Vec &  ) const>(&ChFiDS_ElSpine::D3),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"),  py::arg("V3"))
        .def("FirstParameter",
             (void (ChFiDS_ElSpine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real  ) >(&ChFiDS_ElSpine::FirstParameter),
             R"#(None)#"  , py::arg("P"))
        .def("LastParameter",
             (void (ChFiDS_ElSpine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real  ) >(&ChFiDS_ElSpine::LastParameter),
             R"#(None)#"  , py::arg("P"))
        .def("SaveFirstParameter",
             (void (ChFiDS_ElSpine::*)() ) static_cast<void (ChFiDS_ElSpine::*)() >(&ChFiDS_ElSpine::SaveFirstParameter),
             R"#(None)#" )
        .def("SaveLastParameter",
             (void (ChFiDS_ElSpine::*)() ) static_cast<void (ChFiDS_ElSpine::*)() >(&ChFiDS_ElSpine::SaveLastParameter),
             R"#(None)#" )
        .def("SetOrigin",
             (void (ChFiDS_ElSpine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_ElSpine::*)( const Standard_Real  ) >(&ChFiDS_ElSpine::SetOrigin),
             R"#(None)#"  , py::arg("O"))
        .def("FirstPointAndTgt",
             (void (ChFiDS_ElSpine::*)( gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (ChFiDS_ElSpine::*)( gp_Pnt & ,  gp_Vec &  ) const>(&ChFiDS_ElSpine::FirstPointAndTgt),
             R"#(None)#"  , py::arg("P"),  py::arg("T"))
        .def("LastPointAndTgt",
             (void (ChFiDS_ElSpine::*)( gp_Pnt & ,  gp_Vec &  ) const) static_cast<void (ChFiDS_ElSpine::*)( gp_Pnt & ,  gp_Vec &  ) const>(&ChFiDS_ElSpine::LastPointAndTgt),
             R"#(None)#"  , py::arg("P"),  py::arg("T"))
        .def("NbVertices",
             (Standard_Integer (ChFiDS_ElSpine::*)() const) static_cast<Standard_Integer (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::NbVertices),
             R"#(None)#" )
        .def("VertexWithTangent",
             (const gp_Ax1 & (ChFiDS_ElSpine::*)( const Standard_Integer  ) const) static_cast<const gp_Ax1 & (ChFiDS_ElSpine::*)( const Standard_Integer  ) const>(&ChFiDS_ElSpine::VertexWithTangent),
             R"#(None)#"  , py::arg("Index"))
        .def("SetFirstPointAndTgt",
             (void (ChFiDS_ElSpine::*)( const gp_Pnt & ,  const gp_Vec &  ) ) static_cast<void (ChFiDS_ElSpine::*)( const gp_Pnt & ,  const gp_Vec &  ) >(&ChFiDS_ElSpine::SetFirstPointAndTgt),
             R"#(None)#"  , py::arg("P"),  py::arg("T"))
        .def("SetLastPointAndTgt",
             (void (ChFiDS_ElSpine::*)( const gp_Pnt & ,  const gp_Vec &  ) ) static_cast<void (ChFiDS_ElSpine::*)( const gp_Pnt & ,  const gp_Vec &  ) >(&ChFiDS_ElSpine::SetLastPointAndTgt),
             R"#(None)#"  , py::arg("P"),  py::arg("T"))
        .def("AddVertexWithTangent",
             (void (ChFiDS_ElSpine::*)( const gp_Ax1 &  ) ) static_cast<void (ChFiDS_ElSpine::*)( const gp_Ax1 &  ) >(&ChFiDS_ElSpine::AddVertexWithTangent),
             R"#(None)#"  , py::arg("anAx1"))
        .def("SetCurve",
             (void (ChFiDS_ElSpine::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (ChFiDS_ElSpine::*)( const opencascade::handle<Geom_Curve> &  ) >(&ChFiDS_ElSpine::SetCurve),
             R"#(None)#"  , py::arg("C"))
        .def("Previous",
             (const opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() const) static_cast<const opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Previous),
             R"#(None)#" )
        .def("ChangePrevious",
             (opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() ) static_cast<opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() >(&ChFiDS_ElSpine::ChangePrevious),
             R"#(None)#" )
        .def("Next",
             (const opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() const) static_cast<const opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() const>(&ChFiDS_ElSpine::Next),
             R"#(None)#" )
        .def("ChangeNext",
             (opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() ) static_cast<opencascade::handle<ChFiDS_SurfData> & (ChFiDS_ElSpine::*)() >(&ChFiDS_ElSpine::ChangeNext),
             R"#(None)#" )
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
;


    static_cast<py::class_<ChFiDS_Spine ,opencascade::handle<ChFiDS_Spine>  , Standard_Transient >>(m.attr("ChFiDS_Spine"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real >()  , py::arg("Tol") )
        .def("SetEdges",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) >(&ChFiDS_Spine::SetEdges),
             R"#(store edges composing the guideline)#"  , py::arg("E"))
        .def("PutInFirst",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) >(&ChFiDS_Spine::PutInFirst),
             R"#(store the edge at the first position before all others)#"  , py::arg("E"))
        .def("NbEdges",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::NbEdges),
             R"#(None)#" )
        .def("Edges",
             (const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer  ) const>(&ChFiDS_Spine::Edges),
             R"#(None)#"  , py::arg("I"))
        .def("SetFirstStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State  ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State  ) >(&ChFiDS_Spine::SetFirstStatus),
             R"#(stores if the start of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("SetLastStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State  ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State  ) >(&ChFiDS_Spine::SetLastStatus),
             R"#(stores if the end of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("AppendElSpine",
             (void (ChFiDS_Spine::*)( const opencascade::handle<ChFiDS_HElSpine> &  ) ) static_cast<void (ChFiDS_Spine::*)( const opencascade::handle<ChFiDS_HElSpine> &  ) >(&ChFiDS_Spine::AppendElSpine),
             R"#(None)#"  , py::arg("Els"))
        .def("ElSpine",
             (opencascade::handle<ChFiDS_HElSpine> (ChFiDS_Spine::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<ChFiDS_HElSpine> (ChFiDS_Spine::*)( const Standard_Integer  ) const>(&ChFiDS_Spine::ElSpine),
             R"#(None)#"  , py::arg("IE"))
        .def("ElSpine",
             (opencascade::handle<ChFiDS_HElSpine> (ChFiDS_Spine::*)( const TopoDS_Edge &  ) const) static_cast<opencascade::handle<ChFiDS_HElSpine> (ChFiDS_Spine::*)( const TopoDS_Edge &  ) const>(&ChFiDS_Spine::ElSpine),
             R"#(None)#"  , py::arg("E"))
        .def("ElSpine",
             (opencascade::handle<ChFiDS_HElSpine> (ChFiDS_Spine::*)( const Standard_Real  ) const) static_cast<opencascade::handle<ChFiDS_HElSpine> (ChFiDS_Spine::*)( const Standard_Real  ) const>(&ChFiDS_Spine::ElSpine),
             R"#(None)#"  , py::arg("W"))
        .def("ChangeElSpines",
             (ChFiDS_ListOfHElSpine & (ChFiDS_Spine::*)() ) static_cast<ChFiDS_ListOfHElSpine & (ChFiDS_Spine::*)() >(&ChFiDS_Spine::ChangeElSpines),
             R"#(None)#" )
        .def("Reset",
             (void (ChFiDS_Spine::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Boolean  ) >(&ChFiDS_Spine::Reset),
             R"#(None)#"  , py::arg("AllData")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SplitDone",
             (Standard_Boolean (ChFiDS_Spine::*)() const) static_cast<Standard_Boolean (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::SplitDone),
             R"#(None)#" )
        .def("SplitDone",
             (void (ChFiDS_Spine::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Boolean  ) >(&ChFiDS_Spine::SplitDone),
             R"#(None)#"  , py::arg("B"))
        .def("Load",
             (void (ChFiDS_Spine::*)() ) static_cast<void (ChFiDS_Spine::*)() >(&ChFiDS_Spine::Load),
             R"#(prepare the guideline depending on the edges that are elementary arks (take parameters from a single curvilinear abscissa); to be able to call methods on the geometry (first,last,value,d1,d2) it is necessary to start with preparation otherwise an exception will be raised)#" )
        .def("Resolution",
             (Standard_Real (ChFiDS_Spine::*)( const Standard_Real  ) const) static_cast<Standard_Real (ChFiDS_Spine::*)( const Standard_Real  ) const>(&ChFiDS_Spine::Resolution),
             R"#(None)#"  , py::arg("R3d"))
        .def("IsClosed",
             (Standard_Boolean (ChFiDS_Spine::*)() const) static_cast<Standard_Boolean (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::IsClosed),
             R"#(None)#" )
        .def("FirstParameter",
             (Standard_Real (ChFiDS_Spine::*)() const) static_cast<Standard_Real (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::FirstParameter),
             R"#(None)#" )
        .def("LastParameter",
             (Standard_Real (ChFiDS_Spine::*)() const) static_cast<Standard_Real (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::LastParameter),
             R"#(None)#" )
        .def("SetFirstParameter",
             (void (ChFiDS_Spine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real  ) >(&ChFiDS_Spine::SetFirstParameter),
             R"#(None)#"  , py::arg("Par"))
        .def("SetLastParameter",
             (void (ChFiDS_Spine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real  ) >(&ChFiDS_Spine::SetLastParameter),
             R"#(None)#"  , py::arg("Par"))
        .def("FirstParameter",
             (Standard_Real (ChFiDS_Spine::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ChFiDS_Spine::*)( const Standard_Integer  ) const>(&ChFiDS_Spine::FirstParameter),
             R"#(gives the total length of all arcs before the number IndexSp)#"  , py::arg("IndexSpine"))
        .def("LastParameter",
             (Standard_Real (ChFiDS_Spine::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ChFiDS_Spine::*)( const Standard_Integer  ) const>(&ChFiDS_Spine::LastParameter),
             R"#(gives the total length till the ark with number IndexSpine (inclus))#"  , py::arg("IndexSpine"))
        .def("Length",
             (Standard_Real (ChFiDS_Spine::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ChFiDS_Spine::*)( const Standard_Integer  ) const>(&ChFiDS_Spine::Length),
             R"#(gives the length of ark with number IndexSp)#"  , py::arg("IndexSpine"))
        .def("IsPeriodic",
             (Standard_Boolean (ChFiDS_Spine::*)() const) static_cast<Standard_Boolean (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (ChFiDS_Spine::*)() const) static_cast<Standard_Real (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::Period),
             R"#(None)#" )
        .def("Absc",
             (Standard_Real (ChFiDS_Spine::*)( const Standard_Real  ) ) static_cast<Standard_Real (ChFiDS_Spine::*)( const Standard_Real  ) >(&ChFiDS_Spine::Absc),
             R"#(None)#"  , py::arg("U"))
        .def("Absc",
             (Standard_Real (ChFiDS_Spine::*)( const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Real (ChFiDS_Spine::*)( const Standard_Real ,  const Standard_Integer  ) >(&ChFiDS_Spine::Absc),
             R"#(None)#"  , py::arg("U"),  py::arg("I"))
        .def("Parameter",
             (void (ChFiDS_Spine::*)( const Standard_Real ,  Standard_Real & ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real ,  Standard_Real & ,  const Standard_Boolean  ) >(&ChFiDS_Spine::Parameter),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("U"),  py::arg("Oriented")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Parameter",
             (void (ChFiDS_Spine::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Integer ,  const Standard_Real ,  Standard_Real & ,  const Standard_Boolean  ) >(&ChFiDS_Spine::Parameter),
             R"#(None)#"  , py::arg("Index"),  py::arg("AbsC"),  py::arg("U"),  py::arg("Oriented")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Value",
             (gp_Pnt (ChFiDS_Spine::*)( const Standard_Real  ) ) static_cast<gp_Pnt (ChFiDS_Spine::*)( const Standard_Real  ) >(&ChFiDS_Spine::Value),
             R"#(None)#"  , py::arg("AbsC"))
        .def("D0",
             (void (ChFiDS_Spine::*)( const Standard_Real ,  gp_Pnt &  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real ,  gp_Pnt &  ) >(&ChFiDS_Spine::D0),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"))
        .def("D1",
             (void (ChFiDS_Spine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec &  ) >(&ChFiDS_Spine::D1),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"))
        .def("D2",
             (void (ChFiDS_Spine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real ,  gp_Pnt & ,  gp_Vec & ,  gp_Vec &  ) >(&ChFiDS_Spine::D2),
             R"#(None)#"  , py::arg("AbsC"),  py::arg("P"),  py::arg("V1"),  py::arg("V2"))
        .def("SetCurrent",
             (void (ChFiDS_Spine::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Integer  ) >(&ChFiDS_Spine::SetCurrent),
             R"#(None)#"  , py::arg("Index"))
        .def("CurrentElementarySpine",
             (const BRepAdaptor_Curve & (ChFiDS_Spine::*)( const Standard_Integer  ) ) static_cast<const BRepAdaptor_Curve & (ChFiDS_Spine::*)( const Standard_Integer  ) >(&ChFiDS_Spine::CurrentElementarySpine),
             R"#(sets the current curve and returns it)#"  , py::arg("Index"))
        .def("CurrentIndexOfElementarySpine",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::CurrentIndexOfElementarySpine),
             R"#(None)#" )
        .def("GetType",
             (GeomAbs_CurveType (ChFiDS_Spine::*)() const) static_cast<GeomAbs_CurveType (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::GetType),
             R"#(None)#" )
        .def("Line",
             (gp_Lin (ChFiDS_Spine::*)() const) static_cast<gp_Lin (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::Line),
             R"#(None)#" )
        .def("Circle",
             (gp_Circ (ChFiDS_Spine::*)() const) static_cast<gp_Circ (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::Circle),
             R"#(None)#" )
        .def("FirstStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::FirstStatus),
             R"#(returns if the set of edges starts on a free boundary or if the first vertex is a breakpoint or if the set is closed)#" )
        .def("LastStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::LastStatus),
             R"#(returns the state at the end of the set)#" )
        .def("Status",
             (ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean  ) const) static_cast<ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean  ) const>(&ChFiDS_Spine::Status),
             R"#(None)#"  , py::arg("IsFirst"))
        .def("SetStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State ,  const Standard_Boolean  ) >(&ChFiDS_Spine::SetStatus),
             R"#(None)#"  , py::arg("S"),  py::arg("IsFirst"))
        .def("IsTangencyExtremity",
             (Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean  ) const) static_cast<Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean  ) const>(&ChFiDS_Spine::IsTangencyExtremity),
             R"#(returns if the set of edges starts (or end) on Tangency point.)#"  , py::arg("IsFirst"))
        .def("SetTangencyExtremity",
             (void (ChFiDS_Spine::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&ChFiDS_Spine::SetTangencyExtremity),
             R"#(None)#"  , py::arg("IsTangency"),  py::arg("IsFirst"))
        .def("Absc",
             (Standard_Real (ChFiDS_Spine::*)( const TopoDS_Vertex &  ) const) static_cast<Standard_Real (ChFiDS_Spine::*)( const TopoDS_Vertex &  ) const>(&ChFiDS_Spine::Absc),
             R"#(None)#"  , py::arg("V"))
        .def("FirstVertex",
             (TopoDS_Vertex (ChFiDS_Spine::*)() const) static_cast<TopoDS_Vertex (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::FirstVertex),
             R"#(None)#" )
        .def("LastVertex",
             (TopoDS_Vertex (ChFiDS_Spine::*)() const) static_cast<TopoDS_Vertex (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::LastVertex),
             R"#(None)#" )
        .def("SetFirstTgt",
             (void (ChFiDS_Spine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real  ) >(&ChFiDS_Spine::SetFirstTgt),
             R"#(None)#"  , py::arg("W"))
        .def("SetLastTgt",
             (void (ChFiDS_Spine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real  ) >(&ChFiDS_Spine::SetLastTgt),
             R"#(None)#"  , py::arg("W"))
        .def("HasFirstTgt",
             (Standard_Boolean (ChFiDS_Spine::*)() const) static_cast<Standard_Boolean (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::HasFirstTgt),
             R"#(None)#" )
        .def("HasLastTgt",
             (Standard_Boolean (ChFiDS_Spine::*)() const) static_cast<Standard_Boolean (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::HasLastTgt),
             R"#(None)#" )
        .def("SetReference",
             (void (ChFiDS_Spine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Real  ) >(&ChFiDS_Spine::SetReference),
             R"#(set a parameter reference for the approx.)#"  , py::arg("W"))
        .def("SetReference",
             (void (ChFiDS_Spine::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Integer  ) >(&ChFiDS_Spine::SetReference),
             R"#(set a parameter reference for the approx, at the middle of edge I.)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (ChFiDS_Spine::*)( const Standard_Real ,  const Standard_Boolean  ) const) static_cast<Standard_Integer (ChFiDS_Spine::*)( const Standard_Real ,  const Standard_Boolean  ) const>(&ChFiDS_Spine::Index),
             R"#(None)#"  , py::arg("W"),  py::arg("Forward")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Index",
             (Standard_Integer (ChFiDS_Spine::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Integer (ChFiDS_Spine::*)( const TopoDS_Edge &  ) const>(&ChFiDS_Spine::Index),
             R"#(None)#"  , py::arg("E"))
        .def("UnsetReference",
             (void (ChFiDS_Spine::*)() ) static_cast<void (ChFiDS_Spine::*)() >(&ChFiDS_Spine::UnsetReference),
             R"#(None)#" )
        .def("SetErrorStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_ErrorStatus  ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_ErrorStatus  ) >(&ChFiDS_Spine::SetErrorStatus),
             R"#(None)#"  , py::arg("state"))
        .def("ErrorStatus",
             (ChFiDS_ErrorStatus (ChFiDS_Spine::*)() const) static_cast<ChFiDS_ErrorStatus (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::ErrorStatus),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_Spine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::DynamicType),
             R"#(None)#" )
        .def("SetFirstStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State  ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State  ) >(&ChFiDS_Spine::SetFirstStatus),
             R"#(stores if the start of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("SetLastStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State  ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State  ) >(&ChFiDS_Spine::SetLastStatus),
             R"#(stores if the end of a set of edges starts on a section of free border or forms a closed contour)#"  , py::arg("S"))
        .def("FirstStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::FirstStatus),
             R"#(returns if the set of edges starts on a free boundary or if the first vertex is a breakpoint or if the set is closed)#" )
        .def("LastStatus",
             (ChFiDS_State (ChFiDS_Spine::*)() const) static_cast<ChFiDS_State (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::LastStatus),
             R"#(returns the state at the end of the set)#" )
        .def("SetStatus",
             (void (ChFiDS_Spine::*)( const ChFiDS_State ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const ChFiDS_State ,  const Standard_Boolean  ) >(&ChFiDS_Spine::SetStatus),
             R"#(None)#"  , py::arg("S"),  py::arg("IsFirst"))
        .def("Status",
             (ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean  ) const) static_cast<ChFiDS_State (ChFiDS_Spine::*)( const Standard_Boolean  ) const>(&ChFiDS_Spine::Status),
             R"#(None)#"  , py::arg("IsFirst"))
        .def("SetTangencyExtremity",
             (void (ChFiDS_Spine::*)( const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_Spine::*)( const Standard_Boolean ,  const Standard_Boolean  ) >(&ChFiDS_Spine::SetTangencyExtremity),
             R"#(None)#"  , py::arg("IsTangency"),  py::arg("IsFirst"))
        .def("IsTangencyExtremity",
             (Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean  ) const) static_cast<Standard_Boolean (ChFiDS_Spine::*)( const Standard_Boolean  ) const>(&ChFiDS_Spine::IsTangencyExtremity),
             R"#(returns if the set of edges starts (or end) on Tangency point.)#"  , py::arg("IsFirst"))
        .def("NbEdges",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::NbEdges),
             R"#(None)#" )
        .def("Edges",
             (const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (ChFiDS_Spine::*)( const Standard_Integer  ) const>(&ChFiDS_Spine::Edges),
             R"#(None)#"  , py::arg("I"))
        .def("SetEdges",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) >(&ChFiDS_Spine::SetEdges),
             R"#(store edges composing the guideline)#"  , py::arg("E"))
        .def("PutInFirst",
             (void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) ) static_cast<void (ChFiDS_Spine::*)( const TopoDS_Edge &  ) >(&ChFiDS_Spine::PutInFirst),
             R"#(store the edge at the first position before all others)#"  , py::arg("E"))
        .def("CurrentIndexOfElementarySpine",
             (Standard_Integer (ChFiDS_Spine::*)() const) static_cast<Standard_Integer (ChFiDS_Spine::*)() const>(&ChFiDS_Spine::CurrentIndexOfElementarySpine),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_Spine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_Spine::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_SurfData ,opencascade::handle<ChFiDS_SurfData>  , Standard_Transient >>(m.attr("ChFiDS_SurfData"))
        .def(py::init<  >()  )
        .def("Copy",
             (void (ChFiDS_SurfData::*)( const opencascade::handle<ChFiDS_SurfData> &  ) ) static_cast<void (ChFiDS_SurfData::*)( const opencascade::handle<ChFiDS_SurfData> &  ) >(&ChFiDS_SurfData::Copy),
             R"#(None)#"  , py::arg("Other"))
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
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeIndexOfS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexOfS2",
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeIndexOfS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeSurf",
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeSurf),
             R"#(None)#"  , py::arg("Index"))
        .def("SetIndexOfC1",
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::SetIndexOfC1),
             R"#(None)#"  , py::arg("Index"))
        .def("SetIndexOfC2",
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::SetIndexOfC2),
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
        .def("Interference",
             (const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)( const Standard_Integer  ) const) static_cast<const ChFiDS_FaceInterference & (ChFiDS_SurfData::*)( const Standard_Integer  ) const>(&ChFiDS_SurfData::Interference),
             R"#(None)#"  , py::arg("OnS"))
        .def("ChangeInterference",
             (ChFiDS_FaceInterference & (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<ChFiDS_FaceInterference & (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeInterference),
             R"#(None)#"  , py::arg("OnS"))
        .def("Index",
             (Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer  ) const>(&ChFiDS_SurfData::Index),
             R"#(None)#"  , py::arg("OfS"))
        .def("Vertex",
             (const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)( const Standard_Boolean ,  const Standard_Integer  ) const) static_cast<const ChFiDS_CommonPoint & (ChFiDS_SurfData::*)( const Standard_Boolean ,  const Standard_Integer  ) const>(&ChFiDS_SurfData::Vertex),
             R"#(returns one of the four vertices wether First is true or wrong and OnS equals 1 or 2.)#"  , py::arg("First"),  py::arg("OnS"))
        .def("ChangeVertex",
             (ChFiDS_CommonPoint & (ChFiDS_SurfData::*)( const Standard_Boolean ,  const Standard_Integer  ) ) static_cast<ChFiDS_CommonPoint & (ChFiDS_SurfData::*)( const Standard_Boolean ,  const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeVertex),
             R"#(returns one of the four vertices wether First is true or wrong and OnS equals 1 or 2.)#"  , py::arg("First"),  py::arg("OnS"))
        .def("IsOnCurve",
             (Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer  ) const>(&ChFiDS_SurfData::IsOnCurve),
             R"#(None)#"  , py::arg("OnS"))
        .def("IndexOfC",
             (Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer  ) const>(&ChFiDS_SurfData::IndexOfC),
             R"#(None)#"  , py::arg("OnS"))
        .def("FirstSpineParam",
             (Standard_Real (ChFiDS_SurfData::*)() const) static_cast<Standard_Real (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::FirstSpineParam),
             R"#(None)#" )
        .def("LastSpineParam",
             (Standard_Real (ChFiDS_SurfData::*)() const) static_cast<Standard_Real (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::LastSpineParam),
             R"#(None)#" )
        .def("FirstSpineParam",
             (void (ChFiDS_SurfData::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Real  ) >(&ChFiDS_SurfData::FirstSpineParam),
             R"#(None)#"  , py::arg("Par"))
        .def("LastSpineParam",
             (void (ChFiDS_SurfData::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Real  ) >(&ChFiDS_SurfData::LastSpineParam),
             R"#(None)#"  , py::arg("Par"))
        .def("FirstExtensionValue",
             (Standard_Real (ChFiDS_SurfData::*)() const) static_cast<Standard_Real (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::FirstExtensionValue),
             R"#(None)#" )
        .def("LastExtensionValue",
             (Standard_Real (ChFiDS_SurfData::*)() const) static_cast<Standard_Real (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::LastExtensionValue),
             R"#(None)#" )
        .def("FirstExtensionValue",
             (void (ChFiDS_SurfData::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Real  ) >(&ChFiDS_SurfData::FirstExtensionValue),
             R"#(None)#"  , py::arg("Extend"))
        .def("LastExtensionValue",
             (void (ChFiDS_SurfData::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Real  ) >(&ChFiDS_SurfData::LastExtensionValue),
             R"#(None)#"  , py::arg("Extend"))
        .def("Simul",
             (opencascade::handle<Standard_Transient> (ChFiDS_SurfData::*)() const) static_cast<opencascade::handle<Standard_Transient> (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::Simul),
             R"#(None)#" )
        .def("SetSimul",
             (void (ChFiDS_SurfData::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (ChFiDS_SurfData::*)( const opencascade::handle<Standard_Transient> &  ) >(&ChFiDS_SurfData::SetSimul),
             R"#(None)#"  , py::arg("S"))
        .def("ResetSimul",
             (void (ChFiDS_SurfData::*)() ) static_cast<void (ChFiDS_SurfData::*)() >(&ChFiDS_SurfData::ResetSimul),
             R"#(None)#" )
        .def("Get2dPoints",
             (gp_Pnt2d (ChFiDS_SurfData::*)( const Standard_Boolean ,  const Standard_Integer  ) const) static_cast<gp_Pnt2d (ChFiDS_SurfData::*)( const Standard_Boolean ,  const Standard_Integer  ) const>(&ChFiDS_SurfData::Get2dPoints),
             R"#(None)#"  , py::arg("First"),  py::arg("OnS"))
        .def("Get2dPoints",
             (void (ChFiDS_SurfData::*)( gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const) static_cast<void (ChFiDS_SurfData::*)( gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d & ,  gp_Pnt2d &  ) const>(&ChFiDS_SurfData::Get2dPoints),
             R"#(None)#"  , py::arg("P2df1"),  py::arg("P2dl1"),  py::arg("P2df2"),  py::arg("P2dl2"))
        .def("Set2dPoints",
             (void (ChFiDS_SurfData::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (ChFiDS_SurfData::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&ChFiDS_SurfData::Set2dPoints),
             R"#(None)#"  , py::arg("P2df1"),  py::arg("P2dl1"),  py::arg("P2df2"),  py::arg("P2dl2"))
        .def("TwistOnS1",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS2),
             R"#(None)#" )
        .def("TwistOnS1",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean  ) >(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#"  , py::arg("T"))
        .def("TwistOnS2",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean  ) >(&ChFiDS_SurfData::TwistOnS2),
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
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::SetIndexOfC1),
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
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::SetIndexOfC2),
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
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeIndexOfS1),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeIndexOfS2",
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeIndexOfS2),
             R"#(None)#"  , py::arg("Index"))
        .def("ChangeSurf",
             (void (ChFiDS_SurfData::*)( const Standard_Integer  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Integer  ) >(&ChFiDS_SurfData::ChangeSurf),
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
             (Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)( const Standard_Integer  ) const>(&ChFiDS_SurfData::IsOnCurve),
             R"#(None)#"  , py::arg("OnS"))
        .def("IndexOfC",
             (Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (ChFiDS_SurfData::*)( const Standard_Integer  ) const>(&ChFiDS_SurfData::IndexOfC),
             R"#(None)#"  , py::arg("OnS"))
        .def("TwistOnS1",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#" )
        .def("TwistOnS2",
             (Standard_Boolean (ChFiDS_SurfData::*)() const) static_cast<Standard_Boolean (ChFiDS_SurfData::*)() const>(&ChFiDS_SurfData::TwistOnS2),
             R"#(None)#" )
        .def("TwistOnS1",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean  ) >(&ChFiDS_SurfData::TwistOnS1),
             R"#(None)#"  , py::arg("T"))
        .def("TwistOnS2",
             (void (ChFiDS_SurfData::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_SurfData::*)( const Standard_Boolean  ) >(&ChFiDS_SurfData::TwistOnS2),
             R"#(None)#"  , py::arg("T"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_SurfData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_SurfData::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_FilSpine ,opencascade::handle<ChFiDS_FilSpine>  , ChFiDS_Spine >>(m.attr("ChFiDS_FilSpine"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real >()  , py::arg("Tol") )
        .def("Reset",
             (void (ChFiDS_FilSpine::*)( const Standard_Boolean  ) ) static_cast<void (ChFiDS_FilSpine::*)( const Standard_Boolean  ) >(&ChFiDS_FilSpine::Reset),
             R"#(None)#"  , py::arg("AllData")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetRadius",
             (void (ChFiDS_FilSpine::*)( const Standard_Real ,  const TopoDS_Edge &  ) ) static_cast<void (ChFiDS_FilSpine::*)( const Standard_Real ,  const TopoDS_Edge &  ) >(&ChFiDS_FilSpine::SetRadius),
             R"#(initializes the constant vector on edge E.)#"  , py::arg("Radius"),  py::arg("E"))
        .def("UnSetRadius",
             (void (ChFiDS_FilSpine::*)( const TopoDS_Edge &  ) ) static_cast<void (ChFiDS_FilSpine::*)( const TopoDS_Edge &  ) >(&ChFiDS_FilSpine::UnSetRadius),
             R"#(resets the constant vector on edge E.)#"  , py::arg("E"))
        .def("SetRadius",
             (void (ChFiDS_FilSpine::*)( const Standard_Real ,  const TopoDS_Vertex &  ) ) static_cast<void (ChFiDS_FilSpine::*)( const Standard_Real ,  const TopoDS_Vertex &  ) >(&ChFiDS_FilSpine::SetRadius),
             R"#(initializes the vector on Vertex V.)#"  , py::arg("Radius"),  py::arg("V"))
        .def("UnSetRadius",
             (void (ChFiDS_FilSpine::*)( const TopoDS_Vertex &  ) ) static_cast<void (ChFiDS_FilSpine::*)( const TopoDS_Vertex &  ) >(&ChFiDS_FilSpine::UnSetRadius),
             R"#(resets the vector on Vertex V.)#"  , py::arg("V"))
        .def("SetRadius",
             (void (ChFiDS_FilSpine::*)( const gp_XY & ,  const Standard_Integer  ) ) static_cast<void (ChFiDS_FilSpine::*)( const gp_XY & ,  const Standard_Integer  ) >(&ChFiDS_FilSpine::SetRadius),
             R"#(initializes the vector on the point of parameter W.)#"  , py::arg("UandR"),  py::arg("IinC"))
        .def("SetRadius",
             (void (ChFiDS_FilSpine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_FilSpine::*)( const Standard_Real  ) >(&ChFiDS_FilSpine::SetRadius),
             R"#(initializes the constant vector on all spine.)#"  , py::arg("Radius"))
        .def("SetRadius",
             (void (ChFiDS_FilSpine::*)( const opencascade::handle<Law_Function> & ,  const Standard_Integer  ) ) static_cast<void (ChFiDS_FilSpine::*)( const opencascade::handle<Law_Function> & ,  const Standard_Integer  ) >(&ChFiDS_FilSpine::SetRadius),
             R"#(initializes the rule of evolution on all spine.)#"  , py::arg("C"),  py::arg("IinC"))
        .def("IsConstant",
             (Standard_Boolean (ChFiDS_FilSpine::*)() const) static_cast<Standard_Boolean (ChFiDS_FilSpine::*)() const>(&ChFiDS_FilSpine::IsConstant),
             R"#(returns true if the radius is constant all along the spine.)#" )
        .def("IsConstant",
             (Standard_Boolean (ChFiDS_FilSpine::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (ChFiDS_FilSpine::*)( const Standard_Integer  ) const>(&ChFiDS_FilSpine::IsConstant),
             R"#(returns true if the radius is constant all along the edge E.)#"  , py::arg("IE"))
        .def("Radius",
             (Standard_Real (ChFiDS_FilSpine::*)() const) static_cast<Standard_Real (ChFiDS_FilSpine::*)() const>(&ChFiDS_FilSpine::Radius),
             R"#(returns the radius if the fillet is constant all along the spine.)#" )
        .def("Radius",
             (Standard_Real (ChFiDS_FilSpine::*)( const Standard_Integer  ) const) static_cast<Standard_Real (ChFiDS_FilSpine::*)( const Standard_Integer  ) const>(&ChFiDS_FilSpine::Radius),
             R"#(returns the radius if the fillet is constant all along the edge E.)#"  , py::arg("IE"))
        .def("Radius",
             (Standard_Real (ChFiDS_FilSpine::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Real (ChFiDS_FilSpine::*)( const TopoDS_Edge &  ) const>(&ChFiDS_FilSpine::Radius),
             R"#(returns the radius if the fillet is constant all along the edge E.)#"  , py::arg("E"))
        .def("AppendElSpine",
             (void (ChFiDS_FilSpine::*)( const opencascade::handle<ChFiDS_HElSpine> &  ) ) static_cast<void (ChFiDS_FilSpine::*)( const opencascade::handle<ChFiDS_HElSpine> &  ) >(&ChFiDS_FilSpine::AppendElSpine),
             R"#(None)#"  , py::arg("Els"))
        .def("Law",
             (opencascade::handle<Law_Composite> (ChFiDS_FilSpine::*)( const opencascade::handle<ChFiDS_HElSpine> &  ) const) static_cast<opencascade::handle<Law_Composite> (ChFiDS_FilSpine::*)( const opencascade::handle<ChFiDS_HElSpine> &  ) const>(&ChFiDS_FilSpine::Law),
             R"#(None)#"  , py::arg("Els"))
        .def("ChangeLaw",
             (opencascade::handle<Law_Function> & (ChFiDS_FilSpine::*)( const TopoDS_Edge &  ) ) static_cast<opencascade::handle<Law_Function> & (ChFiDS_FilSpine::*)( const TopoDS_Edge &  ) >(&ChFiDS_FilSpine::ChangeLaw),
             R"#(returns the elementary law)#"  , py::arg("E"))
        .def("MaxRadFromSeqAndLaws",
             (Standard_Real (ChFiDS_FilSpine::*)() const) static_cast<Standard_Real (ChFiDS_FilSpine::*)() const>(&ChFiDS_FilSpine::MaxRadFromSeqAndLaws),
             R"#(returns the maximum radius if the fillet is non-constant)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_FilSpine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_FilSpine::*)() const>(&ChFiDS_FilSpine::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_FilSpine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_FilSpine::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<ChFiDS_CircSection ,std::unique_ptr<ChFiDS_CircSection>  >>(m.attr("ChFiDS_CircSection"))
        .def(py::init<  >()  )
        .def("Set",
             (void (ChFiDS_CircSection::*)( const gp_Circ & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_CircSection::*)( const gp_Circ & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_CircSection::Set),
             R"#(None)#"  , py::arg("C"),  py::arg("F"),  py::arg("L"))
        .def("Set",
             (void (ChFiDS_CircSection::*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_CircSection::*)( const gp_Lin & ,  const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_CircSection::Set),
             R"#(None)#"  , py::arg("C"),  py::arg("F"),  py::arg("L"))
        .def("Get",
             (void (ChFiDS_CircSection::*)( gp_Circ & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_CircSection::*)( gp_Circ & ,  Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_CircSection::Get),
             R"#(None)#"  , py::arg("C"),  py::arg("F"),  py::arg("L"))
        .def("Get",
             (void (ChFiDS_CircSection::*)( gp_Lin & ,  Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_CircSection::*)( gp_Lin & ,  Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_CircSection::Get),
             R"#(None)#"  , py::arg("C"),  py::arg("F"),  py::arg("L"))
;


    static_cast<py::class_<ChFiDS_ChamfSpine ,opencascade::handle<ChFiDS_ChamfSpine>  , ChFiDS_Spine >>(m.attr("ChFiDS_ChamfSpine"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real >()  , py::arg("Tol") )
        .def("SetDist",
             (void (ChFiDS_ChamfSpine::*)( const Standard_Real  ) ) static_cast<void (ChFiDS_ChamfSpine::*)( const Standard_Real  ) >(&ChFiDS_ChamfSpine::SetDist),
             R"#(None)#"  , py::arg("Dis"))
        .def("GetDist",
             (void (ChFiDS_ChamfSpine::*)( Standard_Real &  ) const) static_cast<void (ChFiDS_ChamfSpine::*)( Standard_Real &  ) const>(&ChFiDS_ChamfSpine::GetDist),
             R"#(None)#"  , py::arg("Dis"))
        .def("SetDists",
             (void (ChFiDS_ChamfSpine::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (ChFiDS_ChamfSpine::*)( const Standard_Real ,  const Standard_Real  ) >(&ChFiDS_ChamfSpine::SetDists),
             R"#(None)#"  , py::arg("Dis1"),  py::arg("Dis2"))
        .def("Dists",
             (void (ChFiDS_ChamfSpine::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (ChFiDS_ChamfSpine::*)( Standard_Real & ,  Standard_Real &  ) const>(&ChFiDS_ChamfSpine::Dists),
             R"#(None)#"  , py::arg("Dis1"),  py::arg("Dis2"))
        .def("GetDistAngle",
             (void (ChFiDS_ChamfSpine::*)( Standard_Real & ,  Standard_Real & ,  Standard_Boolean &  ) const) static_cast<void (ChFiDS_ChamfSpine::*)( Standard_Real & ,  Standard_Real & ,  Standard_Boolean &  ) const>(&ChFiDS_ChamfSpine::GetDistAngle),
             R"#(None)#"  , py::arg("Dis"),  py::arg("Angle"),  py::arg("DisOnF1"))
        .def("SetDistAngle",
             (void (ChFiDS_ChamfSpine::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (ChFiDS_ChamfSpine::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&ChFiDS_ChamfSpine::SetDistAngle),
             R"#(None)#"  , py::arg("Dis"),  py::arg("Angle"),  py::arg("DisOnF1"))
        .def("IsChamfer",
             (ChFiDS_ChamfMethod (ChFiDS_ChamfSpine::*)() const) static_cast<ChFiDS_ChamfMethod (ChFiDS_ChamfSpine::*)() const>(&ChFiDS_ChamfSpine::IsChamfer),
             R"#(Return the method of chamfers used)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ChFiDS_ChamfSpine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ChFiDS_ChamfSpine::*)() const>(&ChFiDS_ChamfSpine::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ChFiDS_ChamfSpine::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ChFiDS_ChamfSpine::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/ChFiDS_State.hxx
// ./opencascade/ChFiDS_CommonPoint.hxx
// ./opencascade/ChFiDS_SequenceOfSurfData.hxx
// ./opencascade/ChFiDS_Regularities.hxx
// ./opencascade/ChFiDS_StripeArray1.hxx
// ./opencascade/ChFiDS_StripeMap.hxx
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
// ./opencascade/ChFiDS_SequenceOfSpine.hxx
// ./opencascade/ChFiDS_ListIteratorOfRegularities.hxx
// ./opencascade/ChFiDS_Stripe.hxx
// ./opencascade/ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx
// ./opencascade/ChFiDS_FilSpine.hxx
// ./opencascade/ChFiDS_ErrorStatus.hxx
// ./opencascade/ChFiDS_HElSpine.hxx
// ./opencascade/ChFiDS_ElSpine.hxx
// ./opencascade/ChFiDS_HData.hxx
// ./opencascade/ChFiDS_SecArray1.hxx
// ./opencascade/ChFiDS_ChamfSpine.hxx
// ./opencascade/ChFiDS_Map.hxx
// ./opencascade/ChFiDS_ChamfMethod.hxx
// ./opencascade/ChFiDS_Spine.hxx
// ./opencascade/ChFiDS_ListOfStripe.hxx
// ./opencascade/ChFiDS_FaceInterference.hxx
// ./opencascade/ChFiDS_CircSection.hxx
// ./opencascade/ChFiDS_Regul.hxx
// ./opencascade/ChFiDS_SurfData.hxx
// ./opencascade/ChFiDS_ListIteratorOfListOfStripe.hxx
// ./opencascade/ChFiDS_ListIteratorOfListOfHElSpine.hxx
// ./opencascade/ChFiDS_SecHArray1.hxx

// operators

// register typdefs
// ./opencascade/ChFiDS_State.hxx
// ./opencascade/ChFiDS_CommonPoint.hxx
// ./opencascade/ChFiDS_SequenceOfSurfData.hxx
    register_template_NCollection_Sequence<opencascade::handle<ChFiDS_SurfData> >(m,"ChFiDS_SequenceOfSurfData");  
// ./opencascade/ChFiDS_Regularities.hxx
    register_template_NCollection_List<ChFiDS_Regul>(m,"ChFiDS_Regularities");  
// ./opencascade/ChFiDS_StripeArray1.hxx
    register_template_NCollection_Array1<opencascade::handle<ChFiDS_Stripe> >(m,"ChFiDS_StripeArray1");  
// ./opencascade/ChFiDS_StripeMap.hxx
// ./opencascade/ChFiDS_ListOfHElSpine.hxx
    register_template_NCollection_List<opencascade::handle<ChFiDS_HElSpine> >(m,"ChFiDS_ListOfHElSpine");  
// ./opencascade/ChFiDS_SequenceOfSpine.hxx
    register_template_NCollection_Sequence<opencascade::handle<ChFiDS_Spine> >(m,"ChFiDS_SequenceOfSpine");  
// ./opencascade/ChFiDS_ListIteratorOfRegularities.hxx
// ./opencascade/ChFiDS_Stripe.hxx
// ./opencascade/ChFiDS_IndexedDataMapOfVertexListOfStripe.hxx
    register_template_NCollection_IndexedDataMap<TopoDS_Vertex, ChFiDS_ListOfStripe, TopTools_ShapeMapHasher>(m,"ChFiDS_IndexedDataMapOfVertexListOfStripe");  
// ./opencascade/ChFiDS_FilSpine.hxx
// ./opencascade/ChFiDS_ErrorStatus.hxx
// ./opencascade/ChFiDS_HElSpine.hxx
// ./opencascade/ChFiDS_ElSpine.hxx
// ./opencascade/ChFiDS_HData.hxx
// ./opencascade/ChFiDS_SecArray1.hxx
    register_template_NCollection_Array1<ChFiDS_CircSection>(m,"ChFiDS_SecArray1");  
// ./opencascade/ChFiDS_ChamfSpine.hxx
// ./opencascade/ChFiDS_Map.hxx
// ./opencascade/ChFiDS_ChamfMethod.hxx
// ./opencascade/ChFiDS_Spine.hxx
// ./opencascade/ChFiDS_ListOfStripe.hxx
    register_template_NCollection_List<opencascade::handle<ChFiDS_Stripe> >(m,"ChFiDS_ListOfStripe");  
// ./opencascade/ChFiDS_FaceInterference.hxx
// ./opencascade/ChFiDS_CircSection.hxx
// ./opencascade/ChFiDS_Regul.hxx
// ./opencascade/ChFiDS_SurfData.hxx
// ./opencascade/ChFiDS_ListIteratorOfListOfStripe.hxx
// ./opencascade/ChFiDS_ListIteratorOfListOfHElSpine.hxx
// ./opencascade/ChFiDS_SecHArray1.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
