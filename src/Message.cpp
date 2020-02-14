
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TCollection_ExtendedString.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
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
#include <Message_Messenger.hxx>
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
// ./opencascade/Message_ListOfAlert.hxx
#include "NCollection.hxx"
// ./opencascade/Message_SequenceOfPrinters.hxx
#include "NCollection.hxx"
// ./opencascade/Message_HArrayOfMsg.hxx
#include "NCollection.hxx"
// ./opencascade/Message_SequenceOfProgressScale.hxx
#include "NCollection.hxx"
// ./opencascade/Message_ListOfMsg.hxx
#include "NCollection.hxx"
// ./opencascade/Message_ListOfMsg.hxx
#include "NCollection.hxx"


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

    static_cast<py::class_<Message , shared_ptr<Message>  >>(m.attr("Message"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("DefaultMessenger_s",
                    (const opencascade::handle<Message_Messenger> & (*)() ) static_cast<const opencascade::handle<Message_Messenger> & (*)() >(&Message::DefaultMessenger),
                    R"#(Defines default messenger for OCCT applications. This is global static instance of the messenger. By default, it contains single printer directed to std::cout. It can be customized according to the application needs.)#" )
        .def_static("FillTime_s",
                    (TCollection_AsciiString (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) ) static_cast<TCollection_AsciiString (*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Real  ) >(&Message::FillTime),
                    R"#(Returns the string filled with values of hours, minutes and seconds. Example: 1. (5, 12, 26.3345) returns "05h:12m:26.33s", 2. (0, 6, 34.496 ) returns "06m:34.50s", 3. (0, 0, 4.5 ) returns "4.50s")#"  , py::arg("Hour"),  py::arg("Minute"),  py::arg("Second"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Message_Alert ,opencascade::handle<Message_Alert>>(m,"Message_Alert");

    static_cast<py::class_<Message_Alert ,opencascade::handle<Message_Alert>  , Standard_Transient >>(m.attr("Message_Alert"))
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
             (Standard_Boolean (Message_Alert::*)( const opencascade::handle<Message_Alert> &  ) ) static_cast<Standard_Boolean (Message_Alert::*)( const opencascade::handle<Message_Alert> &  ) >(&Message_Alert::Merge),
             R"#(If possible, merge data contained in this alert to theTarget.)#"  , py::arg("theTarget"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Alert::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Alert::*)() const>(&Message_Alert::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Alert::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Message_Alert::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Algorithm ,opencascade::handle<Message_Algorithm>  , Standard_Transient >>(m.attr("Message_Algorithm"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status &  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status &  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with no parameter)#"  , py::arg("theStat"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const Standard_Integer  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const Standard_Integer  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with integer parameter)#"  , py::arg("theStat"),  py::arg("theInt"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const Standard_CString ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const Standard_CString ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter. If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const opencascade::handle<TCollection_HExtendedString> & ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const opencascade::handle<TCollection_HExtendedString> & ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const Message_Msg &  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const Message_Msg &  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with preformatted message. This message will be used directly to report the status; automatic generation of status messages will be disabled for it.)#"  , py::arg("theStat"),  py::arg("theMsg"))
        .def("GetStatus",
             (const Message_ExecStatus & (Message_Algorithm::*)() const) static_cast<const Message_ExecStatus & (Message_Algorithm::*)() const>(&Message_Algorithm::GetStatus),
             R"#(Returns copy of exec status of algorithm)#" )
        .def("ChangeStatus",
             (Message_ExecStatus & (Message_Algorithm::*)() ) static_cast<Message_ExecStatus & (Message_Algorithm::*)() >(&Message_Algorithm::ChangeStatus),
             R"#(Returns exec status of algorithm)#" )
        .def("ClearStatus",
             (void (Message_Algorithm::*)() ) static_cast<void (Message_Algorithm::*)() >(&Message_Algorithm::ClearStatus),
             R"#(Clear exec status of algorithm)#" )
        .def("SetMessenger",
             (void (Message_Algorithm::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (Message_Algorithm::*)( const opencascade::handle<Message_Messenger> &  ) >(&Message_Algorithm::SetMessenger),
             R"#(Sets messenger to algorithm)#"  , py::arg("theMsgr"))
        .def("GetMessenger",
             (opencascade::handle<Message_Messenger> (Message_Algorithm::*)() const) static_cast<opencascade::handle<Message_Messenger> (Message_Algorithm::*)() const>(&Message_Algorithm::GetMessenger),
             R"#(Returns messenger of algorithm. The returned handle is always non-null and can be used for sending messages.)#" )
        .def("SendStatusMessages",
             (void (Message_Algorithm::*)( const Message_ExecStatus & ,  const Message_Gravity ,  const Standard_Integer  ) const) static_cast<void (Message_Algorithm::*)( const Message_ExecStatus & ,  const Message_Gravity ,  const Standard_Integer  ) const>(&Message_Algorithm::SendStatusMessages),
             R"#(Print messages for all status flags that have been set during algorithm execution, excluding statuses that are NOT set in theFilter.)#"  , py::arg("theFilter"),  py::arg("theTraceLevel")=static_cast<const Message_Gravity>(Message_Warning),  py::arg("theMaxCount")=static_cast<const Standard_Integer>(20))
        .def("SendMessages",
             (void (Message_Algorithm::*)( const Message_Gravity ,  const Standard_Integer  ) const) static_cast<void (Message_Algorithm::*)( const Message_Gravity ,  const Standard_Integer  ) const>(&Message_Algorithm::SendMessages),
             R"#(Convenient variant of SendStatusMessages() with theFilter having defined all WARN, ALARM, and FAIL (but not DONE) status flags)#"  , py::arg("theTraceLevel")=static_cast<const Message_Gravity>(Message_Warning),  py::arg("theMaxCount")=static_cast<const Standard_Integer>(20))
        .def("AddStatus",
             (void (Message_Algorithm::*)( const opencascade::handle<Message_Algorithm> &  ) ) static_cast<void (Message_Algorithm::*)( const opencascade::handle<Message_Algorithm> &  ) >(&Message_Algorithm::AddStatus),
             R"#(Add statuses to this algorithm from other algorithm (including messages))#"  , py::arg("theOther"))
        .def("AddStatus",
             (void (Message_Algorithm::*)( const Message_ExecStatus & ,  const opencascade::handle<Message_Algorithm> &  ) ) static_cast<void (Message_Algorithm::*)( const Message_ExecStatus & ,  const opencascade::handle<Message_Algorithm> &  ) >(&Message_Algorithm::AddStatus),
             R"#(Add statuses to this algorithm from other algorithm, but only those items are moved that correspond to statuses set in theStatus)#"  , py::arg("theStatus"),  py::arg("theOther"))
        .def("GetMessageNumbers",
             (opencascade::handle<TColStd_HPackedMapOfInteger> (Message_Algorithm::*)( const Message_Status &  ) const) static_cast<opencascade::handle<TColStd_HPackedMapOfInteger> (Message_Algorithm::*)( const Message_Status &  ) const>(&Message_Algorithm::GetMessageNumbers),
             R"#(Return the numbers associated with the indicated status; Null handle if no such status or no numbers associated with it)#"  , py::arg("theStatus"))
        .def("GetMessageStrings",
             (opencascade::handle<TColStd_HSequenceOfHExtendedString> (Message_Algorithm::*)( const Message_Status &  ) const) static_cast<opencascade::handle<TColStd_HSequenceOfHExtendedString> (Message_Algorithm::*)( const Message_Status &  ) const>(&Message_Algorithm::GetMessageStrings),
             R"#(Return the strings associated with the indicated status; Null handle if no such status or no strings associated with it)#"  , py::arg("theStatus"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Algorithm::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Algorithm::*)() const>(&Message_Algorithm::DynamicType),
             R"#(None)#" )
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const Standard_CString ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const Standard_CString ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter. If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_AsciiString & ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const opencascade::handle<TCollection_HAsciiString> & ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
             R"#(Sets status with string parameter If noRepetitions is True, the parameter will be added only if it has not been yet recorded for the same status flag)#"  , py::arg("theStat"),  py::arg("theStr"),  py::arg("noRepetitions"))
        .def("SetStatus",
             (void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) ) static_cast<void (Message_Algorithm::*)( const Message_Status & ,  const TCollection_ExtendedString & ,  const Standard_Boolean  ) >(&Message_Algorithm::SetStatus),
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
        .def_static("PrepareReport_s",
                    (TCollection_ExtendedString (*)( const opencascade::handle<TColStd_HPackedMapOfInteger> & ,  const Standard_Integer  ) ) static_cast<TCollection_ExtendedString (*)( const opencascade::handle<TColStd_HPackedMapOfInteger> & ,  const Standard_Integer  ) >(&Message_Algorithm::PrepareReport),
                    R"#(Prepares a string containing a list of integers contained in theError map, but not more than theMaxCount)#"  , py::arg("theError"),  py::arg("theMaxCount"))
        .def_static("PrepareReport_s",
                    (TCollection_ExtendedString (*)(  const NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> > & ,  const Standard_Integer  ) ) static_cast<TCollection_ExtendedString (*)(  const NCollection_Sequence<opencascade::handle<TCollection_HExtendedString> > & ,  const Standard_Integer  ) >(&Message_Algorithm::PrepareReport),
                    R"#(Prepares a string containing a list of names contained in theReportSeq sequence, but not more than theMaxCount)#"  , py::arg("theReportSeq"),  py::arg("theMaxCount"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Algorithm::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Message_Algorithm::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_ExecStatus , shared_ptr<Message_ExecStatus>  >>(m.attr("Message_ExecStatus"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Message_Status >()  , py::arg("status") )
    // custom constructors
    // methods
        .def("Set",
             (void (Message_ExecStatus::*)( Message_Status  ) ) static_cast<void (Message_ExecStatus::*)( Message_Status  ) >(&Message_ExecStatus::Set),
             R"#(Sets a status flag)#"  , py::arg("status"))
        .def("IsSet",
             (Standard_Boolean (Message_ExecStatus::*)( Message_Status  ) const) static_cast<Standard_Boolean (Message_ExecStatus::*)( Message_Status  ) const>(&Message_ExecStatus::IsSet),
             R"#(Check status for being set)#"  , py::arg("status"))
        .def("Clear",
             (void (Message_ExecStatus::*)( Message_Status  ) ) static_cast<void (Message_ExecStatus::*)( Message_Status  ) >(&Message_ExecStatus::Clear),
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
             (void (Message_ExecStatus::*)( const Message_ExecStatus &  ) ) static_cast<void (Message_ExecStatus::*)( const Message_ExecStatus &  ) >(&Message_ExecStatus::Add),
             R"#(Add statuses to me from theOther execution status)#"  , py::arg("theOther"))
        .def("And",
             (void (Message_ExecStatus::*)( const Message_ExecStatus &  ) ) static_cast<void (Message_ExecStatus::*)( const Message_ExecStatus &  ) >(&Message_ExecStatus::And),
             R"#(Leave only the statuses common with theOther)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("StatusIndex_s",
                    (Standard_Integer (*)( Message_Status  ) ) static_cast<Standard_Integer (*)( Message_Status  ) >(&Message_ExecStatus::StatusIndex),
                    R"#(Returns index of status in whole range [FirstStatus, LastStatus])#"  , py::arg("status"))
        .def_static("LocalStatusIndex_s",
                    (Standard_Integer (*)( Message_Status  ) ) static_cast<Standard_Integer (*)( Message_Status  ) >(&Message_ExecStatus::LocalStatusIndex),
                    R"#(Returns index of status inside type of status (Done or Warn or, etc) in range [1, StatusesPerType])#"  , py::arg("status"))
        .def_static("TypeOfStatus_s",
                    (Message_StatusType (*)( Message_Status  ) ) static_cast<Message_StatusType (*)( Message_Status  ) >(&Message_ExecStatus::TypeOfStatus),
                    R"#(Returns status type (DONE, WARN, ALARM, or FAIL))#"  , py::arg("status"))
        .def_static("StatusByIndex_s",
                    (Message_Status (*)( const Standard_Integer  ) ) static_cast<Message_Status (*)( const Standard_Integer  ) >(&Message_ExecStatus::StatusByIndex),
                    R"#(Returns status with index theIndex in whole range [FirstStatus, LastStatus])#"  , py::arg("theIndex"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Messenger ,opencascade::handle<Message_Messenger>  , Standard_Transient >>(m.attr("Message_Messenger"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Message_Printer> & >()  , py::arg("thePrinter") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Messenger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Messenger::*)() const>(&Message_Messenger::DynamicType),
             R"#(None)#" )
        .def("AddPrinter",
             (Standard_Boolean (Message_Messenger::*)( const opencascade::handle<Message_Printer> &  ) ) static_cast<Standard_Boolean (Message_Messenger::*)( const opencascade::handle<Message_Printer> &  ) >(&Message_Messenger::AddPrinter),
             R"#(Add a printer to the messenger. The printer will be added only if it is not yet in the list. Returns True if printer has been added.)#"  , py::arg("thePrinter"))
        .def("RemovePrinter",
             (Standard_Boolean (Message_Messenger::*)( const opencascade::handle<Message_Printer> &  ) ) static_cast<Standard_Boolean (Message_Messenger::*)( const opencascade::handle<Message_Printer> &  ) >(&Message_Messenger::RemovePrinter),
             R"#(Removes specified printer from the messenger. Returns True if this printer has been found in the list and removed.)#"  , py::arg("thePrinter"))
        .def("RemovePrinters",
             (Standard_Integer (Message_Messenger::*)( const opencascade::handle<Standard_Type> &  ) ) static_cast<Standard_Integer (Message_Messenger::*)( const opencascade::handle<Standard_Type> &  ) >(&Message_Messenger::RemovePrinters),
             R"#(Removes printers of specified type (including derived classes) from the messenger. Returns number of removed printers.)#"  , py::arg("theType"))
        .def("Printers",
             (const Message_SequenceOfPrinters & (Message_Messenger::*)() const) static_cast<const Message_SequenceOfPrinters & (Message_Messenger::*)() const>(&Message_Messenger::Printers),
             R"#(Returns current sequence of printers)#" )
        .def("ChangePrinters",
             (Message_SequenceOfPrinters & (Message_Messenger::*)() ) static_cast<Message_SequenceOfPrinters & (Message_Messenger::*)() >(&Message_Messenger::ChangePrinters),
             R"#(Returns sequence of printers The sequence can be modified.)#" )
        .def("Send",
             (void (Message_Messenger::*)( const Standard_CString ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_Messenger::*)( const Standard_CString ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_Messenger::Send),
             R"#(Dispatch a message to all the printers in the list. Three versions of string representations are accepted for convenience, by default all are converted to ExtendedString. The parameter putEndl specifies whether the new line should be started after this message (default) or not (may have sense in some conditions).)#"  , py::arg("theString"),  py::arg("theGravity")=static_cast<const Message_Gravity>(Message_Warning),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Send",
             (void (Message_Messenger::*)( const TCollection_AsciiString & ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_Messenger::*)( const TCollection_AsciiString & ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_Messenger::Send),
             R"#(See above)#"  , py::arg("theString"),  py::arg("theGravity")=static_cast<const Message_Gravity>(Message_Warning),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Send",
             (void (Message_Messenger::*)( const TCollection_ExtendedString & ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_Messenger::*)( const TCollection_ExtendedString & ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_Messenger::Send),
             R"#(See above)#"  , py::arg("theString"),  py::arg("theGravity")=static_cast<const Message_Gravity>(Message_Warning),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Messenger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Message_Messenger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Msg , shared_ptr<Message_Msg>  >>(m.attr("Message_Msg"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Message_Msg & >()  , py::arg("theMsg") )
        .def(py::init< const Standard_CString >()  , py::arg("theKey") )
        .def(py::init< const TCollection_ExtendedString & >()  , py::arg("theKey") )
    // custom constructors
    // methods
        .def("Set",
             (void (Message_Msg::*)( const Standard_CString  ) ) static_cast<void (Message_Msg::*)( const Standard_CString  ) >(&Message_Msg::Set),
             R"#(Set a message body text -- can be used as alternative to using messages from resource file)#"  , py::arg("theMsg"))
        .def("Set",
             (void (Message_Msg::*)( const TCollection_ExtendedString &  ) ) static_cast<void (Message_Msg::*)( const TCollection_ExtendedString &  ) >(&Message_Msg::Set),
             R"#(Set a message body text -- can be used as alternative to using messages from resource file)#"  , py::arg("theMsg"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const Standard_CString  ) ) static_cast<Message_Msg & (Message_Msg::*)( const Standard_CString  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const TCollection_AsciiString &  ) ) static_cast<Message_Msg & (Message_Msg::*)( const TCollection_AsciiString &  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const TCollection_ExtendedString &  ) ) static_cast<Message_Msg & (Message_Msg::*)( const TCollection_ExtendedString &  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> &  ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> &  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const Standard_Integer  ) ) static_cast<Message_Msg & (Message_Msg::*)( const Standard_Integer  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..d, %..i, %..o, %..u, %..x or %..X conversion)#"  , py::arg("theInt"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const Standard_Real  ) ) static_cast<Message_Msg & (Message_Msg::*)( const Standard_Real  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..f, %..e, %..E, %..g or %..G conversion)#"  , py::arg("theReal"))
        .def("Original",
             (const TCollection_ExtendedString & (Message_Msg::*)() const) static_cast<const TCollection_ExtendedString & (Message_Msg::*)() const>(&Message_Msg::Original),
             R"#(Returns the original message text)#" )
        .def("Value",
             (const TCollection_ExtendedString & (Message_Msg::*)() const) static_cast<const TCollection_ExtendedString & (Message_Msg::*)() const>(&Message_Msg::Value),
             R"#(Returns current state of the message text with parameters to the moment)#" )
        .def("IsEdited",
             (Standard_Boolean (Message_Msg::*)() const) static_cast<Standard_Boolean (Message_Msg::*)() const>(&Message_Msg::IsEdited),
             R"#(Tells if Value differs from Original)#" )
        .def("Get",
             (const TCollection_ExtendedString & (Message_Msg::*)() ) static_cast<const TCollection_ExtendedString & (Message_Msg::*)() >(&Message_Msg::Get),
             R"#(Return the resulting message string with all parameters filled. If some parameters were not yet filled by calls to methods Arg (or <<), these parameters are filled by the word UNKNOWN)#" )
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const TCollection_AsciiString &  ) ) static_cast<Message_Msg & (Message_Msg::*)( const TCollection_AsciiString &  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_Msg::Arg),
             R"#(Set a value for %..s conversion)#"  , py::arg("theString"))
        .def("Arg",
             (Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> &  ) ) static_cast<Message_Msg & (Message_Msg::*)( const opencascade::handle<TCollection_HExtendedString> &  ) >(&Message_Msg::Arg),
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

    static_cast<py::class_<Message_MsgFile , shared_ptr<Message_MsgFile>  >>(m.attr("Message_MsgFile"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Load_s",
                    (Standard_Boolean (*)( const Standard_CString ,  const Standard_CString  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  const Standard_CString  ) >(&Message_MsgFile::Load),
                    R"#(Load message file <theFileName> from directory <theDirName> or its sub-directory)#"  , py::arg("theDirName"),  py::arg("theFileName"))
        .def_static("LoadFile_s",
                    (Standard_Boolean (*)( const Standard_CString  ) ) static_cast<Standard_Boolean (*)( const Standard_CString  ) >(&Message_MsgFile::LoadFile),
                    R"#(Load the messages from the given file, additive to any previously loaded messages. Messages with same keywords, if already present, are replaced with the new ones.)#"  , py::arg("theFName"))
        .def_static("LoadFromEnv_s",
                    (Standard_Boolean (*)( const Standard_CString ,  const Standard_CString ,  const Standard_CString  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  const Standard_CString ,  const Standard_CString  ) >(&Message_MsgFile::LoadFromEnv),
                    R"#(Loads the messages from the file with name (without extension) given by environment variable. Extension of the file name is given separately. If its not defined, it is taken: - by default from environment CSF_LANGUAGE, - if not defined either, as "us".)#"  , py::arg("theEnvName"),  py::arg("theFileName"),  py::arg("theLangExt")=static_cast<const Standard_CString>(""))
        .def_static("LoadFromString_s",
                    (Standard_Boolean (*)( const Standard_CString ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_CString ,  const Standard_Integer  ) >(&Message_MsgFile::LoadFromString),
                    R"#(Loads the messages from the given text buffer.)#"  , py::arg("theContent"),  py::arg("theLength")=static_cast<const Standard_Integer>(- 1))
        .def_static("AddMsg_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_ExtendedString &  ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & ,  const TCollection_ExtendedString &  ) >(&Message_MsgFile::AddMsg),
                    R"#(Adds new message to the map. Parameter <key> gives the key of the message, <text> defines the message itself. If there already was defined the message identified by the same keyword, it is replaced with the new one.)#"  , py::arg("key"),  py::arg("text"))
        .def_static("HasMsg_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString &  ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString &  ) >(&Message_MsgFile::HasMsg),
                    R"#(Returns True if message with specified keyword is registered)#"  , py::arg("key"))
        .def_static("Msg_s",
                    (const TCollection_ExtendedString & (*)( const Standard_CString  ) ) static_cast<const TCollection_ExtendedString & (*)( const Standard_CString  ) >(&Message_MsgFile::Msg),
                    R"#(None)#"  , py::arg("key"))
        .def_static("Msg_s",
                    (const TCollection_ExtendedString & (*)( const TCollection_AsciiString &  ) ) static_cast<const TCollection_ExtendedString & (*)( const TCollection_AsciiString &  ) >(&Message_MsgFile::Msg),
                    R"#(Gives the text for the message identified by the keyword <key> If there are no messages with such keyword defined, the error message is returned. In that case reference to static string is returned, it can be chenged with next call(s) to Msg(). Note: The error message is constructed like 'Unknown message: <key>', and can itself be customized by defining message with key Message_Msg_BadKeyword.)#"  , py::arg("key"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_Printer ,opencascade::handle<Message_Printer> ,Py_Message_Printer , Standard_Transient >>(m.attr("Message_Printer"))
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
             (void (Message_Printer::*)( const Message_Gravity  ) ) static_cast<void (Message_Printer::*)( const Message_Gravity  ) >(&Message_Printer::SetTraceLevel),
             R"#(Set trace level used for filtering messages. By default, trace level is Message_Info, so that all messages are output)#"  , py::arg("theTraceLevel"))
        .def("Send",
             (void (Message_Printer::*)( const TCollection_ExtendedString & ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_Printer::*)( const TCollection_ExtendedString & ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_Printer::Send),
             R"#(Send a string message with specified trace level. The parameter theToPutEol specified whether end-of-line should be added to the end of the message. This method must be redefined in descentant.)#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("theToPutEol"))
        .def("Send",
             (void (Message_Printer::*)( const Standard_CString ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_Printer::*)( const Standard_CString ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_Printer::Send),
             R"#(Send a string message with specified trace level. The parameter theToPutEol specified whether end-of-line should be added to the end of the message. Default implementation calls first method Send().)#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("theToPutEol"))
        .def("Send",
             (void (Message_Printer::*)( const TCollection_AsciiString & ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_Printer::*)( const TCollection_AsciiString & ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_Printer::Send),
             R"#(Send a string message with specified trace level. The parameter theToPutEol specified whether end-of-line should be added to the end of the message. Default implementation calls first method Send().)#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("theToPutEol"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Printer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Message_Printer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_ProgressIndicator ,opencascade::handle<Message_ProgressIndicator> ,Py_Message_ProgressIndicator , Standard_Transient >>(m.attr("Message_ProgressIndicator"))
    // constructors
    // custom constructors
    // methods
        .def("Reset",
             (void (Message_ProgressIndicator::*)() ) static_cast<void (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::Reset),
             R"#(Drops all scopes and sets scale from 0 to 100, step 1 This scale has name "Step")#" )
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const Standard_CString  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString  ) >(&Message_ProgressIndicator::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_ProgressIndicator::SetName),
             R"#(Set (optional) name for scale)#"  , py::arg("name"))
        .def("SetRange",
             (void (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_Real  ) >(&Message_ProgressIndicator::SetRange),
             R"#(Set range for current scale)#"  , py::arg("min"),  py::arg("max"))
        .def("SetStep",
             (void (Message_ProgressIndicator::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real  ) >(&Message_ProgressIndicator::SetStep),
             R"#(Set step for current scale)#"  , py::arg("step"))
        .def("SetInfinite",
             (void (Message_ProgressIndicator::*)( const Standard_Boolean  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Boolean  ) >(&Message_ProgressIndicator::SetInfinite),
             R"#(Set or drop infinite mode for the current scale)#"  , py::arg("isInf")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetScale",
             (void (Message_ProgressIndicator::*)( const Standard_CString ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Message_ProgressIndicator::SetScale),
             R"#(None)#"  , py::arg("name"),  py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("isInf")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetScale",
             (void (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Message_ProgressIndicator::SetScale),
             R"#(Set all parameters for current scale)#"  , py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("isInf")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetValue",
             (void (Message_ProgressIndicator::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real  ) >(&Message_ProgressIndicator::SetValue),
             R"#(None)#"  , py::arg("val"))
        .def("GetValue",
             (Standard_Real (Message_ProgressIndicator::*)() const) static_cast<Standard_Real (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetValue),
             R"#(Set and get progress value at current scale If the value to be set is more than currently set one, or out of range for the current scale, it is limited by that range)#" )
        .def("Increment",
             (void (Message_ProgressIndicator::*)() ) static_cast<void (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::Increment),
             R"#(None)#" )
        .def("Increment",
             (void (Message_ProgressIndicator::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real  ) >(&Message_ProgressIndicator::Increment),
             R"#(Increment the progress value by the default of specified step)#"  , py::arg("step"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name")=static_cast<const Standard_CString>(0))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_CString  ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("span"),  py::arg("name")=static_cast<const Standard_CString>(0))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_ProgressIndicator::NewScope),
             R"#(Creates new scope on a part of a current scale from current position with span either equal to default step, or specified The scale for the new scope will have specified name and ranged from 0 to 100 with step 1 Returns False if something is wrong in arguments or in current position of progress indicator; scope is opened anyway)#"  , py::arg("span"),  py::arg("name"))
        .def("EndScope",
             (Standard_Boolean (Message_ProgressIndicator::*)() ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::EndScope),
             R"#(Close the current scope and thus return to previous scale Updates position to be at the end of the closing scope Returns False if no scope is opened)#" )
        .def("NextScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) >(&Message_ProgressIndicator::NextScope),
             R"#(None)#"  , py::arg("name")=static_cast<const Standard_CString>(0))
        .def("NextScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_CString  ) >(&Message_ProgressIndicator::NextScope),
             R"#(Optimized version of { return EndScope() && NewScope(); })#"  , py::arg("span"),  py::arg("name")=static_cast<const Standard_CString>(0))
        .def("UserBreak",
             (Standard_Boolean (Message_ProgressIndicator::*)() ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::UserBreak),
             R"#(Should return True if user has send a break signal. Default implementation returns False.)#" )
        .def("Show",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Boolean  ) >(&Message_ProgressIndicator::Show),
             R"#(Update presentation of the progress indicator Called when progress position is changed Flag force is intended for forcing update in case if it is optimized; all internal calls from ProgressIndicator are done with this flag equal to False)#"  , py::arg("force")=static_cast<const Standard_Boolean>(Standard_True))
        .def("GetPosition",
             (Standard_Real (Message_ProgressIndicator::*)() const) static_cast<Standard_Real (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetPosition),
             R"#(Returns total progress position on the basic scale ranged from 0. to 1.)#" )
        .def("GetNbScopes",
             (Standard_Integer (Message_ProgressIndicator::*)() const) static_cast<Standard_Integer (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetNbScopes),
             R"#(Returns current number of opened scopes This number is always >=1 as top-level scale is always present)#" )
        .def("GetScope",
             (const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer  ) const) static_cast<const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer  ) const>(&Message_ProgressIndicator::GetScope),
             R"#(Returns data for scale of index-th scope The first scope is current one, the last is the top-level one)#"  , py::arg("index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_ProgressIndicator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::DynamicType),
             R"#(None)#" )
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const Standard_CString  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString  ) >(&Message_ProgressIndicator::SetName),
             R"#(None)#"  , py::arg("name"))
        .def("SetName",
             (void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_ProgressIndicator::SetName),
             R"#(Set (optional) name for scale)#"  , py::arg("name"))
        .def("SetRange",
             (void (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_Real  ) >(&Message_ProgressIndicator::SetRange),
             R"#(Set range for current scale)#"  , py::arg("min"),  py::arg("max"))
        .def("SetStep",
             (void (Message_ProgressIndicator::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real  ) >(&Message_ProgressIndicator::SetStep),
             R"#(Set step for current scale)#"  , py::arg("step"))
        .def("SetInfinite",
             (void (Message_ProgressIndicator::*)( const Standard_Boolean  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Boolean  ) >(&Message_ProgressIndicator::SetInfinite),
             R"#(Set or drop infinite mode for the current scale)#"  , py::arg("isInf"))
        .def("SetScale",
             (void (Message_ProgressIndicator::*)( const Standard_CString ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_CString ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Message_ProgressIndicator::SetScale),
             R"#(None)#"  , py::arg("name"),  py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("isInf"))
        .def("Increment",
             (void (Message_ProgressIndicator::*)() ) static_cast<void (Message_ProgressIndicator::*)() >(&Message_ProgressIndicator::Increment),
             R"#(None)#" )
        .def("Increment",
             (void (Message_ProgressIndicator::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressIndicator::*)( const Standard_Real  ) >(&Message_ProgressIndicator::Increment),
             R"#(Increment the progress value by the default of specified step)#"  , py::arg("step"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("name"))
        .def("NewScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_CString  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_Real ,  const Standard_CString  ) >(&Message_ProgressIndicator::NewScope),
             R"#(None)#"  , py::arg("span"),  py::arg("name"))
        .def("NextScope",
             (Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) ) static_cast<Standard_Boolean (Message_ProgressIndicator::*)( const Standard_CString  ) >(&Message_ProgressIndicator::NextScope),
             R"#(None)#"  , py::arg("name"))
        .def("GetPosition",
             (Standard_Real (Message_ProgressIndicator::*)() const) static_cast<Standard_Real (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetPosition),
             R"#(Returns total progress position on the basic scale ranged from 0. to 1.)#" )
        .def("GetNbScopes",
             (Standard_Integer (Message_ProgressIndicator::*)() const) static_cast<Standard_Integer (Message_ProgressIndicator::*)() const>(&Message_ProgressIndicator::GetNbScopes),
             R"#(Returns current number of opened scopes This number is always >=1 as top-level scale is always present)#" )
        .def("GetScope",
             (const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer  ) const) static_cast<const Message_ProgressScale & (Message_ProgressIndicator::*)( const Standard_Integer  ) const>(&Message_ProgressIndicator::GetScope),
             R"#(Returns data for scale of index-th scope The first scope is current one, the last is the top-level one)#"  , py::arg("index"))
    // methods using call by reference i.s.o. return
        .def("GetScale",
             []( Message_ProgressIndicator &self   ){ Standard_Real  min; Standard_Real  max; Standard_Real  step; Standard_Boolean  isInf; self.GetScale(min,max,step,isInf); return std::make_tuple(min,max,step,isInf); },
             R"#(Returns all parameters for current scale)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_ProgressIndicator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Message_ProgressIndicator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_ProgressScale , shared_ptr<Message_ProgressScale>  >>(m.attr("Message_ProgressScale"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetName",
             (void (Message_ProgressScale::*)( const Standard_CString  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_CString  ) >(&Message_ProgressScale::SetName),
             R"#(None)#"  , py::arg("theName"))
        .def("SetName",
             (void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_ProgressScale::SetName),
             R"#(Sets scale name)#"  , py::arg("theName"))
        .def("GetName",
             (opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetName),
             R"#(Gets scale name Name may be Null handle if not set)#" )
        .def("SetMin",
             (void (Message_ProgressScale::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real  ) >(&Message_ProgressScale::SetMin),
             R"#(Sets minimum value of scale)#"  , py::arg("theMin"))
        .def("GetMin",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMin),
             R"#(Gets minimum value of scale)#" )
        .def("SetMax",
             (void (Message_ProgressScale::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real  ) >(&Message_ProgressScale::SetMax),
             R"#(Sets minimum value of scale)#"  , py::arg("theMax"))
        .def("GetMax",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMax),
             R"#(Gets minimum value of scale)#" )
        .def("SetRange",
             (void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) >(&Message_ProgressScale::SetRange),
             R"#(Set both min and max)#"  , py::arg("min"),  py::arg("max"))
        .def("SetStep",
             (void (Message_ProgressScale::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real  ) >(&Message_ProgressScale::SetStep),
             R"#(Sets default step)#"  , py::arg("theStep"))
        .def("GetStep",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetStep),
             R"#(Gets default step)#" )
        .def("SetInfinite",
             (void (Message_ProgressScale::*)( const Standard_Boolean  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Boolean  ) >(&Message_ProgressScale::SetInfinite),
             R"#(Sets flag for infinite scale)#"  , py::arg("theInfinite")=static_cast<const Standard_Boolean>(Standard_True))
        .def("GetInfinite",
             (Standard_Boolean (Message_ProgressScale::*)() const) static_cast<Standard_Boolean (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetInfinite),
             R"#(Gets flag for infinite scale)#" )
        .def("SetScale",
             (void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Message_ProgressScale::SetScale),
             R"#(Set all scale parameters)#"  , py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("theInfinite")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetSpan",
             (void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) >(&Message_ProgressScale::SetSpan),
             R"#(Defines span occupied by the scale on the basis scale)#"  , py::arg("first"),  py::arg("last"))
        .def("GetFirst",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetFirst),
             R"#(None)#" )
        .def("GetLast",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetLast),
             R"#(Return information on span occupied by the scale on the base scale)#" )
        .def("LocalToBase",
             (Standard_Real (Message_ProgressScale::*)( const Standard_Real  ) const) static_cast<Standard_Real (Message_ProgressScale::*)( const Standard_Real  ) const>(&Message_ProgressScale::LocalToBase),
             R"#(None)#"  , py::arg("val"))
        .def("BaseToLocal",
             (Standard_Real (Message_ProgressScale::*)( const Standard_Real  ) const) static_cast<Standard_Real (Message_ProgressScale::*)( const Standard_Real  ) const>(&Message_ProgressScale::BaseToLocal),
             R"#(Convert value from this scale to base one and back)#"  , py::arg("val"))
        .def("SetName",
             (void (Message_ProgressScale::*)( const Standard_CString  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_CString  ) >(&Message_ProgressScale::SetName),
             R"#(None)#"  , py::arg("theName"))
        .def("SetName",
             (void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> &  ) ) static_cast<void (Message_ProgressScale::*)( const opencascade::handle<TCollection_HAsciiString> &  ) >(&Message_ProgressScale::SetName),
             R"#(Sets scale name)#"  , py::arg("theName"))
        .def("GetName",
             (opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const) static_cast<opencascade::handle<TCollection_HAsciiString> (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetName),
             R"#(Gets scale name Name may be Null handle if not set)#" )
        .def("SetMin",
             (void (Message_ProgressScale::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real  ) >(&Message_ProgressScale::SetMin),
             R"#(Sets minimum value of scale)#"  , py::arg("theMin"))
        .def("GetMin",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMin),
             R"#(Gets minimum value of scale)#" )
        .def("SetMax",
             (void (Message_ProgressScale::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real  ) >(&Message_ProgressScale::SetMax),
             R"#(Sets minimum value of scale)#"  , py::arg("theMax"))
        .def("GetMax",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetMax),
             R"#(Gets minimum value of scale)#" )
        .def("SetRange",
             (void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) >(&Message_ProgressScale::SetRange),
             R"#(Set both min and max)#"  , py::arg("theMin"),  py::arg("theMax"))
        .def("SetStep",
             (void (Message_ProgressScale::*)( const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real  ) >(&Message_ProgressScale::SetStep),
             R"#(Sets default step)#"  , py::arg("theStep"))
        .def("GetStep",
             (Standard_Real (Message_ProgressScale::*)() const) static_cast<Standard_Real (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetStep),
             R"#(Gets default step)#" )
        .def("SetInfinite",
             (void (Message_ProgressScale::*)( const Standard_Boolean  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Boolean  ) >(&Message_ProgressScale::SetInfinite),
             R"#(Sets flag for infinite scale)#"  , py::arg("theInfinite"))
        .def("GetInfinite",
             (Standard_Boolean (Message_ProgressScale::*)() const) static_cast<Standard_Boolean (Message_ProgressScale::*)() const>(&Message_ProgressScale::GetInfinite),
             R"#(Gets flag for infinite scale)#" )
        .def("SetScale",
             (void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&Message_ProgressScale::SetScale),
             R"#(Set all scale parameters)#"  , py::arg("theMin"),  py::arg("theMax"),  py::arg("theStep"),  py::arg("theInfinite"))
        .def("SetSpan",
             (void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (Message_ProgressScale::*)( const Standard_Real ,  const Standard_Real  ) >(&Message_ProgressScale::SetSpan),
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


    static_cast<py::class_<Message_ProgressSentry , shared_ptr<Message_ProgressSentry>  >>(m.attr("Message_ProgressSentry"))
    // constructors
        .def(py::init< const opencascade::handle<Message_ProgressIndicator> &,const Standard_CString,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Real >()  , py::arg("PI"),  py::arg("name"),  py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("isInf")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("newScopeSpan")=static_cast<const Standard_Real>(0.0) )
        .def(py::init< const opencascade::handle<Message_ProgressIndicator> &,const opencascade::handle<TCollection_HAsciiString> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Real >()  , py::arg("PI"),  py::arg("name"),  py::arg("min"),  py::arg("max"),  py::arg("step"),  py::arg("isInf")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("newScopeSpan")=static_cast<const Standard_Real>(0.0) )
    // custom constructors
    // methods
        .def("Relieve",
             (void (Message_ProgressSentry::*)() ) static_cast<void (Message_ProgressSentry::*)() >(&Message_ProgressSentry::Relieve),
             R"#(Moves progress indicator to the end of the current scale and relieves sentry from its duty. Methods other than Show() will do nothing after this one is called.)#" )
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_CString  ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_CString  ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("name")=static_cast<const Standard_CString>(0))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real ,  const Standard_CString  ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real ,  const Standard_CString  ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("span"),  py::arg("name")=static_cast<const Standard_CString>(0))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real ,  const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real ,  const opencascade::handle<TCollection_HAsciiString> &  ) const>(&Message_ProgressSentry::Next),
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
             (void (Message_ProgressSentry::*)( const Standard_CString  ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_CString  ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("name"))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real ,  const Standard_CString  ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real ,  const Standard_CString  ) const>(&Message_ProgressSentry::Next),
             R"#(None)#"  , py::arg("span"),  py::arg("name"))
        .def("Next",
             (void (Message_ProgressSentry::*)( const Standard_Real ,  const opencascade::handle<TCollection_HAsciiString> &  ) const) static_cast<void (Message_ProgressSentry::*)( const Standard_Real ,  const opencascade::handle<TCollection_HAsciiString> &  ) const>(&Message_ProgressSentry::Next),
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


    static_cast<py::class_<Message_Report ,opencascade::handle<Message_Report>  , Standard_Transient >>(m.attr("Message_Report"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddAlert",
             (void (Message_Report::*)( Message_Gravity ,  const opencascade::handle<Message_Alert> &  ) ) static_cast<void (Message_Report::*)( Message_Gravity ,  const opencascade::handle<Message_Alert> &  ) >(&Message_Report::AddAlert),
             R"#(Add alert with specified gravity. This method is thread-safe, i.e. alerts can be added from parallel threads safely.)#"  , py::arg("theGravity"),  py::arg("theAlert"))
        .def("GetAlerts",
             (const Message_ListOfAlert & (Message_Report::*)( Message_Gravity  ) const) static_cast<const Message_ListOfAlert & (Message_Report::*)( Message_Gravity  ) const>(&Message_Report::GetAlerts),
             R"#(Returns list of collected alerts with specified gravity)#"  , py::arg("theGravity"))
        .def("HasAlert",
             (Standard_Boolean (Message_Report::*)( const opencascade::handle<Standard_Type> &  ) ) static_cast<Standard_Boolean (Message_Report::*)( const opencascade::handle<Standard_Type> &  ) >(&Message_Report::HasAlert),
             R"#(Returns true if specific type of alert is recorded)#"  , py::arg("theType"))
        .def("HasAlert",
             (Standard_Boolean (Message_Report::*)( const opencascade::handle<Standard_Type> & ,  Message_Gravity  ) ) static_cast<Standard_Boolean (Message_Report::*)( const opencascade::handle<Standard_Type> & ,  Message_Gravity  ) >(&Message_Report::HasAlert),
             R"#(Returns true if specific type of alert is recorded with specified gravity)#"  , py::arg("theType"),  py::arg("theGravity"))
        .def("Clear",
             (void (Message_Report::*)() ) static_cast<void (Message_Report::*)() >(&Message_Report::Clear),
             R"#(Clears all collected alerts)#" )
        .def("Clear",
             (void (Message_Report::*)( Message_Gravity  ) ) static_cast<void (Message_Report::*)( Message_Gravity  ) >(&Message_Report::Clear),
             R"#(Clears collected alerts with specified gravity)#"  , py::arg("theGravity"))
        .def("Clear",
             (void (Message_Report::*)( const opencascade::handle<Standard_Type> &  ) ) static_cast<void (Message_Report::*)( const opencascade::handle<Standard_Type> &  ) >(&Message_Report::Clear),
             R"#(Clears collected alerts with specified type)#"  , py::arg("theType"))
        .def("Dump",
             (void (Message_Report::*)( std::ostream &  ) ) static_cast<void (Message_Report::*)( std::ostream &  ) >(&Message_Report::Dump),
             R"#(Dumps all collected alerts to stream)#"  , py::arg("theOS"))
        .def("Dump",
             (void (Message_Report::*)( std::ostream & ,  Message_Gravity  ) ) static_cast<void (Message_Report::*)( std::ostream & ,  Message_Gravity  ) >(&Message_Report::Dump),
             R"#(Dumps collected alerts with specified gravity to stream)#"  , py::arg("theOS"),  py::arg("theGravity"))
        .def("SendMessages",
             (void (Message_Report::*)( const opencascade::handle<Message_Messenger> &  ) ) static_cast<void (Message_Report::*)( const opencascade::handle<Message_Messenger> &  ) >(&Message_Report::SendMessages),
             R"#(Sends all collected alerts to messenger)#"  , py::arg("theMessenger"))
        .def("SendMessages",
             (void (Message_Report::*)( const opencascade::handle<Message_Messenger> & ,  Message_Gravity  ) ) static_cast<void (Message_Report::*)( const opencascade::handle<Message_Messenger> & ,  Message_Gravity  ) >(&Message_Report::SendMessages),
             R"#(Dumps collected alerts with specified gravity to messenger)#"  , py::arg("theMessenger"),  py::arg("theGravity"))
        .def("Merge",
             (void (Message_Report::*)( const opencascade::handle<Message_Report> &  ) ) static_cast<void (Message_Report::*)( const opencascade::handle<Message_Report> &  ) >(&Message_Report::Merge),
             R"#(Merges data from theOther report into this)#"  , py::arg("theOther"))
        .def("Merge",
             (void (Message_Report::*)( const opencascade::handle<Message_Report> & ,  Message_Gravity  ) ) static_cast<void (Message_Report::*)( const opencascade::handle<Message_Report> & ,  Message_Gravity  ) >(&Message_Report::Merge),
             R"#(Merges alerts with specified gravity from theOther report into this)#"  , py::arg("theOther"),  py::arg("theGravity"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_Report::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_Report::*)() const>(&Message_Report::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_Report::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Message_Report::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Message_PrinterOStream ,opencascade::handle<Message_PrinterOStream>  , Message_Printer >>(m.attr("Message_PrinterOStream"))
    // constructors
        .def(py::init< const Message_Gravity >()  , py::arg("theTraceLevel")=static_cast<const Message_Gravity>(Message_Info) )
        .def(py::init< const Standard_CString,const Standard_Boolean,const Message_Gravity >()  , py::arg("theFileName"),  py::arg("theDoAppend"),  py::arg("theTraceLevel")=static_cast<const Message_Gravity>(Message_Info) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Message_PrinterOStream::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Message_PrinterOStream::*)() const>(&Message_PrinterOStream::DynamicType),
             R"#(None)#" )
        .def("Close",
             (void (Message_PrinterOStream::*)() ) static_cast<void (Message_PrinterOStream::*)() >(&Message_PrinterOStream::Close),
             R"#(Flushes the output stream and destroys it if it has been specified externally with option doFree (or if it is internal file stream))#" )
        .def("GetUseUtf8",
             (Standard_Boolean (Message_PrinterOStream::*)() const) static_cast<Standard_Boolean (Message_PrinterOStream::*)() const>(&Message_PrinterOStream::GetUseUtf8),
             R"#(Returns option to convert non-Ascii symbols to UTF8 encoding)#" )
        .def("SetUseUtf8",
             (void (Message_PrinterOStream::*)( const Standard_Boolean  ) ) static_cast<void (Message_PrinterOStream::*)( const Standard_Boolean  ) >(&Message_PrinterOStream::SetUseUtf8),
             R"#(Sets option to convert non-Ascii symbols to UTF8 encoding)#"  , py::arg("useUtf8"))
        .def("GetStream",
             (Standard_OStream & (Message_PrinterOStream::*)() const) static_cast<Standard_OStream & (Message_PrinterOStream::*)() const>(&Message_PrinterOStream::GetStream),
             R"#(Returns reference to the output stream)#" )
        .def("Send",
             (void (Message_PrinterOStream::*)( const Standard_CString ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_PrinterOStream::*)( const Standard_CString ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_PrinterOStream::Send),
             R"#(Puts a message to the current stream if its gravity is equal or greater to the trace level set by SetTraceLevel())#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Send",
             (void (Message_PrinterOStream::*)( const TCollection_AsciiString & ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_PrinterOStream::*)( const TCollection_AsciiString & ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_PrinterOStream::Send),
             R"#(Puts a message to the current stream if its gravity is equal or greater to the trace level set by SetTraceLevel())#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Send",
             (void (Message_PrinterOStream::*)( const TCollection_ExtendedString & ,  const Message_Gravity ,  const Standard_Boolean  ) const) static_cast<void (Message_PrinterOStream::*)( const TCollection_ExtendedString & ,  const Message_Gravity ,  const Standard_Boolean  ) const>(&Message_PrinterOStream::Send),
             R"#(Puts a message to the current stream if its gravity is equal or greater to the trace level set by SetTraceLevel() Non-Ascii symbols are converted to UTF-8 if UseUtf8 option is set, else replaced by symbols '?')#"  , py::arg("theString"),  py::arg("theGravity"),  py::arg("putEndl")=static_cast<const Standard_Boolean>(Standard_True))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Message_PrinterOStream::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Message_PrinterOStream::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/Message_Printer.hxx
// ./opencascade/Message_Msg.hxx
// ./opencascade/Message_ProgressSentry.hxx
// ./opencascade/Message_ExecStatus.hxx
// ./opencascade/Message_Alert.hxx
// ./opencascade/Message_ListIteratorOfListOfMsg.hxx
// ./opencascade/Message_PrinterOStream.hxx
// ./opencascade/Message_ListOfAlert.hxx
// ./opencascade/Message_MsgFile.hxx
// ./opencascade/Message_Gravity.hxx
// ./opencascade/Message_ProgressIndicator.hxx
// ./opencascade/Message_Status.hxx
// ./opencascade/Message_Messenger.hxx
    m.def("Message_EndLine", 
          (const opencascade::handle<Message_Messenger> & (*)( const opencascade::handle<Message_Messenger> &  ))  static_cast<const opencascade::handle<Message_Messenger> & (*)( const opencascade::handle<Message_Messenger> &  )>(&Message_EndLine),
          R"#(None)#"  , py::arg("theMessenger"));
// ./opencascade/Message.hxx
// ./opencascade/Message_SequenceOfPrinters.hxx
// ./opencascade/Message_HArrayOfMsg.hxx
// ./opencascade/Message_ProgressScale.hxx
// ./opencascade/Message_StatusType.hxx
// ./opencascade/Message_SequenceOfProgressScale.hxx
// ./opencascade/Message_Report.hxx
// ./opencascade/Message_Algorithm.hxx
// ./opencascade/Message_ListOfMsg.hxx

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<Message_Alert> >(m,"Message_ListOfAlert");  
    register_template_NCollection_Sequence<opencascade::handle<Message_Printer> >(m,"Message_SequenceOfPrinters");  
    register_template_NCollection_Array1<NCollection_Handle<Message_Msg> >(m,"Message_ArrayOfMsg");  
    register_template_NCollection_Sequence<Message_ProgressScale>(m,"Message_SequenceOfProgressScale");  
    register_template_NCollection_List<Message_Msg>(m,"Message_ListOfMsg");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
