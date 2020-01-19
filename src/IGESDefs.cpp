
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_DomainError.hxx>
#include <IGESDefs_GenericData.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_NullObject.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_AttributeTable.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <Standard_NullObject.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_AssociativityDef.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESDefs_Protocol.hxx>
#include <IGESDefs_AssociativityDef.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <IGESDefs_UnitsData.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESDefs_GenericData.hxx>
#include <IGESDefs_AttributeTable.hxx>
#include <IGESDefs_ToolAssociativityDef.hxx>
#include <IGESDefs_ToolMacroDef.hxx>
#include <IGESDefs_ToolUnitsData.hxx>
#include <IGESDefs_ToolAttributeDef.hxx>
#include <IGESDefs_ToolTabularData.hxx>
#include <IGESDefs_ToolGenericData.hxx>
#include <IGESDefs_ToolAttributeTable.hxx>
#include <IGESDefs_Protocol.hxx>
#include <IGESDefs_ReadWriteModule.hxx>
#include <IGESDefs_GeneralModule.hxx>
#include <IGESDefs_SpecificModule.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <Standard_DomainError.hxx>
#include <IGESDefs_UnitsData.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>

// module includes
#include <IGESDefs.hxx>
#include <IGESDefs_Array1OfTabularData.hxx>
#include <IGESDefs_AssociativityDef.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <IGESDefs_AttributeTable.hxx>
#include <IGESDefs_GeneralModule.hxx>
#include <IGESDefs_GenericData.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <IGESDefs_HArray1OfTabularData.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <IGESDefs_Protocol.hxx>
#include <IGESDefs_ReadWriteModule.hxx>
#include <IGESDefs_SpecificModule.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESDefs_ToolAssociativityDef.hxx>
#include <IGESDefs_ToolAttributeDef.hxx>
#include <IGESDefs_ToolAttributeTable.hxx>
#include <IGESDefs_ToolGenericData.hxx>
#include <IGESDefs_ToolMacroDef.hxx>
#include <IGESDefs_ToolTabularData.hxx>
#include <IGESDefs_ToolUnitsData.hxx>
#include <IGESDefs_UnitsData.hxx>

// template related includes
// ./opencascade/IGESDefs_Array1OfTabularData.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESDefs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESDefs"));


//Python trampoline classes

// classes

    register_default_constructor<IGESDefs , shared_ptr<IGESDefs>>(m,"IGESDefs");

    static_cast<py::class_<IGESDefs , shared_ptr<IGESDefs>  >>(m.attr("IGESDefs"))
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESDefs::Init),
                    R"#(Prepares dynamic data (Protocol, Modules) for this package)#" )
        .def_static("Protocol_s",
                    (opencascade::handle<IGESDefs_Protocol> (*)() ) static_cast<opencascade::handle<IGESDefs_Protocol> (*)() >(&IGESDefs::Protocol),
                    R"#(Returns the Protocol for this Package)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_AssociativityDef ,opencascade::handle<IGESDefs_AssociativityDef>  , IGESData_IGESEntity >>(m.attr("IGESDefs_AssociativityDef"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDefs_AssociativityDef::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> &  ) ) static_cast<void (IGESDefs_AssociativityDef::*)( const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> &  ) >(&IGESDefs_AssociativityDef::Init),
             R"#(This method is used to set the fields of the class AssociativityDef - requirements : Back Pointers requirements - orders : Class Orders - numItems : Number of Items per Class - items : Items in each class raises exception if lengths of the arrays are not the same.)#"  , py::arg("requirements"),  py::arg("orders"),  py::arg("numItems"),  py::arg("items"))
        .def("SetFormNumber",
             (void (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) ) static_cast<void (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) >(&IGESDefs_AssociativityDef::SetFormNumber),
             R"#(None)#"  , py::arg("form"))
        .def("NbClassDefs",
             (Standard_Integer (IGESDefs_AssociativityDef::*)() const) static_cast<Standard_Integer (IGESDefs_AssociativityDef::*)() const>(&IGESDefs_AssociativityDef::NbClassDefs),
             R"#(returns the Number of class definitions)#" )
        .def("IsBackPointerReq",
             (Standard_Boolean (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const>(&IGESDefs_AssociativityDef::IsBackPointerReq),
             R"#(returns 1 if the theBackPointerReqs(ClassNum) = 1 returns 0 if the theBackPointerReqs(ClassNum) = 2 raises exception if ClassNum <= 0 or ClassNum > NbClassDefs())#"  , py::arg("ClassNum"))
        .def("BackPointerReq",
             (Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const>(&IGESDefs_AssociativityDef::BackPointerReq),
             R"#(returns 1 or 2 raises exception if ClassNum <= 0 or ClassNum > NbClassDefs())#"  , py::arg("ClassNum"))
        .def("IsOrdered",
             (Standard_Boolean (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const>(&IGESDefs_AssociativityDef::IsOrdered),
             R"#(returns 1 if theClassOrders(ClassNum) = 1 (ordered class) returns 0 if theClassOrders(ClassNum) = 2 (unordered class) raises exception if ClassNum <= 0 or ClassNum > NbClassDefs())#"  , py::arg("ClassNum"))
        .def("ClassOrder",
             (Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const>(&IGESDefs_AssociativityDef::ClassOrder),
             R"#(returns 1 or 2 raises exception if ClassNum <= 0 or ClassNum > NbClassDefs())#"  , py::arg("ClassNum"))
        .def("NbItemsPerClass",
             (Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer  ) const>(&IGESDefs_AssociativityDef::NbItemsPerClass),
             R"#(returns no. of items per class entry raises exception if ClassNum <= 0 or ClassNum > NbClassDefs())#"  , py::arg("ClassNum"))
        .def("Item",
             (Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AssociativityDef::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AssociativityDef::Item),
             R"#(returns ItemNum'th Item of ClassNum'th Class raises exception if ClassNum <= 0 or ClassNum > NbClassDefs() ItemNum <= 0 or ItemNum > NbItemsPerClass(ClassNum))#"  , py::arg("ClassNum"),  py::arg("ItemNum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_AssociativityDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_AssociativityDef::*)() const>(&IGESDefs_AssociativityDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_AssociativityDef::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_AssociativityDef::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_AttributeDef ,opencascade::handle<IGESDefs_AttributeDef>  , IGESData_IGESEntity >>(m.attr("IGESDefs_AttributeDef"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDefs_AttributeDef::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfTransient> & ,  const opencascade::handle<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate> &  ) ) static_cast<void (IGESDefs_AttributeDef::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfTransient> & ,  const opencascade::handle<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate> &  ) >(&IGESDefs_AttributeDef::Init),
             R"#(None)#"  , py::arg("aName"),  py::arg("aListType"),  py::arg("attrTypes"),  py::arg("attrValueDataTypes"),  py::arg("attrValueCounts"),  py::arg("attrValues"),  py::arg("attrValuePointers"))
        .def("HasTableName",
             (Standard_Boolean (IGESDefs_AttributeDef::*)() const) static_cast<Standard_Boolean (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::HasTableName),
             R"#(Returns True if a Table Name is defined)#" )
        .def("TableName",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_AttributeDef::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::TableName),
             R"#(returns the Attribute Table name, or comment (default = null, no name : seeHasTableName))#" )
        .def("ListType",
             (Standard_Integer (IGESDefs_AttributeDef::*)() const) static_cast<Standard_Integer (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::ListType),
             R"#(returns the Attribute List Type)#" )
        .def("NbAttributes",
             (Standard_Integer (IGESDefs_AttributeDef::*)() const) static_cast<Standard_Integer (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::NbAttributes),
             R"#(returns the Number of Attributes)#" )
        .def("AttributeType",
             (Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeType),
             R"#(returns the num'th Attribute Type raises exception if num <= 0 or num > NbAttributes())#"  , py::arg("num"))
        .def("AttributeValueDataType",
             (Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeValueDataType),
             R"#(returns the num'th Attribute value data type raises exception if num <= 0 or num > NbAttributes())#"  , py::arg("num"))
        .def("AttributeValueCount",
             (Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeValueCount),
             R"#(returns the num'th Attribute value count raises exception if num <= 0 or num > NbAttributes())#"  , py::arg("num"))
        .def("HasValues",
             (Standard_Boolean (IGESDefs_AttributeDef::*)() const) static_cast<Standard_Boolean (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::HasValues),
             R"#(returns false if Values are defined (i.e. for Form = 1 or 2))#" )
        .def("HasTextDisplay",
             (Standard_Boolean (IGESDefs_AttributeDef::*)() const) static_cast<Standard_Boolean (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::HasTextDisplay),
             R"#(returns false if TextDisplays are defined (i.e. for Form = 2))#" )
        .def("AttributeTextDisplay",
             (opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGraph_TextDisplayTemplate> (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeTextDisplay),
             R"#(None)#"  , py::arg("AttrNum"),  py::arg("PointerNum"))
        .def("AttributeList",
             (opencascade::handle<Standard_Transient> (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (IGESDefs_AttributeDef::*)( const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeList),
             R"#(Returns the List of Attributes <AttrNum>, as a Transient. Its effective Type depends of the Type of Attribute : HArray1OfInteger for Integer, Logical(0-1), HArray1OfReal for Real, HArray1OfHSaciiString for String, HArray1OfIGESEntity for Entity (Pointer) See methods AttributeAs... for an accurate access)#"  , py::arg("AttrNum"))
        .def("AttributeAsInteger",
             (Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeAsInteger),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as an Integer Error if Indices out of Range, or no Value defined, or not an Integer)#"  , py::arg("AttrNum"),  py::arg("ValueNum"))
        .def("AttributeAsReal",
             (Standard_Real (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeAsReal),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as a Real Error if Indices out of Range, or no Value defined, or not a Real)#"  , py::arg("AttrNum"),  py::arg("ValueNum"))
        .def("AttributeAsString",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeAsString),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as an Integer)#"  , py::arg("AttrNum"),  py::arg("ValueNum"))
        .def("AttributeAsEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeAsEntity),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as an Entity Error if Indices out of Range, or no Value defined, or not a Entity)#"  , py::arg("AttrNum"),  py::arg("ValueNum"))
        .def("AttributeAsLogical",
             (Standard_Boolean (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDefs_AttributeDef::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeDef::AttributeAsLogical),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as a Boolean Error if Indices out of Range, or no Value defined, or not a Logical)#"  , py::arg("AttrNum"),  py::arg("ValueNum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_AttributeDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_AttributeDef::*)() const>(&IGESDefs_AttributeDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_AttributeDef::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_AttributeDef::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_AttributeTable ,opencascade::handle<IGESDefs_AttributeTable>  , IGESData_IGESEntity >>(m.attr("IGESDefs_AttributeTable"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDefs_AttributeTable::*)( const opencascade::handle<TColStd_HArray2OfTransient> &  ) ) static_cast<void (IGESDefs_AttributeTable::*)( const opencascade::handle<TColStd_HArray2OfTransient> &  ) >(&IGESDefs_AttributeTable::Init),
             R"#(This method is used to set the fields of the class AttributeTable - attributes : Attribute instances, created as (1,NbAttributes,1,NbRows) - NbRows = 1 is a particular case (Form 0))#"  , py::arg("attributes"))
        .def("SetDefinition",
             (void (IGESDefs_AttributeTable::*)( const opencascade::handle<IGESDefs_AttributeDef> &  ) ) static_cast<void (IGESDefs_AttributeTable::*)( const opencascade::handle<IGESDefs_AttributeDef> &  ) >(&IGESDefs_AttributeTable::SetDefinition),
             R"#(Sets a Definition as Structure information (works by calling InitMisc))#"  , py::arg("def"))
        .def("Definition",
             (opencascade::handle<IGESDefs_AttributeDef> (IGESDefs_AttributeTable::*)() const) static_cast<opencascade::handle<IGESDefs_AttributeDef> (IGESDefs_AttributeTable::*)() const>(&IGESDefs_AttributeTable::Definition),
             R"#(Return the Structure information in Directory Entry, casted as an AttributeDef)#" )
        .def("NbRows",
             (Standard_Integer (IGESDefs_AttributeTable::*)() const) static_cast<Standard_Integer (IGESDefs_AttributeTable::*)() const>(&IGESDefs_AttributeTable::NbRows),
             R"#(returns Number of Rows. Remark that it is always 1 if Form = 0 It means that the list of Attributes (by their number, and for each one its type and ValueCount) is repeated <NbRows> times)#" )
        .def("NbAttributes",
             (Standard_Integer (IGESDefs_AttributeTable::*)() const) static_cast<Standard_Integer (IGESDefs_AttributeTable::*)() const>(&IGESDefs_AttributeTable::NbAttributes),
             R"#(returns Number of Attributes)#" )
        .def("DataType",
             (Standard_Integer (IGESDefs_AttributeTable::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AttributeTable::*)( const Standard_Integer  ) const>(&IGESDefs_AttributeTable::DataType),
             R"#(returns the Type of an Attribute, given its No. : it is read in the Definition. (1 : Integer, 2 : Real, 3 : String, 4 : Entity, 6 : Logical))#"  , py::arg("Atnum"))
        .def("ValueCount",
             (Standard_Integer (IGESDefs_AttributeTable::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AttributeTable::*)( const Standard_Integer  ) const>(&IGESDefs_AttributeTable::ValueCount),
             R"#(returns the Count of Value for an Attribute, given its No. : it is read in the Definition.)#"  , py::arg("Atnum"))
        .def("AttributeList",
             (opencascade::handle<Standard_Transient> (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeTable::AttributeList),
             R"#(None)#"  , py::arg("Attribnum"),  py::arg("Rownum"))
        .def("AttributeAsInteger",
             (Standard_Integer (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeTable::AttributeAsInteger),
             R"#(Returns Attribute Value <AtNum, Rownum, rank ValNum> as an Integer Error if Indices out of Range, or no Value defined, or not an Integer)#"  , py::arg("AtNum"),  py::arg("Rownum"),  py::arg("ValNum"))
        .def("AttributeAsReal",
             (Standard_Real (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeTable::AttributeAsReal),
             R"#(Returns Attribute Value <AtNum, Rownum, rank ValNum> as a Real Error if Indices out of Range, or no Value defined, or not a Real)#"  , py::arg("AtNum"),  py::arg("Rownum"),  py::arg("ValNum"))
        .def("AttributeAsString",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeTable::AttributeAsString),
             R"#(Returns Attribute Value <AtNum, Rownum, rank ValNum> as an Integer)#"  , py::arg("AtNum"),  py::arg("Rownum"),  py::arg("ValNum"))
        .def("AttributeAsEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeTable::AttributeAsEntity),
             R"#(Returns Attribute Value <AtNum, Rownum, rank ValNum> as an Entity Error if Indices out of Range, or no Value defined, or not an Entity)#"  , py::arg("AtNum"),  py::arg("Rownum"),  py::arg("ValNum"))
        .def("AttributeAsLogical",
             (Standard_Boolean (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDefs_AttributeTable::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_AttributeTable::AttributeAsLogical),
             R"#(Returns Attribute Value <AtNum, Rownum, rank ValNum> as a Boolean Error if Indices out of Range, or no Value defined, or not a Logical)#"  , py::arg("AtNum"),  py::arg("Rownum"),  py::arg("ValNum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_AttributeTable::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_AttributeTable::*)() const>(&IGESDefs_AttributeTable::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_AttributeTable::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_AttributeTable::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_GeneralModule ,opencascade::handle<IGESDefs_GeneralModule>  , IGESData_GeneralModule >>(m.attr("IGESDefs_GeneralModule"))
        .def(py::init<  >()  )
    // methods
        .def("OwnSharedCase",
             (void (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_GeneralModule::OwnSharedCase),
             R"#(Lists the Entities shared by a given IGESEntity <ent>, from its specific parameters : specific for each type)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> &  ) const>(&IGESDefs_GeneralModule::DirChecker),
             R"#(Returns a DirChecker, specific for each type of Entity (identified by its Case Number) : this DirChecker defines constraints which must be respected by the DirectoryPart)#"  , py::arg("CN"),  py::arg("ent"))
        .def("OwnCheckCase",
             (void (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_GeneralModule::OwnCheckCase),
             R"#(Performs Specific Semantic Check for each type of Entity)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("NewVoid",
             (Standard_Boolean (IGESDefs_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (IGESDefs_GeneralModule::*)( const Standard_Integer ,  opencascade::handle<Standard_Transient> &  ) const>(&IGESDefs_GeneralModule::NewVoid),
             R"#(Specific creation of a new void entity)#"  , py::arg("CN"),  py::arg("entto"))
        .def("OwnCopyCase",
             (void (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESEntity> & ,  Interface_CopyTool &  ) const>(&IGESDefs_GeneralModule::OwnCopyCase),
             R"#(Copies parameters which are specific of each Type of Entity)#"  , py::arg("CN"),  py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("CategoryNumber",
             (Standard_Integer (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const) static_cast<Standard_Integer (IGESDefs_GeneralModule::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> & ,  const Interface_ShareTool &  ) const>(&IGESDefs_GeneralModule::CategoryNumber),
             R"#(Returns a category number which characterizes an entity Auxiliary for all)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("shares"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_GeneralModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_GeneralModule::*)() const>(&IGESDefs_GeneralModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_GeneralModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_GeneralModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_GenericData ,opencascade::handle<IGESDefs_GenericData>  , IGESData_IGESEntity >>(m.attr("IGESDefs_GenericData"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDefs_GenericData::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfTransient> &  ) ) static_cast<void (IGESDefs_GenericData::*)( const Standard_Integer ,  const opencascade::handle<TCollection_HAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfTransient> &  ) >(&IGESDefs_GenericData::Init),
             R"#(This method is used to set the fields of the class GenericData - nbPropVal : Number of property values - aName : Property Name - allTypes : Property Types - allValues : Property Values)#"  , py::arg("nbPropVal"),  py::arg("aName"),  py::arg("allTypes"),  py::arg("allValues"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESDefs_GenericData::*)() const) static_cast<Standard_Integer (IGESDefs_GenericData::*)() const>(&IGESDefs_GenericData::NbPropertyValues),
             R"#(returns the number of property values)#" )
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_GenericData::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_GenericData::*)() const>(&IGESDefs_GenericData::Name),
             R"#(returns property name)#" )
        .def("NbTypeValuePairs",
             (Standard_Integer (IGESDefs_GenericData::*)() const) static_cast<Standard_Integer (IGESDefs_GenericData::*)() const>(&IGESDefs_GenericData::NbTypeValuePairs),
             R"#(returns the number of TYPE/VALUE pairs)#" )
        .def("Type",
             (Standard_Integer (IGESDefs_GenericData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_GenericData::*)( const Standard_Integer  ) const>(&IGESDefs_GenericData::Type),
             R"#(returns the Index'th property value data type raises exception if Index <= 0 or Index > NbTypeValuePairs())#"  , py::arg("Index"))
        .def("Value",
             (opencascade::handle<Standard_Transient> (IGESDefs_GenericData::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (IGESDefs_GenericData::*)( const Standard_Integer  ) const>(&IGESDefs_GenericData::Value),
             R"#(HArray1OfInteger (length 1), HArray1OfReal (length 1) for Integer, Real, Boolean (= Integer 0/1), HAsciiString for String (the value itself), IGESEntity for Entity (the value itself))#"  , py::arg("Index"))
        .def("ValueAsInteger",
             (Standard_Integer (IGESDefs_GenericData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_GenericData::*)( const Standard_Integer  ) const>(&IGESDefs_GenericData::ValueAsInteger),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as an Integer Error if Index out of Range, or not an Integer)#"  , py::arg("ValueNum"))
        .def("ValueAsReal",
             (Standard_Real (IGESDefs_GenericData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDefs_GenericData::*)( const Standard_Integer  ) const>(&IGESDefs_GenericData::ValueAsReal),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as a Real Error if Index out of Range, or not a Real)#"  , py::arg("ValueNum"))
        .def("ValueAsString",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_GenericData::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_GenericData::*)( const Standard_Integer  ) const>(&IGESDefs_GenericData::ValueAsString),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as an Integer)#"  , py::arg("ValueNum"))
        .def("ValueAsEntity",
             (opencascade::handle<IGESData_IGESEntity> (IGESDefs_GenericData::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESData_IGESEntity> (IGESDefs_GenericData::*)( const Standard_Integer  ) const>(&IGESDefs_GenericData::ValueAsEntity),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as an Entity Error if Index out of Range, or not a Entity)#"  , py::arg("ValueNum"))
        .def("ValueAsLogical",
             (Standard_Boolean (IGESDefs_GenericData::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (IGESDefs_GenericData::*)( const Standard_Integer  ) const>(&IGESDefs_GenericData::ValueAsLogical),
             R"#(Returns Attribute Value <AttrNum, rank ValueNum> as a Boolean Error if Index out of Range, or not a Logical)#"  , py::arg("ValueNum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_GenericData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_GenericData::*)() const>(&IGESDefs_GenericData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_GenericData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_GenericData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate ,opencascade::handle<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate>  , Standard_Transient >>(m.attr("IGESDefs_HArray1OfHArray1OfTextDisplayTemplate"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("low"),  py::arg("up") )
    // methods
        .def("Lower",
             (Standard_Integer (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const) static_cast<Standard_Integer (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const>(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::Lower),
             R"#(None)#" )
        .def("Upper",
             (Standard_Integer (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const) static_cast<Standard_Integer (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const>(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::Upper),
             R"#(None)#" )
        .def("Length",
             (Standard_Integer (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const) static_cast<Standard_Integer (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const>(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::Length),
             R"#(None)#" )
        .def("SetValue",
             (void (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)( const Standard_Integer ,  const opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> &  ) ) static_cast<void (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)( const Standard_Integer ,  const opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> &  ) >(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::SetValue),
             R"#(None)#"  , py::arg("num"),  py::arg("val"))
        .def("Value",
             (opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate> (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)( const Standard_Integer  ) const>(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::Value),
             R"#(None)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::*)() const>(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_HArray1OfHArray1OfTextDisplayTemplate::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_HArray1OfTabularData ,opencascade::handle<IGESDefs_HArray1OfTabularData>  , IGESDefs_Array1OfTabularData , Standard_Transient >>(m.attr("IGESDefs_HArray1OfTabularData"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const opencascade::handle<IGESDefs_TabularData> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<opencascade::handle<IGESDefs_TabularData> > & >()  , py::arg("theOther") )
    // methods
        .def("Array1",
             (const IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() const) static_cast<const IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() const>(&IGESDefs_HArray1OfTabularData::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() ) static_cast<IGESDefs_Array1OfTabularData & (IGESDefs_HArray1OfTabularData::*)() >(&IGESDefs_HArray1OfTabularData::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfTabularData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_HArray1OfTabularData::*)() const>(&IGESDefs_HArray1OfTabularData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_HArray1OfTabularData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_HArray1OfTabularData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_MacroDef ,opencascade::handle<IGESDefs_MacroDef>  , IGESData_IGESEntity >>(m.attr("IGESDefs_MacroDef"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDefs_MacroDef::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (IGESDefs_MacroDef::*)( const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Integer ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&IGESDefs_MacroDef::Init),
             R"#(This method is used to set the fields of the class MacroDef - macro : MACRO - entityTypeID : Entity Type ID - langStatements : Language Statements - endMacro : END MACRO)#"  , py::arg("macro"),  py::arg("entityTypeID"),  py::arg("langStatements"),  py::arg("endMacro"))
        .def("NbStatements",
             (Standard_Integer (IGESDefs_MacroDef::*)() const) static_cast<Standard_Integer (IGESDefs_MacroDef::*)() const>(&IGESDefs_MacroDef::NbStatements),
             R"#(returns the number of language statements)#" )
        .def("MACRO",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_MacroDef::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_MacroDef::*)() const>(&IGESDefs_MacroDef::MACRO),
             R"#(returns the MACRO(Literal))#" )
        .def("EntityTypeID",
             (Standard_Integer (IGESDefs_MacroDef::*)() const) static_cast<Standard_Integer (IGESDefs_MacroDef::*)() const>(&IGESDefs_MacroDef::EntityTypeID),
             R"#(returns the Entity Type ID)#" )
        .def("LanguageStatement",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_MacroDef::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_MacroDef::*)( const Standard_Integer  ) const>(&IGESDefs_MacroDef::LanguageStatement),
             R"#(None)#"  , py::arg("StatNum"))
        .def("ENDMACRO",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_MacroDef::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_MacroDef::*)() const>(&IGESDefs_MacroDef::ENDMACRO),
             R"#(returns the ENDM(Literal))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_MacroDef::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_MacroDef::*)() const>(&IGESDefs_MacroDef::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_MacroDef::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_MacroDef::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_Protocol ,opencascade::handle<IGESDefs_Protocol>  , IGESData_Protocol >>(m.attr("IGESDefs_Protocol"))
        .def(py::init<  >()  )
    // methods
        .def("NbResources",
             (Standard_Integer (IGESDefs_Protocol::*)() const) static_cast<Standard_Integer (IGESDefs_Protocol::*)() const>(&IGESDefs_Protocol::NbResources),
             R"#(Gives the count of Resource Protocol. Here, one (Protocol from IGESGraph))#" )
        .def("Resource",
             (opencascade::handle<Interface_Protocol> (IGESDefs_Protocol::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Interface_Protocol> (IGESDefs_Protocol::*)( const Standard_Integer  ) const>(&IGESDefs_Protocol::Resource),
             R"#(Returns a Resource, given a rank.)#"  , py::arg("num"))
        .def("TypeNumber",
             (Standard_Integer (IGESDefs_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const) static_cast<Standard_Integer (IGESDefs_Protocol::*)( const opencascade::handle<Standard_Type> &  ) const>(&IGESDefs_Protocol::TypeNumber),
             R"#(Returns a Case Number, specific of each recognized Type This Case Number is then used in Libraries : the various Modules attached to this class of Protocol must use them in accordance (for a given value of TypeNumber, they must consider the same Type as the Protocol defines))#"  , py::arg("atype"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_Protocol::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_Protocol::*)() const>(&IGESDefs_Protocol::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_Protocol::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_Protocol::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ReadWriteModule ,opencascade::handle<IGESDefs_ReadWriteModule>  , IGESData_ReadWriteModule >>(m.attr("IGESDefs_ReadWriteModule"))
        .def(py::init<  >()  )
    // methods
        .def("CaseIGES",
             (Standard_Integer (IGESDefs_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_ReadWriteModule::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_ReadWriteModule::CaseIGES),
             R"#(Defines Case Numbers for Entities of IGESDefs)#"  , py::arg("typenum"),  py::arg("formnum"))
        .def("ReadOwnParams",
             (void (IGESDefs_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ReadWriteModule::ReadOwnParams),
             R"#(Reads own parameters from file for an Entity of IGESDefs)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ReadWriteModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ReadWriteModule::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("IW"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_ReadWriteModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_ReadWriteModule::*)() const>(&IGESDefs_ReadWriteModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_ReadWriteModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_ReadWriteModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_SpecificModule ,opencascade::handle<IGESDefs_SpecificModule>  , IGESData_SpecificModule >>(m.attr("IGESDefs_SpecificModule"))
        .def(py::init<  >()  )
    // methods
        .def("OwnDump",
             (void (IGESDefs_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_SpecificModule::*)( const Standard_Integer ,  const opencascade::handle<IGESData_IGESEntity> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_SpecificModule::OwnDump),
             R"#(Specific Dump (own parameters) for IGESDefs)#"  , py::arg("CN"),  py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_SpecificModule::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_SpecificModule::*)() const>(&IGESDefs_SpecificModule::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_SpecificModule::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_SpecificModule::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_TabularData ,opencascade::handle<IGESDefs_TabularData>  , IGESData_IGESEntity >>(m.attr("IGESDefs_TabularData"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDefs_TabularData::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> &  ) ) static_cast<void (IGESDefs_TabularData::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<TColStd_HArray1OfInteger> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> & ,  const opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> &  ) >(&IGESDefs_TabularData::Init),
             R"#(This method is used to set the fields of the class TabularData - nbProps : Number of property values - propType : Property Type - typesInd : Type of independent variables - nbValuesInd : Number of values of independent variables - valuesInd : Values of independent variables - valuesDep : Values of dependent variables raises exception if lengths of typeInd and nbValuesInd are not same)#"  , py::arg("nbProps"),  py::arg("propType"),  py::arg("typesInd"),  py::arg("nbValuesInd"),  py::arg("valuesInd"),  py::arg("valuesDep"))
        .def("NbPropertyValues",
             (Standard_Integer (IGESDefs_TabularData::*)() const) static_cast<Standard_Integer (IGESDefs_TabularData::*)() const>(&IGESDefs_TabularData::NbPropertyValues),
             R"#(returns the number of property values (recorded))#" )
        .def("ComputedNbPropertyValues",
             (Standard_Integer (IGESDefs_TabularData::*)() const) static_cast<Standard_Integer (IGESDefs_TabularData::*)() const>(&IGESDefs_TabularData::ComputedNbPropertyValues),
             R"#(determines the number of property values required)#" )
        .def("OwnCorrect",
             (Standard_Boolean (IGESDefs_TabularData::*)() ) static_cast<Standard_Boolean (IGESDefs_TabularData::*)() >(&IGESDefs_TabularData::OwnCorrect),
             R"#(checks, and correct as necessary, the number of property values. Returns True if corrected, False if already OK)#" )
        .def("PropertyType",
             (Standard_Integer (IGESDefs_TabularData::*)() const) static_cast<Standard_Integer (IGESDefs_TabularData::*)() const>(&IGESDefs_TabularData::PropertyType),
             R"#(returns the property type)#" )
        .def("NbDependents",
             (Standard_Integer (IGESDefs_TabularData::*)() const) static_cast<Standard_Integer (IGESDefs_TabularData::*)() const>(&IGESDefs_TabularData::NbDependents),
             R"#(returns the number of dependent variables)#" )
        .def("NbIndependents",
             (Standard_Integer (IGESDefs_TabularData::*)() const) static_cast<Standard_Integer (IGESDefs_TabularData::*)() const>(&IGESDefs_TabularData::NbIndependents),
             R"#(returns the number of independent variables)#" )
        .def("TypeOfIndependents",
             (Standard_Integer (IGESDefs_TabularData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_TabularData::*)( const Standard_Integer  ) const>(&IGESDefs_TabularData::TypeOfIndependents),
             R"#(returns the type of the num'th independent variable raises exception if num <= 0 or num > NbIndependents())#"  , py::arg("num"))
        .def("NbValues",
             (Standard_Integer (IGESDefs_TabularData::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (IGESDefs_TabularData::*)( const Standard_Integer  ) const>(&IGESDefs_TabularData::NbValues),
             R"#(returns the number of different values of the num'th indep. variable raises exception if num <= 0 or num > NbIndependents())#"  , py::arg("num"))
        .def("IndependentValue",
             (Standard_Real (IGESDefs_TabularData::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (IGESDefs_TabularData::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_TabularData::IndependentValue),
             R"#(None)#"  , py::arg("variablenum"),  py::arg("valuenum"))
        .def("DependentValues",
             (opencascade::handle<TColStd_HArray1OfReal> (IGESDefs_TabularData::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HArray1OfReal> (IGESDefs_TabularData::*)( const Standard_Integer  ) const>(&IGESDefs_TabularData::DependentValues),
             R"#(None)#"  , py::arg("num"))
        .def("DependentValue",
             (Standard_Real (IGESDefs_TabularData::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (IGESDefs_TabularData::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&IGESDefs_TabularData::DependentValue),
             R"#(None)#"  , py::arg("variablenum"),  py::arg("valuenum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_TabularData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_TabularData::*)() const>(&IGESDefs_TabularData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_TabularData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_TabularData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ToolAssociativityDef , shared_ptr<IGESDefs_ToolAssociativityDef>  >>(m.attr("IGESDefs_ToolAssociativityDef"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ToolAssociativityDef::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ToolAssociativityDef::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_ToolAssociativityDef::OwnShared),
             R"#(Lists the Entities shared by a AssociativityDef <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> &  ) const>(&IGESDefs_ToolAssociativityDef::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_ToolAssociativityDef::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const opencascade::handle<IGESDefs_AssociativityDef> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const opencascade::handle<IGESDefs_AssociativityDef> & ,  Interface_CopyTool &  ) const>(&IGESDefs_ToolAssociativityDef::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_ToolAssociativityDef::*)( const opencascade::handle<IGESDefs_AssociativityDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_ToolAssociativityDef::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ToolAttributeDef , shared_ptr<IGESDefs_ToolAttributeDef>  >>(m.attr("IGESDefs_ToolAttributeDef"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ToolAttributeDef::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ToolAttributeDef::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_ToolAttributeDef::OwnShared),
             R"#(Lists the Entities shared by a AttributeDef <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> &  ) const>(&IGESDefs_ToolAttributeDef::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_ToolAttributeDef::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const opencascade::handle<IGESDefs_AttributeDef> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const opencascade::handle<IGESDefs_AttributeDef> & ,  Interface_CopyTool &  ) const>(&IGESDefs_ToolAttributeDef::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_ToolAttributeDef::*)( const opencascade::handle<IGESDefs_AttributeDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_ToolAttributeDef::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ToolAttributeTable , shared_ptr<IGESDefs_ToolAttributeTable>  >>(m.attr("IGESDefs_ToolAttributeTable"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ToolAttributeTable::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ToolAttributeTable::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_ToolAttributeTable::OwnShared),
             R"#(Lists the Entities shared by a AttributeTable <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> &  ) const>(&IGESDefs_ToolAttributeTable::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_ToolAttributeTable::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const opencascade::handle<IGESDefs_AttributeTable> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const opencascade::handle<IGESDefs_AttributeTable> & ,  Interface_CopyTool &  ) const>(&IGESDefs_ToolAttributeTable::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_ToolAttributeTable::*)( const opencascade::handle<IGESDefs_AttributeTable> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_ToolAttributeTable::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ToolGenericData , shared_ptr<IGESDefs_ToolGenericData>  >>(m.attr("IGESDefs_ToolGenericData"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ToolGenericData::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ToolGenericData::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_ToolGenericData::OwnShared),
             R"#(Lists the Entities shared by a GenericData <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> &  ) const>(&IGESDefs_ToolGenericData::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_ToolGenericData::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const opencascade::handle<IGESDefs_GenericData> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const opencascade::handle<IGESDefs_GenericData> & ,  Interface_CopyTool &  ) const>(&IGESDefs_ToolGenericData::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_ToolGenericData::*)( const opencascade::handle<IGESDefs_GenericData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_ToolGenericData::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ToolMacroDef , shared_ptr<IGESDefs_ToolMacroDef>  >>(m.attr("IGESDefs_ToolMacroDef"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ToolMacroDef::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ToolMacroDef::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_ToolMacroDef::OwnShared),
             R"#(Lists the Entities shared by a MacroDef <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> &  ) const>(&IGESDefs_ToolMacroDef::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_ToolMacroDef::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const opencascade::handle<IGESDefs_MacroDef> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const opencascade::handle<IGESDefs_MacroDef> & ,  Interface_CopyTool &  ) const>(&IGESDefs_ToolMacroDef::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_ToolMacroDef::*)( const opencascade::handle<IGESDefs_MacroDef> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_ToolMacroDef::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ToolTabularData , shared_ptr<IGESDefs_ToolTabularData>  >>(m.attr("IGESDefs_ToolTabularData"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ToolTabularData::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ToolTabularData::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_ToolTabularData::OwnShared),
             R"#(Lists the Entities shared by a TabularData <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> &  ) const>(&IGESDefs_ToolTabularData::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_ToolTabularData::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const opencascade::handle<IGESDefs_TabularData> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const opencascade::handle<IGESDefs_TabularData> & ,  Interface_CopyTool &  ) const>(&IGESDefs_ToolTabularData::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_ToolTabularData::*)( const opencascade::handle<IGESDefs_TabularData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_ToolTabularData::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_ToolUnitsData , shared_ptr<IGESDefs_ToolUnitsData>  >>(m.attr("IGESDefs_ToolUnitsData"))
        .def(py::init<  >()  )
    // methods
        .def("ReadOwnParams",
             (void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const) static_cast<void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const opencascade::handle<IGESData_IGESReaderData> & ,  IGESData_ParamReader &  ) const>(&IGESDefs_ToolUnitsData::ReadOwnParams),
             R"#(Reads own parameters from file. <PR> gives access to them, <IR> detains parameter types and values)#"  , py::arg("ent"),  py::arg("IR"),  py::arg("PR"))
        .def("WriteOwnParams",
             (void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  IGESData_IGESWriter &  ) const) static_cast<void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  IGESData_IGESWriter &  ) const>(&IGESDefs_ToolUnitsData::WriteOwnParams),
             R"#(Writes own parameters to IGESWriter)#"  , py::arg("ent"),  py::arg("IW"))
        .def("OwnShared",
             (void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  Interface_EntityIterator &  ) const) static_cast<void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  Interface_EntityIterator &  ) const>(&IGESDefs_ToolUnitsData::OwnShared),
             R"#(Lists the Entities shared by a UnitsData <ent>, from its specific (own) parameters)#"  , py::arg("ent"),  py::arg("iter"))
        .def("DirChecker",
             (IGESData_DirChecker (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> &  ) const) static_cast<IGESData_DirChecker (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> &  ) const>(&IGESDefs_ToolUnitsData::DirChecker),
             R"#(Returns specific DirChecker)#"  , py::arg("ent"))
        .def("OwnCheck",
             (void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const) static_cast<void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const Interface_ShareTool & ,  opencascade::handle<Interface_Check> &  ) const>(&IGESDefs_ToolUnitsData::OwnCheck),
             R"#(Performs Specific Semantic Check)#"  , py::arg("ent"),  py::arg("shares"),  py::arg("ach"))
        .def("OwnCopy",
             (void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const opencascade::handle<IGESDefs_UnitsData> & ,  Interface_CopyTool &  ) const) static_cast<void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const opencascade::handle<IGESDefs_UnitsData> & ,  Interface_CopyTool &  ) const>(&IGESDefs_ToolUnitsData::OwnCopy),
             R"#(Copies Specific Parameters)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("TC"))
        .def("OwnDump",
             (void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const) static_cast<void (IGESDefs_ToolUnitsData::*)( const opencascade::handle<IGESDefs_UnitsData> & ,  const IGESData_IGESDumper & ,  const opencascade::handle<Message_Messenger> & ,  const Standard_Integer  ) const>(&IGESDefs_ToolUnitsData::OwnDump),
             R"#(Dump of Specific Parameters)#"  , py::arg("ent"),  py::arg("dumper"),  py::arg("S"),  py::arg("own"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<IGESDefs_UnitsData ,opencascade::handle<IGESDefs_UnitsData>  , IGESData_IGESEntity >>(m.attr("IGESDefs_UnitsData"))
        .def(py::init<  >()  )
    // methods
        .def("Init",
             (void (IGESDefs_UnitsData::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfReal> &  ) ) static_cast<void (IGESDefs_UnitsData::*)( const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<Interface_HArray1OfHAsciiString> & ,  const opencascade::handle<TColStd_HArray1OfReal> &  ) >(&IGESDefs_UnitsData::Init),
             R"#(This method is used to set the fields of the class UnitsData - unitTypes : Types of the units being defined - unitValues : Unit Values of the units - unitScales : Multiplicative Scale Factors raises exception if lengths of unitTypes, unitValues and unitScale are not same)#"  , py::arg("unitTypes"),  py::arg("unitValues"),  py::arg("unitScales"))
        .def("NbUnits",
             (Standard_Integer (IGESDefs_UnitsData::*)() const) static_cast<Standard_Integer (IGESDefs_UnitsData::*)() const>(&IGESDefs_UnitsData::NbUnits),
             R"#(returns the Number of units defined by this entity)#" )
        .def("UnitType",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_UnitsData::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_UnitsData::*)( const Standard_Integer  ) const>(&IGESDefs_UnitsData::UnitType),
             R"#(returns the Type of the UnitNum'th unit being defined raises exception if UnitNum <= 0 or UnitNum > NbUnits())#"  , py::arg("UnitNum"))
        .def("UnitValue",
             (opencascade::handle<TCollection_HAsciiString> (IGESDefs_UnitsData::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IGESDefs_UnitsData::*)( const Standard_Integer  ) const>(&IGESDefs_UnitsData::UnitValue),
             R"#(returns the Units of the UnitNum'th unit being defined raises exception if UnitNum <= 0 or UnitNum > NbUnits())#"  , py::arg("UnitNum"))
        .def("ScaleFactor",
             (Standard_Real (IGESDefs_UnitsData::*)( const Standard_Integer  ) const) static_cast<Standard_Real (IGESDefs_UnitsData::*)( const Standard_Integer  ) const>(&IGESDefs_UnitsData::ScaleFactor),
             R"#(returns the multiplicative scale factor to be apllied to the UnitNum'th unit being defined raises exception if UnitNum <= 0 or UnitNum > NbUnits())#"  , py::arg("UnitNum"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESDefs_UnitsData::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESDefs_UnitsData::*)() const>(&IGESDefs_UnitsData::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESDefs_UnitsData::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESDefs_UnitsData::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/IGESDefs_ToolGenericData.hxx
// ./opencascade/IGESDefs_ToolTabularData.hxx
// ./opencascade/IGESDefs_GeneralModule.hxx
// ./opencascade/IGESDefs_AttributeTable.hxx
// ./opencascade/IGESDefs_ReadWriteModule.hxx
// ./opencascade/IGESDefs_ToolAttributeTable.hxx
// ./opencascade/IGESDefs_HArray1OfTabularData.hxx
// ./opencascade/IGESDefs_SpecificModule.hxx
// ./opencascade/IGESDefs_AttributeDef.hxx
// ./opencascade/IGESDefs_UnitsData.hxx
// ./opencascade/IGESDefs_TabularData.hxx
// ./opencascade/IGESDefs_ToolAttributeDef.hxx
// ./opencascade/IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx
// ./opencascade/IGESDefs_ToolAssociativityDef.hxx
// ./opencascade/IGESDefs_GenericData.hxx
// ./opencascade/IGESDefs_ToolMacroDef.hxx
// ./opencascade/IGESDefs.hxx
// ./opencascade/IGESDefs_Protocol.hxx
// ./opencascade/IGESDefs_MacroDef.hxx
// ./opencascade/IGESDefs_ToolUnitsData.hxx
// ./opencascade/IGESDefs_Array1OfTabularData.hxx
// ./opencascade/IGESDefs_AssociativityDef.hxx

// operators

// register typdefs
    register_template_NCollection_Array1<opencascade::handle<IGESDefs_TabularData> >(m,"IGESDefs_Array1OfTabularData");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
