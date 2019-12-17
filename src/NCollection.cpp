
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_XYZ.hxx>
#include <gp_XY.hxx>

// module includes
#include <NCollection_AccAllocator.hxx>
#include <NCollection_AlignedAllocator.hxx>
#include <NCollection_Array1.hxx>
#include <NCollection_Array2.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <NCollection_BaseList.hxx>
#include <NCollection_BaseMap.hxx>
#include <NCollection_BaseSequence.hxx>
#include <NCollection_BaseVector.hxx>
#include <NCollection_Buffer.hxx>
#include <NCollection_CellFilter.hxx>
#include <NCollection_Comparator.hxx>
#include <NCollection_DataMap.hxx>
#include <NCollection_DefaultHasher.hxx>
#include <NCollection_DefineAlloc.hxx>
#include <NCollection_DefineArray1.hxx>
#include <NCollection_DefineArray2.hxx>
#include <NCollection_DefineDataMap.hxx>
#include <NCollection_DefineDoubleMap.hxx>
#include <NCollection_DefineHArray1.hxx>
#include <NCollection_DefineHArray2.hxx>
#include <NCollection_DefineHSequence.hxx>
#include <NCollection_DefineIndexedDataMap.hxx>
#include <NCollection_DefineIndexedMap.hxx>
#include <NCollection_DefineList.hxx>
#include <NCollection_DefineMap.hxx>
#include <NCollection_DefineSequence.hxx>
#include <NCollection_DefineVector.hxx>
#include <NCollection_DoubleMap.hxx>
#include <NCollection_EBTree.hxx>
#include <NCollection_Handle.hxx>
#include <NCollection_HArray1.hxx>
#include <NCollection_HArray2.hxx>
#include <NCollection_HeapAllocator.hxx>
#include <NCollection_HSequence.hxx>
#include <NCollection_IncAllocator.hxx>
#include <NCollection_IndexedDataMap.hxx>
#include <NCollection_IndexedMap.hxx>
#include <NCollection_Lerp.hxx>
#include <NCollection_List.hxx>
#include <NCollection_ListNode.hxx>
#include <NCollection_LocalArray.hxx>
#include <NCollection_Map.hxx>
#include <NCollection_Mat4.hxx>
#include <NCollection_Sequence.hxx>
#include <NCollection_SparseArray.hxx>
#include <NCollection_SparseArrayBase.hxx>
#include <NCollection_StdAllocator.hxx>
#include <NCollection_StlIterator.hxx>
#include <NCollection_String.hxx>
#include <NCollection_TListIterator.hxx>
#include <NCollection_TListNode.hxx>
#include <NCollection_TypeDef.hxx>
#include <NCollection_UBTree.hxx>
#include <NCollection_UBTreeFiller.hxx>
#include <NCollection_UtfIterator.hxx>
#include <NCollection_UtfString.hxx>
#include <NCollection_Vec2.hxx>
#include <NCollection_Vec3.hxx>
#include <NCollection_Vec4.hxx>
#include <NCollection_Vector.hxx>
#include <NCollection_WinHeapAllocator.hxx>

// template related includes
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
const size_t DefaultBlockSize = 24600;

// Module definiiton
void register_NCollection(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("NCollection"));


//Python trampoline classes
    class Py_NCollection_SparseArrayBase : public NCollection_SparseArrayBase{
    public:
        using NCollection_SparseArrayBase::NCollection_SparseArrayBase;
        
        // public pure virtual
        
        
        // protected pure virtual
        void createItem(Standard_Address theAddress,Standard_Address theOther) override { PYBIND11_OVERLOAD_PURE(void,NCollection_SparseArrayBase,createItem,theAddress,theOther) };
        void destroyItem(Standard_Address theAddress) override { PYBIND11_OVERLOAD_PURE(void,NCollection_SparseArrayBase,destroyItem,theAddress) };
        void copyItem(Standard_Address theAddress,Standard_Address theOther) override { PYBIND11_OVERLOAD_PURE(void,NCollection_SparseArrayBase,copyItem,theAddress,theOther) };
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<NCollection_BaseList ,std::unique_ptr<NCollection_BaseList>  >>(m.attr("NCollection_BaseList"))
        .def("Extent",
             (Standard_Integer (NCollection_BaseList::*)() const) static_cast<Standard_Integer (NCollection_BaseList::*)() const>(&NCollection_BaseList::Extent),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (NCollection_BaseList::*)() const) static_cast<Standard_Boolean (NCollection_BaseList::*)() const>(&NCollection_BaseList::IsEmpty),
             R"#(None)#" )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseList::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseList::*)() const>(&NCollection_BaseList::Allocator),
             R"#(Returns attached allocator)#" )
;


    static_cast<py::class_<NCollection_BaseMap ,std::unique_ptr<NCollection_BaseMap, py::nodelete>  >>(m.attr("NCollection_BaseMap"))
        .def("NbBuckets",
             (Standard_Integer (NCollection_BaseMap::*)() const) static_cast<Standard_Integer (NCollection_BaseMap::*)() const>(&NCollection_BaseMap::NbBuckets),
             R"#(NbBuckets)#" )
        .def("Extent",
             (Standard_Integer (NCollection_BaseMap::*)() const) static_cast<Standard_Integer (NCollection_BaseMap::*)() const>(&NCollection_BaseMap::Extent),
             R"#(Extent)#" )
        .def("IsEmpty",
             (Standard_Boolean (NCollection_BaseMap::*)() const) static_cast<Standard_Boolean (NCollection_BaseMap::*)() const>(&NCollection_BaseMap::IsEmpty),
             R"#(IsEmpty)#" )
        .def("Statistics",
             (void (NCollection_BaseMap::*)( std::ostream &  ) const) static_cast<void (NCollection_BaseMap::*)( std::ostream &  ) const>(&NCollection_BaseMap::Statistics),
             R"#(Statistics)#"  , py::arg("S"))
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseMap::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseMap::*)() const>(&NCollection_BaseMap::Allocator),
             R"#(Returns attached allocator)#" )
;


    static_cast<py::class_<NCollection_Buffer ,opencascade::handle<NCollection_Buffer>  , Standard_Transient >>(m.attr("NCollection_Buffer"))
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> &,const Standard_Size,Standard_Byte * >()  , py::arg("theAlloc"),  py::arg("theSize")=static_cast<const Standard_Size>(0),  py::arg("theData")=static_cast<Standard_Byte *>(NULL) )
        .def("Data",
             (const Standard_Byte * (NCollection_Buffer::*)() const) static_cast<const Standard_Byte * (NCollection_Buffer::*)() const>(&NCollection_Buffer::Data),
             R"#(Returns buffer data)#" )
        .def("ChangeData",
             (Standard_Byte * (NCollection_Buffer::*)() ) static_cast<Standard_Byte * (NCollection_Buffer::*)() >(&NCollection_Buffer::ChangeData),
             R"#(Returns buffer data)#" )
        .def("IsEmpty",
             (bool (NCollection_Buffer::*)() const) static_cast<bool (NCollection_Buffer::*)() const>(&NCollection_Buffer::IsEmpty),
             R"#(Returns true if buffer is not allocated)#" )
        .def("Size",
             (Standard_Size (NCollection_Buffer::*)() const) static_cast<Standard_Size (NCollection_Buffer::*)() const>(&NCollection_Buffer::Size),
             R"#(Return buffer length in bytes.)#" )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (NCollection_Buffer::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (NCollection_Buffer::*)() const>(&NCollection_Buffer::Allocator),
             R"#(Returns buffer allocator)#" )
        .def("SetAllocator",
             (void (NCollection_Buffer::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) ) static_cast<void (NCollection_Buffer::*)( const opencascade::handle<NCollection_BaseAllocator> &  ) >(&NCollection_Buffer::SetAllocator),
             R"#(Assign new buffer allocator with de-allocation of buffer.)#"  , py::arg("theAlloc"))
        .def("Allocate",
             (bool (NCollection_Buffer::*)( const Standard_Size  ) ) static_cast<bool (NCollection_Buffer::*)( const Standard_Size  ) >(&NCollection_Buffer::Allocate),
             R"#(Allocate the buffer.)#"  , py::arg("theSize"))
        .def("Free",
             (void (NCollection_Buffer::*)() ) static_cast<void (NCollection_Buffer::*)() >(&NCollection_Buffer::Free),
             R"#(De-allocate buffer.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NCollection_Buffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NCollection_Buffer::*)() const>(&NCollection_Buffer::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NCollection_Buffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NCollection_Buffer::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<NCollection_BaseSequence ,std::unique_ptr<NCollection_BaseSequence, py::nodelete>  >>(m.attr("NCollection_BaseSequence"))
        .def("IsEmpty",
             (Standard_Boolean (NCollection_BaseSequence::*)() const) static_cast<Standard_Boolean (NCollection_BaseSequence::*)() const>(&NCollection_BaseSequence::IsEmpty),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (NCollection_BaseSequence::*)() const) static_cast<Standard_Integer (NCollection_BaseSequence::*)() const>(&NCollection_BaseSequence::Length),
             R"#(None)#" )
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseSequence::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseSequence::*)() const>(&NCollection_BaseSequence::Allocator),
             R"#(Returns attached allocator)#" )
;


    static_cast<py::class_<NCollection_BaseAllocator ,opencascade::handle<NCollection_BaseAllocator>  , Standard_Transient >>(m.attr("NCollection_BaseAllocator"))
        .def("Allocate",
             (void * (NCollection_BaseAllocator::*)( const size_t  ) ) static_cast<void * (NCollection_BaseAllocator::*)( const size_t  ) >(&NCollection_BaseAllocator::Allocate),
             R"#(None)#"  , py::arg("size"))
        .def("Free",
             (void (NCollection_BaseAllocator::*)( void *  ) ) static_cast<void (NCollection_BaseAllocator::*)( void *  ) >(&NCollection_BaseAllocator::Free),
             R"#(None)#"  , py::arg("anAddress"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NCollection_BaseAllocator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NCollection_BaseAllocator::*)() const>(&NCollection_BaseAllocator::DynamicType),
             R"#(None)#" )
        .def_static("CommonBaseAllocator_s",
                    (const opencascade::handle<NCollection_BaseAllocator> & (*)() ) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (*)() >(&NCollection_BaseAllocator::CommonBaseAllocator),
                    R"#(CommonBaseAllocator This method is designed to have the only one BaseAllocator (to avoid useless copying of collections). However one can use operator new to create more BaseAllocators, but it is injurious.)#" )
        .def_static("StandardCallBack_s",
                    (void (*)( const Standard_Boolean ,  const Standard_Address ,  const Standard_Size ,  const Standard_Size  ) ) static_cast<void (*)( const Standard_Boolean ,  const Standard_Address ,  const Standard_Size ,  const Standard_Size  ) >(&NCollection_BaseAllocator::StandardCallBack),
                    R"#(Callback function to register alloc/free calls)#"  , py::arg("theIsAlloc"),  py::arg("theStorage"),  py::arg("theRoundSize"),  py::arg("theSize"))
        .def_static("PrintMemUsageStatistics_s",
                    (void (*)() ) static_cast<void (*)() >(&NCollection_BaseAllocator::PrintMemUsageStatistics),
                    R"#(Prints memory usage statistics cumulated by StandardCallBack)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NCollection_BaseAllocator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NCollection_BaseAllocator::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<NCollection_BaseVector ,std::unique_ptr<NCollection_BaseVector, py::nodelete>  >>(m.attr("NCollection_BaseVector"))
        .def("Clear",
             (void (NCollection_BaseVector::*)() ) static_cast<void (NCollection_BaseVector::*)() >(&NCollection_BaseVector::Clear),
             R"#(Empty the vector of its objects)#" )
        .def("SetIncrement",
             (void (NCollection_BaseVector::*)( const Standard_Integer  ) ) static_cast<void (NCollection_BaseVector::*)( const Standard_Integer  ) >(&NCollection_BaseVector::SetIncrement),
             R"#(None)#"  , py::arg("aIncrement"))
        .def("Allocator",
             (const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseVector::*)() const) static_cast<const opencascade::handle<NCollection_BaseAllocator> & (NCollection_BaseVector::*)() const>(&NCollection_BaseVector::Allocator),
             R"#(Returns attached allocator)#" )
;


    static_cast<py::class_<NCollection_IncAllocator ,opencascade::handle<NCollection_IncAllocator>  , NCollection_BaseAllocator >>(m.attr("NCollection_IncAllocator"))
        .def(py::init< const size_t >()  , py::arg("theBlockSize")=static_cast<const size_t>(DefaultBlockSize) )
        .def("Allocate",
             (void * (NCollection_IncAllocator::*)( const size_t  ) ) static_cast<void * (NCollection_IncAllocator::*)( const size_t  ) >(&NCollection_IncAllocator::Allocate),
             R"#(Allocate memory with given size. Returns NULL on failure)#"  , py::arg("size"))
        .def("Free",
             (void (NCollection_IncAllocator::*)( void *  ) ) static_cast<void (NCollection_IncAllocator::*)( void *  ) >(&NCollection_IncAllocator::Free),
             R"#(Free a previously allocated memory. Does nothing)#"  , py::arg("anAddress"))
        .def("GetMemSize",
             (size_t (NCollection_IncAllocator::*)() const) static_cast<size_t (NCollection_IncAllocator::*)() const>(&NCollection_IncAllocator::GetMemSize),
             R"#(Diagnostic method, returns the total allocated size)#" )
        .def("Reallocate",
             (void * (NCollection_IncAllocator::*)( void * ,  const size_t ,  const size_t  ) ) static_cast<void * (NCollection_IncAllocator::*)( void * ,  const size_t ,  const size_t  ) >(&NCollection_IncAllocator::Reallocate),
             R"#(Reallocation: it is always allowed but is only efficient with the last allocated item)#"  , py::arg("anAddress"),  py::arg("oldSize"),  py::arg("newSize"))
        .def("Reset",
             (void (NCollection_IncAllocator::*)( const Standard_Boolean  ) ) static_cast<void (NCollection_IncAllocator::*)( const Standard_Boolean  ) >(&NCollection_IncAllocator::Reset),
             R"#(Re-initialize the allocator so that the next Allocate call should start allocating in the very begining as though the allocator is just constructed. Warning: make sure that all previously allocated data are no more used in your code!)#"  , py::arg("doReleaseMem")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NCollection_IncAllocator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NCollection_IncAllocator::*)() const>(&NCollection_IncAllocator::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NCollection_IncAllocator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NCollection_IncAllocator::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<NCollection_WinHeapAllocator ,opencascade::handle<NCollection_WinHeapAllocator>  , NCollection_BaseAllocator >>(m.attr("NCollection_WinHeapAllocator"))
        .def(py::init< const size_t >()  , py::arg("theInitSizeBytes")=static_cast<const size_t>(0x80000) )
        .def("Allocate",
             (void * (NCollection_WinHeapAllocator::*)( const Standard_Size  ) ) static_cast<void * (NCollection_WinHeapAllocator::*)( const Standard_Size  ) >(&NCollection_WinHeapAllocator::Allocate),
             R"#(Allocate memory)#"  , py::arg("theSize"))
        .def("Free",
             (void (NCollection_WinHeapAllocator::*)( void *  ) ) static_cast<void (NCollection_WinHeapAllocator::*)( void *  ) >(&NCollection_WinHeapAllocator::Free),
             R"#(Release memory)#"  , py::arg("theAddress"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NCollection_WinHeapAllocator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NCollection_WinHeapAllocator::*)() const>(&NCollection_WinHeapAllocator::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NCollection_WinHeapAllocator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NCollection_WinHeapAllocator::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<NCollection_HeapAllocator ,opencascade::handle<NCollection_HeapAllocator>  , NCollection_BaseAllocator >>(m.attr("NCollection_HeapAllocator"))
        .def("Allocate",
             (void * (NCollection_HeapAllocator::*)( const Standard_Size  ) ) static_cast<void * (NCollection_HeapAllocator::*)( const Standard_Size  ) >(&NCollection_HeapAllocator::Allocate),
             R"#(None)#"  , py::arg("theSize"))
        .def("Free",
             (void (NCollection_HeapAllocator::*)( void *  ) ) static_cast<void (NCollection_HeapAllocator::*)( void *  ) >(&NCollection_HeapAllocator::Free),
             R"#(None)#"  , py::arg("anAddress"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NCollection_HeapAllocator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NCollection_HeapAllocator::*)() const>(&NCollection_HeapAllocator::DynamicType),
             R"#(None)#" )
        .def_static("GlobalHeapAllocator_s",
                    (const opencascade::handle<NCollection_HeapAllocator> & (*)() ) static_cast<const opencascade::handle<NCollection_HeapAllocator> & (*)() >(&NCollection_HeapAllocator::GlobalHeapAllocator),
                    R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NCollection_HeapAllocator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NCollection_HeapAllocator::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<NCollection_AccAllocator ,opencascade::handle<NCollection_AccAllocator>  , NCollection_BaseAllocator >>(m.attr("NCollection_AccAllocator"))
        .def(py::init< const size_t >()  , py::arg("theBlockSize")=static_cast<const size_t>(DefaultBlockSize) )
        .def("Allocate",
             (void * (NCollection_AccAllocator::*)( const size_t  ) ) static_cast<void * (NCollection_AccAllocator::*)( const size_t  ) >(&NCollection_AccAllocator::Allocate),
             R"#(Allocate memory with given size)#"  , py::arg("theSize"))
        .def("Free",
             (void (NCollection_AccAllocator::*)( void *  ) ) static_cast<void (NCollection_AccAllocator::*)( void *  ) >(&NCollection_AccAllocator::Free),
             R"#(Free a previously allocated memory; memory is returned to the OS when all allocations in some block are freed)#"  , py::arg("theAddress"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NCollection_AccAllocator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NCollection_AccAllocator::*)() const>(&NCollection_AccAllocator::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NCollection_AccAllocator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NCollection_AccAllocator::get_type_descriptor),
                    R"#(None)#" )
;


    static_cast<py::class_<NCollection_AlignedAllocator ,opencascade::handle<NCollection_AlignedAllocator>  , NCollection_BaseAllocator >>(m.attr("NCollection_AlignedAllocator"))
        .def(py::init< const size_t >()  , py::arg("theAlignment") )
        .def("Allocate",
             (void * (NCollection_AlignedAllocator::*)( const size_t  ) ) static_cast<void * (NCollection_AlignedAllocator::*)( const size_t  ) >(&NCollection_AlignedAllocator::Allocate),
             R"#(Allocate memory with given size. Returns NULL on failure.)#"  , py::arg("theSize"))
        .def("Free",
             (void (NCollection_AlignedAllocator::*)( void *  ) ) static_cast<void (NCollection_AlignedAllocator::*)( void *  ) >(&NCollection_AlignedAllocator::Free),
             R"#(Free a previously allocated memory.)#"  , py::arg("thePtr"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (NCollection_AlignedAllocator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (NCollection_AlignedAllocator::*)() const>(&NCollection_AlignedAllocator::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&NCollection_AlignedAllocator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&NCollection_AlignedAllocator::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/NCollection_UtfString.hxx
// ./opencascade/NCollection_DefineIndexedDataMap.hxx
// ./opencascade/NCollection_Buffer.hxx
// ./opencascade/NCollection_DefineVector.hxx
// ./opencascade/NCollection_Map.hxx
// ./opencascade/NCollection_StlIterator.hxx
// ./opencascade/NCollection_EBTree.hxx
// ./opencascade/NCollection_DefineAlloc.hxx
// ./opencascade/NCollection_StdAllocator.hxx
// ./opencascade/NCollection_SparseArray.hxx
// ./opencascade/NCollection_BaseVector.hxx
    m.def("GetCapacity", 
          (Standard_Integer (*)( const Standard_Integer  ))  static_cast<Standard_Integer (*)( const Standard_Integer  )>(&GetCapacity),
          R"#(None)#"  , py::arg("theIncrement"));
// ./opencascade/NCollection_IndexedDataMap.hxx
// ./opencascade/NCollection_DefineSequence.hxx
// ./opencascade/NCollection_Mat4.hxx
// ./opencascade/NCollection_DefineList.hxx
// ./opencascade/NCollection_DefineDataMap.hxx
// ./opencascade/NCollection_BaseSequence.hxx
// ./opencascade/NCollection_HArray1.hxx
// ./opencascade/NCollection_UtfIterator.hxx
// ./opencascade/NCollection_DefineHSequence.hxx
// ./opencascade/NCollection_BaseList.hxx
// ./opencascade/NCollection_HeapAllocator.hxx
// ./opencascade/NCollection_Vector.hxx
// ./opencascade/NCollection_Array1.hxx
// ./opencascade/NCollection_IncAllocator.hxx
// ./opencascade/NCollection_BaseMap.hxx
// ./opencascade/NCollection_Lerp.hxx
// ./opencascade/NCollection_DefineIndexedMap.hxx
// ./opencascade/NCollection_DefaultHasher.hxx
// ./opencascade/NCollection_DefineMap.hxx
// ./opencascade/NCollection_Comparator.hxx
// ./opencascade/NCollection_CellFilter.hxx
// ./opencascade/NCollection_AlignedAllocator.hxx
// ./opencascade/NCollection_IndexedMap.hxx
// ./opencascade/NCollection_ListNode.hxx
// ./opencascade/NCollection_Handle.hxx
// ./opencascade/NCollection_TypeDef.hxx
// ./opencascade/NCollection_DefineHArray2.hxx
// ./opencascade/NCollection_TListNode.hxx
// ./opencascade/NCollection_HArray2.hxx
// ./opencascade/NCollection_Sequence.hxx
// ./opencascade/NCollection_Vec2.hxx
// ./opencascade/NCollection_Vec3.hxx
// ./opencascade/NCollection_DataMap.hxx
// ./opencascade/NCollection_DoubleMap.hxx
// ./opencascade/NCollection_UBTreeFiller.hxx
// ./opencascade/NCollection_LocalArray.hxx
// ./opencascade/NCollection_DefineDoubleMap.hxx
// ./opencascade/NCollection_List.hxx
// ./opencascade/NCollection_Array2.hxx
// ./opencascade/NCollection_DefineArray1.hxx
// ./opencascade/NCollection_WinHeapAllocator.hxx
// ./opencascade/NCollection_Vec4.hxx
// ./opencascade/NCollection_HSequence.hxx
// ./opencascade/NCollection_DefineHArray1.hxx
// ./opencascade/NCollection_String.hxx
// ./opencascade/NCollection_SparseArrayBase.hxx
// ./opencascade/NCollection_BaseAllocator.hxx
// ./opencascade/NCollection_DefineArray2.hxx
// ./opencascade/NCollection_UBTree.hxx
// ./opencascade/NCollection_AccAllocator.hxx
// ./opencascade/NCollection_TListIterator.hxx

// operators

// register typdefs
// ./opencascade/NCollection_UtfString.hxx
    register_template_NCollection_UtfString<Standard_Utf8Char>(m,"NCollection_Utf8String");  
    register_template_NCollection_UtfString<Standard_Utf16Char>(m,"NCollection_Utf16String");  
    register_template_NCollection_UtfString<Standard_Utf32Char>(m,"NCollection_Utf32String");  
    register_template_NCollection_UtfString<Standard_WideChar>(m,"NCollection_UtfWideString");  
// ./opencascade/NCollection_DefineIndexedDataMap.hxx
// ./opencascade/NCollection_Buffer.hxx
// ./opencascade/NCollection_DefineVector.hxx
// ./opencascade/NCollection_Map.hxx
// ./opencascade/NCollection_StlIterator.hxx
// ./opencascade/NCollection_EBTree.hxx
// ./opencascade/NCollection_DefineAlloc.hxx
// ./opencascade/NCollection_StdAllocator.hxx
// ./opencascade/NCollection_SparseArray.hxx
// ./opencascade/NCollection_BaseVector.hxx
// ./opencascade/NCollection_IndexedDataMap.hxx
// ./opencascade/NCollection_DefineSequence.hxx
// ./opencascade/NCollection_Mat4.hxx
// ./opencascade/NCollection_DefineList.hxx
// ./opencascade/NCollection_DefineDataMap.hxx
// ./opencascade/NCollection_BaseSequence.hxx
// ./opencascade/NCollection_HArray1.hxx
// ./opencascade/NCollection_UtfIterator.hxx
    register_template_NCollection_UtfIterator<Standard_Utf8Char>(m,"NCollection_Utf8Iter");  
    register_template_NCollection_UtfIterator<Standard_Utf16Char>(m,"NCollection_Utf16Iter");  
    register_template_NCollection_UtfIterator<Standard_Utf32Char>(m,"NCollection_Utf32Iter");  
    register_template_NCollection_UtfIterator<Standard_WideChar>(m,"NCollection_UtfWideIter");  
// ./opencascade/NCollection_DefineHSequence.hxx
// ./opencascade/NCollection_BaseList.hxx
// ./opencascade/NCollection_HeapAllocator.hxx
// ./opencascade/NCollection_Vector.hxx
// ./opencascade/NCollection_Array1.hxx
// ./opencascade/NCollection_IncAllocator.hxx
// ./opencascade/NCollection_BaseMap.hxx
// ./opencascade/NCollection_Lerp.hxx
// ./opencascade/NCollection_DefineIndexedMap.hxx
// ./opencascade/NCollection_DefaultHasher.hxx
// ./opencascade/NCollection_DefineMap.hxx
// ./opencascade/NCollection_Comparator.hxx
// ./opencascade/NCollection_CellFilter.hxx
// ./opencascade/NCollection_AlignedAllocator.hxx
// ./opencascade/NCollection_IndexedMap.hxx
// ./opencascade/NCollection_ListNode.hxx
// ./opencascade/NCollection_Handle.hxx
// ./opencascade/NCollection_TypeDef.hxx
// ./opencascade/NCollection_DefineHArray2.hxx
// ./opencascade/NCollection_TListNode.hxx
// ./opencascade/NCollection_HArray2.hxx
// ./opencascade/NCollection_Sequence.hxx
// ./opencascade/NCollection_Vec2.hxx
// ./opencascade/NCollection_Vec3.hxx
// ./opencascade/NCollection_DataMap.hxx
// ./opencascade/NCollection_DoubleMap.hxx
// ./opencascade/NCollection_UBTreeFiller.hxx
// ./opencascade/NCollection_LocalArray.hxx
// ./opencascade/NCollection_DefineDoubleMap.hxx
// ./opencascade/NCollection_List.hxx
// ./opencascade/NCollection_Array2.hxx
// ./opencascade/NCollection_DefineArray1.hxx
// ./opencascade/NCollection_WinHeapAllocator.hxx
// ./opencascade/NCollection_Vec4.hxx
// ./opencascade/NCollection_HSequence.hxx
// ./opencascade/NCollection_DefineHArray1.hxx
// ./opencascade/NCollection_String.hxx
// ./opencascade/NCollection_SparseArrayBase.hxx
// ./opencascade/NCollection_BaseAllocator.hxx
// ./opencascade/NCollection_DefineArray2.hxx
// ./opencascade/NCollection_UBTree.hxx
// ./opencascade/NCollection_AccAllocator.hxx
// ./opencascade/NCollection_TListIterator.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
