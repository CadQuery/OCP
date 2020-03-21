
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_CopyControl.hxx>
#include <IFSelect_Modifier.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ShareOut.hxx>
#include <Interface_CheckIterator.hxx>
#include <IFSelect_ShareOutResult.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_TypedValue.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_WorkSession.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_TypedValue.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_ListEditor.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ShareOut.hxx>
#include <IFSelect_Dispatch.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_PacketList.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_CopyControl.hxx>
#include <IFSelect_Transformer.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <IFSelect_Signature.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_Dispatch.hxx>
#include <IFSelect_SelectPointed.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_Messenger.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_IntParam.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_CopyTool.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_Selection.hxx>
#include <IFSelect_Dispatch.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_Signature.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <Interface_TypedValue.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_Editor.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ListEditor.hxx>
#include <Message_Messenger.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_SelectDeduct.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ShareOut.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_HGraph.hxx>
#include <Interface_GTool.hxx>
#include <IFSelect_ModelCopier.hxx>
#include <IFSelect_Signature.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <IFSelect_SignCounter.hxx>
#include <IFSelect_Dispatch.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <IFSelect_Modifier.hxx>
#include <IFSelect_Transformer.hxx>
#include <IFSelect_PacketList.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_SignatureList.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_AppliedModifiers.hxx>
#include <Interface_HGraph.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_Modifier.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SignMultiple.hxx>
#include <IFSelect_SignType.hxx>
#include <IFSelect_SignCategory.hxx>
#include <IFSelect_SignValidity.hxx>
#include <IFSelect_SignAncestor.hxx>
#include <IFSelect_ShareOut.hxx>
#include <IFSelect_AppliedModifiers.hxx>
#include <IFSelect_ShareOutResult.hxx>
#include <IFSelect_PacketList.hxx>
#include <IFSelect_Dispatch.hxx>
#include <IFSelect_DispGlobal.hxx>
#include <IFSelect_DispPerOne.hxx>
#include <IFSelect_DispPerCount.hxx>
#include <IFSelect_DispPerSignature.hxx>
#include <IFSelect_DispPerFiles.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <IFSelect_Selection.hxx>
#include <IFSelect_SelectBase.hxx>
#include <IFSelect_SelectModelRoots.hxx>
#include <IFSelect_SelectModelEntities.hxx>
#include <IFSelect_SelectEntityNumber.hxx>
#include <IFSelect_SelectPointed.hxx>
#include <IFSelect_SelectCombine.hxx>
#include <IFSelect_SelectUnion.hxx>
#include <IFSelect_SelectIntersection.hxx>
#include <IFSelect_SelectControl.hxx>
#include <IFSelect_SelectDiff.hxx>
#include <IFSelect_SelectDeduct.hxx>
#include <IFSelect_SelectShared.hxx>
#include <IFSelect_SelectSharing.hxx>
#include <IFSelect_SelectAnyList.hxx>
#include <IFSelect_SelectInList.hxx>
#include <IFSelect_SelectSuite.hxx>
#include <IFSelect_SelectExtract.hxx>
#include <IFSelect_SelectUnknownEntities.hxx>
#include <IFSelect_SelectErrorEntities.hxx>
#include <IFSelect_SelectIncorrectEntities.hxx>
#include <IFSelect_SelectRoots.hxx>
#include <IFSelect_SelectRootComps.hxx>
#include <IFSelect_SelectRange.hxx>
#include <IFSelect_SelectAnyType.hxx>
#include <IFSelect_SelectType.hxx>
#include <IFSelect_SelectSignature.hxx>
#include <IFSelect_SelectFlag.hxx>
#include <IFSelect_SelectSent.hxx>
#include <IFSelect_SelectExplore.hxx>
#include <IFSelect_SelectSignedShared.hxx>
#include <IFSelect_SelectSignedSharing.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_SignatureList.hxx>
#include <IFSelect_CheckCounter.hxx>
#include <IFSelect_SignCounter.hxx>
#include <IFSelect_GraphCounter.hxx>
#include <IFSelect_Editor.hxx>
#include <IFSelect_ParamEditor.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_ListEditor.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IFSelect_Transformer.hxx>
#include <IFSelect_TransformStandard.hxx>
#include <IFSelect_ModelCopier.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <IFSelect_Modifier.hxx>
#include <IFSelect_ModifReorder.hxx>
#include <IFSelect_ModifEditForm.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <IFSelect_SessionFile.hxx>
#include <IFSelect_SessionDumper.hxx>
#include <IFSelect_BasicDumper.hxx>
#include <IFSelect_Activator.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <IFSelect_Act.hxx>
#include <IFSelect_Functions.hxx>

// module includes
#include <IFSelect.hxx>
#include <IFSelect_Act.hxx>
#include <IFSelect_ActFunc.hxx>
#include <IFSelect_Activator.hxx>
#include <IFSelect_AppliedModifiers.hxx>
#include <IFSelect_BasicDumper.hxx>
#include <IFSelect_CheckCounter.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IFSelect_Dispatch.hxx>
#include <IFSelect_DispGlobal.hxx>
#include <IFSelect_DispPerCount.hxx>
#include <IFSelect_DispPerFiles.hxx>
#include <IFSelect_DispPerOne.hxx>
#include <IFSelect_DispPerSignature.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_Editor.hxx>
#include <IFSelect_EditValue.hxx>
#include <IFSelect_Functions.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <IFSelect_GraphCounter.hxx>
#include <IFSelect_HSeqOfSelection.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ListEditor.hxx>
#include <IFSelect_ModelCopier.hxx>
#include <IFSelect_ModifEditForm.hxx>
#include <IFSelect_Modifier.hxx>
#include <IFSelect_ModifReorder.hxx>
#include <IFSelect_PacketList.hxx>
#include <IFSelect_ParamEditor.hxx>
#include <IFSelect_PrintCount.hxx>
#include <IFSelect_PrintFail.hxx>
#include <IFSelect_RemainMode.hxx>
#include <IFSelect_ReturnStatus.hxx>
#include <IFSelect_SelectAnyList.hxx>
#include <IFSelect_SelectAnyType.hxx>
#include <IFSelect_SelectBase.hxx>
#include <IFSelect_SelectCombine.hxx>
#include <IFSelect_SelectControl.hxx>
#include <IFSelect_SelectDeduct.hxx>
#include <IFSelect_SelectDiff.hxx>
#include <IFSelect_SelectEntityNumber.hxx>
#include <IFSelect_SelectErrorEntities.hxx>
#include <IFSelect_SelectExplore.hxx>
#include <IFSelect_SelectExtract.hxx>
#include <IFSelect_SelectFlag.hxx>
#include <IFSelect_SelectIncorrectEntities.hxx>
#include <IFSelect_SelectInList.hxx>
#include <IFSelect_SelectIntersection.hxx>
#include <IFSelect_Selection.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <IFSelect_SelectModelEntities.hxx>
#include <IFSelect_SelectModelRoots.hxx>
#include <IFSelect_SelectPointed.hxx>
#include <IFSelect_SelectRange.hxx>
#include <IFSelect_SelectRootComps.hxx>
#include <IFSelect_SelectRoots.hxx>
#include <IFSelect_SelectSent.hxx>
#include <IFSelect_SelectShared.hxx>
#include <IFSelect_SelectSharing.hxx>
#include <IFSelect_SelectSignature.hxx>
#include <IFSelect_SelectSignedShared.hxx>
#include <IFSelect_SelectSignedSharing.hxx>
#include <IFSelect_SelectSuite.hxx>
#include <IFSelect_SelectType.hxx>
#include <IFSelect_SelectUnion.hxx>
#include <IFSelect_SelectUnknownEntities.hxx>
#include <IFSelect_SequenceOfAppliedModifiers.hxx>
#include <IFSelect_SequenceOfGeneralModifier.hxx>
#include <IFSelect_SequenceOfInterfaceModel.hxx>
#include <IFSelect_SessionDumper.hxx>
#include <IFSelect_SessionFile.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <IFSelect_ShareOut.hxx>
#include <IFSelect_ShareOutResult.hxx>
#include <IFSelect_SignAncestor.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SignatureList.hxx>
#include <IFSelect_SignCategory.hxx>
#include <IFSelect_SignCounter.hxx>
#include <IFSelect_SignMultiple.hxx>
#include <IFSelect_SignType.hxx>
#include <IFSelect_SignValidity.hxx>
#include <IFSelect_Transformer.hxx>
#include <IFSelect_TransformStandard.hxx>
#include <IFSelect_TSeqOfDispatch.hxx>
#include <IFSelect_TSeqOfSelection.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <IFSelect_WorkSession.hxx>

// template related includes
// ./opencascade/IFSelect_TSeqOfDispatch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_SequenceOfAppliedModifiers.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_SequenceOfGeneralModifier.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_TSeqOfSelection.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_SequenceOfInterfaceModel.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IFSelect_enums(py::module &main_module) {


py::module m = main_module.def_submodule("IFSelect", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<IFSelect_PrintCount>(m, "IFSelect_PrintCount",R"#(Lets you choose the manner in which you want to analyze an IGES or STEP file. Your analysis can be either message-oriented or entity-oriented. The specific values are as follows: - ItemsByEntity is a sequential list of all messages per entity of the defined type - CountByItem is the number of entities of the defined type, with their rank number per message - ShortByItem is the number of entities of the defined type, with their types per message; displays the rank numbers of the first five entities of the defined type per message - ListByItem is the number of entities of the defined type per message and the numbers of the entities - EntitiesByItem is the number of entities of the defined type, with their types, rank numbers and Directory Entry numbers per message - GeneralInfo is general information on transfer such as: - number of entities - number of roots - number of resulting Open CASCADE shapes - number of warnings and failures - CountSummary summary statistics for counters and signatures - ResultCount information that contains the number of roots in the IGES file and the number of resulting Open CASCADE shapes. - Mapping of the IGES root entities to the resulting Open CASCADE shape (including type and form of the IGES entity and type of the resulting shape).)#")
        .value("IFSelect_ItemsByEntity",IFSelect_PrintCount::IFSelect_ItemsByEntity)
        .value("IFSelect_CountByItem",IFSelect_PrintCount::IFSelect_CountByItem)
        .value("IFSelect_ShortByItem",IFSelect_PrintCount::IFSelect_ShortByItem)
        .value("IFSelect_ListByItem",IFSelect_PrintCount::IFSelect_ListByItem)
        .value("IFSelect_EntitiesByItem",IFSelect_PrintCount::IFSelect_EntitiesByItem)
        .value("IFSelect_CountSummary",IFSelect_PrintCount::IFSelect_CountSummary)
        .value("IFSelect_GeneralInfo",IFSelect_PrintCount::IFSelect_GeneralInfo)
        .value("IFSelect_Mapping",IFSelect_PrintCount::IFSelect_Mapping)
        .value("IFSelect_ResultCount",IFSelect_PrintCount::IFSelect_ResultCount).export_values();
    py::enum_<IFSelect_ReturnStatus>(m, "IFSelect_ReturnStatus",R"#(Qualifies an execution status : RetVoid : normal execution which created nothing, or no data to process RetDone : normal execution with a result RetError : error in command or input data, no execution RetFail : execution was run and has failed RetStop : indicates end or stop (such as Raise))#")
        .value("IFSelect_RetVoid",IFSelect_ReturnStatus::IFSelect_RetVoid)
        .value("IFSelect_RetDone",IFSelect_ReturnStatus::IFSelect_RetDone)
        .value("IFSelect_RetError",IFSelect_ReturnStatus::IFSelect_RetError)
        .value("IFSelect_RetFail",IFSelect_ReturnStatus::IFSelect_RetFail)
        .value("IFSelect_RetStop",IFSelect_ReturnStatus::IFSelect_RetStop).export_values();
    py::enum_<IFSelect_RemainMode>(m, "IFSelect_RemainMode",R"#(None)#")
        .value("IFSelect_RemainForget",IFSelect_RemainMode::IFSelect_RemainForget)
        .value("IFSelect_RemainCompute",IFSelect_RemainMode::IFSelect_RemainCompute)
        .value("IFSelect_RemainDisplay",IFSelect_RemainMode::IFSelect_RemainDisplay)
        .value("IFSelect_RemainUndo",IFSelect_RemainMode::IFSelect_RemainUndo).export_values();
    py::enum_<IFSelect_EditValue>(m, "IFSelect_EditValue",R"#(Controls access on Values by an Editor EditOptional : normal access, in addition may be removed Editable : normal access, must be present EditProtected : access must be validated EditComputed : why write it ? it will be recomputed EditRead : no way to write it, only for read EditDynamic : not a field, only to be displayed)#")
        .value("IFSelect_Optional",IFSelect_EditValue::IFSelect_Optional)
        .value("IFSelect_Editable",IFSelect_EditValue::IFSelect_Editable)
        .value("IFSelect_EditProtected",IFSelect_EditValue::IFSelect_EditProtected)
        .value("IFSelect_EditComputed",IFSelect_EditValue::IFSelect_EditComputed)
        .value("IFSelect_EditRead",IFSelect_EditValue::IFSelect_EditRead)
        .value("IFSelect_EditDynamic",IFSelect_EditValue::IFSelect_EditDynamic).export_values();
    py::enum_<IFSelect_PrintFail>(m, "IFSelect_PrintFail",R"#(Indicates whether there will be information on warnings as well as on failures. The terms of this enumeration have the following semantics: - IFSelect_FailOnly gives information on failures only - IFSelect_FailAndWarn gives information on both failures and warnings. used to pilot PrintCheckList)#")
        .value("IFSelect_FailOnly",IFSelect_PrintFail::IFSelect_FailOnly)
        .value("IFSelect_FailAndWarn",IFSelect_PrintFail::IFSelect_FailAndWarn).export_values();

//Python trampoline classes
    class Py_IFSelect_Activator : public IFSelect_Activator{
    public:
        using IFSelect_Activator::IFSelect_Activator;


        // public pure virtual
        IFSelect_ReturnStatus Do(const Standard_Integer number,const opencascade::handle<IFSelect_SessionPilot> & pilot) override { PYBIND11_OVERLOAD_PURE(IFSelect_ReturnStatus,IFSelect_Activator,Do,number,pilot) };
        Standard_CString Help(const Standard_Integer number) const  override { PYBIND11_OVERLOAD_PURE(Standard_CString,IFSelect_Activator,Help,number) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_Dispatch : public IFSelect_Dispatch{
    public:
        using IFSelect_Dispatch::IFSelect_Dispatch;


        // public pure virtual
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Dispatch,Label,) };
        void Packets(const Interface_Graph & G,IFGraph_SubPartsIterator & packs) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Dispatch,Packets,G,packs) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_Editor : public IFSelect_Editor{
    public:
        using IFSelect_Editor::IFSelect_Editor;


        // public pure virtual
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Editor,Label,) };
        Standard_Boolean Recognize(const opencascade::handle<IFSelect_EditForm> & form) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_Editor,Recognize,form) };
        opencascade::handle<TCollection_HAsciiString> StringValue(const opencascade::handle<IFSelect_EditForm> & form,const Standard_Integer num) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<TCollection_HAsciiString>,IFSelect_Editor,StringValue,form,num) };
        Standard_Boolean Load(const opencascade::handle<IFSelect_EditForm> & form,const opencascade::handle<Standard_Transient> & ent,const opencascade::handle<Interface_InterfaceModel> & model) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_Editor,Load,form,ent,model) };
        Standard_Boolean Apply(const opencascade::handle<IFSelect_EditForm> & form,const opencascade::handle<Standard_Transient> & ent,const opencascade::handle<Interface_InterfaceModel> & model) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_Editor,Apply,form,ent,model) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_GeneralModifier : public IFSelect_GeneralModifier{
    public:
        using IFSelect_GeneralModifier::IFSelect_GeneralModifier;


        // public pure virtual
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_GeneralModifier,Label,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_Selection : public IFSelect_Selection{
    public:
        using IFSelect_Selection::IFSelect_Selection;


        // public pure virtual
        Interface_EntityIterator RootResult(const Interface_Graph & G) const  override { PYBIND11_OVERLOAD_PURE(Interface_EntityIterator,IFSelect_Selection,RootResult,G) };
        void FillIterator(IFSelect_SelectionIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Selection,FillIterator,iter) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Selection,Label,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SessionDumper : public IFSelect_SessionDumper{
    public:
        using IFSelect_SessionDumper::IFSelect_SessionDumper;


        // public pure virtual
        Standard_Boolean WriteOwn(IFSelect_SessionFile & file,const opencascade::handle<Standard_Transient> & item) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_SessionDumper,WriteOwn,file,item) };
        Standard_Boolean ReadOwn(IFSelect_SessionFile & file,const TCollection_AsciiString & type,opencascade::handle<Standard_Transient> & item) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_SessionDumper,ReadOwn,file,type,item) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_Signature : public IFSelect_Signature{
    public:
        using IFSelect_Signature::IFSelect_Signature;


        // public pure virtual

        Standard_CString Value(const opencascade::handle<Standard_Transient> & ent,const opencascade::handle<Interface_InterfaceModel> & model) const  override { PYBIND11_OVERLOAD_PURE(Standard_CString,Interface_SignType,Value,ent,model) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_Transformer : public IFSelect_Transformer{
    public:
        using IFSelect_Transformer::IFSelect_Transformer;


        // public pure virtual
        Standard_Boolean Perform(const Interface_Graph & G,const opencascade::handle<Interface_Protocol> & protocol,Interface_CheckIterator & checks,opencascade::handle<Interface_InterfaceModel> & newmod) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_Transformer,Perform,G,protocol,checks,newmod) };
        Standard_Boolean Updated(const opencascade::handle<Standard_Transient> & entfrom,opencascade::handle<Standard_Transient> & entto) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_Transformer,Updated,entfrom,entto) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Transformer,Label,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_WorkLibrary : public IFSelect_WorkLibrary{
    public:
        using IFSelect_WorkLibrary::IFSelect_WorkLibrary;


        // public pure virtual
        Standard_Integer ReadFile(const Standard_CString name,opencascade::handle<Interface_InterfaceModel> & model,const opencascade::handle<Interface_Protocol> & protocol) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IFSelect_WorkLibrary,ReadFile,name,model,protocol) };
        Standard_Boolean WriteFile(IFSelect_ContextWrite & ctx) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_WorkLibrary,WriteFile,ctx) };
        void DumpEntity(const opencascade::handle<Interface_InterfaceModel> & model,const opencascade::handle<Interface_Protocol> & protocol,const opencascade::handle<Standard_Transient> & entity,const opencascade::handle<Message_Messenger> & S,const Standard_Integer level) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_WorkLibrary,DumpEntity,model,protocol,entity,S,level) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_Modifier : public IFSelect_Modifier{
    public:
        using IFSelect_Modifier::IFSelect_Modifier;


        // public pure virtual
        void Perform(IFSelect_ContextModif & ctx,const opencascade::handle<Interface_InterfaceModel> & target,const opencascade::handle<Interface_Protocol> & protocol,Interface_CopyTool & TC) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Modifier,Perform,ctx,target,protocol,TC) };

        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_GeneralModifier,Label,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectBase : public IFSelect_SelectBase{
    public:
        using IFSelect_SelectBase::IFSelect_SelectBase;


        // public pure virtual

        Interface_EntityIterator RootResult(const Interface_Graph & G) const  override { PYBIND11_OVERLOAD_PURE(Interface_EntityIterator,IFSelect_Selection,RootResult,G) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Selection,Label,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectCombine : public IFSelect_SelectCombine{
    public:
        using IFSelect_SelectCombine::IFSelect_SelectCombine;


        // public pure virtual

        Interface_EntityIterator RootResult(const Interface_Graph & G) const  override { PYBIND11_OVERLOAD_PURE(Interface_EntityIterator,IFSelect_Selection,RootResult,G) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Selection,Label,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectControl : public IFSelect_SelectControl{
    public:
        using IFSelect_SelectControl::IFSelect_SelectControl;


        // public pure virtual

        Interface_EntityIterator RootResult(const Interface_Graph & G) const  override { PYBIND11_OVERLOAD_PURE(Interface_EntityIterator,IFSelect_Selection,RootResult,G) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Selection,Label,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectDeduct : public IFSelect_SelectDeduct{
    public:
        using IFSelect_SelectDeduct::IFSelect_SelectDeduct;


        // public pure virtual

        Interface_EntityIterator RootResult(const Interface_Graph & G) const  override { PYBIND11_OVERLOAD_PURE(Interface_EntityIterator,IFSelect_Selection,RootResult,G) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Selection,Label,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectAnyList : public IFSelect_SelectAnyList{
    public:
        using IFSelect_SelectAnyList::IFSelect_SelectAnyList;


        // public pure virtual
        void KeepInputEntity(Interface_EntityIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_SelectAnyList,KeepInputEntity,iter) };
        Standard_Integer NbItems(const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IFSelect_SelectAnyList,NbItems,ent) };
        void FillResult(const Standard_Integer n1,const Standard_Integer n2,const opencascade::handle<Standard_Transient> & ent,Interface_EntityIterator & res) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_SelectAnyList,FillResult,n1,n2,ent,res) };
        TCollection_AsciiString ListLabel() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_SelectAnyList,ListLabel,) };

        void FillIterator(IFSelect_SelectionIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Selection,FillIterator,iter) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectExplore : public IFSelect_SelectExplore{
    public:
        using IFSelect_SelectExplore::IFSelect_SelectExplore;


        // public pure virtual
        Standard_Boolean Explore(const Standard_Integer level,const opencascade::handle<Standard_Transient> & ent,const Interface_Graph & G,Interface_EntityIterator & explored) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_SelectExplore,Explore,level,ent,G,explored) };
        TCollection_AsciiString ExploreLabel() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_SelectExplore,ExploreLabel,) };

        void FillIterator(IFSelect_SelectionIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Selection,FillIterator,iter) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectExtract : public IFSelect_SelectExtract{
    public:
        using IFSelect_SelectExtract::IFSelect_SelectExtract;


        // public pure virtual
        Standard_Boolean Sort(const Standard_Integer rank,const opencascade::handle<Standard_Transient> & ent,const opencascade::handle<Interface_InterfaceModel> & model) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,IFSelect_SelectExtract,Sort,rank,ent,model) };
        TCollection_AsciiString ExtractLabel() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_SelectExtract,ExtractLabel,) };

        void FillIterator(IFSelect_SelectionIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Selection,FillIterator,iter) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectAnyType : public IFSelect_SelectAnyType{
    public:
        using IFSelect_SelectAnyType::IFSelect_SelectAnyType;


        // public pure virtual
        opencascade::handle<Standard_Type> TypeForMatch() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Type>,IFSelect_SelectAnyType,TypeForMatch,) };

        TCollection_AsciiString ExtractLabel() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_SelectExtract,ExtractLabel,) };
        Interface_EntityIterator RootResult(const Interface_Graph & G) const  override { PYBIND11_OVERLOAD_PURE(Interface_EntityIterator,IFSelect_Selection,RootResult,G) };
        void FillIterator(IFSelect_SelectionIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Selection,FillIterator,iter) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Selection,Label,) };

        // protected pure virtual


        // private pure virtual

    };
    class Py_IFSelect_SelectInList : public IFSelect_SelectInList{
    public:
        using IFSelect_SelectInList::IFSelect_SelectInList;


        // public pure virtual
        opencascade::handle<Standard_Transient> ListedEntity(const Standard_Integer num,const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Transient>,IFSelect_SelectInList,ListedEntity,num,ent) };

        void KeepInputEntity(Interface_EntityIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_SelectAnyList,KeepInputEntity,iter) };
        Standard_Integer NbItems(const opencascade::handle<Standard_Transient> & ent) const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,IFSelect_SelectAnyList,NbItems,ent) };
        TCollection_AsciiString ListLabel() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_SelectAnyList,ListLabel,) };
        Interface_EntityIterator RootResult(const Interface_Graph & G) const  override { PYBIND11_OVERLOAD_PURE(Interface_EntityIterator,IFSelect_Selection,RootResult,G) };
        void FillIterator(IFSelect_SelectionIterator & iter) const  override { PYBIND11_OVERLOAD_PURE(void,IFSelect_Selection,FillIterator,iter) };
        TCollection_AsciiString Label() const  override { PYBIND11_OVERLOAD_PURE(TCollection_AsciiString,IFSelect_Selection,Label,) };

        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<IFSelect_Dispatch> >(m,"IFSelect_TSeqOfDispatch");
    preregister_template_NCollection_Sequence<opencascade::handle<IFSelect_AppliedModifiers> >(m,"IFSelect_SequenceOfAppliedModifiers");
    preregister_template_NCollection_Sequence<opencascade::handle<IFSelect_GeneralModifier> >(m,"IFSelect_SequenceOfGeneralModifier");
    preregister_template_NCollection_Sequence<opencascade::handle<IFSelect_Selection> >(m,"IFSelect_TSeqOfSelection");
    preregister_template_NCollection_Sequence<opencascade::handle<Interface_InterfaceModel> >(m,"IFSelect_SequenceOfInterfaceModel");

// classes forward declarations only
    py::class_<IFSelect , shared_ptr<IFSelect> >(m,"IFSelect",R"#(Gives tools to manage Selecting a group of Entities processed by an Interface, for instance to divide up an original Model (from a File) to several smaller ones They use description of an Interface Model as a graph)#");
    py::class_<IFSelect_Activator ,opencascade::handle<IFSelect_Activator>,Py_IFSelect_Activator , Standard_Transient>(m,"IFSelect_Activator",R"#(Defines the general frame for working with a SessionPilot. Each Activator treats a set of Commands. Commands are given as alphanumeric strings. They can be of two main forms : - classic, to list, evaluate, enrich the session (by itself) : no specific remark, its complete execution must be described - creation of a new item : instead of creatinf it plus adding it to the session (which is a classic way), it is possible to create it and make it recorded by the SessionPilot : then, the Pilot will add it to the session; this way allows the Pilot to manage itself named itemsDefines the general frame for working with a SessionPilot. Each Activator treats a set of Commands. Commands are given as alphanumeric strings. They can be of two main forms : - classic, to list, evaluate, enrich the session (by itself) : no specific remark, its complete execution must be described - creation of a new item : instead of creatinf it plus adding it to the session (which is a classic way), it is possible to create it and make it recorded by the SessionPilot : then, the Pilot will add it to the session; this way allows the Pilot to manage itself named itemsDefines the general frame for working with a SessionPilot. Each Activator treats a set of Commands. Commands are given as alphanumeric strings. They can be of two main forms : - classic, to list, evaluate, enrich the session (by itself) : no specific remark, its complete execution must be described - creation of a new item : instead of creatinf it plus adding it to the session (which is a classic way), it is possible to create it and make it recorded by the SessionPilot : then, the Pilot will add it to the session; this way allows the Pilot to manage itself named items)#");
    py::class_<IFSelect_AppliedModifiers ,opencascade::handle<IFSelect_AppliedModifiers> , Standard_Transient>(m,"IFSelect_AppliedModifiers",R"#(This class allows to memorize and access to the modifiers which are to be applied to a file. To each modifier, is bound a list of integers (optionnal) : if this list is absent, the modifier applies to all the file. Else, it applies to the entities designated by these numbers in the produced file.This class allows to memorize and access to the modifiers which are to be applied to a file. To each modifier, is bound a list of integers (optionnal) : if this list is absent, the modifier applies to all the file. Else, it applies to the entities designated by these numbers in the produced file.This class allows to memorize and access to the modifiers which are to be applied to a file. To each modifier, is bound a list of integers (optionnal) : if this list is absent, the modifier applies to all the file. Else, it applies to the entities designated by these numbers in the produced file.)#");
    py::class_<IFSelect_ContextModif , shared_ptr<IFSelect_ContextModif> >(m,"IFSelect_ContextModif",R"#(This class gathers various informations used by Model Modifiers apart from the target model itself, and the CopyTool which must be passed directly.)#");
    py::class_<IFSelect_ContextWrite , shared_ptr<IFSelect_ContextWrite> >(m,"IFSelect_ContextWrite",R"#(This class gathers various informations used by File Modifiers apart from the writer object, which is specific of the norm and of the physical format)#");
    py::class_<IFSelect_Dispatch ,opencascade::handle<IFSelect_Dispatch>,Py_IFSelect_Dispatch , Standard_Transient>(m,"IFSelect_Dispatch",R"#(This class allows to describe how a set of Entities has to be dispatched into resulting Packets : a Packet is a sub-set of the initial set of entities.This class allows to describe how a set of Entities has to be dispatched into resulting Packets : a Packet is a sub-set of the initial set of entities.This class allows to describe how a set of Entities has to be dispatched into resulting Packets : a Packet is a sub-set of the initial set of entities.)#");
    py::class_<IFSelect_EditForm ,opencascade::handle<IFSelect_EditForm> , Standard_Transient>(m,"IFSelect_EditForm",R"#(An EditForm is the way to apply an Editor on an Entity or on the Model It gives read-only or read-write access, with or without undoAn EditForm is the way to apply an Editor on an Entity or on the Model It gives read-only or read-write access, with or without undoAn EditForm is the way to apply an Editor on an Entity or on the Model It gives read-only or read-write access, with or without undo)#");
    py::class_<IFSelect_Editor ,opencascade::handle<IFSelect_Editor>,Py_IFSelect_Editor , Standard_Transient>(m,"IFSelect_Editor",R"#(An Editor defines a set of values and a way to edit them, on an entity or on the model (e.g. on its header)An Editor defines a set of values and a way to edit them, on an entity or on the model (e.g. on its header)An Editor defines a set of values and a way to edit them, on an entity or on the model (e.g. on its header))#");
    py::class_<IFSelect_Functions , shared_ptr<IFSelect_Functions> >(m,"IFSelect_Functions",R"#(Functions gives access to all the actions which can be commanded with the resources provided by IFSelect : especially WorkSession and various types of Selections and Dispatches)#");
    py::class_<IFSelect_GeneralModifier ,opencascade::handle<IFSelect_GeneralModifier>,Py_IFSelect_GeneralModifier , Standard_Transient>(m,"IFSelect_GeneralModifier",R"#(This class gives a frame for Actions which modify the effect of a Dispatch, i.e. : By Selections and Dispatches, an original Model can be splitted into one or more "target" Models : these Models contain Entities copied from the original one (that is, a part of it). Basically, these dispatched Entities are copied as identical to their original counterparts. Also the copied Models reproduce the Header of the original one.This class gives a frame for Actions which modify the effect of a Dispatch, i.e. : By Selections and Dispatches, an original Model can be splitted into one or more "target" Models : these Models contain Entities copied from the original one (that is, a part of it). Basically, these dispatched Entities are copied as identical to their original counterparts. Also the copied Models reproduce the Header of the original one.This class gives a frame for Actions which modify the effect of a Dispatch, i.e. : By Selections and Dispatches, an original Model can be splitted into one or more "target" Models : these Models contain Entities copied from the original one (that is, a part of it). Basically, these dispatched Entities are copied as identical to their original counterparts. Also the copied Models reproduce the Header of the original one.)#");
    py::class_<IFSelect_HSeqOfSelection ,opencascade::handle<IFSelect_HSeqOfSelection> , IFSelect_TSeqOfSelection, Standard_Transient>(m,"IFSelect_HSeqOfSelection",R"#()#");
    py::class_<IFSelect_IntParam ,opencascade::handle<IFSelect_IntParam> , Standard_Transient>(m,"IFSelect_IntParam",R"#(This class simply allows to access an Integer value through a Handle, as a String can be (by using HString). Hence, this value can be accessed : read and modified, without passing through the specific object which detains it. Thus, parameters of a Selection or a Dispatch (according its type) can be controlled directly from the ShareOut which contains themThis class simply allows to access an Integer value through a Handle, as a String can be (by using HString). Hence, this value can be accessed : read and modified, without passing through the specific object which detains it. Thus, parameters of a Selection or a Dispatch (according its type) can be controlled directly from the ShareOut which contains themThis class simply allows to access an Integer value through a Handle, as a String can be (by using HString). Hence, this value can be accessed : read and modified, without passing through the specific object which detains it. Thus, parameters of a Selection or a Dispatch (according its type) can be controlled directly from the ShareOut which contains them)#");
    py::class_<IFSelect_ListEditor ,opencascade::handle<IFSelect_ListEditor> , Standard_Transient>(m,"IFSelect_ListEditor",R"#(A ListEditor is an auxiliary operator for Editor/EditForm I.E. it works on parameter values expressed as stringsA ListEditor is an auxiliary operator for Editor/EditForm I.E. it works on parameter values expressed as stringsA ListEditor is an auxiliary operator for Editor/EditForm I.E. it works on parameter values expressed as strings)#");
    py::class_<IFSelect_ModelCopier ,opencascade::handle<IFSelect_ModelCopier> , Standard_Transient>(m,"IFSelect_ModelCopier",R"#(This class performs the Copy operations involved by the description of a ShareOut (evaluated by a ShareOutResult) plus, if there are, the Modifications on the results, with the help of Modifiers. Each Modifier can work on one or more resulting packets, accoding its criteria : it operates on a Model once copied and filled with the content of the packet.This class performs the Copy operations involved by the description of a ShareOut (evaluated by a ShareOutResult) plus, if there are, the Modifications on the results, with the help of Modifiers. Each Modifier can work on one or more resulting packets, accoding its criteria : it operates on a Model once copied and filled with the content of the packet.This class performs the Copy operations involved by the description of a ShareOut (evaluated by a ShareOutResult) plus, if there are, the Modifications on the results, with the help of Modifiers. Each Modifier can work on one or more resulting packets, accoding its criteria : it operates on a Model once copied and filled with the content of the packet.)#");
    py::class_<IFSelect_PacketList ,opencascade::handle<IFSelect_PacketList> , Standard_Transient>(m,"IFSelect_PacketList",R"#(This class gives a simple way to return then consult a list of packets, determined from the content of a Model, by various criteria.This class gives a simple way to return then consult a list of packets, determined from the content of a Model, by various criteria.This class gives a simple way to return then consult a list of packets, determined from the content of a Model, by various criteria.)#");
    py::class_<IFSelect_Selection ,opencascade::handle<IFSelect_Selection>,Py_IFSelect_Selection , Standard_Transient>(m,"IFSelect_Selection",R"#(A Selection allows to define a set of Interface Entities. Entities to be put on an output file should be identified in a way as independant from such or such execution as possible. This permits to handle comprehensive criteria, and to replay them when a new variant of an input file has to be processed.A Selection allows to define a set of Interface Entities. Entities to be put on an output file should be identified in a way as independant from such or such execution as possible. This permits to handle comprehensive criteria, and to replay them when a new variant of an input file has to be processed.A Selection allows to define a set of Interface Entities. Entities to be put on an output file should be identified in a way as independant from such or such execution as possible. This permits to handle comprehensive criteria, and to replay them when a new variant of an input file has to be processed.)#");
    py::class_<IFSelect_SelectionIterator , shared_ptr<IFSelect_SelectionIterator> >(m,"IFSelect_SelectionIterator",R"#(Defines an Iterator on a list of Selections)#");
    py::class_<IFSelect_SessionDumper ,opencascade::handle<IFSelect_SessionDumper>,Py_IFSelect_SessionDumper , Standard_Transient>(m,"IFSelect_SessionDumper",R"#(A SessionDumper is called by SessionFile. It takes into account a set of classes (such as Selections, Dispatches ...). SessionFile writes the Type (as defined by cdl) of each Item and its general Parameters. It manages the names of the Items.A SessionDumper is called by SessionFile. It takes into account a set of classes (such as Selections, Dispatches ...). SessionFile writes the Type (as defined by cdl) of each Item and its general Parameters. It manages the names of the Items.A SessionDumper is called by SessionFile. It takes into account a set of classes (such as Selections, Dispatches ...). SessionFile writes the Type (as defined by cdl) of each Item and its general Parameters. It manages the names of the Items.)#");
    py::class_<IFSelect_SessionFile , shared_ptr<IFSelect_SessionFile> >(m,"IFSelect_SessionFile",R"#(A SessionFile is intended to manage access between a WorkSession and an Ascii Form, to be considered as a Dump. It allows to write the File from the WorkSession, and later read the File to the WorkSession, by keeping required descriptions (such as dependances).)#");
    py::class_<IFSelect_ShareOut ,opencascade::handle<IFSelect_ShareOut> , Standard_Transient>(m,"IFSelect_ShareOut",R"#(This class gathers the informations required to produce one or several file(s) from the content of an InterfaceModel (passing through the creation of intermediate Models).This class gathers the informations required to produce one or several file(s) from the content of an InterfaceModel (passing through the creation of intermediate Models).This class gathers the informations required to produce one or several file(s) from the content of an InterfaceModel (passing through the creation of intermediate Models).)#");
    py::class_<IFSelect_ShareOutResult , shared_ptr<IFSelect_ShareOutResult> >(m,"IFSelect_ShareOutResult",R"#(This class gives results computed from a ShareOut : simulation before transfer, helps to list entities ... Transfer itself will later be performed, either by a TransferCopy to simply divide up a file, or a TransferDispatch which can be parametred with more details)#");
    py::class_<IFSelect_Signature ,opencascade::handle<IFSelect_Signature>,Py_IFSelect_Signature , Interface_SignType>(m,"IFSelect_Signature",R"#(Signature provides the basic service used by the classes SelectSignature and Counter (i.e. Name, Value), which is : - for an entity in a model, give a characteristic string, its signature This string has not to be unique in the model, but gives a value for such or such important feature. Exemples : Dynamic Type; Category; etcSignature provides the basic service used by the classes SelectSignature and Counter (i.e. Name, Value), which is : - for an entity in a model, give a characteristic string, its signature This string has not to be unique in the model, but gives a value for such or such important feature. Exemples : Dynamic Type; Category; etcSignature provides the basic service used by the classes SelectSignature and Counter (i.e. Name, Value), which is : - for an entity in a model, give a characteristic string, its signature This string has not to be unique in the model, but gives a value for such or such important feature. Exemples : Dynamic Type; Category; etc)#");
    py::class_<IFSelect_SignatureList ,opencascade::handle<IFSelect_SignatureList> , Standard_Transient>(m,"IFSelect_SignatureList",R"#(A SignatureList is given as result from a Counter (any kind) It gives access to a list of signatures, with counts, and optionally with list of corresponding entitiesA SignatureList is given as result from a Counter (any kind) It gives access to a list of signatures, with counts, and optionally with list of corresponding entitiesA SignatureList is given as result from a Counter (any kind) It gives access to a list of signatures, with counts, and optionally with list of corresponding entities)#");
    py::class_<IFSelect_Transformer ,opencascade::handle<IFSelect_Transformer>,Py_IFSelect_Transformer , Standard_Transient>(m,"IFSelect_Transformer",R"#(A Transformer defines the way an InterfaceModel is transformed (without sending it to a file). In order to work, each type of Transformer defines it method Perform, it can be parametred as needed.A Transformer defines the way an InterfaceModel is transformed (without sending it to a file). In order to work, each type of Transformer defines it method Perform, it can be parametred as needed.A Transformer defines the way an InterfaceModel is transformed (without sending it to a file). In order to work, each type of Transformer defines it method Perform, it can be parametred as needed.)#");
    py::class_<IFSelect_WorkLibrary ,opencascade::handle<IFSelect_WorkLibrary>,Py_IFSelect_WorkLibrary , Standard_Transient>(m,"IFSelect_WorkLibrary",R"#(This class defines the (empty) frame which can be used to enrich a XSTEP set with new capabilities In particular, a specific WorkLibrary must give the way for Reading a File into a Model, and Writing a Model to a File Thus, it is possible to define several Work Libraries for each norm, but recommanded to define one general class for each one : this general class will define the Read and Write methods.This class defines the (empty) frame which can be used to enrich a XSTEP set with new capabilities In particular, a specific WorkLibrary must give the way for Reading a File into a Model, and Writing a Model to a File Thus, it is possible to define several Work Libraries for each norm, but recommanded to define one general class for each one : this general class will define the Read and Write methods.This class defines the (empty) frame which can be used to enrich a XSTEP set with new capabilities In particular, a specific WorkLibrary must give the way for Reading a File into a Model, and Writing a Model to a File Thus, it is possible to define several Work Libraries for each norm, but recommanded to define one general class for each one : this general class will define the Read and Write methods.)#");
    py::class_<IFSelect_WorkSession ,opencascade::handle<IFSelect_WorkSession> , Standard_Transient>(m,"IFSelect_WorkSession",R"#(This class can be used to simply manage a process such as splitting a file, extracting a set of Entities ... It allows to manage different types of Variables : Integer or Text Parameters, Selections, Dispatches, in addition to a ShareOut. To each of these variables, a unique Integer Identifier is attached. A Name can be attached too as desired.This class can be used to simply manage a process such as splitting a file, extracting a set of Entities ... It allows to manage different types of Variables : Integer or Text Parameters, Selections, Dispatches, in addition to a ShareOut. To each of these variables, a unique Integer Identifier is attached. A Name can be attached too as desired.This class can be used to simply manage a process such as splitting a file, extracting a set of Entities ... It allows to manage different types of Variables : Integer or Text Parameters, Selections, Dispatches, in addition to a ShareOut. To each of these variables, a unique Integer Identifier is attached. A Name can be attached too as desired.)#");
    py::class_<IFSelect_Act ,opencascade::handle<IFSelect_Act> , IFSelect_Activator>(m,"IFSelect_Act",R"#(Act gives a simple way to define and add functions to be ran from a SessionPilot, as follows :Act gives a simple way to define and add functions to be ran from a SessionPilot, as follows :Act gives a simple way to define and add functions to be ran from a SessionPilot, as follows :)#");
    py::class_<IFSelect_BasicDumper ,opencascade::handle<IFSelect_BasicDumper> , IFSelect_SessionDumper>(m,"IFSelect_BasicDumper",R"#(BasicDumper takes into account, for SessionFile, all the classes defined in the package IFSelect : Selections, Dispatches (there is no Modifier)BasicDumper takes into account, for SessionFile, all the classes defined in the package IFSelect : Selections, Dispatches (there is no Modifier)BasicDumper takes into account, for SessionFile, all the classes defined in the package IFSelect : Selections, Dispatches (there is no Modifier))#");
    py::class_<IFSelect_CheckCounter ,opencascade::handle<IFSelect_CheckCounter> , IFSelect_SignatureList>(m,"IFSelect_CheckCounter",R"#(A CheckCounter allows to see a CheckList (i.e. CheckIterator) not per entity, its messages, but per message, the entities attached (count and list). Because many messages can be repeated if they are due to systematic errorsA CheckCounter allows to see a CheckList (i.e. CheckIterator) not per entity, its messages, but per message, the entities attached (count and list). Because many messages can be repeated if they are due to systematic errorsA CheckCounter allows to see a CheckList (i.e. CheckIterator) not per entity, its messages, but per message, the entities attached (count and list). Because many messages can be repeated if they are due to systematic errors)#");
    py::class_<IFSelect_DispGlobal ,opencascade::handle<IFSelect_DispGlobal> , IFSelect_Dispatch>(m,"IFSelect_DispGlobal",R"#(A DispGlobal gathers all the input Entities into only one global PacketA DispGlobal gathers all the input Entities into only one global PacketA DispGlobal gathers all the input Entities into only one global Packet)#");
    py::class_<IFSelect_DispPerCount ,opencascade::handle<IFSelect_DispPerCount> , IFSelect_Dispatch>(m,"IFSelect_DispPerCount",R"#(A DispPerCount gathers all the input Entities into one or several Packets, each containing a defined count of Entity This count is a Parameter of the DispPerCount, given as an IntParam, thus allowing external control of its ValueA DispPerCount gathers all the input Entities into one or several Packets, each containing a defined count of Entity This count is a Parameter of the DispPerCount, given as an IntParam, thus allowing external control of its ValueA DispPerCount gathers all the input Entities into one or several Packets, each containing a defined count of Entity This count is a Parameter of the DispPerCount, given as an IntParam, thus allowing external control of its Value)#");
    py::class_<IFSelect_DispPerFiles ,opencascade::handle<IFSelect_DispPerFiles> , IFSelect_Dispatch>(m,"IFSelect_DispPerFiles",R"#(A DispPerFiles produces a determined count of Packets from the input Entities. It divides, as equally as possible, the input list into a count of files. This count is the parameter of the DispPerFiles. If the input list has less than this count, of course there will be one packet per input entity. This count is a Parameter of the DispPerFiles, given as an IntParam, thus allowing external control of its ValueA DispPerFiles produces a determined count of Packets from the input Entities. It divides, as equally as possible, the input list into a count of files. This count is the parameter of the DispPerFiles. If the input list has less than this count, of course there will be one packet per input entity. This count is a Parameter of the DispPerFiles, given as an IntParam, thus allowing external control of its ValueA DispPerFiles produces a determined count of Packets from the input Entities. It divides, as equally as possible, the input list into a count of files. This count is the parameter of the DispPerFiles. If the input list has less than this count, of course there will be one packet per input entity. This count is a Parameter of the DispPerFiles, given as an IntParam, thus allowing external control of its Value)#");
    py::class_<IFSelect_DispPerOne ,opencascade::handle<IFSelect_DispPerOne> , IFSelect_Dispatch>(m,"IFSelect_DispPerOne",R"#(A DispPerOne gathers all the input Entities into as many Packets as there Root Entities from the Final Selection, that is, one Packet per EntityA DispPerOne gathers all the input Entities into as many Packets as there Root Entities from the Final Selection, that is, one Packet per EntityA DispPerOne gathers all the input Entities into as many Packets as there Root Entities from the Final Selection, that is, one Packet per Entity)#");
    py::class_<IFSelect_DispPerSignature ,opencascade::handle<IFSelect_DispPerSignature> , IFSelect_Dispatch>(m,"IFSelect_DispPerSignature",R"#(A DispPerSignature sorts input Entities according to a Signature : it works with a SignCounter to do this.A DispPerSignature sorts input Entities according to a Signature : it works with a SignCounter to do this.A DispPerSignature sorts input Entities according to a Signature : it works with a SignCounter to do this.)#");
    py::class_<IFSelect_Modifier ,opencascade::handle<IFSelect_Modifier>,Py_IFSelect_Modifier , IFSelect_GeneralModifier>(m,"IFSelect_Modifier",R"#(This class gives a frame for Actions which can work globally on a File once completely defined (i.e. afterwards)This class gives a frame for Actions which can work globally on a File once completely defined (i.e. afterwards)This class gives a frame for Actions which can work globally on a File once completely defined (i.e. afterwards))#");
    py::class_<IFSelect_ParamEditor ,opencascade::handle<IFSelect_ParamEditor> , IFSelect_Editor>(m,"IFSelect_ParamEditor",R"#(A ParamEditor gives access for edition to a list of TypedValue (i.e. of Static too) Its definition is made of the TypedValue to edit themselves, and can add some constants, which can then be displayed but not changed (for instance, system name, processor version ...)A ParamEditor gives access for edition to a list of TypedValue (i.e. of Static too) Its definition is made of the TypedValue to edit themselves, and can add some constants, which can then be displayed but not changed (for instance, system name, processor version ...)A ParamEditor gives access for edition to a list of TypedValue (i.e. of Static too) Its definition is made of the TypedValue to edit themselves, and can add some constants, which can then be displayed but not changed (for instance, system name, processor version ...))#");
    py::class_<IFSelect_SelectBase ,opencascade::handle<IFSelect_SelectBase>,Py_IFSelect_SelectBase , IFSelect_Selection>(m,"IFSelect_SelectBase",R"#(SelectBase works directly from an InterfaceModel : it is the first base for other Selections.SelectBase works directly from an InterfaceModel : it is the first base for other Selections.SelectBase works directly from an InterfaceModel : it is the first base for other Selections.)#");
    py::class_<IFSelect_SelectCombine ,opencascade::handle<IFSelect_SelectCombine>,Py_IFSelect_SelectCombine , IFSelect_Selection>(m,"IFSelect_SelectCombine",R"#(A SelectCombine type Selection defines algebraic operations between results of several Selections It is a deferred class : sub-classes will have to define precise what operator is to be appliedA SelectCombine type Selection defines algebraic operations between results of several Selections It is a deferred class : sub-classes will have to define precise what operator is to be appliedA SelectCombine type Selection defines algebraic operations between results of several Selections It is a deferred class : sub-classes will have to define precise what operator is to be applied)#");
    py::class_<IFSelect_SelectControl ,opencascade::handle<IFSelect_SelectControl>,Py_IFSelect_SelectControl , IFSelect_Selection>(m,"IFSelect_SelectControl",R"#(A SelectControl kind Selection works with two input Selections in a dissymmetric way : the Main Input which gives an input list of Entities, to be processed, and the Second Input which gives another list, to be used to filter the main input.A SelectControl kind Selection works with two input Selections in a dissymmetric way : the Main Input which gives an input list of Entities, to be processed, and the Second Input which gives another list, to be used to filter the main input.A SelectControl kind Selection works with two input Selections in a dissymmetric way : the Main Input which gives an input list of Entities, to be processed, and the Second Input which gives another list, to be used to filter the main input.)#");
    py::class_<IFSelect_SelectDeduct ,opencascade::handle<IFSelect_SelectDeduct>,Py_IFSelect_SelectDeduct , IFSelect_Selection>(m,"IFSelect_SelectDeduct",R"#(A SelectDeduct determines a list of Entities from an Input Selection, by a computation : Output list is not obliged to be a sub-list of Input list (for more specific, see SelectExtract for filtered sub-lists, and SelectExplore for recurcive exploration)A SelectDeduct determines a list of Entities from an Input Selection, by a computation : Output list is not obliged to be a sub-list of Input list (for more specific, see SelectExtract for filtered sub-lists, and SelectExplore for recurcive exploration)A SelectDeduct determines a list of Entities from an Input Selection, by a computation : Output list is not obliged to be a sub-list of Input list (for more specific, see SelectExtract for filtered sub-lists, and SelectExplore for recurcive exploration))#");
    py::class_<IFSelect_SessionPilot ,opencascade::handle<IFSelect_SessionPilot> , IFSelect_Activator>(m,"IFSelect_SessionPilot",R"#(A SessionPilot is intended to make easier the use of a WorkSession. It receives commands, under alphanumeric form, then calls a library of Activators to interprete and run them.A SessionPilot is intended to make easier the use of a WorkSession. It receives commands, under alphanumeric form, then calls a library of Activators to interprete and run them.A SessionPilot is intended to make easier the use of a WorkSession. It receives commands, under alphanumeric form, then calls a library of Activators to interprete and run them.)#");
    py::class_<IFSelect_SignCategory ,opencascade::handle<IFSelect_SignCategory> , IFSelect_Signature>(m,"IFSelect_SignCategory",R"#(This Signature returns the Category of an entity, as recorded in the modelThis Signature returns the Category of an entity, as recorded in the modelThis Signature returns the Category of an entity, as recorded in the model)#");
    py::class_<IFSelect_SignCounter ,opencascade::handle<IFSelect_SignCounter> , IFSelect_SignatureList>(m,"IFSelect_SignCounter",R"#(SignCounter gives the frame to count signatures associated with entities, deducted from them. Ex.: their Dynamic Type.SignCounter gives the frame to count signatures associated with entities, deducted from them. Ex.: their Dynamic Type.SignCounter gives the frame to count signatures associated with entities, deducted from them. Ex.: their Dynamic Type.)#");
    py::class_<IFSelect_SignMultiple ,opencascade::handle<IFSelect_SignMultiple> , IFSelect_Signature>(m,"IFSelect_SignMultiple",R"#(Multiple Signature : ordered list of other Signatures It concatenates on a same line the result of its sub-items separated by sets of 3 blanks It is possible to define tabulations between sub-items Moreover, match rules are specificMultiple Signature : ordered list of other Signatures It concatenates on a same line the result of its sub-items separated by sets of 3 blanks It is possible to define tabulations between sub-items Moreover, match rules are specificMultiple Signature : ordered list of other Signatures It concatenates on a same line the result of its sub-items separated by sets of 3 blanks It is possible to define tabulations between sub-items Moreover, match rules are specific)#");
    py::class_<IFSelect_SignType ,opencascade::handle<IFSelect_SignType> , IFSelect_Signature>(m,"IFSelect_SignType",R"#(This Signature returns the cdl Type of an entity, under two forms : - complete dynamic type (package and class) - class type, without package nameThis Signature returns the cdl Type of an entity, under two forms : - complete dynamic type (package and class) - class type, without package nameThis Signature returns the cdl Type of an entity, under two forms : - complete dynamic type (package and class) - class type, without package name)#");
    py::class_<IFSelect_SignValidity ,opencascade::handle<IFSelect_SignValidity> , IFSelect_Signature>(m,"IFSelect_SignValidity",R"#(This Signature returns the Validity Status of an entity, as deducted from data in the model : it can be "OK" "Unknown" "Unloaded" "Syntactic Fail"(but loaded) "Syntactic Warning" "Semantic Fail" "Semantic Warning"This Signature returns the Validity Status of an entity, as deducted from data in the model : it can be "OK" "Unknown" "Unloaded" "Syntactic Fail"(but loaded) "Syntactic Warning" "Semantic Fail" "Semantic Warning"This Signature returns the Validity Status of an entity, as deducted from data in the model : it can be "OK" "Unknown" "Unloaded" "Syntactic Fail"(but loaded) "Syntactic Warning" "Semantic Fail" "Semantic Warning")#");
    py::class_<IFSelect_TransformStandard ,opencascade::handle<IFSelect_TransformStandard> , IFSelect_Transformer>(m,"IFSelect_TransformStandard",R"#(This class runs transformations made by Modifiers, as the ModelCopier does when it produces files (the same set of Modifiers can then be used, as to transform the starting Model, as at file sending time).This class runs transformations made by Modifiers, as the ModelCopier does when it produces files (the same set of Modifiers can then be used, as to transform the starting Model, as at file sending time).This class runs transformations made by Modifiers, as the ModelCopier does when it produces files (the same set of Modifiers can then be used, as to transform the starting Model, as at file sending time).)#");
    py::class_<IFSelect_GraphCounter ,opencascade::handle<IFSelect_GraphCounter> , IFSelect_SignCounter>(m,"IFSelect_GraphCounter",R"#(A GraphCounter computes values to be sorted with the help of a Graph. I.E. not from a SignatureA GraphCounter computes values to be sorted with the help of a Graph. I.E. not from a SignatureA GraphCounter computes values to be sorted with the help of a Graph. I.E. not from a Signature)#");
    py::class_<IFSelect_ModifEditForm ,opencascade::handle<IFSelect_ModifEditForm> , IFSelect_Modifier>(m,"IFSelect_ModifEditForm",R"#(This modifier applies an EditForm on the entities selectedThis modifier applies an EditForm on the entities selectedThis modifier applies an EditForm on the entities selected)#");
    py::class_<IFSelect_ModifReorder ,opencascade::handle<IFSelect_ModifReorder> , IFSelect_Modifier>(m,"IFSelect_ModifReorder",R"#(This modifier reorders a whole model from its roots, i.e. according to <rootlast> status, it considers each of its roots, then it orders all its shared entities at any level, the result begins by the lower level entities ... ends by the roots.This modifier reorders a whole model from its roots, i.e. according to <rootlast> status, it considers each of its roots, then it orders all its shared entities at any level, the result begins by the lower level entities ... ends by the roots.This modifier reorders a whole model from its roots, i.e. according to <rootlast> status, it considers each of its roots, then it orders all its shared entities at any level, the result begins by the lower level entities ... ends by the roots.)#");
    py::class_<IFSelect_SelectAnyList ,opencascade::handle<IFSelect_SelectAnyList>,Py_IFSelect_SelectAnyList , IFSelect_SelectDeduct>(m,"IFSelect_SelectAnyList",R"#(A SelectAnyList kind Selection selects a List of an Entity, as well as this Entity contains some. A List contains sub-entities as one per Item, or several (for instance if an Entity binds couples of sub-entities, each item is one of these couples). Remark that only Entities are taken into account (neither Reals, nor Strings, etc...)A SelectAnyList kind Selection selects a List of an Entity, as well as this Entity contains some. A List contains sub-entities as one per Item, or several (for instance if an Entity binds couples of sub-entities, each item is one of these couples). Remark that only Entities are taken into account (neither Reals, nor Strings, etc...)A SelectAnyList kind Selection selects a List of an Entity, as well as this Entity contains some. A List contains sub-entities as one per Item, or several (for instance if an Entity binds couples of sub-entities, each item is one of these couples). Remark that only Entities are taken into account (neither Reals, nor Strings, etc...))#");
    py::class_<IFSelect_SelectDiff ,opencascade::handle<IFSelect_SelectDiff> , IFSelect_SelectControl>(m,"IFSelect_SelectDiff",R"#(A SelectDiff keeps the entities from a Selection, the Main Input, which are not listed by the Second InputA SelectDiff keeps the entities from a Selection, the Main Input, which are not listed by the Second InputA SelectDiff keeps the entities from a Selection, the Main Input, which are not listed by the Second Input)#");
    py::class_<IFSelect_SelectEntityNumber ,opencascade::handle<IFSelect_SelectEntityNumber> , IFSelect_SelectBase>(m,"IFSelect_SelectEntityNumber",R"#(A SelectEntityNumber gets in an InterfaceModel (through a Graph), the Entity which has a specified Number (its rank of adding into the Model) : there can be zero (if none) or one. The Number is not directly defined as an Integer, but as a Parameter, which can be externally controledA SelectEntityNumber gets in an InterfaceModel (through a Graph), the Entity which has a specified Number (its rank of adding into the Model) : there can be zero (if none) or one. The Number is not directly defined as an Integer, but as a Parameter, which can be externally controledA SelectEntityNumber gets in an InterfaceModel (through a Graph), the Entity which has a specified Number (its rank of adding into the Model) : there can be zero (if none) or one. The Number is not directly defined as an Integer, but as a Parameter, which can be externally controled)#");
    py::class_<IFSelect_SelectExplore ,opencascade::handle<IFSelect_SelectExplore>,Py_IFSelect_SelectExplore , IFSelect_SelectDeduct>(m,"IFSelect_SelectExplore",R"#(A SelectExplore determines from an input list of Entities, a list obtained by a way of exploration. This implies the possibility of recursive exploration : the output list is itself reused as input, etc... Examples : Shared Entities, can be considered at one level (immediate shared) or more, or max levelA SelectExplore determines from an input list of Entities, a list obtained by a way of exploration. This implies the possibility of recursive exploration : the output list is itself reused as input, etc... Examples : Shared Entities, can be considered at one level (immediate shared) or more, or max levelA SelectExplore determines from an input list of Entities, a list obtained by a way of exploration. This implies the possibility of recursive exploration : the output list is itself reused as input, etc... Examples : Shared Entities, can be considered at one level (immediate shared) or more, or max level)#");
    py::class_<IFSelect_SelectExtract ,opencascade::handle<IFSelect_SelectExtract>,Py_IFSelect_SelectExtract , IFSelect_SelectDeduct>(m,"IFSelect_SelectExtract",R"#(A SelectExtract determines a list of Entities from an Input Selection, as a sub-list of the Input Result It works by applying a sort criterium on each Entity of the Input. This criterium can be applied Direct to Pick Items (default case) or Reverse to Remove ItemA SelectExtract determines a list of Entities from an Input Selection, as a sub-list of the Input Result It works by applying a sort criterium on each Entity of the Input. This criterium can be applied Direct to Pick Items (default case) or Reverse to Remove ItemA SelectExtract determines a list of Entities from an Input Selection, as a sub-list of the Input Result It works by applying a sort criterium on each Entity of the Input. This criterium can be applied Direct to Pick Items (default case) or Reverse to Remove Item)#");
    py::class_<IFSelect_SelectIntersection ,opencascade::handle<IFSelect_SelectIntersection> , IFSelect_SelectCombine>(m,"IFSelect_SelectIntersection",R"#(A SelectIntersection filters the Entities issued from several other Selections as Intersection of results : "AND" operatorA SelectIntersection filters the Entities issued from several other Selections as Intersection of results : "AND" operatorA SelectIntersection filters the Entities issued from several other Selections as Intersection of results : "AND" operator)#");
    py::class_<IFSelect_SelectModelEntities ,opencascade::handle<IFSelect_SelectModelEntities> , IFSelect_SelectBase>(m,"IFSelect_SelectModelEntities",R"#(A SelectModelEntities gets all the Entities of an InterfaceModel.A SelectModelEntities gets all the Entities of an InterfaceModel.A SelectModelEntities gets all the Entities of an InterfaceModel.)#");
    py::class_<IFSelect_SelectModelRoots ,opencascade::handle<IFSelect_SelectModelRoots> , IFSelect_SelectBase>(m,"IFSelect_SelectModelRoots",R"#(A SelectModelRoots gets all the Root Entities of an InterfaceModel. Remember that a "Root Entity" is defined as having no Sharing Entity (if there is a Loop between Entities, none of them can be a "Root").A SelectModelRoots gets all the Root Entities of an InterfaceModel. Remember that a "Root Entity" is defined as having no Sharing Entity (if there is a Loop between Entities, none of them can be a "Root").A SelectModelRoots gets all the Root Entities of an InterfaceModel. Remember that a "Root Entity" is defined as having no Sharing Entity (if there is a Loop between Entities, none of them can be a "Root").)#");
    py::class_<IFSelect_SelectPointed ,opencascade::handle<IFSelect_SelectPointed> , IFSelect_SelectBase>(m,"IFSelect_SelectPointed",R"#(This type of Selection is intended to describe a direct selection without an explicit criterium, for instance the result of picking viewed entities on a graphic screenThis type of Selection is intended to describe a direct selection without an explicit criterium, for instance the result of picking viewed entities on a graphic screenThis type of Selection is intended to describe a direct selection without an explicit criterium, for instance the result of picking viewed entities on a graphic screen)#");
    py::class_<IFSelect_SelectShared ,opencascade::handle<IFSelect_SelectShared> , IFSelect_SelectDeduct>(m,"IFSelect_SelectShared",R"#(A SelectShared selects Entities which are directly Shared by the Entities of the Input listA SelectShared selects Entities which are directly Shared by the Entities of the Input listA SelectShared selects Entities which are directly Shared by the Entities of the Input list)#");
    py::class_<IFSelect_SelectSharing ,opencascade::handle<IFSelect_SelectSharing> , IFSelect_SelectDeduct>(m,"IFSelect_SelectSharing",R"#(A SelectSharing selects Entities which directly Share (Level One) the Entities of the Input list Remark : if an Entity of the Input List directly shares another one, it is of course present in the Result ListA SelectSharing selects Entities which directly Share (Level One) the Entities of the Input list Remark : if an Entity of the Input List directly shares another one, it is of course present in the Result ListA SelectSharing selects Entities which directly Share (Level One) the Entities of the Input list Remark : if an Entity of the Input List directly shares another one, it is of course present in the Result List)#");
    py::class_<IFSelect_SelectSuite ,opencascade::handle<IFSelect_SelectSuite> , IFSelect_SelectDeduct>(m,"IFSelect_SelectSuite",R"#(A SelectSuite can describe a suite of SelectDeduct as a unique one : in other words, it can be seen as a "macro selection"A SelectSuite can describe a suite of SelectDeduct as a unique one : in other words, it can be seen as a "macro selection"A SelectSuite can describe a suite of SelectDeduct as a unique one : in other words, it can be seen as a "macro selection")#");
    py::class_<IFSelect_SelectUnion ,opencascade::handle<IFSelect_SelectUnion> , IFSelect_SelectCombine>(m,"IFSelect_SelectUnion",R"#(A SelectUnion cumulates the Entities issued from several other Selections (union of results : "OR" operator)A SelectUnion cumulates the Entities issued from several other Selections (union of results : "OR" operator)A SelectUnion cumulates the Entities issued from several other Selections (union of results : "OR" operator))#");
    py::class_<IFSelect_SignAncestor ,opencascade::handle<IFSelect_SignAncestor> , IFSelect_SignType>(m,"IFSelect_SignAncestor",R"#()#");
    py::class_<IFSelect_SelectAnyType ,opencascade::handle<IFSelect_SelectAnyType>,Py_IFSelect_SelectAnyType , IFSelect_SelectExtract>(m,"IFSelect_SelectAnyType",R"#(A SelectAnyType sorts the Entities of which the Type is Kind of a given Type : this Type for Match is specific of each class of SelectAnyTypeA SelectAnyType sorts the Entities of which the Type is Kind of a given Type : this Type for Match is specific of each class of SelectAnyTypeA SelectAnyType sorts the Entities of which the Type is Kind of a given Type : this Type for Match is specific of each class of SelectAnyType)#");
    py::class_<IFSelect_SelectErrorEntities ,opencascade::handle<IFSelect_SelectErrorEntities> , IFSelect_SelectExtract>(m,"IFSelect_SelectErrorEntities",R"#(A SelectErrorEntities sorts the Entities which are qualified as "Error" (their Type has not been recognized) during reading a File. This does not concern Entities which are syntactically correct, but with incorrect data (for integrity constraints).A SelectErrorEntities sorts the Entities which are qualified as "Error" (their Type has not been recognized) during reading a File. This does not concern Entities which are syntactically correct, but with incorrect data (for integrity constraints).A SelectErrorEntities sorts the Entities which are qualified as "Error" (their Type has not been recognized) during reading a File. This does not concern Entities which are syntactically correct, but with incorrect data (for integrity constraints).)#");
    py::class_<IFSelect_SelectFlag ,opencascade::handle<IFSelect_SelectFlag> , IFSelect_SelectExtract>(m,"IFSelect_SelectFlag",R"#(A SelectFlag queries a flag noted in the bitmap of the Graph. The Flag is designated by its Name. Flag Names are defined by Work Session and, as necessary, other functional objectsA SelectFlag queries a flag noted in the bitmap of the Graph. The Flag is designated by its Name. Flag Names are defined by Work Session and, as necessary, other functional objectsA SelectFlag queries a flag noted in the bitmap of the Graph. The Flag is designated by its Name. Flag Names are defined by Work Session and, as necessary, other functional objects)#");
    py::class_<IFSelect_SelectInList ,opencascade::handle<IFSelect_SelectInList>,Py_IFSelect_SelectInList , IFSelect_SelectAnyList>(m,"IFSelect_SelectInList",R"#(A SelectInList kind Selection selects a List of an Entity, which is composed of single Entities To know the list on which to work, SelectInList has two deferred methods : NbItems (inherited from SelectAnyList) and ListedEntity (which gives an item as an Entity) which must be defined to get a List in an Entity of the required Type (and consider that list is empty if Entity has not required Type)A SelectInList kind Selection selects a List of an Entity, which is composed of single Entities To know the list on which to work, SelectInList has two deferred methods : NbItems (inherited from SelectAnyList) and ListedEntity (which gives an item as an Entity) which must be defined to get a List in an Entity of the required Type (and consider that list is empty if Entity has not required Type)A SelectInList kind Selection selects a List of an Entity, which is composed of single Entities To know the list on which to work, SelectInList has two deferred methods : NbItems (inherited from SelectAnyList) and ListedEntity (which gives an item as an Entity) which must be defined to get a List in an Entity of the required Type (and consider that list is empty if Entity has not required Type))#");
    py::class_<IFSelect_SelectRange ,opencascade::handle<IFSelect_SelectRange> , IFSelect_SelectExtract>(m,"IFSelect_SelectRange",R"#(A SelectRange keeps or rejects a sub-set of the input set, that is the Entities of which rank in the iteration list is in a given range (for instance form 2nd to 6th, etc...)A SelectRange keeps or rejects a sub-set of the input set, that is the Entities of which rank in the iteration list is in a given range (for instance form 2nd to 6th, etc...)A SelectRange keeps or rejects a sub-set of the input set, that is the Entities of which rank in the iteration list is in a given range (for instance form 2nd to 6th, etc...))#");
    py::class_<IFSelect_SelectRootComps ,opencascade::handle<IFSelect_SelectRootComps> , IFSelect_SelectExtract>(m,"IFSelect_SelectRootComps",R"#(A SelectRootComps sorts the Entities which are part of Strong Componants, local roots of a set of Entities : they can be Single Componants (containing one Entity) or Cycles This class gives a more secure result than SelectRoots (which considers only Single Componants) but is longer to work : it can be used when there can be or there are cycles in a Model For each cycle, one Entity is given arbitrarily Reject works as for SelectRoots : Strong Componants defined in the input list which are not local roots are givenA SelectRootComps sorts the Entities which are part of Strong Componants, local roots of a set of Entities : they can be Single Componants (containing one Entity) or Cycles This class gives a more secure result than SelectRoots (which considers only Single Componants) but is longer to work : it can be used when there can be or there are cycles in a Model For each cycle, one Entity is given arbitrarily Reject works as for SelectRoots : Strong Componants defined in the input list which are not local roots are givenA SelectRootComps sorts the Entities which are part of Strong Componants, local roots of a set of Entities : they can be Single Componants (containing one Entity) or Cycles This class gives a more secure result than SelectRoots (which considers only Single Componants) but is longer to work : it can be used when there can be or there are cycles in a Model For each cycle, one Entity is given arbitrarily Reject works as for SelectRoots : Strong Componants defined in the input list which are not local roots are given)#");
    py::class_<IFSelect_SelectRoots ,opencascade::handle<IFSelect_SelectRoots> , IFSelect_SelectExtract>(m,"IFSelect_SelectRoots",R"#(A SelectRoots sorts the Entities which are local roots of a set of Entities (not shared by other Entities inside this set, even if they are shared by other Entities outside it)A SelectRoots sorts the Entities which are local roots of a set of Entities (not shared by other Entities inside this set, even if they are shared by other Entities outside it)A SelectRoots sorts the Entities which are local roots of a set of Entities (not shared by other Entities inside this set, even if they are shared by other Entities outside it))#");
    py::class_<IFSelect_SelectSent ,opencascade::handle<IFSelect_SelectSent> , IFSelect_SelectExtract>(m,"IFSelect_SelectSent",R"#(This class returns entities according sending to a file Once a model has been loaded, further sendings are recorded as status in the graph (for each value, a count of sendings)This class returns entities according sending to a file Once a model has been loaded, further sendings are recorded as status in the graph (for each value, a count of sendings)This class returns entities according sending to a file Once a model has been loaded, further sendings are recorded as status in the graph (for each value, a count of sendings))#");
    py::class_<IFSelect_SelectSignature ,opencascade::handle<IFSelect_SelectSignature> , IFSelect_SelectExtract>(m,"IFSelect_SelectSignature",R"#(A SelectSignature sorts the Entities on a Signature Matching. The signature to match is given at creation time. Also, the required match is given at creation time : exact (IsEqual) or contains (the Type's Name must contain the criterium Text)A SelectSignature sorts the Entities on a Signature Matching. The signature to match is given at creation time. Also, the required match is given at creation time : exact (IsEqual) or contains (the Type's Name must contain the criterium Text)A SelectSignature sorts the Entities on a Signature Matching. The signature to match is given at creation time. Also, the required match is given at creation time : exact (IsEqual) or contains (the Type's Name must contain the criterium Text))#");
    py::class_<IFSelect_SelectSignedShared ,opencascade::handle<IFSelect_SelectSignedShared> , IFSelect_SelectExplore>(m,"IFSelect_SelectSignedShared",R"#(In the graph, explore the Shareds of the input entities, until it encounters some which match a given Signature (for a limited level, filters the returned list) By default, fitted for any levelIn the graph, explore the Shareds of the input entities, until it encounters some which match a given Signature (for a limited level, filters the returned list) By default, fitted for any levelIn the graph, explore the Shareds of the input entities, until it encounters some which match a given Signature (for a limited level, filters the returned list) By default, fitted for any level)#");
    py::class_<IFSelect_SelectSignedSharing ,opencascade::handle<IFSelect_SelectSignedSharing> , IFSelect_SelectExplore>(m,"IFSelect_SelectSignedSharing",R"#(In the graph, explore the sharings of the input entities, until it encounters some which match a given Signature (for a limited level, filters the returned list) By default, fitted for any levelIn the graph, explore the sharings of the input entities, until it encounters some which match a given Signature (for a limited level, filters the returned list) By default, fitted for any levelIn the graph, explore the sharings of the input entities, until it encounters some which match a given Signature (for a limited level, filters the returned list) By default, fitted for any level)#");
    py::class_<IFSelect_SelectUnknownEntities ,opencascade::handle<IFSelect_SelectUnknownEntities> , IFSelect_SelectExtract>(m,"IFSelect_SelectUnknownEntities",R"#(A SelectUnknownEntities sorts the Entities which are qualified as "Unknown" (their Type has not been recognized)A SelectUnknownEntities sorts the Entities which are qualified as "Unknown" (their Type has not been recognized)A SelectUnknownEntities sorts the Entities which are qualified as "Unknown" (their Type has not been recognized))#");
    py::class_<IFSelect_SelectIncorrectEntities ,opencascade::handle<IFSelect_SelectIncorrectEntities> , IFSelect_SelectFlag>(m,"IFSelect_SelectIncorrectEntities",R"#(A SelectIncorrectEntities sorts the Entities which have been noted as Incorrect in the Graph of the Session (flag "Incorrect") It can find a result only if ComputeCheck has formerly been called on the WorkSession. Else, its result will be empty.A SelectIncorrectEntities sorts the Entities which have been noted as Incorrect in the Graph of the Session (flag "Incorrect") It can find a result only if ComputeCheck has formerly been called on the WorkSession. Else, its result will be empty.A SelectIncorrectEntities sorts the Entities which have been noted as Incorrect in the Graph of the Session (flag "Incorrect") It can find a result only if ComputeCheck has formerly been called on the WorkSession. Else, its result will be empty.)#");
    py::class_<IFSelect_SelectType ,opencascade::handle<IFSelect_SelectType> , IFSelect_SelectAnyType>(m,"IFSelect_SelectType",R"#(A SelectType keeps or rejects Entities of which the Type is Kind of a given Cdl TypeA SelectType keeps or rejects Entities of which the Type is Kind of a given Cdl TypeA SelectType keeps or rejects Entities of which the Type is Kind of a given Cdl Type)#");

};

// user-defined post-inclusion per module

// user-defined post
