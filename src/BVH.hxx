#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations

// module includes
#include <BVH_Set.hxx>
#include <BVH_LinearBuilder.hxx>
#include <BVH_Properties.hxx>
#include <BVH_Object.hxx>
#include <BVH_DistanceField.hxx>
#include <BVH_SweepPlaneBuilder.hxx>
#include <BVH_BuildThread.hxx>
#include <BVH_Triangulation.hxx>
#include <BVH_SpatialMedianBuilder.hxx>
#include <BVH_BinnedBuilder.hxx>
#include <BVH_Sorter.hxx>
#include <BVH_Geometry.hxx>
#include <BVH_PrimitiveSet3d.hxx>
#include <BVH_BuildQueue.hxx>
#include <BVH_BinaryTree.hxx>
#include <BVH_PrimitiveSet.hxx>
#include <BVH_QuadTree.hxx>
#include <BVH_QuickSorter.hxx>
#include <BVH_Constants.hxx>
#include <BVH_Builder.hxx>
#include <BVH_ObjectSet.hxx>
#include <BVH_QueueBuilder.hxx>
#include <BVH_Tree.hxx>
#include <BVH_Box.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/BVH_Set.hxx

template <typename T,int N>
void preregister_template_BVH_Set(py::object &m, const char *name){
    py::class_<BVH_Set<T,N> ,std::unique_ptr<BVH_Set<T,N>> >(m,name,R"#(Set of abstract entities (bounded by BVH boxes). This is the minimal geometry interface needed to construct BVH.)#");
}

template <typename T,int N>
void register_template_BVH_Set(py::object &m, const char *name){
    static_cast<py::class_<BVH_Set<T,N> ,std::unique_ptr<BVH_Set<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Box",
             (BVH_Box<T, N> (BVH_Set<T,N>::*)() const) &BVH_Set<T,N>::Box,
             R"#(Returns AABB of the entire set of objects.)#" )
        .def("Size",
             (Standard_Integer (BVH_Set<T,N>::*)() const) &BVH_Set<T,N>::Size,
             R"#(Returns total number of objects.)#" )
        .def("Box",
             (BVH_Box<T, N> (BVH_Set<T,N>::*)( const Standard_Integer  ) const) &BVH_Set<T,N>::Box,
             R"#(Returns AABB of the given object.)#"  , py::arg("theIndex"))
        .def("Center",
             (T (BVH_Set<T,N>::*)( const Standard_Integer ,  const Standard_Integer  ) const) &BVH_Set<T,N>::Center,
             R"#(Returns centroid position along the given axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (BVH_Set<T,N>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &BVH_Set<T,N>::Swap,
             R"#(Performs transposing the two given objects in the set.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
    ;
};
// ./opencascade/BVH_LinearBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_LinearBuilder(py::object &m, const char *name){
    py::class_<BVH_LinearBuilder<T,N> ,std::unique_ptr<BVH_LinearBuilder<T,N>> >(m,name,R"#(Performs fast BVH construction using LBVH building approach. Algorithm uses spatial Morton codes to reduce the BVH construction problem to a sorting problem (radix sort -- O(N) complexity). This Linear Bounding Volume Hierarchy (LBVH) builder produces BVH trees of lower quality compared to SAH-based BVH builders but it is over an order of magnitude faster (up to 3M triangles per second).)#");
}

template <typename T,int N>
void register_template_BVH_LinearBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_LinearBuilder<T,N> ,std::unique_ptr<BVH_LinearBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth) )
        .def("Build",
             (void (BVH_LinearBuilder<T,N>::*)( BVH_Set<T, N> * ,  BVH_Tree<T, N> * ,  const BVH_Box<T, N> &  ) const) &BVH_LinearBuilder<T,N>::Build,
             R"#(Builds BVH.)#"  , py::arg("theSet"),  py::arg("theBVH"),  py::arg("theBox"))
    ;
};
// ./opencascade/BVH_Properties.hxx

template <typename T,int N>
void preregister_template_BVH_Transform(py::object &m, const char *name){
    py::class_<BVH_Transform<T,N> ,std::unique_ptr<BVH_Transform<T,N>> >(m,name,R"#(Stores transform properties of geometric object.)#");
}

template <typename T,int N>
void register_template_BVH_Transform(py::object &m, const char *name){
    static_cast<py::class_<BVH_Transform<T,N> ,std::unique_ptr<BVH_Transform<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init<  const typename BVH::MatrixType<T, N>::Type & >()  , py::arg("theTransform") )
        .def("SetTransform",
             (void (BVH_Transform<T,N>::*)(  const typename BVH::MatrixType<T, N>::Type &  ) ) &BVH_Transform<T,N>::SetTransform,
             R"#(Sets new transformation matrix.)#"  , py::arg("theTransform"))
        .def("Apply",
             (BVH_Box<T, N> (BVH_Transform<T,N>::*)( const BVH_Box<T, N> &  ) const) &BVH_Transform<T,N>::Apply,
             R"#(Applies transformation matrix to bounding box.)#"  , py::arg("theBox"))
    ;
};
// ./opencascade/BVH_Object.hxx

template <typename T,int N>
void preregister_template_BVH_Object(py::object &m, const char *name){
    py::class_<BVH_Object<T,N> ,std::unique_ptr<BVH_Object<T,N>> >(m,name,R"#(Abstract geometric object bounded by BVH box.)#");
}

template <typename T,int N>
void register_template_BVH_Object(py::object &m, const char *name){
    static_cast<py::class_<BVH_Object<T,N> ,std::unique_ptr<BVH_Object<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Box",
             (BVH_Box<T, N> (BVH_Object<T,N>::*)() const) &BVH_Object<T,N>::Box,
             R"#(Returns AABB of the geometric object.)#" )
    ;
};
// ./opencascade/BVH_DistanceField.hxx

template <typename T,int N>
void preregister_template_BVH_DistanceField(py::object &m, const char *name){
    py::class_<BVH_DistanceField<T,N> ,std::unique_ptr<BVH_DistanceField<T,N>> >(m,name,R"#(Tool object for building 3D distance field from the set of BVH triangulations. Distance field is a scalar field that measures the distance from a given point to some object, including optional information about the inside and outside of the structure. Distance fields are used as alternative surface representations (like polygons or NURBS).)#");
}

template <typename T,int N>
void register_template_BVH_DistanceField(py::object &m, const char *name){
    static_cast<py::class_<BVH_DistanceField<T,N> ,std::unique_ptr<BVH_DistanceField<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Boolean >()  , py::arg("theMaximumSize"),  py::arg("theComputeSign") )
        .def("Build",
             (Standard_Boolean (BVH_DistanceField<T,N>::*)( BVH_Geometry<T, N> &  ) ) &BVH_DistanceField<T,N>::Build,
             R"#(Builds 3D distance field from BVH geometry.)#"  , py::arg("theGeometry"))
        .def("PackedData",
             (const T * (BVH_DistanceField<T,N>::*)() const) &BVH_DistanceField<T,N>::PackedData,
             R"#(Returns packed voxel data.)#" )
        .def("Voxel",
             (T & (BVH_DistanceField<T,N>::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) &BVH_DistanceField<T,N>::Voxel,
             R"#(Returns distance value for the given voxel.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("Voxel",
             (T (BVH_DistanceField<T,N>::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) &BVH_DistanceField<T,N>::Voxel,
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
// ./opencascade/BVH_SweepPlaneBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_SweepPlaneBuilder(py::object &m, const char *name){
    py::class_<BVH_SweepPlaneBuilder<T,N> ,std::unique_ptr<BVH_SweepPlaneBuilder<T,N>> >(m,name,R"#(Performs building of BVH tree using sweep plane SAH algorithm.)#");
}

template <typename T,int N>
void register_template_BVH_SweepPlaneBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_SweepPlaneBuilder<T,N> ,std::unique_ptr<BVH_SweepPlaneBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth),  py::arg("theNumOfThreads")=static_cast<const Standard_Integer>(1) )
    ;
};
// ./opencascade/BVH_BuildThread.hxx
// ./opencascade/BVH_Triangulation.hxx

template <typename T,int N>
void preregister_template_BVH_Triangulation(py::object &m, const char *name){
    py::class_<BVH_Triangulation<T,N> ,std::unique_ptr<BVH_Triangulation<T,N>> >(m,name,R"#(Triangulation as an example of BVH primitive set.)#");
}

template <typename T,int N>
void register_template_BVH_Triangulation(py::object &m, const char *name){
    static_cast<py::class_<BVH_Triangulation<T,N> ,std::unique_ptr<BVH_Triangulation<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BVH_Builder<T, N> > & >()  , py::arg("theBuilder") )
        .def("Size",
             (Standard_Integer (BVH_Triangulation<T,N>::*)() const) &BVH_Triangulation<T,N>::Size,
             R"#(Returns total number of triangles.)#" )
        .def("Box",
             (BVH_Box<T, N> (BVH_Triangulation<T,N>::*)( const Standard_Integer  ) const) &BVH_Triangulation<T,N>::Box,
             R"#(Returns AABB of the given triangle.)#"  , py::arg("theIndex"))
        .def("Center",
             (T (BVH_Triangulation<T,N>::*)( const Standard_Integer ,  const Standard_Integer  ) const) &BVH_Triangulation<T,N>::Center,
             R"#(Returns centroid position along the given axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (BVH_Triangulation<T,N>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &BVH_Triangulation<T,N>::Swap,
             R"#(Performs transposing the two given triangles in the set.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
    ;
};
// ./opencascade/BVH_SpatialMedianBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_SpatialMedianBuilder(py::object &m, const char *name){
    py::class_<BVH_SpatialMedianBuilder<T,N> ,std::unique_ptr<BVH_SpatialMedianBuilder<T,N>> >(m,name,R"#(Performs building of BVH tree using spatial median split algorithm.)#");
}

template <typename T,int N>
void register_template_BVH_SpatialMedianBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_SpatialMedianBuilder<T,N> ,std::unique_ptr<BVH_SpatialMedianBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Boolean >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth),  py::arg("theToUseMainAxis")=static_cast<const Standard_Boolean>(Standard_False) )
    ;
};
// ./opencascade/BVH_BinnedBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_Bin(py::object &m, const char *name){
    py::class_<BVH_Bin<T,N> ,std::unique_ptr<BVH_Bin<T,N>> >(m,name,R"#(Stores parameters of single bin (slice of AABB).)#");
}

template <typename T,int N>
void register_template_BVH_Bin(py::object &m, const char *name){
    static_cast<py::class_<BVH_Bin<T,N> ,std::unique_ptr<BVH_Bin<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
    ;
};

template <typename T,int N,int Bins=BVH_Constants_NbBinsOptimal>
void preregister_template_BVH_BinnedBuilder(py::object &m, const char *name){
    py::class_<BVH_BinnedBuilder<T,N,Bins> ,std::unique_ptr<BVH_BinnedBuilder<T,N,Bins>> >(m,name,R"#(Performs construction of BVH tree using binned SAH algorithm. Number of bins controls BVH quality in cost of construction time (greater - better). For optimal results, use 32 - 48 bins. However, reasonable performance is provided even for 4 - 8 bins (it is only 10-20% lower in comparison with optimal settings). Note that multiple threads can be used only with thread safe BVH primitive sets.)#");
}

template <typename T,int N,int Bins=BVH_Constants_NbBinsOptimal>
void register_template_BVH_BinnedBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_BinnedBuilder<T,N,Bins> ,std::unique_ptr<BVH_BinnedBuilder<T,N,Bins>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Integer >()  , py::arg("theLeafNodeSize")=static_cast<const Standard_Integer>(BVH_Constants_LeafNodeSizeDefault),  py::arg("theMaxTreeDepth")=static_cast<const Standard_Integer>(BVH_Constants_MaxTreeDepth),  py::arg("theDoMainSplits")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theNumOfThreads")=static_cast<const Standard_Integer>(1) )
    ;
};
// ./opencascade/BVH_Sorter.hxx

template <typename T,int N>
void preregister_template_BVH_Sorter(py::object &m, const char *name){
    py::class_<BVH_Sorter<T,N> ,std::unique_ptr<BVH_Sorter<T,N>> >(m,name,R"#(Tool object to sort abstract primitive set.)#");
}

template <typename T,int N>
void register_template_BVH_Sorter(py::object &m, const char *name){
    static_cast<py::class_<BVH_Sorter<T,N> ,std::unique_ptr<BVH_Sorter<T,N>> >>(m.attr(name))
        .def("Perform",
             (void (BVH_Sorter<T,N>::*)( BVH_Set<T, N> *  ) ) &BVH_Sorter<T,N>::Perform,
             R"#(Sorts the set.)#"  , py::arg("theSet"))
        .def("Perform",
             (void (BVH_Sorter<T,N>::*)( BVH_Set<T, N> * ,  const Standard_Integer ,  const Standard_Integer  ) ) &BVH_Sorter<T,N>::Perform,
             R"#(Sorts the given (inclusive) range in the set.)#"  , py::arg("theSet"),  py::arg("theStart"),  py::arg("theFinal"))
    ;
};
// ./opencascade/BVH_Geometry.hxx

template <typename T,int N>
void preregister_template_BVH_Geometry(py::object &m, const char *name){
    py::class_<BVH_Geometry<T,N> ,std::unique_ptr<BVH_Geometry<T,N>> >(m,name,R"#(BVH geometry as a set of abstract geometric objects organized with bounding volume hierarchy (BVH).)#");
}

template <typename T,int N>
void register_template_BVH_Geometry(py::object &m, const char *name){
    static_cast<py::class_<BVH_Geometry<T,N> ,std::unique_ptr<BVH_Geometry<T,N>> >>(m.attr(name))
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
             (void (BVH_Geometry<T,N>::*)( const opencascade::handle<BVH_Builder<T, N> > &  ) ) &BVH_Geometry<T,N>::SetBuilder,
             R"#(Sets the method (builder) used to construct BVH.)#"  , py::arg("theBuilder"))
    ;
};
// ./opencascade/BVH_PrimitiveSet3d.hxx
// ./opencascade/BVH_BuildQueue.hxx
// ./opencascade/BVH_BinaryTree.hxx
// ./opencascade/BVH_PrimitiveSet.hxx

template <typename T,int N>
void preregister_template_BVH_PrimitiveSet(py::object &m, const char *name){
    py::class_<BVH_PrimitiveSet<T,N> ,std::unique_ptr<BVH_PrimitiveSet<T,N>> >(m,name,R"#(Set of abstract geometric primitives organized with bounding volume hierarchy (BVH). Unlike an object set, this collection is designed for storing structural elements of a single object (such as triangles in the object triangulation). Because there may be a large number of such elements, the implementations of this interface should be sufficiently optimized.)#");
}

template <typename T,int N>
void register_template_BVH_PrimitiveSet(py::object &m, const char *name){
    static_cast<py::class_<BVH_PrimitiveSet<T,N> ,std::unique_ptr<BVH_PrimitiveSet<T,N>> >>(m.attr(name))
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
             (void (BVH_PrimitiveSet<T,N>::*)( const opencascade::handle<BVH_Builder<T, N> > &  ) ) &BVH_PrimitiveSet<T,N>::SetBuilder,
             R"#(Sets the method (builder) used to construct BVH.)#"  , py::arg("theBuilder"))
    ;
};
// ./opencascade/BVH_QuadTree.hxx
// ./opencascade/BVH_QuickSorter.hxx

template <typename T,int N>
void preregister_template_BVH_QuickSorter(py::object &m, const char *name){
    py::class_<BVH_QuickSorter<T,N> ,std::unique_ptr<BVH_QuickSorter<T,N>> >(m,name,R"#(Performs centroid-based sorting of abstract set along the given axis (X - 0, Y - 1, Z - 2) using quick sort.)#");
}

template <typename T,int N>
void register_template_BVH_QuickSorter(py::object &m, const char *name){
    static_cast<py::class_<BVH_QuickSorter<T,N> ,std::unique_ptr<BVH_QuickSorter<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer >()  , py::arg("theAxis")=static_cast<const Standard_Integer>(0) )
        .def("Perform",
             (void (BVH_QuickSorter<T,N>::*)( BVH_Set<T, N> *  ) ) &BVH_QuickSorter<T,N>::Perform,
             R"#(Sorts the set.)#"  , py::arg("theSet"))
        .def("Perform",
             (void (BVH_QuickSorter<T,N>::*)( BVH_Set<T, N> * ,  const Standard_Integer ,  const Standard_Integer  ) ) &BVH_QuickSorter<T,N>::Perform,
             R"#(Sorts the given (inclusive) range in the set.)#"  , py::arg("theSet"),  py::arg("theStart"),  py::arg("theFinal"))
    ;
};
// ./opencascade/BVH_Constants.hxx
// ./opencascade/BVH_Builder.hxx

template <typename T,int N>
void preregister_template_BVH_Builder(py::object &m, const char *name){
    py::class_<BVH_Builder<T,N> ,std::unique_ptr<BVH_Builder<T,N>> >(m,name,R"#(Performs construction of BVH tree using bounding boxes (AABBs) of abstract objects.)#");
}

template <typename T,int N>
void register_template_BVH_Builder(py::object &m, const char *name){
    static_cast<py::class_<BVH_Builder<T,N> ,std::unique_ptr<BVH_Builder<T,N>> >>(m.attr(name))
        .def("Build",
             (void (BVH_Builder<T,N>::*)( BVH_Set<T, N> * ,  BVH_Tree<T, N> * ,  const BVH_Box<T, N> &  ) const) &BVH_Builder<T,N>::Build,
             R"#(Builds BVH using specific algorithm.)#"  , py::arg("theSet"),  py::arg("theBVH"),  py::arg("theBox"))
    ;
};
// ./opencascade/BVH_ObjectSet.hxx

template <typename T,int N>
void preregister_template_BVH_ObjectSet(py::object &m, const char *name){
    py::class_<BVH_ObjectSet<T,N> ,std::unique_ptr<BVH_ObjectSet<T,N>> >(m,name,R"#(Array of abstract entities (bounded by BVH boxes) to built BVH.)#");
}

template <typename T,int N>
void register_template_BVH_ObjectSet(py::object &m, const char *name){
    static_cast<py::class_<BVH_ObjectSet<T,N> ,std::unique_ptr<BVH_ObjectSet<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Clear",
             (void (BVH_ObjectSet<T,N>::*)() ) &BVH_ObjectSet<T,N>::Clear,
             R"#(Removes all geometric objects.)#" )
        .def("Size",
             (Standard_Integer (BVH_ObjectSet<T,N>::*)() const) &BVH_ObjectSet<T,N>::Size,
             R"#(Return total number of objects.)#" )
        .def("Box",
             (BVH_Box<T, N> (BVH_ObjectSet<T,N>::*)( const Standard_Integer  ) const) &BVH_ObjectSet<T,N>::Box,
             R"#(Returns AABB of the given object.)#"  , py::arg("theIndex"))
        .def("Center",
             (T (BVH_ObjectSet<T,N>::*)( const Standard_Integer ,  const Standard_Integer  ) const) &BVH_ObjectSet<T,N>::Center,
             R"#(Returns centroid position along the given axis.)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (BVH_ObjectSet<T,N>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &BVH_ObjectSet<T,N>::Swap,
             R"#(Performs transposing the two given objects in the set.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
    ;
};
// ./opencascade/BVH_QueueBuilder.hxx

template <typename T,int N>
void preregister_template_BVH_QueueBuilder(py::object &m, const char *name){
    py::class_<BVH_QueueBuilder<T,N> ,std::unique_ptr<BVH_QueueBuilder<T,N>> >(m,name,R"#(Abstract BVH builder based on the concept of work queue. Queue based BVH builders support parallelization with a fixed number of threads (maximum efficiency is achieved by setting the number of threads equal to the number of CPU cores plus one). Note that to support parallel mode, a corresponding BVH primitive set should provide thread safe implementations of interface functions (e.g., Swap, Box, Center). Otherwise, the results will be undefined.)#");
}

template <typename T,int N>
void register_template_BVH_QueueBuilder(py::object &m, const char *name){
    static_cast<py::class_<BVH_QueueBuilder<T,N> ,std::unique_ptr<BVH_QueueBuilder<T,N>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theLeafNodeSize"),  py::arg("theMaxTreeDepth"),  py::arg("theNumOfThreads")=static_cast<const Standard_Integer>(1) )
        .def("Build",
             (void (BVH_QueueBuilder<T,N>::*)( BVH_Set<T, N> * ,  BVH_Tree<T, N> * ,  const BVH_Box<T, N> &  ) const) &BVH_QueueBuilder<T,N>::Build,
             R"#(Builds BVH using specific algorithm.)#"  , py::arg("theSet"),  py::arg("theBVH"),  py::arg("theBox"))
    ;
};
// ./opencascade/BVH_Tree.hxx

template <typename T,int N>
void preregister_template_BVH_TreeBase(py::object &m, const char *name){
    py::class_<BVH_TreeBase<T,N> ,std::unique_ptr<BVH_TreeBase<T,N>> >(m,name,R"#(Stores parameters of bounding volume hierarchy (BVH). Bounding volume hierarchy (BVH) organizes geometric objects in the tree based on spatial relationships. Each node in the tree contains an axis-aligned bounding box of all the objects below it. Bounding volume hierarchies are used in many algorithms to support efficient operations on the sets of geometric objects, such as collision detection, ray-tracing, searching of nearest objects, and view frustum culling.)#");
}

template <typename T,int N>
void register_template_BVH_TreeBase(py::object &m, const char *name){
    static_cast<py::class_<BVH_TreeBase<T,N> ,std::unique_ptr<BVH_TreeBase<T,N>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("Depth",
             (int (BVH_TreeBase<T,N>::*)() const) &BVH_TreeBase<T,N>::Depth,
             R"#(Returns depth (height) of BVH tree.)#" )
        .def("Length",
             (int (BVH_TreeBase<T,N>::*)() const) &BVH_TreeBase<T,N>::Length,
             R"#(Returns total number of BVH tree nodes.)#" )
        .def("BegPrimitive",
             (int & (BVH_TreeBase<T,N>::*)( const int  ) ) &BVH_TreeBase<T,N>::BegPrimitive,
             R"#(Returns index of first primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("EndPrimitive",
             (int & (BVH_TreeBase<T,N>::*)( const int  ) ) &BVH_TreeBase<T,N>::EndPrimitive,
             R"#(Returns index of last primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("BegPrimitive",
             (int (BVH_TreeBase<T,N>::*)( const int  ) const) &BVH_TreeBase<T,N>::BegPrimitive,
             R"#(Returns index of first primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("EndPrimitive",
             (int (BVH_TreeBase<T,N>::*)( const int  ) const) &BVH_TreeBase<T,N>::EndPrimitive,
             R"#(Returns index of last primitive of the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("NbPrimitives",
             (int (BVH_TreeBase<T,N>::*)( const int  ) const) &BVH_TreeBase<T,N>::NbPrimitives,
             R"#(Returns number of primitives in the given leaf node.)#"  , py::arg("theNodeIndex"))
        .def("Level",
             (int & (BVH_TreeBase<T,N>::*)( const int  ) ) &BVH_TreeBase<T,N>::Level,
             R"#(Returns level (depth) of the given node.)#"  , py::arg("theNodeIndex"))
        .def("Level",
             (int (BVH_TreeBase<T,N>::*)( const int  ) const) &BVH_TreeBase<T,N>::Level,
             R"#(Returns level (depth) of the given node.)#"  , py::arg("theNodeIndex"))
        .def("IsOuter",
             (bool (BVH_TreeBase<T,N>::*)( const int  ) const) &BVH_TreeBase<T,N>::IsOuter,
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
    ;
};

template <typename T,int N,typename Arity=BVH_BinaryTree>
void preregister_template_BVH_Tree(py::object &m, const char *name){
    py::class_<BVH_Tree<T,N,Arity> ,std::unique_ptr<BVH_Tree<T,N,Arity>> >(m,name,R"#(BVH tree with given arity (2 or 4).)#");
}

template <typename T,int N,typename Arity=BVH_BinaryTree>
void register_template_BVH_Tree(py::object &m, const char *name){
    static_cast<py::class_<BVH_Tree<T,N,Arity> ,std::unique_ptr<BVH_Tree<T,N,Arity>> >>(m.attr(name))
    ;
};
// ./opencascade/BVH_Box.hxx

template <typename T,int N>
void preregister_template_BVH_Box(py::object &m, const char *name){
    py::class_<BVH_Box<T,N> ,std::unique_ptr<BVH_Box<T,N>> >(m,name,R"#(Defines axis aligned bounding box (AABB) based on BVH vectors.)#");
}

template <typename T,int N>
void register_template_BVH_Box(py::object &m, const char *name){
    static_cast<py::class_<BVH_Box<T,N> ,std::unique_ptr<BVH_Box<T,N>> >>(m.attr(name))
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
             (void (BVH_Box<T,N>::*)(  const typename BVH::VectorType<T, N>::Type &  ) ) &BVH_Box<T,N>::Add,
             R"#(Appends new point to the bounding box.)#"  , py::arg("thePoint"))
        .def("Combine",
             (void (BVH_Box<T,N>::*)( const BVH_Box<T, N> &  ) ) &BVH_Box<T,N>::Combine,
             R"#(Combines bounding box with another one.)#"  , py::arg("theBox"))
        .def("Area",
             (T (BVH_Box<T,N>::*)() const) &BVH_Box<T,N>::Area,
             R"#(Returns surface area of bounding box. If the box is degenerated into line, returns the perimeter instead.)#" )
        .def("Center",
             (T (BVH_Box<T,N>::*)( const Standard_Integer  ) const) &BVH_Box<T,N>::Center,
             R"#(Returns center of bounding box along the given axis.)#"  , py::arg("theAxis"))
    ;
};

// user-defined post
