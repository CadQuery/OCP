
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

// module includes
#include <BVH_BinaryTree.hxx>
#include <BVH_BinnedBuilder.hxx>
#include <BVH_Box.hxx>
#include <BVH_BoxSet.hxx>
#include <BVH_Builder.hxx>
#include <BVH_BuildQueue.hxx>
#include <BVH_BuildThread.hxx>
#include <BVH_Constants.hxx>
#include <BVH_Distance.hxx>
#include <BVH_DistanceField.hxx>
#include <BVH_Geometry.hxx>
#include <BVH_LinearBuilder.hxx>
#include <BVH_Object.hxx>
#include <BVH_ObjectSet.hxx>
#include <BVH_PairDistance.hxx>
#include <BVH_PrimitiveSet.hxx>
#include <BVH_PrimitiveSet3d.hxx>
#include <BVH_Properties.hxx>
#include <BVH_QuadTree.hxx>
#include <BVH_QueueBuilder.hxx>
#include <BVH_QuickSorter.hxx>
#include <BVH_Set.hxx>
#include <BVH_Sorter.hxx>
#include <BVH_SpatialMedianBuilder.hxx>
#include <BVH_SweepPlaneBuilder.hxx>
#include <BVH_Tools.hxx>
#include <BVH_Traverse.hxx>
#include <BVH_Tree.hxx>
#include <BVH_Triangulation.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BVH_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BVH", R"#()#");

// user-defined inclusion per module in the body

// enums
    m.attr("BVH_Constants_MaxTreeDepth") = py::cast(int(BVH_Constants_MaxTreeDepth));
    m.attr("BVH_Constants_LeafNodeSizeSingle") = py::cast(int(BVH_Constants_LeafNodeSizeSingle));
    m.attr("BVH_Constants_LeafNodeSizeAverage") = py::cast(int(BVH_Constants_LeafNodeSizeAverage));
    m.attr("BVH_Constants_LeafNodeSizeDefault") = py::cast(int(BVH_Constants_LeafNodeSizeDefault));
    m.attr("BVH_Constants_LeafNodeSizeSmall") = py::cast(int(BVH_Constants_LeafNodeSizeSmall));
    m.attr("BVH_Constants_NbBinsOptimal") = py::cast(int(BVH_Constants_NbBinsOptimal));
    m.attr("BVH_Constants_NbBinsBest") = py::cast(int(BVH_Constants_NbBinsBest));

//Python trampoline classes
    class Py_BVH_BuildTool : public BVH_BuildTool{
    public:
        using BVH_BuildTool::BVH_BuildTool;


        // public pure virtual
        void Perform(const Standard_Integer theNode) override { PYBIND11_OVERLOAD_PURE(void,BVH_BuildTool,Perform,theNode) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_BVH_Properties : public BVH_Properties{
    public:
        using BVH_Properties::BVH_Properties;


        // public pure virtual


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<BVH_BinaryTree , shared_ptr<BVH_BinaryTree> >(m,"BVH_BinaryTree",R"#(Type corresponding to binary BVH.)#");
    py::class_<BVH_BuildQueue , shared_ptr<BVH_BuildQueue> >(m,"BVH_BuildQueue",R"#(Command-queue for parallel building of BVH nodes.)#");
    py::class_<BVH_BuildThread ,opencascade::handle<BVH_BuildThread> , Standard_Transient>(m,"BVH_BuildThread",R"#(Wrapper for BVH build thread.Wrapper for BVH build thread.)#");
    py::class_<BVH_BuildTool , shared_ptr<BVH_BuildTool>,Py_BVH_BuildTool >(m,"BVH_BuildTool",R"#(Tool object to call BVH builder subroutines.)#");
    py::class_<BVH_BuilderTransient ,opencascade::handle<BVH_BuilderTransient> , Standard_Transient>(m,"BVH_BuilderTransient",R"#(A non-template class for using as base for BVH_Builder (just to have a named base class).)#");
    py::class_<BVH_ObjectTransient ,opencascade::handle<BVH_ObjectTransient> , Standard_Transient>(m,"BVH_ObjectTransient",R"#(A non-template class for using as base for BVH_Object (just to have a named base class).)#");
    py::class_<BVH_Properties ,opencascade::handle<BVH_Properties>,Py_BVH_Properties , Standard_Transient>(m,"BVH_Properties",R"#(Abstract properties of geometric object.)#");
    py::class_<BVH_QuadTree , shared_ptr<BVH_QuadTree> >(m,"BVH_QuadTree",R"#(Type corresponding to quad BVH.)#");
    py::class_<BVH_TreeBaseTransient ,opencascade::handle<BVH_TreeBaseTransient> , Standard_Transient>(m,"BVH_TreeBaseTransient",R"#(A non-template class for using as base for BVH_TreeBase (just to have a named base class).)#");

};

// user-defined post-inclusion per module

// user-defined post
