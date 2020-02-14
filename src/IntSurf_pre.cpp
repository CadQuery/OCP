
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HSurface.hxx>
#include <IntSurf_Transition.hxx>
#include <gp_Dir.hxx>
#include <gp_Vec.hxx>

// module includes
#include <IntSurf.hxx>
#include <IntSurf_Allocator.hxx>
#include <IntSurf_Couple.hxx>
#include <IntSurf_InteriorPoint.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf_ListIteratorOfListOfPntOn2S.hxx>
#include <IntSurf_ListOfPntOn2S.hxx>
#include <IntSurf_PathPoint.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntSurf_SequenceOfCouple.hxx>
#include <IntSurf_SequenceOfInteriorPoint.hxx>
#include <IntSurf_SequenceOfPathPoint.hxx>
#include <IntSurf_SequenceOfPntOn2S.hxx>
#include <IntSurf_Situation.hxx>
#include <IntSurf_Transition.hxx>
#include <IntSurf_TypeTrans.hxx>

// template related includes
// ./opencascade/IntSurf_SequenceOfPntOn2S.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_ListOfPntOn2S.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_ListOfPntOn2S.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_SequenceOfPathPoint.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_SequenceOfInteriorPoint.hxx
#include "NCollection.hxx"
// ./opencascade/IntSurf_SequenceOfCouple.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntSurf_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntSurf", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IntSurf_TypeTrans>(m, "IntSurf_TypeTrans",R"#(None)#")
        .value("IntSurf_In",IntSurf_TypeTrans::IntSurf_In)
        .value("IntSurf_Out",IntSurf_TypeTrans::IntSurf_Out)
        .value("IntSurf_Touch",IntSurf_TypeTrans::IntSurf_Touch)
        .value("IntSurf_Undecided",IntSurf_TypeTrans::IntSurf_Undecided).export_values();
    py::enum_<IntSurf_Situation>(m, "IntSurf_Situation",R"#(None)#")
        .value("IntSurf_Inside",IntSurf_Situation::IntSurf_Inside)
        .value("IntSurf_Outside",IntSurf_Situation::IntSurf_Outside)
        .value("IntSurf_Unknown",IntSurf_Situation::IntSurf_Unknown).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<IntSurf_PntOn2S>(m,"IntSurf_SequenceOfPntOn2S");  
    preregister_template_NCollection_List<IntSurf_PntOn2S>(m,"IntSurf_ListOfPntOn2S");  
    preregister_template_NCollection_Sequence<IntSurf_PathPoint>(m,"IntSurf_SequenceOfPathPoint");  
    preregister_template_NCollection_Sequence<IntSurf_InteriorPoint>(m,"IntSurf_SequenceOfInteriorPoint");  
    preregister_template_NCollection_Sequence<IntSurf_Couple>(m,"IntSurf_SequenceOfCouple");  

// classes forward declarations only
    py::class_<IntSurf , shared_ptr<IntSurf>  >(m,"IntSurf",R"#(This package provides resources for all the packages concerning the intersection between surfaces.)#");
    py::class_<IntSurf_Couple , shared_ptr<IntSurf_Couple>  >(m,"IntSurf_Couple",R"#(creation d 'un couple de 2 entiers)#");
    py::class_<IntSurf_InteriorPoint , shared_ptr<IntSurf_InteriorPoint>  >(m,"IntSurf_InteriorPoint",R"#(Definition of a point solution of the intersection between an implicit an a parametrised surface. These points are passing points on the intersection lines, or starting points for the closed lines on the parametrised surface.)#");
    py::class_<IntSurf_InteriorPointTool , shared_ptr<IntSurf_InteriorPointTool>  >(m,"IntSurf_InteriorPointTool",R"#(This class provides a tool on the "interior point" that can be used to instantiates the Walking algorithmes (see package IntWalk).)#");
    py::class_<IntSurf_LineOn2S ,opencascade::handle<IntSurf_LineOn2S>  , Standard_Transient >(m,"IntSurf_LineOn2S",R"#()#");
    py::class_<IntSurf_PathPoint , shared_ptr<IntSurf_PathPoint>  >(m,"IntSurf_PathPoint",R"#(None)#");
    py::class_<IntSurf_PathPointTool , shared_ptr<IntSurf_PathPointTool>  >(m,"IntSurf_PathPointTool",R"#(None)#");
    py::class_<IntSurf_PntOn2S , shared_ptr<IntSurf_PntOn2S>  >(m,"IntSurf_PntOn2S",R"#(This class defines the geometric informations for an intersection point between 2 surfaces : The coordinates ( Pnt from gp ), and two parametric coordinates.)#");
    py::class_<IntSurf_Quadric , shared_ptr<IntSurf_Quadric>  >(m,"IntSurf_Quadric",R"#(None)#");
    py::class_<IntSurf_QuadricTool , shared_ptr<IntSurf_QuadricTool>  >(m,"IntSurf_QuadricTool",R"#(This class provides a tool on a quadric that can be used to instantiates the Walking algorithmes (see package IntWalk) with a Quadric from IntSurf as implicit surface.)#");
    py::class_<IntSurf_Transition , shared_ptr<IntSurf_Transition>  >(m,"IntSurf_Transition",R"#(Definition of the transition at the intersection between an intersection line and a restriction curve on a surface.)#");

};

// user-defined post-inclusion per module

// user-defined post
