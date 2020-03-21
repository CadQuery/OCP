
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <gp_Pln.hxx>
#include <Geom_Surface.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <Message_ProgressIndicator.hxx>
#include <BOPAlgo_PaveFiller.hxx>
#include <BOPAlgo_PaveFiller.hxx>

// module includes
#include <BRepAlgoAPI_Algo.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <BRepAlgoAPI_BuilderAlgo.hxx>
#include <BRepAlgoAPI_Check.hxx>
#include <BRepAlgoAPI_Common.hxx>
#include <BRepAlgoAPI_Cut.hxx>
#include <BRepAlgoAPI_Defeaturing.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <BRepAlgoAPI_Section.hxx>
#include <BRepAlgoAPI_Splitter.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <BOPAlgo_Builder.hxx>

// Module definiiton
void register_BRepAlgoAPI_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepAlgoAPI", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BRepAlgoAPI_Algo , shared_ptr_nodelete<BRepAlgoAPI_Algo> , BRepBuilderAPI_MakeShape>(m,"BRepAlgoAPI_Algo",R"#(Provides the root interface for the API algorithms)#");
    py::class_<BRepAlgoAPI_Check , shared_ptr<BRepAlgoAPI_Check> , BOPAlgo_Options>(m,"BRepAlgoAPI_Check",R"#(The class Check provides a diagnostic tool for checking the validity of the single shape or couple of shapes. The shapes are checked on: - Topological validity; - Small edges; - Self-interference; - Validity for Boolean operation of certain type (for couple of shapes only).)#");
    py::class_<BRepAlgoAPI_BuilderAlgo , shared_ptr<BRepAlgoAPI_BuilderAlgo> , BRepAlgoAPI_Algo>(m,"BRepAlgoAPI_BuilderAlgo",R"#(The class contains API level of the General Fuse algorithm.)#");
    py::class_<BRepAlgoAPI_Defeaturing , shared_ptr<BRepAlgoAPI_Defeaturing> , BRepAlgoAPI_Algo>(m,"BRepAlgoAPI_Defeaturing",R"#(The BRepAlgoAPI_Defeaturing algorithm is the API algorithm intended for removal of the unwanted parts from the shape. The unwanted parts (or features) can be holes, protrusions, gaps, chamfers, fillets etc. The shape itself is not modified, the new shape is built as the result.)#");
    py::class_<BRepAlgoAPI_BooleanOperation , shared_ptr<BRepAlgoAPI_BooleanOperation> , BRepAlgoAPI_BuilderAlgo>(m,"BRepAlgoAPI_BooleanOperation",R"#(The root API class for performing Boolean Operations on arbitrary shapes.)#");
    py::class_<BRepAlgoAPI_Splitter , shared_ptr<BRepAlgoAPI_Splitter> , BRepAlgoAPI_BuilderAlgo>(m,"BRepAlgoAPI_Splitter",R"#(The class contains API level of the **Splitter** algorithm, which allows splitting a group of arbitrary shapes by the other group of arbitrary shapes. The arguments of the operation are divided on two groups: *Objects* - shapes that will be split; *Tools* - shapes by which the *Objects* will be split. The result of the operation contains only the split parts of the shapes from the group of *Objects*. The split parts of the shapes from the group of *Tools* are excluded from the result. The shapes can be split by the other shapes from the same group (in case these shapes are interfering).)#");
    py::class_<BRepAlgoAPI_Common , shared_ptr<BRepAlgoAPI_Common> , BRepAlgoAPI_BooleanOperation>(m,"BRepAlgoAPI_Common",R"#(The class provides Boolean common operation between arguments and tools (Boolean Intersection).)#");
    py::class_<BRepAlgoAPI_Cut , shared_ptr<BRepAlgoAPI_Cut> , BRepAlgoAPI_BooleanOperation>(m,"BRepAlgoAPI_Cut",R"#(The class Cut provides Boolean cut operation between arguments and tools (Boolean Subtraction).)#");
    py::class_<BRepAlgoAPI_Fuse , shared_ptr<BRepAlgoAPI_Fuse> , BRepAlgoAPI_BooleanOperation>(m,"BRepAlgoAPI_Fuse",R"#(The class provides Boolean fusion operation between arguments and tools (Boolean Union).)#");
    py::class_<BRepAlgoAPI_Section , shared_ptr<BRepAlgoAPI_Section> , BRepAlgoAPI_BooleanOperation>(m,"BRepAlgoAPI_Section",R"#(The algorithm is to build a Secton operation between arguments and tools. The result of Section operation consists of vertices and edges. The result of Section operation contains: 1. new vertices that are subjects of V/V, E/E, E/F, F/F interferences 2. vertices that are subjects of V/E, V/F interferences 3. new edges that are subjects of F/F interferences 4. edges that are Common Blocks)#");

};

// user-defined post-inclusion per module

// user-defined post
