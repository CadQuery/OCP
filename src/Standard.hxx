#pragma once

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
#include <Standard_Type.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_Failure.hxx>
#include <Standard_Persistent.hxx>

// module includes
#include <Standard_NegativeValue.hxx>
#include <Standard_WarningsRestore.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Standard_Persistent.hxx>
#include <Standard.hxx>
#include <Standard_CLocaleSentry.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_ExtCharacter.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_ExtString.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_MMgrTBBalloc.hxx>
#include <Standard_Transient.hxx>
#include <Standard_Mutex.hxx>
#include <Standard_ArrayStreamBuffer.hxx>
#include <Standard_TooManyUsers.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Stream.hxx>
#include <Standard_ImmutableObject.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <Standard_PrimitiveTypes.hxx>
#include <Standard_AbortiveTransaction.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_SStream.hxx>
#include <Standard_ProgramError.hxx>
#include <Standard_Version.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_CString.hxx>
#include <Standard_ThreadId.hxx>
#include <Standard_MMgrOpt.hxx>
#include <Standard_Byte.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Address.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_UUID.hxx>
#include <Standard_Time.hxx>
#include <Standard_ShortReal.hxx>
#include <Standard_Type.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_GUID.hxx>
#include <Standard_PByte.hxx>
#include <Standard_PExtCharacter.hxx>
#include <Standard_PErrorHandler.hxx>
#include <Standard_PCharacter.hxx>
#include <Standard_Assert.hxx>
#include <Standard_Failure.hxx>
#include <Standard_IStream.hxx>
#include <Standard_Character.hxx>
#include <Standard_MMgrRoot.hxx>
#include <Standard_Size.hxx>
#include <Standard_TypeDef.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_math.hxx>
#include <Standard_OStream.hxx>
#include <Standard_Atomic.hxx>
#include <Standard_WarningsDisable.hxx>
#include <Standard_Real.hxx>
#include <Standard_Overflow.hxx>
#include <Standard_HandlerStatus.hxx>
#include <Standard_Macro.hxx>
#include <Standard_DimensionError.hxx>
#include <Standard_DivideByZero.hxx>
#include <Standard_LicenseError.hxx>
#include <Standard_OutOfMemory.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_LicenseNotFound.hxx>
#include <Standard_DimensionMismatch.hxx>
#include <Standard_Integer.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_JmpBuf.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_MMgrRaw.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_Underflow.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Standard_NegativeValue.hxx
// ./opencascade/Standard_WarningsRestore.hxx
// ./opencascade/Standard_TypeMismatch.hxx
// ./opencascade/Standard_Persistent.hxx
// ./opencascade/Standard.hxx
// ./opencascade/Standard_CLocaleSentry.hxx
// ./opencascade/Standard_RangeError.hxx
// ./opencascade/Standard_ExtCharacter.hxx
// ./opencascade/Standard_DefineException.hxx
// ./opencascade/Standard_ExtString.hxx
// ./opencascade/Standard_NullObject.hxx
// ./opencascade/Standard_MMgrTBBalloc.hxx
// ./opencascade/Standard_Transient.hxx
// ./opencascade/Standard_Mutex.hxx
// ./opencascade/Standard_ArrayStreamBuffer.hxx
// ./opencascade/Standard_TooManyUsers.hxx
// ./opencascade/Standard_Boolean.hxx
// ./opencascade/Standard_Stream.hxx
// ./opencascade/Standard_ImmutableObject.hxx
// ./opencascade/Standard_MultiplyDefined.hxx
// ./opencascade/Standard_PrimitiveTypes.hxx
// ./opencascade/Standard_AbortiveTransaction.hxx
// ./opencascade/Standard_NotImplemented.hxx
// ./opencascade/Standard_SStream.hxx
// ./opencascade/Standard_ProgramError.hxx
// ./opencascade/Standard_Version.hxx
// ./opencascade/Standard_NullValue.hxx
// ./opencascade/Standard_CString.hxx
// ./opencascade/Standard_ThreadId.hxx
// ./opencascade/Standard_MMgrOpt.hxx
// ./opencascade/Standard_Byte.hxx
// ./opencascade/Standard_DefineAlloc.hxx
// ./opencascade/Standard_Address.hxx
// ./opencascade/Standard_OutOfRange.hxx
// ./opencascade/Standard_UUID.hxx
// ./opencascade/Standard_Time.hxx
// ./opencascade/Standard_ShortReal.hxx
// ./opencascade/Standard_Type.hxx
// ./opencascade/Standard_NumericError.hxx
// ./opencascade/Standard_GUID.hxx
// ./opencascade/Standard_PByte.hxx
// ./opencascade/Standard_PExtCharacter.hxx
// ./opencascade/Standard_PErrorHandler.hxx
// ./opencascade/Standard_PCharacter.hxx
// ./opencascade/Standard_Assert.hxx

template <bool condition>
void preregister_template_Standard_Static_Assert(py::object &m, const char *name){
    py::class_<Standard_Static_Assert<condition> , shared_ptr<Standard_Static_Assert<condition>> >(m,name,R"#(Static assert -- empty default template)#");
}

template <bool condition>
void register_template_Standard_Static_Assert(py::object &m, const char *name){
    static_cast<py::class_<Standard_Static_Assert<condition> , shared_ptr<Standard_Static_Assert<condition>> >>(m.attr(name))
    ;
};
// ./opencascade/Standard_Failure.hxx
// ./opencascade/Standard_IStream.hxx
// ./opencascade/Standard_Character.hxx
// ./opencascade/Standard_MMgrRoot.hxx
// ./opencascade/Standard_Size.hxx
// ./opencascade/Standard_TypeDef.hxx
// ./opencascade/Standard_ErrorHandler.hxx
// ./opencascade/Standard_math.hxx
// ./opencascade/Standard_OStream.hxx
// ./opencascade/Standard_Atomic.hxx
// ./opencascade/Standard_WarningsDisable.hxx
// ./opencascade/Standard_Real.hxx
// ./opencascade/Standard_Overflow.hxx
// ./opencascade/Standard_HandlerStatus.hxx
// ./opencascade/Standard_Macro.hxx
// ./opencascade/Standard_DimensionError.hxx
// ./opencascade/Standard_DivideByZero.hxx
// ./opencascade/Standard_LicenseError.hxx
// ./opencascade/Standard_OutOfMemory.hxx
// ./opencascade/Standard_NoMoreObject.hxx
// ./opencascade/Standard_LicenseNotFound.hxx
// ./opencascade/Standard_DimensionMismatch.hxx
// ./opencascade/Standard_Integer.hxx
// ./opencascade/Standard_DefineHandle.hxx
// ./opencascade/Standard_JmpBuf.hxx
// ./opencascade/Standard_ConstructionError.hxx
// ./opencascade/Standard_DomainError.hxx
// ./opencascade/Standard_MMgrRaw.hxx
// ./opencascade/Standard_NoSuchObject.hxx
// ./opencascade/Standard_Underflow.hxx

// user-defined post
