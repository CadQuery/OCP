
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_DomainError.hxx>
#include <IGESGraph_DrawingUnits.hxx>
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
#include <IGESGraph_Protocol.hxx>
#include <IGESGraph_LineFontDefTemplate.hxx>
#include <IGESGraph_LineFontDefPattern.hxx>
#include <IGESGraph_TextFontDef.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <IGESGraph_Color.hxx>
#include <IGESGraph_DefinitionLevel.hxx>
#include <IGESGraph_NominalSize.hxx>
#include <IGESGraph_DrawingSize.hxx>
#include <IGESGraph_DrawingUnits.hxx>
#include <IGESGraph_IntercharacterSpacing.hxx>
#include <IGESGraph_LineFontPredefined.hxx>
#include <IGESGraph_HighLight.hxx>
#include <IGESGraph_Pick.hxx>
#include <IGESGraph_UniformRectGrid.hxx>
#include <IGESGraph_ToolLineFontDefTemplate.hxx>
#include <IGESGraph_ToolLineFontDefPattern.hxx>
#include <IGESGraph_ToolTextFontDef.hxx>
#include <IGESGraph_ToolTextDisplayTemplate.hxx>
#include <IGESGraph_ToolColor.hxx>
#include <IGESGraph_ToolDefinitionLevel.hxx>
#include <IGESGraph_ToolNominalSize.hxx>
#include <IGESGraph_ToolDrawingSize.hxx>
#include <IGESGraph_ToolDrawingUnits.hxx>
#include <IGESGraph_ToolIntercharacterSpacing.hxx>
#include <IGESGraph_ToolLineFontPredefined.hxx>
#include <IGESGraph_ToolHighLight.hxx>
#include <IGESGraph_ToolPick.hxx>
#include <IGESGraph_ToolUniformRectGrid.hxx>
#include <IGESGraph_Protocol.hxx>
#include <IGESGraph_ReadWriteModule.hxx>
#include <IGESGraph_GeneralModule.hxx>
#include <IGESGraph_SpecificModule.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_LineFontDefPattern.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESDumper.hxx>
#include <Message_Messenger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_IntercharacterSpacing.hxx>
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
#include <IGESGraph_DrawingSize.hxx>
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
#include <IGESGraph_LineFontDefTemplate.hxx>
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
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_LineFontPredefined.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_HAsciiString.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_HighLight.hxx>
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
#include <IGESGraph_Pick.hxx>
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
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_Color.hxx>
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
#include <IGESGraph_NominalSize.hxx>
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
#include <IGESGraph_DefinitionLevel.hxx>
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
#include <IGESGraph_TextFontDef.hxx>
#include <gp_Pnt.hxx>
#include <Standard_DomainError.hxx>
#include <IGESGraph_TextFontDef.hxx>
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
#include <IGESGraph_TextDisplayTemplate.hxx>
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
#include <IGESGraph_UniformRectGrid.hxx>
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
#include <IGESGraph.hxx>
#include <IGESGraph_Array1OfColor.hxx>
#include <IGESGraph_Array1OfTextDisplayTemplate.hxx>
#include <IGESGraph_Array1OfTextFontDef.hxx>
#include <IGESGraph_Color.hxx>
#include <IGESGraph_DefinitionLevel.hxx>
#include <IGESGraph_DrawingSize.hxx>
#include <IGESGraph_DrawingUnits.hxx>
#include <IGESGraph_GeneralModule.hxx>
#include <IGESGraph_HArray1OfColor.hxx>
#include <IGESGraph_HArray1OfTextDisplayTemplate.hxx>
#include <IGESGraph_HArray1OfTextFontDef.hxx>
#include <IGESGraph_HighLight.hxx>
#include <IGESGraph_IntercharacterSpacing.hxx>
#include <IGESGraph_LineFontDefPattern.hxx>
#include <IGESGraph_LineFontDefTemplate.hxx>
#include <IGESGraph_LineFontPredefined.hxx>
#include <IGESGraph_NominalSize.hxx>
#include <IGESGraph_Pick.hxx>
#include <IGESGraph_Protocol.hxx>
#include <IGESGraph_ReadWriteModule.hxx>
#include <IGESGraph_SpecificModule.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <IGESGraph_TextFontDef.hxx>
#include <IGESGraph_ToolColor.hxx>
#include <IGESGraph_ToolDefinitionLevel.hxx>
#include <IGESGraph_ToolDrawingSize.hxx>
#include <IGESGraph_ToolDrawingUnits.hxx>
#include <IGESGraph_ToolHighLight.hxx>
#include <IGESGraph_ToolIntercharacterSpacing.hxx>
#include <IGESGraph_ToolLineFontDefPattern.hxx>
#include <IGESGraph_ToolLineFontDefTemplate.hxx>
#include <IGESGraph_ToolLineFontPredefined.hxx>
#include <IGESGraph_ToolNominalSize.hxx>
#include <IGESGraph_ToolPick.hxx>
#include <IGESGraph_ToolTextDisplayTemplate.hxx>
#include <IGESGraph_ToolTextFontDef.hxx>
#include <IGESGraph_ToolUniformRectGrid.hxx>
#include <IGESGraph_UniformRectGrid.hxx>

// template related includes
// ./opencascade/IGESGraph_Array1OfColor.hxx
#include "NCollection.hxx"
// ./opencascade/IGESGraph_Array1OfTextDisplayTemplate.hxx
#include "NCollection.hxx"
// ./opencascade/IGESGraph_Array1OfTextFontDef.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESGraph_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESGraph", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<IGESGraph_Color> >(m,"IGESGraph_Array1OfColor");  
    preregister_template_NCollection_Array1<opencascade::handle<IGESGraph_TextDisplayTemplate> >(m,"IGESGraph_Array1OfTextDisplayTemplate");  
    preregister_template_NCollection_Array1<opencascade::handle<IGESGraph_TextFontDef> >(m,"IGESGraph_Array1OfTextFontDef");  

// classes forward declarations only
    py::class_<IGESGraph , shared_ptr<IGESGraph>  >(m,"IGESGraph",R"#(This package contains the group of classes necessary to define Graphic data among Structure Entities. (e.g., Fonts, Colors, Screen management ...))#");
    py::class_<IGESGraph_Color ,opencascade::handle<IGESGraph_Color>  , IGESData_ColorEntity >(m,"IGESGraph_Color",R"#(defines IGESColor, Type <314> Form <0> in package IGESGraphdefines IGESColor, Type <314> Form <0> in package IGESGraphdefines IGESColor, Type <314> Form <0> in package IGESGraph)#");
    py::class_<IGESGraph_DefinitionLevel ,opencascade::handle<IGESGraph_DefinitionLevel>  , IGESData_LevelListEntity >(m,"IGESGraph_DefinitionLevel",R"#(defines IGESDefinitionLevel, Type <406> Form <1> in package IGESGraphdefines IGESDefinitionLevel, Type <406> Form <1> in package IGESGraphdefines IGESDefinitionLevel, Type <406> Form <1> in package IGESGraph)#");
    py::class_<IGESGraph_DrawingSize ,opencascade::handle<IGESGraph_DrawingSize>  , IGESData_IGESEntity >(m,"IGESGraph_DrawingSize",R"#(defines IGESDrawingSize, Type <406> Form <16> in package IGESGraphdefines IGESDrawingSize, Type <406> Form <16> in package IGESGraphdefines IGESDrawingSize, Type <406> Form <16> in package IGESGraph)#");
    py::class_<IGESGraph_DrawingUnits ,opencascade::handle<IGESGraph_DrawingUnits>  , IGESData_IGESEntity >(m,"IGESGraph_DrawingUnits",R"#(defines IGESDrawingUnits, Type <406> Form <17> in package IGESGraphdefines IGESDrawingUnits, Type <406> Form <17> in package IGESGraphdefines IGESDrawingUnits, Type <406> Form <17> in package IGESGraph)#");
    py::class_<IGESGraph_GeneralModule ,opencascade::handle<IGESGraph_GeneralModule>  , IGESData_GeneralModule >(m,"IGESGraph_GeneralModule",R"#(Definition of General Services for IGESGraph (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESGraph (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESGraph (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESGraph_HArray1OfColor ,opencascade::handle<IGESGraph_HArray1OfColor>  , IGESGraph_Array1OfColor , Standard_Transient >(m,"IGESGraph_HArray1OfColor",R"#()#");
    py::class_<IGESGraph_HArray1OfTextDisplayTemplate ,opencascade::handle<IGESGraph_HArray1OfTextDisplayTemplate>  , IGESGraph_Array1OfTextDisplayTemplate , Standard_Transient >(m,"IGESGraph_HArray1OfTextDisplayTemplate",R"#()#");
    py::class_<IGESGraph_HArray1OfTextFontDef ,opencascade::handle<IGESGraph_HArray1OfTextFontDef>  , IGESGraph_Array1OfTextFontDef , Standard_Transient >(m,"IGESGraph_HArray1OfTextFontDef",R"#()#");
    py::class_<IGESGraph_HighLight ,opencascade::handle<IGESGraph_HighLight>  , IGESData_IGESEntity >(m,"IGESGraph_HighLight",R"#(defines IGESHighLight, Type <406> Form <20> in package IGESGraphdefines IGESHighLight, Type <406> Form <20> in package IGESGraphdefines IGESHighLight, Type <406> Form <20> in package IGESGraph)#");
    py::class_<IGESGraph_IntercharacterSpacing ,opencascade::handle<IGESGraph_IntercharacterSpacing>  , IGESData_IGESEntity >(m,"IGESGraph_IntercharacterSpacing",R"#(defines IGESIntercharacterSpacing, Type <406> Form <18> in package IGESGraphdefines IGESIntercharacterSpacing, Type <406> Form <18> in package IGESGraphdefines IGESIntercharacterSpacing, Type <406> Form <18> in package IGESGraph)#");
    py::class_<IGESGraph_LineFontDefPattern ,opencascade::handle<IGESGraph_LineFontDefPattern>  , IGESData_LineFontEntity >(m,"IGESGraph_LineFontDefPattern",R"#(defines IGESLineFontDefPattern, Type <304> Form <2> in package IGESGraphdefines IGESLineFontDefPattern, Type <304> Form <2> in package IGESGraphdefines IGESLineFontDefPattern, Type <304> Form <2> in package IGESGraph)#");
    py::class_<IGESGraph_LineFontDefTemplate ,opencascade::handle<IGESGraph_LineFontDefTemplate>  , IGESData_LineFontEntity >(m,"IGESGraph_LineFontDefTemplate",R"#(defines IGESLineFontDefTemplate, Type <304> Form <1> in package IGESGraphdefines IGESLineFontDefTemplate, Type <304> Form <1> in package IGESGraphdefines IGESLineFontDefTemplate, Type <304> Form <1> in package IGESGraph)#");
    py::class_<IGESGraph_LineFontPredefined ,opencascade::handle<IGESGraph_LineFontPredefined>  , IGESData_IGESEntity >(m,"IGESGraph_LineFontPredefined",R"#(defines IGESLineFontPredefined, Type <406> Form <19> in package IGESGraphdefines IGESLineFontPredefined, Type <406> Form <19> in package IGESGraphdefines IGESLineFontPredefined, Type <406> Form <19> in package IGESGraph)#");
    py::class_<IGESGraph_NominalSize ,opencascade::handle<IGESGraph_NominalSize>  , IGESData_IGESEntity >(m,"IGESGraph_NominalSize",R"#(defines IGESNominalSize, Type <406> Form <13> in package IGESGraphdefines IGESNominalSize, Type <406> Form <13> in package IGESGraphdefines IGESNominalSize, Type <406> Form <13> in package IGESGraph)#");
    py::class_<IGESGraph_Pick ,opencascade::handle<IGESGraph_Pick>  , IGESData_IGESEntity >(m,"IGESGraph_Pick",R"#(defines IGESPick, Type <406> Form <21> in package IGESGraphdefines IGESPick, Type <406> Form <21> in package IGESGraphdefines IGESPick, Type <406> Form <21> in package IGESGraph)#");
    py::class_<IGESGraph_Protocol ,opencascade::handle<IGESGraph_Protocol>  , IGESData_Protocol >(m,"IGESGraph_Protocol",R"#(Description of Protocol for IGESGraphDescription of Protocol for IGESGraphDescription of Protocol for IGESGraph)#");
    py::class_<IGESGraph_ReadWriteModule ,opencascade::handle<IGESGraph_ReadWriteModule>  , IGESData_ReadWriteModule >(m,"IGESGraph_ReadWriteModule",R"#(Defines Graph File Access Module for IGESGraph (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Graph File Access Module for IGESGraph (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines Graph File Access Module for IGESGraph (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.)#");
    py::class_<IGESGraph_SpecificModule ,opencascade::handle<IGESGraph_SpecificModule>  , IGESData_SpecificModule >(m,"IGESGraph_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump & OwnCorrect, for IGESGraphDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESGraphDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESGraph)#");
    py::class_<IGESGraph_TextDisplayTemplate ,opencascade::handle<IGESGraph_TextDisplayTemplate>  , IGESData_IGESEntity >(m,"IGESGraph_TextDisplayTemplate",R"#(defines IGES TextDisplayTemplate Entity, Type <312>, form <0, 1> in package IGESGraphdefines IGES TextDisplayTemplate Entity, Type <312>, form <0, 1> in package IGESGraphdefines IGES TextDisplayTemplate Entity, Type <312>, form <0, 1> in package IGESGraph)#");
    py::class_<IGESGraph_TextFontDef ,opencascade::handle<IGESGraph_TextFontDef>  , IGESData_IGESEntity >(m,"IGESGraph_TextFontDef",R"#(defines IGES Text Font Definition Entity, Type <310> in package IGESGraphdefines IGES Text Font Definition Entity, Type <310> in package IGESGraphdefines IGES Text Font Definition Entity, Type <310> in package IGESGraph)#");
    py::class_<IGESGraph_ToolColor , shared_ptr<IGESGraph_ToolColor>  >(m,"IGESGraph_ToolColor",R"#(Tool to work on a Color. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolDefinitionLevel , shared_ptr<IGESGraph_ToolDefinitionLevel>  >(m,"IGESGraph_ToolDefinitionLevel",R"#(Tool to work on a DefinitionLevel. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolDrawingSize , shared_ptr<IGESGraph_ToolDrawingSize>  >(m,"IGESGraph_ToolDrawingSize",R"#(Tool to work on a DrawingSize. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolDrawingUnits , shared_ptr<IGESGraph_ToolDrawingUnits>  >(m,"IGESGraph_ToolDrawingUnits",R"#(Tool to work on a DrawingUnits. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolHighLight , shared_ptr<IGESGraph_ToolHighLight>  >(m,"IGESGraph_ToolHighLight",R"#(Tool to work on a HighLight. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolIntercharacterSpacing , shared_ptr<IGESGraph_ToolIntercharacterSpacing>  >(m,"IGESGraph_ToolIntercharacterSpacing",R"#(Tool to work on a IntercharacterSpacing. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolLineFontDefPattern , shared_ptr<IGESGraph_ToolLineFontDefPattern>  >(m,"IGESGraph_ToolLineFontDefPattern",R"#(Tool to work on a LineFontDefPattern. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolLineFontDefTemplate , shared_ptr<IGESGraph_ToolLineFontDefTemplate>  >(m,"IGESGraph_ToolLineFontDefTemplate",R"#(Tool to work on a LineFontDefTemplate. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolLineFontPredefined , shared_ptr<IGESGraph_ToolLineFontPredefined>  >(m,"IGESGraph_ToolLineFontPredefined",R"#(Tool to work on a LineFontPredefined. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolNominalSize , shared_ptr<IGESGraph_ToolNominalSize>  >(m,"IGESGraph_ToolNominalSize",R"#(Tool to work on a NominalSize. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolPick , shared_ptr<IGESGraph_ToolPick>  >(m,"IGESGraph_ToolPick",R"#(Tool to work on a Pick. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolTextDisplayTemplate , shared_ptr<IGESGraph_ToolTextDisplayTemplate>  >(m,"IGESGraph_ToolTextDisplayTemplate",R"#(Tool to work on a TextDisplayTemplate. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolTextFontDef , shared_ptr<IGESGraph_ToolTextFontDef>  >(m,"IGESGraph_ToolTextFontDef",R"#(Tool to work on a TextFontDef. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_ToolUniformRectGrid , shared_ptr<IGESGraph_ToolUniformRectGrid>  >(m,"IGESGraph_ToolUniformRectGrid",R"#(Tool to work on a UniformRectGrid. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESGraph_UniformRectGrid ,opencascade::handle<IGESGraph_UniformRectGrid>  , IGESData_IGESEntity >(m,"IGESGraph_UniformRectGrid",R"#(defines IGESUniformRectGrid, Type <406> Form <22> in package IGESGraphdefines IGESUniformRectGrid, Type <406> Form <22> in package IGESGraphdefines IGESUniformRectGrid, Type <406> Form <22> in package IGESGraph)#");

};

// user-defined post-inclusion per module

// user-defined post
