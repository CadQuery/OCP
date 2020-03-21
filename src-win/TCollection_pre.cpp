
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
#include <TCollection_BasicMapIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <TCollection_BaseSequence.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_BasicMap.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_BasicMapIterator.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_HExtendedString.hxx>
#include <TCollection_SeqNode.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_NegativeValue.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_BasicMap.hxx>

// module includes
#include <TCollection.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_BaseSequence.hxx>
#include <TCollection_BasicMap.hxx>
#include <TCollection_BasicMapIterator.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
#include <TCollection_Side.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TCollection_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TCollection", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TCollection_Side>(m, "TCollection_Side",R"#(None)#")
        .value("TCollection_Left",TCollection_Side::TCollection_Left)
        .value("TCollection_Right",TCollection_Side::TCollection_Right).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<TCollection , shared_ptr<TCollection> >(m,"TCollection",R"#(The package <TCollection> provides the services for the transient basic data structures.)#");
    py::class_<TCollection_AsciiString , shared_ptr<TCollection_AsciiString> >(m,"TCollection_AsciiString",R"#(Class defines a variable-length sequence of 8-bit characters. Despite class name (kept for historical reasons), it is intended to store UTF-8 string, not just ASCII characters. However, multi-byte nature of UTF-8 is not considered by the following methods: - Method ::Length() return the number of bytes, not the number of Unicode symbols. - Methods taking/returning symbol index work with 8-bit code units, not true Unicode symbols, including ::Remove(), ::SetValue(), ::Value(), ::Search(), ::Trunc() and others. If application needs to process multi-byte Unicode symbols explicitly, NCollection_Utf8Iter class can be used for iterating through Unicode string (UTF-32 code unit will be returned for each position).)#");
    py::class_<TCollection_BaseSequence , shared_ptr<TCollection_BaseSequence> >(m,"TCollection_BaseSequence",R"#(Definition of a base class for all instanciations of sequence.)#");
    py::class_<TCollection_BasicMap , shared_ptr<TCollection_BasicMap> >(m,"TCollection_BasicMap",R"#(Root class of all the maps, provides utilitites for managing the buckets. Maps are dynamically extended data structures where data is quickly accessed with a key. General properties of maps - Map items may be (complex) non-unitary data; they may be difficult to manage with an array. Moreover, the map allows a data structure to be indexed by complex data. - The size of a map is dynamically extended. So a map may be first dimensioned for a little number of items. Maps avoid the use of large and quasi-empty arrays. - The access to a map item is much faster than the one to a sequence, a list, a queue or a stack item. - The access time to a map item may be compared with the one to an array item. First of all, it depends on the size of the map. It also depends on the quality of a user redefinable function (the hashing function) to find quickly where the item is. - The exploration of a map may be of better performance than the exploration of an array because the size of the map is adapted to the number of inserted items. These properties explain why maps are commonly used as internal data structures for algorithms. Definitions - A map is a data structure for which data is addressed by keys. - Once inserted in the map, a map item is referenced as an entry of the map. - Each entry of the map is addressed by a key. Two different keys address two different entries of the map. - The position of an entry in the map is called a bucket. - A map is dimensioned by its number of buckets, i.e. the maximum number of entries in the map. The performance of a map is conditioned by the number of buckets. - The hashing function transforms a key into a bucket index. The number of values that can be computed by the hashing function is equal to the number of buckets of the map. - Both the hashing function and the equality test between two keys are provided by a hasher object. - A map may be explored by a map iterator. This exploration provides only inserted entries in the map (i.e. non empty buckets). Collections' generic maps The Collections component provides numerous generic derived maps. - These maps include automatic management of the number of buckets: they are automatically resized when the number of keys exceeds the number of buckets. If you have a fair idea of the number of items in your map, you can save on automatic resizing by specifying a number of buckets at the time of construction, or by using a resizing function. This may be considered for crucial optimization issues. - Keys, items and hashers are parameters of these generic derived maps. - TCollection_MapHasher class describes the functions required by any hasher which is to be used with a map instantiated from the Collections component. - An iterator class is automatically instantiated at the time of instantiation of a map provided by the Collections component if this map is to be explored with an iterator. Note that some provided generic maps are not to be explored with an iterator but with indexes (indexed maps).)#");
    py::class_<TCollection_BasicMapIterator , shared_ptr<TCollection_BasicMapIterator> >(m,"TCollection_BasicMapIterator",R"#(This class provides basic services for the iterators on Maps. The iterators are inherited from this one.)#");
    py::class_<TCollection_ExtendedString , shared_ptr<TCollection_ExtendedString> >(m,"TCollection_ExtendedString",R"#(A variable-length sequence of "extended" (UNICODE) characters (16-bit character type). It provides editing operations with built-in memory management to make ExtendedString objects easier to use than ordinary extended character arrays. ExtendedString objects follow "value semantics", that is, they are the actual strings, not handles to strings, and are copied through assignment. You may use HExtendedString objects to get handles to strings.)#");
    py::class_<TCollection_HAsciiString ,opencascade::handle<TCollection_HAsciiString> , Standard_Transient>(m,"TCollection_HAsciiString",R"#(A variable-length sequence of ASCII characters (normal 8-bit character type). It provides editing operations with built-in memory management to make HAsciiString objects easier to use than ordinary character arrays. HAsciiString objects are handles to strings. - HAsciiString strings may be shared by several objects. - You may use an AsciiString object to get the actual string. Note: HAsciiString objects use an AsciiString string as a field.A variable-length sequence of ASCII characters (normal 8-bit character type). It provides editing operations with built-in memory management to make HAsciiString objects easier to use than ordinary character arrays. HAsciiString objects are handles to strings. - HAsciiString strings may be shared by several objects. - You may use an AsciiString object to get the actual string. Note: HAsciiString objects use an AsciiString string as a field.A variable-length sequence of ASCII characters (normal 8-bit character type). It provides editing operations with built-in memory management to make HAsciiString objects easier to use than ordinary character arrays. HAsciiString objects are handles to strings. - HAsciiString strings may be shared by several objects. - You may use an AsciiString object to get the actual string. Note: HAsciiString objects use an AsciiString string as a field.)#");
    py::class_<TCollection_HExtendedString ,opencascade::handle<TCollection_HExtendedString> , Standard_Transient>(m,"TCollection_HExtendedString",R"#(A variable-length sequence of "extended" (UNICODE) characters (16-bit character type). It provides editing operations with built-in memory management to make ExtendedString objects easier to use than ordinary extended character arrays. HExtendedString objects are handles to strings. - HExtendedString strings may be shared by several objects. - You may use an ExtendedString object to get the actual string. Note: HExtendedString objects use an ExtendedString string as a field.A variable-length sequence of "extended" (UNICODE) characters (16-bit character type). It provides editing operations with built-in memory management to make ExtendedString objects easier to use than ordinary extended character arrays. HExtendedString objects are handles to strings. - HExtendedString strings may be shared by several objects. - You may use an ExtendedString object to get the actual string. Note: HExtendedString objects use an ExtendedString string as a field.A variable-length sequence of "extended" (UNICODE) characters (16-bit character type). It provides editing operations with built-in memory management to make ExtendedString objects easier to use than ordinary extended character arrays. HExtendedString objects are handles to strings. - HExtendedString strings may be shared by several objects. - You may use an ExtendedString object to get the actual string. Note: HExtendedString objects use an ExtendedString string as a field.)#");
    py::class_<TCollection_MapNode ,opencascade::handle<TCollection_MapNode> , Standard_Transient>(m,"TCollection_MapNode",R"#(Basic class root of all the Maps.Basic class root of all the Maps.Basic class root of all the Maps.)#");
    py::class_<TCollection_SeqNode ,opencascade::handle<TCollection_SeqNode> , Standard_Transient>(m,"TCollection_SeqNode",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
