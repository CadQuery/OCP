
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_Persistent.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Type.hxx>
#include <Standard_Failure.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Persistent.hxx>
#include <Standard_Failure.hxx>

// module includes
#include <Standard.hxx>
#include <Standard_AbortiveTransaction.hxx>
#include <Standard_Address.hxx>
#include <Standard_ArrayStreamBuffer.hxx>
#include <Standard_Assert.hxx>
#include <Standard_Atomic.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Byte.hxx>
#include <Standard_Character.hxx>
#include <Standard_CLocaleSentry.hxx>
#include <Standard_Condition.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_CString.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DimensionError.hxx>
#include <Standard_DimensionMismatch.hxx>
#include <Standard_DivideByZero.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_Dump.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_ExtCharacter.hxx>
#include <Standard_ExtString.hxx>
#include <Standard_Failure.hxx>
#include <Standard_GUID.hxx>
#include <Standard_HandlerStatus.hxx>
#include <Standard_ImmutableObject.hxx>
#include <Standard_Integer.hxx>
#include <Standard_IStream.hxx>
#include <Standard_JmpBuf.hxx>
#include <Standard_LicenseError.hxx>
#include <Standard_LicenseNotFound.hxx>
#include <Standard_Macro.hxx>
#include <Standard_math.hxx>
#include <Standard_MMgrOpt.hxx>
#include <Standard_MMgrRaw.hxx>
#include <Standard_MMgrRoot.hxx>
#include <Standard_MMgrTBBalloc.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <Standard_Mutex.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_OStream.hxx>
#include <Standard_OutOfMemory.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_Overflow.hxx>
#include <Standard_PByte.hxx>
#include <Standard_PCharacter.hxx>
#include <Standard_PErrorHandler.hxx>
#include <Standard_Persistent.hxx>
#include <Standard_PExtCharacter.hxx>
#include <Standard_PrimitiveTypes.hxx>
#include <Standard_ProgramError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_ReadBuffer.hxx>
#include <Standard_ReadLineBuffer.hxx>
#include <Standard_Real.hxx>
#include <Standard_ShortReal.hxx>
#include <Standard_Size.hxx>
#include <Standard_SStream.hxx>
#include <Standard_Std.hxx>
#include <Standard_Stream.hxx>
#include <Standard_ThreadId.hxx>
#include <Standard_Time.hxx>
#include <Standard_TooManyUsers.hxx>
#include <Standard_Transient.hxx>
#include <Standard_Type.hxx>
#include <Standard_TypeDef.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Standard_Underflow.hxx>
#include <Standard_UUID.hxx>
#include <Standard_Version.hxx>
#include <Standard_WarningsDisable.hxx>
#include <Standard_WarningsRestore.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Standard_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Standard", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Standard_HandlerStatus>(m, "Standard_HandlerStatus",R"#(None)#")
        .value("Standard_HandlerVoid",Standard_HandlerStatus::Standard_HandlerVoid)
        .value("Standard_HandlerJumped",Standard_HandlerStatus::Standard_HandlerJumped)
        .value("Standard_HandlerProcessed",Standard_HandlerStatus::Standard_HandlerProcessed).export_values();

//Python trampoline classes
    class Py_Standard_MMgrRoot : public Standard_MMgrRoot{
    public:
        using Standard_MMgrRoot::Standard_MMgrRoot;
        
        
        // public pure virtual
        Standard_Address Allocate(const Standard_Size theSize) override { PYBIND11_OVERLOAD_PURE(Standard_Address,Standard_MMgrRoot,Allocate,theSize) };
        Standard_Address Reallocate(Standard_Address thePtr,const Standard_Size theSize) override { PYBIND11_OVERLOAD_PURE(Standard_Address,Standard_MMgrRoot,Reallocate,thePtr,theSize) };
        void Free(Standard_Address thePtr) override { PYBIND11_OVERLOAD_PURE(void,Standard_MMgrRoot,Free,thePtr) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<GUID , shared_ptr<GUID>  >(m,"GUID",R"#(None)#");
    py::class_<Standard , shared_ptr<Standard>  >(m,"Standard",R"#(The package Standard provides global memory allocator and other basic services used by other OCCT components.)#");
    py::class_<Standard_ArrayStreamBuffer , shared_ptr<Standard_ArrayStreamBuffer>  >(m,"Standard_ArrayStreamBuffer",R"#(Custom buffer object implementing STL interface std::streambuf for streamed reading from allocated memory block. Implements minimal sub-set of methods for passing buffer to std::istream, including seek support.)#");
    py::class_<Standard_CLocaleSentry , shared_ptr<Standard_CLocaleSentry>  >(m,"Standard_CLocaleSentry",R"#(This class intended to temporary switch C locale and logically equivalent to setlocale(LC_ALL, "C"). It is intended to format text regardless of user locale settings (for import/export functionality). Thus following calls to sprintf, atoi and other functions will use "C" locale. Destructor of this class will return original locale.)#");
    py::class_<Standard_Condition , shared_ptr<Standard_Condition>  >(m,"Standard_Condition",R"#(This is boolean flag intended for communication between threads. One thread sets this flag to TRUE to indicate some event happened and another thread either waits this event or checks periodically its state to perform job.)#");
    py::class_<Standard_Dump , shared_ptr<Standard_Dump>  >(m,"Standard_Dump",R"#(This interface has some tool methods for stream (in JSON format) processing.)#");
    py::class_<Standard_DumpSentry , shared_ptr<Standard_DumpSentry>  >(m,"Standard_DumpSentry",R"#(Simple sentry class providing convenient interface to dump. Appends start and last rows in dump with class name key. An example of the using: for ClassName, the result is: "ClassName" { ... } Create instance of that class in the first row of Dump.Simple sentry class providing convenient interface to dump. Appends start and last rows in dump with class name key. An example of the using: for ClassName, the result is: "ClassName" { ... } Create instance of that class in the first row of Dump.)#");
    py::class_<Standard_ErrorHandler , shared_ptr<Standard_ErrorHandler>  >(m,"Standard_ErrorHandler",R"#(Class implementing mechanics of conversion of signals to exceptions.)#");
    py::class_<Standard_GUID , shared_ptr<Standard_GUID>  >(m,"Standard_GUID",R"#(None)#");
    py::class_<Standard_MMgrRoot , shared_ptr<Standard_MMgrRoot> ,Py_Standard_MMgrRoot >(m,"Standard_MMgrRoot",R"#(Root class for Open CASCADE mmemory managers. Defines only abstract interface functions.)#");
    py::class_<Standard_Mutex , shared_ptr<Standard_Mutex>  >(m,"Standard_Mutex",R"#(Mutex: a class to synchronize access to shared data.)#");
    py::class_<Standard_ReadBuffer , shared_ptr<Standard_ReadBuffer>  >(m,"Standard_ReadBuffer",R"#(Auxiliary tool for buffered reading from input stream within chunks of constant size.)#");
    py::class_<Standard_ReadLineBuffer , shared_ptr<Standard_ReadLineBuffer>  >(m,"Standard_ReadLineBuffer",R"#(Auxiliary tool for buffered reading of lines from input stream.)#");
    py::class_<Standard_Static_Assert<true> , shared_ptr<Standard_Static_Assert<true>>  >(m,"Standard_Static_Assert_true",R"#(Static assert -- specialization for condition being true)#");
    py::class_<Standard_Transient ,opencascade::handle<Standard_Transient>  >(m,"Standard_Transient",R"#(Abstract class which forms the root of the entire Transient class hierarchy.)#");
    py::class_<Standard_MMgrOpt , shared_ptr<Standard_MMgrOpt>  , Standard_MMgrRoot >(m,"Standard_MMgrOpt",R"#(Open CASCADE memory manager optimized for speed.)#");
    py::class_<Standard_MMgrRaw , shared_ptr<Standard_MMgrRaw>  , Standard_MMgrRoot >(m,"Standard_MMgrRaw",R"#(Implementation of raw OCC memory manager which uses standard C functions: malloc (or calloc), free and realloc without any optimization)#");
    py::class_<Standard_MMgrTBBalloc , shared_ptr<Standard_MMgrTBBalloc>  , Standard_MMgrRoot >(m,"Standard_MMgrTBBalloc",R"#(Implementation of OCC memory manager which uses Intel TBB scalable allocator.)#");
    py::class_<Standard_Persistent ,opencascade::handle<Standard_Persistent>  , Standard_Transient >(m,"Standard_Persistent",R"#(Root of "persistent" classes, a legacy support of object oriented databases, now outdated.)#");
    py::class_<Standard_Type ,opencascade::handle<Standard_Type>  , Standard_Transient >(m,"Standard_Type",R"#(This class provides legacy interface (type descriptor) to run-time type information (RTTI) for OCCT classes inheriting from Standard_Transient.This class provides legacy interface (type descriptor) to run-time type information (RTTI) for OCCT classes inheriting from Standard_Transient.)#");

};

// user-defined post-inclusion per module

// user-defined post
