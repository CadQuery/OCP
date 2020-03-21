
// std lib related includes
#include <tuple>

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
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_File.hxx>
#include <OSD_Directory.hxx>
#include <OSD_OSDError.hxx>
#include <Quantity_Date.hxx>
#include <OSD_Path.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>
#include <Quantity_Date.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>

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
#include <OSD_SignalMode.hxx>
#include <OSD_SIGQUIT.hxx>
#include <OSD_SIGSEGV.hxx>
#include <OSD_SIGSYS.hxx>
#include <OSD_SingleProtection.hxx>
#include <OSD_SysType.hxx>
#include <OSD_Thread.hxx>
#include <OSD_ThreadFunction.hxx>
#include <OSD_ThreadPool.hxx>
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


    static_cast<py::class_<OSD_Chronometer , shared_ptr<OSD_Chronometer> >>(m.attr("OSD_Chronometer"))
    // constructors
    // custom constructors
    // methods
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
             (void (OSD_Chronometer::*)( std::ostream & ) const) static_cast<void (OSD_Chronometer::*)( std::ostream & ) const>(&OSD_Chronometer::Show),
             R"#(Shows the current CPU user and system time on the output stream <os>. The chronometer can be running (laps Time) or stopped.)#"  , py::arg("theOStream"))
        .def("UserTimeCPU",
             (Standard_Real (OSD_Chronometer::*)() const) static_cast<Standard_Real (OSD_Chronometer::*)() const>(&OSD_Chronometer::UserTimeCPU),
             R"#(Returns the current CPU user time in seconds. The chronometer can be running (laps Time) or stopped.)#" )
        .def("SystemTimeCPU",
             (Standard_Real (OSD_Chronometer::*)() const) static_cast<Standard_Real (OSD_Chronometer::*)() const>(&OSD_Chronometer::SystemTimeCPU),
             R"#(Returns the current CPU system time in seconds. The chronometer can be running (laps Time) or stopped.)#" )
    // methods using call by reference i.s.o. return
        .def("Show",
             []( OSD_Chronometer &self   ){ Standard_Real  theUserSeconds; self.Show(theUserSeconds); return std::make_tuple(theUserSeconds); },
             R"#(Returns the current CPU user time in a variable. The chronometer can be running (laps Time) or stopped.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_DirectoryIterator , shared_ptr<OSD_DirectoryIterator> >>(m.attr("OSD_DirectoryIterator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Disk , shared_ptr<OSD_Disk> >>(m.attr("OSD_Disk"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Environment , shared_ptr<OSD_Environment> >>(m.attr("OSD_Environment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Error , shared_ptr<OSD_Error> >>(m.attr("OSD_Error"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_FileIterator , shared_ptr<OSD_FileIterator> >>(m.attr("OSD_FileIterator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_FileNode , shared_ptr_nodelete<OSD_FileNode> >>(m.attr("OSD_FileNode"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Host , shared_ptr<OSD_Host> >>(m.attr("OSD_Host"))
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
    register_default_constructor<OSD_MAllocHook , shared_ptr<OSD_MAllocHook>>(m,"OSD_MAllocHook");

    static_cast<py::class_<OSD_MAllocHook , shared_ptr<OSD_MAllocHook> >>(m.attr("OSD_MAllocHook"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_MemInfo , shared_ptr<OSD_MemInfo> >>(m.attr("OSD_MemInfo"))
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
    register_default_constructor<OSD_Parallel , shared_ptr<OSD_Parallel>>(m,"OSD_Parallel");

    static_cast<py::class_<OSD_Parallel , shared_ptr<OSD_Parallel> >>(m.attr("OSD_Parallel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Path , shared_ptr<OSD_Path> >>(m.attr("OSD_Path"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsDosPath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsDosPath),
                    R"#(Detect absolute DOS-path also used in Windows. The total path length is limited to 256 characters. Sample path: C:)#"  , py::arg("thePath"))
        .def_static("IsNtExtendedPath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsNtExtendedPath),
                    R"#(Detect extended-length NT path (can be only absolute). Approximate maximum path is 32767 characters. Sample path: \?: long path File I/O functions in the Windows API convert "/" to "" as part of converting the name to an NT-style name, except when using the "\?" prefix.)#"  , py::arg("thePath"))
        .def_static("IsUncPath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsUncPath),
                    R"#(UNC is a naming convention used primarily to specify and map network drives in Microsoft Windows. Sample path: \server)#"  , py::arg("thePath"))
        .def_static("IsUncExtendedPath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsUncExtendedPath),
                    R"#(Detect extended-length UNC path. Sample path: \?)#"  , py::arg("thePath"))
        .def_static("IsUnixPath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsUnixPath),
                    R"#(Detect absolute UNIX-path. Sample path: /media/cdrom/file)#"  , py::arg("thePath"))
        .def_static("IsContentProtocolPath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsContentProtocolPath),
                    R"#(Detect special URLs on Android platform. Sample path: content://filename)#"  , py::arg("thePath"))
        .def_static("IsRemoteProtocolPath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsRemoteProtocolPath),
                    R"#(Detect remote protocol path (http / ftp / ...). Actually shouldn't be remote... Sample path: http://domain/path/file)#"  , py::arg("thePath"))
        .def_static("IsRelativePath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsRelativePath),
                    R"#(Method to recognize path is absolute or not. Detection is based on path syntax - no any filesystem / network access performed.)#"  , py::arg("thePath"))
        .def_static("IsAbsolutePath_s",
                    (Standard_Boolean (*)( const char * ) ) static_cast<Standard_Boolean (*)( const char * ) >(&OSD_Path::IsAbsolutePath),
                    R"#(Method to recognize path is absolute or not. Detection is based on path syntax - no any filesystem / network access performed.)#"  , py::arg("thePath"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_PerfMeter , shared_ptr<OSD_PerfMeter> >>(m.attr("OSD_PerfMeter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const char *,const bool >()  , py::arg("theMeter"),  py::arg("theToAutoStart")=static_cast<const bool>(true) )
    // custom constructors
    // methods
        .def("Init",
             (void (OSD_PerfMeter::*)( const char * ) ) static_cast<void (OSD_PerfMeter::*)( const char * ) >(&OSD_PerfMeter::Init),
             R"#(Prepares the named meter)#"  , py::arg("theMeter"))
        .def("Start",
             (void (OSD_PerfMeter::*)() const) static_cast<void (OSD_PerfMeter::*)() const>(&OSD_PerfMeter::Start),
             R"#(Starts the meter)#" )
        .def("Stop",
             (void (OSD_PerfMeter::*)() const) static_cast<void (OSD_PerfMeter::*)() const>(&OSD_PerfMeter::Stop),
             R"#(Stops the meter)#" )
        .def("Tick",
             (void (OSD_PerfMeter::*)() const) static_cast<void (OSD_PerfMeter::*)() const>(&OSD_PerfMeter::Tick),
             R"#(Increments the counter w/o time measurement)#" )
        .def("Flush",
             (void (OSD_PerfMeter::*)() const) static_cast<void (OSD_PerfMeter::*)() const>(&OSD_PerfMeter::Flush),
             R"#(Outputs the meter data and resets it to initial state)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Process , shared_ptr<OSD_Process> >>(m.attr("OSD_Process"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Protection , shared_ptr<OSD_Protection> >>(m.attr("OSD_Protection"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_SharedLibrary , shared_ptr<OSD_SharedLibrary> >>(m.attr("OSD_SharedLibrary"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Thread , shared_ptr<OSD_Thread> >>(m.attr("OSD_Thread"))
    // constructors
    // custom constructors
    // methods
        .def("Wait",
             (Standard_Boolean (OSD_Thread::*)() ) static_cast<Standard_Boolean (OSD_Thread::*)() >(&OSD_Thread::Wait),
             R"#(Waits till the thread finishes execution.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_ThreadPool ,opencascade::handle<OSD_ThreadPool> , Standard_Transient>>(m.attr("OSD_ThreadPool"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (OSD_ThreadPool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (OSD_ThreadPool::*)() const>(&OSD_ThreadPool::DynamicType),
             R"#(None)#" )
        .def("HasThreads",
             (bool (OSD_ThreadPool::*)() const) static_cast<bool (OSD_ThreadPool::*)() const>(&OSD_ThreadPool::HasThreads),
             R"#(Return TRUE if at least 2 threads are available (including self-thread).)#" )
        .def("LowerThreadIndex",
             (int (OSD_ThreadPool::*)() const) static_cast<int (OSD_ThreadPool::*)() const>(&OSD_ThreadPool::LowerThreadIndex),
             R"#(Return the lower thread index.)#" )
        .def("UpperThreadIndex",
             (int (OSD_ThreadPool::*)() const) static_cast<int (OSD_ThreadPool::*)() const>(&OSD_ThreadPool::UpperThreadIndex),
             R"#(Return the upper thread index (last index is reserved for self-thread).)#" )
        .def("NbThreads",
             (int (OSD_ThreadPool::*)() const) static_cast<int (OSD_ThreadPool::*)() const>(&OSD_ThreadPool::NbThreads),
             R"#(Return the number of threads; >= 1.)#" )
        .def("NbDefaultThreadsToLaunch",
             (int (OSD_ThreadPool::*)() const) static_cast<int (OSD_ThreadPool::*)() const>(&OSD_ThreadPool::NbDefaultThreadsToLaunch),
             R"#(Return maximum number of threads to be locked by a single Launcher object by default; the entire thread pool size is returned by default.)#" )
        .def("SetNbDefaultThreadsToLaunch",
             (void (OSD_ThreadPool::*)( int ) ) static_cast<void (OSD_ThreadPool::*)( int ) >(&OSD_ThreadPool::SetNbDefaultThreadsToLaunch),
             R"#(Set maximum number of threads to be locked by a single Launcher object by default. Should be set BEFORE first usage.)#"  , py::arg("theNbThreads"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&OSD_ThreadPool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Directory , shared_ptr<OSD_Directory> , OSD_FileNode>>(m.attr("OSD_Directory"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_File , shared_ptr<OSD_File> , OSD_FileNode>>(m.attr("OSD_File"))
    // constructors
    // custom constructors
    // methods
        .def("ReadLine",
             (Standard_Integer (OSD_File::*)( TCollection_AsciiString & , const Standard_Integer ) ) static_cast<Standard_Integer (OSD_File::*)( TCollection_AsciiString & , const Standard_Integer ) >(&OSD_File::ReadLine),
             R"#(Reads bytes from the data pointed to by the object file into the buffer <Buffer>. Data is read until <NByte-1> bytes have been read, until a newline character is read and transferred into <Buffer>, or until an EOF (End-of-File) condition is encountered. Upon successful completion, Read returns the number of bytes actually read and placed into the Buffer <Buffer>.)#"  , py::arg("Buffer"),  py::arg("NByte"))
        .def("Write",
             (void (OSD_File::*)( const TCollection_AsciiString & , const Standard_Integer ) ) static_cast<void (OSD_File::*)( const TCollection_AsciiString & , const Standard_Integer ) >(&OSD_File::Write),
             R"#(Attempts to write theNbBytes bytes from the AsciiString to the file.)#"  , py::arg("theBuffer"),  py::arg("theNbBytes"))
        .def("GetLock",
             (OSD_LockType (OSD_File::*)() const) static_cast<OSD_LockType (OSD_File::*)() const>(&OSD_File::GetLock),
             R"#(Returns the current lock state)#" )
        .def("IsLocked",
             (Standard_Boolean (OSD_File::*)() const) static_cast<Standard_Boolean (OSD_File::*)() const>(&OSD_File::IsLocked),
             R"#(Returns TRUE if this file is locked.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<OSD_Timer , shared_ptr<OSD_Timer> , OSD_Chronometer>>(m.attr("OSD_Timer"))
    // constructors
    // custom constructors
    // methods
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
             (void (OSD_Timer::*)( std::ostream & ) const) static_cast<void (OSD_Timer::*)( std::ostream & ) const>(&OSD_Timer::Show),
             R"#(Shows both the elapsed time and CPU time on the output stream <OS>.)#"  , py::arg("os"))
        .def("Stop",
             (void (OSD_Timer::*)() ) static_cast<void (OSD_Timer::*)() >(&OSD_Timer::Stop),
             R"#(Stops the Timer.)#" )
        .def("Start",
             (void (OSD_Timer::*)() ) static_cast<void (OSD_Timer::*)() >(&OSD_Timer::Start),
             R"#(Starts (after Create or Reset) or restarts (after Stop) the Timer.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/OSD_Exception_FLT_INEXACT_RESULT.hxx
// ./opencascade/OSD_Environment.hxx
// ./opencascade/OSD_ThreadPool.hxx
// ./opencascade/OSD_SIGILL.hxx
// ./opencascade/OSD_Exception_FLT_INVALID_OPERATION.hxx
// ./opencascade/OSD_Exception_FLT_UNDERFLOW.hxx
// ./opencascade/OSD_Exception_PRIV_INSTRUCTION.hxx
// ./opencascade/OSD_Thread.hxx
// ./opencascade/OSD_Exception_FLT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_PThread.hxx
// ./opencascade/OSD_Exception_STACK_OVERFLOW.hxx
// ./opencascade/OSD_Function.hxx
// ./opencascade/OSD_MemInfo.hxx
// ./opencascade/OSD_Timer.hxx
// ./opencascade/OSD_Exception_FLT_OVERFLOW.hxx
// ./opencascade/OSD_Exception_INT_OVERFLOW.hxx
// ./opencascade/OSD_Parallel.hxx
// ./opencascade/OSD_Exception_INVALID_DISPOSITION.hxx
// ./opencascade/OSD_Host.hxx
// ./opencascade/OSD_Protection.hxx
// ./opencascade/OSD_OpenFile.hxx
// ./opencascade/OSD_SIGSEGV.hxx
// ./opencascade/OSD_SIGKILL.hxx
// ./opencascade/OSD.hxx
// ./opencascade/OSD_PerfMeter.hxx
// ./opencascade/OSD_Directory.hxx
// ./opencascade/OSD_Exception_STATUS_NO_MEMORY.hxx
// ./opencascade/OSD_Process.hxx
// ./opencascade/OSD_SIGQUIT.hxx
// ./opencascade/OSD_ThreadFunction.hxx
// ./opencascade/OSD_KindFile.hxx
// ./opencascade/OSD_FromWhere.hxx
// ./opencascade/OSD_Exception_IN_PAGE_ERROR.hxx
// ./opencascade/OSD_LoadMode.hxx
// ./opencascade/OSD_Exception_NONCONTINUABLE_EXCEPTION.hxx
// ./opencascade/OSD_MAllocHook.hxx
// ./opencascade/OSD_FileNode.hxx
// ./opencascade/OSD_Path.hxx
// ./opencascade/OSD_Disk.hxx
// ./opencascade/OSD_Exception.hxx
// ./opencascade/OSD_Exception_ACCESS_VIOLATION.hxx
// ./opencascade/OSD_DirectoryIterator.hxx
// ./opencascade/OSD_ErrorList.hxx
// ./opencascade/OSD_SingleProtection.hxx
// ./opencascade/OSD_Exception_CTRL_BREAK.hxx
// ./opencascade/OSD_File.hxx
// ./opencascade/OSD_Exception_INT_DIVIDE_BY_ZERO.hxx
// ./opencascade/OSD_FileIterator.hxx
// ./opencascade/OSD_LockType.hxx
// ./opencascade/OSD_SysType.hxx
// ./opencascade/OSD_OpenMode.hxx
// ./opencascade/OSD_OSDError.hxx
// ./opencascade/OSD_Exception_FLT_DENORMAL_OPERAND.hxx
// ./opencascade/OSD_Error.hxx
// ./opencascade/OSD_OEMType.hxx
// ./opencascade/OSD_Exception_ILLEGAL_INSTRUCTION.hxx
// ./opencascade/OSD_SIGSYS.hxx
// ./opencascade/OSD_SIGINT.hxx
// ./opencascade/OSD_SIGBUS.hxx
// ./opencascade/OSD_WhoAmI.hxx
// ./opencascade/OSD_Signal.hxx
// ./opencascade/OSD_SIGHUP.hxx
// ./opencascade/OSD_SignalMode.hxx
// ./opencascade/OSD_Exception_ARRAY_BOUNDS_EXCEEDED.hxx
// ./opencascade/OSD_Exception_FLT_STACK_CHECK.hxx
// ./opencascade/OSD_Chronometer.hxx
// ./opencascade/OSD_SharedLibrary.hxx

// Additional functions

// operators

// register typdefs


// exceptions
register_occ_exception<OSD_Exception>(m, "OSD_Exception");
register_occ_exception<OSD_OSDError>(m, "OSD_OSDError");
register_occ_exception<OSD_Signal>(m, "OSD_Signal");
register_occ_exception<OSD_Exception_ACCESS_VIOLATION>(m, "OSD_Exception_ACCESS_VIOLATION");
register_occ_exception<OSD_Exception_ARRAY_BOUNDS_EXCEEDED>(m, "OSD_Exception_ARRAY_BOUNDS_EXCEEDED");
register_occ_exception<OSD_Exception_CTRL_BREAK>(m, "OSD_Exception_CTRL_BREAK");
register_occ_exception<OSD_Exception_FLT_DENORMAL_OPERAND>(m, "OSD_Exception_FLT_DENORMAL_OPERAND");
register_occ_exception<OSD_Exception_FLT_DIVIDE_BY_ZERO>(m, "OSD_Exception_FLT_DIVIDE_BY_ZERO");
register_occ_exception<OSD_Exception_FLT_INEXACT_RESULT>(m, "OSD_Exception_FLT_INEXACT_RESULT");
register_occ_exception<OSD_Exception_FLT_INVALID_OPERATION>(m, "OSD_Exception_FLT_INVALID_OPERATION");
register_occ_exception<OSD_Exception_FLT_OVERFLOW>(m, "OSD_Exception_FLT_OVERFLOW");
register_occ_exception<OSD_Exception_FLT_STACK_CHECK>(m, "OSD_Exception_FLT_STACK_CHECK");
register_occ_exception<OSD_Exception_FLT_UNDERFLOW>(m, "OSD_Exception_FLT_UNDERFLOW");
register_occ_exception<OSD_Exception_ILLEGAL_INSTRUCTION>(m, "OSD_Exception_ILLEGAL_INSTRUCTION");
register_occ_exception<OSD_Exception_INT_DIVIDE_BY_ZERO>(m, "OSD_Exception_INT_DIVIDE_BY_ZERO");
register_occ_exception<OSD_Exception_INT_OVERFLOW>(m, "OSD_Exception_INT_OVERFLOW");
register_occ_exception<OSD_Exception_INVALID_DISPOSITION>(m, "OSD_Exception_INVALID_DISPOSITION");
register_occ_exception<OSD_Exception_IN_PAGE_ERROR>(m, "OSD_Exception_IN_PAGE_ERROR");
register_occ_exception<OSD_Exception_NONCONTINUABLE_EXCEPTION>(m, "OSD_Exception_NONCONTINUABLE_EXCEPTION");
register_occ_exception<OSD_Exception_PRIV_INSTRUCTION>(m, "OSD_Exception_PRIV_INSTRUCTION");
register_occ_exception<OSD_Exception_STACK_OVERFLOW>(m, "OSD_Exception_STACK_OVERFLOW");
register_occ_exception<OSD_Exception_STATUS_NO_MEMORY>(m, "OSD_Exception_STATUS_NO_MEMORY");
register_occ_exception<OSD_SIGBUS>(m, "OSD_SIGBUS");
register_occ_exception<OSD_SIGHUP>(m, "OSD_SIGHUP");
register_occ_exception<OSD_SIGILL>(m, "OSD_SIGILL");
register_occ_exception<OSD_SIGINT>(m, "OSD_SIGINT");
register_occ_exception<OSD_SIGKILL>(m, "OSD_SIGKILL");
register_occ_exception<OSD_SIGQUIT>(m, "OSD_SIGQUIT");
register_occ_exception<OSD_SIGSEGV>(m, "OSD_SIGSEGV");
register_occ_exception<OSD_SIGSYS>(m, "OSD_SIGSYS");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
