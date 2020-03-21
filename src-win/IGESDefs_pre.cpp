
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
#include <TCollection_HAsciiString.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <Standard_NullObject.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
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
#include <TCollection_HAsciiString.hxx>
#include <Standard_NullObject.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
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
#include <Standard_NullObject.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <TCollection_HAsciiString.hxx>

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
// ./opencascade\IGESDefs_Array1OfTabularData.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESDefs_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESDefs", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<IGESDefs_TabularData> >(m,"IGESDefs_Array1OfTabularData");

// classes forward declarations only
    py::class_<IGESDefs , shared_ptr<IGESDefs> >(m,"IGESDefs",R"#(To embody general definitions of Entities (Parameters, Tables ...))#");
    py::class_<IGESDefs_AssociativityDef ,opencascade::handle<IGESDefs_AssociativityDef> , IGESData_IGESEntity>(m,"IGESDefs_AssociativityDef",R"#(defines IGES Associativity Definition Entity, Type <302> Form <5001 - 9999> in package IGESDefs. This class permits the preprocessor to define an associativity schema. i.e., by using it preprocessor defines the type of relationship.defines IGES Associativity Definition Entity, Type <302> Form <5001 - 9999> in package IGESDefs. This class permits the preprocessor to define an associativity schema. i.e., by using it preprocessor defines the type of relationship.defines IGES Associativity Definition Entity, Type <302> Form <5001 - 9999> in package IGESDefs. This class permits the preprocessor to define an associativity schema. i.e., by using it preprocessor defines the type of relationship.)#");
    py::class_<IGESDefs_AttributeDef ,opencascade::handle<IGESDefs_AttributeDef> , IGESData_IGESEntity>(m,"IGESDefs_AttributeDef",R"#(defines IGES Attribute Table Definition Entity, Type <322> Form [0, 1, 2] in package IGESDefs. This is class is used to support the concept of well defined collection of attributes, whether it is a table or a single row of attributes.defines IGES Attribute Table Definition Entity, Type <322> Form [0, 1, 2] in package IGESDefs. This is class is used to support the concept of well defined collection of attributes, whether it is a table or a single row of attributes.defines IGES Attribute Table Definition Entity, Type <322> Form [0, 1, 2] in package IGESDefs. This is class is used to support the concept of well defined collection of attributes, whether it is a table or a single row of attributes.)#");
    py::class_<IGESDefs_AttributeTable ,opencascade::handle<IGESDefs_AttributeTable> , IGESData_IGESEntity>(m,"IGESDefs_AttributeTable",R"#(defines IGES Attribute Table, Type <422> Form <0, 1> in package IGESDefs This class is used to represent an occurence of Attribute Table. This Class may be independent or dependent or pointed at by other Entities.defines IGES Attribute Table, Type <422> Form <0, 1> in package IGESDefs This class is used to represent an occurence of Attribute Table. This Class may be independent or dependent or pointed at by other Entities.defines IGES Attribute Table, Type <422> Form <0, 1> in package IGESDefs This class is used to represent an occurence of Attribute Table. This Class may be independent or dependent or pointed at by other Entities.)#");
    py::class_<IGESDefs_GeneralModule ,opencascade::handle<IGESDefs_GeneralModule> , IGESData_GeneralModule>(m,"IGESDefs_GeneralModule",R"#(Definition of General Services for IGESDefs (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESDefs (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESDefs (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESDefs_GenericData ,opencascade::handle<IGESDefs_GenericData> , IGESData_IGESEntity>(m,"IGESDefs_GenericData",R"#(defines IGES Generic Data, Type <406> Form <27> in package IGESDefs Used to communicate information defined by the system operator while creating the model. The information is system specific and does not map into one of the predefined properties or associativities. Properties and property values can be defined by multiple instances of this property.defines IGES Generic Data, Type <406> Form <27> in package IGESDefs Used to communicate information defined by the system operator while creating the model. The information is system specific and does not map into one of the predefined properties or associativities. Properties and property values can be defined by multiple instances of this property.defines IGES Generic Data, Type <406> Form <27> in package IGESDefs Used to communicate information defined by the system operator while creating the model. The information is system specific and does not map into one of the predefined properties or associativities. Properties and property values can be defined by multiple instances of this property.)#");
    py::class_<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate ,opencascade::handle<IGESDefs_HArray1OfHArray1OfTextDisplayTemplate> , Standard_Transient>(m,"IGESDefs_HArray1OfHArray1OfTextDisplayTemplate",R"#()#");
    py::class_<IGESDefs_HArray1OfTabularData ,opencascade::handle<IGESDefs_HArray1OfTabularData> , IGESDefs_Array1OfTabularData, Standard_Transient>(m,"IGESDefs_HArray1OfTabularData",R"#()#");
    py::class_<IGESDefs_MacroDef ,opencascade::handle<IGESDefs_MacroDef> , IGESData_IGESEntity>(m,"IGESDefs_MacroDef",R"#(defines IGES Macro Definition Entity, Type <306> Form <0> in package IGESDefs This Class specifies the action of a specific MACRO. After specification MACRO can be used as necessary by means of MACRO class instance entity.defines IGES Macro Definition Entity, Type <306> Form <0> in package IGESDefs This Class specifies the action of a specific MACRO. After specification MACRO can be used as necessary by means of MACRO class instance entity.defines IGES Macro Definition Entity, Type <306> Form <0> in package IGESDefs This Class specifies the action of a specific MACRO. After specification MACRO can be used as necessary by means of MACRO class instance entity.)#");
    py::class_<IGESDefs_Protocol ,opencascade::handle<IGESDefs_Protocol> , IGESData_Protocol>(m,"IGESDefs_Protocol",R"#(Description of Protocol for IGESDefsDescription of Protocol for IGESDefsDescription of Protocol for IGESDefs)#");
    py::class_<IGESDefs_ReadWriteModule ,opencascade::handle<IGESDefs_ReadWriteModule> , IGESData_ReadWriteModule>(m,"IGESDefs_ReadWriteModule",R"#(Defines Defs File Access Module for IGESDefs (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Defs File Access Module for IGESDefs (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Defs File Access Module for IGESDefs (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.)#");
    py::class_<IGESDefs_SpecificModule ,opencascade::handle<IGESDefs_SpecificModule> , IGESData_SpecificModule>(m,"IGESDefs_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump, for IGESDefsDefines Services attached to IGES Entities : Dump, for IGESDefsDefines Services attached to IGES Entities : Dump, for IGESDefs)#");
    py::class_<IGESDefs_TabularData ,opencascade::handle<IGESDefs_TabularData> , IGESData_IGESEntity>(m,"IGESDefs_TabularData",R"#(Defines IGES Tabular Data, Type <406> Form <11>, in package IGESDefs This Class is used to provide a Structure to accomodate point form data.Defines IGES Tabular Data, Type <406> Form <11>, in package IGESDefs This Class is used to provide a Structure to accomodate point form data.Defines IGES Tabular Data, Type <406> Form <11>, in package IGESDefs This Class is used to provide a Structure to accomodate point form data.)#");
    py::class_<IGESDefs_ToolAssociativityDef , shared_ptr<IGESDefs_ToolAssociativityDef> >(m,"IGESDefs_ToolAssociativityDef",R"#(Tool to work on a AssociativityDef. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDefs_ToolAttributeDef , shared_ptr<IGESDefs_ToolAttributeDef> >(m,"IGESDefs_ToolAttributeDef",R"#(Tool to work on a AttributeDef. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDefs_ToolAttributeTable , shared_ptr<IGESDefs_ToolAttributeTable> >(m,"IGESDefs_ToolAttributeTable",R"#(Tool to work on a AttributeTable. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDefs_ToolGenericData , shared_ptr<IGESDefs_ToolGenericData> >(m,"IGESDefs_ToolGenericData",R"#(Tool to work on a GenericData. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDefs_ToolMacroDef , shared_ptr<IGESDefs_ToolMacroDef> >(m,"IGESDefs_ToolMacroDef",R"#(Tool to work on a MacroDef. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDefs_ToolTabularData , shared_ptr<IGESDefs_ToolTabularData> >(m,"IGESDefs_ToolTabularData",R"#(Tool to work on a TabularData. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDefs_ToolUnitsData , shared_ptr<IGESDefs_ToolUnitsData> >(m,"IGESDefs_ToolUnitsData",R"#(Tool to work on a UnitsData. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESDefs_UnitsData ,opencascade::handle<IGESDefs_UnitsData> , IGESData_IGESEntity>(m,"IGESDefs_UnitsData",R"#(defines IGES UnitsData Entity, Type <316> Form <0> in package IGESDefs This class stores data about a model's fundamental units.defines IGES UnitsData Entity, Type <316> Form <0> in package IGESDefs This class stores data about a model's fundamental units.defines IGES UnitsData Entity, Type <316> Form <0> in package IGESDefs This class stores data about a model's fundamental units.)#");

};

// user-defined post-inclusion per module

// user-defined post
