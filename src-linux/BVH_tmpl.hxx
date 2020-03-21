#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <BVH_SpatialMedianBuilder.hxx>
#include <BVH_Tree.hxx>
#include <BVH_Object.hxx>
#include <BVH_QuadTree.hxx>
#include <BVH_Tools.hxx>
#include <BVH_Geometry.hxx>
#include <BVH_PairDistance.hxx>
#include <BVH_Box.hxx>
#include <BVH_Builder.hxx>
#include <BVH_SweepPlaneBuilder.hxx>
#include <BVH_Traverse.hxx>
#include <BVH_BinnedBuilder.hxx>
#include <BVH_PrimitiveSet3d.hxx>
#include <BVH_QuickSorter.hxx>
#include <BVH_Distance.hxx>
#include <BVH_Properties.hxx>
#include <BVH_ObjectSet.hxx>
#include <BVH_Constants.hxx>
#include <BVH_PrimitiveSet.hxx>
#include <BVH_BuildQueue.hxx>
#include <BVH_LinearBuilder.hxx>
#include <BVH_Set.hxx>
#include <BVH_BinaryTree.hxx>
#include <BVH_Sorter.hxx>
#include <BVH_BuildThread.hxx>
#include <BVH_QueueBuilder.hxx>
#include <BVH_DistanceField.hxx>
#include <BVH_BoxSet.hxx>
#include <BVH_Triangulation.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BVH_SpatialMedianBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_SpatialMedianBuilder(py::object &m, const char *name){
    py::class_<BVH_SpatialMedianBuilder<T,N> , shared_ptr<BVH_SpatialMedianBuilder<T,N>> >(m,name,R"#(Performs building of BVH tree using spatial median split algorithm.)#");
}

template <typename T,int N>
void register_template_BVH_SpatialMedianBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_SpatialMedianBuilder<T,N> , shared_ptr<BVH_SpatialMedianBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Boolean >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth),  py::arg("theToUseMainAxis")=static_cast<const Standard_Boolean>(Standard_False) )
    ;
};
// ./opencascade/BVH_Tree.hxx

template <typename T,int N>
void preregister_template_BVH_TreeBase(py::object &m, const char *name){
    py::class_<BVH_TreeBase<T,N> , shared_ptr<BVH_TreeBase<T,N>> >(m,name,R"#(Stores parameters of bounding volume hierarchy (BVH). Bounding volume hierarchy (BVH) organizes geometric objects in the tree based on spatial relationships. Each node in the tree contains an axis-aligned bounding box of all the objects below it. Bounding volume hierarchies are used in many algorithms to support efficient operations on the sets of geometric objects, such as collision detection, ray-tracing, searching of nearest objects, and view frustum culling.)#");
}

template <typename T,int N>
void register_template_BVH_TreeBase(py::object &m, const char *name){
    static_cast<py::class_<BVH_TreeBase<T,N> , shared_ptr<BVH_TreeBase<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Depth",
             (int (BVH_TreeBase<T,N>::*)() const) &BVH_TreeBase<T,N>::Depth,
             R"#(Returns depth (height) of BVH tree.)#" )
        .def("Length",
             (int (BVH_TreeBase<T,N>::*)() const) &BVH_TreeBase<T,N>::Length,
             R"#(Returns total number of BVH tree nodes.)#" )
        .def("BegPrimitive",
             (int & (BVH_TreeBase<T,N>::*)( const int ) ) &BVH_TreeBase<T,N>::BegPrimitive,
             R"#(Returns index of first primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("EndPrimitive",
             (int & (BVH_TreeBase<T,N>::*)( const int ) ) &BVH_TreeBase<T,N>::EndPrimitive,
             R"#(Returns index of last primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("BegPrimitive",
             (int (BVH_TreeBase<T,N>::*)( const int ) const) &BVH_TreeBase<T,N>::BegPrimitive,
             R"#(Returns index of first primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("EndPrimitive",
             (int (BVH_TreeBase<T,N>::*)( const int ) const) &BVH_TreeBase<T,N>::EndPrimitive,
             R"#(Returns index of last primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("NbPrimitives",
             (int (BVH_TreeBase<T,N>::*)( const int ) const) &BVH_TreeBase<T,N>::NbPrimitives,
             R"#(Returns number of primitives in the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("Level",
             (int & (BVH_TreeBase<T,N>::*)( const int ) ) &BVH_TreeBase<T,N>::Level,
             R"#(Returns level (depth) of the given node.)#"  , py::arg("theNodeIndex"))
        .def("Level",
             (int (BVH_TreeBase<T,N>::*)( const int ) const) &BVH_TreeBase<T,N>::Level,
             R"#(Returns level (depth) of the given node.)#"  , py::arg("theNodeIndex"))
        .def("IsOuter",
             (bool (BVH_TreeBase<T,N>::*)( const int ) const) &BVH_TreeBase<T,N>::IsOuter,
             R"#(Checks whether the given node is outer.)#"  , py::arg("theNodeIndex"))
        .def("NodeInfoBuffer",
             (BVH_Array4i & (BVH_TreeBase<T,N>::*)() ) &BVH_TreeBase<T,N>::NodeInfoBuffer,
             R"#(Returns array of node data records.)#" )
        .def("NodeInfoBuffer",
             (const BVH_Array4i & (BVH_TreeBase<T,N>::*)() const) &BVH_TreeBase<T,N>::NodeInfoBuffer,
             R"#(Returns array of node data records.)#" )
        .def("MinPointBuffer",
             (typename BVH::ArrayType<T, N>::Type & (BVH_TreeBase<T,N>::*)() ) &BVH_TreeBase<T,N>::MinPointBuffer,
             R"#(Returns array of node minimum points.)#" )
        .def("MaxPointBuffer",
             (typename BVH::ArrayType<T, N>::Type & (BVH_TreeBase<T,N>::*)() ) &BVH_TreeBase<T,N>::MaxPointBuffer,
             R"#(Returns array of node maximum points.)#" )
        .def("MinPointBuffer",
             (const typename BVH::ArrayType<T, N>::Type & (BVH_TreeBase<T,N>::*)() const) &BVH_TreeBase<T,N>::MinPointBuffer,
             R"#(Returns array of node minimum points.)#" )
        .def("MaxPointBuffer",
             (const typename BVH::ArrayType<T, N>::Type & (BVH_TreeBase<T,N>::*)() const) &BVH_TreeBase<T,N>::MaxPointBuffer,
             R"#(Returns array of node maximum points.)#" )
        .def("DumpJson",
             (void (BVH_TreeBase<T,N>::*)( std::ostream & , const Standard_Integer ) const) &BVH_TreeBase<T,N>::DumpJson,
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("DumpNode",
             (void (BVH_TreeBase<T,N>::*)( const int , std::ostream & , const Standard_Integer ) const) &BVH_TreeBase<T,N>::DumpNode,
             R"#(Dumps the content of node into the stream)#"  , py::arg("theNodeIndex"),  py::arg("theOStream"),  py::arg("theDepth"))
    ;
};

template <typename T,int N,typename Arity=BVH_BinaryTree>
void preregister_template_BVH_Tree(py::object &m, const char *name){
    py::class_<BVH_Tree<T,N,Arity> , shared_ptr<BVH_Tree<T,N,Arity>> >(m,name,R"#(BVH tree with given arity (2 or 4).)#");
}

template <typename T,int N,typename Arity=BVH_BinaryTree>
void register_template_BVH_Tree(py::object &m, const char *name){
    static_cast<py::class_<BVH_Tree<T,N,Arity> , shared_ptr<BVH_Tree<T,N,Arity>> >>(m.attr(name))
    ;
};
// ./opencascade/BVH_Object.hxx

template <typename T,int N>
void preregister_template_BVH_Object(py::object &m, const char *name){
    py::class_<BVH_Object<T,N> , shared_ptr<BVH_Object<T,N>> >(m,name,R"#(Abstract geometric object bounded by BVH box.)#");
}

template <typename T,int N>
void register_template_BVH_Object(py::object &m, const char *name){
    static_cast<py::class_<BVH_Object<T,N> , shared_ptr<BVH_Object<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Box",
             (BVH_Box<T, N> (BVH_Object<T,N>::*)() const) &BVH_Object<T,N>::Box,
             R"#(Returns AABB of the geometric object.)#" )
    ;
};
// ./opencascade/BVH_QuadTree.hxx
// ./opencascade/BVH_Tools.hxx

template <typename T,int N>
void preregister_template_BVH_Tools(py::object &m, const char *name){
    py::class_<BVH_Tools<T,N> , shared_ptr<BVH_Tools<T,N>> >(m,name,R"#(Defines a set of static methods operating with points and bounding boxes.)#");
}

template <typename T,int N>
void register_template_BVH_Tools(py::object &m, const char *name){
    static_cast<py::class_<BVH_Tools<T,N> , shared_ptr<BVH_Tools<T,N>> >>(m.attr(name))
        .def_static("BoxBoxSquareDistance_s",
                    (T (*)( const BVH_Box<T, N> & , const BVH_Box<T, N> & ) ) &BVH_Tools<T,N>::BoxBoxSquareDistance,
                    R"#(Computes Square distance between Axis aligned bounding boxes)#"  , py::arg("theBox1"),  py::arg("theBox2"))
        .def_static("BoxBoxSquareDistance_s",
                    (T (*)(  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ) ) &BVH_Tools<T,N>::BoxBoxSquareDistance,
                    R"#(Computes Square distance between Axis aligned bounding boxes)#"  , py::arg("theCMin1"),  py::arg("theCMax1"),  py::arg("theCMin2"),  py::arg("theCMax2"))
        .def_static("PointBoxSquareDistance_s",
                    (T (*)(  const typename BVH::VectorType<T, N>::Type & , const BVH_Box<T, N> & ) ) &BVH_Tools<T,N>::PointBoxSquareDistance,
                    R"#(Computes square distance between point and bounding box)#"  , py::arg("thePoint"),  py::arg("theBox"))
        .def_static("PointBoxSquareDistance_s",
                    (T (*)(  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ) ) &BVH_Tools<T,N>::PointBoxSquareDistance,
                    R"#(Computes square distance between point and bounding box)#"  , py::arg("thePoint"),  py::arg("theCMin"),  py::arg("theCMax"))
        .def_static("PointTriangleSquareDistance_s",
                    (T (*)(  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ) ) &BVH_Tools<T,N>::PointTriangleSquareDistance,
                    R"#(Computes square distance between point and triangle)#"  , py::arg("thePoint"),  py::arg("theNode0"),  py::arg("theNode1"),  py::arg("theNode2"))
    ;
};
// ./opencascade/BVH_Geometry.hxx

template <typename T,int N>
void preregister_template_BVH_Geometry(py::object &m, const char *name){
    py::class_<BVH_Geometry<T,N> , shared_ptr<BVH_Geometry<T,N>> >(m,name,R"#(BVH geometry as a set of abstract geometric objects organized with bounding volume hierarchy (BVH).)#");
}

template <typename T,int N>
void register_template_BVH_Geometry(py::object &m, const char *name){
    static_cast<py::class_<BVH_Geometry<T,N> , shared_ptr<BVH_Geometry<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BVH_Builder<T, N> > & >()  , py::arg("theBuilder") )
        .def("IsDirty",
             (Standard_Boolean (BVH_Geometry<T,N>::*)() const) &BVH_Geometry<T,N>::IsDirty,
             R"#(Returns TRUE if geometry state should be updated.)#" )
        .def("MarkDirty",
             (void (BVH_Geometry<T,N>::*)() ) &BVH_Geometry<T,N>::MarkDirty,
             R"#(Marks geometry as outdated.)#" )
        .def("Box",
             (BVH_Box<T, N> (BVH_Geometry<T,N>::*)() const) &BVH_Geometry<T,N>::Box,
             R"#(Returns AABB of the whole geometry.)#" )
        .def("BVH",
             (const opencascade::handle<BVH_Tree<T, N> > & (BVH_Geometry<T,N>::*)() ) &BVH_Geometry<T,N>::BVH,
             R"#(Returns BVH tree (and builds it if necessary).)#" )
        .def("Builder",
             (const opencascade::handle<BVH_Builder<T, N> > & (BVH_Geometry<T,N>::*)() const) &BVH_Geometry<T,N>::Builder,
             R"#(Returns the method (builder) used to construct BVH.)#" )
        .def("SetBuilder",
             (void (BVH_Geometry<T,N>::*)( const opencascade::handle<BVH_Builder<T, N> > & ) ) &BVH_Geometry<T,N>::SetBuilder,
             R"#(Sets the method (builder) used to construct BVH.)#"  , py::arg("theBuilder"))
    ;
};
// ./opencascade/BVH_PairDistance.hxx

template <typename NumType,int Dimension,typename BVHSetType>
void preregister_template_BVH_PairDistance(py::object &m, const char *name){
    py::class_<BVH_PairDistance<NumType,Dimension,BVHSetType> , shared_ptr<BVH_PairDistance<NumType,Dimension,BVHSetType>> >(m,name,R"#(Abstract class for computation of the min distance between elements of two BVH trees. To use this class it is required to define only the method *Accept* to compute the distance between elements of the trees.)#");
}

template <typename NumType,int Dimension,typename BVHSetType>
void register_template_BVH_PairDistance(py::object &m, const char *name){
    static_cast<py::class_<BVH_PairDistance<NumType,Dimension,BVHSetType> , shared_ptr<BVH_PairDistance<NumType,Dimension,BVHSetType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("ComputeDistance",
             (NumType (BVH_PairDistance<NumType,Dimension,BVHSetType>::*)() ) &BVH_PairDistance<NumType,Dimension,BVHSetType>::ComputeDistance,
             R"#(Computes the distance between two BVH trees)#" )
        .def("IsDone",
             (Standard_Boolean (BVH_PairDistance<NumType,Dimension,BVHSetType>::*)() const) &BVH_PairDistance<NumType,Dimension,BVHSetType>::IsDone,
             R"#(Returns IsDone flag)#" )
        .def("Distance",
             (NumType (BVH_PairDistance<NumType,Dimension,BVHSetType>::*)() const) &BVH_PairDistance<NumType,Dimension,BVHSetType>::Distance,
             R"#(Returns the computed distance)#" )
        .def("IsMetricBetter",
             (Standard_Boolean (BVH_PairDistance<NumType,Dimension,BVHSetType>::*)( const NumType & , const NumType & ) const) &BVH_PairDistance<NumType,Dimension,BVHSetType>::IsMetricBetter,
             R"#(Compares the two metrics and chooses the best one)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("RejectNode",
             (Standard_Boolean (BVH_PairDistance<NumType,Dimension,BVHSetType>::*)(  const typename BVH_Tools<NumType, Dimension>::BVH_VecNt & ,  const typename BVH_Tools<NumType, Dimension>::BVH_VecNt & ,  const typename BVH_Tools<NumType, Dimension>::BVH_VecNt & ,  const typename BVH_Tools<NumType, Dimension>::BVH_VecNt & , NumType & ) const) &BVH_PairDistance<NumType,Dimension,BVHSetType>::RejectNode,
             R"#(Computes the distance between boxes of the nodes)#"  , py::arg("theCornerMin1"),  py::arg("theCornerMax1"),  py::arg("theCornerMin2"),  py::arg("theCornerMax2"),  py::arg("theMetric"))
        .def("RejectMetric",
             (Standard_Boolean (BVH_PairDistance<NumType,Dimension,BVHSetType>::*)( const NumType & ) const) &BVH_PairDistance<NumType,Dimension,BVHSetType>::RejectMetric,
             R"#(Rejects the branch by the metric)#"  , py::arg("theMetric"))
        .def("Stop",
             (Standard_Boolean (BVH_PairDistance<NumType,Dimension,BVHSetType>::*)() const) &BVH_PairDistance<NumType,Dimension,BVHSetType>::Stop,
             R"#(Returns the flag controlling the tree descend)#" )
    ;
};
// ./opencascade/BVH_Box.hxx

template <typename T,int N>
void preregister_template_BVH_Box(py::object &m, const char *name){
    py::class_<BVH_Box<T,N> , shared_ptr<BVH_Box<T,N>> >(m,name,R"#(Defines axis aligned bounding box (AABB) based on BVH vectors.)#");
}

template <typename T,int N>
void register_template_BVH_Box(py::object &m, const char *name){
    static_cast<py::class_<BVH_Box<T,N> , shared_ptr<BVH_Box<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init<  const typename BVH::VectorType<T, N>::Type & >()  , py::arg("thePoint") )
        .def(py::init< const BVH_Box<T, N> & >()  , py::arg("theBox") )
        .def(py::init<  const typename BVH::VectorType<T, N>::Type &, const typename BVH::VectorType<T, N>::Type & >()  , py::arg("theMinPoint"),  py::arg("theMaxPoint") )
        .def("Clear",
             (void (BVH_Box<T,N>::*)() ) &BVH_Box<T,N>::Clear,
             R"#(Clears bounding box.)#" )
        .def("IsValid",
             (Standard_Boolean (BVH_Box<T,N>::*)() const) &BVH_Box<T,N>::IsValid,
             R"#(Is bounding box valid?)#" )
        .def("Add",
             (void (BVH_Box<T,N>::*)(  const typename BVH::VectorType<T, N>::Type & ) ) &BVH_Box<T,N>::Add,
             R"#(Appends new point to the bounding box.)#"  , py::arg("thePoint"))
        .def("Combine",
             (void (BVH_Box<T,N>::*)( const BVH_Box<T, N> & ) ) &BVH_Box<T,N>::Combine,
             R"#(Combines bounding box with another one.)#"  , py::arg("theBox"))
        .def("Area",
             (T (BVH_Box<T,N>::*)() const) &BVH_Box<T,N>::Area,
             R"#(Returns surface area of bounding box. If the box is degenerated into line, returns the perimeter instead.)#" )
        .def("Center",
             (T (BVH_Box<T,N>::*)( const Standard_Integer ) const) &BVH_Box<T,N>::Center,
             R"#(Returns center of bounding box along the given axis.)#"  , py::arg("theAxis"))
        .def("DumpJson",
             (void (BVH_Box<T,N>::*)( std::ostream & , const Standard_Integer ) const) &BVH_Box<T,N>::DumpJson,
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("IsOut",
             (Standard_Boolean (BVH_Box<T,N>::*)( const BVH_Box<T, N> & ) const) &BVH_Box<T,N>::IsOut,
             R"#(Checks if the Box is out of the other box.)#"  , py::arg("theOther"))
        .def("IsOut",
             (Standard_Boolean (BVH_Box<T,N>::*)(  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & ) const) &BVH_Box<T,N>::IsOut,
             R"#(Checks if the Box is out of the other box defined by two points.)#"  , py::arg("theMinPoint"),  py::arg("theMaxPoint"))
        .def("Contains",
             (Standard_Boolean (BVH_Box<T,N>::*)( const BVH_Box<T, N> & , Standard_Boolean & ) const) &BVH_Box<T,N>::Contains,
             R"#(Checks if the Box fully contains the other box.)#"  , py::arg("theOther"),  py::arg("hasOverlap"))
        .def("Contains",
             (Standard_Boolean (BVH_Box<T,N>::*)(  const typename BVH::VectorType<T, N>::Type & ,  const typename BVH::VectorType<T, N>::Type & , Standard_Boolean & ) const) &BVH_Box<T,N>::Contains,
             R"#(Checks if the Box is fully contains the other box.)#"  , py::arg("theMinPoint"),  py::arg("theMaxPoint"),  py::arg("hasOverlap"))
        .def("IsOut",
             (Standard_Boolean (BVH_Box<T,N>::*)(  const typename BVH::VectorType<T, N>::Type & ) const) &BVH_Box<T,N>::IsOut,
             R"#(Checks if the Point is out of the box.)#"  , py::arg("thePoint"))
    ;
};
// ./opencascade/BVH_Builder.hxx

template <typename T,int N>
void preregister_template_BVH_Builder(py::object &m, const char *name){
    py::class_<BVH_Builder<T,N> , shared_ptr<BVH_Builder<T,N>> >(m,name,R"#(Performs construction of BVH tree using bounding boxes (AABBs) of abstract objects.)#");
}

template <typename T,int N>
void register_template_BVH_Builder(py::object &m, const char *name){
    static_cast<py::class_<BVH_Builder<T,N> , shared_ptr<BVH_Builder<T,N>> >>(m.attr(name))
        .def("Build",
             (void (BVH_Builder<T,N>::*)( BVH_Set<T, N> * , BVH_Tree<T, N> * , const BVH_Box<T, N> & ) const) &BVH_Builder<T,N>::Build,
             R"#(Builds BVH using specific algorithm.)#"  , py::arg("theSet"),  py::arg("theBVH"),  py::arg("theBox"))
    ;
};
// ./opencascade/BVH_SweepPlaneBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_SweepPlaneBuilder(py::object &m, const char *name){
    py::class_<BVH_SweepPlaneBuilder<T,N> , shared_ptr<BVH_SweepPlaneBuilder<T,N>> >(m,name,R"#(Performs building of BVH tree using sweep plane SAH algorithm.)#");
}

template <typename T,int N>
void register_template_BVH_SweepPlaneBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_SweepPlaneBuilder<T,N> , shared_ptr<BVH_SweepPlaneBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth),  py::arg("theNumOfThreads")=static_cast<const Standard_Integer>(1) )
    ;
};
// ./opencascade/BVH_Traverse.hxx

template <typename MetricType>
void preregister_template_BVH_BaseTraverse(py::object &m, const char *name){
    py::class_<BVH_BaseTraverse<MetricType> , shared_ptr_nodelete<BVH_BaseTraverse<MetricType>> >(m,name,R"#(Abstract class implementing the base Traverse interface required for selection of the elements from BVH tree.)#");
}

template <typename MetricType>
void register_template_BVH_BaseTraverse(py::object &m, const char *name){
    static_cast<py::class_<BVH_BaseTraverse<MetricType> , shared_ptr_nodelete<BVH_BaseTraverse<MetricType>> >>(m.attr(name))
        .def("IsMetricBetter",
             (Standard_Boolean (BVH_BaseTraverse<MetricType>::*)( const MetricType & , const MetricType & ) const) &BVH_BaseTraverse<MetricType>::IsMetricBetter,
             R"#(Compares the two metrics and chooses the best one. Returns true if the first metric is better than the second, false otherwise.)#"  , py::arg(""),  py::arg(""))
        .def("RejectMetric",
             (Standard_Boolean (BVH_BaseTraverse<MetricType>::*)( const MetricType & ) const) &BVH_BaseTraverse<MetricType>::RejectMetric,
             R"#(Rejects the node by the metric)#"  , py::arg(""))
        .def("Stop",
             (Standard_Boolean (BVH_BaseTraverse<MetricType>::*)() const) &BVH_BaseTraverse<MetricType>::Stop,
             R"#(Returns the flag controlling the tree descend. Returns true if the tree descend should be stopped.)#" )
    ;
};

template <typename NumType,int Dimension,typename BVHSetType,typename MetricType=NumType>
void preregister_template_BVH_Traverse(py::object &m, const char *name){
    py::class_<BVH_Traverse<NumType,Dimension,BVHSetType,MetricType> , shared_ptr<BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>> >(m,name,R"#(Abstract class implementing the traverse of the single binary tree. Selection of the data from the tree is performed by the rules defined in the Accept/Reject methods. See description of the required methods in the comments above.)#");
}

template <typename NumType,int Dimension,typename BVHSetType,typename MetricType=NumType>
void register_template_BVH_Traverse(py::object &m, const char *name){
    static_cast<py::class_<BVH_Traverse<NumType,Dimension,BVHSetType,MetricType> , shared_ptr<BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("SetBVHSet",
             (void (BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::*)( BVHSetType * ) ) &BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::SetBVHSet,
             R"#(Sets the BVH Set containing the BVH tree)#"  , py::arg("theBVHSet"))
        .def("AcceptMetric",
             (Standard_Boolean (BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::*)( const MetricType & ) const) &BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::AcceptMetric,
             R"#(Basing on the given metric, checks if the whole branch may be accepted without any further checks. Returns true if the metric is accepted, false otherwise.)#"  , py::arg(""))
        .def("RejectNode",
             (Standard_Boolean (BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::*)(  const typename BVH_Box<NumType, Dimension>::BVH_VecNt & ,  const typename BVH_Box<NumType, Dimension>::BVH_VecNt & , MetricType & ) const) &BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::RejectNode,
             R"#(Rejection of the node by bounding box. Metric is computed to choose the best branch. Returns true if the node should be rejected, false otherwise.)#"  , py::arg("theCornerMin"),  py::arg("theCornerMax"),  py::arg("theMetric"))
        .def("Accept",
             (Standard_Boolean (BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::*)( const Standard_Integer , const MetricType & ) ) &BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::Accept,
             R"#(Leaf element acceptance. Metric of the parent leaf-node is passed to avoid the check on the element and accept it unconditionally. Returns true if the element has been accepted, false otherwise.)#"  , py::arg("theIndex"),  py::arg("theMetric"))
        .def("Select",
             (Standard_Integer (BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::*)() ) &BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::Select,
             R"#(Selection of the elements from the BVH tree by the rules defined in Accept/Reject methods. The method requires the BVHSet containing BVH tree to be set. Returns the number of accepted elements.)#" )
        .def("Select",
             (Standard_Integer (BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::*)( const opencascade::handle<BVH_Tree<NumType, Dimension> > & ) ) &BVH_Traverse<NumType,Dimension,BVHSetType,MetricType>::Select,
             R"#(Performs selection of the elements from the BVH tree by the rules defined in Accept/Reject methods. Returns the number of accepted elements.)#"  , py::arg("theBVH"))
    ;
};

template <typename NumType,int Dimension,typename BVHSetType,typename MetricType=NumType>
void preregister_template_BVH_PairTraverse(py::object &m, const char *name){
    py::class_<BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType> , shared_ptr<BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>> >(m,name,R"#(Abstract class implementing the parallel traverse of two binary trees. Selection of the data from the trees is performed by the rules defined in the Accept/Reject methods. See description of the required methods in the comments above.)#");
}

template <typename NumType,int Dimension,typename BVHSetType,typename MetricType=NumType>
void register_template_BVH_PairTraverse(py::object &m, const char *name){
    static_cast<py::class_<BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType> , shared_ptr<BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("SetBVHSets",
             (void (BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::*)( BVHSetType * , BVHSetType * ) ) &BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::SetBVHSets,
             R"#(Sets the BVH Sets containing the BVH trees)#"  , py::arg("theBVHSet1"),  py::arg("theBVHSet2"))
        .def("RejectNode",
             (Standard_Boolean (BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::*)(  const typename BVH_Box<NumType, Dimension>::BVH_VecNt & ,  const typename BVH_Box<NumType, Dimension>::BVH_VecNt & ,  const typename BVH_Box<NumType, Dimension>::BVH_VecNt & ,  const typename BVH_Box<NumType, Dimension>::BVH_VecNt & , MetricType & ) const) &BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::RejectNode,
             R"#(Rejection of the pair of nodes by bounding boxes. Metric is computed to choose the best branch. Returns true if the pair of nodes should be rejected, false otherwise.)#"  , py::arg("theCornerMin1"),  py::arg("theCornerMax1"),  py::arg("theCornerMin2"),  py::arg("theCornerMax2"),  py::arg("theMetric"))
        .def("Accept",
             (Standard_Boolean (BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::*)( const Standard_Integer , const Standard_Integer ) ) &BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::Accept,
             R"#(Leaf element acceptance. Returns true if the pair of elements is accepted, false otherwise.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("Select",
             (Standard_Integer (BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::*)() ) &BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::Select,
             R"#(Selection of the pairs of elements of two BVH trees by the rules defined in Accept/Reject methods. The method requires the BVHSets containing BVH trees to be set. Returns the number of accepted pairs of elements.)#" )
        .def("Select",
             (Standard_Integer (BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::*)( const opencascade::handle<BVH_Tree<NumType, Dimension> > & , const opencascade::handle<BVH_Tree<NumType, Dimension> > & ) ) &BVH_PairTraverse<NumType,Dimension,BVHSetType,MetricType>::Select,
             R"#(Performs selection of the elements from two BVH trees by the rules defined in Accept/Reject methods. Returns the number of accepted pairs of elements.)#"  , py::arg("theBVH1"),  py::arg("theBVH2"))
    ;
};
// ./opencascade/BVH_BinnedBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_Bin(py::object &m, const char *name){
    py::class_<BVH_Bin<T,N> , shared_ptr<BVH_Bin<T,N>> >(m,name,R"#(Stores parameters of single bin (slice of AABB).)#");
}

template <typename T,int N>
void register_template_BVH_Bin(py::object &m, const char *name){
    static_cast<py::class_<BVH_Bin<T,N> , shared_ptr<BVH_Bin<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
    ;
};

template <typename T,int N,int Bins=BVH_Constants_NbBinsOptimal>
void preregister_template_BVH_BinnedBuilder(py::object &m, const char *name){
    py::class_<BVH_BinnedBuilder<T,N,Bins> , shared_ptr<BVH_BinnedBuilder<T,N,Bins>> >(m,name,R"#(Performs construction of BVH tree using binned SAH algorithm. Number of bins controls BVH quality in cost of construction time (greater - better). For optimal results, use 32 - 48 bins. However, reasonable performance is provided even for 4 - 8 bins (it is only 10-20% lower in comparison with optimal settings). Note that multiple threads can be used only with thread safe BVH primitive sets.)#");
}

template <typename T,int N,int Bins=BVH_Constants_NbBinsOptimal>
void register_template_BVH_BinnedBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_BinnedBuilder<T,N,Bins> , shared_ptr<BVH_BinnedBuilder<T,N,Bins>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Integer >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth),  py::arg("theDoMainSplits")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theNumOfThreads")=static_cast<const Standard_Integer>(1) )
    ;
};
// ./opencascade/BVH_PrimitiveSet3d.hxx
// ./opencascade/BVH_QuickSorter.hxx

template <typename T,int N>
void preregister_template_BVH_QuickSorter(py::object &m, const char *name){
    py::class_<BVH_QuickSorter<T,N> , shared_ptr<BVH_QuickSorter<T,N>> >(m,name,R"#(Performs centroid-based sorting of abstract set along the given axis (X - 0, Y - 1, Z - 2) using quick sort.)#");
}

template <typename T,int N>
void register_template_BVH_QuickSorter(py::object &m, const char *name){
    static_cast<py::class_<BVH_QuickSorter<T,N> , shared_ptr<BVH_QuickSorter<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer >()  , py::arg("theAxis")=static_cast<const Standard_Integer>(0) )
        .def("Perform",
             (void (BVH_QuickSorter<T,N>::*)( BVH_Set<T, N> * ) ) &BVH_QuickSorter<T,N>::Perform,
             R"#(Sorts the set.)#"  , py::arg("theSet"))
        .def("Perform",
             (void (BVH_QuickSorter<T,N>::*)( BVH_Set<T, N> * , const Standard_Integer , const Standard_Integer ) ) &BVH_QuickSorter<T,N>::Perform,
             R"#(Sorts the given (inclusive) range in the set.)#"  , py::arg("theSet"),  py::arg("theStart"),  py::arg("theFinal"))
    ;
};
// ./opencascade/BVH_Distance.hxx

template <typename NumType,int Dimension,typename ObjectType,typename BVHSetType>
void preregister_template_BVH_Distance(py::object &m, const char *name){
    py::class_<BVH_Distance<NumType,Dimension,ObjectType,BVHSetType> , shared_ptr<BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>> >(m,name,R"#(Abstract class for computation of the min distance between some Object and elements of BVH tree. To use this class it is required to define two methods: - *RejectNode* to compute distance from the object to bounding box - *Accept* to compute distance from the object to the element of tree)#");
}

template <typename NumType,int Dimension,typename ObjectType,typename BVHSetType>
void register_template_BVH_Distance(py::object &m, const char *name){
    static_cast<py::class_<BVH_Distance<NumType,Dimension,ObjectType,BVHSetType> , shared_ptr<BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("SetObject",
             (void (BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::*)( const ObjectType & ) ) &BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::SetObject,
             R"#(Sets the object to which the distance is required)#"  , py::arg("theObject"))
        .def("ComputeDistance",
             (NumType (BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::*)() ) &BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::ComputeDistance,
             R"#(Computes the distance between object and BVH tree)#" )
        .def("IsDone",
             (Standard_Boolean (BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::*)() const) &BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::IsDone,
             R"#(Returns IsDone flag)#" )
        .def("Distance",
             (NumType (BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::*)() const) &BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::Distance,
             R"#(Returns the computed distance)#" )
        .def("IsMetricBetter",
             (Standard_Boolean (BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::*)( const NumType & , const NumType & ) const) &BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::IsMetricBetter,
             R"#(Compares the two metrics and chooses the best one)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("RejectMetric",
             (Standard_Boolean (BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::*)( const NumType & ) const) &BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::RejectMetric,
             R"#(Rejects the branch by the metric)#"  , py::arg("theMetric"))
        .def("Stop",
             (Standard_Boolean (BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::*)() const) &BVH_Distance<NumType,Dimension,ObjectType,BVHSetType>::Stop,
             R"#(Returns the flag controlling the tree descend)#" )
    ;
};
// ./opencascade/BVH_Properties.hxx

template <typename T,int N>
void preregister_template_BVH_Transform(py::object &m, const char *name){
    py::class_<BVH_Transform<T,N> , shared_ptr<BVH_Transform<T,N>> >(m,name,R"#(Stores transform properties of geometric object.)#");
}

template <typename T,int N>
void register_template_BVH_Transform(py::object &m, const char *name){
    static_cast<py::class_<BVH_Transform<T,N> , shared_ptr<BVH_Transform<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init<  const typename BVH::MatrixType<T, N>::Type & >()  , py::arg("theTransform") )
        .def("SetTransform",
             (void (BVH_Transform<T,N>::*)(  const typename BVH::MatrixType<T, N>::Type & ) ) &BVH_Transform<T,N>::SetTransform,
             R"#(Sets new transformation matrix.)#"  , py::arg("theTransform"))
        .def("Apply",
             (BVH_Box<T, N> (BVH_Transform<T,N>::*)( const BVH_Box<T, N> & ) const) &BVH_Transform<T,N>::Apply,
             R"#(Applies transformation matrix to bounding box.)#"  , py::arg("theBox"))
    ;
};
// ./opencascade/BVH_ObjectSet.hxx

template <typename T,int N>
void preregister_template_BVH_ObjectSet(py::object &m, const char *name){
    py::class_<BVH_ObjectSet<T,N> , shared_ptr<BVH_ObjectSet<T,N>> >(m,name,R"#(Array of abstract entities (bounded by BVH boxes) to built BVH.)#");
}

template <typename T,int N>
void register_template_BVH_ObjectSet(py::object &m, const char *name){
    static_cast<py::class_<BVH_ObjectSet<T,N> , shared_ptr<BVH_ObjectSet<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BVH_ObjectSet<T,N>::*)() ) &BVH_ObjectSet<T,N>::Clear,
             R"#(Removes all geometric objects.)#" )
        .def("Size",
             (Standard_Integer (BVH_ObjectSet<T,N>::*)() const) &BVH_ObjectSet<T,N>::Size,
             R"#(Return total number of objects.)#" )
        .def("Box",
             (BVH_Box<T, N> (BVH_ObjectSet<T,N>::*)( const Standard_Integer ) const) &BVH_ObjectSet<T,N>::Box,
             R"#(Returns AABB of the given object.)#"  , py::arg("theIndex"))
        .def("Center",
             (T (BVH_ObjectSet<T,N>::*)( const Standard_Integer , const Standard_Integer ) const) &BVH_ObjectSet<T,N>::Center,
             R"#(Returns centroid position along the given axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (BVH_ObjectSet<T,N>::*)( const Standard_Integer , const Standard_Integer ) ) &BVH_ObjectSet<T,N>::Swap,
             R"#(Performs transposing the two given objects in the set.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
    ;
};
// ./opencascade/BVH_Constants.hxx
// ./opencascade/BVH_PrimitiveSet.hxx

template <typename T,int N>
void preregister_template_BVH_PrimitiveSet(py::object &m, const char *name){
    py::class_<BVH_PrimitiveSet<T,N> , shared_ptr<BVH_PrimitiveSet<T,N>> >(m,name,R"#(Set of abstract geometric primitives organized with bounding volume hierarchy (BVH). Unlike an object set, this collection is designed for storing structural elements of a single object (such as triangles in the object triangulation). Because there may be a large number of such elements, the implementations of this interface should be sufficiently optimized.)#");
}

template <typename T,int N>
void register_template_BVH_PrimitiveSet(py::object &m, const char *name){
    static_cast<py::class_<BVH_PrimitiveSet<T,N> , shared_ptr<BVH_PrimitiveSet<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BVH_Builder<T, N> > & >()  , py::arg("theBuilder") )
        .def("Box",
             (BVH_Box<T, N> (BVH_PrimitiveSet<T,N>::*)() const) &BVH_PrimitiveSet<T,N>::Box,
             R"#(Returns AABB of primitive set.)#" )
        .def("BVH",
             (const opencascade::handle<BVH_Tree<T, N> > & (BVH_PrimitiveSet<T,N>::*)() ) &BVH_PrimitiveSet<T,N>::BVH,
             R"#(Returns BVH tree (and builds it if necessary).)#" )
        .def("Builder",
             (const opencascade::handle<BVH_Builder<T, N> > & (BVH_PrimitiveSet<T,N>::*)() const) &BVH_PrimitiveSet<T,N>::Builder,
             R"#(Returns the method (builder) used to construct BVH.)#" )
        .def("SetBuilder",
             (void (BVH_PrimitiveSet<T,N>::*)( const opencascade::handle<BVH_Builder<T, N> > & ) ) &BVH_PrimitiveSet<T,N>::SetBuilder,
             R"#(Sets the method (builder) used to construct BVH.)#"  , py::arg("theBuilder"))
    ;
};
// ./opencascade/BVH_BuildQueue.hxx
// ./opencascade/BVH_LinearBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_LinearBuilder(py::object &m, const char *name){
    py::class_<BVH_LinearBuilder<T,N> , shared_ptr<BVH_LinearBuilder<T,N>> >(m,name,R"#(Performs fast BVH construction using LBVH building approach. Algorithm uses spatial Morton codes to reduce the BVH construction problem to a sorting problem (radix sort -- O(N) complexity). This Linear Bounding Volume Hierarchy (LBVH) builder produces BVH trees of lower quality compared to SAH-based BVH builders but it is over an order of magnitude faster (up to 3M triangles per second).)#");
}

template <typename T,int N>
void register_template_BVH_LinearBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_LinearBuilder<T,N> , shared_ptr<BVH_LinearBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth) )
        .def("Build",
             (void (BVH_LinearBuilder<T,N>::*)( BVH_Set<T, N> * , BVH_Tree<T, N> * , const BVH_Box<T, N> & ) const) &BVH_LinearBuilder<T,N>::Build,
             R"#(Builds BVH.)#"  , py::arg("theSet"),  py::arg("theBVH"),  py::arg("theBox"))
    ;
};
// ./opencascade/BVH_Set.hxx

template <typename T,int N>
void preregister_template_BVH_Set(py::object &m, const char *name){
    py::class_<BVH_Set<T,N> , shared_ptr<BVH_Set<T,N>> >(m,name,R"#(Set of abstract entities (bounded by BVH boxes). This is the minimal geometry interface needed to construct BVH.)#");
}

template <typename T,int N>
void register_template_BVH_Set(py::object &m, const char *name){
    static_cast<py::class_<BVH_Set<T,N> , shared_ptr<BVH_Set<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Box",
             (BVH_Box<T, N> (BVH_Set<T,N>::*)() const) &BVH_Set<T,N>::Box,
             R"#(Returns AABB of the entire set of objects.)#" )
        .def("Size",
             (Standard_Integer (BVH_Set<T,N>::*)() const) &BVH_Set<T,N>::Size,
             R"#(Returns total number of objects.)#" )
        .def("Box",
             (BVH_Box<T, N> (BVH_Set<T,N>::*)( const Standard_Integer ) const) &BVH_Set<T,N>::Box,
             R"#(Returns AABB of the given object.)#"  , py::arg("theIndex"))
        .def("Center",
             (T (BVH_Set<T,N>::*)( const Standard_Integer , const Standard_Integer ) const) &BVH_Set<T,N>::Center,
             R"#(Returns centroid position along the given axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (BVH_Set<T,N>::*)( const Standard_Integer , const Standard_Integer ) ) &BVH_Set<T,N>::Swap,
             R"#(Performs transposing the two given objects in the set.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
    ;
};
// ./opencascade/BVH_BinaryTree.hxx
// ./opencascade/BVH_Sorter.hxx

template <typename T,int N>
void preregister_template_BVH_Sorter(py::object &m, const char *name){
    py::class_<BVH_Sorter<T,N> , shared_ptr<BVH_Sorter<T,N>> >(m,name,R"#(Tool object to sort abstract primitive set.)#");
}

template <typename T,int N>
void register_template_BVH_Sorter(py::object &m, const char *name){
    static_cast<py::class_<BVH_Sorter<T,N> , shared_ptr<BVH_Sorter<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Perform",
             (void (BVH_Sorter<T,N>::*)( BVH_Set<T, N> * ) ) &BVH_Sorter<T,N>::Perform,
             R"#(Sorts the set.)#"  , py::arg("theSet"))
        .def("Perform",
             (void (BVH_Sorter<T,N>::*)( BVH_Set<T, N> * , const Standard_Integer , const Standard_Integer ) ) &BVH_Sorter<T,N>::Perform,
             R"#(Sorts the given (inclusive) range in the set.)#"  , py::arg("theSet"),  py::arg("theStart"),  py::arg("theFinal"))
        .def("IsParallel",
             (Standard_Boolean (BVH_Sorter<T,N>::*)() const) &BVH_Sorter<T,N>::IsParallel,
             R"#(Returns parallel flag.)#" )
        .def("SetParallel",
             (void (BVH_Sorter<T,N>::*)( const Standard_Boolean ) ) &BVH_Sorter<T,N>::SetParallel,
             R"#(Set parallel flag contolling possibility of parallel execution.)#"  , py::arg("isParallel"))
    ;
};
// ./opencascade/BVH_BuildThread.hxx
// ./opencascade/BVH_QueueBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_QueueBuilder(py::object &m, const char *name){
    py::class_<BVH_QueueBuilder<T,N> , shared_ptr<BVH_QueueBuilder<T,N>> >(m,name,R"#(Abstract BVH builder based on the concept of work queue. Queue based BVH builders support parallelization with a fixed number of threads (maximum efficiency is achieved by setting the number of threads equal to the number of CPU cores plus one). Note that to support parallel mode, a corresponding BVH primitive set should provide thread safe implementations of interface functions (e.g., Swap, Box, Center). Otherwise, the results will be undefined.)#");
}

template <typename T,int N>
void register_template_BVH_QueueBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_QueueBuilder<T,N> , shared_ptr<BVH_QueueBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theLeafNodeSize"),  py::arg("theMaxTreeDepth"),  py::arg("theNumOfThreads")=static_cast<const Standard_Integer>(1) )
        .def("Build",
             (void (BVH_QueueBuilder<T,N>::*)( BVH_Set<T, N> * , BVH_Tree<T, N> * , const BVH_Box<T, N> & ) const) &BVH_QueueBuilder<T,N>::Build,
             R"#(Builds BVH using specific algorithm.)#"  , py::arg("theSet"),  py::arg("theBVH"),  py::arg("theBox"))
    ;
};
// ./opencascade/BVH_DistanceField.hxx

template <typename T,int N>
void preregister_template_BVH_ParallelDistanceFieldBuilder(py::object &m, const char *name){
    py::class_<BVH_ParallelDistanceFieldBuilder<T,N> , shared_ptr<BVH_ParallelDistanceFieldBuilder<T,N>> >(m,name,R"#(Tool object for parallel construction of distance field (uses Intel TBB).)#");
}

template <typename T,int N>
void register_template_BVH_ParallelDistanceFieldBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_ParallelDistanceFieldBuilder<T,N> , shared_ptr<BVH_ParallelDistanceFieldBuilder<T,N>> >>(m.attr(name))
        .def(py::init< BVH_DistanceField<T, N> *,BVH_Geometry<T, N> * >()  , py::arg("theOutField"),  py::arg("theGeometry") )
    ;
};

template <typename T,int N>
void preregister_template_BVH_DistanceField(py::object &m, const char *name){
    py::class_<BVH_DistanceField<T,N> , shared_ptr<BVH_DistanceField<T,N>> >(m,name,R"#(Tool object for building 3D distance field from the set of BVH triangulations. Distance field is a scalar field that measures the distance from a given point to some object, including optional information about the inside and outside of the structure. Distance fields are used as alternative surface representations (like polygons or NURBS).)#");
}

template <typename T,int N>
void register_template_BVH_DistanceField(py::object &m, const char *name){
    static_cast<py::class_<BVH_DistanceField<T,N> , shared_ptr<BVH_DistanceField<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Boolean >()  , py::arg("theMaximumSize"),  py::arg("theComputeSign") )
        .def("Build",
             (Standard_Boolean (BVH_DistanceField<T,N>::*)( BVH_Geometry<T, N> & ) ) &BVH_DistanceField<T,N>::Build,
             R"#(Builds 3D distance field from BVH geometry.)#"  , py::arg("theGeometry"))
        .def("IsParallel",
             (Standard_Boolean (BVH_DistanceField<T,N>::*)() const) &BVH_DistanceField<T,N>::IsParallel,
             R"#(Returns parallel flag.)#" )
        .def("SetParallel",
             (void (BVH_DistanceField<T,N>::*)( const Standard_Boolean ) ) &BVH_DistanceField<T,N>::SetParallel,
             R"#(Set parallel flag contolling possibility of parallel execution.)#"  , py::arg("isParallel"))
        .def("PackedData",
             (const T * (BVH_DistanceField<T,N>::*)() const) &BVH_DistanceField<T,N>::PackedData,
             R"#(Returns packed voxel data.)#" )
        .def("Voxel",
             (T & (BVH_DistanceField<T,N>::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) &BVH_DistanceField<T,N>::Voxel,
             R"#(Returns distance value for the given voxel.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("Voxel",
             (T (BVH_DistanceField<T,N>::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) const) &BVH_DistanceField<T,N>::Voxel,
             R"#(Returns distance value for the given voxel.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("DimensionX",
             (Standard_Integer (BVH_DistanceField<T,N>::*)() const) &BVH_DistanceField<T,N>::DimensionX,
             R"#(Returns size of voxel grid in X dimension.)#" )
        .def("DimensionY",
             (Standard_Integer (BVH_DistanceField<T,N>::*)() const) &BVH_DistanceField<T,N>::DimensionY,
             R"#(Returns size of voxel grid in Y dimension.)#" )
        .def("DimensionZ",
             (Standard_Integer (BVH_DistanceField<T,N>::*)() const) &BVH_DistanceField<T,N>::DimensionZ,
             R"#(Returns size of voxel grid in Z dimension.)#" )
    ;
};
// ./opencascade/BVH_BoxSet.hxx

template <typename NumType,int Dimension,typename DataType=Standard_Integer>
void preregister_template_BVH_BoxSet(py::object &m, const char *name){
    py::class_<BVH_BoxSet<NumType,Dimension,DataType> , shared_ptr<BVH_BoxSet<NumType,Dimension,DataType>> >(m,name,R"#(Implements easy to use interfaces for adding the elements into BVH tree and its following construction. To make it more effective it is better to set the number of elements that are going to be added into BVH tree. For better efficiency on heavy data types it is recommended to use either BHV_IndexedBoxSet which uses indirect indexing for accessing the elements and their boxes or set the element to be an index of the real element in the application's internal data structures.)#");
}

template <typename NumType,int Dimension,typename DataType=Standard_Integer>
void register_template_BVH_BoxSet(py::object &m, const char *name){
    static_cast<py::class_<BVH_BoxSet<NumType,Dimension,DataType> , shared_ptr<BVH_BoxSet<NumType,Dimension,DataType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BVH_Builder<NumType, Dimension> > & >()  , py::arg("theBuilder") )
        .def("SetSize",
             (void (BVH_BoxSet<NumType,Dimension,DataType>::*)( const Standard_Size ) ) &BVH_BoxSet<NumType,Dimension,DataType>::SetSize,
             R"#(Sets the expected size of BVH tree)#"  , py::arg("theSize"))
        .def("Add",
             (void (BVH_BoxSet<NumType,Dimension,DataType>::*)( const DataType & , const BVH_Box<NumType, Dimension> & ) ) &BVH_BoxSet<NumType,Dimension,DataType>::Add,
             R"#(Adds the element into BVH)#"  , py::arg("theElement"),  py::arg("theBox"))
        .def("Build",
             (void (BVH_BoxSet<NumType,Dimension,DataType>::*)() ) &BVH_BoxSet<NumType,Dimension,DataType>::Build,
             R"#(BVH construction)#" )
        .def("Clear",
             (void (BVH_BoxSet<NumType,Dimension,DataType>::*)() ) &BVH_BoxSet<NumType,Dimension,DataType>::Clear,
             R"#(Clears the vectors of elements and boxes)#" )
        .def("Box",
             (BVH_Box<NumType, Dimension> (BVH_BoxSet<NumType,Dimension,DataType>::*)( const Standard_Integer ) const) &BVH_BoxSet<NumType,Dimension,DataType>::Box,
             R"#(Returns the bounding box with the given index.)#"  , py::arg("theIndex"))
        .def("Center",
             (Standard_Real (BVH_BoxSet<NumType,Dimension,DataType>::*)( const Standard_Integer , const Standard_Integer ) const) &BVH_BoxSet<NumType,Dimension,DataType>::Center,
             R"#(Returns centroid position along specified axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Size",
             (Standard_Integer (BVH_BoxSet<NumType,Dimension,DataType>::*)() const) &BVH_BoxSet<NumType,Dimension,DataType>::Size,
             R"#(Returns the number of boxes.)#" )
        .def("Swap",
             (void (BVH_BoxSet<NumType,Dimension,DataType>::*)( const Standard_Integer , const Standard_Integer ) ) &BVH_BoxSet<NumType,Dimension,DataType>::Swap,
             R"#(Swaps indices of two specified boxes.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("Element",
             (DataType (BVH_BoxSet<NumType,Dimension,DataType>::*)( const Standard_Integer ) const) &BVH_BoxSet<NumType,Dimension,DataType>::Element,
             R"#(Returns the Element with the index theIndex.)#"  , py::arg("theIndex"))
    ;
};
// ./opencascade/BVH_Triangulation.hxx

template <typename T,int N>
void preregister_template_BVH_Triangulation(py::object &m, const char *name){
    py::class_<BVH_Triangulation<T,N> , shared_ptr<BVH_Triangulation<T,N>> >(m,name,R"#(Triangulation as an example of BVH primitive set.)#");
}

template <typename T,int N>
void register_template_BVH_Triangulation(py::object &m, const char *name){
    static_cast<py::class_<BVH_Triangulation<T,N> , shared_ptr<BVH_Triangulation<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BVH_Builder<T, N> > & >()  , py::arg("theBuilder") )
        .def("Size",
             (Standard_Integer (BVH_Triangulation<T,N>::*)() const) &BVH_Triangulation<T,N>::Size,
             R"#(Returns total number of triangles.)#" )
        .def("Box",
             (BVH_Box<T, N> (BVH_Triangulation<T,N>::*)( const Standard_Integer ) const) &BVH_Triangulation<T,N>::Box,
             R"#(Returns AABB of the given triangle.)#"  , py::arg("theIndex"))
        .def("Center",
             (T (BVH_Triangulation<T,N>::*)( const Standard_Integer , const Standard_Integer ) const) &BVH_Triangulation<T,N>::Center,
             R"#(Returns centroid position along the given axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (BVH_Triangulation<T,N>::*)( const Standard_Integer , const Standard_Integer ) ) &BVH_Triangulation<T,N>::Swap,
             R"#(Performs transposing the two given triangles in the set.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
    ;
};

// user-defined post
