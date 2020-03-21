
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
// ./opencascade/Geom2dHatch_MapOfElements.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Geom2dHatch_MapOfElements.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Geom2dHatch_Hatchings.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Geom2dHatch(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Geom2dHatch"));


//Python trampoline classes

// classes


    static_cast<py::class_<Geom2dHatch_Classifier , shared_ptr<Geom2dHatch_Classifier> >>(m.attr("Geom2dHatch_Classifier"))
    // constructors
    // custom constructors
    // methods
        .def("Rejected",
             (Standard_Boolean (Geom2dHatch_Classifier::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::Rejected),
             R"#(Returns True when the state was computed by a rejection. The state is OUT.)#" )
        .def("NoWires",
             (Standard_Boolean (Geom2dHatch_Classifier::*)() const) static_cast<Standard_Boolean (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::NoWires),
             R"#(Returns True if the face contains no wire. The state is IN.)#" )
        .def("Position",
             (IntRes2d_Position (Geom2dHatch_Classifier::*)() const) static_cast<IntRes2d_Position (Geom2dHatch_Classifier::*)() const>(&Geom2dHatch_Classifier::Position),
             R"#(Returns the position of the point on the edge returned by Edge.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Element , shared_ptr<Geom2dHatch_Element> >>(m.attr("Geom2dHatch_Element"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Elements , shared_ptr<Geom2dHatch_Elements> >>(m.attr("Geom2dHatch_Elements"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_FClass2dOfClassifier , shared_ptr<Geom2dHatch_FClass2dOfClassifier> >>(m.attr("Geom2dHatch_FClass2dOfClassifier"))
    // constructors
    // custom constructors
    // methods
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


    static_cast<py::class_<Geom2dHatch_Hatcher , shared_ptr<Geom2dHatch_Hatcher> >>(m.attr("Geom2dHatch_Hatcher"))
    // constructors
    // custom constructors
    // methods
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
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::ElementCurve),
             R"#(Returns the curve associated to the IndE-th element.)#"  , py::arg("IndE"))
        .def("AddElement",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const opencascade::handle<Geom2d_Curve> & , const TopAbs_Orientation ) ) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const opencascade::handle<Geom2d_Curve> & , const TopAbs_Orientation ) >(&Geom2dHatch_Hatcher::AddElement),
             R"#(Adds an element to the hatcher and returns its index.)#"  , py::arg("Curve"),  py::arg("Orientation")=static_cast<const TopAbs_Orientation>(TopAbs_FORWARD))
        .def("HatchingCurve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::HatchingCurve),
             R"#(Returns the curve associated to the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("NbPoints",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::NbPoints),
             R"#(Returns the number of intersection points of the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Point",
             (const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const>(&Geom2dHatch_Hatcher::Point),
             R"#(Returns the IndP-th intersection point of the IndH-th hatching.)#"  , py::arg("IndH"),  py::arg("IndP"))
        .def("TrimDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::TrimDone),
             R"#(Returns the fact that the intersections were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("TrimFailed",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::TrimFailed),
             R"#(Returns the fact that the intersections failed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("IsDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::IsDone),
             R"#(Returns the fact that the domains were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Status",
             (HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::Status),
             R"#(Returns the status about the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("NbDomains",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::NbDomains),
             R"#(Returns the number of domains of the IndH-th hatching. Only ONE "INFINITE" domain means that the hatching is fully included in the contour defined by the elements.)#"  , py::arg("IndH"))
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
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::ElementCurve),
             R"#(Returns the curve associated to the IndE-th element.)#"  , py::arg("IndE"))
        .def("HatchingCurve",
             (const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<const Geom2dAdaptor_Curve & (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::HatchingCurve),
             R"#(Returns the curve associated to the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("NbPoints",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::NbPoints),
             R"#(Returns the number of intersection points of the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Point",
             (const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<const HatchGen_PointOnHatching & (Geom2dHatch_Hatcher::*)( const Standard_Integer , const Standard_Integer ) const>(&Geom2dHatch_Hatcher::Point),
             R"#(Returns the IndP-th intersection point of the IndH-th hatching.)#"  , py::arg("IndH"),  py::arg("IndP"))
        .def("TrimDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::TrimDone),
             R"#(Returns the fact that the intersections were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("TrimFailed",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::TrimFailed),
             R"#(Returns the fact that the intersections failed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("IsDone",
             (Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::IsDone),
             R"#(Returns the fact that the domains were computed for the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("Status",
             (HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<HatchGen_ErrorStatus (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::Status),
             R"#(Returns the status about the IndH-th hatching.)#"  , py::arg("IndH"))
        .def("NbDomains",
             (Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Geom2dHatch_Hatcher::*)( const Standard_Integer ) const>(&Geom2dHatch_Hatcher::NbDomains),
             R"#(Returns the number of domains of the IndH-th hatching. Only ONE "INFINITE" domain means that the hatching is fully included in the contour defined by the elements.)#"  , py::arg("IndH"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Hatching , shared_ptr<Geom2dHatch_Hatching> >>(m.attr("Geom2dHatch_Hatching"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Geom2dHatch_Intersector , shared_ptr<Geom2dHatch_Intersector> , Geom2dInt_GInter>>(m.attr("Geom2dHatch_Intersector"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("Confusion"),  py::arg("Tangency") )
    // custom constructors
    // methods
        .def("ConfusionTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::ConfusionTolerance),
             R"#(Returns the confusion tolerance of the intersector.)#" )
        .def("SetConfusionTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real ) >(&Geom2dHatch_Intersector::SetConfusionTolerance),
             R"#(Sets the confusion tolerance of the intersector.)#"  , py::arg("Confusion"))
        .def("TangencyTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::TangencyTolerance),
             R"#(Returns the tangency tolerance of the intersector.)#" )
        .def("SetTangencyTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real ) >(&Geom2dHatch_Intersector::SetTangencyTolerance),
             R"#(Sets the tangency tolerance of the intersector.)#"  , py::arg("Tangency"))
        .def("Intersect",
             (void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & , const Geom2dAdaptor_Curve & ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & , const Geom2dAdaptor_Curve & ) >(&Geom2dHatch_Intersector::Intersect),
             R"#(Intersects the curves C1 and C2. The results are retreived by the usual methods described in IntRes2d_Intersection. Creates an intersector.)#"  , py::arg("C1"),  py::arg("C2"))
        .def("ConfusionTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::ConfusionTolerance),
             R"#(Returns the confusion tolerance of the intersector.)#" )
        .def("SetConfusionTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real ) >(&Geom2dHatch_Intersector::SetConfusionTolerance),
             R"#(Sets the confusion tolerance of the intersector.)#"  , py::arg("Confusion"))
        .def("TangencyTolerance",
             (Standard_Real (Geom2dHatch_Intersector::*)() const) static_cast<Standard_Real (Geom2dHatch_Intersector::*)() const>(&Geom2dHatch_Intersector::TangencyTolerance),
             R"#(Returns the tangency tolerance of the intersector.)#" )
        .def("SetTangencyTolerance",
             (void (Geom2dHatch_Intersector::*)( const Standard_Real ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Standard_Real ) >(&Geom2dHatch_Intersector::SetTangencyTolerance),
             R"#(Sets the tangency tolerance of the intersector.)#"  , py::arg("Tangency"))
        .def("Intersect",
             (void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & , const Geom2dAdaptor_Curve & ) ) static_cast<void (Geom2dHatch_Intersector::*)( const Geom2dAdaptor_Curve & , const Geom2dAdaptor_Curve & ) >(&Geom2dHatch_Intersector::Intersect),
             R"#(Intersects the curves C1 and C2. The results are retreived by the usual methods described in IntRes2d_Intersection. Creates an intersector.)#"  , py::arg("C1"),  py::arg("C2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Geom2dHatch_Elements.hxx
// ./opencascade/Geom2dHatch_DataMapIteratorOfMapOfElements.hxx
// ./opencascade/Geom2dHatch_Intersector.hxx
// ./opencascade/Geom2dHatch_Hatching.hxx
// ./opencascade/Geom2dHatch_MapOfElements.hxx
// ./opencascade/Geom2dHatch_Hatchings.hxx
// ./opencascade/Geom2dHatch_Element.hxx
// ./opencascade/Geom2dHatch_Hatcher.hxx
// ./opencascade/Geom2dHatch_FClass2dOfClassifier.hxx
// ./opencascade/Geom2dHatch_DataMapIteratorOfHatchings.hxx
// ./opencascade/Geom2dHatch_Classifier.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<Standard_Integer, Geom2dHatch_Element, TColStd_MapIntegerHasher>(m,"Geom2dHatch_MapOfElements");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
