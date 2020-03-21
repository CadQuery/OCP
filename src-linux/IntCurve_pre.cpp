
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Elips2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Lin2d.hxx>
#include <IntCurve_PConic.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Lin2d.hxx>
#include <IntRes2d_Domain.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Parab2d.hxx>
#include <gp_Hypr2d.hxx>
#include <IntCurve_IConicTool.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_ProjectOnPConicTool.hxx>
#include <IntCurve_MyImpParToolOfIntImpConicParConic.hxx>
#include <IntRes2d_Domain.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_PConic.hxx>
#include <gp_Pnt2d.hxx>

// module includes
#include <IntCurve_IConicTool.hxx>
#include <IntCurve_IntConicConic.hxx>
#include <IntCurve_IntConicConic_Tool.hxx>
#include <IntCurve_IntImpConicParConic.hxx>
#include <IntCurve_MyImpParToolOfIntImpConicParConic.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_ProjectOnPConicTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IntCurve_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IntCurve", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<IntCurve_IConicTool , shared_ptr<IntCurve_IConicTool> >(m,"IntCurve_IConicTool",R"#(Implementation of the ImpTool from IntImpParGen for conics of gp.)#");
    py::class_<IntCurve_IntConicConic , shared_ptr<IntCurve_IntConicConic> , IntRes2d_Intersection>(m,"IntCurve_IntConicConic",R"#(Provides methods to intersect two conics. The exception ConstructionError is raised in constructors or in Perform methods when a domain (Domain from IntRes2d) is not correct, i-e when a Circle (Circ2d from gp) or an Ellipse (i-e Elips2d from gp) do not have a closed domain (use the SetEquivalentParameters method for a domain on a circle or an ellipse).)#");
    py::class_<IntCurve_IntImpConicParConic , shared_ptr<IntCurve_IntImpConicParConic> , IntRes2d_Intersection>(m,"IntCurve_IntImpConicParConic",R"#(None)#");
    py::class_<IntCurve_MyImpParToolOfIntImpConicParConic , shared_ptr<IntCurve_MyImpParToolOfIntImpConicParConic> , math_FunctionWithDerivative>(m,"IntCurve_MyImpParToolOfIntImpConicParConic",R"#(None)#");
    py::class_<IntCurve_PConic , shared_ptr<IntCurve_PConic> >(m,"IntCurve_PConic",R"#(This class represents a conic from gp as a parametric curve ( in order to be used by the class PConicTool from IntCurve).)#");
    py::class_<IntCurve_PConicTool , shared_ptr<IntCurve_PConicTool> >(m,"IntCurve_PConicTool",R"#(Implementation of the ParTool from IntImpParGen for conics of gp, using the class PConic from IntCurve.)#");
    py::class_<IntCurve_ProjectOnPConicTool , shared_ptr<IntCurve_ProjectOnPConicTool> >(m,"IntCurve_ProjectOnPConicTool",R"#(This class provides a tool which computes the parameter of a point near a parametric conic.)#");
    py::class_<Interval , shared_ptr<Interval> >(m,"Interval",R"#(None)#");
    py::class_<PeriodicInterval , shared_ptr<PeriodicInterval> >(m,"PeriodicInterval",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
