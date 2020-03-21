
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_OutOfRange.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>

// module includes
#include <Sweep_NumShape.hxx>
#include <Sweep_NumShapeIterator.hxx>
#include <Sweep_NumShapeTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Sweep_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Sweep", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<Sweep_NumShape , shared_ptr<Sweep_NumShape> >(m,"Sweep_NumShape",R"#(Gives a simple indexed representation of a Directing Edge topology.)#");
    py::class_<Sweep_NumShapeIterator , shared_ptr<Sweep_NumShapeIterator> >(m,"Sweep_NumShapeIterator",R"#(This class provides iteration services required by the Swept Primitives for a Directing NumShape Line.)#");
    py::class_<Sweep_NumShapeTool , shared_ptr<Sweep_NumShapeTool> >(m,"Sweep_NumShapeTool",R"#(This class provides the indexation and type analysis services required by the NumShape Directing Shapes of Swept Primitives.)#");

};

// user-defined post-inclusion per module

// user-defined post
