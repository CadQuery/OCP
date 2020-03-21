
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Expression.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfExtStringArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDataStd_ExtStringArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_ChildNodeIterator.hxx>
#include <TDF_Label.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <TDataStd_RealArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfIntArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_ByteArray.hxx>
#include <TDataStd_IntegerArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDataStd_HDataMapOfStringInteger.hxx>
#include <TDataStd_HDataMapOfStringReal.hxx>
#include <TDataStd_HDataMapOfStringString.hxx>
#include <TDataStd_HDataMapOfStringByte.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfInteger.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfReal.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_TreeNode.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDataStd_TreeNode.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Integer.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfByteArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfIntPackedMap.hxx>
#include <Standard_GUID.hxx>
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
#include <TDataStd_DeltaOnModificationOfRealArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>

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
// ./opencascade/TDataStd_DataMapOfStringHArray1OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringHArray1OfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_LabelArray1.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfByte.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfByte.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_ListOfExtendedString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
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
        .def_static("IDList_s",
                    (void (*)( NCollection_List<Standard_GUID> & ) ) static_cast<void (*)( NCollection_List<Standard_GUID> & ) >(&TDataStd::IDList),
                    R"#(Appends to <anIDList> the list of the attributes IDs of this package. CAUTION: <anIDList> is NOT cleared before use.)#"  , py::arg("anIDList"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TDataStd_RealEnum , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TDataStd_RealEnum , std::ostream & ) >(&TDataStd::Print),
                    R"#(Prints the name of the real dimension <DIM> as a String on the Stream <S> and returns <S>.)#"  , py::arg("DIM"),  py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_AsciiString ,opencascade::handle<TDataStd_AsciiString> , TDF_Attribute>>(m.attr("TDataStd_AsciiString"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TDataStd_AsciiString::*)( const TCollection_AsciiString & ) ) static_cast<void (TDataStd_AsciiString::*)( const TCollection_AsciiString & ) >(&TDataStd_AsciiString::Set),
             R"#(None)#"  , py::arg("S"))
        .def("SetID",
             (void (TDataStd_AsciiString::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_AsciiString::*)( const Standard_GUID & ) >(&TDataStd_AsciiString::SetID),
             R"#(Sets the explicit user defined GUID to the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_AsciiString::*)() ) static_cast<void (TDataStd_AsciiString::*)() >(&TDataStd_AsciiString::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Get",
             (const TCollection_AsciiString & (TDataStd_AsciiString::*)() const) static_cast<const TCollection_AsciiString & (TDataStd_AsciiString::*)() const>(&TDataStd_AsciiString::Get),
             R"#(None)#" )
        .def("IsEmpty",
             (Standard_Boolean (TDataStd_AsciiString::*)() const) static_cast<Standard_Boolean (TDataStd_AsciiString::*)() const>(&TDataStd_AsciiString::IsEmpty),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_AsciiString::GetID),
                    R"#(class methods ============= Returns the GUID of the attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_AsciiString> (*)( const TDF_Label & , const TCollection_AsciiString & ) ) static_cast<opencascade::handle<TDataStd_AsciiString> (*)( const TDF_Label & , const TCollection_AsciiString & ) >(&TDataStd_AsciiString::Set),
                    R"#(Finds, or creates an AsciiString attribute and sets the string. the AsciiString attribute is returned. AsciiString methods ===================)#"  , py::arg("label"),  py::arg("string"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_AsciiString> (*)( const TDF_Label & , const Standard_GUID & , const TCollection_AsciiString & ) ) static_cast<opencascade::handle<TDataStd_AsciiString> (*)( const TDF_Label & , const Standard_GUID & , const TCollection_AsciiString & ) >(&TDataStd_AsciiString::Set),
                    R"#(Finds, or creates, an AsciiString attribute with explicit user defined <guid> and sets <string>. The Name attribute is returned.)#"  , py::arg("label"),  py::arg("guid"),  py::arg("string"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_AsciiString::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_AsciiString::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_BooleanArray ,opencascade::handle<TDataStd_BooleanArray> , TDF_Attribute>>(m.attr("TDataStd_BooleanArray"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (TDataStd_BooleanArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TDataStd_BooleanArray::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_BooleanArray::Init),
             R"#(Initialize the inner array with bounds from <lower> to <upper>)#"  , py::arg("lower"),  py::arg("upper"))
        .def("SetValue",
             (void (TDataStd_BooleanArray::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TDataStd_BooleanArray::*)( const Standard_Integer , const Standard_Boolean ) >(&TDataStd_BooleanArray::SetValue),
             R"#(Sets the <Index>th element of the array to <Value> OutOfRange exception is raised if <Index> doesn't respect Lower and Upper bounds of the internal array.)#"  , py::arg("index"),  py::arg("value"))
        .def("SetID",
             (void (TDataStd_BooleanArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_BooleanArray::*)( const Standard_GUID & ) >(&TDataStd_BooleanArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_BooleanArray::*)() ) static_cast<void (TDataStd_BooleanArray::*)() >(&TDataStd_BooleanArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Value",
             (Standard_Boolean (TDataStd_BooleanArray::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TDataStd_BooleanArray::*)( const Standard_Integer ) const>(&TDataStd_BooleanArray::Value),
             R"#(Return the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("Lower",
             (Standard_Integer (TDataStd_BooleanArray::*)() const) static_cast<Standard_Integer (TDataStd_BooleanArray::*)() const>(&TDataStd_BooleanArray::Lower),
             R"#(Returns the lower boundary of the array.)#" )
        .def("Upper",
             (Standard_Integer (TDataStd_BooleanArray::*)() const) static_cast<Standard_Integer (TDataStd_BooleanArray::*)() const>(&TDataStd_BooleanArray::Upper),
             R"#(Returns the upper boundary of the array.)#" )
        .def("Length",
             (Standard_Integer (TDataStd_BooleanArray::*)() const) static_cast<Standard_Integer (TDataStd_BooleanArray::*)() const>(&TDataStd_BooleanArray::Length),
             R"#(Returns the number of elements in the array.)#" )
        .def("InternalArray",
             (const opencascade::handle<TColStd_HArray1OfByte> & (TDataStd_BooleanArray::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfByte> & (TDataStd_BooleanArray::*)() const>(&TDataStd_BooleanArray::InternalArray),
             R"#(None)#" )
        .def("SetInternalArray",
             (void (TDataStd_BooleanArray::*)( const opencascade::handle<TColStd_HArray1OfByte> & ) ) static_cast<void (TDataStd_BooleanArray::*)( const opencascade::handle<TColStd_HArray1OfByte> & ) >(&TDataStd_BooleanArray::SetInternalArray),
             R"#(None)#"  , py::arg("values"))
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_BooleanArray::GetID),
                    R"#(Static methods ============== Returns an ID for array.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_BooleanArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer ) ) static_cast<opencascade::handle<TDataStd_BooleanArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer ) >(&TDataStd_BooleanArray::Set),
                    R"#(Finds or creates an attribute with internal boolean array.)#"  , py::arg("label"),  py::arg("lower"),  py::arg("upper"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_BooleanArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer ) ) static_cast<opencascade::handle<TDataStd_BooleanArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer ) >(&TDataStd_BooleanArray::Set),
                    R"#(Finds or creates an attribute with the array using explicit user defined <guid>.)#"  , py::arg("label"),  py::arg("theGuid"),  py::arg("lower"),  py::arg("upper"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_BooleanArray::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_BooleanArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_BooleanList ,opencascade::handle<TDataStd_BooleanList> , TDF_Attribute>>(m.attr("TDataStd_BooleanList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TDataStd_BooleanList::*)() const) static_cast<Standard_Boolean (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::IsEmpty),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TDataStd_BooleanList::*)() const) static_cast<Standard_Integer (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::Extent),
             R"#(None)#" )
        .def("Prepend",
             (void (TDataStd_BooleanList::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_BooleanList::*)( const Standard_Boolean ) >(&TDataStd_BooleanList::Prepend),
             R"#(None)#"  , py::arg("value"))
        .def("Append",
             (void (TDataStd_BooleanList::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_BooleanList::*)( const Standard_Boolean ) >(&TDataStd_BooleanList::Append),
             R"#(None)#"  , py::arg("value"))
        .def("Clear",
             (void (TDataStd_BooleanList::*)() ) static_cast<void (TDataStd_BooleanList::*)() >(&TDataStd_BooleanList::Clear),
             R"#(None)#" )
        .def("First",
             (Standard_Boolean (TDataStd_BooleanList::*)() const) static_cast<Standard_Boolean (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Boolean (TDataStd_BooleanList::*)() const) static_cast<Standard_Boolean (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::Last),
             R"#(None)#" )
        .def("List",
             (const TDataStd_ListOfByte & (TDataStd_BooleanList::*)() const) static_cast<const TDataStd_ListOfByte & (TDataStd_BooleanList::*)() const>(&TDataStd_BooleanList::List),
             R"#(1 - means TRUE, 0 - means FALSE.)#" )
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_BooleanList::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDataStd_BooleanList::*)( const Standard_Integer , const Standard_Boolean ) >(&TDataStd_BooleanList::InsertBefore),
             R"#(Inserts the <value> before the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("before_value"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_BooleanList::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<Standard_Boolean (TDataStd_BooleanList::*)( const Standard_Integer , const Standard_Boolean ) >(&TDataStd_BooleanList::InsertAfter),
             R"#(Inserts the <value> after the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("after_value"))
        .def("Remove",
             (Standard_Boolean (TDataStd_BooleanList::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_BooleanList::*)( const Standard_Integer ) >(&TDataStd_BooleanList::Remove),
             R"#(Removes a value at <index> position.)#"  , py::arg("index"))
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_BooleanList::GetID),
                    R"#(Static methods ============== Returns the ID of the list of booleans attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_BooleanList> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_BooleanList> (*)( const TDF_Label & ) >(&TDataStd_BooleanList::Set),
                    R"#(Finds or creates a list of boolean values attribute.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_BooleanList> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataStd_BooleanList> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataStd_BooleanList::Set),
                    R"#(Finds or creates a list of boolean values attribute with explicit user defined <guid>.)#"  , py::arg("label"),  py::arg("theGuid"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_BooleanList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_BooleanList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ByteArray ,opencascade::handle<TDataStd_ByteArray> , TDF_Attribute>>(m.attr("TDataStd_ByteArray"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_ByteArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::DynamicType),
             R"#(None)#" )
        .def("Init",
             (void (TDataStd_ByteArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TDataStd_ByteArray::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_ByteArray::Init),
             R"#(Initialize the inner array with bounds from <lower> to <upper>)#"  , py::arg("lower"),  py::arg("upper"))
        .def("SetValue",
             (void (TDataStd_ByteArray::*)( const Standard_Integer , const Standard_Byte ) ) static_cast<void (TDataStd_ByteArray::*)( const Standard_Integer , const Standard_Byte ) >(&TDataStd_ByteArray::SetValue),
             R"#(Sets the <Index>th element of the array to <Value> OutOfRange exception is raised if <Index> doesn't respect Lower and Upper bounds of the internal array.)#"  , py::arg("index"),  py::arg("value"))
        .def("SetID",
             (void (TDataStd_ByteArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ByteArray::*)( const Standard_GUID & ) >(&TDataStd_ByteArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ByteArray::*)() ) static_cast<void (TDataStd_ByteArray::*)() >(&TDataStd_ByteArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Value",
             (Standard_Byte (TDataStd_ByteArray::*)( const Standard_Integer ) const) static_cast<Standard_Byte (TDataStd_ByteArray::*)( const Standard_Integer ) const>(&TDataStd_ByteArray::Value),
             R"#(Return the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("Lower",
             (Standard_Integer (TDataStd_ByteArray::*)() const) static_cast<Standard_Integer (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::Lower),
             R"#(Returns the lower boundary of the array.)#" )
        .def("Upper",
             (Standard_Integer (TDataStd_ByteArray::*)() const) static_cast<Standard_Integer (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::Upper),
             R"#(Returns the upper boundary of the array.)#" )
        .def("Length",
             (Standard_Integer (TDataStd_ByteArray::*)() const) static_cast<Standard_Integer (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::Length),
             R"#(Returns the number of elements in the array.)#" )
        .def("InternalArray",
             (const opencascade::handle<TColStd_HArray1OfByte> & (TDataStd_ByteArray::*)() const) static_cast<const opencascade::handle<TColStd_HArray1OfByte> & (TDataStd_ByteArray::*)() const>(&TDataStd_ByteArray::InternalArray),
             R"#(None)#" )
        .def("ChangeArray",
             (void (TDataStd_ByteArray::*)( const opencascade::handle<TColStd_HArray1OfByte> & , const Standard_Boolean ) ) static_cast<void (TDataStd_ByteArray::*)( const opencascade::handle<TColStd_HArray1OfByte> & , const Standard_Boolean ) >(&TDataStd_ByteArray::ChangeArray),
             R"#(Sets the inner array <myValue> of the attribute to <newArray>. If value of <newArray> differs from <myValue>, Backup performed and myValue refers to new instance of HArray1OfInteger that holds <newArray> values. If <isCheckItems> equal True each item of <newArray> will be checked with each item of <myValue> for coincidence (to avoid backup).)#"  , py::arg("newArray"),  py::arg("isCheckItems")=static_cast<const Standard_Boolean>(Standard_True))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_ByteArray::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_ByteArray::GetID),
                    R"#(Static methods ============== Returns an ID for array.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ByteArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_ByteArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_ByteArray::Set),
                    R"#(Finds or creates an attribute with the array on the specified label. If <isDelta> == False, DefaultDeltaOnModification is used. If <isDelta> == True, DeltaOnModification of the current attribute is used. If attribute is already set, all input parameters are refused and the found attribute is returned.)#"  , py::arg("label"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ByteArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_ByteArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_ByteArray::Set),
                    R"#(Finds or creates an attribute with byte array and explicit user defined <guid> on the specified label.)#"  , py::arg("label"),  py::arg("theGuid"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ChildNodeIterator , shared_ptr<TDataStd_ChildNodeIterator> >>(m.attr("TDataStd_ChildNodeIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TDataStd_TreeNode> &,const Standard_Boolean >()  , py::arg("aTreeNode"),  py::arg("allLevels")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (TDataStd_ChildNodeIterator::*)( const opencascade::handle<TDataStd_TreeNode> & , const Standard_Boolean ) ) static_cast<void (TDataStd_ChildNodeIterator::*)( const opencascade::handle<TDataStd_TreeNode> & , const Standard_Boolean ) >(&TDataStd_ChildNodeIterator::Initialize),
             R"#(Initializes the iteration on the Children Step of the given Step. If <allLevels> option is set to true, it explores not only the first, but all the sub Step levels.)#"  , py::arg("aTreeNode"),  py::arg("allLevels")=static_cast<const Standard_Boolean>(Standard_False))
        .def("More",
             (Standard_Boolean (TDataStd_ChildNodeIterator::*)() const) static_cast<Standard_Boolean (TDataStd_ChildNodeIterator::*)() const>(&TDataStd_ChildNodeIterator::More),
             R"#(Returns True if there is a current Item in the iteration.)#" )
        .def("Next",
             (void (TDataStd_ChildNodeIterator::*)() ) static_cast<void (TDataStd_ChildNodeIterator::*)() >(&TDataStd_ChildNodeIterator::Next),
             R"#(Move to the next Item)#" )
        .def("NextBrother",
             (void (TDataStd_ChildNodeIterator::*)() ) static_cast<void (TDataStd_ChildNodeIterator::*)() >(&TDataStd_ChildNodeIterator::NextBrother),
             R"#(Move to the next Brother. If there is none, go up etc. This method is interesting only with "allLevels" behavior, because it avoids to explore the current Step ChildStepren.)#" )
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TDataStd_Comment::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_Comment::*)( const TCollection_ExtendedString & ) >(&TDataStd_Comment::Set),
             R"#(None)#"  , py::arg("S"))
        .def("Get",
             (const TCollection_ExtendedString & (TDataStd_Comment::*)() const) static_cast<const TCollection_ExtendedString & (TDataStd_Comment::*)() const>(&TDataStd_Comment::Get),
             R"#(Returns the comment attribute.)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Comment::GetID),
                    R"#(class methods ============= Returns the GUID for comments.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Comment> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_Comment> (*)( const TDF_Label & ) >(&TDataStd_Comment::Set),
                    R"#(Find, or create a Comment attribute. the Comment attribute is returned.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Comment> (*)( const TDF_Label & , const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<TDataStd_Comment> (*)( const TDF_Label & , const TCollection_ExtendedString & ) >(&TDataStd_Comment::Set),
                    R"#(Finds, or creates a Comment attribute and sets the string. the Comment attribute is returned. Comment methods ============)#"  , py::arg("label"),  py::arg("string"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Comment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Comment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Current ,opencascade::handle<TDataStd_Current> , TDF_Attribute>>(m.attr("TDataStd_Current"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetLabel",
             (void (TDataStd_Current::*)( const TDF_Label & ) ) static_cast<void (TDataStd_Current::*)( const TDF_Label & ) >(&TDataStd_Current::SetLabel),
             R"#(None)#"  , py::arg("current"))
        .def("GetLabel",
             (TDF_Label (TDataStd_Current::*)() const) static_cast<TDF_Label (TDataStd_Current::*)() const>(&TDataStd_Current::GetLabel),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Current::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (void (*)( const TDF_Label & ) ) static_cast<void (*)( const TDF_Label & ) >(&TDataStd_Current::Set),
                    R"#(Set <L> as current of <L> Framework.)#"  , py::arg("L"))
        .def_static("Get_s",
                    (TDF_Label (*)( const TDF_Label & ) ) static_cast<TDF_Label (*)( const TDF_Label & ) >(&TDataStd_Current::Get),
                    R"#(returns current of <acces> Framework. raise if (!Has))#"  , py::arg("acces"))
        .def_static("Has_s",
                    (Standard_Boolean (*)( const TDF_Label & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & ) >(&TDataStd_Current::Has),
                    R"#(returns True if a current label is managed in <acces> Framework. class methods =============)#"  , py::arg("acces"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Current::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Current::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfByteArray ,opencascade::handle<TDataStd_DeltaOnModificationOfByteArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfByteArray"))
    // constructors
        .def(py::init< const opencascade::handle<TDataStd_ByteArray> & >()  , py::arg("Arr") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_DeltaOnModificationOfByteArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfExtStringArray ,opencascade::handle<TDataStd_DeltaOnModificationOfExtStringArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfExtStringArray"))
    // constructors
        .def(py::init< const opencascade::handle<TDataStd_ExtStringArray> & >()  , py::arg("Arr") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_DeltaOnModificationOfExtStringArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfIntArray ,opencascade::handle<TDataStd_DeltaOnModificationOfIntArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfIntArray"))
    // constructors
        .def(py::init< const opencascade::handle<TDataStd_IntegerArray> & >()  , py::arg("Arr") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_DeltaOnModificationOfIntArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfIntPackedMap ,opencascade::handle<TDataStd_DeltaOnModificationOfIntPackedMap> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfIntPackedMap"))
    // constructors
        .def(py::init< const opencascade::handle<TDataStd_IntPackedMap> & >()  , py::arg("Arr") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_DeltaOnModificationOfIntPackedMap::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_DeltaOnModificationOfRealArray ,opencascade::handle<TDataStd_DeltaOnModificationOfRealArray> , TDF_DeltaOnModification>>(m.attr("TDataStd_DeltaOnModificationOfRealArray"))
    // constructors
        .def(py::init< const opencascade::handle<TDataStd_RealArray> & >()  , py::arg("Arr") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_DeltaOnModificationOfRealArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Directory ,opencascade::handle<TDataStd_Directory> , TDF_Attribute>>(m.attr("TDataStd_Directory"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("Find_s",
                    (Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataStd_Directory> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataStd_Directory> & ) >(&TDataStd_Directory::Find),
                    R"#(class methods ============= Searches for a directory attribute on the label current, or on one of the father labels of current. If a directory attribute is found, true is returned, and the attribute found is set as D.)#"  , py::arg("current"),  py::arg("D"))
        .def_static("New_s",
                    (opencascade::handle<TDataStd_Directory> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_Directory> (*)( const TDF_Label & ) >(&TDataStd_Directory::New),
                    R"#(Creates an enpty Directory attribute, located at <label>. Raises if <label> has attribute)#"  , py::arg("label"))
        .def_static("AddDirectory_s",
                    (opencascade::handle<TDataStd_Directory> (*)( const opencascade::handle<TDataStd_Directory> & ) ) static_cast<opencascade::handle<TDataStd_Directory> (*)( const opencascade::handle<TDataStd_Directory> & ) >(&TDataStd_Directory::AddDirectory),
                    R"#(Creates a new sub-label and sets the sub-directory dir on that label.)#"  , py::arg("dir"))
        .def_static("MakeObjectLabel_s",
                    (TDF_Label (*)( const opencascade::handle<TDataStd_Directory> & ) ) static_cast<TDF_Label (*)( const opencascade::handle<TDataStd_Directory> & ) >(&TDataStd_Directory::MakeObjectLabel),
                    R"#(Makes new label and returns it to insert other object attributes (sketch,part...etc...))#"  , py::arg("dir"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Directory::GetID),
                    R"#(Directory methods ===============)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Directory::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Directory::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Expression ,opencascade::handle<TDataStd_Expression> , TDF_Attribute>>(m.attr("TDataStd_Expression"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Name",
             (TCollection_ExtendedString (TDataStd_Expression::*)() const) static_cast<TCollection_ExtendedString (TDataStd_Expression::*)() const>(&TDataStd_Expression::Name),
             R"#(build and return the expression name)#" )
        .def("SetExpression",
             (void (TDataStd_Expression::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_Expression::*)( const TCollection_ExtendedString & ) >(&TDataStd_Expression::SetExpression),
             R"#(None)#"  , py::arg("E"))
        .def("GetExpression",
             (const TCollection_ExtendedString & (TDataStd_Expression::*)() const) static_cast<const TCollection_ExtendedString & (TDataStd_Expression::*)() const>(&TDataStd_Expression::GetExpression),
             R"#(None)#" )
        .def("GetVariables",
             (TDF_AttributeList & (TDataStd_Expression::*)() ) static_cast<TDF_AttributeList & (TDataStd_Expression::*)() >(&TDataStd_Expression::GetVariables),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Expression::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Expression> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_Expression> (*)( const TDF_Label & ) >(&TDataStd_Expression::Set),
                    R"#(Find, or create, an Expression attribute. Expressionmethods ============)#"  , py::arg("label"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Expression::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Expression::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ExtStringArray ,opencascade::handle<TDataStd_ExtStringArray> , TDF_Attribute>>(m.attr("TDataStd_ExtStringArray"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_ExtStringArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::DynamicType),
             R"#(None)#" )
        .def("Init",
             (void (TDataStd_ExtStringArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TDataStd_ExtStringArray::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_ExtStringArray::Init),
             R"#(Initializes the inner array with bounds from <lower> to <upper>)#"  , py::arg("lower"),  py::arg("upper"))
        .def("SetValue",
             (void (TDataStd_ExtStringArray::*)( const Standard_Integer , const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_ExtStringArray::*)( const Standard_Integer , const TCollection_ExtendedString & ) >(&TDataStd_ExtStringArray::SetValue),
             R"#(Sets the <Index>th element of the array to <Value> OutOfRange exception is raised if <Index> doesn't respect Lower and Upper bounds of the internal array.)#"  , py::arg("Index"),  py::arg("Value"))
        .def("SetID",
             (void (TDataStd_ExtStringArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ExtStringArray::*)( const Standard_GUID & ) >(&TDataStd_ExtStringArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ExtStringArray::*)() ) static_cast<void (TDataStd_ExtStringArray::*)() >(&TDataStd_ExtStringArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Value",
             (const TCollection_ExtendedString & (TDataStd_ExtStringArray::*)( const Standard_Integer ) const) static_cast<const TCollection_ExtendedString & (TDataStd_ExtStringArray::*)( const Standard_Integer ) const>(&TDataStd_ExtStringArray::Value),
             R"#(Returns the value of the <Index>th element of the array)#"  , py::arg("Index"))
        .def("Lower",
             (Standard_Integer (TDataStd_ExtStringArray::*)() const) static_cast<Standard_Integer (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::Lower),
             R"#(Return the lower bound.)#" )
        .def("Upper",
             (Standard_Integer (TDataStd_ExtStringArray::*)() const) static_cast<Standard_Integer (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::Upper),
             R"#(Return the upper bound)#" )
        .def("Length",
             (Standard_Integer (TDataStd_ExtStringArray::*)() const) static_cast<Standard_Integer (TDataStd_ExtStringArray::*)() const>(&TDataStd_ExtStringArray::Length),
             R"#(Return the number of elements of <me>.)#" )
        .def("ChangeArray",
             (void (TDataStd_ExtStringArray::*)( const opencascade::handle<TColStd_HArray1OfExtendedString> & , const Standard_Boolean ) ) static_cast<void (TDataStd_ExtStringArray::*)( const opencascade::handle<TColStd_HArray1OfExtendedString> & , const Standard_Boolean ) >(&TDataStd_ExtStringArray::ChangeArray),
             R"#(Sets the inner array <myValue> of the ExtStringArray attribute to <newArray>. If value of <newArray> differs from <myValue>, Backup performed and myValue refers to new instance of HArray1OfExtendedString that holds <newArray> values If <isCheckItems> equal True each item of <newArray> will be checked with each item of <myValue> for coincidence (to avoid backup).)#"  , py::arg("newArray"),  py::arg("isCheckItems")=static_cast<const Standard_Boolean>(Standard_True))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_ExtStringArray::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_ExtStringArray::GetID),
                    R"#(class methods ============= Returns the GUID for the attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ExtStringArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_ExtStringArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_ExtStringArray::Set),
                    R"#(Finds, or creates, an ExtStringArray attribute with <lower> and <upper> bounds on the specified label. If <isDelta> == False, DefaultDeltaOnModification is used. If <isDelta> == True, DeltaOnModification of the current attribute is used. If attribute is already set, all input parameters are refused and the found attribute is returned.)#"  , py::arg("label"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ExtStringArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_ExtStringArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_ExtStringArray::Set),
                    R"#(Finds, or creates, an ExtStringArray attribute with explicit user defined <guid>. The ExtStringArray attribute is returned.)#"  , py::arg("label"),  py::arg("theGuid"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ExtStringList ,opencascade::handle<TDataStd_ExtStringList> , TDF_Attribute>>(m.attr("TDataStd_ExtStringList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TDataStd_ExtStringList::*)() const) static_cast<Standard_Boolean (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::IsEmpty),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TDataStd_ExtStringList::*)() const) static_cast<Standard_Integer (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::Extent),
             R"#(None)#" )
        .def("Prepend",
             (void (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & ) >(&TDataStd_ExtStringList::Prepend),
             R"#(None)#"  , py::arg("value"))
        .def("Append",
             (void (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & ) >(&TDataStd_ExtStringList::Append),
             R"#(None)#"  , py::arg("value"))
        .def("SetID",
             (void (TDataStd_ExtStringList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ExtStringList::*)( const Standard_GUID & ) >(&TDataStd_ExtStringList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ExtStringList::*)() ) static_cast<void (TDataStd_ExtStringList::*)() >(&TDataStd_ExtStringList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&TDataStd_ExtStringList::InsertBefore),
             R"#(Inserts the <value> before the first meet of <before_value>.)#"  , py::arg("value"),  py::arg("before_value"))
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_ExtStringList::*)( const Standard_Integer , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TDataStd_ExtStringList::*)( const Standard_Integer , const TCollection_ExtendedString & ) >(&TDataStd_ExtStringList::InsertBefore),
             R"#(Inserts the <value> before the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("before_value"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&TDataStd_ExtStringList::InsertAfter),
             R"#(Inserts the <value> after the first meet of <after_value>.)#"  , py::arg("value"),  py::arg("after_value"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_ExtStringList::*)( const Standard_Integer , const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TDataStd_ExtStringList::*)( const Standard_Integer , const TCollection_ExtendedString & ) >(&TDataStd_ExtStringList::InsertAfter),
             R"#(Inserts the <value> after the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("after_value"))
        .def("Remove",
             (Standard_Boolean (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Boolean (TDataStd_ExtStringList::*)( const TCollection_ExtendedString & ) >(&TDataStd_ExtStringList::Remove),
             R"#(Removes the first meet of the <value>.)#"  , py::arg("value"))
        .def("Remove",
             (Standard_Boolean (TDataStd_ExtStringList::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_ExtStringList::*)( const Standard_Integer ) >(&TDataStd_ExtStringList::Remove),
             R"#(Removes a value at <index> position.)#"  , py::arg("index"))
        .def("Clear",
             (void (TDataStd_ExtStringList::*)() ) static_cast<void (TDataStd_ExtStringList::*)() >(&TDataStd_ExtStringList::Clear),
             R"#(None)#" )
        .def("First",
             (const TCollection_ExtendedString & (TDataStd_ExtStringList::*)() const) static_cast<const TCollection_ExtendedString & (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::First),
             R"#(None)#" )
        .def("Last",
             (const TCollection_ExtendedString & (TDataStd_ExtStringList::*)() const) static_cast<const TCollection_ExtendedString & (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::Last),
             R"#(None)#" )
        .def("List",
             (const TDataStd_ListOfExtendedString & (TDataStd_ExtStringList::*)() const) static_cast<const TDataStd_ListOfExtendedString & (TDataStd_ExtStringList::*)() const>(&TDataStd_ExtStringList::List),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_ExtStringList::GetID),
                    R"#(Static methods ============== Returns the ID of the list of strings attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ExtStringList> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_ExtStringList> (*)( const TDF_Label & ) >(&TDataStd_ExtStringList::Set),
                    R"#(Finds or creates a list of string values attribute with explicit user defined <guid>.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ExtStringList> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataStd_ExtStringList> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataStd_ExtStringList::Set),
                    R"#(Finds or creates a list of string values attribute.)#"  , py::arg("label"),  py::arg("theGuid"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ExtStringList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_ExtStringList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringByte ,opencascade::handle<TDataStd_HDataMapOfStringByte> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringByte"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init<  const NCollection_DataMap<TCollection_ExtendedString, Standard_Byte, TCollection_ExtendedString> & >()  , py::arg("theOther") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_HDataMapOfStringByte::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringHArray1OfInteger ,opencascade::handle<TDataStd_HDataMapOfStringHArray1OfInteger> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringHArray1OfInteger"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init<  const NCollection_DataMap<TCollection_ExtendedString, opencascade::handle<TColStd_HArray1OfInteger>, TCollection_ExtendedString> & >()  , py::arg("theOther") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_HDataMapOfStringHArray1OfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringHArray1OfReal ,opencascade::handle<TDataStd_HDataMapOfStringHArray1OfReal> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringHArray1OfReal"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init<  const NCollection_DataMap<TCollection_ExtendedString, opencascade::handle<TColStd_HArray1OfReal>, TCollection_ExtendedString> & >()  , py::arg("theOther") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_HDataMapOfStringHArray1OfReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringInteger ,opencascade::handle<TDataStd_HDataMapOfStringInteger> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringInteger"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init<  const NCollection_DataMap<TCollection_ExtendedString, Standard_Integer, TCollection_ExtendedString> & >()  , py::arg("theOther") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_HDataMapOfStringInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringReal ,opencascade::handle<TDataStd_HDataMapOfStringReal> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringReal"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init<  const NCollection_DataMap<TCollection_ExtendedString, Standard_Real, TCollection_ExtendedString> & >()  , py::arg("theOther") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_HDataMapOfStringReal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_HDataMapOfStringString ,opencascade::handle<TDataStd_HDataMapOfStringString> , Standard_Transient>>(m.attr("TDataStd_HDataMapOfStringString"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("NbBuckets")=static_cast<const Standard_Integer>(1) )
        .def(py::init<  const NCollection_DataMap<TCollection_ExtendedString, TCollection_ExtendedString, TCollection_ExtendedString> & >()  , py::arg("theOther") )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_HDataMapOfStringString::get_type_descriptor),
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_IntPackedMap::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::DynamicType),
             R"#(None)#" )
        .def("ChangeMap",
             (Standard_Boolean (TDataStd_IntPackedMap::*)( const opencascade::handle<TColStd_HPackedMapOfInteger> & ) ) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)( const opencascade::handle<TColStd_HPackedMapOfInteger> & ) >(&TDataStd_IntPackedMap::ChangeMap),
             R"#(None)#"  , py::arg("theMap"))
        .def("ChangeMap",
             (Standard_Boolean (TDataStd_IntPackedMap::*)( const TColStd_PackedMapOfInteger & ) ) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)( const TColStd_PackedMapOfInteger & ) >(&TDataStd_IntPackedMap::ChangeMap),
             R"#(None)#"  , py::arg("theMap"))
        .def("GetMap",
             (const TColStd_PackedMapOfInteger & (TDataStd_IntPackedMap::*)() const) static_cast<const TColStd_PackedMapOfInteger & (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::GetMap),
             R"#(None)#" )
        .def("GetHMap",
             (const opencascade::handle<TColStd_HPackedMapOfInteger> & (TDataStd_IntPackedMap::*)() const) static_cast<const opencascade::handle<TColStd_HPackedMapOfInteger> & (TDataStd_IntPackedMap::*)() const>(&TDataStd_IntPackedMap::GetHMap),
             R"#(None)#" )
        .def("Clear",
             (Standard_Boolean (TDataStd_IntPackedMap::*)() ) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)() >(&TDataStd_IntPackedMap::Clear),
             R"#(None)#" )
        .def("Add",
             (Standard_Boolean (TDataStd_IntPackedMap::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)( const Standard_Integer ) >(&TDataStd_IntPackedMap::Add),
             R"#(None)#"  , py::arg("theKey"))
        .def("Remove",
             (Standard_Boolean (TDataStd_IntPackedMap::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)( const Standard_Integer ) >(&TDataStd_IntPackedMap::Remove),
             R"#(None)#"  , py::arg("theKey"))
        .def("Contains",
             (Standard_Boolean (TDataStd_IntPackedMap::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TDataStd_IntPackedMap::*)( const Standard_Integer ) const>(&TDataStd_IntPackedMap::Contains),
             R"#(None)#"  , py::arg("theKey"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_IntPackedMap::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_IntPackedMap::GetID),
                    R"#(class methods ============= Returns the GUID of the attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_IntPackedMap> (*)( const TDF_Label & , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_IntPackedMap> (*)( const TDF_Label & , const Standard_Boolean ) >(&TDataStd_IntPackedMap::Set),
                    R"#(Finds or creates an integer map attribute on the given label. If <isDelta> == False, DefaultDeltaOnModification is used. If <isDelta> == True, DeltaOnModification of the current attribute is used. If attribute is already set, input parameter <isDelta> is refused and the found attribute returned. Attribute methods ===================)#"  , py::arg("label"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Integer ,opencascade::handle<TDataStd_Integer> , TDF_Attribute>>(m.attr("TDataStd_Integer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TDataStd_Integer::*)( const Standard_Integer ) ) static_cast<void (TDataStd_Integer::*)( const Standard_Integer ) >(&TDataStd_Integer::Set),
             R"#(Integer methods ===============)#"  , py::arg("V"))
        .def("SetID",
             (void (TDataStd_Integer::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_Integer::*)( const Standard_GUID & ) >(&TDataStd_Integer::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_Integer::*)() ) static_cast<void (TDataStd_Integer::*)() >(&TDataStd_Integer::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Get",
             (Standard_Integer (TDataStd_Integer::*)() const) static_cast<Standard_Integer (TDataStd_Integer::*)() const>(&TDataStd_Integer::Get),
             R"#(Returns the integer value contained in the attribute.)#" )
        .def("IsCaptured",
             (Standard_Boolean (TDataStd_Integer::*)() const) static_cast<Standard_Boolean (TDataStd_Integer::*)() const>(&TDataStd_Integer::IsCaptured),
             R"#(Returns True if there is a reference on the same label)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Integer::GetID),
                    R"#(class methods ============= Returns the GUID for integers.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Integer> (*)( const TDF_Label & , const Standard_Integer ) ) static_cast<opencascade::handle<TDataStd_Integer> (*)( const TDF_Label & , const Standard_Integer ) >(&TDataStd_Integer::Set),
                    R"#(Finds, or creates, an Integer attribute and sets <value> the Integer attribute is returned.)#"  , py::arg("label"),  py::arg("value"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Integer> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer ) ) static_cast<opencascade::handle<TDataStd_Integer> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer ) >(&TDataStd_Integer::Set),
                    R"#(Finds, or creates, an Integer attribute with explicit user defined <guid> and sets <value>. The Integer attribute is returned.)#"  , py::arg("label"),  py::arg("guid"),  py::arg("value"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Integer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Integer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_IntegerArray ,opencascade::handle<TDataStd_IntegerArray> , TDF_Attribute>>(m.attr("TDataStd_IntegerArray"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_IntegerArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::DynamicType),
             R"#(None)#" )
        .def("Init",
             (void (TDataStd_IntegerArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TDataStd_IntegerArray::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_IntegerArray::Init),
             R"#(Initialize the inner array with bounds from <lower> to <upper>)#"  , py::arg("lower"),  py::arg("upper"))
        .def("SetValue",
             (void (TDataStd_IntegerArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TDataStd_IntegerArray::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_IntegerArray::SetValue),
             R"#(Sets the <Index>th element of the array to <Value> OutOfRange exception is raised if <Index> doesn't respect Lower and Upper bounds of the internal array.)#"  , py::arg("Index"),  py::arg("Value"))
        .def("SetID",
             (void (TDataStd_IntegerArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_IntegerArray::*)( const Standard_GUID & ) >(&TDataStd_IntegerArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_IntegerArray::*)() ) static_cast<void (TDataStd_IntegerArray::*)() >(&TDataStd_IntegerArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Value",
             (Standard_Integer (TDataStd_IntegerArray::*)( const Standard_Integer ) const) static_cast<Standard_Integer (TDataStd_IntegerArray::*)( const Standard_Integer ) const>(&TDataStd_IntegerArray::Value),
             R"#(Return the value of the <Index>th element of the array)#"  , py::arg("Index"))
        .def("Lower",
             (Standard_Integer (TDataStd_IntegerArray::*)() const) static_cast<Standard_Integer (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::Lower),
             R"#(Returns the lower boundary of this array of integers.)#" )
        .def("Upper",
             (Standard_Integer (TDataStd_IntegerArray::*)() const) static_cast<Standard_Integer (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::Upper),
             R"#(Return the upper boundary of this array of integers.)#" )
        .def("Length",
             (Standard_Integer (TDataStd_IntegerArray::*)() const) static_cast<Standard_Integer (TDataStd_IntegerArray::*)() const>(&TDataStd_IntegerArray::Length),
             R"#(Returns the length of this array of integers in terms of the number of elements it contains.)#" )
        .def("ChangeArray",
             (void (TDataStd_IntegerArray::*)( const opencascade::handle<TColStd_HArray1OfInteger> & , const Standard_Boolean ) ) static_cast<void (TDataStd_IntegerArray::*)( const opencascade::handle<TColStd_HArray1OfInteger> & , const Standard_Boolean ) >(&TDataStd_IntegerArray::ChangeArray),
             R"#(Sets the inner array <myValue> of the IntegerArray attribute to <newArray>. If value of <newArray> differs from <myValue>, Backup performed and myValue refers to new instance of HArray1OfInteger that holds <newArray> values If <isCheckItems> equal True each item of <newArray> will be checked with each item of <myValue> for coincidence (to avoid backup).)#"  , py::arg("newArray"),  py::arg("isCheckItems")=static_cast<const Standard_Boolean>(Standard_True))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_IntegerArray::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_IntegerArray::GetID),
                    R"#(class methods ============= Returns the GUID for arrays of integers.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_IntegerArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_IntegerArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_IntegerArray::Set),
                    R"#(Finds or creates on the <label> an integer array attribute with the specified <lower> and <upper> boundaries. If <isDelta> == False, DefaultDeltaOnModification is used. If <isDelta> == True, DeltaOnModification of the current attribute is used. If attribute is already set, all input parameters are refused and the found attribute is returned.)#"  , py::arg("label"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_IntegerArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_IntegerArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_IntegerArray::Set),
                    R"#(Finds, or creates, an IntegerArray attribute with explicit user defined <guid>. The IntegerArray attribute is returned.)#"  , py::arg("label"),  py::arg("theGuid"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_IntegerList ,opencascade::handle<TDataStd_IntegerList> , TDF_Attribute>>(m.attr("TDataStd_IntegerList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TDataStd_IntegerList::*)() const) static_cast<Standard_Boolean (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::IsEmpty),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TDataStd_IntegerList::*)() const) static_cast<Standard_Integer (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::Extent),
             R"#(None)#" )
        .def("Prepend",
             (void (TDataStd_IntegerList::*)( const Standard_Integer ) ) static_cast<void (TDataStd_IntegerList::*)( const Standard_Integer ) >(&TDataStd_IntegerList::Prepend),
             R"#(None)#"  , py::arg("value"))
        .def("Append",
             (void (TDataStd_IntegerList::*)( const Standard_Integer ) ) static_cast<void (TDataStd_IntegerList::*)( const Standard_Integer ) >(&TDataStd_IntegerList::Append),
             R"#(None)#"  , py::arg("value"))
        .def("SetID",
             (void (TDataStd_IntegerList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_IntegerList::*)( const Standard_GUID & ) >(&TDataStd_IntegerList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_IntegerList::*)() ) static_cast<void (TDataStd_IntegerList::*)() >(&TDataStd_IntegerList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_IntegerList::InsertBefore),
             R"#(Inserts the <value> before the first meet of <before_value>.)#"  , py::arg("value"),  py::arg("before_value"))
        .def("InsertBeforeByIndex",
             (Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_IntegerList::InsertBeforeByIndex),
             R"#(Inserts the <value> before the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("before_value"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_IntegerList::InsertAfter),
             R"#(Inserts the <value> after the first meet of <after_value>.)#"  , py::arg("value"),  py::arg("after_value"))
        .def("InsertAfterByIndex",
             (Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_IntegerList::InsertAfterByIndex),
             R"#(Inserts the <value> after the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("after_value"))
        .def("Remove",
             (Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer ) >(&TDataStd_IntegerList::Remove),
             R"#(Removes the first meet of the <value>.)#"  , py::arg("value"))
        .def("RemoveByIndex",
             (Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_IntegerList::*)( const Standard_Integer ) >(&TDataStd_IntegerList::RemoveByIndex),
             R"#(Removes a value at <index> position.)#"  , py::arg("index"))
        .def("Clear",
             (void (TDataStd_IntegerList::*)() ) static_cast<void (TDataStd_IntegerList::*)() >(&TDataStd_IntegerList::Clear),
             R"#(None)#" )
        .def("First",
             (Standard_Integer (TDataStd_IntegerList::*)() const) static_cast<Standard_Integer (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Integer (TDataStd_IntegerList::*)() const) static_cast<Standard_Integer (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::Last),
             R"#(None)#" )
        .def("List",
             (const TColStd_ListOfInteger & (TDataStd_IntegerList::*)() const) static_cast<const TColStd_ListOfInteger & (TDataStd_IntegerList::*)() const>(&TDataStd_IntegerList::List),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_IntegerList::GetID),
                    R"#(Static methods ============== Returns the ID of the list of integer attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_IntegerList> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_IntegerList> (*)( const TDF_Label & ) >(&TDataStd_IntegerList::Set),
                    R"#(Finds or creates a list of integer values attribute.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_IntegerList> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataStd_IntegerList> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataStd_IntegerList::Set),
                    R"#(Finds or creates a list of integer values attribute with explicit user defined <guid>.)#"  , py::arg("label"),  py::arg("theGuid"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_IntegerList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_IntegerList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Name ,opencascade::handle<TDataStd_Name> , TDF_Attribute>>(m.attr("TDataStd_Name"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TDataStd_Name::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_Name::*)( const TCollection_ExtendedString & ) >(&TDataStd_Name::Set),
             R"#(Sets <S> as name. Raises if <S> is not a valid name.)#"  , py::arg("S"))
        .def("SetID",
             (void (TDataStd_Name::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_Name::*)( const Standard_GUID & ) >(&TDataStd_Name::SetID),
             R"#(Sets the explicit user defined GUID to the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_Name::*)() ) static_cast<void (TDataStd_Name::*)() >(&TDataStd_Name::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Get",
             (const TCollection_ExtendedString & (TDataStd_Name::*)() const) static_cast<const TCollection_ExtendedString & (TDataStd_Name::*)() const>(&TDataStd_Name::Get),
             R"#(Returns the name contained in this name attribute.)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Name::GetID),
                    R"#(class methods working on the name itself ======================================== Returns the GUID for name attributes.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Name> (*)( const TDF_Label & , const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<TDataStd_Name> (*)( const TDF_Label & , const TCollection_ExtendedString & ) >(&TDataStd_Name::Set),
                    R"#(Creates (if does not exist) and sets the name in the name attribute. from any label <L> search in father labels (L is not concerned) the first name attribute.if found set it in <father>. class methods working on the name tree ====================================== Search in the whole TDF_Data the Name attribute which fit with <fullPath>. Returns True if found. Search under <currentLabel> a label which fit with <name>. Returns True if found. Shortcut which avoids building a ListOfExtendedStrin. Search in the whole TDF_Data the label which fit with name Returns True if found. tools methods to translate path <-> pathlist =========================================== move to draw For Draw test we may provide this tool method which convert a path in a sequence of string to call after the FindLabel methods. Example: if it's given "Assembly:Part_1:Sketch_5" it will return in <pathlist> the list of 3 strings: "Assembly","Part_1","Sketch_5". move to draw from <pathlist> build the string path Name methods ============)#"  , py::arg("label"),  py::arg("string"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Name> (*)( const TDF_Label & , const Standard_GUID & , const TCollection_ExtendedString & ) ) static_cast<opencascade::handle<TDataStd_Name> (*)( const TDF_Label & , const Standard_GUID & , const TCollection_ExtendedString & ) >(&TDataStd_Name::Set),
                    R"#(Finds, or creates, a Name attribute with explicit user defined <guid> and sets <string>. The Name attribute is returned.)#"  , py::arg("label"),  py::arg("guid"),  py::arg("string"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Name::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Name::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_NamedData ,opencascade::handle<TDataStd_NamedData> , TDF_Attribute>>(m.attr("TDataStd_NamedData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("HasIntegers",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasIntegers),
             R"#(Returns true if at least one named integer value is kept in the attribute.)#" )
        .def("HasInteger",
             (Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const) static_cast<Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const>(&TDataStd_NamedData::HasInteger),
             R"#(Returns true if the attribute contains specified by Name integer value.)#"  , py::arg("theName"))
        .def("GetInteger",
             (Standard_Integer (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Integer (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) >(&TDataStd_NamedData::GetInteger),
             R"#(Returns the integer value specified by the Name. It returns 0 if internal map doesn't contain the specified integer (use HasInteger() to check before).)#"  , py::arg("theName"))
        .def("SetInteger",
             (void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const Standard_Integer ) ) static_cast<void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const Standard_Integer ) >(&TDataStd_NamedData::SetInteger),
             R"#(Defines a named integer. If the integer already exists, it changes its value to <theInteger>.)#"  , py::arg("theName"),  py::arg("theInteger"))
        .def("GetIntegersContainer",
             (const TColStd_DataMapOfStringInteger & (TDataStd_NamedData::*)() ) static_cast<const TColStd_DataMapOfStringInteger & (TDataStd_NamedData::*)() >(&TDataStd_NamedData::GetIntegersContainer),
             R"#(Returns the internal container of named integers.)#" )
        .def("ChangeIntegers",
             (void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, Standard_Integer, TCollection_ExtendedString> & ) ) static_cast<void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, Standard_Integer, TCollection_ExtendedString> & ) >(&TDataStd_NamedData::ChangeIntegers),
             R"#(Replace the container content by new content of the <theIntegers>.)#"  , py::arg("theIntegers"))
        .def("HasReals",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasReals),
             R"#(Returns true if at least one named real value is kept in the attribute.)#" )
        .def("HasReal",
             (Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const) static_cast<Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const>(&TDataStd_NamedData::HasReal),
             R"#(Returns true if the attribute contains a real specified by Name.)#"  , py::arg("theName"))
        .def("GetReal",
             (Standard_Real (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Real (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) >(&TDataStd_NamedData::GetReal),
             R"#(Returns the named real. It returns 0.0 if there is no such a named real (use HasReal()).)#"  , py::arg("theName"))
        .def("SetReal",
             (void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const Standard_Real ) ) static_cast<void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const Standard_Real ) >(&TDataStd_NamedData::SetReal),
             R"#(Defines a named real. If the real already exists, it changes its value to <theReal>.)#"  , py::arg("theName"),  py::arg("theReal"))
        .def("GetRealsContainer",
             (const TDataStd_DataMapOfStringReal & (TDataStd_NamedData::*)() ) static_cast<const TDataStd_DataMapOfStringReal & (TDataStd_NamedData::*)() >(&TDataStd_NamedData::GetRealsContainer),
             R"#(Returns the internal container of named reals.)#" )
        .def("ChangeReals",
             (void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, Standard_Real, TCollection_ExtendedString> & ) ) static_cast<void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, Standard_Real, TCollection_ExtendedString> & ) >(&TDataStd_NamedData::ChangeReals),
             R"#(Replace the container content by new content of the <theReals>.)#"  , py::arg("theReals"))
        .def("HasStrings",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasStrings),
             R"#(Returns true if there are some named strings in the attribute.)#" )
        .def("HasString",
             (Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const) static_cast<Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const>(&TDataStd_NamedData::HasString),
             R"#(Returns true if the attribute contains this named string.)#"  , py::arg("theName"))
        .def("GetString",
             (const TCollection_ExtendedString & (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) ) static_cast<const TCollection_ExtendedString & (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) >(&TDataStd_NamedData::GetString),
             R"#(Returns the named string. It returns an empty string if there is no such a named string (use HasString()).)#"  , py::arg("theName"))
        .def("SetString",
             (void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const TCollection_ExtendedString & ) >(&TDataStd_NamedData::SetString),
             R"#(Defines a named string. If the string already exists, it changes its value to <theString>.)#"  , py::arg("theName"),  py::arg("theString"))
        .def("GetStringsContainer",
             (const TDataStd_DataMapOfStringString & (TDataStd_NamedData::*)() ) static_cast<const TDataStd_DataMapOfStringString & (TDataStd_NamedData::*)() >(&TDataStd_NamedData::GetStringsContainer),
             R"#(Returns the internal container of named strings.)#" )
        .def("ChangeStrings",
             (void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, TCollection_ExtendedString, TCollection_ExtendedString> & ) ) static_cast<void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, TCollection_ExtendedString, TCollection_ExtendedString> & ) >(&TDataStd_NamedData::ChangeStrings),
             R"#(Replace the container content by new content of the <theStrings>.)#"  , py::arg("theStrings"))
        .def("HasBytes",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasBytes),
             R"#(Returns true if there are some named bytes in the attribute.)#" )
        .def("HasByte",
             (Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const) static_cast<Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const>(&TDataStd_NamedData::HasByte),
             R"#(Returns true if the attribute contains this named byte.)#"  , py::arg("theName"))
        .def("GetByte",
             (Standard_Byte (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) ) static_cast<Standard_Byte (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) >(&TDataStd_NamedData::GetByte),
             R"#(Returns the named byte. It returns 0 if there is no such a named byte (use HasByte()).)#"  , py::arg("theName"))
        .def("SetByte",
             (void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const Standard_Byte ) ) static_cast<void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const Standard_Byte ) >(&TDataStd_NamedData::SetByte),
             R"#(Defines a named byte. If the byte already exists, it changes its value to <theByte>.)#"  , py::arg("theName"),  py::arg("theByte"))
        .def("GetBytesContainer",
             (const TDataStd_DataMapOfStringByte & (TDataStd_NamedData::*)() ) static_cast<const TDataStd_DataMapOfStringByte & (TDataStd_NamedData::*)() >(&TDataStd_NamedData::GetBytesContainer),
             R"#(Returns the internal container of named bytes.)#" )
        .def("ChangeBytes",
             (void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, Standard_Byte, TCollection_ExtendedString> & ) ) static_cast<void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, Standard_Byte, TCollection_ExtendedString> & ) >(&TDataStd_NamedData::ChangeBytes),
             R"#(Replace the container content by new content of the <theBytes>.)#"  , py::arg("theBytes"))
        .def("HasArraysOfIntegers",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasArraysOfIntegers),
             R"#(Returns true if there are some named arrays of integer values in the attribute.)#" )
        .def("HasArrayOfIntegers",
             (Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const) static_cast<Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const>(&TDataStd_NamedData::HasArrayOfIntegers),
             R"#(Returns true if the attribute contains this named array of integer values.)#"  , py::arg("theName"))
        .def("GetArrayOfIntegers",
             (const opencascade::handle<TColStd_HArray1OfInteger> & (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) ) static_cast<const opencascade::handle<TColStd_HArray1OfInteger> & (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) >(&TDataStd_NamedData::GetArrayOfIntegers),
             R"#(Returns the named array of integer values. It returns a NULL Handle if there is no such a named array of integers (use HasArrayOfIntegers()).)#"  , py::arg("theName"))
        .def("SetArrayOfIntegers",
             (void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const opencascade::handle<TColStd_HArray1OfInteger> & ) ) static_cast<void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const opencascade::handle<TColStd_HArray1OfInteger> & ) >(&TDataStd_NamedData::SetArrayOfIntegers),
             R"#(Defines a named array of integer values. If the array already exists, it changes its value to <theArrayOfIntegers>.)#"  , py::arg("theName"),  py::arg("theArrayOfIntegers"))
        .def("GetArraysOfIntegersContainer",
             (const TDataStd_DataMapOfStringHArray1OfInteger & (TDataStd_NamedData::*)() ) static_cast<const TDataStd_DataMapOfStringHArray1OfInteger & (TDataStd_NamedData::*)() >(&TDataStd_NamedData::GetArraysOfIntegersContainer),
             R"#(Returns the internal container of named arrays of integer values.)#" )
        .def("ChangeArraysOfIntegers",
             (void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, opencascade::handle<TColStd_HArray1OfInteger>, TCollection_ExtendedString> & ) ) static_cast<void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, opencascade::handle<TColStd_HArray1OfInteger>, TCollection_ExtendedString> & ) >(&TDataStd_NamedData::ChangeArraysOfIntegers),
             R"#(Replace the container content by new content of the <theArraysOfIntegers>.)#"  , py::arg("theArraysOfIntegers"))
        .def("HasArraysOfReals",
             (Standard_Boolean (TDataStd_NamedData::*)() const) static_cast<Standard_Boolean (TDataStd_NamedData::*)() const>(&TDataStd_NamedData::HasArraysOfReals),
             R"#(Returns true if there are some named arrays of real values in the attribute.)#" )
        .def("HasArrayOfReals",
             (Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const) static_cast<Standard_Boolean (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) const>(&TDataStd_NamedData::HasArrayOfReals),
             R"#(Returns true if the attribute contains this named array of real values.)#"  , py::arg("theName"))
        .def("GetArrayOfReals",
             (const opencascade::handle<TColStd_HArray1OfReal> & (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) ) static_cast<const opencascade::handle<TColStd_HArray1OfReal> & (TDataStd_NamedData::*)( const TCollection_ExtendedString & ) >(&TDataStd_NamedData::GetArrayOfReals),
             R"#(Returns the named array of real values. It returns a NULL Handle if there is no such a named array of reals (use HasArrayOfReals()).)#"  , py::arg("theName"))
        .def("SetArrayOfReals",
             (void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const opencascade::handle<TColStd_HArray1OfReal> & ) ) static_cast<void (TDataStd_NamedData::*)( const TCollection_ExtendedString & , const opencascade::handle<TColStd_HArray1OfReal> & ) >(&TDataStd_NamedData::SetArrayOfReals),
             R"#(Defines a named array of real values. If the array already exists, it changes its value to <theArrayOfReals>.)#"  , py::arg("theName"),  py::arg("theArrayOfReals"))
        .def("GetArraysOfRealsContainer",
             (const TDataStd_DataMapOfStringHArray1OfReal & (TDataStd_NamedData::*)() ) static_cast<const TDataStd_DataMapOfStringHArray1OfReal & (TDataStd_NamedData::*)() >(&TDataStd_NamedData::GetArraysOfRealsContainer),
             R"#(Returns the internal container of named arrays of real values.)#" )
        .def("ChangeArraysOfReals",
             (void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, opencascade::handle<TColStd_HArray1OfReal>, TCollection_ExtendedString> & ) ) static_cast<void (TDataStd_NamedData::*)(  const NCollection_DataMap<TCollection_ExtendedString, opencascade::handle<TColStd_HArray1OfReal>, TCollection_ExtendedString> & ) >(&TDataStd_NamedData::ChangeArraysOfReals),
             R"#(Replace the container content by new content of the <theArraysOfReals>.)#"  , py::arg("theArraysOfReals"))
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_NamedData::GetID),
                    R"#(Static methods ============== Returns the ID of the named data attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_NamedData> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_NamedData> (*)( const TDF_Label & ) >(&TDataStd_NamedData::Set),
                    R"#(Finds or creates a named data attribute.)#"  , py::arg("label"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_NamedData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_NamedData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_NoteBook ,opencascade::handle<TDataStd_NoteBook> , TDF_Attribute>>(m.attr("TDataStd_NoteBook"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Append",
             (opencascade::handle<TDataStd_Real> (TDataStd_NoteBook::*)( const Standard_Real , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_Real> (TDataStd_NoteBook::*)( const Standard_Real , const Standard_Boolean ) >(&TDataStd_NoteBook::Append),
             R"#(Tool to Create an Integer attribute from <value>, Insert it in a new son label of <me>. The Real attribute is returned.)#"  , py::arg("value"),  py::arg("isExported")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Append",
             (opencascade::handle<TDataStd_Integer> (TDataStd_NoteBook::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_Integer> (TDataStd_NoteBook::*)( const Standard_Integer , const Standard_Boolean ) >(&TDataStd_NoteBook::Append),
             R"#(Tool to Create an Real attribute from <value>, Insert it in a new son label of <me>. The Integer attribute is returned.)#"  , py::arg("value"),  py::arg("isExported")=static_cast<const Standard_Boolean>(Standard_False))
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
        .def_static("Find_s",
                    (Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataStd_NoteBook> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataStd_NoteBook> & ) >(&TDataStd_NoteBook::Find),
                    R"#(class methods ============= try to retrieve a NoteBook attribute at <current> label or in fathers label of <current>. Returns True if found and set <N>.)#"  , py::arg("current"),  py::arg("N"))
        .def_static("New_s",
                    (opencascade::handle<TDataStd_NoteBook> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_NoteBook> (*)( const TDF_Label & ) >(&TDataStd_NoteBook::New),
                    R"#(Create an enpty NoteBook attribute, located at <label>. Raises if <label> has attribute)#"  , py::arg("label"))
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_NoteBook::GetID),
                    R"#(NoteBook methods ===============)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_NoteBook::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_NoteBook::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Real ,opencascade::handle<TDataStd_Real> , TDF_Attribute>>(m.attr("TDataStd_Real"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetDimension",
             (void (TDataStd_Real::*)( const TDataStd_RealEnum ) ) static_cast<void (TDataStd_Real::*)( const TDataStd_RealEnum ) >(&TDataStd_Real::SetDimension),
             R"#(Obsolete method that will be removed in next versions. This field is not supported in the persistence mechanism.)#"  , py::arg("DIM"))
        .def("GetDimension",
             (TDataStd_RealEnum (TDataStd_Real::*)() const) static_cast<TDataStd_RealEnum (TDataStd_Real::*)() const>(&TDataStd_Real::GetDimension),
             R"#(Obsolete method that will be removed in next versions. This field is not supported in the persistence mechanism.)#" )
        .def("Set",
             (void (TDataStd_Real::*)( const Standard_Real ) ) static_cast<void (TDataStd_Real::*)( const Standard_Real ) >(&TDataStd_Real::Set),
             R"#(Sets the real number V.)#"  , py::arg("V"))
        .def("SetID",
             (void (TDataStd_Real::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_Real::*)( const Standard_GUID & ) >(&TDataStd_Real::SetID),
             R"#(Sets the explicit GUID for the attribute.)#"  , py::arg("guid"))
        .def("SetID",
             (void (TDataStd_Real::*)() ) static_cast<void (TDataStd_Real::*)() >(&TDataStd_Real::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Get",
             (Standard_Real (TDataStd_Real::*)() const) static_cast<Standard_Real (TDataStd_Real::*)() const>(&TDataStd_Real::Get),
             R"#(Returns the real number value contained in the attribute.)#" )
        .def("IsCaptured",
             (Standard_Boolean (TDataStd_Real::*)() const) static_cast<Standard_Boolean (TDataStd_Real::*)() const>(&TDataStd_Real::IsCaptured),
             R"#(Returns True if there is a reference on the same label)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Real::GetID),
                    R"#(class methods ============= Returns the default GUID for real numbers.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Real> (*)( const TDF_Label & , const Standard_Real ) ) static_cast<opencascade::handle<TDataStd_Real> (*)( const TDF_Label & , const Standard_Real ) >(&TDataStd_Real::Set),
                    R"#(Finds, or creates, a Real attribute with default GUID and sets <value>. The Real attribute is returned. The Real dimension is Scalar by default. Use SetDimension to overwrite. Real methods ============)#"  , py::arg("label"),  py::arg("value"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Real> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Real ) ) static_cast<opencascade::handle<TDataStd_Real> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Real ) >(&TDataStd_Real::Set),
                    R"#(Finds, or creates, a Real attribute with explicit GUID and sets <value>. The Real attribute is returned. Real methods ============)#"  , py::arg("label"),  py::arg("guid"),  py::arg("value"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Real::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Real::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_RealArray ,opencascade::handle<TDataStd_RealArray> , TDF_Attribute>>(m.attr("TDataStd_RealArray"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TDataStd_RealArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::DynamicType),
             R"#(None)#" )
        .def("Init",
             (void (TDataStd_RealArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TDataStd_RealArray::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_RealArray::Init),
             R"#(Initialize the inner array with bounds from <lower> to <upper>)#"  , py::arg("lower"),  py::arg("upper"))
        .def("SetID",
             (void (TDataStd_RealArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_RealArray::*)( const Standard_GUID & ) >(&TDataStd_RealArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_RealArray::*)() ) static_cast<void (TDataStd_RealArray::*)() >(&TDataStd_RealArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("SetValue",
             (void (TDataStd_RealArray::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (TDataStd_RealArray::*)( const Standard_Integer , const Standard_Real ) >(&TDataStd_RealArray::SetValue),
             R"#(Sets the <Index>th element of the array to <Value> OutOfRange exception is raised if <Index> doesn't respect Lower and Upper bounds of the internal array.)#"  , py::arg("Index"),  py::arg("Value"))
        .def("Value",
             (Standard_Real (TDataStd_RealArray::*)( const Standard_Integer ) const) static_cast<Standard_Real (TDataStd_RealArray::*)( const Standard_Integer ) const>(&TDataStd_RealArray::Value),
             R"#(Return the value of the <Index>th element of the array)#"  , py::arg("Index"))
        .def("Lower",
             (Standard_Integer (TDataStd_RealArray::*)() const) static_cast<Standard_Integer (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::Lower),
             R"#(Returns the lower boundary of the array.)#" )
        .def("Upper",
             (Standard_Integer (TDataStd_RealArray::*)() const) static_cast<Standard_Integer (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::Upper),
             R"#(Returns the upper boundary of the array.)#" )
        .def("Length",
             (Standard_Integer (TDataStd_RealArray::*)() const) static_cast<Standard_Integer (TDataStd_RealArray::*)() const>(&TDataStd_RealArray::Length),
             R"#(Returns the number of elements of the array of reals in terms of the number of elements it contains.)#" )
        .def("ChangeArray",
             (void (TDataStd_RealArray::*)( const opencascade::handle<TColStd_HArray1OfReal> & , const Standard_Boolean ) ) static_cast<void (TDataStd_RealArray::*)( const opencascade::handle<TColStd_HArray1OfReal> & , const Standard_Boolean ) >(&TDataStd_RealArray::ChangeArray),
             R"#(Sets the inner array <myValue> of the RealArray attribute to <newArray>. If value of <newArray> differs from <myValue>, Backup performed and myValue refers to new instance of HArray1OfReal that holds <newArray> values If <isCheckItems> equal True each item of <newArray> will be checked with each item of <myValue> for coincidence (to avoid backup).)#"  , py::arg("newArray"),  py::arg("isCheckItems")=static_cast<const Standard_Boolean>(Standard_True))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_RealArray::get_type_descriptor),
                    R"#(None)#" )
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_RealArray::GetID),
                    R"#(class methods ============= Returns the GUID for arrays of reals.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_RealArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_RealArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_RealArray::Set),
                    R"#(Finds or creates on the <label> a real array attribute with the specified <lower> and <upper> boundaries. If <isDelta> == False, DefaultDeltaOnModification is used. If <isDelta> == True, DeltaOnModification of the current attribute is used. If attribute is already set, input parameter <isDelta> is refused and the found attribute returned.)#"  , py::arg("label"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_RealArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<opencascade::handle<TDataStd_RealArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TDataStd_RealArray::Set),
                    R"#(Finds, or creates, an RealArray attribute with explicit user defined <guid>. The RealArray attribute is returned.)#"  , py::arg("label"),  py::arg("theGuid"),  py::arg("lower"),  py::arg("upper"),  py::arg("isDelta")=static_cast<const Standard_Boolean>(Standard_False))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_RealList ,opencascade::handle<TDataStd_RealList> , TDF_Attribute>>(m.attr("TDataStd_RealList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TDataStd_RealList::*)() const) static_cast<Standard_Boolean (TDataStd_RealList::*)() const>(&TDataStd_RealList::IsEmpty),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TDataStd_RealList::*)() const) static_cast<Standard_Integer (TDataStd_RealList::*)() const>(&TDataStd_RealList::Extent),
             R"#(None)#" )
        .def("Prepend",
             (void (TDataStd_RealList::*)( const Standard_Real ) ) static_cast<void (TDataStd_RealList::*)( const Standard_Real ) >(&TDataStd_RealList::Prepend),
             R"#(None)#"  , py::arg("value"))
        .def("Append",
             (void (TDataStd_RealList::*)( const Standard_Real ) ) static_cast<void (TDataStd_RealList::*)( const Standard_Real ) >(&TDataStd_RealList::Append),
             R"#(None)#"  , py::arg("value"))
        .def("SetID",
             (void (TDataStd_RealList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_RealList::*)( const Standard_GUID & ) >(&TDataStd_RealList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_RealList::*)() ) static_cast<void (TDataStd_RealList::*)() >(&TDataStd_RealList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_RealList::*)( const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (TDataStd_RealList::*)( const Standard_Real , const Standard_Real ) >(&TDataStd_RealList::InsertBefore),
             R"#(Inserts the <value> before the first meet of <before_value>.)#"  , py::arg("value"),  py::arg("before_value"))
        .def("InsertBeforeByIndex",
             (Standard_Boolean (TDataStd_RealList::*)( const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Boolean (TDataStd_RealList::*)( const Standard_Integer , const Standard_Real ) >(&TDataStd_RealList::InsertBeforeByIndex),
             R"#(Inserts the <value> before the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("before_value"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_RealList::*)( const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (TDataStd_RealList::*)( const Standard_Real , const Standard_Real ) >(&TDataStd_RealList::InsertAfter),
             R"#(Inserts the <value> after the first meet of <after_value>.)#"  , py::arg("value"),  py::arg("after_value"))
        .def("InsertAfterByIndex",
             (Standard_Boolean (TDataStd_RealList::*)( const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Boolean (TDataStd_RealList::*)( const Standard_Integer , const Standard_Real ) >(&TDataStd_RealList::InsertAfterByIndex),
             R"#(Inserts the <value> after the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("after_value"))
        .def("Remove",
             (Standard_Boolean (TDataStd_RealList::*)( const Standard_Real ) ) static_cast<Standard_Boolean (TDataStd_RealList::*)( const Standard_Real ) >(&TDataStd_RealList::Remove),
             R"#(Removes the first meet of the <value>.)#"  , py::arg("value"))
        .def("RemoveByIndex",
             (Standard_Boolean (TDataStd_RealList::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_RealList::*)( const Standard_Integer ) >(&TDataStd_RealList::RemoveByIndex),
             R"#(Removes a value at <index> position.)#"  , py::arg("index"))
        .def("Clear",
             (void (TDataStd_RealList::*)() ) static_cast<void (TDataStd_RealList::*)() >(&TDataStd_RealList::Clear),
             R"#(None)#" )
        .def("First",
             (Standard_Real (TDataStd_RealList::*)() const) static_cast<Standard_Real (TDataStd_RealList::*)() const>(&TDataStd_RealList::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Real (TDataStd_RealList::*)() const) static_cast<Standard_Real (TDataStd_RealList::*)() const>(&TDataStd_RealList::Last),
             R"#(None)#" )
        .def("List",
             (const TColStd_ListOfReal & (TDataStd_RealList::*)() const) static_cast<const TColStd_ListOfReal & (TDataStd_RealList::*)() const>(&TDataStd_RealList::List),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_RealList::GetID),
                    R"#(Static methods ============== Returns the ID of the list of doubles attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_RealList> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_RealList> (*)( const TDF_Label & ) >(&TDataStd_RealList::Set),
                    R"#(Finds or creates a list of double values attribute.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_RealList> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataStd_RealList> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataStd_RealList::Set),
                    R"#(Finds or creates a list of double values attribute with explicit user defined <guid>.)#"  , py::arg("label"),  py::arg("theGuid"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_RealList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_RealList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ReferenceArray ,opencascade::handle<TDataStd_ReferenceArray> , TDF_Attribute>>(m.attr("TDataStd_ReferenceArray"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (TDataStd_ReferenceArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TDataStd_ReferenceArray::*)( const Standard_Integer , const Standard_Integer ) >(&TDataStd_ReferenceArray::Init),
             R"#(Initialize the inner array with bounds from <lower> to <upper>)#"  , py::arg("lower"),  py::arg("upper"))
        .def("SetValue",
             (void (TDataStd_ReferenceArray::*)( const Standard_Integer , const TDF_Label & ) ) static_cast<void (TDataStd_ReferenceArray::*)( const Standard_Integer , const TDF_Label & ) >(&TDataStd_ReferenceArray::SetValue),
             R"#(Sets the <Index>th element of the array to <Value> OutOfRange exception is raised if <Index> doesn't respect Lower and Upper bounds of the internal array.)#"  , py::arg("index"),  py::arg("value"))
        .def("SetID",
             (void (TDataStd_ReferenceArray::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ReferenceArray::*)( const Standard_GUID & ) >(&TDataStd_ReferenceArray::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ReferenceArray::*)() ) static_cast<void (TDataStd_ReferenceArray::*)() >(&TDataStd_ReferenceArray::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("Value",
             (TDF_Label (TDataStd_ReferenceArray::*)( const Standard_Integer ) const) static_cast<TDF_Label (TDataStd_ReferenceArray::*)( const Standard_Integer ) const>(&TDataStd_ReferenceArray::Value),
             R"#(Returns the value of the <Index>th element of the array.)#"  , py::arg("Index"))
        .def("Lower",
             (Standard_Integer (TDataStd_ReferenceArray::*)() const) static_cast<Standard_Integer (TDataStd_ReferenceArray::*)() const>(&TDataStd_ReferenceArray::Lower),
             R"#(Returns the lower boundary of the array.)#" )
        .def("Upper",
             (Standard_Integer (TDataStd_ReferenceArray::*)() const) static_cast<Standard_Integer (TDataStd_ReferenceArray::*)() const>(&TDataStd_ReferenceArray::Upper),
             R"#(Returns the upper boundary of the array.)#" )
        .def("Length",
             (Standard_Integer (TDataStd_ReferenceArray::*)() const) static_cast<Standard_Integer (TDataStd_ReferenceArray::*)() const>(&TDataStd_ReferenceArray::Length),
             R"#(Returns the number of elements in the array.)#" )
        .def("InternalArray",
             (const opencascade::handle<TDataStd_HLabelArray1> & (TDataStd_ReferenceArray::*)() const) static_cast<const opencascade::handle<TDataStd_HLabelArray1> & (TDataStd_ReferenceArray::*)() const>(&TDataStd_ReferenceArray::InternalArray),
             R"#(None)#" )
        .def("SetInternalArray",
             (void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDataStd_HLabelArray1> & , const Standard_Boolean ) ) static_cast<void (TDataStd_ReferenceArray::*)( const opencascade::handle<TDataStd_HLabelArray1> & , const Standard_Boolean ) >(&TDataStd_ReferenceArray::SetInternalArray),
             R"#(None)#"  , py::arg("values"),  py::arg("isCheckItems")=static_cast<const Standard_Boolean>(Standard_True))
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_ReferenceArray::GetID),
                    R"#(Static methods ============== Returns the ID of the array of references (labels) attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ReferenceArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer ) ) static_cast<opencascade::handle<TDataStd_ReferenceArray> (*)( const TDF_Label & , const Standard_Integer , const Standard_Integer ) >(&TDataStd_ReferenceArray::Set),
                    R"#(Finds or creates an array of reference values (labels) attribute.)#"  , py::arg("label"),  py::arg("lower"),  py::arg("upper"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ReferenceArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer ) ) static_cast<opencascade::handle<TDataStd_ReferenceArray> (*)( const TDF_Label & , const Standard_GUID & , const Standard_Integer , const Standard_Integer ) >(&TDataStd_ReferenceArray::Set),
                    R"#(Finds or creates an array of reference values (labels) attribute with explicit user defined <guid>.)#"  , py::arg("label"),  py::arg("theGuid"),  py::arg("lower"),  py::arg("upper"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ReferenceArray::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_ReferenceArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_ReferenceList ,opencascade::handle<TDataStd_ReferenceList> , TDF_Attribute>>(m.attr("TDataStd_ReferenceList"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (Standard_Boolean (TDataStd_ReferenceList::*)() const) static_cast<Standard_Boolean (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::IsEmpty),
             R"#(None)#" )
        .def("Extent",
             (Standard_Integer (TDataStd_ReferenceList::*)() const) static_cast<Standard_Integer (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::Extent),
             R"#(None)#" )
        .def("Prepend",
             (void (TDataStd_ReferenceList::*)( const TDF_Label & ) ) static_cast<void (TDataStd_ReferenceList::*)( const TDF_Label & ) >(&TDataStd_ReferenceList::Prepend),
             R"#(None)#"  , py::arg("value"))
        .def("Append",
             (void (TDataStd_ReferenceList::*)( const TDF_Label & ) ) static_cast<void (TDataStd_ReferenceList::*)( const TDF_Label & ) >(&TDataStd_ReferenceList::Append),
             R"#(None)#"  , py::arg("value"))
        .def("SetID",
             (void (TDataStd_ReferenceList::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_ReferenceList::*)( const Standard_GUID & ) >(&TDataStd_ReferenceList::SetID),
             R"#(Sets the explicit GUID (user defined) for the attribute.)#"  , py::arg("theGuid"))
        .def("SetID",
             (void (TDataStd_ReferenceList::*)() ) static_cast<void (TDataStd_ReferenceList::*)() >(&TDataStd_ReferenceList::SetID),
             R"#(Sets default GUID for the attribute.)#" )
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_ReferenceList::*)( const TDF_Label & , const TDF_Label & ) ) static_cast<Standard_Boolean (TDataStd_ReferenceList::*)( const TDF_Label & , const TDF_Label & ) >(&TDataStd_ReferenceList::InsertBefore),
             R"#(Inserts the <value> before the first meet of <before_value>.)#"  , py::arg("value"),  py::arg("before_value"))
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_ReferenceList::*)( const Standard_Integer , const TDF_Label & ) ) static_cast<Standard_Boolean (TDataStd_ReferenceList::*)( const Standard_Integer , const TDF_Label & ) >(&TDataStd_ReferenceList::InsertBefore),
             R"#(Inserts the label before the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("before_value"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_ReferenceList::*)( const TDF_Label & , const TDF_Label & ) ) static_cast<Standard_Boolean (TDataStd_ReferenceList::*)( const TDF_Label & , const TDF_Label & ) >(&TDataStd_ReferenceList::InsertAfter),
             R"#(Inserts the <value> after the first meet of <after_value>.)#"  , py::arg("value"),  py::arg("after_value"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_ReferenceList::*)( const Standard_Integer , const TDF_Label & ) ) static_cast<Standard_Boolean (TDataStd_ReferenceList::*)( const Standard_Integer , const TDF_Label & ) >(&TDataStd_ReferenceList::InsertAfter),
             R"#(Inserts the label after the <index> position. The indices start with 1 .. Extent().)#"  , py::arg("index"),  py::arg("after_value"))
        .def("Remove",
             (Standard_Boolean (TDataStd_ReferenceList::*)( const TDF_Label & ) ) static_cast<Standard_Boolean (TDataStd_ReferenceList::*)( const TDF_Label & ) >(&TDataStd_ReferenceList::Remove),
             R"#(Removes the first meet of the <value>.)#"  , py::arg("value"))
        .def("Remove",
             (Standard_Boolean (TDataStd_ReferenceList::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (TDataStd_ReferenceList::*)( const Standard_Integer ) >(&TDataStd_ReferenceList::Remove),
             R"#(Removes a label at "index" position.)#"  , py::arg("index"))
        .def("Clear",
             (void (TDataStd_ReferenceList::*)() ) static_cast<void (TDataStd_ReferenceList::*)() >(&TDataStd_ReferenceList::Clear),
             R"#(None)#" )
        .def("First",
             (const TDF_Label & (TDataStd_ReferenceList::*)() const) static_cast<const TDF_Label & (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::First),
             R"#(None)#" )
        .def("Last",
             (const TDF_Label & (TDataStd_ReferenceList::*)() const) static_cast<const TDF_Label & (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::Last),
             R"#(None)#" )
        .def("List",
             (const TDF_LabelList & (TDataStd_ReferenceList::*)() const) static_cast<const TDF_LabelList & (TDataStd_ReferenceList::*)() const>(&TDataStd_ReferenceList::List),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_ReferenceList::GetID),
                    R"#(Static methods ============== Returns the ID of the list of references (labels) attribute.)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ReferenceList> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_ReferenceList> (*)( const TDF_Label & ) >(&TDataStd_ReferenceList::Set),
                    R"#(Finds or creates a list of reference values (labels) attribute.)#"  , py::arg("label"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_ReferenceList> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataStd_ReferenceList> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataStd_ReferenceList::Set),
                    R"#(Finds or creates a list of reference values (labels) attribute with explicit user defined <guid>.)#"  , py::arg("label"),  py::arg("theGuid"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_ReferenceList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_ReferenceList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Relation ,opencascade::handle<TDataStd_Relation> , TDF_Attribute>>(m.attr("TDataStd_Relation"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Name",
             (TCollection_ExtendedString (TDataStd_Relation::*)() const) static_cast<TCollection_ExtendedString (TDataStd_Relation::*)() const>(&TDataStd_Relation::Name),
             R"#(build and return the relation name)#" )
        .def("SetRelation",
             (void (TDataStd_Relation::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_Relation::*)( const TCollection_ExtendedString & ) >(&TDataStd_Relation::SetRelation),
             R"#(None)#"  , py::arg("E"))
        .def("GetRelation",
             (const TCollection_ExtendedString & (TDataStd_Relation::*)() const) static_cast<const TCollection_ExtendedString & (TDataStd_Relation::*)() const>(&TDataStd_Relation::GetRelation),
             R"#(None)#" )
        .def("GetVariables",
             (TDF_AttributeList & (TDataStd_Relation::*)() ) static_cast<TDF_AttributeList & (TDataStd_Relation::*)() >(&TDataStd_Relation::GetVariables),
             R"#(None)#" )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Relation::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Relation> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_Relation> (*)( const TDF_Label & ) >(&TDataStd_Relation::Set),
                    R"#(Find, or create, an Relation attribute. Real methods ============)#"  , py::arg("label"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Relation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Relation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Tick ,opencascade::handle<TDataStd_Tick> , TDF_Attribute>>(m.attr("TDataStd_Tick"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Tick::GetID),
                    R"#(Static methods ==============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Tick> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_Tick> (*)( const TDF_Label & ) >(&TDataStd_Tick::Set),
                    R"#(Find, or create, a Tick attribute. Tick methods ============)#"  , py::arg("label"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Tick::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Tick::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_TreeNode ,opencascade::handle<TDataStd_TreeNode> , TDF_Attribute>>(m.attr("TDataStd_TreeNode"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Append",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::Append),
             R"#(Insert the TreeNode <Child> as last child of <me>. If the insertion is successful <me> becomes the Father of <Child>.)#"  , py::arg("Child"))
        .def("Prepend",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::Prepend),
             R"#(Insert the the TreeNode <Child> as first child of <me>. If the insertion is successful <me> becomes the Father of <Child>)#"  , py::arg("Child"))
        .def("InsertBefore",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::InsertBefore),
             R"#(Inserts the TreeNode <Node> before <me>. If insertion is successful <me> and <Node> belongs to the same Father.)#"  , py::arg("Node"))
        .def("InsertAfter",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::InsertAfter),
             R"#(Inserts the TreeNode <Node> after <me>. If insertion is successful <me> and <Node> belongs to the same Father.)#"  , py::arg("Node"))
        .def("Remove",
             (Standard_Boolean (TDataStd_TreeNode::*)() ) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() >(&TDataStd_TreeNode::Remove),
             R"#(Removes this tree node attribute from its father node. The result is that this attribute becomes a root node.)#" )
        .def("Depth",
             (Standard_Integer (TDataStd_TreeNode::*)() const) static_cast<Standard_Integer (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::Depth),
             R"#(Returns the depth of this tree node in the overall tree node structure. In other words, the number of father tree nodes of this one is returned.)#" )
        .def("NbChildren",
             (Standard_Integer (TDataStd_TreeNode::*)( const Standard_Boolean ) const) static_cast<Standard_Integer (TDataStd_TreeNode::*)( const Standard_Boolean ) const>(&TDataStd_TreeNode::NbChildren),
             R"#(Returns the number of child nodes. If <allLevels> is true, the method counts children of all levels (children of children ...))#"  , py::arg("allLevels")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsAscendant",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const>(&TDataStd_TreeNode::IsAscendant),
             R"#(Returns true if this tree node attribute is an ascendant of of. In other words, if it is a father or the father of a father of of.)#"  , py::arg("of"))
        .def("IsDescendant",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const>(&TDataStd_TreeNode::IsDescendant),
             R"#(Returns true if this tree node attribute is a descendant of of. In other words, if it is a child or the child of a child of of.)#"  , py::arg("of"))
        .def("IsRoot",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::IsRoot),
             R"#(Returns true if this tree node attribute is the ultimate father in the tree.)#" )
        .def("Root",
             (opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const) static_cast<opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::Root),
             R"#(Returns the ultimate father of this tree node attribute.)#" )
        .def("IsFather",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const>(&TDataStd_TreeNode::IsFather),
             R"#(Returns true if this tree node attribute is a father of of.)#"  , py::arg("of"))
        .def("IsChild",
             (Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) const>(&TDataStd_TreeNode::IsChild),
             R"#(Returns true if this tree node attribute is a child of of.)#"  , py::arg("of"))
        .def("HasFather",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasFather),
             R"#(Returns true if this tree node attribute has a father tree node.)#" )
        .def("Father",
             (opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const) static_cast<opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::Father),
             R"#(Returns the father TreeNode of <me>. Null if root.)#" )
        .def("HasNext",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasNext),
             R"#(Returns true if this tree node attribute has a next tree node.)#" )
        .def("Next",
             (opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const) static_cast<opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::Next),
             R"#(Returns the next tree node in this tree node attribute. Warning This tree node is null if it is the last one in this tree node attribute.Returns the next TreeNode of <me>. Null if last.)#" )
        .def("HasPrevious",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasPrevious),
             R"#(Returns true if this tree node attribute has a previous tree node.)#" )
        .def("Previous",
             (opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const) static_cast<opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::Previous),
             R"#(Returns the previous tree node of this tree node attribute. Warning This tree node is null if it is the first one in this tree node attribute.)#" )
        .def("HasFirst",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasFirst),
             R"#(Returns true if this tree node attribute has a first child tree node.)#" )
        .def("First",
             (opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const) static_cast<opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::First),
             R"#(Returns the first child tree node in this tree node object.)#" )
        .def("HasLast",
             (Standard_Boolean (TDataStd_TreeNode::*)() const) static_cast<Standard_Boolean (TDataStd_TreeNode::*)() const>(&TDataStd_TreeNode::HasLast),
             R"#(Returns true if this tree node attribute has a last child tree node.)#" )
        .def("Last",
             (opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() ) static_cast<opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() >(&TDataStd_TreeNode::Last),
             R"#(Returns the last child tree node in this tree node object.)#" )
        .def("FindLast",
             (opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() ) static_cast<opencascade::handle<TDataStd_TreeNode> (TDataStd_TreeNode::*)() >(&TDataStd_TreeNode::FindLast),
             R"#(Returns the last child tree node in this tree node object. to set fields =============)#" )
        .def("SetTreeID",
             (void (TDataStd_TreeNode::*)( const Standard_GUID & ) ) static_cast<void (TDataStd_TreeNode::*)( const Standard_GUID & ) >(&TDataStd_TreeNode::SetTreeID),
             R"#(None)#"  , py::arg("explicitID"))
        .def("SetFather",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::SetFather),
             R"#(None)#"  , py::arg("F"))
        .def("SetNext",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::SetNext),
             R"#(None)#"  , py::arg("F"))
        .def("SetPrevious",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::SetPrevious),
             R"#(None)#"  , py::arg("F"))
        .def("SetFirst",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::SetFirst),
             R"#(None)#"  , py::arg("F"))
        .def("SetLast",
             (void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<void (TDataStd_TreeNode::*)( const opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::SetLast),
             R"#(TreeNode callback: ==================)#"  , py::arg("F"))
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
        .def_static("Find_s",
                    (Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataStd_TreeNode> & ) ) static_cast<Standard_Boolean (*)( const TDF_Label & , opencascade::handle<TDataStd_TreeNode> & ) >(&TDataStd_TreeNode::Find),
                    R"#(class methods working on the node =================================== Returns true if the tree node T is found on the label L. Otherwise, false is returned.)#"  , py::arg("L"),  py::arg("T"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_TreeNode> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_TreeNode> (*)( const TDF_Label & ) >(&TDataStd_TreeNode::Set),
                    R"#(Finds or Creates a TreeNode attribute on the label <L> with the default tree ID, returned by the method <GetDefaultTreeID>. Returns the created/found TreeNode attribute.)#"  , py::arg("L"))
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_TreeNode> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataStd_TreeNode> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataStd_TreeNode::Set),
                    R"#(Finds or Creates a TreeNode attribute on the label <L>, with an explicit tree ID. <ExplicitTreeID> is the ID returned by <TDF_Attribute::ID> method. Returns the found/created TreeNode attribute.)#"  , py::arg("L"),  py::arg("ExplicitTreeID"))
        .def_static("GetDefaultTreeID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_TreeNode::GetDefaultTreeID),
                    R"#(returns a default tree ID. this ID is used by the <Set> method without explicit tree ID. Instance methods: ================)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_TreeNode::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_TreeNode::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_UAttribute ,opencascade::handle<TDataStd_UAttribute> , TDF_Attribute>>(m.attr("TDataStd_UAttribute"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_UAttribute> (*)( const TDF_Label & , const Standard_GUID & ) ) static_cast<opencascade::handle<TDataStd_UAttribute> (*)( const TDF_Label & , const Standard_GUID & ) >(&TDataStd_UAttribute::Set),
                    R"#(api class methods ============= Find, or create, a UAttribute attribute with <LocalID> as Local GUID. The UAttribute attribute is returned. UAttribute methods ============)#"  , py::arg("label"),  py::arg("LocalID"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_UAttribute::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_UAttribute::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TDataStd_Variable ,opencascade::handle<TDataStd_Variable> , TDF_Attribute>>(m.attr("TDataStd_Variable"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Name",
             (void (TDataStd_Variable::*)( const TCollection_ExtendedString & ) ) static_cast<void (TDataStd_Variable::*)( const TCollection_ExtendedString & ) >(&TDataStd_Variable::Name),
             R"#(set or change the name of the variable, in myUnknown and my associated Name attribute.)#"  , py::arg("string"))
        .def("Name",
             (const TCollection_ExtendedString & (TDataStd_Variable::*)() const) static_cast<const TCollection_ExtendedString & (TDataStd_Variable::*)() const>(&TDataStd_Variable::Name),
             R"#(returns string stored in the associated Name attribute.)#" )
        .def("Set",
             (void (TDataStd_Variable::*)( const Standard_Real ) const) static_cast<void (TDataStd_Variable::*)( const Standard_Real ) const>(&TDataStd_Variable::Set),
             R"#(retrieve or create the associated real attribute and set the value <value>.)#"  , py::arg("value"))
        .def("Set",
             (void (TDataStd_Variable::*)( const Standard_Real , const TDataStd_RealEnum ) const) static_cast<void (TDataStd_Variable::*)( const Standard_Real , const TDataStd_RealEnum ) const>(&TDataStd_Variable::Set),
             R"#(Obsolete method that will be removed in next versions. The dimension argument is not supported in the persistence mechanism.)#"  , py::arg("value"),  py::arg("dimension"))
        .def("IsValued",
             (Standard_Boolean (TDataStd_Variable::*)() const) static_cast<Standard_Boolean (TDataStd_Variable::*)() const>(&TDataStd_Variable::IsValued),
             R"#(returns True if a Real attribute is associated.)#" )
        .def("Get",
             (Standard_Real (TDataStd_Variable::*)() const) static_cast<Standard_Real (TDataStd_Variable::*)() const>(&TDataStd_Variable::Get),
             R"#(returns value stored in associated Real attribute.)#" )
        .def("Real",
             (opencascade::handle<TDataStd_Real> (TDataStd_Variable::*)() const) static_cast<opencascade::handle<TDataStd_Real> (TDataStd_Variable::*)() const>(&TDataStd_Variable::Real),
             R"#(returns associated Real attribute.)#" )
        .def("IsAssigned",
             (Standard_Boolean (TDataStd_Variable::*)() const) static_cast<Standard_Boolean (TDataStd_Variable::*)() const>(&TDataStd_Variable::IsAssigned),
             R"#(returns True if an Expression attribute is associated. create(if doesn't exist), set and returns the assigned expression attribute.)#" )
        .def("Assign",
             (opencascade::handle<TDataStd_Expression> (TDataStd_Variable::*)() const) static_cast<opencascade::handle<TDataStd_Expression> (TDataStd_Variable::*)() const>(&TDataStd_Variable::Assign),
             R"#(create(if doesn't exist) and returns the assigned expression attribute. fill it after.)#" )
        .def("Desassign",
             (void (TDataStd_Variable::*)() const) static_cast<void (TDataStd_Variable::*)() const>(&TDataStd_Variable::Desassign),
             R"#(if <me> is assigned delete the associated expression attribute.)#" )
        .def("Expression",
             (opencascade::handle<TDataStd_Expression> (TDataStd_Variable::*)() const) static_cast<opencascade::handle<TDataStd_Expression> (TDataStd_Variable::*)() const>(&TDataStd_Variable::Expression),
             R"#(if <me> is assigned, returns associated Expression attribute.)#" )
        .def("IsCaptured",
             (Standard_Boolean (TDataStd_Variable::*)() const) static_cast<Standard_Boolean (TDataStd_Variable::*)() const>(&TDataStd_Variable::IsCaptured),
             R"#(shortcut for <Real()->IsCaptured()>)#" )
        .def("IsConstant",
             (Standard_Boolean (TDataStd_Variable::*)() const) static_cast<Standard_Boolean (TDataStd_Variable::*)() const>(&TDataStd_Variable::IsConstant),
             R"#(A constant value is not modified by regeneration.)#" )
        .def("Unit",
             (void (TDataStd_Variable::*)( const TCollection_AsciiString & ) ) static_cast<void (TDataStd_Variable::*)( const TCollection_AsciiString & ) >(&TDataStd_Variable::Unit),
             R"#(None)#"  , py::arg("unit"))
        .def("Unit",
             (const TCollection_AsciiString & (TDataStd_Variable::*)() const) static_cast<const TCollection_AsciiString & (TDataStd_Variable::*)() const>(&TDataStd_Variable::Unit),
             R"#(to read/write fields ===================)#" )
        .def("Constant",
             (void (TDataStd_Variable::*)( const Standard_Boolean ) ) static_cast<void (TDataStd_Variable::*)( const Standard_Boolean ) >(&TDataStd_Variable::Constant),
             R"#(if <status> is True, this variable will not be modified by the solver.)#"  , py::arg("status"))
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
        .def_static("GetID_s",
                    (const Standard_GUID & (*)() ) static_cast<const Standard_GUID & (*)() >(&TDataStd_Variable::GetID),
                    R"#(class methods =============)#" )
        .def_static("Set_s",
                    (opencascade::handle<TDataStd_Variable> (*)( const TDF_Label & ) ) static_cast<opencascade::handle<TDataStd_Variable> (*)( const TDF_Label & ) >(&TDataStd_Variable::Set),
                    R"#(Find, or create, a Variable attribute. Real methods ============)#"  , py::arg("label"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TDataStd_Variable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TDataStd_Variable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TDataStd_HDataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_Variable.hxx
// ./opencascade/TDataStd_BooleanArray.hxx
// ./opencascade/TDataStd_Tick.hxx
// ./opencascade/TDataStd_RealEnum.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringByte.hxx
// ./opencascade/TDataStd_DataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_ReferenceList.hxx
// ./opencascade/TDataStd_Relation.hxx
// ./opencascade/TDataStd_ExtStringArray.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfExtStringArray.hxx
// ./opencascade/TDataStd_HDataMapOfStringString.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_IntegerList.hxx
// ./opencascade/TDataStd_Integer.hxx
// ./opencascade/TDataStd_TreeNode.hxx
// ./opencascade/TDataStd_ReferenceArray.hxx
// ./opencascade/TDataStd_ListIteratorOfListOfByte.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfIntPackedMap.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfRealArray.hxx
// ./opencascade/TDataStd_RealList.hxx
// ./opencascade/TDataStd_HDataMapOfStringByte.hxx
// ./opencascade/TDataStd_Comment.hxx
// ./opencascade/TDataStd_Expression.hxx
// ./opencascade/TDataStd_IntegerArray.hxx
// ./opencascade/TDataStd_Current.hxx
// ./opencascade/TDataStd_DataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_HDataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfByteArray.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfIntArray.hxx
// ./opencascade/TDataStd_UAttribute.hxx
// ./opencascade/TDataStd_NamedData.hxx
// ./opencascade/TDataStd_Real.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringString.hxx
// ./opencascade/TDataStd_ChildNodeIterator.hxx
// ./opencascade/TDataStd_BooleanList.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringReal.hxx
// ./opencascade/TDataStd_HDataMapOfStringReal.hxx
// ./opencascade/TDataStd_Name.hxx
// ./opencascade/TDataStd_Directory.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_LabelArray1.hxx
// ./opencascade/TDataStd_PtrTreeNode.hxx
// ./opencascade/TDataStd_HDataMapOfStringInteger.hxx
// ./opencascade/TDataStd_NoteBook.hxx
// ./opencascade/TDataStd_AsciiString.hxx
// ./opencascade/TDataStd_ListIteratorOfListOfExtendedString.hxx
// ./opencascade/TDataStd_HLabelArray1.hxx
// ./opencascade/TDataStd_ByteArray.hxx
// ./opencascade/TDataStd_DataMapOfStringString.hxx
// ./opencascade/TDataStd_ListOfByte.hxx
// ./opencascade/TDataStd_ExtStringList.hxx
// ./opencascade/TDataStd_ListOfExtendedString.hxx
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
// ./opencascade/TDataStd_IntPackedMap.hxx
// ./opencascade/TDataStd.hxx
// ./opencascade/TDataStd_RealArray.hxx
// ./opencascade/TDataStd_DataMapOfStringByte.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Array1<TDF_Label>(m,"TDataStd_LabelArray1");
    register_template_NCollection_DataMap<TCollection_ExtendedString, TCollection_ExtendedString, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringString");
    register_template_NCollection_List<Standard_Byte>(m,"TDataStd_ListOfByte");
    register_template_NCollection_List<TCollection_ExtendedString>(m,"TDataStd_ListOfExtendedString");
    register_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Real, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringReal");
    register_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Byte, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringByte");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
