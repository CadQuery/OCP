
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_ProgramError.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_Error.hxx>
#include <OSD_Protection.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_Disk.hxx>
#include <OSD_File.hxx>
#include <OSD_FileIterator.hxx>
#include <OSD_Directory.hxx>
#include <OSD_DirectoryIterator.hxx>
#include <OSD_Timer.hxx>
#include <OSD_Host.hxx>
#include <OSD_Environment.hxx>
#include <OSD_Process.hxx>
#include <OSD_SharedLibrary.hxx>
#include <OSD_Thread.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>
#include <Quantity_Date.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <Quantity_Date.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_File.hxx>
#include <OSD_Directory.hxx>

// module includes
#include <OSD.hxx>
#include <OSD_Chronometer.hxx>
#include <OSD_Directory.hxx>
#include <OSD_DirectoryIterator.hxx>
#include <OSD_Disk.hxx>
#include <OSD_Environment.hxx>
#include <OSD_Error.hxx>
#include <OSD_ErrorList.hxx>
#include <OSD_Exception.hxx>
#include <OSD_Exception_ACCESS_VIOLATION.hxx>
#include <OSD_Exception_ARRAY_BOUNDS_EXCEEDED.hxx>
#include <OSD_Exception_CTRL_BREAK.hxx>
#include <OSD_Exception_FLT_DENORMAL_OPERAND.hxx>
#include <OSD_Exception_FLT_DIVIDE_BY_ZERO.hxx>
#include <OSD_Exception_FLT_INEXACT_RESULT.hxx>
#include <OSD_Exception_FLT_INVALID_OPERATION.hxx>
#include <OSD_Exception_FLT_OVERFLOW.hxx>
#include <OSD_Exception_FLT_STACK_CHECK.hxx>
#include <OSD_Exception_FLT_UNDERFLOW.hxx>
#include <OSD_Exception_ILLEGAL_INSTRUCTION.hxx>
#include <OSD_Exception_IN_PAGE_ERROR.hxx>
#include <OSD_Exception_INT_DIVIDE_BY_ZERO.hxx>
#include <OSD_Exception_INT_OVERFLOW.hxx>
#include <OSD_Exception_INVALID_DISPOSITION.hxx>
#include <OSD_Exception_NONCONTINUABLE_EXCEPTION.hxx>
#include <OSD_Exception_PRIV_INSTRUCTION.hxx>
#include <OSD_Exception_STACK_OVERFLOW.hxx>
#include <OSD_Exception_STATUS_NO_MEMORY.hxx>
#include <OSD_File.hxx>
#include <OSD_FileIterator.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_FromWhere.hxx>
#include <OSD_Function.hxx>
#include <OSD_Host.hxx>
#include <OSD_KindFile.hxx>
#include <OSD_LoadMode.hxx>
#include <OSD_LockType.hxx>
#include <OSD_MAllocHook.hxx>
#include <OSD_MemInfo.hxx>
#include <OSD_OEMType.hxx>
#include <OSD_OpenFile.hxx>
#include <OSD_OpenMode.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_Parallel.hxx>
#include <OSD_Path.hxx>
#include <OSD_PerfMeter.hxx>
#include <OSD_Process.hxx>
#include <OSD_Protection.hxx>
#include <OSD_PThread.hxx>
#include <OSD_SharedLibrary.hxx>
#include <OSD_SIGBUS.hxx>
#include <OSD_SIGHUP.hxx>
#include <OSD_SIGILL.hxx>
#include <OSD_SIGINT.hxx>
#include <OSD_SIGKILL.hxx>
#include <OSD_Signal.hxx>
#include <OSD_SIGQUIT.hxx>
#include <OSD_SIGSEGV.hxx>
#include <OSD_SIGSYS.hxx>
#include <OSD_SingleProtection.hxx>
#include <OSD_SysType.hxx>
#include <OSD_Thread.hxx>
#include <OSD_ThreadFunction.hxx>
#include <OSD_Timer.hxx>
#include <OSD_WhoAmI.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_OSD(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("OSD"));


//Python trampoline classes

// classes


    static_cast<py::class_<OSD_Chronometer ,std::unique_ptr<OSD_Chronometer>  >>(m.attr("OSD_Chronometer"))
        .def(py::init< Standard_Boolean >()  , py::arg("theThisThreadOnly")=static_cast<Standard_Boolean>(Standard_False) )
        .def("IsStarted",
             (Standard_Boolean (OSD_Chronometer::*)() const) static_cast<Standard_Boolean (OSD_Chronometer::*)() const>(&OSD_Chronometer::IsStarted),
             R"#(Return true if timer has been started.)#" )
        .def("Reset",
             (void (OSD_Chronometer::*)() ) static_cast<void (OSD_Chronometer::*)() >(&OSD_Chronometer::Reset),
             R"#(Stops and Reinitializes the Chronometer.)#" )
        .def("Restart",
             (void (OSD_Chronometer::*)() ) static_cast<void (OSD_Chronometer::*)() >(&OSD_Chronometer::Restart),
             R"#(Restarts the Chronometer.)#" )
        .def("Stop",
             (void (OSD_Chronometer::*)() ) static_cast<void (OSD_Chronometer::*)() >(&OSD_Chronometer::Stop),
             R"#(Stops the Chronometer.)#" )
        .def("Start",
             (void (OSD_Chronometer::*)() ) static_cast<void (OSD_Chronometer::*)() >(&OSD_Chronometer::Start),
             R"#(Starts (after Create or Reset) or restarts (after Stop) the chronometer.)#" )
        .def("Show",
             (void (OSD_Chronometer::*)() const) static_cast<void (OSD_Chronometer::*)() const>(&OSD_Chronometer::Show),
             R"#(Shows the current CPU user and system time on the standard output stream <cout>. The chronometer can be running (laps Time) or stopped.)#" )
        .def("Show",
             (void (OSD_Chronometer::*)( std::ostream &  ) const) static_cast<void (OSD_Chronometer::*)( std::ostream &  ) const>(&OSD_Chronometer::Show),
             R"#(Shows the current CPU user and system time on the output stream <os>. The chronometer can be running (laps Time) or stopped.)#"  , py::arg("theOStream"))
        .def("UserTimeCPU",
             (Standard_Real (OSD_Chronometer::*)() const) static_cast<Standard_Real (OSD_Chronometer::*)() const>(&OSD_Chronometer::UserTimeCPU),
             R"#(Returns the current CPU user time in seconds. The chronometer can be running (laps Time) or stopped.)#" )
        .def("SystemTimeCPU",
             (Standard_Real (OSD_Chronometer::*)() const) static_cast<Standard_Real (OSD_Chronometer::*)() const>(&OSD_Chronometer::SystemTimeCPU),
             R"#(Returns the current CPU system time in seconds. The chronometer can be running (laps Time) or stopped.)#" )
        .def("Show",
             (void (OSD_Chronometer::*)( Standard_Real &  ) const) static_cast<void (OSD_Chronometer::*)( Standard_Real &  ) const>(&OSD_Chronometer::Show),
             R"#(Returns the current CPU user time in a variable. The chronometer can be running (laps Time) or stopped.)#"  , py::arg("theUserSeconds"))
        .def("Show",
             (void (OSD_Chronometer::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<void (OSD_Chronometer::*)( Standard_Real & ,  Standard_Real &  ) const>(&OSD_Chronometer::Show),
             R"#(Returns the current CPU user and system time in variables. The chronometer can be running (laps Time) or stopped.)#"  , py::arg("theUserSec"),  py::arg("theSystemSec"))
        .def_static("GetProcessCPU_s",
                    (void (*)( Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( Standard_Real & ,  Standard_Real &  ) >(&OSD_Chronometer::GetProcessCPU),
                    R"#(Returns CPU time (user and system) consumed by the current process since its start, in seconds. The actual precision of the measurement depends on granularity provided by the system, and is platform-specific.)#"  , py::arg("UserSeconds"),  py::arg("SystemSeconds"))
        .def_static("GetThreadCPU_s",
                    (void (*)( Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( Standard_Real & ,  Standard_Real &  ) >(&OSD_Chronometer::GetThreadCPU),
                    R"#(Returns CPU time (user and system) consumed by the current thread since its start. Note that this measurement is platform-specific, as threads are implemented and managed differently on different platforms and CPUs.)#"  , py::arg("UserSeconds"),  py::arg("SystemSeconds"))
;


    static_cast<py::class_<OSD_FileNode ,std::unique_ptr<OSD_FileNode, py::nodelete>  >>(m.attr("OSD_FileNode"))
        .def("Path",
             (void (OSD_FileNode::*)( OSD_Path &  ) const) static_cast<void (OSD_FileNode::*)( OSD_Path &  ) const>(&OSD_FileNode::Path),
             R"#(Gets file name and path.)#"  , py::arg("Name"))
        .def("SetPath",
             (void (OSD_FileNode::*)( const OSD_Path &  ) ) static_cast<void (OSD_FileNode::*)( const OSD_Path &  ) >(&OSD_FileNode::SetPath),
             R"#(Sets file name and path. If a name is not found, it raises a program error.)#"  , py::arg("Name"))
        .def("Exists",
             (Standard_Boolean (OSD_FileNode::*)() ) static_cast<Standard_Boolean (OSD_FileNode::*)() >(&OSD_FileNode::Exists),
             R"#(Returns TRUE if <me> exists.)#" )
        .def("Remove",
             (void (OSD_FileNode::*)() ) static_cast<void (OSD_FileNode::*)() >(&OSD_FileNode::Remove),
             R"#(Erases the FileNode from directory)#" )
        .def("Move",
             (void (OSD_FileNode::*)( const OSD_Path &  ) ) static_cast<void (OSD_FileNode::*)( const OSD_Path &  ) >(&OSD_FileNode::Move),
             R"#(Moves <me> into another directory)#"  , py::arg("NewPath"))
        .def("Copy",
             (void (OSD_FileNode::*)( const OSD_Path &  ) ) static_cast<void (OSD_FileNode::*)( const OSD_Path &  ) >(&OSD_FileNode::Copy),
             R"#(Copies <me> to another FileNode)#"  , py::arg("ToPath"))
        .def("Protection",
             (OSD_Protection (OSD_FileNode::*)() ) static_cast<OSD_Protection (OSD_FileNode::*)() >(&OSD_FileNode::Protection),
             R"#(Returns access mode of <me>.)#" )
        .def("SetProtection",
             (void (OSD_FileNode::*)( const OSD_Protection &  ) ) static_cast<void (OSD_FileNode::*)( const OSD_Protection &  ) >(&OSD_FileNode::SetProtection),
             R"#(Changes protection of the FileNode)#"  , py::arg("Prot"))
        .def("AccessMoment",
             (Quantity_Date (OSD_FileNode::*)() ) static_cast<Quantity_Date (OSD_FileNode::*)() >(&OSD_FileNode::AccessMoment),
             R"#(Returns last write access. On UNIX, AccessMoment and CreationMoment return the same value.)#" )
        .def("CreationMoment",
             (Quantity_Date (OSD_FileNode::*)() ) static_cast<Quantity_Date (OSD_FileNode::*)() >(&OSD_FileNode::CreationMoment),
             R"#(Returns creation date. On UNIX, AccessMoment and CreationMoment return the same value.)#" )
        .def("Failed",
             (Standard_Boolean (OSD_FileNode::*)() const) static_cast<Standard_Boolean (OSD_FileNode::*)() const>(&OSD_FileNode::Failed),
             R"#(Returns TRUE if an error occurs)#" )
        .def("Reset",
             (void (OSD_FileNode::*)() ) static_cast<void (OSD_FileNode::*)() >(&OSD_FileNode::Reset),
             R"#(Resets error counter to zero)#" )
        .def("Perror",
             (void (OSD_FileNode::*)() ) static_cast<void (OSD_FileNode::*)() >(&OSD_FileNode::Perror),
             R"#(Raises OSD_Error)#" )
        .def("Error",
             (Standard_Integer (OSD_FileNode::*)() const) static_cast<Standard_Integer (OSD_FileNode::*)() const>(&OSD_FileNode::Error),
             R"#(Returns error number if 'Failed' is TRUE.)#" )
;


    static_cast<py::class_<OSD_Environment ,std::unique_ptr<OSD_Environment>  >>(m.attr("OSD_Environment"))
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("Name") )
        .def(py::init< const TCollection_AsciiString &,const TCollection_AsciiString & >()  , py::arg("Name"),  py::arg("Value") )
        .def("SetValue",
             (void (OSD_Environment::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Environment::*)( const TCollection_AsciiString &  ) >(&OSD_Environment::SetValue),
             R"#(Changes environment variable value. Raises ConstructionError either if the string contains characters not in range of ' '...'~' or if the string contains the character '$' which is forbiden.)#"  , py::arg("Value"))
        .def("Value",
             (TCollection_AsciiString (OSD_Environment::*)() ) static_cast<TCollection_AsciiString (OSD_Environment::*)() >(&OSD_Environment::Value),
             R"#(Gets the value of an environment variable)#" )
        .def("SetName",
             (void (OSD_Environment::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Environment::*)( const TCollection_AsciiString &  ) >(&OSD_Environment::SetName),
             R"#(Changes environment variable name. Raises ConstructionError either if the string contains characters not in range of ' '...'~' or if the string contains the character '$' which is forbiden.)#"  , py::arg("name"))
        .def("Name",
             (TCollection_AsciiString (OSD_Environment::*)() const) static_cast<TCollection_AsciiString (OSD_Environment::*)() const>(&OSD_Environment::Name),
             R"#(Gets the name of <me>.)#" )
        .def("Build",
             (void (OSD_Environment::*)() ) static_cast<void (OSD_Environment::*)() >(&OSD_Environment::Build),
             R"#(Sets the value of an environment variable into system (physically).)#" )
        .def("Remove",
             (void (OSD_Environment::*)() ) static_cast<void (OSD_Environment::*)() >(&OSD_Environment::Remove),
             R"#(Removes (physically) an environment variable)#" )
        .def("Failed",
             (Standard_Boolean (OSD_Environment::*)() const) static_cast<Standard_Boolean (OSD_Environment::*)() const>(&OSD_Environment::Failed),
             R"#(Returns TRUE if an error occurs)#" )
        .def("Reset",
             (void (OSD_Environment::*)() ) static_cast<void (OSD_Environment::*)() >(&OSD_Environment::Reset),
             R"#(Resets error counter to zero)#" )
        .def("Perror",
             (void (OSD_Environment::*)() ) static_cast<void (OSD_Environment::*)() >(&OSD_Environment::Perror),
             R"#(Raises OSD_Error)#" )
        .def("Error",
             (Standard_Integer (OSD_Environment::*)() const) static_cast<Standard_Integer (OSD_Environment::*)() const>(&OSD_Environment::Error),
             R"#(Returns error number if 'Failed' is TRUE.)#" )
;


    static_cast<py::class_<OSD_Thread ,std::unique_ptr<OSD_Thread>  >>(m.attr("OSD_Thread"))
        .def(py::init<  >()  )
        .def(py::init< const OSD_Thread & >()  , py::arg("other") )
        .def("Assign",
             (void (OSD_Thread::*)( const OSD_Thread &  ) ) static_cast<void (OSD_Thread::*)( const OSD_Thread &  ) >(&OSD_Thread::Assign),
             R"#(Copy thread handle from other OSD_Thread object.)#"  , py::arg("other"))
        .def("SetPriority",
             (void (OSD_Thread::*)( const Standard_Integer  ) ) static_cast<void (OSD_Thread::*)( const Standard_Integer  ) >(&OSD_Thread::SetPriority),
             R"#(None)#"  , py::arg("thePriority"))
        .def("Run",
             (Standard_Boolean (OSD_Thread::*)( const Standard_Address ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (OSD_Thread::*)( const Standard_Address ,  const Standard_Integer  ) >(&OSD_Thread::Run),
             R"#(Starts a thread with thread function given in constructor, passing the specified input data (as void *) to it. The parameter WNTStackSize (on Windows only) specifies size of the stack to be allocated for the thread (by default - the same as for the current executable). Returns True if thread started successfully)#"  , py::arg("data")=static_cast<const Standard_Address>(0),  py::arg("WNTStackSize")=static_cast<const Standard_Integer>(0))
        .def("Detach",
             (void (OSD_Thread::*)() ) static_cast<void (OSD_Thread::*)() >(&OSD_Thread::Detach),
             R"#(Detaches the execution thread from this Thread object, so that it cannot be waited. Note that mechanics of this operation is different on UNIX/Linux (the thread is put to detached state) and Windows (the handle is closed). However, the purpose is the same: to instruct the system to release all thread data upon its completion.)#" )
        .def("Wait",
             (Standard_Boolean (OSD_Thread::*)() ) static_cast<Standard_Boolean (OSD_Thread::*)() >(&OSD_Thread::Wait),
             R"#(Waits till the thread finishes execution.)#" )
        .def("GetId",
             (Standard_ThreadId (OSD_Thread::*)() const) static_cast<Standard_ThreadId (OSD_Thread::*)() const>(&OSD_Thread::GetId),
             R"#(Returns ID of the currently controlled thread ID, or 0 if no thread is run)#" )
        .def_static("Current_s",
                    (Standard_ThreadId (*)() ) static_cast<Standard_ThreadId (*)() >(&OSD_Thread::Current),
                    R"#(Auxiliary: returns ID of the current thread)#" )
;


    static_cast<py::class_<OSD_Timer ,std::unique_ptr<OSD_Timer>  , OSD_Chronometer >>(m.attr("OSD_Timer"))
        .def(py::init< Standard_Boolean >()  , py::arg("theThisThreadOnly")=static_cast<Standard_Boolean>(Standard_False) )
        .def("Reset",
             (void (OSD_Timer::*)( const Standard_Real  ) ) static_cast<void (OSD_Timer::*)( const Standard_Real  ) >(&OSD_Timer::Reset),
             R"#(Stops and reinitializes the timer with specified elapsed time.)#"  , py::arg("theTimeElapsedSec"))
        .def("Reset",
             (void (OSD_Timer::*)() ) static_cast<void (OSD_Timer::*)() >(&OSD_Timer::Reset),
             R"#(Stops and reinitializes the timer with zero elapsed time.)#" )
        .def("Restart",
             (void (OSD_Timer::*)() ) static_cast<void (OSD_Timer::*)() >(&OSD_Timer::Restart),
             R"#(Restarts the Timer.)#" )
        .def("Show",
             (void (OSD_Timer::*)() const) static_cast<void (OSD_Timer::*)() const>(&OSD_Timer::Show),
             R"#(Shows both the elapsed time and CPU time on the standard output stream <cout>.The chronometer can be running (Lap Time) or stopped.)#" )
        .def("Show",
             (void (OSD_Timer::*)( std::ostream &  ) const) static_cast<void (OSD_Timer::*)( std::ostream &  ) const>(&OSD_Timer::Show),
             R"#(Shows both the elapsed time and CPU time on the output stream <OS>.)#"  , py::arg("os"))
        .def("Show",
             (void (OSD_Timer::*)( Standard_Real & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Real &  ) const) static_cast<void (OSD_Timer::*)( Standard_Real & ,  Standard_Integer & ,  Standard_Integer & ,  Standard_Real &  ) const>(&OSD_Timer::Show),
             R"#(returns both the elapsed time(seconds,minutes,hours) and CPU time.)#"  , py::arg("theSeconds"),  py::arg("theMinutes"),  py::arg("theHours"),  py::arg("theCPUtime"))
        .def("Stop",
             (void (OSD_Timer::*)() ) static_cast<void (OSD_Timer::*)() >(&OSD_Timer::Stop),
             R"#(Stops the Timer.)#" )
        .def("Start",
             (void (OSD_Timer::*)() ) static_cast<void (OSD_Timer::*)() >(&OSD_Timer::Start),
             R"#(Starts (after Create or Reset) or restarts (after Stop) the Timer.)#" )
        .def("ElapsedTime",
             (Standard_Real (OSD_Timer::*)() const) static_cast<Standard_Real (OSD_Timer::*)() const>(&OSD_Timer::ElapsedTime),
             R"#(Returns elapsed time in seconds.)#" )
;


    static_cast<py::class_<OSD_Host ,std::unique_ptr<OSD_Host>  >>(m.attr("OSD_Host"))
        .def(py::init<  >()  )
        .def("SystemVersion",
             (TCollection_AsciiString (OSD_Host::*)() ) static_cast<TCollection_AsciiString (OSD_Host::*)() >(&OSD_Host::SystemVersion),
             R"#(Returns system name and version)#" )
        .def("SystemId",
             (OSD_SysType (OSD_Host::*)() const) static_cast<OSD_SysType (OSD_Host::*)() const>(&OSD_Host::SystemId),
             R"#(Returns the system type (UNIX System V, UNIX BSD, MS-DOS...))#" )
        .def("HostName",
             (TCollection_AsciiString (OSD_Host::*)() ) static_cast<TCollection_AsciiString (OSD_Host::*)() >(&OSD_Host::HostName),
             R"#(Returns host name.)#" )
        .def("AvailableMemory",
             (Standard_Integer (OSD_Host::*)() ) static_cast<Standard_Integer (OSD_Host::*)() >(&OSD_Host::AvailableMemory),
             R"#(Returns available memory in Kilobytes.)#" )
        .def("InternetAddress",
             (TCollection_AsciiString (OSD_Host::*)() ) static_cast<TCollection_AsciiString (OSD_Host::*)() >(&OSD_Host::InternetAddress),
             R"#(Returns Internet address of current host.)#" )
        .def("MachineType",
             (OSD_OEMType (OSD_Host::*)() ) static_cast<OSD_OEMType (OSD_Host::*)() >(&OSD_Host::MachineType),
             R"#(Returns type of current machine.)#" )
        .def("Failed",
             (Standard_Boolean (OSD_Host::*)() const) static_cast<Standard_Boolean (OSD_Host::*)() const>(&OSD_Host::Failed),
             R"#(Returns TRUE if an error occurs)#" )
        .def("Reset",
             (void (OSD_Host::*)() ) static_cast<void (OSD_Host::*)() >(&OSD_Host::Reset),
             R"#(Resets error counter to zero)#" )
        .def("Perror",
             (void (OSD_Host::*)() ) static_cast<void (OSD_Host::*)() >(&OSD_Host::Perror),
             R"#(Raises OSD_Error)#" )
        .def("Error",
             (Standard_Integer (OSD_Host::*)() const) static_cast<Standard_Integer (OSD_Host::*)() const>(&OSD_Host::Error),
             R"#(Returns error number if 'Failed' is TRUE.)#" )
;


    static_cast<py::class_<OSD_DirectoryIterator ,std::unique_ptr<OSD_DirectoryIterator>  >>(m.attr("OSD_DirectoryIterator"))
        .def(py::init<  >()  )
        .def(py::init< const OSD_Path &,const TCollection_AsciiString & >()  , py::arg("where"),  py::arg("Mask") )
        .def("Destroy",
             (void (OSD_DirectoryIterator::*)() ) static_cast<void (OSD_DirectoryIterator::*)() >(&OSD_DirectoryIterator::Destroy),
             R"#(None)#" )
        .def("Initialize",
             (void (OSD_DirectoryIterator::*)( const OSD_Path & ,  const TCollection_AsciiString &  ) ) static_cast<void (OSD_DirectoryIterator::*)( const OSD_Path & ,  const TCollection_AsciiString &  ) >(&OSD_DirectoryIterator::Initialize),
             R"#(Initializes the current File Directory)#"  , py::arg("where"),  py::arg("Mask"))
        .def("More",
             (Standard_Boolean (OSD_DirectoryIterator::*)() ) static_cast<Standard_Boolean (OSD_DirectoryIterator::*)() >(&OSD_DirectoryIterator::More),
             R"#(Returns TRUE if other items are found while using the 'Tree' method.)#" )
        .def("Next",
             (void (OSD_DirectoryIterator::*)() ) static_cast<void (OSD_DirectoryIterator::*)() >(&OSD_DirectoryIterator::Next),
             R"#(Sets the iterator to the next item. Returns the item value corresponding to the current position of the iterator.)#" )
        .def("Values",
             (OSD_Directory (OSD_DirectoryIterator::*)() ) static_cast<OSD_Directory (OSD_DirectoryIterator::*)() >(&OSD_DirectoryIterator::Values),
             R"#(Returns the next item found .)#" )
        .def("Failed",
             (Standard_Boolean (OSD_DirectoryIterator::*)() const) static_cast<Standard_Boolean (OSD_DirectoryIterator::*)() const>(&OSD_DirectoryIterator::Failed),
             R"#(Returns TRUE if an error occurs)#" )
        .def("Reset",
             (void (OSD_DirectoryIterator::*)() ) static_cast<void (OSD_DirectoryIterator::*)() >(&OSD_DirectoryIterator::Reset),
             R"#(Resets error counter to zero)#" )
        .def("Perror",
             (void (OSD_DirectoryIterator::*)() ) static_cast<void (OSD_DirectoryIterator::*)() >(&OSD_DirectoryIterator::Perror),
             R"#(Raises OSD_Error)#" )
        .def("Error",
             (Standard_Integer (OSD_DirectoryIterator::*)() const) static_cast<Standard_Integer (OSD_DirectoryIterator::*)() const>(&OSD_DirectoryIterator::Error),
             R"#(Returns error number if 'Failed' is TRUE.)#" )
;


    static_cast<py::class_<OSD_Disk ,std::unique_ptr<OSD_Disk>  >>(m.attr("OSD_Disk"))
        .def(py::init<  >()  )
        .def(py::init< const OSD_Path & >()  , py::arg("Name") )
        .def(py::init< const Standard_CString >()  , py::arg("PathName") )
        .def("Name",
             (OSD_Path (OSD_Disk::*)() const) static_cast<OSD_Path (OSD_Disk::*)() const>(&OSD_Disk::Name),
             R"#(Returns disk name of <me>.)#" )
        .def("SetName",
             (void (OSD_Disk::*)( const OSD_Path &  ) ) static_cast<void (OSD_Disk::*)( const OSD_Path &  ) >(&OSD_Disk::SetName),
             R"#(Instantiates <me> with <Name>.)#"  , py::arg("Name"))
        .def("DiskSize",
             (Standard_Integer (OSD_Disk::*)() ) static_cast<Standard_Integer (OSD_Disk::*)() >(&OSD_Disk::DiskSize),
             R"#(Returns total disk capacity in 512 bytes blocks.)#" )
        .def("DiskFree",
             (Standard_Integer (OSD_Disk::*)() ) static_cast<Standard_Integer (OSD_Disk::*)() >(&OSD_Disk::DiskFree),
             R"#(Returns free available 512 bytes blocks on disk.)#" )
        .def("Failed",
             (Standard_Boolean (OSD_Disk::*)() const) static_cast<Standard_Boolean (OSD_Disk::*)() const>(&OSD_Disk::Failed),
             R"#(Returns TRUE if an error occurs)#" )
        .def("Reset",
             (void (OSD_Disk::*)() ) static_cast<void (OSD_Disk::*)() >(&OSD_Disk::Reset),
             R"#(Resets error counter to zero)#" )
        .def("Perror",
             (void (OSD_Disk::*)() ) static_cast<void (OSD_Disk::*)() >(&OSD_Disk::Perror),
             R"#(Raises OSD_Error)#" )
        .def("Error",
             (Standard_Integer (OSD_Disk::*)() const) static_cast<Standard_Integer (OSD_Disk::*)() const>(&OSD_Disk::Error),
             R"#(Returns error number if 'Failed' is TRUE.)#" )
;


    static_cast<py::class_<OSD_Process ,std::unique_ptr<OSD_Process>  >>(m.attr("OSD_Process"))
        .def(py::init<  >()  )
        .def("TerminalType",
             (void (OSD_Process::*)( TCollection_AsciiString &  ) ) static_cast<void (OSD_Process::*)( TCollection_AsciiString &  ) >(&OSD_Process::TerminalType),
             R"#(Returns the terminal used (vt100, vt200 ,sun-cmd ...))#"  , py::arg("Name"))
        .def("SystemDate",
             (Quantity_Date (OSD_Process::*)() ) static_cast<Quantity_Date (OSD_Process::*)() >(&OSD_Process::SystemDate),
             R"#(Gets system date.)#" )
        .def("UserName",
             (TCollection_AsciiString (OSD_Process::*)() ) static_cast<TCollection_AsciiString (OSD_Process::*)() >(&OSD_Process::UserName),
             R"#(Returns the user name.)#" )
        .def("IsSuperUser",
             (Standard_Boolean (OSD_Process::*)() ) static_cast<Standard_Boolean (OSD_Process::*)() >(&OSD_Process::IsSuperUser),
             R"#(Returns True if the process user is the super-user.)#" )
        .def("ProcessId",
             (Standard_Integer (OSD_Process::*)() ) static_cast<Standard_Integer (OSD_Process::*)() >(&OSD_Process::ProcessId),
             R"#(Returns the 'Process Id')#" )
        .def("CurrentDirectory",
             (OSD_Path (OSD_Process::*)() ) static_cast<OSD_Path (OSD_Process::*)() >(&OSD_Process::CurrentDirectory),
             R"#(Returns the current path where the process is.)#" )
        .def("SetCurrentDirectory",
             (void (OSD_Process::*)( const OSD_Path &  ) ) static_cast<void (OSD_Process::*)( const OSD_Path &  ) >(&OSD_Process::SetCurrentDirectory),
             R"#(Changes the current process directory.)#"  , py::arg("where"))
        .def("Failed",
             (Standard_Boolean (OSD_Process::*)() const) static_cast<Standard_Boolean (OSD_Process::*)() const>(&OSD_Process::Failed),
             R"#(Returns TRUE if an error occurs)#" )
        .def("Reset",
             (void (OSD_Process::*)() ) static_cast<void (OSD_Process::*)() >(&OSD_Process::Reset),
             R"#(Resets error counter to zero)#" )
        .def("Perror",
             (void (OSD_Process::*)() ) static_cast<void (OSD_Process::*)() >(&OSD_Process::Perror),
             R"#(Raises OSD_Error)#" )
        .def("Error",
             (Standard_Integer (OSD_Process::*)() const) static_cast<Standard_Integer (OSD_Process::*)() const>(&OSD_Process::Error),
             R"#(Returns error number if 'Failed' is TRUE.)#" )
;


    static_cast<py::class_<OSD_Protection ,std::unique_ptr<OSD_Protection>  >>(m.attr("OSD_Protection"))
        .def(py::init<  >()  )
        .def(py::init< const OSD_SingleProtection,const OSD_SingleProtection,const OSD_SingleProtection,const OSD_SingleProtection >()  , py::arg("System"),  py::arg("User"),  py::arg("Group"),  py::arg("World") )
        .def("Values",
             (void (OSD_Protection::*)( OSD_SingleProtection & ,  OSD_SingleProtection & ,  OSD_SingleProtection & ,  OSD_SingleProtection &  ) ) static_cast<void (OSD_Protection::*)( OSD_SingleProtection & ,  OSD_SingleProtection & ,  OSD_SingleProtection & ,  OSD_SingleProtection &  ) >(&OSD_Protection::Values),
             R"#(Retrieves values of fields)#"  , py::arg("System"),  py::arg("User"),  py::arg("Group"),  py::arg("World"))
        .def("SetValues",
             (void (OSD_Protection::*)( const OSD_SingleProtection ,  const OSD_SingleProtection ,  const OSD_SingleProtection ,  const OSD_SingleProtection  ) ) static_cast<void (OSD_Protection::*)( const OSD_SingleProtection ,  const OSD_SingleProtection ,  const OSD_SingleProtection ,  const OSD_SingleProtection  ) >(&OSD_Protection::SetValues),
             R"#(Sets values of fields)#"  , py::arg("System"),  py::arg("User"),  py::arg("Group"),  py::arg("World"))
        .def("SetSystem",
             (void (OSD_Protection::*)( const OSD_SingleProtection  ) ) static_cast<void (OSD_Protection::*)( const OSD_SingleProtection  ) >(&OSD_Protection::SetSystem),
             R"#(Sets protection of 'System')#"  , py::arg("priv"))
        .def("SetUser",
             (void (OSD_Protection::*)( const OSD_SingleProtection  ) ) static_cast<void (OSD_Protection::*)( const OSD_SingleProtection  ) >(&OSD_Protection::SetUser),
             R"#(Sets protection of 'User')#"  , py::arg("priv"))
        .def("SetGroup",
             (void (OSD_Protection::*)( const OSD_SingleProtection  ) ) static_cast<void (OSD_Protection::*)( const OSD_SingleProtection  ) >(&OSD_Protection::SetGroup),
             R"#(Sets protection of 'Group')#"  , py::arg("priv"))
        .def("SetWorld",
             (void (OSD_Protection::*)( const OSD_SingleProtection  ) ) static_cast<void (OSD_Protection::*)( const OSD_SingleProtection  ) >(&OSD_Protection::SetWorld),
             R"#(Sets protection of 'World')#"  , py::arg("priv"))
        .def("System",
             (OSD_SingleProtection (OSD_Protection::*)() const) static_cast<OSD_SingleProtection (OSD_Protection::*)() const>(&OSD_Protection::System),
             R"#(Gets protection of 'System')#" )
        .def("User",
             (OSD_SingleProtection (OSD_Protection::*)() const) static_cast<OSD_SingleProtection (OSD_Protection::*)() const>(&OSD_Protection::User),
             R"#(Gets protection of 'User')#" )
        .def("Group",
             (OSD_SingleProtection (OSD_Protection::*)() const) static_cast<OSD_SingleProtection (OSD_Protection::*)() const>(&OSD_Protection::Group),
             R"#(Gets protection of 'Group')#" )
        .def("World",
             (OSD_SingleProtection (OSD_Protection::*)() const) static_cast<OSD_SingleProtection (OSD_Protection::*)() const>(&OSD_Protection::World),
             R"#(Gets protection of 'World')#" )
        .def("Add",
             (void (OSD_Protection::*)( OSD_SingleProtection & ,  const OSD_SingleProtection  ) ) static_cast<void (OSD_Protection::*)( OSD_SingleProtection & ,  const OSD_SingleProtection  ) >(&OSD_Protection::Add),
             R"#(Add a right to a single protection. ex: aProt = RWD me.Add(aProt,X) -> aProt = RWXD)#"  , py::arg("aProt"),  py::arg("aRight"))
        .def("Sub",
             (void (OSD_Protection::*)( OSD_SingleProtection & ,  const OSD_SingleProtection  ) ) static_cast<void (OSD_Protection::*)( OSD_SingleProtection & ,  const OSD_SingleProtection  ) >(&OSD_Protection::Sub),
             R"#(Subtract a right to a single protection. ex: aProt = RWD me.Sub(aProt,RW) -> aProt = D But me.Sub(aProt,RWX) is also valid and gives same result.)#"  , py::arg("aProt"),  py::arg("aRight"))
;


    static_cast<py::class_<OSD_Path ,std::unique_ptr<OSD_Path>  >>(m.attr("OSD_Path"))
        .def(py::init<  >()  )
        .def(py::init< const TCollection_AsciiString &,const OSD_SysType >()  , py::arg("aDependentName"),  py::arg("aSysType")=static_cast<const OSD_SysType>(OSD_Default) )
        .def(py::init< const TCollection_AsciiString &,const TCollection_AsciiString &,const TCollection_AsciiString &,const TCollection_AsciiString &,const TCollection_AsciiString &,const TCollection_AsciiString &,const TCollection_AsciiString & >()  , py::arg("aNode"),  py::arg("aUsername"),  py::arg("aPassword"),  py::arg("aDisk"),  py::arg("aTrek"),  py::arg("aName"),  py::arg("anExtension") )
        .def("Values",
             (void (OSD_Path::*)( TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString &  ) const) static_cast<void (OSD_Path::*)( TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString & ,  TCollection_AsciiString &  ) const>(&OSD_Path::Values),
             R"#(Gets each component of a path.)#"  , py::arg("aNode"),  py::arg("aUsername"),  py::arg("aPassword"),  py::arg("aDisk"),  py::arg("aTrek"),  py::arg("aName"),  py::arg("anExtension"))
        .def("SetValues",
             (void (OSD_Path::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) >(&OSD_Path::SetValues),
             R"#(Sets each component of a path.)#"  , py::arg("aNode"),  py::arg("aUsername"),  py::arg("aPassword"),  py::arg("aDisk"),  py::arg("aTrek"),  py::arg("aName"),  py::arg("anExtension"))
        .def("SystemName",
             (void (OSD_Path::*)( TCollection_AsciiString & ,  const OSD_SysType  ) const) static_cast<void (OSD_Path::*)( TCollection_AsciiString & ,  const OSD_SysType  ) const>(&OSD_Path::SystemName),
             R"#(Returns system dependent path <aType> is one among Unix,VMS ... This function is not private because you may need to display system dependent path on a front-end. It can be useful when communicating with another system. For instance when you want to communicate between VMS and Unix to transfer files, or to do a remote procedure call using files. example : OSD_Path myPath ("sparc4", "sga", "secret_passwd", "$5$dkb100","|users|examples"); Internal ( Dependent_name ); On UNIX sga"secret_passwd":/users/examples On VMS sparc4"sga secret_passwd"::$5$dkb100:[users.examples] Sets each component of a Path giving its system dependent name.)#"  , py::arg("FullName"),  py::arg("aType")=static_cast<const OSD_SysType>(OSD_Default))
        .def("ExpandedName",
             (void (OSD_Path::*)( TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( TCollection_AsciiString &  ) >(&OSD_Path::ExpandedName),
             R"#(Returns system dependent path resolving logical symbols.)#"  , py::arg("aName"))
        .def("UpTrek",
             (void (OSD_Path::*)() ) static_cast<void (OSD_Path::*)() >(&OSD_Path::UpTrek),
             R"#(This removes the last directory name in <aTrek> and returns result. ex: me = "|usr|bin|todo.sh" me.UpTrek() gives me = "|usr|todo.sh" if <me> contains "|", me.UpTrek() will give again "|" without any error.)#" )
        .def("DownTrek",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::DownTrek),
             R"#(This appends a directory name into the Trek. ex: me = "|usr|todo.sh" me.DownTrek("bin") gives me = "|usr|bin|todo.sh".)#"  , py::arg("aName"))
        .def("TrekLength",
             (Standard_Integer (OSD_Path::*)() const) static_cast<Standard_Integer (OSD_Path::*)() const>(&OSD_Path::TrekLength),
             R"#(Returns number of components in Trek of <me>. ex: me = "|usr|sys|etc|bin" me.TrekLength() returns 4.)#" )
        .def("RemoveATrek",
             (void (OSD_Path::*)( const Standard_Integer  ) ) static_cast<void (OSD_Path::*)( const Standard_Integer  ) >(&OSD_Path::RemoveATrek),
             R"#(This removes a component of Trek in <me> at position <where>. The first component of Trek is numbered 1. ex: me = "|usr|bin|" me.RemoveATrek(1) gives me = "|bin|" To avoid a 'NumericError' because of a bad <where>, use TrekLength() to know number of components of Trek in <me>.)#"  , py::arg("where"))
        .def("RemoveATrek",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::RemoveATrek),
             R"#(This removes <aName> from <me> in Trek. No error is raised if <aName> is not in <me>. ex: me = "|usr|sys|etc|doc" me.RemoveATrek("sys") gives me = "|usr|etc|doc".)#"  , py::arg("aName"))
        .def("TrekValue",
             (TCollection_AsciiString (OSD_Path::*)( const Standard_Integer  ) const) static_cast<TCollection_AsciiString (OSD_Path::*)( const Standard_Integer  ) const>(&OSD_Path::TrekValue),
             R"#(Returns component of Trek in <me> at position <where>. ex: me = "|usr|bin|sys|" me.TrekValue(2) returns "bin")#"  , py::arg("where"))
        .def("InsertATrek",
             (void (OSD_Path::*)( const TCollection_AsciiString & ,  const Standard_Integer  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString & ,  const Standard_Integer  ) >(&OSD_Path::InsertATrek),
             R"#(This inserts <aName> at position <where> into Trek of <me>. ex: me = "|usr|etc|" me.InsertATrek("sys",2) gives me = "|usr|sys|etc")#"  , py::arg("aName"),  py::arg("where"))
        .def("Node",
             (TCollection_AsciiString (OSD_Path::*)() const) static_cast<TCollection_AsciiString (OSD_Path::*)() const>(&OSD_Path::Node),
             R"#(Returns Node of <me>.)#" )
        .def("UserName",
             (TCollection_AsciiString (OSD_Path::*)() const) static_cast<TCollection_AsciiString (OSD_Path::*)() const>(&OSD_Path::UserName),
             R"#(Returns UserName of <me>.)#" )
        .def("Password",
             (TCollection_AsciiString (OSD_Path::*)() const) static_cast<TCollection_AsciiString (OSD_Path::*)() const>(&OSD_Path::Password),
             R"#(Returns Password of <me>.)#" )
        .def("Disk",
             (TCollection_AsciiString (OSD_Path::*)() const) static_cast<TCollection_AsciiString (OSD_Path::*)() const>(&OSD_Path::Disk),
             R"#(Returns Disk of <me>.)#" )
        .def("Trek",
             (TCollection_AsciiString (OSD_Path::*)() const) static_cast<TCollection_AsciiString (OSD_Path::*)() const>(&OSD_Path::Trek),
             R"#(Returns Trek of <me>.)#" )
        .def("Name",
             (TCollection_AsciiString (OSD_Path::*)() const) static_cast<TCollection_AsciiString (OSD_Path::*)() const>(&OSD_Path::Name),
             R"#(Returns file name of <me>. If <me> hasn't been initialized, it returns an empty AsciiString.)#" )
        .def("Extension",
             (TCollection_AsciiString (OSD_Path::*)() const) static_cast<TCollection_AsciiString (OSD_Path::*)() const>(&OSD_Path::Extension),
             R"#(Returns my extension name. This returns an empty string if path contains no file name.)#" )
        .def("SetNode",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::SetNode),
             R"#(Sets Node of <me>.)#"  , py::arg("aName"))
        .def("SetUserName",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::SetUserName),
             R"#(Sets UserName of <me>.)#"  , py::arg("aName"))
        .def("SetPassword",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::SetPassword),
             R"#(Sets Password of <me>.)#"  , py::arg("aName"))
        .def("SetDisk",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::SetDisk),
             R"#(Sets Disk of <me>.)#"  , py::arg("aName"))
        .def("SetTrek",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::SetTrek),
             R"#(Sets Trek of <me>.)#"  , py::arg("aName"))
        .def("SetName",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::SetName),
             R"#(Sets file name of <me>. If <me> hasn't been initialized, it returns an empty AsciiString.)#"  , py::arg("aName"))
        .def("SetExtension",
             (void (OSD_Path::*)( const TCollection_AsciiString &  ) ) static_cast<void (OSD_Path::*)( const TCollection_AsciiString &  ) >(&OSD_Path::SetExtension),
             R"#(Sets my extension name.)#"  , py::arg("aName"))
        .def_static("IsValid_s",
                    (Standard_Boolean (*)( const TCollection_AsciiString & ,  const OSD_SysType  ) ) static_cast<Standard_Boolean (*)( const TCollection_AsciiString & ,  const OSD_SysType  ) >(&OSD_Path::IsValid),
                    R"#(Returns TRUE if <theDependentName> is valid for this SysType.)#"  , py::arg("theDependentName"),  py::arg("theSysType")=static_cast<const OSD_SysType>(OSD_Default))
        .def_static("RelativePath_s",
                    (TCollection_AsciiString (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) ) static_cast<TCollection_AsciiString (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) >(&OSD_Path::RelativePath),
                    R"#(Returns the relative file path between the absolute directory path <DirPath> and the absolute file path <AbsFilePath>. If <DirPath> starts with "/", pathes are handled as on Unix, if it starts with a letter followed by ":", as on WNT. In particular on WNT directory names are not key sensitive. If handling fails, an empty string is returned.)#"  , py::arg("DirPath"),  py::arg("AbsFilePath"))
        .def_static("AbsolutePath_s",
                    (TCollection_AsciiString (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) ) static_cast<TCollection_AsciiString (*)( const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) >(&OSD_Path::AbsolutePath),
                    R"#(Returns the absolute file path from the absolute directory path <DirPath> and the relative file path returned by RelativePath(). If the RelFilePath is an absolute path, it is returned and the directory path is ignored. If handling fails, an empty string is returned.)#"  , py::arg("DirPath"),  py::arg("RelFilePath"))
;


    static_cast<py::class_<OSD_FileIterator ,std::unique_ptr<OSD_FileIterator>  >>(m.attr("OSD_FileIterator"))
        .def(py::init<  >()  )
        .def(py::init< const OSD_Path &,const TCollection_AsciiString & >()  , py::arg("where"),  py::arg("Mask") )
        .def("Destroy",
             (void (OSD_FileIterator::*)() ) static_cast<void (OSD_FileIterator::*)() >(&OSD_FileIterator::Destroy),
             R"#(None)#" )
        .def("Initialize",
             (void (OSD_FileIterator::*)( const OSD_Path & ,  const TCollection_AsciiString &  ) ) static_cast<void (OSD_FileIterator::*)( const OSD_Path & ,  const TCollection_AsciiString &  ) >(&OSD_FileIterator::Initialize),
             R"#(Initializes the current File Iterator)#"  , py::arg("where"),  py::arg("Mask"))
        .def("More",
             (Standard_Boolean (OSD_FileIterator::*)() ) static_cast<Standard_Boolean (OSD_FileIterator::*)() >(&OSD_FileIterator::More),
             R"#(Returns TRUE if there are other items using the 'Tree' method.)#" )
        .def("Next",
             (void (OSD_FileIterator::*)() ) static_cast<void (OSD_FileIterator::*)() >(&OSD_FileIterator::Next),
             R"#(Sets the iterator to the next item. Returns the item value corresponding to the current position of the iterator.)#" )
        .def("Values",
             (OSD_File (OSD_FileIterator::*)() ) static_cast<OSD_File (OSD_FileIterator::*)() >(&OSD_FileIterator::Values),
             R"#(Returns the next file found .)#" )
        .def("Failed",
             (Standard_Boolean (OSD_FileIterator::*)() const) static_cast<Standard_Boolean (OSD_FileIterator::*)() const>(&OSD_FileIterator::Failed),
             R"#(Returns TRUE if an error occurs)#" )
        .def("Reset",
             (void (OSD_FileIterator::*)() ) static_cast<void (OSD_FileIterator::*)() >(&OSD_FileIterator::Reset),
             R"#(Resets error counter to zero)#" )
        .def("Perror",
             (void (OSD_FileIterator::*)() ) static_cast<void (OSD_FileIterator::*)() >(&OSD_FileIterator::Perror),
             R"#(Raises OSD_Error)#" )
        .def("Error",
             (Standard_Integer (OSD_FileIterator::*)() const) static_cast<Standard_Integer (OSD_FileIterator::*)() const>(&OSD_FileIterator::Error),
             R"#(Returns error number if 'Failed' is TRUE.)#" )
;


    static_cast<py::class_<OSD_Error ,std::unique_ptr<OSD_Error>  >>(m.attr("OSD_Error"))
        .def(py::init<  >()  )
        .def("Perror",
             (void (OSD_Error::*)() ) static_cast<void (OSD_Error::*)() >(&OSD_Error::Perror),
             R"#(Raises OSD_Error with accurate error message.)#" )
        .def("SetValue",
             (void (OSD_Error::*)( const Standard_Integer ,  const Standard_Integer ,  const TCollection_AsciiString &  ) ) static_cast<void (OSD_Error::*)( const Standard_Integer ,  const Standard_Integer ,  const TCollection_AsciiString &  ) >(&OSD_Error::SetValue),
             R"#(Instantiates error This is only used by OSD methods to instantiates an error code. No description is done for the programmer.)#"  , py::arg("Errcode"),  py::arg("From"),  py::arg("Message"))
        .def("Error",
             (Standard_Integer (OSD_Error::*)() const) static_cast<Standard_Integer (OSD_Error::*)() const>(&OSD_Error::Error),
             R"#(Returns an accurate error code. To test these values, you must include "OSD_ErrorList.hxx")#" )
        .def("Failed",
             (Standard_Boolean (OSD_Error::*)() const) static_cast<Standard_Boolean (OSD_Error::*)() const>(&OSD_Error::Failed),
             R"#(Returns TRUE if an error occurs This is a way to test if a system call succeeded or not.)#" )
        .def("Reset",
             (void (OSD_Error::*)() ) static_cast<void (OSD_Error::*)() >(&OSD_Error::Reset),
             R"#(Resets error counter to zero This allows the user to ignore an error (WARNING).)#" )
;


    static_cast<py::class_<OSD_SharedLibrary ,std::unique_ptr<OSD_SharedLibrary>  >>(m.attr("OSD_SharedLibrary"))
        .def(py::init<  >()  )
        .def(py::init< const Standard_CString >()  , py::arg("aFilename") )
        .def("SetName",
             (void (OSD_SharedLibrary::*)( const Standard_CString  ) ) static_cast<void (OSD_SharedLibrary::*)( const Standard_CString  ) >(&OSD_SharedLibrary::SetName),
             R"#(Sets a name associated to the shared object.)#"  , py::arg("aName"))
        .def("Name",
             (Standard_CString (OSD_SharedLibrary::*)() const) static_cast<Standard_CString (OSD_SharedLibrary::*)() const>(&OSD_SharedLibrary::Name),
             R"#(Returns the name associated to the shared object.)#" )
        .def("DlOpen",
             (Standard_Boolean (OSD_SharedLibrary::*)( const OSD_LoadMode  ) ) static_cast<Standard_Boolean (OSD_SharedLibrary::*)( const OSD_LoadMode  ) >(&OSD_SharedLibrary::DlOpen),
             R"#(The DlOpen method provides an interface to the dynamic library loader to allow shared libraries to be loaded and called at runtime. The DlOpen function attempts to load Filename, in the address space of the process, resolving symbols as appropriate. Any libraries that Filename depends upon are also loaded. If MODE is RTLD_LAZY, then the runtime loader does symbol resolution only as needed. Typically, this means that the first call to a function in the newly loaded library will cause the resolution of the address of that function to occur. If Mode is RTLD_NOW, then the runtime loader must do all symbol binding during the DlOpen call. The DlOpen method returns a handle that is used by DlSym or DlClose. If there is an error, Standard_False is returned, Standard_True otherwise. If a NULL Filename is specified, DlOpen returns a handle for the main executable, which allows access to dynamic symbols in the running program.)#"  , py::arg("Mode"))
        .def("DlClose",
             (void (OSD_SharedLibrary::*)() const) static_cast<void (OSD_SharedLibrary::*)() const>(&OSD_SharedLibrary::DlClose),
             R"#(Deallocates the address space for the library corresponding to the shared object. If any user function continues to call a symbol resolved in the address space of a library that has been since been deallocated by DlClose, the results are undefined.)#" )
        .def("DlError",
             (Standard_CString (OSD_SharedLibrary::*)() const) static_cast<Standard_CString (OSD_SharedLibrary::*)() const>(&OSD_SharedLibrary::DlError),
             R"#(The dlerror function returns a string describing the last error that occurred from a call to DlOpen, DlClose or DlSym.)#" )
        .def("Destroy",
             (void (OSD_SharedLibrary::*)() ) static_cast<void (OSD_SharedLibrary::*)() >(&OSD_SharedLibrary::Destroy),
             R"#(Frees memory allocated.)#" )
;

// functions
// ./opencascade/OSD_Environment.hxx
// ./opencascade/OSD_MAllocHook.hxx
// ./opencascade/OSD_ThreadFunction.hxx
// ./opencascade/OSD_Signal.hxx
// ./opencascade/OSD_Exception_CTRL_BREAK.hxx
// ./opencascade/OSD_Exception_IN_PAGE_ERROR.hxx
// ./opencascade/OSD_Thread.hxx
// ./opencascade/OSD_OEMType.hxx
// ./opencascade/OSD_FromWhere.hxx
// ./opencascade/OSD_Exception_PRIV_INSTRUCTION.hxx
// ./opencascade/OSD_WhoAmI.hxx
// ./opencascade/OSD_SIGHUP.hxx
// ./opencascade/OSD_SIGILL.hxx
// ./opencascade/OSD_Exception_STATUS_NO_MEMORY.hxx
// ./opencascade/OSD_Exception_ARRAY_BOUNDS_EXCEEDED.hxx
// ./opencascade/OSD_SysType.hxx
// ./opencascade/OSD_SIGKILL.hxx
// ./opencascade/OSD_Chronometer.hxx
// ./opencascade/OSD_Parallel.hxx
// ./opencascade/OSD_Function.hxx
// ./opencascade/OSD_LoadMode.hxx
// ./opencascade/OSD_Exception_INVALID_DISPOSITION.hxx
// ./opencascade/OSD_SingleProtection.hxx
// ./opencascade/OSD_Exception_ACCESS_VIOLATION.hxx
// ./opencascade/OSD_Exception_NONCONTINUABLE_EXCEPTION.hxx
// ./opencascade/OSD_Exception_INT_OVERFLOW.hxx
// ./opencascade/OSD_Timer.hxx
// ./opencascade/OSD_File.hxx
// ./opencascade/OSD_SIGSYS.hxx
// ./opencascade/OSD_MemInfo.hxx
// ./opencascade/OSD_OpenMode.hxx
// ./opencascade/OSD_ErrorList.hxx
// ./opencascade/OSD_SIGSEGV.hxx
// ./opencascade/OSD_Path.hxx
// ./opencascade/OSD_Host.hxx
// ./opencascade/OSD_Exception_INT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_Exception_FLT_INVALID_OPERATION.hxx
// ./opencascade/OSD_PerfMeter.hxx
// ./opencascade/OSD.hxx
// ./opencascade/OSD_KindFile.hxx
// ./opencascade/OSD_LockType.hxx
// ./opencascade/OSD_DirectoryIterator.hxx
// ./opencascade/OSD_Directory.hxx
// ./opencascade/OSD_Exception.hxx
// ./opencascade/OSD_Exception_FLT_STACK_CHECK.hxx
// ./opencascade/OSD_Exception_FLT_DENORMAL_OPERAND.hxx
// ./opencascade/OSD_SIGBUS.hxx
// ./opencascade/OSD_Exception_FLT_UNDERFLOW.hxx
// ./opencascade/OSD_Exception_FLT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_OSDError.hxx
// ./opencascade/OSD_FileIterator.hxx
// ./opencascade/OSD_Disk.hxx
// ./opencascade/OSD_FileNode.hxx
// ./opencascade/OSD_SIGQUIT.hxx
// ./opencascade/OSD_SIGINT.hxx
// ./opencascade/OSD_Exception_FLT_OVERFLOW.hxx
// ./opencascade/OSD_Exception_STACK_OVERFLOW.hxx
// ./opencascade/OSD_Error.hxx
// ./opencascade/OSD_Process.hxx
// ./opencascade/OSD_Exception_ILLEGAL_INSTRUCTION.hxx
// ./opencascade/OSD_Exception_FLT_INEXACT_RESULT.hxx
// ./opencascade/OSD_PThread.hxx
// ./opencascade/OSD_SharedLibrary.hxx
// ./opencascade/OSD_OpenFile.hxx
    m.def("OSD_OpenFile", 
          (FILE * (*)( const TCollection_ExtendedString & ,  const char *  ))  static_cast<FILE * (*)( const TCollection_ExtendedString & ,  const char *  )>(&OSD_OpenFile),
          R"#(Function opens the file.)#"  , py::arg("theName"),  py::arg("theMode"));
    m.def("OSD_FileStatCTime", 
          (Standard_Time (*)( const char *  ))  static_cast<Standard_Time (*)( const char *  )>(&OSD_FileStatCTime),
          R"#(Function retrieves file timestamp.)#"  , py::arg("theName"));
    m.def("OSD_OpenFileDescriptor", 
          (int (*)( const TCollection_ExtendedString & ,  ::std::ios_base::openmode  ))  static_cast<int (*)( const TCollection_ExtendedString & ,  ::std::ios_base::openmode  )>(&OSD_OpenFileDescriptor),
          R"#(Open file descriptor for specified UTF-16 file path.)#"  , py::arg("theName"),  py::arg("theMode"));
// ./opencascade/OSD_Protection.hxx

// operators

// register typdefs
// ./opencascade/OSD_Environment.hxx
// ./opencascade/OSD_MAllocHook.hxx
// ./opencascade/OSD_ThreadFunction.hxx
// ./opencascade/OSD_Signal.hxx
// ./opencascade/OSD_Exception_CTRL_BREAK.hxx
// ./opencascade/OSD_Exception_IN_PAGE_ERROR.hxx
// ./opencascade/OSD_Thread.hxx
// ./opencascade/OSD_OEMType.hxx
// ./opencascade/OSD_FromWhere.hxx
// ./opencascade/OSD_Exception_PRIV_INSTRUCTION.hxx
// ./opencascade/OSD_WhoAmI.hxx
// ./opencascade/OSD_SIGHUP.hxx
// ./opencascade/OSD_SIGILL.hxx
// ./opencascade/OSD_Exception_STATUS_NO_MEMORY.hxx
// ./opencascade/OSD_Exception_ARRAY_BOUNDS_EXCEEDED.hxx
// ./opencascade/OSD_SysType.hxx
// ./opencascade/OSD_SIGKILL.hxx
// ./opencascade/OSD_Chronometer.hxx
// ./opencascade/OSD_Parallel.hxx
// ./opencascade/OSD_Function.hxx
// ./opencascade/OSD_LoadMode.hxx
// ./opencascade/OSD_Exception_INVALID_DISPOSITION.hxx
// ./opencascade/OSD_SingleProtection.hxx
// ./opencascade/OSD_Exception_ACCESS_VIOLATION.hxx
// ./opencascade/OSD_Exception_NONCONTINUABLE_EXCEPTION.hxx
// ./opencascade/OSD_Exception_INT_OVERFLOW.hxx
// ./opencascade/OSD_Timer.hxx
// ./opencascade/OSD_File.hxx
// ./opencascade/OSD_SIGSYS.hxx
// ./opencascade/OSD_MemInfo.hxx
// ./opencascade/OSD_OpenMode.hxx
// ./opencascade/OSD_ErrorList.hxx
// ./opencascade/OSD_SIGSEGV.hxx
// ./opencascade/OSD_Path.hxx
// ./opencascade/OSD_Host.hxx
// ./opencascade/OSD_Exception_INT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_Exception_FLT_INVALID_OPERATION.hxx
// ./opencascade/OSD_PerfMeter.hxx
// ./opencascade/OSD.hxx
// ./opencascade/OSD_KindFile.hxx
// ./opencascade/OSD_LockType.hxx
// ./opencascade/OSD_DirectoryIterator.hxx
// ./opencascade/OSD_Directory.hxx
// ./opencascade/OSD_Exception.hxx
// ./opencascade/OSD_Exception_FLT_STACK_CHECK.hxx
// ./opencascade/OSD_Exception_FLT_DENORMAL_OPERAND.hxx
// ./opencascade/OSD_SIGBUS.hxx
// ./opencascade/OSD_Exception_FLT_UNDERFLOW.hxx
// ./opencascade/OSD_Exception_FLT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_OSDError.hxx
// ./opencascade/OSD_FileIterator.hxx
// ./opencascade/OSD_Disk.hxx
// ./opencascade/OSD_FileNode.hxx
// ./opencascade/OSD_SIGQUIT.hxx
// ./opencascade/OSD_SIGINT.hxx
// ./opencascade/OSD_Exception_FLT_OVERFLOW.hxx
// ./opencascade/OSD_Exception_STACK_OVERFLOW.hxx
// ./opencascade/OSD_Error.hxx
// ./opencascade/OSD_Process.hxx
// ./opencascade/OSD_Exception_ILLEGAL_INSTRUCTION.hxx
// ./opencascade/OSD_Exception_FLT_INEXACT_RESULT.hxx
// ./opencascade/OSD_PThread.hxx
// ./opencascade/OSD_SharedLibrary.hxx
// ./opencascade/OSD_OpenFile.hxx
// ./opencascade/OSD_Protection.hxx


// exceptions
register_occ_exception<OSD_Signal>(m, "OSD_Signal");
register_occ_exception<OSD_SIGHUP>(m, "OSD_SIGHUP");
register_occ_exception<OSD_SIGKILL>(m, "OSD_SIGKILL");
register_occ_exception<OSD_SIGSYS>(m, "OSD_SIGSYS");
register_occ_exception<OSD_SIGSEGV>(m, "OSD_SIGSEGV");
register_occ_exception<OSD_Exception>(m, "OSD_Exception");
register_occ_exception<OSD_Exception_FLT_DENORMAL_OPERAND>(m, "OSD_Exception_FLT_DENORMAL_OPERAND");
register_occ_exception<OSD_Exception_FLT_UNDERFLOW>(m, "OSD_Exception_FLT_UNDERFLOW");
register_occ_exception<OSD_OSDError>(m, "OSD_OSDError");
register_occ_exception<OSD_SIGINT>(m, "OSD_SIGINT");
register_occ_exception<OSD_Exception_STACK_OVERFLOW>(m, "OSD_Exception_STACK_OVERFLOW");
register_occ_exception<OSD_Exception_FLT_INEXACT_RESULT>(m, "OSD_Exception_FLT_INEXACT_RESULT");
register_occ_exception<OSD_Exception_IN_PAGE_ERROR>(m, "OSD_Exception_IN_PAGE_ERROR");
register_occ_exception<OSD_SIGILL>(m, "OSD_SIGILL");
register_occ_exception<OSD_Exception_ARRAY_BOUNDS_EXCEEDED>(m, "OSD_Exception_ARRAY_BOUNDS_EXCEEDED");
register_occ_exception<OSD_Exception_INVALID_DISPOSITION>(m, "OSD_Exception_INVALID_DISPOSITION");
register_occ_exception<OSD_Exception_NONCONTINUABLE_EXCEPTION>(m, "OSD_Exception_NONCONTINUABLE_EXCEPTION");
register_occ_exception<OSD_Exception_FLT_INVALID_OPERATION>(m, "OSD_Exception_FLT_INVALID_OPERATION");
register_occ_exception<OSD_SIGBUS>(m, "OSD_SIGBUS");
register_occ_exception<OSD_Exception_FLT_OVERFLOW>(m, "OSD_Exception_FLT_OVERFLOW");
register_occ_exception<OSD_Exception_ILLEGAL_INSTRUCTION>(m, "OSD_Exception_ILLEGAL_INSTRUCTION");
register_occ_exception<OSD_Exception_CTRL_BREAK>(m, "OSD_Exception_CTRL_BREAK");
register_occ_exception<OSD_Exception_STATUS_NO_MEMORY>(m, "OSD_Exception_STATUS_NO_MEMORY");
register_occ_exception<OSD_Exception_ACCESS_VIOLATION>(m, "OSD_Exception_ACCESS_VIOLATION");
register_occ_exception<OSD_Exception_FLT_DIVIDE_BY_ZERO>(m, "OSD_Exception_FLT_DIVIDE_BY_ZERO");
register_occ_exception<OSD_Exception_PRIV_INSTRUCTION>(m, "OSD_Exception_PRIV_INSTRUCTION");
register_occ_exception<OSD_Exception_INT_OVERFLOW>(m, "OSD_Exception_INT_OVERFLOW");
register_occ_exception<OSD_Exception_FLT_STACK_CHECK>(m, "OSD_Exception_FLT_STACK_CHECK");
register_occ_exception<OSD_SIGQUIT>(m, "OSD_SIGQUIT");
register_occ_exception<OSD_Exception_INT_DIVIDE_BY_ZERO>(m, "OSD_Exception_INT_DIVIDE_BY_ZERO");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
