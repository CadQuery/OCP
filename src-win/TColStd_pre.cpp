
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <TColStd_Array1OfAsciiString.hxx>
#include <TColStd_Array1OfBoolean.hxx>
#include <TColStd_Array1OfByte.hxx>
#include <TColStd_Array1OfCharacter.hxx>
#include <TColStd_Array1OfExtendedString.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfListOfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfTransient.hxx>
#include <TColStd_Array2OfBoolean.hxx>
#include <TColStd_Array2OfCharacter.hxx>
#include <TColStd_Array2OfInteger.hxx>
#include <TColStd_Array2OfReal.hxx>
#include <TColStd_Array2OfTransient.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerReal.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfIntegerTransient.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfStringInteger.hxx>
#include <TColStd_DataMapIteratorOfDataMapOfTransientTransient.hxx>
#include <TColStd_DataMapOfAsciiStringInteger.hxx>
#include <TColStd_DataMapOfIntegerInteger.hxx>
#include <TColStd_DataMapOfIntegerListOfInteger.hxx>
#include <TColStd_DataMapOfIntegerReal.hxx>
#include <TColStd_DataMapOfIntegerTransient.hxx>
#include <TColStd_DataMapOfStringInteger.hxx>
#include <TColStd_DataMapOfTransientTransient.hxx>
#include <TColStd_HArray1OfAsciiString.hxx>
#include <TColStd_HArray1OfBoolean.hxx>
#include <TColStd_HArray1OfByte.hxx>
#include <TColStd_HArray1OfCharacter.hxx>
#include <TColStd_HArray1OfExtendedString.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <TColStd_HArray1OfListOfInteger.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <TColStd_HArray1OfTransient.hxx>
#include <TColStd_HArray2OfBoolean.hxx>
#include <TColStd_HArray2OfCharacter.hxx>
#include <TColStd_HArray2OfInteger.hxx>
#include <TColStd_HArray2OfReal.hxx>
#include <TColStd_HArray2OfTransient.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <TColStd_HSequenceOfAsciiString.hxx>
#include <TColStd_HSequenceOfExtendedString.hxx>
#include <TColStd_HSequenceOfHAsciiString.hxx>
#include <TColStd_HSequenceOfHExtendedString.hxx>
#include <TColStd_HSequenceOfInteger.hxx>
#include <TColStd_HSequenceOfReal.hxx>
#include <TColStd_HSequenceOfTransient.hxx>
#include <TColStd_IndexedDataMapOfStringString.hxx>
#include <TColStd_IndexedDataMapOfTransientTransient.hxx>
#include <TColStd_IndexedMapOfInteger.hxx>
#include <TColStd_IndexedMapOfReal.hxx>
#include <TColStd_IndexedMapOfTransient.hxx>
#include <TColStd_ListIteratorOfListOfAsciiString.hxx>
#include <TColStd_ListIteratorOfListOfInteger.hxx>
#include <TColStd_ListIteratorOfListOfReal.hxx>
#include <TColStd_ListIteratorOfListOfTransient.hxx>
#include <TColStd_ListOfAsciiString.hxx>
#include <TColStd_ListOfInteger.hxx>
#include <TColStd_ListOfReal.hxx>
#include <TColStd_ListOfTransient.hxx>
#include <TColStd_MapIntegerHasher.hxx>
#include <TColStd_MapIteratorOfMapOfAsciiString.hxx>
#include <TColStd_MapIteratorOfMapOfInteger.hxx>
#include <TColStd_MapIteratorOfMapOfReal.hxx>
#include <TColStd_MapIteratorOfMapOfTransient.hxx>
#include <TColStd_MapIteratorOfPackedMapOfInteger.hxx>
#include <TColStd_MapOfAsciiString.hxx>
#include <TColStd_MapOfInteger.hxx>
#include <TColStd_MapOfReal.hxx>
#include <TColStd_MapOfTransient.hxx>
#include <TColStd_MapRealHasher.hxx>
#include <TColStd_MapTransientHasher.hxx>
#include <TColStd_PackedMapOfInteger.hxx>
#include <TColStd_SequenceOfAddress.hxx>
#include <TColStd_SequenceOfAsciiString.hxx>
#include <TColStd_SequenceOfBoolean.hxx>
#include <TColStd_SequenceOfExtendedString.hxx>
#include <TColStd_SequenceOfHAsciiString.hxx>
#include <TColStd_SequenceOfHExtendedString.hxx>
#include <TColStd_SequenceOfInteger.hxx>
#include <TColStd_SequenceOfReal.hxx>
#include <TColStd_SequenceOfTransient.hxx>

// template related includes
// ./opencascade\TColStd_DataMapOfIntegerInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfByte.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfCharacter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfAddress.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedDataMapOfStringString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedMapOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapTransientHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapIntegerHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerListOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfCharacter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfTransientTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfAsciiStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfAsciiStringInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedMapOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_IndexedMapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapOfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_MapRealHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_DataMapOfIntegerReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_ListOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array2OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfHExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_Array1OfTransient.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColStd_SequenceOfHAsciiString.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TColStd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_DataMap<Standard_Integer, Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerInteger");
    preregister_template_NCollection_List<TCollection_AsciiString>(m,"TColStd_ListOfAsciiString");
    preregister_template_NCollection_List<Standard_Integer>(m,"TColStd_ListOfInteger");
    preregister_template_NCollection_Sequence<TCollection_ExtendedString>(m,"TColStd_SequenceOfExtendedString");
    preregister_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Integer, TCollection_ExtendedString>(m,"TColStd_DataMapOfStringInteger");
    preregister_template_NCollection_Array1<TCollection_AsciiString>(m,"TColStd_Array1OfAsciiString");
    preregister_template_NCollection_Array2<opencascade::handle<Standard_Transient> >(m,"TColStd_Array2OfTransient");
    preregister_template_NCollection_Array1<Standard_Byte>(m,"TColStd_Array1OfByte");
    preregister_template_NCollection_Map<TCollection_AsciiString, TCollection_AsciiString>(m,"TColStd_MapOfAsciiString");
    preregister_template_NCollection_Array2<Standard_Character>(m,"TColStd_Array2OfCharacter");
    preregister_template_NCollection_Sequence<Standard_Address>(m,"TColStd_SequenceOfAddress");
    preregister_template_NCollection_Array1<TColStd_ListOfInteger>(m,"TColStd_Array1OfListOfInteger");
    preregister_template_NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString>(m,"TColStd_IndexedDataMapOfStringString");
    preregister_template_NCollection_IndexedMap<Standard_Real, TColStd_MapRealHasher>(m,"TColStd_IndexedMapOfReal");
    preregister_template_NCollection_DefaultHasher<opencascade::handle<Standard_Transient> >(m,"TColStd_MapTransientHasher");
    preregister_template_NCollection_Sequence<Standard_Boolean>(m,"TColStd_SequenceOfBoolean");
    preregister_template_NCollection_DefaultHasher<Standard_Integer>(m,"TColStd_MapIntegerHasher");
    preregister_template_NCollection_Sequence<TCollection_AsciiString>(m,"TColStd_SequenceOfAsciiString");
    preregister_template_NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_MapOfInteger");
    preregister_template_NCollection_DataMap<Standard_Integer, TColStd_ListOfInteger, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerListOfInteger");
    preregister_template_NCollection_Sequence<Standard_Integer>(m,"TColStd_SequenceOfInteger");
    preregister_template_NCollection_Array1<Standard_Character>(m,"TColStd_Array1OfCharacter");
    preregister_template_NCollection_Array2<Standard_Boolean>(m,"TColStd_Array2OfBoolean");
    preregister_template_NCollection_Array1<Standard_Boolean>(m,"TColStd_Array1OfBoolean");
    preregister_template_NCollection_List<opencascade::handle<Standard_Transient> >(m,"TColStd_ListOfTransient");
    preregister_template_NCollection_Sequence<opencascade::handle<Standard_Transient> >(m,"TColStd_SequenceOfTransient");
    preregister_template_NCollection_Array1<Standard_Real>(m,"TColStd_Array1OfReal");
    preregister_template_NCollection_Array1<Standard_Integer>(m,"TColStd_Array1OfInteger");
    preregister_template_NCollection_Array1<TCollection_ExtendedString>(m,"TColStd_Array1OfExtendedString");
    preregister_template_NCollection_DataMap<TCollection_AsciiString, Standard_Integer, TCollection_AsciiString>(m,"TColStd_DataMapOfAsciiStringInteger");
    preregister_template_NCollection_IndexedMap<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher>(m,"TColStd_IndexedMapOfTransient");
    preregister_template_NCollection_Map<Standard_Real, TColStd_MapRealHasher>(m,"TColStd_MapOfReal");
    preregister_template_NCollection_IndexedMap<Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_IndexedMapOfInteger");
    preregister_template_NCollection_Map<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher>(m,"TColStd_MapOfTransient");
    preregister_template_NCollection_DefaultHasher<Standard_Real>(m,"TColStd_MapRealHasher");
    preregister_template_NCollection_Array2<Standard_Integer>(m,"TColStd_Array2OfInteger");
    preregister_template_NCollection_DataMap<Standard_Integer, Standard_Real, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerReal");
    preregister_template_NCollection_List<Standard_Real>(m,"TColStd_ListOfReal");
    preregister_template_NCollection_Array2<Standard_Real>(m,"TColStd_Array2OfReal");
    preregister_template_NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> >(m,"TColStd_SequenceOfHExtendedString");
    preregister_template_NCollection_Array1<opencascade::handle<Standard_Transient> >(m,"TColStd_Array1OfTransient");
    preregister_template_NCollection_Sequence<Standard_Real>(m,"TColStd_SequenceOfReal");
    preregister_template_NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> >(m,"TColStd_SequenceOfHAsciiString");

// classes forward declarations only
    py::class_<TColStd_HArray1OfAsciiString ,opencascade::handle<TColStd_HArray1OfAsciiString> , TColStd_Array1OfAsciiString, Standard_Transient>(m,"TColStd_HArray1OfAsciiString",R"#()#");
    py::class_<TColStd_HArray1OfBoolean ,opencascade::handle<TColStd_HArray1OfBoolean> , TColStd_Array1OfBoolean, Standard_Transient>(m,"TColStd_HArray1OfBoolean",R"#()#");
    py::class_<TColStd_HArray1OfByte ,opencascade::handle<TColStd_HArray1OfByte> , TColStd_Array1OfByte, Standard_Transient>(m,"TColStd_HArray1OfByte",R"#()#");
    py::class_<TColStd_HArray1OfCharacter ,opencascade::handle<TColStd_HArray1OfCharacter> , TColStd_Array1OfCharacter, Standard_Transient>(m,"TColStd_HArray1OfCharacter",R"#()#");
    py::class_<TColStd_HArray1OfExtendedString ,opencascade::handle<TColStd_HArray1OfExtendedString> , TColStd_Array1OfExtendedString, Standard_Transient>(m,"TColStd_HArray1OfExtendedString",R"#()#");
    py::class_<TColStd_HArray1OfInteger ,opencascade::handle<TColStd_HArray1OfInteger> , TColStd_Array1OfInteger, Standard_Transient>(m,"TColStd_HArray1OfInteger",R"#()#");
    py::class_<TColStd_HArray1OfListOfInteger ,opencascade::handle<TColStd_HArray1OfListOfInteger> , TColStd_Array1OfListOfInteger, Standard_Transient>(m,"TColStd_HArray1OfListOfInteger",R"#()#");
    py::class_<TColStd_HArray1OfReal ,opencascade::handle<TColStd_HArray1OfReal> , TColStd_Array1OfReal, Standard_Transient>(m,"TColStd_HArray1OfReal",R"#()#");
    py::class_<TColStd_HArray1OfTransient ,opencascade::handle<TColStd_HArray1OfTransient> , TColStd_Array1OfTransient, Standard_Transient>(m,"TColStd_HArray1OfTransient",R"#()#");
    py::class_<TColStd_HArray2OfBoolean ,opencascade::handle<TColStd_HArray2OfBoolean> , TColStd_Array2OfBoolean, Standard_Transient>(m,"TColStd_HArray2OfBoolean",R"#()#");
    py::class_<TColStd_HArray2OfCharacter ,opencascade::handle<TColStd_HArray2OfCharacter> , TColStd_Array2OfCharacter, Standard_Transient>(m,"TColStd_HArray2OfCharacter",R"#()#");
    py::class_<TColStd_HArray2OfInteger ,opencascade::handle<TColStd_HArray2OfInteger> , TColStd_Array2OfInteger, Standard_Transient>(m,"TColStd_HArray2OfInteger",R"#()#");
    py::class_<TColStd_HArray2OfReal ,opencascade::handle<TColStd_HArray2OfReal> , TColStd_Array2OfReal, Standard_Transient>(m,"TColStd_HArray2OfReal",R"#()#");
    py::class_<TColStd_HArray2OfTransient ,opencascade::handle<TColStd_HArray2OfTransient> , TColStd_Array2OfTransient, Standard_Transient>(m,"TColStd_HArray2OfTransient",R"#()#");
    py::class_<TColStd_HPackedMapOfInteger ,opencascade::handle<TColStd_HPackedMapOfInteger> , Standard_Transient>(m,"TColStd_HPackedMapOfInteger",R"#(Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.)#");
    py::class_<TColStd_HSequenceOfAsciiString ,opencascade::handle<TColStd_HSequenceOfAsciiString> , TColStd_SequenceOfAsciiString, Standard_Transient>(m,"TColStd_HSequenceOfAsciiString",R"#()#");
    py::class_<TColStd_HSequenceOfExtendedString ,opencascade::handle<TColStd_HSequenceOfExtendedString> , TColStd_SequenceOfExtendedString, Standard_Transient>(m,"TColStd_HSequenceOfExtendedString",R"#()#");
    py::class_<TColStd_HSequenceOfHAsciiString ,opencascade::handle<TColStd_HSequenceOfHAsciiString> , TColStd_SequenceOfHAsciiString, Standard_Transient>(m,"TColStd_HSequenceOfHAsciiString",R"#()#");
    py::class_<TColStd_HSequenceOfHExtendedString ,opencascade::handle<TColStd_HSequenceOfHExtendedString> , TColStd_SequenceOfHExtendedString, Standard_Transient>(m,"TColStd_HSequenceOfHExtendedString",R"#()#");
    py::class_<TColStd_HSequenceOfInteger ,opencascade::handle<TColStd_HSequenceOfInteger> , TColStd_SequenceOfInteger, Standard_Transient>(m,"TColStd_HSequenceOfInteger",R"#()#");
    py::class_<TColStd_HSequenceOfReal ,opencascade::handle<TColStd_HSequenceOfReal> , TColStd_SequenceOfReal, Standard_Transient>(m,"TColStd_HSequenceOfReal",R"#()#");
    py::class_<TColStd_HSequenceOfTransient ,opencascade::handle<TColStd_HSequenceOfTransient> , TColStd_SequenceOfTransient, Standard_Transient>(m,"TColStd_HSequenceOfTransient",R"#()#");
    py::class_<TColStd_PackedMapOfInteger , shared_ptr<TColStd_PackedMapOfInteger> >(m,"TColStd_PackedMapOfInteger",R"#(Optimized Map of integer values. Each block of 32 integers is stored in 8 bytes in memory.)#");

};

// user-defined post-inclusion per module

// user-defined post
