
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <IntAna2d_Conic.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_XY.hxx>
#include <gp_Ax2d.hxx>

// module includes
#include <IntAna2d_AnaIntersection.hxx>
#include <IntAna2d_Conic.hxx>
#include <IntAna2d_IntPoint.hxx>
#include <IntAna2d_Outils.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntAna2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntAna2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<IntAna2d_AnaIntersection , shared_ptr<IntAna2d_AnaIntersection>  >(m,"IntAna2d_AnaIntersection",R"#(Implementation of the analytical intersection between: - two Lin2d, - two Circ2d, - a Lin2d and a Circ2d, - an element of gp (Lin2d, Circ2d, Elips2d, Parab2d, Hypr2d) and another conic. No tolerance is given for all the intersections: the tolerance will be the "precision machine".)#");
    py::class_<IntAna2d_Conic , shared_ptr<IntAna2d_Conic>  >(m,"IntAna2d_Conic",R"#(Definition of a conic by its implicit quadaratic equation: A.X**2 + B.Y**2 + 2.C.X*Y + 2.D.X + 2.E.Y + F = 0.)#");
    py::class_<IntAna2d_IntPoint , shared_ptr<IntAna2d_IntPoint>  >(m,"IntAna2d_IntPoint",R"#(Geometrical intersection between two 2d elements.)#");
    py::class_<MyDirectPolynomialRoots , shared_ptr<MyDirectPolynomialRoots>  >(m,"MyDirectPolynomialRoots",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
