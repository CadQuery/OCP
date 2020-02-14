
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Lin2d.hxx>

// module includes
#include <Geom2dHatch_Classifier.hxx>
#include <Geom2dHatch_DataMapIteratorOfHatchings.hxx>
#include <Geom2dHatch_DataMapIteratorOfMapOfElements.hxx>
#include <Geom2dHatch_Element.hxx>
#include <Geom2dHatch_Elements.hxx>
#include <Geom2dHatch_FClass2dOfClassifier.hxx>
#include <Geom2dHatch_Hatcher.hxx>
#include <Geom2dHatch_Hatching.hxx>
#include <Geom2dHatch_Hatchings.hxx>
#include <Geom2dHatch_Intersector.hxx>
#include <Geom2dHatch_MapOfElements.hxx>

// template related includes
// ./opencascade/Geom2dHatch_Hatchings.hxx
#include "NCollection.hxx"
// ./opencascade/Geom2dHatch_MapOfElements.hxx
#include "NCollection.hxx"
// ./opencascade/Geom2dHatch_MapOfElements.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dHatch(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dHatch"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dHatch_Classifier , shared_ptr<Geom2dHatch_Classifier>  >>(m.attr("Geom2dHatch_Classifier"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Geom2dHatch_Elements &,const gp_Pnt2d &,const Standard_Real >()  , py::arg("F"),  py::arg("P"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (Geom2dHatch_Classifier::*)( Geom2dHatch_Elements & ,  const gp_Pnt2d & ,  const Standard_Real  ) ) static_cast<void (Geom2dHatch_Classifier::*)( Geom2dHatch_Elements & ,  const gp_Pnt2d & ,  const Standard_Real  ) >(&Geom2dHatch_Classifier::Perform),
             R"#(Classify the Point P with Tolerance <T> on the face described by <F>.)#"  , py::arg("F"),  py::arg("P"),  py::arg("Tol"))
        .def("State",
             (TopAbs_State (Geom2dHatch_Classifier::*)() const) static_cast<TopAbs_State (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::State),
             R"#(Returns the result of the classification.)#" )
        .def("Rejected",
             (Standard_Boolean (Geom2dHatch_Classifier::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::Rejected),
             R"#(Returns True when the state was computed by a rejection. The state is OUT.)#" )
        .def("NoWires",
             (Standard_Boolean (Geom2dHatch_Classifier::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::NoWires),
             R"#(Returns True if the face contains no wire. The state is IN.)#" )
        .def("Edge",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Classifier::*)() const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::Edge),
             R"#(Returns the Edge used to determine the classification. When the State is ON this is the Edge containing the point.)#" )
        .def("EdgeParameter",
             (Standard_Real (Geom2dHatch_Classifier::*)() const) static_cast<Standard_Real (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::EdgeParameter),
             R"#(Returns the parameter on Edge() used to determine the classification.)#" )
        .def("Position",
             (IntRes2d_Position (Geom2dHatch_Classifier::*)() const) static_cast<IntRes2d_Position (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::Position),
             R"#(Returns the position of the point on the edge returned by Edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Element , shared_ptr<Geom2dHatch_Element>  >>(m.attr("Geom2dHatch_Element"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dHatch_Element & >()  , py::arg("Other") )
        .def(py::init< const Geom2dAdaptor_Curve &,const TopAbs_Orientation >()  , py::arg("Curve"),  py::arg("Orientation")=static_cast<const TopAbs_Orientation>(TopAbs_FORWARD) )
    // custom constructors
    // methods
        .def("Curve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Element::*)() const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Element::*)() const>(&Geom2dHatch_Element::Curve),
             R"#(Returns the curve associated to the element.)#" )
        .def("ChangeCurve",
             (Geom2dAdaptor_Curve & (Geom2dHatch_Element::*)() ) static_cast<Geom2dAdaptor_Curve & (Geom2dHatch_Element::*)() >(&Geom2dHatch_Element::ChangeCurve),
             R"#(Returns the curve associated to the element.)#" )
        .def("Orientation",
             (void (Geom2dHatch_Element::*)( const TopAbs_Orientation  ) ) static_cast<void (Geom2dHatch_Element::*)( const TopAbs_Orientation  ) >(&Geom2dHatch_Element::Orientation),
             R"#(Sets the orientation of the element.)#"  , py::arg("Orientation"))
        .def("Orientation",
             (TopAbs_Orientation (Geom2dHatch_Element::*)() const) static_cast<TopAbs_Orientation (Geom2dHatch_Element::*)() const>(&Geom2dHatch_Element::Orientation),
             R"#(Returns the orientation of the element.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Elements , shared_ptr<Geom2dHatch_Elements>  >>(m.attr("Geom2dHatch_Elements"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dHatch_Elements & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Clear",
             (void (Geom2dHatch_Elements::*)() ) static_cast<void (Geom2dHatch_Elements::*)() >(&Geom2dHatch_Elements::Clear),
             R"#(None)#" )
        .def("Bind",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const Standard_Integer ,  const Geom2dHatch_Element &  ) ) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const Standard_Integer ,  const Geom2dHatch_Element &  ) >(&Geom2dHatch_Elements::Bind),
             R"#(None)#"  , py::arg("K"),  py::arg("I"))
        .def("IsBound",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const Standard_Integer  ) const>(&Geom2dHatch_Elements::IsBound),
             R"#(None)#"  , py::arg("K"))
        .def("UnBind",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const Standard_Integer  ) ) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const Standard_Integer  ) >(&Geom2dHatch_Elements::UnBind),
             R"#(None)#"  , py::arg("K"))
        .def("Find",
             (const Geom2dHatch_Element & (Geom2dHatch_Elements::*)( const Standard_Integer  ) const) static_cast<const Geom2dHatch_Element & (Geom2dHatch_Elements::*)( const Standard_Integer  ) const>(&Geom2dHatch_Elements::Find),
             R"#(None)#"  , py::arg("K"))
        .def("ChangeFind",
             (Geom2dHatch_Element & (Geom2dHatch_Elements::*)( const Standard_Integer  ) ) static_cast<Geom2dHatch_Element & (Geom2dHatch_Elements::*)( const Standard_Integer  ) >(&Geom2dHatch_Elements::ChangeFind),
             R"#(None)#"  , py::arg("K"))
        .def("CheckPoint",
             (Standard_Boolean (Geom2dHatch_Elements::*)( gp_Pnt2d &  ) ) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( gp_Pnt2d &  ) >(&Geom2dHatch_Elements::CheckPoint),
             R"#(None)#"  , py::arg("P"))
        .def("Reject",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Pnt2d &  ) const) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Pnt2d &  ) const>(&Geom2dHatch_Elements::Reject),
             R"#(None)#"  , py::arg("P"))
        .def("Segment",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) >(&Geom2dHatch_Elements::Segment),
             R"#(None)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("OtherSegment",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Pnt2d & ,  gp_Lin2d & ,  Standard_Real &  ) >(&Geom2dHatch_Elements::OtherSegment),
             R"#(None)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("InitWires",
             (void (Geom2dHatch_Elements::*)() ) static_cast<void (Geom2dHatch_Elements::*)() >(&Geom2dHatch_Elements::InitWires),
             R"#(None)#" )
        .def("MoreWires",
             (Standard_Boolean (Geom2dHatch_Elements::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)() const>(&Geom2dHatch_Elements::MoreWires),
             R"#(None)#" )
        .def("NextWire",
             (void (Geom2dHatch_Elements::*)() ) static_cast<void (Geom2dHatch_Elements::*)() >(&Geom2dHatch_Elements::NextWire),
             R"#(None)#" )
        .def("RejectWire",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Lin2d & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Lin2d & ,  const Standard_Real  ) const>(&Geom2dHatch_Elements::RejectWire),
             R"#(None)#"  , py::arg("L"),  py::arg("Par"))
        .def("InitEdges",
             (void (Geom2dHatch_Elements::*)() ) static_cast<void (Geom2dHatch_Elements::*)() >(&Geom2dHatch_Elements::InitEdges),
             R"#(None)#" )
        .def("MoreEdges",
             (Standard_Boolean (Geom2dHatch_Elements::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)() const>(&Geom2dHatch_Elements::MoreEdges),
             R"#(None)#" )
        .def("NextEdge",
             (void (Geom2dHatch_Elements::*)() ) static_cast<void (Geom2dHatch_Elements::*)() >(&Geom2dHatch_Elements::NextEdge),
             R"#(None)#" )
        .def("RejectEdge",
             (Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Lin2d & ,  const Standard_Real  ) const) static_cast<Standard_Boolean (Geom2dHatch_Elements::*)( const gp_Lin2d & ,  const Standard_Real  ) const>(&Geom2dHatch_Elements::RejectEdge),
             R"#(None)#"  , py::arg("L"),  py::arg("Par"))
        .def("CurrentEdge",
             (void (Geom2dHatch_Elements::*)( Geom2dAdaptor_Curve & ,  TopAbs_Orientation &  ) const) static_cast<void (Geom2dHatch_Elements::*)( Geom2dAdaptor_Curve & ,  TopAbs_Orientation &  ) const>(&Geom2dHatch_Elements::CurrentEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("Or"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_FClass2dOfClassifier , shared_ptr<Geom2dHatch_FClass2dOfClassifier>  >>(m.attr("Geom2dHatch_FClass2dOfClassifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reset",
             (void (Geom2dHatch_FClass2dOfClassifier::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Geom2dHatch_FClass2dOfClassifier::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real  ) >(&Geom2dHatch_FClass2dOfClassifier::Reset),
             R"#(Starts a classification process. The point to classify is the origin of the line <L>. <P> is the original length of the segment on <L> used to compute intersections. <Tol> is the tolerance attached to the line segment in intersections.)#"  , py::arg("L"),  py::arg("P"),  py::arg("Tol"))
        .def("Compare",
             (void (Geom2dHatch_FClass2dOfClassifier::*)( const Geom2dAdaptor_Curve & ,  const TopAbs_Orientation  ) ) static_cast<void (Geom2dHatch_FClass2dOfClassifier::*)( const Geom2dAdaptor_Curve & ,  const TopAbs_Orientation  ) >(&Geom2dHatch_FClass2dOfClassifier::Compare),
             R"#(Updates the classification process with the edge <E> from the boundary.)#"  , py::arg("E"),  py::arg("Or"))
        .def("Parameter",
             (Standard_Real (Geom2dHatch_FClass2dOfClassifier::*)() const) static_cast<Standard_Real (Geom2dHatch_FClass2dOfClassifier::*)() const>(&Geom2dHatch_FClass2dOfClassifier::Parameter),
             R"#(Returns the current value of the parameter.)#" )
        .def("Intersector",
             (Geom2dHatch_Intersector & (Geom2dHatch_FClass2dOfClassifier::*)() ) static_cast<Geom2dHatch_Intersector & (Geom2dHatch_FClass2dOfClassifier::*)() >(&Geom2dHatch_FClass2dOfClassifier::Intersector),
             R"#(Returns the intersecting algorithm.)#" )
        .def("ClosestIntersection",
             (Standard_Integer (Geom2dHatch_FClass2dOfClassifier::*)() const) static_cast<Standard_Integer (Geom2dHatch_FClass2dOfClassifier::*)() const>(&Geom2dHatch_FClass2dOfClassifier::ClosestIntersection),
             R"#(Returns 0 if the last compared edge had no relevant intersection. Else returns the index of this intersection in the last intersection algorithm.)#" )
        .def("State",
             (TopAbs_State (Geom2dHatch_FClass2dOfClassifier::*)() const) static_cast<TopAbs_State (Geom2dHatch_FClass2dOfClassifier::*)() const>(&Geom2dHatch_FClass2dOfClassifier::State),
             R"#(Returns the current state of the point.)#" )
        .def("IsHeadOrEnd",
             (Standard_Boolean (Geom2dHatch_FClass2dOfClassifier::*)() const) static_cast<Standard_Boolean (Geom2dHatch_FClass2dOfClassifier::*)() const>(&Geom2dHatch_FClass2dOfClassifier::IsHeadOrEnd),
             R"#(Returns the Standard_True if the closest intersection point represents head or end of the edge. Returns Standard_False otherwise.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Hatcher , shared_ptr<Geom2dHatch_Hatcher>  >>(m.attr("Geom2dHatch_Hatcher"))
    // constructors
        .def(py::init< const Geom2dHatch_Intersector &,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Intersector"),  py::arg("Confusion2d"),  py::arg("Confusion3d"),  py::arg("KeepPnt")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("KeepSeg")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Intersector",
             (void (Geom2dHatch_Hatcher::*)( const Geom2dHatch_Intersector &  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Geom2dHatch_Intersector &  ) >(&Geom2dHatch_Hatcher::Intersector),
             R"#(Sets the associated intersector.)#"  , py::arg("Intersector"))
        .def("Intersector",
             (const Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() ) static_cast<const Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::Intersector),
             R"#(Returns the associated intersector.)#" )
        .def("ChangeIntersector",
             (Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() ) static_cast<Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::ChangeIntersector),
             R"#(Returns the associated intersector.)#" )
        .def("Confusion2d",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Real  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Real  ) >(&Geom2dHatch_Hatcher::Confusion2d),
             R"#(Sets the confusion tolerance.)#"  , py::arg("Confusion"))
        .def("Confusion2d",
             (Standard_Real (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Real (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::Confusion2d),
             R"#(Returns the 2d confusion tolerance, i.e. the value under which two points are considered identical in the parametric space of the hatching.)#" )
        .def("Confusion3d",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Real  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Real  ) >(&Geom2dHatch_Hatcher::Confusion3d),
             R"#(Sets the confusion tolerance.)#"  , py::arg("Confusion"))
        .def("Confusion3d",
             (Standard_Real (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Real (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::Confusion3d),
             R"#(Returns the 3d confusion tolerance, i.e. the value under which two points are considered identical in the 3d space of the hatching.)#" )
        .def("KeepPoints",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Boolean  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Boolean  ) >(&Geom2dHatch_Hatcher::KeepPoints),
             R"#(Sets the above flag.)#"  , py::arg("Keep"))
        .def("KeepPoints",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::KeepPoints),
             R"#(Returns the flag about the points consideration.)#" )
        .def("KeepSegments",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Boolean  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Boolean  ) >(&Geom2dHatch_Hatcher::KeepSegments),
             R"#(Sets the above flag.)#"  , py::arg("Keep"))
        .def("KeepSegments",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::KeepSegments),
             R"#(Returns the flag about the segments consideration.)#" )
        .def("Clear",
             (void (Geom2dHatch_Hatcher::*)() ) static_cast<void (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::Clear),
             R"#(Removes all the hatchings and all the elements.)#" )
        .def("ElementCurve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::ElementCurve),
             R"#(Returns the curve associated to the IndE-th element.)#"  , py::arg("IndE"))
        .def("AddElement",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Geom2dAdaptor_Curve & ,  const TopAbs_Orientation  ) ) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Geom2dAdaptor_Curve & ,  const TopAbs_Orientation  ) >(&Geom2dHatch_Hatcher::AddElement),
             R"#(Adds an element to the hatcher and returns its index.)#"  , py::arg("Curve"),  py::arg("Orientation")=static_cast<const TopAbs_Orientation>(TopAbs_FORWARD))
        .def("AddElement",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const opencascade::handle<Geom2d_Curve> & ,  const TopAbs_Orientation  ) ) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const opencascade::handle<Geom2d_Curve> & ,  const TopAbs_Orientation  ) >(&Geom2dHatch_Hatcher::AddElement),
             R"#(Adds an element to the hatcher and returns its index.)#"  , py::arg("Curve"),  py::arg("Orientation")=static_cast<const TopAbs_Orientation>(TopAbs_FORWARD))
        .def("RemElement",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) >(&Geom2dHatch_Hatcher::RemElement),
             R"#(Removes the IndE-th element from the hatcher.)#"  , py::arg("IndE"))
        .def("ClrElements",
             (void (Geom2dHatch_Hatcher::*)() ) static_cast<void (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::ClrElements),
             R"#(Removes all the elements from the hatcher.)#" )
        .def("HatchingCurve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::HatchingCurve),
             R"#(Returns the curve associated to the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("AddHatching",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dHatch_Hatcher::AddHatching),
             R"#(Adds a hatching to the hatcher and returns its index.)#"  , py::arg("Curve"))
        .def("RemHatching",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) >(&Geom2dHatch_Hatcher::RemHatching),
             R"#(Removes the IndH-th hatching from the hatcher.)#"  , py::arg("IndH"))
        .def("ClrHatchings",
             (void (Geom2dHatch_Hatcher::*)() ) static_cast<void (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::ClrHatchings),
             R"#(Removes all the hatchings from the hatcher.)#" )
        .def("NbPoints",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::NbPoints),
             R"#(Returns the number of intersection points of the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Point",
             (const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::Point),
             R"#(Returns the IndP-th intersection point of the IndH-th hatching.)#"  , py::arg("IndH"),  py::arg("IndP"))
        .def("Trim",
             (void (Geom2dHatch_Hatcher::*)() ) static_cast<void (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::Trim),
             R"#(Trims all the hatchings of the hatcher by all the elements of the hatcher.)#" )
        .def("Trim",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Geom2dAdaptor_Curve &  ) ) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Geom2dAdaptor_Curve &  ) >(&Geom2dHatch_Hatcher::Trim),
             R"#(Adds a hatching to the hatcher and trims it by the elements already given and returns its index.)#"  , py::arg("Curve"))
        .def("Trim",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) >(&Geom2dHatch_Hatcher::Trim),
             R"#(Trims the IndH-th hatching by the elements already given.)#"  , py::arg("IndH"))
        .def("ComputeDomains",
             (void (Geom2dHatch_Hatcher::*)() ) static_cast<void (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::ComputeDomains),
             R"#(Computes the domains of all the hatchings.)#" )
        .def("ComputeDomains",
             (void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) ) static_cast<void (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) >(&Geom2dHatch_Hatcher::ComputeDomains),
             R"#(Computes the domains of the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("TrimDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::TrimDone),
             R"#(Returns the fact that the intersections were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("TrimFailed",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::TrimFailed),
             R"#(Returns the fact that the intersections failed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("IsDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::IsDone),
             R"#(Returns the fact that the domains were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Status",
             (HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::Status),
             R"#(Returns the status about the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("NbDomains",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::NbDomains),
             R"#(Returns the number of domains of the IndH-th hatching. Only ONE "INFINITE" domain means that the hatching is fully included in the contour defined by the elements.)#"  , py::arg("IndH"))
        .def("Domain",
             (const HatchGen_Domain & (Geom2dHatch_Hatcher::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const HatchGen_Domain & (Geom2dHatch_Hatcher::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::Domain),
             R"#(Returns the IDom-th domain of the IndH-th hatching.)#"  , py::arg("IndH"),  py::arg("IDom"))
        .def("Dump",
             (void (Geom2dHatch_Hatcher::*)() const) static_cast<void (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::Dump),
             R"#(Dump the hatcher.)#" )
        .def("Intersector",
             (const Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() ) static_cast<const Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::Intersector),
             R"#(Returns the associated intersector.)#" )
        .def("ChangeIntersector",
             (Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() ) static_cast<Geom2dHatch_Intersector & (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::ChangeIntersector),
             R"#(Returns the associated intersector.)#" )
        .def("Confusion2d",
             (Standard_Real (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Real (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::Confusion2d),
             R"#(Returns the 2d confusion tolerance, i.e. the value under which two points are considered identical in the parametric space of the hatching.)#" )
        .def("Confusion3d",
             (Standard_Real (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Real (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::Confusion3d),
             R"#(Returns the 3d confusion tolerance, i.e. the value under which two points are considered identical in the 3d space of the hatching.)#" )
        .def("KeepPoints",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::KeepPoints),
             R"#(Returns the flag about the points consideration.)#" )
        .def("KeepSegments",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)() const>(&Geom2dHatch_Hatcher::KeepSegments),
             R"#(Returns the flag about the segments consideration.)#" )
        .def("Clear",
             (void (Geom2dHatch_Hatcher::*)() ) static_cast<void (Geom2dHatch_Hatcher::*)() >(&Geom2dHatch_Hatcher::Clear),
             R"#(Removes all the hatchings and all the elements.)#" )
        .def("ElementCurve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::ElementCurve),
             R"#(Returns the curve associated to the IndE-th element.)#"  , py::arg("IndE"))
        .def("HatchingCurve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::HatchingCurve),
             R"#(Returns the curve associated to the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("NbPoints",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::NbPoints),
             R"#(Returns the number of intersection points of the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Point",
             (const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::Point),
             R"#(Returns the IndP-th intersection point of the IndH-th hatching.)#"  , py::arg("IndH"),  py::arg("IndP"))
        .def("TrimDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::TrimDone),
             R"#(Returns the fact that the intersections were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("TrimFailed",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::TrimFailed),
             R"#(Returns the fact that the intersections failed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("IsDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::IsDone),
             R"#(Returns the fact that the domains were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Status",
             (HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::Status),
             R"#(Returns the status about the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("NbDomains",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatcher::NbDomains),
             R"#(Returns the number of domains of the IndH-th hatching. Only ONE "INFINITE" domain means that the hatching is fully included in the contour defined by the elements.)#"  , py::arg("IndH"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Hatching , shared_ptr<Geom2dHatch_Hatching>  >>(m.attr("Geom2dHatch_Hatching"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Geom2dAdaptor_Curve & >()  , py::arg("Curve") )
    // custom constructors
    // methods
        .def("Curve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatching::*)() const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::Curve),
             R"#(Returns the curve associated to the hatching.)#" )
        .def("ChangeCurve",
             (Geom2dAdaptor_Curve & (Geom2dHatch_Hatching::*)() ) static_cast<Geom2dAdaptor_Curve & (Geom2dHatch_Hatching::*)() >(&Geom2dHatch_Hatching::ChangeCurve),
             R"#(Returns the curve associated to the hatching.)#" )
        .def("TrimDone",
             (void (Geom2dHatch_Hatching::*)( const Standard_Boolean  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const Standard_Boolean  ) >(&Geom2dHatch_Hatching::TrimDone),
             R"#(Sets the flag about the trimming computations to the given value.)#"  , py::arg("Flag"))
        .def("TrimDone",
             (Standard_Boolean (Geom2dHatch_Hatching::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::TrimDone),
             R"#(Returns the flag about the trimming computations.)#" )
        .def("TrimFailed",
             (void (Geom2dHatch_Hatching::*)( const Standard_Boolean  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const Standard_Boolean  ) >(&Geom2dHatch_Hatching::TrimFailed),
             R"#(Sets the flag about the trimming failure to the given value.)#"  , py::arg("Flag"))
        .def("TrimFailed",
             (Standard_Boolean (Geom2dHatch_Hatching::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::TrimFailed),
             R"#(Returns the flag about the trimming failure.)#" )
        .def("IsDone",
             (void (Geom2dHatch_Hatching::*)( const Standard_Boolean  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const Standard_Boolean  ) >(&Geom2dHatch_Hatching::IsDone),
             R"#(Sets the flag about the domains computation to the given value.)#"  , py::arg("Flag"))
        .def("IsDone",
             (Standard_Boolean (Geom2dHatch_Hatching::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::IsDone),
             R"#(Returns the flag about the domains computation.)#" )
        .def("Status",
             (void (Geom2dHatch_Hatching::*)( const HatchGen_ErrorStatus  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const HatchGen_ErrorStatus  ) >(&Geom2dHatch_Hatching::Status),
             R"#(Sets the error status.)#"  , py::arg("theStatus"))
        .def("Status",
             (HatchGen_ErrorStatus (Geom2dHatch_Hatching::*)() const) static_cast<HatchGen_ErrorStatus (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::Status),
             R"#(Returns the error status.)#" )
        .def("AddPoint",
             (void (Geom2dHatch_Hatching::*)( const HatchGen_PointOnHatching & ,  const Standard_Real  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const HatchGen_PointOnHatching & ,  const Standard_Real  ) >(&Geom2dHatch_Hatching::AddPoint),
             R"#(Adds an intersection point to the hatching.)#"  , py::arg("Point"),  py::arg("Confusion"))
        .def("NbPoints",
             (Standard_Integer (Geom2dHatch_Hatching::*)() const) static_cast<Standard_Integer (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::NbPoints),
             R"#(Returns the number of intersection points of the hatching.)#" )
        .def("Point",
             (const HatchGen_PointOnHatching & (Geom2dHatch_Hatching::*)( const Standard_Integer  ) const) static_cast<const HatchGen_PointOnHatching & (Geom2dHatch_Hatching::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatching::Point),
             R"#(Returns the Index-th intersection point of the hatching. The exception OutOfRange is raised if Index < 1 or Index > NbPoints.)#"  , py::arg("Index"))
        .def("ChangePoint",
             (HatchGen_PointOnHatching & (Geom2dHatch_Hatching::*)( const Standard_Integer  ) ) static_cast<HatchGen_PointOnHatching & (Geom2dHatch_Hatching::*)( const Standard_Integer  ) >(&Geom2dHatch_Hatching::ChangePoint),
             R"#(Returns the Index-th intersection point of the hatching. The exception OutOfRange is raised if Index < 1 or Index > NbPoints.)#"  , py::arg("Index"))
        .def("RemPoint",
             (void (Geom2dHatch_Hatching::*)( const Standard_Integer  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const Standard_Integer  ) >(&Geom2dHatch_Hatching::RemPoint),
             R"#(Removes the Index-th intersection point of the hatching. The exception OutOfRange is raised if Index < 1 or Index > NbPoints.)#"  , py::arg("Index"))
        .def("ClrPoints",
             (void (Geom2dHatch_Hatching::*)() ) static_cast<void (Geom2dHatch_Hatching::*)() >(&Geom2dHatch_Hatching::ClrPoints),
             R"#(Removes all the intersection points of the hatching.)#" )
        .def("AddDomain",
             (void (Geom2dHatch_Hatching::*)( const HatchGen_Domain &  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const HatchGen_Domain &  ) >(&Geom2dHatch_Hatching::AddDomain),
             R"#(Adds a domain to the hatching.)#"  , py::arg("Domain"))
        .def("NbDomains",
             (Standard_Integer (Geom2dHatch_Hatching::*)() const) static_cast<Standard_Integer (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::NbDomains),
             R"#(Returns the number of domains of the hatching.)#" )
        .def("Domain",
             (const HatchGen_Domain & (Geom2dHatch_Hatching::*)( const Standard_Integer  ) const) static_cast<const HatchGen_Domain & (Geom2dHatch_Hatching::*)( const Standard_Integer  ) const>(&Geom2dHatch_Hatching::Domain),
             R"#(Returns the Index-th domain of the hatching. The exception OutOfRange is raised if Index < 1 or Index > NbDomains.)#"  , py::arg("Index"))
        .def("RemDomain",
             (void (Geom2dHatch_Hatching::*)( const Standard_Integer  ) ) static_cast<void (Geom2dHatch_Hatching::*)( const Standard_Integer  ) >(&Geom2dHatch_Hatching::RemDomain),
             R"#(Removes the Index-th domain of the hatching. The exception OutOfRange is raised if Index < 1 or Index > NbDomains.)#"  , py::arg("Index"))
        .def("ClrDomains",
             (void (Geom2dHatch_Hatching::*)() ) static_cast<void (Geom2dHatch_Hatching::*)() >(&Geom2dHatch_Hatching::ClrDomains),
             R"#(Removes all the domains of the hatching.)#" )
        .def("ClassificationPoint",
             (gp_Pnt2d (Geom2dHatch_Hatching::*)() const) static_cast<gp_Pnt2d (Geom2dHatch_Hatching::*)() const>(&Geom2dHatch_Hatching::ClassificationPoint),
             R"#(Returns a point on the curve. This point will be used for the classification.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Intersector , shared_ptr<Geom2dHatch_Intersector>  , Geom2dInt_GInter >>(m.attr("Geom2dHatch_Intersector"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("Confusion"),  py::arg("Tangency") )
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ConfusionTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::ConfusionTolerance),
             R"#(Returns the confusion tolerance of the intersector.)#" )
        .def("SetConfusionTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real  ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real  ) >(&Geom2dHatch_Intersector::SetConfusionTolerance),
             R"#(Sets the confusion tolerance of the intersector.)#"  , py::arg("Confusion"))
        .def("TangencyTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::TangencyTolerance),
             R"#(Returns the tangency tolerance of the intersector.)#" )
        .def("SetTangencyTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real  ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real  ) >(&Geom2dHatch_Intersector::SetTangencyTolerance),
             R"#(Sets the tangency tolerance of the intersector.)#"  , py::arg("Tangency"))
        .def("Intersect",
             (void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & ,  const Geom2dAdaptor_Curve &  ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & ,  const Geom2dAdaptor_Curve &  ) >(&Geom2dHatch_Intersector::Intersect),
             R"#(Intersects the curves C1 and C2. The results are retreived by the usual methods described in IntRes2d_Intersection. Creates an intersector.)#"  , py::arg("C1"),  py::arg("C2"))
        .def("Perform",
             (void (Geom2dHatch_Intersector::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const Geom2dAdaptor_Curve &  ) ) static_cast<void (Geom2dHatch_Intersector::*)( const gp_Lin2d & ,  const Standard_Real ,  const Standard_Real ,  const Geom2dAdaptor_Curve &  ) >(&Geom2dHatch_Intersector::Perform),
             R"#(Performs the intersection between the 2d line segment (<L>, <P>) and the Curve <E>. The line segment is the part of the 2d line <L> of parameter range [0, <P>] (P is positive and can be RealLast()). Tol is the Tolerance on the segment. The order is relevant, the first argument is the segment, the second the Edge.)#"  , py::arg("L"),  py::arg("P"),  py::arg("Tol"),  py::arg("E"))
        .def("ConfusionTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::ConfusionTolerance),
             R"#(Returns the confusion tolerance of the intersector.)#" )
        .def("SetConfusionTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real  ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real  ) >(&Geom2dHatch_Intersector::SetConfusionTolerance),
             R"#(Sets the confusion tolerance of the intersector.)#"  , py::arg("Confusion"))
        .def("TangencyTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::TangencyTolerance),
             R"#(Returns the tangency tolerance of the intersector.)#" )
        .def("SetTangencyTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real  ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real  ) >(&Geom2dHatch_Intersector::SetTangencyTolerance),
             R"#(Sets the tangency tolerance of the intersector.)#"  , py::arg("Tangency"))
        .def("Intersect",
             (void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & ,  const Geom2dAdaptor_Curve &  ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & ,  const Geom2dAdaptor_Curve &  ) >(&Geom2dHatch_Intersector::Intersect),
             R"#(Intersects the curves C1 and C2. The results are retreived by the usual methods described in IntRes2d_Intersection. Creates an intersector.)#"  , py::arg("C1"),  py::arg("C2"))
    // methods using call by reference i.s.o. return
        .def("LocalGeometry",
             []( Geom2dHatch_Intersector &self , const Geom2dAdaptor_Curve & E,const Standard_Real U,gp_Dir2d & T,gp_Dir2d & N ){ Standard_Real  C; self.LocalGeometry(E,U,T,N,C); return std::make_tuple(C); },
             R"#(Returns in <T>, <N> and <C> the tangent, normal and curvature of the edge <E> at parameter value <U>.)#"  , py::arg("E"),  py::arg("U"),  py::arg("T"),  py::arg("N"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dHatch_Hatchings.hxx
// ./opencascade/Geom2dHatch_DataMapIteratorOfMapOfElements.hxx
// ./opencascade/Geom2dHatch_DataMapIteratorOfHatchings.hxx
// ./opencascade/Geom2dHatch_Classifier.hxx
// ./opencascade/Geom2dHatch_Hatcher.hxx
// ./opencascade/Geom2dHatch_MapOfElements.hxx
// ./opencascade/Geom2dHatch_Hatching.hxx
// ./opencascade/Geom2dHatch_Element.hxx
// ./opencascade/Geom2dHatch_Elements.hxx
// ./opencascade/Geom2dHatch_FClass2dOfClassifier.hxx
// ./opencascade/Geom2dHatch_Intersector.hxx

// operators

// register typdefs
    register_template_NCollection_DataMap<Standard_Integer, Geom2dHatch_Element, TColStd_MapIntegerHasher>(m,"Geom2dHatch_MapOfElements");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
