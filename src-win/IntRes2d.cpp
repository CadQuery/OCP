
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <IntRes2d_Domain.hxx>
#include <IntRes2d_Intersection.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <IntRes2d_IntersectionSegment.hxx>
#include <IntRes2d_Position.hxx>
#include <IntRes2d_SequenceOfIntersectionPoint.hxx>
#include <IntRes2d_SequenceOfIntersectionSegment.hxx>
#include <IntRes2d_Situation.hxx>
#include <IntRes2d_Transition.hxx>
#include <IntRes2d_TypeTrans.hxx>

// template related includes
// ./opencascade\IntRes2d_SequenceOfIntersectionSegment.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\IntRes2d_SequenceOfIntersectionPoint.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntRes2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntRes2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<IntRes2d_Domain , shared_ptr<IntRes2d_Domain> >>(m.attr("IntRes2d_Domain"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Standard_Real,const Standard_Real,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("Pnt1"),  py::arg("Par1"),  py::arg("Tol1"),  py::arg("Pnt2"),  py::arg("Par2"),  py::arg("Tol2") )
        .def(py::init< const gp_Pnt2d &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("Pnt"),  py::arg("Par"),  py::arg("Tol"),  py::arg("First") )
    // custom constructors
    // methods
        .def("SetValues",
             (void (IntRes2d_Domain::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const gp_Pnt2d & , const Standard_Real , const Standard_Real ) ) static_cast<void (IntRes2d_Domain::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const gp_Pnt2d & , const Standard_Real , const Standard_Real ) >(&IntRes2d_Domain::SetValues),
             R"#(Sets the values for a bounded domain.)#"  , py::arg("Pnt1"),  py::arg("Par1"),  py::arg("Tol1"),  py::arg("Pnt2"),  py::arg("Par2"),  py::arg("Tol2"))
        .def("SetValues",
             (void (IntRes2d_Domain::*)() ) static_cast<void (IntRes2d_Domain::*)() >(&IntRes2d_Domain::SetValues),
             R"#(Sets the values for an infinite domain.)#" )
        .def("SetValues",
             (void (IntRes2d_Domain::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (IntRes2d_Domain::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&IntRes2d_Domain::SetValues),
             R"#(Sets the values for a semi-infinite domain.)#"  , py::arg("Pnt"),  py::arg("Par"),  py::arg("Tol"),  py::arg("First"))
        .def("SetEquivalentParameters",
             (void (IntRes2d_Domain::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntRes2d_Domain::*)( const Standard_Real , const Standard_Real ) >(&IntRes2d_Domain::SetEquivalentParameters),
             R"#(Defines a closed domain.)#"  , py::arg("zero"),  py::arg("period"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntRes2d_Domain::*)() const) static_cast<Standard_Boolean (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::HasFirstPoint),
             R"#(Returns True if the domain has a first point, i-e a point defining the lowest admitted parameter on the curve.)#" )
        .def("FirstParameter",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::FirstParameter),
             R"#(Returns the parameter of the first point of the domain The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("FirstPoint",
             (const gp_Pnt2d & (IntRes2d_Domain::*)() const) static_cast<const gp_Pnt2d & (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::FirstPoint),
             R"#(Returns the first point of the domain. The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("FirstTolerance",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::FirstTolerance),
             R"#(Returns the tolerance of the first (left) bound. The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntRes2d_Domain::*)() const) static_cast<Standard_Boolean (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::HasLastPoint),
             R"#(Returns True if the domain has a last point, i-e a point defining the highest admitted parameter on the curve.)#" )
        .def("LastParameter",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::LastParameter),
             R"#(Returns the parameter of the last point of the domain. The exception DomainError is raised if HasLastPoint returns False.)#" )
        .def("LastPoint",
             (const gp_Pnt2d & (IntRes2d_Domain::*)() const) static_cast<const gp_Pnt2d & (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::LastPoint),
             R"#(Returns the last point of the domain. The exception DomainError is raised if HasLastPoint returns False.)#" )
        .def("LastTolerance",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::LastTolerance),
             R"#(Returns the tolerance of the last (right) bound. The exception DomainError is raised if HasLastPoint returns False.)#" )
        .def("IsClosed",
             (Standard_Boolean (IntRes2d_Domain::*)() const) static_cast<Standard_Boolean (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::IsClosed),
             R"#(Returns True if the domain is closed.)#" )
        .def("SetEquivalentParameters",
             (void (IntRes2d_Domain::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (IntRes2d_Domain::*)( const Standard_Real , const Standard_Real ) >(&IntRes2d_Domain::SetEquivalentParameters),
             R"#(Defines a closed domain.)#"  , py::arg("p_first"),  py::arg("p_last"))
        .def("HasFirstPoint",
             (Standard_Boolean (IntRes2d_Domain::*)() const) static_cast<Standard_Boolean (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::HasFirstPoint),
             R"#(Returns True if the domain has a first point, i-e a point defining the lowest admitted parameter on the curve.)#" )
        .def("FirstParameter",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::FirstParameter),
             R"#(Returns the parameter of the first point of the domain The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("FirstPoint",
             (const gp_Pnt2d & (IntRes2d_Domain::*)() const) static_cast<const gp_Pnt2d & (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::FirstPoint),
             R"#(Returns the first point of the domain. The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("FirstTolerance",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::FirstTolerance),
             R"#(Returns the tolerance of the first (left) bound. The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntRes2d_Domain::*)() const) static_cast<Standard_Boolean (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::HasLastPoint),
             R"#(Returns True if the domain has a last point, i-e a point defining the highest admitted parameter on the curve.)#" )
        .def("LastParameter",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::LastParameter),
             R"#(Returns the parameter of the last point of the domain. The exception DomainError is raised if HasLastPoint returns False.)#" )
        .def("LastPoint",
             (const gp_Pnt2d & (IntRes2d_Domain::*)() const) static_cast<const gp_Pnt2d & (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::LastPoint),
             R"#(Returns the last point of the domain. The exception DomainError is raised if HasLastPoint returns False.)#" )
        .def("LastTolerance",
             (Standard_Real (IntRes2d_Domain::*)() const) static_cast<Standard_Real (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::LastTolerance),
             R"#(Returns the tolerance of the last (right) bound. The exception DomainError is raised if HasLastPoint returns False.)#" )
        .def("IsClosed",
             (Standard_Boolean (IntRes2d_Domain::*)() const) static_cast<Standard_Boolean (IntRes2d_Domain::*)() const>(&IntRes2d_Domain::IsClosed),
             R"#(Returns True if the domain is closed.)#" )
    // methods using call by reference i.s.o. return
        .def("EquivalentParameters",
             []( IntRes2d_Domain &self   ){ Standard_Real  zero; Standard_Real  zeroplusperiod; self.EquivalentParameters(zero,zeroplusperiod); return std::make_tuple(zero,zeroplusperiod); },
             R"#(Returns Equivalent parameters if the domain is closed. Otherwise, the exception DomainError is raised.)#" )
        .def("EquivalentParameters",
             []( IntRes2d_Domain &self   ){ Standard_Real  p_first; Standard_Real  p_last; self.EquivalentParameters(p_first,p_last); return std::make_tuple(p_first,p_last); },
             R"#(Returns Equivalent parameters if the domain is closed. Otherwise, the exception DomainError is raised.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntRes2d_Intersection , shared_ptr_nodelete<IntRes2d_Intersection> >>(m.attr("IntRes2d_Intersection"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (IntRes2d_Intersection::*)() const) static_cast<Standard_Boolean (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::IsDone),
             R"#(returns TRUE when the computation was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntRes2d_Intersection::*)() const) static_cast<Standard_Boolean (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::IsEmpty),
             R"#(Returns TRUE if there is no intersection between the given arguments. The exception NotDone is raised if IsDone returns FALSE.)#" )
        .def("NbPoints",
             (Standard_Integer (IntRes2d_Intersection::*)() const) static_cast<Standard_Integer (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::NbPoints),
             R"#(This function returns the number of intersection points between the 2 curves. The exception NotDone is raised if IsDone returns FALSE.)#" )
        .def("Point",
             (const IntRes2d_IntersectionPoint & (IntRes2d_Intersection::*)( const Standard_Integer ) const) static_cast<const IntRes2d_IntersectionPoint & (IntRes2d_Intersection::*)( const Standard_Integer ) const>(&IntRes2d_Intersection::Point),
             R"#(This function returns the intersection point of range N; The exception NotDone is raised if IsDone returns FALSE. The exception OutOfRange is raised if (N <= 0) or (N > NbPoints).)#"  , py::arg("N"))
        .def("NbSegments",
             (Standard_Integer (IntRes2d_Intersection::*)() const) static_cast<Standard_Integer (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::NbSegments),
             R"#(This function returns the number of intersection segments between the two curves. The exception NotDone is raised if IsDone returns FALSE.)#" )
        .def("Segment",
             (const IntRes2d_IntersectionSegment & (IntRes2d_Intersection::*)( const Standard_Integer ) const) static_cast<const IntRes2d_IntersectionSegment & (IntRes2d_Intersection::*)( const Standard_Integer ) const>(&IntRes2d_Intersection::Segment),
             R"#(This function returns the intersection segment of range N; The exception NotDone is raised if IsDone returns FALSE. The exception OutOfRange is raised if (N <= 0) or (N > NbPoints).)#"  , py::arg("N"))
        .def("SetReversedParameters",
             (void (IntRes2d_Intersection::*)( const Standard_Boolean ) ) static_cast<void (IntRes2d_Intersection::*)( const Standard_Boolean ) >(&IntRes2d_Intersection::SetReversedParameters),
             R"#(None)#"  , py::arg("Reverseflag"))
        .def("IsDone",
             (Standard_Boolean (IntRes2d_Intersection::*)() const) static_cast<Standard_Boolean (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::IsDone),
             R"#(returns TRUE when the computation was successful.)#" )
        .def("IsEmpty",
             (Standard_Boolean (IntRes2d_Intersection::*)() const) static_cast<Standard_Boolean (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::IsEmpty),
             R"#(Returns TRUE if there is no intersection between the given arguments. The exception NotDone is raised if IsDone returns FALSE.)#" )
        .def("NbPoints",
             (Standard_Integer (IntRes2d_Intersection::*)() const) static_cast<Standard_Integer (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::NbPoints),
             R"#(This function returns the number of intersection points between the 2 curves. The exception NotDone is raised if IsDone returns FALSE.)#" )
        .def("Point",
             (const IntRes2d_IntersectionPoint & (IntRes2d_Intersection::*)( const Standard_Integer ) const) static_cast<const IntRes2d_IntersectionPoint & (IntRes2d_Intersection::*)( const Standard_Integer ) const>(&IntRes2d_Intersection::Point),
             R"#(This function returns the intersection point of range N; The exception NotDone is raised if IsDone returns FALSE. The exception OutOfRange is raised if (N <= 0) or (N > NbPoints).)#"  , py::arg("N"))
        .def("NbSegments",
             (Standard_Integer (IntRes2d_Intersection::*)() const) static_cast<Standard_Integer (IntRes2d_Intersection::*)() const>(&IntRes2d_Intersection::NbSegments),
             R"#(This function returns the number of intersection segments between the two curves. The exception NotDone is raised if IsDone returns FALSE.)#" )
        .def("Segment",
             (const IntRes2d_IntersectionSegment & (IntRes2d_Intersection::*)( const Standard_Integer ) const) static_cast<const IntRes2d_IntersectionSegment & (IntRes2d_Intersection::*)( const Standard_Integer ) const>(&IntRes2d_Intersection::Segment),
             R"#(This function returns the intersection segment of range N; The exception NotDone is raised if IsDone returns FALSE. The exception OutOfRange is raised if (N <= 0) or (N > NbPoints).)#"  , py::arg("N"))
        .def("SetReversedParameters",
             (void (IntRes2d_Intersection::*)( const Standard_Boolean ) ) static_cast<void (IntRes2d_Intersection::*)( const Standard_Boolean ) >(&IntRes2d_Intersection::SetReversedParameters),
             R"#(None)#"  , py::arg("flag"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntRes2d_IntersectionPoint , shared_ptr<IntRes2d_IntersectionPoint> >>(m.attr("IntRes2d_IntersectionPoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt2d &,const Standard_Real,const Standard_Real,const IntRes2d_Transition &,const IntRes2d_Transition &,const Standard_Boolean >()  , py::arg("P"),  py::arg("Uc1"),  py::arg("Uc2"),  py::arg("Trans1"),  py::arg("Trans2"),  py::arg("ReversedFlag") )
    // custom constructors
    // methods
        .def("SetValues",
             (void (IntRes2d_IntersectionPoint::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const IntRes2d_Transition & , const IntRes2d_Transition & , const Standard_Boolean ) ) static_cast<void (IntRes2d_IntersectionPoint::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const IntRes2d_Transition & , const IntRes2d_Transition & , const Standard_Boolean ) >(&IntRes2d_IntersectionPoint::SetValues),
             R"#(Sets the values for an existing intersection point. The meaning of the parameters are the same as for the Create.)#"  , py::arg("P"),  py::arg("Uc1"),  py::arg("Uc2"),  py::arg("Trans1"),  py::arg("Trans2"),  py::arg("ReversedFlag"))
        .def("Value",
             (const gp_Pnt2d & (IntRes2d_IntersectionPoint::*)() const) static_cast<const gp_Pnt2d & (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::Value),
             R"#(Returns the value of the coordinates of the intersection point in the 2D space.)#" )
        .def("ParamOnFirst",
             (Standard_Real (IntRes2d_IntersectionPoint::*)() const) static_cast<Standard_Real (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::ParamOnFirst),
             R"#(Returns the parameter on the first curve.)#" )
        .def("ParamOnSecond",
             (Standard_Real (IntRes2d_IntersectionPoint::*)() const) static_cast<Standard_Real (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::ParamOnSecond),
             R"#(Returns the parameter on the second curve.)#" )
        .def("TransitionOfFirst",
             (const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const) static_cast<const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::TransitionOfFirst),
             R"#(Returns the transition of the 1st curve compared to the 2nd one.)#" )
        .def("TransitionOfSecond",
             (const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const) static_cast<const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::TransitionOfSecond),
             R"#(returns the transition of the 2nd curve compared to the 1st one.)#" )
        .def("SetValues",
             (void (IntRes2d_IntersectionPoint::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const IntRes2d_Transition & , const IntRes2d_Transition & , const Standard_Boolean ) ) static_cast<void (IntRes2d_IntersectionPoint::*)( const gp_Pnt2d & , const Standard_Real , const Standard_Real , const IntRes2d_Transition & , const IntRes2d_Transition & , const Standard_Boolean ) >(&IntRes2d_IntersectionPoint::SetValues),
             R"#(Sets the values for an existing intersection point. The meaning of the parameters are the same as for the Create.)#"  , py::arg("P"),  py::arg("Uc1"),  py::arg("Uc2"),  py::arg("Trans1"),  py::arg("Trans2"),  py::arg("ReversedFlag"))
        .def("Value",
             (const gp_Pnt2d & (IntRes2d_IntersectionPoint::*)() const) static_cast<const gp_Pnt2d & (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::Value),
             R"#(Returns the value of the coordinates of the intersection point in the 2D space.)#" )
        .def("ParamOnFirst",
             (Standard_Real (IntRes2d_IntersectionPoint::*)() const) static_cast<Standard_Real (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::ParamOnFirst),
             R"#(Returns the parameter on the first curve.)#" )
        .def("ParamOnSecond",
             (Standard_Real (IntRes2d_IntersectionPoint::*)() const) static_cast<Standard_Real (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::ParamOnSecond),
             R"#(Returns the parameter on the second curve.)#" )
        .def("TransitionOfFirst",
             (const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const) static_cast<const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::TransitionOfFirst),
             R"#(Returns the transition of the 1st curve compared to the 2nd one.)#" )
        .def("TransitionOfSecond",
             (const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const) static_cast<const IntRes2d_Transition & (IntRes2d_IntersectionPoint::*)() const>(&IntRes2d_IntersectionPoint::TransitionOfSecond),
             R"#(returns the transition of the 2nd curve compared to the 1st one.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntRes2d_IntersectionSegment , shared_ptr<IntRes2d_IntersectionSegment> >>(m.attr("IntRes2d_IntersectionSegment"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IntRes2d_IntersectionPoint &,const IntRes2d_IntersectionPoint &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("P1"),  py::arg("P2"),  py::arg("Oppos"),  py::arg("ReverseFlag") )
        .def(py::init< const IntRes2d_IntersectionPoint &,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("P"),  py::arg("First"),  py::arg("Oppos"),  py::arg("ReverseFlag") )
        .def(py::init< const Standard_Boolean >()  , py::arg("Oppos") )
    // custom constructors
    // methods
        .def("IsOpposite",
             (Standard_Boolean (IntRes2d_IntersectionSegment::*)() const) static_cast<Standard_Boolean (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::IsOpposite),
             R"#(Returns FALSE if the intersection segment has got the same orientation on both curves.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntRes2d_IntersectionSegment::*)() const) static_cast<Standard_Boolean (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::HasFirstPoint),
             R"#(Returns True if the segment is limited by a first point. This point defines the lowest parameter admitted on the first curve for the segment. If IsOpposite returns False, it defines the lowest parameter on the second curve, otherwise, it is the highest parameter on the second curve.)#" )
        .def("FirstPoint",
             (const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const) static_cast<const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::FirstPoint),
             R"#(Returns the first point of the segment as an IntersectionPoint (with a transition). The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntRes2d_IntersectionSegment::*)() const) static_cast<Standard_Boolean (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::HasLastPoint),
             R"#(Returns True if the segment is limited by a last point. This point defines the highest parameter admitted on the first curve for the segment. If IsOpposite returns False, it defines the highest parameter on the second curve, otherwise, it is the lowest parameter on the second curve.)#" )
        .def("LastPoint",
             (const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const) static_cast<const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::LastPoint),
             R"#(Returns the last point of the segment as an IntersectionPoint (with a transition). The exception DomainError is raised if HasLastExtremity returns False.)#" )
        .def("IsOpposite",
             (Standard_Boolean (IntRes2d_IntersectionSegment::*)() const) static_cast<Standard_Boolean (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::IsOpposite),
             R"#(Returns FALSE if the intersection segment has got the same orientation on both curves.)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (IntRes2d_IntersectionSegment::*)() const) static_cast<Standard_Boolean (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::HasFirstPoint),
             R"#(Returns True if the segment is limited by a first point. This point defines the lowest parameter admitted on the first curve for the segment. If IsOpposite returns False, it defines the lowest parameter on the second curve, otherwise, it is the highest parameter on the second curve.)#" )
        .def("HasLastPoint",
             (Standard_Boolean (IntRes2d_IntersectionSegment::*)() const) static_cast<Standard_Boolean (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::HasLastPoint),
             R"#(Returns True if the segment is limited by a last point. This point defines the highest parameter admitted on the first curve for the segment. If IsOpposite returns False, it defines the highest parameter on the second curve, otherwise, it is the lowest parameter on the second curve.)#" )
        .def("FirstPoint",
             (const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const) static_cast<const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::FirstPoint),
             R"#(Returns the first point of the segment as an IntersectionPoint (with a transition). The exception DomainError is raised if HasFirstPoint returns False.)#" )
        .def("LastPoint",
             (const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const) static_cast<const IntRes2d_IntersectionPoint & (IntRes2d_IntersectionSegment::*)() const>(&IntRes2d_IntersectionSegment::LastPoint),
             R"#(Returns the last point of the segment as an IntersectionPoint (with a transition). The exception DomainError is raised if HasLastExtremity returns False.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IntRes2d_Transition , shared_ptr<IntRes2d_Transition> >>(m.attr("IntRes2d_Transition"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Boolean,const IntRes2d_Position,const IntRes2d_TypeTrans >()  , py::arg("Tangent"),  py::arg("Pos"),  py::arg("Type") )
        .def(py::init< const Standard_Boolean,const IntRes2d_Position,const IntRes2d_Situation,const Standard_Boolean >()  , py::arg("Tangent"),  py::arg("Pos"),  py::arg("Situ"),  py::arg("Oppos") )
        .def(py::init< const IntRes2d_Position >()  , py::arg("Pos") )
    // custom constructors
    // methods
        .def("SetValue",
             (void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_TypeTrans ) ) static_cast<void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_TypeTrans ) >(&IntRes2d_Transition::SetValue),
             R"#(Sets the values of an IN or OUT transition.)#"  , py::arg("Tangent"),  py::arg("Pos"),  py::arg("Type"))
        .def("SetValue",
             (void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_Situation , const Standard_Boolean ) ) static_cast<void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_Situation , const Standard_Boolean ) >(&IntRes2d_Transition::SetValue),
             R"#(Sets the values of a TOUCH transition.)#"  , py::arg("Tangent"),  py::arg("Pos"),  py::arg("Situ"),  py::arg("Oppos"))
        .def("SetValue",
             (void (IntRes2d_Transition::*)( const IntRes2d_Position ) ) static_cast<void (IntRes2d_Transition::*)( const IntRes2d_Position ) >(&IntRes2d_Transition::SetValue),
             R"#(Sets the values of an UNDECIDED transition.)#"  , py::arg("Pos"))
        .def("SetPosition",
             (void (IntRes2d_Transition::*)( const IntRes2d_Position ) ) static_cast<void (IntRes2d_Transition::*)( const IntRes2d_Position ) >(&IntRes2d_Transition::SetPosition),
             R"#(Sets the value of the position.)#"  , py::arg("Pos"))
        .def("PositionOnCurve",
             (IntRes2d_Position (IntRes2d_Transition::*)() const) static_cast<IntRes2d_Position (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::PositionOnCurve),
             R"#(Indicates if the intersection is at the beginning (IntRes2d_Head), at the end (IntRes2d_End), or in the middle (IntRes2d_Middle) of the curve.)#" )
        .def("TransitionType",
             (IntRes2d_TypeTrans (IntRes2d_Transition::*)() const) static_cast<IntRes2d_TypeTrans (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::TransitionType),
             R"#(Returns the type of transition at the intersection. It may be IN or OUT or TOUCH, or UNDECIDED if the two first derivatives are not enough to give the tangent to one of the two curves.)#" )
        .def("IsTangent",
             (Standard_Boolean (IntRes2d_Transition::*)() const) static_cast<Standard_Boolean (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::IsTangent),
             R"#(Returns TRUE when the 2 curves are tangent at the intersection point. Theexception DomainError is raised if the type of transition is UNDECIDED.)#" )
        .def("Situation",
             (IntRes2d_Situation (IntRes2d_Transition::*)() const) static_cast<IntRes2d_Situation (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::Situation),
             R"#(returns a significant value if TransitionType returns TOUCH. In this case, the function returns : INSIDE when the curve remains inside the other one, OUTSIDE when it remains outside the other one, UNKNOWN when the calculus, based on the second derivatives cannot give the result. If TransitionType returns IN or OUT or UNDECIDED, the exception DomainError is raised.)#" )
        .def("IsOpposite",
             (Standard_Boolean (IntRes2d_Transition::*)() const) static_cast<Standard_Boolean (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::IsOpposite),
             R"#(returns a significant value if TransitionType returns TOUCH. In this case, the function returns true when the 2 curves locally define two different parts of the space. If TransitionType returns IN or OUT or UNDECIDED, the exception DomainError is raised.)#" )
        .def("SetValue",
             (void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_TypeTrans ) ) static_cast<void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_TypeTrans ) >(&IntRes2d_Transition::SetValue),
             R"#(Sets the values of an IN or OUT transition.)#"  , py::arg("Tangent"),  py::arg("Pos"),  py::arg("Type"))
        .def("SetValue",
             (void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_Situation , const Standard_Boolean ) ) static_cast<void (IntRes2d_Transition::*)( const Standard_Boolean , const IntRes2d_Position , const IntRes2d_Situation , const Standard_Boolean ) >(&IntRes2d_Transition::SetValue),
             R"#(Sets the values of a TOUCH transition.)#"  , py::arg("Tangent"),  py::arg("Pos"),  py::arg("Situ"),  py::arg("Oppos"))
        .def("SetValue",
             (void (IntRes2d_Transition::*)( const IntRes2d_Position ) ) static_cast<void (IntRes2d_Transition::*)( const IntRes2d_Position ) >(&IntRes2d_Transition::SetValue),
             R"#(Sets the values of an UNDECIDED transition.)#"  , py::arg("Pos"))
        .def("SetPosition",
             (void (IntRes2d_Transition::*)( const IntRes2d_Position ) ) static_cast<void (IntRes2d_Transition::*)( const IntRes2d_Position ) >(&IntRes2d_Transition::SetPosition),
             R"#(Sets the value of the position.)#"  , py::arg("Pos"))
        .def("PositionOnCurve",
             (IntRes2d_Position (IntRes2d_Transition::*)() const) static_cast<IntRes2d_Position (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::PositionOnCurve),
             R"#(Indicates if the intersection is at the beginning (IntRes2d_Head), at the end (IntRes2d_End), or in the middle (IntRes2d_Middle) of the curve.)#" )
        .def("TransitionType",
             (IntRes2d_TypeTrans (IntRes2d_Transition::*)() const) static_cast<IntRes2d_TypeTrans (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::TransitionType),
             R"#(Returns the type of transition at the intersection. It may be IN or OUT or TOUCH, or UNDECIDED if the two first derivatives are not enough to give the tangent to one of the two curves.)#" )
        .def("IsTangent",
             (Standard_Boolean (IntRes2d_Transition::*)() const) static_cast<Standard_Boolean (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::IsTangent),
             R"#(Returns TRUE when the 2 curves are tangent at the intersection point. Theexception DomainError is raised if the type of transition is UNDECIDED.)#" )
        .def("Situation",
             (IntRes2d_Situation (IntRes2d_Transition::*)() const) static_cast<IntRes2d_Situation (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::Situation),
             R"#(returns a significant value if TransitionType returns TOUCH. In this case, the function returns : INSIDE when the curve remains inside the other one, OUTSIDE when it remains outside the other one, UNKNOWN when the calculus, based on the second derivatives cannot give the result. If TransitionType returns IN or OUT or UNDECIDED, the exception DomainError is raised.)#" )
        .def("IsOpposite",
             (Standard_Boolean (IntRes2d_Transition::*)() const) static_cast<Standard_Boolean (IntRes2d_Transition::*)() const>(&IntRes2d_Transition::IsOpposite),
             R"#(returns a significant value if TransitionType returns TOUCH. In this case, the function returns true when the 2 curves locally define two different parts of the space. If TransitionType returns IN or OUT or UNDECIDED, the exception DomainError is raised.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\IntRes2d_IntersectionSegment.hxx
// ./opencascade\IntRes2d_Transition.hxx
// ./opencascade\IntRes2d_TypeTrans.hxx
// ./opencascade\IntRes2d_Intersection.hxx
// ./opencascade\IntRes2d_IntersectionPoint.hxx
// ./opencascade\IntRes2d_Domain.hxx
// ./opencascade\IntRes2d_SequenceOfIntersectionSegment.hxx
// ./opencascade\IntRes2d_Position.hxx
// ./opencascade\IntRes2d_SequenceOfIntersectionPoint.hxx
// ./opencascade\IntRes2d_Situation.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<IntRes2d_IntersectionSegment>(m,"IntRes2d_SequenceOfIntersectionSegment");
    register_template_NCollection_Sequence<IntRes2d_IntersectionPoint>(m,"IntRes2d_SequenceOfIntersectionPoint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
