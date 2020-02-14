
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_HGraph.hxx>
#include <Interface_Graph.hxx>
#include <Message_Messenger.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Transfer_Finder.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_DataInfo.hxx>
#include <Transfer_TransientMapper.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_Binder.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Message_Msg.hxx>
#include <Interface_Check.hxx>
#include <Interface_CheckIterator.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include <Message_Msg.hxx>
#include <Interface_Check.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ResultFromTransient.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_CheckIterator.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_TransferIterator.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_FinderProcess.hxx>

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
#include "NCollection.hxx"
// ./opencascade/Transfer_SequenceOfFinder.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Transfer(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Transfer"));


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

// classes


    static_cast<py::class_<Transfer_ActorOfProcessForFinder ,opencascade::handle<Transfer_ActorOfProcessForFinder>  , Standard_Transient >>(m.attr("Transfer_ActorOfProcessForFinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<Standard_Boolean (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_ActorOfProcessForFinder::Recognize),
             R"#(Prerequesite for Transfer : the method Transfer is called on a starting object only if Recognize has returned True on it This allows to define a list of Actors, each one processing a definite kind of data TransferProcess calls Recognize on each one before calling Transfer. But even if Recognize has returned True, Transfer can reject by returning a Null Binder (afterwards rejection), the next actor is then invoked)#"  , py::arg("start"))
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_ProcessForFinder> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_ProcessForFinder> &  ) >(&Transfer_ActorOfProcessForFinder::Transferring),
             R"#(Specific action of Transfer. The Result is stored in the returned Binder, or a Null Handle for "No result" (Default defined as doing nothing; should be deffered) "mutable" allows the Actor to record intermediate information, in addition to those of TransferProcess)#"  , py::arg("start"),  py::arg("TP"))
        .def("TransientResult",
             (opencascade::handle<Transfer_SimpleBinderOfTransient> (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Transfer_SimpleBinderOfTransient> (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ActorOfProcessForFinder::TransientResult),
             R"#(Prepares and Returns a Binder for a Transient Result Returns a Null Handle if <res> is itself Null)#"  , py::arg("res"))
        .def("NullResult",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)() const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)() const>(&Transfer_ActorOfProcessForFinder::NullResult),
             R"#(Returns a Binder for No Result, i.e. a Null Handle)#" )
        .def("SetLast",
             (void (Transfer_ActorOfProcessForFinder::*)( const Standard_Boolean  ) ) static_cast<void (Transfer_ActorOfProcessForFinder::*)( const Standard_Boolean  ) >(&Transfer_ActorOfProcessForFinder::SetLast),
             R"#(If <mode> is True, commands an Actor to be set at the end of the list of Actors (see SetNext) If it is False (creation default), each add Actor is set at the beginning of the list This allows to define default Actors (which are Last))#"  , py::arg("mode")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsLast",
             (Standard_Boolean (Transfer_ActorOfProcessForFinder::*)() const) static_cast<Standard_Boolean (Transfer_ActorOfProcessForFinder::*)() const>(&Transfer_ActorOfProcessForFinder::IsLast),
             R"#(Returns the Last status (see SetLast).)#" )
        .def("SetNext",
             (void (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_ActorOfProcessForFinder> &  ) ) static_cast<void (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_ActorOfProcessForFinder> &  ) >(&Transfer_ActorOfProcessForFinder::SetNext),
             R"#(Defines a Next Actor : it can then be asked to work if <me> produces no result for a given type of Object. If Next is already set and is not "Last", calls SetNext on it. If Next defined and "Last", the new actor is added before it in the list)#"  , py::arg("next"))
        .def("Next",
             (opencascade::handle<Transfer_ActorOfProcessForFinder> (Transfer_ActorOfProcessForFinder::*)() const) static_cast<opencascade::handle<Transfer_ActorOfProcessForFinder> (Transfer_ActorOfProcessForFinder::*)() const>(&Transfer_ActorOfProcessForFinder::Next),
             R"#(Returns the Actor defined as Next, or a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorOfProcessForFinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorOfProcessForFinder::*)() const>(&Transfer_ActorOfProcessForFinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorOfProcessForFinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ActorOfProcessForFinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ActorOfProcessForTransient ,opencascade::handle<Transfer_ActorOfProcessForTransient>  , Standard_Transient >>(m.attr("Transfer_ActorOfProcessForTransient"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ActorOfProcessForTransient::Recognize),
             R"#(Prerequesite for Transfer : the method Transfer is called on a starting object only if Recognize has returned True on it This allows to define a list of Actors, each one processing a definite kind of data TransferProcess calls Recognize on each one before calling Transfer. But even if Recognize has returned True, Transfer can reject by returning a Null Binder (afterwards rejection), the next actor is then invoked)#"  , py::arg("start"))
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_ProcessForTransient> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_ProcessForTransient> &  ) >(&Transfer_ActorOfProcessForTransient::Transferring),
             R"#(Specific action of Transfer. The Result is stored in the returned Binder, or a Null Handle for "No result" (Default defined as doing nothing; should be deffered) "mutable" allows the Actor to record intermediate information, in addition to those of TransferProcess)#"  , py::arg("start"),  py::arg("TP"))
        .def("TransientResult",
             (opencascade::handle<Transfer_SimpleBinderOfTransient> (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Transfer_SimpleBinderOfTransient> (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ActorOfProcessForTransient::TransientResult),
             R"#(Prepares and Returns a Binder for a Transient Result Returns a Null Handle if <res> is itself Null)#"  , py::arg("res"))
        .def("NullResult",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForTransient::*)() const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForTransient::*)() const>(&Transfer_ActorOfProcessForTransient::NullResult),
             R"#(Returns a Binder for No Result, i.e. a Null Handle)#" )
        .def("SetLast",
             (void (Transfer_ActorOfProcessForTransient::*)( const Standard_Boolean  ) ) static_cast<void (Transfer_ActorOfProcessForTransient::*)( const Standard_Boolean  ) >(&Transfer_ActorOfProcessForTransient::SetLast),
             R"#(If <mode> is True, commands an Actor to be set at the end of the list of Actors (see SetNext) If it is False (creation default), each add Actor is set at the beginning of the list This allows to define default Actors (which are Last))#"  , py::arg("mode")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsLast",
             (Standard_Boolean (Transfer_ActorOfProcessForTransient::*)() const) static_cast<Standard_Boolean (Transfer_ActorOfProcessForTransient::*)() const>(&Transfer_ActorOfProcessForTransient::IsLast),
             R"#(Returns the Last status (see SetLast).)#" )
        .def("SetNext",
             (void (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Transfer_ActorOfProcessForTransient> &  ) ) static_cast<void (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Transfer_ActorOfProcessForTransient> &  ) >(&Transfer_ActorOfProcessForTransient::SetNext),
             R"#(Defines a Next Actor : it can then be asked to work if <me> produces no result for a given type of Object. If Next is already set and is not "Last", calls SetNext on it. If Next defined and "Last", the new actor is added before it in the list)#"  , py::arg("next"))
        .def("Next",
             (opencascade::handle<Transfer_ActorOfProcessForTransient> (Transfer_ActorOfProcessForTransient::*)() const) static_cast<opencascade::handle<Transfer_ActorOfProcessForTransient> (Transfer_ActorOfProcessForTransient::*)() const>(&Transfer_ActorOfProcessForTransient::Next),
             R"#(Returns the Actor defined as Next, or a Null Handle)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorOfProcessForTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorOfProcessForTransient::*)() const>(&Transfer_ActorOfProcessForTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorOfProcessForTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ActorOfProcessForTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_Binder ,opencascade::handle<Transfer_Binder> ,Py_Transfer_Binder , Standard_Transient >>(m.attr("Transfer_Binder"))
    // constructors
    // custom constructors
    // methods
        .def("Merge",
             (void (Transfer_Binder::*)( const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_Binder::*)( const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_Binder::Merge),
             R"#(Merges basic data (Check, ExecStatus) from another Binder but keeps its result. Used when a binder is replaced by another one, this allows to keep messages)#"  , py::arg("other"))
        .def("IsMultiple",
             (Standard_Boolean (Transfer_Binder::*)() const) static_cast<Standard_Boolean (Transfer_Binder::*)() const>(&Transfer_Binder::IsMultiple),
             R"#(Returns True if a Binder has several results, either by itself or because it has next results Can be defined by sub-classes.)#" )
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_Binder::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_Binder::*)() const>(&Transfer_Binder::ResultType),
             R"#(Returns the Type which characterizes the Result (if known))#" )
        .def("ResultTypeName",
             (Standard_CString (Transfer_Binder::*)() const) static_cast<Standard_CString (Transfer_Binder::*)() const>(&Transfer_Binder::ResultTypeName),
             R"#(Returns the Name of the Type which characterizes the Result Can be returned even if ResultType itself is unknown)#" )
        .def("AddResult",
             (void (Transfer_Binder::*)( const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_Binder::*)( const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_Binder::AddResult),
             R"#(Adds a next result (at the end of the list) Remark : this information is not processed by Merge)#"  , py::arg("next"))
        .def("NextResult",
             (opencascade::handle<Transfer_Binder> (Transfer_Binder::*)() const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_Binder::*)() const>(&Transfer_Binder::NextResult),
             R"#(Returns the next result, Null if none)#" )
        .def("HasResult",
             (Standard_Boolean (Transfer_Binder::*)() const) static_cast<Standard_Boolean (Transfer_Binder::*)() const>(&Transfer_Binder::HasResult),
             R"#(Returns True if a Result is available (StatusResult = Defined) A Unique Result will be gotten by Result (which must be defined in each sub-class according to result type) For a Multiple Result, see class MultipleBinder For other case, specific access has to be forecast)#" )
        .def("SetAlreadyUsed",
             (void (Transfer_Binder::*)() ) static_cast<void (Transfer_Binder::*)() >(&Transfer_Binder::SetAlreadyUsed),
             R"#(Declares that result is now used by another one, it means that it cannot be modified (by Rebind))#" )
        .def("Status",
             (Transfer_StatusResult (Transfer_Binder::*)() const) static_cast<Transfer_StatusResult (Transfer_Binder::*)() const>(&Transfer_Binder::Status),
             R"#(Returns status, which can be Initial (not yet done), Made (a result is recorded, not yet shared), Used (it is shared and cannot be modified))#" )
        .def("StatusExec",
             (Transfer_StatusExec (Transfer_Binder::*)() const) static_cast<Transfer_StatusExec (Transfer_Binder::*)() const>(&Transfer_Binder::StatusExec),
             R"#(Returns execution status)#" )
        .def("SetStatusExec",
             (void (Transfer_Binder::*)( const Transfer_StatusExec  ) ) static_cast<void (Transfer_Binder::*)( const Transfer_StatusExec  ) >(&Transfer_Binder::SetStatusExec),
             R"#(Modifies execution status; called by TransferProcess only (for StatusError, rather use SetError, below))#"  , py::arg("stat"))
        .def("AddFail",
             (void (Transfer_Binder::*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_Binder::*)( const Standard_CString ,  const Standard_CString  ) >(&Transfer_Binder::AddFail),
             R"#(Used to declare an individual transfer as beeing erroneous (Status is set to Void, StatusExec is set to Error, <errmess> is added to Check's list of Fails) It is possible to record several messages of error)#"  , py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddWarning",
             (void (Transfer_Binder::*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_Binder::*)( const Standard_CString ,  const Standard_CString  ) >(&Transfer_Binder::AddWarning),
             R"#(Used to attach a Warning Message to an individual Transfer It has no effect on the Status)#"  , py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("Check",
             (const opencascade::handle<Interface_Check> (Transfer_Binder::*)() const) static_cast<const opencascade::handle<Interface_Check> (Transfer_Binder::*)() const>(&Transfer_Binder::Check),
             R"#(Returns Check which stores Fail messages Note that no Entity is associated in this Check)#" )
        .def("CCheck",
             (opencascade::handle<Interface_Check> (Transfer_Binder::*)() ) static_cast<opencascade::handle<Interface_Check> (Transfer_Binder::*)() >(&Transfer_Binder::CCheck),
             R"#(Returns Check which stores Fail messages, in order to modify it (adding messages, or replacing it))#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_Binder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_Binder::*)() const>(&Transfer_Binder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_Binder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_Binder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Transfer_DataInfo , shared_ptr<Transfer_DataInfo>>(m,"Transfer_DataInfo");

    static_cast<py::class_<Transfer_DataInfo , shared_ptr<Transfer_DataInfo>  >>(m.attr("Transfer_DataInfo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Type_s",
                    (opencascade::handle<Standard_Type> (*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<opencascade::handle<Standard_Type> (*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_DataInfo::Type),
                    R"#(Returns the Type attached to an object Here, the Dynamic Type of a Transient. Null Type if unknown)#"  , py::arg("ent"))
        .def_static("TypeName_s",
                    (Standard_CString (*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_CString (*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_DataInfo::TypeName),
                    R"#(Returns Type Name (string) Allows to name type of non-handled objects)#"  , py::arg("ent"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_DispatchControl ,opencascade::handle<Transfer_DispatchControl>  , Interface_CopyControl >>(m.attr("Transfer_DispatchControl"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Transfer_TransientProcess> & >()  , py::arg("model"),  py::arg("TP") )
    // custom constructors
    // methods
        .def("TransientProcess",
             (const opencascade::handle<Transfer_TransientProcess> & (Transfer_DispatchControl::*)() const) static_cast<const opencascade::handle<Transfer_TransientProcess> & (Transfer_DispatchControl::*)() const>(&Transfer_DispatchControl::TransientProcess),
             R"#(Returns the content of the DispatchControl : it can be used for a direct call, if the basic methods do not suffice)#" )
        .def("StartingModel",
             (const opencascade::handle<Interface_InterfaceModel> & (Transfer_DispatchControl::*)() const) static_cast<const opencascade::handle<Interface_InterfaceModel> & (Transfer_DispatchControl::*)() const>(&Transfer_DispatchControl::StartingModel),
             R"#(Returns the Model from which the transfer is to be done)#" )
        .def("Clear",
             (void (Transfer_DispatchControl::*)() ) static_cast<void (Transfer_DispatchControl::*)() >(&Transfer_DispatchControl::Clear),
             R"#(Clears the List of Copied Results)#" )
        .def("Bind",
             (void (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_DispatchControl::Bind),
             R"#(Binds a (Transient) Result to a (Transient) Starting Entity)#"  , py::arg("ent"),  py::arg("res"))
        .def("Search",
             (Standard_Boolean (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Standard_Transient> &  ) const>(&Transfer_DispatchControl::Search),
             R"#(Searches for the Result bound to a Starting Entity If Found, returns True and fills <res> Else, returns False and nullifies <res>)#"  , py::arg("ent"),  py::arg("res"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_DispatchControl::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_DispatchControl::*)() const>(&Transfer_DispatchControl::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_DispatchControl::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_DispatchControl::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Transfer_FindHasher , shared_ptr<Transfer_FindHasher>>(m,"Transfer_FindHasher");

    static_cast<py::class_<Transfer_FindHasher , shared_ptr<Transfer_FindHasher>  >>(m.attr("Transfer_FindHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)( const opencascade::handle<Transfer_Finder> & ,  Standard_Integer  ) ) static_cast<Standard_Integer (*)( const opencascade::handle<Transfer_Finder> & ,  Standard_Integer  ) >(&Transfer_FindHasher::HashCode),
                    R"#(Returns hash code for the given finder, in the range [1, theUpperBound]. Asks the finder its hash code, then transforms it to be in the required range)#"  , py::arg("theFinder"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_Finder> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_FindHasher::IsEqual),
                    R"#(Returns True if two keys are the same. The test does not work on the Finders themselves but by calling their methods Equates)#"  , py::arg("K1"),  py::arg("K2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_Finder ,opencascade::handle<Transfer_Finder> ,Py_Transfer_Finder , Standard_Transient >>(m.attr("Transfer_Finder"))
    // constructors
    // custom constructors
    // methods
        .def("GetHashCode",
             (Standard_Integer (Transfer_Finder::*)() const) static_cast<Standard_Integer (Transfer_Finder::*)() const>(&Transfer_Finder::GetHashCode),
             R"#(Returns the HashCode which has been stored by SetHashCode (remark that HashCode could be deferred then be defined by sub-classes, the result is the same))#" )
        .def("Equates",
             (Standard_Boolean (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Boolean (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_Finder::Equates),
             R"#(Specific testof equallity : to be defined by each sub-class, must be False if Finders have not the same true Type, else their contents must be compared)#"  , py::arg("other"))
        .def("ValueType",
             (opencascade::handle<Standard_Type> (Transfer_Finder::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_Finder::*)() const>(&Transfer_Finder::ValueType),
             R"#(Returns the Type of the Value. By default, returns the DynamicType of <me>, but can be redefined)#" )
        .def("ValueTypeName",
             (Standard_CString (Transfer_Finder::*)() const) static_cast<Standard_CString (Transfer_Finder::*)() const>(&Transfer_Finder::ValueTypeName),
             R"#(Returns the name of the Type of the Value. Default is name of ValueType, unless it is for a non-handled object)#" )
        .def("SetAttribute",
             (void (Transfer_Finder::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_Finder::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_Finder::SetAttribute),
             R"#(Adds an attribute with a given name (replaces the former one with the same name if already exists))#"  , py::arg("name"),  py::arg("val"))
        .def("RemoveAttribute",
             (Standard_Boolean (Transfer_Finder::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (Transfer_Finder::*)( const Standard_CString  ) >(&Transfer_Finder::RemoveAttribute),
             R"#(Removes an attribute Returns True when done, False if this attribute did not exist)#"  , py::arg("name"))
        .def("GetAttribute",
             (Standard_Boolean (Transfer_Finder::*)( const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_Finder::*)( const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const>(&Transfer_Finder::GetAttribute),
             R"#(Returns an attribute from its name, filtered by a type If no attribute has this name, or if it is not kind of this type, <val> is Null and returned value is False Else, it is True)#"  , py::arg("name"),  py::arg("type"),  py::arg("val"))
        .def("Attribute",
             (opencascade::handle<Standard_Transient> (Transfer_Finder::*)( const Standard_CString  ) const) static_cast<opencascade::handle<Standard_Transient> (Transfer_Finder::*)( const Standard_CString  ) const>(&Transfer_Finder::Attribute),
             R"#(Returns an attribute from its name. Null Handle if not recorded (whatever Transient, Integer, Real ...))#"  , py::arg("name"))
        .def("AttributeType",
             (Interface_ParamType (Transfer_Finder::*)( const Standard_CString  ) const) static_cast<Interface_ParamType (Transfer_Finder::*)( const Standard_CString  ) const>(&Transfer_Finder::AttributeType),
             R"#(Returns the type of an attribute : ParamInt , ParamReal , ParamText (String) , ParamIdent (any) or ParamVoid (not recorded))#"  , py::arg("name"))
        .def("SetIntegerAttribute",
             (void (Transfer_Finder::*)( const Standard_CString ,  const Standard_Integer  ) ) static_cast<void (Transfer_Finder::*)( const Standard_CString ,  const Standard_Integer  ) >(&Transfer_Finder::SetIntegerAttribute),
             R"#(Adds an integer value for an attribute)#"  , py::arg("name"),  py::arg("val"))
        .def("GetIntegerAttribute",
             (Standard_Boolean (Transfer_Finder::*)( const Standard_CString ,  Standard_Integer &  ) const) static_cast<Standard_Boolean (Transfer_Finder::*)( const Standard_CString ,  Standard_Integer &  ) const>(&Transfer_Finder::GetIntegerAttribute),
             R"#(Returns an attribute from its name, as integer If no attribute has this name, or not an integer, <val> is 0 and returned value is False Else, it is True)#"  , py::arg("name"),  py::arg("val"))
        .def("IntegerAttribute",
             (Standard_Integer (Transfer_Finder::*)( const Standard_CString  ) const) static_cast<Standard_Integer (Transfer_Finder::*)( const Standard_CString  ) const>(&Transfer_Finder::IntegerAttribute),
             R"#(Returns an integer attribute from its name. 0 if not recorded)#"  , py::arg("name"))
        .def("SetRealAttribute",
             (void (Transfer_Finder::*)( const Standard_CString ,  const Standard_Real  ) ) static_cast<void (Transfer_Finder::*)( const Standard_CString ,  const Standard_Real  ) >(&Transfer_Finder::SetRealAttribute),
             R"#(Adds a real value for an attribute)#"  , py::arg("name"),  py::arg("val"))
        .def("GetRealAttribute",
             (Standard_Boolean (Transfer_Finder::*)( const Standard_CString ,  Standard_Real &  ) const) static_cast<Standard_Boolean (Transfer_Finder::*)( const Standard_CString ,  Standard_Real &  ) const>(&Transfer_Finder::GetRealAttribute),
             R"#(Returns an attribute from its name, as real If no attribute has this name, or not a real <val> is 0.0 and returned value is False Else, it is True)#"  , py::arg("name"),  py::arg("val"))
        .def("RealAttribute",
             (Standard_Real (Transfer_Finder::*)( const Standard_CString  ) const) static_cast<Standard_Real (Transfer_Finder::*)( const Standard_CString  ) const>(&Transfer_Finder::RealAttribute),
             R"#(Returns a real attribute from its name. 0.0 if not recorded)#"  , py::arg("name"))
        .def("SetStringAttribute",
             (void (Transfer_Finder::*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_Finder::*)( const Standard_CString ,  const Standard_CString  ) >(&Transfer_Finder::SetStringAttribute),
             R"#(Adds a String value for an attribute)#"  , py::arg("name"),  py::arg("val"))
        .def("StringAttribute",
             (Standard_CString (Transfer_Finder::*)( const Standard_CString  ) const) static_cast<Standard_CString (Transfer_Finder::*)( const Standard_CString  ) const>(&Transfer_Finder::StringAttribute),
             R"#(Returns a String attribute from its name. "" if not recorded)#"  , py::arg("name"))
        .def("AttrList",
             (NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (Transfer_Finder::*)() ) static_cast<NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (Transfer_Finder::*)() >(&Transfer_Finder::AttrList),
             R"#(Returns the exhaustive list of attributes)#" )
        .def("SameAttributes",
             (void (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<void (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_Finder::SameAttributes),
             R"#(Gets the list of attributes from <other>, as such, i.e. not copied : attributes are shared, any attribute edited, added, or removed in <other> is also in <me> and vice versa The former list of attributes of <me> is dropped)#"  , py::arg("other"))
        .def("GetAttributes",
             (void (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_Boolean  ) ) static_cast<void (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_Boolean  ) >(&Transfer_Finder::GetAttributes),
             R"#(Gets the list of attributes from <other>, by copying it By default, considers all the attributes from <other> If <fromname> is given, considers only the attributes with name beginning by <fromname>)#"  , py::arg("other"),  py::arg("fromname")=static_cast<const Standard_CString>(""),  py::arg("copied")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_Finder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_Finder::*)() const>(&Transfer_Finder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_Finder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_Finder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_HSequenceOfBinder ,opencascade::handle<Transfer_HSequenceOfBinder>  , Transfer_SequenceOfBinder , Standard_Transient >>(m.attr("Transfer_HSequenceOfBinder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Transfer_Binder> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Transfer_SequenceOfBinder & (Transfer_HSequenceOfBinder::*)() const) static_cast<const Transfer_SequenceOfBinder & (Transfer_HSequenceOfBinder::*)() const>(&Transfer_HSequenceOfBinder::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Transfer_HSequenceOfBinder::*)(  const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_HSequenceOfBinder::*)(  const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_HSequenceOfBinder::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Transfer_HSequenceOfBinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Binder> > &  ) ) static_cast<void (Transfer_HSequenceOfBinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Binder> > &  ) >(&Transfer_HSequenceOfBinder::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Transfer_SequenceOfBinder & (Transfer_HSequenceOfBinder::*)() ) static_cast<Transfer_SequenceOfBinder & (Transfer_HSequenceOfBinder::*)() >(&Transfer_HSequenceOfBinder::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_HSequenceOfBinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_HSequenceOfBinder::*)() const>(&Transfer_HSequenceOfBinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_HSequenceOfBinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_HSequenceOfBinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_HSequenceOfFinder ,opencascade::handle<Transfer_HSequenceOfFinder>  , Transfer_SequenceOfFinder , Standard_Transient >>(m.attr("Transfer_HSequenceOfFinder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Transfer_Finder> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Transfer_SequenceOfFinder & (Transfer_HSequenceOfFinder::*)() const) static_cast<const Transfer_SequenceOfFinder & (Transfer_HSequenceOfFinder::*)() const>(&Transfer_HSequenceOfFinder::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Transfer_HSequenceOfFinder::*)(  const opencascade::handle<Transfer_Finder> &  ) ) static_cast<void (Transfer_HSequenceOfFinder::*)(  const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_HSequenceOfFinder::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Transfer_HSequenceOfFinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Finder> > &  ) ) static_cast<void (Transfer_HSequenceOfFinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Finder> > &  ) >(&Transfer_HSequenceOfFinder::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (Transfer_SequenceOfFinder & (Transfer_HSequenceOfFinder::*)() ) static_cast<Transfer_SequenceOfFinder & (Transfer_HSequenceOfFinder::*)() >(&Transfer_HSequenceOfFinder::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_HSequenceOfFinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_HSequenceOfFinder::*)() const>(&Transfer_HSequenceOfFinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_HSequenceOfFinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_HSequenceOfFinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_MapContainer ,opencascade::handle<Transfer_MapContainer>  , Standard_Transient >>(m.attr("Transfer_MapContainer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetMapObjects",
             (void (Transfer_MapContainer::*)( NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> &  ) ) static_cast<void (Transfer_MapContainer::*)( NCollection_DataMap<opencascade::handle<Standard_Transient>, opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> &  ) >(&Transfer_MapContainer::SetMapObjects),
             R"#(Set map already translated geometry objects.)#"  , py::arg("theMapObjects"))
        .def("GetMapObjects",
             (TColStd_DataMapOfTransientTransient & (Transfer_MapContainer::*)() ) static_cast<TColStd_DataMapOfTransientTransient & (Transfer_MapContainer::*)() >(&Transfer_MapContainer::GetMapObjects),
             R"#(Get map already translated geometry objects.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_MapContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_MapContainer::*)() const>(&Transfer_MapContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_MapContainer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_MapContainer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ProcessForFinder ,opencascade::handle<Transfer_ProcessForFinder>  , Standard_Transient >>(m.attr("Transfer_ProcessForFinder"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("nb")=static_cast<const Standard_Integer>(10000) )
        .def(py::init< const opencascade::handle<Message_Messenger> &,const Standard_Integer >()  , py::arg("printer"),  py::arg("nb")=static_cast<const Standard_Integer>(10000) )
    // custom constructors
    // methods
        .def("Clear",
             (void (Transfer_ProcessForFinder::*)() ) static_cast<void (Transfer_ProcessForFinder::*)() >(&Transfer_ProcessForFinder::Clear),
             R"#(Resets a TransferProcess as ready for a completely new work. Clears general data (roots) and the Map)#" )
        .def("Clean",
             (void (Transfer_ProcessForFinder::*)() ) static_cast<void (Transfer_ProcessForFinder::*)() >(&Transfer_ProcessForFinder::Clean),
             R"#(Rebuilds the Map and the roots to really remove Unbound items Because Unbind keeps the entity in place, even if not bound Hence, working by checking new items is meaningless if a formerly unbound item is rebound)#" )
        .def("Resize",
             (void (Transfer_ProcessForFinder::*)( const Standard_Integer  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const Standard_Integer  ) >(&Transfer_ProcessForFinder::Resize),
             R"#(Resizes the Map as required (if a new reliable value has been determined). Acts only if <nb> is greater than actual NbMapped)#"  , py::arg("nb"))
        .def("SetActor",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_ActorOfProcessForFinder> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_ActorOfProcessForFinder> &  ) >(&Transfer_ProcessForFinder::SetActor),
             R"#(Defines an Actor, which is used for automatic Transfer If already defined, the new Actor is cumulated (see SetNext from Actor))#"  , py::arg("actor"))
        .def("Actor",
             (opencascade::handle<Transfer_ActorOfProcessForFinder> (Transfer_ProcessForFinder::*)() const) static_cast<opencascade::handle<Transfer_ActorOfProcessForFinder> (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::Actor),
             R"#(Returns the defined Actor. Returns a Null Handle if not set.)#" )
        .def("Find",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::Find),
             R"#(Returns the Binder which is linked with a starting Object It can either bring a Result (Transfer done) or none (for a pre-binding). If no Binder is linked with <start>, returns a Null Handle Considers a category number, by default 0)#"  , py::arg("start"))
        .def("IsBound",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::IsBound),
             R"#(Returns True if a Result (whatever its form) is Bound with a starting Object. I.e., if a Binder with a Result set, is linked with it Considers a category number, by default 0)#"  , py::arg("start"))
        .def("IsAlreadyUsed",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::IsAlreadyUsed),
             R"#(Returns True if the result of the transfer of an object is already used in other ones. If it is, Rebind cannot change it. Considers a category number, by default 0)#"  , py::arg("start"))
        .def("Bind",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_ProcessForFinder::Bind),
             R"#(Creates a Link a starting Object with a Binder. This Binder can either bring a Result (effective Binding) or none (it can be set later : pre-binding). Considers a category number, by default 0)#"  , py::arg("start"),  py::arg("binder"))
        .def("Rebind",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_ProcessForFinder::Rebind),
             R"#(Changes the Binder linked with a starting Object for its unitary transfer. This it can be useful when the exact form of the result is known once the transfer is widely engaged. This can be done only on first transfer. Considers a category number, by default 0)#"  , py::arg("start"),  py::arg("binder"))
        .def("Unbind",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_ProcessForFinder::Unbind),
             R"#(Removes the Binder linked with a starting object If this Binder brings a non-empty Check, it is replaced by a VoidBinder. Also removes from the list of Roots as required. Returns True if done, False if <start> was not bound Considers a category number, by default 0)#"  , py::arg("start"))
        .def("FindElseBind",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_ProcessForFinder::FindElseBind),
             R"#(Returns a Binder for a starting entity, as follows : Tries to Find the already bound one If none found, creates a VoidBinder and Binds it)#"  , py::arg("start"))
        .def("SetMessenger",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Message_Messenger> &  ) >(&Transfer_ProcessForFinder::SetMessenger),
             R"#(Sets Messenger used for outputting messages.)#"  , py::arg("messenger"))
        .def("Messenger",
             (opencascade::handle<Message_Messenger> (Transfer_ProcessForFinder::*)() const) static_cast<opencascade::handle<Message_Messenger> (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::Messenger),
             R"#(Returns Messenger used for outputting messages. The returned object is guaranteed to be non-null; default is Message::Messenger().)#" )
        .def("SetTraceLevel",
             (void (Transfer_ProcessForFinder::*)( const Standard_Integer  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const Standard_Integer  ) >(&Transfer_ProcessForFinder::SetTraceLevel),
             R"#(Sets trace level used for outputting messages: <trace> = 0 : no trace at all <trace> = 1 : handled exceptions and calls to AddError <trace> = 2 : also calls to AddWarning <trace> = 3 : also traces new Roots (uses method ErrorTrace). Default is 1 : Errors traced)#"  , py::arg("tracelev"))
        .def("TraceLevel",
             (Standard_Integer (Transfer_ProcessForFinder::*)() const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::TraceLevel),
             R"#(Returns trace level used for outputting messages.)#" )
        .def("SendFail",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) >(&Transfer_ProcessForFinder::SendFail),
             R"#(New name for AddFail (Msg))#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendWarning",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) >(&Transfer_ProcessForFinder::SendWarning),
             R"#(New name for AddWarning (Msg))#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendMsg",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) >(&Transfer_ProcessForFinder::SendMsg),
             R"#(Adds an information message Trace is filled if trace level is at least 3)#"  , py::arg("start"),  py::arg("amsg"))
        .def("AddFail",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_CString  ) >(&Transfer_ProcessForFinder::AddFail),
             R"#(Adds an Error message to a starting entity (to the check of its Binder of category 0, as a Fail))#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddError",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_CString  ) >(&Transfer_ProcessForFinder::AddError),
             R"#((other name of AddFail, maintained for compatibility))#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddFail",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) >(&Transfer_ProcessForFinder::AddFail),
             R"#(Adds an Error Message to a starting entity from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
        .def("AddWarning",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString ,  const Standard_CString  ) >(&Transfer_ProcessForFinder::AddWarning),
             R"#(Adds a Warning message to a starting entity (to the check of its Binder of category 0))#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddWarning",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Message_Msg &  ) >(&Transfer_ProcessForFinder::AddWarning),
             R"#(Adds a Warning Message to a starting entity from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
        .def("Mend",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_CString  ) >(&Transfer_ProcessForFinder::Mend),
             R"#(None)#"  , py::arg("start"),  py::arg("pref")=static_cast<const Standard_CString>(""))
        .def("Check",
             (opencascade::handle<Interface_Check> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<opencascade::handle<Interface_Check> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::Check),
             R"#(Returns the Check attached to a starting entity. If <start> is unknown, returns an empty Check Adds a case name to a starting entity Adds a case value to a starting entity Returns the complete case list for an entity. Null Handle if empty In the list of mapped items (between 1 and NbMapped), searches for the first item which follows <num0>(not included) and which has an attribute named <name> Attributes are brought by Binders Hence, allows such an iteration)#"  , py::arg("start"))
        .def("BindTransient",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForFinder::BindTransient),
             R"#(Binds a starting object with a Transient Result. Uses a SimpleBinderOfTransient to work. If there is already one but with no Result set, sets its Result. Considers a category number, by default 0)#"  , py::arg("start"),  py::arg("res"))
        .def("FindTransient",
             (const opencascade::handle<Standard_Transient> & (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::FindTransient),
             R"#(Returns the Result of the Transfer of an object <start> as a Transient Result. Returns a Null Handle if there is no Transient Result Considers a category number, by default 0 Warning : Supposes that Binding is done with a SimpleBinderOfTransient)#"  , py::arg("start"))
        .def("BindMultiple",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_ProcessForFinder::BindMultiple),
             R"#(Prepares an object <start> to be bound with several results. If no Binder is yet attached to <obj>, a MultipleBinder is created, empty. If a Binder is already set, it must accept Multiple Binding. Considers a category number, by default 0)#"  , py::arg("start"))
        .def("AddMultiple",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForFinder::AddMultiple),
             R"#(Adds an item to a list of results bound to a starting object. Considers a category number, by default 0, for all results)#"  , py::arg("start"),  py::arg("res"))
        .def("FindTypedTransient",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForFinder::FindTypedTransient),
             R"#(Searches for a transient result attached to a starting object, according to its type, by criterium IsKind(atype))#"  , py::arg("start"),  py::arg("atype"),  py::arg("val"))
        .def("GetTypedTransient",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForFinder::GetTypedTransient),
             R"#(Searches for a transient result recorded in a Binder, whatever this Binder is recorded or not in <me>)#"  , py::arg("binder"),  py::arg("atype"),  py::arg("val"))
        .def("NbMapped",
             (Standard_Integer (Transfer_ProcessForFinder::*)() const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::NbMapped),
             R"#(Returns the maximum possible value for Map Index (no result can be bound with a value greater than it))#" )
        .def("Mapped",
             (const opencascade::handle<Transfer_Finder> & (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Transfer_Finder> & (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const>(&Transfer_ProcessForFinder::Mapped),
             R"#(Returns the Starting Object bound to an Index,)#"  , py::arg("num"))
        .def("MapIndex",
             (Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::MapIndex),
             R"#(Returns the Index value bound to a Starting Object, 0 if none)#"  , py::arg("start"))
        .def("MapItem",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const>(&Transfer_ProcessForFinder::MapItem),
             R"#(Returns the Binder bound to an Index Considers a category number, by default 0)#"  , py::arg("num"))
        .def("SetRoot",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_ProcessForFinder::SetRoot),
             R"#(Declares <obj> (and its Result) as Root. This status will be later exploited by RootResult, see below (Result can be produced at any time))#"  , py::arg("start"))
        .def("SetRootManagement",
             (void (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) >(&Transfer_ProcessForFinder::SetRootManagement),
             R"#(Enable (if <stat> True) or Disables (if <stat> False) Root Management. If it is set, Transfers are considered as stacked (a first Transfer commands other Transfers, and so on) and the Transfers commanded by an external caller are "Root". Remark : SetRoot can be called whatever this status, on every object. Default is set to True.)#"  , py::arg("stat"))
        .def("NbRoots",
             (Standard_Integer (Transfer_ProcessForFinder::*)() const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::NbRoots),
             R"#(Returns the count of recorded Roots)#" )
        .def("Root",
             (const opencascade::handle<Transfer_Finder> & (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Transfer_Finder> & (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const>(&Transfer_ProcessForFinder::Root),
             R"#(Returns a Root Entity given its number in the list (1-NbRoots))#"  , py::arg("num"))
        .def("RootItem",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const>(&Transfer_ProcessForFinder::RootItem),
             R"#(Returns the Binder bound with a Root Entity given its number Considers a category number, by default 0)#"  , py::arg("num"))
        .def("RootIndex",
             (Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::RootIndex),
             R"#(Returns the index in the list of roots for a starting item, or 0 if it is not recorded as a root)#"  , py::arg("start"))
        .def("NestingLevel",
             (Standard_Integer (Transfer_ProcessForFinder::*)() const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::NestingLevel),
             R"#(Returns Nesting Level of Transfers (managed by methods TranscriptWith & Co). Starts to zero. If no automatic Transfer is used, it remains to zero. Zero means Root Level.)#" )
        .def("ResetNestingLevel",
             (void (Transfer_ProcessForFinder::*)() ) static_cast<void (Transfer_ProcessForFinder::*)() >(&Transfer_ProcessForFinder::ResetNestingLevel),
             R"#(Resets Nesting Level of Transfers to Zero (Root Level), whatever its current value.)#" )
        .def("Recognize",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::Recognize),
             R"#(Tells if <start> has been recognized as good candidate for Transfer. i.e. queries the Actor and its Nexts)#"  , py::arg("start"))
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_ProcessForFinder::Transferring),
             R"#(Performs the Transfer of a Starting Object, by calling the method TransferProduct (see below). Mapping and Roots are managed : nothing is done if a Result is already Bound, an exception is raised in case of error.)#"  , py::arg("start"))
        .def("Transfer",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) ) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_ProcessForFinder::Transfer),
             R"#(Same as Transferring but does not return the Binder. Simply returns True in case of success (for user call))#"  , py::arg("start"))
        .def("SetErrorHandle",
             (void (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) >(&Transfer_ProcessForFinder::SetErrorHandle),
             R"#(Allows controls if exceptions will be handled Transfer Operations <err> False : they are not handled with try {} catch {} <err> True : they are Default is False: no handling performed)#"  , py::arg("err"))
        .def("ErrorHandle",
             (Standard_Boolean (Transfer_ProcessForFinder::*)() const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::ErrorHandle),
             R"#(Returns error handling flag)#" )
        .def("StartTrace",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Transfer_ProcessForFinder::StartTrace),
             R"#(Method called when trace is asked Calls PrintTrace to display information relevant for starting objects (which can be redefined) <level> is Nesting Level of Transfer (0 = root) <mode> controls the way the trace is done : 0 neutral, 1 for Error, 2 for Warning message, 3 for new Root)#"  , py::arg("binder"),  py::arg("start"),  py::arg("level"),  py::arg("mode"))
        .def("PrintTrace",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&Transfer_ProcessForFinder::PrintTrace),
             R"#(Prints a short information on a starting object. By default prints its Dynamic Type. Can be redefined)#"  , py::arg("start"),  py::arg("S"))
        .def("IsLooping",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const Standard_Integer  ) const>(&Transfer_ProcessForFinder::IsLooping),
             R"#(Returns True if we are surely in a DeadLoop. Evaluation is not exact, it is a "majorant" which must be computed fast. This "majorant" is : <alevel> greater than NbMapped.)#"  , py::arg("alevel"))
        .def("RootResult",
             (Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) const) static_cast<Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) const>(&Transfer_ProcessForFinder::RootResult),
             R"#(Returns, as an iterator, the log of root transfer, i.e. the created objects and Binders bound to starting roots If withstart is given True, Starting Objets are also returned)#"  , py::arg("withstart")=static_cast<const Standard_Boolean>(Standard_False))
        .def("CompleteResult",
             (Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) const) static_cast<Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) const>(&Transfer_ProcessForFinder::CompleteResult),
             R"#(Returns, as an Iterator, the entire log of transfer (list of created objects and Binders which can bring errors) If withstart is given True, Starting Objets are also returned)#"  , py::arg("withstart")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AbnormalResult",
             (Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)() const) static_cast<Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::AbnormalResult),
             R"#(Returns Binders which are neither "Done" nor "Initial", that is Error,Loop or Run (abnormal states at end of Transfer) Starting Objects are given in correspondance in the iterator)#" )
        .def("CheckList",
             (Interface_CheckIterator (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) const) static_cast<Interface_CheckIterator (Transfer_ProcessForFinder::*)( const Standard_Boolean  ) const>(&Transfer_ProcessForFinder::CheckList),
             R"#(Returns a CheckList as a list of Check : each one is for a starting entity which have either check (warning or fail) messages are attached, or are in abnormal state : that case gives a specific message If <erronly> is True, checks with Warnings only are ignored)#"  , py::arg("erronly"))
        .def("ResultOne",
             (Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Transfer_IteratorOfProcessForFinder (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&Transfer_ProcessForFinder::ResultOne),
             R"#(Returns, as an Iterator, the log of transfer for one object <level> = 0 : this object only and if <start> is a scope owner (else, <level> is ignored) : <level> = 1 : object plus its immediate scoped ones <level> = 2 : object plus all its scoped ones)#"  , py::arg("start"),  py::arg("level"),  py::arg("withstart")=static_cast<const Standard_Boolean>(Standard_False))
        .def("CheckListOne",
             (Interface_CheckIterator (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Interface_CheckIterator (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&Transfer_ProcessForFinder::CheckListOne),
             R"#(Returns a CheckList for one starting object <level> interpreted as by ResultOne If <erronly> is True, checks with Warnings only are ignored)#"  , py::arg("start"),  py::arg("level"),  py::arg("erronly"))
        .def("IsCheckListEmpty",
             (Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&Transfer_ProcessForFinder::IsCheckListEmpty),
             R"#(Returns True if no check message is attached to a starting object. <level> interpreted as by ResultOne If <erronly> is True, checks with Warnings only are ignored)#"  , py::arg("start"),  py::arg("level"),  py::arg("erronly"))
        .def("RemoveResult",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&Transfer_ProcessForFinder::RemoveResult),
             R"#(Removes Results attached to (== Unbinds) a given object and, according <level> : <level> = 0 : only it <level> = 1 : it plus its immediately owned sub-results(scope) <level> = 2 : it plus all its owned sub-results(scope))#"  , py::arg("start"),  py::arg("level"),  py::arg("compute")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CheckNum",
             (Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_ProcessForFinder::CheckNum),
             R"#(Computes a number to be associated to a starting object in a check or a check-list By default, returns 0; can be redefined)#"  , py::arg("start"))
        .def("SetProgress",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Message_ProgressIndicator> &  ) >(&Transfer_ProcessForFinder::SetProgress),
             R"#(Sets Progress indicator)#"  , py::arg("theProgress"))
        .def("GetProgress",
             (opencascade::handle<Message_ProgressIndicator> (Transfer_ProcessForFinder::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::GetProgress),
             R"#(Gets Progress indicator)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ProcessForFinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ProcessForFinder::*)() const>(&Transfer_ProcessForFinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ProcessForFinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ProcessForFinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ProcessForTransient ,opencascade::handle<Transfer_ProcessForTransient>  , Standard_Transient >>(m.attr("Transfer_ProcessForTransient"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("nb")=static_cast<const Standard_Integer>(10000) )
        .def(py::init< const opencascade::handle<Message_Messenger> &,const Standard_Integer >()  , py::arg("printer"),  py::arg("nb")=static_cast<const Standard_Integer>(10000) )
    // custom constructors
    // methods
        .def("Clear",
             (void (Transfer_ProcessForTransient::*)() ) static_cast<void (Transfer_ProcessForTransient::*)() >(&Transfer_ProcessForTransient::Clear),
             R"#(Resets a TransferProcess as ready for a completely new work. Clears general data (roots) and the Map)#" )
        .def("Clean",
             (void (Transfer_ProcessForTransient::*)() ) static_cast<void (Transfer_ProcessForTransient::*)() >(&Transfer_ProcessForTransient::Clean),
             R"#(Rebuilds the Map and the roots to really remove Unbound items Because Unbind keeps the entity in place, even if not bound Hence, working by checking new items is meaningless if a formerly unbound item is rebound)#" )
        .def("Resize",
             (void (Transfer_ProcessForTransient::*)( const Standard_Integer  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const Standard_Integer  ) >(&Transfer_ProcessForTransient::Resize),
             R"#(Resizes the Map as required (if a new reliable value has been determined). Acts only if <nb> is greater than actual NbMapped)#"  , py::arg("nb"))
        .def("SetActor",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Transfer_ActorOfProcessForTransient> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Transfer_ActorOfProcessForTransient> &  ) >(&Transfer_ProcessForTransient::SetActor),
             R"#(Defines an Actor, which is used for automatic Transfer If already defined, the new Actor is cumulated (see SetNext from Actor))#"  , py::arg("actor"))
        .def("Actor",
             (opencascade::handle<Transfer_ActorOfProcessForTransient> (Transfer_ProcessForTransient::*)() const) static_cast<opencascade::handle<Transfer_ActorOfProcessForTransient> (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::Actor),
             R"#(Returns the defined Actor. Returns a Null Handle if not set.)#" )
        .def("Find",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::Find),
             R"#(Returns the Binder which is linked with a starting Object It can either bring a Result (Transfer done) or none (for a pre-binding). If no Binder is linked with <start>, returns a Null Handle Considers a category number, by default 0)#"  , py::arg("start"))
        .def("IsBound",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::IsBound),
             R"#(Returns True if a Result (whatever its form) is Bound with a starting Object. I.e., if a Binder with a Result set, is linked with it Considers a category number, by default 0)#"  , py::arg("start"))
        .def("IsAlreadyUsed",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::IsAlreadyUsed),
             R"#(Returns True if the result of the transfer of an object is already used in other ones. If it is, Rebind cannot change it. Considers a category number, by default 0)#"  , py::arg("start"))
        .def("Bind",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_ProcessForTransient::Bind),
             R"#(Creates a Link a starting Object with a Binder. This Binder can either bring a Result (effective Binding) or none (it can be set later : pre-binding). Considers a category number, by default 0)#"  , py::arg("start"),  py::arg("binder"))
        .def("Rebind",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_ProcessForTransient::Rebind),
             R"#(Changes the Binder linked with a starting Object for its unitary transfer. This it can be useful when the exact form of the result is known once the transfer is widely engaged. This can be done only on first transfer. Considers a category number, by default 0)#"  , py::arg("start"),  py::arg("binder"))
        .def("Unbind",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::Unbind),
             R"#(Removes the Binder linked with a starting object If this Binder brings a non-empty Check, it is replaced by a VoidBinder. Also removes from the list of Roots as required. Returns True if done, False if <start> was not bound Considers a category number, by default 0)#"  , py::arg("start"))
        .def("FindElseBind",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::FindElseBind),
             R"#(Returns a Binder for a starting entity, as follows : Tries to Find the already bound one If none found, creates a VoidBinder and Binds it)#"  , py::arg("start"))
        .def("SetMessenger",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Message_Messenger> &  ) >(&Transfer_ProcessForTransient::SetMessenger),
             R"#(Sets Messenger used for outputting messages.)#"  , py::arg("messenger"))
        .def("Messenger",
             (opencascade::handle<Message_Messenger> (Transfer_ProcessForTransient::*)() const) static_cast<opencascade::handle<Message_Messenger> (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::Messenger),
             R"#(Returns Messenger used for outputting messages. The returned object is guaranteed to be non-null; default is Message::Messenger().)#" )
        .def("SetTraceLevel",
             (void (Transfer_ProcessForTransient::*)( const Standard_Integer  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const Standard_Integer  ) >(&Transfer_ProcessForTransient::SetTraceLevel),
             R"#(Sets trace level used for outputting messages: <trace> = 0 : no trace at all <trace> = 1 : handled exceptions and calls to AddError <trace> = 2 : also calls to AddWarning <trace> = 3 : also traces new Roots (uses method ErrorTrace). Default is 1 : Errors traced)#"  , py::arg("tracelev"))
        .def("TraceLevel",
             (Standard_Integer (Transfer_ProcessForTransient::*)() const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::TraceLevel),
             R"#(Returns trace level used for outputting messages.)#" )
        .def("SendFail",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) >(&Transfer_ProcessForTransient::SendFail),
             R"#(New name for AddFail (Msg))#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendWarning",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) >(&Transfer_ProcessForTransient::SendWarning),
             R"#(New name for AddWarning (Msg))#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendMsg",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) >(&Transfer_ProcessForTransient::SendMsg),
             R"#(Adds an information message Trace is filled if trace level is at least 3)#"  , py::arg("start"),  py::arg("amsg"))
        .def("AddFail",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_CString  ) >(&Transfer_ProcessForTransient::AddFail),
             R"#(Adds an Error message to a starting entity (to the check of its Binder of category 0, as a Fail))#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddError",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_CString  ) >(&Transfer_ProcessForTransient::AddError),
             R"#((other name of AddFail, maintained for compatibility))#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddFail",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) >(&Transfer_ProcessForTransient::AddFail),
             R"#(Adds an Error Message to a starting entity from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
        .def("AddWarning",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString ,  const Standard_CString  ) >(&Transfer_ProcessForTransient::AddWarning),
             R"#(Adds a Warning message to a starting entity (to the check of its Binder of category 0))#"  , py::arg("start"),  py::arg("mess"),  py::arg("orig")=static_cast<const Standard_CString>(""))
        .def("AddWarning",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Message_Msg &  ) >(&Transfer_ProcessForTransient::AddWarning),
             R"#(Adds a Warning Message to a starting entity from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
        .def("Mend",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_CString  ) >(&Transfer_ProcessForTransient::Mend),
             R"#(None)#"  , py::arg("start"),  py::arg("pref")=static_cast<const Standard_CString>(""))
        .def("Check",
             (opencascade::handle<Interface_Check> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Interface_Check> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::Check),
             R"#(Returns the Check attached to a starting entity. If <start> is unknown, returns an empty Check Adds a case name to a starting entity Adds a case value to a starting entity Returns the complete case list for an entity. Null Handle if empty In the list of mapped items (between 1 and NbMapped), searches for the first item which follows <num0>(not included) and which has an attribute named <name> Attributes are brought by Binders Hence, allows such an iteration)#"  , py::arg("start"))
        .def("BindTransient",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::BindTransient),
             R"#(Binds a starting object with a Transient Result. Uses a SimpleBinderOfTransient to work. If there is already one but with no Result set, sets its Result. Considers a category number, by default 0)#"  , py::arg("start"),  py::arg("res"))
        .def("FindTransient",
             (const opencascade::handle<Standard_Transient> & (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::FindTransient),
             R"#(Returns the Result of the Transfer of an object <start> as a Transient Result. Returns a Null Handle if there is no Transient Result Considers a category number, by default 0 Warning : Supposes that Binding is done with a SimpleBinderOfTransient)#"  , py::arg("start"))
        .def("BindMultiple",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::BindMultiple),
             R"#(Prepares an object <start> to be bound with several results. If no Binder is yet attached to <obj>, a MultipleBinder is created, empty. If a Binder is already set, it must accept Multiple Binding. Considers a category number, by default 0)#"  , py::arg("start"))
        .def("AddMultiple",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::AddMultiple),
             R"#(Adds an item to a list of results bound to a starting object. Considers a category number, by default 0, for all results)#"  , py::arg("start"),  py::arg("res"))
        .def("FindTypedTransient",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::FindTypedTransient),
             R"#(Searches for a transient result attached to a starting object, according to its type, by criterium IsKind(atype))#"  , py::arg("start"),  py::arg("atype"),  py::arg("val"))
        .def("GetTypedTransient",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::GetTypedTransient),
             R"#(Searches for a transient result recorded in a Binder, whatever this Binder is recorded or not in <me>)#"  , py::arg("binder"),  py::arg("atype"),  py::arg("val"))
        .def("NbMapped",
             (Standard_Integer (Transfer_ProcessForTransient::*)() const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::NbMapped),
             R"#(Returns the maximum possible value for Map Index (no result can be bound with a value greater than it))#" )
        .def("Mapped",
             (const opencascade::handle<Standard_Transient> & (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const>(&Transfer_ProcessForTransient::Mapped),
             R"#(Returns the Starting Object bound to an Index,)#"  , py::arg("num"))
        .def("MapIndex",
             (Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::MapIndex),
             R"#(Returns the Index value bound to a Starting Object, 0 if none)#"  , py::arg("start"))
        .def("MapItem",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const>(&Transfer_ProcessForTransient::MapItem),
             R"#(Returns the Binder bound to an Index Considers a category number, by default 0)#"  , py::arg("num"))
        .def("SetRoot",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::SetRoot),
             R"#(Declares <obj> (and its Result) as Root. This status will be later exploited by RootResult, see below (Result can be produced at any time))#"  , py::arg("start"))
        .def("SetRootManagement",
             (void (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) >(&Transfer_ProcessForTransient::SetRootManagement),
             R"#(Enable (if <stat> True) or Disables (if <stat> False) Root Management. If it is set, Transfers are considered as stacked (a first Transfer commands other Transfers, and so on) and the Transfers commanded by an external caller are "Root". Remark : SetRoot can be called whatever this status, on every object. Default is set to True.)#"  , py::arg("stat"))
        .def("NbRoots",
             (Standard_Integer (Transfer_ProcessForTransient::*)() const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::NbRoots),
             R"#(Returns the count of recorded Roots)#" )
        .def("Root",
             (const opencascade::handle<Standard_Transient> & (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const>(&Transfer_ProcessForTransient::Root),
             R"#(Returns a Root Entity given its number in the list (1-NbRoots))#"  , py::arg("num"))
        .def("RootItem",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const>(&Transfer_ProcessForTransient::RootItem),
             R"#(Returns the Binder bound with a Root Entity given its number Considers a category number, by default 0)#"  , py::arg("num"))
        .def("RootIndex",
             (Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::RootIndex),
             R"#(Returns the index in the list of roots for a starting item, or 0 if it is not recorded as a root)#"  , py::arg("start"))
        .def("NestingLevel",
             (Standard_Integer (Transfer_ProcessForTransient::*)() const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::NestingLevel),
             R"#(Returns Nesting Level of Transfers (managed by methods TranscriptWith & Co). Starts to zero. If no automatic Transfer is used, it remains to zero. Zero means Root Level.)#" )
        .def("ResetNestingLevel",
             (void (Transfer_ProcessForTransient::*)() ) static_cast<void (Transfer_ProcessForTransient::*)() >(&Transfer_ProcessForTransient::ResetNestingLevel),
             R"#(Resets Nesting Level of Transfers to Zero (Root Level), whatever its current value.)#" )
        .def("Recognize",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::Recognize),
             R"#(Tells if <start> has been recognized as good candidate for Transfer. i.e. queries the Actor and its Nexts)#"  , py::arg("start"))
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::Transferring),
             R"#(Performs the Transfer of a Starting Object, by calling the method TransferProduct (see below). Mapping and Roots are managed : nothing is done if a Result is already Bound, an exception is raised in case of error.)#"  , py::arg("start"))
        .def("Transfer",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ProcessForTransient::Transfer),
             R"#(Same as Transferring but does not return the Binder. Simply returns True in case of success (for user call))#"  , py::arg("start"))
        .def("SetErrorHandle",
             (void (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) >(&Transfer_ProcessForTransient::SetErrorHandle),
             R"#(Allows controls if exceptions will be handled Transfer Operations <err> False : they are not handled with try {} catch {} <err> True : they are Default is False: no handling performed)#"  , py::arg("err"))
        .def("ErrorHandle",
             (Standard_Boolean (Transfer_ProcessForTransient::*)() const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::ErrorHandle),
             R"#(Returns error handling flag)#" )
        .def("StartTrace",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&Transfer_ProcessForTransient::StartTrace),
             R"#(Method called when trace is asked Calls PrintTrace to display information relevant for starting objects (which can be redefined) <level> is Nesting Level of Transfer (0 = root) <mode> controls the way the trace is done : 0 neutral, 1 for Error, 2 for Warning message, 3 for new Root)#"  , py::arg("binder"),  py::arg("start"),  py::arg("level"),  py::arg("mode"))
        .def("PrintTrace",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&Transfer_ProcessForTransient::PrintTrace),
             R"#(Prints a short information on a starting object. By default prints its Dynamic Type. Can be redefined)#"  , py::arg("start"),  py::arg("S"))
        .def("IsLooping",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const Standard_Integer  ) const>(&Transfer_ProcessForTransient::IsLooping),
             R"#(Returns True if we are surely in a DeadLoop. Evaluation is not exact, it is a "majorant" which must be computed fast. This "majorant" is : <alevel> greater than NbMapped.)#"  , py::arg("alevel"))
        .def("RootResult",
             (Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) const) static_cast<Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) const>(&Transfer_ProcessForTransient::RootResult),
             R"#(Returns, as an iterator, the log of root transfer, i.e. the created objects and Binders bound to starting roots If withstart is given True, Starting Objets are also returned)#"  , py::arg("withstart")=static_cast<const Standard_Boolean>(Standard_False))
        .def("CompleteResult",
             (Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) const) static_cast<Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) const>(&Transfer_ProcessForTransient::CompleteResult),
             R"#(Returns, as an Iterator, the entire log of transfer (list of created objects and Binders which can bring errors) If withstart is given True, Starting Objets are also returned)#"  , py::arg("withstart")=static_cast<const Standard_Boolean>(Standard_False))
        .def("AbnormalResult",
             (Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)() const) static_cast<Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::AbnormalResult),
             R"#(Returns Binders which are neither "Done" nor "Initial", that is Error,Loop or Run (abnormal states at end of Transfer) Starting Objects are given in correspondance in the iterator)#" )
        .def("CheckList",
             (Interface_CheckIterator (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) const) static_cast<Interface_CheckIterator (Transfer_ProcessForTransient::*)( const Standard_Boolean  ) const>(&Transfer_ProcessForTransient::CheckList),
             R"#(Returns a CheckList as a list of Check : each one is for a starting entity which have either check (warning or fail) messages are attached, or are in abnormal state : that case gives a specific message If <erronly> is True, checks with Warnings only are ignored)#"  , py::arg("erronly"))
        .def("ResultOne",
             (Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Transfer_IteratorOfProcessForTransient (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&Transfer_ProcessForTransient::ResultOne),
             R"#(Returns, as an Iterator, the log of transfer for one object <level> = 0 : this object only and if <start> is a scope owner (else, <level> is ignored) : <level> = 1 : object plus its immediate scoped ones <level> = 2 : object plus all its scoped ones)#"  , py::arg("start"),  py::arg("level"),  py::arg("withstart")=static_cast<const Standard_Boolean>(Standard_False))
        .def("CheckListOne",
             (Interface_CheckIterator (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Interface_CheckIterator (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&Transfer_ProcessForTransient::CheckListOne),
             R"#(Returns a CheckList for one starting object <level> interpreted as by ResultOne If <erronly> is True, checks with Warnings only are ignored)#"  , py::arg("start"),  py::arg("level"),  py::arg("erronly"))
        .def("IsCheckListEmpty",
             (Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) const>(&Transfer_ProcessForTransient::IsCheckListEmpty),
             R"#(Returns True if no check message is attached to a starting object. <level> interpreted as by ResultOne If <erronly> is True, checks with Warnings only are ignored)#"  , py::arg("start"),  py::arg("level"),  py::arg("erronly"))
        .def("RemoveResult",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&Transfer_ProcessForTransient::RemoveResult),
             R"#(Removes Results attached to (== Unbinds) a given object and, according <level> : <level> = 0 : only it <level> = 1 : it plus its immediately owned sub-results(scope) <level> = 2 : it plus all its owned sub-results(scope))#"  , py::arg("start"),  py::arg("level"),  py::arg("compute")=static_cast<const Standard_Boolean>(Standard_True))
        .def("CheckNum",
             (Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ProcessForTransient::CheckNum),
             R"#(Computes a number to be associated to a starting object in a check or a check-list By default, returns 0; can be redefined)#"  , py::arg("start"))
        .def("SetProgress",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Message_ProgressIndicator> &  ) >(&Transfer_ProcessForTransient::SetProgress),
             R"#(Sets Progress indicator)#"  , py::arg("theProgress"))
        .def("GetProgress",
             (opencascade::handle<Message_ProgressIndicator> (Transfer_ProcessForTransient::*)() const) static_cast<opencascade::handle<Message_ProgressIndicator> (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::GetProgress),
             R"#(Gets Progress indicator)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ProcessForTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ProcessForTransient::*)() const>(&Transfer_ProcessForTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ProcessForTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ProcessForTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ResultFromModel ,opencascade::handle<Transfer_ResultFromModel>  , Standard_Transient >>(m.attr("Transfer_ResultFromModel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetModel",
             (void (Transfer_ResultFromModel::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (Transfer_ResultFromModel::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&Transfer_ResultFromModel::SetModel),
             R"#(Sets starting Model)#"  , py::arg("model"))
        .def("SetFileName",
             (void (Transfer_ResultFromModel::*)( const Standard_CString  ) ) static_cast<void (Transfer_ResultFromModel::*)( const Standard_CString  ) >(&Transfer_ResultFromModel::SetFileName),
             R"#(Sets starting File Name)#"  , py::arg("filename"))
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Transfer_ResultFromModel::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::Model),
             R"#(Returns starting Model (null if not set))#" )
        .def("FileName",
             (Standard_CString (Transfer_ResultFromModel::*)() const) static_cast<Standard_CString (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::FileName),
             R"#(Returns starting File Name (empty if not set))#" )
        .def("Fill",
             (Standard_Boolean (Transfer_ResultFromModel::*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (Transfer_ResultFromModel::*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ResultFromModel::Fill),
             R"#(Fills from a TransientProcess, with the result attached to a starting entity. Considers its Model if it is set. This action produces a structured set of ResultFromTransient, considering scopes, starting by that of <ent>. If <ent> has no recorded result, it remains empty Returns True if a result is recorded, False else)#"  , py::arg("TP"),  py::arg("ent"))
        .def("Strip",
             (void (Transfer_ResultFromModel::*)( const Standard_Integer  ) ) static_cast<void (Transfer_ResultFromModel::*)( const Standard_Integer  ) >(&Transfer_ResultFromModel::Strip),
             R"#(Clears some data attached to binders used by TransientProcess, which become useless once the transfer has been done, by calling Strip on its ResultFromTransient)#"  , py::arg("mode"))
        .def("FillBack",
             (void (Transfer_ResultFromModel::*)( const opencascade::handle<Transfer_TransientProcess> &  ) const) static_cast<void (Transfer_ResultFromModel::*)( const opencascade::handle<Transfer_TransientProcess> &  ) const>(&Transfer_ResultFromModel::FillBack),
             R"#(Fills back a TransientProcess from the structured set of binders. Also sets the Model.)#"  , py::arg("TP"))
        .def("HasResult",
             (Standard_Boolean (Transfer_ResultFromModel::*)() const) static_cast<Standard_Boolean (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::HasResult),
             R"#(Returns True if a Result is recorded)#" )
        .def("MainResult",
             (opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromModel::*)() const) static_cast<opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::MainResult),
             R"#(Returns the main recorded ResultFromTransient, or a null)#" )
        .def("SetMainResult",
             (void (Transfer_ResultFromModel::*)( const opencascade::handle<Transfer_ResultFromTransient> &  ) ) static_cast<void (Transfer_ResultFromModel::*)( const opencascade::handle<Transfer_ResultFromTransient> &  ) >(&Transfer_ResultFromModel::SetMainResult),
             R"#(Sets a new value for the main recorded ResultFromTransient)#"  , py::arg("amain"))
        .def("MainLabel",
             (Standard_CString (Transfer_ResultFromModel::*)() const) static_cast<Standard_CString (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::MainLabel),
             R"#(Returns the label in starting model attached to main entity (updated by Fill or SetMainResult, if Model is known))#" )
        .def("MainNumber",
             (Standard_Integer (Transfer_ResultFromModel::*)() const) static_cast<Standard_Integer (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::MainNumber),
             R"#(Returns the label in starting model attached to main entity)#" )
        .def("ResultFromKey",
             (opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromModel::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromModel::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ResultFromModel::ResultFromKey),
             R"#(Searches for a key (starting entity) and returns its result Returns a null handle if not found)#"  , py::arg("start"))
        .def("Results",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_ResultFromModel::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_ResultFromModel::*)( const Standard_Integer  ) const>(&Transfer_ResultFromModel::Results),
             R"#(Internal method which returns the list of ResultFromTransient, according level (2:complete; 1:sub-level 1; 0:main only))#"  , py::arg("level"))
        .def("TransferredList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_ResultFromModel::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_ResultFromModel::*)( const Standard_Integer  ) const>(&Transfer_ResultFromModel::TransferredList),
             R"#(Returns the list of recorded starting entities, ending by the root. Entities with check but no transfer result are ignored <level> = 2 (D), considers the complete list <level> = 1 considers the main result plus immediate subs <level> = 0 just the main result)#"  , py::arg("level")=static_cast<const Standard_Integer>(2))
        .def("CheckedList",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_ResultFromModel::*)( const Interface_CheckStatus ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_ResultFromModel::*)( const Interface_CheckStatus ,  const Standard_Boolean  ) const>(&Transfer_ResultFromModel::CheckedList),
             R"#(Returns the list of starting entities to which a check status is attached. <check> = -2 , all entities whatever the check (see result) <check> = -1 , entities with no fail (warning allowed) <check> = 0 , entities with no check at all <check> = 1 , entities with warning but no fail <check> = 2 , entities with fail <result> : if True, only entities with an attached result Remark : result True and check=0 will give an empty list)#"  , py::arg("check"),  py::arg("result"))
        .def("CheckList",
             (Interface_CheckIterator (Transfer_ResultFromModel::*)( const Standard_Boolean ,  const Standard_Integer  ) const) static_cast<Interface_CheckIterator (Transfer_ResultFromModel::*)( const Standard_Boolean ,  const Standard_Integer  ) const>(&Transfer_ResultFromModel::CheckList),
             R"#(Returns the check-list of this set of results <erronly> true : only fails are considered <level> = 0 : considers only main binder <level> = 1 : considers main binder plus immediate subs <level> = 2 (D) : considers all checks)#"  , py::arg("erronly"),  py::arg("level")=static_cast<const Standard_Integer>(2))
        .def("CheckStatus",
             (Interface_CheckStatus (Transfer_ResultFromModel::*)() const) static_cast<Interface_CheckStatus (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::CheckStatus),
             R"#(Returns the check status with corresponds to the content of this ResultFromModel; considers all levels of transfer (worst status). Returns CheckAny if not yet computed Reads it from recorded status if already computed, else recomputes one)#" )
        .def("ComputeCheckStatus",
             (Interface_CheckStatus (Transfer_ResultFromModel::*)( const Standard_Boolean  ) ) static_cast<Interface_CheckStatus (Transfer_ResultFromModel::*)( const Standard_Boolean  ) >(&Transfer_ResultFromModel::ComputeCheckStatus),
             R"#(Computes and records check status (see CheckStatus) Does not computes it if already done and <enforce> False)#"  , py::arg("enforce"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ResultFromModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ResultFromModel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ResultFromModel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ResultFromTransient ,opencascade::handle<Transfer_ResultFromTransient>  , Standard_Transient >>(m.attr("Transfer_ResultFromTransient"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetStart",
             (void (Transfer_ResultFromTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_ResultFromTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_ResultFromTransient::SetStart),
             R"#(Sets starting entity)#"  , py::arg("start"))
        .def("SetBinder",
             (void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_ResultFromTransient::SetBinder),
             R"#(Sets Binder (for result plus individual check))#"  , py::arg("binder"))
        .def("Start",
             (opencascade::handle<Standard_Transient> (Transfer_ResultFromTransient::*)() const) static_cast<opencascade::handle<Standard_Transient> (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::Start),
             R"#(Returns the starting entity)#" )
        .def("Binder",
             (opencascade::handle<Transfer_Binder> (Transfer_ResultFromTransient::*)() const) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::Binder),
             R"#(Returns the binder)#" )
        .def("HasResult",
             (Standard_Boolean (Transfer_ResultFromTransient::*)() const) static_cast<Standard_Boolean (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::HasResult),
             R"#(Returns True if a result is recorded)#" )
        .def("Check",
             (const opencascade::handle<Interface_Check> (Transfer_ResultFromTransient::*)() const) static_cast<const opencascade::handle<Interface_Check> (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::Check),
             R"#(Returns the check (or an empty one if no binder))#" )
        .def("CheckStatus",
             (Interface_CheckStatus (Transfer_ResultFromTransient::*)() const) static_cast<Interface_CheckStatus (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::CheckStatus),
             R"#(Returns the check status)#" )
        .def("ClearSubs",
             (void (Transfer_ResultFromTransient::*)() ) static_cast<void (Transfer_ResultFromTransient::*)() >(&Transfer_ResultFromTransient::ClearSubs),
             R"#(Clears the list of (immediate) sub-results)#" )
        .def("AddSubResult",
             (void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_ResultFromTransient> &  ) ) static_cast<void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_ResultFromTransient> &  ) >(&Transfer_ResultFromTransient::AddSubResult),
             R"#(Adds a sub-result)#"  , py::arg("sub"))
        .def("NbSubResults",
             (Standard_Integer (Transfer_ResultFromTransient::*)() const) static_cast<Standard_Integer (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::NbSubResults),
             R"#(Returns the count of recorded sub-results)#" )
        .def("SubResult",
             (opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromTransient::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromTransient::*)( const Standard_Integer  ) const>(&Transfer_ResultFromTransient::SubResult),
             R"#(Returns a sub-result, given its rank)#"  , py::arg("num"))
        .def("ResultFromKey",
             (opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromTransient::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Transfer_ResultFromTransient> (Transfer_ResultFromTransient::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_ResultFromTransient::ResultFromKey),
             R"#(Returns the ResultFromTransient attached to a given starting entity (the key). Returns a null handle if not found)#"  , py::arg("key"))
        .def("FillMap",
             (void (Transfer_ResultFromTransient::*)( NCollection_IndexedMap<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> &  ) const) static_cast<void (Transfer_ResultFromTransient::*)( NCollection_IndexedMap<opencascade::handle<Standard_Transient>, TColStd_MapTransientHasher> &  ) const>(&Transfer_ResultFromTransient::FillMap),
             R"#(This method is used by ResultFromModel to collate the list of ResultFromTransient, avoiding duplications with a map Remark : <me> is already in the map and has not to be bound)#"  , py::arg("map"))
        .def("Fill",
             (void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_TransientProcess> &  ) >(&Transfer_ResultFromTransient::Fill),
             R"#(Fills from a TransientProcess, with the starting entity which must have been set before. It works with scopes, calls Fill on each of its sub-results)#"  , py::arg("TP"))
        .def("Strip",
             (void (Transfer_ResultFromTransient::*)() ) static_cast<void (Transfer_ResultFromTransient::*)() >(&Transfer_ResultFromTransient::Strip),
             R"#(Clears some data attached to binders used by TransientProcess, which become useless once the transfer has been done : the list of sub-scoped binders, which is now recorded as sub-results)#" )
        .def("FillBack",
             (void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_TransientProcess> &  ) const) static_cast<void (Transfer_ResultFromTransient::*)( const opencascade::handle<Transfer_TransientProcess> &  ) const>(&Transfer_ResultFromTransient::FillBack),
             R"#(Fills back a TransientProcess with definition of a ResultFromTransient, respectfully to its structuration in scopes)#"  , py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ResultFromTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ResultFromTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ResultFromTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferDispatch , shared_ptr<Transfer_TransferDispatch>  , Interface_CopyTool >>(m.attr("Transfer_TransferDispatch"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Interface_GeneralLib & >()  , py::arg("amodel"),  py::arg("lib") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> & >()  , py::arg("amodel"),  py::arg("protocol") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("amodel") )
    // custom constructors
    // methods
        .def("TransientProcess",
             (opencascade::handle<Transfer_TransientProcess> (Transfer_TransferDispatch::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (Transfer_TransferDispatch::*)() const>(&Transfer_TransferDispatch::TransientProcess),
             R"#(Returns the content of Control Object, as a TransientProcess)#" )
        .def("Copy",
             (Standard_Boolean (Transfer_TransferDispatch::*)( const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Standard_Transient> & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (Transfer_TransferDispatch::*)( const opencascade::handle<Standard_Transient> & ,  opencascade::handle<Standard_Transient> & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&Transfer_TransferDispatch::Copy),
             R"#(Copies an Entity by calling the method Transferring from the TransferProcess. If this called produces a Null Binder, then the standard, inherited Copy is called)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("mapped"),  py::arg("errstat"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferInput , shared_ptr<Transfer_TransferInput>  >>(m.attr("Transfer_TransferInput"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Entities",
             (Interface_EntityIterator (Transfer_TransferInput::*)( Transfer_TransferIterator &  ) const) static_cast<Interface_EntityIterator (Transfer_TransferInput::*)( Transfer_TransferIterator &  ) const>(&Transfer_TransferInput::Entities),
             R"#(Takes the transient items stored in a TransferIterator)#"  , py::arg("list"))
        .def("FillModel",
             (void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&Transfer_TransferInput::FillModel),
             R"#(Fills an InterfaceModel with the Complete Result of a Transfer stored in a TransientProcess (Starting Objects are Transient) The complete result is exactly added to the model)#"  , py::arg("proc"),  py::arg("amodel"))
        .def("FillModel",
             (void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  const Standard_Boolean  ) const) static_cast<void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_TransientProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  const Standard_Boolean  ) const>(&Transfer_TransferInput::FillModel),
             R"#(Fills an InterfaceModel with results of the Transfer recorded in a TransientProcess (Starting Objects are Transient) : Root Result if <roots> is True (Default), Complete Result else The entities added to the model are determined from the result by by adding the referenced entities)#"  , py::arg("proc"),  py::arg("amodel"),  py::arg("proto"),  py::arg("roots")=static_cast<const Standard_Boolean>(Standard_True))
        .def("FillModel",
             (void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const) static_cast<void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> &  ) const>(&Transfer_TransferInput::FillModel),
             R"#(Fills an InterfaceModel with the Complete Result of a Transfer stored in a TransientProcess (Starting Objects are Transient) The complete result is exactly added to the model)#"  , py::arg("proc"),  py::arg("amodel"))
        .def("FillModel",
             (void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  const Standard_Boolean  ) const) static_cast<void (Transfer_TransferInput::*)( const opencascade::handle<Transfer_FinderProcess> & ,  const opencascade::handle<Interface_InterfaceModel> & ,  const opencascade::handle<Interface_Protocol> & ,  const Standard_Boolean  ) const>(&Transfer_TransferInput::FillModel),
             R"#(Fills an InterfaceModel with results of the Transfer recorded in a TransientProcess (Starting Objects are Transient) : Root Result if <roots> is True (Default), Complete Result else The entities added to the model are determined from the result by by adding the referenced entities)#"  , py::arg("proc"),  py::arg("amodel"),  py::arg("proto"),  py::arg("roots")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferIterator , shared_ptr<Transfer_TransferIterator>  >>(m.attr("Transfer_TransferIterator"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddItem",
             (void (Transfer_TransferIterator::*)( const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_TransferIterator::*)( const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_TransferIterator::AddItem),
             R"#(Adds a Binder to the iteration list (construction))#"  , py::arg("atr"))
        .def("SelectBinder",
             (void (Transfer_TransferIterator::*)( const opencascade::handle<Standard_Type> & ,  const Standard_Boolean  ) ) static_cast<void (Transfer_TransferIterator::*)( const opencascade::handle<Standard_Type> & ,  const Standard_Boolean  ) >(&Transfer_TransferIterator::SelectBinder),
             R"#(Selects Items on the Type of Binder : keep only Binders which are of a given Type (if keep is True) or reject only them (if keep is False))#"  , py::arg("atype"),  py::arg("keep"))
        .def("SelectResult",
             (void (Transfer_TransferIterator::*)( const opencascade::handle<Standard_Type> & ,  const Standard_Boolean  ) ) static_cast<void (Transfer_TransferIterator::*)( const opencascade::handle<Standard_Type> & ,  const Standard_Boolean  ) >(&Transfer_TransferIterator::SelectResult),
             R"#(Selects Items on the Type of Result. Considers only Unique Results. Considers Dynamic Type for Transient Result, Static Type (the one given to define the Binder) else.)#"  , py::arg("atype"),  py::arg("keep"))
        .def("SelectUnique",
             (void (Transfer_TransferIterator::*)( const Standard_Boolean  ) ) static_cast<void (Transfer_TransferIterator::*)( const Standard_Boolean  ) >(&Transfer_TransferIterator::SelectUnique),
             R"#(Select Items according Unicity : keep only Unique Results (if keep is True) or keep only Multiple Results (if keep is False))#"  , py::arg("keep"))
        .def("SelectItem",
             (void (Transfer_TransferIterator::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (Transfer_TransferIterator::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&Transfer_TransferIterator::SelectItem),
             R"#(Selects/Unselect (according to <keep> an item designated by its rank <num> in the list Used by sub-classes which have specific criteria)#"  , py::arg("num"),  py::arg("keep"))
        .def("Number",
             (Standard_Integer (Transfer_TransferIterator::*)() const) static_cast<Standard_Integer (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::Number),
             R"#(Returns count of Binders to be iterated)#" )
        .def("Start",
             (void (Transfer_TransferIterator::*)() ) static_cast<void (Transfer_TransferIterator::*)() >(&Transfer_TransferIterator::Start),
             R"#(Clears Iteration in progress, to allow it to be restarted)#" )
        .def("More",
             (Standard_Boolean (Transfer_TransferIterator::*)() ) static_cast<Standard_Boolean (Transfer_TransferIterator::*)() >(&Transfer_TransferIterator::More),
             R"#(Returns True if there are other Items to iterate)#" )
        .def("Next",
             (void (Transfer_TransferIterator::*)() ) static_cast<void (Transfer_TransferIterator::*)() >(&Transfer_TransferIterator::Next),
             R"#(Sets Iteration to the next Item)#" )
        .def("Value",
             (const opencascade::handle<Transfer_Binder> & (Transfer_TransferIterator::*)() const) static_cast<const opencascade::handle<Transfer_Binder> & (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::Value),
             R"#(Returns the current Binder)#" )
        .def("HasResult",
             (Standard_Boolean (Transfer_TransferIterator::*)() const) static_cast<Standard_Boolean (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::HasResult),
             R"#(Returns True if current Item brings a Result, Transient (Handle) or not or Multiple. That is to say, if it corresponds to a normally acheived Transfer, Transient Result is read by specific TransientResult below. Other kind of Result must be read specifically from its Binder)#" )
        .def("HasUniqueResult",
             (Standard_Boolean (Transfer_TransferIterator::*)() const) static_cast<Standard_Boolean (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::HasUniqueResult),
             R"#(Returns True if Current Item has a Unique Result)#" )
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_TransferIterator::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::ResultType),
             R"#(Returns the Type of the Result of the current Item, if Unique. If No Unique Result (Error Transfert or Multiple Result), returns a Null Handle The Type is : the Dynamic Type for a Transient Result, the Type defined by the Binder Class else)#" )
        .def("HasTransientResult",
             (Standard_Boolean (Transfer_TransferIterator::*)() const) static_cast<Standard_Boolean (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::HasTransientResult),
             R"#(Returns True if the current Item has a Transient Unique Result (if yes, use TransientResult to get it))#" )
        .def("TransientResult",
             (const opencascade::handle<Standard_Transient> & (Transfer_TransferIterator::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::TransientResult),
             R"#(Returns the Transient Result of the current Item if there is (else, returns a null Handle) Supposes that Binding is done by a SimpleBinderOfTransient)#" )
        .def("Status",
             (Transfer_StatusExec (Transfer_TransferIterator::*)() const) static_cast<Transfer_StatusExec (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::Status),
             R"#(Returns Execution Status of current Binder Normal transfer corresponds to StatusDone)#" )
        .def("HasFails",
             (Standard_Boolean (Transfer_TransferIterator::*)() const) static_cast<Standard_Boolean (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::HasFails),
             R"#(Returns True if Fail Messages are recorded with the current Binder. They can then be read through Check (see below))#" )
        .def("HasWarnings",
             (Standard_Boolean (Transfer_TransferIterator::*)() const) static_cast<Standard_Boolean (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::HasWarnings),
             R"#(Returns True if Warning Messages are recorded with the current Binder. They can then be read through Check (see below))#" )
        .def("Check",
             (const opencascade::handle<Interface_Check> (Transfer_TransferIterator::*)() const) static_cast<const opencascade::handle<Interface_Check> (Transfer_TransferIterator::*)() const>(&Transfer_TransferIterator::Check),
             R"#(Returns Check associated to current Binder (in case of error, it brings Fail messages) (in case of warnings, it brings Warning messages))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferOutput , shared_ptr<Transfer_TransferOutput>  >>(m.attr("Transfer_TransferOutput"))
    // constructors
        .def(py::init< const opencascade::handle<Transfer_ActorOfTransientProcess> &,const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("actor"),  py::arg("amodel") )
        .def(py::init< const opencascade::handle<Transfer_TransientProcess> &,const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("proc"),  py::arg("amodel") )
    // custom constructors
    // methods
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Transfer_TransferOutput::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Transfer_TransferOutput::*)() const>(&Transfer_TransferOutput::Model),
             R"#(Returns the Starting Model)#" )
        .def("TransientProcess",
             (opencascade::handle<Transfer_TransientProcess> (Transfer_TransferOutput::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (Transfer_TransferOutput::*)() const>(&Transfer_TransferOutput::TransientProcess),
             R"#(Returns the TransientProcess used to work)#" )
        .def("Transfer",
             (void (Transfer_TransferOutput::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_TransferOutput::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_TransferOutput::Transfer),
             R"#(Transfer checks that all taken Entities come from the same Model, then calls Transfer from TransientProcess)#"  , py::arg("obj"))
        .def("TransferRoots",
             (void (Transfer_TransferOutput::*)( const opencascade::handle<Interface_Protocol> &  ) ) static_cast<void (Transfer_TransferOutput::*)( const opencascade::handle<Interface_Protocol> &  ) >(&Transfer_TransferOutput::TransferRoots),
             R"#(Runs transfer on the roots of the Interface Model The Roots are computed with a ShareFlags created from a Protocol given as Argument)#"  , py::arg("protocol"))
        .def("TransferRoots",
             (void (Transfer_TransferOutput::*)( const Interface_Graph &  ) ) static_cast<void (Transfer_TransferOutput::*)( const Interface_Graph &  ) >(&Transfer_TransferOutput::TransferRoots),
             R"#(Runs transfer on the roots defined by a Graph of dependences (which detains also a Model and its Entities) Roots are computed with a ShareFlags created from the Graph)#"  , py::arg("G"))
        .def("TransferRoots",
             (void (Transfer_TransferOutput::*)() ) static_cast<void (Transfer_TransferOutput::*)() >(&Transfer_TransferOutput::TransferRoots),
             R"#(Runs transfer on the roots of the Interface Model Remark : the Roots are computed with a ShareFlags created from the Active Protocol)#" )
        .def("ListForStatus",
             (Interface_EntityIterator (Transfer_TransferOutput::*)( const Standard_Boolean ,  const Standard_Boolean  ) const) static_cast<Interface_EntityIterator (Transfer_TransferOutput::*)( const Standard_Boolean ,  const Standard_Boolean  ) const>(&Transfer_TransferOutput::ListForStatus),
             R"#(Returns the list of Starting Entities with these criteria : - <normal> False, gives the entities bound with ABNORMAL STATUS (e.g. : Fail recorded, Exception raised during Transfer) - <normal> True, gives Entities with or without a Result, but with no Fail, no Exception (Warnings are not counted) - <roots> False, considers all entities recorded (either for Result, or for at least one Fail or Warning message) - <roots> True (Default), considers only roots of Transfer (the Entities recorded at highest level) This method is based on AbnormalResult from TransferProcess)#"  , py::arg("normal"),  py::arg("roots")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ModelForStatus",
             (opencascade::handle<Interface_InterfaceModel> (Transfer_TransferOutput::*)( const opencascade::handle<Interface_Protocol> & ,  const Standard_Boolean ,  const Standard_Boolean  ) const) static_cast<opencascade::handle<Interface_InterfaceModel> (Transfer_TransferOutput::*)( const opencascade::handle<Interface_Protocol> & ,  const Standard_Boolean ,  const Standard_Boolean  ) const>(&Transfer_TransferOutput::ModelForStatus),
             R"#(Fills a Model with the list determined by ListForStatus This model starts from scratch (made by NewEmptyModel from the current Model), then is filled by AddWithRefs)#"  , py::arg("protocol"),  py::arg("normal"),  py::arg("roots")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ActorOfFinderProcess ,opencascade::handle<Transfer_ActorOfFinderProcess>  , Transfer_ActorOfProcessForFinder >>(m.attr("Transfer_ActorOfFinderProcess"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ModeTrans",
             (Standard_Integer & (Transfer_ActorOfFinderProcess::*)() ) static_cast<Standard_Integer & (Transfer_ActorOfFinderProcess::*)() >(&Transfer_ActorOfFinderProcess::ModeTrans),
             R"#(Returns the Transfer Mode, modifiable)#" )
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_ProcessForFinder> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_ProcessForFinder> &  ) >(&Transfer_ActorOfFinderProcess::Transferring),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&Transfer_ActorOfFinderProcess::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("TransferTransient",
             (opencascade::handle<Standard_Transient> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<opencascade::handle<Standard_Transient> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&Transfer_ActorOfFinderProcess::TransferTransient),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorOfFinderProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorOfFinderProcess::*)() const>(&Transfer_ActorOfFinderProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorOfFinderProcess::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ActorOfFinderProcess::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ActorOfTransientProcess ,opencascade::handle<Transfer_ActorOfTransientProcess>  , Transfer_ActorOfProcessForTransient >>(m.attr("Transfer_ActorOfTransientProcess"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_ProcessForTransient> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_ProcessForTransient> &  ) >(&Transfer_ActorOfTransientProcess::Transferring),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&Transfer_ActorOfTransientProcess::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("TransferTransient",
             (opencascade::handle<Standard_Transient> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<opencascade::handle<Standard_Transient> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&Transfer_ActorOfTransientProcess::TransferTransient),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorOfTransientProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorOfTransientProcess::*)() const>(&Transfer_ActorOfTransientProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorOfTransientProcess::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ActorOfTransientProcess::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_FinderProcess ,opencascade::handle<Transfer_FinderProcess>  , Transfer_ProcessForFinder >>(m.attr("Transfer_FinderProcess"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("nb")=static_cast<const Standard_Integer>(10000) )
    // custom constructors
    // methods
        .def("SetModel",
             (void (Transfer_FinderProcess::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (Transfer_FinderProcess::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&Transfer_FinderProcess::SetModel),
             R"#(Sets an InterfaceModel, which can be used during transfer for instance if a context must be managed, it is in the Model)#"  , py::arg("model"))
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Transfer_FinderProcess::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Transfer_FinderProcess::*)() const>(&Transfer_FinderProcess::Model),
             R"#(Returns the Model which can be used for context)#" )
        .def("NextMappedWithAttribute",
             (Standard_Integer (Transfer_FinderProcess::*)( const Standard_CString ,  const Standard_Integer  ) const) static_cast<Standard_Integer (Transfer_FinderProcess::*)( const Standard_CString ,  const Standard_Integer  ) const>(&Transfer_FinderProcess::NextMappedWithAttribute),
             R"#(In the list of mapped items (between 1 and NbMapped), searches for the first mapped item which follows <num0> (not included) and which has an attribute named <name> The considered Attributes are those brought by Finders,i.e. by Input data. While NextItemWithAttribute works on Result data (Binders))#"  , py::arg("name"),  py::arg("num0"))
        .def("TransientMapper",
             (opencascade::handle<Transfer_TransientMapper> (Transfer_FinderProcess::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<opencascade::handle<Transfer_TransientMapper> (Transfer_FinderProcess::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_FinderProcess::TransientMapper),
             R"#(Returns a TransientMapper for a given Transient Object Either <obj> is already mapped, then its Mapper is returned Or it is not, then a new one is created then returned, BUT it is not mapped here (use Bind or FindElseBind to do this))#"  , py::arg("obj"))
        .def("PrintTrace",
             (void (Transfer_FinderProcess::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (Transfer_FinderProcess::*)( const opencascade::handle<Transfer_Finder> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&Transfer_FinderProcess::PrintTrace),
             R"#(Specific printing to trace a Finder (by its method ValueType))#"  , py::arg("start"),  py::arg("S"))
        .def("PrintStats",
             (void (Transfer_FinderProcess::*)( const Standard_Integer ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (Transfer_FinderProcess::*)( const Standard_Integer ,  const opencascade::handle<Message_Messenger> &  ) const>(&Transfer_FinderProcess::PrintStats),
             R"#(Prints statistics on a given output, according mode)#"  , py::arg("mode"),  py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_FinderProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_FinderProcess::*)() const>(&Transfer_FinderProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_FinderProcess::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_FinderProcess::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_IteratorOfProcessForFinder , shared_ptr<Transfer_IteratorOfProcessForFinder>  , Transfer_TransferIterator >>(m.attr("Transfer_IteratorOfProcessForFinder"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("withstarts") )
    // custom constructors
    // methods
        .def("Add",
             (void (Transfer_IteratorOfProcessForFinder::*)( const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_IteratorOfProcessForFinder::*)( const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_IteratorOfProcessForFinder::Add),
             R"#(Adds a Binder to the iteration list (construction) with no corresponding Starting Object (note that Result is brought by Binder))#"  , py::arg("binder"))
        .def("Add",
             (void (Transfer_IteratorOfProcessForFinder::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Transfer_Finder> &  ) ) static_cast<void (Transfer_IteratorOfProcessForFinder::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Transfer_Finder> &  ) >(&Transfer_IteratorOfProcessForFinder::Add),
             R"#(Adds a Binder to the iteration list, associated with its corresponding Starting Object "start" Starting Object is ignored if not required at Creation time)#"  , py::arg("binder"),  py::arg("start"))
        .def("Filter",
             (void (Transfer_IteratorOfProcessForFinder::*)( const opencascade::handle<Transfer_HSequenceOfFinder> & ,  const Standard_Boolean  ) ) static_cast<void (Transfer_IteratorOfProcessForFinder::*)( const opencascade::handle<Transfer_HSequenceOfFinder> & ,  const Standard_Boolean  ) >(&Transfer_IteratorOfProcessForFinder::Filter),
             R"#(After having added all items, keeps or rejects items which are attached to starting data given by <only> <keep> = True (D) : keeps. <keep> = False : rejects Does nothing if <withstarts> was False)#"  , py::arg("list"),  py::arg("keep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasStarting",
             (Standard_Boolean (Transfer_IteratorOfProcessForFinder::*)() const) static_cast<Standard_Boolean (Transfer_IteratorOfProcessForFinder::*)() const>(&Transfer_IteratorOfProcessForFinder::HasStarting),
             R"#(Returns True if Starting Object is available (defined at Creation Time))#" )
        .def("Starting",
             (const opencascade::handle<Transfer_Finder> & (Transfer_IteratorOfProcessForFinder::*)() const) static_cast<const opencascade::handle<Transfer_Finder> & (Transfer_IteratorOfProcessForFinder::*)() const>(&Transfer_IteratorOfProcessForFinder::Starting),
             R"#(Returns corresponding Starting Object)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_IteratorOfProcessForTransient , shared_ptr<Transfer_IteratorOfProcessForTransient>  , Transfer_TransferIterator >>(m.attr("Transfer_IteratorOfProcessForTransient"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("withstarts") )
    // custom constructors
    // methods
        .def("Add",
             (void (Transfer_IteratorOfProcessForTransient::*)( const opencascade::handle<Transfer_Binder> &  ) ) static_cast<void (Transfer_IteratorOfProcessForTransient::*)( const opencascade::handle<Transfer_Binder> &  ) >(&Transfer_IteratorOfProcessForTransient::Add),
             R"#(Adds a Binder to the iteration list (construction) with no corresponding Starting Object (note that Result is brought by Binder))#"  , py::arg("binder"))
        .def("Add",
             (void (Transfer_IteratorOfProcessForTransient::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_IteratorOfProcessForTransient::*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_IteratorOfProcessForTransient::Add),
             R"#(Adds a Binder to the iteration list, associated with its corresponding Starting Object "start" Starting Object is ignored if not required at Creation time)#"  , py::arg("binder"),  py::arg("start"))
        .def("Filter",
             (void (Transfer_IteratorOfProcessForTransient::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const Standard_Boolean  ) ) static_cast<void (Transfer_IteratorOfProcessForTransient::*)( const opencascade::handle<TColStd_HSequenceOfTransient> & ,  const Standard_Boolean  ) >(&Transfer_IteratorOfProcessForTransient::Filter),
             R"#(After having added all items, keeps or rejects items which are attached to starting data given by <only> <keep> = True (D) : keeps. <keep> = False : rejects Does nothing if <withstarts> was False)#"  , py::arg("list"),  py::arg("keep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasStarting",
             (Standard_Boolean (Transfer_IteratorOfProcessForTransient::*)() const) static_cast<Standard_Boolean (Transfer_IteratorOfProcessForTransient::*)() const>(&Transfer_IteratorOfProcessForTransient::HasStarting),
             R"#(Returns True if Starting Object is available (defined at Creation Time))#" )
        .def("Starting",
             (const opencascade::handle<Standard_Transient> & (Transfer_IteratorOfProcessForTransient::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_IteratorOfProcessForTransient::*)() const>(&Transfer_IteratorOfProcessForTransient::Starting),
             R"#(Returns corresponding Starting Object)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_MultipleBinder ,opencascade::handle<Transfer_MultipleBinder>  , Transfer_Binder >>(m.attr("Transfer_MultipleBinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsMultiple",
             (Standard_Boolean (Transfer_MultipleBinder::*)() const) static_cast<Standard_Boolean (Transfer_MultipleBinder::*)() const>(&Transfer_MultipleBinder::IsMultiple),
             R"#(Returns True if a starting object is bound with SEVERAL results : Here, returns allways True)#" )
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_MultipleBinder::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_MultipleBinder::*)() const>(&Transfer_MultipleBinder::ResultType),
             R"#(Returns the Type permitted for Results, i.e. here Transient)#" )
        .def("ResultTypeName",
             (Standard_CString (Transfer_MultipleBinder::*)() const) static_cast<Standard_CString (Transfer_MultipleBinder::*)() const>(&Transfer_MultipleBinder::ResultTypeName),
             R"#(Returns the Name of the Type which characterizes the Result Here, returns "(list)")#" )
        .def("AddResult",
             (void (Transfer_MultipleBinder::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_MultipleBinder::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_MultipleBinder::AddResult),
             R"#(Adds a new Item to the Multiple Result)#"  , py::arg("res"))
        .def("NbResults",
             (Standard_Integer (Transfer_MultipleBinder::*)() const) static_cast<Standard_Integer (Transfer_MultipleBinder::*)() const>(&Transfer_MultipleBinder::NbResults),
             R"#(Returns the actual count of recorded (Transient) results)#" )
        .def("ResultValue",
             (opencascade::handle<Standard_Transient> (Transfer_MultipleBinder::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<Standard_Transient> (Transfer_MultipleBinder::*)( const Standard_Integer  ) const>(&Transfer_MultipleBinder::ResultValue),
             R"#(Returns the value of the recorded result n0 <num>)#"  , py::arg("num"))
        .def("MultipleResult",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_MultipleBinder::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_MultipleBinder::*)() const>(&Transfer_MultipleBinder::MultipleResult),
             R"#(Returns the Multiple Result, if it is defined (at least one Item). Else, returns a Null Handle)#" )
        .def("SetMultipleResult",
             (void (Transfer_MultipleBinder::*)( const opencascade::handle<TColStd_HSequenceOfTransient> &  ) ) static_cast<void (Transfer_MultipleBinder::*)( const opencascade::handle<TColStd_HSequenceOfTransient> &  ) >(&Transfer_MultipleBinder::SetMultipleResult),
             R"#(Defines a Binding with a Multiple Result, given as a Sequence Error if a Unique Result has yet been defined)#"  , py::arg("mulres"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_MultipleBinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_MultipleBinder::*)() const>(&Transfer_MultipleBinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_MultipleBinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_MultipleBinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_SimpleBinderOfTransient ,opencascade::handle<Transfer_SimpleBinderOfTransient>  , Transfer_Binder >>(m.attr("Transfer_SimpleBinderOfTransient"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_SimpleBinderOfTransient::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_SimpleBinderOfTransient::*)() const>(&Transfer_SimpleBinderOfTransient::ResultType),
             R"#(Returns the Effective (Dynamic) Type of the Result (Standard_Transient if no Result is defined))#" )
        .def("ResultTypeName",
             (Standard_CString (Transfer_SimpleBinderOfTransient::*)() const) static_cast<Standard_CString (Transfer_SimpleBinderOfTransient::*)() const>(&Transfer_SimpleBinderOfTransient::ResultTypeName),
             R"#(Returns the Effective Name of (Dynamic) Type of the Result (void) if no result is defined)#" )
        .def("SetResult",
             (void (Transfer_SimpleBinderOfTransient::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_SimpleBinderOfTransient::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_SimpleBinderOfTransient::SetResult),
             R"#(Defines the Result)#"  , py::arg("res"))
        .def("Result",
             (const opencascade::handle<Standard_Transient> & (Transfer_SimpleBinderOfTransient::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_SimpleBinderOfTransient::*)() const>(&Transfer_SimpleBinderOfTransient::Result),
             R"#(Returns the defined Result, if there is one)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_SimpleBinderOfTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_SimpleBinderOfTransient::*)() const>(&Transfer_SimpleBinderOfTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetTypedResult_s",
                    (Standard_Boolean (*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Transfer_Binder> & ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) >(&Transfer_SimpleBinderOfTransient::GetTypedResult),
                    R"#(Returns a transient result according to its type (IsKind) i.e. the result itself if IsKind(atype), else searches in NextResult, until first found, then returns True If not found, returns False (res is NOT touched))#"  , py::arg("bnd"),  py::arg("atype"),  py::arg("res"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_SimpleBinderOfTransient::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_SimpleBinderOfTransient::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransientListBinder ,opencascade::handle<Transfer_TransientListBinder>  , Transfer_Binder >>(m.attr("Transfer_TransientListBinder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TColStd_HSequenceOfTransient> & >()  , py::arg("list") )
    // custom constructors
    // methods
        .def("IsMultiple",
             (Standard_Boolean (Transfer_TransientListBinder::*)() const) static_cast<Standard_Boolean (Transfer_TransientListBinder::*)() const>(&Transfer_TransientListBinder::IsMultiple),
             R"#(None)#" )
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_TransientListBinder::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_TransientListBinder::*)() const>(&Transfer_TransientListBinder::ResultType),
             R"#(None)#" )
        .def("ResultTypeName",
             (Standard_CString (Transfer_TransientListBinder::*)() const) static_cast<Standard_CString (Transfer_TransientListBinder::*)() const>(&Transfer_TransientListBinder::ResultTypeName),
             R"#(None)#" )
        .def("AddResult",
             (void (Transfer_TransientListBinder::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_TransientListBinder::*)( const opencascade::handle<Standard_Transient> &  ) >(&Transfer_TransientListBinder::AddResult),
             R"#(Adds an item to the result list)#"  , py::arg("res"))
        .def("Result",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_TransientListBinder::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_TransientListBinder::*)() const>(&Transfer_TransientListBinder::Result),
             R"#(None)#" )
        .def("SetResult",
             (void (Transfer_TransientListBinder::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_TransientListBinder::*)( const Standard_Integer ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_TransientListBinder::SetResult),
             R"#(Changes an already defined sub-result)#"  , py::arg("num"),  py::arg("res"))
        .def("NbTransients",
             (Standard_Integer (Transfer_TransientListBinder::*)() const) static_cast<Standard_Integer (Transfer_TransientListBinder::*)() const>(&Transfer_TransientListBinder::NbTransients),
             R"#(None)#" )
        .def("Transient",
             (const opencascade::handle<Standard_Transient> & (Transfer_TransientListBinder::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_TransientListBinder::*)( const Standard_Integer  ) const>(&Transfer_TransientListBinder::Transient),
             R"#(None)#"  , py::arg("num"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_TransientListBinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_TransientListBinder::*)() const>(&Transfer_TransientListBinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_TransientListBinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_TransientListBinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransientMapper ,opencascade::handle<Transfer_TransientMapper>  , Transfer_Finder >>(m.attr("Transfer_TransientMapper"))
    // constructors
        .def(py::init< const opencascade::handle<Standard_Transient> & >()  , py::arg("akey") )
    // custom constructors
    // methods
        .def("Value",
             (const opencascade::handle<Standard_Transient> & (Transfer_TransientMapper::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (Transfer_TransientMapper::*)() const>(&Transfer_TransientMapper::Value),
             R"#(Returns the contained value)#" )
        .def("Equates",
             (Standard_Boolean (Transfer_TransientMapper::*)( const opencascade::handle<Transfer_Finder> &  ) const) static_cast<Standard_Boolean (Transfer_TransientMapper::*)( const opencascade::handle<Transfer_Finder> &  ) const>(&Transfer_TransientMapper::Equates),
             R"#(Specific testof equallity : defined as False if <other> has not the same true Type, else contents are compared (by C++ operator ==))#"  , py::arg("other"))
        .def("ValueType",
             (opencascade::handle<Standard_Type> (Transfer_TransientMapper::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_TransientMapper::*)() const>(&Transfer_TransientMapper::ValueType),
             R"#(Returns the Type of the Value. By default, returns the DynamicType of <me>, but can be redefined)#" )
        .def("ValueTypeName",
             (Standard_CString (Transfer_TransientMapper::*)() const) static_cast<Standard_CString (Transfer_TransientMapper::*)() const>(&Transfer_TransientMapper::ValueTypeName),
             R"#(Returns the name of the Type of the Value. Default is name of ValueType, unless it is for a non-handled object)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_TransientMapper::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_TransientMapper::*)() const>(&Transfer_TransientMapper::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_TransientMapper::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_TransientMapper::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransientProcess ,opencascade::handle<Transfer_TransientProcess>  , Transfer_ProcessForTransient >>(m.attr("Transfer_TransientProcess"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("nb")=static_cast<const Standard_Integer>(10000) )
    // custom constructors
    // methods
        .def("SetModel",
             (void (Transfer_TransientProcess::*)( const opencascade::handle<Interface_InterfaceModel> &  ) ) static_cast<void (Transfer_TransientProcess::*)( const opencascade::handle<Interface_InterfaceModel> &  ) >(&Transfer_TransientProcess::SetModel),
             R"#(Sets an InterfaceModel, used by StartTrace, CheckList, queries on Integrity, to give informations significant for each norm.)#"  , py::arg("model"))
        .def("Model",
             (opencascade::handle<Interface_InterfaceModel> (Transfer_TransientProcess::*)() const) static_cast<opencascade::handle<Interface_InterfaceModel> (Transfer_TransientProcess::*)() const>(&Transfer_TransientProcess::Model),
             R"#(Returns the Model used for StartTrace)#" )
        .def("SetGraph",
             (void (Transfer_TransientProcess::*)( const opencascade::handle<Interface_HGraph> &  ) ) static_cast<void (Transfer_TransientProcess::*)( const opencascade::handle<Interface_HGraph> &  ) >(&Transfer_TransientProcess::SetGraph),
             R"#(Sets a Graph : superseedes SetModel if already done)#"  , py::arg("HG"))
        .def("HasGraph",
             (Standard_Boolean (Transfer_TransientProcess::*)() const) static_cast<Standard_Boolean (Transfer_TransientProcess::*)() const>(&Transfer_TransientProcess::HasGraph),
             R"#(None)#" )
        .def("HGraph",
             (opencascade::handle<Interface_HGraph> (Transfer_TransientProcess::*)() const) static_cast<opencascade::handle<Interface_HGraph> (Transfer_TransientProcess::*)() const>(&Transfer_TransientProcess::HGraph),
             R"#(None)#" )
        .def("Graph",
             (const Interface_Graph & (Transfer_TransientProcess::*)() const) static_cast<const Interface_Graph & (Transfer_TransientProcess::*)() const>(&Transfer_TransientProcess::Graph),
             R"#(None)#" )
        .def("SetContext",
             (void (Transfer_TransientProcess::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (Transfer_TransientProcess::*)( const Standard_CString ,  const opencascade::handle<Standard_Transient> &  ) >(&Transfer_TransientProcess::SetContext),
             R"#(Sets a Context : according to receiving appli, to be interpreted by the Actor)#"  , py::arg("name"),  py::arg("ctx"))
        .def("GetContext",
             (Standard_Boolean (Transfer_TransientProcess::*)( const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_TransientProcess::*)( const Standard_CString ,  const opencascade::handle<Standard_Type> & ,  opencascade::handle<Standard_Transient> &  ) const>(&Transfer_TransientProcess::GetContext),
             R"#(Returns the Context attached to a name, if set and if it is Kind of the type, else a Null Handle Returns True if OK, False if no Context)#"  , py::arg("name"),  py::arg("type"),  py::arg("ctx"))
        .def("Context",
             (NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (Transfer_TransientProcess::*)() ) static_cast<NCollection_DataMap<TCollection_AsciiString, opencascade::handle<Standard_Transient> > & (Transfer_TransientProcess::*)() >(&Transfer_TransientProcess::Context),
             R"#(Returns (modifiable) the whole definition of Context Rather for internal use (ex.: preparing and setting in once))#" )
        .def("PrintTrace",
             (void (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Message_Messenger> &  ) const>(&Transfer_TransientProcess::PrintTrace),
             R"#(Specific printing to trace an entity : prints label and type (if model is set))#"  , py::arg("start"),  py::arg("S"))
        .def("CheckNum",
             (Standard_Integer (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Integer (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_TransientProcess::CheckNum),
             R"#(Specific number of a starting object for check-list : Number in model)#"  , py::arg("ent"))
        .def("TypedSharings",
             (Interface_EntityIterator (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Type> &  ) const) static_cast<Interface_EntityIterator (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Standard_Type> &  ) const>(&Transfer_TransientProcess::TypedSharings),
             R"#(Returns the list of sharings entities, AT ANY LEVEL, which are kind of a given type. Calls TypedSharings from Graph Returns an empty list if the Graph has not been aknowledged)#"  , py::arg("start"),  py::arg("type"))
        .def("IsDataLoaded",
             (Standard_Boolean (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_TransientProcess::IsDataLoaded),
             R"#(Tells if an entity is well loaded from file (even if its data fail on checking, they are present). Mostly often, answers True. Else, there was a syntactic error in the file. A non-loaded entity MAY NOT BE transferred, unless its Report (in the model) is interpreted)#"  , py::arg("ent"))
        .def("IsDataFail",
             (Standard_Boolean (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> &  ) const) static_cast<Standard_Boolean (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> &  ) const>(&Transfer_TransientProcess::IsDataFail),
             R"#(Tells if an entity fails on data checking (load time, syntactic, or semantic check). Normally, should answer False. It is not prudent to try transferring an entity which fails on data checking)#"  , py::arg("ent"))
        .def("PrintStats",
             (void (Transfer_TransientProcess::*)( const Standard_Integer ,  const opencascade::handle<Message_Messenger> &  ) const) static_cast<void (Transfer_TransientProcess::*)( const Standard_Integer ,  const opencascade::handle<Message_Messenger> &  ) const>(&Transfer_TransientProcess::PrintStats),
             R"#(Prints statistics on a given output, according mode)#"  , py::arg("mode"),  py::arg("S"))
        .def("RootsForTransfer",
             (opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_TransientProcess::*)() ) static_cast<opencascade::handle<TColStd_HSequenceOfTransient> (Transfer_TransientProcess::*)() >(&Transfer_TransientProcess::RootsForTransfer),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_TransientProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_TransientProcess::*)() const>(&Transfer_TransientProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_TransientProcess::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_TransientProcess::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_VoidBinder ,opencascade::handle<Transfer_VoidBinder>  , Transfer_Binder >>(m.attr("Transfer_VoidBinder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_VoidBinder::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_VoidBinder::*)() const>(&Transfer_VoidBinder::ResultType),
             R"#(while a VoidBinder admits no Result, its ResultType returns the type of <me>)#" )
        .def("ResultTypeName",
             (Standard_CString (Transfer_VoidBinder::*)() const) static_cast<Standard_CString (Transfer_VoidBinder::*)() const>(&Transfer_VoidBinder::ResultTypeName),
             R"#(Returns "(void)")#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_VoidBinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_VoidBinder::*)() const>(&Transfer_VoidBinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_VoidBinder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_VoidBinder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ActorDispatch ,opencascade::handle<Transfer_ActorDispatch>  , Transfer_ActorOfTransientProcess >>(m.attr("Transfer_ActorDispatch"))
    // constructors
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const Interface_GeneralLib & >()  , py::arg("amodel"),  py::arg("lib") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> &,const opencascade::handle<Interface_Protocol> & >()  , py::arg("amodel"),  py::arg("protocol") )
        .def(py::init< const opencascade::handle<Interface_InterfaceModel> & >()  , py::arg("amodel") )
    // custom constructors
    // methods
        .def("AddActor",
             (void (Transfer_ActorDispatch::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> &  ) ) static_cast<void (Transfer_ActorDispatch::*)( const opencascade::handle<Transfer_ActorOfTransientProcess> &  ) >(&Transfer_ActorDispatch::AddActor),
             R"#(Utility which adds an actor to the default <me> (it calls SetActor from the TransientProcess))#"  , py::arg("actor"))
        .def("TransferDispatch",
             (Transfer_TransferDispatch & (Transfer_ActorDispatch::*)() ) static_cast<Transfer_TransferDispatch & (Transfer_ActorDispatch::*)() >(&Transfer_ActorDispatch::TransferDispatch),
             R"#(Returns the TransferDispatch, which does the work, records the intermediate data, etc... See TransferDispatch & CopyTool, to see the available methods)#" )
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorDispatch::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorDispatch::*)( const opencascade::handle<Standard_Transient> & ,  const opencascade::handle<Transfer_TransientProcess> &  ) >(&Transfer_ActorDispatch::Transfer),
             R"#(Specific action : it calls the method Transfer from CopyTool i.e. the general service Copy, then returns the Binder produced by the TransientProcess)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorDispatch::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorDispatch::*)() const>(&Transfer_ActorDispatch::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorDispatch::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_ActorDispatch::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_BinderOfTransientInteger ,opencascade::handle<Transfer_BinderOfTransientInteger>  , Transfer_SimpleBinderOfTransient >>(m.attr("Transfer_BinderOfTransientInteger"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetInteger",
             (void (Transfer_BinderOfTransientInteger::*)( const Standard_Integer  ) ) static_cast<void (Transfer_BinderOfTransientInteger::*)( const Standard_Integer  ) >(&Transfer_BinderOfTransientInteger::SetInteger),
             R"#(Sets a value for the integer part)#"  , py::arg("value"))
        .def("Integer",
             (Standard_Integer (Transfer_BinderOfTransientInteger::*)() const) static_cast<Standard_Integer (Transfer_BinderOfTransientInteger::*)() const>(&Transfer_BinderOfTransientInteger::Integer),
             R"#(Returns the value set for the integer part)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_BinderOfTransientInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_BinderOfTransientInteger::*)() const>(&Transfer_BinderOfTransientInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_BinderOfTransientInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Transfer_BinderOfTransientInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Transfer_TransferMapOfProcessForFinder.hxx
// ./opencascade/Transfer_Finder.hxx
// ./opencascade/Transfer_IteratorOfProcessForFinder.hxx
// ./opencascade/Transfer_ActorOfProcessForTransient.hxx
// ./opencascade/Transfer_TransferFailure.hxx
// ./opencascade/Transfer_ActorOfProcessForFinder.hxx
// ./opencascade/Transfer_TransientProcess.hxx
// ./opencascade/Transfer_TransferOutput.hxx
// ./opencascade/Transfer_MultipleBinder.hxx
// ./opencascade/Transfer_MapContainer.hxx
// ./opencascade/Transfer_TransientListBinder.hxx
// ./opencascade/Transfer_FindHasher.hxx
// ./opencascade/Transfer_TransferDispatch.hxx
// ./opencascade/Transfer_SequenceOfBinder.hxx
// ./opencascade/Transfer_TransientMapper.hxx
// ./opencascade/Transfer_HSequenceOfFinder.hxx
// ./opencascade/Transfer_FinderProcess.hxx
// ./opencascade/Transfer_SimpleBinderOfTransient.hxx
// ./opencascade/Transfer_VoidBinder.hxx
// ./opencascade/Transfer_SequenceOfFinder.hxx
// ./opencascade/Transfer_ResultFromTransient.hxx
// ./opencascade/Transfer_ActorDispatch.hxx
// ./opencascade/Transfer_HSequenceOfBinder.hxx
// ./opencascade/Transfer_TransferMapOfProcessForTransient.hxx
// ./opencascade/Transfer_DataInfo.hxx
// ./opencascade/Transfer_BinderOfTransientInteger.hxx
// ./opencascade/Transfer_DispatchControl.hxx
// ./opencascade/Transfer_ActorOfTransientProcess.hxx
// ./opencascade/Transfer_Binder.hxx
// ./opencascade/Transfer_ProcessForTransient.hxx
// ./opencascade/Transfer_ProcessForFinder.hxx
// ./opencascade/Transfer_ResultFromModel.hxx
// ./opencascade/Transfer_TransferDeadLoop.hxx
// ./opencascade/Transfer_IteratorOfProcessForTransient.hxx
// ./opencascade/Transfer_ActorOfFinderProcess.hxx
// ./opencascade/Transfer_TransferIterator.hxx
// ./opencascade/Transfer_TransferInput.hxx
// ./opencascade/Transfer_StatusResult.hxx
// ./opencascade/Transfer_UndefMode.hxx
// ./opencascade/Transfer_StatusExec.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<Transfer_Binder> >(m,"Transfer_SequenceOfBinder");  
    register_template_NCollection_Sequence<opencascade::handle<Transfer_Finder> >(m,"Transfer_SequenceOfFinder");  


// exceptions
register_occ_exception<Transfer_TransferFailure>(m, "Transfer_TransferFailure");
register_occ_exception<Transfer_TransferDeadLoop>(m, "Transfer_TransferDeadLoop");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
