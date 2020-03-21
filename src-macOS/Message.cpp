
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Message_Messenger.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_Messenger.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_Msg.hxx>
#include <Message_MsgFile.hxx>
#include <Message_Messenger.hxx>
#include <Message_Algorithm.hxx>
#include <Message_Printer.hxx>
#include <Message_PrinterOStream.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Message_ProgressScale.hxx>
#include <Message_ProgressSentry.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Message_Messenger.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>

// module includes
#include <Message.hxx>
#include <Message_Alert.hxx>
#include <Message_Algorithm.hxx>
#include <Message_ExecStatus.hxx>
#include <Message_Gravity.hxx>
#include <Message_HArrayOfMsg.hxx>
#include <Message_ListIteratorOfListOfMsg.hxx>
#include <Message_ListOfAlert.hxx>
#include <Message_ListOfMsg.hxx>
#include <Message_Messenger.hxx>
#include <Message_Msg.hxx>
#include <Message_MsgFile.hxx>
#include <Message_Printer.hxx>
#include <Message_PrinterOStream.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Message_ProgressScale.hxx>
#include <Message_ProgressSentry.hxx>
#include <Message_Report.hxx>
#include <Message_SequenceOfPrinters.hxx>
#include <Message_SequenceOfProgressScale.hxx>
#include <Message_Status.hxx>
#include <Message_StatusType.hxx>

// template related includes
// ./opencascade/Message_SequenceOfPrinters.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Message_ListOfMsg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Message_ListOfMsg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Message_HArrayOfMsg.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Message_SequenceOfProgressScale.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Message_ListOfAlert.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Message(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Message"));


//Python trampoline classes
    class Py_Message_Printer : public Message_Printer{
    public:
        using Message_Printer::Message_Printer;


        // public pure virtual
        void Send(const TCollection_ExtendedString & theString,const Message_Gravity theGravity,const Standard_Boolean theToPutEol) const  override { PYBIND11_OVERLOAD_PURE(void,Message_Printer,Send,theString,theGravity,theToPutEol) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Message_ProgressIndicator : public Message_ProgressIndicator{
    public:
        using Message_ProgressIndicator::Message_ProgressIndicator;


        // public pure virtual
        Standard_Boolean Show(const Standard_Boolean force) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Message_ProgressIndicator,Show,force) };


        // protected pure virtual


        // private pure virtual

    };

// classes

    // default constructor
    register_default_constructor<Message , shared_ptr<Message>>(m,"Message");

    static_cast<py::class_<Message , shared_ptr<Message> >>(m.attr("Message"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Message_Alert ,opencascade::handle<Message_Alert>>(m,"Message_Alert");

    static_cast<py::class_<Message_Alert ,opencascade::handle<Message_Alert> , Standard_Transient>>(m.attr("Message_Alert"))
    // constructors
    // custom constructors
    // methods
        .def("GetMessageKey",
             (Standard_CString (Message_Alert::*)() const) static_cast<Standard_CString (Message_Alert::*)() const>(&Message_Alert::GetMessageKey),
             R"#(Return a C string to be used as a key for generating text user messages describing this alert. The messages are generated with help of Message_Msg class, in Message_Report::Dump(). Base implementation returns dynamic type name of the instance.)#" )
        .def("SupportsMerge",
             (Standard_Boolean (Message_Alert::*)() const) static_cast<Standard_Boolean (Message_Alert::*)() const>(&Message_Alert::SupportsMerge),
             R"#(Return true if this type of alert can be merged with other of the same type to avoid duplication. Basis implementation returns true.)#" )
        .def("Merge",
             (Standard_Boolean (Message_Alert::*)( const opencascade::handle<Message_Alert> & ) ) static_cast<Standard_Boolean (Message_Alert::*)( const opencascade::handle<Message_Alert> & ) >(&Message_Alert::Merge),
             R"#(If possible, merge data contained in this alert to theTarget.)#"  , py::arg("theTarget"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Alert::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Alert::*)() const>(&Message_Alert::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Alert::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Algorithm ,opencascade::handle<Message_Algorithm> , Standard_Transient>>(m.attr("Message_Algorithm"))
    // constructors
    // custom constructors
    // methods
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const Standard_CString , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const Standard_CString , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter. If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const TCollection_AsciiString & , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const TCollection_AsciiString & , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const TCollection_ExtendedString & , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const TCollection_ExtendedString & , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("GetStatus",
             (const Message_ExecStatus & (Message_Algorithm::*)() const) static_cast<const Message_ExecStatus & (Message_Algorithm::*)() const>(&Message_Algorithm::GetStatus),
             R"#(Returns copy of exec status of algorithm)#" )
        .def("ChangeStatus",
             (Message_ExecStatus & (Message_Algorithm::*)() ) static_cast<Message_ExecStatus & (Message_Algorithm::*)() >(&Message_Algorithm::ChangeStatus),
             R"#(Returns exec status of algorithm)#" )
        .def("GetMessenger",
             (opencascade::handle<Message_Messenger> (Message_Algorithm::*)() const) static_cast<opencascade::handle<Message_Messenger> (Message_Algorithm::*)() const>(&Message_Algorithm::GetMessenger),
             R"#(Returns messenger of algorithm. The returned handle is always non-null and can be used for sending messages.)#" )
        .def("SendStatusMessages",
             (void (Message_Algorithm::*)( const Message_ExecStatus & , const Message_Gravity , const Standard_Integer ) const) static_cast<void (Message_Algorithm::*)( const Message_ExecStatus & , const Message_Gravity , const Standard_Integer ) const>(&Message_Algorithm::SendStatusMessages),
             R"#(Print messages for all status flags that have been set during algorithm execution, excluding statuses that are NOT set in theFilter.)#"  , py::arg("theFilter"),  py::arg("theTraceLevel")=static_cast<const Message_Gravity>(Message_Warning),  py::arg("theMaxCount")=static_cast<const Standard_Integer>(20))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Algorithm::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Algorithm::*)() const>(&Message_Algorithm::DynamicType),
             R"#(None)#" )
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const Standard_CString , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const Standard_CString , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter. If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const TCollection_AsciiString & , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const TCollection_AsciiString & , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const opencascade::handle<TCollection_HAsciiString> & , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & , const TCollection_ExtendedString & , const Standard_Boolean ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & , const TCollection_ExtendedString & , const Standard_Boolean ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions"))
        .def("GetStatus",
             (const Message_ExecStatus & (Message_Algorithm::*)() const) static_cast<const Message_ExecStatus & (Message_Algorithm::*)() const>(&Message_Algorithm::GetStatus),
             R"#(Returns copy of exec status of algorithm)#" )
        .def("ChangeStatus",
             (Message_ExecStatus & (Message_Algorithm::*)() ) static_cast<Message_ExecStatus & (Message_Algorithm::*)() >(&Message_Algorithm::ChangeStatus),
             R"#(Returns exec status of algorithm)#" )
        .def("GetMessenger",
             (opencascade::handle<Message_Messenger> (Message_Algorithm::*)() const) static_cast<opencascade::handle<Message_Messenger> (Message_Algorithm::*)() const>(&Message_Algorithm::GetMessenger),
             R"#(Returns messenger of algorithm. The returned handle is always non-null and can be used for sending messages.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Algorithm::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_ExecStatus , shared_ptr<Message_ExecStatus> >>(m.attr("Message_ExecStatus"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Message_Status >()  , py::arg("status") )
    // custom constructors
    // methods
        .def("Set",
             (void (Message_ExecStatus::*)( Message_Status ) ) static_cast<void (Message_ExecStatus::*)( Message_Status ) >(&Message_ExecStatus::Set),
             R"#(Sets a status flag)#"  , py::arg("status"))
        .def("IsSet",
             (Standard_Boolean (Message_ExecStatus::*)( Message_Status ) const) static_cast<Standard_Boolean (Message_ExecStatus::*)( Message_Status ) const>(&Message_ExecStatus::IsSet),
             R"#(Check status for being set)#"  , py::arg("status"))
        .def("Clear",
             (void (Message_ExecStatus::*)( Message_Status ) ) static_cast<void (Message_ExecStatus::*)( Message_Status ) >(&Message_ExecStatus::Clear),
             R"#(Clear one status)#"  , py::arg("status"))
        .def("IsDone",
             (Standard_Boolean (Message_ExecStatus::*)() const) static_cast<Standard_Boolean (Message_ExecStatus::*)() const>(&Message_ExecStatus::IsDone),
             R"#(Check if at least one status of each type is set)#" )
        .def("IsFail",
             (Standard_Boolean (Message_ExecStatus::*)() const) static_cast<Standard_Boolean (Message_ExecStatus::*)() const>(&Message_ExecStatus::IsFail),
             R"#(None)#" )
        .def("IsWarn",
             (Standard_Boolean (Message_ExecStatus::*)() const) static_cast<Standard_Boolean (Message_ExecStatus::*)() const>(&Message_ExecStatus::IsWarn),
             R"#(None)#" )
        .def("IsAlarm",
             (Standard_Boolean (Message_ExecStatus::*)() const) static_cast<Standard_Boolean (Message_ExecStatus::*)() const>(&Message_ExecStatus::IsAlarm),
             R"#(None)#" )
        .def("SetAllDone",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::SetAllDone),
             R"#(Set all statuses of each type)#" )
        .def("SetAllWarn",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::SetAllWarn),
             R"#(None)#" )
        .def("SetAllAlarm",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::SetAllAlarm),
             R"#(None)#" )
        .def("SetAllFail",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::SetAllFail),
             R"#(None)#" )
        .def("ClearAllDone",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::ClearAllDone),
             R"#(Clear all statuses of each type)#" )
        .def("ClearAllWarn",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::ClearAllWarn),
             R"#(None)#" )
        .def("ClearAllAlarm",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::ClearAllAlarm),
             R"#(None)#" )
        .def("ClearAllFail",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::ClearAllFail),
             R"#(None)#" )
        .def("Clear",
             (void (Message_ExecStatus::*)() ) static_cast<void (Message_ExecStatus::*)() >(&Message_ExecStatus::Clear),
             R"#(Clear all statuses)#" )
        .def("Add",
             (void (Message_ExecStatus::*)( const Message_ExecStatus & ) ) static_cast<void (Message_ExecStatus::*)( const Message_ExecStatus & ) >(&Message_ExecStatus::Add),
             R"#(Add statuses to me from theOther execution status)#"  , py::arg("theOther"))
        .def("And",
             (void (Message_ExecStatus::*)( const Message_ExecStatus & ) ) static_cast<void (Message_ExecStatus::*)( const Message_ExecStatus & ) >(&Message_ExecStatus::And),
             R"#(Leave only the statuses common with theOther)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("StatusIndex_s",
                    (Standard_Integer (*)( Message_Status ) ) static_cast<Standard_Integer (*)( Message_Status ) >(&Message_ExecStatus::StatusIndex),
                    R"#(Returns index of status in whole range [FirstStatus, LastStatus])#"  , py::arg("status"))
        .def_static("LocalStatusIndex_s",
                    (Standard_Integer (*)( Message_Status ) ) static_cast<Standard_Integer (*)( Message_Status ) >(&Message_ExecStatus::LocalStatusIndex),
                    R"#(Returns index of status inside type of status (Done or Warn or, etc) in range [1, StatusesPerType])#"  , py::arg("status"))
        .def_static("TypeOfStatus_s",
                    (Message_StatusType (*)( Message_Status ) ) static_cast<Message_StatusType (*)( Message_Status ) >(&Message_ExecStatus::TypeOfStatus),
                    R"#(Returns status type (DONE, WARN, ALARM, or FAIL))#"  , py::arg("status"))
        .def_static("StatusByIndex_s",
                    (Message_Status (*)( const Standard_Integer ) ) static_cast<Message_Status (*)( const Standard_Integer ) >(&Message_ExecStatus::StatusByIndex),
                    R"#(Returns status with index theIndex in whole range [FirstStatus, LastStatus])#"  , py::arg("theIndex"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Messenger ,opencascade::handle<Message_Messenger> , Standard_Transient>>(m.attr("Message_Messenger"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Messenger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Messenger::*)() const>(&Message_Messenger::DynamicType),
             R"#(None)#" )
        .def("Printers",
             (const Message_SequenceOfPrinters & (Message_Messenger::*)() const) static_cast<const Message_SequenceOfPrinters & (Message_Messenger::*)() const>(&Message_Messenger::Printers),
             R"#(Returns current sequence of printers)#" )
        .def("ChangePrinters",
             (Message_SequenceOfPrinters & (Message_Messenger::*)() ) static_cast<Message_SequenceOfPrinters & (Message_Messenger::*)() >(&Message_Messenger::ChangePrinters),
             R"#(Returns sequence of printers The sequence can be modified.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Messenger::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Msg , shared_ptr<Message_Msg> >>(m.attr("Message_Msg"))
    // constructors
    // custom constructors
    // methods
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const TCollection_AsciiString & ) ) static_cast<Message_Msg & (Message_Msg::*)( const TCollection_AsciiString & ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> & ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> & ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Original",
             (const TCollection_ExtendedString & (Message_Msg::*)() const) static_cast<const TCollection_ExtendedString & (Message_Msg::*)() const>(&Message_Msg::Original),
             R"#(Returns the original message text)#" )
        .def("Value",
             (const TCollection_ExtendedString & (Message_Msg::*)() const) static_cast<const TCollection_ExtendedString & (Message_Msg::*)() const>(&Message_Msg::Value),
             R"#(Returns current state of the message text with parameters to the moment)#" )
        .def("IsEdited",
             (Standard_Boolean (Message_Msg::*)() const) static_cast<Standard_Boolean (Message_Msg::*)() const>(&Message_Msg::IsEdited),
             R"#(Tells if Value differs from Original)#" )
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const TCollection_AsciiString & ) ) static_cast<Message_Msg & (Message_Msg::*)( const TCollection_AsciiString & ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> & ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> & ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Original",
             (const TCollection_ExtendedString & (Message_Msg::*)() const) static_cast<const TCollection_ExtendedString & (Message_Msg::*)() const>(&Message_Msg::Original),
             R"#(Returns the original message text)#" )
        .def("Value",
             (const TCollection_ExtendedString & (Message_Msg::*)() const) static_cast<const TCollection_ExtendedString & (Message_Msg::*)() const>(&Message_Msg::Value),
             R"#(Returns current state of the message text with parameters to the moment)#" )
        .def("IsEdited",
             (Standard_Boolean (Message_Msg::*)() const) static_cast<Standard_Boolean (Message_Msg::*)() const>(&Message_Msg::IsEdited),
             R"#(Tells if Value differs from Original)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Message_MsgFile , shared_ptr<Message_MsgFile>>(m,"Message_MsgFile");

    static_cast<py::class_<Message_MsgFile , shared_ptr<Message_MsgFile> >>(m.attr("Message_MsgFile"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Printer ,opencascade::handle<Message_Printer>,Py_Message_Printer , Standard_Transient>>(m.attr("Message_Printer"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Printer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Printer::*)() const>(&Message_Printer::DynamicType),
             R"#(None)#" )
        .def("GetTraceLevel",
             (Message_Gravity (Message_Printer::*)() const) static_cast<Message_Gravity (Message_Printer::*)() const>(&Message_Printer::GetTraceLevel),
             R"#(Return trace level used for filtering messages; messages with lover gravity will be ignored.)#" )
        .def("SetTraceLevel",
             (void (Message_Printer::*)( const Message_Gravity ) ) static_cast<void (Message_Printer::*)( const Message_Gravity ) >(&Message_Printer::SetTraceLevel),
             R"#(Set trace level used for filtering messages. By default, trace level is Message_Info, so that all messages are output)#"  , py::arg("theTraceLevel"))
        .def("Send",
             (void (Message_Printer::*)( const TCollection_ExtendedString & , const Message_Gravity , const Standard_Boolean ) const) static_cast<void (Message_Printer::*)( const TCollection_ExtendedString & , const Message_Gravity , const Standard_Boolean ) const>(&Message_Printer::Send),
             R"#(Send a string message with specified trace level. The parameter theToPutEol specified whether end-of-line should be added to the end of the message. This method must be redefined in descentant.)#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("theToPutEol"))
        .def("Send",
             (void (Message_Printer::*)( const Standard_CString , const Message_Gravity , const Standard_Boolean ) const) static_cast<void (Message_Printer::*)( const Standard_CString , const Message_Gravity , const Standard_Boolean ) const>(&Message_Printer::Send),
             R"#(Send a string message with specified trace level. The parameter theToPutEol specified whether end-of-line should be added to the end of the message. Default implementation calls first method Send().)#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("theToPutEol"))
        .def("Send",
             (void (Message_Printer::*)( const TCollection_AsciiString & , const Message_Gravity , const Standard_Boolean ) const) static_cast<void (Message_Printer::*)( const TCollection_AsciiString & , const Message_Gravity , const Standard_Boolean ) const>(&Message_Printer::Send),
             R"#(Send a string message with specified trace level. The parameter theToPutEol specified whether end-of-line should be added to the end of the message. Default implementation calls first method Send().)#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("theToPutEol"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Printer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_ProgressIndicator ,opencascade::handle<Message_ProgressIndicator>,Py_Message_ProgressIndicator , Standard_Transient>>(m.attr("Message_ProgressIndicator"))
    // constructors
    // custom constructors
    // methods
        .def("Reset",
             (void (Message_ProgressIndicator::*)() ) static_cast<void (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::Reset),
             R"#(Drops all scopes and sets scale from 0 to 100, step 1 This scale has name "Step")#" )
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const Standard_CString ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString ) >(&Message_ProgressIndicator::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_ProgressIndicator::SetName),
             R"#(Set (optional) name for scale)#"  , py::arg("name"))
        .def("SetRange",
             (void (Message_ProgressIndicator::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real , const Standard_Real ) >(&Message_ProgressIndicator::SetRange),
             R"#(Set range for current scale)#"  , py::arg("min"),  py::arg("max"))
        .def("SetStep",
             (void (Message_ProgressIndicator::*)( const Standard_Real ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real ) >(&Message_ProgressIndicator::SetStep),
             R"#(Set step for current scale)#"  , py::arg("step"))
        .def("SetInfinite",
             (void (Message_ProgressIndicator::*)( const Standard_Boolean ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Boolean ) >(&Message_ProgressIndicator::SetInfinite),
             R"#(Set or drop infinite mode for the current scale)#"  , py::arg("isInf")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetScale",
             (void (Message_ProgressIndicator::*)( const Standard_CString , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Message_ProgressIndicator::SetScale),
             R"#(None)#"  , py::arg("name"),  py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("isInf")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Increment",
             (void (Message_ProgressIndicator::*)() ) static_cast<void (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::Increment),
             R"#(None)#" )
        .def("Increment",
             (void (Message_ProgressIndicator::*)( const Standard_Real ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real ) >(&Message_ProgressIndicator::Increment),
             R"#(Increment the progress value by the default of specified step)#"  , py::arg("step"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name")=static_cast<const Standard_CString>(0))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real , const Standard_CString ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real , const Standard_CString ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("span"),  py::arg("name")=static_cast<const Standard_CString>(0))
        .def("NextScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) >(&Message_ProgressIndicator::NextScope),
             R"#(None)#"  , py::arg("name")=static_cast<const Standard_CString>(0))
        .def("UserBreak",
             (Standard_Boolean (Message_ProgressIndicator::*)() ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::UserBreak),
             R"#(Should return True if user has send a break signal. Default implementation returns False.)#" )
        .def("Show",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Boolean ) >(&Message_ProgressIndicator::Show),
             R"#(Update presentation of the progress indicator Called when progress position is changed Flag force is intended for forcing update in case if it is optimized; all internal calls from ProgressIndicator are done with this flag equal to False)#"  , py::arg("force")=static_cast<const Standard_Boolean>(Standard_True))
        .def("GetPosition",
             (Standard_Real (Message_ProgressIndicator::*)() const) static_cast<Standard_Real (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetPosition),
             R"#(Returns total progress position on the basic scale ranged from 0. to 1.)#" )
        .def("GetNbScopes",
             (Standard_Integer (Message_ProgressIndicator::*)() const) static_cast<Standard_Integer (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetNbScopes),
             R"#(Returns current number of opened scopes This number is always >=1 as top-level scale is always present)#" )
        .def("GetScope",
             (const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer ) const) static_cast<const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer ) const>(&Message_ProgressIndicator::GetScope),
             R"#(Returns data for scale of index-th scope The first scope is current one, the last is the top-level one)#"  , py::arg("index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_ProgressIndicator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::DynamicType),
             R"#(None)#" )
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const Standard_CString ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString ) >(&Message_ProgressIndicator::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_ProgressIndicator::SetName),
             R"#(Set (optional) name for scale)#"  , py::arg("name"))
        .def("SetRange",
             (void (Message_ProgressIndicator::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real , const Standard_Real ) >(&Message_ProgressIndicator::SetRange),
             R"#(Set range for current scale)#"  , py::arg("min"),  py::arg("max"))
        .def("SetStep",
             (void (Message_ProgressIndicator::*)( const Standard_Real ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real ) >(&Message_ProgressIndicator::SetStep),
             R"#(Set step for current scale)#"  , py::arg("step"))
        .def("SetInfinite",
             (void (Message_ProgressIndicator::*)( const Standard_Boolean ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Boolean ) >(&Message_ProgressIndicator::SetInfinite),
             R"#(Set or drop infinite mode for the current scale)#"  , py::arg("isInf"))
        .def("SetScale",
             (void (Message_ProgressIndicator::*)( const Standard_CString , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Message_ProgressIndicator::SetScale),
             R"#(None)#"  , py::arg("name"),  py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("isInf"))
        .def("Increment",
             (void (Message_ProgressIndicator::*)() ) static_cast<void (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::Increment),
             R"#(None)#" )
        .def("Increment",
             (void (Message_ProgressIndicator::*)( const Standard_Real ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real ) >(&Message_ProgressIndicator::Increment),
             R"#(Increment the progress value by the default of specified step)#"  , py::arg("step"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real , const Standard_CString ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real , const Standard_CString ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("span"),  py::arg("name"))
        .def("NextScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString ) >(&Message_ProgressIndicator::NextScope),
             R"#(None)#"  , py::arg("name"))
        .def("GetPosition",
             (Standard_Real (Message_ProgressIndicator::*)() const) static_cast<Standard_Real (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetPosition),
             R"#(Returns total progress position on the basic scale ranged from 0. to 1.)#" )
        .def("GetNbScopes",
             (Standard_Integer (Message_ProgressIndicator::*)() const) static_cast<Standard_Integer (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetNbScopes),
             R"#(Returns current number of opened scopes This number is always >=1 as top-level scale is always present)#" )
        .def("GetScope",
             (const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer ) const) static_cast<const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer ) const>(&Message_ProgressIndicator::GetScope),
             R"#(Returns data for scale of index-th scope The first scope is current one, the last is the top-level one)#"  , py::arg("index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_ProgressIndicator::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_ProgressScale , shared_ptr<Message_ProgressScale> >>(m.attr("Message_ProgressScale"))
    // constructors
    // custom constructors
    // methods
        .def("SetName",
             (void (Message_ProgressScale::*)( const Standard_CString ) ) static_cast<void (Message_ProgressScale::*)( const Standard_CString ) >(&Message_ProgressScale::SetName),
             R"#(None)#"  , py::arg("theName"))
        .def("SetName",
             (void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_ProgressScale::SetName),
             R"#(Sets scale name)#"  , py::arg("theName"))
        .def("GetName",
             (opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetName),
             R"#(Gets scale name Name may be Null handle if not set)#" )
        .def("SetMin",
             (void (Message_ProgressScale::*)( const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ) >(&Message_ProgressScale::SetMin),
             R"#(Sets minimum value of scale)#"  , py::arg("theMin"))
        .def("GetMin",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMin),
             R"#(Gets minimum value of scale)#" )
        .def("SetMax",
             (void (Message_ProgressScale::*)( const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ) >(&Message_ProgressScale::SetMax),
             R"#(Sets minimum value of scale)#"  , py::arg("theMax"))
        .def("GetMax",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMax),
             R"#(Gets minimum value of scale)#" )
        .def("SetRange",
             (void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) >(&Message_ProgressScale::SetRange),
             R"#(Set both min and max)#"  , py::arg("min"),  py::arg("max"))
        .def("SetStep",
             (void (Message_ProgressScale::*)( const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ) >(&Message_ProgressScale::SetStep),
             R"#(Sets default step)#"  , py::arg("theStep"))
        .def("GetStep",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetStep),
             R"#(Gets default step)#" )
        .def("SetInfinite",
             (void (Message_ProgressScale::*)( const Standard_Boolean ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Boolean ) >(&Message_ProgressScale::SetInfinite),
             R"#(Sets flag for infinite scale)#"  , py::arg("theInfinite")=static_cast<const Standard_Boolean>(Standard_True))
        .def("GetInfinite",
             (Standard_Boolean (Message_ProgressScale::*)() const) static_cast<Standard_Boolean (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetInfinite),
             R"#(Gets flag for infinite scale)#" )
        .def("SetScale",
             (void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Message_ProgressScale::SetScale),
             R"#(Set all scale parameters)#"  , py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("theInfinite")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetSpan",
             (void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) >(&Message_ProgressScale::SetSpan),
             R"#(Defines span occupied by the scale on the basis scale)#"  , py::arg("first"),  py::arg("last"))
        .def("GetFirst",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetFirst),
             R"#(None)#" )
        .def("GetLast",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetLast),
             R"#(Return information on span occupied by the scale on the base scale)#" )
        .def("SetName",
             (void (Message_ProgressScale::*)( const Standard_CString ) ) static_cast<void (Message_ProgressScale::*)( const Standard_CString ) >(&Message_ProgressScale::SetName),
             R"#(None)#"  , py::arg("theName"))
        .def("SetName",
             (void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> & ) ) static_cast<void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> & ) >(&Message_ProgressScale::SetName),
             R"#(Sets scale name)#"  , py::arg("theName"))
        .def("GetName",
             (opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetName),
             R"#(Gets scale name Name may be Null handle if not set)#" )
        .def("SetMin",
             (void (Message_ProgressScale::*)( const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ) >(&Message_ProgressScale::SetMin),
             R"#(Sets minimum value of scale)#"  , py::arg("theMin"))
        .def("GetMin",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMin),
             R"#(Gets minimum value of scale)#" )
        .def("SetMax",
             (void (Message_ProgressScale::*)( const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ) >(&Message_ProgressScale::SetMax),
             R"#(Sets minimum value of scale)#"  , py::arg("theMax"))
        .def("GetMax",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMax),
             R"#(Gets minimum value of scale)#" )
        .def("SetRange",
             (void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) >(&Message_ProgressScale::SetRange),
             R"#(Set both min and max)#"  , py::arg("theMin"),  py::arg("theMax"))
        .def("SetStep",
             (void (Message_ProgressScale::*)( const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ) >(&Message_ProgressScale::SetStep),
             R"#(Sets default step)#"  , py::arg("theStep"))
        .def("GetStep",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetStep),
             R"#(Gets default step)#" )
        .def("SetInfinite",
             (void (Message_ProgressScale::*)( const Standard_Boolean ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Boolean ) >(&Message_ProgressScale::SetInfinite),
             R"#(Sets flag for infinite scale)#"  , py::arg("theInfinite"))
        .def("GetInfinite",
             (Standard_Boolean (Message_ProgressScale::*)() const) static_cast<Standard_Boolean (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetInfinite),
             R"#(Gets flag for infinite scale)#" )
        .def("SetScale",
             (void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&Message_ProgressScale::SetScale),
             R"#(Set all scale parameters)#"  , py::arg("theMin"),  py::arg("theMax"),  py::arg("theStep"),  py::arg("theInfinite"))
        .def("SetSpan",
             (void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real , const Standard_Real ) >(&Message_ProgressScale::SetSpan),
             R"#(Defines span occupied by the scale on the basis scale)#"  , py::arg("theFirst"),  py::arg("theLast"))
        .def("GetFirst",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetFirst),
             R"#(None)#" )
        .def("GetLast",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetLast),
             R"#(Return information on span occupied by the scale on the base scale)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_ProgressSentry , shared_ptr<Message_ProgressSentry> >>(m.attr("Message_ProgressSentry"))
    // constructors
    // custom constructors
    // methods
        .def("Relieve",
             (void (Message_ProgressSentry::*)() ) static_cast<void (Message_ProgressSentry::*)() >(&Message_ProgressSentry::Relieve),
             R"#(Moves progress indicator to the end of the current scale and relieves sentry from its duty. Methods other than Show() will do nothing after this one is called.)#" )
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_CString ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_CString ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("name")=static_cast<const Standard_CString>(0))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real , const Standard_CString ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real , const Standard_CString ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("span"),  py::arg("name")=static_cast<const Standard_CString>(0))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & ) const>(&Message_ProgressSentry::Next),
             R"#(Closes current scope and opens next one with either specified or default span)#"  , py::arg("span"),  py::arg("name"))
        .def("More",
             (Standard_Boolean (Message_ProgressSentry::*)() const) static_cast<Standard_Boolean (Message_ProgressSentry::*)() const>(&Message_ProgressSentry::More),
             R"#(Returns False if ProgressIndicator signals UserBreak)#" )
        .def("Show",
             (void (Message_ProgressSentry::*)() const) static_cast<void (Message_ProgressSentry::*)() const>(&Message_ProgressSentry::Show),
             R"#(Forces update of progress indicator display)#" )
        .def("Relieve",
             (void (Message_ProgressSentry::*)() ) static_cast<void (Message_ProgressSentry::*)() >(&Message_ProgressSentry::Relieve),
             R"#(Moves progress indicator to the end of the current scale and relieves sentry from its duty. Methods other than Show() will do nothing after this one is called.)#" )
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_CString ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_CString ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("name"))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real , const Standard_CString ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real , const Standard_CString ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("span"),  py::arg("name"))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real , const opencascade::handle<TCollection_HAsciiString> & ) const>(&Message_ProgressSentry::Next),
             R"#(Closes current scope and opens next one with either specified or default span)#"  , py::arg("span"),  py::arg("name"))
        .def("More",
             (Standard_Boolean (Message_ProgressSentry::*)() const) static_cast<Standard_Boolean (Message_ProgressSentry::*)() const>(&Message_ProgressSentry::More),
             R"#(Returns False if ProgressIndicator signals UserBreak)#" )
        .def("Show",
             (void (Message_ProgressSentry::*)() const) static_cast<void (Message_ProgressSentry::*)() const>(&Message_ProgressSentry::Show),
             R"#(Forces update of progress indicator display)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Report ,opencascade::handle<Message_Report> , Standard_Transient>>(m.attr("Message_Report"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Report::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Report::*)() const>(&Message_Report::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Report::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_PrinterOStream ,opencascade::handle<Message_PrinterOStream> , Message_Printer>>(m.attr("Message_PrinterOStream"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_PrinterOStream::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_PrinterOStream::*)() const>(&Message_PrinterOStream::DynamicType),
             R"#(None)#" )
        .def("GetUseUtf8",
             (Standard_Boolean (Message_PrinterOStream::*)() const) static_cast<Standard_Boolean (Message_PrinterOStream::*)() const>(&Message_PrinterOStream::GetUseUtf8),
             R"#(Returns option to convert non-Ascii symbols to UTF8 encoding)#" )
        .def("SetUseUtf8",
             (void (Message_PrinterOStream::*)( const Standard_Boolean ) ) static_cast<void (Message_PrinterOStream::*)( const Standard_Boolean ) >(&Message_PrinterOStream::SetUseUtf8),
             R"#(Sets option to convert non-Ascii symbols to UTF8 encoding)#"  , py::arg("useUtf8"))
        .def("GetStream",
             (Standard_OStream & (Message_PrinterOStream::*)() const) static_cast<Standard_OStream & (Message_PrinterOStream::*)() const>(&Message_PrinterOStream::GetStream),
             R"#(Returns reference to the output stream)#" )
        .def("Send",
             (void (Message_PrinterOStream::*)( const Standard_CString , const Message_Gravity , const Standard_Boolean ) const) static_cast<void (Message_PrinterOStream::*)( const Standard_CString , const Message_Gravity , const Standard_Boolean ) const>(&Message_PrinterOStream::Send),
             R"#(Puts a message to the current stream if its gravity is equal or greater to the trace level set by SetTraceLevel())#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Send",
             (void (Message_PrinterOStream::*)( const TCollection_AsciiString & , const Message_Gravity , const Standard_Boolean ) const) static_cast<void (Message_PrinterOStream::*)( const TCollection_AsciiString & , const Message_Gravity , const Standard_Boolean ) const>(&Message_PrinterOStream::Send),
             R"#(Puts a message to the current stream if its gravity is equal or greater to the trace level set by SetTraceLevel())#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Send",
             (void (Message_PrinterOStream::*)( const TCollection_ExtendedString & , const Message_Gravity , const Standard_Boolean ) const) static_cast<void (Message_PrinterOStream::*)( const TCollection_ExtendedString & , const Message_Gravity , const Standard_Boolean ) const>(&Message_PrinterOStream::Send),
             R"#(Puts a message to the current stream if its gravity is equal or greater to the trace level set by SetTraceLevel() Non-Ascii symbols are converted to UTF-8 if UseUtf8 option is set, else replaced by symbols '?')#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_PrinterOStream::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Message_Report.hxx
// ./opencascade/Message_SequenceOfPrinters.hxx
// ./opencascade/Message_Gravity.hxx
// ./opencascade/Message_ExecStatus.hxx
// ./opencascade/Message_StatusType.hxx
// ./opencascade/Message_Alert.hxx
// ./opencascade/Message_PrinterOStream.hxx
// ./opencascade/Message_Msg.hxx
// ./opencascade/Message_Messenger.hxx
    m.def("Message_EndLine",
          (const opencascade::handle<Message_Messenger> & (*)( const opencascade::handle<Message_Messenger> & ))  static_cast<const opencascade::handle<Message_Messenger> & (*)( const opencascade::handle<Message_Messenger> & )>(&Message_EndLine),
          R"#(None)#"  , py::arg("theMessenger"));
// ./opencascade/Message_ListOfMsg.hxx
// ./opencascade/Message_HArrayOfMsg.hxx
// ./opencascade/Message_ProgressIndicator.hxx
// ./opencascade/Message_SequenceOfProgressScale.hxx
// ./opencascade/Message_ProgressSentry.hxx
// ./opencascade/Message_Printer.hxx
// ./opencascade/Message_ListOfAlert.hxx
// ./opencascade/Message.hxx
// ./opencascade/Message_MsgFile.hxx
// ./opencascade/Message_Status.hxx
// ./opencascade/Message_ListIteratorOfListOfMsg.hxx
// ./opencascade/Message_Algorithm.hxx
// ./opencascade/Message_ProgressScale.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<Message_Printer> >(m,"Message_SequenceOfPrinters");
    register_template_NCollection_List<Message_Msg>(m,"Message_ListOfMsg");
    register_template_NCollection_Array1<NCollection_Handle<Message_Msg> >(m,"Message_ArrayOfMsg");
    register_template_NCollection_Sequence<Message_ProgressScale>(m,"Message_SequenceOfProgressScale");
    register_template_NCollection_List<opencascade::handle<Message_Alert> >(m,"Message_ListOfAlert");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
