
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
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
#include <TDataStd_DeltaOnModificationOfExtStringArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Expression.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfByteArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_ChildNodeIterator.hxx>
#include <TDF_Label.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDataStd_ByteArray.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_Integer.hxx>
#include <TDF_RelocationTable.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_TreeNode.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_ExtStringArray.hxx>
#include <TDataStd_DeltaOnModificationOfIntArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfRealArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_IntegerArray.hxx>
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
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDataStd_RealArray.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_Label.hxx>
#include <Standard_GUID.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDataStd_DeltaOnModificationOfIntPackedMap.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Label.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <Standard_GUID.hxx>
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
// ./opencascade/TDataStd_DataMapOfStringByte.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_DataMapOfStringByte.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_DataMapOfStringHArray1OfInteger.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_ListOfByte.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_ListOfByte.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_ListOfExtendedString.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_ListOfExtendedString.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_DataMapOfStringString.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_DataMapOfStringString.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_LabelArray1.hxx
#include "NCollection.hxx"
// ./opencascade/TDataStd_DataMapOfStringHArray1OfReal.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TDataStd_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TDataStd", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<TDataStd_RealEnum>(m, "TDataStd_RealEnum",R"#(The terms of this enumeration define the semantics of a real number value.)#")
        .value("TDataStd_SCALAR",TDataStd_RealEnum::TDataStd_SCALAR)
        .value("TDataStd_LENGTH",TDataStd_RealEnum::TDataStd_LENGTH)
        .value("TDataStd_ANGULAR",TDataStd_RealEnum::TDataStd_ANGULAR).export_values();

//Python trampoline classes

// classes forward declarations only
    py::class_<TDataStd_Name ,opencascade::handle<TDataStd_Name>  , TDF_Attribute >(m,"TDataStd_Name",R"#(Used to define a name attribute containing a string which specifies the name.Used to define a name attribute containing a string which specifies the name.Used to define a name attribute containing a string which specifies the name.)#");
    py::class_<TDataStd_ExtStringArray ,opencascade::handle<TDataStd_ExtStringArray>  , TDF_Attribute >(m,"TDataStd_ExtStringArray",R"#(ExtStringArray Attribute. Handles an array of UNICODE strings (represented by the TCollection_ExtendedString class).ExtStringArray Attribute. Handles an array of UNICODE strings (represented by the TCollection_ExtendedString class).ExtStringArray Attribute. Handles an array of UNICODE strings (represented by the TCollection_ExtendedString class).)#");
    py::class_<TDataStd_HDataMapOfStringHArray1OfInteger ,opencascade::handle<TDataStd_HDataMapOfStringHArray1OfInteger>  , Standard_Transient >(m,"TDataStd_HDataMapOfStringHArray1OfInteger",R"#(Extension of TDataStd_DataMapOfStringHArray1OfInteger class to be manipulated by handle.Extension of TDataStd_DataMapOfStringHArray1OfInteger class to be manipulated by handle.)#");
    py::class_<TDataStd_ReferenceList ,opencascade::handle<TDataStd_ReferenceList>  , TDF_Attribute >(m,"TDataStd_ReferenceList",R"#(Contains a list of references.Contains a list of references.Contains a list of references.)#");
    py::class_<TDataStd_ExtStringList ,opencascade::handle<TDataStd_ExtStringList>  , TDF_Attribute >(m,"TDataStd_ExtStringList",R"#(Contains a list of ExtendedString.Contains a list of ExtendedString.Contains a list of ExtendedString.)#");
    py::class_<TDataStd_Integer ,opencascade::handle<TDataStd_Integer>  , TDF_Attribute >(m,"TDataStd_Integer",R"#(The basis to define an integer attribute.The basis to define an integer attribute.The basis to define an integer attribute.)#");
    py::class_<TDataStd_HDataMapOfStringByte ,opencascade::handle<TDataStd_HDataMapOfStringByte>  , Standard_Transient >(m,"TDataStd_HDataMapOfStringByte",R"#(Extension of TDataStd_DataMapOfStringByte class to be manipulated by handle.Extension of TDataStd_DataMapOfStringByte class to be manipulated by handle.)#");
    py::class_<TDataStd_DeltaOnModificationOfByteArray ,opencascade::handle<TDataStd_DeltaOnModificationOfByteArray>  , TDF_DeltaOnModification >(m,"TDataStd_DeltaOnModificationOfByteArray",R"#(This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.)#");
    py::class_<TDataStd_BooleanArray ,opencascade::handle<TDataStd_BooleanArray>  , TDF_Attribute >(m,"TDataStd_BooleanArray",R"#(An array of boolean values.An array of boolean values.An array of boolean values.)#");
    py::class_<TDataStd_NoteBook ,opencascade::handle<TDataStd_NoteBook>  , TDF_Attribute >(m,"TDataStd_NoteBook",R"#(NoteBook Object attributeNoteBook Object attributeNoteBook Object attribute)#");
    py::class_<TDataStd_Current ,opencascade::handle<TDataStd_Current>  , TDF_Attribute >(m,"TDataStd_Current",R"#(this attribute, located at root label, manage an access to a current label.this attribute, located at root label, manage an access to a current label.this attribute, located at root label, manage an access to a current label.)#");
    py::class_<TDataStd_IntegerArray ,opencascade::handle<TDataStd_IntegerArray>  , TDF_Attribute >(m,"TDataStd_IntegerArray",R"#(Contains an array of integers.Contains an array of integers.Contains an array of integers.)#");
    py::class_<TDataStd_RealArray ,opencascade::handle<TDataStd_RealArray>  , TDF_Attribute >(m,"TDataStd_RealArray",R"#(A framework for an attribute composed of a real number array.A framework for an attribute composed of a real number array.A framework for an attribute composed of a real number array.)#");
    py::class_<TDataStd_DeltaOnModificationOfIntArray ,opencascade::handle<TDataStd_DeltaOnModificationOfIntArray>  , TDF_DeltaOnModification >(m,"TDataStd_DeltaOnModificationOfIntArray",R"#(This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.)#");
    py::class_<TDataStd_ChildNodeIterator ,std::unique_ptr<TDataStd_ChildNodeIterator>  >(m,"TDataStd_ChildNodeIterator",R"#(Iterates on the ChildStepren step of a step, at the first level only. It is possible to ask the iterator to explore all the sub step levels of the given one, with the option "allLevels".)#");
    py::class_<TDataStd_DeltaOnModificationOfRealArray ,opencascade::handle<TDataStd_DeltaOnModificationOfRealArray>  , TDF_DeltaOnModification >(m,"TDataStd_DeltaOnModificationOfRealArray",R"#(This class provides default services for an AttributeDelta on a MODIFICATION actionThis class provides default services for an AttributeDelta on a MODIFICATION actionThis class provides default services for an AttributeDelta on a MODIFICATION action)#");
    py::class_<TDataStd_HDataMapOfStringReal ,opencascade::handle<TDataStd_HDataMapOfStringReal>  , Standard_Transient >(m,"TDataStd_HDataMapOfStringReal",R"#(Extension of TDataStd_DataMapOfStringReal class to be manipulated by handle.Extension of TDataStd_DataMapOfStringReal class to be manipulated by handle.)#");
    py::class_<TDataStd_ReferenceArray ,opencascade::handle<TDataStd_ReferenceArray>  , TDF_Attribute >(m,"TDataStd_ReferenceArray",R"#(Contains an array of references to the labels.Contains an array of references to the labels.Contains an array of references to the labels.)#");
    py::class_<TDataStd_Directory ,opencascade::handle<TDataStd_Directory>  , TDF_Attribute >(m,"TDataStd_Directory",R"#(Associates a directory in the data framework with a TDataStd_TagSource attribute. You can create a new directory label and add sub-directory or object labels to it,Associates a directory in the data framework with a TDataStd_TagSource attribute. You can create a new directory label and add sub-directory or object labels to it,Associates a directory in the data framework with a TDataStd_TagSource attribute. You can create a new directory label and add sub-directory or object labels to it,)#");
    py::class_<TDataStd_AsciiString ,opencascade::handle<TDataStd_AsciiString>  , TDF_Attribute >(m,"TDataStd_AsciiString",R"#(Used to define an AsciiString attribute containing a TCollection_AsciiStringUsed to define an AsciiString attribute containing a TCollection_AsciiStringUsed to define an AsciiString attribute containing a TCollection_AsciiString)#");
    py::class_<TDataStd_Comment ,opencascade::handle<TDataStd_Comment>  , TDF_Attribute >(m,"TDataStd_Comment",R"#(Comment attribute. may be associated to any label to store user comment.Comment attribute. may be associated to any label to store user comment.Comment attribute. may be associated to any label to store user comment.)#");
    py::class_<TDataStd ,std::unique_ptr<TDataStd>  >(m,"TDataStd",R"#(This package defines standard attributes for modelling. These allow you to create and modify labels and attributes for many basic data types. Standard topological and visualization attributes have also been created. To find an attribute attached to a specific label, you use the GUID of the type of attribute you are looking for. To do this, first find this information using the method GetID as follows: Standard_GUID anID = MyAttributeClass::GetID(); Then, use the method Find for the label as follows: Standard_Boolean HasAttribute = aLabel.Find(anID,anAttribute); Note For information on the relations between this component of OCAF and the others, refer to the OCAF User's Guide.)#");
    py::class_<TDataStd_Variable ,opencascade::handle<TDataStd_Variable>  , TDF_Attribute >(m,"TDataStd_Variable",R"#(Variable attribute. ==================Variable attribute. ==================Variable attribute. ==================)#");
    py::class_<TDataStd_ByteArray ,opencascade::handle<TDataStd_ByteArray>  , TDF_Attribute >(m,"TDataStd_ByteArray",R"#(An array of Byte (unsigned char) values.An array of Byte (unsigned char) values.An array of Byte (unsigned char) values.)#");
    py::class_<TDataStd_TreeNode ,opencascade::handle<TDataStd_TreeNode>  , TDF_Attribute >(m,"TDataStd_TreeNode",R"#(Allows you to define an explicit tree of labels which you can also edit. Without this class, the data structure cannot be fully edited. This service is required if for presentation purposes, you want to create an application with a tree which allows you to organize and link data as a function of application features.Allows you to define an explicit tree of labels which you can also edit. Without this class, the data structure cannot be fully edited. This service is required if for presentation purposes, you want to create an application with a tree which allows you to organize and link data as a function of application features.Allows you to define an explicit tree of labels which you can also edit. Without this class, the data structure cannot be fully edited. This service is required if for presentation purposes, you want to create an application with a tree which allows you to organize and link data as a function of application features.)#");
    py::class_<TDataStd_Relation ,opencascade::handle<TDataStd_Relation>  , TDF_Attribute >(m,"TDataStd_Relation",R"#(Relation attribute. ==================Relation attribute. ==================Relation attribute. ==================)#");
    py::class_<TDataStd_DeltaOnModificationOfExtStringArray ,opencascade::handle<TDataStd_DeltaOnModificationOfExtStringArray>  , TDF_DeltaOnModification >(m,"TDataStd_DeltaOnModificationOfExtStringArray",R"#(This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.)#");
    py::class_<TDataStd_RealList ,opencascade::handle<TDataStd_RealList>  , TDF_Attribute >(m,"TDataStd_RealList",R"#(Contains a list of doubles.Contains a list of doubles.Contains a list of doubles.)#");
    py::class_<TDataStd_UAttribute ,opencascade::handle<TDataStd_UAttribute>  , TDF_Attribute >(m,"TDataStd_UAttribute",R"#()#");
    py::class_<TDataStd_Real ,opencascade::handle<TDataStd_Real>  , TDF_Attribute >(m,"TDataStd_Real",R"#(The basis to define a real number attribute.The basis to define a real number attribute.The basis to define a real number attribute.)#");
    py::class_<TDataStd_HDataMapOfStringInteger ,opencascade::handle<TDataStd_HDataMapOfStringInteger>  , Standard_Transient >(m,"TDataStd_HDataMapOfStringInteger",R"#(Extension of TColStd_DataMapOfStringInteger class to be manipulated by handle.Extension of TColStd_DataMapOfStringInteger class to be manipulated by handle.)#");
    py::class_<TDataStd_HDataMapOfStringString ,opencascade::handle<TDataStd_HDataMapOfStringString>  , Standard_Transient >(m,"TDataStd_HDataMapOfStringString",R"#(Extension of TDataStd_DataMapOfStringString class to be manipulated by handle.Extension of TDataStd_DataMapOfStringString class to be manipulated by handle.)#");
    py::class_<TDataStd_HLabelArray1 ,std::unique_ptr<TDataStd_HLabelArray1>  >(m,"TDataStd_HLabelArray1",R"#()#");
    py::class_<TDataStd_Tick ,opencascade::handle<TDataStd_Tick>  , TDF_Attribute >(m,"TDataStd_Tick",R"#(Defines a boolean attribute. If it exists at a label - true, Otherwise - false.Defines a boolean attribute. If it exists at a label - true, Otherwise - false.Defines a boolean attribute. If it exists at a label - true, Otherwise - false.)#");
    py::class_<TDataStd_NamedData ,opencascade::handle<TDataStd_NamedData>  , TDF_Attribute >(m,"TDataStd_NamedData",R"#(Contains a named data.Contains a named data.Contains a named data.)#");
    py::class_<TDataStd_IntegerList ,opencascade::handle<TDataStd_IntegerList>  , TDF_Attribute >(m,"TDataStd_IntegerList",R"#(Contains a list of integers.Contains a list of integers.Contains a list of integers.)#");
    py::class_<TDataStd_Expression ,opencascade::handle<TDataStd_Expression>  , TDF_Attribute >(m,"TDataStd_Expression",R"#(Expression attribute. ====================Expression attribute. ====================Expression attribute. ====================)#");
    py::class_<TDataStd_BooleanList ,opencascade::handle<TDataStd_BooleanList>  , TDF_Attribute >(m,"TDataStd_BooleanList",R"#(Contains a list of bolleans.Contains a list of bolleans.Contains a list of bolleans.)#");
    py::class_<TDataStd_IntPackedMap ,opencascade::handle<TDataStd_IntPackedMap>  , TDF_Attribute >(m,"TDataStd_IntPackedMap",R"#(Attribute for storing TColStd_PackedMapOfIntegerAttribute for storing TColStd_PackedMapOfIntegerAttribute for storing TColStd_PackedMapOfInteger)#");
    py::class_<TDataStd_DeltaOnModificationOfIntPackedMap ,opencascade::handle<TDataStd_DeltaOnModificationOfIntPackedMap>  , TDF_DeltaOnModification >(m,"TDataStd_DeltaOnModificationOfIntPackedMap",R"#(This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.This class provides default services for an AttributeDelta on a MODIFICATION action.)#");
    py::class_<TDataStd_HDataMapOfStringHArray1OfReal ,opencascade::handle<TDataStd_HDataMapOfStringHArray1OfReal>  , Standard_Transient >(m,"TDataStd_HDataMapOfStringHArray1OfReal",R"#(Extension of TDataStd_DataMapOfStringHArray1OfReal class to be manipulated by handle.Extension of TDataStd_DataMapOfStringHArray1OfReal class to be manipulated by handle.)#");

// pre-register typdefs
// ./opencascade/TDataStd_Name.hxx
// ./opencascade/TDataStd.hxx
// ./opencascade/TDataStd_ExtStringArray.hxx
// ./opencascade/TDataStd_HDataMapOfStringString.hxx
// ./opencascade/TDataStd_HDataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_Variable.hxx
// ./opencascade/TDataStd_ReferenceList.hxx
// ./opencascade/TDataStd_ListIteratorOfListOfExtendedString.hxx
// ./opencascade/TDataStd_Expression.hxx
// ./opencascade/TDataStd_ExtStringList.hxx
// ./opencascade/TDataStd_ByteArray.hxx
// ./opencascade/TDataStd_Integer.hxx
// ./opencascade/TDataStd_HLabelArray1.hxx
// ./opencascade/TDataStd_HDataMapOfStringByte.hxx
// ./opencascade/TDataStd_TreeNode.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfByteArray.hxx
// ./opencascade/TDataStd_DataMapOfStringByte.hxx
    preregister_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Byte, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringByte");  
// ./opencascade/TDataStd_DeltaOnModificationOfIntPackedMap.hxx
// ./opencascade/TDataStd_DataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_BooleanArray.hxx
// ./opencascade/TDataStd_Relation.hxx
// ./opencascade/TDataStd_NoteBook.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringString.hxx
// ./opencascade/TDataStd_DataMapOfStringReal.hxx
    preregister_template_NCollection_DataMap<TCollection_ExtendedString, Standard_Real, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringReal");  
// ./opencascade/TDataStd_ListOfByte.hxx
    preregister_template_NCollection_List<Standard_Byte>(m,"TDataStd_ListOfByte");  
// ./opencascade/TDataStd_Tick.hxx
// ./opencascade/TDataStd_PtrTreeNode.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger.hxx
// ./opencascade/TDataStd_Current.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfExtStringArray.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringReal.hxx
// ./opencascade/TDataStd_IntegerArray.hxx
// ./opencascade/TDataStd_DataMapIteratorOfDataMapOfStringByte.hxx
// ./opencascade/TDataStd_ListOfExtendedString.hxx
    preregister_template_NCollection_List<TCollection_ExtendedString>(m,"TDataStd_ListOfExtendedString");  
// ./opencascade/TDataStd_BooleanList.hxx
// ./opencascade/TDataStd_RealArray.hxx
// ./opencascade/TDataStd_RealList.hxx
// ./opencascade/TDataStd_DataMapOfStringString.hxx
    preregister_template_NCollection_DataMap<TCollection_ExtendedString, TCollection_ExtendedString, TCollection_ExtendedString>(m,"TDataStd_DataMapOfStringString");  
// ./opencascade/TDataStd_RealEnum.hxx
// ./opencascade/TDataStd_LabelArray1.hxx
    preregister_template_NCollection_Array1<TDF_Label>(m,"TDataStd_LabelArray1");  
// ./opencascade/TDataStd_DeltaOnModificationOfIntArray.hxx
// ./opencascade/TDataStd_NamedData.hxx
// ./opencascade/TDataStd_DataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_ChildNodeIterator.hxx
// ./opencascade/TDataStd_UAttribute.hxx
// ./opencascade/TDataStd_DeltaOnModificationOfRealArray.hxx
// ./opencascade/TDataStd_HDataMapOfStringHArray1OfReal.hxx
// ./opencascade/TDataStd_HDataMapOfStringReal.hxx
// ./opencascade/TDataStd_Real.hxx
// ./opencascade/TDataStd_ReferenceArray.hxx
// ./opencascade/TDataStd_IntegerList.hxx
// ./opencascade/TDataStd_Directory.hxx
// ./opencascade/TDataStd_HDataMapOfStringInteger.hxx
// ./opencascade/TDataStd_AsciiString.hxx
// ./opencascade/TDataStd_IntPackedMap.hxx
// ./opencascade/TDataStd_ListIteratorOfListOfByte.hxx
// ./opencascade/TDataStd_Comment.hxx

};

// user-defined post-inclusion per module

// user-defined post
