
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_ErrorHandler.hxx>
#include <Standard_Persistent.hxx>
#include <Standard_Failure.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_Persistent.hxx>
#include <Standard_Failure.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Type.hxx>

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
void register_Standard(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Standard"));


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

// classes

    // default constructor
    register_default_constructor<GUID , shared_ptr<GUID>>(m,"GUID");

    static_cast<py::class_<GUID , shared_ptr<GUID> >>(m.attr("GUID"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Standard , shared_ptr<Standard>>(m,"Standard");

    static_cast<py::class_<Standard , shared_ptr<Standard> >>(m.attr("Standard"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_ArrayStreamBuffer , shared_ptr<Standard_ArrayStreamBuffer> >>(m.attr("Standard_ArrayStreamBuffer"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (Standard_ArrayStreamBuffer::*)( const char * , const size_t ) ) static_cast<void (Standard_ArrayStreamBuffer::*)( const char * , const size_t ) >(&Standard_ArrayStreamBuffer::Init),
             R"#((Re)-initialize the stream. Passed pointer is stored as is (memory is NOT copied nor released with destructor).)#"  , py::arg("theBegin"),  py::arg("theSize"))
        .def("xsgetn",
             (std::streamsize (Standard_ArrayStreamBuffer::*)( char * , std::streamsize ) ) static_cast<std::streamsize (Standard_ArrayStreamBuffer::*)( char * , std::streamsize ) >(&Standard_ArrayStreamBuffer::xsgetn),
             R"#(Read a bunch of bytes at once.)#"  , py::arg("thePtr"),  py::arg("theCount"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_CLocaleSentry , shared_ptr<Standard_CLocaleSentry> >>(m.attr("Standard_CLocaleSentry"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_Condition , shared_ptr<Standard_Condition> >>(m.attr("Standard_Condition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Standard_Dump , shared_ptr<Standard_Dump>>(m,"Standard_Dump");

    static_cast<py::class_<Standard_Dump , shared_ptr<Standard_Dump> >>(m.attr("Standard_Dump"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetPointerPrefix_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&Standard_Dump::GetPointerPrefix),
                    R"#(Returns default prefix added for each pointer info string if short presentation of pointer used)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_DumpSentry , shared_ptr<Standard_DumpSentry> >>(m.attr("Standard_DumpSentry"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_ErrorHandler , shared_ptr<Standard_ErrorHandler> >>(m.attr("Standard_ErrorHandler"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (Standard_JmpBuf & (Standard_ErrorHandler::*)() ) static_cast<Standard_JmpBuf & (Standard_ErrorHandler::*)() >(&Standard_ErrorHandler::Label),
             R"#(Returns label for jump)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_GUID , shared_ptr<Standard_GUID> >>(m.attr("Standard_GUID"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_MMgrRoot , shared_ptr<Standard_MMgrRoot>,Py_Standard_MMgrRoot >>(m.attr("Standard_MMgrRoot"))
    // constructors
    // custom constructors
    // methods
        .def("Allocate",
             (Standard_Address (Standard_MMgrRoot::*)( const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrRoot::*)( const Standard_Size ) >(&Standard_MMgrRoot::Allocate),
             R"#(Allocate specified number of bytes. The actually allocated space should be rounded up to double word size (4 bytes), as this is expected by implementation of some classes in OCC (e.g. TCollection_AsciiString))#"  , py::arg("theSize"))
        .def("Reallocate",
             (Standard_Address (Standard_MMgrRoot::*)( Standard_Address , const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrRoot::*)( Standard_Address , const Standard_Size ) >(&Standard_MMgrRoot::Reallocate),
             R"#(Reallocate previously allocated memory to contain at least theSize bytes. In case of success, new pointer is returned.)#"  , py::arg("thePtr"),  py::arg("theSize"))
        .def("Free",
             (void (Standard_MMgrRoot::*)( Standard_Address ) ) static_cast<void (Standard_MMgrRoot::*)( Standard_Address ) >(&Standard_MMgrRoot::Free),
             R"#(Frees previously allocated memory at specified address.)#"  , py::arg("thePtr"))
        .def("Purge",
             (Standard_Integer (Standard_MMgrRoot::*)( Standard_Boolean ) ) static_cast<Standard_Integer (Standard_MMgrRoot::*)( Standard_Boolean ) >(&Standard_MMgrRoot::Purge),
             R"#(Purge internally cached unused memory blocks (if any) by releasing them to the operating system. Must return non-zero if some memory has been actually released, or zero otherwise.)#"  , py::arg("isDestroyed")=static_cast<Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_Mutex , shared_ptr<Standard_Mutex> >>(m.attr("Standard_Mutex"))
    // constructors
    // custom constructors
    // methods
        .def("Unlock",
             (void (Standard_Mutex::*)() ) static_cast<void (Standard_Mutex::*)() >(&Standard_Mutex::Unlock),
             R"#(Method to unlock the mutex; releases it to other users)#" )
        .def("Unlock",
             (void (Standard_Mutex::*)() ) static_cast<void (Standard_Mutex::*)() >(&Standard_Mutex::Unlock),
             R"#(Method to unlock the mutex; releases it to other users)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_ReadBuffer , shared_ptr<Standard_ReadBuffer> >>(m.attr("Standard_ReadBuffer"))
    // constructors
        .def(py::init< int64_t,size_t >()  , py::arg("theDataLen"),  py::arg("theChunkLen") )
    // custom constructors
    // methods
        .def("Init",
             (void (Standard_ReadBuffer::*)( int64_t , size_t ) ) static_cast<void (Standard_ReadBuffer::*)( int64_t , size_t ) >(&Standard_ReadBuffer::Init),
             R"#(Initialize the buffer.)#"  , py::arg("theDataLen"),  py::arg("theChunkLen"))
        .def("IsDone",
             (bool (Standard_ReadBuffer::*)() const) static_cast<bool (Standard_ReadBuffer::*)() const>(&Standard_ReadBuffer::IsDone),
             R"#(Return TRUE if amount of read bytes is equal to requested length of entire data.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_ReadLineBuffer , shared_ptr<Standard_ReadLineBuffer> >>(m.attr("Standard_ReadLineBuffer"))
    // constructors
        .def(py::init< size_t >()  , py::arg("theMaxBufferSizeBytes") )
    // custom constructors
    // methods
        .def("Clear",
             (void (Standard_ReadLineBuffer::*)() ) static_cast<void (Standard_ReadLineBuffer::*)() >(&Standard_ReadLineBuffer::Clear),
             R"#(Clear buffer and cached values.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Standard_Static_Assert<true> , shared_ptr<Standard_Static_Assert<true>>>(m,"Standard_Static_Assert_true");

    static_cast<py::class_<Standard_Static_Assert<true> , shared_ptr<Standard_Static_Assert<true>> >>(m.attr("Standard_Static_Assert_true"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("assert_ok_s",
                    (void (*)() ) static_cast<void (*)() >(&Standard_Static_Assert<true>::assert_ok),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_Transient ,opencascade::handle<Standard_Transient> >>(m.attr("Standard_Transient"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Transient & >()  , py::arg("") )
    // custom constructors
    // methods
        .def("Delete",
             (void (Standard_Transient::*)() const) static_cast<void (Standard_Transient::*)() const>(&Standard_Transient::Delete),
             R"#(Memory deallocator for transient classes)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Standard_Transient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Standard_Transient::*)() const>(&Standard_Transient::DynamicType),
             R"#(Returns a type descriptor about this object.)#" )
        .def("GetRefCount",
             (Standard_Integer (Standard_Transient::*)() const) static_cast<Standard_Integer (Standard_Transient::*)() const>(&Standard_Transient::GetRefCount),
             R"#(Get the reference counter of this object)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Standard_Transient::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_MMgrOpt , shared_ptr<Standard_MMgrOpt> , Standard_MMgrRoot>>(m.attr("Standard_MMgrOpt"))
    // constructors
    // custom constructors
    // methods
        .def("Allocate",
             (Standard_Address (Standard_MMgrOpt::*)( const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrOpt::*)( const Standard_Size ) >(&Standard_MMgrOpt::Allocate),
             R"#(Allocate aSize bytes; see class description above)#"  , py::arg("aSize"))
        .def("Reallocate",
             (Standard_Address (Standard_MMgrOpt::*)( Standard_Address , const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrOpt::*)( Standard_Address , const Standard_Size ) >(&Standard_MMgrOpt::Reallocate),
             R"#(Reallocate previously allocated aPtr to a new size; new address is returned. In case that aPtr is null, the function behaves exactly as Allocate.)#"  , py::arg("thePtr"),  py::arg("theSize"))
        .def("Free",
             (void (Standard_MMgrOpt::*)( Standard_Address ) ) static_cast<void (Standard_MMgrOpt::*)( Standard_Address ) >(&Standard_MMgrOpt::Free),
             R"#(Free previously allocated block. Note that block can not all blocks are released to the OS by this method (see class description))#"  , py::arg("thePtr"))
        .def("Purge",
             (Standard_Integer (Standard_MMgrOpt::*)( Standard_Boolean ) ) static_cast<Standard_Integer (Standard_MMgrOpt::*)( Standard_Boolean ) >(&Standard_MMgrOpt::Purge),
             R"#(Release medium-sized blocks of memory in free lists to the system. Returns number of actually freed blocks)#"  , py::arg("isDestroyed"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_MMgrRaw , shared_ptr<Standard_MMgrRaw> , Standard_MMgrRoot>>(m.attr("Standard_MMgrRaw"))
    // constructors
    // custom constructors
    // methods
        .def("Allocate",
             (Standard_Address (Standard_MMgrRaw::*)( const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrRaw::*)( const Standard_Size ) >(&Standard_MMgrRaw::Allocate),
             R"#(Allocate aSize bytes)#"  , py::arg("aSize"))
        .def("Reallocate",
             (Standard_Address (Standard_MMgrRaw::*)( Standard_Address , const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrRaw::*)( Standard_Address , const Standard_Size ) >(&Standard_MMgrRaw::Reallocate),
             R"#(Reallocate aPtr to the size aSize. The new pointer is returned.)#"  , py::arg("thePtr"),  py::arg("theSize"))
        .def("Free",
             (void (Standard_MMgrRaw::*)( Standard_Address ) ) static_cast<void (Standard_MMgrRaw::*)( Standard_Address ) >(&Standard_MMgrRaw::Free),
             R"#(Free allocated memory. The pointer is nullified.)#"  , py::arg("thePtr"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_MMgrTBBalloc , shared_ptr<Standard_MMgrTBBalloc> , Standard_MMgrRoot>>(m.attr("Standard_MMgrTBBalloc"))
    // constructors
    // custom constructors
    // methods
        .def("Allocate",
             (Standard_Address (Standard_MMgrTBBalloc::*)( const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrTBBalloc::*)( const Standard_Size ) >(&Standard_MMgrTBBalloc::Allocate),
             R"#(Allocate aSize bytes)#"  , py::arg("aSize"))
        .def("Reallocate",
             (Standard_Address (Standard_MMgrTBBalloc::*)( Standard_Address , const Standard_Size ) ) static_cast<Standard_Address (Standard_MMgrTBBalloc::*)( Standard_Address , const Standard_Size ) >(&Standard_MMgrTBBalloc::Reallocate),
             R"#(Reallocate aPtr to the size aSize. The new pointer is returned.)#"  , py::arg("thePtr"),  py::arg("theSize"))
        .def("Free",
             (void (Standard_MMgrTBBalloc::*)( Standard_Address ) ) static_cast<void (Standard_MMgrTBBalloc::*)( Standard_Address ) >(&Standard_MMgrTBBalloc::Free),
             R"#(Free allocated memory)#"  , py::arg("thePtr"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_Persistent ,opencascade::handle<Standard_Persistent> , Standard_Transient>>(m.attr("Standard_Persistent"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Standard_Persistent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Standard_Persistent::*)() const>(&Standard_Persistent::DynamicType),
             R"#(None)#" )
        .def("TypeNum",
             (Standard_Integer & (Standard_Persistent::*)() ) static_cast<Standard_Integer & (Standard_Persistent::*)() >(&Standard_Persistent::TypeNum),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Standard_Persistent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_Type ,opencascade::handle<Standard_Type> , Standard_Transient>>(m.attr("Standard_Type"))
    // constructors
    // custom constructors
    // methods
        .def("SystemName",
             (Standard_CString (Standard_Type::*)() const) static_cast<Standard_CString (Standard_Type::*)() const>(&Standard_Type::SystemName),
             R"#(Returns the system type name of the class (typeinfo.name))#" )
        .def("Name",
             (Standard_CString (Standard_Type::*)() const) static_cast<Standard_CString (Standard_Type::*)() const>(&Standard_Type::Name),
             R"#(Returns the given name of the class type (get_type_name))#" )
        .def("Size",
             (Standard_Size (Standard_Type::*)() const) static_cast<Standard_Size (Standard_Type::*)() const>(&Standard_Type::Size),
             R"#(Returns the size of the class instance in bytes)#" )
        .def("Parent",
             (const opencascade::handle<Standard_Type> & (Standard_Type::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Standard_Type::*)() const>(&Standard_Type::Parent),
             R"#(Returns descriptor of the base class in the hierarchy)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Standard_Type::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Standard_Type::*)() const>(&Standard_Type::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Standard_Type::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Standard_DivideByZero.hxx
// ./opencascade/Standard_Condition.hxx
// ./opencascade/Standard_PrimitiveTypes.hxx
// ./opencascade/Standard_ConstructionError.hxx
// ./opencascade/Standard_Byte.hxx
// ./opencascade/Standard_ArrayStreamBuffer.hxx
// ./opencascade/Standard_Type.hxx
// ./opencascade/Standard_RangeError.hxx
// ./opencascade/Standard_LicenseError.hxx
// ./opencascade/Standard_MMgrOpt.hxx
// ./opencascade/Standard_GUID.hxx
// ./opencascade/Standard_MultiplyDefined.hxx
// ./opencascade/Standard_WarningsDisable.hxx
// ./opencascade/Standard_NullObject.hxx
// ./opencascade/Standard_DimensionMismatch.hxx
// ./opencascade/Standard_OStream.hxx
// ./opencascade/Standard_HandlerStatus.hxx
// ./opencascade/Standard_OutOfRange.hxx
// ./opencascade/Standard_CString.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_CString , const Standard_CString ))  static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_CString )>(&IsEqual),
          R"#(Returns Standard_True if two strings are equal)#"  , py::arg("theOne"),  py::arg("theTwo"));
// ./opencascade/Standard_Time.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Time , const Standard_Time ))  static_cast<Standard_Boolean (*)( const Standard_Time , const Standard_Time )>(&IsEqual),
          R"#(None)#"  , py::arg("theOne"),  py::arg("theTwo"));
// ./opencascade/Standard_Integer.hxx
    m.def("Abs",
          (Standard_Integer (*)( const Standard_Integer ))  static_cast<Standard_Integer (*)( const Standard_Integer )>(&Abs),
          R"#(None)#"  , py::arg("Value"));
    m.def("IsEven",
          (Standard_Boolean (*)( const Standard_Integer ))  static_cast<Standard_Boolean (*)( const Standard_Integer )>(&IsEven),
          R"#(None)#"  , py::arg("Value"));
    m.def("IsOdd",
          (Standard_Boolean (*)( const Standard_Integer ))  static_cast<Standard_Boolean (*)( const Standard_Integer )>(&IsOdd),
          R"#(None)#"  , py::arg("Value"));
    m.def("Max",
          (Standard_Integer (*)( const Standard_Integer , const Standard_Integer ))  static_cast<Standard_Integer (*)( const Standard_Integer , const Standard_Integer )>(&Max),
          R"#(None)#"  , py::arg("Val1"),  py::arg("Val2"));
    m.def("Min",
          (Standard_Integer (*)( const Standard_Integer , const Standard_Integer ))  static_cast<Standard_Integer (*)( const Standard_Integer , const Standard_Integer )>(&Min),
          R"#(None)#"  , py::arg("Val1"),  py::arg("Val2"));
    m.def("Modulus",
          (Standard_Integer (*)( const Standard_Integer , const Standard_Integer ))  static_cast<Standard_Integer (*)( const Standard_Integer , const Standard_Integer )>(&Modulus),
          R"#(None)#"  , py::arg("Value"),  py::arg("Divisor"));
    m.def("Square",
          (Standard_Integer (*)( const Standard_Integer ))  static_cast<Standard_Integer (*)( const Standard_Integer )>(&Square),
          R"#(None)#"  , py::arg("Value"));
    m.def("IntegerFirst",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&IntegerFirst),
          R"#(None)#" );
    m.def("IntegerLast",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&IntegerLast),
          R"#(None)#" );
    m.def("IntegerSize",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&IntegerSize),
          R"#(None)#" );
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Integer , const Standard_Integer ))  static_cast<Standard_Boolean (*)( const Standard_Integer , const Standard_Integer )>(&IsEqual),
          R"#(None)#"  , py::arg("theOne"),  py::arg("theTwo"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Utf32Char , const Standard_Utf32Char ))  static_cast<Standard_Boolean (*)( const Standard_Utf32Char , const Standard_Utf32Char )>(&IsEqual),
          R"#(None)#"  , py::arg("theOne"),  py::arg("theTwo"));
// ./opencascade/Standard_CLocaleSentry.hxx
// ./opencascade/Standard_Macro.hxx
// ./opencascade/Standard_Persistent.hxx
// ./opencascade/Standard_AbortiveTransaction.hxx
// ./opencascade/Standard_ImmutableObject.hxx
// ./opencascade/Standard.hxx
// ./opencascade/Standard_Boolean.hxx
// ./opencascade/Standard_Mutex.hxx
// ./opencascade/Standard_DefineAlloc.hxx
// ./opencascade/Standard_Atomic.hxx
    m.def("Standard_Atomic_Increment",
          (int (*)( volatile int * ))  static_cast<int (*)( volatile int * )>(&Standard_Atomic_Increment),
          R"#(Increments atomically integer variable pointed by theValue and returns resulting incremented value.)#"  , py::arg("theValue"));
    m.def("Standard_Atomic_Decrement",
          (int (*)( volatile int * ))  static_cast<int (*)( volatile int * )>(&Standard_Atomic_Decrement),
          R"#(Decrements atomically integer variable pointed by theValue and returns resulting decremented value.)#"  , py::arg("theValue"));
    m.def("Standard_Atomic_CompareAndSwap",
          (bool (*)( volatile int * , int , int ))  static_cast<bool (*)( volatile int * , int , int )>(&Standard_Atomic_CompareAndSwap),
          R"#(Perform an atomic compare and swap. That is, if the current value of *theValue is theOldValue, then write theNewValue into *theValue.)#"  , py::arg("theValue"),  py::arg("theOldValue"),  py::arg("theNewValue"));
    m.def("Standard_Atomic_Increment",
          (int (*)( volatile int * ))  static_cast<int (*)( volatile int * )>(&Standard_Atomic_Increment),
          R"#(Increments atomically integer variable pointed by theValue and returns resulting incremented value.)#"  , py::arg("theValue"));
    m.def("Standard_Atomic_Decrement",
          (int (*)( volatile int * ))  static_cast<int (*)( volatile int * )>(&Standard_Atomic_Decrement),
          R"#(Decrements atomically integer variable pointed by theValue and returns resulting decremented value.)#"  , py::arg("theValue"));
    m.def("Standard_Atomic_CompareAndSwap",
          (bool (*)( volatile int * , int , int ))  static_cast<bool (*)( volatile int * , int , int )>(&Standard_Atomic_CompareAndSwap),
          R"#(Perform an atomic compare and swap. That is, if the current value of *theValue is theOldValue, then write theNewValue into *theValue.)#"  , py::arg("theValue"),  py::arg("theOldValue"),  py::arg("theNewValue"));
// ./opencascade/Standard_NotImplemented.hxx
// ./opencascade/Standard_LicenseNotFound.hxx
// ./opencascade/Standard_Underflow.hxx
// ./opencascade/Standard_Real.hxx
    m.def("RealSmall",
          (Standard_Real (*)())  static_cast<Standard_Real (*)()>(&RealSmall),
          R"#(None)#" );
    m.def("Abs",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Abs),
          R"#(None)#"  , py::arg("Value"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Real , const Standard_Real ))  static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real )>(&IsEqual),
          R"#(None)#"  , py::arg("Value1"),  py::arg("Value2"));
    m.def("RealDigits",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&RealDigits),
          R"#(None)#" );
    m.def("RealEpsilon",
          (Standard_Real (*)())  static_cast<Standard_Real (*)()>(&RealEpsilon),
          R"#(None)#" );
    m.def("RealFirst",
          (Standard_Real (*)())  static_cast<Standard_Real (*)()>(&RealFirst),
          R"#(None)#" );
    m.def("RealFirst10Exp",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&RealFirst10Exp),
          R"#(None)#" );
    m.def("RealLast",
          (Standard_Real (*)())  static_cast<Standard_Real (*)()>(&RealLast),
          R"#(None)#" );
    m.def("RealLast10Exp",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&RealLast10Exp),
          R"#(None)#" );
    m.def("RealMantissa",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&RealMantissa),
          R"#(None)#" );
    m.def("RealRadix",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&RealRadix),
          R"#(None)#" );
    m.def("RealSize",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&RealSize),
          R"#(None)#" );
    m.def("IntToReal",
          (Standard_Real (*)( const Standard_Integer ))  static_cast<Standard_Real (*)( const Standard_Integer )>(&IntToReal),
          R"#(None)#"  , py::arg("Value"));
    m.def("ATan",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&ATan),
          R"#(None)#"  , py::arg("Value"));
    m.def("Ceiling",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Ceiling),
          R"#(None)#"  , py::arg("Value"));
    m.def("Cos",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Cos),
          R"#(None)#"  , py::arg("Value"));
    m.def("Epsilon",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Epsilon),
          R"#(None)#"  , py::arg("Value"));
    m.def("Exp",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Exp),
          R"#(None)#"  , py::arg("Value"));
    m.def("Floor",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Floor),
          R"#(None)#"  , py::arg("Value"));
    m.def("IntegerPart",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&IntegerPart),
          R"#(None)#"  , py::arg("Value"));
    m.def("Log10",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Log10),
          R"#(None)#"  , py::arg("Value"));
    m.def("Max",
          (Standard_Real (*)( const Standard_Real , const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real , const Standard_Real )>(&Max),
          R"#(None)#"  , py::arg("Val1"),  py::arg("Val2"));
    m.def("Min",
          (Standard_Real (*)( const Standard_Real , const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real , const Standard_Real )>(&Min),
          R"#(None)#"  , py::arg("Val1"),  py::arg("Val2"));
    m.def("Pow",
          (Standard_Real (*)( const Standard_Real , const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real , const Standard_Real )>(&Pow),
          R"#(None)#"  , py::arg("Value"),  py::arg("P"));
    m.def("RealPart",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&RealPart),
          R"#(None)#"  , py::arg("Value"));
    m.def("RealToInt",
          (Standard_Integer (*)( const Standard_Real ))  static_cast<Standard_Integer (*)( const Standard_Real )>(&RealToInt),
          R"#(None)#"  , py::arg("Value"));
    m.def("RealToShortReal",
          (Standard_ShortReal (*)( const Standard_Real ))  static_cast<Standard_ShortReal (*)( const Standard_Real )>(&RealToShortReal),
          R"#(None)#"  , py::arg("theVal"));
    m.def("Round",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Round),
          R"#(None)#"  , py::arg("Value"));
    m.def("Sin",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Sin),
          R"#(None)#"  , py::arg("Value"));
    m.def("ASinh",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&ASinh),
          R"#(None)#"  , py::arg("Value"));
    m.def("Square",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Square),
          R"#(None)#"  , py::arg("Value"));
    m.def("Tan",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Tan),
          R"#(None)#"  , py::arg("Value"));
    m.def("Tanh",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Tanh),
          R"#(None)#"  , py::arg("Value"));
// ./opencascade/Standard_Failure.hxx
// ./opencascade/Standard_NoMoreObject.hxx
// ./opencascade/Standard_NoSuchObject.hxx
// ./opencascade/Standard_JmpBuf.hxx
// ./opencascade/Standard_WarningsRestore.hxx
// ./opencascade/Standard_DefineException.hxx
// ./opencascade/Standard_PExtCharacter.hxx
// ./opencascade/Standard_Version.hxx
// ./opencascade/Standard_Assert.hxx
    m.def("Standard_ASSERT_DO_NOTHING",
          (void (*)())  static_cast<void (*)()>(&Standard_ASSERT_DO_NOTHING),
          R"#(This header file defines a set of ASSERT macros intended for use in algorithms for debugging purposes and as a tool to organise checks for abnormal situations in the uniform way.)#" );
// ./opencascade/Standard_Stream.hxx
// ./opencascade/Standard_ReadLineBuffer.hxx
// ./opencascade/Standard_Address.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Address , const Standard_Address ))  static_cast<Standard_Boolean (*)( const Standard_Address , const Standard_Address )>(&IsEqual),
          R"#(None)#"  , py::arg("One"),  py::arg("Two"));
// ./opencascade/Standard_NullValue.hxx
// ./opencascade/Standard_IStream.hxx
// ./opencascade/Standard_SStream.hxx
// ./opencascade/Standard_DefineHandle.hxx
// ./opencascade/Standard_ErrorHandler.hxx
// ./opencascade/Standard_Size.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Size , const Standard_Size ))  static_cast<Standard_Boolean (*)( const Standard_Size , const Standard_Size )>(&IsEqual),
          R"#(None)#"  , py::arg("One"),  py::arg("Two"));
// ./opencascade/Standard_NumericError.hxx
// ./opencascade/Standard_MMgrRaw.hxx
// ./opencascade/Standard_Overflow.hxx
// ./opencascade/Standard_NegativeValue.hxx
// ./opencascade/Standard_TypeDef.hxx
// ./opencascade/Standard_Dump.hxx
// ./opencascade/Standard_UUID.hxx
// ./opencascade/Standard_Std.hxx
// ./opencascade/Standard_PErrorHandler.hxx
// ./opencascade/Standard_PCharacter.hxx
// ./opencascade/Standard_DomainError.hxx
// ./opencascade/Standard_ExtString.hxx
// ./opencascade/Standard_DimensionError.hxx
// ./opencascade/Standard_MMgrTBBalloc.hxx
// ./opencascade/Standard_ThreadId.hxx
// ./opencascade/Standard_OutOfMemory.hxx
// ./opencascade/Standard_ShortReal.hxx
    m.def("ShortRealSmall",
          (Standard_ShortReal (*)())  static_cast<Standard_ShortReal (*)()>(&ShortRealSmall),
          R"#(None)#" );
    m.def("Abs",
          (Standard_ShortReal (*)( const Standard_ShortReal ))  static_cast<Standard_ShortReal (*)( const Standard_ShortReal )>(&Abs),
          R"#(None)#"  , py::arg("Value"));
    m.def("ShortRealDigits",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&ShortRealDigits),
          R"#(None)#" );
    m.def("ShortRealEpsilon",
          (Standard_ShortReal (*)())  static_cast<Standard_ShortReal (*)()>(&ShortRealEpsilon),
          R"#(None)#" );
    m.def("ShortRealFirst",
          (Standard_ShortReal (*)())  static_cast<Standard_ShortReal (*)()>(&ShortRealFirst),
          R"#(None)#" );
    m.def("ShortRealFirst10Exp",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&ShortRealFirst10Exp),
          R"#(None)#" );
    m.def("ShortRealLast",
          (Standard_ShortReal (*)())  static_cast<Standard_ShortReal (*)()>(&ShortRealLast),
          R"#(None)#" );
    m.def("ShortRealLast10Exp",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&ShortRealLast10Exp),
          R"#(None)#" );
    m.def("ShortRealMantissa",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&ShortRealMantissa),
          R"#(None)#" );
    m.def("ShortRealRadix",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&ShortRealRadix),
          R"#(None)#" );
    m.def("ShortRealSize",
          (Standard_Integer (*)())  static_cast<Standard_Integer (*)()>(&ShortRealSize),
          R"#(None)#" );
    m.def("Max",
          (Standard_ShortReal (*)( const Standard_ShortReal , const Standard_ShortReal ))  static_cast<Standard_ShortReal (*)( const Standard_ShortReal , const Standard_ShortReal )>(&Max),
          R"#(None)#"  , py::arg("Val1"),  py::arg("Val2"));
    m.def("Min",
          (Standard_ShortReal (*)( const Standard_ShortReal , const Standard_ShortReal ))  static_cast<Standard_ShortReal (*)( const Standard_ShortReal , const Standard_ShortReal )>(&Min),
          R"#(None)#"  , py::arg("Val1"),  py::arg("Val2"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_ShortReal , const Standard_ShortReal ))  static_cast<Standard_Boolean (*)( const Standard_ShortReal , const Standard_ShortReal )>(&IsEqual),
          R"#(None)#"  , py::arg("Value1"),  py::arg("Value2"));
// ./opencascade/Standard_ReadBuffer.hxx
// ./opencascade/Standard_PByte.hxx
// ./opencascade/Standard_math.hxx
// ./opencascade/Standard_ExtCharacter.hxx
    m.def("ToExtCharacter",
          (Standard_ExtCharacter (*)( const Standard_Character ))  static_cast<Standard_ExtCharacter (*)( const Standard_Character )>(&ToExtCharacter),
          R"#(None)#"  , py::arg("achar"));
    m.def("ToCharacter",
          (Standard_Character (*)( const Standard_ExtCharacter ))  static_cast<Standard_Character (*)( const Standard_ExtCharacter )>(&ToCharacter),
          R"#(None)#"  , py::arg("achar"));
    m.def("IsAnAscii",
          (Standard_Boolean (*)( const Standard_ExtCharacter ))  static_cast<Standard_Boolean (*)( const Standard_ExtCharacter )>(&IsAnAscii),
          R"#(None)#"  , py::arg("achar"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_ExtCharacter , const Standard_ExtCharacter ))  static_cast<Standard_Boolean (*)( const Standard_ExtCharacter , const Standard_ExtCharacter )>(&IsEqual),
          R"#(None)#"  , py::arg("One"),  py::arg("Two"));
// ./opencascade/Standard_ProgramError.hxx
// ./opencascade/Standard_MMgrRoot.hxx
// ./opencascade/Standard_TooManyUsers.hxx
// ./opencascade/Standard_Character.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Character , const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character , const Standard_Character )>(&IsEqual),
          R"#(None)#"  , py::arg("One"),  py::arg("Two"));
    m.def("IsAlphabetic",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsAlphabetic),
          R"#(None)#"  , py::arg("me"));
    m.def("IsDigit",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsDigit),
          R"#(None)#"  , py::arg("me"));
    m.def("IsXDigit",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsXDigit),
          R"#(None)#"  , py::arg("me"));
    m.def("IsAlphanumeric",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsAlphanumeric),
          R"#(None)#"  , py::arg("me"));
    m.def("IsControl",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsControl),
          R"#(None)#"  , py::arg("me"));
    m.def("IsGraphic",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsGraphic),
          R"#(None)#"  , py::arg("me"));
    m.def("IsLowerCase",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsLowerCase),
          R"#(None)#"  , py::arg("me"));
    m.def("IsPrintable",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsPrintable),
          R"#(None)#"  , py::arg("me"));
    m.def("IsPunctuation",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsPunctuation),
          R"#(None)#"  , py::arg("me"));
    m.def("IsSpace",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsSpace),
          R"#(None)#"  , py::arg("me"));
    m.def("IsUpperCase",
          (Standard_Boolean (*)( const Standard_Character ))  static_cast<Standard_Boolean (*)( const Standard_Character )>(&IsUpperCase),
          R"#(None)#"  , py::arg("me"));
    m.def("LowerCase",
          (Standard_Character (*)( const Standard_Character ))  static_cast<Standard_Character (*)( const Standard_Character )>(&LowerCase),
          R"#(None)#"  , py::arg("me"));
    m.def("UpperCase",
          (Standard_Character (*)( const Standard_Character ))  static_cast<Standard_Character (*)( const Standard_Character )>(&UpperCase),
          R"#(None)#"  , py::arg("me"));
// ./opencascade/Standard_TypeMismatch.hxx
// ./opencascade/Standard_Transient.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<Standard_Failure>(m, "Standard_Failure");
register_occ_exception<Standard_AbortiveTransaction>(m, "Standard_AbortiveTransaction");
register_occ_exception<Standard_DomainError>(m, "Standard_DomainError");
register_occ_exception<Standard_LicenseError>(m, "Standard_LicenseError");
register_occ_exception<Standard_NumericError>(m, "Standard_NumericError");
register_occ_exception<Standard_ProgramError>(m, "Standard_ProgramError");
register_occ_exception<Standard_ConstructionError>(m, "Standard_ConstructionError");
register_occ_exception<Standard_DimensionError>(m, "Standard_DimensionError");
register_occ_exception<Standard_DivideByZero>(m, "Standard_DivideByZero");
register_occ_exception<Standard_ImmutableObject>(m, "Standard_ImmutableObject");
register_occ_exception<Standard_LicenseNotFound>(m, "Standard_LicenseNotFound");
register_occ_exception<Standard_MultiplyDefined>(m, "Standard_MultiplyDefined");
register_occ_exception<Standard_NoMoreObject>(m, "Standard_NoMoreObject");
register_occ_exception<Standard_NoSuchObject>(m, "Standard_NoSuchObject");
register_occ_exception<Standard_NotImplemented>(m, "Standard_NotImplemented");
register_occ_exception<Standard_NullObject>(m, "Standard_NullObject");
register_occ_exception<Standard_OutOfMemory>(m, "Standard_OutOfMemory");
register_occ_exception<Standard_Overflow>(m, "Standard_Overflow");
register_occ_exception<Standard_RangeError>(m, "Standard_RangeError");
register_occ_exception<Standard_TooManyUsers>(m, "Standard_TooManyUsers");
register_occ_exception<Standard_TypeMismatch>(m, "Standard_TypeMismatch");
register_occ_exception<Standard_Underflow>(m, "Standard_Underflow");
register_occ_exception<Standard_DimensionMismatch>(m, "Standard_DimensionMismatch");
register_occ_exception<Standard_NegativeValue>(m, "Standard_NegativeValue");
register_occ_exception<Standard_NullValue>(m, "Standard_NullValue");
register_occ_exception<Standard_OutOfRange>(m, "Standard_OutOfRange");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
