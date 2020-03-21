
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Transfer_Finder.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include <Message_Msg.hxx>
#include <Interface_Check.hxx>
#include <Interface_CheckIterator.hxx>
#include <Transfer_Binder.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_HGraph.hxx>
#include <Interface_Graph.hxx>
#include <Message_Messenger.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Transfer_TransientMapper.hxx>
#include <Message_Messenger.hxx>
#include <Interface_Check.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ResultFromTransient.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_CheckIterator.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Message_Msg.hxx>
#include <Interface_Check.hxx>
#include <Interface_CheckIterator.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_TransferIterator.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_DataInfo.hxx>

// module includes
#include <Transfer_ActorDispatch.hxx>
#include <Transfer_ActorOfFinderProcess.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Transfer_Binder.hxx>
#include <Transfer_BinderOfTransientInteger.hxx>
#include <Transfer_DataInfo.hxx>
#include <Transfer_DispatchControl.hxx>
#include <Transfer_Finder.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_FindHasher.hxx>
#include <Transfer_HSequenceOfBinder.hxx>
#include <Transfer_HSequenceOfFinder.hxx>
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Transfer_MapContainer.hxx>
#include <Transfer_MultipleBinder.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_ResultFromModel.hxx>
#include <Transfer_ResultFromTransient.hxx>
#include <Transfer_SequenceOfBinder.hxx>
#include <Transfer_SequenceOfFinder.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Transfer_StatusExec.hxx>
#include <Transfer_StatusResult.hxx>
#include <Transfer_TransferDeadLoop.hxx>
#include <Transfer_TransferDispatch.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_TransferInput.hxx>
#include <Transfer_TransferIterator.hxx>
#include <Transfer_TransferMapOfProcessForFinder.hxx>
#include <Transfer_TransferMapOfProcessForTransient.hxx>
#include <Transfer_TransferOutput.hxx>
#include <Transfer_TransientListBinder.hxx>
#include <Transfer_TransientMapper.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_UndefMode.hxx>
#include <Transfer_VoidBinder.hxx>

// template related includes
// ./opencascade/Transfer_SequenceOfBinder.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Transfer_SequenceOfFinder.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Transfer_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Transfer", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Transfer_StatusExec>(m, "Transfer_StatusExec",R"#(execution status of an individual transfer (see Transcriptor))#")
        .value("Transfer_StatusInitial",Transfer_StatusExec::Transfer_StatusInitial)
        .value("Transfer_StatusRun",Transfer_StatusExec::Transfer_StatusRun)
        .value("Transfer_StatusDone",Transfer_StatusExec::Transfer_StatusDone)
        .value("Transfer_StatusError",Transfer_StatusExec::Transfer_StatusError)
        .value("Transfer_StatusLoop",Transfer_StatusExec::Transfer_StatusLoop).export_values();
    py::enum_<Transfer_UndefMode>(m, "Transfer_UndefMode",R"#(used on processing Undefined Entities (see TransferOutput))#")
        .value("Transfer_UndefIgnore",Transfer_UndefMode::Transfer_UndefIgnore)
        .value("Transfer_UndefFailure",Transfer_UndefMode::Transfer_UndefFailure)
        .value("Transfer_UndefContent",Transfer_UndefMode::Transfer_UndefContent)
        .value("Transfer_UndefUser",Transfer_UndefMode::Transfer_UndefUser).export_values();
    py::enum_<Transfer_StatusResult>(m, "Transfer_StatusResult",R"#(result status of transferring an entity (see Transcriptor))#")
        .value("Transfer_StatusVoid",Transfer_StatusResult::Transfer_StatusVoid)
        .value("Transfer_StatusDefined",Transfer_StatusResult::Transfer_StatusDefined)
        .value("Transfer_StatusUsed",Transfer_StatusResult::Transfer_StatusUsed).export_values();

//Python trampoline classes
    class Py_Transfer_Binder : public Transfer_Binder{
    public:
        using Transfer_Binder::Transfer_Binder;


        // public pure virtual
        opencascade::handle<Standard_Type> ResultType() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<Standard_Type>,Transfer_Binder,ResultType,) };
        Standard_CString ResultTypeName() const  override { PYBIND11_OVERLOAD_PURE(Standard_CString,Transfer_Binder,ResultTypeName,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Transfer_Finder : public Transfer_Finder{
    public:
        using Transfer_Finder::Transfer_Finder;


        // public pure virtual
        Standard_Boolean Equates(const opencascade::handle<Transfer_Finder> & other) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Transfer_Finder,Equates,other) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<Transfer_Binder> >(m,"Transfer_SequenceOfBinder");
    preregister_template_NCollection_Sequence<opencascade::handle<Transfer_Finder> >(m,"Transfer_SequenceOfFinder");

// classes forward declarations only
    py::class_<Transfer_ActorOfProcessForFinder ,opencascade::handle<Transfer_ActorOfProcessForFinder> , Standard_Transient>(m,"Transfer_ActorOfProcessForFinder",R"#()#");
    py::class_<Transfer_ActorOfProcessForTransient ,opencascade::handle<Transfer_ActorOfProcessForTransient> , Standard_Transient>(m,"Transfer_ActorOfProcessForTransient",R"#()#");
    py::class_<Transfer_Binder ,opencascade::handle<Transfer_Binder>,Py_Transfer_Binder , Standard_Transient>(m,"Transfer_Binder",R"#(A Binder is an auxiliary object to Map the Result of the Transfer of a given Object : it records the Result of the Unitary Transfer (Resulting Object), status of progress and error (if any) of the ProcessA Binder is an auxiliary object to Map the Result of the Transfer of a given Object : it records the Result of the Unitary Transfer (Resulting Object), status of progress and error (if any) of the ProcessA Binder is an auxiliary object to Map the Result of the Transfer of a given Object : it records the Result of the Unitary Transfer (Resulting Object), status of progress and error (if any) of the Process)#");
    py::class_<Transfer_DataInfo , shared_ptr<Transfer_DataInfo> >(m,"Transfer_DataInfo",R"#(Gives informations on an object Used as template to instantiate Mapper and SimpleBinder This class is for Transient)#");
    py::class_<Transfer_DispatchControl ,opencascade::handle<Transfer_DispatchControl> , Interface_CopyControl>(m,"Transfer_DispatchControl",R"#(This is an auxiliary class for TransferDispatch, which allows to record simple copies, as CopyControl from Interface, but based on a TransientProcess. Hence, it allows in addition more actions (such as recording results of adaptations)This is an auxiliary class for TransferDispatch, which allows to record simple copies, as CopyControl from Interface, but based on a TransientProcess. Hence, it allows in addition more actions (such as recording results of adaptations)This is an auxiliary class for TransferDispatch, which allows to record simple copies, as CopyControl from Interface, but based on a TransientProcess. Hence, it allows in addition more actions (such as recording results of adaptations))#");
    py::class_<Transfer_FindHasher , shared_ptr<Transfer_FindHasher> >(m,"Transfer_FindHasher",R"#(FindHasher defines HashCode for Finder, which is : ask a Finder its HashCode ! Because this is the Finder itself which brings the HashCode for its Key)#");
    py::class_<Transfer_Finder ,opencascade::handle<Transfer_Finder>,Py_Transfer_Finder , Standard_Transient>(m,"Transfer_Finder",R"#(a Finder allows to map any kind of object as a Key for a Map. This works by defining, for a Hash Code, that of the real Key, not of the Finder which acts only as an intermediate. When a Map asks for the HashCode of a Finder, this one returns the code it has determined at creation timea Finder allows to map any kind of object as a Key for a Map. This works by defining, for a Hash Code, that of the real Key, not of the Finder which acts only as an intermediate. When a Map asks for the HashCode of a Finder, this one returns the code it has determined at creation timea Finder allows to map any kind of object as a Key for a Map. This works by defining, for a Hash Code, that of the real Key, not of the Finder which acts only as an intermediate. When a Map asks for the HashCode of a Finder, this one returns the code it has determined at creation time)#");
    py::class_<Transfer_HSequenceOfBinder ,opencascade::handle<Transfer_HSequenceOfBinder> , Transfer_SequenceOfBinder, Standard_Transient>(m,"Transfer_HSequenceOfBinder",R"#()#");
    py::class_<Transfer_HSequenceOfFinder ,opencascade::handle<Transfer_HSequenceOfFinder> , Transfer_SequenceOfFinder, Standard_Transient>(m,"Transfer_HSequenceOfFinder",R"#()#");
    py::class_<Transfer_MapContainer ,opencascade::handle<Transfer_MapContainer> , Standard_Transient>(m,"Transfer_MapContainer",R"#()#");
    py::class_<Transfer_ProcessForFinder ,opencascade::handle<Transfer_ProcessForFinder> , Standard_Transient>(m,"Transfer_ProcessForFinder",R"#()#");
    py::class_<Transfer_ProcessForTransient ,opencascade::handle<Transfer_ProcessForTransient> , Standard_Transient>(m,"Transfer_ProcessForTransient",R"#(Manages Transfer of Transient Objects. Produces also ActorOfTransientProcess (deferred class), IteratorOfTransientProcess (for Results), TransferMapOfTransientProcess (internally used) Normally uses as TransientProcess, which adds some specificsManages Transfer of Transient Objects. Produces also ActorOfTransientProcess (deferred class), IteratorOfTransientProcess (for Results), TransferMapOfTransientProcess (internally used) Normally uses as TransientProcess, which adds some specificsManages Transfer of Transient Objects. Produces also ActorOfTransientProcess (deferred class), IteratorOfTransientProcess (for Results), TransferMapOfTransientProcess (internally used) Normally uses as TransientProcess, which adds some specifics)#");
    py::class_<Transfer_ResultFromModel ,opencascade::handle<Transfer_ResultFromModel> , Standard_Transient>(m,"Transfer_ResultFromModel",R"#(ResultFromModel is used to store a final result stored in a TransientProcess, respectfully to its structuration in scopes by using a set of ResultFromTransient Hence, it can be regarded as a passive equivalent of the stored data in the TransientProcess, while an Iterator gives a flat view of it.ResultFromModel is used to store a final result stored in a TransientProcess, respectfully to its structuration in scopes by using a set of ResultFromTransient Hence, it can be regarded as a passive equivalent of the stored data in the TransientProcess, while an Iterator gives a flat view of it.ResultFromModel is used to store a final result stored in a TransientProcess, respectfully to its structuration in scopes by using a set of ResultFromTransient Hence, it can be regarded as a passive equivalent of the stored data in the TransientProcess, while an Iterator gives a flat view of it.)#");
    py::class_<Transfer_ResultFromTransient ,opencascade::handle<Transfer_ResultFromTransient> , Standard_Transient>(m,"Transfer_ResultFromTransient",R"#(This class, in conjunction with ResultFromModel, allows to record the result of a transfer initially stored in a TransientProcess.This class, in conjunction with ResultFromModel, allows to record the result of a transfer initially stored in a TransientProcess.This class, in conjunction with ResultFromModel, allows to record the result of a transfer initially stored in a TransientProcess.)#");
    py::class_<Transfer_TransferDispatch , shared_ptr<Transfer_TransferDispatch> , Interface_CopyTool>(m,"Transfer_TransferDispatch",R"#(A TransferDispatch is aimed to dispatch Entities between two Interface Models, by default by copying them, as CopyTool, but with more capabilities of adapting : Copy is redefined to firstly pass the hand to a TransferProcess. If this gives no result, standard Copy is called.)#");
    py::class_<Transfer_TransferInput , shared_ptr<Transfer_TransferInput> >(m,"Transfer_TransferInput",R"#(A TransferInput is a Tool which fills an InterfaceModel with the result of the Transfer of CasCade Objects, once determined The Result comes from a TransferProcess, either from Transient (the Complete Result is considered, it must contain only Transient Objects))#");
    py::class_<Transfer_TransferIterator , shared_ptr<Transfer_TransferIterator> >(m,"Transfer_TransferIterator",R"#(Defines an Iterator on the result of a Transfer Available for Normal Results or not (Erroneous Transfer) It gives several kinds of Informations, and allows to consider various criteria (criteria are cumulative))#");
    py::class_<Transfer_TransferOutput , shared_ptr<Transfer_TransferOutput> >(m,"Transfer_TransferOutput",R"#(A TransferOutput is a Tool which manages the transfer of entities created by an Interface, stored in an InterfaceModel, into a set of Objects suitable for an Application Objects to be transferred are given, by method Transfer (which calls Transfer from TransientProcess) A default action is available to get all roots of the Model Result is given as a TransferIterator (see TransferProcess) Also, it is possible to pilot directly the TransientProcess)#");
    py::class_<Transfer_ActorOfFinderProcess ,opencascade::handle<Transfer_ActorOfFinderProcess> , Transfer_ActorOfProcessForFinder>(m,"Transfer_ActorOfFinderProcess",R"#(The original class was renamed. Compatibility onlyThe original class was renamed. Compatibility onlyThe original class was renamed. Compatibility only)#");
    py::class_<Transfer_ActorOfTransientProcess ,opencascade::handle<Transfer_ActorOfTransientProcess> , Transfer_ActorOfProcessForTransient>(m,"Transfer_ActorOfTransientProcess",R"#(The original class was renamed. Compatibility onlyThe original class was renamed. Compatibility onlyThe original class was renamed. Compatibility only)#");
    py::class_<Transfer_FinderProcess ,opencascade::handle<Transfer_FinderProcess> , Transfer_ProcessForFinder>(m,"Transfer_FinderProcess",R"#(Adds specific features to the generic definition : PrintTrace is adaptedAdds specific features to the generic definition : PrintTrace is adaptedAdds specific features to the generic definition : PrintTrace is adapted)#");
    py::class_<Transfer_IteratorOfProcessForFinder , shared_ptr<Transfer_IteratorOfProcessForFinder> , Transfer_TransferIterator>(m,"Transfer_IteratorOfProcessForFinder",R"#(None)#");
    py::class_<Transfer_IteratorOfProcessForTransient , shared_ptr<Transfer_IteratorOfProcessForTransient> , Transfer_TransferIterator>(m,"Transfer_IteratorOfProcessForTransient",R"#(None)#");
    py::class_<Transfer_MultipleBinder ,opencascade::handle<Transfer_MultipleBinder> , Transfer_Binder>(m,"Transfer_MultipleBinder",R"#(Allows direct binding between a starting Object and the Result of its transfer, when it can be made of several Transient Objects. Compared to a Transcriptor, it has no Transfer ActionAllows direct binding between a starting Object and the Result of its transfer, when it can be made of several Transient Objects. Compared to a Transcriptor, it has no Transfer ActionAllows direct binding between a starting Object and the Result of its transfer, when it can be made of several Transient Objects. Compared to a Transcriptor, it has no Transfer Action)#");
    py::class_<Transfer_SimpleBinderOfTransient ,opencascade::handle<Transfer_SimpleBinderOfTransient> , Transfer_Binder>(m,"Transfer_SimpleBinderOfTransient",R"#(An adapted instantiation of SimpleBinder for Transient Result, i.e. ResultType can be computed from the Result itself, instead of being staticAn adapted instantiation of SimpleBinder for Transient Result, i.e. ResultType can be computed from the Result itself, instead of being staticAn adapted instantiation of SimpleBinder for Transient Result, i.e. ResultType can be computed from the Result itself, instead of being static)#");
    py::class_<Transfer_TransientListBinder ,opencascade::handle<Transfer_TransientListBinder> , Transfer_Binder>(m,"Transfer_TransientListBinder",R"#(This binder binds several (a list of) Transients with a starting entity, when this entity itself corresponds to a simple list of Transients. Each part is not seen as a sub-result of an independant componant, but as an item of a built-in listThis binder binds several (a list of) Transients with a starting entity, when this entity itself corresponds to a simple list of Transients. Each part is not seen as a sub-result of an independant componant, but as an item of a built-in listThis binder binds several (a list of) Transients with a starting entity, when this entity itself corresponds to a simple list of Transients. Each part is not seen as a sub-result of an independant componant, but as an item of a built-in list)#");
    py::class_<Transfer_TransientMapper ,opencascade::handle<Transfer_TransientMapper> , Transfer_Finder>(m,"Transfer_TransientMapper",R"#()#");
    py::class_<Transfer_TransientProcess ,opencascade::handle<Transfer_TransientProcess> , Transfer_ProcessForTransient>(m,"Transfer_TransientProcess",R"#(Adds specific features to the generic definition : TransientProcess is intended to work from an InterfaceModel to a set of application objects.Adds specific features to the generic definition : TransientProcess is intended to work from an InterfaceModel to a set of application objects.Adds specific features to the generic definition : TransientProcess is intended to work from an InterfaceModel to a set of application objects.)#");
    py::class_<Transfer_VoidBinder ,opencascade::handle<Transfer_VoidBinder> , Transfer_Binder>(m,"Transfer_VoidBinder",R"#(a VoidBinder is used to bind a starting item with a status, error or warning messages, but no result It is interpreted by TransferProcess, which admits a VoidBinder to be over-written, and copies its check to the new Bindera VoidBinder is used to bind a starting item with a status, error or warning messages, but no result It is interpreted by TransferProcess, which admits a VoidBinder to be over-written, and copies its check to the new Bindera VoidBinder is used to bind a starting item with a status, error or warning messages, but no result It is interpreted by TransferProcess, which admits a VoidBinder to be over-written, and copies its check to the new Binder)#");
    py::class_<Transfer_ActorDispatch ,opencascade::handle<Transfer_ActorDispatch> , Transfer_ActorOfTransientProcess>(m,"Transfer_ActorDispatch",R"#(This class allows to work with a TransferDispatch, i.e. to transfer entities from a data set to another one defined by the same interface norm, with the following features : - ActorDispatch itself acts as a default actor, i.e. it copies entities with the general service Copy, as CopyTool does - it allows to add other actors for specific ways of transfer, which may include data modifications, conversions ... - and other features from TransferDispatch (such as mapping other than one-one)This class allows to work with a TransferDispatch, i.e. to transfer entities from a data set to another one defined by the same interface norm, with the following features : - ActorDispatch itself acts as a default actor, i.e. it copies entities with the general service Copy, as CopyTool does - it allows to add other actors for specific ways of transfer, which may include data modifications, conversions ... - and other features from TransferDispatch (such as mapping other than one-one)This class allows to work with a TransferDispatch, i.e. to transfer entities from a data set to another one defined by the same interface norm, with the following features : - ActorDispatch itself acts as a default actor, i.e. it copies entities with the general service Copy, as CopyTool does - it allows to add other actors for specific ways of transfer, which may include data modifications, conversions ... - and other features from TransferDispatch (such as mapping other than one-one))#");
    py::class_<Transfer_BinderOfTransientInteger ,opencascade::handle<Transfer_BinderOfTransientInteger> , Transfer_SimpleBinderOfTransient>(m,"Transfer_BinderOfTransientInteger",R"#(This type of Binder allows to attach as result, besides a Transient Object, an Integer Value, which can be an Index in the Object if it defines a List, for instanceThis type of Binder allows to attach as result, besides a Transient Object, an Integer Value, which can be an Index in the Object if it defines a List, for instanceThis type of Binder allows to attach as result, besides a Transient Object, an Integer Value, which can be an Index in the Object if it defines a List, for instance)#");

};

// user-defined post-inclusion per module

// user-defined post
