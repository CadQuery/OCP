#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <gp_XYZ.hxx>
#include <gp_XY.hxx>
#include <Standard_Mutex.hxx>

// module includes
#include <NCollection_DefineList.hxx>
#include <NCollection_HeapAllocator.hxx>
#include <NCollection_Map.hxx>
#include <NCollection_HArray1.hxx>
#include <NCollection_EBTree.hxx>
#include <NCollection_BaseMap.hxx>
#include <NCollection_String.hxx>
#include <NCollection_TListIterator.hxx>
#include <NCollection_BaseSequence.hxx>
#include <NCollection_DefineDataMap.hxx>
#include <NCollection_SparseArrayBase.hxx>
#include <NCollection_AlignedAllocator.hxx>
#include <NCollection_Array1.hxx>
#include <NCollection_DefineArray1.hxx>
#include <NCollection_DefaultHasher.hxx>
#include <NCollection_SparseArray.hxx>
#include <NCollection_DefineMap.hxx>
#include <NCollection_DoubleMap.hxx>
#include <NCollection_Lerp.hxx>
#include <NCollection_HArray2.hxx>
#include <NCollection_BaseVector.hxx>
#include <NCollection_HSequence.hxx>
#include <NCollection_DefineAlloc.hxx>
#include <NCollection_DefineDoubleMap.hxx>
#include <NCollection_Comparator.hxx>
#include <NCollection_UBTreeFiller.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <NCollection_DefineIndexedMap.hxx>
#include <NCollection_IndexedDataMap.hxx>
#include <NCollection_BaseList.hxx>
#include <NCollection_DefineHArray2.hxx>
#include <NCollection_TypeDef.hxx>
#include <NCollection_Array2.hxx>
#include <NCollection_DefineHArray1.hxx>
#include <NCollection_List.hxx>
#include <NCollection_TListNode.hxx>
#include <NCollection_WinHeapAllocator.hxx>
#include <NCollection_CellFilter.hxx>
#include <NCollection_DefineVector.hxx>
#include <NCollection_Vec4.hxx>
#include <NCollection_Vec2.hxx>
#include <NCollection_DefineHSequence.hxx>
#include <NCollection_IndexedMap.hxx>
#include <NCollection_Handle.hxx>
#include <NCollection_StlIterator.hxx>
#include <NCollection_Vec3.hxx>
#include <NCollection_ListNode.hxx>
#include <NCollection_LocalArray.hxx>
#include <NCollection_DataMap.hxx>
#include <NCollection_Mat4.hxx>
#include <NCollection_Sequence.hxx>
#include <NCollection_StdAllocator.hxx>
#include <NCollection_DefineIndexedDataMap.hxx>
#include <NCollection_IncAllocator.hxx>
#include <NCollection_Vector.hxx>
#include <NCollection_UtfIterator.hxx>
#include <NCollection_AccAllocator.hxx>
#include <NCollection_DefineArray2.hxx>
#include <NCollection_Buffer.hxx>
#include <NCollection_UtfString.hxx>
#include <NCollection_UBTree.hxx>
#include <NCollection_DefineSequence.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/NCollection_DefineList.hxx
// ./opencascade/NCollection_HeapAllocator.hxx
// ./opencascade/NCollection_Map.hxx

template <typename TheKeyType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void preregister_template_NCollection_Map(py::object &m, const char *name){
    py::class_<NCollection_Map<TheKeyType,Hasher> , shared_ptr<NCollection_Map<TheKeyType,Hasher>> >(m,name,R"#(Purpose: Single hashed Map. This Map is used to store and retrieve keys in linear time.)#");
}

template <typename TheKeyType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void register_template_NCollection_Map(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Map<TheKeyType,Hasher> , shared_ptr<NCollection_Map<TheKeyType,Hasher>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theNbBuckets"),  py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def(py::init< const NCollection_Map<TheKeyType, Hasher> & >()  , py::arg("theOther") )
        .def("Exchange",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Exchange,
             R"#(Exchange the content of two maps without re-allocations. Notice that allocators will be swapped as well!)#"  , py::arg("theOther"))
        .def("Assign",
             (NCollection_Map<TheKeyType, Hasher> & (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Assign,
             R"#(Assign. This method does not change the internal allocator.)#"  , py::arg("theOther"))
        .def("ReSize",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( const Standard_Integer  ) ) &NCollection_Map<TheKeyType,Hasher>::ReSize,
             R"#(ReSize)#"  , py::arg("N"))
        .def("Add",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_Map<TheKeyType,Hasher>::Add,
             R"#(Add)#"  , py::arg("K"))
        .def("Added",
             (const TheKeyType & (NCollection_Map<TheKeyType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_Map<TheKeyType,Hasher>::Added,
             R"#(Added: add a new key if not yet in the map, and return reference to either newly added or previously existing object)#"  , py::arg("K"))
        .def("Contains",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_Map<TheKeyType,Hasher>::Contains,
             R"#(Contains)#"  , py::arg("K"))
        .def("Remove",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_Map<TheKeyType,Hasher>::Remove,
             R"#(Remove)#"  , py::arg("K"))
        .def("Clear",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( const Standard_Boolean  ) ) &NCollection_Map<TheKeyType,Hasher>::Clear,
             R"#(Clear data. If doReleaseMemory is false then the table of buckets is not released and will be reused.)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Clear,
             R"#(Clear data and reset allocator)#"  , py::arg("theAllocator"))
        .def("Size",
             (Standard_Integer (NCollection_Map<TheKeyType,Hasher>::*)() const) &NCollection_Map<TheKeyType,Hasher>::Size,
             R"#(Size)#" )
        .def("IsEqual",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) const) &NCollection_Map<TheKeyType,Hasher>::IsEqual,
             R"#(Returns true if two maps contains exactly the same keys)#"  , py::arg("theOther"))
        .def("Contains",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) const) &NCollection_Map<TheKeyType,Hasher>::Contains,
             R"#(Returns true if this map contains ALL keys of another map.)#"  , py::arg("theOther"))
        .def("Union",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> & ,  const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Union,
             R"#(Sets this Map to be the result of union (aka addition, fuse, merge, boolean OR) operation between two given Maps The new Map contains the values that are contained either in the first map or in the second map or in both. All previous content of this Map is cleared. This map (result of the boolean operation) can also be passed as one of operands.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Unite",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Unite,
             R"#(Apply to this Map the boolean operation union (aka addition, fuse, merge, boolean OR) with another (given) Map. The result contains the values that were previously contained in this map or contained in the given (operand) map. This algorithm is similar to method Union(). Returns True if contents of this map is changed.)#"  , py::arg("theOther"))
        .def("HasIntersection",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) const) &NCollection_Map<TheKeyType,Hasher>::HasIntersection,
             R"#(Returns true if this and theMap have common elements.)#"  , py::arg("theMap"))
        .def("Intersection",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> & ,  const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Intersection,
             R"#(Sets this Map to be the result of intersection (aka multiplication, common, boolean AND) operation between two given Maps. The new Map contains only the values that are contained in both map operands. All previous content of this Map is cleared. This same map (result of the boolean operation) can also be used as one of operands.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Intersect",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Intersect,
             R"#(Apply to this Map the intersection operation (aka multiplication, common, boolean AND) with another (given) Map. The result contains only the values that are contained in both this and the given maps. This algorithm is similar to method Intersection(). Returns True if contents of this map is changed.)#"  , py::arg("theOther"))
        .def("Subtraction",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> & ,  const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Subtraction,
             R"#(Sets this Map to be the result of subtraction (aka set-theoretic difference, relative complement, exclude, cut, boolean NOT) operation between two given Maps. The new Map contains only the values that are contained in the first map operands and not contained in the second one. All previous content of this Map is cleared.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Subtract",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Subtract,
             R"#(Apply to this Map the subtraction (aka set-theoretic difference, relative complement, exclude, cut, boolean NOT) operation with another (given) Map. The result contains only the values that were previously contained in this map and not contained in this map. This algorithm is similar to method Subtract() with two operands. Returns True if contents of this map is changed.)#"  , py::arg("theOther"))
        .def("Difference",
             (void (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> & ,  const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Difference,
             R"#(Sets this Map to be the result of symmetric difference (aka exclusive disjunction, boolean XOR) operation between two given Maps. The new Map contains the values that are contained only in the first or the second operand maps but not in both. All previous content of this Map is cleared. This map (result of the boolean operation) can also be used as one of operands.)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("Differ",
             (Standard_Boolean (NCollection_Map<TheKeyType,Hasher>::*)( const NCollection_Map<TheKeyType, Hasher> &  ) ) &NCollection_Map<TheKeyType,Hasher>::Differ,
             R"#(Apply to this Map the symmetric difference (aka exclusive disjunction, boolean XOR) operation with another (given) Map. The result contains the values that are contained only in this or the operand map, but not in both. This algorithm is similar to method Difference(). Returns True if contents of this map is changed.)#"  , py::arg("theOther"))
    ;
};
// ./opencascade/NCollection_HArray1.hxx
// ./opencascade/NCollection_EBTree.hxx

template <typename TheObjType,typename TheBndType>
void preregister_template_NCollection_EBTree(py::object &m, const char *name){
    py::class_<NCollection_EBTree<TheObjType,TheBndType> , shared_ptr<NCollection_EBTree<TheObjType,TheBndType>> >(m,name,R"#(The algorithm of unbalanced binary tree of overlapped bounding boxes with the possibility of deleting objects from the tree.)#");
}

template <typename TheObjType,typename TheBndType>
void register_template_NCollection_EBTree(py::object &m, const char *name){
    static_cast<py::class_<NCollection_EBTree<TheObjType,TheBndType> , shared_ptr<NCollection_EBTree<TheObjType,TheBndType>> >>(m.attr(name))
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def("Add",
             (Standard_Boolean (NCollection_EBTree<TheObjType,TheBndType>::*)( const TheObjType & ,  const TheBndType &  ) ) &NCollection_EBTree<TheObjType,TheBndType>::Add,
             R"#(Updates the tree with a new object and its bounding box. Extends the functionality of the parent method by maintaining the map myObjNodeMap. Redefined virtual method.)#"  , py::arg("theObj"),  py::arg("theBnd"))
        .def("Remove",
             (Standard_Boolean (NCollection_EBTree<TheObjType,TheBndType>::*)( const TheObjType &  ) ) &NCollection_EBTree<TheObjType,TheBndType>::Remove,
             R"#(Removes the given object and updates the tree.)#"  , py::arg("theObj"))
        .def("Contains",
             (Standard_Boolean (NCollection_EBTree<TheObjType,TheBndType>::*)( const TheObjType &  ) const) &NCollection_EBTree<TheObjType,TheBndType>::Contains,
             R"#(Returns True if the tree contains the object.)#"  , py::arg("theObj"))
        .def("Clear",
             (void (NCollection_EBTree<TheObjType,TheBndType>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_EBTree<TheObjType,TheBndType>::Clear,
             R"#(Clears the contents of the tree. Redefined virtual method)#"  , py::arg("aNewAlloc")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L))
    ;
};
// ./opencascade/NCollection_BaseMap.hxx
// ./opencascade/NCollection_String.hxx
// ./opencascade/NCollection_TListIterator.hxx

template <typename TheItemType>
void preregister_template_NCollection_TListIterator(py::object &m, const char *name){
    py::class_<NCollection_TListIterator<TheItemType> , shared_ptr<NCollection_TListIterator<TheItemType>> >(m,name,R"#(Purpose: This Iterator class iterates on BaseList of TListNode and is instantiated in List/Set/Queue/Stack Remark: TListIterator is internal class)#");
}

template <typename TheItemType>
void register_template_NCollection_TListIterator(py::object &m, const char *name){
    static_cast<py::class_<NCollection_TListIterator<TheItemType> , shared_ptr<NCollection_TListIterator<TheItemType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const NCollection_BaseList & >()  , py::arg("theList") )
        .def("More",
             (Standard_Boolean (NCollection_TListIterator<TheItemType>::*)() const) &NCollection_TListIterator<TheItemType>::More,
             R"#(Check end)#" )
        .def("Next",
             (void (NCollection_TListIterator<TheItemType>::*)() ) &NCollection_TListIterator<TheItemType>::Next,
             R"#(Make step)#" )
        .def("Value",
             (const TheItemType & (NCollection_TListIterator<TheItemType>::*)() const) &NCollection_TListIterator<TheItemType>::Value,
             R"#(Constant Value access)#" )
        .def("Value",
             (TheItemType & (NCollection_TListIterator<TheItemType>::*)() ) &NCollection_TListIterator<TheItemType>::Value,
             R"#(Non-const Value access)#" )
        .def("ChangeValue",
             (TheItemType & (NCollection_TListIterator<TheItemType>::*)() const) &NCollection_TListIterator<TheItemType>::ChangeValue,
             R"#(Non-const Value access)#" )
    ;
};
// ./opencascade/NCollection_BaseSequence.hxx
// ./opencascade/NCollection_DefineDataMap.hxx
// ./opencascade/NCollection_SparseArrayBase.hxx
// ./opencascade/NCollection_AlignedAllocator.hxx
// ./opencascade/NCollection_Array1.hxx

template <typename TheItemType>
void preregister_template_NCollection_Array1(py::object &m, const char *name){
    py::class_<NCollection_Array1<TheItemType> , shared_ptr<NCollection_Array1<TheItemType>> >(m,name,R"#(Purpose: The class Array1 represents unidimensional arrays of fixed size known at run time. The range of the index is user defined. An array1 can be constructed with a "C array". This functionality is useful to call methods expecting an Array1. It allows to carry the bounds inside the arrays.)#");
}

template <typename TheItemType>
void register_template_NCollection_Array1(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Array1<TheItemType> , shared_ptr<NCollection_Array1<TheItemType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const NCollection_Array1<TheItemType> & >()  , py::arg("theOther") )
        .def(py::init< const TheItemType &,const Standard_Integer,const Standard_Integer >()  , py::arg("theBegin"),  py::arg("theLower"),  py::arg("theUpper") )
        .def("Init",
             (void (NCollection_Array1<TheItemType>::*)( const TheItemType &  ) ) &NCollection_Array1<TheItemType>::Init,
             R"#(Initialise the items with theValue)#"  , py::arg("theValue"))
        .def("Size",
             (Standard_Integer (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::Size,
             R"#(Size query)#" )
        .def("Length",
             (Standard_Integer (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::Length,
             R"#(Length query (the same))#" )
        .def("IsEmpty",
             (Standard_Boolean (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::IsEmpty,
             R"#(Return TRUE if array has zero length.)#" )
        .def("Lower",
             (Standard_Integer (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::Lower,
             R"#(Lower bound)#" )
        .def("Upper",
             (Standard_Integer (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::Upper,
             R"#(Upper bound)#" )
        .def("IsDeletable",
             (Standard_Boolean (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::IsDeletable,
             R"#(myDeletable flag)#" )
        .def("IsAllocated",
             (Standard_Boolean (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::IsAllocated,
             R"#(IsAllocated flag - for naming compatibility)#" )
        .def("Assign",
             (NCollection_Array1<TheItemType> & (NCollection_Array1<TheItemType>::*)( const NCollection_Array1<TheItemType> &  ) ) &NCollection_Array1<TheItemType>::Assign,
             R"#(Copies data of theOther array to this. This array should be pre-allocated and have the same length as theOther; otherwise exception Standard_DimensionMismatch is thrown.)#"  , py::arg("theOther"))
        .def("Move",
             (NCollection_Array1<TheItemType> & (NCollection_Array1<TheItemType>::*)( NCollection_Array1<TheItemType> &  ) ) &NCollection_Array1<TheItemType>::Move,
             R"#(Move assignment. This array will borrow all the data from theOther. The moved object will keep pointer to the memory buffer and range, but it will not free the buffer on destruction.)#"  , py::arg("theOther"))
        .def("First",
             (const TheItemType & (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::First,
             R"#(Returns first element)#" )
        .def("ChangeFirst",
             (TheItemType & (NCollection_Array1<TheItemType>::*)() ) &NCollection_Array1<TheItemType>::ChangeFirst,
             R"#(Returns first element)#" )
        .def("Last",
             (const TheItemType & (NCollection_Array1<TheItemType>::*)() const) &NCollection_Array1<TheItemType>::Last,
             R"#(Returns last element)#" )
        .def("ChangeLast",
             (TheItemType & (NCollection_Array1<TheItemType>::*)() ) &NCollection_Array1<TheItemType>::ChangeLast,
             R"#(Returns last element)#" )
        .def("Value",
             (const TheItemType & (NCollection_Array1<TheItemType>::*)( const Standard_Integer  ) const) &NCollection_Array1<TheItemType>::Value,
             R"#(Constant value access)#"  , py::arg("theIndex"))
        .def("ChangeValue",
             (TheItemType & (NCollection_Array1<TheItemType>::*)( const Standard_Integer  ) ) &NCollection_Array1<TheItemType>::ChangeValue,
             R"#(Variable value access)#"  , py::arg("theIndex"))
        .def("SetValue",
             (void (NCollection_Array1<TheItemType>::*)( const Standard_Integer ,  const TheItemType &  ) ) &NCollection_Array1<TheItemType>::SetValue,
             R"#(Set value)#"  , py::arg("theIndex"),  py::arg("theItem"))
        .def("Resize",
             (void (NCollection_Array1<TheItemType>::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean  ) ) &NCollection_Array1<TheItemType>::Resize,
             R"#(Resizes the array to specified bounds. No re-allocation will be done if length of array does not change, but existing values will not be discarded if theToCopyData set to FALSE.)#"  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theToCopyData"))
        .def("__iter__",[](const NCollection_Array1<TheItemType> &self)
             { return py::make_iterator<py::return_value_policy::copy>(self.begin(), self.end()); },
             py::keep_alive<0, 1>())
    ;
};
// ./opencascade/NCollection_DefineArray1.hxx
// ./opencascade/NCollection_DefaultHasher.hxx

template <typename TheKeyType>
void preregister_template_NCollection_DefaultHasher(py::object &m, const char *name){
    py::class_<NCollection_DefaultHasher<TheKeyType> , shared_ptr<NCollection_DefaultHasher<TheKeyType>> >(m,name,R"#(Purpose: The DefaultHasher is a Hasher that is used by default in NCollection maps. To compute the hash code of the key is used the global function HashCode. To compare two keys is used the global function IsEqual.)#");
}

template <typename TheKeyType>
void register_template_NCollection_DefaultHasher(py::object &m, const char *name){
    static_cast<py::class_<NCollection_DefaultHasher<TheKeyType> , shared_ptr<NCollection_DefaultHasher<TheKeyType>> >>(m.attr(name))
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const TheKeyType & ,  const Standard_Integer  ) ) &NCollection_DefaultHasher<TheKeyType>::HashCode,
                    R"#(Returns hash code for the given key, in the range [1, theUpperBound])#"  , py::arg("theKey"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TheKeyType & ,  const TheKeyType &  ) ) &NCollection_DefaultHasher<TheKeyType>::IsEqual,
                    R"#(None)#"  , py::arg("theKey1"),  py::arg("theKey2"))
    ;
};
// ./opencascade/NCollection_SparseArray.hxx

template <typename TheItemType>
void preregister_template_NCollection_SparseArray(py::object &m, const char *name){
    py::class_<NCollection_SparseArray<TheItemType> , shared_ptr<NCollection_SparseArray<TheItemType>> >(m,name,R"#(Dynamically resizable sparse array of objects)#");
}

template <typename TheItemType>
void register_template_NCollection_SparseArray(py::object &m, const char *name){
    static_cast<py::class_<NCollection_SparseArray<TheItemType> , shared_ptr<NCollection_SparseArray<TheItemType>> >>(m.attr(name))
        .def(py::init< Standard_Size >()  , py::arg("theIncrement") )
        .def("Assign",
             (NCollection_SparseArray<TheItemType> & (NCollection_SparseArray<TheItemType>::*)( const NCollection_SparseArray<TheItemType> &  ) ) &NCollection_SparseArray<TheItemType>::Assign,
             R"#(Explicit assignment operator)#"  , py::arg("theOther"))
        .def("Exchange",
             (void (NCollection_SparseArray<TheItemType>::*)( NCollection_SparseArray<TheItemType> &  ) ) &NCollection_SparseArray<TheItemType>::Exchange,
             R"#(Exchange the data of two arrays; can be used primarily to move contents of theOther into the new array in a fast way (without creation of duplicated data))#"  , py::arg("theOther"))
        .def("Value",
             (const TheItemType & (NCollection_SparseArray<TheItemType>::*)( const Standard_Size  ) const) &NCollection_SparseArray<TheItemType>::Value,
             R"#(Direct const access to the item)#"  , py::arg("theIndex"))
        .def("ChangeValue",
             (TheItemType & (NCollection_SparseArray<TheItemType>::*)( const Standard_Size  ) ) &NCollection_SparseArray<TheItemType>::ChangeValue,
             R"#(Modification access to the item)#"  , py::arg("theIndex"))
        .def("SetValue",
             (TheItemType & (NCollection_SparseArray<TheItemType>::*)( const Standard_Size ,  const TheItemType &  ) ) &NCollection_SparseArray<TheItemType>::SetValue,
             R"#(Set a value at specified index method)#"  , py::arg("theIndex"),  py::arg("theValue"))
        .def("Extent",
             (Standard_Size (NCollection_SparseArray<TheItemType>::*)() const) &NCollection_SparseArray<TheItemType>::Extent,
             R"#(Returns number of items in the array)#" )
        .def("IsEmpty",
             (Standard_Boolean (NCollection_SparseArray<TheItemType>::*)() const) &NCollection_SparseArray<TheItemType>::IsEmpty,
             R"#(Returns True if array is empty)#" )
        .def("Find",
             (const TheItemType & (NCollection_SparseArray<TheItemType>::*)( const Standard_Size  ) const) &NCollection_SparseArray<TheItemType>::Find,
             R"#(Direct const access to the item)#"  , py::arg("theIndex"))
        .def("ChangeFind",
             (TheItemType & (NCollection_SparseArray<TheItemType>::*)( const Standard_Size  ) ) &NCollection_SparseArray<TheItemType>::ChangeFind,
             R"#(Modification access to the item)#"  , py::arg("theIndex"))
        .def("Bind",
             (TheItemType & (NCollection_SparseArray<TheItemType>::*)( const Standard_Size ,  const TheItemType &  ) ) &NCollection_SparseArray<TheItemType>::Bind,
             R"#(Set a value as explicit method)#"  , py::arg("theIndex"),  py::arg("theValue"))
        .def("IsBound",
             (Standard_Boolean (NCollection_SparseArray<TheItemType>::*)( const Standard_Size  ) const) &NCollection_SparseArray<TheItemType>::IsBound,
             R"#(Returns True if the item is defined)#"  , py::arg("theIndex"))
        .def("UnBind",
             (Standard_Boolean (NCollection_SparseArray<TheItemType>::*)( const Standard_Size  ) ) &NCollection_SparseArray<TheItemType>::UnBind,
             R"#(Remove the item from array)#"  , py::arg("theIndex"))
    ;
};
// ./opencascade/NCollection_DefineMap.hxx
// ./opencascade/NCollection_DoubleMap.hxx

template <typename TheKey1Type,typename TheKey2Type,typename Hasher1=NCollection_DefaultHasher<TheKey1Type>,typename Hasher2=NCollection_DefaultHasher<TheKey2Type>>
void preregister_template_NCollection_DoubleMap(py::object &m, const char *name){
    py::class_<NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2> , shared_ptr<NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>> >(m,name,R"#(Purpose: The DoubleMap is used to bind pairs (Key1,Key2) and retrieve them in linear time.)#");
}

template <typename TheKey1Type,typename TheKey2Type,typename Hasher1=NCollection_DefaultHasher<TheKey1Type>,typename Hasher2=NCollection_DefaultHasher<TheKey2Type>>
void register_template_NCollection_DoubleMap(py::object &m, const char *name){
    static_cast<py::class_<NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2> , shared_ptr<NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theNbBuckets"),  py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def(py::init< const NCollection_DoubleMap<TheKey1Type, TheKey2Type, Hasher1, Hasher2> & >()  , py::arg("theOther") )
        .def("Exchange",
             (void (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( NCollection_DoubleMap<TheKey1Type, TheKey2Type, Hasher1, Hasher2> &  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Exchange,
             R"#(Exchange the content of two maps without re-allocations. Notice that allocators will be swapped as well!)#"  , py::arg("theOther"))
        .def("Assign",
             (NCollection_DoubleMap<TheKey1Type, TheKey2Type, Hasher1, Hasher2> & (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const NCollection_DoubleMap<TheKey1Type, TheKey2Type, Hasher1, Hasher2> &  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Assign,
             R"#(Assignment. This method does not change the internal allocator.)#"  , py::arg("theOther"))
        .def("ReSize",
             (void (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const Standard_Integer  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::ReSize,
             R"#(ReSize)#"  , py::arg("N"))
        .def("Bind",
             (void (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey1Type & ,  const TheKey2Type &  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Bind,
             R"#(Bind)#"  , py::arg("theKey1"),  py::arg("theKey2"))
        .def("AreBound",
             (Standard_Boolean (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey1Type & ,  const TheKey2Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::AreBound,
             R"#(* AreBound)#"  , py::arg("theKey1"),  py::arg("theKey2"))
        .def("IsBound1",
             (Standard_Boolean (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey1Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::IsBound1,
             R"#(IsBound1)#"  , py::arg("theKey1"))
        .def("IsBound2",
             (Standard_Boolean (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey2Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::IsBound2,
             R"#(IsBound2)#"  , py::arg("theKey2"))
        .def("UnBind1",
             (Standard_Boolean (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey1Type &  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::UnBind1,
             R"#(UnBind1)#"  , py::arg("theKey1"))
        .def("UnBind2",
             (Standard_Boolean (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey2Type &  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::UnBind2,
             R"#(UnBind2)#"  , py::arg("theKey2"))
        .def("Find1",
             (const TheKey2Type & (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey1Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Find1,
             R"#(Find the Key1 and return Key2 value. Raises an exception if Key1 was not bound.)#"  , py::arg("theKey1"))
        .def("Find1",
             (Standard_Boolean (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey1Type & ,  TheKey2Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Find1,
             R"#(Find the Key1 and return Key2 value (by copying its value).)#"  , py::arg("theKey1"),  py::arg("theKey2"))
        .def("Seek1",
             (const TheKey2Type * (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey1Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Seek1,
             R"#(Find the Key1 and return pointer to Key2 or NULL if Key1 is not bound.)#"  , py::arg("theKey1"))
        .def("Find2",
             (const TheKey1Type & (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey2Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Find2,
             R"#(Find the Key2 and return Key1 value. Raises an exception if Key2 was not bound.)#"  , py::arg("theKey2"))
        .def("Find2",
             (Standard_Boolean (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey2Type & ,  TheKey1Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Find2,
             R"#(Find the Key2 and return Key1 value (by copying its value).)#"  , py::arg("theKey2"),  py::arg("theKey1"))
        .def("Seek2",
             (const TheKey1Type * (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const TheKey2Type &  ) const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Seek2,
             R"#(Find the Key2 and return pointer to Key1 or NULL if not bound.)#"  , py::arg("theKey2"))
        .def("Clear",
             (void (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const Standard_Boolean  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Clear,
             R"#(Clear data. If doReleaseMemory is false then the table of buckets is not released and will be reused.)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Clear,
             R"#(Clear data and reset allocator)#"  , py::arg("theAllocator"))
        .def("Size",
             (Standard_Integer (NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::*)() const) &NCollection_DoubleMap<TheKey1Type,TheKey2Type,Hasher1,Hasher2>::Size,
             R"#(Size)#" )
    ;
};
// ./opencascade/NCollection_Lerp.hxx

template <typename T>
void preregister_template_NCollection_Lerp(py::object &m, const char *name){
    py::class_<NCollection_Lerp<T> , shared_ptr<NCollection_Lerp<T>> >(m,name,R"#(Simple linear interpolation tool (also known as mix() in GLSL). The main purpose of this template class is making interpolation routines more readable.)#");
}

template <typename T>
void register_template_NCollection_Lerp(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Lerp<T> , shared_ptr<NCollection_Lerp<T>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const T &,const T & >()  , py::arg("theStart"),  py::arg("theEnd") )
        .def("Init",
             (void (NCollection_Lerp<T>::*)( const T & ,  const T &  ) ) &NCollection_Lerp<T>::Init,
             R"#(Initialize values.)#"  , py::arg("theStart"),  py::arg("theEnd"))
        .def("Interpolate",
             (void (NCollection_Lerp<T>::*)( double ,  T &  ) const) &NCollection_Lerp<T>::Interpolate,
             R"#(Compute interpolated value between two values.)#"  , py::arg("theT"),  py::arg("theResult"))
        .def_static("Interpolate_s",
                    (T (*)( const T & ,  const T & ,  double  ) ) &NCollection_Lerp<T>::Interpolate,
                    R"#(Compute interpolated value between two values.)#"  , py::arg("theStart"),  py::arg("theEnd"),  py::arg("theT"))
    ;
};
// ./opencascade/NCollection_HArray2.hxx
// ./opencascade/NCollection_BaseVector.hxx
// ./opencascade/NCollection_HSequence.hxx
// ./opencascade/NCollection_DefineAlloc.hxx
// ./opencascade/NCollection_DefineDoubleMap.hxx
// ./opencascade/NCollection_Comparator.hxx

template <typename TheItemType>
void preregister_template_NCollection_Comparator(py::object &m, const char *name){
    py::class_<NCollection_Comparator<TheItemType> , shared_ptr<NCollection_Comparator<TheItemType>> >(m,name,R"#(Class to define basic compare operations. Basic implementation use redirection to standard C++ operators. You can use standard C++ templates mechanisms to redefine these methods or to inherit basic implementation to create multiple comparators for same type with different rules.)#");
}

template <typename TheItemType>
void register_template_NCollection_Comparator(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Comparator<TheItemType> , shared_ptr<NCollection_Comparator<TheItemType>> >>(m.attr(name))
        .def(py::init< const Standard_Real >()  , py::arg("theTolerance")=static_cast<const Standard_Real>(Precision :: Confusion ( )) )
        .def("IsGreater",
             (Standard_Boolean (NCollection_Comparator<TheItemType>::*)( const TheItemType & ,  const TheItemType &  ) const) &NCollection_Comparator<TheItemType>::IsGreater,
             R"#(Should return true if Left value is greater than Right)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("IsEqual",
             (Standard_Boolean (NCollection_Comparator<TheItemType>::*)( const TheItemType & ,  const TheItemType &  ) const) &NCollection_Comparator<TheItemType>::IsEqual,
             R"#(Should return true if values are equal)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("IsLower",
             (Standard_Boolean (NCollection_Comparator<TheItemType>::*)( const TheItemType & ,  const TheItemType &  ) const) &NCollection_Comparator<TheItemType>::IsLower,
             R"#(Should return true if Left value is lower than Right)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("IsLowerEqual",
             (Standard_Boolean (NCollection_Comparator<TheItemType>::*)( const TheItemType & ,  const TheItemType &  ) const) &NCollection_Comparator<TheItemType>::IsLowerEqual,
             R"#(None)#"  , py::arg("theLeft"),  py::arg("theRight"))
        .def("IsGreaterEqual",
             (Standard_Boolean (NCollection_Comparator<TheItemType>::*)( const TheItemType & ,  const TheItemType &  ) const) &NCollection_Comparator<TheItemType>::IsGreaterEqual,
             R"#(None)#"  , py::arg("theLeft"),  py::arg("theRight"))
    ;
};
// ./opencascade/NCollection_UBTreeFiller.hxx

template <typename TheObjType,typename TheBndType>
void preregister_template_NCollection_UBTreeFiller(py::object &m, const char *name){
    py::class_<NCollection_UBTreeFiller<TheObjType,TheBndType> , shared_ptr<NCollection_UBTreeFiller<TheObjType,TheBndType>> >(m,name,R"#(This class is used to fill an UBTree in a random order. The quality of a tree is much better (from the point of view of the search time) if objects are added to it in a random order to avoid adding a chain of neerby objects one following each other.)#");
}

template <typename TheObjType,typename TheBndType>
void register_template_NCollection_UBTreeFiller(py::object &m, const char *name){
    static_cast<py::class_<NCollection_UBTreeFiller<TheObjType,TheBndType> , shared_ptr<NCollection_UBTreeFiller<TheObjType,TheBndType>> >>(m.attr(name))
        .def(py::init< NCollection_UBTree<TheObjType, TheBndType> &,const opencascade::handle<NCollection_BaseAllocator> &,const Standard_Boolean >()  , py::arg("theTree"),  py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L),  py::arg("isFullRandom")=static_cast<const Standard_Boolean>(Standard_True) )
        .def("Add",
             (void (NCollection_UBTreeFiller<TheObjType,TheBndType>::*)( const TheObjType & ,  const TheBndType &  ) ) &NCollection_UBTreeFiller<TheObjType,TheBndType>::Add,
             R"#(Adds a pair (theObj, theBnd) to my sequence)#"  , py::arg("theObj"),  py::arg("theBnd"))
        .def("Fill",
             (Standard_Integer (NCollection_UBTreeFiller<TheObjType,TheBndType>::*)() ) &NCollection_UBTreeFiller<TheObjType,TheBndType>::Fill,
             R"#(Fills the tree with the objects from my sequence. This method clears the internal buffer of added items making sure that no item would be added twice.)#" )
        .def("Reset",
             (void (NCollection_UBTreeFiller<TheObjType,TheBndType>::*)() ) &NCollection_UBTreeFiller<TheObjType,TheBndType>::Reset,
             R"#(Remove all data from Filler, partculary if the Tree no more needed so the destructor of this Filler should not populate the useless Tree.)#" )
        .def("CheckTree",
             (Standard_Integer (NCollection_UBTreeFiller<TheObjType,TheBndType>::*)( std::ostream &  ) ) &NCollection_UBTreeFiller<TheObjType,TheBndType>::CheckTree,
             R"#(Check the filled tree for the total number of items and the balance outputting these results to std::ostream.)#"  , py::arg("theStream"))
    ;
};
// ./opencascade/NCollection_BaseAllocator.hxx
// ./opencascade/NCollection_DefineIndexedMap.hxx
// ./opencascade/NCollection_IndexedDataMap.hxx

template <typename TheKeyType,typename TheItemType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void preregister_template_NCollection_IndexedDataMap(py::object &m, const char *name){
    py::class_<NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher> , shared_ptr<NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>> >(m,name,R"#(Purpose: An indexed map is used to store keys and to bind an index to them. Each new key stored in the map gets an index. Index are incremented as keys are stored in the map. A key can be found by the index and an index by the key. No key but the last can be removed so the indices are in the range 1.. Extent. An Item is stored with each key.)#");
}

template <typename TheKeyType,typename TheItemType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void register_template_NCollection_IndexedDataMap(py::object &m, const char *name){
    static_cast<py::class_<NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher> , shared_ptr<NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theNbBuckets"),  py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def(py::init< const NCollection_IndexedDataMap<TheKeyType, TheItemType, Hasher> & >()  , py::arg("theOther") )
        .def("Exchange",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( NCollection_IndexedDataMap<TheKeyType, TheItemType, Hasher> &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Exchange,
             R"#(Exchange the content of two maps without re-allocations. Notice that allocators will be swapped as well!)#"  , py::arg("theOther"))
        .def("Assign",
             (NCollection_IndexedDataMap<TheKeyType, TheItemType, Hasher> & (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const NCollection_IndexedDataMap<TheKeyType, TheItemType, Hasher> &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Assign,
             R"#(Assignment. This method does not change the internal allocator.)#"  , py::arg("theOther"))
        .def("ReSize",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::ReSize,
             R"#(ReSize)#"  , py::arg("N"))
        .def("Add",
             (Standard_Integer (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType & ,  const TheItemType &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Add,
             R"#(Returns the Index of already bound Key or appends new Key with specified Item value.)#"  , py::arg("theKey1"),  py::arg("theItem"))
        .def("Contains",
             (Standard_Boolean (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Contains,
             R"#(Contains)#"  , py::arg("theKey1"))
        .def("Substitute",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer ,  const TheKeyType & ,  const TheItemType &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Substitute,
             R"#(Substitute)#"  , py::arg("theIndex"),  py::arg("theKey1"),  py::arg("theItem"))
        .def("Swap",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Swap,
             R"#(Swaps two elements with the given indices.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("RemoveLast",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)() ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::RemoveLast,
             R"#(RemoveLast)#" )
        .def("RemoveFromIndex",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::RemoveFromIndex,
             R"#(Remove the key of the given index. Caution! The index of the last key can be changed.)#"  , py::arg("theIndex"))
        .def("RemoveKey",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::RemoveKey,
             R"#(Remove the given key. Caution! The index of the last key can be changed.)#"  , py::arg("theKey1"))
        .def("FindKey",
             (const TheKeyType & (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer  ) const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::FindKey,
             R"#(FindKey)#"  , py::arg("theIndex"))
        .def("FindFromIndex",
             (const TheItemType & (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer  ) const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::FindFromIndex,
             R"#(FindFromIndex)#"  , py::arg("theIndex"))
        .def("ChangeFromIndex",
             (TheItemType & (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::ChangeFromIndex,
             R"#(ChangeFromIndex)#"  , py::arg("theIndex"))
        .def("FindIndex",
             (Standard_Integer (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::FindIndex,
             R"#(FindIndex)#"  , py::arg("theKey1"))
        .def("FindFromKey",
             (const TheItemType & (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::FindFromKey,
             R"#(FindFromKey)#"  , py::arg("theKey1"))
        .def("ChangeFromKey",
             (TheItemType & (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::ChangeFromKey,
             R"#(ChangeFromKey)#"  , py::arg("theKey1"))
        .def("Seek",
             (const TheItemType * (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Seek,
             R"#(Seek returns pointer to Item by Key. Returns NULL if Key was not found.)#"  , py::arg("theKey1"))
        .def("ChangeSeek",
             (TheItemType * (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::ChangeSeek,
             R"#(ChangeSeek returns modifiable pointer to Item by Key. Returns NULL if Key was not found.)#"  , py::arg("theKey1"))
        .def("FindFromKey",
             (Standard_Boolean (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType & ,  TheItemType &  ) const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::FindFromKey,
             R"#(Find value for key with copying.)#"  , py::arg("theKey1"),  py::arg("theValue"))
        .def("Clear",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Boolean  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Clear,
             R"#(Clear data. If doReleaseMemory is false then the table of buckets is not released and will be reused.)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Clear,
             R"#(Clear data and reset allocator)#"  , py::arg("theAllocator"))
        .def("Size",
             (Standard_Integer (NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::*)() const) &NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher>::Size,
             R"#(Size)#" )
        .def("__iter__",[](const NCollection_IndexedDataMap<TheKeyType,TheItemType,Hasher> &self)
             { return py::make_iterator<py::return_value_policy::copy>(self.begin(), self.end()); },
             py::keep_alive<0, 1>())
    ;
};
// ./opencascade/NCollection_BaseList.hxx
// ./opencascade/NCollection_DefineHArray2.hxx
// ./opencascade/NCollection_TypeDef.hxx
// ./opencascade/NCollection_Array2.hxx

template <typename TheItemType>
void preregister_template_NCollection_Array2(py::object &m, const char *name){
    py::class_<NCollection_Array2<TheItemType> , shared_ptr<NCollection_Array2<TheItemType>> >(m,name,R"#(Purpose: The class Array2 represents bi-dimensional arrays of fixed size known at run time. The ranges of indices are user defined.)#");
}

template <typename TheItemType>
void register_template_NCollection_Array2(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Array2<TheItemType> , shared_ptr<NCollection_Array2<TheItemType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theRowLower"),  py::arg("theRowUpper"),  py::arg("theColLower"),  py::arg("theColUpper") )
        .def(py::init< const NCollection_Array2<TheItemType> & >()  , py::arg("theOther") )
        .def(py::init< const TheItemType &,const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Integer >()  , py::arg("theBegin"),  py::arg("theRowLower"),  py::arg("theRowUpper"),  py::arg("theColLower"),  py::arg("theColUpper") )
        .def("Init",
             (void (NCollection_Array2<TheItemType>::*)( const TheItemType &  ) ) &NCollection_Array2<TheItemType>::Init,
             R"#(Initialise the values)#"  , py::arg("theValue"))
        .def("Size",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::Size,
             R"#(Size (number of items))#" )
        .def("Length",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::Length,
             R"#(Length (number of items))#" )
        .def("NbRows",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::NbRows,
             R"#(Returns number of rows)#" )
        .def("NbColumns",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::NbColumns,
             R"#(Returns number of columns)#" )
        .def("RowLength",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::RowLength,
             R"#(Returns length of the row, i.e. number of columns)#" )
        .def("ColLength",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::ColLength,
             R"#(Returns length of the column, i.e. number of rows)#" )
        .def("LowerRow",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::LowerRow,
             R"#(LowerRow)#" )
        .def("UpperRow",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::UpperRow,
             R"#(UpperRow)#" )
        .def("LowerCol",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::LowerCol,
             R"#(LowerCol)#" )
        .def("UpperCol",
             (Standard_Integer (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::UpperCol,
             R"#(UpperCol)#" )
        .def("IsDeletable",
             (Standard_Boolean (NCollection_Array2<TheItemType>::*)() const) &NCollection_Array2<TheItemType>::IsDeletable,
             R"#(myDeletable flag)#" )
        .def("Assign",
             (NCollection_Array2<TheItemType> & (NCollection_Array2<TheItemType>::*)( const NCollection_Array2<TheItemType> &  ) ) &NCollection_Array2<TheItemType>::Assign,
             R"#(Assignment)#"  , py::arg("theOther"))
        .def("Move",
             (NCollection_Array2<TheItemType> & (NCollection_Array2<TheItemType>::*)( NCollection_Array2<TheItemType> &  ) ) &NCollection_Array2<TheItemType>::Move,
             R"#(Move assignment. This array will borrow all the data from theOther. The moved object will be left unitialized and should not be used anymore.)#"  , py::arg("theOther"))
        .def("Value",
             (const TheItemType & (NCollection_Array2<TheItemType>::*)( const Standard_Integer ,  const Standard_Integer  ) const) &NCollection_Array2<TheItemType>::Value,
             R"#(Constant value access)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("ChangeValue",
             (TheItemType & (NCollection_Array2<TheItemType>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &NCollection_Array2<TheItemType>::ChangeValue,
             R"#(Variable value access)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("SetValue",
             (void (NCollection_Array2<TheItemType>::*)( const Standard_Integer ,  const Standard_Integer ,  const TheItemType &  ) ) &NCollection_Array2<TheItemType>::SetValue,
             R"#(SetValue)#"  , py::arg("theRow"),  py::arg("theCol"),  py::arg("theItem"))
        .def("Resize",
             (void (NCollection_Array2<TheItemType>::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Integer ,  Standard_Boolean  ) ) &NCollection_Array2<TheItemType>::Resize,
             R"#(Resizes the array to specified bounds. No re-allocation will be done if length of array does not change, but existing values will not be discarded if theToCopyData set to FALSE.)#"  , py::arg("theRowLower"),  py::arg("theRowUpper"),  py::arg("theColLower"),  py::arg("theColUpper"),  py::arg("theToCopyData"))
    ;
};
// ./opencascade/NCollection_DefineHArray1.hxx
// ./opencascade/NCollection_List.hxx

template <typename TheItemType>
void preregister_template_NCollection_List(py::object &m, const char *name){
    py::class_<NCollection_List<TheItemType> , shared_ptr<NCollection_List<TheItemType>> >(m,name,R"#(Purpose: Simple list to link items together keeping the first and the last one. Inherits BaseList, adding the data item to each node.)#");
}

template <typename TheItemType>
void register_template_NCollection_List(py::object &m, const char *name){
    static_cast<py::class_<NCollection_List<TheItemType> , shared_ptr<NCollection_List<TheItemType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def(py::init< const NCollection_List<TheItemType> & >()  , py::arg("theOther") )
        .def("Size",
             (Standard_Integer (NCollection_List<TheItemType>::*)() const) &NCollection_List<TheItemType>::Size,
             R"#(Size - Number of items)#" )
        .def("Assign",
             (NCollection_List<TheItemType> & (NCollection_List<TheItemType>::*)( const NCollection_List<TheItemType> &  ) ) &NCollection_List<TheItemType>::Assign,
             R"#(Replace this list by the items of another list (theOther parameter). This method does not change the internal allocator.)#"  , py::arg("theOther"))
        .def("Clear",
             (void (NCollection_List<TheItemType>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_List<TheItemType>::Clear,
             R"#(Clear this list)#"  , py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L))
        .def("First",
             (const TheItemType & (NCollection_List<TheItemType>::*)() const) &NCollection_List<TheItemType>::First,
             R"#(First item)#" )
        .def("First",
             (TheItemType & (NCollection_List<TheItemType>::*)() ) &NCollection_List<TheItemType>::First,
             R"#(First item (non-const))#" )
        .def("Last",
             (const TheItemType & (NCollection_List<TheItemType>::*)() const) &NCollection_List<TheItemType>::Last,
             R"#(Last item)#" )
        .def("Last",
             (TheItemType & (NCollection_List<TheItemType>::*)() ) &NCollection_List<TheItemType>::Last,
             R"#(Last item (non-const))#" )
        .def("Append",
             (TheItemType & (NCollection_List<TheItemType>::*)( const TheItemType &  ) ) &NCollection_List<TheItemType>::Append,
             R"#(Append one item at the end)#"  , py::arg("theItem"))
        .def("Append",
             (void (NCollection_List<TheItemType>::*)( const TheItemType & ,  NCollection_TListIterator<TheItemType> &  ) ) &NCollection_List<TheItemType>::Append,
             R"#(Append one item at the end and output iterator pointing at the appended item)#"  , py::arg("theItem"),  py::arg("theIter"))
        .def("Append",
             (void (NCollection_List<TheItemType>::*)( NCollection_List<TheItemType> &  ) ) &NCollection_List<TheItemType>::Append,
             R"#(Append another list at the end. After this operation, theOther list will be cleared.)#"  , py::arg("theOther"))
        .def("Prepend",
             (TheItemType & (NCollection_List<TheItemType>::*)( const TheItemType &  ) ) &NCollection_List<TheItemType>::Prepend,
             R"#(Prepend one item at the beginning)#"  , py::arg("theItem"))
        .def("Prepend",
             (void (NCollection_List<TheItemType>::*)( NCollection_List<TheItemType> &  ) ) &NCollection_List<TheItemType>::Prepend,
             R"#(Prepend another list at the beginning)#"  , py::arg("theOther"))
        .def("RemoveFirst",
             (void (NCollection_List<TheItemType>::*)() ) &NCollection_List<TheItemType>::RemoveFirst,
             R"#(RemoveFirst item)#" )
        .def("Remove",
             (void (NCollection_List<TheItemType>::*)( NCollection_TListIterator<TheItemType> &  ) ) &NCollection_List<TheItemType>::Remove,
             R"#(Remove item pointed by iterator theIter; theIter is then set to the next item)#"  , py::arg("theIter"))
        .def("InsertBefore",
             (TheItemType & (NCollection_List<TheItemType>::*)( const TheItemType & ,  NCollection_TListIterator<TheItemType> &  ) ) &NCollection_List<TheItemType>::InsertBefore,
             R"#(InsertBefore)#"  , py::arg("theItem"),  py::arg("theIter"))
        .def("InsertBefore",
             (void (NCollection_List<TheItemType>::*)( NCollection_List<TheItemType> & ,  NCollection_TListIterator<TheItemType> &  ) ) &NCollection_List<TheItemType>::InsertBefore,
             R"#(InsertBefore)#"  , py::arg("theOther"),  py::arg("theIter"))
        .def("InsertAfter",
             (TheItemType & (NCollection_List<TheItemType>::*)( const TheItemType & ,  NCollection_TListIterator<TheItemType> &  ) ) &NCollection_List<TheItemType>::InsertAfter,
             R"#(InsertAfter)#"  , py::arg("theItem"),  py::arg("theIter"))
        .def("InsertAfter",
             (void (NCollection_List<TheItemType>::*)( NCollection_List<TheItemType> & ,  NCollection_TListIterator<TheItemType> &  ) ) &NCollection_List<TheItemType>::InsertAfter,
             R"#(InsertAfter)#"  , py::arg("theOther"),  py::arg("theIter"))
        .def("Reverse",
             (void (NCollection_List<TheItemType>::*)() ) &NCollection_List<TheItemType>::Reverse,
             R"#(Reverse the list)#" )
        .def("__iter__",[](const NCollection_List<TheItemType> &self)
             { return py::make_iterator<py::return_value_policy::copy>(self.begin(), self.end()); },
             py::keep_alive<0, 1>())
    ;
};
// ./opencascade/NCollection_TListNode.hxx

template <typename TheItemType>
void preregister_template_NCollection_TListNode(py::object &m, const char *name){
    py::class_<NCollection_TListNode<TheItemType> , shared_ptr<NCollection_TListNode<TheItemType>> >(m,name,R"#(Purpose: Abstract list node class. Used by BaseList Remark: Internal class)#");
}

template <typename TheItemType>
void register_template_NCollection_TListNode(py::object &m, const char *name){
    static_cast<py::class_<NCollection_TListNode<TheItemType> , shared_ptr<NCollection_TListNode<TheItemType>> >>(m.attr(name))
        .def(py::init< const TheItemType &,NCollection_ListNode * >()  , py::arg("theItem"),  py::arg("theNext")=static_cast<NCollection_ListNode *>(NULL) )
        .def("Value",
             (const TheItemType & (NCollection_TListNode<TheItemType>::*)() const) &NCollection_TListNode<TheItemType>::Value,
             R"#(Constant value access)#" )
        .def("ChangeValue",
             (TheItemType & (NCollection_TListNode<TheItemType>::*)() ) &NCollection_TListNode<TheItemType>::ChangeValue,
             R"#(Variable value access)#" )
        .def_static("delNode_s",
                    (void (*)( NCollection_ListNode * ,  opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_TListNode<TheItemType>::delNode,
                    R"#(Static deleter to be passed to BaseList)#"  , py::arg("theNode"),  py::arg("theAl"))
    ;
};
// ./opencascade/NCollection_WinHeapAllocator.hxx
// ./opencascade/NCollection_CellFilter.hxx

template <typename Inspector>
void preregister_template_NCollection_CellFilter(py::object &m, const char *name){
    py::class_<NCollection_CellFilter<Inspector> , shared_ptr<NCollection_CellFilter<Inspector>> >(m,name,R"#(A data structure for sorting geometric objects (called targets) in n-dimensional space into cells, with associated algorithm for fast checking of coincidence (overlapping, intersection, etc.) with other objects (called here bullets).)#");
}

template <typename Inspector>
void register_template_NCollection_CellFilter(py::object &m, const char *name){
    static_cast<py::class_<NCollection_CellFilter<Inspector> , shared_ptr<NCollection_CellFilter<Inspector>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const Standard_Real,const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theDim"),  py::arg("theCellSize")=static_cast<const Standard_Real>(0),  py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_IncAllocator> &>(0) )
        .def(py::init< const Standard_Real,const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theCellSize")=static_cast<const Standard_Real>(0),  py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_IncAllocator> &>(0) )
        .def("Reset",
             (void (NCollection_CellFilter<Inspector>::*)( Standard_Real ,  const opencascade::handle<NCollection_IncAllocator> &  ) ) &NCollection_CellFilter<Inspector>::Reset,
             R"#(Clear the data structures, set new cell size and allocator)#"  , py::arg("theCellSize"),  py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_IncAllocator> &>(0))
        .def("Reset",
             (void (NCollection_CellFilter<Inspector>::*)( NCollection_Array1<Standard_Real> & ,  const opencascade::handle<NCollection_IncAllocator> &  ) ) &NCollection_CellFilter<Inspector>::Reset,
             R"#(Clear the data structures and set new cell sizes and allocator)#"  , py::arg("theCellSize"),  py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_IncAllocator> &>(0))
        .def("Add",
             (void (NCollection_CellFilter<Inspector>::*)(  const typename Inspector::Target & ,   const typename Inspector::Point &  ) ) &NCollection_CellFilter<Inspector>::Add,
             R"#(Adds a target object for further search at a point (into only one cell))#"  , py::arg("theTarget"),  py::arg("thePnt"))
        .def("Add",
             (void (NCollection_CellFilter<Inspector>::*)(  const typename Inspector::Target & ,   const typename Inspector::Point & ,   const typename Inspector::Point &  ) ) &NCollection_CellFilter<Inspector>::Add,
             R"#(Adds a target object for further search in the range of cells defined by two points (the first point must have all co-ordinates equal or less than the same co-ordinate of the second point))#"  , py::arg("theTarget"),  py::arg("thePntMin"),  py::arg("thePntMax"))
        .def("Remove",
             (void (NCollection_CellFilter<Inspector>::*)(  const typename Inspector::Target & ,   const typename Inspector::Point &  ) ) &NCollection_CellFilter<Inspector>::Remove,
             R"#(Find a target object at a point and remove it from the structures. For usage of this method "operator ==" should be defined for Target.)#"  , py::arg("theTarget"),  py::arg("thePnt"))
        .def("Remove",
             (void (NCollection_CellFilter<Inspector>::*)(  const typename Inspector::Target & ,   const typename Inspector::Point & ,   const typename Inspector::Point &  ) ) &NCollection_CellFilter<Inspector>::Remove,
             R"#(Find a target object in the range of cells defined by two points and remove it from the structures (the first point must have all co-ordinates equal or less than the same co-ordinate of the second point). For usage of this method "operator ==" should be defined for Target.)#"  , py::arg("theTarget"),  py::arg("thePntMin"),  py::arg("thePntMax"))
        .def("Inspect",
             (void (NCollection_CellFilter<Inspector>::*)(  const typename Inspector::Point & ,  Inspector &  ) ) &NCollection_CellFilter<Inspector>::Inspect,
             R"#(Inspect all targets in the cell corresponding to the given point)#"  , py::arg("thePnt"),  py::arg("theInspector"))
        .def("Inspect",
             (void (NCollection_CellFilter<Inspector>::*)(  const typename Inspector::Point & ,   const typename Inspector::Point & ,  Inspector &  ) ) &NCollection_CellFilter<Inspector>::Inspect,
             R"#(Inspect all targets in the cells range limited by two given points (the first point must have all co-ordinates equal or less than the same co-ordinate of the second point))#"  , py::arg("thePntMin"),  py::arg("thePntMax"),  py::arg("theInspector"))
    ;
};
// ./opencascade/NCollection_DefineVector.hxx
// ./opencascade/NCollection_Vec4.hxx

template <typename Element_t>
void preregister_template_NCollection_Vec4(py::object &m, const char *name){
    py::class_<NCollection_Vec4<Element_t> , shared_ptr<NCollection_Vec4<Element_t>> >(m,name,R"#(Generic 4-components vector. To be used as RGBA color vector or XYZW 3D-point with special W-component for operations with projection / model view matrices. Use this class for 3D-points carefully because declared W-component may results in incorrect results if used without matrices.)#");
}

template <typename Element_t>
void register_template_NCollection_Vec4(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Vec4<Element_t> , shared_ptr<NCollection_Vec4<Element_t>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Element_t >()  , py::arg("theValue") )
        .def(py::init< const Element_t,const Element_t,const Element_t,const Element_t >()  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theW") )
        .def(py::init< const NCollection_Vec2<Element_t> & >()  , py::arg("theVec2") )
        .def(py::init< const NCollection_Vec3<Element_t> &,const Element_t >()  , py::arg("theVec3"),  py::arg("theW")=static_cast<const Element_t>(Element_t ( 0 )) )
        .def("SetValues",
             (void (NCollection_Vec4<Element_t>::*)( const Element_t ,  const Element_t ,  const Element_t ,  const Element_t  ) ) &NCollection_Vec4<Element_t>::SetValues,
             R"#(Assign new values to the vector.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theW"))
        .def("SetValues",
             (void (NCollection_Vec4<Element_t>::*)( const NCollection_Vec3<Element_t> & ,  const Element_t  ) ) &NCollection_Vec4<Element_t>::SetValues,
             R"#(Assign new values as 3-component vector and a 4-th value.)#"  , py::arg("theVec3"),  py::arg("theW"))
        .def("x",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::x,
             R"#(Alias to 1st component as X coordinate in XYZW.)#" )
        .def("r",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::r,
             R"#(Alias to 1st component as RED channel in RGBA.)#" )
        .def("y",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::y,
             R"#(Alias to 2nd component as Y coordinate in XYZW.)#" )
        .def("g",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::g,
             R"#(Alias to 2nd component as GREEN channel in RGBA.)#" )
        .def("z",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::z,
             R"#(Alias to 3rd component as Z coordinate in XYZW.)#" )
        .def("b",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::b,
             R"#(Alias to 3rd component as BLUE channel in RGBA.)#" )
        .def("w",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::w,
             R"#(Alias to 4th component as W coordinate in XYZW.)#" )
        .def("a",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::a,
             R"#(Alias to 4th component as ALPHA channel in RGBA.)#" )
        .def("xy",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xy,
             R"#(None)#" )
        .def("yx",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::yx,
             R"#(None)#" )
        .def("xz",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xz,
             R"#(None)#" )
        .def("zx",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zx,
             R"#(None)#" )
        .def("xw",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xw,
             R"#(None)#" )
        .def("wx",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wx,
             R"#(None)#" )
        .def("yz",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::yz,
             R"#(None)#" )
        .def("zy",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zy,
             R"#(None)#" )
        .def("yw",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::yw,
             R"#(None)#" )
        .def("wy",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wy,
             R"#(None)#" )
        .def("zw",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zw,
             R"#(None)#" )
        .def("wz",
             (const NCollection_Vec2<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wz,
             R"#(None)#" )
        .def("xyz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xyz,
             R"#(None)#" )
        .def("xzy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xzy,
             R"#(None)#" )
        .def("yxz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::yxz,
             R"#(None)#" )
        .def("yzx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::yzx,
             R"#(None)#" )
        .def("zyx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zyx,
             R"#(None)#" )
        .def("zxy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zxy,
             R"#(None)#" )
        .def("xyw",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xyw,
             R"#(None)#" )
        .def("xwy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xwy,
             R"#(None)#" )
        .def("yxw",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::yxw,
             R"#(None)#" )
        .def("ywx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::ywx,
             R"#(None)#" )
        .def("wyx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wyx,
             R"#(None)#" )
        .def("wxy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wxy,
             R"#(None)#" )
        .def("xzw",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xzw,
             R"#(None)#" )
        .def("xwz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::xwz,
             R"#(None)#" )
        .def("zxw",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zxw,
             R"#(None)#" )
        .def("zwx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zwx,
             R"#(None)#" )
        .def("wzx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wzx,
             R"#(None)#" )
        .def("wxz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wxz,
             R"#(None)#" )
        .def("yzw",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::yzw,
             R"#(None)#" )
        .def("ywz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::ywz,
             R"#(None)#" )
        .def("zyw",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zyw,
             R"#(None)#" )
        .def("zwy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::zwy,
             R"#(None)#" )
        .def("wzy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wzy,
             R"#(None)#" )
        .def("wyz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::wyz,
             R"#(None)#" )
        .def("rgb",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::rgb,
             R"#(None)#" )
        .def("rbg",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::rbg,
             R"#(None)#" )
        .def("grb",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::grb,
             R"#(None)#" )
        .def("gbr",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::gbr,
             R"#(None)#" )
        .def("bgr",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::bgr,
             R"#(None)#" )
        .def("brg",
             (const NCollection_Vec3<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::brg,
             R"#(None)#" )
        .def("x",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::x,
             R"#(Alias to 1st component as X coordinate in XYZW.)#" )
        .def("r",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::r,
             R"#(Alias to 1st component as RED channel in RGBA.)#" )
        .def("y",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::y,
             R"#(Alias to 2nd component as Y coordinate in XYZW.)#" )
        .def("g",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::g,
             R"#(Alias to 2nd component as GREEN channel in RGBA.)#" )
        .def("z",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::z,
             R"#(Alias to 3rd component as Z coordinate in XYZW.)#" )
        .def("b",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::b,
             R"#(Alias to 3rd component as BLUE channel in RGBA.)#" )
        .def("w",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::w,
             R"#(Alias to 4th component as W coordinate in XYZW.)#" )
        .def("a",
             (Element_t & (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::a,
             R"#(Alias to 4th component as ALPHA channel in RGBA.)#" )
        .def("IsEqual",
             (bool (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) const) &NCollection_Vec4<Element_t>::IsEqual,
             R"#(Check this vector with another vector for equality (without tolerance!).)#"  , py::arg("theOther"))
        .def("GetData",
             (const Element_t * (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::GetData,
             R"#(Raw access to the data (for OpenGL exchange).)#" )
        .def("ChangeData",
             (Element_t * (NCollection_Vec4<Element_t>::*)() ) &NCollection_Vec4<Element_t>::ChangeData,
             R"#(None)#" )
        .def("Multiply",
             (void (NCollection_Vec4<Element_t>::*)( const Element_t  ) ) &NCollection_Vec4<Element_t>::Multiply,
             R"#(Compute per-component multiplication.)#"  , py::arg("theFactor"))
        .def("Multiplied",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)( const Element_t  ) const) &NCollection_Vec4<Element_t>::Multiplied,
             R"#(Compute per-component multiplication.)#"  , py::arg("theFactor"))
        .def("cwiseMin",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) const) &NCollection_Vec4<Element_t>::cwiseMin,
             R"#(Compute component-wise minimum of two vectors.)#"  , py::arg("theVec"))
        .def("cwiseMax",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) const) &NCollection_Vec4<Element_t>::cwiseMax,
             R"#(Compute component-wise maximum of two vectors.)#"  , py::arg("theVec"))
        .def("cwiseAbs",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::cwiseAbs,
             R"#(Compute component-wise modulus of the vector.)#" )
        .def("maxComp",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::maxComp,
             R"#(Compute maximum component of the vector.)#" )
        .def("minComp",
             (Element_t (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::minComp,
             R"#(Compute minimum component of the vector.)#" )
        .def("Dot",
             (Element_t (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) const) &NCollection_Vec4<Element_t>::Dot,
             R"#(Computes the dot product.)#"  , py::arg("theOther"))
        .def_static("Length_s",
                    (int (*)() ) &NCollection_Vec4<Element_t>::Length,
                    R"#(Returns the number of components.)#" )
        .def("__iadd__",
             (NCollection_Vec4<Element_t> & (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) ) &NCollection_Vec4<Element_t>::operator+=,
             py::is_operator(),
             R"#(Compute per-component summary.)#"  , py::arg("theAdd"))
        .def("__sub__",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)() const) &NCollection_Vec4<Element_t>::operator-,
             py::is_operator(),
             R"#(Unary -.)#" )
        .def("__isub__",
             (NCollection_Vec4<Element_t> & (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) ) &NCollection_Vec4<Element_t>::operator-=,
             py::is_operator(),
             R"#(Compute per-component subtraction.)#"  , py::arg("theDec"))
        .def("__imul__",
             (NCollection_Vec4<Element_t> & (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) ) &NCollection_Vec4<Element_t>::operator*=,
             py::is_operator(),
             R"#(Compute per-component multiplication.)#"  , py::arg("theRight"))
        .def("__imul__",
             (NCollection_Vec4<Element_t> & (NCollection_Vec4<Element_t>::*)( const Element_t  ) ) &NCollection_Vec4<Element_t>::operator*=,
             py::is_operator(),
             R"#(Compute per-component multiplication.)#"  , py::arg("theFactor"))
        .def("__mul__",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)( const Element_t  ) const) &NCollection_Vec4<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-component multiplication.)#"  , py::arg("theFactor"))
        .def("__rmul__",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)( const Element_t  ) const) &NCollection_Vec4<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-component multiplication.)#"  , py::arg("theFactor"))
        .def("__itruediv__",
             (NCollection_Vec4<Element_t> & (NCollection_Vec4<Element_t>::*)( const Element_t  ) ) &NCollection_Vec4<Element_t>::operator/=,
             py::is_operator(),
             R"#(Compute per-component division by scale factor.)#"  , py::arg("theInvFactor"))
        .def("__itruediv__",
             (NCollection_Vec4<Element_t> & (NCollection_Vec4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) ) &NCollection_Vec4<Element_t>::operator/=,
             py::is_operator(),
             R"#(Compute per-component division.)#"  , py::arg("theRight"))
        .def("__truediv__",
             (NCollection_Vec4<Element_t> (NCollection_Vec4<Element_t>::*)( const Element_t  ) ) &NCollection_Vec4<Element_t>::operator/,
             py::is_operator(),
             R"#(Compute per-component division by scale factor.)#"  , py::arg("theInvFactor"))
    ;
};
// ./opencascade/NCollection_Vec2.hxx

template <typename Element_t>
void preregister_template_NCollection_Vec2(py::object &m, const char *name){
    py::class_<NCollection_Vec2<Element_t> , shared_ptr<NCollection_Vec2<Element_t>> >(m,name,R"#(Defines the 2D-vector template. The main target for this class - to handle raw low-level arrays (from/to graphic driver etc.).)#");
}

template <typename Element_t>
void register_template_NCollection_Vec2(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Vec2<Element_t> , shared_ptr<NCollection_Vec2<Element_t>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Element_t >()  , py::arg("theXY") )
        .def(py::init< const Element_t,const Element_t >()  , py::arg("theX"),  py::arg("theY") )
        .def("SetValues",
             (void (NCollection_Vec2<Element_t>::*)( const Element_t ,  const Element_t  ) ) &NCollection_Vec2<Element_t>::SetValues,
             R"#(Assign new values to the vector.)#"  , py::arg("theX"),  py::arg("theY"))
        .def("x",
             (Element_t (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::x,
             R"#(Alias to 1st component as X coordinate in XY.)#" )
        .def("y",
             (Element_t (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::y,
             R"#(Alias to 2nd component as Y coordinate in XY.)#" )
        .def("xy",
             (const NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::xy,
             R"#(None)#" )
        .def("yx",
             (const NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::yx,
             R"#(None)#" )
        .def("x",
             (Element_t & (NCollection_Vec2<Element_t>::*)() ) &NCollection_Vec2<Element_t>::x,
             R"#(Alias to 1st component as X coordinate in XY.)#" )
        .def("y",
             (Element_t & (NCollection_Vec2<Element_t>::*)() ) &NCollection_Vec2<Element_t>::y,
             R"#(Alias to 2nd component as Y coordinate in XY.)#" )
        .def("IsEqual",
             (bool (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) const) &NCollection_Vec2<Element_t>::IsEqual,
             R"#(Check this vector with another vector for equality (without tolerance!).)#"  , py::arg("theOther"))
        .def("GetData",
             (const Element_t * (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::GetData,
             R"#(Raw access to the data (for OpenGL exchange).)#" )
        .def("ChangeData",
             (Element_t * (NCollection_Vec2<Element_t>::*)() ) &NCollection_Vec2<Element_t>::ChangeData,
             R"#(None)#" )
        .def("Multiply",
             (void (NCollection_Vec2<Element_t>::*)( const Element_t  ) ) &NCollection_Vec2<Element_t>::Multiply,
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("Multiplied",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)( const Element_t  ) const) &NCollection_Vec2<Element_t>::Multiplied,
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("cwiseMin",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) const) &NCollection_Vec2<Element_t>::cwiseMin,
             R"#(Compute component-wise minimum of two vectors.)#"  , py::arg("theVec"))
        .def("cwiseMax",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) const) &NCollection_Vec2<Element_t>::cwiseMax,
             R"#(Compute component-wise maximum of two vectors.)#"  , py::arg("theVec"))
        .def("cwiseAbs",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::cwiseAbs,
             R"#(Compute component-wise modulus of the vector.)#" )
        .def("maxComp",
             (Element_t (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::maxComp,
             R"#(Compute maximum component of the vector.)#" )
        .def("minComp",
             (Element_t (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::minComp,
             R"#(Compute minimum component of the vector.)#" )
        .def("Dot",
             (Element_t (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) const) &NCollection_Vec2<Element_t>::Dot,
             R"#(Computes the dot product.)#"  , py::arg("theOther"))
        .def("Modulus",
             (Element_t (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::Modulus,
             R"#(Computes the vector modulus (magnitude, length).)#" )
        .def("SquareModulus",
             (Element_t (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::SquareModulus,
             R"#(Computes the square of vector modulus (magnitude, length). This method may be used for performance tricks.)#" )
        .def_static("Length_s",
                    (int (*)() ) &NCollection_Vec2<Element_t>::Length,
                    R"#(Returns the number of components.)#" )
        .def_static("DX_s",
                    (NCollection_Vec2<Element_t> (*)() ) &NCollection_Vec2<Element_t>::DX,
                    R"#(Constuct DX unit vector.)#" )
        .def_static("DY_s",
                    (NCollection_Vec2<Element_t> (*)() ) &NCollection_Vec2<Element_t>::DY,
                    R"#(Constuct DY unit vector.)#" )
        .def("__iadd__",
             (NCollection_Vec2<Element_t> & (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) ) &NCollection_Vec2<Element_t>::operator+=,
             py::is_operator(),
             R"#(Compute per-component summary.)#"  , py::arg("theAdd"))
        .def("__isub__",
             (NCollection_Vec2<Element_t> & (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) ) &NCollection_Vec2<Element_t>::operator-=,
             py::is_operator(),
             R"#(Compute per-component subtraction.)#"  , py::arg("theDec"))
        .def("__sub__",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)() const) &NCollection_Vec2<Element_t>::operator-,
             py::is_operator(),
             R"#(Unary -.)#" )
        .def("__imul__",
             (NCollection_Vec2<Element_t> & (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) ) &NCollection_Vec2<Element_t>::operator*=,
             py::is_operator(),
             R"#(Compute per-component multiplication.)#"  , py::arg("theRight"))
        .def("__imul__",
             (NCollection_Vec2<Element_t> & (NCollection_Vec2<Element_t>::*)( const Element_t  ) ) &NCollection_Vec2<Element_t>::operator*=,
             py::is_operator(),
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("__itruediv__",
             (NCollection_Vec2<Element_t> & (NCollection_Vec2<Element_t>::*)( const Element_t  ) ) &NCollection_Vec2<Element_t>::operator/=,
             py::is_operator(),
             R"#(Compute per-component division by scale factor.)#"  , py::arg("theInvFactor"))
        .def("__itruediv__",
             (NCollection_Vec2<Element_t> & (NCollection_Vec2<Element_t>::*)( const NCollection_Vec2<Element_t> &  ) ) &NCollection_Vec2<Element_t>::operator/=,
             py::is_operator(),
             R"#(Compute per-component division.)#"  , py::arg("theRight"))
        .def("__mul__",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)( const Element_t  ) const) &NCollection_Vec2<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("__rmul__",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)( const Element_t  ) const) &NCollection_Vec2<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("__truediv__",
             (NCollection_Vec2<Element_t> (NCollection_Vec2<Element_t>::*)( const Element_t  ) const) &NCollection_Vec2<Element_t>::operator/,
             py::is_operator(),
             R"#(Compute per-component division by scale factor.)#"  , py::arg("theInvFactor"))
    ;
};
// ./opencascade/NCollection_DefineHSequence.hxx
// ./opencascade/NCollection_IndexedMap.hxx

template <typename TheKeyType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void preregister_template_NCollection_IndexedMap(py::object &m, const char *name){
    py::class_<NCollection_IndexedMap<TheKeyType,Hasher> , shared_ptr<NCollection_IndexedMap<TheKeyType,Hasher>> >(m,name,R"#(Purpose: An indexed map is used to store keys and to bind an index to them. Each new key stored in the map gets an index. Index are incremented as keys are stored in the map. A key can be found by the index and an index by the key. No key but the last can be removed so the indices are in the range 1..Extent. See the class Map from NCollection for a discussion about the number of buckets.)#");
}

template <typename TheKeyType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void register_template_NCollection_IndexedMap(py::object &m, const char *name){
    static_cast<py::class_<NCollection_IndexedMap<TheKeyType,Hasher> , shared_ptr<NCollection_IndexedMap<TheKeyType,Hasher>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theNbBuckets"),  py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def(py::init< const NCollection_IndexedMap<TheKeyType, Hasher> & >()  , py::arg("theOther") )
        .def("Exchange",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)( NCollection_IndexedMap<TheKeyType, Hasher> &  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::Exchange,
             R"#(Exchange the content of two maps without re-allocations. Notice that allocators will be swapped as well!)#"  , py::arg("theOther"))
        .def("Assign",
             (NCollection_IndexedMap<TheKeyType, Hasher> & (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const NCollection_IndexedMap<TheKeyType, Hasher> &  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::Assign,
             R"#(Assign. This method does not change the internal allocator.)#"  , py::arg("theOther"))
        .def("ReSize",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const Standard_Integer  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::ReSize,
             R"#(ReSize)#"  , py::arg("theExtent"))
        .def("Add",
             (Standard_Integer (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::Add,
             R"#(Add)#"  , py::arg("theKey1"))
        .def("Contains",
             (Standard_Boolean (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_IndexedMap<TheKeyType,Hasher>::Contains,
             R"#(Contains)#"  , py::arg("theKey1"))
        .def("Substitute",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const Standard_Integer ,  const TheKeyType &  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::Substitute,
             R"#(Substitute)#"  , py::arg("theIndex"),  py::arg("theKey1"))
        .def("Swap",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::Swap,
             R"#(Swaps two elements with the given indices.)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("RemoveLast",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)() ) &NCollection_IndexedMap<TheKeyType,Hasher>::RemoveLast,
             R"#(RemoveLast)#" )
        .def("RemoveFromIndex",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const Standard_Integer  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::RemoveFromIndex,
             R"#(Remove the key of the given index. Caution! The index of the last key can be changed.)#"  , py::arg("theIndex"))
        .def("RemoveKey",
             (Standard_Boolean (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::RemoveKey,
             R"#(Remove the given key. Caution! The index of the last key can be changed.)#"  , py::arg("theKey1"))
        .def("FindKey",
             (const TheKeyType & (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const Standard_Integer  ) const) &NCollection_IndexedMap<TheKeyType,Hasher>::FindKey,
             R"#(FindKey)#"  , py::arg("theIndex"))
        .def("FindIndex",
             (Standard_Integer (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_IndexedMap<TheKeyType,Hasher>::FindIndex,
             R"#(FindIndex)#"  , py::arg("theKey1"))
        .def("Clear",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const Standard_Boolean  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::Clear,
             R"#(Clear data. If doReleaseMemory is false then the table of buckets is not released and will be reused.)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (NCollection_IndexedMap<TheKeyType,Hasher>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_IndexedMap<TheKeyType,Hasher>::Clear,
             R"#(Clear data and reset allocator)#"  , py::arg("theAllocator"))
        .def("Size",
             (Standard_Integer (NCollection_IndexedMap<TheKeyType,Hasher>::*)() const) &NCollection_IndexedMap<TheKeyType,Hasher>::Size,
             R"#(Size)#" )
    ;
};
// ./opencascade/NCollection_Handle.hxx

template <typename T>
void preregister_template_NCollection_Handle(py::object &m, const char *name){
    py::class_<NCollection_Handle<T> , shared_ptr<NCollection_Handle<T>> >(m,name,R"#(Purpose: This template class is used to define Handle adaptor for allocated dynamically objects of arbitrary type.)#");
}

template <typename T>
void register_template_NCollection_Handle(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Handle<T> , shared_ptr<NCollection_Handle<T>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< T * >()  , py::arg("theObject") )
        .def("get",
             (T * (NCollection_Handle<T>::*)() ) &NCollection_Handle<T>::get,
             R"#(Cast handle to contained type)#" )
        .def("get",
             (const T * (NCollection_Handle<T>::*)() const) &NCollection_Handle<T>::get,
             R"#(Cast handle to contained type)#" )
        .def_static("DownCast_s",
                    (NCollection_Handle<T> (*)( const opencascade::handle<Standard_Transient> &  ) ) &NCollection_Handle<T>::DownCast,
                    R"#(Downcast arbitrary Handle to the argument type if contained object is Handle for this type; returns null otherwise)#"  , py::arg("theOther"))
        .def("__mul__",
             (T & (NCollection_Handle<T>::*)() ) &NCollection_Handle<T>::operator*,
             py::is_operator(),
             R"#(Cast handle to contained type)#" )
        .def("__rmul__",
             (T & (NCollection_Handle<T>::*)() ) &NCollection_Handle<T>::operator*,
             py::is_operator(),
             R"#(Cast handle to contained type)#" )
        .def("__mul__",
             (const T & (NCollection_Handle<T>::*)() const) &NCollection_Handle<T>::operator*,
             py::is_operator(),
             R"#(Cast handle to contained type)#" )
        .def("__rmul__",
             (const T & (NCollection_Handle<T>::*)() const) &NCollection_Handle<T>::operator*,
             py::is_operator(),
             R"#(Cast handle to contained type)#" )
    ;
};
// ./opencascade/NCollection_StlIterator.hxx

template <typename Category,typename BaseIterator,typename ItemType,bool IsConstant>
void preregister_template_NCollection_StlIterator(py::object &m, const char *name){
    py::class_<NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant> , shared_ptr<NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>> >(m,name,R"#(Helper class that allows to use NCollection iterators as STL iterators. NCollection iterator can be extended to STL iterator of any category by adding necessary methods: STL forward iterator requires IsEqual method, STL bidirectional iterator requires Previous method, and STL random access iterator requires Offset and Differ methods. See NCollection_Vector as example of declaring custom STL iterators.)#");
}

template <typename Category,typename BaseIterator,typename ItemType,bool IsConstant>
void register_template_NCollection_StlIterator(py::object &m, const char *name){
    static_cast<py::class_<NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant> , shared_ptr<NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const BaseIterator & >()  , py::arg("theIterator") )
        .def(py::init< const NCollection_StlIterator<Category, BaseIterator, ItemType, false> & >()  , py::arg("theIterator") )
        .def("Iterator",
             (const BaseIterator & (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)() const) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::Iterator,
             R"#(Access to NCollection iterator instance)#" )
        .def("ChangeIterator",
             (BaseIterator & (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)() ) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::ChangeIterator,
             R"#(Access to NCollection iterator instance)#" )
        .def("__mul__",
             (typename NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant>::reference (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)() const) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::operator*,
             py::is_operator(),
             R"#(Get reference to current item)#" )
        .def("__rmul__",
             (typename NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant>::reference (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)() const) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::operator*,
             py::is_operator(),
             R"#(Get reference to current item)#" )
        .def("__iadd__",
             (NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant> & (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)( typename NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant>::difference_type  ) ) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::operator+=,
             py::is_operator(),
             R"#(Move forward)#"  , py::arg("theOffset"))
        .def("__add__",
             (NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant> (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)( typename NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant>::difference_type  ) const) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::operator+,
             py::is_operator(),
             R"#(Addition)#"  , py::arg("theOffset"))
        .def("__isub__",
             (NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant> & (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)( typename NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant>::difference_type  ) ) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::operator-=,
             py::is_operator(),
             R"#(Move backward)#"  , py::arg("theOffset"))
        .def("__sub__",
             (NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant> (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)( typename NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant>::difference_type  ) const) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::operator-,
             py::is_operator(),
             R"#(Decrease)#"  , py::arg("theOffset"))
        .def("__sub__",
             (typename NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant>::difference_type (NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::*)( const NCollection_StlIterator<Category, BaseIterator, ItemType, IsConstant> &  ) const) &NCollection_StlIterator<Category,BaseIterator,ItemType,IsConstant>::operator-,
             py::is_operator(),
             R"#(Difference)#"  , py::arg("theOther"))
    ;
};
// ./opencascade/NCollection_Vec3.hxx

template <typename Element_t>
void preregister_template_NCollection_Vec3(py::object &m, const char *name){
    py::class_<NCollection_Vec3<Element_t> , shared_ptr<NCollection_Vec3<Element_t>> >(m,name,R"#(Generic 3-components vector. To be used as RGB color pixel or XYZ 3D-point. The main target for this class - to handle raw low-level arrays (from/to graphic driver etc.).)#");
}

template <typename Element_t>
void register_template_NCollection_Vec3(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Vec3<Element_t> , shared_ptr<NCollection_Vec3<Element_t>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< Element_t >()  , py::arg("theValue") )
        .def(py::init< const Element_t,const Element_t,const Element_t >()  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ") )
        .def(py::init< const NCollection_Vec2<Element_t> &,Element_t >()  , py::arg("theVec2"),  py::arg("theZ")=static_cast<Element_t>(Element_t ( 0 )) )
        .def("SetValues",
             (void (NCollection_Vec3<Element_t>::*)( const Element_t ,  const Element_t ,  const Element_t  ) ) &NCollection_Vec3<Element_t>::SetValues,
             R"#(Assign new values to the vector.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("SetValues",
             (void (NCollection_Vec3<Element_t>::*)( const NCollection_Vec2<Element_t> & ,  Element_t  ) ) &NCollection_Vec3<Element_t>::SetValues,
             R"#(Assign new values to the vector.)#"  , py::arg("theVec2"),  py::arg("theZ"))
        .def("x",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::x,
             R"#(Alias to 1st component as X coordinate in XYZ.)#" )
        .def("r",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::r,
             R"#(Alias to 1st component as RED channel in RGB.)#" )
        .def("y",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::y,
             R"#(Alias to 2nd component as Y coordinate in XYZ.)#" )
        .def("g",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::g,
             R"#(Alias to 2nd component as GREEN channel in RGB.)#" )
        .def("z",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::z,
             R"#(Alias to 3rd component as Z coordinate in XYZ.)#" )
        .def("b",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::b,
             R"#(Alias to 3rd component as BLUE channel in RGB.)#" )
        .def("xy",
             (const NCollection_Vec2<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::xy,
             R"#(None)#" )
        .def("yx",
             (const NCollection_Vec2<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::yx,
             R"#(None)#" )
        .def("xz",
             (const NCollection_Vec2<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::xz,
             R"#(None)#" )
        .def("zx",
             (const NCollection_Vec2<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::zx,
             R"#(None)#" )
        .def("yz",
             (const NCollection_Vec2<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::yz,
             R"#(None)#" )
        .def("zy",
             (const NCollection_Vec2<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::zy,
             R"#(None)#" )
        .def("xyz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::xyz,
             R"#(None)#" )
        .def("xzy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::xzy,
             R"#(None)#" )
        .def("yxz",
             (const NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::yxz,
             R"#(None)#" )
        .def("yzx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::yzx,
             R"#(None)#" )
        .def("zyx",
             (const NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::zyx,
             R"#(None)#" )
        .def("zxy",
             (const NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::zxy,
             R"#(None)#" )
        .def("x",
             (Element_t & (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::x,
             R"#(Alias to 1st component as X coordinate in XYZ.)#" )
        .def("r",
             (Element_t & (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::r,
             R"#(Alias to 1st component as RED channel in RGB.)#" )
        .def("y",
             (Element_t & (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::y,
             R"#(Alias to 2nd component as Y coordinate in XYZ.)#" )
        .def("g",
             (Element_t & (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::g,
             R"#(Alias to 2nd component as GREEN channel in RGB.)#" )
        .def("z",
             (Element_t & (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::z,
             R"#(Alias to 3rd component as Z coordinate in XYZ.)#" )
        .def("b",
             (Element_t & (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::b,
             R"#(Alias to 3rd component as BLUE channel in RGB.)#" )
        .def("IsEqual",
             (bool (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) const) &NCollection_Vec3<Element_t>::IsEqual,
             R"#(Check this vector with another vector for equality (without tolerance!).)#"  , py::arg("theOther"))
        .def("GetData",
             (const Element_t * (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::GetData,
             R"#(Raw access to the data (for OpenGL exchange).)#" )
        .def("ChangeData",
             (Element_t * (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::ChangeData,
             R"#(None)#" )
        .def("Multiply",
             (void (NCollection_Vec3<Element_t>::*)( const Element_t  ) ) &NCollection_Vec3<Element_t>::Multiply,
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("Multiplied",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)( const Element_t  ) const) &NCollection_Vec3<Element_t>::Multiplied,
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("cwiseMin",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) const) &NCollection_Vec3<Element_t>::cwiseMin,
             R"#(Compute component-wise minimum of two vectors.)#"  , py::arg("theVec"))
        .def("cwiseMax",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) const) &NCollection_Vec3<Element_t>::cwiseMax,
             R"#(Compute component-wise maximum of two vectors.)#"  , py::arg("theVec"))
        .def("cwiseAbs",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::cwiseAbs,
             R"#(Compute component-wise modulus of the vector.)#" )
        .def("maxComp",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::maxComp,
             R"#(Compute maximum component of the vector.)#" )
        .def("minComp",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::minComp,
             R"#(Compute minimum component of the vector.)#" )
        .def("Dot",
             (Element_t (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) const) &NCollection_Vec3<Element_t>::Dot,
             R"#(Computes the dot product.)#"  , py::arg("theOther"))
        .def("Modulus",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::Modulus,
             R"#(Computes the vector modulus (magnitude, length).)#" )
        .def("SquareModulus",
             (Element_t (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::SquareModulus,
             R"#(Computes the square of vector modulus (magnitude, length). This method may be used for performance tricks.)#" )
        .def("Normalize",
             (void (NCollection_Vec3<Element_t>::*)() ) &NCollection_Vec3<Element_t>::Normalize,
             R"#(Normalize the vector.)#" )
        .def("Normalized",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::Normalized,
             R"#(Normalize the vector.)#" )
        .def_static("Length_s",
                    (int (*)() ) &NCollection_Vec3<Element_t>::Length,
                    R"#(Returns the number of components.)#" )
        .def_static("Cross_s",
                    (NCollection_Vec3<Element_t> (*)( const NCollection_Vec3<Element_t> & ,  const NCollection_Vec3<Element_t> &  ) ) &NCollection_Vec3<Element_t>::Cross,
                    R"#(Computes the cross product.)#"  , py::arg("theVec1"),  py::arg("theVec2"))
        .def_static("GetLERP_s",
                    (NCollection_Vec3<Element_t> (*)( const NCollection_Vec3<Element_t> & ,  const NCollection_Vec3<Element_t> & ,  const Element_t  ) ) &NCollection_Vec3<Element_t>::GetLERP,
                    R"#(Compute linear interpolation between to vectors.)#"  , py::arg("theFrom"),  py::arg("theTo"),  py::arg("theT"))
        .def_static("DX_s",
                    (NCollection_Vec3<Element_t> (*)() ) &NCollection_Vec3<Element_t>::DX,
                    R"#(Constuct DX unit vector.)#" )
        .def_static("DY_s",
                    (NCollection_Vec3<Element_t> (*)() ) &NCollection_Vec3<Element_t>::DY,
                    R"#(Constuct DY unit vector.)#" )
        .def_static("DZ_s",
                    (NCollection_Vec3<Element_t> (*)() ) &NCollection_Vec3<Element_t>::DZ,
                    R"#(Constuct DZ unit vector.)#" )
        .def("__iadd__",
             (NCollection_Vec3<Element_t> & (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) ) &NCollection_Vec3<Element_t>::operator+=,
             py::is_operator(),
             R"#(Compute per-component summary.)#"  , py::arg("theAdd"))
        .def("__sub__",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)() const) &NCollection_Vec3<Element_t>::operator-,
             py::is_operator(),
             R"#(Unary -.)#" )
        .def("__isub__",
             (NCollection_Vec3<Element_t> & (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) ) &NCollection_Vec3<Element_t>::operator-=,
             py::is_operator(),
             R"#(Compute per-component subtraction.)#"  , py::arg("theDec"))
        .def("__imul__",
             (NCollection_Vec3<Element_t> & (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) ) &NCollection_Vec3<Element_t>::operator*=,
             py::is_operator(),
             R"#(Compute per-component multiplication.)#"  , py::arg("theRight"))
        .def("__imul__",
             (NCollection_Vec3<Element_t> & (NCollection_Vec3<Element_t>::*)( const Element_t  ) ) &NCollection_Vec3<Element_t>::operator*=,
             py::is_operator(),
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("__mul__",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)( const Element_t  ) const) &NCollection_Vec3<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("__rmul__",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)( const Element_t  ) const) &NCollection_Vec3<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-component multiplication by scale factor.)#"  , py::arg("theFactor"))
        .def("__itruediv__",
             (NCollection_Vec3<Element_t> & (NCollection_Vec3<Element_t>::*)( const Element_t  ) ) &NCollection_Vec3<Element_t>::operator/=,
             py::is_operator(),
             R"#(Compute per-component division by scale factor.)#"  , py::arg("theInvFactor"))
        .def("__itruediv__",
             (NCollection_Vec3<Element_t> & (NCollection_Vec3<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) ) &NCollection_Vec3<Element_t>::operator/=,
             py::is_operator(),
             R"#(Compute per-component division.)#"  , py::arg("theRight"))
        .def("__truediv__",
             (NCollection_Vec3<Element_t> (NCollection_Vec3<Element_t>::*)( const Element_t  ) const) &NCollection_Vec3<Element_t>::operator/,
             py::is_operator(),
             R"#(Compute per-component division by scale factor.)#"  , py::arg("theInvFactor"))
    ;
};
// ./opencascade/NCollection_ListNode.hxx
// ./opencascade/NCollection_LocalArray.hxx

template <typename theItem,Standard_Integer MAX_ARRAY_SIZE=1024>
void preregister_template_NCollection_LocalArray(py::object &m, const char *name){
    py::class_<NCollection_LocalArray<theItem,MAX_ARRAY_SIZE> , shared_ptr<NCollection_LocalArray<theItem,MAX_ARRAY_SIZE>> >(m,name,R"#(Auxiliary class optimizing creation of array buffer (using stack allocation for small arrays).)#");
}

template <typename theItem,Standard_Integer MAX_ARRAY_SIZE=1024>
void register_template_NCollection_LocalArray(py::object &m, const char *name){
    static_cast<py::class_<NCollection_LocalArray<theItem,MAX_ARRAY_SIZE> , shared_ptr<NCollection_LocalArray<theItem,MAX_ARRAY_SIZE>> >>(m.attr(name))
        .def(py::init< const size_t >()  , py::arg("theSize") )
        .def(py::init<  >()  )
        .def("Allocate",
             (void (NCollection_LocalArray<theItem,MAX_ARRAY_SIZE>::*)( const size_t  ) ) &NCollection_LocalArray<theItem,MAX_ARRAY_SIZE>::Allocate,
             R"#(None)#"  , py::arg("theSize"))
        .def("Size",
             (size_t (NCollection_LocalArray<theItem,MAX_ARRAY_SIZE>::*)() const) &NCollection_LocalArray<theItem,MAX_ARRAY_SIZE>::Size,
             R"#(None)#" )
    ;
};
// ./opencascade/NCollection_DataMap.hxx

template <typename TheKeyType,typename TheItemType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void preregister_template_NCollection_DataMap(py::object &m, const char *name){
    py::class_<NCollection_DataMap<TheKeyType,TheItemType,Hasher> , shared_ptr<NCollection_DataMap<TheKeyType,TheItemType,Hasher>> >(m,name,R"#(Purpose: The DataMap is a Map to store keys with associated Items. See Map from NCollection for a discussion about the number of buckets.)#");
}

template <typename TheKeyType,typename TheItemType,typename Hasher=NCollection_DefaultHasher<TheKeyType>>
void register_template_NCollection_DataMap(py::object &m, const char *name){
    static_cast<py::class_<NCollection_DataMap<TheKeyType,TheItemType,Hasher> , shared_ptr<NCollection_DataMap<TheKeyType,TheItemType,Hasher>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theNbBuckets"),  py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L) )
        .def(py::init< const NCollection_DataMap<TheKeyType, TheItemType, Hasher> & >()  , py::arg("theOther") )
        .def("Exchange",
             (void (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( NCollection_DataMap<TheKeyType, TheItemType, Hasher> &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Exchange,
             R"#(Exchange the content of two maps without re-allocations. Notice that allocators will be swapped as well!)#"  , py::arg("theOther"))
        .def("Assign",
             (NCollection_DataMap<TheKeyType, TheItemType, Hasher> & (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const NCollection_DataMap<TheKeyType, TheItemType, Hasher> &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Assign,
             R"#(Assignment. This method does not change the internal allocator.)#"  , py::arg("theOther"))
        .def("ReSize",
             (void (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Integer  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::ReSize,
             R"#(ReSize)#"  , py::arg("N"))
        .def("Bind",
             (Standard_Boolean (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType & ,  const TheItemType &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Bind,
             R"#(Bind binds Item to Key in map.)#"  , py::arg("theKey"),  py::arg("theItem"))
        .def("Bound",
             (TheItemType * (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType & ,  const TheItemType &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Bound,
             R"#(Bound binds Item to Key in map. Returns modifiable Item)#"  , py::arg("theKey"),  py::arg("theItem"))
        .def("IsBound",
             (Standard_Boolean (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::IsBound,
             R"#(IsBound)#"  , py::arg("theKey"))
        .def("UnBind",
             (Standard_Boolean (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::UnBind,
             R"#(UnBind removes Item Key pair from map)#"  , py::arg("theKey"))
        .def("Seek",
             (const TheItemType * (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Seek,
             R"#(Seek returns pointer to Item by Key. Returns NULL is Key was not bound.)#"  , py::arg("theKey"))
        .def("Find",
             (const TheItemType & (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) const) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Find,
             R"#(Find returns the Item for Key. Raises if Key was not bound)#"  , py::arg("theKey"))
        .def("Find",
             (Standard_Boolean (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType & ,  TheItemType &  ) const) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Find,
             R"#(Find Item for key with copying.)#"  , py::arg("theKey"),  py::arg("theValue"))
        .def("ChangeSeek",
             (TheItemType * (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::ChangeSeek,
             R"#(ChangeSeek returns modifiable pointer to Item by Key. Returns NULL is Key was not bound.)#"  , py::arg("theKey"))
        .def("ChangeFind",
             (TheItemType & (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const TheKeyType &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::ChangeFind,
             R"#(ChangeFind returns mofifiable Item by Key. Raises if Key was not bound)#"  , py::arg("theKey"))
        .def("Clear",
             (void (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const Standard_Boolean  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Clear,
             R"#(Clear data. If doReleaseMemory is false then the table of buckets is not released and will be reused.)#"  , py::arg("doReleaseMemory")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Clear,
             R"#(Clear data and reset allocator)#"  , py::arg("theAllocator"))
        .def("Size",
             (Standard_Integer (NCollection_DataMap<TheKeyType,TheItemType,Hasher>::*)() const) &NCollection_DataMap<TheKeyType,TheItemType,Hasher>::Size,
             R"#(Size)#" )
        .def("__iter__",[](const NCollection_DataMap<TheKeyType,TheItemType,Hasher> &self)
             { return py::make_iterator<py::return_value_policy::copy>(self.begin(), self.end()); },
             py::keep_alive<0, 1>())
    ;
};
// ./opencascade/NCollection_Mat4.hxx

template <typename Element_t>
void preregister_template_NCollection_Mat4(py::object &m, const char *name){
    py::class_<NCollection_Mat4<Element_t> , shared_ptr<NCollection_Mat4<Element_t>> >(m,name,R"#(Generic matrix of 4 x 4 elements. To be used in conjunction with NCollection_Vec4 entities. Originally introduced for 3D space projection and orientation operations.)#");
}

template <typename Element_t>
void register_template_NCollection_Mat4(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Mat4<Element_t> , shared_ptr<NCollection_Mat4<Element_t>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def("GetValue",
             (Element_t (NCollection_Mat4<Element_t>::*)( const size_t ,  const size_t  ) const) &NCollection_Mat4<Element_t>::GetValue,
             R"#(Get element at the specified row and column.)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("ChangeValue",
             (Element_t & (NCollection_Mat4<Element_t>::*)( const size_t ,  const size_t  ) ) &NCollection_Mat4<Element_t>::ChangeValue,
             R"#(Access element at the specified row and column.)#"  , py::arg("theRow"),  py::arg("theCol"))
        .def("SetValue",
             (void (NCollection_Mat4<Element_t>::*)( const size_t ,  const size_t ,  const Element_t  ) ) &NCollection_Mat4<Element_t>::SetValue,
             R"#(Set value for the element specified by row and columns.)#"  , py::arg("theRow"),  py::arg("theCol"),  py::arg("theValue"))
        .def("GetRow",
             (NCollection_Vec4<Element_t> (NCollection_Mat4<Element_t>::*)( const size_t  ) const) &NCollection_Mat4<Element_t>::GetRow,
             R"#(Get vector of elements for the specified row.)#"  , py::arg("theRow"))
        .def("SetRow",
             (void (NCollection_Mat4<Element_t>::*)( const size_t ,  const NCollection_Vec3<Element_t> &  ) ) &NCollection_Mat4<Element_t>::SetRow,
             R"#(Change first 3 row values by the passed vector.)#"  , py::arg("theRow"),  py::arg("theVec"))
        .def("SetRow",
             (void (NCollection_Mat4<Element_t>::*)( const size_t ,  const NCollection_Vec4<Element_t> &  ) ) &NCollection_Mat4<Element_t>::SetRow,
             R"#(Set row values by the passed 4 element vector.)#"  , py::arg("theRow"),  py::arg("theVec"))
        .def("GetColumn",
             (NCollection_Vec4<Element_t> (NCollection_Mat4<Element_t>::*)( const size_t  ) const) &NCollection_Mat4<Element_t>::GetColumn,
             R"#(Get vector of elements for the specified column.)#"  , py::arg("theCol"))
        .def("SetColumn",
             (void (NCollection_Mat4<Element_t>::*)( const size_t ,  const NCollection_Vec3<Element_t> &  ) ) &NCollection_Mat4<Element_t>::SetColumn,
             R"#(Change first 3 column values by the passed vector.)#"  , py::arg("theCol"),  py::arg("theVec"))
        .def("SetColumn",
             (void (NCollection_Mat4<Element_t>::*)( const size_t ,  const NCollection_Vec4<Element_t> &  ) ) &NCollection_Mat4<Element_t>::SetColumn,
             R"#(Set column values by the passed 4 element vector.)#"  , py::arg("theCol"),  py::arg("theVec"))
        .def("GetDiagonal",
             (NCollection_Vec4<Element_t> (NCollection_Mat4<Element_t>::*)() const) &NCollection_Mat4<Element_t>::GetDiagonal,
             R"#(Get vector of diagonal elements.)#" )
        .def("SetDiagonal",
             (void (NCollection_Mat4<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) ) &NCollection_Mat4<Element_t>::SetDiagonal,
             R"#(Change first 3 elements of the diagonal matrix.)#"  , py::arg("theVec"))
        .def("SetDiagonal",
             (void (NCollection_Mat4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) ) &NCollection_Mat4<Element_t>::SetDiagonal,
             R"#(Set diagonal elements of the matrix by the passed vector.)#"  , py::arg("theVec"))
        .def("InitIdentity",
             (void (NCollection_Mat4<Element_t>::*)() ) &NCollection_Mat4<Element_t>::InitIdentity,
             R"#(Initialize the identity matrix.)#" )
        .def("IsIdentity",
             (bool (NCollection_Mat4<Element_t>::*)() const) &NCollection_Mat4<Element_t>::IsIdentity,
             R"#(Checks the matrix for identity.)#" )
        .def("IsEqual",
             (bool (NCollection_Mat4<Element_t>::*)( const NCollection_Mat4<Element_t> &  ) const) &NCollection_Mat4<Element_t>::IsEqual,
             R"#(Check this matrix for equality with another matrix (without tolerance!).)#"  , py::arg("theOther"))
        .def("GetData",
             (const Element_t * (NCollection_Mat4<Element_t>::*)() const) &NCollection_Mat4<Element_t>::GetData,
             R"#(Raw access to the data (for OpenGL exchange).)#" )
        .def("ChangeData",
             (Element_t * (NCollection_Mat4<Element_t>::*)() ) &NCollection_Mat4<Element_t>::ChangeData,
             R"#(None)#" )
        .def("Multiply",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)( const NCollection_Mat4<Element_t> & ,  const NCollection_Mat4<Element_t> &  ) ) &NCollection_Mat4<Element_t>::Multiply,
             R"#(Compute matrix multiplication product: A * B.)#"  , py::arg("theMatA"),  py::arg("theMatB"))
        .def("Multiply",
             (void (NCollection_Mat4<Element_t>::*)( const NCollection_Mat4<Element_t> &  ) ) &NCollection_Mat4<Element_t>::Multiply,
             R"#(Compute matrix multiplication.)#"  , py::arg("theMat"))
        .def("Multiplied",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)( const NCollection_Mat4<Element_t> &  ) const) &NCollection_Mat4<Element_t>::Multiplied,
             R"#(Compute matrix multiplication product.)#"  , py::arg("theMat"))
        .def("Multiply",
             (void (NCollection_Mat4<Element_t>::*)( const Element_t  ) ) &NCollection_Mat4<Element_t>::Multiply,
             R"#(Compute per-component multiplication.)#"  , py::arg("theFactor"))
        .def("Multiplied",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)( const Element_t  ) const) &NCollection_Mat4<Element_t>::Multiplied,
             R"#(Compute per-element multiplication.)#"  , py::arg("theFactor"))
        .def("Translate",
             (void (NCollection_Mat4<Element_t>::*)( const NCollection_Vec3<Element_t> &  ) ) &NCollection_Mat4<Element_t>::Translate,
             R"#(Translate the matrix on the passed vector.)#"  , py::arg("theVec"))
        .def("Transposed",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)() const) &NCollection_Mat4<Element_t>::Transposed,
             R"#(Transpose the matrix.)#" )
        .def("Transpose",
             (void (NCollection_Mat4<Element_t>::*)() ) &NCollection_Mat4<Element_t>::Transpose,
             R"#(Transpose the matrix.)#" )
        .def("Inverted",
             (bool (NCollection_Mat4<Element_t>::*)( NCollection_Mat4<Element_t> &  ) const) &NCollection_Mat4<Element_t>::Inverted,
             R"#(Compute inverted matrix.)#"  , py::arg("theOutMx"))
        .def_static("Rows_s",
                    (size_t (*)() ) &NCollection_Mat4<Element_t>::Rows,
                    R"#(Get number of rows.)#" )
        .def_static("Cols_s",
                    (size_t (*)() ) &NCollection_Mat4<Element_t>::Cols,
                    R"#(Get number of columns.)#" )
        .def_static("Map_s",
                    (NCollection_Mat4<Element_t> & (*)( Element_t *  ) ) &NCollection_Mat4<Element_t>::Map,
                    R"#(Maps plain C array to matrix type.)#"  , py::arg("theData"))
        .def_static("Map_s",
                    (const NCollection_Mat4<Element_t> & (*)( const Element_t *  ) ) &NCollection_Mat4<Element_t>::Map,
                    R"#(Maps plain C array to matrix type.)#"  , py::arg("theData"))
        .def("__mul__",
             (NCollection_Vec4<Element_t> (NCollection_Mat4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) const) &NCollection_Mat4<Element_t>::operator*,
             py::is_operator(),
             R"#(Multiply by the vector (M * V).)#"  , py::arg("theVec"))
        .def("__rmul__",
             (NCollection_Vec4<Element_t> (NCollection_Mat4<Element_t>::*)( const NCollection_Vec4<Element_t> &  ) const) &NCollection_Mat4<Element_t>::operator*,
             py::is_operator(),
             R"#(Multiply by the vector (M * V).)#"  , py::arg("theVec"))
        .def("__imul__",
             (NCollection_Mat4<Element_t> & (NCollection_Mat4<Element_t>::*)( const NCollection_Mat4<Element_t> &  ) ) &NCollection_Mat4<Element_t>::operator*=,
             py::is_operator(),
             R"#(Multiply by the another matrix.)#"  , py::arg("theMat"))
        .def("__mul__",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)( const NCollection_Mat4<Element_t> &  ) const) &NCollection_Mat4<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute matrix multiplication product.)#"  , py::arg("theMat"))
        .def("__rmul__",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)( const NCollection_Mat4<Element_t> &  ) const) &NCollection_Mat4<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute matrix multiplication product.)#"  , py::arg("theMat"))
        .def("__imul__",
             (NCollection_Mat4<Element_t> & (NCollection_Mat4<Element_t>::*)( const Element_t  ) ) &NCollection_Mat4<Element_t>::operator*=,
             py::is_operator(),
             R"#(Compute per-element multiplication.)#"  , py::arg("theFactor"))
        .def("__mul__",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)( const Element_t  ) const) &NCollection_Mat4<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-element multiplication.)#"  , py::arg("theFactor"))
        .def("__rmul__",
             (NCollection_Mat4<Element_t> (NCollection_Mat4<Element_t>::*)( const Element_t  ) const) &NCollection_Mat4<Element_t>::operator*,
             py::is_operator(),
             R"#(Compute per-element multiplication.)#"  , py::arg("theFactor"))
    ;
};
// ./opencascade/NCollection_Sequence.hxx

template <typename TheItemType>
void preregister_template_NCollection_Sequence(py::object &m, const char *name){
    py::class_<NCollection_Sequence<TheItemType> , shared_ptr<NCollection_Sequence<TheItemType>> >(m,name,R"#(Purpose: Definition of a sequence of elements indexed by an Integer in range of 1..n)#");
}

template <typename TheItemType>
void register_template_NCollection_Sequence(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Sequence<TheItemType> , shared_ptr<NCollection_Sequence<TheItemType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def(py::init< const NCollection_Sequence<TheItemType> & >()  , py::arg("theOther") )
        .def("Size",
             (Standard_Integer (NCollection_Sequence<TheItemType>::*)() const) &NCollection_Sequence<TheItemType>::Size,
             R"#(Number of items)#" )
        .def("Length",
             (Standard_Integer (NCollection_Sequence<TheItemType>::*)() const) &NCollection_Sequence<TheItemType>::Length,
             R"#(Number of items)#" )
        .def("Lower",
             (Standard_Integer (NCollection_Sequence<TheItemType>::*)() const) &NCollection_Sequence<TheItemType>::Lower,
             R"#(Method for consistency with other collections.)#" )
        .def("Upper",
             (Standard_Integer (NCollection_Sequence<TheItemType>::*)() const) &NCollection_Sequence<TheItemType>::Upper,
             R"#(Method for consistency with other collections.)#" )
        .def("IsEmpty",
             (Standard_Boolean (NCollection_Sequence<TheItemType>::*)() const) &NCollection_Sequence<TheItemType>::IsEmpty,
             R"#(Empty query)#" )
        .def("Reverse",
             (void (NCollection_Sequence<TheItemType>::*)() ) &NCollection_Sequence<TheItemType>::Reverse,
             R"#(Reverse sequence)#" )
        .def("Exchange",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &NCollection_Sequence<TheItemType>::Exchange,
             R"#(Exchange two members)#"  , py::arg("I"),  py::arg("J"))
        .def("Clear",
             (void (NCollection_Sequence<TheItemType>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_Sequence<TheItemType>::Clear,
             R"#(Clear the items out, take a new allocator if non null)#"  , py::arg("theAllocator")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L))
        .def("Assign",
             (NCollection_Sequence<TheItemType> & (NCollection_Sequence<TheItemType>::*)( const NCollection_Sequence<TheItemType> &  ) ) &NCollection_Sequence<TheItemType>::Assign,
             R"#(Replace this sequence by the items of theOther. This method does not change the internal allocator.)#"  , py::arg("theOther"))
        .def("Remove",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer  ) ) &NCollection_Sequence<TheItemType>::Remove,
             R"#(Remove one item)#"  , py::arg("theIndex"))
        .def("Remove",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  const Standard_Integer  ) ) &NCollection_Sequence<TheItemType>::Remove,
             R"#(Remove range of items)#"  , py::arg("theFromIndex"),  py::arg("theToIndex"))
        .def("Append",
             (void (NCollection_Sequence<TheItemType>::*)( const TheItemType &  ) ) &NCollection_Sequence<TheItemType>::Append,
             R"#(Append one item)#"  , py::arg("theItem"))
        .def("Append",
             (void (NCollection_Sequence<TheItemType>::*)( NCollection_Sequence<TheItemType> &  ) ) &NCollection_Sequence<TheItemType>::Append,
             R"#(Append another sequence (making it empty))#"  , py::arg("theSeq"))
        .def("Prepend",
             (void (NCollection_Sequence<TheItemType>::*)( const TheItemType &  ) ) &NCollection_Sequence<TheItemType>::Prepend,
             R"#(Prepend one item)#"  , py::arg("theItem"))
        .def("Prepend",
             (void (NCollection_Sequence<TheItemType>::*)( NCollection_Sequence<TheItemType> &  ) ) &NCollection_Sequence<TheItemType>::Prepend,
             R"#(Prepend another sequence (making it empty))#"  , py::arg("theSeq"))
        .def("InsertBefore",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  const TheItemType &  ) ) &NCollection_Sequence<TheItemType>::InsertBefore,
             R"#(InsertBefore theIndex theItem)#"  , py::arg("theIndex"),  py::arg("theItem"))
        .def("InsertBefore",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  NCollection_Sequence<TheItemType> &  ) ) &NCollection_Sequence<TheItemType>::InsertBefore,
             R"#(InsertBefore theIndex another sequence (making it empty))#"  , py::arg("theIndex"),  py::arg("theSeq"))
        .def("InsertAfter",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  NCollection_Sequence<TheItemType> &  ) ) &NCollection_Sequence<TheItemType>::InsertAfter,
             R"#(InsertAfter theIndex another sequence (making it empty))#"  , py::arg("theIndex"),  py::arg("theSeq"))
        .def("InsertAfter",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  const TheItemType &  ) ) &NCollection_Sequence<TheItemType>::InsertAfter,
             R"#(InsertAfter theIndex theItem)#"  , py::arg("theIndex"),  py::arg("theItem"))
        .def("Split",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  NCollection_Sequence<TheItemType> &  ) ) &NCollection_Sequence<TheItemType>::Split,
             R"#(Split in two sequences)#"  , py::arg("theIndex"),  py::arg("theSeq"))
        .def("First",
             (const TheItemType & (NCollection_Sequence<TheItemType>::*)() const) &NCollection_Sequence<TheItemType>::First,
             R"#(First item access)#" )
        .def("ChangeFirst",
             (TheItemType & (NCollection_Sequence<TheItemType>::*)() ) &NCollection_Sequence<TheItemType>::ChangeFirst,
             R"#(First item access)#" )
        .def("Last",
             (const TheItemType & (NCollection_Sequence<TheItemType>::*)() const) &NCollection_Sequence<TheItemType>::Last,
             R"#(Last item access)#" )
        .def("ChangeLast",
             (TheItemType & (NCollection_Sequence<TheItemType>::*)() ) &NCollection_Sequence<TheItemType>::ChangeLast,
             R"#(Last item access)#" )
        .def("Value",
             (const TheItemType & (NCollection_Sequence<TheItemType>::*)( const Standard_Integer  ) const) &NCollection_Sequence<TheItemType>::Value,
             R"#(Constant item access by theIndex)#"  , py::arg("theIndex"))
        .def("ChangeValue",
             (TheItemType & (NCollection_Sequence<TheItemType>::*)( const Standard_Integer  ) ) &NCollection_Sequence<TheItemType>::ChangeValue,
             R"#(Variable item access by theIndex)#"  , py::arg("theIndex"))
        .def("SetValue",
             (void (NCollection_Sequence<TheItemType>::*)( const Standard_Integer ,  const TheItemType &  ) ) &NCollection_Sequence<TheItemType>::SetValue,
             R"#(Set item value by theIndex)#"  , py::arg("theIndex"),  py::arg("theItem"))
        .def_static("delNode_s",
                    (void (*)( NCollection_SeqNode * ,  opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_Sequence<TheItemType>::delNode,
                    R"#(Static deleter to be passed to BaseSequence)#"  , py::arg("theNode"),  py::arg("theAl"))
        .def("__iter__",[](const NCollection_Sequence<TheItemType> &self)
             { return py::make_iterator<py::return_value_policy::copy>(self.begin(), self.end()); },
             py::keep_alive<0, 1>())
    ;
};
// ./opencascade/NCollection_StdAllocator.hxx

template <typename T>
void preregister_template_NCollection_StdAllocator(py::object &m, const char *name){
    py::class_<NCollection_StdAllocator<T> , shared_ptr<NCollection_StdAllocator<T>> >(m,name,R"#(Implements allocator requirements as defined in ISO C++ Standard 2003, section 20.1.5. The allocator uses instance of the NCollection_BaseAllocator (sub)class for memory allocation/deallocation. The allocator can be used with standard containers (std::vector, std::map, etc) to take advantage of NCollection_IncAllocator which implements memory region concept, and hence to increase performance in specific cases.)#");
}

template <typename T>
void register_template_NCollection_StdAllocator(py::object &m, const char *name){
    static_cast<py::class_<NCollection_StdAllocator<T> , shared_ptr<NCollection_StdAllocator<T>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc") )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (NCollection_StdAllocator<T>::*)() const) &NCollection_StdAllocator<T>::Allocator,
             R"#(Returns an underlying NCollection_BaseAllocator instance. Returns an object specified in the constructor.)#" )
    ;
};
// ./opencascade/NCollection_DefineIndexedDataMap.hxx
// ./opencascade/NCollection_IncAllocator.hxx
// ./opencascade/NCollection_Vector.hxx

template <typename TheItemType>
void preregister_template_NCollection_Vector(py::object &m, const char *name){
    py::class_<NCollection_Vector<TheItemType> , shared_ptr<NCollection_Vector<TheItemType>> >(m,name,R"#(Class NCollection_Vector (dynamic array of objects))#");
}

template <typename TheItemType>
void register_template_NCollection_Vector(py::object &m, const char *name){
    static_cast<py::class_<NCollection_Vector<TheItemType> , shared_ptr<NCollection_Vector<TheItemType>> >>(m.attr(name))
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theIncrement")=static_cast<const Standard_Integer>(256),  py::arg("theAlloc")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(NULL) )
        .def(py::init< const NCollection_Vector<TheItemType> & >()  , py::arg("theOther") )
        .def("Length",
             (Standard_Integer (NCollection_Vector<TheItemType>::*)() const) &NCollection_Vector<TheItemType>::Length,
             R"#(Total number of items)#" )
        .def("Size",
             (Standard_Integer (NCollection_Vector<TheItemType>::*)() const) &NCollection_Vector<TheItemType>::Size,
             R"#(Total number of items in the vector)#" )
        .def("Lower",
             (Standard_Integer (NCollection_Vector<TheItemType>::*)() const) &NCollection_Vector<TheItemType>::Lower,
             R"#(Method for consistency with other collections.)#" )
        .def("Upper",
             (Standard_Integer (NCollection_Vector<TheItemType>::*)() const) &NCollection_Vector<TheItemType>::Upper,
             R"#(Method for consistency with other collections.)#" )
        .def("IsEmpty",
             (Standard_Boolean (NCollection_Vector<TheItemType>::*)() const) &NCollection_Vector<TheItemType>::IsEmpty,
             R"#(Empty query)#" )
        .def("Assign",
             (void (NCollection_Vector<TheItemType>::*)( const NCollection_Vector<TheItemType> & ,  const Standard_Boolean  ) ) &NCollection_Vector<TheItemType>::Assign,
             R"#(Assignment to the collection of the same type)#"  , py::arg("theOther"),  py::arg("theOwnAllocator")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Append",
             (TheItemType & (NCollection_Vector<TheItemType>::*)( const TheItemType &  ) ) &NCollection_Vector<TheItemType>::Append,
             R"#(Append)#"  , py::arg("theValue"))
        .def("Appended",
             (TheItemType & (NCollection_Vector<TheItemType>::*)() ) &NCollection_Vector<TheItemType>::Appended,
             R"#(Appends an empty value and returns the reference to it)#" )
        .def("Value",
             (const TheItemType & (NCollection_Vector<TheItemType>::*)( const Standard_Integer  ) const) &NCollection_Vector<TheItemType>::Value,
             R"#(None)#"  , py::arg("theIndex"))
        .def("First",
             (const TheItemType & (NCollection_Vector<TheItemType>::*)() const) &NCollection_Vector<TheItemType>::First,
             R"#(Returns first element)#" )
        .def("ChangeFirst",
             (TheItemType & (NCollection_Vector<TheItemType>::*)() ) &NCollection_Vector<TheItemType>::ChangeFirst,
             R"#(Returns first element)#" )
        .def("Last",
             (const TheItemType & (NCollection_Vector<TheItemType>::*)() const) &NCollection_Vector<TheItemType>::Last,
             R"#(Returns last element)#" )
        .def("ChangeLast",
             (TheItemType & (NCollection_Vector<TheItemType>::*)() ) &NCollection_Vector<TheItemType>::ChangeLast,
             R"#(Returns last element)#" )
        .def("ChangeValue",
             (TheItemType & (NCollection_Vector<TheItemType>::*)( const Standard_Integer  ) ) &NCollection_Vector<TheItemType>::ChangeValue,
             R"#(None)#"  , py::arg("theIndex"))
        .def("SetValue",
             (TheItemType & (NCollection_Vector<TheItemType>::*)( const Standard_Integer ,  const TheItemType &  ) ) &NCollection_Vector<TheItemType>::SetValue,
             R"#(SetValue () - set or append a value)#"  , py::arg("theIndex"),  py::arg("theValue"))
        .def("__iter__",[](const NCollection_Vector<TheItemType> &self)
             { return py::make_iterator<py::return_value_policy::copy>(self.begin(), self.end()); },
             py::keep_alive<0, 1>())
    ;
};
// ./opencascade/NCollection_UtfIterator.hxx

template <typename Type>
void preregister_template_NCollection_UtfIterator(py::object &m, const char *name){
    py::class_<NCollection_UtfIterator<Type> , shared_ptr<NCollection_UtfIterator<Type>> >(m,name,R"#(Template class for Unicode strings support.)#");
}

template <typename Type>
void register_template_NCollection_UtfIterator(py::object &m, const char *name){
    static_cast<py::class_<NCollection_UtfIterator<Type> , shared_ptr<NCollection_UtfIterator<Type>> >>(m.attr(name))
        .def(py::init< const Type * >()  , py::arg("theString") )
        .def("Init",
             (void (NCollection_UtfIterator<Type>::*)( const Type *  ) ) &NCollection_UtfIterator<Type>::Init,
             R"#(Initialize iterator within specified NULL-terminated string.)#"  , py::arg("theString"))
        .def("IsValid",
             (bool (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::IsValid,
             R"#(Return true if Unicode symbol is within valid range.)#" )
        .def("BufferHere",
             (const Type * (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::BufferHere,
             R"#(Buffer-fetching getter.)#" )
        .def("ChangeBufferHere",
             (Type * (NCollection_UtfIterator<Type>::*)() ) &NCollection_UtfIterator<Type>::ChangeBufferHere,
             R"#(Buffer-fetching getter. Dangerous! Iterator should be reinitialized on buffer change.)#" )
        .def("BufferNext",
             (const Type * (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::BufferNext,
             R"#(Buffer-fetching getter.)#" )
        .def("Index",
             (Standard_Integer (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::Index,
             R"#(Returns the index displacement from iterator intialization (first symbol has index 0))#" )
        .def("AdvanceBytesUtf8",
             (Standard_Integer (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::AdvanceBytesUtf8,
             R"#(Returns the advance in bytes to store current symbol in UTF-8. 0 means an invalid symbol; 1-4 bytes are valid range.)#" )
        .def("AdvanceBytesUtf16",
             (Standard_Integer (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::AdvanceBytesUtf16,
             R"#(Returns the advance in bytes to store current symbol in UTF-16. 0 means an invalid symbol; 2 bytes is a general case; 4 bytes for surrogate pair.)#" )
        .def("AdvanceCodeUnitsUtf16",
             (Standard_Integer (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::AdvanceCodeUnitsUtf16,
             R"#(Returns the advance in bytes to store current symbol in UTF-16. 0 means an invalid symbol; 1 16-bit code unit is a general case; 2 16-bit code units for surrogate pair.)#" )
        .def("AdvanceBytesUtf32",
             (Standard_Integer (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::AdvanceBytesUtf32,
             R"#(Returns the advance in bytes to store current symbol in UTF-32. Always 4 bytes (method for consistency).)#" )
        .def("GetUtf8",
             (Standard_Utf8Char * (NCollection_UtfIterator<Type>::*)( Standard_Utf8Char *  ) const) &NCollection_UtfIterator<Type>::GetUtf8,
             R"#(Fill the UTF-8 buffer within current Unicode symbol. Use method AdvanceUtf8() to allocate buffer with enough size.)#"  , py::arg("theBuffer"))
        .def("GetUtf8",
             (Standard_Utf8UChar * (NCollection_UtfIterator<Type>::*)( Standard_Utf8UChar *  ) const) &NCollection_UtfIterator<Type>::GetUtf8,
             R"#(None)#"  , py::arg("theBuffer"))
        .def("GetUtf16",
             (Standard_Utf16Char * (NCollection_UtfIterator<Type>::*)( Standard_Utf16Char *  ) const) &NCollection_UtfIterator<Type>::GetUtf16,
             R"#(Fill the UTF-16 buffer within current Unicode symbol. Use method AdvanceUtf16() to allocate buffer with enough size.)#"  , py::arg("theBuffer"))
        .def("GetUtf32",
             (Standard_Utf32Char * (NCollection_UtfIterator<Type>::*)( Standard_Utf32Char *  ) const) &NCollection_UtfIterator<Type>::GetUtf32,
             R"#(Fill the UTF-32 buffer within current Unicode symbol. Use method AdvanceUtf32() to allocate buffer with enough size.)#"  , py::arg("theBuffer"))
        .def("__mul__",
             (Standard_Utf32Char (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::operator*,
             py::is_operator(),
             R"#(Dereference operator.)#" )
        .def("__rmul__",
             (Standard_Utf32Char (NCollection_UtfIterator<Type>::*)() const) &NCollection_UtfIterator<Type>::operator*,
             py::is_operator(),
             R"#(Dereference operator.)#" )
    ;
};
// ./opencascade/NCollection_AccAllocator.hxx
// ./opencascade/NCollection_DefineArray2.hxx
// ./opencascade/NCollection_Buffer.hxx
// ./opencascade/NCollection_UtfString.hxx

template <typename Type>
void preregister_template_NCollection_UtfString(py::object &m, const char *name){
    py::class_<NCollection_UtfString<Type> , shared_ptr<NCollection_UtfString<Type>> >(m,name,R"#(This template class represent constant UTF-* string. String stored in memory continuously, always NULL-terminated and can be used as standard C-string using ToCString() method.)#");
}

template <typename Type>
void register_template_NCollection_UtfString(py::object &m, const char *name){
    static_cast<py::class_<NCollection_UtfString<Type> , shared_ptr<NCollection_UtfString<Type>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const NCollection_UtfString<Type> & >()  , py::arg("theCopy") )
        .def(py::init< const char *,const Standard_Integer >()  , py::arg("theCopyUtf8"),  py::arg("theLength")=static_cast<const Standard_Integer>(- 1) )
        .def(py::init< const Standard_Utf16Char *,const Standard_Integer >()  , py::arg("theCopyUtf16"),  py::arg("theLength")=static_cast<const Standard_Integer>(- 1) )
        .def(py::init< const Standard_Utf32Char *,const Standard_Integer >()  , py::arg("theCopyUtf32"),  py::arg("theLength")=static_cast<const Standard_Integer>(- 1) )
        .def(py::init< const Standard_WideChar *,const Standard_Integer >()  , py::arg("theCopyUtfWide"),  py::arg("theLength")=static_cast<const Standard_Integer>(- 1) )
        .def("Iterator",
             (NCollection_UtfIterator<Type> (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::Iterator,
             R"#(None)#" )
        .def("Size",
             (Standard_Integer (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::Size,
             R"#(Returns the size of the buffer in bytes, excluding NULL-termination symbol)#" )
        .def("Length",
             (Standard_Integer (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::Length,
             R"#(Returns the length of the string in Unicode symbols)#" )
        .def("GetChar",
             (Standard_Utf32Char (NCollection_UtfString<Type>::*)( const Standard_Integer  ) const) &NCollection_UtfString<Type>::GetChar,
             R"#(Retrieve Unicode symbol at specified position. Warning! This is a slow access. Iterator should be used for consecutive parsing.)#"  , py::arg("theCharIndex"))
        .def("GetCharBuffer",
             (const Type * (NCollection_UtfString<Type>::*)( const Standard_Integer  ) const) &NCollection_UtfString<Type>::GetCharBuffer,
             R"#(Retrieve string buffer at specified position. Warning! This is a slow access. Iterator should be used for consecutive parsing.)#"  , py::arg("theCharIndex"))
        .def("FromLocale",
             (void (NCollection_UtfString<Type>::*)( const char * ,  const Standard_Integer  ) ) &NCollection_UtfString<Type>::FromLocale,
             R"#(Copy from multibyte string in current system locale.)#"  , py::arg("theString"),  py::arg("theLength")=static_cast<const Standard_Integer>(- 1))
        .def("IsEqual",
             (bool (NCollection_UtfString<Type>::*)( const NCollection_UtfString<Type> &  ) const) &NCollection_UtfString<Type>::IsEqual,
             R"#(Compares this string with another one.)#"  , py::arg("theCompare"))
        .def("SubString",
             (NCollection_UtfString<Type> (NCollection_UtfString<Type>::*)( const Standard_Integer ,  const Standard_Integer  ) const) &NCollection_UtfString<Type>::SubString,
             R"#(Returns the substring.)#"  , py::arg("theStart"),  py::arg("theEnd"))
        .def("ToCString",
             (const Type * (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::ToCString,
             R"#(Returns NULL-terminated Unicode string. Should not be modifed or deleted!)#" )
        .def("ToUtf8",
             (const NCollection_UtfString<Standard_Utf8Char> (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::ToUtf8,
             R"#(Returns copy in UTF-8 format)#" )
        .def("ToUtf16",
             (const NCollection_UtfString<Standard_Utf16Char> (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::ToUtf16,
             R"#(Returns copy in UTF-16 format)#" )
        .def("ToUtf32",
             (const NCollection_UtfString<Standard_Utf32Char> (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::ToUtf32,
             R"#(Returns copy in UTF-32 format)#" )
        .def("ToUtfWide",
             (const NCollection_UtfString<Standard_WideChar> (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::ToUtfWide,
             R"#(Returns copy in wide format (UTF-16 on Windows and UTF-32 on Linux))#" )
        .def("ToLocale",
             (bool (NCollection_UtfString<Type>::*)( char * ,  const Standard_Integer  ) const) &NCollection_UtfString<Type>::ToLocale,
             R"#(Converts the string into string in the current system locale.)#"  , py::arg("theBuffer"),  py::arg("theSizeBytes"))
        .def("IsEmpty",
             (bool (NCollection_UtfString<Type>::*)() const) &NCollection_UtfString<Type>::IsEmpty,
             R"#(Returns true if string is empty)#" )
        .def("Clear",
             (void (NCollection_UtfString<Type>::*)() ) &NCollection_UtfString<Type>::Clear,
             R"#(Zero string.)#" )
        .def("Assign",
             (const NCollection_UtfString<Type> & (NCollection_UtfString<Type>::*)( const NCollection_UtfString<Type> &  ) ) &NCollection_UtfString<Type>::Assign,
             R"#(Copy from another string.)#"  , py::arg("theOther"))
        .def("Swap",
             (void (NCollection_UtfString<Type>::*)( NCollection_UtfString<Type> &  ) ) &NCollection_UtfString<Type>::Swap,
             R"#(Exchange the data of two strings (without reallocating memory).)#"  , py::arg("theOther"))
        .def("__iadd__",
             (NCollection_UtfString<Type> & (NCollection_UtfString<Type>::*)( const NCollection_UtfString<Type> &  ) ) &NCollection_UtfString<Type>::operator+=,
             py::is_operator(),
             R"#(Join strings.)#"  , py::arg("theAppend"))
    ;
};
// ./opencascade/NCollection_UBTree.hxx

template <typename TheObjType,typename TheBndType>
void preregister_template_NCollection_UBTree(py::object &m, const char *name){
    py::class_<NCollection_UBTree<TheObjType,TheBndType> , shared_ptr<NCollection_UBTree<TheObjType,TheBndType>> >(m,name,R"#(The algorithm of unbalanced binary tree of overlapped bounding boxes.)#");
}

template <typename TheObjType,typename TheBndType>
void register_template_NCollection_UBTree(py::object &m, const char *name){
    static_cast<py::class_<NCollection_UBTree<TheObjType,TheBndType> , shared_ptr<NCollection_UBTree<TheObjType,TheBndType>> >>(m.attr(name))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAllocator") )
        .def("Add",
             (Standard_Boolean (NCollection_UBTree<TheObjType,TheBndType>::*)( const TheObjType & ,  const TheBndType &  ) ) &NCollection_UBTree<TheObjType,TheBndType>::Add,
             R"#(Update the tree with a new object and its bounding box.)#"  , py::arg("theObj"),  py::arg("theBnd"))
        .def("Clear",
             (void (NCollection_UBTree<TheObjType,TheBndType>::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) &NCollection_UBTree<TheObjType,TheBndType>::Clear,
             R"#(Clears the contents of the tree.)#"  , py::arg("aNewAlloc")=static_cast<const opencascade::handle<NCollection_BaseAllocator> &>(0L))
        .def("IsEmpty",
             (Standard_Boolean (NCollection_UBTree<TheObjType,TheBndType>::*)() const) &NCollection_UBTree<TheObjType,TheBndType>::IsEmpty,
             R"#(None)#" )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (NCollection_UBTree<TheObjType,TheBndType>::*)() const) &NCollection_UBTree<TheObjType,TheBndType>::Allocator,
             R"#(Recommended to be used only in sub-classes.)#" )
    ;
};
// ./opencascade/NCollection_DefineSequence.hxx

// user-defined post
