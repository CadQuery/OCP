
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
// ./opencascade/IntRes2d_SequenceOfIntersectionSegment.hxx
#include "NCollection.hxx"
// ./opencascade/IntRes2d_SequenceOfIntersectionPoint.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntRes2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntRes2d", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IntRes2d_TypeTrans>(m, "IntRes2d_TypeTrans",R"#(None)#")
        .value("IntRes2d_In",IntRes2d_TypeTrans::IntRes2d_In)
        .value("IntRes2d_Out",IntRes2d_TypeTrans::IntRes2d_Out)
        .value("IntRes2d_Touch",IntRes2d_TypeTrans::IntRes2d_Touch)
        .value("IntRes2d_Undecided",IntRes2d_TypeTrans::IntRes2d_Undecided).export_values();
    py::enum_<IntRes2d_Position>(m, "IntRes2d_Position",R"#(None)#")
        .value("IntRes2d_Head",IntRes2d_Position::IntRes2d_Head)
        .value("IntRes2d_Middle",IntRes2d_Position::IntRes2d_Middle)
        .value("IntRes2d_End",IntRes2d_Position::IntRes2d_End).export_values();
    py::enum_<IntRes2d_Situation>(m, "IntRes2d_Situation",R"#(None)#")
        .value("IntRes2d_Inside",IntRes2d_Situation::IntRes2d_Inside)
        .value("IntRes2d_Outside",IntRes2d_Situation::IntRes2d_Outside)
        .value("IntRes2d_Unknown",IntRes2d_Situation::IntRes2d_Unknown).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<IntRes2d_IntersectionSegment>(m,"IntRes2d_SequenceOfIntersectionSegment");  
    preregister_template_NCollection_Sequence<IntRes2d_IntersectionPoint>(m,"IntRes2d_SequenceOfIntersectionPoint");  

// classes forward declarations only
    py::class_<IntRes2d_Domain , shared_ptr<IntRes2d_Domain>  >(m,"IntRes2d_Domain",R"#(Definition of the domain of parameter on a 2d-curve. Most of the time, a domain is defined by two extremities. An extremity is made of : - a point in 2d-space (Pnt2d from gp), - a parameter on the curve, - a tolerance in the 2d-space. Sometimes, it can be made of 0 or 1 point ( for an infinite or semi-infinite line for example).)#");
    py::class_<IntRes2d_Intersection , shared_ptr_nodelete<IntRes2d_Intersection>  >(m,"IntRes2d_Intersection",R"#(Defines the root class of all the Intersections between two 2D-Curves, and provides all the methods about the results of the Intersections Algorithms.)#");
    py::class_<IntRes2d_IntersectionPoint , shared_ptr<IntRes2d_IntersectionPoint>  >(m,"IntRes2d_IntersectionPoint",R"#(Definition of an intersection point between two 2D curves.)#");
    py::class_<IntRes2d_IntersectionSegment , shared_ptr<IntRes2d_IntersectionSegment>  >(m,"IntRes2d_IntersectionSegment",R"#(Definition of an intersection curve between two 2D curves.)#");
    py::class_<IntRes2d_Transition , shared_ptr<IntRes2d_Transition>  >(m,"IntRes2d_Transition",R"#(Definition of the type of transition near an intersection point between two curves. The transition is either a "true transition", which means that one of the curves goes inside or outside the area defined by the other curve near the intersection, or a "touch transition" which means that the first curve does not cross the other one, or an "undecided" transition, which means that the curves are superposed.)#");

};

// user-defined post-inclusion per module

// user-defined post
