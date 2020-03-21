
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
// ./opencascade/HatchGen_PointsOnElement.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/HatchGen_PointsOnHatching.hxx
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
    // custom constructors
    // methods
        .def("SetIntersectionType",
             (void (HatchGen_PointOnElement::*)( const HatchGen_IntersectionType ) ) static_cast<void (HatchGen_PointOnElement::*)( const HatchGen_IntersectionType ) >(&HatchGen_PointOnElement::SetIntersectionType),
             R"#(Sets the intersection type at this point.)#"  , py::arg("Type"))
        .def("IntersectionType",
             (HatchGen_IntersectionType (HatchGen_PointOnElement::*)() const) static_cast<HatchGen_IntersectionType (HatchGen_PointOnElement::*)() const>(&HatchGen_PointOnElement::IntersectionType),
             R"#(Returns the intersection type at this point.)#" )
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
    // custom constructors
    // methods
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
// ./opencascade/HatchGen_Domains.hxx
// ./opencascade/HatchGen_IntersectionType.hxx
// ./opencascade/HatchGen_IntersectionPoint.hxx
// ./opencascade/HatchGen_PointsOnElement.hxx
// ./opencascade/HatchGen_ErrorStatus.hxx
// ./opencascade/HatchGen_Domain.hxx
// ./opencascade/HatchGen_PointOnHatching.hxx
// ./opencascade/HatchGen_PointsOnHatching.hxx
// ./opencascade/HatchGen_PointOnElement.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<HatchGen_Domain>(m,"HatchGen_Domains");
    register_template_NCollection_Sequence<HatchGen_PointOnElement>(m,"HatchGen_PointsOnElement");
    register_template_NCollection_Sequence<HatchGen_PointOnHatching>(m,"HatchGen_PointsOnHatching");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
