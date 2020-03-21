
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Transfer_TransferFailure.hxx>
#include <Transfer_Binder.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_TransferIterator.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_TransientMapper.hxx>
#include <Message_Messenger.hxx>
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
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Transfer_DataInfo.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_Graph.hxx>
#include <Interface_EntityIterator.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_Check.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Interface_InterfaceError.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_HGraph.hxx>
#include <Interface_Graph.hxx>
#include <Message_Messenger.hxx>
#include <Interface_EntityIterator.hxx>
#include <Message_Messenger.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Interface_InterfaceError.hxx>
#include <Transfer_TransferFailure.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Message_Msg.hxx>
#include <Interface_Check.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_ResultFromTransient.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Interface_CheckIterator.hxx>
#include <Transfer_Finder.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>

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


    static_cast<py::class_<Transfer_ActorOfProcessForFinder ,opencascade::handle<Transfer_ActorOfProcessForFinder> , Standard_Transient>>(m.attr("Transfer_ActorOfProcessForFinder"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ) ) static_cast<Standard_Boolean (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ) >(&Transfer_ActorOfProcessForFinder::Recognize),
             R"#(Prerequesite for Transfer : the method Transfer is called on a starting object only if Recognize has returned True on it This allows to define a list of Actors, each one processing a definite kind of data TransferProcess calls Recognize on each one before calling Transfer. But even if Recognize has returned True, Transfer can reject by returning a Null Binder (afterwards rejection), the next actor is then invoked)#"  , py::arg("start"))
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_ProcessForFinder> & ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_ProcessForFinder> & ) >(&Transfer_ActorOfProcessForFinder::Transferring),
             R"#(Specific action of Transfer. The Result is stored in the returned Binder, or a Null Handle for "No result" (Default defined as doing nothing; should be deffered) "mutable" allows the Actor to record intermediate information, in addition to those of TransferProcess)#"  , py::arg("start"),  py::arg("TP"))
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


    static_cast<py::class_<Transfer_ActorOfProcessForTransient ,opencascade::handle<Transfer_ActorOfProcessForTransient> , Standard_Transient>>(m.attr("Transfer_ActorOfProcessForTransient"))
    // constructors
    // custom constructors
    // methods
        .def("Recognize",
             (Standard_Boolean (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ) >(&Transfer_ActorOfProcessForTransient::Recognize),
             R"#(Prerequesite for Transfer : the method Transfer is called on a starting object only if Recognize has returned True on it This allows to define a list of Actors, each one processing a definite kind of data TransferProcess calls Recognize on each one before calling Transfer. But even if Recognize has returned True, Transfer can reject by returning a Null Binder (afterwards rejection), the next actor is then invoked)#"  , py::arg("start"))
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_ProcessForTransient> & ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForTransient::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_ProcessForTransient> & ) >(&Transfer_ActorOfProcessForTransient::Transferring),
             R"#(Specific action of Transfer. The Result is stored in the returned Binder, or a Null Handle for "No result" (Default defined as doing nothing; should be deffered) "mutable" allows the Actor to record intermediate information, in addition to those of TransferProcess)#"  , py::arg("start"),  py::arg("TP"))
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


    static_cast<py::class_<Transfer_Binder ,opencascade::handle<Transfer_Binder>,Py_Transfer_Binder , Standard_Transient>>(m.attr("Transfer_Binder"))
    // constructors
    // custom constructors
    // methods
        .def("IsMultiple",
             (Standard_Boolean (Transfer_Binder::*)() const) static_cast<Standard_Boolean (Transfer_Binder::*)() const>(&Transfer_Binder::IsMultiple),
             R"#(Returns True if a Binder has several results, either by itself or because it has next results Can be defined by sub-classes.)#" )
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_Binder::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_Binder::*)() const>(&Transfer_Binder::ResultType),
             R"#(Returns the Type which characterizes the Result (if known))#" )
        .def("ResultTypeName",
             (Standard_CString (Transfer_Binder::*)() const) static_cast<Standard_CString (Transfer_Binder::*)() const>(&Transfer_Binder::ResultTypeName),
             R"#(Returns the Name of the Type which characterizes the Result Can be returned even if ResultType itself is unknown)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_Binder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_Binder::*)() const>(&Transfer_Binder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_Binder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Transfer_DataInfo , shared_ptr<Transfer_DataInfo>>(m,"Transfer_DataInfo");

    static_cast<py::class_<Transfer_DataInfo , shared_ptr<Transfer_DataInfo> >>(m.attr("Transfer_DataInfo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_DispatchControl ,opencascade::handle<Transfer_DispatchControl> , Interface_CopyControl>>(m.attr("Transfer_DispatchControl"))
    // constructors
    // custom constructors
    // methods
        .def("Clear",
             (void (Transfer_DispatchControl::*)() ) static_cast<void (Transfer_DispatchControl::*)() >(&Transfer_DispatchControl::Clear),
             R"#(Clears the List of Copied Results)#" )
        .def("Bind",
             (void (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) ) static_cast<void (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Standard_Transient> & ) >(&Transfer_DispatchControl::Bind),
             R"#(Binds a (Transient) Result to a (Transient) Starting Entity)#"  , py::arg("ent"),  py::arg("res"))
        .def("Search",
             (Standard_Boolean (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Boolean (Transfer_DispatchControl::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & ) const>(&Transfer_DispatchControl::Search),
             R"#(Searches for the Result bound to a Starting Entity If Found, returns True and fills <res> Else, returns False and nullifies <res>)#"  , py::arg("ent"),  py::arg("res"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_DispatchControl::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_DispatchControl::*)() const>(&Transfer_DispatchControl::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_DispatchControl::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Transfer_FindHasher , shared_ptr<Transfer_FindHasher>>(m,"Transfer_FindHasher");

    static_cast<py::class_<Transfer_FindHasher , shared_ptr<Transfer_FindHasher> >>(m.attr("Transfer_FindHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_Finder ,opencascade::handle<Transfer_Finder>,Py_Transfer_Finder , Standard_Transient>>(m.attr("Transfer_Finder"))
    // constructors
    // custom constructors
    // methods
        .def("Equates",
             (Standard_Boolean (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> & ) const) static_cast<Standard_Boolean (Transfer_Finder::*)( const opencascade::handle<Transfer_Finder> & ) const>(&Transfer_Finder::Equates),
             R"#(Specific testof equallity : to be defined by each sub-class, must be False if Finders have not the same true Type, else their contents must be compared)#"  , py::arg("other"))
        .def("ValueType",
             (opencascade::handle<Standard_Type> (Transfer_Finder::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_Finder::*)() const>(&Transfer_Finder::ValueType),
             R"#(Returns the Type of the Value. By default, returns the DynamicType of <me>, but can be redefined)#" )
        .def("ValueTypeName",
             (Standard_CString (Transfer_Finder::*)() const) static_cast<Standard_CString (Transfer_Finder::*)() const>(&Transfer_Finder::ValueTypeName),
             R"#(Returns the name of the Type of the Value. Default is name of ValueType, unless it is for a non-handled object)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_Finder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_Finder::*)() const>(&Transfer_Finder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_Finder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_HSequenceOfBinder ,opencascade::handle<Transfer_HSequenceOfBinder> , Transfer_SequenceOfBinder, Standard_Transient>>(m.attr("Transfer_HSequenceOfBinder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Transfer_Binder> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Transfer_SequenceOfBinder & (Transfer_HSequenceOfBinder::*)() const) static_cast<const Transfer_SequenceOfBinder & (Transfer_HSequenceOfBinder::*)() const>(&Transfer_HSequenceOfBinder::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Transfer_HSequenceOfBinder::*)(  const opencascade::handle<Transfer_Binder> & ) ) static_cast<void (Transfer_HSequenceOfBinder::*)(  const opencascade::handle<Transfer_Binder> & ) >(&Transfer_HSequenceOfBinder::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Transfer_HSequenceOfBinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Binder> > & ) ) static_cast<void (Transfer_HSequenceOfBinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Binder> > & ) >(&Transfer_HSequenceOfBinder::Append),
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


    static_cast<py::class_<Transfer_HSequenceOfFinder ,opencascade::handle<Transfer_HSequenceOfFinder> , Transfer_SequenceOfFinder, Standard_Transient>>(m.attr("Transfer_HSequenceOfFinder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<opencascade::handle<Transfer_Finder> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const Transfer_SequenceOfFinder & (Transfer_HSequenceOfFinder::*)() const) static_cast<const Transfer_SequenceOfFinder & (Transfer_HSequenceOfFinder::*)() const>(&Transfer_HSequenceOfFinder::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (Transfer_HSequenceOfFinder::*)(  const opencascade::handle<Transfer_Finder> & ) ) static_cast<void (Transfer_HSequenceOfFinder::*)(  const opencascade::handle<Transfer_Finder> & ) >(&Transfer_HSequenceOfFinder::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (Transfer_HSequenceOfFinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Finder> > & ) ) static_cast<void (Transfer_HSequenceOfFinder::*)( NCollection_Sequence<opencascade::handle<Transfer_Finder> > & ) >(&Transfer_HSequenceOfFinder::Append),
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


    static_cast<py::class_<Transfer_MapContainer ,opencascade::handle<Transfer_MapContainer> , Standard_Transient>>(m.attr("Transfer_MapContainer"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_MapContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_MapContainer::*)() const>(&Transfer_MapContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_MapContainer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ProcessForFinder ,opencascade::handle<Transfer_ProcessForFinder> , Standard_Transient>>(m.attr("Transfer_ProcessForFinder"))
    // constructors
    // custom constructors
    // methods
        .def("PrintTrace",
             (void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Message_Messenger> & ) const>(&Transfer_ProcessForFinder::PrintTrace),
             R"#(Prints a short information on a starting object. By default prints its Dynamic Type. Can be redefined)#"  , py::arg("start"),  py::arg("S"))
        .def("CheckNum",
             (Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ) const) static_cast<Standard_Integer (Transfer_ProcessForFinder::*)( const opencascade::handle<Transfer_Finder> & ) const>(&Transfer_ProcessForFinder::CheckNum),
             R"#(Computes a number to be associated to a starting object in a check or a check-list By default, returns 0; can be redefined)#"  , py::arg("start"))
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


    static_cast<py::class_<Transfer_ProcessForTransient ,opencascade::handle<Transfer_ProcessForTransient> , Standard_Transient>>(m.attr("Transfer_ProcessForTransient"))
    // constructors
    // custom constructors
    // methods
        .def("PrintTrace",
             (void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&Transfer_ProcessForTransient::PrintTrace),
             R"#(Prints a short information on a starting object. By default prints its Dynamic Type. Can be redefined)#"  , py::arg("start"),  py::arg("S"))
        .def("CheckNum",
             (Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Transfer_ProcessForTransient::*)( const opencascade::handle<Standard_Transient> & ) const>(&Transfer_ProcessForTransient::CheckNum),
             R"#(Computes a number to be associated to a starting object in a check or a check-list By default, returns 0; can be redefined)#"  , py::arg("start"))
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


    static_cast<py::class_<Transfer_ResultFromModel ,opencascade::handle<Transfer_ResultFromModel> , Standard_Transient>>(m.attr("Transfer_ResultFromModel"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ResultFromModel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ResultFromModel::*)() const>(&Transfer_ResultFromModel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ResultFromModel::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ResultFromTransient ,opencascade::handle<Transfer_ResultFromTransient> , Standard_Transient>>(m.attr("Transfer_ResultFromTransient"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ResultFromTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ResultFromTransient::*)() const>(&Transfer_ResultFromTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ResultFromTransient::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferDispatch , shared_ptr<Transfer_TransferDispatch> , Interface_CopyTool>>(m.attr("Transfer_TransferDispatch"))
    // constructors
    // custom constructors
    // methods
        .def("Copy",
             (Standard_Boolean (Transfer_TransferDispatch::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Boolean (Transfer_TransferDispatch::*)( const opencascade::handle<Standard_Transient> & , opencascade::handle<Standard_Transient> & , const Standard_Boolean , const Standard_Boolean ) >(&Transfer_TransferDispatch::Copy),
             R"#(Copies an Entity by calling the method Transferring from the TransferProcess. If this called produces a Null Binder, then the standard, inherited Copy is called)#"  , py::arg("entfrom"),  py::arg("entto"),  py::arg("mapped"),  py::arg("errstat"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferInput , shared_ptr<Transfer_TransferInput> >>(m.attr("Transfer_TransferInput"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferIterator , shared_ptr<Transfer_TransferIterator> >>(m.attr("Transfer_TransferIterator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransferOutput , shared_ptr<Transfer_TransferOutput> >>(m.attr("Transfer_TransferOutput"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ActorOfFinderProcess ,opencascade::handle<Transfer_ActorOfFinderProcess> , Transfer_ActorOfProcessForFinder>>(m.attr("Transfer_ActorOfFinderProcess"))
    // constructors
    // custom constructors
    // methods
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_ProcessForFinder> & ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_ProcessForFinder> & ) >(&Transfer_ActorOfFinderProcess::Transferring),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_FinderProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Transfer_FinderProcess> & ) >(&Transfer_ActorOfFinderProcess::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("TransferTransient",
             (opencascade::handle<Standard_Transient> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_FinderProcess> & ) ) static_cast<opencascade::handle<Standard_Transient> (Transfer_ActorOfFinderProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_FinderProcess> & ) >(&Transfer_ActorOfFinderProcess::TransferTransient),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorOfFinderProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorOfFinderProcess::*)() const>(&Transfer_ActorOfFinderProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorOfFinderProcess::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ActorOfTransientProcess ,opencascade::handle<Transfer_ActorOfTransientProcess> , Transfer_ActorOfProcessForTransient>>(m.attr("Transfer_ActorOfTransientProcess"))
    // constructors
    // custom constructors
    // methods
        .def("Transferring",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_ProcessForTransient> & ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_ProcessForTransient> & ) >(&Transfer_ActorOfTransientProcess::Transferring),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) >(&Transfer_ActorOfTransientProcess::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("TransferTransient",
             (opencascade::handle<Standard_Transient> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<opencascade::handle<Standard_Transient> (Transfer_ActorOfTransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) >(&Transfer_ActorOfTransientProcess::TransferTransient),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorOfTransientProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorOfTransientProcess::*)() const>(&Transfer_ActorOfTransientProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorOfTransientProcess::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_FinderProcess ,opencascade::handle<Transfer_FinderProcess> , Transfer_ProcessForFinder>>(m.attr("Transfer_FinderProcess"))
    // constructors
    // custom constructors
    // methods
        .def("PrintTrace",
             (void (Transfer_FinderProcess::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Transfer_FinderProcess::*)( const opencascade::handle<Transfer_Finder> & , const opencascade::handle<Message_Messenger> & ) const>(&Transfer_FinderProcess::PrintTrace),
             R"#(Specific printing to trace a Finder (by its method ValueType))#"  , py::arg("start"),  py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_FinderProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_FinderProcess::*)() const>(&Transfer_FinderProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_FinderProcess::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_IteratorOfProcessForFinder , shared_ptr<Transfer_IteratorOfProcessForFinder> , Transfer_TransferIterator>>(m.attr("Transfer_IteratorOfProcessForFinder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_IteratorOfProcessForTransient , shared_ptr<Transfer_IteratorOfProcessForTransient> , Transfer_TransferIterator>>(m.attr("Transfer_IteratorOfProcessForTransient"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_MultipleBinder ,opencascade::handle<Transfer_MultipleBinder> , Transfer_Binder>>(m.attr("Transfer_MultipleBinder"))
    // constructors
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
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_MultipleBinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_MultipleBinder::*)() const>(&Transfer_MultipleBinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_MultipleBinder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_SimpleBinderOfTransient ,opencascade::handle<Transfer_SimpleBinderOfTransient> , Transfer_Binder>>(m.attr("Transfer_SimpleBinderOfTransient"))
    // constructors
    // custom constructors
    // methods
        .def("ResultType",
             (opencascade::handle<Standard_Type> (Transfer_SimpleBinderOfTransient::*)() const) static_cast<opencascade::handle<Standard_Type> (Transfer_SimpleBinderOfTransient::*)() const>(&Transfer_SimpleBinderOfTransient::ResultType),
             R"#(Returns the Effective (Dynamic) Type of the Result (Standard_Transient if no Result is defined))#" )
        .def("ResultTypeName",
             (Standard_CString (Transfer_SimpleBinderOfTransient::*)() const) static_cast<Standard_CString (Transfer_SimpleBinderOfTransient::*)() const>(&Transfer_SimpleBinderOfTransient::ResultTypeName),
             R"#(Returns the Effective Name of (Dynamic) Type of the Result (void) if no result is defined)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_SimpleBinderOfTransient::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_SimpleBinderOfTransient::*)() const>(&Transfer_SimpleBinderOfTransient::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_SimpleBinderOfTransient::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransientListBinder ,opencascade::handle<Transfer_TransientListBinder> , Transfer_Binder>>(m.attr("Transfer_TransientListBinder"))
    // constructors
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
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_TransientListBinder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_TransientListBinder::*)() const>(&Transfer_TransientListBinder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_TransientListBinder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_TransientMapper ,opencascade::handle<Transfer_TransientMapper> , Transfer_Finder>>(m.attr("Transfer_TransientMapper"))
    // constructors
    // custom constructors
    // methods
        .def("Equates",
             (Standard_Boolean (Transfer_TransientMapper::*)( const opencascade::handle<Transfer_Finder> & ) const) static_cast<Standard_Boolean (Transfer_TransientMapper::*)( const opencascade::handle<Transfer_Finder> & ) const>(&Transfer_TransientMapper::Equates),
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


    static_cast<py::class_<Transfer_TransientProcess ,opencascade::handle<Transfer_TransientProcess> , Transfer_ProcessForTransient>>(m.attr("Transfer_TransientProcess"))
    // constructors
    // custom constructors
    // methods
        .def("PrintTrace",
             (void (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const) static_cast<void (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Message_Messenger> & ) const>(&Transfer_TransientProcess::PrintTrace),
             R"#(Specific printing to trace an entity : prints label and type (if model is set))#"  , py::arg("start"),  py::arg("S"))
        .def("CheckNum",
             (Standard_Integer (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & ) const) static_cast<Standard_Integer (Transfer_TransientProcess::*)( const opencascade::handle<Standard_Transient> & ) const>(&Transfer_TransientProcess::CheckNum),
             R"#(Specific number of a starting object for check-list : Number in model)#"  , py::arg("ent"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_TransientProcess::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_TransientProcess::*)() const>(&Transfer_TransientProcess::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_TransientProcess::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_VoidBinder ,opencascade::handle<Transfer_VoidBinder> , Transfer_Binder>>(m.attr("Transfer_VoidBinder"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_ActorDispatch ,opencascade::handle<Transfer_ActorDispatch> , Transfer_ActorOfTransientProcess>>(m.attr("Transfer_ActorDispatch"))
    // constructors
    // custom constructors
    // methods
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (Transfer_ActorDispatch::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (Transfer_ActorDispatch::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) >(&Transfer_ActorDispatch::Transfer),
             R"#(Specific action : it calls the method Transfer from CopyTool i.e. the general service Copy, then returns the Binder produced by the TransientProcess)#"  , py::arg("start"),  py::arg("TP"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_ActorDispatch::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_ActorDispatch::*)() const>(&Transfer_ActorDispatch::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_ActorDispatch::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Transfer_BinderOfTransientInteger ,opencascade::handle<Transfer_BinderOfTransientInteger> , Transfer_SimpleBinderOfTransient>>(m.attr("Transfer_BinderOfTransientInteger"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Transfer_BinderOfTransientInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Transfer_BinderOfTransientInteger::*)() const>(&Transfer_BinderOfTransientInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Transfer_BinderOfTransientInteger::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Transfer_MultipleBinder.hxx
// ./opencascade/Transfer_TransferMapOfProcessForTransient.hxx
// ./opencascade/Transfer_TransferMapOfProcessForFinder.hxx
// ./opencascade/Transfer_StatusExec.hxx
// ./opencascade/Transfer_ResultFromTransient.hxx
// ./opencascade/Transfer_TransferDeadLoop.hxx
// ./opencascade/Transfer_TransferIterator.hxx
// ./opencascade/Transfer_Finder.hxx
// ./opencascade/Transfer_UndefMode.hxx
// ./opencascade/Transfer_DataInfo.hxx
// ./opencascade/Transfer_TransferInput.hxx
// ./opencascade/Transfer_HSequenceOfBinder.hxx
// ./opencascade/Transfer_DispatchControl.hxx
// ./opencascade/Transfer_FinderProcess.hxx
// ./opencascade/Transfer_SimpleBinderOfTransient.hxx
// ./opencascade/Transfer_ProcessForFinder.hxx
// ./opencascade/Transfer_ActorDispatch.hxx
// ./opencascade/Transfer_IteratorOfProcessForFinder.hxx
// ./opencascade/Transfer_SequenceOfBinder.hxx
// ./opencascade/Transfer_ActorOfProcessForFinder.hxx
// ./opencascade/Transfer_SequenceOfFinder.hxx
// ./opencascade/Transfer_TransientMapper.hxx
// ./opencascade/Transfer_TransferOutput.hxx
// ./opencascade/Transfer_BinderOfTransientInteger.hxx
// ./opencascade/Transfer_MapContainer.hxx
// ./opencascade/Transfer_ActorOfTransientProcess.hxx
// ./opencascade/Transfer_Binder.hxx
// ./opencascade/Transfer_TransferDispatch.hxx
// ./opencascade/Transfer_TransientListBinder.hxx
// ./opencascade/Transfer_TransferFailure.hxx
// ./opencascade/Transfer_TransientProcess.hxx
// ./opencascade/Transfer_ProcessForTransient.hxx
// ./opencascade/Transfer_HSequenceOfFinder.hxx
// ./opencascade/Transfer_ResultFromModel.hxx
// ./opencascade/Transfer_FindHasher.hxx
// ./opencascade/Transfer_ActorOfFinderProcess.hxx
// ./opencascade/Transfer_VoidBinder.hxx
// ./opencascade/Transfer_ActorOfProcessForTransient.hxx
// ./opencascade/Transfer_IteratorOfProcessForTransient.hxx
// ./opencascade/Transfer_StatusResult.hxx

// Additional functions

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
