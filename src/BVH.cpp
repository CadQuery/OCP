
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
#include <BVH_BinaryTree.hxx>
#include <BVH_BinnedBuilder.hxx>
#include <BVH_Box.hxx>
#include <BVH_Builder.hxx>
#include <BVH_BuildQueue.hxx>
#include <BVH_BuildThread.hxx>
#include <BVH_Constants.hxx>
#include <BVH_DistanceField.hxx>
#include <BVH_Geometry.hxx>
#include <BVH_LinearBuilder.hxx>
#include <BVH_Object.hxx>
#include <BVH_ObjectSet.hxx>
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
#include <BVH_Tree.hxx>
#include <BVH_Triangulation.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BVH(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BVH"));


//Python trampoline classes
    class Py_BVH_Properties : public BVH_Properties{
    public:
        using BVH_Properties::BVH_Properties;
        
        // public pure virtual
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<BVH_BuildQueue , shared_ptr<BVH_BuildQueue>  >>(m.attr("BVH_BuildQueue"))
        .def(py::init<  >()  )
    // methods
        .def("Size",
             (Standard_Integer (BVH_BuildQueue::*)() ) static_cast<Standard_Integer (BVH_BuildQueue::*)() >(&BVH_BuildQueue::Size),
             R"#(Returns current size of BVH build queue.)#" )
        .def("Enqueue",
             (void (BVH_BuildQueue::*)( const Standard_Integer &  ) ) static_cast<void (BVH_BuildQueue::*)( const Standard_Integer &  ) >(&BVH_BuildQueue::Enqueue),
             R"#(Enqueues new work-item onto BVH build queue.)#"  , py::arg("theNode"))
        .def("Fetch",
             (Standard_Integer (BVH_BuildQueue::*)( Standard_Boolean &  ) ) static_cast<Standard_Integer (BVH_BuildQueue::*)( Standard_Boolean &  ) >(&BVH_BuildQueue::Fetch),
             R"#(Fetches first work-item from BVH build queue.)#"  , py::arg("wasBusy"))
        .def("HasBusyThreads",
             (Standard_Boolean (BVH_BuildQueue::*)() ) static_cast<Standard_Boolean (BVH_BuildQueue::*)() >(&BVH_BuildQueue::HasBusyThreads),
             R"#(Checks if there are active build threads.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BVH_BuildThread ,opencascade::handle<BVH_BuildThread>  , Standard_Transient >>(m.attr("BVH_BuildThread"))
        .def(py::init< BVH_BuildTool &,BVH_BuildQueue & >()  , py::arg("theBuildTool"),  py::arg("theBuildQueue") )
    // methods
        .def("Run",
             (void (BVH_BuildThread::*)() ) static_cast<void (BVH_BuildThread::*)() >(&BVH_BuildThread::Run),
             R"#(Starts execution of BVH build thread.)#" )
        .def("Wait",
             (void (BVH_BuildThread::*)() ) static_cast<void (BVH_BuildThread::*)() >(&BVH_BuildThread::Wait),
             R"#(Waits till the thread finishes execution.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BVH_BuildThread::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BVH_BuildThread::*)() const>(&BVH_BuildThread::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BVH_BuildThread::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BVH_BuildThread::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BVH_BuilderTransient ,opencascade::handle<BVH_BuilderTransient>  , Standard_Transient >>(m.attr("BVH_BuilderTransient"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BVH_BuilderTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BVH_BuilderTransient::*)() const>(&BVH_BuilderTransient::DynamicType),
             R"#(None)#" )
        .def("MaxTreeDepth",
             (Standard_Integer (BVH_BuilderTransient::*)() const) static_cast<Standard_Integer (BVH_BuilderTransient::*)() const>(&BVH_BuilderTransient::MaxTreeDepth),
             R"#(Returns the maximum depth of constructed BVH.)#" )
        .def("LeafNodeSize",
             (Standard_Integer (BVH_BuilderTransient::*)() const) static_cast<Standard_Integer (BVH_BuilderTransient::*)() const>(&BVH_BuilderTransient::LeafNodeSize),
             R"#(Returns the maximum number of sub-elements in the leaf.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BVH_BuilderTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BVH_BuilderTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BVH_ObjectTransient ,opencascade::handle<BVH_ObjectTransient>  , Standard_Transient >>(m.attr("BVH_ObjectTransient"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BVH_ObjectTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BVH_ObjectTransient::*)() const>(&BVH_ObjectTransient::DynamicType),
             R"#(None)#" )
        .def("Properties",
             (const opencascade::handle<BVH_Properties> & (BVH_ObjectTransient::*)() const) static_cast<const opencascade::handle<BVH_Properties> & (BVH_ObjectTransient::*)() const>(&BVH_ObjectTransient::Properties),
             R"#(Returns properties of the geometric object.)#" )
        .def("SetProperties",
             (void (BVH_ObjectTransient::*)( const opencascade::handle<BVH_Properties> &  ) ) static_cast<void (BVH_ObjectTransient::*)( const opencascade::handle<BVH_Properties> &  ) >(&BVH_ObjectTransient::SetProperties),
             R"#(Sets properties of the geometric object.)#"  , py::arg("theProperties"))
        .def("IsDirty",
             (Standard_Boolean (BVH_ObjectTransient::*)() const) static_cast<Standard_Boolean (BVH_ObjectTransient::*)() const>(&BVH_ObjectTransient::IsDirty),
             R"#(Returns TRUE if object state should be updated.)#" )
        .def("MarkDirty",
             (void (BVH_ObjectTransient::*)() ) static_cast<void (BVH_ObjectTransient::*)() >(&BVH_ObjectTransient::MarkDirty),
             R"#(Marks object state as outdated (needs BVH rebuilding).)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BVH_ObjectTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BVH_ObjectTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BVH_Properties ,opencascade::handle<BVH_Properties> ,Py_BVH_Properties , Standard_Transient >>(m.attr("BVH_Properties"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BVH_Properties::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BVH_Properties::*)() const>(&BVH_Properties::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BVH_Properties::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BVH_Properties::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<BVH_TreeBaseTransient ,opencascade::handle<BVH_TreeBaseTransient>  , Standard_Transient >>(m.attr("BVH_TreeBaseTransient"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BVH_TreeBaseTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BVH_TreeBaseTransient::*)() const>(&BVH_TreeBaseTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BVH_TreeBaseTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BVH_TreeBaseTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/BVH_DistanceField.hxx
// ./opencascade/BVH_BuildQueue.hxx
// ./opencascade/BVH_BinnedBuilder.hxx
// ./opencascade/BVH_Constants.hxx
// ./opencascade/BVH_SweepPlaneBuilder.hxx
// ./opencascade/BVH_Object.hxx
// ./opencascade/BVH_Set.hxx
// ./opencascade/BVH_Tree.hxx
// ./opencascade/BVH_QuadTree.hxx
// ./opencascade/BVH_SpatialMedianBuilder.hxx
// ./opencascade/BVH_Triangulation.hxx
// ./opencascade/BVH_BinaryTree.hxx
// ./opencascade/BVH_Box.hxx
// ./opencascade/BVH_QuickSorter.hxx
// ./opencascade/BVH_PrimitiveSet.hxx
// ./opencascade/BVH_Geometry.hxx
// ./opencascade/BVH_Sorter.hxx
// ./opencascade/BVH_QueueBuilder.hxx
// ./opencascade/BVH_Properties.hxx
// ./opencascade/BVH_PrimitiveSet3d.hxx
// ./opencascade/BVH_ObjectSet.hxx
// ./opencascade/BVH_LinearBuilder.hxx
// ./opencascade/BVH_BuildThread.hxx
// ./opencascade/BVH_Builder.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
