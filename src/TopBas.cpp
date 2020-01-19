
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <TopBas_ListIteratorOfListOfTestInterference.hxx>
#include <TopBas_ListOfTestInterference.hxx>
#include <TopBas_TestInterference.hxx>

// template related includes
// ./opencascade/TopBas_ListOfTestInterference.hxx
#include "NCollection.hxx"
// ./opencascade/TopBas_ListOfTestInterference.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopBas(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopBas"));


//Python trampoline classes

// classes


    static_cast<py::class_<TopBas_TestInterference , shared_ptr<TopBas_TestInterference>  >>(m.attr("TopBas_TestInterference"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real &,const Standard_Integer &,const TopAbs_Orientation,const TopAbs_Orientation,const TopAbs_Orientation >()  , py::arg("Inters"),  py::arg("Bound"),  py::arg("Orient"),  py::arg("Trans"),  py::arg("BTrans") )
    // methods
        .def("Intersection",
             (void (TopBas_TestInterference::*)( const Standard_Real &  ) ) static_cast<void (TopBas_TestInterference::*)( const Standard_Real &  ) >(&TopBas_TestInterference::Intersection),
             R"#(None)#"  , py::arg("I"))
        .def("Boundary",
             (void (TopBas_TestInterference::*)( const Standard_Integer &  ) ) static_cast<void (TopBas_TestInterference::*)( const Standard_Integer &  ) >(&TopBas_TestInterference::Boundary),
             R"#(None)#"  , py::arg("B"))
        .def("Orientation",
             (void (TopBas_TestInterference::*)( const TopAbs_Orientation  ) ) static_cast<void (TopBas_TestInterference::*)( const TopAbs_Orientation  ) >(&TopBas_TestInterference::Orientation),
             R"#(None)#"  , py::arg("O"))
        .def("Transition",
             (void (TopBas_TestInterference::*)( const TopAbs_Orientation  ) ) static_cast<void (TopBas_TestInterference::*)( const TopAbs_Orientation  ) >(&TopBas_TestInterference::Transition),
             R"#(None)#"  , py::arg("Tr"))
        .def("BoundaryTransition",
             (void (TopBas_TestInterference::*)( const TopAbs_Orientation  ) ) static_cast<void (TopBas_TestInterference::*)( const TopAbs_Orientation  ) >(&TopBas_TestInterference::BoundaryTransition),
             R"#(None)#"  , py::arg("BTr"))
        .def("Intersection",
             (const Standard_Real & (TopBas_TestInterference::*)() const) static_cast<const Standard_Real & (TopBas_TestInterference::*)() const>(&TopBas_TestInterference::Intersection),
             R"#(None)#" )
        .def("ChangeIntersection",
             (Standard_Real & (TopBas_TestInterference::*)() ) static_cast<Standard_Real & (TopBas_TestInterference::*)() >(&TopBas_TestInterference::ChangeIntersection),
             R"#(None)#" )
        .def("Boundary",
             (const Standard_Integer & (TopBas_TestInterference::*)() const) static_cast<const Standard_Integer & (TopBas_TestInterference::*)() const>(&TopBas_TestInterference::Boundary),
             R"#(None)#" )
        .def("ChangeBoundary",
             (Standard_Integer & (TopBas_TestInterference::*)() ) static_cast<Standard_Integer & (TopBas_TestInterference::*)() >(&TopBas_TestInterference::ChangeBoundary),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (TopBas_TestInterference::*)() const) static_cast<TopAbs_Orientation (TopBas_TestInterference::*)() const>(&TopBas_TestInterference::Orientation),
             R"#(None)#" )
        .def("Transition",
             (TopAbs_Orientation (TopBas_TestInterference::*)() const) static_cast<TopAbs_Orientation (TopBas_TestInterference::*)() const>(&TopBas_TestInterference::Transition),
             R"#(None)#" )
        .def("BoundaryTransition",
             (TopAbs_Orientation (TopBas_TestInterference::*)() const) static_cast<TopAbs_Orientation (TopBas_TestInterference::*)() const>(&TopBas_TestInterference::BoundaryTransition),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/TopBas_ListIteratorOfListOfTestInterference.hxx
// ./opencascade/TopBas_ListOfTestInterference.hxx
// ./opencascade/TopBas_TestInterference.hxx

// operators

// register typdefs
    register_template_NCollection_List<TopBas_TestInterference>(m,"TopBas_ListOfTestInterference");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
