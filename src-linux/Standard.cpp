
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_Type.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_Persistent.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
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
        .def_static("Allocate_s",
                    (Standard_Address (*)( const Standard_Size ) ) static_cast<Standard_Address (*)( const Standard_Size ) >(&Standard::Allocate),
                    R"#(Allocates memory blocks aSize - bytes to allocate)#"  , py::arg("aSize"))
        .def_static("Free_s",
                    (void (*)( const Standard_Address ) ) static_cast<void (*)( const Standard_Address ) >(&Standard::Free),
                    R"#(Deallocates memory blocks)#"  , py::arg("thePtr"))
        .def_static("Reallocate_s",
                    (Standard_Address (*)( const Standard_Address , const Standard_Size ) ) static_cast<Standard_Address (*)( const Standard_Address , const Standard_Size ) >(&Standard::Reallocate),
                    R"#(Reallocates memory blocks aStorage - previously allocated memory block aNewSize - new size in bytes)#"  , py::arg("aStorage"),  py::arg("aNewSize"))
        .def_static("AllocateAligned_s",
                    (Standard_Address (*)( const Standard_Size , const Standard_Size ) ) static_cast<Standard_Address (*)( const Standard_Size , const Standard_Size ) >(&Standard::AllocateAligned),
                    R"#(Allocates aligned memory blocks. Should be used with CPU instructions which require specific alignment. For example: SSE requires 16 bytes, AVX requires 32 bytes.)#"  , py::arg("theSize"),  py::arg("theAlign"))
        .def_static("FreeAligned_s",
                    (void (*)( const Standard_Address ) ) static_cast<void (*)( const Standard_Address ) >(&Standard::FreeAligned),
                    R"#(Deallocates memory blocks)#"  , py::arg("thePtrAligned"))
        .def_static("Purge_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&Standard::Purge),
                    R"#(Deallocates the storage retained on the free list and clears the list. Returns non-zero if some memory has been actually freed.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_ArrayStreamBuffer , shared_ptr<Standard_ArrayStreamBuffer> >>(m.attr("Standard_ArrayStreamBuffer"))
    // constructors
        .def(py::init< const char *,const size_t >()  , py::arg("theBegin"),  py::arg("theSize") )
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetCLocale_s",
                    (Standard_CLocaleSentry::clocale_t (*)() ) static_cast<Standard_CLocaleSentry::clocale_t (*)() >(&Standard_CLocaleSentry::GetCLocale),
                    R"#(Returns locale "C" instance (locale_t within xlocale or _locale_t within Windows) to be used for _l functions with locale argument.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_Condition , shared_ptr<Standard_Condition> >>(m.attr("Standard_Condition"))
    // constructors
        .def(py::init< bool >()  , py::arg("theIsSet") )
    // custom constructors
    // methods
        .def("Set",
             (void (Standard_Condition::*)() ) static_cast<void (Standard_Condition::*)() >(&Standard_Condition::Set),
             R"#(Set event into signaling state.)#" )
        .def("Reset",
             (void (Standard_Condition::*)() ) static_cast<void (Standard_Condition::*)() >(&Standard_Condition::Reset),
             R"#(Reset event (unset signaling state))#" )
        .def("Wait",
             (void (Standard_Condition::*)() ) static_cast<void (Standard_Condition::*)() >(&Standard_Condition::Wait),
             R"#(Wait for Event (infinity).)#" )
        .def("Wait",
             (bool (Standard_Condition::*)( int ) ) static_cast<bool (Standard_Condition::*)( int ) >(&Standard_Condition::Wait),
             R"#(Wait for signal requested time.)#"  , py::arg("theTimeMilliseconds"))
        .def("Check",
             (bool (Standard_Condition::*)() ) static_cast<bool (Standard_Condition::*)() >(&Standard_Condition::Check),
             R"#(Do not wait for signal - just test it state.)#" )
        .def("CheckReset",
             (bool (Standard_Condition::*)() ) static_cast<bool (Standard_Condition::*)() >(&Standard_Condition::CheckReset),
             R"#(Method perform two steps at-once - reset the event object and returns true if it was in signaling state.)#" )
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
        .def_static("Text_s",
                    (TCollection_AsciiString (*)(  const std::stringstream & ) ) static_cast<TCollection_AsciiString (*)(  const std::stringstream & ) >(&Standard_Dump::Text),
                    R"#(Converts stream value to string value. The result is original stream value.)#"  , py::arg("theStream"))
        .def_static("FormatJson_s",
                    (TCollection_AsciiString (*)(  const std::stringstream & , const Standard_Integer ) ) static_cast<TCollection_AsciiString (*)(  const std::stringstream & , const Standard_Integer ) >(&Standard_Dump::FormatJson),
                    R"#(Converts stream value to string value. Improves the text presentation with the following cases: - for '{' append after '' and indent to the next value, increment current indent value - for '}' append '' and current indent before it, decrement indent value - for ',' append after '' and indent to the next value. If the current symbol is in massive container [], do nothing)#"  , py::arg("theStream"),  py::arg("theIndent")=static_cast<const Standard_Integer>(3))
        .def_static("AddValuesSeparator_s",
                    (void (*)( std::ostream & ) ) static_cast<void (*)( std::ostream & ) >(&Standard_Dump::AddValuesSeparator),
                    R"#(Add Json values separator if the stream last symbol is not an open brace.)#"  , py::arg("theOStream"))
        .def_static("GetPointerPrefix_s",
                    (TCollection_AsciiString (*)() ) static_cast<TCollection_AsciiString (*)() >(&Standard_Dump::GetPointerPrefix),
                    R"#(Returns default prefix added for each pointer info string if short presentation of pointer used)#" )
        .def_static("GetPointerInfo_s",
                    (TCollection_AsciiString (*)( const opencascade::handle<Standard_Transient> & , const bool ) ) static_cast<TCollection_AsciiString (*)( const opencascade::handle<Standard_Transient> & , const bool ) >(&Standard_Dump::GetPointerInfo),
                    R"#(Convert handle pointer to address of the pointer. If the handle is NULL, the result is an empty string.)#"  , py::arg("thePointer"),  py::arg("isShortInfo")=static_cast<const bool>(true))
        .def_static("GetPointerInfo_s",
                    (TCollection_AsciiString (*)( const void * , const bool ) ) static_cast<TCollection_AsciiString (*)( const void * , const bool ) >(&Standard_Dump::GetPointerInfo),
                    R"#(Convert pointer to address of the pointer. If the handle is NULL, the result is an empty string.)#"  , py::arg("thePointer"),  py::arg("isShortInfo")=static_cast<const bool>(true))
        .def_static("DumpKeyToClass_s",
                    (void (*)( std::ostream & , const char * , const TCollection_AsciiString & ) ) static_cast<void (*)( std::ostream & , const char * , const TCollection_AsciiString & ) >(&Standard_Dump::DumpKeyToClass),
                    R"#(Append into output value: "Name": { Field })#"  , py::arg("theOStream"),  py::arg("theKey"),  py::arg("theField"))
        .def_static("DumpFieldToName_s",
                    (const char * (*)( const char * ) ) static_cast<const char * (*)( const char * ) >(&Standard_Dump::DumpFieldToName),
                    R"#(Convert field name into dump text value, removes "&" and "my" prefixes An example, for field myValue, theName is Value, for &myCLass, the name is Class)#"  , py::arg("theField"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_DumpSentry , shared_ptr<Standard_DumpSentry> >>(m.attr("Standard_DumpSentry"))
    // constructors
        .def(py::init< std::ostream &,const char * >()  , py::arg("theOStream"),  py::arg("theClassName") )
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Destroy",
             (void (Standard_ErrorHandler::*)() ) static_cast<void (Standard_ErrorHandler::*)() >(&Standard_ErrorHandler::Destroy),
             R"#(Unlinks and checks if there is a raised exception.)#" )
        .def("Unlink",
             (void (Standard_ErrorHandler::*)() ) static_cast<void (Standard_ErrorHandler::*)() >(&Standard_ErrorHandler::Unlink),
             R"#(Removes handler from the handlers list)#" )
        .def("Catches",
             (Standard_Boolean (Standard_ErrorHandler::*)( const opencascade::handle<Standard_Type> & ) ) static_cast<Standard_Boolean (Standard_ErrorHandler::*)( const opencascade::handle<Standard_Type> & ) >(&Standard_ErrorHandler::Catches),
             R"#(Returns "True" if the caught exception has the same type or inherits from "aType")#"  , py::arg("aType"))
        .def("Label",
             (Standard_JmpBuf & (Standard_ErrorHandler::*)() ) static_cast<Standard_JmpBuf & (Standard_ErrorHandler::*)() >(&Standard_ErrorHandler::Label),
             R"#(Returns label for jump)#" )
        .def("Error",
             (opencascade::handle<Standard_Failure> (Standard_ErrorHandler::*)() const) static_cast<opencascade::handle<Standard_Failure> (Standard_ErrorHandler::*)() const>(&Standard_ErrorHandler::Error),
             R"#(Returns the current Error.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("LastCaughtError_s",
                    (opencascade::handle<Standard_Failure> (*)() ) static_cast<opencascade::handle<Standard_Failure> (*)() >(&Standard_ErrorHandler::LastCaughtError),
                    R"#(Returns the caught exception.)#" )
        .def_static("IsInTryBlock_s",
                    (Standard_Boolean (*)() ) static_cast<Standard_Boolean (*)() >(&Standard_ErrorHandler::IsInTryBlock),
                    R"#(Test if the code is currently running in a try block)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_GUID , shared_ptr<Standard_GUID> >>(m.attr("Standard_GUID"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("aGuid") )
        .def(py::init< const Standard_ExtString >()  , py::arg("aGuid") )
        .def(py::init< const Standard_Integer,const Standard_ExtCharacter,const Standard_ExtCharacter,const Standard_ExtCharacter,const Standard_Byte,const Standard_Byte,const Standard_Byte,const Standard_Byte,const Standard_Byte,const Standard_Byte >()  , py::arg("a32b"),  py::arg("a16b1"),  py::arg("a16b2"),  py::arg("a16b3"),  py::arg("a8b1"),  py::arg("a8b2"),  py::arg("a8b3"),  py::arg("a8b4"),  py::arg("a8b5"),  py::arg("a8b6") )
        .def(py::init< const Standard_UUID & >()  , py::arg("aGuid") )
        .def(py::init< const Standard_GUID & >()  , py::arg("aGuid") )
    // custom constructors
    // methods
        .def("ToUUID",
             (Standard_UUID (Standard_GUID::*)() const) static_cast<Standard_UUID (Standard_GUID::*)() const>(&Standard_GUID::ToUUID),
             R"#(None)#" )
        .def("ToCString",
             (void (Standard_GUID::*)( const Standard_PCharacter ) const) static_cast<void (Standard_GUID::*)( const Standard_PCharacter ) const>(&Standard_GUID::ToCString),
             R"#(translate the GUID into ascii string the aStrGuid is allocated by user. the guid have the following format:)#"  , py::arg("aStrGuid"))
        .def("ToExtString",
             (void (Standard_GUID::*)( const Standard_PExtCharacter ) const) static_cast<void (Standard_GUID::*)( const Standard_PExtCharacter ) const>(&Standard_GUID::ToExtString),
             R"#(translate the GUID into unicode string the aStrGuid is allocated by user. the guid have the following format:)#"  , py::arg("aStrGuid"))
        .def("IsSame",
             (Standard_Boolean (Standard_GUID::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (Standard_GUID::*)( const Standard_GUID & ) const>(&Standard_GUID::IsSame),
             R"#(None)#"  , py::arg("uid"))
        .def("IsNotSame",
             (Standard_Boolean (Standard_GUID::*)( const Standard_GUID & ) const) static_cast<Standard_Boolean (Standard_GUID::*)( const Standard_GUID & ) const>(&Standard_GUID::IsNotSame),
             R"#(None)#"  , py::arg("uid"))
        .def("Assign",
             (void (Standard_GUID::*)( const Standard_GUID & ) ) static_cast<void (Standard_GUID::*)( const Standard_GUID & ) >(&Standard_GUID::Assign),
             R"#(None)#"  , py::arg("uid"))
        .def("Assign",
             (void (Standard_GUID::*)( const Standard_UUID & ) ) static_cast<void (Standard_GUID::*)( const Standard_UUID & ) >(&Standard_GUID::Assign),
             R"#(None)#"  , py::arg("uid"))
        .def("ShallowDump",
             (void (Standard_GUID::*)( std::ostream & ) const) static_cast<void (Standard_GUID::*)( std::ostream & ) const>(&Standard_GUID::ShallowDump),
             R"#(Display the GUID with the following format:)#"  , py::arg("aStream"))
        .def("Hash",
             (Standard_Integer (Standard_GUID::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Standard_GUID::*)( const Standard_Integer ) const>(&Standard_GUID::Hash),
             R"#(Hash function for GUID.)#"  , py::arg("Upper"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CheckGUIDFormat_s",
                    (Standard_Boolean (*)( const Standard_CString ) ) static_cast<Standard_Boolean (*)( const Standard_CString ) >(&Standard_GUID::CheckGUIDFormat),
                    R"#(Check the format of a GUID string. It checks the size, the position of the '-' and the correct size of fields.)#"  , py::arg("aGuid"))
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const Standard_GUID & , Standard_Integer ) ) static_cast<Standard_Integer (*)( const Standard_GUID & , Standard_Integer ) >(&Standard_GUID::HashCode),
                    R"#(Computes a hash code for the given GUID of the Standard_Integer type, in the range [1, theUpperBound])#"  , py::arg("theGUID"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const Standard_GUID & , const Standard_GUID & ) ) static_cast<Standard_Boolean (*)( const Standard_GUID & , const Standard_GUID & ) >(&Standard_GUID::IsEqual),
                    R"#(Returns True when the two GUID are the same.)#"  , py::arg("string1"),  py::arg("string2"))
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Lock",
             (void (Standard_Mutex::*)() ) static_cast<void (Standard_Mutex::*)() >(&Standard_Mutex::Lock),
             R"#(Method to lock the mutex; waits until the mutex is released by other threads, locks it and then returns)#" )
        .def("TryLock",
             (Standard_Boolean (Standard_Mutex::*)() ) static_cast<Standard_Boolean (Standard_Mutex::*)() >(&Standard_Mutex::TryLock),
             R"#(Method to test the mutex; if the mutex is not hold by other thread, locks it and returns True; otherwise returns False without waiting mutex to be released.)#" )
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
        .def("IsInstance",
             (Standard_Boolean (Standard_Transient::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Boolean (Standard_Transient::*)( const opencascade::handle<Standard_Type> & ) const>(&Standard_Transient::IsInstance),
             R"#(Returns a true value if this is an instance of Type.)#"  , py::arg("theType"))
        .def("IsInstance",
             (Standard_Boolean (Standard_Transient::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Standard_Transient::*)( const Standard_CString ) const>(&Standard_Transient::IsInstance),
             R"#(Returns a true value if this is an instance of TypeName.)#"  , py::arg("theTypeName"))
        .def("IsKind",
             (Standard_Boolean (Standard_Transient::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Boolean (Standard_Transient::*)( const opencascade::handle<Standard_Type> & ) const>(&Standard_Transient::IsKind),
             R"#(Returns true if this is an instance of Type or an instance of any class that inherits from Type. Note that multiple inheritance is not supported by OCCT RTTI mechanism.)#"  , py::arg("theType"))
        .def("IsKind",
             (Standard_Boolean (Standard_Transient::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Standard_Transient::*)( const Standard_CString ) const>(&Standard_Transient::IsKind),
             R"#(Returns true if this is an instance of TypeName or an instance of any class that inherits from TypeName. Note that multiple inheritance is not supported by OCCT RTTI mechanism.)#"  , py::arg("theTypeName"))
        .def("This",
             (Standard_Transient * (Standard_Transient::*)() const) static_cast<Standard_Transient * (Standard_Transient::*)() const>(&Standard_Transient::This),
             R"#(Returns non-const pointer to this object (like const_cast). For protection against creating handle to objects allocated in stack or call from constructor, it will raise exception Standard_ProgramError if reference counter is zero.)#" )
        .def("GetRefCount",
             (Standard_Integer (Standard_Transient::*)() const) static_cast<Standard_Integer (Standard_Transient::*)() const>(&Standard_Transient::GetRefCount),
             R"#(Get the reference counter of this object)#" )
        .def("IncrementRefCounter",
             (void (Standard_Transient::*)() const) static_cast<void (Standard_Transient::*)() const>(&Standard_Transient::IncrementRefCounter),
             R"#(Increments the reference counter of this object)#" )
        .def("DecrementRefCounter",
             (Standard_Integer (Standard_Transient::*)() const) static_cast<Standard_Integer (Standard_Transient::*)() const>(&Standard_Transient::DecrementRefCounter),
             R"#(Decrements the reference counter of this object; returns the decremented value)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Standard_Transient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Standard_Transient::get_type_descriptor),
                    R"#(Returns type descriptor of Standard_Transient class)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_MMgrOpt , shared_ptr<Standard_MMgrOpt> , Standard_MMgrRoot>>(m.attr("Standard_MMgrOpt"))
    // constructors
        .def(py::init< const Standard_Boolean,const Standard_Boolean,const Standard_Size,const Standard_Integer,const Standard_Size >()  , py::arg("aClear")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("aMMap")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("aCellSize")=static_cast<const Standard_Size>(200),  py::arg("aNbPages")=static_cast<const Standard_Integer>(10000),  py::arg("aThreshold")=static_cast<const Standard_Size>(40000) )
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
        .def_static("SetCallBackFunction_s",
                    (void (*)( Standard_MMgrOpt::TPCallBackFunc ) ) static_cast<void (*)( Standard_MMgrOpt::TPCallBackFunc ) >(&Standard_MMgrOpt::SetCallBackFunction),
                    R"#(Set the callback function. You may pass 0 there to turn off the callback. The callback function, if set, will be automatically called from within Allocate and Free methods.)#"  , py::arg("pFunc"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Standard_MMgrRaw , shared_ptr<Standard_MMgrRaw> , Standard_MMgrRoot>>(m.attr("Standard_MMgrRaw"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("aClear")=static_cast<const Standard_Boolean>(Standard_False) )
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
        .def(py::init< const Standard_Boolean >()  , py::arg("aClear")=static_cast<const Standard_Boolean>(Standard_False) )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Standard_Persistent::get_type_descriptor),
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
        .def("SubType",
             (Standard_Boolean (Standard_Type::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<Standard_Boolean (Standard_Type::*)( const opencascade::handle<Standard_Type> & ) const>(&Standard_Type::SubType),
             R"#(Returns True if this type is the same as theOther, or inherits from theOther. Note that multiple inheritance is not supported.)#"  , py::arg("theOther"))
        .def("SubType",
             (Standard_Boolean (Standard_Type::*)( const Standard_CString ) const) static_cast<Standard_Boolean (Standard_Type::*)( const Standard_CString ) const>(&Standard_Type::SubType),
             R"#(Returns True if this type is the same as theOther, or inherits from theOther. Note that multiple inheritance is not supported.)#"  , py::arg("theOther"))
        .def("Print",
             (void (Standard_Type::*)( std::ostream & ) const) static_cast<void (Standard_Type::*)( std::ostream & ) const>(&Standard_Type::Print),
             R"#(Prints type (address of descriptor + name) to a stream)#"  , py::arg("theStream"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Standard_Type::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Standard_Type::*)() const>(&Standard_Type::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Register_s",
                    (Standard_Type * (*)( const char * , const char * , Standard_Size , const opencascade::handle<Standard_Type> & ) ) static_cast<Standard_Type * (*)( const char * , const char * , Standard_Size , const opencascade::handle<Standard_Type> & ) >(&Standard_Type::Register),
                    R"#(Register a type; returns either new or existing descriptor.)#"  , py::arg("theSystemName"),  py::arg("theName"),  py::arg("theSize"),  py::arg("theParent"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Standard_Type::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Standard_Type::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Standard_Mutex.hxx
// ./opencascade/Standard_DivideByZero.hxx
// ./opencascade/Standard_Persistent.hxx
// ./opencascade/Standard_PByte.hxx
// ./opencascade/Standard_Transient.hxx
// ./opencascade/Standard_OutOfRange.hxx
// ./opencascade/Standard_WarningsDisable.hxx
// ./opencascade/Standard_AbortiveTransaction.hxx
// ./opencascade/Standard_JmpBuf.hxx
// ./opencascade/Standard_ProgramError.hxx
// ./opencascade/Standard_MMgrOpt.hxx
// ./opencascade/Standard_NegativeValue.hxx
// ./opencascade/Standard_Address.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Address , const Standard_Address ))  static_cast<Standard_Boolean (*)( const Standard_Address , const Standard_Address )>(&IsEqual),
          R"#(None)#"  , py::arg("One"),  py::arg("Two"));
// ./opencascade/Standard_Dump.hxx
// ./opencascade/Standard_SStream.hxx
// ./opencascade/Standard_Underflow.hxx
// ./opencascade/Standard_Std.hxx
// ./opencascade/Standard_IStream.hxx
// ./opencascade/Standard_Real.hxx
    m.def("ACos",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&ACos),
          R"#(None)#"  , py::arg(""));
    m.def("ACosApprox",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&ACosApprox),
          R"#(None)#"  , py::arg(""));
    m.def("ASin",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&ASin),
          R"#(None)#"  , py::arg(""));
    m.def("ATan2",
          (Standard_Real (*)( const Standard_Real , const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real , const Standard_Real )>(&ATan2),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("NextAfter",
          (Standard_Real (*)( const Standard_Real , const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real , const Standard_Real )>(&NextAfter),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("Sign",
          (Standard_Real (*)( const Standard_Real , const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real , const Standard_Real )>(&Sign),
          R"#(Returns |a| if b >= 0; -|a| if b < 0.)#"  , py::arg("a"),  py::arg("b"));
    m.def("ATanh",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&ATanh),
          R"#(None)#"  , py::arg(""));
    m.def("ACosh",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&ACosh),
          R"#(None)#"  , py::arg(""));
    m.def("Sinh",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Sinh),
          R"#(None)#"  , py::arg(""));
    m.def("Cosh",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Cosh),
          R"#(None)#"  , py::arg(""));
    m.def("Log",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Log),
          R"#(None)#"  , py::arg(""));
    m.def("Sqrt",
          (Standard_Real (*)( const Standard_Real ))  static_cast<Standard_Real (*)( const Standard_Real )>(&Sqrt),
          R"#(None)#"  , py::arg(""));
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
// ./opencascade/Standard_UUID.hxx
// ./opencascade/Standard_PExtCharacter.hxx
// ./opencascade/Standard_ThreadId.hxx
// ./opencascade/Standard_NoSuchObject.hxx
// ./opencascade/Standard_PCharacter.hxx
// ./opencascade/Standard_DefineException.hxx
// ./opencascade/Standard_Time.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Time , const Standard_Time ))  static_cast<Standard_Boolean (*)( const Standard_Time , const Standard_Time )>(&IsEqual),
          R"#(None)#"  , py::arg("theOne"),  py::arg("theTwo"));
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
// ./opencascade/Standard_CLocaleSentry.hxx
// ./opencascade/Standard_NotImplemented.hxx
// ./opencascade/Standard_Failure.hxx
// ./opencascade/Standard_Macro.hxx
// ./opencascade/Standard_DimensionMismatch.hxx
// ./opencascade/Standard_DefineHandle.hxx
// ./opencascade/Standard_HandlerStatus.hxx
// ./opencascade/Standard_TypeMismatch.hxx
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
// ./opencascade/Standard_NumericError.hxx
// ./opencascade/Standard_TooManyUsers.hxx
// ./opencascade/Standard_TypeDef.hxx
// ./opencascade/Standard_Version.hxx
// ./opencascade/Standard_LicenseNotFound.hxx
// ./opencascade/Standard_Size.hxx
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_Size , const Standard_Size ))  static_cast<Standard_Boolean (*)( const Standard_Size , const Standard_Size )>(&IsEqual),
          R"#(None)#"  , py::arg("One"),  py::arg("Two"));
// ./opencascade/Standard_PErrorHandler.hxx
// ./opencascade/Standard_Boolean.hxx
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
// ./opencascade/Standard_DimensionError.hxx
// ./opencascade/Standard_RangeError.hxx
// ./opencascade/Standard_MultiplyDefined.hxx
// ./opencascade/Standard_PrimitiveTypes.hxx
// ./opencascade/Standard_MMgrRaw.hxx
// ./opencascade/Standard_Type.hxx
// ./opencascade/Standard_Condition.hxx
// ./opencascade/Standard_ErrorHandler.hxx
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
// ./opencascade/Standard_Stream.hxx
// ./opencascade/Standard_math.hxx
// ./opencascade/Standard_MMgrRoot.hxx
// ./opencascade/Standard_MMgrTBBalloc.hxx
// ./opencascade/Standard_NullObject.hxx
// ./opencascade/Standard_ReadLineBuffer.hxx
// ./opencascade/Standard_DomainError.hxx
// ./opencascade/Standard.hxx
// ./opencascade/Standard_LicenseError.hxx
// ./opencascade/Standard_Byte.hxx
// ./opencascade/Standard_CString.hxx
    m.def("HashCodes",
          (Standard_Integer (*)( Standard_CString , Standard_Integer ))  static_cast<Standard_Integer (*)( Standard_CString , Standard_Integer )>(&HashCodes),
          R"#(Returns 32-bit hash code for the first theLen characters in the string theStr. The result is unbound (may be not only positive, but also negative))#"  , py::arg("theString"),  py::arg("theLength"));
    m.def("IsEqual",
          (Standard_Boolean (*)( const Standard_CString , const Standard_CString ))  static_cast<Standard_Boolean (*)( const Standard_CString , const Standard_CString )>(&IsEqual),
          R"#(Returns Standard_True if two strings are equal)#"  , py::arg("theOne"),  py::arg("theTwo"));
// ./opencascade/Standard_NullValue.hxx
// ./opencascade/Standard_NoMoreObject.hxx
// ./opencascade/Standard_ExtString.hxx
// ./opencascade/Standard_OStream.hxx
// ./opencascade/Standard_OutOfMemory.hxx
// ./opencascade/Standard_Overflow.hxx
// ./opencascade/Standard_Assert.hxx
    m.def("Standard_ASSERT_DO_NOTHING",
          (void (*)())  static_cast<void (*)()>(&Standard_ASSERT_DO_NOTHING),
          R"#(This header file defines a set of ASSERT macros intended for use in algorithms for debugging purposes and as a tool to organise checks for abnormal situations in the uniform way.)#" );
// ./opencascade/Standard_ImmutableObject.hxx
// ./opencascade/Standard_DefineAlloc.hxx
// ./opencascade/Standard_ArrayStreamBuffer.hxx
// ./opencascade/Standard_WarningsRestore.hxx
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
// ./opencascade/Standard_ReadBuffer.hxx
// ./opencascade/Standard_ConstructionError.hxx
// ./opencascade/Standard_GUID.hxx

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
