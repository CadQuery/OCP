
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_Message_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Message", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Message_Gravity>(m, "Message_Gravity",R"#(Defines gravity level of messages - Trace: low-level details on algorithm execution (usually for debug purposes) - Info: informative message - Warning: warning message - Alarm: non-critical error - Fail: fatal error)#")
        .value("Message_Trace",Message_Gravity::Message_Trace)
        .value("Message_Info",Message_Gravity::Message_Info)
        .value("Message_Warning",Message_Gravity::Message_Warning)
        .value("Message_Alarm",Message_Gravity::Message_Alarm)
        .value("Message_Fail",Message_Gravity::Message_Fail).export_values();
    py::enum_<Message_Status>(m, "Message_Status",R"#(Enumeration covering all execution statuses supported by the class Message_ExecStatus: 32 statuses per each of 4 types (DONE, WARN, ALARM, FAIL))#")
        .value("Message_None",Message_Status::Message_None)
        .value("Message_Done1",Message_Status::Message_Done1)
        .value("Message_Done2",Message_Status::Message_Done2)
        .value("Message_Done3",Message_Status::Message_Done3)
        .value("Message_Done4",Message_Status::Message_Done4)
        .value("Message_Done5",Message_Status::Message_Done5)
        .value("Message_Done6",Message_Status::Message_Done6)
        .value("Message_Done7",Message_Status::Message_Done7)
        .value("Message_Done8",Message_Status::Message_Done8)
        .value("Message_Done9",Message_Status::Message_Done9)
        .value("Message_Done10",Message_Status::Message_Done10)
        .value("Message_Done11",Message_Status::Message_Done11)
        .value("Message_Done12",Message_Status::Message_Done12)
        .value("Message_Done13",Message_Status::Message_Done13)
        .value("Message_Done14",Message_Status::Message_Done14)
        .value("Message_Done15",Message_Status::Message_Done15)
        .value("Message_Done16",Message_Status::Message_Done16)
        .value("Message_Done17",Message_Status::Message_Done17)
        .value("Message_Done18",Message_Status::Message_Done18)
        .value("Message_Done19",Message_Status::Message_Done19)
        .value("Message_Done20",Message_Status::Message_Done20)
        .value("Message_Done21",Message_Status::Message_Done21)
        .value("Message_Done22",Message_Status::Message_Done22)
        .value("Message_Done23",Message_Status::Message_Done23)
        .value("Message_Done24",Message_Status::Message_Done24)
        .value("Message_Done25",Message_Status::Message_Done25)
        .value("Message_Done26",Message_Status::Message_Done26)
        .value("Message_Done27",Message_Status::Message_Done27)
        .value("Message_Done28",Message_Status::Message_Done28)
        .value("Message_Done29",Message_Status::Message_Done29)
        .value("Message_Done30",Message_Status::Message_Done30)
        .value("Message_Done31",Message_Status::Message_Done31)
        .value("Message_Done32",Message_Status::Message_Done32)
        .value("Message_Warn1",Message_Status::Message_Warn1)
        .value("Message_Warn2",Message_Status::Message_Warn2)
        .value("Message_Warn3",Message_Status::Message_Warn3)
        .value("Message_Warn4",Message_Status::Message_Warn4)
        .value("Message_Warn5",Message_Status::Message_Warn5)
        .value("Message_Warn6",Message_Status::Message_Warn6)
        .value("Message_Warn7",Message_Status::Message_Warn7)
        .value("Message_Warn8",Message_Status::Message_Warn8)
        .value("Message_Warn9",Message_Status::Message_Warn9)
        .value("Message_Warn10",Message_Status::Message_Warn10)
        .value("Message_Warn11",Message_Status::Message_Warn11)
        .value("Message_Warn12",Message_Status::Message_Warn12)
        .value("Message_Warn13",Message_Status::Message_Warn13)
        .value("Message_Warn14",Message_Status::Message_Warn14)
        .value("Message_Warn15",Message_Status::Message_Warn15)
        .value("Message_Warn16",Message_Status::Message_Warn16)
        .value("Message_Warn17",Message_Status::Message_Warn17)
        .value("Message_Warn18",Message_Status::Message_Warn18)
        .value("Message_Warn19",Message_Status::Message_Warn19)
        .value("Message_Warn20",Message_Status::Message_Warn20)
        .value("Message_Warn21",Message_Status::Message_Warn21)
        .value("Message_Warn22",Message_Status::Message_Warn22)
        .value("Message_Warn23",Message_Status::Message_Warn23)
        .value("Message_Warn24",Message_Status::Message_Warn24)
        .value("Message_Warn25",Message_Status::Message_Warn25)
        .value("Message_Warn26",Message_Status::Message_Warn26)
        .value("Message_Warn27",Message_Status::Message_Warn27)
        .value("Message_Warn28",Message_Status::Message_Warn28)
        .value("Message_Warn29",Message_Status::Message_Warn29)
        .value("Message_Warn30",Message_Status::Message_Warn30)
        .value("Message_Warn31",Message_Status::Message_Warn31)
        .value("Message_Warn32",Message_Status::Message_Warn32)
        .value("Message_Alarm1",Message_Status::Message_Alarm1)
        .value("Message_Alarm2",Message_Status::Message_Alarm2)
        .value("Message_Alarm3",Message_Status::Message_Alarm3)
        .value("Message_Alarm4",Message_Status::Message_Alarm4)
        .value("Message_Alarm5",Message_Status::Message_Alarm5)
        .value("Message_Alarm6",Message_Status::Message_Alarm6)
        .value("Message_Alarm7",Message_Status::Message_Alarm7)
        .value("Message_Alarm8",Message_Status::Message_Alarm8)
        .value("Message_Alarm9",Message_Status::Message_Alarm9)
        .value("Message_Alarm10",Message_Status::Message_Alarm10)
        .value("Message_Alarm11",Message_Status::Message_Alarm11)
        .value("Message_Alarm12",Message_Status::Message_Alarm12)
        .value("Message_Alarm13",Message_Status::Message_Alarm13)
        .value("Message_Alarm14",Message_Status::Message_Alarm14)
        .value("Message_Alarm15",Message_Status::Message_Alarm15)
        .value("Message_Alarm16",Message_Status::Message_Alarm16)
        .value("Message_Alarm17",Message_Status::Message_Alarm17)
        .value("Message_Alarm18",Message_Status::Message_Alarm18)
        .value("Message_Alarm19",Message_Status::Message_Alarm19)
        .value("Message_Alarm20",Message_Status::Message_Alarm20)
        .value("Message_Alarm21",Message_Status::Message_Alarm21)
        .value("Message_Alarm22",Message_Status::Message_Alarm22)
        .value("Message_Alarm23",Message_Status::Message_Alarm23)
        .value("Message_Alarm24",Message_Status::Message_Alarm24)
        .value("Message_Alarm25",Message_Status::Message_Alarm25)
        .value("Message_Alarm26",Message_Status::Message_Alarm26)
        .value("Message_Alarm27",Message_Status::Message_Alarm27)
        .value("Message_Alarm28",Message_Status::Message_Alarm28)
        .value("Message_Alarm29",Message_Status::Message_Alarm29)
        .value("Message_Alarm30",Message_Status::Message_Alarm30)
        .value("Message_Alarm31",Message_Status::Message_Alarm31)
        .value("Message_Alarm32",Message_Status::Message_Alarm32)
        .value("Message_Fail1",Message_Status::Message_Fail1)
        .value("Message_Fail2",Message_Status::Message_Fail2)
        .value("Message_Fail3",Message_Status::Message_Fail3)
        .value("Message_Fail4",Message_Status::Message_Fail4)
        .value("Message_Fail5",Message_Status::Message_Fail5)
        .value("Message_Fail6",Message_Status::Message_Fail6)
        .value("Message_Fail7",Message_Status::Message_Fail7)
        .value("Message_Fail8",Message_Status::Message_Fail8)
        .value("Message_Fail9",Message_Status::Message_Fail9)
        .value("Message_Fail10",Message_Status::Message_Fail10)
        .value("Message_Fail11",Message_Status::Message_Fail11)
        .value("Message_Fail12",Message_Status::Message_Fail12)
        .value("Message_Fail13",Message_Status::Message_Fail13)
        .value("Message_Fail14",Message_Status::Message_Fail14)
        .value("Message_Fail15",Message_Status::Message_Fail15)
        .value("Message_Fail16",Message_Status::Message_Fail16)
        .value("Message_Fail17",Message_Status::Message_Fail17)
        .value("Message_Fail18",Message_Status::Message_Fail18)
        .value("Message_Fail19",Message_Status::Message_Fail19)
        .value("Message_Fail20",Message_Status::Message_Fail20)
        .value("Message_Fail21",Message_Status::Message_Fail21)
        .value("Message_Fail22",Message_Status::Message_Fail22)
        .value("Message_Fail23",Message_Status::Message_Fail23)
        .value("Message_Fail24",Message_Status::Message_Fail24)
        .value("Message_Fail25",Message_Status::Message_Fail25)
        .value("Message_Fail26",Message_Status::Message_Fail26)
        .value("Message_Fail27",Message_Status::Message_Fail27)
        .value("Message_Fail28",Message_Status::Message_Fail28)
        .value("Message_Fail29",Message_Status::Message_Fail29)
        .value("Message_Fail30",Message_Status::Message_Fail30)
        .value("Message_Fail31",Message_Status::Message_Fail31)
        .value("Message_Fail32",Message_Status::Message_Fail32).export_values();
    py::enum_<Message_StatusType>(m, "Message_StatusType",R"#(Definition of types of execution status supported by the class Message_ExecStatus)#")
        .value("Message_DONE",Message_StatusType::Message_DONE)
        .value("Message_WARN",Message_StatusType::Message_WARN)
        .value("Message_ALARM",Message_StatusType::Message_ALARM)
        .value("Message_FAIL",Message_StatusType::Message_FAIL).export_values();

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

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<Message_Alert> >(m,"Message_ListOfAlert");  
    preregister_template_NCollection_Sequence<opencascade::handle<Message_Printer> >(m,"Message_SequenceOfPrinters");  
    preregister_template_NCollection_Array1<NCollection_Handle<Message_Msg> >(m,"Message_ArrayOfMsg");  
    preregister_template_NCollection_Sequence<Message_ProgressScale>(m,"Message_SequenceOfProgressScale");  
    preregister_template_NCollection_List<Message_Msg>(m,"Message_ListOfMsg");  

// classes forward declarations only
    py::class_<Message , shared_ptr<Message>  >(m,"Message",R"#(Defines - tools to work with messages - basic tools intended for progress indication)#");
    py::class_<Message_Alert ,opencascade::handle<Message_Alert>  , Standard_Transient >(m,"Message_Alert",R"#(Base class of the hierarchy of classes describing various situations occurring during execution of some algorithm or procedure.Base class of the hierarchy of classes describing various situations occurring during execution of some algorithm or procedure.Base class of the hierarchy of classes describing various situations occurring during execution of some algorithm or procedure.)#");
    py::class_<Message_Algorithm ,opencascade::handle<Message_Algorithm>  , Standard_Transient >(m,"Message_Algorithm",R"#(Class Message_Algorithm is intended to be the base class for classes implementing algorithms or any operations that need to provide extended information on its execution to the caller / user.Class Message_Algorithm is intended to be the base class for classes implementing algorithms or any operations that need to provide extended information on its execution to the caller / user.Class Message_Algorithm is intended to be the base class for classes implementing algorithms or any operations that need to provide extended information on its execution to the caller / user.)#");
    py::class_<Message_ExecStatus , shared_ptr<Message_ExecStatus>  >(m,"Message_ExecStatus",R"#(Tiny class for extended handling of error / execution status of algorithm in universal way.)#");
    py::class_<Message_Messenger ,opencascade::handle<Message_Messenger>  , Standard_Transient >(m,"Message_Messenger",R"#(Messenger is API class providing general-purpose interface for libraries that may issue text messages without knowledge of how these messages will be further processed.Messenger is API class providing general-purpose interface for libraries that may issue text messages without knowledge of how these messages will be further processed.Messenger is API class providing general-purpose interface for libraries that may issue text messages without knowledge of how these messages will be further processed.)#");
    py::class_<Message_Msg , shared_ptr<Message_Msg>  >(m,"Message_Msg",R"#(This class provides a tool for constructing the parametrized message basing on resources loaded by Message_MsgFile tool.)#");
    py::class_<Message_MsgFile , shared_ptr<Message_MsgFile>  >(m,"Message_MsgFile",R"#(A tool providing facility to load definitions of message strings from resource file(s).)#");
    py::class_<Message_Printer ,opencascade::handle<Message_Printer> ,Py_Message_Printer , Standard_Transient >(m,"Message_Printer",R"#(Abstract interface class defining printer as output context for text messagesAbstract interface class defining printer as output context for text messagesAbstract interface class defining printer as output context for text messages)#");
    py::class_<Message_ProgressIndicator ,opencascade::handle<Message_ProgressIndicator> ,Py_Message_ProgressIndicator , Standard_Transient >(m,"Message_ProgressIndicator",R"#(Defines abstract interface from program to the "user". This includes progress indication and user break mechanisms.Defines abstract interface from program to the "user". This includes progress indication and user break mechanisms.Defines abstract interface from program to the "user". This includes progress indication and user break mechanisms.)#");
    py::class_<Message_ProgressScale , shared_ptr<Message_ProgressScale>  >(m,"Message_ProgressScale",R"#(Internal data structure for scale in ProgressIndicator)#");
    py::class_<Message_ProgressSentry , shared_ptr<Message_ProgressSentry>  >(m,"Message_ProgressSentry",R"#(This class is a tool allowing to manage opening/closing scopes in the ProgressIndicator in convenient and safe way.)#");
    py::class_<Message_Report ,opencascade::handle<Message_Report>  , Standard_Transient >(m,"Message_Report",R"#(Container for alert messages, sorted according to their gravity.Container for alert messages, sorted according to their gravity.Container for alert messages, sorted according to their gravity.)#");
    py::class_<Message_PrinterOStream ,opencascade::handle<Message_PrinterOStream>  , Message_Printer >(m,"Message_PrinterOStream",R"#(Implementation of a message printer associated with an std::ostream The std::ostream may be either externally defined one (e.g. std::cout), or file stream maintained internally (depending on constructor).Implementation of a message printer associated with an std::ostream The std::ostream may be either externally defined one (e.g. std::cout), or file stream maintained internally (depending on constructor).Implementation of a message printer associated with an std::ostream The std::ostream may be either externally defined one (e.g. std::cout), or file stream maintained internally (depending on constructor).)#");

};

// user-defined post-inclusion per module

// user-defined post
