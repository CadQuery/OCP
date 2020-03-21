
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IGESData_IGESEntity.hxx>
#include <Interface_EntityIterator.hxx>
#include <IGESData_DirChecker.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_PWBArtworkStackup.hxx>
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
#include <IGESAppli_LevelToPWBLayerMap.hxx>
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
#include <IGESAppli_FlowLineSpec.hxx>
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
#include <IGESAppli_ReferenceDesignator.hxx>
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
#include <IGESDimen_GeneralNote.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_LevelFunction.hxx>
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
#include <IGESAppli_NodalResults.hxx>
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
#include <IGESAppli_NodalDisplAndRot.hxx>
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
#include <IGESAppli_Node.hxx>
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
#include <IGESGeom_TransformationMatrix.hxx>
#include <gp_Pnt.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_PipingFlow.hxx>
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
#include <IGESAppli_PartNumber.hxx>
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
#include <IGESAppli_RegionRestriction.hxx>
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
#include <IGESAppli_PWBDrilledHole.hxx>
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
#include <IGESAppli_FiniteElement.hxx>
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
#include <IGESAppli_PinNumber.hxx>
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
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_IGESWriter.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_DrilledHole.hxx>
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
#include <IGESAppli_Flow.hxx>
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
#include <IGESAppli_Node.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_LineWidening.hxx>
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
#include <IGESAppli_NodalConstraint.hxx>
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
#include <IGESAppli_Protocol.hxx>
#include <IGESAppli_Node.hxx>
#include <IGESAppli_FiniteElement.hxx>
#include <IGESAppli_NodalDisplAndRot.hxx>
#include <IGESAppli_NodalResults.hxx>
#include <IGESAppli_ElementResults.hxx>
#include <IGESAppli_Flow.hxx>
#include <IGESAppli_PipingFlow.hxx>
#include <IGESAppli_RegionRestriction.hxx>
#include <IGESAppli_LevelFunction.hxx>
#include <IGESAppli_LineWidening.hxx>
#include <IGESAppli_DrilledHole.hxx>
#include <IGESAppli_ReferenceDesignator.hxx>
#include <IGESAppli_PinNumber.hxx>
#include <IGESAppli_PartNumber.hxx>
#include <IGESAppli_FlowLineSpec.hxx>
#include <IGESAppli_LevelToPWBLayerMap.hxx>
#include <IGESAppli_PWBArtworkStackup.hxx>
#include <IGESAppli_PWBDrilledHole.hxx>
#include <IGESAppli_NodalConstraint.hxx>
#include <IGESAppli_ToolNode.hxx>
#include <IGESAppli_ToolFiniteElement.hxx>
#include <IGESAppli_ToolNodalDisplAndRot.hxx>
#include <IGESAppli_ToolNodalResults.hxx>
#include <IGESAppli_ToolElementResults.hxx>
#include <IGESAppli_ToolFlow.hxx>
#include <IGESAppli_ToolPipingFlow.hxx>
#include <IGESAppli_ToolRegionRestriction.hxx>
#include <IGESAppli_ToolLevelFunction.hxx>
#include <IGESAppli_ToolLineWidening.hxx>
#include <IGESAppli_ToolDrilledHole.hxx>
#include <IGESAppli_ToolReferenceDesignator.hxx>
#include <IGESAppli_ToolPinNumber.hxx>
#include <IGESAppli_ToolPartNumber.hxx>
#include <IGESAppli_ToolFlowLineSpec.hxx>
#include <IGESAppli_ToolLevelToPWBLayerMap.hxx>
#include <IGESAppli_ToolPWBArtworkStackup.hxx>
#include <IGESAppli_ToolPWBDrilledHole.hxx>
#include <IGESAppli_ToolNodalConstraint.hxx>
#include <IGESAppli_Protocol.hxx>
#include <IGESAppli_ReadWriteModule.hxx>
#include <IGESAppli_GeneralModule.hxx>
#include <IGESAppli_SpecificModule.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_DomainError.hxx>
#include <IGESAppli_ElementResults.hxx>
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

// module includes
#include <IGESAppli.hxx>
#include <IGESAppli_Array1OfFiniteElement.hxx>
#include <IGESAppli_Array1OfFlow.hxx>
#include <IGESAppli_Array1OfNode.hxx>
#include <IGESAppli_DrilledHole.hxx>
#include <IGESAppli_ElementResults.hxx>
#include <IGESAppli_FiniteElement.hxx>
#include <IGESAppli_Flow.hxx>
#include <IGESAppli_FlowLineSpec.hxx>
#include <IGESAppli_GeneralModule.hxx>
#include <IGESAppli_HArray1OfFiniteElement.hxx>
#include <IGESAppli_HArray1OfFlow.hxx>
#include <IGESAppli_HArray1OfNode.hxx>
#include <IGESAppli_LevelFunction.hxx>
#include <IGESAppli_LevelToPWBLayerMap.hxx>
#include <IGESAppli_LineWidening.hxx>
#include <IGESAppli_NodalConstraint.hxx>
#include <IGESAppli_NodalDisplAndRot.hxx>
#include <IGESAppli_NodalResults.hxx>
#include <IGESAppli_Node.hxx>
#include <IGESAppli_PartNumber.hxx>
#include <IGESAppli_PinNumber.hxx>
#include <IGESAppli_PipingFlow.hxx>
#include <IGESAppli_Protocol.hxx>
#include <IGESAppli_PWBArtworkStackup.hxx>
#include <IGESAppli_PWBDrilledHole.hxx>
#include <IGESAppli_ReadWriteModule.hxx>
#include <IGESAppli_ReferenceDesignator.hxx>
#include <IGESAppli_RegionRestriction.hxx>
#include <IGESAppli_SpecificModule.hxx>
#include <IGESAppli_ToolDrilledHole.hxx>
#include <IGESAppli_ToolElementResults.hxx>
#include <IGESAppli_ToolFiniteElement.hxx>
#include <IGESAppli_ToolFlow.hxx>
#include <IGESAppli_ToolFlowLineSpec.hxx>
#include <IGESAppli_ToolLevelFunction.hxx>
#include <IGESAppli_ToolLevelToPWBLayerMap.hxx>
#include <IGESAppli_ToolLineWidening.hxx>
#include <IGESAppli_ToolNodalConstraint.hxx>
#include <IGESAppli_ToolNodalDisplAndRot.hxx>
#include <IGESAppli_ToolNodalResults.hxx>
#include <IGESAppli_ToolNode.hxx>
#include <IGESAppli_ToolPartNumber.hxx>
#include <IGESAppli_ToolPinNumber.hxx>
#include <IGESAppli_ToolPipingFlow.hxx>
#include <IGESAppli_ToolPWBArtworkStackup.hxx>
#include <IGESAppli_ToolPWBDrilledHole.hxx>
#include <IGESAppli_ToolReferenceDesignator.hxx>
#include <IGESAppli_ToolRegionRestriction.hxx>

// template related includes
// ./opencascade/IGESAppli_Array1OfFlow.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESAppli_Array1OfNode.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IGESAppli_Array1OfFiniteElement.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESAppli_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IGESAppli", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<opencascade::handle<IGESAppli_Flow> >(m,"IGESAppli_Array1OfFlow");
    preregister_template_NCollection_Array1<opencascade::handle<IGESAppli_Node> >(m,"IGESAppli_Array1OfNode");
    preregister_template_NCollection_Array1<opencascade::handle<IGESAppli_FiniteElement> >(m,"IGESAppli_Array1OfFiniteElement");

// classes forward declarations only
    py::class_<IGESAppli , shared_ptr<IGESAppli> >(m,"IGESAppli",R"#(This package represents collection of miscellaneous entities from IGES)#");
    py::class_<IGESAppli_DrilledHole ,opencascade::handle<IGESAppli_DrilledHole> , IGESData_IGESEntity>(m,"IGESAppli_DrilledHole",R"#(defines DrilledHole, Type <406> Form <6> in package IGESAppli Identifies an entity representing a drilled hole through a printed circuit board.defines DrilledHole, Type <406> Form <6> in package IGESAppli Identifies an entity representing a drilled hole through a printed circuit board.defines DrilledHole, Type <406> Form <6> in package IGESAppli Identifies an entity representing a drilled hole through a printed circuit board.)#");
    py::class_<IGESAppli_ElementResults ,opencascade::handle<IGESAppli_ElementResults> , IGESData_IGESEntity>(m,"IGESAppli_ElementResults",R"#(defines ElementResults, Type <148> in package IGESAppli Used to find the results of FEM analysisdefines ElementResults, Type <148> in package IGESAppli Used to find the results of FEM analysisdefines ElementResults, Type <148> in package IGESAppli Used to find the results of FEM analysis)#");
    py::class_<IGESAppli_FiniteElement ,opencascade::handle<IGESAppli_FiniteElement> , IGESData_IGESEntity>(m,"IGESAppli_FiniteElement",R"#(defines FiniteElement, Type <136> Form <0> in package IGESAppli Used to define a finite element with the help of an element topology.defines FiniteElement, Type <136> Form <0> in package IGESAppli Used to define a finite element with the help of an element topology.defines FiniteElement, Type <136> Form <0> in package IGESAppli Used to define a finite element with the help of an element topology.)#");
    py::class_<IGESAppli_Flow ,opencascade::handle<IGESAppli_Flow> , IGESData_IGESEntity>(m,"IGESAppli_Flow",R"#(defines Flow, Type <402> Form <18> in package IGESAppli Represents a single signal or a single fluid flow path starting from a starting Connect Point Entity and including additional intermediate connect points.defines Flow, Type <402> Form <18> in package IGESAppli Represents a single signal or a single fluid flow path starting from a starting Connect Point Entity and including additional intermediate connect points.defines Flow, Type <402> Form <18> in package IGESAppli Represents a single signal or a single fluid flow path starting from a starting Connect Point Entity and including additional intermediate connect points.)#");
    py::class_<IGESAppli_FlowLineSpec ,opencascade::handle<IGESAppli_FlowLineSpec> , IGESData_IGESEntity>(m,"IGESAppli_FlowLineSpec",R"#(defines FlowLineSpec, Type <406> Form <14> in package IGESAppli Attaches one or more text strings to entities being used to represent a flow linedefines FlowLineSpec, Type <406> Form <14> in package IGESAppli Attaches one or more text strings to entities being used to represent a flow linedefines FlowLineSpec, Type <406> Form <14> in package IGESAppli Attaches one or more text strings to entities being used to represent a flow line)#");
    py::class_<IGESAppli_GeneralModule ,opencascade::handle<IGESAppli_GeneralModule> , IGESData_GeneralModule>(m,"IGESAppli_GeneralModule",R"#(Definition of General Services for IGESAppli (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESAppli (specific part) This Services comprise : Shared & Implied Lists, Copy, CheckDefinition of General Services for IGESAppli (specific part) This Services comprise : Shared & Implied Lists, Copy, Check)#");
    py::class_<IGESAppli_HArray1OfFiniteElement ,opencascade::handle<IGESAppli_HArray1OfFiniteElement> , IGESAppli_Array1OfFiniteElement, Standard_Transient>(m,"IGESAppli_HArray1OfFiniteElement",R"#()#");
    py::class_<IGESAppli_HArray1OfFlow ,opencascade::handle<IGESAppli_HArray1OfFlow> , IGESAppli_Array1OfFlow, Standard_Transient>(m,"IGESAppli_HArray1OfFlow",R"#()#");
    py::class_<IGESAppli_HArray1OfNode ,opencascade::handle<IGESAppli_HArray1OfNode> , IGESAppli_Array1OfNode, Standard_Transient>(m,"IGESAppli_HArray1OfNode",R"#()#");
    py::class_<IGESAppli_LevelFunction ,opencascade::handle<IGESAppli_LevelFunction> , IGESData_IGESEntity>(m,"IGESAppli_LevelFunction",R"#(defines LevelFunction, Type <406> Form <3> in package IGESAppli Used to transfer the meaning or intended use of a level in the sending systemdefines LevelFunction, Type <406> Form <3> in package IGESAppli Used to transfer the meaning or intended use of a level in the sending systemdefines LevelFunction, Type <406> Form <3> in package IGESAppli Used to transfer the meaning or intended use of a level in the sending system)#");
    py::class_<IGESAppli_LevelToPWBLayerMap ,opencascade::handle<IGESAppli_LevelToPWBLayerMap> , IGESData_IGESEntity>(m,"IGESAppli_LevelToPWBLayerMap",R"#(defines LevelToPWBLayerMap, Type <406> Form <24> in package IGESAppli Used to correlate an exchange file level number with its corresponding native level identifier, physical PWB layer number and predefined functional level identificationdefines LevelToPWBLayerMap, Type <406> Form <24> in package IGESAppli Used to correlate an exchange file level number with its corresponding native level identifier, physical PWB layer number and predefined functional level identificationdefines LevelToPWBLayerMap, Type <406> Form <24> in package IGESAppli Used to correlate an exchange file level number with its corresponding native level identifier, physical PWB layer number and predefined functional level identification)#");
    py::class_<IGESAppli_LineWidening ,opencascade::handle<IGESAppli_LineWidening> , IGESData_IGESEntity>(m,"IGESAppli_LineWidening",R"#(defines LineWidening, Type <406> Form <5> in package IGESAppli Defines the characteristics of entities when they are used to define locations of items.defines LineWidening, Type <406> Form <5> in package IGESAppli Defines the characteristics of entities when they are used to define locations of items.defines LineWidening, Type <406> Form <5> in package IGESAppli Defines the characteristics of entities when they are used to define locations of items.)#");
    py::class_<IGESAppli_NodalConstraint ,opencascade::handle<IGESAppli_NodalConstraint> , IGESData_IGESEntity>(m,"IGESAppli_NodalConstraint",R"#(defines NodalConstraint, Type <418> Form <0> in package IGESAppli Relates loads and/or constraints to specific nodes in the Finite Element Model by creating a relation between Node entities and Tabular Data Property that contains the load or constraint datadefines NodalConstraint, Type <418> Form <0> in package IGESAppli Relates loads and/or constraints to specific nodes in the Finite Element Model by creating a relation between Node entities and Tabular Data Property that contains the load or constraint datadefines NodalConstraint, Type <418> Form <0> in package IGESAppli Relates loads and/or constraints to specific nodes in the Finite Element Model by creating a relation between Node entities and Tabular Data Property that contains the load or constraint data)#");
    py::class_<IGESAppli_NodalDisplAndRot ,opencascade::handle<IGESAppli_NodalDisplAndRot> , IGESData_IGESEntity>(m,"IGESAppli_NodalDisplAndRot",R"#(defines NodalDisplAndRot, Type <138> Form <0> in package IGESAppli Used to communicate finite element post processing data.defines NodalDisplAndRot, Type <138> Form <0> in package IGESAppli Used to communicate finite element post processing data.defines NodalDisplAndRot, Type <138> Form <0> in package IGESAppli Used to communicate finite element post processing data.)#");
    py::class_<IGESAppli_NodalResults ,opencascade::handle<IGESAppli_NodalResults> , IGESData_IGESEntity>(m,"IGESAppli_NodalResults",R"#(defines NodalResults, Type <146> in package IGESAppli Used to store the Analysis Data results per FEM Nodedefines NodalResults, Type <146> in package IGESAppli Used to store the Analysis Data results per FEM Nodedefines NodalResults, Type <146> in package IGESAppli Used to store the Analysis Data results per FEM Node)#");
    py::class_<IGESAppli_Node ,opencascade::handle<IGESAppli_Node> , IGESData_IGESEntity>(m,"IGESAppli_Node",R"#(defines Node, Type <134> Form <0> in package IGESAppli Geometric point used in the definition of a finite element.defines Node, Type <134> Form <0> in package IGESAppli Geometric point used in the definition of a finite element.defines Node, Type <134> Form <0> in package IGESAppli Geometric point used in the definition of a finite element.)#");
    py::class_<IGESAppli_PWBArtworkStackup ,opencascade::handle<IGESAppli_PWBArtworkStackup> , IGESData_IGESEntity>(m,"IGESAppli_PWBArtworkStackup",R"#(defines PWBArtworkStackup, Type <406> Form <25> in package IGESAppli Used to communicate which exchange file levels are to be combined in order to create the artwork for a printed wire board (PWB). This property should be attached to the entity defining the printed wire assembly (PWA) or if no such entity exists, then the property should stand alone in the file.defines PWBArtworkStackup, Type <406> Form <25> in package IGESAppli Used to communicate which exchange file levels are to be combined in order to create the artwork for a printed wire board (PWB). This property should be attached to the entity defining the printed wire assembly (PWA) or if no such entity exists, then the property should stand alone in the file.defines PWBArtworkStackup, Type <406> Form <25> in package IGESAppli Used to communicate which exchange file levels are to be combined in order to create the artwork for a printed wire board (PWB). This property should be attached to the entity defining the printed wire assembly (PWA) or if no such entity exists, then the property should stand alone in the file.)#");
    py::class_<IGESAppli_PWBDrilledHole ,opencascade::handle<IGESAppli_PWBDrilledHole> , IGESData_IGESEntity>(m,"IGESAppli_PWBDrilledHole",R"#(defines PWBDrilledHole, Type <406> Form <26> in package IGESAppli Used to identify an entity that locates a drilled hole and to specify the characteristics of the drilled holedefines PWBDrilledHole, Type <406> Form <26> in package IGESAppli Used to identify an entity that locates a drilled hole and to specify the characteristics of the drilled holedefines PWBDrilledHole, Type <406> Form <26> in package IGESAppli Used to identify an entity that locates a drilled hole and to specify the characteristics of the drilled hole)#");
    py::class_<IGESAppli_PartNumber ,opencascade::handle<IGESAppli_PartNumber> , IGESData_IGESEntity>(m,"IGESAppli_PartNumber",R"#(defines PartNumber, Type <406> Form <9> in package IGESAppli Attaches a set of text strings that define the common part numbers to an entity being used to represent a physical componentdefines PartNumber, Type <406> Form <9> in package IGESAppli Attaches a set of text strings that define the common part numbers to an entity being used to represent a physical componentdefines PartNumber, Type <406> Form <9> in package IGESAppli Attaches a set of text strings that define the common part numbers to an entity being used to represent a physical component)#");
    py::class_<IGESAppli_PinNumber ,opencascade::handle<IGESAppli_PinNumber> , IGESData_IGESEntity>(m,"IGESAppli_PinNumber",R"#(defines PinNumber, Type <406> Form <8> in package IGESAppli Used to attach a text string representing a component pin number to an entity being used to represent an electrical component's pindefines PinNumber, Type <406> Form <8> in package IGESAppli Used to attach a text string representing a component pin number to an entity being used to represent an electrical component's pindefines PinNumber, Type <406> Form <8> in package IGESAppli Used to attach a text string representing a component pin number to an entity being used to represent an electrical component's pin)#");
    py::class_<IGESAppli_PipingFlow ,opencascade::handle<IGESAppli_PipingFlow> , IGESData_IGESEntity>(m,"IGESAppli_PipingFlow",R"#(defines PipingFlow, Type <402> Form <20> in package IGESAppli Represents a single fluid flow pathdefines PipingFlow, Type <402> Form <20> in package IGESAppli Represents a single fluid flow pathdefines PipingFlow, Type <402> Form <20> in package IGESAppli Represents a single fluid flow path)#");
    py::class_<IGESAppli_Protocol ,opencascade::handle<IGESAppli_Protocol> , IGESData_Protocol>(m,"IGESAppli_Protocol",R"#(Description of Protocol for IGESAppliDescription of Protocol for IGESAppliDescription of Protocol for IGESAppli)#");
    py::class_<IGESAppli_ReadWriteModule ,opencascade::handle<IGESAppli_ReadWriteModule> , IGESData_ReadWriteModule>(m,"IGESAppli_ReadWriteModule",R"#(Defines basic File Access Module for IGESAppli (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines basic File Access Module for IGESAppli (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.Defines basic File Access Module for IGESAppli (specific parts) Specific actions concern : Read and Write Own Parameters of an IGESEntity.)#");
    py::class_<IGESAppli_ReferenceDesignator ,opencascade::handle<IGESAppli_ReferenceDesignator> , IGESData_IGESEntity>(m,"IGESAppli_ReferenceDesignator",R"#(defines ReferenceDesignator, Type <406> Form <7> in package IGESAppli Used to attach a text string containing the value of a component reference designator to an entity being used to represent a component.defines ReferenceDesignator, Type <406> Form <7> in package IGESAppli Used to attach a text string containing the value of a component reference designator to an entity being used to represent a component.defines ReferenceDesignator, Type <406> Form <7> in package IGESAppli Used to attach a text string containing the value of a component reference designator to an entity being used to represent a component.)#");
    py::class_<IGESAppli_RegionRestriction ,opencascade::handle<IGESAppli_RegionRestriction> , IGESData_IGESEntity>(m,"IGESAppli_RegionRestriction",R"#(defines RegionRestriction, Type <406> Form <2> in package IGESAppli Defines regions to set an application's restriction over a region.defines RegionRestriction, Type <406> Form <2> in package IGESAppli Defines regions to set an application's restriction over a region.defines RegionRestriction, Type <406> Form <2> in package IGESAppli Defines regions to set an application's restriction over a region.)#");
    py::class_<IGESAppli_SpecificModule ,opencascade::handle<IGESAppli_SpecificModule> , IGESData_SpecificModule>(m,"IGESAppli_SpecificModule",R"#(Defines Services attached to IGES Entities : Dump & OwnCorrect, for IGESAppliDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESAppliDefines Services attached to IGES Entities : Dump & OwnCorrect, for IGESAppli)#");
    py::class_<IGESAppli_ToolDrilledHole , shared_ptr<IGESAppli_ToolDrilledHole> >(m,"IGESAppli_ToolDrilledHole",R"#(Tool to work on a DrilledHole. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolElementResults , shared_ptr<IGESAppli_ToolElementResults> >(m,"IGESAppli_ToolElementResults",R"#(Tool to work on a ElementResults. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolFiniteElement , shared_ptr<IGESAppli_ToolFiniteElement> >(m,"IGESAppli_ToolFiniteElement",R"#(Tool to work on a FiniteElement. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolFlow , shared_ptr<IGESAppli_ToolFlow> >(m,"IGESAppli_ToolFlow",R"#(Tool to work on a Flow. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolFlowLineSpec , shared_ptr<IGESAppli_ToolFlowLineSpec> >(m,"IGESAppli_ToolFlowLineSpec",R"#(Tool to work on a FlowLineSpec. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolLevelFunction , shared_ptr<IGESAppli_ToolLevelFunction> >(m,"IGESAppli_ToolLevelFunction",R"#(Tool to work on a LevelFunction. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolLevelToPWBLayerMap , shared_ptr<IGESAppli_ToolLevelToPWBLayerMap> >(m,"IGESAppli_ToolLevelToPWBLayerMap",R"#(Tool to work on a LevelToPWBLayerMap. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolLineWidening , shared_ptr<IGESAppli_ToolLineWidening> >(m,"IGESAppli_ToolLineWidening",R"#(Tool to work on a LineWidening. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolNodalConstraint , shared_ptr<IGESAppli_ToolNodalConstraint> >(m,"IGESAppli_ToolNodalConstraint",R"#(Tool to work on a NodalConstraint. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolNodalDisplAndRot , shared_ptr<IGESAppli_ToolNodalDisplAndRot> >(m,"IGESAppli_ToolNodalDisplAndRot",R"#(Tool to work on a NodalDisplAndRot. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolNodalResults , shared_ptr<IGESAppli_ToolNodalResults> >(m,"IGESAppli_ToolNodalResults",R"#(Tool to work on a NodalResults. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolNode , shared_ptr<IGESAppli_ToolNode> >(m,"IGESAppli_ToolNode",R"#(Tool to work on a Node. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolPWBArtworkStackup , shared_ptr<IGESAppli_ToolPWBArtworkStackup> >(m,"IGESAppli_ToolPWBArtworkStackup",R"#(Tool to work on a PWBArtworkStackup. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolPWBDrilledHole , shared_ptr<IGESAppli_ToolPWBDrilledHole> >(m,"IGESAppli_ToolPWBDrilledHole",R"#(Tool to work on a PWBDrilledHole. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolPartNumber , shared_ptr<IGESAppli_ToolPartNumber> >(m,"IGESAppli_ToolPartNumber",R"#(Tool to work on a PartNumber. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolPinNumber , shared_ptr<IGESAppli_ToolPinNumber> >(m,"IGESAppli_ToolPinNumber",R"#(Tool to work on a PinNumber. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolPipingFlow , shared_ptr<IGESAppli_ToolPipingFlow> >(m,"IGESAppli_ToolPipingFlow",R"#(Tool to work on a PipingFlow. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolReferenceDesignator , shared_ptr<IGESAppli_ToolReferenceDesignator> >(m,"IGESAppli_ToolReferenceDesignator",R"#(Tool to work on a ReferenceDesignator. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");
    py::class_<IGESAppli_ToolRegionRestriction , shared_ptr<IGESAppli_ToolRegionRestriction> >(m,"IGESAppli_ToolRegionRestriction",R"#(Tool to work on a RegionRestriction. Called by various Modules (ReadWriteModule, GeneralModule, SpecificModule))#");

};

// user-defined post-inclusion per module

// user-defined post
