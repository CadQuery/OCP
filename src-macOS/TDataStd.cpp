
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDataStd_ExtStringArray.hxx>
#include <TDataStd_RealArray.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Integer.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfIntPackedMap.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDataStd_ByteArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_HDataMapOfStringInteger.hxx>
#include <TDataStd_HDataMapOfStringReal.hxx>
#include <TDataStd_HDataMapOfStringString.hxx>
#include <TDataStd_HDataMapOfStringByte.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfInteger.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfReal.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_TreeNode.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_ChildNodeIterator.hxx>
#include <TDF_Label.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_TreeNode.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfByteArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDataStd_Current.hxx>
#include <TDataStd_Name.hxx>
#include <TDataStd_Comment.hxx>
#include <TDataStd_Integer.hxx>
#include <TDataStd_IntegerArray.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_RealArray.hxx>
#include <TDataStd_ExtStringArray.hxx>
#include <TDataStd_UAttribute.hxx>
#include <TDataStd_TreeNode.hxx>
#include <TDataStd_ChildNodeIterator.hxx>
#include <TDataStd_Directory.hxx>
#include <TDataStd_NoteBook.hxx>
#include <TDataStd_Expression.hxx>
#include <TDataStd_Relation.hxx>
#include <TDataStd_Variable.hxx>
#include <TDataStd_DeltaOnModificationOfIntArray.hxx>
#include <TDataStd_DeltaOnModificationOfRealArray.hxx>
#include <TDataStd_DeltaOnModificationOfExtStringArray.hxx>
#include <TDataStd_DeltaOnModificationOfIntPackedMap.hxx>
#include <TDataStd_DeltaOnModificationOfByteArray.hxx>
#include <TDataStd_Tick.hxx>
#include <TDataStd_AsciiString.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <TDataStd_IntegerList.hxx>
#include <TDataStd_RealList.hxx>
#include <TDataStd_ExtStringList.hxx>
#include <TDataStd_BooleanList.hxx>
#include <TDataStd_ReferenceList.hxx>
#include <TDataStd_BooleanArray.hxx>
#include <TDataStd_ReferenceArray.hxx>
#include <TDataStd_ByteArray.hxx>
#include <TDataStd_NamedData.hxx>
#include <TDataStd_HDataMapOfStringInteger.hxx>
#include <TDataStd_HDataMapOfStringReal.hxx>
#include <TDataStd_HDataMapOfStringString.hxx>
#include <TDataStd_HDataMapOfStringByte.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfInteger.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfReal.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Expression.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDataStd_DeltaOnModificationOfIntArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfExtStringArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDataStd_IntegerArray.hxx>
#include <TDataStd_DeltaOnModificationOfRealArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>

// module includes
#include <TDataStd.hxx>
#include <TDataStd_AsciiString.hxx>
#include <TDataStd_BooleanArray.hxx>
#include <TDataStd_BooleanList.hxx>
#include <TDataStd_ByteArray.hxx>
#include <TDataStd_ChildNodeIterator.hxx>
#include <TDataStd_Comment.hxx>
#include <TDataStd_Current.hxx>
#include <TDataStd_DataMapIteratorOfDataMapOfStringByte.hxx>
#include <TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger.hxx>
#include <TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal.hxx>
#include <TDataStd_DataMapIteratorOfDataMapOfStringReal.hxx>
#include <TDataStd_DataMapIteratorOfDataMapOfStringString.hxx>
#include <TDataStd_DataMapOfStringByte.hxx>
#include <TDataStd_DataMapOfStringHArray1OfInteger.hxx>
#include <TDataStd_DataMapOfStringHArray1OfReal.hxx>
#include <TDataStd_DataMapOfStringReal.hxx>
#include <TDataStd_DataMapOfStringString.hxx>
#include <TDataStd_DeltaOnModificationOfByteArray.hxx>
#include <TDataStd_DeltaOnModificationOfExtStringArray.hxx>
#include <TDataStd_DeltaOnModificationOfIntArray.hxx>
#include <TDataStd_DeltaOnModificationOfIntPackedMap.hxx>
#include <TDataStd_DeltaOnModificationOfRealArray.hxx>
#include <TDataStd_Directory.hxx>
#include <TDataStd_Expression.hxx>
#include <TDataStd_ExtStringArray.hxx>
#include <TDataStd_ExtStringList.hxx>
#include <TDataStd_HDataMapOfStringByte.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfInteger.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfReal.hxx>
#include <TDataStd_HDataMapOfStringInteger.hxx>
#include <TDataStd_HDataMapOfStringReal.hxx>
#include <TDataStd_HDataMapOfStringString.hxx>
#include <TDataStd_HLabelArray1.hxx>
#include <TDataStd_Integer.hxx>
#include <TDataStd_IntegerArray.hxx>
#include <TDataStd_IntegerList.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <TDataStd_LabelArray1.hxx>
#include <TDataStd_ListIteratorOfListOfByte.hxx>
#include <TDataStd_ListIteratorOfListOfExtendedString.hxx>
#include <TDataStd_ListOfByte.hxx>
#include <TDataStd_ListOfExtendedString.hxx>
#include <TDataStd_Name.hxx>
#include <TDataStd_NamedData.hxx>
#include <TDataStd_NoteBook.hxx>
#include <TDataStd_PtrTreeNode.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_RealArray.hxx>
#include <TDataStd_RealEnum.hxx>
#include <TDataStd_RealList.hxx>
#include <TDataStd_ReferenceArray.hxx>
#include <TDataStd_ReferenceList.hxx>
#include <TDataStd_Relation.hxx>
#include <TDataStd_Tick.hxx>
#include <TDataStd_TreeNode.hxx>
#include <TDataStd_UAttribute.hxx>
#include <TDataStd_Variable.hxx>

// template related includes
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfByte.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfByte.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringHArray1OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_LabelArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringHArray1OfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringByte.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringByte.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TDataStd(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TDataStd"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TDataStd , shared_ptr<TDataStd>>(m,"TDataStd");

    static_cast<py::class_<TDataStd , shared_ptr<TDataStd> >>(m.attr("TDataStd"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_AsciiString ,opencascade::handle<TDataStd_AsciiString> , TDF_Attribute>>(m.attr("TDataStd_AsciiString"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_AsciiString::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_AsciiString::*)( const Standard_GUID & ) >(&TDataStd_AsciiString::SetID),
             R"#(Sets the explicit user defined GUID to the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_AsciiString::*)() ) static_cast<void (TDataStd_AsciiString::*)() >(&TDataStd_AsciiString::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_AsciiString::*)() const) static_cast<const Standard_GUID & (TDataStd_AsciiString::*)() const>(&TDataStd_AsciiString::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_AsciiString::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_AsciiString::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_AsciiString::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_AsciiString::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_AsciiString::*)() const>(&TDataStd_AsciiString::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_AsciiString::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_AsciiString::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_AsciiString::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_AsciiString::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_AsciiString::*)( std::ostream & ) const>(&TDataStd_AsciiString::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_AsciiString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_AsciiString::*)() const>(&TDataStd_AsciiString::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_AsciiString::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_BooleanArray ,opencascade::handle<TDataStd_BooleanArray> , TDF_Attribute>>(m.attr("TDataStd_BooleanArray"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_BooleanArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_BooleanArray::*)( const Standard_GUID & ) >(&TDataStd_BooleanArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_BooleanArray::*)() ) static_cast<void (TDataStd_BooleanArray::*)() >(&TDataStd_BooleanArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_BooleanArray::*)() const) static_cast<const Standard_GUID & (TDataStd_BooleanArray::*)() const>(&TDataStd_BooleanArray::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_BooleanArray::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_BooleanArray::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_BooleanArray::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_BooleanArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_BooleanArray::*)() const>(&TDataStd_BooleanArray::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_BooleanArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_BooleanArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_BooleanArray::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_BooleanArray::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_BooleanArray::*)( std::ostream & ) const>(&TDataStd_BooleanArray::Dump),
             R"#(None)#"  , py::arg("OS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_BooleanArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_BooleanArray::*)() const>(&TDataStd_BooleanArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_BooleanArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_BooleanList ,opencascade::handle<TDataStd_BooleanList> , TDF_Attribute>>(m.attr("TDataStd_BooleanList"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_BooleanList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_BooleanList::*)( const Standard_GUID & ) >(&TDataStd_BooleanList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_BooleanList::*)() ) static_cast<void (TDataStd_BooleanList::*)() >(&TDataStd_BooleanList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_BooleanList::*)() const) static_cast<const Standard_GUID & (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_BooleanList::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_BooleanList::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_BooleanList::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_BooleanList::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_BooleanList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_BooleanList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_BooleanList::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_BooleanList::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_BooleanList::*)( std::ostream & ) const>(&TDataStd_BooleanList::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_BooleanList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_BooleanList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ByteArray ,opencascade::handle<TDataStd_ByteArray> , TDF_Attribute>>(m.attr("TDataStd_ByteArray"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_ByteArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::DynamicType),
             R"#(None)#" )
        .def("SetID",
             (void (TDataStd_ByteArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ByteArray::*)( const Standard_GUID & ) >(&TDataStd_ByteArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ByteArray::*)() ) static_cast<void (TDataStd_ByteArray::*)() >(&TDataStd_ByteArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("InternalArray",
             (const opencascade::handle<TColStd_HArray1OfByte> & (TDataStd_ByteArray::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfByte> & (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::InternalArray),
             R"#(None)#" )
        .def("GetDelta",
             (Standard_Boolean (TDataStd_ByteArray::*)() const) static_cast<Standard_Boolean (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::GetDelta),
             R"#(None)#" )
        .def("SetDelta",
             (void (TDataStd_ByteArray::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_ByteArray::*)( const Standard_Boolean ) >(&TDataStd_ByteArray::SetDelta),
             R"#(for internal use only!)#"  , py::arg("isDelta"))
        .def("ID",
             (const Standard_GUID & (TDataStd_ByteArray::*)() const) static_cast<const Standard_GUID & (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_ByteArray::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_ByteArray::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_ByteArray::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_ByteArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_ByteArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_ByteArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_ByteArray::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_ByteArray::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_ByteArray::*)( std::ostream & ) const>(&TDataStd_ByteArray::Dump),
             R"#(None)#"  , py::arg("OS"))
        .def("DeltaOnModification",
             (opencascade::handle<TDF_DeltaOnModification> (TDataStd_ByteArray::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<opencascade::handle<TDF_DeltaOnModification> (TDataStd_ByteArray::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDataStd_ByteArray::DeltaOnModification),
             R"#(Makes a DeltaOnModification between <me> and <anOldAttribute>.)#"  , py::arg("anOldAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ByteArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ChildNodeIterator , shared_ptr<TDataStd_ChildNodeIterator> >>(m.attr("TDataStd_ChildNodeIterator"))
    // constructors
    // custom constructors
    // methods
        .def("More",
             (Standard_Boolean (TDataStd_ChildNodeIterator::*)() const) static_cast<Standard_Boolean (TDataStd_ChildNodeIterator::*)() const>(&TDataStd_ChildNodeIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Value",
             (const opencascade::handle<TDataStd_TreeNode> & (TDataStd_ChildNodeIterator::*)() const) static_cast<const opencascade::handle<TDataStd_TreeNode> & (TDataStd_ChildNodeIterator::*)() const>(&TDataStd_ChildNodeIterator::Value),
             R"#(Returns the current item; a null Step if there is no one.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Comment ,opencascade::handle<TDataStd_Comment> , TDF_Attribute>>(m.attr("TDataStd_Comment"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_Comment::*)() const) static_cast<const Standard_GUID & (TDataStd_Comment::*)() const>(&TDataStd_Comment::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Comment::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Comment::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Comment::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Comment::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Comment::*)() const>(&TDataStd_Comment::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Comment::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Comment::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Comment::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Comment::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Comment::*)( std::ostream & ) const>(&TDataStd_Comment::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("AfterRetrieval",
             (Standard_Boolean (TDataStd_Comment::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (TDataStd_Comment::*)( const Standard_Boolean ) >(&TDataStd_Comment::AfterRetrieval),
             R"#(None)#"  , py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Comment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Comment::*)() const>(&TDataStd_Comment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Comment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Current ,opencascade::handle<TDataStd_Current> , TDF_Attribute>>(m.attr("TDataStd_Current"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_Current::*)() const) static_cast<const Standard_GUID & (TDataStd_Current::*)() const>(&TDataStd_Current::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Current::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Current::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Current::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Current::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Current::*)() const>(&TDataStd_Current::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Current::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Current::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Current::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Current::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Current::*)( std::ostream & ) const>(&TDataStd_Current::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Current::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Current::*)() const>(&TDataStd_Current::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Current::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfByteArray ,opencascade::handle<TDataStd_DeltaOnModificationOfByteArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfByteArray"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TDataStd_DeltaOnModificationOfByteArray::*)() ) static_cast<void (TDataStd_DeltaOnModificationOfByteArray::*)() >(&TDataStd_DeltaOnModificationOfByteArray::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfByteArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfByteArray::*)() const>(&TDataStd_DeltaOnModificationOfByteArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_DeltaOnModificationOfByteArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfExtStringArray ,opencascade::handle<TDataStd_DeltaOnModificationOfExtStringArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfExtStringArray"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TDataStd_DeltaOnModificationOfExtStringArray::*)() ) static_cast<void (TDataStd_DeltaOnModificationOfExtStringArray::*)() >(&TDataStd_DeltaOnModificationOfExtStringArray::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfExtStringArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfExtStringArray::*)() const>(&TDataStd_DeltaOnModificationOfExtStringArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_DeltaOnModificationOfExtStringArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfIntArray ,opencascade::handle<TDataStd_DeltaOnModificationOfIntArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfIntArray"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TDataStd_DeltaOnModificationOfIntArray::*)() ) static_cast<void (TDataStd_DeltaOnModificationOfIntArray::*)() >(&TDataStd_DeltaOnModificationOfIntArray::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfIntArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfIntArray::*)() const>(&TDataStd_DeltaOnModificationOfIntArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_DeltaOnModificationOfIntArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfIntPackedMap ,opencascade::handle<TDataStd_DeltaOnModificationOfIntPackedMap> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfIntPackedMap"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TDataStd_DeltaOnModificationOfIntPackedMap::*)() ) static_cast<void (TDataStd_DeltaOnModificationOfIntPackedMap::*)() >(&TDataStd_DeltaOnModificationOfIntPackedMap::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfIntPackedMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfIntPackedMap::*)() const>(&TDataStd_DeltaOnModificationOfIntPackedMap::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_DeltaOnModificationOfIntPackedMap::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfRealArray ,opencascade::handle<TDataStd_DeltaOnModificationOfRealArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfRealArray"))
    // constructors
    // custom constructors
    // methods
        .def("Apply",
             (void (TDataStd_DeltaOnModificationOfRealArray::*)() ) static_cast<void (TDataStd_DeltaOnModificationOfRealArray::*)() >(&TDataStd_DeltaOnModificationOfRealArray::Apply),
             R"#(Applies the delta to the attribute.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfRealArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_DeltaOnModificationOfRealArray::*)() const>(&TDataStd_DeltaOnModificationOfRealArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_DeltaOnModificationOfRealArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Directory ,opencascade::handle<TDataStd_Directory> , TDF_Attribute>>(m.attr("TDataStd_Directory"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_Directory::*)() const) static_cast<const Standard_GUID & (TDataStd_Directory::*)() const>(&TDataStd_Directory::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Directory::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Directory::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Directory::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Directory::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Directory::*)() const>(&TDataStd_Directory::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Directory::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Directory::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Directory::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("References",
             (void (TDataStd_Directory::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataStd_Directory::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataStd_Directory::References),
             R"#(None)#"  , py::arg("DS"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Directory::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Directory::*)( std::ostream & ) const>(&TDataStd_Directory::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Directory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Directory::*)() const>(&TDataStd_Directory::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Directory::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Expression ,opencascade::handle<TDataStd_Expression> , TDF_Attribute>>(m.attr("TDataStd_Expression"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_Expression::*)() const) static_cast<const Standard_GUID & (TDataStd_Expression::*)() const>(&TDataStd_Expression::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Expression::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Expression::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Expression::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Expression::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Expression::*)() const>(&TDataStd_Expression::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Expression::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Expression::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Expression::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Expression::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Expression::*)( std::ostream & ) const>(&TDataStd_Expression::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Expression::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Expression::*)() const>(&TDataStd_Expression::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Expression::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ExtStringArray ,opencascade::handle<TDataStd_ExtStringArray> , TDF_Attribute>>(m.attr("TDataStd_ExtStringArray"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_ExtStringArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::DynamicType),
             R"#(None)#" )
        .def("SetID",
             (void (TDataStd_ExtStringArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ExtStringArray::*)( const Standard_GUID & ) >(&TDataStd_ExtStringArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ExtStringArray::*)() ) static_cast<void (TDataStd_ExtStringArray::*)() >(&TDataStd_ExtStringArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Array",
             (const opencascade::handle<TColStd_HArray1OfExtendedString> & (TDataStd_ExtStringArray::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfExtendedString> & (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::Array),
             R"#(Return the inner array of the ExtStringArray attribute)#" )
        .def("GetDelta",
             (Standard_Boolean (TDataStd_ExtStringArray::*)() const) static_cast<Standard_Boolean (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::GetDelta),
             R"#(None)#" )
        .def("SetDelta",
             (void (TDataStd_ExtStringArray::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_ExtStringArray::*)( const Standard_Boolean ) >(&TDataStd_ExtStringArray::SetDelta),
             R"#(for internal use only!)#"  , py::arg("isDelta"))
        .def("ID",
             (const Standard_GUID & (TDataStd_ExtStringArray::*)() const) static_cast<const Standard_GUID & (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_ExtStringArray::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_ExtStringArray::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_ExtStringArray::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_ExtStringArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_ExtStringArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_ExtStringArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_ExtStringArray::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_ExtStringArray::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_ExtStringArray::*)( std::ostream & ) const>(&TDataStd_ExtStringArray::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DeltaOnModification",
             (opencascade::handle<TDF_DeltaOnModification> (TDataStd_ExtStringArray::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<opencascade::handle<TDF_DeltaOnModification> (TDataStd_ExtStringArray::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDataStd_ExtStringArray::DeltaOnModification),
             R"#(Makes a DeltaOnModification between <me> and <anOldAttribute>.)#"  , py::arg("anOldAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ExtStringArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ExtStringList ,opencascade::handle<TDataStd_ExtStringList> , TDF_Attribute>>(m.attr("TDataStd_ExtStringList"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_ExtStringList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ExtStringList::*)( const Standard_GUID & ) >(&TDataStd_ExtStringList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ExtStringList::*)() ) static_cast<void (TDataStd_ExtStringList::*)() >(&TDataStd_ExtStringList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_ExtStringList::*)() const) static_cast<const Standard_GUID & (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_ExtStringList::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_ExtStringList::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_ExtStringList::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_ExtStringList::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_ExtStringList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_ExtStringList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_ExtStringList::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_ExtStringList::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_ExtStringList::*)( std::ostream & ) const>(&TDataStd_ExtStringList::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_ExtStringList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ExtStringList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringByte ,opencascade::handle<TDataStd_HDataMapOfStringByte> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringByte"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringByte::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringByte::*)() const>(&TDataStd_HDataMapOfStringByte::DynamicType),
             R"#(None)#" )
        .def("Map",
             (const TDataStd_DataMapOfStringByte & (TDataStd_HDataMapOfStringByte::*)() const) static_cast<const TDataStd_DataMapOfStringByte & (TDataStd_HDataMapOfStringByte::*)() const>(&TDataStd_HDataMapOfStringByte::Map),
             R"#(None)#" )
        .def("ChangeMap",
             (TDataStd_DataMapOfStringByte & (TDataStd_HDataMapOfStringByte::*)() ) static_cast<TDataStd_DataMapOfStringByte & (TDataStd_HDataMapOfStringByte::*)() >(&TDataStd_HDataMapOfStringByte::ChangeMap),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_HDataMapOfStringByte::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringHArray1OfInteger ,opencascade::handle<TDataStd_HDataMapOfStringHArray1OfInteger> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringHArray1OfInteger"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringHArray1OfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringHArray1OfInteger::*)() const>(&TDataStd_HDataMapOfStringHArray1OfInteger::DynamicType),
             R"#(None)#" )
        .def("Map",
             (const TDataStd_DataMapOfStringHArray1OfInteger & (TDataStd_HDataMapOfStringHArray1OfInteger::*)() const) static_cast<const TDataStd_DataMapOfStringHArray1OfInteger & (TDataStd_HDataMapOfStringHArray1OfInteger::*)() const>(&TDataStd_HDataMapOfStringHArray1OfInteger::Map),
             R"#(None)#" )
        .def("ChangeMap",
             (TDataStd_DataMapOfStringHArray1OfInteger & (TDataStd_HDataMapOfStringHArray1OfInteger::*)() ) static_cast<TDataStd_DataMapOfStringHArray1OfInteger & (TDataStd_HDataMapOfStringHArray1OfInteger::*)() >(&TDataStd_HDataMapOfStringHArray1OfInteger::ChangeMap),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_HDataMapOfStringHArray1OfInteger::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringHArray1OfReal ,opencascade::handle<TDataStd_HDataMapOfStringHArray1OfReal> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringHArray1OfReal"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringHArray1OfReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringHArray1OfReal::*)() const>(&TDataStd_HDataMapOfStringHArray1OfReal::DynamicType),
             R"#(None)#" )
        .def("Map",
             (const TDataStd_DataMapOfStringHArray1OfReal & (TDataStd_HDataMapOfStringHArray1OfReal::*)() const) static_cast<const TDataStd_DataMapOfStringHArray1OfReal & (TDataStd_HDataMapOfStringHArray1OfReal::*)() const>(&TDataStd_HDataMapOfStringHArray1OfReal::Map),
             R"#(None)#" )
        .def("ChangeMap",
             (TDataStd_DataMapOfStringHArray1OfReal & (TDataStd_HDataMapOfStringHArray1OfReal::*)() ) static_cast<TDataStd_DataMapOfStringHArray1OfReal & (TDataStd_HDataMapOfStringHArray1OfReal::*)() >(&TDataStd_HDataMapOfStringHArray1OfReal::ChangeMap),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_HDataMapOfStringHArray1OfReal::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringInteger ,opencascade::handle<TDataStd_HDataMapOfStringInteger> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringInteger"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringInteger::*)() const>(&TDataStd_HDataMapOfStringInteger::DynamicType),
             R"#(None)#" )
        .def("Map",
             (const TColStd_DataMapOfStringInteger & (TDataStd_HDataMapOfStringInteger::*)() const) static_cast<const TColStd_DataMapOfStringInteger & (TDataStd_HDataMapOfStringInteger::*)() const>(&TDataStd_HDataMapOfStringInteger::Map),
             R"#(None)#" )
        .def("ChangeMap",
             (TColStd_DataMapOfStringInteger & (TDataStd_HDataMapOfStringInteger::*)() ) static_cast<TColStd_DataMapOfStringInteger & (TDataStd_HDataMapOfStringInteger::*)() >(&TDataStd_HDataMapOfStringInteger::ChangeMap),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_HDataMapOfStringInteger::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringReal ,opencascade::handle<TDataStd_HDataMapOfStringReal> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringReal"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringReal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringReal::*)() const>(&TDataStd_HDataMapOfStringReal::DynamicType),
             R"#(None)#" )
        .def("Map",
             (const TDataStd_DataMapOfStringReal & (TDataStd_HDataMapOfStringReal::*)() const) static_cast<const TDataStd_DataMapOfStringReal & (TDataStd_HDataMapOfStringReal::*)() const>(&TDataStd_HDataMapOfStringReal::Map),
             R"#(None)#" )
        .def("ChangeMap",
             (TDataStd_DataMapOfStringReal & (TDataStd_HDataMapOfStringReal::*)() ) static_cast<TDataStd_DataMapOfStringReal & (TDataStd_HDataMapOfStringReal::*)() >(&TDataStd_HDataMapOfStringReal::ChangeMap),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_HDataMapOfStringReal::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringString ,opencascade::handle<TDataStd_HDataMapOfStringString> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringString"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringString::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_HDataMapOfStringString::*)() const>(&TDataStd_HDataMapOfStringString::DynamicType),
             R"#(None)#" )
        .def("Map",
             (const TDataStd_DataMapOfStringString & (TDataStd_HDataMapOfStringString::*)() const) static_cast<const TDataStd_DataMapOfStringString & (TDataStd_HDataMapOfStringString::*)() const>(&TDataStd_HDataMapOfStringString::Map),
             R"#(None)#" )
        .def("ChangeMap",
             (TDataStd_DataMapOfStringString & (TDataStd_HDataMapOfStringString::*)() ) static_cast<TDataStd_DataMapOfStringString & (TDataStd_HDataMapOfStringString::*)() >(&TDataStd_HDataMapOfStringString::ChangeMap),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_HDataMapOfStringString::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HLabelArray1 ,opencascade::handle<TDataStd_HLabelArray1> , TDataStd_LabelArray1, Standard_Transient>>(m.attr("TDataStd_HLabelArray1"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const TDF_Label & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TDF_Label> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TDataStd_LabelArray1 & (TDataStd_HLabelArray1::*)() const) static_cast<const TDataStd_LabelArray1 & (TDataStd_HLabelArray1::*)() const>(&TDataStd_HLabelArray1::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TDataStd_LabelArray1 & (TDataStd_HLabelArray1::*)() ) static_cast<TDataStd_LabelArray1 & (TDataStd_HLabelArray1::*)() >(&TDataStd_HLabelArray1::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_HLabelArray1::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_HLabelArray1::*)() const>(&TDataStd_HLabelArray1::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_HLabelArray1::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_HLabelArray1::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_IntPackedMap ,opencascade::handle<TDataStd_IntPackedMap> , TDF_Attribute>>(m.attr("TDataStd_IntPackedMap"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_IntPackedMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::DynamicType),
             R"#(None)#" )
        .def("GetMap",
             (const TColStd_PackedMapOfInteger & (TDataStd_IntPackedMap::*)() const) static_cast<const TColStd_PackedMapOfInteger & (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::GetMap),
             R"#(None)#" )
        .def("GetHMap",
             (const opencascade::handle<TColStd_HPackedMapOfInteger> & (TDataStd_IntPackedMap::*)() const) static_cast<const opencascade::handle<TColStd_HPackedMapOfInteger> & (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::GetHMap),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TDataStd_IntPackedMap::*)() const) static_cast<Standard_Integer (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::Extent),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (TDataStd_IntPackedMap::*)() const) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::IsEmpty),
             R"#(None)#" )
        .def("GetDelta",
             (Standard_Boolean (TDataStd_IntPackedMap::*)() const) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::GetDelta),
             R"#(None)#" )
        .def("SetDelta",
             (void (TDataStd_IntPackedMap::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_IntPackedMap::*)( const Standard_Boolean ) >(&TDataStd_IntPackedMap::SetDelta),
             R"#(for internal use only!)#"  , py::arg("isDelta"))
        .def("ID",
             (const Standard_GUID & (TDataStd_IntPackedMap::*)() const) static_cast<const Standard_GUID & (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_IntPackedMap::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_IntPackedMap::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_IntPackedMap::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_IntPackedMap::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_IntPackedMap::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_IntPackedMap::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_IntPackedMap::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_IntPackedMap::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_IntPackedMap::*)( std::ostream & ) const>(&TDataStd_IntPackedMap::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DeltaOnModification",
             (opencascade::handle<TDF_DeltaOnModification> (TDataStd_IntPackedMap::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<opencascade::handle<TDF_DeltaOnModification> (TDataStd_IntPackedMap::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDataStd_IntPackedMap::DeltaOnModification),
             R"#(Makes a DeltaOnModification between <me> and <anOldAttribute>.)#"  , py::arg("anOldAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_IntPackedMap::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Integer ,opencascade::handle<TDataStd_Integer> , TDF_Attribute>>(m.attr("TDataStd_Integer"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_Integer::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_Integer::*)( const Standard_GUID & ) >(&TDataStd_Integer::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_Integer::*)() ) static_cast<void (TDataStd_Integer::*)() >(&TDataStd_Integer::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_Integer::*)() const) static_cast<const Standard_GUID & (TDataStd_Integer::*)() const>(&TDataStd_Integer::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Integer::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Integer::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Integer::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Integer::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Integer::*)() const>(&TDataStd_Integer::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Integer::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Integer::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Integer::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Integer::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Integer::*)( std::ostream & ) const>(&TDataStd_Integer::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Integer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Integer::*)() const>(&TDataStd_Integer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Integer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_IntegerArray ,opencascade::handle<TDataStd_IntegerArray> , TDF_Attribute>>(m.attr("TDataStd_IntegerArray"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_IntegerArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::DynamicType),
             R"#(None)#" )
        .def("SetID",
             (void (TDataStd_IntegerArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_IntegerArray::*)( const Standard_GUID & ) >(&TDataStd_IntegerArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_IntegerArray::*)() ) static_cast<void (TDataStd_IntegerArray::*)() >(&TDataStd_IntegerArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Array",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (TDataStd_IntegerArray::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::Array),
             R"#(Return the inner array of the IntegerArray attribute)#" )
        .def("GetDelta",
             (Standard_Boolean (TDataStd_IntegerArray::*)() const) static_cast<Standard_Boolean (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::GetDelta),
             R"#(None)#" )
        .def("SetDelta",
             (void (TDataStd_IntegerArray::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_IntegerArray::*)( const Standard_Boolean ) >(&TDataStd_IntegerArray::SetDelta),
             R"#(for internal use only!)#"  , py::arg("isDelta"))
        .def("ID",
             (const Standard_GUID & (TDataStd_IntegerArray::*)() const) static_cast<const Standard_GUID & (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_IntegerArray::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_IntegerArray::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_IntegerArray::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_IntegerArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_IntegerArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_IntegerArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_IntegerArray::Paste),
             R"#(Note. Uses inside ChangeArray() method)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_IntegerArray::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_IntegerArray::*)( std::ostream & ) const>(&TDataStd_IntegerArray::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DeltaOnModification",
             (opencascade::handle<TDF_DeltaOnModification> (TDataStd_IntegerArray::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<opencascade::handle<TDF_DeltaOnModification> (TDataStd_IntegerArray::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDataStd_IntegerArray::DeltaOnModification),
             R"#(Makes a DeltaOnModification between <me> and <anOldAttribute>.)#"  , py::arg("anOldAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_IntegerArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_IntegerList ,opencascade::handle<TDataStd_IntegerList> , TDF_Attribute>>(m.attr("TDataStd_IntegerList"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_IntegerList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_IntegerList::*)( const Standard_GUID & ) >(&TDataStd_IntegerList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_IntegerList::*)() ) static_cast<void (TDataStd_IntegerList::*)() >(&TDataStd_IntegerList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_IntegerList::*)() const) static_cast<const Standard_GUID & (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_IntegerList::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_IntegerList::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_IntegerList::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_IntegerList::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_IntegerList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_IntegerList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_IntegerList::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_IntegerList::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_IntegerList::*)( std::ostream & ) const>(&TDataStd_IntegerList::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_IntegerList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_IntegerList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Name ,opencascade::handle<TDataStd_Name> , TDF_Attribute>>(m.attr("TDataStd_Name"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_Name::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_Name::*)( const Standard_GUID & ) >(&TDataStd_Name::SetID),
             R"#(Sets the explicit user defined GUID to the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_Name::*)() ) static_cast<void (TDataStd_Name::*)() >(&TDataStd_Name::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_Name::*)() const) static_cast<const Standard_GUID & (TDataStd_Name::*)() const>(&TDataStd_Name::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Name::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Name::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Name::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Name::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Name::*)() const>(&TDataStd_Name::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Name::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Name::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Name::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Name::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Name::*)( std::ostream & ) const>(&TDataStd_Name::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Name::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Name::*)() const>(&TDataStd_Name::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Name::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_NamedData ,opencascade::handle<TDataStd_NamedData> , TDF_Attribute>>(m.attr("TDataStd_NamedData"))
    // constructors
    // custom constructors
    // methods
        .def("HasIntegers",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasIntegers),
             R"#(Returns true if at least one named integer value is kept in the attribute.)#" )
        .def("HasReals",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasReals),
             R"#(Returns true if at least one named real value is kept in the attribute.)#" )
        .def("HasStrings",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasStrings),
             R"#(Returns true if there are some named strings in the attribute.)#" )
        .def("HasBytes",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasBytes),
             R"#(Returns true if there are some named bytes in the attribute.)#" )
        .def("HasArraysOfIntegers",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasArraysOfIntegers),
             R"#(Returns true if there are some named arrays of integer values in the attribute.)#" )
        .def("HasArraysOfReals",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasArraysOfReals),
             R"#(Returns true if there are some named arrays of real values in the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_NamedData::*)() const) static_cast<const Standard_GUID & (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_NamedData::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_NamedData::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_NamedData::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_NamedData::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_NamedData::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_NamedData::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_NamedData::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_NamedData::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_NamedData::*)( std::ostream & ) const>(&TDataStd_NamedData::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_NamedData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::DynamicType),
             R"#(None)#" )
        .def("HasIntegers",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasIntegers),
             R"#(Returns true if at least one named integer value is kept in the attribute.)#" )
        .def("HasReals",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasReals),
             R"#(Returns true if at least one named real value is kept in the attribute.)#" )
        .def("HasStrings",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasStrings),
             R"#(Returns true if there are some named strings in the attribute.)#" )
        .def("HasBytes",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasBytes),
             R"#(Returns true if there are some named bytes in the attribute.)#" )
        .def("HasArraysOfIntegers",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasArraysOfIntegers),
             R"#(Returns true if there are some named arrays of integer values in the attribute.)#" )
        .def("HasArraysOfReals",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasArraysOfReals),
             R"#(Returns true if there are some named arrays of real values in the attribute.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_NamedData::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_NoteBook ,opencascade::handle<TDataStd_NoteBook> , TDF_Attribute>>(m.attr("TDataStd_NoteBook"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_NoteBook::*)() const) static_cast<const Standard_GUID & (TDataStd_NoteBook::*)() const>(&TDataStd_NoteBook::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_NoteBook::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_NoteBook::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_NoteBook::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_NoteBook::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_NoteBook::*)() const>(&TDataStd_NoteBook::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_NoteBook::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_NoteBook::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_NoteBook::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_NoteBook::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_NoteBook::*)( std::ostream & ) const>(&TDataStd_NoteBook::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_NoteBook::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_NoteBook::*)() const>(&TDataStd_NoteBook::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_NoteBook::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Real ,opencascade::handle<TDataStd_Real> , TDF_Attribute>>(m.attr("TDataStd_Real"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_Real::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_Real::*)( const Standard_GUID & ) >(&TDataStd_Real::SetID),
             R"#(Sets the explicit GUID for the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_Real::*)() ) static_cast<void (TDataStd_Real::*)() >(&TDataStd_Real::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_Real::*)() const) static_cast<const Standard_GUID & (TDataStd_Real::*)() const>(&TDataStd_Real::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Real::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Real::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Real::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Real::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Real::*)() const>(&TDataStd_Real::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Real::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Real::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Real::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Real::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Real::*)( std::ostream & ) const>(&TDataStd_Real::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Real::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Real::*)() const>(&TDataStd_Real::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Real::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_RealArray ,opencascade::handle<TDataStd_RealArray> , TDF_Attribute>>(m.attr("TDataStd_RealArray"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_RealArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::DynamicType),
             R"#(None)#" )
        .def("SetID",
             (void (TDataStd_RealArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_RealArray::*)( const Standard_GUID & ) >(&TDataStd_RealArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_RealArray::*)() ) static_cast<void (TDataStd_RealArray::*)() >(&TDataStd_RealArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Array",
             (const opencascade::handle<TColStd_HArray1OfReal> & (TDataStd_RealArray::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::Array),
             R"#(Returns the handle of this array of reals.)#" )
        .def("GetDelta",
             (Standard_Boolean (TDataStd_RealArray::*)() const) static_cast<Standard_Boolean (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::GetDelta),
             R"#(None)#" )
        .def("SetDelta",
             (void (TDataStd_RealArray::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_RealArray::*)( const Standard_Boolean ) >(&TDataStd_RealArray::SetDelta),
             R"#(for internal use only!)#"  , py::arg("isDelta"))
        .def("ID",
             (const Standard_GUID & (TDataStd_RealArray::*)() const) static_cast<const Standard_GUID & (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_RealArray::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_RealArray::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_RealArray::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_RealArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_RealArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_RealArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_RealArray::Paste),
             R"#(Note. Uses inside ChangeArray() method)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_RealArray::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_RealArray::*)( std::ostream & ) const>(&TDataStd_RealArray::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DeltaOnModification",
             (opencascade::handle<TDF_DeltaOnModification> (TDataStd_RealArray::*)( const opencascade::handle<TDF_Attribute> & ) const) static_cast<opencascade::handle<TDF_DeltaOnModification> (TDataStd_RealArray::*)( const opencascade::handle<TDF_Attribute> & ) const>(&TDataStd_RealArray::DeltaOnModification),
             R"#(Makes a DeltaOnModification between <me> and <anOldAttribute>.)#"  , py::arg("anOldAttribute"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_RealArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_RealList ,opencascade::handle<TDataStd_RealList> , TDF_Attribute>>(m.attr("TDataStd_RealList"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_RealList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_RealList::*)( const Standard_GUID & ) >(&TDataStd_RealList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_RealList::*)() ) static_cast<void (TDataStd_RealList::*)() >(&TDataStd_RealList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_RealList::*)() const) static_cast<const Standard_GUID & (TDataStd_RealList::*)() const>(&TDataStd_RealList::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_RealList::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_RealList::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_RealList::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_RealList::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_RealList::*)() const>(&TDataStd_RealList::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_RealList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_RealList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_RealList::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_RealList::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_RealList::*)( std::ostream & ) const>(&TDataStd_RealList::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_RealList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_RealList::*)() const>(&TDataStd_RealList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_RealList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ReferenceArray ,opencascade::handle<TDataStd_ReferenceArray> , TDF_Attribute>>(m.attr("TDataStd_ReferenceArray"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_ReferenceArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ReferenceArray::*)( const Standard_GUID & ) >(&TDataStd_ReferenceArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ReferenceArray::*)() ) static_cast<void (TDataStd_ReferenceArray::*)() >(&TDataStd_ReferenceArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_ReferenceArray::*)() const) static_cast<const Standard_GUID & (TDataStd_ReferenceArray::*)() const>(&TDataStd_ReferenceArray::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_ReferenceArray::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_ReferenceArray::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_ReferenceArray::*)() const>(&TDataStd_ReferenceArray::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_ReferenceArray::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("References",
             (void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataStd_ReferenceArray::References),
             R"#(None)#"  , py::arg("DS"))
        .def("Dump",
             (Standard_OStream & (TDataStd_ReferenceArray::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_ReferenceArray::*)( std::ostream & ) const>(&TDataStd_ReferenceArray::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_ReferenceArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_ReferenceArray::*)() const>(&TDataStd_ReferenceArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ReferenceArray::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ReferenceList ,opencascade::handle<TDataStd_ReferenceList> , TDF_Attribute>>(m.attr("TDataStd_ReferenceList"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_ReferenceList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ReferenceList::*)( const Standard_GUID & ) >(&TDataStd_ReferenceList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ReferenceList::*)() ) static_cast<void (TDataStd_ReferenceList::*)() >(&TDataStd_ReferenceList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("ID",
             (const Standard_GUID & (TDataStd_ReferenceList::*)() const) static_cast<const Standard_GUID & (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_ReferenceList::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_ReferenceList::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_ReferenceList::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_ReferenceList::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_ReferenceList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_ReferenceList::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_ReferenceList::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("References",
             (void (TDataStd_ReferenceList::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataStd_ReferenceList::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataStd_ReferenceList::References),
             R"#(None)#"  , py::arg("DS"))
        .def("Dump",
             (Standard_OStream & (TDataStd_ReferenceList::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_ReferenceList::*)( std::ostream & ) const>(&TDataStd_ReferenceList::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_ReferenceList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ReferenceList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Relation ,opencascade::handle<TDataStd_Relation> , TDF_Attribute>>(m.attr("TDataStd_Relation"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_Relation::*)() const) static_cast<const Standard_GUID & (TDataStd_Relation::*)() const>(&TDataStd_Relation::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Relation::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Relation::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Relation::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Relation::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Relation::*)() const>(&TDataStd_Relation::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Relation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Relation::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Relation::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Relation::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Relation::*)( std::ostream & ) const>(&TDataStd_Relation::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Relation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Relation::*)() const>(&TDataStd_Relation::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Relation::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Tick ,opencascade::handle<TDataStd_Tick> , TDF_Attribute>>(m.attr("TDataStd_Tick"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_Tick::*)() const) static_cast<const Standard_GUID & (TDataStd_Tick::*)() const>(&TDataStd_Tick::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Tick::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Tick::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Tick::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Tick::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Tick::*)() const>(&TDataStd_Tick::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Tick::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Tick::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Tick::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Tick::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Tick::*)( std::ostream & ) const>(&TDataStd_Tick::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Tick::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Tick::*)() const>(&TDataStd_Tick::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Tick::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_TreeNode ,opencascade::handle<TDataStd_TreeNode> , TDF_Attribute>>(m.attr("TDataStd_TreeNode"))
    // constructors
    // custom constructors
    // methods
        .def("HasFather",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasFather),
             R"#(Returns true if this tree node attribute has a father tree node.)#" )
        .def("HasNext",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasNext),
             R"#(Returns true if this tree node attribute has a next tree node.)#" )
        .def("HasPrevious",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasPrevious),
             R"#(Returns true if this tree node attribute has a previous tree node.)#" )
        .def("HasFirst",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasFirst),
             R"#(Returns true if this tree node attribute has a first child tree node.)#" )
        .def("HasLast",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasLast),
             R"#(Returns true if this tree node attribute has a last child tree node.)#" )
        .def("AfterAddition",
             (void (TDataStd_TreeNode::*)() ) static_cast<void (TDataStd_TreeNode::*)() >(&TDataStd_TreeNode::AfterAddition),
             R"#(Connect the TreeNode to its father child list)#" )
        .def("BeforeForget",
             (void (TDataStd_TreeNode::*)() ) static_cast<void (TDataStd_TreeNode::*)() >(&TDataStd_TreeNode::BeforeForget),
             R"#(Disconnect the TreeNode from its Father child list)#" )
        .def("AfterResume",
             (void (TDataStd_TreeNode::*)() ) static_cast<void (TDataStd_TreeNode::*)() >(&TDataStd_TreeNode::AfterResume),
             R"#(Reconnect the TreeNode to its father child list.)#" )
        .def("BeforeUndo",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TDataStd_TreeNode::BeforeUndo),
             R"#(Disconnect the TreeNode, if necessary.)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AfterUndo",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDF_AttributeDelta> & , const Standard_Boolean ) >(&TDataStd_TreeNode::AfterUndo),
             R"#(Reconnect the TreeNode, if necessary. Implementation of Attribute methods: ===================================)#"  , py::arg("anAttDelta"),  py::arg("forceIt")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ID",
             (const Standard_GUID & (TDataStd_TreeNode::*)() const) static_cast<const Standard_GUID & (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::ID),
             R"#(Returns the tree ID (default or explicit one depending onthe Set method used).)#" )
        .def("Restore",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_TreeNode::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("Paste",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_TreeNode::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_TreeNode::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::NewEmpty),
             R"#(None)#" )
        .def("References",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataStd_TreeNode::References),
             R"#(None)#"  , py::arg("aDataSet"))
        .def("Dump",
             (Standard_OStream & (TDataStd_TreeNode::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_TreeNode::*)( std::ostream & ) const>(&TDataStd_TreeNode::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_TreeNode::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::DynamicType),
             R"#(None)#" )
        .def("HasFather",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasFather),
             R"#(Returns true if this tree node attribute has a father tree node.)#" )
        .def("HasNext",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasNext),
             R"#(Returns true if this tree node attribute has a next tree node.)#" )
        .def("HasPrevious",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasPrevious),
             R"#(Returns true if this tree node attribute has a previous tree node.)#" )
        .def("HasFirst",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasFirst),
             R"#(Returns true if this tree node attribute has a first child tree node.)#" )
        .def("HasLast",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasLast),
             R"#(Returns true if this tree node attribute has a last child tree node.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_TreeNode::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_UAttribute ,opencascade::handle<TDataStd_UAttribute> , TDF_Attribute>>(m.attr("TDataStd_UAttribute"))
    // constructors
    // custom constructors
    // methods
        .def("SetID",
             (void (TDataStd_UAttribute::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_UAttribute::*)( const Standard_GUID & ) >(&TDataStd_UAttribute::SetID),
             R"#(None)#"  , py::arg("LocalID"))
        .def("ID",
             (const Standard_GUID & (TDataStd_UAttribute::*)() const) static_cast<const Standard_GUID & (TDataStd_UAttribute::*)() const>(&TDataStd_UAttribute::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_UAttribute::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_UAttribute::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_UAttribute::Restore),
             R"#(None)#"  , py::arg("with"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_UAttribute::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_UAttribute::*)() const>(&TDataStd_UAttribute::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_UAttribute::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_UAttribute::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_UAttribute::Paste),
             R"#(None)#"  , py::arg("into"),  py::arg("RT"))
        .def("References",
             (void (TDataStd_UAttribute::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataStd_UAttribute::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataStd_UAttribute::References),
             R"#(None)#"  , py::arg("DS"))
        .def("Dump",
             (Standard_OStream & (TDataStd_UAttribute::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_UAttribute::*)( std::ostream & ) const>(&TDataStd_UAttribute::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_UAttribute::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_UAttribute::*)() const>(&TDataStd_UAttribute::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_UAttribute::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Variable ,opencascade::handle<TDataStd_Variable> , TDF_Attribute>>(m.attr("TDataStd_Variable"))
    // constructors
    // custom constructors
    // methods
        .def("ID",
             (const Standard_GUID & (TDataStd_Variable::*)() const) static_cast<const Standard_GUID & (TDataStd_Variable::*)() const>(&TDataStd_Variable::ID),
             R"#(None)#" )
        .def("Restore",
             (void (TDataStd_Variable::*)( const opencascade::handle<TDF_Attribute> & ) ) static_cast<void (TDataStd_Variable::*)( const opencascade::handle<TDF_Attribute> & ) >(&TDataStd_Variable::Restore),
             R"#(None)#"  , py::arg("With"))
        .def("NewEmpty",
             (opencascade::handle<TDF_Attribute> (TDataStd_Variable::*)() const) static_cast<opencascade::handle<TDF_Attribute> (TDataStd_Variable::*)() const>(&TDataStd_Variable::NewEmpty),
             R"#(None)#" )
        .def("Paste",
             (void (TDataStd_Variable::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const) static_cast<void (TDataStd_Variable::*)( const opencascade::handle<TDF_Attribute> & , const opencascade::handle<TDF_RelocationTable> & ) const>(&TDataStd_Variable::Paste),
             R"#(None)#"  , py::arg("Into"),  py::arg("RT"))
        .def("References",
             (void (TDataStd_Variable::*)( const opencascade::handle<TDF_DataSet> & ) const) static_cast<void (TDataStd_Variable::*)( const opencascade::handle<TDF_DataSet> & ) const>(&TDataStd_Variable::References),
             R"#(to export reference to the associated Name attribute.)#"  , py::arg("DS"))
        .def("Dump",
             (Standard_OStream & (TDataStd_Variable::*)( std::ostream & ) const) static_cast<Standard_OStream & (TDataStd_Variable::*)( std::ostream & ) const>(&TDataStd_Variable::Dump),
             R"#(None)#"  , py::arg("anOS"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_Variable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_Variable::*)() const>(&TDataStd_Variable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Variable::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TDataStd_Real.hxx
// ./opencascade/TDataStd_ReferenceList.hxx
// ./opencascade/TDataStd_Directory.hxx
// ./opencascade/TDataStd_ReferenceArray.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfExtStringArray.hxx
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfRealArray.hxx
// ./opencascade/TDataStd_NoteBook.hxx
// ./opencascade/TDataStd_AsciiString.hxx
// ./opencascade/TDataStd_HDataMapOfStringByte.hxx
// ./opencascade/TDataStd_IntPackedMap.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfByteArray.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_ExtStringList.hxx
// ./opencascade/TDataStd_NamedData.hxx
// ./opencascade/TDataStd_PtrTreeNode.hxx
// ./opencascade/TDataStd_Current.hxx
// ./opencascade/TDataStd_UAttribute.hxx
// ./opencascade/TDataStd_RealList.hxx
// ./opencascade/TDataStd_TreeNode.hxx
// ./opencascade/TDataStd_HDataMapOfStringInteger.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfIntPackedMap.hxx
// ./opencascade/TDataStd_ListOfExtendedString.hxx
// ./opencascade/TDataStd_Tick.hxx
// ./opencascade/TDataStd_ChildNodeIterator.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringReal.hxx
// ./opencascade/TDataStd_BooleanList.hxx
// ./opencascade/TDataStd_Expression.hxx
// ./opencascade/TDataStd_ListOfByte.hxx
// ./opencascade/TDataStd_Comment.hxx
// ./opencascade/TDataStd_HDataMapOfStringReal.hxx
// ./opencascade/TDataStd_ByteArray.hxx
// ./opencascade/TDataStd_DataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_RealEnum.hxx
// ./opencascade/TDataStd_LabelArray1.hxx
// ./opencascade/TDataStd_HDataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_DataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd.hxx
// ./opencascade/TDataStd_Integer.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringString.hxx
// ./opencascade/TDataStd_Variable.hxx
// ./opencascade/TDataStd_IntegerArray.hxx
// ./opencascade/TDataStd_BooleanArray.hxx
// ./opencascade/TDataStd_ListIteratorOfListOfByte.hxx
// ./opencascade/TDataStd_HLabelArray1.hxx
// ./opencascade/TDataStd_ListIteratorOfListOfExtendedString.hxx
// ./opencascade/TDataStd_ExtStringArray.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfIntArray.hxx
// ./opencascade/TDataStd_HDataMapOfStringString.hxx
// ./opencascade/TDataStd_DataMapOfStringString.hxx
// ./opencascade/TDataStd_HDataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_RealArray.hxx
// ./opencascade/TDataStd_DataMapOfStringByte.hxx
// ./opencascade/TDataStd_Relation.hxx
// ./opencascade/TDataStd_Name.hxx
// ./opencascade/TDataStd_IntegerList.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringByte.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Real, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringReal");
    register_template_NCollection_List<TCollection_ExtendedString>(m,"TDataStd_ListOfExtendedString");
    register_template_NCollection_List<Standard_Byte>(m,"TDataStd_ListOfByte");
    register_template_NCollection_Array1<TDF_Label>(m,"TDataStd_LabelArray1");
    register_template_NCollection_DataMap<TCollection_ExtendedString, TCollection_ExtendedString, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringString");
    register_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Byte, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringByte");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
