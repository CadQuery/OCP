
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <IFSelect_Selection.hxx>
#include <IFSelect_Dispatch.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_TypedValue.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_TypedValue.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_TypedValue.hxx>
#include <Message_Messenger.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_ListEditor.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_Messenger.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_Editor.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_ListEditor.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_SessionFile.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_CopyControl.hxx>
#include <IFSelect_Transformer.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
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
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_SelectPointed.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_SelectionIterator.hxx>
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
#include <IFSelect_Signature.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_CopyControl.hxx>
#include <IFSelect_Modifier.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_AppliedModifiers.hxx>
#include <Interface_HGraph.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_Modifier.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IFSelect_Selection.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_CopyTool.hxx>
#include <Message_Messenger.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_WorkSession.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <IFSelect_Signature.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_ShareOut.hxx>
#include <IFSelect_Dispatch.hxx>
#include <Interface_InterfaceError.hxx>
#include <IFSelect_PacketList.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_IntParam.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_Signature.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SignCounter.hxx>
#include <Interface_InterfaceError.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_Graph.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <IFSelect_SignCounter.hxx>
#include <IFSelect_ShareOut.hxx>
#include <Interface_CheckIterator.hxx>
#include <IFSelect_ShareOutResult.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <IFSelect_IntParam.hxx>
#include <Standard_DomainError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <IFSelect_WorkSession.hxx>
#include <IFSelect_Dispatch.hxx>
#include <IFSelect_IntParam.hxx>
#include <Standard_OutOfRange.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_InterfaceModel.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_ContextModif.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_CopyTool.hxx>
#include <TCollection_AsciiString.hxx>
#include <IFSelect_SelectDeduct.hxx>
#include <Interface_Graph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <TCollection_AsciiString.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Graph.hxx>
#include <TCollection_AsciiString.hxx>

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
// ./opencascade\IFSelect_SequenceOfAppliedModifiers.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\IFSelect_SequenceOfInterfaceModel.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\IFSelect_TSeqOfDispatch.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\IFSelect_SequenceOfGeneralModifier.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\IFSelect_TSeqOfSelection.hxx
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
        .def_static("SaveSession_s",
                    (Standard_Boolean (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) >(&IFSelect::SaveSession),
                    R"#(Saves the state of a WorkSession from IFSelect, by using a SessionFile from IFSelect. Returns True if Done, False in case of Error on Writing. <file> gives the name of the File to be produced (this avoids to export the class SessionFile).)#"  , py::arg("WS"),  py::arg("file"))
        .def_static("RestoreSession_s",
                    (Standard_Boolean (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) >(&IFSelect::RestoreSession),
                    R"#(Restore the state of a WorkSession from IFSelect, by using a SessionFile from IFSelect. Returns True if Done, False in case of Error on Writing. <file> gives the name of the File to be used (this avoids to export the class SessionFile).)#"  , py::arg("WS"),  py::arg("file"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Activator ,opencascade::handle<IFSelect_Activator>,Py_IFSelect_Activator , Standard_Transient>>(m.attr("IFSelect_Activator"))
    // constructors
    // custom constructors
    // methods
        .def("Add",
             (void (IFSelect_Activator::*)( const Standard_Integer , const Standard_CString ) const) static_cast<void (IFSelect_Activator::*)( const Standard_Integer , const Standard_CString ) const>(&IFSelect_Activator::Add),
             R"#(Allows a self-definition by an Activator of the Commands it processes, call the class method Adding (mode 0))#"  , py::arg("number"),  py::arg("command"))
        .def("AddSet",
             (void (IFSelect_Activator::*)( const Standard_Integer , const Standard_CString ) const) static_cast<void (IFSelect_Activator::*)( const Standard_Integer , const Standard_CString ) const>(&IFSelect_Activator::AddSet),
             R"#(Same as Add but specifies that this command is candidate for xset (creation of items, xset : named items; mode 1))#"  , py::arg("number"),  py::arg("command"))
        .def("Do",
             (IFSelect_ReturnStatus (IFSelect_Activator::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_Activator::*)( const Standard_Integer , const opencascade::handle<IFSelect_SessionPilot> & ) >(&IFSelect_Activator::Do),
             R"#(Tries to execute a Command Line. <number> is the number of the command for this Activator. It Must forecast to record the result of the execution, for need of Undo-Redo Must Returns : 0 for a void command (not to be recorded), 1 if execution OK, -1 if command incorrect, -2 if error on execution)#"  , py::arg("number"),  py::arg("pilot"))
        .def("Help",
             (Standard_CString (IFSelect_Activator::*)( const Standard_Integer ) const) static_cast<Standard_CString (IFSelect_Activator::*)( const Standard_Integer ) const>(&IFSelect_Activator::Help),
             R"#(Sends a short help message for a given command identified by it number for this Activator (must take one line max))#"  , py::arg("number"))
        .def("Group",
             (Standard_CString (IFSelect_Activator::*)() const) static_cast<Standard_CString (IFSelect_Activator::*)() const>(&IFSelect_Activator::Group),
             R"#(None)#" )
        .def("File",
             (Standard_CString (IFSelect_Activator::*)() const) static_cast<Standard_CString (IFSelect_Activator::*)() const>(&IFSelect_Activator::File),
             R"#(None)#" )
        .def("SetForGroup",
             (void (IFSelect_Activator::*)( const Standard_CString , const Standard_CString ) ) static_cast<void (IFSelect_Activator::*)( const Standard_CString , const Standard_CString ) >(&IFSelect_Activator::SetForGroup),
             R"#(Group and SetGroup define a "Group of commands" which correspond to an Activator. Default is "XSTEP" Also a file may be attached)#"  , py::arg("group"),  py::arg("file")=static_cast<const Standard_CString>(""))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Activator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Activator::*)() const>(&IFSelect_Activator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Adding_s",
                    (void (*)( const opencascade::handle<IFSelect_Activator> & , const Standard_Integer , const Standard_CString , const Standard_Integer ) ) static_cast<void (*)( const opencascade::handle<IFSelect_Activator> & , const Standard_Integer , const Standard_CString , const Standard_Integer ) >(&IFSelect_Activator::Adding),
                    R"#(Records, in a Dictionary available for all the Activators, the command title an Activator can process, attached with its number, proper for this Activator <mode> allows to distinguish various execution modes 0: default mode; 1 : for xset)#"  , py::arg("actor"),  py::arg("number"),  py::arg("command"),  py::arg("mode"))
        .def_static("Remove_s",
                    (void (*)( const Standard_CString ) ) static_cast<void (*)( const Standard_CString ) >(&IFSelect_Activator::Remove),
                    R"#(Removes a Command, if it is recorded (else, does nothing))#"  , py::arg("command"))
        .def_static("Select_s",
                    (Standard_Boolean (*)( const Standard_CString , Standard_Integer & , opencascade::handle<IFSelect_Activator> & ) ) static_cast<Standard_Boolean (*)( const Standard_CString , Standard_Integer & , opencascade::handle<IFSelect_Activator> & ) >(&IFSelect_Activator::Select),
                    R"#(Selects, for a Command given by its title, an actor with its command number. Returns True if found, False else)#"  , py::arg("command"),  py::arg("number"),  py::arg("actor"))
        .def_static("Mode_s",
                    (Standard_Integer (*)( const Standard_CString ) ) static_cast<Standard_Integer (*)( const Standard_CString ) >(&IFSelect_Activator::Mode),
                    R"#(Returns mode recorded for a command. -1 if not found)#"  , py::arg("command"))
        .def_static("Commands_s",
                    (opencascade::handle<TColStd_HSequenceOfAsciiString> (*)( const Standard_Integer , const Standard_CString ) ) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (*)( const Standard_Integer , const Standard_CString ) >(&IFSelect_Activator::Commands),
                    R"#(Returns, for a root of command title, the list of possible commands. <mode> : -1 (D) for all commands if <commands> is empty -1 + command : about a Group , >= 0 see Adding By default, it returns the whole list of known commands.)#"  , py::arg("mode")=static_cast<const Standard_Integer>(- 1),  py::arg("command")=static_cast<const Standard_CString>(""))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Activator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Activator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_AppliedModifiers ,opencascade::handle<IFSelect_AppliedModifiers> , Standard_Transient>>(m.attr("IFSelect_AppliedModifiers"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("nbmax"),  py::arg("nbent") )
    // custom constructors
    // methods
        .def("AddModif",
             (Standard_Boolean (IFSelect_AppliedModifiers::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) ) static_cast<Standard_Boolean (IFSelect_AppliedModifiers::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) >(&IFSelect_AppliedModifiers::AddModif),
             R"#(Records a modifier. By default, it is to apply on all a produced file. Further calls to AddNum will restrict this. Returns True if done, False if too many modifiers are already recorded)#"  , py::arg("modif"))
        .def("AddNum",
             (Standard_Boolean (IFSelect_AppliedModifiers::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_AppliedModifiers::*)( const Standard_Integer ) >(&IFSelect_AppliedModifiers::AddNum),
             R"#(Adds a number of entity of the output file to be applied on. If a sequence of AddNum is called after AddModif, this Modifier will be applied on the list of designated entities. Else, it will be applied on all the file Returns True if done, False if no modifier has yet been added)#"  , py::arg("nument"))
        .def("Count",
             (Standard_Integer (IFSelect_AppliedModifiers::*)() const) static_cast<Standard_Integer (IFSelect_AppliedModifiers::*)() const>(&IFSelect_AppliedModifiers::Count),
             R"#(Returns the count of recorded modifiers)#" )
        .def("Item",
             (Standard_Boolean (IFSelect_AppliedModifiers::*)( const Standard_Integer , opencascade::handle<IFSelect_GeneralModifier> & , Standard_Integer & ) ) static_cast<Standard_Boolean (IFSelect_AppliedModifiers::*)( const Standard_Integer , opencascade::handle<IFSelect_GeneralModifier> & , Standard_Integer & ) >(&IFSelect_AppliedModifiers::Item),
             R"#(Returns the description for applied modifier n0 <num> : the modifier itself, and the count of entities to be applied on. If no specific list of number has been defined, returns the total count of entities of the file If this count is zero, then the modifier applies to all the file (see below). Else, the numbers are then queried by calls to ItemNum between 1 and <entcount> Returns True if OK, False if <num> is out of range)#"  , py::arg("num"),  py::arg("modif"),  py::arg("entcount"))
        .def("ItemNum",
             (Standard_Integer (IFSelect_AppliedModifiers::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_AppliedModifiers::*)( const Standard_Integer ) const>(&IFSelect_AppliedModifiers::ItemNum),
             R"#(Returns a numero of entity to be applied on, given its rank in the list. If no list is defined (i.e. for all the file), returns <nument> itself, to give all the entities of the file Returns 0 if <nument> out of range)#"  , py::arg("nument"))
        .def("ItemList",
             (opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_AppliedModifiers::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_AppliedModifiers::*)() const>(&IFSelect_AppliedModifiers::ItemList),
             R"#(Returns the list of entities to be applied on (see Item) as a HSequence (IsForAll produces the complete list of all the entity numbers of the file)#" )
        .def("IsForAll",
             (Standard_Boolean (IFSelect_AppliedModifiers::*)() const) static_cast<Standard_Boolean (IFSelect_AppliedModifiers::*)() const>(&IFSelect_AppliedModifiers::IsForAll),
             R"#(Returns True if the applied modifier queried by last call to Item is to be applied to all the produced file. Else, <entcount> returned by Item gives the count of entity numbers, each one is queried by ItemNum)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_AppliedModifiers::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_AppliedModifiers::*)() const>(&IFSelect_AppliedModifiers::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_AppliedModifiers::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_AppliedModifiers::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ContextModif , shared_ptr<IFSelect_ContextModif> >>(m.attr("IFSelect_ContextModif"))
    // constructors
        .def(py::init< const Interface_Graph &,const Interface_CopyTool &,const Standard_CString >()  , py::arg("graph"),  py::arg("TC"),  py::arg("filename")=static_cast<const Standard_CString>("") )
        .def(py::init< const Interface_Graph &,const Standard_CString >()  , py::arg("graph"),  py::arg("filename")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("Select",
             (void (IFSelect_ContextModif::*)( Interface_EntityIterator & ) ) static_cast<void (IFSelect_ContextModif::*)( Interface_EntityIterator & ) >(&IFSelect_ContextModif::Select),
             R"#(This method requires ContextModif to be applied with a filter. If a ModelModifier is defined with a Selection criterium, the result of this Selection is used as a filter : - if none of its items has been transferred, the modification does not apply at all - else, the Modifier can query for what entities were selected and what are their results - if this method is not called before working, the Modifier has to work on the whole Model)#"  , py::arg("list"))
        .def("OriginalGraph",
             (const Interface_Graph & (IFSelect_ContextModif::*)() const) static_cast<const Interface_Graph & (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::OriginalGraph),
             R"#(Returns the original Graph (compared to OriginalModel, it gives more query capabilitites))#" )
        .def("OriginalModel",
             (opencascade::handle<Interface_InterfaceModel> (IFSelect_ContextModif::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::OriginalModel),
             R"#(Returns the original model)#" )
        .def("SetProtocol",
             (void (IFSelect_ContextModif::*)( const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (IFSelect_ContextModif::*)( const opencascade::handle<Interface_Protocol> & ) >(&IFSelect_ContextModif::SetProtocol),
             R"#(Allows to transmit a Protocol as part of a ContextModif)#"  , py::arg("proto"))
        .def("Protocol",
             (opencascade::handle<Interface_Protocol> (IFSelect_ContextModif::*)() const) static_cast<opencascade::handle<Interface_Protocol> (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::Protocol),
             R"#(Returns the Protocol (Null if not set))#" )
        .def("HasFileName",
             (Standard_Boolean (IFSelect_ContextModif::*)() const) static_cast<Standard_Boolean (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::HasFileName),
             R"#(Returns True if a non empty file name has been defined)#" )
        .def("FileName",
             (Standard_CString (IFSelect_ContextModif::*)() const) static_cast<Standard_CString (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::FileName),
             R"#(Returns File Name (can be empty))#" )
        .def("Control",
             (opencascade::handle<Interface_CopyControl> (IFSelect_ContextModif::*)() const) static_cast<opencascade::handle<Interface_CopyControl> (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::Control),
             R"#(Returns the map for a direct use, if required)#" )
        .def("IsForNone",
             (Standard_Boolean (IFSelect_ContextModif::*)() const) static_cast<Standard_Boolean (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::IsForNone),
             R"#(Returns True if Select has determined that a Modifier may not be run (filter defined and empty))#" )
        .def("IsForAll",
             (Standard_Boolean (IFSelect_ContextModif::*)() const) static_cast<Standard_Boolean (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::IsForAll),
             R"#(Returns True if no filter is defined : a Modifier has to work on all entities of the resulting (target) model)#" )
        .def("IsTransferred",
             (Standard_Boolean (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_ContextModif::IsTransferred),
             R"#(Returns True if a starting item has been transferred)#"  , py::arg("ent"))
        .def("IsSelected",
             (Standard_Boolean (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_ContextModif::IsSelected),
             R"#(Returns True if a starting item has been transferred and selected)#"  , py::arg("ent"))
        .def("SelectedOriginal",
             (Interface_EntityIterator (IFSelect_ContextModif::*)() const) static_cast<Interface_EntityIterator (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::SelectedOriginal),
             R"#(Returns the list of original selected items. See also the iteration)#" )
        .def("SelectedResult",
             (Interface_EntityIterator (IFSelect_ContextModif::*)() const) static_cast<Interface_EntityIterator (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::SelectedResult),
             R"#(Returns the list of resulting counterparts of selected items. See also the iteration)#" )
        .def("SelectedCount",
             (Standard_Integer (IFSelect_ContextModif::*)() const) static_cast<Standard_Integer (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::SelectedCount),
             R"#(Returns the count of selected and transferred items)#" )
        .def("Start",
             (void (IFSelect_ContextModif::*)() ) static_cast<void (IFSelect_ContextModif::*)() >(&IFSelect_ContextModif::Start),
             R"#(Starts an iteration on selected items. It takes into account IsForAll/IsForNone, by really iterating on all selected items.)#" )
        .def("More",
             (Standard_Boolean (IFSelect_ContextModif::*)() const) static_cast<Standard_Boolean (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::More),
             R"#(Returns True until the iteration has finished)#" )
        .def("Next",
             (void (IFSelect_ContextModif::*)() ) static_cast<void (IFSelect_ContextModif::*)() >(&IFSelect_ContextModif::Next),
             R"#(Advances the iteration)#" )
        .def("ValueOriginal",
             (opencascade::handle<Standard_Transient> (IFSelect_ContextModif::*)() const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::ValueOriginal),
             R"#(Returns the current selected item in the original model)#" )
        .def("ValueResult",
             (opencascade::handle<Standard_Transient> (IFSelect_ContextModif::*)() const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::ValueResult),
             R"#(Returns the result counterpart of current selected item (in the target model))#" )
        .def("TraceModifier",
             (void (IFSelect_ContextModif::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) ) static_cast<void (IFSelect_ContextModif::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) >(&IFSelect_ContextModif::TraceModifier),
             R"#(Traces the application of a Modifier. Works with default trace File and Level. Fills the trace if default trace level is at least 1. Traces the Modifier (its Label) and its Selection if there is one (its Label). To be called after Select (because status IsForAll is printed) Worths to trace a global modification. See also Trace below)#"  , py::arg("modif"))
        .def("Trace",
             (void (IFSelect_ContextModif::*)( const Standard_CString ) ) static_cast<void (IFSelect_ContextModif::*)( const Standard_CString ) >(&IFSelect_ContextModif::Trace),
             R"#(Traces the modification of the current entity (see above, ValueOriginal and ValueResult) for default trace level >= 2. To be called on each indivudual entity really modified <mess> is an optionnal additional message)#"  , py::arg("mess")=static_cast<const Standard_CString>(""))
        .def("AddCheck",
             (void (IFSelect_ContextModif::*)( const opencascade::handle<Interface_Check> & ) ) static_cast<void (IFSelect_ContextModif::*)( const opencascade::handle<Interface_Check> & ) >(&IFSelect_ContextModif::AddCheck),
             R"#(Adds a Check to the CheckList. If it is empty, nothing is done If it concerns an Entity from the Original Model (by SetEntity) to which another Check is attached, it is merged to it. Else, it is added or merged as to GlobalCheck.)#"  , py::arg("check"))
        .def("AddWarning",
             (void (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) ) static_cast<void (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) >(&IFSelect_ContextModif::AddWarning),
             R"#(Adds a Warning Message for an Entity from the original Model If <start> is not an Entity from the original model (e.g. the model itself) this message is added to Global Check.)#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddFail",
             (void (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) ) static_cast<void (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) >(&IFSelect_ContextModif::AddFail),
             R"#(Adds a Fail Message for an Entity from the original Model If <start> is not an Entity from the original model (e.g. the model itself) this message is added to Global Check.)#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("CCheck",
             (opencascade::handle<Interface_Check> (IFSelect_ContextModif::*)( const Standard_Integer ) ) static_cast<opencascade::handle<Interface_Check> (IFSelect_ContextModif::*)( const Standard_Integer ) >(&IFSelect_ContextModif::CCheck),
             R"#(Returns a Check given an Entity number (in the original Model) by default a Global Check. Creates it the first time. It can then be acknowledged on the spot, in condition that the caller works by reference ("Interface_Check& check = ..."))#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("CCheck",
             (opencascade::handle<Interface_Check> (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<opencascade::handle<Interface_Check> (IFSelect_ContextModif::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_ContextModif::CCheck),
             R"#(Returns a Check attached to an Entity from the original Model It can then be acknowledged on the spot, in condition that the caller works by reference ("Interface_Check& check = ..."))#"  , py::arg("start"))
        .def("CheckList",
             (Interface_CheckIterator (IFSelect_ContextModif::*)() const) static_cast<Interface_CheckIterator (IFSelect_ContextModif::*)() const>(&IFSelect_ContextModif::CheckList),
             R"#(Returns the complete CheckList)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ContextWrite , shared_ptr<IFSelect_ContextWrite> >>(m.attr("IFSelect_ContextWrite"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> &,const opencascade::handle<IFSelect_AppliedModifiers> &,const Standard_CString >()  , py::arg("model"),  py::arg("proto"),  py::arg("applieds"),  py::arg("filename") )
        .def(py::init< const opencascade::handle<Interface_HGraph> &,const opencascade::handle<Interface_Protocol> &,const opencascade::handle<IFSelect_AppliedModifiers> &,const Standard_CString >()  , py::arg("hgraph"),  py::arg("proto"),  py::arg("applieds"),  py::arg("filename") )
    // custom constructors
    // methods
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (IFSelect_ContextWrite::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::Model),
             R"#(Returns the Model)#" )
        .def("Protocol",
             (opencascade::handle<Interface_Protocol> (IFSelect_ContextWrite::*)() const) static_cast<opencascade::handle<Interface_Protocol> (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::Protocol),
             R"#(Returns the Protocol;)#" )
        .def("FileName",
             (Standard_CString (IFSelect_ContextWrite::*)() const) static_cast<Standard_CString (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::FileName),
             R"#(Returns the File Name)#" )
        .def("AppliedModifiers",
             (opencascade::handle<IFSelect_AppliedModifiers> (IFSelect_ContextWrite::*)() const) static_cast<opencascade::handle<IFSelect_AppliedModifiers> (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::AppliedModifiers),
             R"#(Returns the object AppliedModifiers)#" )
        .def("Graph",
             (const Interface_Graph & (IFSelect_ContextWrite::*)() ) static_cast<const Interface_Graph & (IFSelect_ContextWrite::*)() >(&IFSelect_ContextWrite::Graph),
             R"#(Returns the Graph, either given when created, else created the first time it is queried)#" )
        .def("NbModifiers",
             (Standard_Integer (IFSelect_ContextWrite::*)() const) static_cast<Standard_Integer (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::NbModifiers),
             R"#(Returns the count of recorded File Modifiers)#" )
        .def("SetModifier",
             (Standard_Boolean (IFSelect_ContextWrite::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ContextWrite::*)( const Standard_Integer ) >(&IFSelect_ContextWrite::SetModifier),
             R"#(Sets active the File Modifier n0 <numod> Then, it prepares the list of entities to consider, if any Returns False if <numod> out of range)#"  , py::arg("numod"))
        .def("FileModifier",
             (opencascade::handle<IFSelect_GeneralModifier> (IFSelect_ContextWrite::*)() const) static_cast<opencascade::handle<IFSelect_GeneralModifier> (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::FileModifier),
             R"#(Returns the currently active File Modifier. Cast to be done Null if not properly set : must be test IsNull after casting)#" )
        .def("IsForNone",
             (Standard_Boolean (IFSelect_ContextWrite::*)() const) static_cast<Standard_Boolean (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::IsForNone),
             R"#(Returns True if no modifier is currently set)#" )
        .def("IsForAll",
             (Standard_Boolean (IFSelect_ContextWrite::*)() const) static_cast<Standard_Boolean (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::IsForAll),
             R"#(Returns True if the current modifier is to be applied to the whole model. Else, a restricted list of selected entities is defined, it can be exploited by the File Modifier)#" )
        .def("NbEntities",
             (Standard_Integer (IFSelect_ContextWrite::*)() const) static_cast<Standard_Integer (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::NbEntities),
             R"#(Returns the total count of selected entities)#" )
        .def("Start",
             (void (IFSelect_ContextWrite::*)() ) static_cast<void (IFSelect_ContextWrite::*)() >(&IFSelect_ContextWrite::Start),
             R"#(Starts an iteration on selected items. It takes into account IsForAll/IsForNone, by really iterating on all selected items.)#" )
        .def("More",
             (Standard_Boolean (IFSelect_ContextWrite::*)() const) static_cast<Standard_Boolean (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::More),
             R"#(Returns True until the iteration has finished)#" )
        .def("Next",
             (void (IFSelect_ContextWrite::*)() ) static_cast<void (IFSelect_ContextWrite::*)() >(&IFSelect_ContextWrite::Next),
             R"#(Advances the iteration)#" )
        .def("Value",
             (opencascade::handle<Standard_Transient> (IFSelect_ContextWrite::*)() const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::Value),
             R"#(Returns the current selected entity in the model)#" )
        .def("AddCheck",
             (void (IFSelect_ContextWrite::*)( const opencascade::handle<Interface_Check> & ) ) static_cast<void (IFSelect_ContextWrite::*)( const opencascade::handle<Interface_Check> & ) >(&IFSelect_ContextWrite::AddCheck),
             R"#(Adds a Check to the CheckList. If it is empty, nothing is done If it concerns an Entity from the Model (by SetEntity) to which another Check is attached, it is merged to it. Else, it is added or merged as to GlobalCheck.)#"  , py::arg("check"))
        .def("AddWarning",
             (void (IFSelect_ContextWrite::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) ) static_cast<void (IFSelect_ContextWrite::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) >(&IFSelect_ContextWrite::AddWarning),
             R"#(Adds a Warning Message for an Entity from the Model If <start> is not an Entity from the model (e.g. the model itself) this message is added to Global Check.)#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddFail",
             (void (IFSelect_ContextWrite::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) ) static_cast<void (IFSelect_ContextWrite::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString , const Standard_CString ) >(&IFSelect_ContextWrite::AddFail),
             R"#(Adds a Fail Message for an Entity from the Model If <start> is not an Entity from the model (e.g. the model itself) this message is added to Global Check.)#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("CCheck",
             (opencascade::handle<Interface_Check> (IFSelect_ContextWrite::*)( const Standard_Integer ) ) static_cast<opencascade::handle<Interface_Check> (IFSelect_ContextWrite::*)( const Standard_Integer ) >(&IFSelect_ContextWrite::CCheck),
             R"#(Returns a Check given an Entity number (in the Model) by default a Global Check. Creates it the first time. It can then be acknowledged on the spot, in condition that the caller works by reference ("Interface_Check& check = ..."))#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("CCheck",
             (opencascade::handle<Interface_Check> (IFSelect_ContextWrite::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<opencascade::handle<Interface_Check> (IFSelect_ContextWrite::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_ContextWrite::CCheck),
             R"#(Returns a Check attached to an Entity from the Model It can then be acknowledged on the spot, in condition that the caller works by reference ("Interface_Check& check = ..."))#"  , py::arg("start"))
        .def("CheckList",
             (Interface_CheckIterator (IFSelect_ContextWrite::*)() const) static_cast<Interface_CheckIterator (IFSelect_ContextWrite::*)() const>(&IFSelect_ContextWrite::CheckList),
             R"#(Returns the complete CheckList)#" )
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
        .def("SetRootName",
             (void (IFSelect_Dispatch::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IFSelect_Dispatch::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_Dispatch::SetRootName),
             R"#(Sets a Root Name as an HAsciiString To reset it, give a Null Handle (then, a ShareOut will have to define the Default Root Name))#"  , py::arg("name"))
        .def("HasRootName",
             (Standard_Boolean (IFSelect_Dispatch::*)() const) static_cast<Standard_Boolean (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::HasRootName),
             R"#(Returns True if a specific Root Name has been set (else, the Default Root Name has to be used))#" )
        .def("RootName",
             (const opencascade::handle<TCollection_HAsciiString> & (IFSelect_Dispatch::*)() const) static_cast<const opencascade::handle<TCollection_HAsciiString> & (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::RootName),
             R"#(Returns the Root Name for files produced by this dispatch It is empty if it has not been set or if it has been reset)#" )
        .def("SetFinalSelection",
             (void (IFSelect_Dispatch::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_Dispatch::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_Dispatch::SetFinalSelection),
             R"#(Stores (or Changes) the Final Selection for a Dispatch)#"  , py::arg("sel"))
        .def("FinalSelection",
             (opencascade::handle<IFSelect_Selection> (IFSelect_Dispatch::*)() const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::FinalSelection),
             R"#(Returns the Final Selection of a Dispatch we 'd like : C++ : return const &)#" )
        .def("Selections",
             (IFSelect_SelectionIterator (IFSelect_Dispatch::*)() const) static_cast<IFSelect_SelectionIterator (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::Selections),
             R"#(Returns the complete list of source Selections (starting from FinalSelection))#" )
        .def("CanHaveRemainder",
             (Standard_Boolean (IFSelect_Dispatch::*)() const) static_cast<Standard_Boolean (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::CanHaveRemainder),
             R"#(Returns True if a Dispatch can have a Remainder, i.e. if its criterium can let entities apart. It is a potential answer, remainder can be empty at run-time even if answer is True. (to attach a RemainderFromDispatch Selection is not allowed if answer is True). Default answer given here is False (can be redefined))#" )
        .def("LimitedMax",
             (Standard_Boolean (IFSelect_Dispatch::*)( const Standard_Integer , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_Dispatch::*)( const Standard_Integer , Standard_Integer & ) const>(&IFSelect_Dispatch::LimitedMax),
             R"#(Returns True if a Dispatch generates a count of Packets always less than or equal to a maximum value : it can be computed from the total count of Entities to be dispatched : <nbent>. If answer is False, no limited maximum is expected for account If answer is True, expected maximum is given in argument <max> Default answer given here is False (can be redefined))#"  , py::arg("nbent"),  py::arg("max"))
        .def("Label",
             (TCollection_AsciiString (IFSelect_Dispatch::*)() const) static_cast<TCollection_AsciiString (IFSelect_Dispatch::*)() const>(&IFSelect_Dispatch::Label),
             R"#(Returns a text which defines the way a Dispatch produces packets (which will become files) from its Input)#" )
        .def("GetEntities",
             (Interface_EntityIterator (IFSelect_Dispatch::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_Dispatch::*)( const Interface_Graph & ) const>(&IFSelect_Dispatch::GetEntities),
             R"#(Gets Unique Root Entities from the Final Selection, given an input Graph This the starting step for an Evaluation (Packets - Remainder))#"  , py::arg("G"))
        .def("Packets",
             (void (IFSelect_Dispatch::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const) static_cast<void (IFSelect_Dispatch::*)( const Interface_Graph & , IFGraph_SubPartsIterator & ) const>(&IFSelect_Dispatch::Packets),
             R"#(Returns the list of produced Packets into argument <pack>. Each Packet corresponds to a Part, the Entities listed are the Roots given by the Selection. Input is given as a Graph. Thus, to create a file from a packet, it suffices to take the entities listed in a Part of Packets (that is, a Packet) without worrying about Shared entities This method can raise an Exception if data are not coherent)#"  , py::arg("G"),  py::arg("packs"))
        .def("Packeted",
             (Interface_EntityIterator (IFSelect_Dispatch::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_Dispatch::*)( const Interface_Graph & ) const>(&IFSelect_Dispatch::Packeted),
             R"#(Returns the list of all Input Entities (see GetEntities) which are put in a Packet. That is, Entities listed in GetEntities but not in Remainder (see below). Input is given as a Graph.)#"  , py::arg("G"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Dispatch::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_EditForm ,opencascade::handle<IFSelect_EditForm> , Standard_Transient>>(m.attr("IFSelect_EditForm"))
    // constructors
        .def(py::init< const opencascade::handle<IFSelect_Editor> &,const Standard_Boolean,const Standard_Boolean,const Standard_CString >()  , py::arg("editor"),  py::arg("readonly"),  py::arg("undoable"),  py::arg("label")=static_cast<const Standard_CString>("") )
        .def(py::init< const opencascade::handle<IFSelect_Editor> &, const NCollection_Sequence<Standard_Integer> &,const Standard_Boolean,const Standard_Boolean,const Standard_CString >()  , py::arg("editor"),  py::arg("nums"),  py::arg("readonly"),  py::arg("undoable"),  py::arg("label")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("EditKeepStatus",
             (Standard_Boolean & (IFSelect_EditForm::*)() ) static_cast<Standard_Boolean & (IFSelect_EditForm::*)() >(&IFSelect_EditForm::EditKeepStatus),
             R"#(Returns and may change the keep status on modif It starts as False If it is True, Apply does not clear modification status and the EditForm can be loaded again, modified value remain and may be applied again Remark that ApplyData does not clear the modification status, a call to ClearEdit does)#" )
        .def("Label",
             (Standard_CString (IFSelect_EditForm::*)() const) static_cast<Standard_CString (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::Label),
             R"#(None)#" )
        .def("IsLoaded",
             (Standard_Boolean (IFSelect_EditForm::*)() const) static_cast<Standard_Boolean (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::IsLoaded),
             R"#(Tells if the EditForm is loaded now)#" )
        .def("ClearData",
             (void (IFSelect_EditForm::*)() ) static_cast<void (IFSelect_EditForm::*)() >(&IFSelect_EditForm::ClearData),
             R"#(None)#" )
        .def("SetData",
             (void (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_EditForm::SetData),
             R"#(None)#"  , py::arg("ent"),  py::arg("model"))
        .def("SetEntity",
             (void (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_EditForm::SetEntity),
             R"#(None)#"  , py::arg("ent"))
        .def("SetModel",
             (void (IFSelect_EditForm::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_EditForm::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_EditForm::SetModel),
             R"#(None)#"  , py::arg("model"))
        .def("Entity",
             (opencascade::handle<Standard_Transient> (IFSelect_EditForm::*)() const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::Entity),
             R"#(None)#" )
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (IFSelect_EditForm::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::Model),
             R"#(None)#" )
        .def("Editor",
             (opencascade::handle<IFSelect_Editor> (IFSelect_EditForm::*)() const) static_cast<opencascade::handle<IFSelect_Editor> (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::Editor),
             R"#(None)#" )
        .def("IsComplete",
             (Standard_Boolean (IFSelect_EditForm::*)() const) static_cast<Standard_Boolean (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::IsComplete),
             R"#(Tells if an EditForm is complete or is an extract from Editor)#" )
        .def("NbValues",
             (Standard_Integer (IFSelect_EditForm::*)( const Standard_Boolean ) const) static_cast<Standard_Integer (IFSelect_EditForm::*)( const Standard_Boolean ) const>(&IFSelect_EditForm::NbValues),
             R"#(Returns the count of values <editable> True : count of editable values, i.e. For a complete EditForm, it is given by the Editor Else, it is the length of the extraction map <editable> False : all the values from the Editor)#"  , py::arg("editable"))
        .def("NumberFromRank",
             (Standard_Integer (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::NumberFromRank),
             R"#(Returns the Value Number in the Editor from a given Rank in the EditForm For a complete EditForm, both are equal Else, it is given by the extraction map Returns 0 if <rank> exceeds the count of editable values,)#"  , py::arg("rank"))
        .def("RankFromNumber",
             (Standard_Integer (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::RankFromNumber),
             R"#(Returns the Rank in the EditForm from a given Number of Value for the Editor For a complete EditForm, both are equal Else, it is given by the extraction map Returns 0 if <number> is not forecast to be edited, or is out of range)#"  , py::arg("number"))
        .def("NameNumber",
             (Standard_Integer (IFSelect_EditForm::*)( const Standard_CString ) const) static_cast<Standard_Integer (IFSelect_EditForm::*)( const Standard_CString ) const>(&IFSelect_EditForm::NameNumber),
             R"#(Returns the Value Number in the Editor for a given Name i.e. the true ValueNumber which can be used in various methods of EditForm If it is not complete, for a recorded (in the Editor) but non-loaded name, returns negative value (- number))#"  , py::arg("name"))
        .def("NameRank",
             (Standard_Integer (IFSelect_EditForm::*)( const Standard_CString ) const) static_cast<Standard_Integer (IFSelect_EditForm::*)( const Standard_CString ) const>(&IFSelect_EditForm::NameRank),
             R"#(Returns the Rank of Value in the EditForm for a given Name i.e. if it is not complete, for a recorded (in the Editor) but non-loaded name, returns 0)#"  , py::arg("name"))
        .def("LoadDefault",
             (void (IFSelect_EditForm::*)() ) static_cast<void (IFSelect_EditForm::*)() >(&IFSelect_EditForm::LoadDefault),
             R"#(For a read-write undoable EditForm, loads original values from defaults stored in the Editor)#" )
        .def("LoadData",
             (Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_EditForm::LoadData),
             R"#(Loads modifications to data Default uses Editor. Can be redefined Remark that <ent> and/or <model> may be null, according to the kind of Editor. Shortcuts are available for these cases, but they finally call LoadData (hence, just ignore non-used args))#"  , py::arg("ent"),  py::arg("model"))
        .def("LoadEntity",
             (Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_EditForm::LoadEntity),
             R"#(Shortcut for LoadData when <model> is not used)#"  , py::arg("ent"))
        .def("LoadModel",
             (Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_EditForm::LoadModel),
             R"#(Shortcut for LoadData when only the model is concerned)#"  , py::arg("model"))
        .def("LoadData",
             (Standard_Boolean (IFSelect_EditForm::*)() ) static_cast<Standard_Boolean (IFSelect_EditForm::*)() >(&IFSelect_EditForm::LoadData),
             R"#(Shortcut when both <ent> and <model> are not used (when the Editor works on fully static or global data))#" )
        .def("ListEditor",
             (opencascade::handle<IFSelect_ListEditor> (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_ListEditor> (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::ListEditor),
             R"#(Returns a ListEditor to edit the parameter <num> of the EditForm, if it is a List The Editor created it (by ListEditor) then loads it (by ListValue) For a single parameter, returns a Null Handle ...)#"  , py::arg("num"))
        .def("LoadValue",
             (void (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_EditForm::LoadValue),
             R"#(Loads an original value (single). Called by the Editor only)#"  , py::arg("num"),  py::arg("val"))
        .def("LoadList",
             (void (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) ) static_cast<void (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) >(&IFSelect_EditForm::LoadList),
             R"#(Loads an original value as a list. Called by the Editor only)#"  , py::arg("num"),  py::arg("list"))
        .def("OriginalValue",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::OriginalValue),
             R"#(From an edited value, returns its ... value (original one) Null means that this value is not defined <num> is for the EditForm, not the Editor It is for a single parameter. For a list, gives a Null Handle)#"  , py::arg("num"))
        .def("OriginalList",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::OriginalList),
             R"#(Returns an original value, as a list <num> is for the EditForm, not the Editor For a single parameter, gives a Null Handle)#"  , py::arg("num"))
        .def("EditedValue",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::EditedValue),
             R"#(Returns the Edited (i.e. Modified) Value (string for single) <num> reports to the EditForm If IsModified is False, returns OriginalValue Null with IsModified True : means that this value is not defined or has been removed It is for a single parameter. For a list, gives a Null Handle)#"  , py::arg("num"))
        .def("EditedList",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::EditedList),
             R"#(Returns the Edited Value as a list If IsModified is False, returns OriginalValue Null with IsModified True : means that this value is not defined or has been removed For a single parameter, gives a Null Handle)#"  , py::arg("num"))
        .def("IsModified",
             (Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::IsModified),
             R"#(Tells if a Value (of the EditForm) is modified (directly or through touching by Update))#"  , py::arg("num"))
        .def("IsTouched",
             (Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer ) const>(&IFSelect_EditForm::IsTouched),
             R"#(Tells if a Value (of the EditForm) has been touched, i.e. not modified directly but by the modification of another one (by method Update from the Editor))#"  , py::arg("num"))
        .def("Modify",
             (Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) >(&IFSelect_EditForm::Modify),
             R"#(Gives a new value for the item <num> of the EditForm, if it is a single parameter (for a list, just returns False) Null means to Remove it <enforce> True to overpass Protected or Computed Access Mode Calls the method Update from the Editor, which can touch other parameters (see NbTouched) Returns True if well recorded, False if this value is not allowed Warning : Does not apply immediately : will be applied by the method Apply)#"  , py::arg("num"),  py::arg("newval"),  py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ModifyList",
             (Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<IFSelect_ListEditor> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<IFSelect_ListEditor> & , const Standard_Boolean ) >(&IFSelect_EditForm::ModifyList),
             R"#(Changes the value of an item of the EditForm, if it is a List (else, just returns False) The ListEditor contains the edited values of the list If no edition was recorded, just returns False Calls the method Update from the Editor, which can touch other parameters (see NbTouched) Returns True if well recorded, False if this value is not allowed Warning : Does not apply immediately : will be applied by the method Apply)#"  , py::arg("num"),  py::arg("edited"),  py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ModifyListValue",
             (Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & , const Standard_Boolean ) >(&IFSelect_EditForm::ModifyListValue),
             R"#(As ModifyList but the new value is given as such Creates a ListEditor, Loads it, then calls ModifyList)#"  , py::arg("num"),  py::arg("list"),  py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Touch",
             (Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_EditForm::Touch),
             R"#(Gives a new value computed by the Editor, if another parameter commands the value of <num> It is generally the case for a Computed Parameter for instance Increments the counter of touched parameters Warning : it gives no protection for ReadOnly etc... while it is the internal way of touching parameters Does not work (returns False) if <num> is for a list)#"  , py::arg("num"),  py::arg("newval"))
        .def("TouchList",
             (Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const Standard_Integer , const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) >(&IFSelect_EditForm::TouchList),
             R"#(Acts as Touch but for a list Does not work (returns False) if <num> is for a single param)#"  , py::arg("num"),  py::arg("newlist"))
        .def("ClearEdit",
             (void (IFSelect_EditForm::*)( const Standard_Integer ) ) static_cast<void (IFSelect_EditForm::*)( const Standard_Integer ) >(&IFSelect_EditForm::ClearEdit),
             R"#(Clears modification status : by default all, or one by its numbers (in the Editor))#"  , py::arg("num")=static_cast<const Standard_Integer>(0))
        .def("PrintDefs",
             (void (IFSelect_EditForm::*)( const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IFSelect_EditForm::*)( const opencascade::handle<Message_Messenger> & ) const>(&IFSelect_EditForm::PrintDefs),
             R"#(Prints Definitions, relative to the Editor)#"  , py::arg("S"))
        .def("PrintValues",
             (void (IFSelect_EditForm::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer , const Standard_Boolean , const Standard_Boolean ) const) static_cast<void (IFSelect_EditForm::*)( const opencascade::handle<Message_Messenger> & , const Standard_Integer , const Standard_Boolean , const Standard_Boolean ) const>(&IFSelect_EditForm::PrintValues),
             R"#(Prints Values, according to what and alsolist <names> True : prints Long Names; False : prints Short Names <what> < 0 : prints Original Values (+ flag Modified) <what> > 0 : prints Final Values (+flag Modified) <what> = 0 : prints Modified Values (Original + Edited) <alsolist> False (D) : lists are printed only as their count <alsolist> True : lists are printed for all their items)#"  , py::arg("S"),  py::arg("what"),  py::arg("names"),  py::arg("alsolist")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Apply",
             (Standard_Boolean (IFSelect_EditForm::*)() ) static_cast<Standard_Boolean (IFSelect_EditForm::*)() >(&IFSelect_EditForm::Apply),
             R"#(Applies modifications to own data Calls ApplyData then Clears Status according EditKeepStatus)#" )
        .def("Recognize",
             (Standard_Boolean (IFSelect_EditForm::*)() const) static_cast<Standard_Boolean (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::Recognize),
             R"#(Tells if this EditForm can work with its Editor and its actual Data (Entity and Model) Default uses Editor. Can be redefined)#" )
        .def("ApplyData",
             (Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_EditForm::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_EditForm::ApplyData),
             R"#(Applies modifications to data Default uses Editor. Can be redefined)#"  , py::arg("ent"),  py::arg("model"))
        .def("Undo",
             (Standard_Boolean (IFSelect_EditForm::*)() ) static_cast<Standard_Boolean (IFSelect_EditForm::*)() >(&IFSelect_EditForm::Undo),
             R"#(For an undoable EditForm, Applies ... origibal values ! and clears modified ones Can be run only once)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_EditForm::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_EditForm::*)() const>(&IFSelect_EditForm::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_EditForm::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_EditForm::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Editor ,opencascade::handle<IFSelect_Editor>,Py_IFSelect_Editor , Standard_Transient>>(m.attr("IFSelect_Editor"))
    // constructors
    // custom constructors
    // methods
        .def("SetValue",
             (void (IFSelect_Editor::*)( const Standard_Integer , const opencascade::handle<Interface_TypedValue> & , const Standard_CString , const IFSelect_EditValue ) ) static_cast<void (IFSelect_Editor::*)( const Standard_Integer , const opencascade::handle<Interface_TypedValue> & , const Standard_CString , const IFSelect_EditValue ) >(&IFSelect_Editor::SetValue),
             R"#(Sets a Typed Value for a given ident and short name, with an Edit Mode)#"  , py::arg("num"),  py::arg("typval"),  py::arg("shortname")=static_cast<const Standard_CString>(""),  py::arg("accessmode")=static_cast<const IFSelect_EditValue>(IFSelect_Editable))
        .def("SetList",
             (void (IFSelect_Editor::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IFSelect_Editor::*)( const Standard_Integer , const Standard_Integer ) >(&IFSelect_Editor::SetList),
             R"#(Sets a parameter to be a List max < 0 : not for a list (set when starting) max = 0 : list with no length limit (default for SetList) max > 0 : list limited to <max> items)#"  , py::arg("num"),  py::arg("max")=static_cast<const Standard_Integer>(0))
        .def("NbValues",
             (Standard_Integer (IFSelect_Editor::*)() const) static_cast<Standard_Integer (IFSelect_Editor::*)() const>(&IFSelect_Editor::NbValues),
             R"#(Returns the count of Typed Values)#" )
        .def("TypedValue",
             (opencascade::handle<Interface_TypedValue> (IFSelect_Editor::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_TypedValue> (IFSelect_Editor::*)( const Standard_Integer ) const>(&IFSelect_Editor::TypedValue),
             R"#(Returns a Typed Value from its ident)#"  , py::arg("num"))
        .def("IsList",
             (Standard_Boolean (IFSelect_Editor::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_Editor::*)( const Standard_Integer ) const>(&IFSelect_Editor::IsList),
             R"#(Tells if a parameter is a list)#"  , py::arg("num"))
        .def("MaxList",
             (Standard_Integer (IFSelect_Editor::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_Editor::*)( const Standard_Integer ) const>(&IFSelect_Editor::MaxList),
             R"#(Returns max length allowed for a list = 0 means : list with no limit < 0 means : not a list)#"  , py::arg("num"))
        .def("Name",
             (Standard_CString (IFSelect_Editor::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_CString (IFSelect_Editor::*)( const Standard_Integer , const Standard_Boolean ) const>(&IFSelect_Editor::Name),
             R"#(Returns the name of a Value (complete or short) from its ident Short Name can be empty)#"  , py::arg("num"),  py::arg("isshort")=static_cast<const Standard_Boolean>(Standard_False))
        .def("EditMode",
             (IFSelect_EditValue (IFSelect_Editor::*)( const Standard_Integer ) const) static_cast<IFSelect_EditValue (IFSelect_Editor::*)( const Standard_Integer ) const>(&IFSelect_Editor::EditMode),
             R"#(Returns the edit mode of a Value)#"  , py::arg("num"))
        .def("NameNumber",
             (Standard_Integer (IFSelect_Editor::*)( const Standard_CString ) const) static_cast<Standard_Integer (IFSelect_Editor::*)( const Standard_CString ) const>(&IFSelect_Editor::NameNumber),
             R"#(Returns the number (ident) of a Value, from its name, short or complete. If not found, returns 0)#"  , py::arg("name"))
        .def("PrintNames",
             (void (IFSelect_Editor::*)( const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IFSelect_Editor::*)( const opencascade::handle<Message_Messenger> & ) const>(&IFSelect_Editor::PrintNames),
             R"#(None)#"  , py::arg("S"))
        .def("PrintDefs",
             (void (IFSelect_Editor::*)( const opencascade::handle<Message_Messenger> & , const Standard_Boolean ) const) static_cast<void (IFSelect_Editor::*)( const opencascade::handle<Message_Messenger> & , const Standard_Boolean ) const>(&IFSelect_Editor::PrintDefs),
             R"#(None)#"  , py::arg("S"),  py::arg("labels")=static_cast<const Standard_Boolean>(Standard_False))
        .def("MaxNameLength",
             (Standard_Integer (IFSelect_Editor::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_Editor::*)( const Standard_Integer ) const>(&IFSelect_Editor::MaxNameLength),
             R"#(Returns the MaxLength of, according to what : <what> = -1 : length of short names <what> = 0 : length of complete names <what> = 1 : length of values labels)#"  , py::arg("what"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Editor::get_type_descriptor),
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
        .def_static("GiveEntity_s",
                    (opencascade::handle<Standard_Transient> (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) ) static_cast<opencascade::handle<Standard_Transient> (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) >(&IFSelect_Functions::GiveEntity),
                    R"#(Takes the name of an entity, either as argument, or (if <name> is empty) on keybord, and returns the entity name can be a label or a number (in alphanumeric), it is searched by NumberFromLabel from WorkSession. If <name> doesn't match en entity, a Null Handle is returned)#"  , py::arg("WS"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def_static("GiveEntityNumber_s",
                    (Standard_Integer (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) ) static_cast<Standard_Integer (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString ) >(&IFSelect_Functions::GiveEntityNumber),
                    R"#(Same as GetEntity, but returns the number in the model of the entity. Returns 0 for null handle)#"  , py::arg("WS"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def_static("GiveList_s",
                    (opencascade::handle<TColStd_HSequenceOfTransient> (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString , const Standard_CString ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString , const Standard_CString ) >(&IFSelect_Functions::GiveList),
                    R"#(Computes a List of entities from a WorkSession and two idents, first and second, as follows : if <first> is a Number or Label of an entity : this entity if <first> is the name of a Selection in <WS>, and <second> not defined, the standard result of this Selection if <first> is for a Selection and <second> is defined, the standard result of this selection from the list computed with <second> (an entity or a selection) If <second> is erroneous, it is ignored)#"  , py::arg("WS"),  py::arg("first")=static_cast<const Standard_CString>(""),  py::arg("second")=static_cast<const Standard_CString>(""))
        .def_static("GiveDispatch_s",
                    (opencascade::handle<IFSelect_Dispatch> (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString , const Standard_Boolean ) ) static_cast<opencascade::handle<IFSelect_Dispatch> (*)( const opencascade::handle<IFSelect_WorkSession> & , const Standard_CString , const Standard_Boolean ) >(&IFSelect_Functions::GiveDispatch),
                    R"#(Evaluates and returns a Dispatch, from data of a WorkSession if <mode> is False, searches for exact name of Dispatch in WS Else (D), allows a parameter between brackets : ex.: dispatch_name(parameter) The parameter can be: an integer for DispPerCount or DispPerFiles or the name of a Signature for DispPerSignature Returns Null Handle if not found not well evaluated)#"  , py::arg("WS"),  py::arg("name"),  py::arg("mode")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IFSelect_Functions::Init),
                    R"#(Defines and loads all basic functions (as ActFunc))#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_GeneralModifier ,opencascade::handle<IFSelect_GeneralModifier>,Py_IFSelect_GeneralModifier , Standard_Transient>>(m.attr("IFSelect_GeneralModifier"))
    // constructors
    // custom constructors
    // methods
        .def("MayChangeGraph",
             (Standard_Boolean (IFSelect_GeneralModifier::*)() const) static_cast<Standard_Boolean (IFSelect_GeneralModifier::*)() const>(&IFSelect_GeneralModifier::MayChangeGraph),
             R"#(Returns True if this modifier may change the graph of dependences (aknowledged at creation time))#" )
        .def("SetDispatch",
             (void (IFSelect_GeneralModifier::*)( const opencascade::handle<IFSelect_Dispatch> & ) ) static_cast<void (IFSelect_GeneralModifier::*)( const opencascade::handle<IFSelect_Dispatch> & ) >(&IFSelect_GeneralModifier::SetDispatch),
             R"#(Attaches to a Dispatch. If <disp> is Null, Resets it (to apply the Modifier on every Dispatch))#"  , py::arg("disp"))
        .def("Dispatch",
             (opencascade::handle<IFSelect_Dispatch> (IFSelect_GeneralModifier::*)() const) static_cast<opencascade::handle<IFSelect_Dispatch> (IFSelect_GeneralModifier::*)() const>(&IFSelect_GeneralModifier::Dispatch),
             R"#(Returns the Dispatch to be matched, Null if not set)#" )
        .def("Applies",
             (Standard_Boolean (IFSelect_GeneralModifier::*)( const opencascade::handle<IFSelect_Dispatch> & ) const) static_cast<Standard_Boolean (IFSelect_GeneralModifier::*)( const opencascade::handle<IFSelect_Dispatch> & ) const>(&IFSelect_GeneralModifier::Applies),
             R"#(Returns True if a Model obtained from the Dispatch <disp> is to be treated (apart from the Selection criterium) If Dispatch(me) is Null, returns True. Else, checks <disp>)#"  , py::arg("disp"))
        .def("SetSelection",
             (void (IFSelect_GeneralModifier::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_GeneralModifier::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_GeneralModifier::SetSelection),
             R"#(Sets a Selection : a Model is treated if it contains one or more Entities designated by the Selection)#"  , py::arg("sel"))
        .def("ResetSelection",
             (void (IFSelect_GeneralModifier::*)() ) static_cast<void (IFSelect_GeneralModifier::*)() >(&IFSelect_GeneralModifier::ResetSelection),
             R"#(Resets the Selection : this criterium is not longer active)#" )
        .def("HasSelection",
             (Standard_Boolean (IFSelect_GeneralModifier::*)() const) static_cast<Standard_Boolean (IFSelect_GeneralModifier::*)() const>(&IFSelect_GeneralModifier::HasSelection),
             R"#(Returns True if a Selection is set as an additionnal criterium)#" )
        .def("Selection",
             (opencascade::handle<IFSelect_Selection> (IFSelect_GeneralModifier::*)() const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_GeneralModifier::*)() const>(&IFSelect_GeneralModifier::Selection),
             R"#(Returns the Selection, or a Null Handle if not set)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_GeneralModifier::get_type_descriptor),
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
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetStaticName",
             (void (IFSelect_IntParam::*)( const Standard_CString ) ) static_cast<void (IFSelect_IntParam::*)( const Standard_CString ) >(&IFSelect_IntParam::SetStaticName),
             R"#(Commands this IntParam to be bound to a Static Hence, Value will return the value if this Static if it is set Else, Value works on the locally stored value SetValue also will set the value of the Static This works only for a present static of type integer or enum Else, it is ignored)#"  , py::arg("statname"))
        .def("Value",
             (Standard_Integer (IFSelect_IntParam::*)() const) static_cast<Standard_Integer (IFSelect_IntParam::*)() const>(&IFSelect_IntParam::Value),
             R"#(Reads Integer Value of the IntParam. If a StaticName is defined and the Static is set, looks in priority the value of the static)#" )
        .def("SetValue",
             (void (IFSelect_IntParam::*)( const Standard_Integer ) ) static_cast<void (IFSelect_IntParam::*)( const Standard_Integer ) >(&IFSelect_IntParam::SetValue),
             R"#(Sets a new Integer Value for the IntParam. If a StaticName is defined and the Static is set, also sets the value of the static)#"  , py::arg("val"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_IntParam::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_IntParam::*)() const>(&IFSelect_IntParam::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_IntParam::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_IntParam::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ListEditor ,opencascade::handle<IFSelect_ListEditor> , Standard_Transient>>(m.attr("IFSelect_ListEditor"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Interface_TypedValue> &,const Standard_Integer >()  , py::arg("def"),  py::arg("max")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("LoadModel",
             (void (IFSelect_ListEditor::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_ListEditor::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_ListEditor::LoadModel),
             R"#(Loads a Model. It is used to check items of type Entity(Ident))#"  , py::arg("model"))
        .def("LoadValues",
             (void (IFSelect_ListEditor::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) ) static_cast<void (IFSelect_ListEditor::*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & ) >(&IFSelect_ListEditor::LoadValues),
             R"#(Loads the original values for the list Remark : If its length is mor then MaxLength, editions remain allowed, except Add)#"  , py::arg("vals"))
        .def("SetTouched",
             (void (IFSelect_ListEditor::*)() ) static_cast<void (IFSelect_ListEditor::*)() >(&IFSelect_ListEditor::SetTouched),
             R"#(Declares this ListEditor to have been touched (whatever action))#" )
        .def("ClearEdit",
             (void (IFSelect_ListEditor::*)() ) static_cast<void (IFSelect_ListEditor::*)() >(&IFSelect_ListEditor::ClearEdit),
             R"#(Clears all editions already recorded)#" )
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
        .def("OriginalValues",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_ListEditor::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_ListEditor::*)() const>(&IFSelect_ListEditor::OriginalValues),
             R"#(Returns the value from which the edition started)#" )
        .def("EditedValues",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_ListEditor::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_ListEditor::*)() const>(&IFSelect_ListEditor::EditedValues),
             R"#(Returns the result of the edition)#" )
        .def("NbValues",
             (Standard_Integer (IFSelect_ListEditor::*)( const Standard_Boolean ) const) static_cast<Standard_Integer (IFSelect_ListEditor::*)( const Standard_Boolean ) const>(&IFSelect_ListEditor::NbValues),
             R"#(Returns count of values, edited (D) or original)#"  , py::arg("edited")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Value",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_ListEditor::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_ListEditor::*)( const Standard_Integer , const Standard_Boolean ) const>(&IFSelect_ListEditor::Value),
             R"#(Returns a value given its rank. Edited (D) or Original A Null String means the value is cleared but not removed)#"  , py::arg("num"),  py::arg("edited")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsChanged",
             (Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer ) const>(&IFSelect_ListEditor::IsChanged),
             R"#(Tells if a value (in edited list) has been changed, i.e. either modified-value, or added)#"  , py::arg("num"))
        .def("IsModified",
             (Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer ) const>(&IFSelect_ListEditor::IsModified),
             R"#(Tells if a value (in edited list) has been modified-value (not added))#"  , py::arg("num"))
        .def("IsAdded",
             (Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_ListEditor::*)( const Standard_Integer ) const>(&IFSelect_ListEditor::IsAdded),
             R"#(Tells if a value (in edited list) has been added (new one))#"  , py::arg("num"))
        .def("IsTouched",
             (Standard_Boolean (IFSelect_ListEditor::*)() const) static_cast<Standard_Boolean (IFSelect_ListEditor::*)() const>(&IFSelect_ListEditor::IsTouched),
             R"#(Tells if at least one edition (SetValue-AddValue-Remove) has been recorded)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ListEditor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ListEditor::*)() const>(&IFSelect_ListEditor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ListEditor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_ListEditor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ModelCopier ,opencascade::handle<IFSelect_ModelCopier> , Standard_Transient>>(m.attr("IFSelect_ModelCopier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetShareOut",
             (void (IFSelect_ModelCopier::*)( const opencascade::handle<IFSelect_ShareOut> & ) ) static_cast<void (IFSelect_ModelCopier::*)( const opencascade::handle<IFSelect_ShareOut> & ) >(&IFSelect_ModelCopier::SetShareOut),
             R"#(Sets the ShareOut, which is used to define Modifiers to apply)#"  , py::arg("sho"))
        .def("ClearResult",
             (void (IFSelect_ModelCopier::*)() ) static_cast<void (IFSelect_ModelCopier::*)() >(&IFSelect_ModelCopier::ClearResult),
             R"#(Clears the list of produced Models)#" )
        .def("AddFile",
             (Standard_Boolean (IFSelect_ModelCopier::*)( const TCollection_AsciiString & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_ModelCopier::*)( const TCollection_AsciiString & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_ModelCopier::AddFile),
             R"#(Records a new File to be sent, as a couple (Name as AsciiString, Content as InterfaceModel) Returns True if Done, False if <filename> is already attached to another File)#"  , py::arg("filename"),  py::arg("content"))
        .def("NameFile",
             (Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer , const TCollection_AsciiString & ) >(&IFSelect_ModelCopier::NameFile),
             R"#(Changes the Name attached to a File which was formerly defined by a call to AddFile Returns True if Done, False else : if <num> out of range or if the new <filename> is already attached to another File Remark : Giving an empty File Name is equivalent to ClearFile)#"  , py::arg("num"),  py::arg("filename"))
        .def("ClearFile",
             (Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer ) >(&IFSelect_ModelCopier::ClearFile),
             R"#(Clears the Name attached to a File which was formerly defined by a call to AddFile. This Clearing can be undone by a call to NameFile (with same <num>) Returns True if Done, False else : if <num> is out of range)#"  , py::arg("num"))
        .def("SetAppliedModifiers",
             (Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer , const opencascade::handle<IFSelect_AppliedModifiers> & ) ) static_cast<Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer , const opencascade::handle<IFSelect_AppliedModifiers> & ) >(&IFSelect_ModelCopier::SetAppliedModifiers),
             R"#(Sets a list of File Modifiers to be applied on a file)#"  , py::arg("num"),  py::arg("applied"))
        .def("ClearAppliedModifiers",
             (Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ModelCopier::*)( const Standard_Integer ) >(&IFSelect_ModelCopier::ClearAppliedModifiers),
             R"#(Clears the list of File Modifiers to be applied on a file)#"  , py::arg("num"))
        .def("Copy",
             (Interface_CheckIterator (IFSelect_ModelCopier::*)( IFSelect_ShareOutResult & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<Interface_CheckIterator (IFSelect_ModelCopier::*)( IFSelect_ShareOutResult & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) >(&IFSelect_ModelCopier::Copy),
             R"#(Performs the Copy Operations, which include the Modifications defined by the list of Modifiers. Memorizes the result, as a list of InterfaceModels with the corresponding FileNames They can then be sent, by the method Send, or queried Copy calls internal method Copying. Returns the produced CheckList)#"  , py::arg("eval"),  py::arg("WL"),  py::arg("protocol"))
        .def("SendCopied",
             (Interface_CheckIterator (IFSelect_ModelCopier::*)( const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<Interface_CheckIterator (IFSelect_ModelCopier::*)( const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) >(&IFSelect_ModelCopier::SendCopied),
             R"#(Sends the formerly defined results (see method Copy) to files, then clears it Remark : A Null File Name cause file to be not produced)#"  , py::arg("WL"),  py::arg("protocol"))
        .def("Send",
             (Interface_CheckIterator (IFSelect_ModelCopier::*)( IFSelect_ShareOutResult & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<Interface_CheckIterator (IFSelect_ModelCopier::*)( IFSelect_ShareOutResult & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) >(&IFSelect_ModelCopier::Send),
             R"#(Performs the Copy Operations (which include the Modifications) and Sends the result on files, without memorizing it. (the memorized result is ignored : neither queried not filled))#"  , py::arg("eval"),  py::arg("WL"),  py::arg("protocol"))
        .def("SendAll",
             (Interface_CheckIterator (IFSelect_ModelCopier::*)( const Standard_CString , const Interface_Graph & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) ) static_cast<Interface_CheckIterator (IFSelect_ModelCopier::*)( const Standard_CString , const Interface_Graph & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & ) >(&IFSelect_ModelCopier::SendAll),
             R"#(Sends a model (defined in <G>) into one file, without managing remaining data, already sent files, etc. Applies the Model and File Modifiers. Returns True if well done, False else)#"  , py::arg("filename"),  py::arg("G"),  py::arg("WL"),  py::arg("protocol"))
        .def("SendSelected",
             (Interface_CheckIterator (IFSelect_ModelCopier::*)( const Standard_CString , const Interface_Graph & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & , const Interface_EntityIterator & ) ) static_cast<Interface_CheckIterator (IFSelect_ModelCopier::*)( const Standard_CString , const Interface_Graph & , const opencascade::handle<IFSelect_WorkLibrary> & , const opencascade::handle<Interface_Protocol> & , const Interface_EntityIterator & ) >(&IFSelect_ModelCopier::SendSelected),
             R"#(Sends a part of a model into one file. Model is gotten from <G>, the part is defined in <iter>. Remaining data are managed and can be later be worked on. Returns True if well done, False else)#"  , py::arg("filename"),  py::arg("G"),  py::arg("WL"),  py::arg("protocol"),  py::arg("iter"))
        .def("CopiedRemaining",
             (void (IFSelect_ModelCopier::*)( const Interface_Graph & , const opencascade::handle<IFSelect_WorkLibrary> & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_ModelCopier::*)( const Interface_Graph & , const opencascade::handle<IFSelect_WorkLibrary> & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_ModelCopier::CopiedRemaining),
             R"#(Produces a Model copied from the Remaining List as <newmod> <newmod> is a Null Handle if this list is empty <WL> performs the copy by using <TC> <TC> is assumed to have been defined with the starting model same as defined by <G>.)#"  , py::arg("G"),  py::arg("WL"),  py::arg("TC"),  py::arg("newmod"))
        .def("SetRemaining",
             (Standard_Boolean (IFSelect_ModelCopier::*)( Interface_Graph & ) const) static_cast<Standard_Boolean (IFSelect_ModelCopier::*)( Interface_Graph & ) const>(&IFSelect_ModelCopier::SetRemaining),
             R"#(Updates Graph status for remaining data, for each entity : - Entities just Sent to file or Copied (by CopiedRemaining) have their status set to 1 - the other keep their former status (1 for Send/Copied, 0 for Remaining) These status are computed by Copying/Sending/CopiedRemaining Then, SetRemaining updates graph status, and mustr be called just after one of these method has been called Returns True if done, False if remaining info if not in phase which the Graph (not same counts of items))#"  , py::arg("CG"))
        .def("NbFiles",
             (Standard_Integer (IFSelect_ModelCopier::*)() const) static_cast<Standard_Integer (IFSelect_ModelCopier::*)() const>(&IFSelect_ModelCopier::NbFiles),
             R"#(Returns the count of Files produced, i.e. the count of Models memorized (produced by the mmethod Copy) with their file names)#" )
        .def("FileName",
             (TCollection_AsciiString (IFSelect_ModelCopier::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (IFSelect_ModelCopier::*)( const Standard_Integer ) const>(&IFSelect_ModelCopier::FileName),
             R"#(Returns the File Name for a file given its rank It is empty after a call to ClearFile on same <num>)#"  , py::arg("num"))
        .def("FileModel",
             (opencascade::handle<Interface_InterfaceModel> (IFSelect_ModelCopier::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_InterfaceModel> (IFSelect_ModelCopier::*)( const Standard_Integer ) const>(&IFSelect_ModelCopier::FileModel),
             R"#(Returns the content of a file before sending, under the form of an InterfaceModel, given its rank)#"  , py::arg("num"))
        .def("AppliedModifiers",
             (opencascade::handle<IFSelect_AppliedModifiers> (IFSelect_ModelCopier::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_AppliedModifiers> (IFSelect_ModelCopier::*)( const Standard_Integer ) const>(&IFSelect_ModelCopier::AppliedModifiers),
             R"#(Returns the list of File Modifiers to be applied on a file when it will be sent, as computed by CopiedModel : If it is a null handle, no File Modifier has to be applied.)#"  , py::arg("num"))
        .def("BeginSentFiles",
             (void (IFSelect_ModelCopier::*)( const opencascade::handle<IFSelect_ShareOut> & , const Standard_Boolean ) ) static_cast<void (IFSelect_ModelCopier::*)( const opencascade::handle<IFSelect_ShareOut> & , const Standard_Boolean ) >(&IFSelect_ModelCopier::BeginSentFiles),
             R"#(Begins a sequence of recording the really sent files <sho> : the default file numbering is cleared If <record> is False, clears the list and stops recording If <record> is True, clears the list and commands recording Creation time corresponds to "stop recording")#"  , py::arg("sho"),  py::arg("record"))
        .def("AddSentFile",
             (void (IFSelect_ModelCopier::*)( const Standard_CString ) ) static_cast<void (IFSelect_ModelCopier::*)( const Standard_CString ) >(&IFSelect_ModelCopier::AddSentFile),
             R"#(Adds the name of a just sent file, if BeginSentFiles has commanded recording; else does nothing It is called by methods SendCopied Sending)#"  , py::arg("filename"))
        .def("SentFiles",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_ModelCopier::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_ModelCopier::*)() const>(&IFSelect_ModelCopier::SentFiles),
             R"#(Returns the list of recorded names of sent files. Can be empty (if no file has been sent). Returns a Null Handle if BeginSentFiles has stopped recording.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ModelCopier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ModelCopier::*)() const>(&IFSelect_ModelCopier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ModelCopier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_ModelCopier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_PacketList ,opencascade::handle<IFSelect_PacketList> , Standard_Transient>>(m.attr("IFSelect_PacketList"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("model") )
    // custom constructors
    // methods
        .def("SetName",
             (void (IFSelect_PacketList::*)( const Standard_CString ) ) static_cast<void (IFSelect_PacketList::*)( const Standard_CString ) >(&IFSelect_PacketList::SetName),
             R"#(Sets a name to a packet list : this makes easier a general routine to print it. Default is "Packets")#"  , py::arg("name"))
        .def("Name",
             (Standard_CString (IFSelect_PacketList::*)() const) static_cast<Standard_CString (IFSelect_PacketList::*)() const>(&IFSelect_PacketList::Name),
             R"#(Returns the recorded name for a packet list)#" )
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (IFSelect_PacketList::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (IFSelect_PacketList::*)() const>(&IFSelect_PacketList::Model),
             R"#(Returns the Model of reference)#" )
        .def("AddPacket",
             (void (IFSelect_PacketList::*)() ) static_cast<void (IFSelect_PacketList::*)() >(&IFSelect_PacketList::AddPacket),
             R"#(Declares a new Packet, ready to be filled The entities to be added will be added to this Packet)#" )
        .def("Add",
             (void (IFSelect_PacketList::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (IFSelect_PacketList::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_PacketList::Add),
             R"#(Adds an entity from the Model into the current packet for Add)#"  , py::arg("ent"))
        .def("AddList",
             (void (IFSelect_PacketList::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) ) static_cast<void (IFSelect_PacketList::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) >(&IFSelect_PacketList::AddList),
             R"#(Adds an list of entities into the current packet for Add)#"  , py::arg("list"))
        .def("NbPackets",
             (Standard_Integer (IFSelect_PacketList::*)() const) static_cast<Standard_Integer (IFSelect_PacketList::*)() const>(&IFSelect_PacketList::NbPackets),
             R"#(Returns the count of non-empty packets)#" )
        .def("NbEntities",
             (Standard_Integer (IFSelect_PacketList::*)( const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_PacketList::*)( const Standard_Integer ) const>(&IFSelect_PacketList::NbEntities),
             R"#(Returns the count of entities in a Packet given its rank, or 0)#"  , py::arg("numpack"))
        .def("Entities",
             (Interface_EntityIterator (IFSelect_PacketList::*)( const Standard_Integer ) const) static_cast<Interface_EntityIterator (IFSelect_PacketList::*)( const Standard_Integer ) const>(&IFSelect_PacketList::Entities),
             R"#(Returns the content of a Packet given its rank Null Handle if <numpack> is out of range)#"  , py::arg("numpack"))
        .def("HighestDuplicationCount",
             (Standard_Integer (IFSelect_PacketList::*)() const) static_cast<Standard_Integer (IFSelect_PacketList::*)() const>(&IFSelect_PacketList::HighestDuplicationCount),
             R"#(Returns the highest number of packets which know a same entity For no duplication, should be one)#" )
        .def("NbDuplicated",
             (Standard_Integer (IFSelect_PacketList::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_Integer (IFSelect_PacketList::*)( const Standard_Integer , const Standard_Boolean ) const>(&IFSelect_PacketList::NbDuplicated),
             R"#(Returns the count of entities duplicated : <count> times, if <andmore> is False, or <count> or more times, if <andmore> is True See Duplicated for more details)#"  , py::arg("count"),  py::arg("andmore"))
        .def("Duplicated",
             (Interface_EntityIterator (IFSelect_PacketList::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Interface_EntityIterator (IFSelect_PacketList::*)( const Standard_Integer , const Standard_Boolean ) const>(&IFSelect_PacketList::Duplicated),
             R"#(Returns a list of entities duplicated : <count> times, if <andmore> is False, or <count> or more times, if <andmore> is True Hence, count=2 & andmore=True gives all duplicated entities count=1 gives non-duplicated entities (in only one packet) count=0 gives remaining entities (in no packet at all))#"  , py::arg("count"),  py::arg("andmore"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_PacketList::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_PacketList::*)() const>(&IFSelect_PacketList::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_PacketList::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_PacketList::get_type_descriptor),
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
        .def("UniqueResult",
             (Interface_EntityIterator (IFSelect_Selection::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_Selection::*)( const Interface_Graph & ) const>(&IFSelect_Selection::UniqueResult),
             R"#(Returns the list of selected entities, each of them beeing unique. Default definition works from RootResult. According HasUniqueResult, UniqueResult returns directly RootResult, or build a Unique Result from it with a Graph.)#"  , py::arg("G"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Selection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectionIterator , shared_ptr<IFSelect_SelectionIterator> >>(m.attr("IFSelect_SelectionIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<IFSelect_Selection> & >()  , py::arg("sel") )
    // custom constructors
    // methods
        .def("AddFromIter",
             (void (IFSelect_SelectionIterator::*)( IFSelect_SelectionIterator & ) ) static_cast<void (IFSelect_SelectionIterator::*)( IFSelect_SelectionIterator & ) >(&IFSelect_SelectionIterator::AddFromIter),
             R"#(Adds to an iterator the content of another one (each selection is present only once in the result))#"  , py::arg("iter"))
        .def("AddItem",
             (void (IFSelect_SelectionIterator::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_SelectionIterator::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_SelectionIterator::AddItem),
             R"#(Adds a Selection to an iterator (if not yet noted))#"  , py::arg("sel"))
        .def("AddList",
             (void (IFSelect_SelectionIterator::*)(  const NCollection_Sequence<opencascade::handle<IFSelect_Selection> > & ) ) static_cast<void (IFSelect_SelectionIterator::*)(  const NCollection_Sequence<opencascade::handle<IFSelect_Selection> > & ) >(&IFSelect_SelectionIterator::AddList),
             R"#(Adds a list of Selections to an iterator (this list comes from the description of a Selection or a Dispatch, etc...))#"  , py::arg("list"))
        .def("More",
             (Standard_Boolean (IFSelect_SelectionIterator::*)() const) static_cast<Standard_Boolean (IFSelect_SelectionIterator::*)() const>(&IFSelect_SelectionIterator::More),
             R"#(Returns True if there are more Selections to get)#" )
        .def("Next",
             (void (IFSelect_SelectionIterator::*)() ) static_cast<void (IFSelect_SelectionIterator::*)() >(&IFSelect_SelectionIterator::Next),
             R"#(Sets iterator to the next item)#" )
        .def("Value",
             (const opencascade::handle<IFSelect_Selection> & (IFSelect_SelectionIterator::*)() const) static_cast<const opencascade::handle<IFSelect_Selection> & (IFSelect_SelectionIterator::*)() const>(&IFSelect_SelectionIterator::Value),
             R"#(Returns the current Selction beeing iterated Error if count of Selection has been passed)#" )
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
        .def("Next",
             (opencascade::handle<IFSelect_SessionDumper> (IFSelect_SessionDumper::*)() const) static_cast<opencascade::handle<IFSelect_SessionDumper> (IFSelect_SessionDumper::*)() const>(&IFSelect_SessionDumper::Next),
             R"#(Returns the Next SesionDumper in the Library. Returns a Null Handle at the End.)#" )
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
        .def_static("First_s",
                    (opencascade::handle<IFSelect_SessionDumper> (*)() ) static_cast<opencascade::handle<IFSelect_SessionDumper> (*)() >(&IFSelect_SessionDumper::First),
                    R"#(Returns the First item of the Library of Dumper. The Next ones are then obtained by Next on the returned items)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SessionDumper::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SessionDumper::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SessionFile , shared_ptr<IFSelect_SessionFile> >>(m.attr("IFSelect_SessionFile"))
    // constructors
        .def(py::init< const opencascade::handle<IFSelect_WorkSession> & >()  , py::arg("WS") )
        .def(py::init< const opencascade::handle<IFSelect_WorkSession> &,const Standard_CString >()  , py::arg("WS"),  py::arg("filename") )
    // custom constructors
    // methods
        .def("ClearLines",
             (void (IFSelect_SessionFile::*)() ) static_cast<void (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::ClearLines),
             R"#(Clears the lines recorded whatever for writing or for reading)#" )
        .def("NbLines",
             (Standard_Integer (IFSelect_SessionFile::*)() const) static_cast<Standard_Integer (IFSelect_SessionFile::*)() const>(&IFSelect_SessionFile::NbLines),
             R"#(Returns the count of recorded lines)#" )
        .def("Line",
             (const TCollection_AsciiString & (IFSelect_SessionFile::*)( const Standard_Integer ) const) static_cast<const TCollection_AsciiString & (IFSelect_SessionFile::*)( const Standard_Integer ) const>(&IFSelect_SessionFile::Line),
             R"#(Returns a line given its rank in the list of recorded lines)#"  , py::arg("num"))
        .def("AddLine",
             (void (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<void (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::AddLine),
             R"#(Adds a line to the list of recorded lines)#"  , py::arg("line"))
        .def("RemoveLastLine",
             (void (IFSelect_SessionFile::*)() ) static_cast<void (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::RemoveLastLine),
             R"#(Removes the last line. Can be called recursively. Does nothing if the list is empty)#" )
        .def("WriteFile",
             (Standard_Boolean (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::WriteFile),
             R"#(Writes the recorded lines to a file named <name> then clears the list of lines. Returns False (with no clearing) if the file could not be created)#"  , py::arg("name"))
        .def("ReadFile",
             (Standard_Boolean (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::ReadFile),
             R"#(Reads the recorded lines from a file named <name>, after having cleared the list (stops if RecognizeFile fails) Returns False (with no clearing) if the file could not be read)#"  , py::arg("name"))
        .def("RecognizeFile",
             (Standard_Boolean (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::RecognizeFile),
             R"#(Recognizes the header line. returns True if OK, False else)#"  , py::arg("headerline"))
        .def("Write",
             (Standard_Integer (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<Standard_Integer (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::Write),
             R"#(Performs a Write Operation from a WorkSession to a File i.e. calls WriteSession then WriteEnd, and WriteFile Returned Value is : 0 for OK, -1 File could not be created, >0 Error during Write (see WriteSession) IsDone can be called too (will return True for OK))#"  , py::arg("filename"))
        .def("Read",
             (Standard_Integer (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<Standard_Integer (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::Read),
             R"#(Performs a Read Operation from a file to a WorkSession i.e. calls ReadFile, then ReadSession and ReadEnd Returned Value is : 0 for OK, -1 File could not be opened, >0 Error during Read (see WriteSession) IsDone can be called too (will return True for OK))#"  , py::arg("filename"))
        .def("WriteSession",
             (Standard_Integer (IFSelect_SessionFile::*)() ) static_cast<Standard_Integer (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::WriteSession),
             R"#(Prepares the Write operation from a WorkSession (IFSelect) to a File, i.e. fills the list of lines (the file itself remains to be written; or NbLines/Line may be called) Important Remark : this excludes the reading of the last line, which is performed by WriteEnd Returns 0 if OK, status > 0 in case of error)#" )
        .def("WriteEnd",
             (Standard_Integer (IFSelect_SessionFile::*)() ) static_cast<Standard_Integer (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::WriteEnd),
             R"#(Writes the trailing line. It is separate from WriteSession, in order to allow to redefine WriteSession without touching WriteEnd (WriteSession defines the body of the file) WriteEnd fills the list of lines. Returns a status of error, 0 if OK, >0 else)#" )
        .def("WriteLine",
             (void (IFSelect_SessionFile::*)( const Standard_CString , const Standard_Character ) ) static_cast<void (IFSelect_SessionFile::*)( const Standard_CString , const Standard_Character ) >(&IFSelect_SessionFile::WriteLine),
             R"#(Writes a line to the File. If <follow> is given, it is added at the following of the line. '' must be added for the end.)#"  , py::arg("line"),  py::arg("follow")=static_cast<const Standard_Character>(0))
        .def("WriteOwn",
             (Standard_Boolean (IFSelect_SessionFile::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_SessionFile::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SessionFile::WriteOwn),
             R"#(Writes the Parameters own to each type of Item. Uses the Library of SessionDumpers Returns True if Done, False if <item> could not be treated (hence it remains written with no Own Parameter))#"  , py::arg("item"))
        .def("ReadSession",
             (Standard_Integer (IFSelect_SessionFile::*)() ) static_cast<Standard_Integer (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::ReadSession),
             R"#(Performs a Read Operation from a File to a WorkSession, i.e. reads the list of line (which must have already been loaded, by ReadFile or by calls to AddLine) Important Remark : this excludes the reading of the last line, which is performed by ReadEnd Returns 0 for OK, >0 status for Read Error (not a suitable File, or WorkSession given as Immutable at Creation Time) IsDone can be called too (will return True for OK))#" )
        .def("ReadEnd",
             (Standard_Integer (IFSelect_SessionFile::*)() ) static_cast<Standard_Integer (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::ReadEnd),
             R"#(Reads the end of a file (its last line). Returns 0 if OK, status >0 in case of error (not a suitable end line).)#" )
        .def("ReadLine",
             (Standard_Boolean (IFSelect_SessionFile::*)() ) static_cast<Standard_Boolean (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::ReadLine),
             R"#(Reads a Line and splits it into a set of alphanumeric items, which can then be queried by NbParams/ParamValue ...)#" )
        .def("SplitLine",
             (void (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<void (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::SplitLine),
             R"#(Internal routine which processes a line into words and prepares its exploration)#"  , py::arg("line"))
        .def("ReadOwn",
             (Standard_Boolean (IFSelect_SessionFile::*)( opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_SessionFile::*)( opencascade::handle<Standard_Transient> & ) >(&IFSelect_SessionFile::ReadOwn),
             R"#(Tries to Read an Item, by calling the Library of Dumpers Sets the list of parameters of the line to be read from the first own one)#"  , py::arg("item"))
        .def("AddItem",
             (void (IFSelect_SessionFile::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) ) static_cast<void (IFSelect_SessionFile::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) >(&IFSelect_SessionFile::AddItem),
             R"#(Adds an Item to the WorkSession, taken as Name the first item of the read Line. If this Name is not a Name but a Number or if this Name is already recorded in the WorkSession, it adds the Item but with no Name. Then the Name is recorded in order to be used by the method ItemValue <active> commands to make <item> active or not in the session)#"  , py::arg("item"),  py::arg("active")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsDone",
             (Standard_Boolean (IFSelect_SessionFile::*)() const) static_cast<Standard_Boolean (IFSelect_SessionFile::*)() const>(&IFSelect_SessionFile::IsDone),
             R"#(Returns True if the last Read or Write operation has been corectly performed. ELse returns False.)#" )
        .def("WorkSession",
             (opencascade::handle<IFSelect_WorkSession> (IFSelect_SessionFile::*)() const) static_cast<opencascade::handle<IFSelect_WorkSession> (IFSelect_SessionFile::*)() const>(&IFSelect_SessionFile::WorkSession),
             R"#(Returns the WorkSession on which a SessionFile works. Remark that it is returned as Immutable.)#" )
        .def("NewItem",
             (void (IFSelect_SessionFile::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (IFSelect_SessionFile::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SessionFile::NewItem),
             R"#(At beginning of writing an Item, writes its basics : - either its name in the session if it has one - or its relative number of item in the file, else (preceeded by a '_') - then, its Dynamic Type (in the sense of cdl : pk_class) This basic description can be followed by the parameters which are used in the definition of the item.)#"  , py::arg("ident"),  py::arg("par"))
        .def("SetOwn",
             (void (IFSelect_SessionFile::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_SessionFile::*)( const Standard_Boolean ) >(&IFSelect_SessionFile::SetOwn),
             R"#(Sets Parameters to be sent as Own if <mode> is True (their Name or Number or Void Mark or Text Value is preceeded by a Column sign ':') else they are sent normally Hence, the Own Parameter are clearly identified in the File)#"  , py::arg("mode"))
        .def("SendVoid",
             (void (IFSelect_SessionFile::*)() ) static_cast<void (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::SendVoid),
             R"#(During a Write action, commands to send a Void Parameter i.e. a Parameter which is present but undefined Its form will be the dollar sign : $)#" )
        .def("SendItem",
             (void (IFSelect_SessionFile::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (IFSelect_SessionFile::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SessionFile::SendItem),
             R"#(During a Write action, commands to send the identification of a Parameter : if it is Null (undefined) it is send as Void ($) if it is Named in the WorkSession, its Name is sent preceeded by ':', else a relative Ident Number is sent preceeded by '#' (relative to the present Write, i.e. starting at one, without skip, and counted part from Named Items))#"  , py::arg("par"))
        .def("SendText",
             (void (IFSelect_SessionFile::*)( const Standard_CString ) ) static_cast<void (IFSelect_SessionFile::*)( const Standard_CString ) >(&IFSelect_SessionFile::SendText),
             R"#(During a Write action, commands to send a Text without interpretation. It will be sent as well)#"  , py::arg("text"))
        .def("SetLastGeneral",
             (void (IFSelect_SessionFile::*)( const Standard_Integer ) ) static_cast<void (IFSelect_SessionFile::*)( const Standard_Integer ) >(&IFSelect_SessionFile::SetLastGeneral),
             R"#(Sets the rank of Last General Parameter to a new value. It is followed by the Fist Own Parameter of the item. Used by SessionFile after reading general parameters.)#"  , py::arg("lastgen"))
        .def("NbParams",
             (Standard_Integer (IFSelect_SessionFile::*)() const) static_cast<Standard_Integer (IFSelect_SessionFile::*)() const>(&IFSelect_SessionFile::NbParams),
             R"#(During a Read operation, SessionFile processes sequencially the Items to read. For each one, it gives access to the list of its Parameters : they were defined by calls to SendVoid/SendParam/SendText during Writing the File. NbParams returns the count of Parameters for the line currently read.)#" )
        .def("IsVoid",
             (Standard_Boolean (IFSelect_SessionFile::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_SessionFile::*)( const Standard_Integer ) const>(&IFSelect_SessionFile::IsVoid),
             R"#(Returns True if a Parameter, given its rank in the Own List (see NbOwnParams), is Void. Returns also True if <num> is out of range (undefined parameters))#"  , py::arg("num"))
        .def("IsText",
             (Standard_Boolean (IFSelect_SessionFile::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_SessionFile::*)( const Standard_Integer ) const>(&IFSelect_SessionFile::IsText),
             R"#(Returns True if a Parameter, in the Own List (see NbOwnParams) is a Text (between "..."). Else it is an Item (Parameter, Selection, Dispatch ...), which can be Void.)#"  , py::arg("num"))
        .def("ParamValue",
             (const TCollection_AsciiString & (IFSelect_SessionFile::*)( const Standard_Integer ) const) static_cast<const TCollection_AsciiString & (IFSelect_SessionFile::*)( const Standard_Integer ) const>(&IFSelect_SessionFile::ParamValue),
             R"#(Returns a Parameter (alphanumeric item of a line) as it has been read)#"  , py::arg("num"))
        .def("TextValue",
             (TCollection_AsciiString (IFSelect_SessionFile::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (IFSelect_SessionFile::*)( const Standard_Integer ) const>(&IFSelect_SessionFile::TextValue),
             R"#(Returns the content of a Text Parameter (without the quotes). Returns an empty string if the Parameter is not a Text.)#"  , py::arg("num"))
        .def("ItemValue",
             (opencascade::handle<Standard_Transient> (IFSelect_SessionFile::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_SessionFile::*)( const Standard_Integer ) const>(&IFSelect_SessionFile::ItemValue),
             R"#(Returns a Parameter as an Item. Returns a Null Handle if the Parameter is a Text, or if it is defined as Void)#"  , py::arg("num"))
        .def("Destroy",
             (void (IFSelect_SessionFile::*)() ) static_cast<void (IFSelect_SessionFile::*)() >(&IFSelect_SessionFile::Destroy),
             R"#(Specific Destructor (closes the File if not yet done))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ShareOut ,opencascade::handle<IFSelect_ShareOut> , Standard_Transient>>(m.attr("IFSelect_ShareOut"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (IFSelect_ShareOut::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_ShareOut::*)( const Standard_Boolean ) >(&IFSelect_ShareOut::Clear),
             R"#(Removes in one operation all the Dispatches with their Idents Also clears all informations about Names, and all Results but naming informations which are : - kept if <onlydisp> is True. - cleared if <onlydisp> is False (complete clearing) If <onlydisp> is True, that's all. Else, clears also Modifiers)#"  , py::arg("onlydisp"))
        .def("ClearResult",
             (void (IFSelect_ShareOut::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_ShareOut::*)( const Standard_Boolean ) >(&IFSelect_ShareOut::ClearResult),
             R"#(Clears all data produced (apart from Dispatches, etc...) if <alsoname> is True, all is cleared. Else, informations about produced Names are kept (to maintain unicity of naming across clearings))#"  , py::arg("alsoname"))
        .def("RemoveItem",
             (Standard_Boolean (IFSelect_ShareOut::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_ShareOut::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_ShareOut::RemoveItem),
             R"#(Removes an item, which can be, either a Dispatch (removed from the list of Dispatches), or a GeneralModifier (removed from the list of Model Modifiers or from the list of File Modifiers according to its type). Returns True if done, False if has not been found or if it is neither a Dispatch, nor a Modifier.)#"  , py::arg("item"))
        .def("LastRun",
             (Standard_Integer (IFSelect_ShareOut::*)() const) static_cast<Standard_Integer (IFSelect_ShareOut::*)() const>(&IFSelect_ShareOut::LastRun),
             R"#(Returns the rank of last run item (ClearResult resets it to 0))#" )
        .def("SetLastRun",
             (void (IFSelect_ShareOut::*)( const Standard_Integer ) ) static_cast<void (IFSelect_ShareOut::*)( const Standard_Integer ) >(&IFSelect_ShareOut::SetLastRun),
             R"#(Records a new alue for the rank of last run item)#"  , py::arg("last"))
        .def("NbDispatches",
             (Standard_Integer (IFSelect_ShareOut::*)() const) static_cast<Standard_Integer (IFSelect_ShareOut::*)() const>(&IFSelect_ShareOut::NbDispatches),
             R"#(Returns the count of Dispatches)#" )
        .def("DispatchRank",
             (Standard_Integer (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_Dispatch> & ) const) static_cast<Standard_Integer (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_Dispatch> & ) const>(&IFSelect_ShareOut::DispatchRank),
             R"#(Returns the Rank of a Dispatch, given its Value (Handle). Returns 0 if the Dispatch is unknown in the ShareOut)#"  , py::arg("disp"))
        .def("Dispatch",
             (const opencascade::handle<IFSelect_Dispatch> & (IFSelect_ShareOut::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<IFSelect_Dispatch> & (IFSelect_ShareOut::*)( const Standard_Integer ) const>(&IFSelect_ShareOut::Dispatch),
             R"#(Returns a Dispatch, given its rank in the list)#"  , py::arg("num"))
        .def("AddDispatch",
             (void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_Dispatch> & ) ) static_cast<void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_Dispatch> & ) >(&IFSelect_ShareOut::AddDispatch),
             R"#(Adds a Dispatch to the list)#"  , py::arg("disp"))
        .def("RemoveDispatch",
             (Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Integer ) >(&IFSelect_ShareOut::RemoveDispatch),
             R"#(Removes a Dispatch, given its rank in the list Returns True if done, False if rank is not between (LastRun + 1) and (NbDispatches))#"  , py::arg("rank"))
        .def("AddModifier",
             (void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const Standard_Integer ) ) static_cast<void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const Standard_Integer ) >(&IFSelect_ShareOut::AddModifier),
             R"#(Sets a Modifier to be applied on all Dispatches to be run If <modifier> is a ModelModifier, adds it to the list of Model Modifiers; else to the list of File Modifiers By default (atnum = 0) at the end of the list, else at <atnum> Each Modifier is used, after each copy of a packet of Entities into a Model : its criteria are checked and if they are OK, the method Perform of this Modifier is run.)#"  , py::arg("modifier"),  py::arg("atnum"))
        .def("AddModifier",
             (void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const Standard_Integer , const Standard_Integer ) >(&IFSelect_ShareOut::AddModifier),
             R"#(Sets a Modifier to be applied on the Dispatch <dispnum> If <modifier> is a ModelModifier, adds it to the list of Model Modifiers; else to the list of File Modifiers This is the same list as for all Dispatches, but the Modifier is qualified to be applied to one Dispatch only Then, <atnum> refers to the entire list By default (atnum = 0) at the end of the list, else at <atnum> Remark : if the Modifier was already in the list and if <atnum> = 0, the Modifier is not moved, but only qualified for a Dispatch)#"  , py::arg("modifier"),  py::arg("dispnum"),  py::arg("atnum"))
        .def("AddModif",
             (void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const Standard_Boolean , const Standard_Integer ) ) static_cast<void (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const Standard_Boolean , const Standard_Integer ) >(&IFSelect_ShareOut::AddModif),
             R"#(Adds a Modifier to the list of Modifiers : Model Modifiers if <formodel> is True, File Modifiers else (internal).)#"  , py::arg("modifier"),  py::arg("formodel"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("NbModifiers",
             (Standard_Integer (IFSelect_ShareOut::*)( const Standard_Boolean ) const) static_cast<Standard_Integer (IFSelect_ShareOut::*)( const Standard_Boolean ) const>(&IFSelect_ShareOut::NbModifiers),
             R"#(Returns count of Modifiers (which apply to complete Models) : Model Modifiers if <formodel> is True, File Modifiers else)#"  , py::arg("formodel"))
        .def("GeneralModifier",
             (opencascade::handle<IFSelect_GeneralModifier> (IFSelect_ShareOut::*)( const Standard_Boolean , const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_GeneralModifier> (IFSelect_ShareOut::*)( const Standard_Boolean , const Standard_Integer ) const>(&IFSelect_ShareOut::GeneralModifier),
             R"#(Returns a Modifier of the list, given its rank : Model Modifiers if <formodel> is True, File Modifiers else)#"  , py::arg("formodel"),  py::arg("num"))
        .def("ModelModifier",
             (opencascade::handle<IFSelect_Modifier> (IFSelect_ShareOut::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Modifier> (IFSelect_ShareOut::*)( const Standard_Integer ) const>(&IFSelect_ShareOut::ModelModifier),
             R"#(Returns a Modifier of the list of Model Modifiers, duely casted)#"  , py::arg("num"))
        .def("ModifierRank",
             (Standard_Integer (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) const) static_cast<Standard_Integer (IFSelect_ShareOut::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) const>(&IFSelect_ShareOut::ModifierRank),
             R"#(Gives the rank of a Modifier in the list, 0 if not in the list Model Modifiers if <modifier> is kind of ModelModifer, File Modifiers else)#"  , py::arg("modifier"))
        .def("RemoveModifier",
             (Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Boolean , const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Boolean , const Standard_Integer ) >(&IFSelect_ShareOut::RemoveModifier),
             R"#(Removes a Modifier, given it rank in the list : Model Modifiers if <formodel> is True, File Modifiers else Returns True if done, False if <num> is out of range)#"  , py::arg("formodel"),  py::arg("num"))
        .def("ChangeModifierRank",
             (Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer ) >(&IFSelect_ShareOut::ChangeModifierRank),
             R"#(Changes the rank of a modifier in the list : Model Modifiers if <formodel> is True, File Modifiers else from <before> to <after> Returns True if done, False else (before or after out of range))#"  , py::arg("formodel"),  py::arg("befor"),  py::arg("after"))
        .def("SetRootName",
             (Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Integer , const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_ShareOut::SetRootName),
             R"#(Attaches a Root Name to a Dispatch given its rank, as an HAsciiString (standard form). A Null Handle resets this name. Returns True if OK, False if this Name is already attached, for a Dispatch or for Default, or <num> out of range)#"  , py::arg("num"),  py::arg("name"))
        .def("HasRootName",
             (Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_ShareOut::*)( const Standard_Integer ) const>(&IFSelect_ShareOut::HasRootName),
             R"#(Returns True if the Dispatch of rank <num> has an attached Root Name. False else, or if num is out of range)#"  , py::arg("num"))
        .def("RootName",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)( const Standard_Integer ) const>(&IFSelect_ShareOut::RootName),
             R"#(Returns the Root bound to a Dispatch, given its rank Returns a Null Handle if not defined)#"  , py::arg("num"))
        .def("RootNumber",
             (Standard_Integer (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) const) static_cast<Standard_Integer (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) const>(&IFSelect_ShareOut::RootNumber),
             R"#(Returns an integer value about a given root name : - positive : it's the rank of the Dispatch which has this name - null : this root name is unknown - negative (-1) : this root name is the default root name)#"  , py::arg("name"))
        .def("SetPrefix",
             (void (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_ShareOut::SetPrefix),
             R"#(Defines or Changes the general Prefix (which is prepended to complete file name generated). If this method is not call, Prefix remains empty)#"  , py::arg("pref"))
        .def("SetDefaultRootName",
             (Standard_Boolean (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Standard_Boolean (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_ShareOut::SetDefaultRootName),
             R"#(Defines or Changes the Default Root Name to a new value (which is used for dispatches which have no attached root name). If this method is not called, DefaultRootName remains empty Returns True if OK, False if this Name is already attached, for a Dispatch or for Default)#"  , py::arg("defrt"))
        .def("SetExtension",
             (void (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (IFSelect_ShareOut::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&IFSelect_ShareOut::SetExtension),
             R"#(Defines or Changes the general Extension (which is appended to complete file name generated). If this method is not call, Extension remains empty)#"  , py::arg("ext"))
        .def("Prefix",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)() const>(&IFSelect_ShareOut::Prefix),
             R"#(Returns the general Prefix. Can be empty.)#" )
        .def("DefaultRootName",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)() const>(&IFSelect_ShareOut::DefaultRootName),
             R"#(Returns the Default Root Name. Can be empty.)#" )
        .def("Extension",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_ShareOut::*)() const>(&IFSelect_ShareOut::Extension),
             R"#(Returns the general Extension. Can be empty (not recommanded))#" )
        .def("FileName",
             (TCollection_AsciiString (IFSelect_ShareOut::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<TCollection_AsciiString (IFSelect_ShareOut::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&IFSelect_ShareOut::FileName),
             R"#(Computes the complete file name for a Packet of a Dispatch, given Dispatch Number (Rank), Packet Number, and Count of Packets generated by this Dispatch (0 if unknown))#"  , py::arg("dnum"),  py::arg("pnum"),  py::arg("nbpack")=static_cast<const Standard_Integer>(0))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_ShareOut::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_ShareOut::*)() const>(&IFSelect_ShareOut::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ShareOut::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_ShareOut::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ShareOutResult , shared_ptr<IFSelect_ShareOutResult> >>(m.attr("IFSelect_ShareOutResult"))
    // constructors
        .def(py::init< const opencascade::handle<IFSelect_ShareOut> &,const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("sho"),  py::arg("mod") )
        .def(py::init< const opencascade::handle<IFSelect_ShareOut> &,const Interface_Graph & >()  , py::arg("sho"),  py::arg("G") )
        .def(py::init< const opencascade::handle<IFSelect_Dispatch> &,const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("disp"),  py::arg("mod") )
        .def(py::init< const opencascade::handle<IFSelect_Dispatch> &,const Interface_Graph & >()  , py::arg("disp"),  py::arg("G") )
    // custom constructors
    // methods
        .def("ShareOut",
             (opencascade::handle<IFSelect_ShareOut> (IFSelect_ShareOutResult::*)() const) static_cast<opencascade::handle<IFSelect_ShareOut> (IFSelect_ShareOutResult::*)() const>(&IFSelect_ShareOutResult::ShareOut),
             R"#(Returns the ShareOut used to create the ShareOutResult if creation from a Dispatch, returns a Null Handle)#" )
        .def("Graph",
             (const Interface_Graph & (IFSelect_ShareOutResult::*)() const) static_cast<const Interface_Graph & (IFSelect_ShareOutResult::*)() const>(&IFSelect_ShareOutResult::Graph),
             R"#(Returns the Graph used to create theShareOutResult)#" )
        .def("Reset",
             (void (IFSelect_ShareOutResult::*)() ) static_cast<void (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::Reset),
             R"#(Erases computed data, in order to command a new Evaluation)#" )
        .def("Evaluate",
             (void (IFSelect_ShareOutResult::*)() ) static_cast<void (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::Evaluate),
             R"#(Evaluates the result of a ShareOut : determines Entities to be forgotten by the ShareOut, Entities to be transferred several times (duplicated), prepares an iteration on the packets to be produced Called the first time anyone question is asked, or after a call to Reset. Works by calling the method Prepare.)#" )
        .def("Packets",
             (opencascade::handle<IFSelect_PacketList> (IFSelect_ShareOutResult::*)( const Standard_Boolean ) ) static_cast<opencascade::handle<IFSelect_PacketList> (IFSelect_ShareOutResult::*)( const Standard_Boolean ) >(&IFSelect_ShareOutResult::Packets),
             R"#(Returns the list of recorded Packets, under two modes : - <complete> = False, the strict definition of Packets, i.e. for each one, the Root Entities, to be explicitely sent - <complete> = True (Default), the completely evaluated list, i.e. which really gives the destination of each entity : this mode allows to evaluate duplications Remark that to send packets, iteration remains preferable (file names are managed))#"  , py::arg("complete")=static_cast<const Standard_Boolean>(Standard_True))
        .def("NbPackets",
             (Standard_Integer (IFSelect_ShareOutResult::*)() ) static_cast<Standard_Integer (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::NbPackets),
             R"#(Returns the total count of produced non empty packets (in out : calls Evaluate as necessary))#" )
        .def("Prepare",
             (void (IFSelect_ShareOutResult::*)() ) static_cast<void (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::Prepare),
             R"#(Prepares the iteration on the packets This method is called by Evaluate, but can be called anytime The iteration consists in taking each Dispatch of the ShareOut beginning by the first one, compute its packets, then iterate on these packets. Once all these packets are iterated, the iteration passes to the next Dispatch, or stops. For a creation from a unique Dispatch, same but with only this Dispatch. Each packet can be listed, or really transferred (producing a derived Model, from which a file can be generated))#" )
        .def("More",
             (Standard_Boolean (IFSelect_ShareOutResult::*)() ) static_cast<Standard_Boolean (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::More),
             R"#(Returns True if there is more packets in the current Dispatch, else if there is more Dispatch in the ShareOut)#" )
        .def("Next",
             (void (IFSelect_ShareOutResult::*)() ) static_cast<void (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::Next),
             R"#(Passes to the next Packet in the current Dispatch, or if there is none, to the next Dispatch in the ShareOut)#" )
        .def("NextDispatch",
             (void (IFSelect_ShareOutResult::*)() ) static_cast<void (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::NextDispatch),
             R"#(Passes to the next Dispatch, regardless about remaining packets)#" )
        .def("Dispatch",
             (opencascade::handle<IFSelect_Dispatch> (IFSelect_ShareOutResult::*)() const) static_cast<opencascade::handle<IFSelect_Dispatch> (IFSelect_ShareOutResult::*)() const>(&IFSelect_ShareOutResult::Dispatch),
             R"#(Returns the current Dispatch)#" )
        .def("DispatchRank",
             (Standard_Integer (IFSelect_ShareOutResult::*)() const) static_cast<Standard_Integer (IFSelect_ShareOutResult::*)() const>(&IFSelect_ShareOutResult::DispatchRank),
             R"#(Returns the Rank of the current Dispatch in the ShareOut Returns Zero if there is none (iteration finished))#" )
        .def("PacketRoot",
             (Interface_EntityIterator (IFSelect_ShareOutResult::*)() ) static_cast<Interface_EntityIterator (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::PacketRoot),
             R"#(Returns the list of Roots of the current Packet (never empty) (i.e. the Entities to be themselves asked for transfer) Error if there is none (iteration finished))#" )
        .def("PacketContent",
             (Interface_EntityIterator (IFSelect_ShareOutResult::*)() ) static_cast<Interface_EntityIterator (IFSelect_ShareOutResult::*)() >(&IFSelect_ShareOutResult::PacketContent),
             R"#(Returns the complete content of the current Packet (i.e. with shared entities, which will also be put in the file))#" )
        .def("FileName",
             (TCollection_AsciiString (IFSelect_ShareOutResult::*)() const) static_cast<TCollection_AsciiString (IFSelect_ShareOutResult::*)() const>(&IFSelect_ShareOutResult::FileName),
             R"#(Returns the File Name which corresponds to current Packet (computed by ShareOut) If current Packet has no associated name (see ShareOut), the returned value is Null)#" )
    // methods using call by reference i.s.o. return
        .def("PacketsInDispatch",
             []( IFSelect_ShareOutResult &self   ){ Standard_Integer  numpack; Standard_Integer  nbpacks; self.PacketsInDispatch(numpack,nbpacks); return std::make_tuple(numpack,nbpacks); },
             R"#(Returns Number (rank) of current Packet in current Dispatch, and total count of Packets in current Dispatch, as arguments)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Signature ,opencascade::handle<IFSelect_Signature>,Py_IFSelect_Signature , Interface_SignType>>(m.attr("IFSelect_Signature"))
    // constructors
    // custom constructors
    // methods
        .def("SetIntCase",
             (void (IFSelect_Signature::*)( const Standard_Boolean , const Standard_Integer , const Standard_Boolean , const Standard_Integer ) ) static_cast<void (IFSelect_Signature::*)( const Standard_Boolean , const Standard_Integer , const Standard_Boolean , const Standard_Integer ) >(&IFSelect_Signature::SetIntCase),
             R"#(Sets the information data to tell "integer cases" with possible min and max values To be called when creating)#"  , py::arg("hasmin"),  py::arg("valmin"),  py::arg("hasmax"),  py::arg("valmax"))
        .def("IsIntCase",
             (Standard_Boolean (IFSelect_Signature::*)( Standard_Boolean & , Standard_Integer & , Standard_Boolean & , Standard_Integer & ) const) static_cast<Standard_Boolean (IFSelect_Signature::*)( Standard_Boolean & , Standard_Integer & , Standard_Boolean & , Standard_Integer & ) const>(&IFSelect_Signature::IsIntCase),
             R"#(Tells if this Signature gives integer values and returns values from SetIntCase if True)#"  , py::arg("hasmin"),  py::arg("valmin"),  py::arg("hasmax"),  py::arg("valmax"))
        .def("AddCase",
             (void (IFSelect_Signature::*)( const Standard_CString ) ) static_cast<void (IFSelect_Signature::*)( const Standard_CString ) >(&IFSelect_Signature::AddCase),
             R"#(Adds a possible case To be called when creating, IF the list of possible cases for Value is known when starting For instance, for CDL types, rather do not fill this, but for a specific enumeration (such as a status), can be used)#"  , py::arg("acase"))
        .def("CaseList",
             (opencascade::handle<TColStd_HSequenceOfAsciiString> (IFSelect_Signature::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfAsciiString> (IFSelect_Signature::*)() const>(&IFSelect_Signature::CaseList),
             R"#(Returns the predefined list of possible cases, filled by AddCase Null Handle if no predefined list (hence, to be counted) Useful to filter on really possible vase, for instance, or for a help)#" )
        .def("Name",
             (Standard_CString (IFSelect_Signature::*)() const) static_cast<Standard_CString (IFSelect_Signature::*)() const>(&IFSelect_Signature::Name),
             R"#(Returns an identification of the Signature (a word), given at initialization time Returns the Signature for a Transient object. It is specific of each sub-class of Signature. For a Null Handle, it should provide "" It can work with the model which contains the entity)#" )
        .def("Label",
             (TCollection_AsciiString (IFSelect_Signature::*)() const) static_cast<TCollection_AsciiString (IFSelect_Signature::*)() const>(&IFSelect_Signature::Label),
             R"#(The label of a Signature uses its name as follow : "Signature : <name>")#" )
        .def("Matches",
             (Standard_Boolean (IFSelect_Signature::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const) static_cast<Standard_Boolean (IFSelect_Signature::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & , const TCollection_AsciiString & , const Standard_Boolean ) const>(&IFSelect_Signature::Matches),
             R"#(Tells if the value for <ent> in <model> matches a text, with a criterium <exact>. The default definition calls MatchValue Can be redefined)#"  , py::arg("ent"),  py::arg("model"),  py::arg("text"),  py::arg("exact"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_Signature::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_Signature::*)() const>(&IFSelect_Signature::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MatchValue_s",
                    (Standard_Boolean (*)( const Standard_CString , const TCollection_AsciiString & , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const Standard_CString , const TCollection_AsciiString & , const Standard_Boolean ) >(&IFSelect_Signature::MatchValue),
                    R"#(Default procedure to tell if a value <val> matches a text with a criterium <exact>. <exact> = True requires equality, else only contained (no reg-exp))#"  , py::arg("val"),  py::arg("text"),  py::arg("exact"))
        .def_static("IntValue_s",
                    (Standard_CString (*)( const Standard_Integer ) ) static_cast<Standard_CString (*)( const Standard_Integer ) >(&IFSelect_Signature::IntValue),
                    R"#(This procedure converts an Integer to a CString It is a convenient way when the value of a signature has the form of a simple integer value The value is to be used immediately (one buffer only, no copy))#"  , py::arg("val"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Signature::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Signature::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignatureList ,opencascade::handle<IFSelect_SignatureList> , Standard_Transient>>(m.attr("IFSelect_SignatureList"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("withlist")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("SetList",
             (void (IFSelect_SignatureList::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_SignatureList::*)( const Standard_Boolean ) >(&IFSelect_SignatureList::SetList),
             R"#(Changes the record-list status. The list is not cleared but its use changes)#"  , py::arg("withlist"))
        .def("ModeSignOnly",
             (Standard_Boolean & (IFSelect_SignatureList::*)() ) static_cast<Standard_Boolean & (IFSelect_SignatureList::*)() >(&IFSelect_SignatureList::ModeSignOnly),
             R"#(Returns modifiable the SignOnly Mode If False (D), the counter normally counts If True, the counting work is turned off, Add only fills the LastValue, which can be used as signature, when a counter works from data which are not available from a Signature)#" )
        .def("Clear",
             (void (IFSelect_SignatureList::*)() ) static_cast<void (IFSelect_SignatureList::*)() >(&IFSelect_SignatureList::Clear),
             R"#(None)#" )
        .def("Add",
             (void (IFSelect_SignatureList::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString ) ) static_cast<void (IFSelect_SignatureList::*)( const opencascade::handle<Standard_Transient> & , const Standard_CString ) >(&IFSelect_SignatureList::Add),
             R"#(Adds an entity with its signature, i.e. : - counts an item more for <sign> - if record-list status is set, records the entity Accepts a null entity (the signature is then for the global model). But if the string is empty, counts a Null item.)#"  , py::arg("ent"),  py::arg("sign"))
        .def("LastValue",
             (Standard_CString (IFSelect_SignatureList::*)() const) static_cast<Standard_CString (IFSelect_SignatureList::*)() const>(&IFSelect_SignatureList::LastValue),
             R"#(Returns the last value recorded by Add (only if SignMode set) Cleared by Clear or Init)#" )
        .def("Init",
             (void (IFSelect_SignatureList::*)( const Standard_CString , const NCollection_IndexedDataMap<TCollection_AsciiString, Standard_Integer> & , const NCollection_IndexedDataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & , const Standard_Integer ) ) static_cast<void (IFSelect_SignatureList::*)( const Standard_CString , const NCollection_IndexedDataMap<TCollection_AsciiString, Standard_Integer> & , const NCollection_IndexedDataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & , const Standard_Integer ) >(&IFSelect_SignatureList::Init),
             R"#(Aknowledges the list in once. Name identifies the Signature)#"  , py::arg("name"),  py::arg("count"),  py::arg("list"),  py::arg("nbnuls"))
        .def("List",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_SignatureList::*)( const Standard_CString ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_SignatureList::*)( const Standard_CString ) const>(&IFSelect_SignatureList::List),
             R"#(Returns the list of signatures, as a sequence of strings (but without their respective counts). It is ordered. By default, for all the signatures. If <root> is given non empty, for the signatures which begin by <root>)#"  , py::arg("root")=static_cast<const Standard_CString>(""))
        .def("HasEntities",
             (Standard_Boolean (IFSelect_SignatureList::*)() const) static_cast<Standard_Boolean (IFSelect_SignatureList::*)() const>(&IFSelect_SignatureList::HasEntities),
             R"#(Returns True if the list of Entities is aknowledged, else the method Entities will always return a Null Handle)#" )
        .def("NbNulls",
             (Standard_Integer (IFSelect_SignatureList::*)() const) static_cast<Standard_Integer (IFSelect_SignatureList::*)() const>(&IFSelect_SignatureList::NbNulls),
             R"#(Returns the count of null entities)#" )
        .def("NbTimes",
             (Standard_Integer (IFSelect_SignatureList::*)( const Standard_CString ) const) static_cast<Standard_Integer (IFSelect_SignatureList::*)( const Standard_CString ) const>(&IFSelect_SignatureList::NbTimes),
             R"#(Returns the number of times a signature was counted, 0 if it has not been recorded at all)#"  , py::arg("sign"))
        .def("Entities",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_SignatureList::*)( const Standard_CString ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_SignatureList::*)( const Standard_CString ) const>(&IFSelect_SignatureList::Entities),
             R"#(Returns the list of entities attached to a signature It is empty if <sign> has not been recorded It is a Null Handle if the list of entities is not known)#"  , py::arg("sign"))
        .def("SetName",
             (void (IFSelect_SignatureList::*)( const Standard_CString ) ) static_cast<void (IFSelect_SignatureList::*)( const Standard_CString ) >(&IFSelect_SignatureList::SetName),
             R"#(Defines a name for a SignatureList (used to print it))#"  , py::arg("name"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SignatureList::get_type_descriptor),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Transformer::get_type_descriptor),
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
        .def("DumpEntity",
             (void (IFSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IFSelect_WorkLibrary::*)( const opencascade::handle<Interface_InterfaceModel> & , const opencascade::handle<Interface_Protocol> & , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&IFSelect_WorkLibrary::DumpEntity),
             R"#(Calls deferred DumpEntity with the recorded default level)#"  , py::arg("model"),  py::arg("protocol"),  py::arg("entity"),  py::arg("S"))
        .def("SetDumpLevels",
             (void (IFSelect_WorkLibrary::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (IFSelect_WorkLibrary::*)( const Standard_Integer , const Standard_Integer ) >(&IFSelect_WorkLibrary::SetDumpLevels),
             R"#(Records a default level and a maximum value for level level for DumpEntity can go between 0 and <max> default value will be <def>)#"  , py::arg("def"),  py::arg("max"))
        .def("SetDumpHelp",
             (void (IFSelect_WorkLibrary::*)( const Standard_Integer , const Standard_CString ) ) static_cast<void (IFSelect_WorkLibrary::*)( const Standard_Integer , const Standard_CString ) >(&IFSelect_WorkLibrary::SetDumpHelp),
             R"#(Records a short line of help for a level (0 - max))#"  , py::arg("level"),  py::arg("help"))
        .def("DumpHelp",
             (Standard_CString (IFSelect_WorkLibrary::*)( const Standard_Integer ) const) static_cast<Standard_CString (IFSelect_WorkLibrary::*)( const Standard_Integer ) const>(&IFSelect_WorkLibrary::DumpHelp),
             R"#(Returns the help line recorded for <level>, or an empty string)#"  , py::arg("level"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_WorkLibrary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_WorkLibrary::*)() const>(&IFSelect_WorkLibrary::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("DumpLevels",
             []( IFSelect_WorkLibrary &self   ){ Standard_Integer  def; Standard_Integer  max; self.DumpLevels(def,max); return std::make_tuple(def,max); },
             R"#(Returns the recorded default and maximum dump levels If none was recorded, max is returned negative, def as zero)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_WorkLibrary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_WorkLibrary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_WorkSession ,opencascade::handle<IFSelect_WorkSession> , Standard_Transient>>(m.attr("IFSelect_WorkSession"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetErrorHandle",
             (void (IFSelect_WorkSession::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Boolean ) >(&IFSelect_WorkSession::SetErrorHandle),
             R"#(Changes the Error Handler status (by default, it is not set))#"  , py::arg("toHandle"))
        .def("ErrorHandle",
             (Standard_Boolean (IFSelect_WorkSession::*)() const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::ErrorHandle),
             R"#(Returns the Error Handler status)#" )
        .def("ShareOut",
             (const opencascade::handle<IFSelect_ShareOut> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<IFSelect_ShareOut> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::ShareOut),
             R"#(Returns the ShareOut defined at creation time)#" )
        .def("SetShareOut",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_ShareOut> & ) ) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_ShareOut> & ) >(&IFSelect_WorkSession::SetShareOut),
             R"#(Sets a new ShareOut. Fills Items which its content Warning : data from the former ShareOut are lost)#"  , py::arg("shareout"))
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
        .def("SetProtocol",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<Interface_Protocol> & ) ) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<Interface_Protocol> & ) >(&IFSelect_WorkSession::SetProtocol),
             R"#(Sets a Protocol, which will be used to determine Graphs, to Read and to Write Files)#"  , py::arg("protocol"))
        .def("Protocol",
             (const opencascade::handle<Interface_Protocol> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<Interface_Protocol> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::Protocol),
             R"#(Returns the Protocol. Null Handle if not yet set should be C++ : return const &)#" )
        .def("SetSignType",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Signature> & ) ) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Signature> & ) >(&IFSelect_WorkSession::SetSignType),
             R"#(Sets a specific Signature to be the SignType, i.e. the Signature which will determine TypeName from the Model (basic function). It is recorded in the GTool This Signature is also set as "xst-sign-type" (reserved name))#"  , py::arg("signtype"))
        .def("SignType",
             (opencascade::handle<IFSelect_Signature> (IFSelect_WorkSession::*)() const) static_cast<opencascade::handle<IFSelect_Signature> (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::SignType),
             R"#(Returns the current SignType)#" )
        .def("HasModel",
             (Standard_Boolean (IFSelect_WorkSession::*)() const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::HasModel),
             R"#(Returns True is a Model has been set)#" )
        .def("SetModel",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<Interface_InterfaceModel> & , const Standard_Boolean ) ) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<Interface_InterfaceModel> & , const Standard_Boolean ) >(&IFSelect_WorkSession::SetModel),
             R"#(Sets a Model as input : this will be the Model from which the ShareOut will work if <clearpointed> is True (default) all SelectPointed items are cleared, else they must be managed by the caller Remark : SetModel clears the Graph, recomputes it if a Protocol is set and if the Model is not empty, of course)#"  , py::arg("model"),  py::arg("clearpointed")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Model",
             (const opencascade::handle<Interface_InterfaceModel> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<Interface_InterfaceModel> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::Model),
             R"#(Returns the Model of the Work Session (Null Handle if none) should be C++ : return const &)#" )
        .def("SetLoadedFile",
             (void (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::SetLoadedFile),
             R"#(Stores the filename used for read for setting the model It is cleared by SetModel and ClearData(1))#"  , py::arg("theFileName"))
        .def("LoadedFile",
             (Standard_CString (IFSelect_WorkSession::*)() const) static_cast<Standard_CString (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::LoadedFile),
             R"#(Returns the filename used to load current model empty if unknown)#" )
        .def("ReadFile",
             (IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::ReadFile),
             R"#(Reads a file with the WorkLibrary (sets Model and LoadedFile) Returns a integer status which can be : RetDone if OK, RetVoid if no Protocol not defined, RetError for file not found, RetFail if fail during read)#"  , py::arg("filename"))
        .def("NbStartingEntities",
             (Standard_Integer (IFSelect_WorkSession::*)() const) static_cast<Standard_Integer (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::NbStartingEntities),
             R"#(Returns the count of Entities stored in the Model, or 0)#" )
        .def("StartingEntity",
             (opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::StartingEntity),
             R"#(Returns an Entity stored in the Model of the WorkSession (Null Handle is no Model or num out of range))#"  , py::arg("num"))
        .def("StartingNumber",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::StartingNumber),
             R"#(Returns the Number of an Entity in the Model (0 if no Model set or <ent> not in the Model))#"  , py::arg("ent"))
        .def("NumberFromLabel",
             (Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString , const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString , const Standard_Integer ) const>(&IFSelect_WorkSession::NumberFromLabel),
             R"#(From a given label in Model, returns the corresponding number Starts from first entity by Default, may start after a given number : this number may be given negative, its absolute value is then considered. Hence a loop on NumberFromLabel may be programmed (stop test is : returned value positive or null))#"  , py::arg("val"),  py::arg("afternum")=static_cast<const Standard_Integer>(0))
        .def("EntityLabel",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::EntityLabel),
             R"#(Returns the label for <ent>, as the Model does If <ent> is not in the Model or if no Model is loaded, a Null Handle is returned)#"  , py::arg("ent"))
        .def("EntityName",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::EntityName),
             R"#(Returns the Name of an Entity This Name is computed by the general service Name Returns a Null Handle if fails)#"  , py::arg("ent"))
        .def("CategoryNumber",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::CategoryNumber),
             R"#(Returns the Category Number determined for an entity it is computed by the class Category An unknown entity (number 0) gives a value -1)#"  , py::arg("ent"))
        .def("CategoryName",
             (Standard_CString (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_CString (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::CategoryName),
             R"#(Returns the Category Name determined for an entity it is computed by the class Category Remark : an unknown entity gives an empty string)#"  , py::arg("ent"))
        .def("ValidityName",
             (Standard_CString (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_CString (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::ValidityName),
             R"#(Returns the Validity Name determined for an entity it is computed by the class SignValidity Remark : an unknown entity gives an empty string)#"  , py::arg("ent"))
        .def("ClearData",
             (void (IFSelect_WorkSession::*)( const Standard_Integer ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Integer ) >(&IFSelect_WorkSession::ClearData),
             R"#(Clears recorded data (not the items) according mode : 1 : all Data : Model, Graph, CheckList, + ClearData 4 2 : Graph and CheckList (they will then be recomputed later) 3 : CheckList (it will be recomputed by ComputeCheck) 4 : just content of SelectPointed and Counters Plus 0 : does nothing but called by SetModel ClearData is virtual, hence it can be redefined to clear other data of a specialised Work Session)#"  , py::arg("mode"))
        .def("ComputeGraph",
             (Standard_Boolean (IFSelect_WorkSession::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const Standard_Boolean ) >(&IFSelect_WorkSession::ComputeGraph),
             R"#(Computes the Graph used for Selections, Displays ... If a HGraph is already set, with same model as given by method Model, does nothing. Else, computes a new Graph. If <enforce> is given True, computes a new Graph anyway. Remark that a call to ClearGraph will cause ComputeGraph to really compute a new Graph Returns True if Graph is OK, False else (i.e. if no Protocol is set, or if Model is absent or empty).)#"  , py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("HGraph",
             (opencascade::handle<Interface_HGraph> (IFSelect_WorkSession::*)() ) static_cast<opencascade::handle<Interface_HGraph> (IFSelect_WorkSession::*)() >(&IFSelect_WorkSession::HGraph),
             R"#(Returns the Computed Graph as HGraph (Null Handle if not set))#" )
        .def("Graph",
             (const Interface_Graph & (IFSelect_WorkSession::*)() ) static_cast<const Interface_Graph & (IFSelect_WorkSession::*)() >(&IFSelect_WorkSession::Graph),
             R"#(Returns the Computed Graph, for Read only)#" )
        .def("Shareds",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_WorkSession::Shareds),
             R"#(Returns the list of entities shared by <ent> (can be empty) Returns a null Handle if <ent> is unknown)#"  , py::arg("ent"))
        .def("Sharings",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_WorkSession::Sharings),
             R"#(Returns the list of entities sharing <ent> (can be empty) Returns a null Handle if <ent> is unknown)#"  , py::arg("ent"))
        .def("IsLoaded",
             (Standard_Boolean (IFSelect_WorkSession::*)() const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::IsLoaded),
             R"#(Returns True if a Model is defined and really loaded (not empty), a Protocol is set and a Graph has been computed. In this case, the WorkSession can start to work)#" )
        .def("ComputeCheck",
             (Standard_Boolean (IFSelect_WorkSession::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const Standard_Boolean ) >(&IFSelect_WorkSession::ComputeCheck),
             R"#(Computes the CheckList for the Model currently loaded It can then be used for displays, querries ... Returns True if OK, False else (i.e. no Protocol set, or Model absent). If <enforce> is False, works only if not already done or if a new Model has been loaded from last call. Remark : computation is enforced by every call to SetModel or RunTransformer)#"  , py::arg("enforce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ModelCheckList",
             (Interface_CheckIterator (IFSelect_WorkSession::*)( const Standard_Boolean ) ) static_cast<Interface_CheckIterator (IFSelect_WorkSession::*)( const Standard_Boolean ) >(&IFSelect_WorkSession::ModelCheckList),
             R"#(Returns the Check List for the Model currently loaded : <complete> = True : complete (syntactic & semantic messages), computed if not yet done <complete> = False : only syntactic (check file form))#"  , py::arg("complete")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CheckOne",
             (Interface_CheckIterator (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) ) static_cast<Interface_CheckIterator (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) >(&IFSelect_WorkSession::CheckOne),
             R"#(Returns a Check for a single entity, under the form of a CheckIterator (this gives only one form for the user) if <ent> is Null or equates the current Model, it gives the Global Check, else the Check for the given entity <complete> as for ModelCheckList)#"  , py::arg("ent"),  py::arg("complete")=static_cast<const Standard_Boolean>(Standard_True))
        .def("LastRunCheckList",
             (Interface_CheckIterator (IFSelect_WorkSession::*)() const) static_cast<Interface_CheckIterator (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::LastRunCheckList),
             R"#(Returns the Check List produced by the last execution of either : EvaluateFile(for Split), SendSplit, SendAll, SendSelected, RunTransformer-RunModifier Cleared by SetModel or ClearData(1) The field is protected, hence a specialized WorkSession may fill it)#" )
        .def("MaxIdent",
             (Standard_Integer (IFSelect_WorkSession::*)() const) static_cast<Standard_Integer (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::MaxIdent),
             R"#(Returns the Maximum Value for an Item Identifier. It can be greater to the count of known Items, because some can have been removed)#" )
        .def("Item",
             (opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::Item),
             R"#(Returns an Item, given its Ident. Returns a Null Handle if no Item corresponds to this Ident.)#"  , py::arg("id"))
        .def("ItemIdent",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::ItemIdent),
             R"#(Returns the Ident attached to an Item in the WorkSession, or Zero if it is unknown)#"  , py::arg("item"))
        .def("NamedItem",
             (opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_CString ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_CString ) const>(&IFSelect_WorkSession::NamedItem),
             R"#(Returns the Item which corresponds to a Variable, given its Name (whatever the type of this Item). Returns a Null Handle if this Name is not recorded)#"  , py::arg("name"))
        .def("NamedItem",
             (opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const opencascade::handle<TCollection_HAsciiString> & ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const opencascade::handle<TCollection_HAsciiString> & ) const>(&IFSelect_WorkSession::NamedItem),
             R"#(Same as above, but <name> is given through a Handle Especially Usefull with methods SelectionNames, etc...)#"  , py::arg("name"))
        .def("NameIdent",
             (Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString ) const>(&IFSelect_WorkSession::NameIdent),
             R"#(Returns the Ident attached to a Name, 0 if name not recorded)#"  , py::arg("name"))
        .def("HasName",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::HasName),
             R"#(Returns True if an Item of the WorkSession has an attached Name)#"  , py::arg("item"))
        .def("Name",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::Name),
             R"#(Returns the Name attached to an Item as a Variable of this WorkSession. If <item> is Null or not recorded, returns an empty string.)#"  , py::arg("item"))
        .def("AddItem",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) ) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) >(&IFSelect_WorkSession::AddItem),
             R"#(Adds an Item and returns its attached Ident. Does nothing if <item> is already recorded (and returns its attached Ident) <active> if True commands call to SetActive (see below) Remark : the determined Ident is used if <item> is a Dispatch, to fill the ShareOut)#"  , py::arg("item"),  py::arg("active")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AddNamedItem",
             (Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) ) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) >(&IFSelect_WorkSession::AddNamedItem),
             R"#(Adds an Item with an attached Name. If the Name is already known in the WorkSession, the older item losts it Returns Ident if Done, 0 else, i.e. if <item> is null If <name> is empty, works as AddItem (i.e. with no name) If <item> is already known but with no attached Name, this method tries to attached a Name to it <active> if True commands call to SetActive (see below))#"  , py::arg("name"),  py::arg("item"),  py::arg("active")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetActive",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Boolean ) >(&IFSelect_WorkSession::SetActive),
             R"#(Following the type of <item> : - Dispatch : Adds or Removes it in the ShareOut & FileNaming - GeneralModifier : Adds or Removes it for final sending (i.e. in the ModelCopier) Returns True if it did something, False else (state unchanged))#"  , py::arg("item"),  py::arg("mode"))
        .def("RemoveNamedItem",
             (Standard_Boolean (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::RemoveNamedItem),
             R"#(Removes an Item from the Session, given its Name Returns True if Done, False else (Name not recorded) (Applies only on Item which are Named))#"  , py::arg("name"))
        .def("RemoveName",
             (Standard_Boolean (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::RemoveName),
             R"#(Removes a Name without removing the Item Returns True if Done, False else (Name not recorded))#"  , py::arg("name"))
        .def("RemoveItem",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_WorkSession::RemoveItem),
             R"#(Removes an Item given its Ident. Returns False if <id> is attached to no Item in the WorkSession. For a Named Item, also removes its Name.)#"  , py::arg("item"))
        .def("ClearItems",
             (void (IFSelect_WorkSession::*)() ) static_cast<void (IFSelect_WorkSession::*)() >(&IFSelect_WorkSession::ClearItems),
             R"#(Clears all the recorded Items : Selections, Dispatches, Modifiers, and Strings & IntParams, with their Idents & Names. Remark that if a Model has been loaded, it is not cleared.)#" )
        .def("ItemLabel",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::ItemLabel),
             R"#(Returns a Label which illustrates the content of an Item, given its Ident. This Label is : - for a Text Parameter, "Text:<text value>" - for an Integer Parameter, "Integer:<integer value>" - for a Selection, a Dispatch or a Modifier, its Label (see these classes) - for any other kind of Variable, its cdl type)#"  , py::arg("id"))
        .def("ItemIdents",
             (opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Type> & ) const>(&IFSelect_WorkSession::ItemIdents),
             R"#(Fills a Sequence with the List of Idents attached to the Items of which Type complies with (IsKind) <type> (alphabetic order) Remark : <type> = TYPE(Standard_Transient) gives all the Idents which are suitable in the WorkSession)#"  , py::arg("type"))
        .def("ItemNames",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Type> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Type> & ) const>(&IFSelect_WorkSession::ItemNames),
             R"#(Fills a Sequence with the list of the Names attached to Items of which Type complies with (IsKind) <type> (alphabetic order) Remark : <type> = TYPE(Standard_Transient) gives all the Names)#"  , py::arg("type"))
        .def("ItemNamesForLabel",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_WorkSession::*)( const Standard_CString ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_WorkSession::*)( const Standard_CString ) const>(&IFSelect_WorkSession::ItemNamesForLabel),
             R"#(Fills a Sequence with the NAMES of the control items, of which the label matches <label> (contain it) : see NextIdentForLabel Search mode is fixed to "contained" If <label> is empty, returns all Names)#"  , py::arg("label"))
        .def("NextIdentForLabel",
             (Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString , const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const Standard_CString , const Standard_Integer , const Standard_Integer ) const>(&IFSelect_WorkSession::NextIdentForLabel),
             R"#(For query by Label with possible iterations Searches the Ident of which Item has a Label which matches a given one, the search starts from an initial Ident. Returns the first found Ident which follows <id>, or ZERO)#"  , py::arg("label"),  py::arg("id"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
        .def("NewParamFromStatic",
             (opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_CString , const Standard_CString ) ) static_cast<opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const Standard_CString , const Standard_CString ) >(&IFSelect_WorkSession::NewParamFromStatic),
             R"#(Creates a parameter as being bound to a Static If the Static is Integer, this creates an IntParam bound to it by its name. Else this creates a String which is the value of the Static. Returns a null handle if <statname> is unknown as a Static)#"  , py::arg("statname"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def("IntParam",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::IntParam),
             R"#(Returns an IntParam, given its Ident in the Session Null result if <id> is not suitable for an IntParam (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("IntValue",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_IntParam> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_IntParam> & ) const>(&IFSelect_WorkSession::IntValue),
             R"#(Returns Integer Value of an IntParam)#"  , py::arg("it"))
        .def("NewIntParam",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::NewIntParam),
             R"#(Creates a new IntParam. A Name can be set (Optional) Returns the created IntParam, or a Null Handle in case of Failure (see AddItem/AddNamedItem))#"  , py::arg("name")=static_cast<const Standard_CString>(""))
        .def("SetIntValue",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_IntParam> & , const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_IntParam> & , const Standard_Integer ) >(&IFSelect_WorkSession::SetIntValue),
             R"#(Changes the Integer Value of an IntParam Returns True if Done, False if <it> is not in the WorkSession)#"  , py::arg("it"),  py::arg("val"))
        .def("TextParam",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::TextParam),
             R"#(Returns a TextParam, given its Ident in the Session Null result if <id> is not suitable for a TextParam (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("TextValue",
             (TCollection_AsciiString (IFSelect_WorkSession::*)( const opencascade::handle<TCollection_HAsciiString> & ) const) static_cast<TCollection_AsciiString (IFSelect_WorkSession::*)( const opencascade::handle<TCollection_HAsciiString> & ) const>(&IFSelect_WorkSession::TextValue),
             R"#(Returns Text Value of a TextParam (a String) or an empty string if <it> is not in the WorkSession)#"  , py::arg("par"))
        .def("NewTextParam",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::NewTextParam),
             R"#(Creates a new (empty) TextParam. A Name can be set (Optional) Returns the created TextParam (as an HAsciiString), or a Null Handle in case of Failure (see AddItem/AddNamedItem))#"  , py::arg("name")=static_cast<const Standard_CString>(""))
        .def("SetTextValue",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<TCollection_HAsciiString> & , const Standard_CString ) >(&IFSelect_WorkSession::SetTextValue),
             R"#(Changes the Text Value of a TextParam (an HAsciiString) Returns True if Done, False if <it> is not in the WorkSession)#"  , py::arg("par"),  py::arg("val"))
        .def("Signature",
             (opencascade::handle<IFSelect_Signature> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Signature> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::Signature),
             R"#(Returns a Signature, given its Ident in the Session Null result if <id> is not suitable for a Signature (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("SignValue",
             (Standard_CString (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Signature> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_CString (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Signature> & , const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::SignValue),
             R"#(Returns the Value computed by a Signature for an Entity Returns an empty string if the entity does not belong to the loaded model)#"  , py::arg("sign"),  py::arg("ent"))
        .def("Selection",
             (opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::Selection),
             R"#(Returns a Selection, given its Ident in the Session Null result if <id> is not suitable for a Selection (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("EvalSelection",
             (Interface_EntityIterator (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<Interface_EntityIterator (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_WorkSession::EvalSelection),
             R"#(Evaluates the effect of a Selection applied on the input Model Returned Result remains empty if no input Model has been set)#"  , py::arg("sel"))
        .def("Sources",
             (IFSelect_SelectionIterator (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<IFSelect_SelectionIterator (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_WorkSession::Sources),
             R"#(Returns the Selections which are source of Selection, given its rank in the List of Selections (see SelectionIterator) Returned value is empty if <num> is out of range or if <sel> is not in the WorkSession)#"  , py::arg("sel"))
        .def("SelectionResult",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_WorkSession::SelectionResult),
             R"#(Returns the result of a Selection, computed by EvalSelection (see above) under the form of a HSequence (hence, it can be used by a frontal-engine logic). It can be empty Returns a Null Handle if <sel> is not in the WorkSession)#"  , py::arg("sel"))
        .def("SelectionResultFromList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<TColStd_HSequenceOfTransient> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<TColStd_HSequenceOfTransient> & ) const>(&IFSelect_WorkSession::SelectionResultFromList),
             R"#(Returns the result of a Selection, by forcing its input with a given list <list> (unless <list> is Null). RULES : <list> applies only for a SelectDeduct kind Selection : its Input is considered : if it is a SelectDeduct kind Selection, its Input is considered, etc... until an Input is not a Deduct/Extract : its result is replaced by <list> and all the chain of deductions is applied)#"  , py::arg("sel"),  py::arg("list"))
        .def("SetItemSelection",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<IFSelect_Selection> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_WorkSession::SetItemSelection),
             R"#(Sets a Selection as input for an item, according its type : if <item> is a Dispatch : as Final Selection if <item> is a GeneralModifier (i.e. any kind of Modifier) : as Selection used to filter entities to modify <sel> Null causes this Selection to be nullified Returns False if <item> is not of a suitable type, or <item> or <sel> is not in the WorkSession)#"  , py::arg("item"),  py::arg("sel"))
        .def("ResetItemSelection",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_WorkSession::ResetItemSelection),
             R"#(Resets input Selection which was set by SetItemSelection Same conditions as for SetItemSelection Returns True if done, False if <item> is not in the WorkSession)#"  , py::arg("item"))
        .def("ItemSelection",
             (opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::ItemSelection),
             R"#(Returns the Selection of a Dispatch or a GeneralModifier. Returns a Null Handle if none is defined or <item> not good type)#"  , py::arg("item"))
        .def("SignCounter",
             (opencascade::handle<IFSelect_SignCounter> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_SignCounter> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::SignCounter),
             R"#(Returns a SignCounter from its ident in the Session Null result if <id> is not suitable for a SignCounter (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("ComputeCounter",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_SignCounter> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_SignCounter> & , const Standard_Boolean ) >(&IFSelect_WorkSession::ComputeCounter),
             R"#(Computes the content of a SignCounter when it is defined with a Selection, then returns True Returns False if the SignCounter is not defined with a Selection, or if its Selection Mode is inhibited <forced> to work around optimisations)#"  , py::arg("counter"),  py::arg("forced")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ComputeCounterFromList",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_SignCounter> & , const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_SignCounter> & , const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_Boolean ) >(&IFSelect_WorkSession::ComputeCounterFromList),
             R"#(Computes the content of a SignCounter from an input list If <list> is Null, uses internal definition of the Counter : a Selection, else the whole Model (recomputation forced) If <clear> is True (D), starts from scratch Else, cumulates computations)#"  , py::arg("counter"),  py::arg("list"),  py::arg("clear")=static_cast<const Standard_Boolean>(Standard_True))
        .def("AppliedDispatches",
             (opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_WorkSession::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::AppliedDispatches),
             R"#(Returns the ordered list of dispatches stored by the ShareOut)#" )
        .def("ClearShareOut",
             (void (IFSelect_WorkSession::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Boolean ) >(&IFSelect_WorkSession::ClearShareOut),
             R"#(Clears the list of Dispatches recorded by the ShareOut if <only> disp is True, tha's all. Else, clears also the lists of Modifiers recorded by the ShareOut)#"  , py::arg("onlydisp"))
        .def("Dispatch",
             (opencascade::handle<IFSelect_Dispatch> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Dispatch> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::Dispatch),
             R"#(Returns a Dispatch, given its Ident in the Session Null result if <id> is not suitable for a Dispatch (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("DispatchRank",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & ) const>(&IFSelect_WorkSession::DispatchRank),
             R"#(Returns the rank of a Dispatch in the ShareOut, or 0 if <disp> is not in the ShareOut or not in the WorkSession)#"  , py::arg("disp"))
        .def("ModelCopier",
             (const opencascade::handle<IFSelect_ModelCopier> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<IFSelect_ModelCopier> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::ModelCopier),
             R"#(Gives access to the complete ModelCopier)#" )
        .def("SetModelCopier",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_ModelCopier> & ) ) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_ModelCopier> & ) >(&IFSelect_WorkSession::SetModelCopier),
             R"#(Sets a new ModelCopier. Fills Items which its content)#"  , py::arg("copier"))
        .def("NbFinalModifiers",
             (Standard_Integer (IFSelect_WorkSession::*)( const Standard_Boolean ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const Standard_Boolean ) const>(&IFSelect_WorkSession::NbFinalModifiers),
             R"#(Returns the count of Modifiers applied to final sending Model Modifiers if <formodel> is True, File Modifiers else (i.e. Modifiers which apply once the Models have been filled))#"  , py::arg("formodel"))
        .def("FinalModifierIdents",
             (opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_WorkSession::*)( const Standard_Boolean ) const) static_cast<opencascade::handle<TColStd_HSequenceOfInteger> (IFSelect_WorkSession::*)( const Standard_Boolean ) const>(&IFSelect_WorkSession::FinalModifierIdents),
             R"#(Fills a Sequence with a list of Idents, those attached to the Modifiers applied to final sending. Model Modifiers if <formodel> is True, File Modifiers else This list is given in the order in which they will be applied (which takes into account the Changes to Modifier Ranks))#"  , py::arg("formodel"))
        .def("GeneralModifier",
             (opencascade::handle<IFSelect_GeneralModifier> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_GeneralModifier> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::GeneralModifier),
             R"#(Returns a Modifier, given its Ident in the Session Null result if <id> is not suitable for a Modifier (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("ModelModifier",
             (opencascade::handle<IFSelect_Modifier> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Modifier> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::ModelModifier),
             R"#(Returns a Model Modifier, given its Ident in the Session, i.e. typed as a Modifier (not simply a GeneralModifier) Null result if <id> is not suitable for a Modifier (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("ModifierRank",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) const>(&IFSelect_WorkSession::ModifierRank),
             R"#(Returns the Rank of a Modifier given its Ident. Model or File Modifier according its type (ModelModifier or not) Remember that Modifiers are applied sequencially following their Rank : first Model Modifiers then File Modifiers Rank is given by rank of call to AddItem and can be changed by ChangeModifierRank)#"  , py::arg("item"))
        .def("ChangeModifierRank",
             (Standard_Boolean (IFSelect_WorkSession::*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const Standard_Boolean , const Standard_Integer , const Standard_Integer ) >(&IFSelect_WorkSession::ChangeModifierRank),
             R"#(Changes the Rank of a Modifier in the Session : Model Modifiers if <formodel> is True, File Modifiers else the Modifier n0 <before> is put to n0 <after> Return True if Done, False if <before> or <after> out of range)#"  , py::arg("formodel"),  py::arg("before"),  py::arg("after"))
        .def("ClearFinalModifiers",
             (void (IFSelect_WorkSession::*)() ) static_cast<void (IFSelect_WorkSession::*)() >(&IFSelect_WorkSession::ClearFinalModifiers),
             R"#(Removes all the Modifiers active in the ModelCopier : they become inactive and they are removed from the Session)#" )
        .def("SetAppliedModifier",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & , const opencascade::handle<Standard_Transient> & ) >(&IFSelect_WorkSession::SetAppliedModifier),
             R"#(Sets a GeneralModifier to be applied to an item : - item = ShareOut : applies for final sending (all dispatches) - item is a Dispatch : applies for this dispatch only Returns True if done, False if <modif> or <item> not in <me>)#"  , py::arg("modif"),  py::arg("item"))
        .def("ResetAppliedModifier",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) >(&IFSelect_WorkSession::ResetAppliedModifier),
             R"#(Resets a GeneralModifier to be applied Returns True if done, False if <modif> was not applied)#"  , py::arg("modif"))
        .def("UsesAppliedModifier",
             (opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_GeneralModifier> & ) const>(&IFSelect_WorkSession::UsesAppliedModifier),
             R"#(Returns the item on which a GeneralModifier is applied : the ShareOut, or a given Dispatch Returns a Null Handle if <modif> is not applied)#"  , py::arg("modif"))
        .def("Transformer",
             (opencascade::handle<IFSelect_Transformer> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Transformer> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::Transformer),
             R"#(Returns a Transformer, given its Ident in the Session Null result if <id> is not suitable for a Transformer (undefined, or defined for another kind of variable))#"  , py::arg("id"))
        .def("RunTransformer",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Transformer> & ) ) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Transformer> & ) >(&IFSelect_WorkSession::RunTransformer),
             R"#(Runs a Transformer on starting Model, which can then be edited or replaced by a new one. The Protocol can also be changed. Fills LastRunCheckList)#"  , py::arg("transf"))
        .def("RunModifier",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Modifier> & , const Standard_Boolean ) ) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Modifier> & , const Standard_Boolean ) >(&IFSelect_WorkSession::RunModifier),
             R"#(Runs a Modifier on Starting Model. It can modify entities, or add new ones. But the Model or the Protocol is unchanged. The Modifier is applied on each entity of the Model. See also RunModifierSelected Fills LastRunCheckList)#"  , py::arg("modif"),  py::arg("copy"))
        .def("RunModifierSelected",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Modifier> & , const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) ) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Modifier> & , const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) >(&IFSelect_WorkSession::RunModifierSelected),
             R"#(Acts as RunModifier, but the Modifier is applied on the list determined by a Selection, rather than on the whole Model If the selection is a null handle, the whole model is taken)#"  , py::arg("modif"),  py::arg("sel"),  py::arg("copy"))
        .def("NewTransformStandard",
             (opencascade::handle<IFSelect_Transformer> (IFSelect_WorkSession::*)( const Standard_Boolean , const Standard_CString ) ) static_cast<opencascade::handle<IFSelect_Transformer> (IFSelect_WorkSession::*)( const Standard_Boolean , const Standard_CString ) >(&IFSelect_WorkSession::NewTransformStandard),
             R"#(Creates and returns a TransformStandard, empty, with its Copy Option (True = Copy, False = On the Spot) and an optional name. To a TransformStandard, the method SetAppliedModifier applies)#"  , py::arg("copy"),  py::arg("name")=static_cast<const Standard_CString>(""))
        .def("SetModelContent",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) >(&IFSelect_WorkSession::SetModelContent),
             R"#(Defines a new content from the former one If <keep> is True, it is given by entities selected by Selection <sel> (and all shared entities) Else, it is given by all the former content but entities selected by the Selection <sel> (and properly shared ones) Returns True if done. Returns False if the selected list (from <sel>) is empty, hence nothing is done)#"  , py::arg("sel"),  py::arg("keep"))
        .def("FilePrefix",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::FilePrefix),
             R"#(Returns the defined File Prefix. Null Handle if not defined)#" )
        .def("DefaultFileRoot",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::DefaultFileRoot),
             R"#(Returns the defined Default File Root. It is used for Dispatches which have no specific root attached. Null Handle if not defined)#" )
        .def("FileExtension",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::FileExtension),
             R"#(Returns the defined File Extension. Null Handle if not defined)#" )
        .def("FileRoot",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & ) const>(&IFSelect_WorkSession::FileRoot),
             R"#(Returns the File Root defined for a Dispatch. Null if no Root Name is defined for it (hence, no File will be produced))#"  , py::arg("disp"))
        .def("SetFilePrefix",
             (void (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::SetFilePrefix),
             R"#(Defines a File Prefix)#"  , py::arg("name"))
        .def("SetDefaultFileRoot",
             (Standard_Boolean (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::SetDefaultFileRoot),
             R"#(Defines a Default File Root Name. Clears it is <name> = "" Returns True if OK, False if <name> already set for a Dispatch)#"  , py::arg("name"))
        .def("SetFileExtension",
             (void (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::SetFileExtension),
             R"#(Defines a File Extension)#"  , py::arg("name"))
        .def("SetFileRoot",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & , const Standard_CString ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & , const Standard_CString ) >(&IFSelect_WorkSession::SetFileRoot),
             R"#(Defines a Root for a Dispatch If <name> is empty, clears Root Name This has as effect to inhibit the production of File by <disp> Returns False if <disp> is not in the WorkSession or if a root name is already defined for it)#"  , py::arg("disp"),  py::arg("name"))
        .def("GiveFileRoot",
             (Standard_CString (IFSelect_WorkSession::*)( const Standard_CString ) const) static_cast<Standard_CString (IFSelect_WorkSession::*)( const Standard_CString ) const>(&IFSelect_WorkSession::GiveFileRoot),
             R"#(Extracts File Root Name from a given complete file name (uses OSD_Path))#"  , py::arg("file"))
        .def("GiveFileComplete",
             (Standard_CString (IFSelect_WorkSession::*)( const Standard_CString ) const) static_cast<Standard_CString (IFSelect_WorkSession::*)( const Standard_CString ) const>(&IFSelect_WorkSession::GiveFileComplete),
             R"#(Completes a file name as required, with Prefix and Extension (if defined; for a non-defined item, completes nothing))#"  , py::arg("file"))
        .def("ClearFile",
             (void (IFSelect_WorkSession::*)() ) static_cast<void (IFSelect_WorkSession::*)() >(&IFSelect_WorkSession::ClearFile),
             R"#(Erases all stored data from the File Evaluation (i.e. ALL former naming informations are lost))#" )
        .def("EvaluateFile",
             (void (IFSelect_WorkSession::*)() ) static_cast<void (IFSelect_WorkSession::*)() >(&IFSelect_WorkSession::EvaluateFile),
             R"#(Performs and stores a File Evaluation. The Results are a List of produced Models and a List of names (Strings), in parallel Fills LastRunCheckList)#" )
        .def("NbFiles",
             (Standard_Integer (IFSelect_WorkSession::*)() const) static_cast<Standard_Integer (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::NbFiles),
             R"#(Returns the count of produced Models)#" )
        .def("FileModel",
             (opencascade::handle<Interface_InterfaceModel> (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Interface_InterfaceModel> (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::FileModel),
             R"#(Returns a Model, given its rank in the Evaluation List)#"  , py::arg("num"))
        .def("FileName",
             (TCollection_AsciiString (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::FileName),
             R"#(Returns the name of a file corresponding to a produced Model, given its rank in the Evaluation List)#"  , py::arg("num"))
        .def("BeginSentFiles",
             (void (IFSelect_WorkSession::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Boolean ) >(&IFSelect_WorkSession::BeginSentFiles),
             R"#(Commands file sending to clear the list of already sent files, commands to record a new one if <record> is True This list is managed by the ModelCopier when SendSplit is called It allows a global exploitation of the set of sent files)#"  , py::arg("record"))
        .def("SentFiles",
             (opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_WorkSession::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfHAsciiString> (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::SentFiles),
             R"#(Returns the list of recorded sent files, or a Null Handle is recording has not been enabled)#" )
        .def("SendSplit",
             (Standard_Boolean (IFSelect_WorkSession::*)() ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)() >(&IFSelect_WorkSession::SendSplit),
             R"#(Performs creation of derived files from the input Model Takes its data (sub-models and names), from result EvaluateFile if active, else by dynamic Evaluation (not stored) After SendSplit, result of EvaluateFile is Cleared Fills LastRunCheckList)#" )
        .def("EvalSplit",
             (opencascade::handle<IFSelect_PacketList> (IFSelect_WorkSession::*)() const) static_cast<opencascade::handle<IFSelect_PacketList> (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::EvalSplit),
             R"#(Returns an Evaluation of the whole ShareOut definition : i.e. how the entities of the starting model are forecast to be sent to various files : list of packets according the dispatches, effective lists of roots for each packet (which determine the content of the corresponding file); plus evaluation of which entities are : forgotten (sent into no file), duplicated (sent into more than one file), sent into a given file. See the class PacketList for more details.)#" )
        .def("SentList",
             (Interface_EntityIterator (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<Interface_EntityIterator (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::SentList),
             R"#(Returns the list of Entities sent in files, accourding the count of files each one has been sent (these counts are reset by SetModel or SetRemaining(Forget) ) stored in Graph Status <count> = -1 (default) is for ENtities sent at least once <count> = 0 is for the Remaining List (entities not yet sent) <count> = 1 is for entities sent in one and only one file (the ideal case) Remaining Data are computed on each Sending/Copying output files (see methods EvaluateFile and SendSplit) Graph Status is 0 for Remaining Entity, <count> for Sent into <count> files This status is set to 0 (not yet sent) for all by SetModel and by SetRemaining(mode=Forget,Display))#"  , py::arg("count")=static_cast<const Standard_Integer>(- 1))
        .def("MaxSendingCount",
             (Standard_Integer (IFSelect_WorkSession::*)() const) static_cast<Standard_Integer (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::MaxSendingCount),
             R"#(Returns the greater count of different files in which any of the starting entities could be sent. Before any file output, this count is 0. Ideal count is 1. More than 1 means that duplications occur.)#" )
        .def("SetRemaining",
             (Standard_Boolean (IFSelect_WorkSession::*)( const IFSelect_RemainMode ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const IFSelect_RemainMode ) >(&IFSelect_WorkSession::SetRemaining),
             R"#(Processes Remaining data (after having sent files), mode : Forget : forget remaining info (i.e. clear all "Sent" status) Compute : compute and keep remaining (does nothing if : remaining is empty or if no files has been sent) Display : display entities recorded as remaining Undo : restore former state of data (after Remaining(1) ) Returns True if OK, False else (i.e. mode = 2 and Remaining List is either empty or takes all the entities, or mode = 3 and no former computation of remaining data was done))#"  , py::arg("mode"))
        .def("SendAll",
             (IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString , const Standard_Boolean ) ) static_cast<IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString , const Standard_Boolean ) >(&IFSelect_WorkSession::SendAll),
             R"#(Sends the starting Model into one file, without splitting, managing remaining data or anything else. <computegraph> true commands the Graph to be recomputed before sending : required when a Model is filled in several steps)#"  , py::arg("filename"),  py::arg("computegraph")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SendSelected",
             (IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) ) static_cast<IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) >(&IFSelect_WorkSession::SendSelected),
             R"#(Sends a part of the starting Model into one file, without splitting. But remaining data are managed. <computegraph> true commands the Graph to be recomputed before sending : required when a Model is filled in several steps)#"  , py::arg("filename"),  py::arg("sel"),  py::arg("computegraph")=static_cast<const Standard_Boolean>(Standard_False))
        .def("WriteFile",
             (IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString ) ) static_cast<IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString ) >(&IFSelect_WorkSession::WriteFile),
             R"#(Writes the current Interface Model globally to a File, and returns a write status which can be : Done OK, Fail file could not be written, Error no norm is selected Remark : It is a simple, one-file writing, other operations are available (such as splitting ...) which calls SendAll)#"  , py::arg("filename"))
        .def("WriteFile",
             (IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<IFSelect_Selection> & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_WorkSession::WriteFile),
             R"#(Writes a sub-part of the current Interface Model to a File, as defined by a Selection <sel>, recomputes the Graph, and returns a write status which can be : Done OK, Fail file could not be written, Error no norm is selected Remark : It is a simple, one-file writing, other operations are available (such as splitting ...) which calls SendSelected)#"  , py::arg("filename"),  py::arg("sel"))
        .def("NbSources",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_WorkSession::NbSources),
             R"#(Returns the count of Input Selections known for a Selection, or 0 if <sel> not in the WorkSession. This count is one for a SelectDeduct / SelectExtract kind, two for SelectControl kind, variable for a SelectCombine (Union/Intersection), zero else)#"  , py::arg("sel"))
        .def("Source",
             (opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const Standard_Integer ) const>(&IFSelect_WorkSession::Source),
             R"#(Returns the <num>th Input Selection of a Selection (see NbSources). Returns a Null Handle if <sel> is not in the WorkSession or if <num> is out of the range <1-NbSources> To obtain more details, see the method Sources)#"  , py::arg("sel"),  py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("IsReversedSelectExtract",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_WorkSession::IsReversedSelectExtract),
             R"#(Returns True if <sel> a Reversed SelectExtract, False else)#"  , py::arg("sel"))
        .def("ToggleSelectExtract",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_WorkSession::ToggleSelectExtract),
             R"#(Toggles the Sense (Direct <-> Reversed) of a SelectExtract Returns True if Done, False if <sel> is not a SelectExtract or is not in the WorkSession)#"  , py::arg("sel"))
        .def("SetInputSelection",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_WorkSession::SetInputSelection),
             R"#(Sets an Input Selection (as <input>) to a SelectExtract or a SelectDeduct (as <sel>). Returns True if Done, False if <sel> is neither a SelectExtract nor a SelectDeduct, or not in the WorkSession)#"  , py::arg("sel"),  py::arg("input"))
        .def("SetControl",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & , const Standard_Boolean ) >(&IFSelect_WorkSession::SetControl),
             R"#(Sets an Input Selection, Main if <formain> is True, Second else (as <sc>) to a SelectControl (as <sel>). Returns True if Done, False if <sel> is not a SelectControl, or <sc> or <sel> is not in the WorkSession)#"  , py::arg("sel"),  py::arg("sc"),  py::arg("formain")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CombineAdd",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & , const Standard_Integer ) ) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & , const Standard_Integer ) >(&IFSelect_WorkSession::CombineAdd),
             R"#(Adds an input selection to a SelectCombine (Union or Inters.). Returns new count of inputs for this SelectCombine if Done or 0 if <sel> is not kind of SelectCombine, or if <seladd> or <sel> is not in the WorkSession By default, adding is done at the end of the list Else, it is an insertion to rank <atnum> (usefull for Un-ReDo))#"  , py::arg("selcomb"),  py::arg("seladd"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("CombineRemove",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & ) ) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_WorkSession::CombineRemove),
             R"#(Removes an input selection from a SelectCombine (Union or Intersection). Returns True if done, False if <selcomb> is not kind of SelectCombine or <selrem> is not source of <selcomb>)#"  , py::arg("selcomb"),  py::arg("selrem"))
        .def("NewSelectPointed",
             (opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_CString ) ) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_CString ) >(&IFSelect_WorkSession::NewSelectPointed),
             R"#(Creates a new Selection, of type SelectPointed, its content starts with <list>. A name must be given (can be empty))#"  , py::arg("list"),  py::arg("name"))
        .def("SetSelectPointed",
             (Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_Integer ) const) static_cast<Standard_Boolean (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & , const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_Integer ) const>(&IFSelect_WorkSession::SetSelectPointed),
             R"#(Changes the content of a Selection of type SelectPointed According <mode> : 0 set <list> as new content (clear former) 1 : adds <list> to actual content -1 : removes <list> from actual content Returns True if done, False if <sel> is not a SelectPointed)#"  , py::arg("sel"),  py::arg("list"),  py::arg("mode"))
        .def("GiveSelection",
             (opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const Standard_CString ) const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_WorkSession::*)( const Standard_CString ) const>(&IFSelect_WorkSession::GiveSelection),
             R"#(Returns a Selection from a Name : - the name of a Selection : this Selection - the name of a Signature + criteria between (..) : a new Selection from this Signature - an entity or a list of entities : a new SelectPointed Else, returns a Null Handle)#"  , py::arg("selname"))
        .def("GiveList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::GiveList),
             R"#(Determines a list of entities from an object : <obj> already HSequenceOfTransient : returned itself <obj> Selection : its Result of Evaluation is returned <obj> an entity of the Model : a HSequence which contains it else, an empty HSequence <obj> the Model it self : ALL its content (not only the roots))#"  , py::arg("obj"))
        .def("GiveList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const Standard_CString , const Standard_CString ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const Standard_CString , const Standard_CString ) const>(&IFSelect_WorkSession::GiveList),
             R"#(Computes a List of entities from two alphanums, first and second, as follows : if <first> is a Number or Label of an entity : this entity if <first> is a list of Numbers/Labels : the list of entities if <first> is the name of a Selection in <WS>, and <second> not defined, the standard result of this Selection else, let's consider "first second" : this whole phrase is splitted by blanks, as follows (RECURSIVE CALL) : - the leftest term is the final selection - the other terms define the result of the selection - and so on (the "leftest minus one" is a selection, of which the input is given by the remaining ...))#"  , py::arg("first"),  py::arg("second")=static_cast<const Standard_CString>(""))
        .def("GiveListFromList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<Standard_Transient> & ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const Standard_CString , const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::GiveListFromList),
             R"#(Computes a List of entities from the model as follows <first> beeing a Selection or a combination of Selections, <ent> beeing an entity or a list of entities (as a HSequenceOfTransient) : the standard result of this selection applied to this list if <ent> is Null, the standard definition of the selection is used (which contains a default input selection) if <selname> is erroneous, a null handle is returned)#"  , py::arg("selname"),  py::arg("ent"))
        .def("GiveListCombined",
             (opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_Integer ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (IFSelect_WorkSession::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const opencascade::handle<TColStd_HSequenceOfTransient> & , const Standard_Integer ) const>(&IFSelect_WorkSession::GiveListCombined),
             R"#(Combines two lists and returns the result, according to mode : <mode> < 0 : entities in <l1> AND NOT in <l2> <mode> = 0 : entities in <l1> AND in <l2> <mode> > 0 : entities in <l1> OR in <l2>)#"  , py::arg("l1"),  py::arg("l2"),  py::arg("mode"))
        .def("QueryCheckList",
             (void (IFSelect_WorkSession::*)( const Interface_CheckIterator & ) ) static_cast<void (IFSelect_WorkSession::*)( const Interface_CheckIterator & ) >(&IFSelect_WorkSession::QueryCheckList),
             R"#(Loads data from a check iterator to query status on it)#"  , py::arg("chl"))
        .def("QueryCheckStatus",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::QueryCheckStatus),
             R"#(Determines check status for an entity regarding last call to QueryCheckList : -1 : <ent> unknown in the model, ignored 0 : no check at all, immediate or inherited thru Graph 1 : immediate warning (no fail), no inherited check 2 : immediate fail, no inherited check +10 : idem but some inherited warning (no fail) +20 : idem but some inherited fail)#"  , py::arg("ent"))
        .def("QueryParent",
             (Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_WorkSession::QueryParent),
             R"#(Determines if <entdad> is parent of <entson> (in the graph), returns : -1 if no; 0 if <entdad> = <entson> 1 if immediate parent, > 1 if parent, gives count of steps)#"  , py::arg("entdad"),  py::arg("entson"))
        .def("SetParams",
             (void (IFSelect_WorkSession::*)( const NCollection_Vector<opencascade::handle<Standard_Transient> > & , const NCollection_Vector<Standard_Integer> & ) ) static_cast<void (IFSelect_WorkSession::*)( const NCollection_Vector<opencascade::handle<Standard_Transient> > & , const NCollection_Vector<Standard_Integer> & ) >(&IFSelect_WorkSession::SetParams),
             R"#(Sets a list of Parameters, i.e. TypedValue, to be handled through an Editor The two lists are parallel, if <params> is longer than <uses>, surnumeral parameters are for general use)#"  , py::arg("params"),  py::arg("uselist"))
        .def("TraceStatics",
             (void (IFSelect_WorkSession::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (IFSelect_WorkSession::*)( const Standard_Integer , const Standard_Integer ) const>(&IFSelect_WorkSession::TraceStatics),
             R"#(Traces the Statics attached to a given use number If <use> is given positive (normal), the trace is embedded with a header and a trailer If <use> is negative, just values are printed (this allows to make compositions) Remark : use number 5 commands use -2 to be traced Remark : use numbers 4 and 6 command use -3 to be traced)#"  , py::arg("use"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
        .def("DumpShare",
             (void (IFSelect_WorkSession::*)() const) static_cast<void (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::DumpShare),
             R"#(Dumps contents of the ShareOut (on "cout"))#" )
        .def("ListItems",
             (void (IFSelect_WorkSession::*)( const Standard_CString ) const) static_cast<void (IFSelect_WorkSession::*)( const Standard_CString ) const>(&IFSelect_WorkSession::ListItems),
             R"#(Lists the Labels of all Items of the WorkSession If <label> is defined, lists labels which contain it)#"  , py::arg("label")=static_cast<const Standard_CString>(""))
        .def("ListFinalModifiers",
             (void (IFSelect_WorkSession::*)( const Standard_Boolean ) const) static_cast<void (IFSelect_WorkSession::*)( const Standard_Boolean ) const>(&IFSelect_WorkSession::ListFinalModifiers),
             R"#(Lists the Modifiers of the session (for each one, displays its Label). Listing is done following Ranks (Modifiers are invoked following their ranks) Model Modifiers if <formodel> is True, File Modifiers else)#"  , py::arg("formodel"))
        .def("DumpSelection",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_WorkSession::DumpSelection),
             R"#(Lists a Selection and its Sources (see SelectionIterator), given its rank in the list)#"  , py::arg("sel"))
        .def("DumpModel",
             (void (IFSelect_WorkSession::*)( const Standard_Integer , const opencascade::handle<Message_Messenger> & ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Integer , const opencascade::handle<Message_Messenger> & ) >(&IFSelect_WorkSession::DumpModel),
             R"#(Lists the content of the Input Model (if there is one) According level : 0 -> gives only count of Entities and Roots 1 -> Lists also Roots; 2 -> Lists all Entities (by TraceType) 3 -> Performs a call to CheckList (Fails) and lists the result 4 -> as 3 but all CheckList (Fails + Warnings) 5,6,7 : as 3 but resp. Count,List,Labels by Fail 8,9,10 : as 4 but resp. Count,List,Labels by message)#"  , py::arg("level"),  py::arg("S"))
        .def("TraceDumpModel",
             (void (IFSelect_WorkSession::*)( const Standard_Integer ) ) static_cast<void (IFSelect_WorkSession::*)( const Standard_Integer ) >(&IFSelect_WorkSession::TraceDumpModel),
             R"#(Dumps the current Model (as inherited DumpModel), on currently defined Default Trace File (default is standard output))#"  , py::arg("mode"))
        .def("DumpEntity",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer , const opencascade::handle<Message_Messenger> & ) const>(&IFSelect_WorkSession::DumpEntity),
             R"#(Dumps a starting entity according to the current norm. To do this, it calls DumpEntity from WorkLibrary. <level> is to be interpreted for each norm : see specific classes of WorkLibrary for it. Generally, 0 if for very basic (only type ...), greater values give more and more details.)#"  , py::arg("ent"),  py::arg("level"),  py::arg("S"))
        .def("PrintEntityStatus",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) ) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) >(&IFSelect_WorkSession::PrintEntityStatus),
             R"#(Prints main informations about an entity : its number, type, validity (and checks if any), category, shareds and sharings.. mutable because it can recompute checks as necessary)#"  , py::arg("ent"),  py::arg("S"))
        .def("TraceDumpEntity",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<Standard_Transient> & , const Standard_Integer ) const>(&IFSelect_WorkSession::TraceDumpEntity),
             R"#(Dumps an entity from the current Model as inherited DumpEntity on currently defined Default Trace File (<level> interpreted according to the Norm, see WorkLibrary))#"  , py::arg("ent"),  py::arg("level"))
        .def("PrintCheckList",
             (void (IFSelect_WorkSession::*)( const Interface_CheckIterator & , const Standard_Boolean , const IFSelect_PrintCount ) const) static_cast<void (IFSelect_WorkSession::*)( const Interface_CheckIterator & , const Standard_Boolean , const IFSelect_PrintCount ) const>(&IFSelect_WorkSession::PrintCheckList),
             R"#(Prints a CheckIterator to the current Trace File, controlled with the current Model complete or fails only, according to <failsonly> <mode> defines the mode of printing 0 : sequential, according entities; else with a CheckCounter 1 : according messages, count of entities 2 : id but with list of entities, designated by their numbers 3 : as 2 but with labels of entities)#"  , py::arg("checklist"),  py::arg("failsonly"),  py::arg("mode"))
        .def("PrintSignatureList",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_SignatureList> & , const IFSelect_PrintCount ) const) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_SignatureList> & , const IFSelect_PrintCount ) const>(&IFSelect_WorkSession::PrintSignatureList),
             R"#(Prints a SignatureList to the current Trace File, controlled with the current Model <mode> defines the mode of printing (see SignatureList))#"  , py::arg("signlist"),  py::arg("mode"))
        .def("EvaluateSelection",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_WorkSession::EvaluateSelection),
             R"#(Displays the list of Entities selected by a Selection (i.e. the result of EvalSelection).)#"  , py::arg("sel"))
        .def("EvaluateDispatch",
             (void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & , const Standard_Integer ) const) static_cast<void (IFSelect_WorkSession::*)( const opencascade::handle<IFSelect_Dispatch> & , const Standard_Integer ) const>(&IFSelect_WorkSession::EvaluateDispatch),
             R"#(Displays the result of applying a Dispatch on the input Model (also shows Remainder if there is) <mode> = 0 (default), displays nothing else <mode> = 1 : displays also duplicated entities (because of this dispatch) <mode> = 2 : displays the entities of the starting Model which are not taken by this dispatch (forgotten entities) <mode> = 3 : displays both duplicated and forgotten entities Remark : EvaluateComplete displays these data evaluated for for all the dispatches, if there are several)#"  , py::arg("disp"),  py::arg("mode")=static_cast<const Standard_Integer>(0))
        .def("EvaluateComplete",
             (void (IFSelect_WorkSession::*)( const Standard_Integer ) const) static_cast<void (IFSelect_WorkSession::*)( const Standard_Integer ) const>(&IFSelect_WorkSession::EvaluateComplete),
             R"#(Displays the effect of applying the ShareOut on the input Model. <mode> = 0 (default) : displays only roots for each packet, <mode> = 1 : displays all entities for each packet, plus duplicated entities <mode> = 2 : same as <mode> = 1, plus displays forgotten entities (which are in no packet at all))#"  , py::arg("mode")=static_cast<const Standard_Integer>(0))
        .def("ListEntities",
             (void (IFSelect_WorkSession::*)( const Interface_EntityIterator & , const Standard_Integer ) const) static_cast<void (IFSelect_WorkSession::*)( const Interface_EntityIterator & , const Standard_Integer ) const>(&IFSelect_WorkSession::ListEntities),
             R"#(Internal method which displays an EntityIterator <mode> 0 gives short display (only entity numbers) 1 gives a more complete trace (1 line per Entity) (can be used each time a trace has to be output from a list) 2 gives a form suitable for givelist : (n1,n2,n3...))#"  , py::arg("iter"),  py::arg("mode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_WorkSession::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_WorkSession::*)() const>(&IFSelect_WorkSession::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_WorkSession::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_WorkSession::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_Act ,opencascade::handle<IFSelect_Act> , IFSelect_Activator>>(m.attr("IFSelect_Act"))
    // constructors
        .def(py::init< const Standard_CString,const Standard_CString,const IFSelect_ActFunc >()  , py::arg("name"),  py::arg("help"),  py::arg("func") )
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
        .def_static("SetGroup_s",
                    (void (*)( const Standard_CString , const Standard_CString ) ) static_cast<void (*)( const Standard_CString , const Standard_CString ) >(&IFSelect_Act::SetGroup),
                    R"#(Changes the default group name for the following Acts group empty means to come back to default from Activator Also a file name can be precised (to query by getsource))#"  , py::arg("group"),  py::arg("file")=static_cast<const Standard_CString>(""))
        .def_static("AddFunc_s",
                    (void (*)( const Standard_CString , const Standard_CString , const IFSelect_ActFunc ) ) static_cast<void (*)( const Standard_CString , const Standard_CString , const IFSelect_ActFunc ) >(&IFSelect_Act::AddFunc),
                    R"#(Adds a function with its name and help : creates an Act then records it as normal function)#"  , py::arg("name"),  py::arg("help"),  py::arg("func"))
        .def_static("AddFSet_s",
                    (void (*)( const Standard_CString , const Standard_CString , const IFSelect_ActFunc ) ) static_cast<void (*)( const Standard_CString , const Standard_CString , const IFSelect_ActFunc ) >(&IFSelect_Act::AddFSet),
                    R"#(Adds a function with its name and help : creates an Act then records it as function for XSET (i.e. to create control item))#"  , py::arg("name"),  py::arg("help"),  py::arg("func"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_Act::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Act::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_BasicDumper ,opencascade::handle<IFSelect_BasicDumper> , IFSelect_SessionDumper>>(m.attr("IFSelect_BasicDumper"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_BasicDumper::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_CheckCounter ,opencascade::handle<IFSelect_CheckCounter> , IFSelect_SignatureList>>(m.attr("IFSelect_CheckCounter"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("withlist")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("SetSignature",
             (void (IFSelect_CheckCounter::*)( const opencascade::handle<MoniTool_SignText> & ) ) static_cast<void (IFSelect_CheckCounter::*)( const opencascade::handle<MoniTool_SignText> & ) >(&IFSelect_CheckCounter::SetSignature),
             R"#(Sets a specific signature Else, the current SignType (in the model) is used)#"  , py::arg("sign"))
        .def("Signature",
             (opencascade::handle<MoniTool_SignText> (IFSelect_CheckCounter::*)() const) static_cast<opencascade::handle<MoniTool_SignText> (IFSelect_CheckCounter::*)() const>(&IFSelect_CheckCounter::Signature),
             R"#(Returns the Signature;)#" )
        .def("Analyse",
             (void (IFSelect_CheckCounter::*)( const Interface_CheckIterator & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IFSelect_CheckCounter::*)( const Interface_CheckIterator & , const opencascade::handle<Interface_InterfaceModel> & , const Standard_Boolean , const Standard_Boolean ) >(&IFSelect_CheckCounter::Analyse),
             R"#(Analyses a CheckIterator according a Model (which detains the entities for which the CheckIterator has messages), i.e. counts messages for entities If <original> is True, does not consider final messages but those before interpretation (such as inserting variables : integers, reals, strings) If <failsonly> is True, only Fails are considered Remark : global messages are recorded with a Null entity)#"  , py::arg("list"),  py::arg("model"),  py::arg("original")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("failsonly")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_CheckCounter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_CheckCounter::*)() const>(&IFSelect_CheckCounter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_CheckCounter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_CheckCounter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispGlobal ,opencascade::handle<IFSelect_DispGlobal> , IFSelect_Dispatch>>(m.attr("IFSelect_DispGlobal"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_DispGlobal::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerCount ,opencascade::handle<IFSelect_DispPerCount> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerCount"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Count",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_DispPerCount::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_DispPerCount::*)() const>(&IFSelect_DispPerCount::Count),
             R"#(Returns the Count Parameter used for splitting)#" )
        .def("SetCount",
             (void (IFSelect_DispPerCount::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_DispPerCount::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_DispPerCount::SetCount),
             R"#(Sets a new Parameter for Count)#"  , py::arg("count"))
        .def("CountValue",
             (Standard_Integer (IFSelect_DispPerCount::*)() const) static_cast<Standard_Integer (IFSelect_DispPerCount::*)() const>(&IFSelect_DispPerCount::CountValue),
             R"#(Returns the effective value of the count parameter (if Count Parameter not Set or value not positive, returns 1))#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_DispPerCount::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerFiles ,opencascade::handle<IFSelect_DispPerFiles> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerFiles"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Count",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_DispPerFiles::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_DispPerFiles::*)() const>(&IFSelect_DispPerFiles::Count),
             R"#(Returns the Count Parameter used for splitting)#" )
        .def("SetCount",
             (void (IFSelect_DispPerFiles::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_DispPerFiles::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_DispPerFiles::SetCount),
             R"#(Sets a new Parameter for Count)#"  , py::arg("count"))
        .def("CountValue",
             (Standard_Integer (IFSelect_DispPerFiles::*)() const) static_cast<Standard_Integer (IFSelect_DispPerFiles::*)() const>(&IFSelect_DispPerFiles::CountValue),
             R"#(Returns the effective value of the count parameter (if Count Parameter not Set or value not positive, returns 1))#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_DispPerFiles::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerOne ,opencascade::handle<IFSelect_DispPerOne> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerOne"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_DispPerOne::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_DispPerSignature ,opencascade::handle<IFSelect_DispPerSignature> , IFSelect_Dispatch>>(m.attr("IFSelect_DispPerSignature"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SignCounter",
             (opencascade::handle<IFSelect_SignCounter> (IFSelect_DispPerSignature::*)() const) static_cast<opencascade::handle<IFSelect_SignCounter> (IFSelect_DispPerSignature::*)() const>(&IFSelect_DispPerSignature::SignCounter),
             R"#(Returns the SignCounter used for splitting)#" )
        .def("SetSignCounter",
             (void (IFSelect_DispPerSignature::*)( const opencascade::handle<IFSelect_SignCounter> & ) ) static_cast<void (IFSelect_DispPerSignature::*)( const opencascade::handle<IFSelect_SignCounter> & ) >(&IFSelect_DispPerSignature::SetSignCounter),
             R"#(Sets a SignCounter for sort Remark : it is set to record lists of entities, not only counts)#"  , py::arg("sign"))
        .def("SignName",
             (Standard_CString (IFSelect_DispPerSignature::*)() const) static_cast<Standard_CString (IFSelect_DispPerSignature::*)() const>(&IFSelect_DispPerSignature::SignName),
             R"#(Returns the name of the SignCounter, which caracterises the sorting criterium for this Dispatch)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_DispPerSignature::get_type_descriptor),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_Modifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ParamEditor ,opencascade::handle<IFSelect_ParamEditor> , IFSelect_Editor>>(m.attr("IFSelect_ParamEditor"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_CString >()  , py::arg("nbmax")=static_cast<const Standard_Integer>(100),  py::arg("label")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("AddValue",
             (void (IFSelect_ParamEditor::*)( const opencascade::handle<Interface_TypedValue> & , const Standard_CString ) ) static_cast<void (IFSelect_ParamEditor::*)( const opencascade::handle<Interface_TypedValue> & , const Standard_CString ) >(&IFSelect_ParamEditor::AddValue),
             R"#(Adds a TypedValue By default, its short name equates its complete name, it can be explicited)#"  , py::arg("val"),  py::arg("shortname")=static_cast<const Standard_CString>(""))
        .def("AddConstantText",
             (void (IFSelect_ParamEditor::*)( const Standard_CString , const Standard_CString , const Standard_CString ) ) static_cast<void (IFSelect_ParamEditor::*)( const Standard_CString , const Standard_CString , const Standard_CString ) >(&IFSelect_ParamEditor::AddConstantText),
             R"#(Adds a Constant Text, it will be Read Only By default, its long name equates its shortname)#"  , py::arg("val"),  py::arg("shortname"),  py::arg("completename")=static_cast<const Standard_CString>(""))
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
        .def_static("StaticEditor_s",
                    (opencascade::handle<IFSelect_ParamEditor> (*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & , const Standard_CString ) ) static_cast<opencascade::handle<IFSelect_ParamEditor> (*)( const opencascade::handle<TColStd_HSequenceOfHAsciiString> & , const Standard_CString ) >(&IFSelect_ParamEditor::StaticEditor),
                    R"#(Returns a ParamEditor to work on the Static Parameters of which names are listed in <list> Null Handle if <list> is null or empty)#"  , py::arg("list"),  py::arg("label")=static_cast<const Standard_CString>(""))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_ParamEditor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_ParamEditor::get_type_descriptor),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectBase::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectCombine ,opencascade::handle<IFSelect_SelectCombine>,Py_IFSelect_SelectCombine , IFSelect_Selection>>(m.attr("IFSelect_SelectCombine"))
    // constructors
    // custom constructors
    // methods
        .def("NbInputs",
             (Standard_Integer (IFSelect_SelectCombine::*)() const) static_cast<Standard_Integer (IFSelect_SelectCombine::*)() const>(&IFSelect_SelectCombine::NbInputs),
             R"#(Returns the count of Input Selections)#" )
        .def("Input",
             (opencascade::handle<IFSelect_Selection> (IFSelect_SelectCombine::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_SelectCombine::*)( const Standard_Integer ) const>(&IFSelect_SelectCombine::Input),
             R"#(Returns an Input Selection, given its rank in the list)#"  , py::arg("num"))
        .def("InputRank",
             (Standard_Integer (IFSelect_SelectCombine::*)( const opencascade::handle<IFSelect_Selection> & ) const) static_cast<Standard_Integer (IFSelect_SelectCombine::*)( const opencascade::handle<IFSelect_Selection> & ) const>(&IFSelect_SelectCombine::InputRank),
             R"#(Returns the rank of an input Selection, 0 if not in the list. Most generally, its value is meaningless, except for testing the presence of an input Selection : - == 0 if <sel> is not an input for <me> - > 0 if <sel> is an input for <me>)#"  , py::arg("sel"))
        .def("Add",
             (void (IFSelect_SelectCombine::*)( const opencascade::handle<IFSelect_Selection> & , const Standard_Integer ) ) static_cast<void (IFSelect_SelectCombine::*)( const opencascade::handle<IFSelect_Selection> & , const Standard_Integer ) >(&IFSelect_SelectCombine::Add),
             R"#(Adds a Selection to the filling list By default, adds it to the end of the list A Positive rank less then NbInputs gives an insertion rank (InsertBefore : the new <atnum>th item of the list is <sel>))#"  , py::arg("sel"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("Remove",
             (Standard_Boolean (IFSelect_SelectCombine::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<Standard_Boolean (IFSelect_SelectCombine::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_SelectCombine::Remove),
             R"#(Removes an input Selection. Returns True if Done, False, if <sel> is not an input for <me>)#"  , py::arg("sel"))
        .def("Remove",
             (Standard_Boolean (IFSelect_SelectCombine::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_SelectCombine::*)( const Standard_Integer ) >(&IFSelect_SelectCombine::Remove),
             R"#(Removes an input Selection, given its rank in the list Returns True if Done, False if <num> is out of range)#"  , py::arg("num"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectCombine::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectControl ,opencascade::handle<IFSelect_SelectControl>,Py_IFSelect_SelectControl , IFSelect_Selection>>(m.attr("IFSelect_SelectControl"))
    // constructors
    // custom constructors
    // methods
        .def("MainInput",
             (opencascade::handle<IFSelect_Selection> (IFSelect_SelectControl::*)() const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_SelectControl::*)() const>(&IFSelect_SelectControl::MainInput),
             R"#(Returns the Main Input Selection)#" )
        .def("HasSecondInput",
             (Standard_Boolean (IFSelect_SelectControl::*)() const) static_cast<Standard_Boolean (IFSelect_SelectControl::*)() const>(&IFSelect_SelectControl::HasSecondInput),
             R"#(Returns True if a Control Input is defined Thus, Result can be computed differently if there is a Control Input or if there is none)#" )
        .def("SecondInput",
             (opencascade::handle<IFSelect_Selection> (IFSelect_SelectControl::*)() const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_SelectControl::*)() const>(&IFSelect_SelectControl::SecondInput),
             R"#(Returns the Control Input Selection, or a Null Handle)#" )
        .def("SetMainInput",
             (void (IFSelect_SelectControl::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_SelectControl::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_SelectControl::SetMainInput),
             R"#(Sets a Selection to be the Main Input)#"  , py::arg("sel"))
        .def("SetSecondInput",
             (void (IFSelect_SelectControl::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_SelectControl::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_SelectControl::SetSecondInput),
             R"#(Sets a Selection to be the Control Input)#"  , py::arg("sel"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectControl::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectDeduct ,opencascade::handle<IFSelect_SelectDeduct>,Py_IFSelect_SelectDeduct , IFSelect_Selection>>(m.attr("IFSelect_SelectDeduct"))
    // constructors
    // custom constructors
    // methods
        .def("SetInput",
             (void (IFSelect_SelectDeduct::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_SelectDeduct::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_SelectDeduct::SetInput),
             R"#(Defines or Changes the Input Selection)#"  , py::arg("sel"))
        .def("Input",
             (opencascade::handle<IFSelect_Selection> (IFSelect_SelectDeduct::*)() const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_SelectDeduct::*)() const>(&IFSelect_SelectDeduct::Input),
             R"#(Returns the Input Selection)#" )
        .def("HasInput",
             (Standard_Boolean (IFSelect_SelectDeduct::*)() const) static_cast<Standard_Boolean (IFSelect_SelectDeduct::*)() const>(&IFSelect_SelectDeduct::HasInput),
             R"#(Returns True if the Input Selection is defined, False else)#" )
        .def("HasAlternate",
             (Standard_Boolean (IFSelect_SelectDeduct::*)() const) static_cast<Standard_Boolean (IFSelect_SelectDeduct::*)() const>(&IFSelect_SelectDeduct::HasAlternate),
             R"#(Tells if an Alternate List has been set, i.e. : the Alternate Definition is present and set)#" )
        .def("Alternate",
             (opencascade::handle<IFSelect_SelectPointed> & (IFSelect_SelectDeduct::*)() ) static_cast<opencascade::handle<IFSelect_SelectPointed> & (IFSelect_SelectDeduct::*)() >(&IFSelect_SelectDeduct::Alternate),
             R"#(Returns the Alternate Definition It is returned modifiable, hence an already defined SelectPointed can be used But if it was not yet defined, it is created the first time)#" )
        .def("InputResult",
             (Interface_EntityIterator (IFSelect_SelectDeduct::*)( const Interface_Graph & ) const) static_cast<Interface_EntityIterator (IFSelect_SelectDeduct::*)( const Interface_Graph & ) const>(&IFSelect_SelectDeduct::InputResult),
             R"#(Returns the Result determined by Input Selection, as Unique if Input Selection is not defined, returns an empty list.)#"  , py::arg("G"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectDeduct::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SessionPilot ,opencascade::handle<IFSelect_SessionPilot> , IFSelect_Activator>>(m.attr("IFSelect_SessionPilot"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("prompt")=static_cast<const Standard_CString>("") )
    // custom constructors
    // methods
        .def("Session",
             (opencascade::handle<IFSelect_WorkSession> (IFSelect_SessionPilot::*)() const) static_cast<opencascade::handle<IFSelect_WorkSession> (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::Session),
             R"#(Returns the WorkSession which is worked on)#" )
        .def("Library",
             (opencascade::handle<IFSelect_WorkLibrary> (IFSelect_SessionPilot::*)() const) static_cast<opencascade::handle<IFSelect_WorkLibrary> (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::Library),
             R"#(Returns the WorKlibrary (Null if not set). WorkLibrary is used to Read and Write Files, according to the Norm)#" )
        .def("RecordMode",
             (Standard_Boolean (IFSelect_SessionPilot::*)() const) static_cast<Standard_Boolean (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::RecordMode),
             R"#(Returns the Record Mode for Commands. Default is False.)#" )
        .def("SetSession",
             (void (IFSelect_SessionPilot::*)( const opencascade::handle<IFSelect_WorkSession> & ) ) static_cast<void (IFSelect_SessionPilot::*)( const opencascade::handle<IFSelect_WorkSession> & ) >(&IFSelect_SessionPilot::SetSession),
             R"#(Sets a WorkSession to be worked on)#"  , py::arg("WS"))
        .def("SetLibrary",
             (void (IFSelect_SessionPilot::*)( const opencascade::handle<IFSelect_WorkLibrary> & ) ) static_cast<void (IFSelect_SessionPilot::*)( const opencascade::handle<IFSelect_WorkLibrary> & ) >(&IFSelect_SessionPilot::SetLibrary),
             R"#(Sets a WorkLibrary)#"  , py::arg("WL"))
        .def("SetRecordMode",
             (void (IFSelect_SessionPilot::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_SessionPilot::*)( const Standard_Boolean ) >(&IFSelect_SessionPilot::SetRecordMode),
             R"#(Changes the RecordMode.)#"  , py::arg("mode"))
        .def("SetCommandLine",
             (void (IFSelect_SessionPilot::*)( const TCollection_AsciiString & ) ) static_cast<void (IFSelect_SessionPilot::*)( const TCollection_AsciiString & ) >(&IFSelect_SessionPilot::SetCommandLine),
             R"#(Sets the value of the Command Line to be interpreted Also prepares the interpretation (splitting by blanks))#"  , py::arg("command"))
        .def("CommandLine",
             (const TCollection_AsciiString & (IFSelect_SessionPilot::*)() const) static_cast<const TCollection_AsciiString & (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::CommandLine),
             R"#(Returns the Command Line to be interpreted)#" )
        .def("CommandPart",
             (Standard_CString (IFSelect_SessionPilot::*)( const Standard_Integer ) const) static_cast<Standard_CString (IFSelect_SessionPilot::*)( const Standard_Integer ) const>(&IFSelect_SessionPilot::CommandPart),
             R"#(Returns the part of the command line which begins at argument <numarg> between 0 and NbWords-1 (by default, all the line) Empty string if out of range)#"  , py::arg("numarg")=static_cast<const Standard_Integer>(0))
        .def("NbWords",
             (Standard_Integer (IFSelect_SessionPilot::*)() const) static_cast<Standard_Integer (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::NbWords),
             R"#(Returns the count of words of the Command Line, separated by blanks : 0 if empty, one if a command without args, else it gives the count of args minus one. Warning : limited to 10 (command title + 9 args))#" )
        .def("Word",
             (const TCollection_AsciiString & (IFSelect_SessionPilot::*)( const Standard_Integer ) const) static_cast<const TCollection_AsciiString & (IFSelect_SessionPilot::*)( const Standard_Integer ) const>(&IFSelect_SessionPilot::Word),
             R"#(Returns a word given its rank in the Command Line. Begins at 0 which is the Command Title, 1 is the 1st arg., etc...)#"  , py::arg("num"))
        .def("Arg",
             (Standard_CString (IFSelect_SessionPilot::*)( const Standard_Integer ) const) static_cast<Standard_CString (IFSelect_SessionPilot::*)( const Standard_Integer ) const>(&IFSelect_SessionPilot::Arg),
             R"#(Returns a word given its rank, as a CString. As for Word, begins at 0 (the command name), etc...)#"  , py::arg("num"))
        .def("RemoveWord",
             (Standard_Boolean (IFSelect_SessionPilot::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_SessionPilot::*)( const Standard_Integer ) >(&IFSelect_SessionPilot::RemoveWord),
             R"#(Removes a word given its rank. Returns True if Done, False if <num> is out of range)#"  , py::arg("num"))
        .def("NbCommands",
             (Standard_Integer (IFSelect_SessionPilot::*)() const) static_cast<Standard_Integer (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::NbCommands),
             R"#(Returns the count of recorded Commands)#" )
        .def("Command",
             (const TCollection_AsciiString & (IFSelect_SessionPilot::*)( const Standard_Integer ) const) static_cast<const TCollection_AsciiString & (IFSelect_SessionPilot::*)( const Standard_Integer ) const>(&IFSelect_SessionPilot::Command),
             R"#(Returns a recorded Command, given its rank (from 1))#"  , py::arg("num"))
        .def("RecordItem",
             (IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SessionPilot::RecordItem),
             R"#(Allows to associate a Transient Value with the last execution as a partial result Returns RetDone if item is not Null, RetFail if item is Null Remark : it is nullified for each Perform)#"  , py::arg("item"))
        .def("RecordedItem",
             (opencascade::handle<Standard_Transient> (IFSelect_SessionPilot::*)() const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_SessionPilot::*)() const>(&IFSelect_SessionPilot::RecordedItem),
             R"#(Returns the Transient Object which was recorded with the current Line Command. If none was, returns a Null Handle)#" )
        .def("Clear",
             (void (IFSelect_SessionPilot::*)() ) static_cast<void (IFSelect_SessionPilot::*)() >(&IFSelect_SessionPilot::Clear),
             R"#(Clears the recorded informations (commands, objects))#" )
        .def("ReadScript",
             (IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const Standard_CString ) ) static_cast<IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const Standard_CString ) >(&IFSelect_SessionPilot::ReadScript),
             R"#(Reads commands from a Script File, named <file>. By default (file = ""), reads from standard input with a prompt Else (reading from a file), the read commands are displayed onto standard output. Allows nested reads. Reading is stopped either by command x or exit, or by reaching end of file Return Value follows the rules of Do : RetEnd for normal end, RetFail if script could not be opened)#"  , py::arg("file")=static_cast<const Standard_CString>(""))
        .def("Perform",
             (IFSelect_ReturnStatus (IFSelect_SessionPilot::*)() ) static_cast<IFSelect_ReturnStatus (IFSelect_SessionPilot::*)() >(&IFSelect_SessionPilot::Perform),
             R"#(Executes the Command, itself (for built-in commands, which have priority) or by using the list of Activators. The value returned is : RetVoid if nothing done (void command) RetDone if execution OK, RetEnd if END OF SESSION, RetError if command unknown or incorrect, RetFail if error on execution If execution is OK and RecordMode is set, this Command Line is recorded to the list (see below).)#" )
        .def("ExecuteAlias",
             (IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const TCollection_AsciiString & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const TCollection_AsciiString & ) >(&IFSelect_SessionPilot::ExecuteAlias),
             R"#(Executes the Commands, except that the command name (word 0) is aliased. The rest of the command line is unchanged If <alias> is empty, Executes with no change)#"  , py::arg("aliasname"))
        .def("Execute",
             (IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const TCollection_AsciiString & ) ) static_cast<IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const TCollection_AsciiString & ) >(&IFSelect_SessionPilot::Execute),
             R"#(Sets the Command then tries to execute it. Return value : same as for Perform)#"  , py::arg("command"))
        .def("ExecuteCounter",
             (IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const opencascade::handle<IFSelect_SignCounter> & , const Standard_Integer , const IFSelect_PrintCount ) ) static_cast<IFSelect_ReturnStatus (IFSelect_SessionPilot::*)( const opencascade::handle<IFSelect_SignCounter> & , const Standard_Integer , const IFSelect_PrintCount ) >(&IFSelect_SessionPilot::ExecuteCounter),
             R"#(Executes a Counter in a general way If <numword> is greater than count of command words, it counts all the model. Else it considers the word <numword> as the identifier of a Selection <mode> gives the mode of printing results, default is CountByItem)#"  , py::arg("counter"),  py::arg("numword"),  py::arg("mode")=static_cast<const IFSelect_PrintCount>(IFSelect_CountByItem))
        .def("Number",
             (Standard_Integer (IFSelect_SessionPilot::*)( const Standard_CString ) const) static_cast<Standard_Integer (IFSelect_SessionPilot::*)( const Standard_CString ) const>(&IFSelect_SessionPilot::Number),
             R"#(Interprets a string value as an entity number : if it gives an integer, returns its value else, considers it as ENtityLabel (preferably case sensitive) in case of failure, returns 0)#"  , py::arg("val"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SessionPilot::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignCategory ,opencascade::handle<IFSelect_SignCategory> , IFSelect_Signature>>(m.attr("IFSelect_SignCategory"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SignCategory::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignCounter ,opencascade::handle<IFSelect_SignCounter> , IFSelect_SignatureList>>(m.attr("IFSelect_SignCounter"))
    // constructors
        .def(py::init< const Standard_Boolean,const Standard_Boolean >()  , py::arg("withmap")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("withlist")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<IFSelect_Signature> &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("matcher"),  py::arg("withmap")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("withlist")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Signature",
             (opencascade::handle<IFSelect_Signature> (IFSelect_SignCounter::*)() const) static_cast<opencascade::handle<IFSelect_Signature> (IFSelect_SignCounter::*)() const>(&IFSelect_SignCounter::Signature),
             R"#(Returns the Signature used to count entities. It can be null.)#" )
        .def("SetMap",
             (void (IFSelect_SignCounter::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_SignCounter::*)( const Standard_Boolean ) >(&IFSelect_SignCounter::SetMap),
             R"#(Changes the control status. The map is not cleared, simply its use changes)#"  , py::arg("withmap"))
        .def("AddEntity",
             (Standard_Boolean (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_SignCounter::AddEntity),
             R"#(Adds an entity by considering its signature, which is given by call to method AddSign Returns True if added, False if already in the map (and map control status set))#"  , py::arg("ent"),  py::arg("model"))
        .def("AddSign",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_SignCounter::AddSign),
             R"#(Adds an entity (already filtered by Map) with its signature. This signature can be computed with the containing model. Its value is provided by the object Signature given at start, if no Signature is defined, it does nothing.)#"  , py::arg("ent"),  py::arg("model"))
        .def("AddList",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_SignCounter::AddList),
             R"#(Adds a list of entities by adding each of the items)#"  , py::arg("list"),  py::arg("model"))
        .def("AddWithGraph",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Interface_Graph & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & , const Interface_Graph & ) >(&IFSelect_SignCounter::AddWithGraph),
             R"#(Adds a list of entities in the context given by the graph Default just call basic AddList Can be redefined to get a signature computed with the graph)#"  , py::arg("list"),  py::arg("graph"))
        .def("AddModel",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_SignCounter::AddModel),
             R"#(Adds all the entities contained in a Model)#"  , py::arg("model"))
        .def("AddFromSelection",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<IFSelect_Selection> & , const Interface_Graph & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<IFSelect_Selection> & , const Interface_Graph & ) >(&IFSelect_SignCounter::AddFromSelection),
             R"#(Adds the result determined by a Selection from a Graph Remark : does not impact at all data from SetSelection & Co)#"  , py::arg("sel"),  py::arg("G"))
        .def("SetSelection",
             (void (IFSelect_SignCounter::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_SignCounter::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_SignCounter::SetSelection),
             R"#(Sets a Selection as input : this causes content to be cleared then the Selection to be ready to compute (but not immediatly))#"  , py::arg("sel"))
        .def("Selection",
             (opencascade::handle<IFSelect_Selection> (IFSelect_SignCounter::*)() const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_SignCounter::*)() const>(&IFSelect_SignCounter::Selection),
             R"#(Returns the selection, or a null Handle)#" )
        .def("SetSelMode",
             (void (IFSelect_SignCounter::*)( const Standard_Integer ) ) static_cast<void (IFSelect_SignCounter::*)( const Standard_Integer ) >(&IFSelect_SignCounter::SetSelMode),
             R"#(Changes the mode of working with the selection : -1 just clears optimisation data and nothing else 0 clears it 1 inhibits it for computing (but no clearing) 2 sets it active for computing Default at creation is 0, after SetSelection (not null) is 2)#"  , py::arg("selmode"))
        .def("SelMode",
             (Standard_Integer (IFSelect_SignCounter::*)() const) static_cast<Standard_Integer (IFSelect_SignCounter::*)() const>(&IFSelect_SignCounter::SelMode),
             R"#(Returns the mode of working with the selection)#" )
        .def("ComputeSelected",
             (Standard_Boolean (IFSelect_SignCounter::*)( const Interface_Graph & , const Standard_Boolean ) ) static_cast<Standard_Boolean (IFSelect_SignCounter::*)( const Interface_Graph & , const Standard_Boolean ) >(&IFSelect_SignCounter::ComputeSelected),
             R"#(Computes from the selection result, if selection is active (mode 2). If selection is not defined (mode 0) or is inhibited (mode 1) does nothing. Returns True if computation is done (or optimised), False else This method is called by ComputeCounter from WorkSession)#"  , py::arg("G"),  py::arg("forced")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Sign",
             (opencascade::handle<TCollection_HAsciiString> (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<opencascade::handle<TCollection_HAsciiString> (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SignCounter::Sign),
             R"#(Determines and returns the value of the signature for an entity as an HAsciiString. This method works exactly as AddSign, which is optimized)#"  , py::arg("ent"),  py::arg("model"))
        .def("ComputedSign",
             (Standard_CString (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) ) static_cast<Standard_CString (IFSelect_SignCounter::*)( const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) >(&IFSelect_SignCounter::ComputedSign),
             R"#(Applies AddWithGraph on one entity, and returns the Signature Value which has been recorded To do this, Add is called with SignOnly Mode True during the call, the returned value is LastValue)#"  , py::arg("ent"),  py::arg("G"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IFSelect_SignCounter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IFSelect_SignCounter::*)() const>(&IFSelect_SignCounter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignCounter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SignCounter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignMultiple ,opencascade::handle<IFSelect_SignMultiple> , IFSelect_Signature>>(m.attr("IFSelect_SignMultiple"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("name") )
    // custom constructors
    // methods
        .def("Add",
             (void (IFSelect_SignMultiple::*)( const opencascade::handle<IFSelect_Signature> & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (IFSelect_SignMultiple::*)( const opencascade::handle<IFSelect_Signature> & , const Standard_Integer , const Standard_Boolean ) >(&IFSelect_SignMultiple::Add),
             R"#(Adds a Signature. Width, if given, gives the tabulation If <maxi> is True, it is a forced tabulation (overlength is replaced by a final dot) If <maxi> is False, just 3 blanks follow an overlength)#"  , py::arg("subsign"),  py::arg("width")=static_cast<const Standard_Integer>(0),  py::arg("maxi")=static_cast<const Standard_Boolean>(Standard_False))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SignMultiple::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignType ,opencascade::handle<IFSelect_SignType> , IFSelect_Signature>>(m.attr("IFSelect_SignType"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("nopk")=static_cast<const Standard_Boolean>(Standard_False) )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SignType::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignValidity ,opencascade::handle<IFSelect_SignValidity> , IFSelect_Signature>>(m.attr("IFSelect_SignValidity"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("CVal_s",
                    (Standard_CString (*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_CString (*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_SignValidity::CVal),
                    R"#(Returns the Signature for a Transient object, as a validity deducted from data (reports) stored in the model. Class method, can be called by any one)#"  , py::arg("ent"),  py::arg("model"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IFSelect_SignValidity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SignValidity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_TransformStandard ,opencascade::handle<IFSelect_TransformStandard> , IFSelect_Transformer>>(m.attr("IFSelect_TransformStandard"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetCopyOption",
             (void (IFSelect_TransformStandard::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_TransformStandard::*)( const Standard_Boolean ) >(&IFSelect_TransformStandard::SetCopyOption),
             R"#(Sets the Copy option to a new value : - True for StandardCopy - False for OnTheSpot)#"  , py::arg("option"))
        .def("CopyOption",
             (Standard_Boolean (IFSelect_TransformStandard::*)() const) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)() const>(&IFSelect_TransformStandard::CopyOption),
             R"#(Returns the Copy option)#" )
        .def("SetSelection",
             (void (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<void (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_TransformStandard::SetSelection),
             R"#(Sets a Selection (or unsets if Null) This Selection then defines the list of entities on which the Modifiers will be applied If it is set, it has priority on Selections of Modifiers Else, for each Modifier its Selection is evaluated By default, all the Model is taken)#"  , py::arg("sel"))
        .def("Selection",
             (opencascade::handle<IFSelect_Selection> (IFSelect_TransformStandard::*)() const) static_cast<opencascade::handle<IFSelect_Selection> (IFSelect_TransformStandard::*)() const>(&IFSelect_TransformStandard::Selection),
             R"#(Returns the Selection, Null by default)#" )
        .def("NbModifiers",
             (Standard_Integer (IFSelect_TransformStandard::*)() const) static_cast<Standard_Integer (IFSelect_TransformStandard::*)() const>(&IFSelect_TransformStandard::NbModifiers),
             R"#(Returns the count of recorded Modifiers)#" )
        .def("Modifier",
             (opencascade::handle<IFSelect_Modifier> (IFSelect_TransformStandard::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_Modifier> (IFSelect_TransformStandard::*)( const Standard_Integer ) const>(&IFSelect_TransformStandard::Modifier),
             R"#(Returns a Modifier given its rank in the list)#"  , py::arg("num"))
        .def("ModifierRank",
             (Standard_Integer (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Modifier> & ) const) static_cast<Standard_Integer (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Modifier> & ) const>(&IFSelect_TransformStandard::ModifierRank),
             R"#(Returns the rank of a Modifier in the list, 0 if unknown)#"  , py::arg("modif"))
        .def("AddModifier",
             (Standard_Boolean (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Modifier> & , const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Modifier> & , const Standard_Integer ) >(&IFSelect_TransformStandard::AddModifier),
             R"#(Adds a Modifier to the list : - <atnum> = 0 (default) : at the end of the list - <atnum> > 0 : at rank <atnum> Returns True if done, False if <atnum> is out of range)#"  , py::arg("modif"),  py::arg("atnum")=static_cast<const Standard_Integer>(0))
        .def("RemoveModifier",
             (Standard_Boolean (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Modifier> & ) ) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)( const opencascade::handle<IFSelect_Modifier> & ) >(&IFSelect_TransformStandard::RemoveModifier),
             R"#(Removes a Modifier from the list Returns True if done, False if <modif> not in the list)#"  , py::arg("modif"))
        .def("RemoveModifier",
             (Standard_Boolean (IFSelect_TransformStandard::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)( const Standard_Integer ) >(&IFSelect_TransformStandard::RemoveModifier),
             R"#(Removes a Modifier from the list, given its rank Returns True if done, False if <num> is out of range)#"  , py::arg("num"))
        .def("Perform",
             (Standard_Boolean (IFSelect_TransformStandard::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) >(&IFSelect_TransformStandard::Perform),
             R"#(Performs the Standard Transformation, by calling Copy then ApplyModifiers (which can return an error status))#"  , py::arg("G"),  py::arg("protocol"),  py::arg("checks"),  py::arg("newmod"))
        .def("Copy",
             (void (IFSelect_TransformStandard::*)( const Interface_Graph & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<void (IFSelect_TransformStandard::*)( const Interface_Graph & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_TransformStandard::Copy),
             R"#(This the first operation. It calls StandardCopy or OnTheSpot according the option)#"  , py::arg("G"),  py::arg("TC"),  py::arg("newmod"))
        .def("StandardCopy",
             (void (IFSelect_TransformStandard::*)( const Interface_Graph & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<void (IFSelect_TransformStandard::*)( const Interface_Graph & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_TransformStandard::StandardCopy),
             R"#(This is the standard action of Copy : its takes into account only the remaining entities (noted by Graph Status positive) and their proper dependances of course. Produces a new model.)#"  , py::arg("G"),  py::arg("TC"),  py::arg("newmod"))
        .def("OnTheSpot",
             (void (IFSelect_TransformStandard::*)( const Interface_Graph & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<void (IFSelect_TransformStandard::*)( const Interface_Graph & , Interface_CopyTool & , opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_TransformStandard::OnTheSpot),
             R"#(This is the OnTheSpot action : each entity is bound with ... itself. The produced model is the same as the starting one.)#"  , py::arg("G"),  py::arg("TC"),  py::arg("newmod"))
        .def("ApplyModifiers",
             (Standard_Boolean (IFSelect_TransformStandard::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_TransformStandard::*)( const Interface_Graph & , const opencascade::handle<Interface_Protocol> & , Interface_CopyTool & , Interface_CheckIterator & , opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_TransformStandard::ApplyModifiers),
             R"#(Applies the modifiers sequencially. For each one, prepares required data (if a Selection is associated as a filter). For the option OnTheSpot, it determines if the graph may be changed and updates <newmod> if required If a Modifier causes an error (check "HasFailed"), ApplyModifier stops : the following Modifiers are ignored)#"  , py::arg("G"),  py::arg("protocol"),  py::arg("TC"),  py::arg("checks"),  py::arg("newmod"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_TransformStandard::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_GraphCounter ,opencascade::handle<IFSelect_GraphCounter> , IFSelect_SignCounter>>(m.attr("IFSelect_GraphCounter"))
    // constructors
        .def(py::init< const Standard_Boolean,const Standard_Boolean >()  , py::arg("withmap")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("withlist")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Applied",
             (opencascade::handle<IFSelect_SelectDeduct> (IFSelect_GraphCounter::*)() const) static_cast<opencascade::handle<IFSelect_SelectDeduct> (IFSelect_GraphCounter::*)() const>(&IFSelect_GraphCounter::Applied),
             R"#(Returns the applied selection)#" )
        .def("SetApplied",
             (void (IFSelect_GraphCounter::*)( const opencascade::handle<IFSelect_SelectDeduct> & ) ) static_cast<void (IFSelect_GraphCounter::*)( const opencascade::handle<IFSelect_SelectDeduct> & ) >(&IFSelect_GraphCounter::SetApplied),
             R"#(Sets a new applied selection)#"  , py::arg("sel"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_GraphCounter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ModifEditForm ,opencascade::handle<IFSelect_ModifEditForm> , IFSelect_Modifier>>(m.attr("IFSelect_ModifEditForm"))
    // constructors
        .def(py::init< const opencascade::handle<IFSelect_EditForm> & >()  , py::arg("editform") )
    // custom constructors
    // methods
        .def("EditForm",
             (opencascade::handle<IFSelect_EditForm> (IFSelect_ModifEditForm::*)() const) static_cast<opencascade::handle<IFSelect_EditForm> (IFSelect_ModifEditForm::*)() const>(&IFSelect_ModifEditForm::EditForm),
             R"#(Returns the EditForm)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_ModifEditForm::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_ModifReorder ,opencascade::handle<IFSelect_ModifReorder> , IFSelect_Modifier>>(m.attr("IFSelect_ModifReorder"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("rootlast")=static_cast<const Standard_Boolean>(Standard_True) )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_ModifReorder::get_type_descriptor),
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
        .def("SetRange",
             (void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & , const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & , const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectAnyList::SetRange),
             R"#(Sets a Range for numbers, with a lower and a upper limits)#"  , py::arg("rankfrom"),  py::arg("rankto"))
        .def("SetOne",
             (void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectAnyList::SetOne),
             R"#(Sets a unique number (only one Entity will be sorted as True))#"  , py::arg("rank"))
        .def("SetFrom",
             (void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectAnyList::SetFrom),
             R"#(Sets a Lower limit but no upper limit)#"  , py::arg("rankfrom"))
        .def("SetUntil",
             (void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectAnyList::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectAnyList::SetUntil),
             R"#(Sets an Upper limit but no lower limit (equivalent to lower 1))#"  , py::arg("rankto"))
        .def("HasLower",
             (Standard_Boolean (IFSelect_SelectAnyList::*)() const) static_cast<Standard_Boolean (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::HasLower),
             R"#(Returns True if a Lower limit is defined)#" )
        .def("Lower",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_SelectAnyList::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::Lower),
             R"#(Returns Lower limit (if there is; else, value is senseless))#" )
        .def("LowerValue",
             (Standard_Integer (IFSelect_SelectAnyList::*)() const) static_cast<Standard_Integer (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::LowerValue),
             R"#(Returns Integer Value of Lower Limit (0 if none))#" )
        .def("HasUpper",
             (Standard_Boolean (IFSelect_SelectAnyList::*)() const) static_cast<Standard_Boolean (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::HasUpper),
             R"#(Returns True if a Lower limit is defined)#" )
        .def("Upper",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_SelectAnyList::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::Upper),
             R"#(Returns Upper limit (if there is; else, value is senseless))#" )
        .def("UpperValue",
             (Standard_Integer (IFSelect_SelectAnyList::*)() const) static_cast<Standard_Integer (IFSelect_SelectAnyList::*)() const>(&IFSelect_SelectAnyList::UpperValue),
             R"#(Returns Integer Value of Upper Limit (0 if none))#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectAnyList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectDiff ,opencascade::handle<IFSelect_SelectDiff> , IFSelect_SelectControl>>(m.attr("IFSelect_SelectDiff"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectDiff::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectEntityNumber ,opencascade::handle<IFSelect_SelectEntityNumber> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectEntityNumber"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetNumber",
             (void (IFSelect_SelectEntityNumber::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectEntityNumber::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectEntityNumber::SetNumber),
             R"#(Sets Entity Number to be taken (initially, none is set : 0))#"  , py::arg("num"))
        .def("Number",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_SelectEntityNumber::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_SelectEntityNumber::*)() const>(&IFSelect_SelectEntityNumber::Number),
             R"#(Returns specified Number (as a Parameter))#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectEntityNumber::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectExplore ,opencascade::handle<IFSelect_SelectExplore>,Py_IFSelect_SelectExplore , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectExplore"))
    // constructors
    // custom constructors
    // methods
        .def("Level",
             (Standard_Integer (IFSelect_SelectExplore::*)() const) static_cast<Standard_Integer (IFSelect_SelectExplore::*)() const>(&IFSelect_SelectExplore::Level),
             R"#(Returns the required exploring level)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectExplore::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectExtract ,opencascade::handle<IFSelect_SelectExtract>,Py_IFSelect_SelectExtract , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectExtract"))
    // constructors
    // custom constructors
    // methods
        .def("IsDirect",
             (Standard_Boolean (IFSelect_SelectExtract::*)() const) static_cast<Standard_Boolean (IFSelect_SelectExtract::*)() const>(&IFSelect_SelectExtract::IsDirect),
             R"#(Returns True if Sort criterium is Direct, False if Reverse)#" )
        .def("SetDirect",
             (void (IFSelect_SelectExtract::*)( const Standard_Boolean ) ) static_cast<void (IFSelect_SelectExtract::*)( const Standard_Boolean ) >(&IFSelect_SelectExtract::SetDirect),
             R"#(Sets Sort criterium sense to a new value (True : Direct , False : Reverse))#"  , py::arg("direct"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectExtract::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectIntersection ,opencascade::handle<IFSelect_SelectIntersection> , IFSelect_SelectCombine>>(m.attr("IFSelect_SelectIntersection"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectIntersection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectModelEntities ,opencascade::handle<IFSelect_SelectModelEntities> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectModelEntities"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectModelEntities::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectModelRoots ,opencascade::handle<IFSelect_SelectModelRoots> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectModelRoots"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectModelRoots::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectPointed ,opencascade::handle<IFSelect_SelectPointed> , IFSelect_SelectBase>>(m.attr("IFSelect_SelectPointed"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (IFSelect_SelectPointed::*)() ) static_cast<void (IFSelect_SelectPointed::*)() >(&IFSelect_SelectPointed::Clear),
             R"#(Clears the list of selected items Also says the list is unset All Add* methods and SetList say the list is set)#" )
        .def("IsSet",
             (Standard_Boolean (IFSelect_SelectPointed::*)() const) static_cast<Standard_Boolean (IFSelect_SelectPointed::*)() const>(&IFSelect_SelectPointed::IsSet),
             R"#(Tells if the list has been set. Even if empty)#" )
        .def("SetEntity",
             (void (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<void (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SelectPointed::SetEntity),
             R"#(As SetList but with only one entity If <ent> is Null, the list is said as being set but is empty)#"  , py::arg("item"))
        .def("SetList",
             (void (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) ) static_cast<void (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) >(&IFSelect_SelectPointed::SetList),
             R"#(Sets a given list to define the list of selected items <list> can be empty or null : in this case, the list is said as being set, but it is empty)#"  , py::arg("list"))
        .def("Add",
             (Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SelectPointed::Add),
             R"#(Adds an item. Returns True if Done, False if <item> is already in the selected list)#"  , py::arg("item"))
        .def("Remove",
             (Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SelectPointed::Remove),
             R"#(Removes an item. Returns True if Done, False if <item> was not in the selected list)#"  , py::arg("item"))
        .def("Toggle",
             (Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) >(&IFSelect_SelectPointed::Toggle),
             R"#(Toggles status of an item : adds it if not pointed or removes it if already pointed. Returns the new status (Pointed or not))#"  , py::arg("item"))
        .def("AddList",
             (Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) ) static_cast<Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) >(&IFSelect_SelectPointed::AddList),
             R"#(Adds all the items defined in a list. Returns True if at least one item has been added, False else)#"  , py::arg("list"))
        .def("RemoveList",
             (Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) ) static_cast<Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) >(&IFSelect_SelectPointed::RemoveList),
             R"#(Removes all the items defined in a list. Returns True if at least one item has been removed, False else)#"  , py::arg("list"))
        .def("ToggleList",
             (Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) ) static_cast<Standard_Boolean (IFSelect_SelectPointed::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ) >(&IFSelect_SelectPointed::ToggleList),
             R"#(Toggles status of all the items defined in a list : adds it if not pointed or removes it if already pointed.)#"  , py::arg("list"))
        .def("Rank",
             (Standard_Integer (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (IFSelect_SelectPointed::*)( const opencascade::handle<Standard_Transient> & ) const>(&IFSelect_SelectPointed::Rank),
             R"#(Returns the rank of an item in the selected list, or 0.)#"  , py::arg("item"))
        .def("NbItems",
             (Standard_Integer (IFSelect_SelectPointed::*)() const) static_cast<Standard_Integer (IFSelect_SelectPointed::*)() const>(&IFSelect_SelectPointed::NbItems),
             R"#(Returns the count of selected items)#" )
        .def("Item",
             (opencascade::handle<Standard_Transient> (IFSelect_SelectPointed::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Standard_Transient> (IFSelect_SelectPointed::*)( const Standard_Integer ) const>(&IFSelect_SelectPointed::Item),
             R"#(Returns an item given its rank, or a Null Handle)#"  , py::arg("num"))
        .def("Update",
             (void (IFSelect_SelectPointed::*)( const opencascade::handle<Interface_CopyControl> & ) ) static_cast<void (IFSelect_SelectPointed::*)( const opencascade::handle<Interface_CopyControl> & ) >(&IFSelect_SelectPointed::Update),
             R"#(Rebuilds the selected list. Any selected entity which has a bound result is replaced by this result, else it is removed.)#"  , py::arg("control"))
        .def("Update",
             (void (IFSelect_SelectPointed::*)( const opencascade::handle<IFSelect_Transformer> & ) ) static_cast<void (IFSelect_SelectPointed::*)( const opencascade::handle<IFSelect_Transformer> & ) >(&IFSelect_SelectPointed::Update),
             R"#(Rebuilds the selected list, by querying a Transformer (same principle as from a CopyControl))#"  , py::arg("trf"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectPointed::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectShared ,opencascade::handle<IFSelect_SelectShared> , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectShared"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectShared::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSharing ,opencascade::handle<IFSelect_SelectSharing> , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectSharing"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectSharing::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSuite ,opencascade::handle<IFSelect_SelectSuite> , IFSelect_SelectDeduct>>(m.attr("IFSelect_SelectSuite"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddInput",
             (Standard_Boolean (IFSelect_SelectSuite::*)( const opencascade::handle<IFSelect_Selection> & ) ) static_cast<Standard_Boolean (IFSelect_SelectSuite::*)( const opencascade::handle<IFSelect_Selection> & ) >(&IFSelect_SelectSuite::AddInput),
             R"#(Adds an input selection. I.E. : If <item> is a SelectDeduct, adds it as Previous, not as Input Else, sets it as Input Returns True when done Returns False and refuses to work if Input is already defined)#"  , py::arg("item"))
        .def("AddPrevious",
             (void (IFSelect_SelectSuite::*)( const opencascade::handle<IFSelect_SelectDeduct> & ) ) static_cast<void (IFSelect_SelectSuite::*)( const opencascade::handle<IFSelect_SelectDeduct> & ) >(&IFSelect_SelectSuite::AddPrevious),
             R"#(Adds a new first item (prepends to the list). The Input is not touched If <item> is null, does nothing)#"  , py::arg("item"))
        .def("AddNext",
             (void (IFSelect_SelectSuite::*)( const opencascade::handle<IFSelect_SelectDeduct> & ) ) static_cast<void (IFSelect_SelectSuite::*)( const opencascade::handle<IFSelect_SelectDeduct> & ) >(&IFSelect_SelectSuite::AddNext),
             R"#(Adds a new last item (prepends to the list) If <item> is null, does nothing)#"  , py::arg("item"))
        .def("NbItems",
             (Standard_Integer (IFSelect_SelectSuite::*)() const) static_cast<Standard_Integer (IFSelect_SelectSuite::*)() const>(&IFSelect_SelectSuite::NbItems),
             R"#(Returns the count of Items)#" )
        .def("Item",
             (opencascade::handle<IFSelect_SelectDeduct> (IFSelect_SelectSuite::*)( const Standard_Integer ) const) static_cast<opencascade::handle<IFSelect_SelectDeduct> (IFSelect_SelectSuite::*)( const Standard_Integer ) const>(&IFSelect_SelectSuite::Item),
             R"#(Returns an item from its rank in the list (the Input is always apart))#"  , py::arg("num"))
        .def("SetLabel",
             (void (IFSelect_SelectSuite::*)( const Standard_CString ) ) static_cast<void (IFSelect_SelectSuite::*)( const Standard_CString ) >(&IFSelect_SelectSuite::SetLabel),
             R"#(Sets a value for the Label)#"  , py::arg("lab"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectSuite::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectUnion ,opencascade::handle<IFSelect_SelectUnion> , IFSelect_SelectCombine>>(m.attr("IFSelect_SelectUnion"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectUnion::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SignAncestor ,opencascade::handle<IFSelect_SignAncestor> , IFSelect_SignType>>(m.attr("IFSelect_SignAncestor"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("nopk")=static_cast<const Standard_Boolean>(Standard_False) )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SignAncestor::get_type_descriptor),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectAnyType::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectErrorEntities ,opencascade::handle<IFSelect_SelectErrorEntities> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectErrorEntities"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectErrorEntities::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectFlag ,opencascade::handle<IFSelect_SelectFlag> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectFlag"))
    // constructors
        .def(py::init< const Standard_CString >()  , py::arg("flagname") )
    // custom constructors
    // methods
        .def("FlagName",
             (Standard_CString (IFSelect_SelectFlag::*)() const) static_cast<Standard_CString (IFSelect_SelectFlag::*)() const>(&IFSelect_SelectFlag::FlagName),
             R"#(Returns the name of the flag)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectFlag::get_type_descriptor),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectInList::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectRange ,opencascade::handle<IFSelect_SelectRange> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectRange"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetRange",
             (void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & , const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & , const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectRange::SetRange),
             R"#(Sets a Range for numbers, with a lower and a upper limits Error if rankto is lower then rankfrom)#"  , py::arg("rankfrom"),  py::arg("rankto"))
        .def("SetOne",
             (void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectRange::SetOne),
             R"#(Sets a unique number (only one Entity will be sorted as True))#"  , py::arg("rank"))
        .def("SetFrom",
             (void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectRange::SetFrom),
             R"#(Sets a Lower limit but no upper limit)#"  , py::arg("rankfrom"))
        .def("SetUntil",
             (void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & ) ) static_cast<void (IFSelect_SelectRange::*)( const opencascade::handle<IFSelect_IntParam> & ) >(&IFSelect_SelectRange::SetUntil),
             R"#(Sets an Upper limit but no lower limit (equivalent to lower 1))#"  , py::arg("rankto"))
        .def("HasLower",
             (Standard_Boolean (IFSelect_SelectRange::*)() const) static_cast<Standard_Boolean (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::HasLower),
             R"#(Returns True if a Lower limit is defined)#" )
        .def("Lower",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_SelectRange::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::Lower),
             R"#(Returns Lower limit (if there is; else, value is senseless))#" )
        .def("LowerValue",
             (Standard_Integer (IFSelect_SelectRange::*)() const) static_cast<Standard_Integer (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::LowerValue),
             R"#(Returns Value of Lower Limit (0 if none is defined))#" )
        .def("HasUpper",
             (Standard_Boolean (IFSelect_SelectRange::*)() const) static_cast<Standard_Boolean (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::HasUpper),
             R"#(Returns True if a Lower limit is defined)#" )
        .def("Upper",
             (opencascade::handle<IFSelect_IntParam> (IFSelect_SelectRange::*)() const) static_cast<opencascade::handle<IFSelect_IntParam> (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::Upper),
             R"#(Returns Upper limit (if there is; else, value is senseless))#" )
        .def("UpperValue",
             (Standard_Integer (IFSelect_SelectRange::*)() const) static_cast<Standard_Integer (IFSelect_SelectRange::*)() const>(&IFSelect_SelectRange::UpperValue),
             R"#(Returns Value of Upper Limit (0 if none is defined))#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectRange::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectRootComps ,opencascade::handle<IFSelect_SelectRootComps> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectRootComps"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectRootComps::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectRoots ,opencascade::handle<IFSelect_SelectRoots> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectRoots"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectRoots::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSent ,opencascade::handle<IFSelect_SelectSent> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectSent"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Boolean >()  , py::arg("sentcount")=static_cast<const Standard_Integer>(1),  py::arg("atleast")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("SentCount",
             (Standard_Integer (IFSelect_SelectSent::*)() const) static_cast<Standard_Integer (IFSelect_SelectSent::*)() const>(&IFSelect_SelectSent::SentCount),
             R"#(Returns the queried count of sending)#" )
        .def("AtLeast",
             (Standard_Boolean (IFSelect_SelectSent::*)() const) static_cast<Standard_Boolean (IFSelect_SelectSent::*)() const>(&IFSelect_SelectSent::AtLeast),
             R"#(Returns the <atleast> status, True for sending at least the sending count, False for sending exactly the sending count Remark : if SentCount is 0, AtLeast is ignored)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectSent::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSignature ,opencascade::handle<IFSelect_SelectSignature> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectSignature"))
    // constructors
        .def(py::init< const opencascade::handle<IFSelect_Signature> &,const Standard_CString,const Standard_Boolean >()  , py::arg("matcher"),  py::arg("signtext"),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<IFSelect_Signature> &,const TCollection_AsciiString &,const Standard_Boolean >()  , py::arg("matcher"),  py::arg("signtext"),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<IFSelect_SignCounter> &,const Standard_CString,const Standard_Boolean >()  , py::arg("matcher"),  py::arg("signtext"),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Signature",
             (opencascade::handle<IFSelect_Signature> (IFSelect_SelectSignature::*)() const) static_cast<opencascade::handle<IFSelect_Signature> (IFSelect_SelectSignature::*)() const>(&IFSelect_SelectSignature::Signature),
             R"#(Returns the used Signature, then it is possible to access it, modify it as required. Can be null, hence see Counter)#" )
        .def("Counter",
             (opencascade::handle<IFSelect_SignCounter> (IFSelect_SelectSignature::*)() const) static_cast<opencascade::handle<IFSelect_SignCounter> (IFSelect_SelectSignature::*)() const>(&IFSelect_SelectSignature::Counter),
             R"#(Returns the used SignCounter. Can be used as alternative for Signature)#" )
        .def("SortInGraph",
             (Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) const) static_cast<Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const Interface_Graph & ) const>(&IFSelect_SelectSignature::SortInGraph),
             R"#(Returns True for an Entity (model->Value(num)) of which the signature matches the text given as creation time May also work with a Counter from the Graph)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("G"))
        .def("Sort",
             (Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const) static_cast<Standard_Boolean (IFSelect_SelectSignature::*)( const Standard_Integer , const opencascade::handle<Standard_Transient> & , const opencascade::handle<Interface_InterfaceModel> & ) const>(&IFSelect_SelectSignature::Sort),
             R"#(Not called, defined only to remove a deferred method here)#"  , py::arg("rank"),  py::arg("ent"),  py::arg("model"))
        .def("SignatureText",
             (const TCollection_AsciiString & (IFSelect_SelectSignature::*)() const) static_cast<const TCollection_AsciiString & (IFSelect_SelectSignature::*)() const>(&IFSelect_SelectSignature::SignatureText),
             R"#(Returns Text used to Sort Entity on its Signature or SignCounter)#" )
        .def("IsExact",
             (Standard_Boolean (IFSelect_SelectSignature::*)() const) static_cast<Standard_Boolean (IFSelect_SelectSignature::*)() const>(&IFSelect_SelectSignature::IsExact),
             R"#(Returns True if match must be exact)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectSignature::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSignedShared ,opencascade::handle<IFSelect_SelectSignedShared> , IFSelect_SelectExplore>>(m.attr("IFSelect_SelectSignedShared"))
    // constructors
        .def(py::init< const opencascade::handle<IFSelect_Signature> &,const Standard_CString,const Standard_Boolean,const Standard_Integer >()  , py::arg("matcher"),  py::arg("signtext"),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("level")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("Signature",
             (opencascade::handle<IFSelect_Signature> (IFSelect_SelectSignedShared::*)() const) static_cast<opencascade::handle<IFSelect_Signature> (IFSelect_SelectSignedShared::*)() const>(&IFSelect_SelectSignedShared::Signature),
             R"#(Returns the used Signature, then it is possible to access it, modify it as required)#" )
        .def("SignatureText",
             (const TCollection_AsciiString & (IFSelect_SelectSignedShared::*)() const) static_cast<const TCollection_AsciiString & (IFSelect_SelectSignedShared::*)() const>(&IFSelect_SelectSignedShared::SignatureText),
             R"#(Returns Text used to Sort Entity on its Signature)#" )
        .def("IsExact",
             (Standard_Boolean (IFSelect_SelectSignedShared::*)() const) static_cast<Standard_Boolean (IFSelect_SelectSignedShared::*)() const>(&IFSelect_SelectSignedShared::IsExact),
             R"#(Returns True if match must be exact)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectSignedShared::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectSignedSharing ,opencascade::handle<IFSelect_SelectSignedSharing> , IFSelect_SelectExplore>>(m.attr("IFSelect_SelectSignedSharing"))
    // constructors
        .def(py::init< const opencascade::handle<IFSelect_Signature> &,const Standard_CString,const Standard_Boolean,const Standard_Integer >()  , py::arg("matcher"),  py::arg("signtext"),  py::arg("exact")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("level")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("Signature",
             (opencascade::handle<IFSelect_Signature> (IFSelect_SelectSignedSharing::*)() const) static_cast<opencascade::handle<IFSelect_Signature> (IFSelect_SelectSignedSharing::*)() const>(&IFSelect_SelectSignedSharing::Signature),
             R"#(Returns the used Signature, then it is possible to access it, modify it as required)#" )
        .def("SignatureText",
             (const TCollection_AsciiString & (IFSelect_SelectSignedSharing::*)() const) static_cast<const TCollection_AsciiString & (IFSelect_SelectSignedSharing::*)() const>(&IFSelect_SelectSignedSharing::SignatureText),
             R"#(Returns Text used to Sort Entity on its Signature)#" )
        .def("IsExact",
             (Standard_Boolean (IFSelect_SelectSignedSharing::*)() const) static_cast<Standard_Boolean (IFSelect_SelectSignedSharing::*)() const>(&IFSelect_SelectSignedSharing::IsExact),
             R"#(Returns True if match must be exact)#" )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectSignedSharing::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectUnknownEntities ,opencascade::handle<IFSelect_SelectUnknownEntities> , IFSelect_SelectExtract>>(m.attr("IFSelect_SelectUnknownEntities"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectUnknownEntities::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectIncorrectEntities ,opencascade::handle<IFSelect_SelectIncorrectEntities> , IFSelect_SelectFlag>>(m.attr("IFSelect_SelectIncorrectEntities"))
    // constructors
        .def(py::init<  >()  )
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectIncorrectEntities::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IFSelect_SelectType ,opencascade::handle<IFSelect_SelectType> , IFSelect_SelectAnyType>>(m.attr("IFSelect_SelectType"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Standard_Type> & >()  , py::arg("atype") )
    // custom constructors
    // methods
        .def("SetType",
             (void (IFSelect_SelectType::*)( const opencascade::handle<Standard_Type> & ) ) static_cast<void (IFSelect_SelectType::*)( const opencascade::handle<Standard_Type> & ) >(&IFSelect_SelectType::SetType),
             R"#(Sets a TYpe for filter)#"  , py::arg("atype"))
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IFSelect_SelectType::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\IFSelect_GeneralModifier.hxx
// ./opencascade\IFSelect_Modifier.hxx
// ./opencascade\IFSelect_ListEditor.hxx
// ./opencascade\IFSelect_ParamEditor.hxx
// ./opencascade\IFSelect_SelectExplore.hxx
// ./opencascade\IFSelect_Editor.hxx
// ./opencascade\IFSelect_SelectRoots.hxx
// ./opencascade\IFSelect_SignatureList.hxx
// ./opencascade\IFSelect_SequenceOfAppliedModifiers.hxx
// ./opencascade\IFSelect_EditForm.hxx
// ./opencascade\IFSelect_SelectType.hxx
// ./opencascade\IFSelect_SessionDumper.hxx
// ./opencascade\IFSelect_SelectInList.hxx
// ./opencascade\IFSelect_RemainMode.hxx
// ./opencascade\IFSelect_BasicDumper.hxx
// ./opencascade\IFSelect_SelectCombine.hxx
// ./opencascade\IFSelect_SelectRootComps.hxx
// ./opencascade\IFSelect_SequenceOfInterfaceModel.hxx
// ./opencascade\IFSelect_SignType.hxx
// ./opencascade\IFSelect_Activator.hxx
// ./opencascade\IFSelect_SelectIncorrectEntities.hxx
// ./opencascade\IFSelect_SelectPointed.hxx
// ./opencascade\IFSelect_SignMultiple.hxx
// ./opencascade\IFSelect_SignValidity.hxx
// ./opencascade\IFSelect_WorkSession.hxx
// ./opencascade\IFSelect_TSeqOfDispatch.hxx
// ./opencascade\IFSelect_SignAncestor.hxx
// ./opencascade\IFSelect_SelectDeduct.hxx
// ./opencascade\IFSelect_IntParam.hxx
// ./opencascade\IFSelect.hxx
// ./opencascade\IFSelect_SelectSignature.hxx
// ./opencascade\IFSelect_EditValue.hxx
// ./opencascade\IFSelect_DispPerFiles.hxx
// ./opencascade\IFSelect_SignCounter.hxx
// ./opencascade\IFSelect_PrintFail.hxx
// ./opencascade\IFSelect_TransformStandard.hxx
// ./opencascade\IFSelect_SelectSuite.hxx
// ./opencascade\IFSelect_DispPerCount.hxx
// ./opencascade\IFSelect_Act.hxx
// ./opencascade\IFSelect_ContextWrite.hxx
// ./opencascade\IFSelect_SelectErrorEntities.hxx
// ./opencascade\IFSelect_SelectModelEntities.hxx
// ./opencascade\IFSelect_ContextModif.hxx
// ./opencascade\IFSelect_SelectModelRoots.hxx
// ./opencascade\IFSelect_SequenceOfGeneralModifier.hxx
// ./opencascade\IFSelect_ShareOut.hxx
// ./opencascade\IFSelect_Dispatch.hxx
// ./opencascade\IFSelect_SelectAnyType.hxx
// ./opencascade\IFSelect_WorkLibrary.hxx
// ./opencascade\IFSelect_HSeqOfSelection.hxx
// ./opencascade\IFSelect_Transformer.hxx
// ./opencascade\IFSelect_SessionFile.hxx
// ./opencascade\IFSelect_SignCategory.hxx
// ./opencascade\IFSelect_SelectBase.hxx
// ./opencascade\IFSelect_SelectSignedShared.hxx
// ./opencascade\IFSelect_DispGlobal.hxx
// ./opencascade\IFSelect_TSeqOfSelection.hxx
// ./opencascade\IFSelect_SelectControl.hxx
// ./opencascade\IFSelect_SelectSharing.hxx
// ./opencascade\IFSelect_ShareOutResult.hxx
// ./opencascade\IFSelect_SelectEntityNumber.hxx
// ./opencascade\IFSelect_SelectSent.hxx
// ./opencascade\IFSelect_SelectShared.hxx
// ./opencascade\IFSelect_SelectDiff.hxx
// ./opencascade\IFSelect_CheckCounter.hxx
// ./opencascade\IFSelect_SelectSignedSharing.hxx
// ./opencascade\IFSelect_SelectExtract.hxx
// ./opencascade\IFSelect_DispPerSignature.hxx
// ./opencascade\IFSelect_SelectionIterator.hxx
// ./opencascade\IFSelect_ModifReorder.hxx
// ./opencascade\IFSelect_DispPerOne.hxx
// ./opencascade\IFSelect_ReturnStatus.hxx
// ./opencascade\IFSelect_AppliedModifiers.hxx
// ./opencascade\IFSelect_PrintCount.hxx
// ./opencascade\IFSelect_SessionPilot.hxx
// ./opencascade\IFSelect_ModelCopier.hxx
// ./opencascade\IFSelect_SelectFlag.hxx
// ./opencascade\IFSelect_SelectRange.hxx
// ./opencascade\IFSelect_PacketList.hxx
// ./opencascade\IFSelect_Functions.hxx
// ./opencascade\IFSelect_SelectAnyList.hxx
// ./opencascade\IFSelect_SelectUnion.hxx
// ./opencascade\IFSelect_SelectUnknownEntities.hxx
// ./opencascade\IFSelect_ActFunc.hxx
// ./opencascade\IFSelect_ModifEditForm.hxx
// ./opencascade\IFSelect_GraphCounter.hxx
// ./opencascade\IFSelect_Signature.hxx
// ./opencascade\IFSelect_Selection.hxx
// ./opencascade\IFSelect_SelectIntersection.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_AppliedModifiers> >(m,"IFSelect_SequenceOfAppliedModifiers");
    register_template_NCollection_Sequence<opencascade::handle<Interface_InterfaceModel> >(m,"IFSelect_SequenceOfInterfaceModel");
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_Dispatch> >(m,"IFSelect_TSeqOfDispatch");
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_GeneralModifier> >(m,"IFSelect_SequenceOfGeneralModifier");
    register_template_NCollection_Sequence<opencascade::handle<IFSelect_Selection> >(m,"IFSelect_TSeqOfSelection");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
