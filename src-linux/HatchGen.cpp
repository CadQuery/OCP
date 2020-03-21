
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IntRes2d_IntersectionPoint.hxx>
#include <IntRes2d_IntersectionPoint.hxx>

// module includes
#include <HatchGen_Domain.hxx>
#include <HatchGen_Domains.hxx>
#include <HatchGen_ErrorStatus.hxx>
#include <HatchGen_IntersectionPoint.hxx>
#include <HatchGen_IntersectionType.hxx>
#include <HatchGen_PointOnElement.hxx>
#include <HatchGen_PointOnHatching.hxx>
#include <HatchGen_PointsOnElement.hxx>
#include <HatchGen_PointsOnHatching.hxx>

// template related includes
// ./opencascade/HatchGen_Domains.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HatchGen_PointsOnHatching.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HatchGen_PointsOnElement.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HatchGen(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("HatchGen"));


//Python trampoline classes
    class Py_HatchGen_IntersectionPoint : public HatchGen_IntersectionPoint{
    public:
        using HatchGen_IntersectionPoint::HatchGen_IntersectionPoint;


        // public pure virtual
        void Dump(const Standard_Integer Index) const  override { PYBIND11_OVERLOAD_PURE(void,HatchGen_IntersectionPoint,Dump,Index) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<HatchGen_Domain , shared_ptr<HatchGen_Domain> >>(m.attr("HatchGen_Domain"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const HatchGen_PointOnHatching &,const HatchGen_PointOnHatching & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const HatchGen_PointOnHatching &,const Standard_Boolean >()  , py::arg("P"),  py::arg("First") )
    // custom constructors
    // methods
        .def("SetPoints",
             (void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & , const HatchGen_PointOnHatching & ) ) static_cast<void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & , const HatchGen_PointOnHatching & ) >(&HatchGen_Domain::SetPoints),
             R"#(Sets the first and the second points of the domain.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetPoints",
             (void (HatchGen_Domain::*)() ) static_cast<void (HatchGen_Domain::*)() >(&HatchGen_Domain::SetPoints),
             R"#(Sets the first and the second points of the domain as the infinite.)#" )
        .def("SetFirstPoint",
             (void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) ) static_cast<void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) >(&HatchGen_Domain::SetFirstPoint),
             R"#(Sets the first point of the domain.)#"  , py::arg("P"))
        .def("SetFirstPoint",
             (void (HatchGen_Domain::*)() ) static_cast<void (HatchGen_Domain::*)() >(&HatchGen_Domain::SetFirstPoint),
             R"#(Sets the first point of the domain at the infinite.)#" )
        .def("SetSecondPoint",
             (void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) ) static_cast<void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) >(&HatchGen_Domain::SetSecondPoint),
             R"#(Sets the second point of the domain.)#"  , py::arg("P"))
        .def("SetSecondPoint",
             (void (HatchGen_Domain::*)() ) static_cast<void (HatchGen_Domain::*)() >(&HatchGen_Domain::SetSecondPoint),
             R"#(Sets the second point of the domain at the infinite.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (HatchGen_Domain::*)() const) static_cast<Standard_Boolean (HatchGen_Domain::*)() const>(&HatchGen_Domain::HasFirstPoint),
             R"#(Returns True if the domain has a first point.)#" )
        .def("FirstPoint",
             (const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const) static_cast<const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const>(&HatchGen_Domain::FirstPoint),
             R"#(Returns the first point of the domain. The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("HasSecondPoint",
             (Standard_Boolean (HatchGen_Domain::*)() const) static_cast<Standard_Boolean (HatchGen_Domain::*)() const>(&HatchGen_Domain::HasSecondPoint),
             R"#(Returns True if the domain has a second point.)#" )
        .def("SecondPoint",
             (const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const) static_cast<const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const>(&HatchGen_Domain::SecondPoint),
             R"#(Returns the second point of the domain. The exception DomainError is raised if HasSecondPoint returns False.)#" )
        .def("Dump",
             (void (HatchGen_Domain::*)( const Standard_Integer ) const) static_cast<void (HatchGen_Domain::*)( const Standard_Integer ) const>(&HatchGen_Domain::Dump),
             R"#(Dump of the domain.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(0))
        .def("SetPoints",
             (void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & , const HatchGen_PointOnHatching & ) ) static_cast<void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & , const HatchGen_PointOnHatching & ) >(&HatchGen_Domain::SetPoints),
             R"#(Sets the first and the second points of the domain.)#"  , py::arg("P1"),  py::arg("P2"))
        .def("SetPoints",
             (void (HatchGen_Domain::*)() ) static_cast<void (HatchGen_Domain::*)() >(&HatchGen_Domain::SetPoints),
             R"#(Sets the first and the second points of the domain as the infinite.)#" )
        .def("SetFirstPoint",
             (void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) ) static_cast<void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) >(&HatchGen_Domain::SetFirstPoint),
             R"#(Sets the first point of the domain.)#"  , py::arg("P"))
        .def("SetFirstPoint",
             (void (HatchGen_Domain::*)() ) static_cast<void (HatchGen_Domain::*)() >(&HatchGen_Domain::SetFirstPoint),
             R"#(Sets the first point of the domain at the infinite.)#" )
        .def("SetSecondPoint",
             (void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) ) static_cast<void (HatchGen_Domain::*)( const HatchGen_PointOnHatching & ) >(&HatchGen_Domain::SetSecondPoint),
             R"#(Sets the second point of the domain.)#"  , py::arg("P"))
        .def("SetSecondPoint",
             (void (HatchGen_Domain::*)() ) static_cast<void (HatchGen_Domain::*)() >(&HatchGen_Domain::SetSecondPoint),
             R"#(Sets the second point of the domain at the infinite.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (HatchGen_Domain::*)() const) static_cast<Standard_Boolean (HatchGen_Domain::*)() const>(&HatchGen_Domain::HasFirstPoint),
             R"#(Returns True if the domain has a first point.)#" )
        .def("FirstPoint",
             (const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const) static_cast<const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const>(&HatchGen_Domain::FirstPoint),
             R"#(Returns the first point of the domain. The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("HasSecondPoint",
             (Standard_Boolean (HatchGen_Domain::*)() const) static_cast<Standard_Boolean (HatchGen_Domain::*)() const>(&HatchGen_Domain::HasSecondPoint),
             R"#(Returns True if the domain has a second point.)#" )
        .def("SecondPoint",
             (const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const) static_cast<const HatchGen_PointOnHatching & (HatchGen_Domain::*)() const>(&HatchGen_Domain::SecondPoint),
             R"#(Returns the second point of the domain. The exception DomainError is raised if HasSecondPoint returns False.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HatchGen_IntersectionPoint , shared_ptr_nodelete<HatchGen_IntersectionPoint>,Py_HatchGen_IntersectionPoint >>(m.attr("HatchGen_IntersectionPoint"))
    // constructors
    // custom constructors
    // methods
        .def("SetIndex",
             (void (HatchGen_IntersectionPoint::*)( const Standard_Integer ) ) static_cast<void (HatchGen_IntersectionPoint::*)( const Standard_Integer ) >(&HatchGen_IntersectionPoint::SetIndex),
             R"#(Sets the index of the supporting curve.)#"  , py::arg("Index"))
        .def("Index",
             (Standard_Integer (HatchGen_IntersectionPoint::*)() const) static_cast<Standard_Integer (HatchGen_IntersectionPoint::*)() const>(&HatchGen_IntersectionPoint::Index),
             R"#(Returns the index of the supporting curve.)#" )
        .def("SetParameter",
             (void (HatchGen_IntersectionPoint::*)( const Standard_Real ) ) static_cast<void (HatchGen_IntersectionPoint::*)( const Standard_Real ) >(&HatchGen_IntersectionPoint::SetParameter),
             R"#(Sets the parameter on the curve.)#"  , py::arg("Parameter"))
        .def("Parameter",
             (Standard_Real (HatchGen_IntersectionPoint::*)() const) static_cast<Standard_Real (HatchGen_IntersectionPoint::*)() const>(&HatchGen_IntersectionPoint::Parameter),
             R"#(Returns the parameter on the curve.)#" )
        .def("SetPosition",
             (void (HatchGen_IntersectionPoint::*)( const TopAbs_Orientation ) ) static_cast<void (HatchGen_IntersectionPoint::*)( const TopAbs_Orientation ) >(&HatchGen_IntersectionPoint::SetPosition),
             R"#(Sets the position of the point on the curve.)#"  , py::arg("Position"))
        .def("Position",
             (TopAbs_Orientation (HatchGen_IntersectionPoint::*)() const) static_cast<TopAbs_Orientation (HatchGen_IntersectionPoint::*)() const>(&HatchGen_IntersectionPoint::Position),
             R"#(Returns the position of the point on the curve.)#" )
        .def("SetStateBefore",
             (void (HatchGen_IntersectionPoint::*)( const TopAbs_State ) ) static_cast<void (HatchGen_IntersectionPoint::*)( const TopAbs_State ) >(&HatchGen_IntersectionPoint::SetStateBefore),
             R"#(Sets the transition state before the intersection.)#"  , py::arg("State"))
        .def("StateBefore",
             (TopAbs_State (HatchGen_IntersectionPoint::*)() const) static_cast<TopAbs_State (HatchGen_IntersectionPoint::*)() const>(&HatchGen_IntersectionPoint::StateBefore),
             R"#(Returns the transition state before the intersection.)#" )
        .def("SetStateAfter",
             (void (HatchGen_IntersectionPoint::*)( const TopAbs_State ) ) static_cast<void (HatchGen_IntersectionPoint::*)( const TopAbs_State ) >(&HatchGen_IntersectionPoint::SetStateAfter),
             R"#(Sets the transition state after the intersection.)#"  , py::arg("State"))
        .def("StateAfter",
             (TopAbs_State (HatchGen_IntersectionPoint::*)() const) static_cast<TopAbs_State (HatchGen_IntersectionPoint::*)() const>(&HatchGen_IntersectionPoint::StateAfter),
             R"#(Returns the transition state after of the intersection.)#" )
        .def("SetSegmentBeginning",
             (void (HatchGen_IntersectionPoint::*)( const Standard_Boolean ) ) static_cast<void (HatchGen_IntersectionPoint::*)( const Standard_Boolean ) >(&HatchGen_IntersectionPoint::SetSegmentBeginning),
             R"#(Sets the flag that the point is the beginning of a segment.)#"  , py::arg("State")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SegmentBeginning",
             (Standard_Boolean (HatchGen_IntersectionPoint::*)() const) static_cast<Standard_Boolean (HatchGen_IntersectionPoint::*)() const>(&HatchGen_IntersectionPoint::SegmentBeginning),
             R"#(Returns the flag that the point is the beginning of a segment.)#" )
        .def("SetSegmentEnd",
             (void (HatchGen_IntersectionPoint::*)( const Standard_Boolean ) ) static_cast<void (HatchGen_IntersectionPoint::*)( const Standard_Boolean ) >(&HatchGen_IntersectionPoint::SetSegmentEnd),
             R"#(Sets the flag that the point is the end of a segment.)#"  , py::arg("State")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SegmentEnd",
             (Standard_Boolean (HatchGen_IntersectionPoint::*)() const) static_cast<Standard_Boolean (HatchGen_IntersectionPoint::*)() const>(&HatchGen_IntersectionPoint::SegmentEnd),
             R"#(Returns the flag that the point is the end of a segment.)#" )
        .def("Dump",
             (void (HatchGen_IntersectionPoint::*)( const Standard_Integer ) const) static_cast<void (HatchGen_IntersectionPoint::*)( const Standard_Integer ) const>(&HatchGen_IntersectionPoint::Dump),
             R"#(Dump of the point on element.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(0))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HatchGen_PointOnElement , shared_ptr<HatchGen_PointOnElement> , HatchGen_IntersectionPoint>>(m.attr("HatchGen_PointOnElement"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const HatchGen_PointOnElement & >()  , py::arg("Point") )
        .def(py::init< const IntRes2d_IntersectionPoint & >()  , py::arg("Point") )
    // custom constructors
    // methods
        .def("SetIntersectionType",
             (void (HatchGen_PointOnElement::*)( const HatchGen_IntersectionType ) ) static_cast<void (HatchGen_PointOnElement::*)( const HatchGen_IntersectionType ) >(&HatchGen_PointOnElement::SetIntersectionType),
             R"#(Sets the intersection type at this point.)#"  , py::arg("Type"))
        .def("IntersectionType",
             (HatchGen_IntersectionType (HatchGen_PointOnElement::*)() const) static_cast<HatchGen_IntersectionType (HatchGen_PointOnElement::*)() const>(&HatchGen_PointOnElement::IntersectionType),
             R"#(Returns the intersection type at this point.)#" )
        .def("IsIdentical",
             (Standard_Boolean (HatchGen_PointOnElement::*)( const HatchGen_PointOnElement & , const Standard_Real ) const) static_cast<Standard_Boolean (HatchGen_PointOnElement::*)( const HatchGen_PointOnElement & , const Standard_Real ) const>(&HatchGen_PointOnElement::IsIdentical),
             R"#(Tests if the point is identical to an other. That is to say : P1.myIndex = P2.myIndex Abs (P1.myParam - P2.myParam) <= Confusion P1.myPosit = P2.myPosit P1.myBefore = P2.myBefore P1.myAfter = P2.myAfter P1.mySegBeg = P2.mySegBeg P1.mySegEnd = P2.mySegEnd P1.myType = P2.myType)#"  , py::arg("Point"),  py::arg("Confusion"))
        .def("IsDifferent",
             (Standard_Boolean (HatchGen_PointOnElement::*)( const HatchGen_PointOnElement & , const Standard_Real ) const) static_cast<Standard_Boolean (HatchGen_PointOnElement::*)( const HatchGen_PointOnElement & , const Standard_Real ) const>(&HatchGen_PointOnElement::IsDifferent),
             R"#(Tests if the point is different from an other.)#"  , py::arg("Point"),  py::arg("Confusion"))
        .def("Dump",
             (void (HatchGen_PointOnElement::*)( const Standard_Integer ) const) static_cast<void (HatchGen_PointOnElement::*)( const Standard_Integer ) const>(&HatchGen_PointOnElement::Dump),
             R"#(Dump of the point on element.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(0))
        .def("SetIntersectionType",
             (void (HatchGen_PointOnElement::*)( const HatchGen_IntersectionType ) ) static_cast<void (HatchGen_PointOnElement::*)( const HatchGen_IntersectionType ) >(&HatchGen_PointOnElement::SetIntersectionType),
             R"#(Sets the intersection type at this point.)#"  , py::arg("Type"))
        .def("IntersectionType",
             (HatchGen_IntersectionType (HatchGen_PointOnElement::*)() const) static_cast<HatchGen_IntersectionType (HatchGen_PointOnElement::*)() const>(&HatchGen_PointOnElement::IntersectionType),
             R"#(Returns the intersection type at this point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<HatchGen_PointOnHatching , shared_ptr<HatchGen_PointOnHatching> , HatchGen_IntersectionPoint>>(m.attr("HatchGen_PointOnHatching"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const HatchGen_PointOnHatching & >()  , py::arg("Point") )
        .def(py::init< const IntRes2d_IntersectionPoint & >()  , py::arg("Point") )
    // custom constructors
    // methods
        .def("AddPoint",
             (void (HatchGen_PointOnHatching::*)( const HatchGen_PointOnElement & , const Standard_Real ) ) static_cast<void (HatchGen_PointOnHatching::*)( const HatchGen_PointOnElement & , const Standard_Real ) >(&HatchGen_PointOnHatching::AddPoint),
             R"#(Adds a point on element to the point.)#"  , py::arg("Point"),  py::arg("Confusion"))
        .def("NbPoints",
             (Standard_Integer (HatchGen_PointOnHatching::*)() const) static_cast<Standard_Integer (HatchGen_PointOnHatching::*)() const>(&HatchGen_PointOnHatching::NbPoints),
             R"#(Returns the number of elements intersecting the hatching at this point.)#" )
        .def("Point",
             (const HatchGen_PointOnElement & (HatchGen_PointOnHatching::*)( const Standard_Integer ) const) static_cast<const HatchGen_PointOnElement & (HatchGen_PointOnHatching::*)( const Standard_Integer ) const>(&HatchGen_PointOnHatching::Point),
             R"#(Returns the Index-th point on element of the point. The exception OutOfRange is raised if Index > NbPoints.)#"  , py::arg("Index"))
        .def("RemPoint",
             (void (HatchGen_PointOnHatching::*)( const Standard_Integer ) ) static_cast<void (HatchGen_PointOnHatching::*)( const Standard_Integer ) >(&HatchGen_PointOnHatching::RemPoint),
             R"#(Removes the Index-th point on element of the point. The exception OutOfRange is raised if Index > NbPoints.)#"  , py::arg("Index"))
        .def("ClrPoints",
             (void (HatchGen_PointOnHatching::*)() ) static_cast<void (HatchGen_PointOnHatching::*)() >(&HatchGen_PointOnHatching::ClrPoints),
             R"#(Removes all the points on element of the point.)#" )
        .def("IsLower",
             (Standard_Boolean (HatchGen_PointOnHatching::*)( const HatchGen_PointOnHatching & , const Standard_Real ) const) static_cast<Standard_Boolean (HatchGen_PointOnHatching::*)( const HatchGen_PointOnHatching & , const Standard_Real ) const>(&HatchGen_PointOnHatching::IsLower),
             R"#(Tests if the point is lower than an other. A point on hatching P1 is said to be lower than an other P2 if : P2.myParam - P1.myParam > Confusion)#"  , py::arg("Point"),  py::arg("Confusion"))
        .def("IsEqual",
             (Standard_Boolean (HatchGen_PointOnHatching::*)( const HatchGen_PointOnHatching & , const Standard_Real ) const) static_cast<Standard_Boolean (HatchGen_PointOnHatching::*)( const HatchGen_PointOnHatching & , const Standard_Real ) const>(&HatchGen_PointOnHatching::IsEqual),
             R"#(Tests if the point is equal to an other. A point on hatching P1 is said to be equal to an other P2 if : | P2.myParam - P1.myParam | <= Confusion)#"  , py::arg("Point"),  py::arg("Confusion"))
        .def("IsGreater",
             (Standard_Boolean (HatchGen_PointOnHatching::*)( const HatchGen_PointOnHatching & , const Standard_Real ) const) static_cast<Standard_Boolean (HatchGen_PointOnHatching::*)( const HatchGen_PointOnHatching & , const Standard_Real ) const>(&HatchGen_PointOnHatching::IsGreater),
             R"#(Tests if the point is greater than an other. A point on hatching P1 is said to be greater than an other P2 if : P1.myParam - P2.myParam > Confusion)#"  , py::arg("Point"),  py::arg("Confusion"))
        .def("Dump",
             (void (HatchGen_PointOnHatching::*)( const Standard_Integer ) const) static_cast<void (HatchGen_PointOnHatching::*)( const Standard_Integer ) const>(&HatchGen_PointOnHatching::Dump),
             R"#(Dump of the point.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(0))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/HatchGen_IntersectionPoint.hxx
// ./opencascade/HatchGen_IntersectionType.hxx
// ./opencascade/HatchGen_PointOnHatching.hxx
// ./opencascade/HatchGen_Domains.hxx
// ./opencascade/HatchGen_PointOnElement.hxx
// ./opencascade/HatchGen_PointsOnHatching.hxx
// ./opencascade/HatchGen_ErrorStatus.hxx
// ./opencascade/HatchGen_Domain.hxx
// ./opencascade/HatchGen_PointsOnElement.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<HatchGen_Domain>(m,"HatchGen_Domains");
    register_template_NCollection_Sequence<HatchGen_PointOnHatching>(m,"HatchGen_PointsOnHatching");
    register_template_NCollection_Sequence<HatchGen_PointOnElement>(m,"HatchGen_PointsOnElement");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
