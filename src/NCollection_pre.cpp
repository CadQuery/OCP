
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_XYZ.hxx>
#include <gp_XY.hxx>
#include <Standard_Mutex.hxx>

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
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfIterator.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"
// ./opencascade/NCollection_UtfString.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
const size_t DefaultBlockSize = 24600;

// Module definiiton
void register_NCollection_enums(py::module &main_module) {


py::module m = main_module.def_submodule("NCollection", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<NCollection_CellFilter_Action>(m, "NCollection_CellFilter_Action",R"#(Auxiliary enumeration serving as responce from method Inspect)#")
        .value("CellFilter_Keep",NCollection_CellFilter_Action::CellFilter_Keep)
        .value("CellFilter_Purge",NCollection_CellFilter_Action::CellFilter_Purge).export_values();

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

// pre-register typdefs
    preregister_template_NCollection_UtfIterator<Standard_Utf8Char>(m,"NCollection_Utf8Iter");  
    preregister_template_NCollection_UtfIterator<Standard_Utf16Char>(m,"NCollection_Utf16Iter");  
    preregister_template_NCollection_UtfIterator<Standard_Utf32Char>(m,"NCollection_Utf32Iter");  
    preregister_template_NCollection_UtfIterator<Standard_WideChar>(m,"NCollection_UtfWideIter");  
    preregister_template_NCollection_UtfString<Standard_Utf8Char>(m,"NCollection_Utf8String");  
    preregister_template_NCollection_UtfString<Standard_Utf16Char>(m,"NCollection_Utf16String");  
    preregister_template_NCollection_UtfString<Standard_Utf32Char>(m,"NCollection_Utf32String");  
    preregister_template_NCollection_UtfString<Standard_WideChar>(m,"NCollection_UtfWideString");  

// classes forward declarations only
    py::class_<NCollection_BaseAllocator ,opencascade::handle<NCollection_BaseAllocator>  , Standard_Transient >(m,"NCollection_BaseAllocator",R"#(Purpose: Basic class for memory allocation wizards. Defines the interface for devising different allocators firstly to be used by collections of NCollection, though it it is not deferred. It allocates/frees the memory through Standard procedures, thus it is unnecessary (and sometimes injurious) to have more than one such allocator. To avoid creation of multiple objects the constructors were maid inaccessible. To create the BaseAllocator use the method CommonBaseAllocator. Note that this object is managed by Handle.Purpose: Basic class for memory allocation wizards. Defines the interface for devising different allocators firstly to be used by collections of NCollection, though it it is not deferred. It allocates/frees the memory through Standard procedures, thus it is unnecessary (and sometimes injurious) to have more than one such allocator. To avoid creation of multiple objects the constructors were maid inaccessible. To create the BaseAllocator use the method CommonBaseAllocator. Note that this object is managed by Handle.)#");
    py::class_<NCollection_BaseList , shared_ptr<NCollection_BaseList>  >(m,"NCollection_BaseList",R"#(None)#");
    py::class_<NCollection_BaseMap , shared_ptr_nodelete<NCollection_BaseMap>  >(m,"NCollection_BaseMap",R"#(Purpose: This is a base class for all Maps: Map DataMap DoubleMap IndexedMap IndexedDataMap Provides utilitites for managing the buckets.)#");
    py::class_<NCollection_BaseSequence , shared_ptr_nodelete<NCollection_BaseSequence>  >(m,"NCollection_BaseSequence",R"#(Purpose: This is a base class for the Sequence. It deals with an indexed bidirectional list of NCollection_SeqNode's.)#");
    py::class_<NCollection_BaseVector , shared_ptr_nodelete<NCollection_BaseVector>  >(m,"NCollection_BaseVector",R"#(Class NCollection_BaseVector - base for NCollection_Vector template)#");
    py::class_<NCollection_Buffer ,opencascade::handle<NCollection_Buffer>  , Standard_Transient >(m,"NCollection_Buffer",R"#(Low-level buffer object.Low-level buffer object.)#");
    py::class_<NCollection_CellFilter_InspectorXY , shared_ptr<NCollection_CellFilter_InspectorXY>  >(m,"NCollection_CellFilter_InspectorXY",R"#(None)#");
    py::class_<NCollection_CellFilter_InspectorXYZ , shared_ptr<NCollection_CellFilter_InspectorXYZ>  >(m,"NCollection_CellFilter_InspectorXYZ",R"#(None)#");
    py::class_<NCollection_SparseArrayBase , shared_ptr_nodelete<NCollection_SparseArrayBase> ,Py_NCollection_SparseArrayBase >(m,"NCollection_SparseArrayBase",R"#(Base class for NCollection_SparseArray; provides non-template implementation of general mechanics of block allocation, items creation / deletion etc.)#");
    py::class_<NCollection_StdAllocator<void> , shared_ptr<NCollection_StdAllocator<void>>  >(m,"NCollection_StdAllocator_void",R"#(Implements specialization NCollection_StdAllocator<void>. Specialization is of low value and should normally be avoided in favor of a typed specialization.)#");
    py::class_<NCollection_UtfStringTool , shared_ptr<NCollection_UtfStringTool>  >(m,"NCollection_UtfStringTool",R"#(Auxiliary convertion tool.)#");
    py::class_<NCollection_AccAllocator ,opencascade::handle<NCollection_AccAllocator>  , NCollection_BaseAllocator >(m,"NCollection_AccAllocator",R"#(Class NCollection_AccAllocator - accumulating memory allocator. This class allocates memory on request returning the pointer to the allocated space. The allocation units are grouped in blocks requested from the system as required. This memory is returned to the system when all allocations in a block are freed.Class NCollection_AccAllocator - accumulating memory allocator. This class allocates memory on request returning the pointer to the allocated space. The allocation units are grouped in blocks requested from the system as required. This memory is returned to the system when all allocations in a block are freed.)#");
    py::class_<NCollection_AlignedAllocator ,opencascade::handle<NCollection_AlignedAllocator>  , NCollection_BaseAllocator >(m,"NCollection_AlignedAllocator",R"#(NCollection allocator with managed memory alignment capabilities.NCollection allocator with managed memory alignment capabilities.)#");
    py::class_<NCollection_HeapAllocator ,opencascade::handle<NCollection_HeapAllocator>  , NCollection_BaseAllocator >(m,"NCollection_HeapAllocator",R"#(Allocator that uses the global dynamic heap (malloc / free).Allocator that uses the global dynamic heap (malloc / free).)#");
    py::class_<NCollection_IncAllocator ,opencascade::handle<NCollection_IncAllocator>  , NCollection_BaseAllocator >(m,"NCollection_IncAllocator",R"#(Class NCollection_IncAllocator - incremental memory allocator. This class allocates memory on request returning the pointer to an allocated block. This memory is never returned to the system until the allocator is destroyed.Class NCollection_IncAllocator - incremental memory allocator. This class allocates memory on request returning the pointer to an allocated block. This memory is never returned to the system until the allocator is destroyed.)#");
    py::class_<NCollection_WinHeapAllocator ,opencascade::handle<NCollection_WinHeapAllocator>  , NCollection_BaseAllocator >(m,"NCollection_WinHeapAllocator",R"#(This memory allocator creates dedicated heap for allocations. This technics available only on Windows platform (no alternative on Unix systems). It may be used to take control over memory fragmentation because on destruction ALL allocated memory will be released to the system.This memory allocator creates dedicated heap for allocations. This technics available only on Windows platform (no alternative on Unix systems). It may be used to take control over memory fragmentation because on destruction ALL allocated memory will be released to the system.)#");

};

// user-defined post-inclusion per module

// user-defined post
