
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_EntityIterator.hxx>
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
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_CopyTool.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_CopyControl.hxx>
#include <IFSelect_Modifier.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_Messenger.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_GeneralModifier.hxx>
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
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SelectDeduct.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_ShareOut.hxx>
#include <IFSelect_Dispatch.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_PacketList.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_TypedValue.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_Signature.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_TypedValue.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_IntParam.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_Selection.hxx>
#include <IFSelect_Dispatch.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ShareOut.hxx>
#include <Interface_CheckIterator.hxx>
#include <IFSelect_ShareOutResult.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_CopyControl.hxx>
#include <IFSelect_Transformer.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_TypedValue.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_ListEditor.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_Dispatch.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_Modifier.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_Signature.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_IntParam.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_Editor.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ListEditor.hxx>
#include <Message_Messenger.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SelectPointed.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_AppliedModifiers.hxx>
#include <Interface_HGraph.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <Interface_Graph.hxx>

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
// ./opencascade/IFSelect_TSeqOfSelection.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_SequenceOfGeneralModifier.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_SequenceOfAppliedModifiers.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_TSeqOfDispatch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/IFSelect_SequenceOfInterfaceModel.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IFSelect(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IFSelect"));


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

// classes

    // default constructor
    register_default_constructor<IFSelect , shared_ptr<IFSelect>>(m,"IFSelect");

    static_cast<py::class_<IFSelect , shared_ptr<IFSelect> >>(m.attr("IFSelect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Activator ,opencascade::handle<IFSelect_Activator>,Py_IFSelect_Activator , Standard_Transient>>(m.attr("IFSelect_Activator"))
    // constructors
    // custom constructors
    // methods
        .def("Do",
             (IFSelect_ReturnStatus (IFSelect_Activator::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_Activator::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) >(&IFSelect_Activator::Do),
             R"#(Tries to execute a Command Line. <number> is the number of the command for this Activator. It Must forecast to record the result of the execution, for need of Undo-Redo Must Returns : 0 for a void command (not to be recorded), 1 if execution OK, -1 if command incorrect, -2 if error on execution)#"  , py::arg("number"),  py::arg("pilot"))
        .def("Help",
             (Standard_CString (IFSelect_Activator::*)( const Standard_Integer ) const) static_cast<Standard_CString (IFSelect_Activator::*)( const Standard_Integer ) const>(&IFSelect_Activator::Help),
             R"#(Sends a short help message for a given command identified by it number for this Activator (must take one line max))#"  , py::arg("number"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Activator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Activator::*)() const>(&IFSelect_Activator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Activator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_AppliedModifiers ,opencascade::handle<IFSelect_AppliedModifiers> , Standard_Transient>>(m.attr("IFSelect_AppliedModifiers"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_AppliedModifiers::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_AppliedModifiers::*)() const>(&IFSelect_AppliedModifiers::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_AppliedModifiers::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ContextModif , shared_ptr<IFSelect_ContextModif> >>(m.attr("IFSelect_ContextModif"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ContextWrite , shared_ptr<IFSelect_ContextWrite> >>(m.attr("IFSelect_ContextWrite"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Dispatch ,opencascade::handle<IFSelect_Dispatch>,Py_IFSelect_Dispatch , Standard_Transient>>(m.attr("IFSelect_Dispatch"))
    // constructors
    // custom constructors
    // methods
        .def("CanHaveRemainder",
             (Standard_Boolean (IFSelect_Dispatch::*)() const) static_cast<Standard_Boolean (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::CanHaveRemainder),
             R"#(Returns True if a Dispatch can have a Remainder, i.e. if its criterium can let entities apart. It is a potential answer, remainder can be empty at run-time even if answer is True. (to attach a RemainderFromDispatch Selection is not allowed if answer is True). Default answer given here is False (can be redefined))#" )
        .def("LimitedMax",
             (Standard_Boolean (IFSelect_Dispatch::*)( const Standard_Integer , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_Dispatch::*)( const Standard_Integer , Standard_Integer & ) const>(&IFSelect_Dispatch::LimitedMax),
             R"#(Returns True if a Dispatch generates a count of Packets always less than or equal to a maximum value : it can be computed from the total count of Entities to be dispatched : <nbent>. If answer is False, no limited maximum is expected for account If answer is True, expected maximum is given in argument <max> Default answer given here is False (can be redefined))#"  , py::arg("nbent"),  py::arg("max"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_Dispatch::*)() const) static_cast<TCollection_AsciiString (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::Label),
             R"#(Returns a text which defines the way a Dispatch produces packets (which will become files) from its Input)#" )
        .def("Packets",
             (void (IFSelect_Dispatch::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const) static_cast<void (IFSelect_Dispatch::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const>(&IFSelect_Dispatch::Packets),
             R"#(Returns the list of produced Packets into argument <pack>. Each Packet corresponds to a Part, the Entities listed are the Roots given by the Selection. Input is given as a Graph. Thus, to create a file from a packet, it suffices to take the entities listed in a Part of Packets (that is, a Packet) without worrying about Shared entities This method can raise an Exception if data are not coherent)#"  , py::arg("G"),  py::arg("packs"))
        .def("Remainder",
             (Interface_EntityIterator (IFSelect_Dispatch::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_Dispatch::*)( const Interface_Graph & ) const>(&IFSelect_Dispatch::Remainder),
             R"#(Returns Remainder which is a set of Entities. Can be empty. Default evaluation is empty (has to be redefined if CanHaveRemainder is redefined to return True).)#"  , py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Dispatch::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Dispatch::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_EditForm ,opencascade::handle<IFSelect_EditForm> , Standard_Transient>>(m.attr("IFSelect_EditForm"))
    // constructors
    // custom constructors
    // methods
        .def("LoadData",
             (Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_EditForm::LoadData),
             R"#(Loads modifications to data Default uses Editor. Can be redefined Remark that <ent> and/or <model> may be null, according to the kind of Editor. Shortcuts are available for these cases, but they finally call LoadData (hence, just ignore non-used args))#"  , py::arg("ent"),  py::arg("model"))
        .def("Recognize",
             (Standard_Boolean (IFSelect_EditForm::*)() const) static_cast<Standard_Boolean (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::Recognize),
             R"#(Tells if this EditForm can work with its Editor and its actual Data (Entity and Model) Default uses Editor. Can be redefined)#" )
        .def("ApplyData",
             (Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_EditForm::ApplyData),
             R"#(Applies modifications to data Default uses Editor. Can be redefined)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_EditForm::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_EditForm::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Editor ,opencascade::handle<IFSelect_Editor>,Py_IFSelect_Editor , Standard_Transient>>(m.attr("IFSelect_Editor"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_Editor::*)() const) static_cast<TCollection_AsciiString (IFSelect_Editor::*)() const>(&IFSelect_Editor::Label),
             R"#(Returns the specific label)#" )
        .def("Form",
             (opencascade::handle<IFSelect_EditForm> (IFSelect_Editor::*)( const Standard_Boolean , const Standard_Boolean ) const) static_cast<opencascade::handle<IFSelect_EditForm> (IFSelect_Editor::*)( const Standard_Boolean , const Standard_Boolean ) const>(&IFSelect_Editor::Form),
             R"#(Builds and Returns an EditForm, empty (no data yet) Can be redefined to return a specific type of EditForm)#"  , py::arg("readonly"),  py::arg("undoable")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Recognize",
             (Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & ) const) static_cast<Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & ) const>(&IFSelect_Editor::Recognize),
             R"#(Tells if this Editor can work on this EditForm and its content (model, entity ?))#"  , py::arg("form"))
        .def("StringValue",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const>(&IFSelect_Editor::StringValue),
             R"#(Returns the value of an EditForm, for a given item (if not a list. for a list, a Null String may be returned))#"  , py::arg("form"),  py::arg("num"))
        .def("ListEditor",
             (opencascade::handle<IFSelect_ListEditor> (IFSelect_Editor::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_ListEditor> (IFSelect_Editor::*)( const Standard_Integer ) const>(&IFSelect_Editor::ListEditor),
             R"#(Returns a ListEditor for a parameter which is a List Default returns a basic ListEditor for a List, a Null Handle if <num> is not for a List. Can be redefined)#"  , py::arg("num"))
        .def("ListValue",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const>(&IFSelect_Editor::ListValue),
             R"#(Returns the value of an EditForm as a List, for a given item If not a list, a Null Handle should be returned Default returns a Null Handle, because many Editors have no list to edit. To be redefined as required)#"  , py::arg("form"),  py::arg("num"))
        .def("Load",
             (Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_Editor::Load),
             R"#(Loads original values from some data, to an EditForm Remark: <ent> may be Null, this means all <model> is concerned Also <model> may be Null, if no context applies for <ent> And both <ent> and <model> may be Null, for a full static editor)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("Update",
             (Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) const) static_cast<Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) const>(&IFSelect_Editor::Update),
             R"#(Updates the EditForm when a parameter is modified I.E. default does nothing, can be redefined, as follows : Returns True when done (even if does nothing), False in case of refuse (for instance, if the new value is not suitable) <num> is the rank of the parameter for the EDITOR itself <enforce> True means that protected parameters can be touched)#"  , py::arg("form"),  py::arg("num"),  py::arg("newval"),  py::arg("enforce"))
        .def("UpdateList",
             (Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & , const Standard_Boolean ) const) static_cast<Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & , const Standard_Boolean ) const>(&IFSelect_Editor::UpdateList),
             R"#(Acts as Update, but when the value is a list)#"  , py::arg("form"),  py::arg("num"),  py::arg("newlist"),  py::arg("enforce"))
        .def("Apply",
             (Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_Editor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_Editor::Apply),
             R"#(Applies modified values of the EditForm with some data Remark: <ent> may be Null, this means all <model> is concerned Also <model> may be Null, if no context applies for <ent> And both <ent> and <model> may be Null, for a full static editor)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Editor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Editor::*)() const>(&IFSelect_Editor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Editor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<IFSelect_Functions , shared_ptr<IFSelect_Functions>>(m,"IFSelect_Functions");

    static_cast<py::class_<IFSelect_Functions , shared_ptr<IFSelect_Functions> >>(m.attr("IFSelect_Functions"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_GeneralModifier ,opencascade::handle<IFSelect_GeneralModifier>,Py_IFSelect_GeneralModifier , Standard_Transient>>(m.attr("IFSelect_GeneralModifier"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_GeneralModifier::*)() const) static_cast<TCollection_AsciiString (IFSelect_GeneralModifier::*)() const>(&IFSelect_GeneralModifier::Label),
             R"#(Returns a short text which defines the operation performed)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_GeneralModifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_GeneralModifier::*)() const>(&IFSelect_GeneralModifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_GeneralModifier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_HSeqOfSelection ,opencascade::handle<IFSelect_HSeqOfSelection> , IFSelect_TSeqOfSelection, Standard_Transient>>(m.attr("IFSelect_HSeqOfSelection"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<IFSelect_Selection> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const IFSelect_TSeqOfSelection & (IFSelect_HSeqOfSelection::*)() const) static_cast<const IFSelect_TSeqOfSelection & (IFSelect_HSeqOfSelection::*)() const>(&IFSelect_HSeqOfSelection::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (IFSelect_HSeqOfSelection::*)(  const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_HSeqOfSelection::*)(  const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_HSeqOfSelection::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (IFSelect_HSeqOfSelection::*)( NCollection_Sequence<opencascade::handle<IFSelect_Selection> > & ) ) static_cast<void (IFSelect_HSeqOfSelection::*)( NCollection_Sequence<opencascade::handle<IFSelect_Selection> > & ) >(&IFSelect_HSeqOfSelection::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (IFSelect_TSeqOfSelection & (IFSelect_HSeqOfSelection::*)() ) static_cast<IFSelect_TSeqOfSelection & (IFSelect_HSeqOfSelection::*)() >(&IFSelect_HSeqOfSelection::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_HSeqOfSelection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_HSeqOfSelection::*)() const>(&IFSelect_HSeqOfSelection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_HSeqOfSelection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_HSeqOfSelection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_IntParam ,opencascade::handle<IFSelect_IntParam> , Standard_Transient>>(m.attr("IFSelect_IntParam"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_IntParam::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_IntParam::*)() const>(&IFSelect_IntParam::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_IntParam::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ListEditor ,opencascade::handle<IFSelect_ListEditor> , Standard_Transient>>(m.attr("IFSelect_ListEditor"))
    // constructors
    // custom constructors
    // methods
        .def("LoadEdited",
             (Standard_Boolean (IFSelect_ListEditor::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) ) static_cast<Standard_Boolean (IFSelect_ListEditor::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) >(&IFSelect_ListEditor::LoadEdited),
             R"#(Loads a new list to replace the older one, in once ! By default (can be redefined) checks the length of the list and the value of each item according to the def Items are all recorded as Modified)#"  , py::arg("list"))
        .def("SetValue",
             (Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_ListEditor::SetValue),
             R"#(Sets a new value for the item <num> (in edited list) <val> may be a Null Handle, then the value will be cleared but not removed Returns True when done. False if <num> is out of range or if <val> does not satisfy the definition)#"  , py::arg("num"),  py::arg("val"))
        .def("AddValue",
             (Standard_Boolean (IFSelect_ListEditor::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ListEditor::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_Integer ) >(&IFSelect_ListEditor::AddValue),
             R"#(Adds a new item. By default appends (at the end of the list) Can insert before a given rank <num>, if positive Returns True when done. False if MaxLength may be overpassed or if <val> does not satisfy the definition)#"  , py::arg("val"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("Remove",
             (Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer , const Standard_Integer ) >(&IFSelect_ListEditor::Remove),
             R"#(Removes items from the list By default removes one item. Else, count given by <howmany> Remove from rank <num> included. By default, from the end Returns True when done, False (and does not work) if case of out of range of if <howmany> is greater than current length)#"  , py::arg("num")=static_cast<const Standard_Integer>(0),  py::arg("howmany")=static_cast<const Standard_Integer>(1))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ListEditor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ListEditor::*)() const>(&IFSelect_ListEditor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ListEditor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ModelCopier ,opencascade::handle<IFSelect_ModelCopier> , Standard_Transient>>(m.attr("IFSelect_ModelCopier"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ModelCopier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ModelCopier::*)() const>(&IFSelect_ModelCopier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ModelCopier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_PacketList ,opencascade::handle<IFSelect_PacketList> , Standard_Transient>>(m.attr("IFSelect_PacketList"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_PacketList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_PacketList::*)() const>(&IFSelect_PacketList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_PacketList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Selection ,opencascade::handle<IFSelect_Selection>,Py_IFSelect_Selection , Standard_Transient>>(m.attr("IFSelect_Selection"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_Selection::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_Selection::*)( const Interface_Graph & ) const>(&IFSelect_Selection::RootResult),
             R"#(Returns the list of selected entities, computed from Input given as a Graph. Specific to each class of Selection Note that uniqueness of each entity is not required here This method can raise an exception as necessary)#"  , py::arg("G"))
        .def("CompleteResult",
             (Interface_EntityIterator (IFSelect_Selection::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_Selection::*)( const Interface_Graph & ) const>(&IFSelect_Selection::CompleteResult),
             R"#(Returns the list of entities involved by a Selection, i.e. UniqueResult plus the shared entities (directly or not))#"  , py::arg("G"))
        .def("FillIterator",
             (void (IFSelect_Selection::*)( IFSelect_SelectionIterator & ) const) static_cast<void (IFSelect_Selection::*)( IFSelect_SelectionIterator & ) const>(&IFSelect_Selection::FillIterator),
             R"#(Puts in an Iterator the Selections from which "me" depends (there can be zero, or one, or a list). Specific to each class of Selection)#"  , py::arg("iter"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_Selection::*)() const) static_cast<TCollection_AsciiString (IFSelect_Selection::*)() const>(&IFSelect_Selection::Label),
             R"#(Returns a text which defines the criterium applied by a Selection (can be used to be printed, displayed ...) Specific to each class)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Selection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Selection::*)() const>(&IFSelect_Selection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Selection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectionIterator , shared_ptr<IFSelect_SelectionIterator> >>(m.attr("IFSelect_SelectionIterator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SessionDumper ,opencascade::handle<IFSelect_SessionDumper>,Py_IFSelect_SessionDumper , Standard_Transient>>(m.attr("IFSelect_SessionDumper"))
    // constructors
    // custom constructors
    // methods
        .def("WriteOwn",
             (Standard_Boolean (IFSelect_SessionDumper::*)( IFSelect_SessionFile & , const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_SessionDumper::*)( IFSelect_SessionFile & , const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_SessionDumper::WriteOwn),
             R"#(Writes the Own Parameters of a given Item, if it forecast to manage its Type. Returns True if it has recognized the Type of the Item (in this case, it is assumed to have written the Own Parameters if there are some), False else : in that case, SessionFile will try another SessionDumper in the Library. WriteOwn can use these methods from SessionFile : SendVoid, SendItem, SendText, and if necessary, WorkSession.)#"  , py::arg("file"),  py::arg("item"))
        .def("ReadOwn",
             (Standard_Boolean (IFSelect_SessionDumper::*)( IFSelect_SessionFile & , const TCollection_AsciiString & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_SessionDumper::*)( IFSelect_SessionFile & , const TCollection_AsciiString & , opencascade::handle<Standard_Transient> & ) const>(&IFSelect_SessionDumper::ReadOwn),
             R"#(Recognizes a Type (given as <type>) then Creates an Item of this Type with the Own Parameter, as required. Returns True if it has recognized the Type (in this case, it is assumed to have created the Item, returned as <item>), False else : in that case, SessionFile will try another SessionDumper in the Library. ReadOwn can use these methods from SessionFile to access Own Parameters : NbOwnParams, IsVoid, IsText, TextValue, ItemValue)#"  , py::arg("file"),  py::arg("type"),  py::arg("item"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SessionDumper::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SessionDumper::*)() const>(&IFSelect_SessionDumper::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SessionDumper::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SessionFile , shared_ptr<IFSelect_SessionFile> >>(m.attr("IFSelect_SessionFile"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ShareOut ,opencascade::handle<IFSelect_ShareOut> , Standard_Transient>>(m.attr("IFSelect_ShareOut"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ShareOut::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ShareOut::*)() const>(&IFSelect_ShareOut::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ShareOut::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ShareOutResult , shared_ptr<IFSelect_ShareOutResult> >>(m.attr("IFSelect_ShareOutResult"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Signature ,opencascade::handle<IFSelect_Signature>,Py_IFSelect_Signature , Interface_SignType>>(m.attr("IFSelect_Signature"))
    // constructors
    // custom constructors
    // methods
        .def("Name",
             (Standard_CString (IFSelect_Signature::*)() const) static_cast<Standard_CString (IFSelect_Signature::*)() const>(&IFSelect_Signature::Name),
             R"#(Returns an identification of the Signature (a word), given at initialization time Returns the Signature for a Transient object. It is specific of each sub-class of Signature. For a Null Handle, it should provide "" It can work with the model which contains the entity)#" )
        .def("Matches",
             (Standard_Boolean (IFSelect_Signature::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const) static_cast<Standard_Boolean (IFSelect_Signature::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const>(&IFSelect_Signature::Matches),
             R"#(Tells if the value for <ent> in <model> matches a text, with a criterium <exact>. The default definition calls MatchValue Can be redefined)#"  , py::arg("ent"),  py::arg("model"),  py::arg("text"),  py::arg("exact"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Signature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Signature::*)() const>(&IFSelect_Signature::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Signature::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignatureList ,opencascade::handle<IFSelect_SignatureList> , Standard_Transient>>(m.attr("IFSelect_SignatureList"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (IFSelect_SignatureList::*)() ) static_cast<void (IFSelect_SignatureList::*)() >(&IFSelect_SignatureList::Clear),
             R"#(None)#" )
        .def("Name",
             (Standard_CString (IFSelect_SignatureList::*)() const) static_cast<Standard_CString (IFSelect_SignatureList::*)() const>(&IFSelect_SignatureList::Name),
             R"#(Returns the recorded Name. Remark : default is "..." (no SetName called))#" )
        .def("PrintCount",
             (void (IFSelect_SignatureList::*)( const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IFSelect_SignatureList::*)( const opencascade::handle<Message_Messenger> & ) const>(&IFSelect_SignatureList::PrintCount),
             R"#(Prints the counts of items (not the list))#"  , py::arg("S"))
        .def("PrintList",
             (void (IFSelect_SignatureList::*)( const opencascade::handle<Message_Messenger> & , const opencascade::handle<Interface_InterfaceModel> & , const IFSelect_PrintCount ) const) static_cast<void (IFSelect_SignatureList::*)( const opencascade::handle<Message_Messenger> & , const opencascade::handle<Interface_InterfaceModel> & , const IFSelect_PrintCount ) const>(&IFSelect_SignatureList::PrintList),
             R"#(Prints the lists of items, if they are present (else, prints a message "no list available") Uses <model> to determine for each entity to be listed, its number, and its specific identifier (by PrintLabel) <mod> gives a mode for printing : - CountByItem : just count (as PrintCount) - ShortByItem : minimum i.e. count plus 5 first entity numbers - ShortByItem(D) complete list of entity numbers (0: "Global") - EntitiesByItem : list of (entity number/PrintLabel from the model) other modes are ignored)#"  , py::arg("S"),  py::arg("model"),  py::arg("mod")=static_cast<const IFSelect_PrintCount>(IFSelect_ListByItem))
        .def("PrintSum",
             (void (IFSelect_SignatureList::*)( const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IFSelect_SignatureList::*)( const opencascade::handle<Message_Messenger> & ) const>(&IFSelect_SignatureList::PrintSum),
             R"#(Prints a summary Item which has the greatest count of entities For items which are numeric values : their count, maximum, minimum values, cumul, average)#"  , py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignatureList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignatureList::*)() const>(&IFSelect_SignatureList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignatureList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Transformer ,opencascade::handle<IFSelect_Transformer>,Py_IFSelect_Transformer , Standard_Transient>>(m.attr("IFSelect_Transformer"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (IFSelect_Transformer::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_Transformer::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_Transformer::Perform),
             R"#(Performs a Transformation (defined by each sub-class) : <G> gives the input data (especially the starting model) and can be used for queries (by Selections, etc...) <protocol> allows to work with General Services as necessary (it applies to input data) If the change corresponds to a conversion to a new protocol, see also the method ChangeProtocol <checks> stores produced checks messages if any <newmod> gives the result of the transformation : - if it is Null (i.e. has not been affected), the transformation has been made on the spot, it is assumed to cause no change to the graph of dependances - if it equates the starting Model, it has been transformed on the spot (possibiliy some entities were replaced inside it) - if it is new, it corresponds to a new data set which replaces the starting one)#"  , py::arg("G"),  py::arg("protocol"),  py::arg("checks"),  py::arg("newmod"))
        .def("ChangeProtocol",
             (Standard_Boolean (IFSelect_Transformer::*)( opencascade::handle<Interface_Protocol> & ) const) static_cast<Standard_Boolean (IFSelect_Transformer::*)( opencascade::handle<Interface_Protocol> & ) const>(&IFSelect_Transformer::ChangeProtocol),
             R"#(This methods allows to declare that the Protocol applied to the new Model has changed. It applies to the last call to Perform.)#"  , py::arg("newproto"))
        .def("Updated",
             (Standard_Boolean (IFSelect_Transformer::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_Transformer::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&IFSelect_Transformer::Updated),
             R"#(This method allows to know what happened to a starting entity after the last Perform. If <entfrom> (from starting model) has one and only one known item which corresponds in the new produced model, this method must return True and fill the argument <entto>. Else, it returns False.)#"  , py::arg("entfrom"),  py::arg("entto"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_Transformer::*)() const) static_cast<TCollection_AsciiString (IFSelect_Transformer::*)() const>(&IFSelect_Transformer::Label),
             R"#(Returns a text which defines the way a Transformer works (to identify the transformation it performs))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Transformer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Transformer::*)() const>(&IFSelect_Transformer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Transformer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_WorkLibrary ,opencascade::handle<IFSelect_WorkLibrary>,Py_IFSelect_WorkLibrary , Standard_Transient>>(m.attr("IFSelect_WorkLibrary"))
    // constructors
    // custom constructors
    // methods
        .def("ReadFile",
             (Standard_Integer (IFSelect_WorkLibrary::*)( const Standard_CString , opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & ) const) static_cast<Standard_Integer (IFSelect_WorkLibrary::*)( const Standard_CString , opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & ) const>(&IFSelect_WorkLibrary::ReadFile),
             R"#(Gives the way to Read a File and transfer it to a Model <mod> is the resulting Model, which has to be created by this method. In case of error, <mod> must be returned Null Return value is a status with free values. Simply, 0 is for "Execution OK" The Protocol can be used to work (e.g. create the Model, read and recognize the Entities))#"  , py::arg("name"),  py::arg("model"),  py::arg("protocol"))
        .def("WriteFile",
             (Standard_Boolean (IFSelect_WorkLibrary::*)( IFSelect_ContextWrite & ) const) static_cast<Standard_Boolean (IFSelect_WorkLibrary::*)( IFSelect_ContextWrite & ) const>(&IFSelect_WorkLibrary::WriteFile),
             R"#(Gives the way to Write a File from a Model. <ctx> contains all necessary informations : the model, the protocol, the file name, and the list of File Modifiers to be applied, also with restricted list of selected entities for each one, if required. In return, it brings the produced check-list)#"  , py::arg("ctx"))
        .def("CopyModel",
             (Standard_Boolean (IFSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_InterfaceModel> & , const Interface_EntityIterator & , Interface_CopyTool & ) const) static_cast<Standard_Boolean (IFSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_InterfaceModel> & , const Interface_EntityIterator & , Interface_CopyTool & ) const>(&IFSelect_WorkLibrary::CopyModel),
             R"#(Performs the copy of entities from an original model to a new one. It must also copy headers if any. Returns True when done. The provided default works by copying the individual entities designated in the list, by using the general service class CopyTool. It can be redefined for a norm which, either implements Copy by another way (do not forget to Bind each copied result with its original entity in TC) and returns True, or does not know how to copy and returns False)#"  , py::arg("original"),  py::arg("newmodel"),  py::arg("list"),  py::arg("TC"))
        .def("DumpEntity",
             (void (IFSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const) static_cast<void (IFSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & , const Standard_Integer ) const>(&IFSelect_WorkLibrary::DumpEntity),
             R"#(Gives the way of dumping an entity under a form comprehensive for each norm. <model> helps to identify, number ... entities. <level> is to be interpreted for each norm (because of the formats which can be very different))#"  , py::arg("model"),  py::arg("protocol"),  py::arg("entity"),  py::arg("S"),  py::arg("level"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_WorkLibrary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_WorkLibrary::*)() const>(&IFSelect_WorkLibrary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_WorkLibrary::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_WorkSession ,opencascade::handle<IFSelect_WorkSession> , Standard_Transient>>(m.attr("IFSelect_WorkSession"))
    // constructors
    // custom constructors
    // methods
        .def("ErrorHandle",
             (Standard_Boolean (IFSelect_WorkSession::*)() const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::ErrorHandle),
             R"#(Returns the Error Handler status)#" )
        .def("ShareOut",
             (const opencascade::handle<IFSelect_ShareOut> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<IFSelect_ShareOut> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::ShareOut),
             R"#(Returns the ShareOut defined at creation time)#" )
        .def("SetModeStat",
             (void (IFSelect_WorkSession::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Boolean ) >(&IFSelect_WorkSession::SetModeStat),
             R"#(Set value of mode responsible for precence of selections after loading If mode set to true that different selections will be accessible after loading else selections will be not accessible after loading( for economy memory in applicatios))#"  , py::arg("theMode"))
        .def("GetModeStat",
             (Standard_Boolean (IFSelect_WorkSession::*)() const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::GetModeStat),
             R"#(Return value of mode defining of filling selection during loading)#" )
        .def("SetLibrary",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_WorkLibrary> & ) ) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_WorkLibrary> & ) >(&IFSelect_WorkSession::SetLibrary),
             R"#(Sets a WorkLibrary, which will be used to Read and Write Files)#"  , py::arg("theLib"))
        .def("WorkLibrary",
             (const opencascade::handle<IFSelect_WorkLibrary> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<IFSelect_WorkLibrary> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::WorkLibrary),
             R"#(Returns the WorkLibrary. Null Handle if not yet set should be C++ : return const &)#" )
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::Protocol),
             R"#(Returns the Protocol. Null Handle if not yet set should be C++ : return const &)#" )
        .def("HasModel",
             (Standard_Boolean (IFSelect_WorkSession::*)() const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::HasModel),
             R"#(Returns True is a Model has been set)#" )
        .def("Model",
             (const opencascade::handle<Interface_InterfaceModel> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<Interface_InterfaceModel> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::Model),
             R"#(Returns the Model of the Work Session (Null Handle if none) should be C++ : return const &)#" )
        .def("SetLoadedFile",
             (void (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::SetLoadedFile),
             R"#(Stores the filename used for read for setting the model It is cleared by SetModel and ClearData(1))#"  , py::arg("theFileName"))
        .def("LoadedFile",
             (Standard_CString (IFSelect_WorkSession::*)() const) static_cast<Standard_CString (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::LoadedFile),
             R"#(Returns the filename used to load current model empty if unknown)#" )
        .def("ClearData",
             (void (IFSelect_WorkSession::*)( const Standard_Integer ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Integer ) >(&IFSelect_WorkSession::ClearData),
             R"#(Clears recorded data (not the items) according mode : 1 : all Data : Model, Graph, CheckList, + ClearData 4 2 : Graph and CheckList (they will then be recomputed later) 3 : CheckList (it will be recomputed by ComputeCheck) 4 : just content of SelectPointed and Counters Plus 0 : does nothing but called by SetModel ClearData is virtual, hence it can be redefined to clear other data of a specialised Work Session)#"  , py::arg("mode"))
        .def("LastRunCheckList",
             (Interface_CheckIterator (IFSelect_WorkSession::*)() const) static_cast<Interface_CheckIterator (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::LastRunCheckList),
             R"#(Returns the Check List produced by the last execution of either : EvaluateFile(for Split), SendSplit, SendAll, SendSelected, RunTransformer-RunModifier Cleared by SetModel or ClearData(1) The field is protected, hence a specialized WorkSession may fill it)#" )
        .def("ModelCopier",
             (const opencascade::handle<IFSelect_ModelCopier> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<IFSelect_ModelCopier> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::ModelCopier),
             R"#(Gives access to the complete ModelCopier)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_WorkSession::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Act ,opencascade::handle<IFSelect_Act> , IFSelect_Activator>>(m.attr("IFSelect_Act"))
    // constructors
    // custom constructors
    // methods
        .def("Do",
             (IFSelect_ReturnStatus (IFSelect_Act::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_Act::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) >(&IFSelect_Act::Do),
             R"#(Execution of Command Line. remark that <number> is senseless because each Act brings one and only one function)#"  , py::arg("number"),  py::arg("pilot"))
        .def("Help",
             (Standard_CString (IFSelect_Act::*)( const Standard_Integer ) const) static_cast<Standard_CString (IFSelect_Act::*)( const Standard_Integer ) const>(&IFSelect_Act::Help),
             R"#(Short Help for commands : returns the help given to create)#"  , py::arg("number"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Act::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Act::*)() const>(&IFSelect_Act::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Act::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_BasicDumper ,opencascade::handle<IFSelect_BasicDumper> , IFSelect_SessionDumper>>(m.attr("IFSelect_BasicDumper"))
    // constructors
    // custom constructors
    // methods
        .def("WriteOwn",
             (Standard_Boolean (IFSelect_BasicDumper::*)( IFSelect_SessionFile & , const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_BasicDumper::*)( IFSelect_SessionFile & , const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_BasicDumper::WriteOwn),
             R"#(Write the Own Parameters of Types defined in package IFSelect Returns True if <item> has been processed, False else)#"  , py::arg("file"),  py::arg("item"))
        .def("ReadOwn",
             (Standard_Boolean (IFSelect_BasicDumper::*)( IFSelect_SessionFile & , const TCollection_AsciiString & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_BasicDumper::*)( IFSelect_SessionFile & , const TCollection_AsciiString & , opencascade::handle<Standard_Transient> & ) const>(&IFSelect_BasicDumper::ReadOwn),
             R"#(Recognizes and Read Own Parameters for Types of package IFSelect. Returns True if done and <item> created, False else)#"  , py::arg("file"),  py::arg("type"),  py::arg("item"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_BasicDumper::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_BasicDumper::*)() const>(&IFSelect_BasicDumper::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_BasicDumper::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_CheckCounter ,opencascade::handle<IFSelect_CheckCounter> , IFSelect_SignatureList>>(m.attr("IFSelect_CheckCounter"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_CheckCounter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_CheckCounter::*)() const>(&IFSelect_CheckCounter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_CheckCounter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispGlobal ,opencascade::handle<IFSelect_DispGlobal> , IFSelect_Dispatch>>(m.attr("IFSelect_DispGlobal"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_DispGlobal::*)() const) static_cast<TCollection_AsciiString (IFSelect_DispGlobal::*)() const>(&IFSelect_DispGlobal::Label),
             R"#(Returns as Label, "One File for all Input")#" )
        .def("LimitedMax",
             (Standard_Boolean (IFSelect_DispGlobal::*)( const Standard_Integer , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_DispGlobal::*)( const Standard_Integer , Standard_Integer & ) const>(&IFSelect_DispGlobal::LimitedMax),
             R"#(Returns True : maximum equates 1)#"  , py::arg("nbent"),  py::arg("max"))
        .def("Packets",
             (void (IFSelect_DispGlobal::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const) static_cast<void (IFSelect_DispGlobal::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const>(&IFSelect_DispGlobal::Packets),
             R"#(Computes the list of produced Packets. It is made of only ONE Packet, which gets the RootResult from the Final Selection. Remark : the inherited exception raising is never activated.)#"  , py::arg("G"),  py::arg("packs"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_DispGlobal::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_DispGlobal::*)() const>(&IFSelect_DispGlobal::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_DispGlobal::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerCount ,opencascade::handle<IFSelect_DispPerCount> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerCount"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_DispPerCount::*)() const) static_cast<TCollection_AsciiString (IFSelect_DispPerCount::*)() const>(&IFSelect_DispPerCount::Label),
             R"#(Returns as Label, "One File per <count> Input Entities")#" )
        .def("LimitedMax",
             (Standard_Boolean (IFSelect_DispPerCount::*)( const Standard_Integer , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_DispPerCount::*)( const Standard_Integer , Standard_Integer & ) const>(&IFSelect_DispPerCount::LimitedMax),
             R"#(Returns True, maximum count is given as <nbent>)#"  , py::arg("nbent"),  py::arg("max"))
        .def("Packets",
             (void (IFSelect_DispPerCount::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const) static_cast<void (IFSelect_DispPerCount::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const>(&IFSelect_DispPerCount::Packets),
             R"#(Computes the list of produced Packets. It defines Packets in order to have at most <Count> Entities per Packet, Entities are given by RootResult from the Final Selection.)#"  , py::arg("G"),  py::arg("packs"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_DispPerCount::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_DispPerCount::*)() const>(&IFSelect_DispPerCount::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_DispPerCount::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerFiles ,opencascade::handle<IFSelect_DispPerFiles> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerFiles"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_DispPerFiles::*)() const) static_cast<TCollection_AsciiString (IFSelect_DispPerFiles::*)() const>(&IFSelect_DispPerFiles::Label),
             R"#(Returns as Label, "Maximum <count> Files")#" )
        .def("LimitedMax",
             (Standard_Boolean (IFSelect_DispPerFiles::*)( const Standard_Integer , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_DispPerFiles::*)( const Standard_Integer , Standard_Integer & ) const>(&IFSelect_DispPerFiles::LimitedMax),
             R"#(Returns True, maximum count is given as CountValue)#"  , py::arg("nbent"),  py::arg("max"))
        .def("Packets",
             (void (IFSelect_DispPerFiles::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const) static_cast<void (IFSelect_DispPerFiles::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const>(&IFSelect_DispPerFiles::Packets),
             R"#(Computes the list of produced Packets. It defines Packets in order to have <Count> Packets, except if the input count of Entities is lower. Entities are given by RootResult from the Final Selection.)#"  , py::arg("G"),  py::arg("packs"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_DispPerFiles::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_DispPerFiles::*)() const>(&IFSelect_DispPerFiles::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_DispPerFiles::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerOne ,opencascade::handle<IFSelect_DispPerOne> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerOne"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_DispPerOne::*)() const) static_cast<TCollection_AsciiString (IFSelect_DispPerOne::*)() const>(&IFSelect_DispPerOne::Label),
             R"#(Returns as Label, "One File per Input Entity")#" )
        .def("LimitedMax",
             (Standard_Boolean (IFSelect_DispPerOne::*)( const Standard_Integer , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_DispPerOne::*)( const Standard_Integer , Standard_Integer & ) const>(&IFSelect_DispPerOne::LimitedMax),
             R"#(Returns True, maximum limit is given as <nbent>)#"  , py::arg("nbent"),  py::arg("max"))
        .def("Packets",
             (void (IFSelect_DispPerOne::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const) static_cast<void (IFSelect_DispPerOne::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const>(&IFSelect_DispPerOne::Packets),
             R"#(Returns the list of produced Packets. It defines one Packet per Entity given by RootResult from the Final Selection.)#"  , py::arg("G"),  py::arg("packs"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_DispPerOne::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_DispPerOne::*)() const>(&IFSelect_DispPerOne::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_DispPerOne::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerSignature ,opencascade::handle<IFSelect_DispPerSignature> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerSignature"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_DispPerSignature::*)() const) static_cast<TCollection_AsciiString (IFSelect_DispPerSignature::*)() const>(&IFSelect_DispPerSignature::Label),
             R"#(Returns as Label, "One File per Signature <name>")#" )
        .def("LimitedMax",
             (Standard_Boolean (IFSelect_DispPerSignature::*)( const Standard_Integer , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_DispPerSignature::*)( const Standard_Integer , Standard_Integer & ) const>(&IFSelect_DispPerSignature::LimitedMax),
             R"#(Returns True, maximum count is given as <nbent>)#"  , py::arg("nbent"),  py::arg("max"))
        .def("Packets",
             (void (IFSelect_DispPerSignature::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const) static_cast<void (IFSelect_DispPerSignature::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const>(&IFSelect_DispPerSignature::Packets),
             R"#(Computes the list of produced Packets. It defines Packets from the SignCounter, which sirts the input Entities per Signature (specific of the SignCounter).)#"  , py::arg("G"),  py::arg("packs"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_DispPerSignature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_DispPerSignature::*)() const>(&IFSelect_DispPerSignature::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_DispPerSignature::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Modifier ,opencascade::handle<IFSelect_Modifier>,Py_IFSelect_Modifier , IFSelect_GeneralModifier>>(m.attr("IFSelect_Modifier"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (IFSelect_Modifier::*)( IFSelect_ContextModif & , const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & ) const) static_cast<void (IFSelect_Modifier::*)( IFSelect_ContextModif & , const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & ) const>(&IFSelect_Modifier::Perform),
             R"#(This deferred method defines the action specific to each class of Modifier. It is called by a ModelCopier, once the Model generated and filled. ModelCopier has already checked the criteria (Dispatch, Model Rank, Selection) before calling it.)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("protocol"),  py::arg("TC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Modifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Modifier::*)() const>(&IFSelect_Modifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Modifier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ParamEditor ,opencascade::handle<IFSelect_ParamEditor> , IFSelect_Editor>>(m.attr("IFSelect_ParamEditor"))
    // constructors
    // custom constructors
    // methods
        .def("Label",
             (TCollection_AsciiString (IFSelect_ParamEditor::*)() const) static_cast<TCollection_AsciiString (IFSelect_ParamEditor::*)() const>(&IFSelect_ParamEditor::Label),
             R"#(None)#" )
        .def("Recognize",
             (Standard_Boolean (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & ) const) static_cast<Standard_Boolean (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & ) const>(&IFSelect_ParamEditor::Recognize),
             R"#(None)#"  , py::arg("form"))
        .def("StringValue",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & , const Standard_Integer ) const>(&IFSelect_ParamEditor::StringValue),
             R"#(None)#"  , py::arg("form"),  py::arg("num"))
        .def("Load",
             (Standard_Boolean (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_ParamEditor::Load),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("Apply",
             (Standard_Boolean (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_ParamEditor::*)( const opencascade::handle<IFSelect_EditForm> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_ParamEditor::Apply),
             R"#(None)#"  , py::arg("form"),  py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ParamEditor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ParamEditor::*)() const>(&IFSelect_ParamEditor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ParamEditor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectBase ,opencascade::handle<IFSelect_SelectBase>,Py_IFSelect_SelectBase , IFSelect_Selection>>(m.attr("IFSelect_SelectBase"))
    // constructors
    // custom constructors
    // methods
        .def("FillIterator",
             (void (IFSelect_SelectBase::*)( IFSelect_SelectionIterator & ) const) static_cast<void (IFSelect_SelectBase::*)( IFSelect_SelectionIterator & ) const>(&IFSelect_SelectBase::FillIterator),
             R"#(Puts in an Iterator the Selections from which "me" depends This list is empty for all SelectBase type Selections)#"  , py::arg("iter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectBase::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectBase::*)() const>(&IFSelect_SelectBase::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectBase::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectCombine ,opencascade::handle<IFSelect_SelectCombine>,Py_IFSelect_SelectCombine , IFSelect_Selection>>(m.attr("IFSelect_SelectCombine"))
    // constructors
    // custom constructors
    // methods
        .def("FillIterator",
             (void (IFSelect_SelectCombine::*)( IFSelect_SelectionIterator & ) const) static_cast<void (IFSelect_SelectCombine::*)( IFSelect_SelectionIterator & ) const>(&IFSelect_SelectCombine::FillIterator),
             R"#(Puts in an Iterator the Selections from which "me" depends That is to say, the list of Input Selections)#"  , py::arg("iter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectCombine::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectCombine::*)() const>(&IFSelect_SelectCombine::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectCombine::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectControl ,opencascade::handle<IFSelect_SelectControl>,Py_IFSelect_SelectControl , IFSelect_Selection>>(m.attr("IFSelect_SelectControl"))
    // constructors
    // custom constructors
    // methods
        .def("FillIterator",
             (void (IFSelect_SelectControl::*)( IFSelect_SelectionIterator & ) const) static_cast<void (IFSelect_SelectControl::*)( IFSelect_SelectionIterator & ) const>(&IFSelect_SelectControl::FillIterator),
             R"#(Puts in an Iterator the Selections from which "me" depends That is to say, the list of Input Selections)#"  , py::arg("iter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectControl::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectControl::*)() const>(&IFSelect_SelectControl::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectControl::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectDeduct ,opencascade::handle<IFSelect_SelectDeduct>,Py_IFSelect_SelectDeduct , IFSelect_Selection>>(m.attr("IFSelect_SelectDeduct"))
    // constructors
    // custom constructors
    // methods
        .def("FillIterator",
             (void (IFSelect_SelectDeduct::*)( IFSelect_SelectionIterator & ) const) static_cast<void (IFSelect_SelectDeduct::*)( IFSelect_SelectionIterator & ) const>(&IFSelect_SelectDeduct::FillIterator),
             R"#(Puts in an Iterator the Selections from which "me" depends This list contains one Selection : the InputSelection)#"  , py::arg("iter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectDeduct::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectDeduct::*)() const>(&IFSelect_SelectDeduct::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectDeduct::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SessionPilot ,opencascade::handle<IFSelect_SessionPilot> , IFSelect_Activator>>(m.attr("IFSelect_SessionPilot"))
    // constructors
    // custom constructors
    // methods
        .def("Do",
             (IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) >(&IFSelect_SessionPilot::Do),
             R"#(Processes specific commands, which are : x or exit for end of session ? or help for help messages xcommand to control command lines (Record Mode, List, Clear, File Output ...) xsource to execute a command file (no nesting allowed), in case of error, source is stopped and keyword recovers xstep is a simple prefix (useful in a wider environment, to avoid conflicts on command names) xset control commands which create items with names)#"  , py::arg("number"),  py::arg("session"))
        .def("Help",
             (Standard_CString (IFSelect_SessionPilot::*)( const Standard_Integer ) const) static_cast<Standard_CString (IFSelect_SessionPilot::*)( const Standard_Integer ) const>(&IFSelect_SessionPilot::Help),
             R"#(Help for specific commands (apart from general command help))#"  , py::arg("number"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SessionPilot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SessionPilot::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignCategory ,opencascade::handle<IFSelect_SignCategory> , IFSelect_Signature>>(m.attr("IFSelect_SignCategory"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_CString (IFSelect_SignCategory::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_CString (IFSelect_SignCategory::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SignCategory::Value),
             R"#(Returns the Signature for a Transient object, as its Category recorded in the model)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignCategory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignCategory::*)() const>(&IFSelect_SignCategory::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignCategory::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignCounter ,opencascade::handle<IFSelect_SignCounter> , IFSelect_SignatureList>>(m.attr("IFSelect_SignCounter"))
    // constructors
    // custom constructors
    // methods
        .def("AddEntity",
             (Standard_Boolean (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_SignCounter::AddEntity),
             R"#(Adds an entity by considering its signature, which is given by call to method AddSign Returns True if added, False if already in the map (and map control status set))#"  , py::arg("ent"),  py::arg("model"))
        .def("AddSign",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_SignCounter::AddSign),
             R"#(Adds an entity (already filtered by Map) with its signature. This signature can be computed with the containing model. Its value is provided by the object Signature given at start, if no Signature is defined, it does nothing.)#"  , py::arg("ent"),  py::arg("model"))
        .def("AddWithGraph",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Interface_Graph & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Interface_Graph & ) >(&IFSelect_SignCounter::AddWithGraph),
             R"#(Adds a list of entities in the context given by the graph Default just call basic AddList Can be redefined to get a signature computed with the graph)#"  , py::arg("list"),  py::arg("graph"))
        .def("Sign",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SignCounter::Sign),
             R"#(Determines and returns the value of the signature for an entity as an HAsciiString. This method works exactly as AddSign, which is optimized)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignCounter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignCounter::*)() const>(&IFSelect_SignCounter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignCounter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignMultiple ,opencascade::handle<IFSelect_SignMultiple> , IFSelect_Signature>>(m.attr("IFSelect_SignMultiple"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_CString (IFSelect_SignMultiple::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_CString (IFSelect_SignMultiple::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SignMultiple::Value),
             R"#(Concatenates the values of sub-signatures, with their tabulations)#"  , py::arg("ent"),  py::arg("model"))
        .def("Matches",
             (Standard_Boolean (IFSelect_SignMultiple::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const) static_cast<Standard_Boolean (IFSelect_SignMultiple::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const>(&IFSelect_SignMultiple::Matches),
             R"#(Specialized Match Rule If <exact> is False, simply checks if at least one sub-item matches If <exact> is True, standard match with Value (i.e. tabulations must be respected))#"  , py::arg("ent"),  py::arg("model"),  py::arg("text"),  py::arg("exact"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignMultiple::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignMultiple::*)() const>(&IFSelect_SignMultiple::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignMultiple::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignType ,opencascade::handle<IFSelect_SignType> , IFSelect_Signature>>(m.attr("IFSelect_SignType"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_CString (IFSelect_SignType::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_CString (IFSelect_SignType::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SignType::Value),
             R"#(Returns the Signature for a Transient object, as its Dynamic Type, with or without package name, according starting option)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignType::*)() const>(&IFSelect_SignType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignValidity ,opencascade::handle<IFSelect_SignValidity> , IFSelect_Signature>>(m.attr("IFSelect_SignValidity"))
    // constructors
    // custom constructors
    // methods
        .def("Value",
             (Standard_CString (IFSelect_SignValidity::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_CString (IFSelect_SignValidity::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SignValidity::Value),
             R"#(Returns the Signature for a Transient object, as a validity deducted from data (reports) stored in the model Calls the class method CVal)#"  , py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignValidity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignValidity::*)() const>(&IFSelect_SignValidity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignValidity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_TransformStandard ,opencascade::handle<IFSelect_TransformStandard> , IFSelect_Transformer>>(m.attr("IFSelect_TransformStandard"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (IFSelect_TransformStandard::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_TransformStandard::Perform),
             R"#(Performs the Standard Transformation, by calling Copy then ApplyModifiers (which can return an error status))#"  , py::arg("G"),  py::arg("protocol"),  py::arg("checks"),  py::arg("newmod"))
        .def("Updated",
             (Standard_Boolean (IFSelect_TransformStandard::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&IFSelect_TransformStandard::Updated),
             R"#(This methods allows to know what happened to a starting entity after the last Perform. It reads result from the map which was filled by Perform.)#"  , py::arg("entfrom"),  py::arg("entto"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_TransformStandard::*)() const) static_cast<TCollection_AsciiString (IFSelect_TransformStandard::*)() const>(&IFSelect_TransformStandard::Label),
             R"#(Returns a text which defines the way a Transformer works : "On the spot edition" or "Standard Copy" followed by "<nn> Modifiers")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_TransformStandard::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_TransformStandard::*)() const>(&IFSelect_TransformStandard::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_TransformStandard::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_GraphCounter ,opencascade::handle<IFSelect_GraphCounter> , IFSelect_SignCounter>>(m.attr("IFSelect_GraphCounter"))
    // constructors
    // custom constructors
    // methods
        .def("AddWithGraph",
             (void (IFSelect_GraphCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Interface_Graph & ) ) static_cast<void (IFSelect_GraphCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Interface_Graph & ) >(&IFSelect_GraphCounter::AddWithGraph),
             R"#(Adds a list of entities in the context given by the graph Default takes the count of entities selected by the applied selection, when it is given each entity of the list Can be redefined)#"  , py::arg("list"),  py::arg("graph"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_GraphCounter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_GraphCounter::*)() const>(&IFSelect_GraphCounter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_GraphCounter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ModifEditForm ,opencascade::handle<IFSelect_ModifEditForm> , IFSelect_Modifier>>(m.attr("IFSelect_ModifEditForm"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (IFSelect_ModifEditForm::*)( IFSelect_ContextModif & , const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & ) const) static_cast<void (IFSelect_ModifEditForm::*)( IFSelect_ContextModif & , const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & ) const>(&IFSelect_ModifEditForm::Perform),
             R"#(Acts by applying an EditForm to entities, selected or all model)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("protocol"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_ModifEditForm::*)() const) static_cast<TCollection_AsciiString (IFSelect_ModifEditForm::*)() const>(&IFSelect_ModifEditForm::Label),
             R"#(Returns Label as "Apply EditForm <+ label of EditForm>")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ModifEditForm::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ModifEditForm::*)() const>(&IFSelect_ModifEditForm::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ModifEditForm::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ModifReorder ,opencascade::handle<IFSelect_ModifReorder> , IFSelect_Modifier>>(m.attr("IFSelect_ModifReorder"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (IFSelect_ModifReorder::*)( IFSelect_ContextModif & , const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & ) const) static_cast<void (IFSelect_ModifReorder::*)( IFSelect_ContextModif & , const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & ) const>(&IFSelect_ModifReorder::Perform),
             R"#(Acts by computing orders (by method All from ShareTool) then forcing them in the model. Remark that selection is ignored : ALL the model is processed in once)#"  , py::arg("ctx"),  py::arg("target"),  py::arg("protocol"),  py::arg("TC"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_ModifReorder::*)() const) static_cast<TCollection_AsciiString (IFSelect_ModifReorder::*)() const>(&IFSelect_ModifReorder::Label),
             R"#(Returns Label as "Reorder, Roots (last or first)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ModifReorder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ModifReorder::*)() const>(&IFSelect_ModifReorder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ModifReorder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectAnyList ,opencascade::handle<IFSelect_SelectAnyList>,Py_IFSelect_SelectAnyList , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectAnyList"))
    // constructors
    // custom constructors
    // methods
        .def("KeepInputEntity",
             (void (IFSelect_SelectAnyList::*)( Interface_EntityIterator & ) const) static_cast<void (IFSelect_SelectAnyList::*)( Interface_EntityIterator & ) const>(&IFSelect_SelectAnyList::KeepInputEntity),
             R"#(Keeps Input Entity, as having required type. It works by keeping in <iter>, only suitable Entities (SelectType can be used). Called by RootResult (which waits for ONE ENTITY MAX))#"  , py::arg("iter"))
        .def("NbItems",
             (Standard_Integer (IFSelect_SelectAnyList::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (IFSelect_SelectAnyList::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_SelectAnyList::NbItems),
             R"#(Returns count of Items in the list in the Entity <ent> If <ent> has not required type, returned value must be Zero)#"  , py::arg("ent"))
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectAnyList::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectAnyList::*)( const Interface_Graph & ) const>(&IFSelect_SelectAnyList::RootResult),
             R"#(Returns the list of selected entities (list of entities complying with rank criterium) Error if the input list has more than one Item)#"  , py::arg("G"))
        .def("FillResult",
             (void (IFSelect_SelectAnyList::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (IFSelect_SelectAnyList::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&IFSelect_SelectAnyList::FillResult),
             R"#(Puts into <res>, the sub-entities of the list, from n1 to n2 included. Remark that adequation with Entity's type and length of list has already been made at this stage Called by RootResult)#"  , py::arg("n1"),  py::arg("n2"),  py::arg("ent"),  py::arg("res"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectAnyList::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::Label),
             R"#(Returns a text defining the criterium : "Componants of List " then Specific List Label, then, following cases : " From .. Until .." or "From .." or "Until .." or "Rank no .." Specific type is given by deferred method ListLabel)#" )
        .def("ListLabel",
             (TCollection_AsciiString (IFSelect_SelectAnyList::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::ListLabel),
             R"#(Returns the specific label for the list, which is included as a part of Label)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectAnyList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectAnyList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectDiff ,opencascade::handle<IFSelect_SelectDiff> , IFSelect_SelectControl>>(m.attr("IFSelect_SelectDiff"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectDiff::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectDiff::*)( const Interface_Graph & ) const>(&IFSelect_SelectDiff::RootResult),
             R"#(Returns the list of selected entities : they are the Entities gotten from the Main Input but not from the Diff Input)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectDiff::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectDiff::*)() const>(&IFSelect_SelectDiff::Label),
             R"#(Returns a text defining the criterium : "Difference")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectDiff::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectDiff::*)() const>(&IFSelect_SelectDiff::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectDiff::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectEntityNumber ,opencascade::handle<IFSelect_SelectEntityNumber> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectEntityNumber"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectEntityNumber::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectEntityNumber::*)( const Interface_Graph & ) const>(&IFSelect_SelectEntityNumber::RootResult),
             R"#(Returns the list of selected entities : the Entity having the specified Number (this result assures naturally uniqueness))#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectEntityNumber::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectEntityNumber::*)() const>(&IFSelect_SelectEntityNumber::Label),
             R"#(Returns a text defining the criterium : "Entity Number ...")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectEntityNumber::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectEntityNumber::*)() const>(&IFSelect_SelectEntityNumber::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectEntityNumber::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectExplore ,opencascade::handle<IFSelect_SelectExplore>,Py_IFSelect_SelectExplore , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectExplore"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectExplore::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectExplore::*)( const Interface_Graph & ) const>(&IFSelect_SelectExplore::RootResult),
             R"#(Returns the list of selected entities. Works by calling the method Explore on each input entity : it can be rejected, taken for output, or to explore. If the maximum level has not yet been attained, or if no max level is specified, entities to be explored are themselves used as if they were input)#"  , py::arg("G"))
        .def("Explore",
             (Standard_Boolean (IFSelect_SelectExplore::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const) static_cast<Standard_Boolean (IFSelect_SelectExplore::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const>(&IFSelect_SelectExplore::Explore),
             R"#(Analyses and, if required, Explores an entity, as follows : The explored list starts as empty, it has to be filled by this method. If it returns False, <ent> is rejected for result (this is to be used only as safety) If it returns True and <explored> remains empty, <ent> is taken itself for result, not explored If it returns True and <explored> is not empty, the content of this list is considered : If maximum level is attained, it is taken for result Else (or no max), each of its entity will be itself explored)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectExplore::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectExplore::*)() const>(&IFSelect_SelectExplore::Label),
             R"#(Returns a text saying "(Recursive)" or "(Level nn)" plus specific criterium returned by ExploreLabel (see below))#" )
        .def("ExploreLabel",
             (TCollection_AsciiString (IFSelect_SelectExplore::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectExplore::*)() const>(&IFSelect_SelectExplore::ExploreLabel),
             R"#(Returns a text defining the way of exploration)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectExplore::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectExplore::*)() const>(&IFSelect_SelectExplore::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectExplore::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectExtract ,opencascade::handle<IFSelect_SelectExtract>,Py_IFSelect_SelectExtract , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectExtract"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectExtract::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectExtract::*)( const Interface_Graph & ) const>(&IFSelect_SelectExtract::RootResult),
             R"#(Returns the list of selected entities. Works by calling the method Sort on each input Entity : the Entity is kept as output if Sort returns the same value as Direct status)#"  , py::arg("G"))
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectExtract::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectExtract::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectExtract::Sort),
             R"#(Returns True for an Entity if it satisfies the Sort criterium It receives : - <rank>, the rank of the Entity in the Iteration, - <ent> , the Entity itself, and - <model>, the Starting Model Hence, the Entity to check is "model->Value(num)" (but an InterfaceModel allows other checks) This method is specific to each class of SelectExtract)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("SortInGraph",
             (Standard_Boolean (IFSelect_SelectExtract::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) const) static_cast<Standard_Boolean (IFSelect_SelectExtract::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) const>(&IFSelect_SelectExtract::SortInGraph),
             R"#(Works as Sort but works on the Graph Default directly calls Sort, but it can be redefined If SortInGraph is redefined, Sort should be defined even if not called (to avoid deferred methods in a final class))#"  , py::arg("rank"),  py::arg("ent"),  py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectExtract::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectExtract::*)() const>(&IFSelect_SelectExtract::Label),
             R"#(Returns a text saying "Picked" or "Removed", plus the specific criterium returned by ExtractLabel (see below))#" )
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectExtract::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectExtract::*)() const>(&IFSelect_SelectExtract::ExtractLabel),
             R"#(Returns a text defining the criterium for extraction)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectExtract::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectExtract::*)() const>(&IFSelect_SelectExtract::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectExtract::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectIntersection ,opencascade::handle<IFSelect_SelectIntersection> , IFSelect_SelectCombine>>(m.attr("IFSelect_SelectIntersection"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectIntersection::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectIntersection::*)( const Interface_Graph & ) const>(&IFSelect_SelectIntersection::RootResult),
             R"#(Returns the list of selected Entities, which is the common part of results from all input selections. Uniqueness is guaranteed.)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectIntersection::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectIntersection::*)() const>(&IFSelect_SelectIntersection::Label),
             R"#(Returns a text defining the criterium : "Intersection (AND)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectIntersection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectIntersection::*)() const>(&IFSelect_SelectIntersection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectIntersection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectModelEntities ,opencascade::handle<IFSelect_SelectModelEntities> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectModelEntities"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectModelEntities::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectModelEntities::*)( const Interface_Graph & ) const>(&IFSelect_SelectModelEntities::RootResult),
             R"#(Returns the list of selected entities : the Entities of the Model (note that this result assures naturally uniqueness))#"  , py::arg("G"))
        .def("CompleteResult",
             (Interface_EntityIterator (IFSelect_SelectModelEntities::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectModelEntities::*)( const Interface_Graph & ) const>(&IFSelect_SelectModelEntities::CompleteResult),
             R"#(The complete list of Entities (including shared ones) ... is exactly identical to RootResults in this case)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectModelEntities::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectModelEntities::*)() const>(&IFSelect_SelectModelEntities::Label),
             R"#(Returns a text defining the criterium : "Model Entities")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectModelEntities::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectModelEntities::*)() const>(&IFSelect_SelectModelEntities::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectModelEntities::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectModelRoots ,opencascade::handle<IFSelect_SelectModelRoots> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectModelRoots"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectModelRoots::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectModelRoots::*)( const Interface_Graph & ) const>(&IFSelect_SelectModelRoots::RootResult),
             R"#(Returns the list of selected entities : the Roots of the Model (note that this result assures naturally uniqueness))#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectModelRoots::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectModelRoots::*)() const>(&IFSelect_SelectModelRoots::Label),
             R"#(Returns a text defining the criterium : "Model Roots")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectModelRoots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectModelRoots::*)() const>(&IFSelect_SelectModelRoots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectModelRoots::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectPointed ,opencascade::handle<IFSelect_SelectPointed> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectPointed"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectPointed::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectPointed::*)( const Interface_Graph & ) const>(&IFSelect_SelectPointed::RootResult),
             R"#(Returns the list of selected items. Only the selected entities which are present in the graph are given (this result assures uniqueness).)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectPointed::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectPointed::*)() const>(&IFSelect_SelectPointed::Label),
             R"#(Returns a text which identifies the type of selection made. It is "Pointed Entities")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectPointed::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectPointed::*)() const>(&IFSelect_SelectPointed::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectPointed::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectShared ,opencascade::handle<IFSelect_SelectShared> , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectShared"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectShared::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectShared::*)( const Interface_Graph & ) const>(&IFSelect_SelectShared::RootResult),
             R"#(Returns the list of selected entities (list of entities shared by those of input list))#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectShared::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectShared::*)() const>(&IFSelect_SelectShared::Label),
             R"#(Returns a text defining the criterium : "Shared (one level)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectShared::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectShared::*)() const>(&IFSelect_SelectShared::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectShared::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSharing ,opencascade::handle<IFSelect_SelectSharing> , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectSharing"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectSharing::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectSharing::*)( const Interface_Graph & ) const>(&IFSelect_SelectSharing::RootResult),
             R"#(Returns the list of selected entities (list of entities which share (level one) those of input list))#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectSharing::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectSharing::*)() const>(&IFSelect_SelectSharing::Label),
             R"#(Returns a text defining the criterium : "Sharing (one level)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectSharing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectSharing::*)() const>(&IFSelect_SelectSharing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectSharing::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSuite ,opencascade::handle<IFSelect_SelectSuite> , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectSuite"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectSuite::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectSuite::*)( const Interface_Graph & ) const>(&IFSelect_SelectSuite::RootResult),
             R"#(Returns the list of selected entities To do this, once InputResult has been taken (if Input or Alternate has been defined, else the first Item gives it) : this result is set as alternate input for the first item, which computes its result : this result is set as alternate input for the second item, etc...)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectSuite::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectSuite::*)() const>(&IFSelect_SelectSuite::Label),
             R"#(Returns the Label Either it has been defined by SetLabel, or it will give "Suite of nn Selections")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectSuite::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectSuite::*)() const>(&IFSelect_SelectSuite::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectSuite::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectUnion ,opencascade::handle<IFSelect_SelectUnion> , IFSelect_SelectCombine>>(m.attr("IFSelect_SelectUnion"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectUnion::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectUnion::*)( const Interface_Graph & ) const>(&IFSelect_SelectUnion::RootResult),
             R"#(Returns the list of selected Entities, which is the addition result from all input selections. Uniqueness is guaranteed.)#"  , py::arg("G"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_SelectUnion::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectUnion::*)() const>(&IFSelect_SelectUnion::Label),
             R"#(Returns a text defining the criterium : "Union (OR)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectUnion::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectUnion::*)() const>(&IFSelect_SelectUnion::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectUnion::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignAncestor ,opencascade::handle<IFSelect_SignAncestor> , IFSelect_SignType>>(m.attr("IFSelect_SignAncestor"))
    // constructors
    // custom constructors
    // methods
        .def("Matches",
             (Standard_Boolean (IFSelect_SignAncestor::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const) static_cast<Standard_Boolean (IFSelect_SignAncestor::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const>(&IFSelect_SignAncestor::Matches),
             R"#(None)#"  , py::arg("ent"),  py::arg("model"),  py::arg("text"),  py::arg("exact"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignAncestor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignAncestor::*)() const>(&IFSelect_SignAncestor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignAncestor::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectAnyType ,opencascade::handle<IFSelect_SelectAnyType>,Py_IFSelect_SelectAnyType , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectAnyType"))
    // constructors
    // custom constructors
    // methods
        .def("TypeForMatch",
             (opencascade::handle<Standard_Type> (IFSelect_SelectAnyType::*)() const) static_cast<opencascade::handle<Standard_Type> (IFSelect_SelectAnyType::*)() const>(&IFSelect_SelectAnyType::TypeForMatch),
             R"#(Returns the Type which has to be matched for select)#" )
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectAnyType::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectAnyType::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectAnyType::Sort),
             R"#(Returns True for an Entity (model->Value(num)) which is kind of the choosen type, given by the method TypeForMatch. Criterium is IsKind.)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectAnyType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectAnyType::*)() const>(&IFSelect_SelectAnyType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectAnyType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectErrorEntities ,opencascade::handle<IFSelect_SelectErrorEntities> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectErrorEntities"))
    // constructors
    // custom constructors
    // methods
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectErrorEntities::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectErrorEntities::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectErrorEntities::Sort),
             R"#(Returns True for an Entity which is qualified as "Error", i.e. if <model> explicitly knows <ent> (through its Number) as Erroneous)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectErrorEntities::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectErrorEntities::*)() const>(&IFSelect_SelectErrorEntities::ExtractLabel),
             R"#(Returns a text defining the criterium : "Error Entities")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectErrorEntities::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectErrorEntities::*)() const>(&IFSelect_SelectErrorEntities::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectErrorEntities::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectFlag ,opencascade::handle<IFSelect_SelectFlag> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectFlag"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectFlag::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectFlag::*)( const Interface_Graph & ) const>(&IFSelect_SelectFlag::RootResult),
             R"#(Returns the list of selected entities. It is redefined to work on the graph itself (not queried by sort))#"  , py::arg("G"))
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectFlag::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectFlag::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectFlag::Sort),
             R"#(Returns always False because RootResult has done the work)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectFlag::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectFlag::*)() const>(&IFSelect_SelectFlag::ExtractLabel),
             R"#(Returns a text defining the criterium, includes the flag name)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectFlag::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectFlag::*)() const>(&IFSelect_SelectFlag::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectFlag::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectInList ,opencascade::handle<IFSelect_SelectInList>,Py_IFSelect_SelectInList , IFSelect_SelectAnyList>>(m.attr("IFSelect_SelectInList"))
    // constructors
    // custom constructors
    // methods
        .def("ListedEntity",
             (opencascade::handle<Standard_Transient> (IFSelect_SelectInList::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_SelectInList::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_SelectInList::ListedEntity),
             R"#(Returns an Entity, given its rank in the list)#"  , py::arg("num"),  py::arg("ent"))
        .def("FillResult",
             (void (IFSelect_SelectInList::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const) static_cast<void (IFSelect_SelectInList::*)( const Standard_Integer , const Standard_Integer , const opencascade::handle<Standard_Transient> & , Interface_EntityIterator & ) const>(&IFSelect_SelectInList::FillResult),
             R"#(Puts into the result, the sub-entities of the list, from n1 to n2 included. Remark that adequation with Entity's type and length of list has already been made at this stage Called by RootResult; calls ListedEntity (see below))#"  , py::arg("n1"),  py::arg("n2"),  py::arg("ent"),  py::arg("result"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectInList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectInList::*)() const>(&IFSelect_SelectInList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectInList::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectRange ,opencascade::handle<IFSelect_SelectRange> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectRange"))
    // constructors
    // custom constructors
    // methods
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectRange::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectRange::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectRange::Sort),
             R"#(Returns True for an Entity of which occurence number in the iteration is inside the selected Range (considers <rank>))#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectRange::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::ExtractLabel),
             R"#(Returns a text defining the criterium : following cases, " From .. Until .." or "From .." or "Until .." or "Rank no ..")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectRange::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectRange::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectRootComps ,opencascade::handle<IFSelect_SelectRootComps> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectRootComps"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectRootComps::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectRootComps::*)( const Interface_Graph & ) const>(&IFSelect_SelectRootComps::RootResult),
             R"#(Returns the list of local root strong componants, by one Entity par componant. It is redefined for a purpose of effeciency : calling a Sort routine for each Entity would cost more ressource than to work in once using a Map RootResult takes in account the Direct status)#"  , py::arg("G"))
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectRootComps::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectRootComps::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectRootComps::Sort),
             R"#(Returns always True, because RootResult has done work)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectRootComps::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectRootComps::*)() const>(&IFSelect_SelectRootComps::ExtractLabel),
             R"#(Returns a text defining the criterium : "Local Root Componants")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectRootComps::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectRootComps::*)() const>(&IFSelect_SelectRootComps::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectRootComps::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectRoots ,opencascade::handle<IFSelect_SelectRoots> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectRoots"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectRoots::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectRoots::*)( const Interface_Graph & ) const>(&IFSelect_SelectRoots::RootResult),
             R"#(Returns the list of local roots. It is redefined for a purpose of effeciency : calling a Sort routine for each Entity would cost more ressource than to work in once using a Map RootResult takes in account the Direct status)#"  , py::arg("G"))
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectRoots::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectRoots::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectRoots::Sort),
             R"#(Returns always True, because RootResult has done work)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectRoots::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectRoots::*)() const>(&IFSelect_SelectRoots::ExtractLabel),
             R"#(Returns a text defining the criterium : "Local Root Entities")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectRoots::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectRoots::*)() const>(&IFSelect_SelectRoots::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectRoots::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSent ,opencascade::handle<IFSelect_SelectSent> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectSent"))
    // constructors
    // custom constructors
    // methods
        .def("RootResult",
             (Interface_EntityIterator (IFSelect_SelectSent::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectSent::*)( const Interface_Graph & ) const>(&IFSelect_SelectSent::RootResult),
             R"#(Returns the list of selected entities. It is redefined to work on the graph itself (not queried by sort))#"  , py::arg("G"))
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectSent::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectSent::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectSent::Sort),
             R"#(Returns always False because RootResult has done the work)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectSent::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectSent::*)() const>(&IFSelect_SelectSent::ExtractLabel),
             R"#(Returns a text defining the criterium : query : SentCount = 0 -> "Remaining (non-sent) entities" SentCount = 1, AtLeast = True -> "Sent entities" SentCount = 1, AtLeast = False -> "Sent once (no duplicated)" SentCount = 2, AtLeast = True -> "Sent several times entities" SentCount = 2, AtLeast = False -> "Sent twice entities" SentCount > 2, AtLeast = True -> "Sent at least <count> times entities" SentCount > 2, AtLeast = False -> "Sent <count> times entities")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectSent::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectSent::*)() const>(&IFSelect_SelectSent::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectSent::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSignature ,opencascade::handle<IFSelect_SelectSignature> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectSignature"))
    // constructors
    // custom constructors
    // methods
        .def("SortInGraph",
             (Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) const) static_cast<Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) const>(&IFSelect_SelectSignature::SortInGraph),
             R"#(Returns True for an Entity (model->Value(num)) of which the signature matches the text given as creation time May also work with a Counter from the Graph)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("G"))
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectSignature::Sort),
             R"#(Not called, defined only to remove a deferred method here)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectSignature::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectSignature::*)() const>(&IFSelect_SelectSignature::ExtractLabel),
             R"#(Returns a text defining the criterium. (it refers to the text and exact flag to be matched, and is qualified by the Name provided by the Signature))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectSignature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectSignature::*)() const>(&IFSelect_SelectSignature::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectSignature::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSignedShared ,opencascade::handle<IFSelect_SelectSignedShared> , IFSelect_SelectExplore>>(m.attr("IFSelect_SelectSignedShared"))
    // constructors
    // custom constructors
    // methods
        .def("Explore",
             (Standard_Boolean (IFSelect_SelectSignedShared::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const) static_cast<Standard_Boolean (IFSelect_SelectSignedShared::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const>(&IFSelect_SelectSignedShared::Explore),
             R"#(Explores an entity : its Shared entities <ent> to take if it matches the Signature At level max, filters the result. Else gives all Shareds)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (IFSelect_SelectSignedShared::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectSignedShared::*)() const>(&IFSelect_SelectSignedShared::ExploreLabel),
             R"#(Returns a text defining the criterium. (it refers to the text and exact flag to be matched, and is qualified by the Name provided by the Signature))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectSignedShared::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectSignedShared::*)() const>(&IFSelect_SelectSignedShared::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectSignedShared::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSignedSharing ,opencascade::handle<IFSelect_SelectSignedSharing> , IFSelect_SelectExplore>>(m.attr("IFSelect_SelectSignedSharing"))
    // constructors
    // custom constructors
    // methods
        .def("Explore",
             (Standard_Boolean (IFSelect_SelectSignedSharing::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const) static_cast<Standard_Boolean (IFSelect_SelectSignedSharing::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & , Interface_EntityIterator & ) const>(&IFSelect_SelectSignedSharing::Explore),
             R"#(Explores an entity : its sharing entities <ent> to take if it matches the Signature At level max, filters the result. Else gives all sharings)#"  , py::arg("level"),  py::arg("ent"),  py::arg("G"),  py::arg("explored"))
        .def("ExploreLabel",
             (TCollection_AsciiString (IFSelect_SelectSignedSharing::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectSignedSharing::*)() const>(&IFSelect_SelectSignedSharing::ExploreLabel),
             R"#(Returns a text defining the criterium. (it refers to the text and exact flag to be matched, and is qualified by the Name provided by the Signature))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectSignedSharing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectSignedSharing::*)() const>(&IFSelect_SelectSignedSharing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectSignedSharing::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectUnknownEntities ,opencascade::handle<IFSelect_SelectUnknownEntities> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectUnknownEntities"))
    // constructors
    // custom constructors
    // methods
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectUnknownEntities::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectUnknownEntities::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectUnknownEntities::Sort),
             R"#(Returns True for an Entity which is qualified as "Unknown", i.e. if <model> known <ent> (through its Number) as Unknown)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectUnknownEntities::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectUnknownEntities::*)() const>(&IFSelect_SelectUnknownEntities::ExtractLabel),
             R"#(Returns a text defining the criterium : "Recognized Entities")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectUnknownEntities::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectUnknownEntities::*)() const>(&IFSelect_SelectUnknownEntities::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectUnknownEntities::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectIncorrectEntities ,opencascade::handle<IFSelect_SelectIncorrectEntities> , IFSelect_SelectFlag>>(m.attr("IFSelect_SelectIncorrectEntities"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectIncorrectEntities::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectIncorrectEntities::*)() const>(&IFSelect_SelectIncorrectEntities::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectIncorrectEntities::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectType ,opencascade::handle<IFSelect_SelectType> , IFSelect_SelectAnyType>>(m.attr("IFSelect_SelectType"))
    // constructors
    // custom constructors
    // methods
        .def("TypeForMatch",
             (opencascade::handle<Standard_Type> (IFSelect_SelectType::*)() const) static_cast<opencascade::handle<Standard_Type> (IFSelect_SelectType::*)() const>(&IFSelect_SelectType::TypeForMatch),
             R"#(Returns the Type to be matched for select : this is the type given at instantiation time)#" )
        .def("ExtractLabel",
             (TCollection_AsciiString (IFSelect_SelectType::*)() const) static_cast<TCollection_AsciiString (IFSelect_SelectType::*)() const>(&IFSelect_SelectType::ExtractLabel),
             R"#(Returns a text defining the criterium. (should by gotten from Type of Entity used for instantiation))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SelectType::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SelectType::*)() const>(&IFSelect_SelectType::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SelectType::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/IFSelect_SelectType.hxx
// ./opencascade/IFSelect_SelectUnknownEntities.hxx
// ./opencascade/IFSelect_SelectionIterator.hxx
// ./opencascade/IFSelect_SelectSuite.hxx
// ./opencascade/IFSelect_TSeqOfSelection.hxx
// ./opencascade/IFSelect_PacketList.hxx
// ./opencascade/IFSelect_Signature.hxx
// ./opencascade/IFSelect_SelectErrorEntities.hxx
// ./opencascade/IFSelect_SequenceOfGeneralModifier.hxx
// ./opencascade/IFSelect_ReturnStatus.hxx
// ./opencascade/IFSelect_SelectInList.hxx
// ./opencascade/IFSelect_SelectRootComps.hxx
// ./opencascade/IFSelect.hxx
// ./opencascade/IFSelect_EditValue.hxx
// ./opencascade/IFSelect_WorkLibrary.hxx
// ./opencascade/IFSelect_PrintCount.hxx
// ./opencascade/IFSelect_SelectCombine.hxx
// ./opencascade/IFSelect_IntParam.hxx
// ./opencascade/IFSelect_SignCounter.hxx
// ./opencascade/IFSelect_SignCategory.hxx
// ./opencascade/IFSelect_AppliedModifiers.hxx
// ./opencascade/IFSelect_TransformStandard.hxx
// ./opencascade/IFSelect_SignatureList.hxx
// ./opencascade/IFSelect_ContextModif.hxx
// ./opencascade/IFSelect_WorkSession.hxx
// ./opencascade/IFSelect_DispPerFiles.hxx
// ./opencascade/IFSelect_SelectExplore.hxx
// ./opencascade/IFSelect_SignAncestor.hxx
// ./opencascade/IFSelect_Act.hxx
// ./opencascade/IFSelect_SignType.hxx
// ./opencascade/IFSelect_SelectIntersection.hxx
// ./opencascade/IFSelect_SequenceOfAppliedModifiers.hxx
// ./opencascade/IFSelect_SelectShared.hxx
// ./opencascade/IFSelect_DispPerCount.hxx
// ./opencascade/IFSelect_SelectControl.hxx
// ./opencascade/IFSelect_SelectExtract.hxx
// ./opencascade/IFSelect_GraphCounter.hxx
// ./opencascade/IFSelect_ShareOutResult.hxx
// ./opencascade/IFSelect_ModifEditForm.hxx
// ./opencascade/IFSelect_ListEditor.hxx
// ./opencascade/IFSelect_Modifier.hxx
// ./opencascade/IFSelect_DispPerOne.hxx
// ./opencascade/IFSelect_SelectSignedSharing.hxx
// ./opencascade/IFSelect_BasicDumper.hxx
// ./opencascade/IFSelect_SelectFlag.hxx
// ./opencascade/IFSelect_SelectModelEntities.hxx
// ./opencascade/IFSelect_ParamEditor.hxx
// ./opencascade/IFSelect_SelectAnyList.hxx
// ./opencascade/IFSelect_Selection.hxx
// ./opencascade/IFSelect_ActFunc.hxx
// ./opencascade/IFSelect_GeneralModifier.hxx
// ./opencascade/IFSelect_PrintFail.hxx
// ./opencascade/IFSelect_ModelCopier.hxx
// ./opencascade/IFSelect_SelectPointed.hxx
// ./opencascade/IFSelect_SelectDiff.hxx
// ./opencascade/IFSelect_Dispatch.hxx
// ./opencascade/IFSelect_SelectBase.hxx
// ./opencascade/IFSelect_HSeqOfSelection.hxx
// ./opencascade/IFSelect_Editor.hxx
// ./opencascade/IFSelect_Functions.hxx
// ./opencascade/IFSelect_RemainMode.hxx
// ./opencascade/IFSelect_Transformer.hxx
// ./opencascade/IFSelect_SelectSharing.hxx
// ./opencascade/IFSelect_ShareOut.hxx
// ./opencascade/IFSelect_SessionDumper.hxx
// ./opencascade/IFSelect_TSeqOfDispatch.hxx
// ./opencascade/IFSelect_SelectSignedShared.hxx
// ./opencascade/IFSelect_SelectUnion.hxx
// ./opencascade/IFSelect_SessionPilot.hxx
// ./opencascade/IFSelect_SignValidity.hxx
// ./opencascade/IFSelect_DispPerSignature.hxx
// ./opencascade/IFSelect_SelectRoots.hxx
// ./opencascade/IFSelect_SelectAnyType.hxx
// ./opencascade/IFSelect_SelectRange.hxx
// ./opencascade/IFSelect_Activator.hxx
// ./opencascade/IFSelect_DispGlobal.hxx
// ./opencascade/IFSelect_EditForm.hxx
// ./opencascade/IFSelect_SequenceOfInterfaceModel.hxx
// ./opencascade/IFSelect_SelectModelRoots.hxx
// ./opencascade/IFSelect_SelectSent.hxx
// ./opencascade/IFSelect_ModifReorder.hxx
// ./opencascade/IFSelect_SelectEntityNumber.hxx
// ./opencascade/IFSelect_SelectDeduct.hxx
// ./opencascade/IFSelect_CheckCounter.hxx
// ./opencascade/IFSelect_SelectSignature.hxx
// ./opencascade/IFSelect_SessionFile.hxx
// ./opencascade/IFSelect_SelectIncorrectEntities.hxx
// ./opencascade/IFSelect_SignMultiple.hxx
// ./opencascade/IFSelect_ContextWrite.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_Selection> >(m,"IFSelect_TSeqOfSelection");
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_GeneralModifier> >(m,"IFSelect_SequenceOfGeneralModifier");
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_AppliedModifiers> >(m,"IFSelect_SequenceOfAppliedModifiers");
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_Dispatch> >(m,"IFSelect_TSeqOfDispatch");
    register_template_NCollection_Sequence<opencascade::handle<Interface_InterfaceModel> >(m,"IFSelect_SequenceOfInterfaceModel");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
