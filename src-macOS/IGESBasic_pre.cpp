
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESBasic_SingleParent.hxx>
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
#include <IGESBasic_Hierarchy.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESBasic_ExternalRefLibName.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESBasic_ExternalReferenceFile.hxx>
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
#include <IGESBasic_ExternalRefFileName.hxx>
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
#include <IGESBasic_AssocGroupType.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESBasic_Group.hxx>
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
#include <IGESBasic_OrderedGroup.hxx>
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
#include <IGESBasic_OrderedGroupWithoutBackP.hxx>
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
#include <IGESBasic_SingularSubfigure.hxx>
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
#include <Standard_DomainError.hxx>
#include <IGESBasic_GroupWithoutBackP.hxx>
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
#include <IGESBasic_Protocol.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <IGESBasic_Group.hxx>
#include <IGESBasic_GroupWithoutBackP.hxx>
#include <IGESBasic_SingleParent.hxx>
#include <IGESBasic_ExternalRefFileIndex.hxx>
#include <IGESBasic_OrderedGroup.hxx>
#include <IGESBasic_OrderedGroupWithoutBackP.hxx>
#include <IGESBasic_Hierarchy.hxx>
#include <IGESBasic_ExternalReferenceFile.hxx>
#include <IGESBasic_Name.hxx>
#include <IGESBasic_AssocGroupType.hxx>
#include <IGESBasic_SingularSubfigure.hxx>
#include <IGESBasic_ExternalRefFileName.hxx>
#include <IGESBasic_ExternalRefFile.hxx>
#include <IGESBasic_ExternalRefName.hxx>
#include <IGESBasic_ExternalRefLibName.hxx>
#include <IGESBasic_ToolSubfigureDef.hxx>
#include <IGESBasic_ToolGroup.hxx>
#include <IGESBasic_ToolGroupWithoutBackP.hxx>
#include <IGESBasic_ToolSingleParent.hxx>
#include <IGESBasic_ToolExternalRefFileIndex.hxx>
#include <IGESBasic_ToolOrderedGroup.hxx>
#include <IGESBasic_ToolOrderedGroupWithoutBackP.hxx>
#include <IGESBasic_ToolHierarchy.hxx>
#include <IGESBasic_ToolExternalReferenceFile.hxx>
#include <IGESBasic_ToolName.hxx>
#include <IGESBasic_ToolAssocGroupType.hxx>
#include <IGESBasic_ToolSingularSubfigure.hxx>
#include <IGESBasic_ToolExternalRefFileName.hxx>
#include <IGESBasic_ToolExternalRefFile.hxx>
#include <IGESBasic_ToolExternalRefName.hxx>
#include <IGESBasic_ToolExternalRefLibName.hxx>
#include <IGESBasic_Protocol.hxx>
#include <IGESBasic_ReadWriteModule.hxx>
#include <IGESBasic_GeneralModule.hxx>
#include <IGESBasic_SpecificModule.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <IGESBasic_HArray1OfHArray1OfXY.hxx>
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <Standard_DomainError.hxx>
#include <IGESBasic_Name.hxx>
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
#include <IGESBasic_ExternalRefFile.hxx>
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
#include <IGESBasic_SubfigureDef.hxx>
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
#include <IGESBasic_ExternalRefName.hxx>
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
#include <IGESBasic_ExternalRefFileIndex.hxx>
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

// module includes
#include <IGESBasic.hxx>
#include <IGESBasic_Array1OfLineFontEntity.hxx>
#include <IGESBasic_Array2OfHArray1OfReal.hxx>
#include <IGESBasic_AssocGroupType.hxx>
#include <IGESBasic_ExternalReferenceFile.hxx>
#include <IGESBasic_ExternalRefFile.hxx>
#include <IGESBasic_ExternalRefFileIndex.hxx>
#include <IGESBasic_ExternalRefFileName.hxx>
#include <IGESBasic_ExternalRefLibName.hxx>
#include <IGESBasic_ExternalRefName.hxx>
#include <IGESBasic_GeneralModule.hxx>
#include <IGESBasic_Group.hxx>
#include <IGESBasic_GroupWithoutBackP.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <IGESBasic_HArray1OfHArray1OfXY.hxx>
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <IGESBasic_HArray1OfLineFontEntity.hxx>
#include <IGESBasic_HArray2OfHArray1OfReal.hxx>
#include <IGESBasic_Hierarchy.hxx>
#include <IGESBasic_Name.hxx>
#include <IGESBasic_OrderedGroup.hxx>
#include <IGESBasic_OrderedGroupWithoutBackP.hxx>
#include <IGESBasic_Protocol.hxx>
#include <IGESBasic_ReadWriteModule.hxx>
#include <IGESBasic_SingleParent.hxx>
#include <IGESBasic_SingularSubfigure.hxx>
#include <IGESBasic_SpecificModule.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <IGESBasic_ToolAssocGroupType.hxx>
#include <IGESBasic_ToolExternalReferenceFile.hxx>
#include <IGESBasic_ToolExternalRefFile.hxx>
#include <IGESBasic_ToolExternalRefFileIndex.hxx>
#include <IGESBasic_ToolExternalRefFileName.hxx>
#include <IGESBasic_ToolExternalRefLibName.hxx>
#include <IGESBasic_ToolExternalRefName.hxx>
#include <IGESBasic_ToolGroup.hxx>
#include <IGESBasic_ToolGroupWithoutBackP.hxx>
#include <IGESBasic_ToolHierarchy.hxx>
#include <IGESBasic_ToolName.hxx>
#include <IGESBasic_ToolOrderedGroup.hxx>
#include <IGESBasic_ToolOrderedGroupWithoutBackP.hxx>
#include <IGESBasic_ToolSingleParent.hxx>
#include <IGESBasic_ToolSingularSubfigure.hxx>
#include <IGESBasic_ToolSubfigureDef.hxx>

// template related includes
// ./opencascade/IGESBasic_Array2OfHArray1OfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESBasic_Array1OfLineFontEntity.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESBasic_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESBasic", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array2<opencascade::handle<TColStd_HArray1OfReal> >(m,"IGESBasic_Array2OfHArray1OfReal");
    preregister_template_NCollection_Array1<opencascade::handle<IGESData_LineFontEntity> >(m,"IGESBasic_Array1OfLineFontEntity");

// classes forward declarations only
    py::class_<IGESBasic , shared_ptr<IGESBasic> >(m,"IGESBasic",R"#(This package represents basic entities from IGES)#");
    py::class_<IGESBasic_AssocGroupType ,opencascade::handle<IGESBasic_AssocGroupType> , IGESData_IGESEntity>(m,"IGESBasic_AssocGroupType",R"#(defines AssocGroupType, Type <406> Form <23> in package IGESBasic Used to assign an unambiguous identification to a Group Associativity.defines AssocGroupType, Type <406> Form <23> in package IGESBasic Used to assign an unambiguous identification to a Group Associativity.defines AssocGroupType, Type <406> Form <23> in package IGESBasic Used to assign an unambiguous identification to a Group Associativity.)#");
    py::class_<IGESBasic_ExternalRefFile ,opencascade::handle<IGESBasic_ExternalRefFile> , IGESData_IGESEntity>(m,"IGESBasic_ExternalRefFile",R"#(defines ExternalRefFile, Type <416> Form <1> in package IGESBasic Used when entire reference file is to be instanceddefines ExternalRefFile, Type <416> Form <1> in package IGESBasic Used when entire reference file is to be instanceddefines ExternalRefFile, Type <416> Form <1> in package IGESBasic Used when entire reference file is to be instanced)#");
    py::class_<IGESBasic_ExternalRefFileIndex ,opencascade::handle<IGESBasic_ExternalRefFileIndex> , IGESData_IGESEntity>(m,"IGESBasic_ExternalRefFileIndex",R"#(defines ExternalRefFileIndex, Type <402> Form <12> in package IGESBasic Contains a list of the symbolic names used by the referencing files and the DE pointers to the corresponding definitions within the referenced filedefines ExternalRefFileIndex, Type <402> Form <12> in package IGESBasic Contains a list of the symbolic names used by the referencing files and the DE pointers to the corresponding definitions within the referenced filedefines ExternalRefFileIndex, Type <402> Form <12> in package IGESBasic Contains a list of the symbolic names used by the referencing files and the DE pointers to the corresponding definitions within the referenced file)#");
    py::class_<IGESBasic_ExternalRefFileName ,opencascade::handle<IGESBasic_ExternalRefFileName> , IGESData_IGESEntity>(m,"IGESBasic_ExternalRefFileName",R"#(defines ExternalRefFileName, Type <416> Form <0-2> in package IGESBasic Used when single definition from the reference file is required or for external logical references where an entity in one file relates to an entity in another filedefines ExternalRefFileName, Type <416> Form <0-2> in package IGESBasic Used when single definition from the reference file is required or for external logical references where an entity in one file relates to an entity in another filedefines ExternalRefFileName, Type <416> Form <0-2> in package IGESBasic Used when single definition from the reference file is required or for external logical references where an entity in one file relates to an entity in another file)#");
    py::class_<IGESBasic_ExternalRefLibName ,opencascade::handle<IGESBasic_ExternalRefLibName> , IGESData_IGESEntity>(m,"IGESBasic_ExternalRefLibName",R"#(defines ExternalRefLibName, Type <416> Form <4> in package IGESBasic Used when it is assumed that a copy of the subfigure exists in native form in a library on the receiving systemdefines ExternalRefLibName, Type <416> Form <4> in package IGESBasic Used when it is assumed that a copy of the subfigure exists in native form in a library on the receiving systemdefines ExternalRefLibName, Type <416> Form <4> in package IGESBasic Used when it is assumed that a copy of the subfigure exists in native form in a library on the receiving system)#");
    py::class_<IGESBasic_ExternalRefName ,opencascade::handle<IGESBasic_ExternalRefName> , IGESData_IGESEntity>(m,"IGESBasic_ExternalRefName",R"#(defines ExternalRefName, Type <416> Form <3> in package IGESBasic Used when it is assumed that a copy of the subfigure exists in native form on the receiving systemdefines ExternalRefName, Type <416> Form <3> in package IGESBasic Used when it is assumed that a copy of the subfigure exists in native form on the receiving systemdefines ExternalRefName, Type <416> Form <3> in package IGESBasic Used when it is assumed that a copy of the subfigure exists in native form on the receiving system)#");
    py::class_<IGESBasic_ExternalReferenceFile ,opencascade::handle<IGESBasic_ExternalReferenceFile> , IGESData_IGESEntity>(m,"IGESBasic_ExternalReferenceFile",R"#(defines ExternalReferenceFile, Type <406> Form <12> in package IGESBasic References definitions residing in another filedefines ExternalReferenceFile, Type <406> Form <12> in package IGESBasic References definitions residing in another filedefines ExternalReferenceFile, Type <406> Form <12> in package IGESBasic References definitions residing in another file)#");
    py::class_<IGESBasic_GeneralModule ,opencascade::handle<IGESBasic_GeneralModule> , IGESData_GeneralModule>(m,"IGESBasic_GeneralModule",R"#(Definition of General Services for IGESBasic (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESBasic (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESBasic (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESBasic_Group ,opencascade::handle<IGESBasic_Group> , IGESData_IGESEntity>(m,"IGESBasic_Group",R"#(defines Group, Type <402> Form <1> in package IGESBasic The Group Associativity allows a collection of a set of entities to be maintained as a single, logical entitydefines Group, Type <402> Form <1> in package IGESBasic The Group Associativity allows a collection of a set of entities to be maintained as a single, logical entitydefines Group, Type <402> Form <1> in package IGESBasic The Group Associativity allows a collection of a set of entities to be maintained as a single, logical entity)#");
    py::class_<IGESBasic_HArray1OfHArray1OfIGESEntity ,opencascade::handle<IGESBasic_HArray1OfHArray1OfIGESEntity> , Standard_Transient>(m,"IGESBasic_HArray1OfHArray1OfIGESEntity",R"#()#");
    py::class_<IGESBasic_HArray1OfHArray1OfInteger ,opencascade::handle<IGESBasic_HArray1OfHArray1OfInteger> , Standard_Transient>(m,"IGESBasic_HArray1OfHArray1OfInteger",R"#()#");
    py::class_<IGESBasic_HArray1OfHArray1OfReal ,opencascade::handle<IGESBasic_HArray1OfHArray1OfReal> , Standard_Transient>(m,"IGESBasic_HArray1OfHArray1OfReal",R"#()#");
    py::class_<IGESBasic_HArray1OfHArray1OfXY ,opencascade::handle<IGESBasic_HArray1OfHArray1OfXY> , Standard_Transient>(m,"IGESBasic_HArray1OfHArray1OfXY",R"#()#");
    py::class_<IGESBasic_HArray1OfHArray1OfXYZ ,opencascade::handle<IGESBasic_HArray1OfHArray1OfXYZ> , Standard_Transient>(m,"IGESBasic_HArray1OfHArray1OfXYZ",R"#()#");
    py::class_<IGESBasic_HArray1OfLineFontEntity ,opencascade::handle<IGESBasic_HArray1OfLineFontEntity> , IGESBasic_Array1OfLineFontEntity, Standard_Transient>(m,"IGESBasic_HArray1OfLineFontEntity",R"#()#");
    py::class_<IGESBasic_HArray2OfHArray1OfReal ,opencascade::handle<IGESBasic_HArray2OfHArray1OfReal> , IGESBasic_Array2OfHArray1OfReal, Standard_Transient>(m,"IGESBasic_HArray2OfHArray1OfReal",R"#()#");
    py::class_<IGESBasic_Hierarchy ,opencascade::handle<IGESBasic_Hierarchy> , IGESData_IGESEntity>(m,"IGESBasic_Hierarchy",R"#(defines Hierarchy, Type <406> Form <10> in package IGESBasic Provides ability to control the hierarchy of each directory entry attribute.defines Hierarchy, Type <406> Form <10> in package IGESBasic Provides ability to control the hierarchy of each directory entry attribute.defines Hierarchy, Type <406> Form <10> in package IGESBasic Provides ability to control the hierarchy of each directory entry attribute.)#");
    py::class_<IGESBasic_Name ,opencascade::handle<IGESBasic_Name> , IGESData_NameEntity>(m,"IGESBasic_Name",R"#(defines Name, Type <406> Form <15> in package IGESBasic Used to specify a user defined namedefines Name, Type <406> Form <15> in package IGESBasic Used to specify a user defined namedefines Name, Type <406> Form <15> in package IGESBasic Used to specify a user defined name)#");
    py::class_<IGESBasic_Protocol ,opencascade::handle<IGESBasic_Protocol> , IGESData_Protocol>(m,"IGESBasic_Protocol",R"#(Description of Protocol for IGESBasicDescription of Protocol for IGESBasicDescription of Protocol for IGESBasic)#");
    py::class_<IGESBasic_ReadWriteModule ,opencascade::handle<IGESBasic_ReadWriteModule> , IGESData_ReadWriteModule>(m,"IGESBasic_ReadWriteModule",R"#(Defines basic File Access Module for IGESBasic (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines basic File Access Module for IGESBasic (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines basic File Access Module for IGESBasic (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.)#");
    py::class_<IGESBasic_SingleParent ,opencascade::handle<IGESBasic_SingleParent> , IGESData_SingleParentEntity>(m,"IGESBasic_SingleParent",R"#(defines SingleParent, Type <402> Form <9> in package IGESBasic It defines a logical structure of one independent (parent) entity and one or more subordinate (children) entitiesdefines SingleParent, Type <402> Form <9> in package IGESBasic It defines a logical structure of one independent (parent) entity and one or more subordinate (children) entitiesdefines SingleParent, Type <402> Form <9> in package IGESBasic It defines a logical structure of one independent (parent) entity and one or more subordinate (children) entities)#");
    py::class_<IGESBasic_SingularSubfigure ,opencascade::handle<IGESBasic_SingularSubfigure> , IGESData_IGESEntity>(m,"IGESBasic_SingularSubfigure",R"#(defines SingularSubfigure, Type <408> Form <0> in package IGESBasic Defines the occurrence of a single instance of the defined Subfigure.defines SingularSubfigure, Type <408> Form <0> in package IGESBasic Defines the occurrence of a single instance of the defined Subfigure.defines SingularSubfigure, Type <408> Form <0> in package IGESBasic Defines the occurrence of a single instance of the defined Subfigure.)#");
    py::class_<IGESBasic_SpecificModule ,opencascade::handle<IGESBasic_SpecificModule> , IGESData_SpecificModule>(m,"IGESBasic_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump & OwnCorrect, for IGESBasicDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESBasicDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESBasic)#");
    py::class_<IGESBasic_SubfigureDef ,opencascade::handle<IGESBasic_SubfigureDef> , IGESData_IGESEntity>(m,"IGESBasic_SubfigureDef",R"#(defines SubfigureDef, Type <308> Form <0> in package IGESBasic This Entity permits a single definition of a detail to be utilized in multiple instances in the creation of the whole picturedefines SubfigureDef, Type <308> Form <0> in package IGESBasic This Entity permits a single definition of a detail to be utilized in multiple instances in the creation of the whole picturedefines SubfigureDef, Type <308> Form <0> in package IGESBasic This Entity permits a single definition of a detail to be utilized in multiple instances in the creation of the whole picture)#");
    py::class_<IGESBasic_ToolAssocGroupType , shared_ptr<IGESBasic_ToolAssocGroupType> >(m,"IGESBasic_ToolAssocGroupType",R"#(Tool to work on a AssocGroupType. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolExternalRefFile , shared_ptr<IGESBasic_ToolExternalRefFile> >(m,"IGESBasic_ToolExternalRefFile",R"#(Tool to work on a ExternalRefFile. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolExternalRefFileIndex , shared_ptr<IGESBasic_ToolExternalRefFileIndex> >(m,"IGESBasic_ToolExternalRefFileIndex",R"#(Tool to work on a ExternalRefFileIndex. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolExternalRefFileName , shared_ptr<IGESBasic_ToolExternalRefFileName> >(m,"IGESBasic_ToolExternalRefFileName",R"#(Tool to work on a ExternalRefFileName. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolExternalRefLibName , shared_ptr<IGESBasic_ToolExternalRefLibName> >(m,"IGESBasic_ToolExternalRefLibName",R"#(Tool to work on a ExternalRefLibName. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolExternalRefName , shared_ptr<IGESBasic_ToolExternalRefName> >(m,"IGESBasic_ToolExternalRefName",R"#(Tool to work on a ExternalRefName. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolExternalReferenceFile , shared_ptr<IGESBasic_ToolExternalReferenceFile> >(m,"IGESBasic_ToolExternalReferenceFile",R"#(Tool to work on a ExternalReferenceFile. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolGroup , shared_ptr<IGESBasic_ToolGroup> >(m,"IGESBasic_ToolGroup",R"#(Tool to work on a Group. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolGroupWithoutBackP , shared_ptr<IGESBasic_ToolGroupWithoutBackP> >(m,"IGESBasic_ToolGroupWithoutBackP",R"#(Tool to work on a GroupWithoutBackP. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolHierarchy , shared_ptr<IGESBasic_ToolHierarchy> >(m,"IGESBasic_ToolHierarchy",R"#(Tool to work on a Hierarchy. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolName , shared_ptr<IGESBasic_ToolName> >(m,"IGESBasic_ToolName",R"#(Tool to work on a Name. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolOrderedGroup , shared_ptr<IGESBasic_ToolOrderedGroup> >(m,"IGESBasic_ToolOrderedGroup",R"#(Tool to work on a OrderedGroup. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolOrderedGroupWithoutBackP , shared_ptr<IGESBasic_ToolOrderedGroupWithoutBackP> >(m,"IGESBasic_ToolOrderedGroupWithoutBackP",R"#(Tool to work on a OrderedGroupWithoutBackP. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolSingleParent , shared_ptr<IGESBasic_ToolSingleParent> >(m,"IGESBasic_ToolSingleParent",R"#(Tool to work on a SingleParent. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolSingularSubfigure , shared_ptr<IGESBasic_ToolSingularSubfigure> >(m,"IGESBasic_ToolSingularSubfigure",R"#(Tool to work on a SingularSubfigure. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_ToolSubfigureDef , shared_ptr<IGESBasic_ToolSubfigureDef> >(m,"IGESBasic_ToolSubfigureDef",R"#(Tool to work on a SubfigureDef. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESBasic_GroupWithoutBackP ,opencascade::handle<IGESBasic_GroupWithoutBackP> , IGESBasic_Group>(m,"IGESBasic_GroupWithoutBackP",R"#(defines GroupWithoutBackP, Type <402> Form <7> in package IGESBasic this class defines a Group without back pointersdefines GroupWithoutBackP, Type <402> Form <7> in package IGESBasic this class defines a Group without back pointersdefines GroupWithoutBackP, Type <402> Form <7> in package IGESBasic this class defines a Group without back pointers)#");
    py::class_<IGESBasic_OrderedGroup ,opencascade::handle<IGESBasic_OrderedGroup> , IGESBasic_Group>(m,"IGESBasic_OrderedGroup",R"#(defines OrderedGroup, Type <402> Form <14> in package IGESBasic this class defines an Ordered Group with back pointers Allows a collection of a set of entities to be maintained as a single entity, but the group is ordered. It inherits from Groupdefines OrderedGroup, Type <402> Form <14> in package IGESBasic this class defines an Ordered Group with back pointers Allows a collection of a set of entities to be maintained as a single entity, but the group is ordered. It inherits from Groupdefines OrderedGroup, Type <402> Form <14> in package IGESBasic this class defines an Ordered Group with back pointers Allows a collection of a set of entities to be maintained as a single entity, but the group is ordered. It inherits from Group)#");
    py::class_<IGESBasic_OrderedGroupWithoutBackP ,opencascade::handle<IGESBasic_OrderedGroupWithoutBackP> , IGESBasic_Group>(m,"IGESBasic_OrderedGroupWithoutBackP",R"#(defines OrderedGroupWithoutBackP, Type <402> Form <15> in package IGESBasic Allows a collection of a set of entities to be maintained as a single entity, but the group is ordered and there are no back pointers. It inherits from Groupdefines OrderedGroupWithoutBackP, Type <402> Form <15> in package IGESBasic Allows a collection of a set of entities to be maintained as a single entity, but the group is ordered and there are no back pointers. It inherits from Groupdefines OrderedGroupWithoutBackP, Type <402> Form <15> in package IGESBasic Allows a collection of a set of entities to be maintained as a single entity, but the group is ordered and there are no back pointers. It inherits from Group)#");

};

// user-defined post-inclusion per module

// user-defined post
