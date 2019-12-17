
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

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
// ./opencascade/TColStd_Array1OfAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapTransientHasher.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfByte.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfIntegerInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfIntegerInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfAddress.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfAsciiStringInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfAsciiStringInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfHAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_IndexedMapOfTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfTransientTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfListOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_IndexedDataMapOfStringString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfCharacter.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfExtendedString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfAsciiString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array2OfTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array2OfBoolean.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapIntegerHasher.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array1OfExtendedString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfStringInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfStringInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfIntegerListOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfIntegerListOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapRealHasher.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfIntegerTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfHExtendedString.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_IndexedMapOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array2OfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_ListOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_MapOfTransient.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_IndexedMapOfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array2OfReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfIntegerReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_DataMapOfIntegerReal.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_Array2OfCharacter.hxx
#include "NCollection.hxx"
// ./opencascade/TColStd_SequenceOfTransient.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TColStd", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<TColStd_HArray1OfBoolean ,std::unique_ptr<TColStd_HArray1OfBoolean>  >(m,"TColStd_HArray1OfBoolean",R"#()#");
    py::class_<TColStd_HSequenceOfAsciiString ,std::unique_ptr<TColStd_HSequenceOfAsciiString>  >(m,"TColStd_HSequenceOfAsciiString",R"#()#");
    py::class_<TColStd_HArray2OfCharacter ,std::unique_ptr<TColStd_HArray2OfCharacter>  >(m,"TColStd_HArray2OfCharacter",R"#()#");
    py::class_<TColStd_HArray2OfReal ,std::unique_ptr<TColStd_HArray2OfReal>  >(m,"TColStd_HArray2OfReal",R"#()#");
    py::class_<TColStd_HArray1OfTransient ,std::unique_ptr<TColStd_HArray1OfTransient>  >(m,"TColStd_HArray1OfTransient",R"#()#");
    py::class_<TColStd_HArray1OfAsciiString ,std::unique_ptr<TColStd_HArray1OfAsciiString>  >(m,"TColStd_HArray1OfAsciiString",R"#()#");
    py::class_<TColStd_HArray2OfTransient ,std::unique_ptr<TColStd_HArray2OfTransient>  >(m,"TColStd_HArray2OfTransient",R"#()#");
    py::class_<TColStd_HArray1OfExtendedString ,std::unique_ptr<TColStd_HArray1OfExtendedString>  >(m,"TColStd_HArray1OfExtendedString",R"#()#");
    py::class_<TColStd_HArray2OfBoolean ,std::unique_ptr<TColStd_HArray2OfBoolean>  >(m,"TColStd_HArray2OfBoolean",R"#()#");
    py::class_<TColStd_HArray2OfInteger ,std::unique_ptr<TColStd_HArray2OfInteger>  >(m,"TColStd_HArray2OfInteger",R"#()#");
    py::class_<TColStd_HSequenceOfExtendedString ,std::unique_ptr<TColStd_HSequenceOfExtendedString>  >(m,"TColStd_HSequenceOfExtendedString",R"#()#");
    py::class_<TColStd_HArray1OfReal ,std::unique_ptr<TColStd_HArray1OfReal>  >(m,"TColStd_HArray1OfReal",R"#()#");
    py::class_<TColStd_HArray1OfByte ,std::unique_ptr<TColStd_HArray1OfByte>  >(m,"TColStd_HArray1OfByte",R"#()#");
    py::class_<TColStd_HSequenceOfTransient ,std::unique_ptr<TColStd_HSequenceOfTransient>  >(m,"TColStd_HSequenceOfTransient",R"#()#");
    py::class_<TColStd_HArray1OfInteger ,std::unique_ptr<TColStd_HArray1OfInteger>  >(m,"TColStd_HArray1OfInteger",R"#()#");
    py::class_<TColStd_HSequenceOfHAsciiString ,std::unique_ptr<TColStd_HSequenceOfHAsciiString>  >(m,"TColStd_HSequenceOfHAsciiString",R"#()#");
    py::class_<TColStd_HSequenceOfHExtendedString ,std::unique_ptr<TColStd_HSequenceOfHExtendedString>  >(m,"TColStd_HSequenceOfHExtendedString",R"#()#");
    py::class_<TColStd_HSequenceOfInteger ,std::unique_ptr<TColStd_HSequenceOfInteger>  >(m,"TColStd_HSequenceOfInteger",R"#()#");
    py::class_<TColStd_HArray1OfCharacter ,std::unique_ptr<TColStd_HArray1OfCharacter>  >(m,"TColStd_HArray1OfCharacter",R"#()#");
    py::class_<TColStd_HArray1OfListOfInteger ,std::unique_ptr<TColStd_HArray1OfListOfInteger>  >(m,"TColStd_HArray1OfListOfInteger",R"#()#");
    py::class_<TColStd_HPackedMapOfInteger ,opencascade::handle<TColStd_HPackedMapOfInteger>  , Standard_Transient >(m,"TColStd_HPackedMapOfInteger",R"#(Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.)#");
    py::class_<TColStd_HSequenceOfReal ,std::unique_ptr<TColStd_HSequenceOfReal>  >(m,"TColStd_HSequenceOfReal",R"#()#");
    py::class_<TColStd_PackedMapOfInteger ,std::unique_ptr<TColStd_PackedMapOfInteger>  >(m,"TColStd_PackedMapOfInteger",R"#(Optimized Map of integer values. Each block of 32 integers is stored in 8 bytes in memory.)#");

// pre-register typdefs
// ./opencascade/TColStd_Array1OfAsciiString.hxx
    preregister_template_NCollection_Array1<TCollection_AsciiString>(m,"TColStd_Array1OfAsciiString");  
// ./opencascade/TColStd_DataMapIteratorOfDataMapOfIntegerReal.hxx
// ./opencascade/TColStd_HArray1OfBoolean.hxx
// ./opencascade/TColStd_HArray1OfByte.hxx
// ./opencascade/TColStd_MapIteratorOfMapOfInteger.hxx
// ./opencascade/TColStd_HSequenceOfAsciiString.hxx
// ./opencascade/TColStd_MapTransientHasher.hxx
    preregister_template_NCollection_DefaultHasher<opencascade::handle<Standard_Transient> >(m,"TColStd_MapTransientHasher");  
// ./opencascade/TColStd_MapIteratorOfMapOfReal.hxx
// ./opencascade/TColStd_HArray1OfCharacter.hxx
// ./opencascade/TColStd_Array1OfByte.hxx
    preregister_template_NCollection_Array1<Standard_Byte>(m,"TColStd_Array1OfByte");  
// ./opencascade/TColStd_HArray2OfCharacter.hxx
// ./opencascade/TColStd_DataMapOfIntegerInteger.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerInteger");  
// ./opencascade/TColStd_SequenceOfBoolean.hxx
    preregister_template_NCollection_Sequence<Standard_Boolean>(m,"TColStd_SequenceOfBoolean");  
// ./opencascade/TColStd_HSequenceOfTransient.hxx
// ./opencascade/TColStd_MapOfReal.hxx
    preregister_template_NCollection_Map<Standard_Real, TColStd_MapRealHasher>(m,"TColStd_MapOfReal");  
// ./opencascade/TColStd_Array1OfInteger.hxx
    preregister_template_NCollection_Array1<Standard_Integer>(m,"TColStd_Array1OfInteger");  
// ./opencascade/TColStd_HArray2OfReal.hxx
// ./opencascade/TColStd_MapOfInteger.hxx
    preregister_template_NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_MapOfInteger");  
// ./opencascade/TColStd_HSequenceOfReal.hxx
// ./opencascade/TColStd_SequenceOfAddress.hxx
    preregister_template_NCollection_Sequence<Standard_Address>(m,"TColStd_SequenceOfAddress");  
// ./opencascade/TColStd_HArray1OfTransient.hxx
// ./opencascade/TColStd_MapIteratorOfPackedMapOfInteger.hxx
// ./opencascade/TColStd_SequenceOfAsciiString.hxx
    preregister_template_NCollection_Sequence<TCollection_AsciiString>(m,"TColStd_SequenceOfAsciiString");  
// ./opencascade/TColStd_SequenceOfInteger.hxx
    preregister_template_NCollection_Sequence<Standard_Integer>(m,"TColStd_SequenceOfInteger");  
// ./opencascade/TColStd_Array1OfBoolean.hxx
    preregister_template_NCollection_Array1<Standard_Boolean>(m,"TColStd_Array1OfBoolean");  
// ./opencascade/TColStd_DataMapOfAsciiStringInteger.hxx
    preregister_template_NCollection_DataMap<TCollection_AsciiString, Standard_Integer, TCollection_AsciiString>(m,"TColStd_DataMapOfAsciiStringInteger");  
// ./opencascade/TColStd_SequenceOfHAsciiString.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<TCollection_HAsciiString> >(m,"TColStd_SequenceOfHAsciiString");  
// ./opencascade/TColStd_IndexedMapOfTransient.hxx
    preregister_template_NCollection_IndexedMap<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher>(m,"TColStd_IndexedMapOfTransient");  
// ./opencascade/TColStd_HArray1OfInteger.hxx
// ./opencascade/TColStd_HArray1OfAsciiString.hxx
// ./opencascade/TColStd_DataMapIteratorOfDataMapOfIntegerInteger.hxx
// ./opencascade/TColStd_MapOfAsciiString.hxx
    preregister_template_NCollection_Map<TCollection_AsciiString, TCollection_AsciiString>(m,"TColStd_MapOfAsciiString");  
// ./opencascade/TColStd_IndexedDataMapOfTransientTransient.hxx
// ./opencascade/TColStd_DataMapOfTransientTransient.hxx
// ./opencascade/TColStd_ListIteratorOfListOfReal.hxx
// ./opencascade/TColStd_Array1OfListOfInteger.hxx
    preregister_template_NCollection_Array1<TColStd_ListOfInteger>(m,"TColStd_Array1OfListOfInteger");  
// ./opencascade/TColStd_HArray1OfListOfInteger.hxx
// ./opencascade/TColStd_DataMapIteratorOfDataMapOfTransientTransient.hxx
// ./opencascade/TColStd_HArray2OfTransient.hxx
// ./opencascade/TColStd_Array1OfReal.hxx
    preregister_template_NCollection_Array1<Standard_Real>(m,"TColStd_Array1OfReal");  
// ./opencascade/TColStd_HSequenceOfHAsciiString.hxx
// ./opencascade/TColStd_ListIteratorOfListOfInteger.hxx
// ./opencascade/TColStd_IndexedDataMapOfStringString.hxx
    preregister_template_NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, TCollection_AsciiString>(m,"TColStd_IndexedDataMapOfStringString");  
// ./opencascade/TColStd_HArray1OfExtendedString.hxx
// ./opencascade/TColStd_Array1OfCharacter.hxx
    preregister_template_NCollection_Array1<Standard_Character>(m,"TColStd_Array1OfCharacter");  
// ./opencascade/TColStd_SequenceOfExtendedString.hxx
    preregister_template_NCollection_Sequence<TCollection_ExtendedString>(m,"TColStd_SequenceOfExtendedString");  
// ./opencascade/TColStd_ListOfAsciiString.hxx
    preregister_template_NCollection_List<TCollection_AsciiString>(m,"TColStd_ListOfAsciiString");  
// ./opencascade/TColStd_Array2OfTransient.hxx
    preregister_template_NCollection_Array2<opencascade::handle<Standard_Transient> >(m,"TColStd_Array2OfTransient");  
// ./opencascade/TColStd_Array1OfTransient.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Standard_Transient> >(m,"TColStd_Array1OfTransient");  
// ./opencascade/TColStd_PackedMapOfInteger.hxx
// ./opencascade/TColStd_DataMapIteratorOfDataMapOfStringInteger.hxx
// ./opencascade/TColStd_Array2OfBoolean.hxx
    preregister_template_NCollection_Array2<Standard_Boolean>(m,"TColStd_Array2OfBoolean");  
// ./opencascade/TColStd_DataMapIteratorOfDataMapOfIntegerTransient.hxx
// ./opencascade/TColStd_ListOfTransient.hxx
    preregister_template_NCollection_List<opencascade::handle<Standard_Transient> >(m,"TColStd_ListOfTransient");  
// ./opencascade/TColStd_SequenceOfReal.hxx
    preregister_template_NCollection_Sequence<Standard_Real>(m,"TColStd_SequenceOfReal");  
// ./opencascade/TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger.hxx
// ./opencascade/TColStd_MapIntegerHasher.hxx
    preregister_template_NCollection_DefaultHasher<Standard_Integer>(m,"TColStd_MapIntegerHasher");  
// ./opencascade/TColStd_HArray2OfBoolean.hxx
// ./opencascade/TColStd_ListIteratorOfListOfTransient.hxx
// ./opencascade/TColStd_ListOfReal.hxx
    preregister_template_NCollection_List<Standard_Real>(m,"TColStd_ListOfReal");  
// ./opencascade/TColStd_Array1OfExtendedString.hxx
    preregister_template_NCollection_Array1<TCollection_ExtendedString>(m,"TColStd_Array1OfExtendedString");  
// ./opencascade/TColStd_DataMapOfStringInteger.hxx
    preregister_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Integer, TCollection_ExtendedString>(m,"TColStd_DataMapOfStringInteger");  
// ./opencascade/TColStd_HSequenceOfHExtendedString.hxx
// ./opencascade/TColStd_HArray2OfInteger.hxx
// ./opencascade/TColStd_DataMapOfIntegerListOfInteger.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, TColStd_ListOfInteger, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerListOfInteger");  
// ./opencascade/TColStd_MapRealHasher.hxx
    preregister_template_NCollection_DefaultHasher<Standard_Real>(m,"TColStd_MapRealHasher");  
// ./opencascade/TColStd_MapIteratorOfMapOfTransient.hxx
// ./opencascade/TColStd_DataMapOfIntegerTransient.hxx
// ./opencascade/TColStd_SequenceOfHExtendedString.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> >(m,"TColStd_SequenceOfHExtendedString");  
// ./opencascade/TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger.hxx
// ./opencascade/TColStd_IndexedMapOfReal.hxx
    preregister_template_NCollection_IndexedMap<Standard_Real, TColStd_MapRealHasher>(m,"TColStd_IndexedMapOfReal");  
// ./opencascade/TColStd_MapIteratorOfMapOfAsciiString.hxx
// ./opencascade/TColStd_Array2OfInteger.hxx
    preregister_template_NCollection_Array2<Standard_Integer>(m,"TColStd_Array2OfInteger");  
// ./opencascade/TColStd_ListOfInteger.hxx
    preregister_template_NCollection_List<Standard_Integer>(m,"TColStd_ListOfInteger");  
// ./opencascade/TColStd_MapOfTransient.hxx
    preregister_template_NCollection_Map<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher>(m,"TColStd_MapOfTransient");  
// ./opencascade/TColStd_HPackedMapOfInteger.hxx
// ./opencascade/TColStd_IndexedMapOfInteger.hxx
    preregister_template_NCollection_IndexedMap<Standard_Integer, TColStd_MapIntegerHasher>(m,"TColStd_IndexedMapOfInteger");  
// ./opencascade/TColStd_Array2OfReal.hxx
    preregister_template_NCollection_Array2<Standard_Real>(m,"TColStd_Array2OfReal");  
// ./opencascade/TColStd_ListIteratorOfListOfAsciiString.hxx
// ./opencascade/TColStd_DataMapOfIntegerReal.hxx
    preregister_template_NCollection_DataMap<Standard_Integer, Standard_Real, TColStd_MapIntegerHasher>(m,"TColStd_DataMapOfIntegerReal");  
// ./opencascade/TColStd_Array2OfCharacter.hxx
    preregister_template_NCollection_Array2<Standard_Character>(m,"TColStd_Array2OfCharacter");  
// ./opencascade/TColStd_HSequenceOfExtendedString.hxx
// ./opencascade/TColStd_HSequenceOfInteger.hxx
// ./opencascade/TColStd_HArray1OfReal.hxx
// ./opencascade/TColStd_SequenceOfTransient.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Standard_Transient> >(m,"TColStd_SequenceOfTransient");  

};

// user-defined post-inclusion per module

// user-defined post
