
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
#include <TopCnx_EdgeFaceTransition.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopCnx(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopCnx"));


//Python trampoline classes

// classes


    static_cast<py::class_<TopCnx_EdgeFaceTransition , shared_ptr<TopCnx_EdgeFaceTransition> >>(m.attr("TopCnx_EdgeFaceTransition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reset",
             (void (TopCnx_EdgeFaceTransition::*)( const gp_Dir & , const gp_Dir & , const Standard_Real ) ) static_cast<void (TopCnx_EdgeFaceTransition::*)( const gp_Dir & , const gp_Dir & , const Standard_Real ) >(&TopCnx_EdgeFaceTransition::Reset),
             R"#(Initialize the algorithm with the local description of the edge.)#"  , py::arg("Tgt"),  py::arg("Norm"),  py::arg("Curv"))
        .def("Reset",
             (void (TopCnx_EdgeFaceTransition::*)( const gp_Dir & ) ) static_cast<void (TopCnx_EdgeFaceTransition::*)( const gp_Dir & ) >(&TopCnx_EdgeFaceTransition::Reset),
             R"#(Initialize the algorithm with a linear Edge.)#"  , py::arg("Tgt"))
        .def("AddInterference",
             (void (TopCnx_EdgeFaceTransition::*)( const Standard_Real , const gp_Dir & , const gp_Dir & , const Standard_Real , const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation ) ) static_cast<void (TopCnx_EdgeFaceTransition::*)( const Standard_Real , const gp_Dir & , const gp_Dir & , const Standard_Real , const TopAbs_Orientation , const TopAbs_Orientation , const TopAbs_Orientation ) >(&TopCnx_EdgeFaceTransition::AddInterference),
             R"#(Add a curve element to the boundary. Or is the orientation of the interference on the boundary curve. Tr is the transition of the interference. BTr is the boundary transition of the interference.)#"  , py::arg("Tole"),  py::arg("Tang"),  py::arg("Norm"),  py::arg("Curv"),  py::arg("Or"),  py::arg("Tr"),  py::arg("BTr"))
        .def("Transition",
             (TopAbs_Orientation (TopCnx_EdgeFaceTransition::*)() const) static_cast<TopAbs_Orientation (TopCnx_EdgeFaceTransition::*)() const>(&TopCnx_EdgeFaceTransition::Transition),
             R"#(Returns the current cumulated transition.)#" )
        .def("BoundaryTransition",
             (TopAbs_Orientation (TopCnx_EdgeFaceTransition::*)() const) static_cast<TopAbs_Orientation (TopCnx_EdgeFaceTransition::*)() const>(&TopCnx_EdgeFaceTransition::BoundaryTransition),
             R"#(Returns the current cumulated BoundaryTransition.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopCnx_EdgeFaceTransition.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
