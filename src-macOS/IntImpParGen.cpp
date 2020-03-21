
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
// ./opencascade/IntImpParGen_ImpTool.hxx
// ./opencascade/IntImpParGen_Tool.hxx
// ./opencascade/IntImpParGen.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
