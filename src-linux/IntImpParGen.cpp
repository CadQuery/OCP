
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Vec2d.hxx>
#include <IntRes2d_Transition.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Pnt2d.hxx>
#include <IntImpParGen_ImpTool.hxx>

// module includes
#include <IntImpParGen.hxx>
#include <IntImpParGen_ImpTool.hxx>
#include <IntImpParGen_Tool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntImpParGen(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IntImpParGen"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IntImpParGen , shared_ptr<IntImpParGen>>(m,"IntImpParGen");

    static_cast<py::class_<IntImpParGen , shared_ptr<IntImpParGen> >>(m.attr("IntImpParGen"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("DetermineTransition_s",
                    (void (*)( const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const Standard_Real ) ) static_cast<void (*)( const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const Standard_Real ) >(&IntImpParGen::DetermineTransition),
                    R"#(Template class for an implicit curve. Math function, instantiated inside the Intersector. Tool used by the package IntCurve and IntImpParGen)#"  , py::arg("Pos1"),  py::arg("Tan1"),  py::arg("Norm1"),  py::arg("Trans1"),  py::arg("Pos2"),  py::arg("Tan2"),  py::arg("Norm2"),  py::arg("Trans2"),  py::arg("Tol"))
        .def_static("DetermineTransition_s",
                    (Standard_Boolean (*)( const IntRes2d_Position , gp_Vec2d & , IntRes2d_Transition & , const IntRes2d_Position , gp_Vec2d & , IntRes2d_Transition & , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const IntRes2d_Position , gp_Vec2d & , IntRes2d_Transition & , const IntRes2d_Position , gp_Vec2d & , IntRes2d_Transition & , const Standard_Real ) >(&IntImpParGen::DetermineTransition),
                    R"#(None)#"  , py::arg("Pos1"),  py::arg("Tan1"),  py::arg("Trans1"),  py::arg("Pos2"),  py::arg("Tan2"),  py::arg("Trans2"),  py::arg("Tol"))
        .def_static("DeterminePosition_s",
                    (void (*)( IntRes2d_Position & , const IntRes2d_Domain & , const gp_Pnt2d & , const Standard_Real ) ) static_cast<void (*)( IntRes2d_Position & , const IntRes2d_Domain & , const gp_Pnt2d & , const Standard_Real ) >(&IntImpParGen::DeterminePosition),
                    R"#(None)#"  , py::arg("Pos1"),  py::arg("Dom1"),  py::arg("P1"),  py::arg("Tol"))
        .def_static("NormalizeOnDomain_s",
                    (Standard_Real (*)( Standard_Real & , const IntRes2d_Domain & ) ) static_cast<Standard_Real (*)( Standard_Real & , const IntRes2d_Domain & ) >(&IntImpParGen::NormalizeOnDomain),
                    R"#(None)#"  , py::arg("Par1"),  py::arg("Dom1"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IntImpParGen_ImpTool , shared_ptr<IntImpParGen_ImpTool>>(m,"IntImpParGen_ImpTool");

    static_cast<py::class_<IntImpParGen_ImpTool , shared_ptr<IntImpParGen_ImpTool> >>(m.attr("IntImpParGen_ImpTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IntImpParGen_Tool.hxx
    m.def("NormalizeOnDomain",
          (Standard_Real (*)( Standard_Real & , const IntRes2d_Domain & ))  static_cast<Standard_Real (*)( Standard_Real & , const IntRes2d_Domain & )>(&NormalizeOnDomain),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("Determine_Position",
          (void (*)( IntRes2d_Position & , const IntRes2d_Domain & , const gp_Pnt2d & , const Standard_Real ))  static_cast<void (*)( IntRes2d_Position & , const IntRes2d_Domain & , const gp_Pnt2d & , const Standard_Real )>(&Determine_Position),
          R"#(None)#"  , py::arg(""),  py::arg(""),  py::arg(""),  py::arg(""));
    m.def("Determine_Transition",
          (void (*)( const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const Standard_Real ))  static_cast<void (*)( const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const IntRes2d_Position , gp_Vec2d & , const gp_Vec2d & , IntRes2d_Transition & , const Standard_Real )>(&Determine_Transition),
          R"#(None)#"  , py::arg("Pos1"),  py::arg("Tan1"),  py::arg("Norm1"),  py::arg("Trans1"),  py::arg("Pos2"),  py::arg("Tan2"),  py::arg("Norm2"),  py::arg("Trans2"),  py::arg("ToleranceAng"));
// ./opencascade/IntImpParGen_ImpTool.hxx
// ./opencascade/IntImpParGen.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
