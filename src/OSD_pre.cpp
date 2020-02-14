
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <OSD_OSDError.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_NullObject.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <Quantity_Date.hxx>
#include <OSD_Path.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_File.hxx>
#include <OSD_Directory.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_OSDError.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>
#include <Quantity_Date.hxx>
#include <Standard_ProgramError.hxx>
#include <OSD_Protection.hxx>

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
void register_OSD_enums(py::module &main_module) {


py::module m = main_module.def_submodule("OSD", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<OSD_SysType>(m, "OSD_SysType",R"#(Thisd is a set of possible system types. 'Default' means SysType of machine operating this process. This can be used with the Path class. All UNIX-like are grouped under "UnixBSD" or "UnixSystemV". Such systems are Solaris, NexTOS ... A category of systems accept MSDOS-like path such as WindowsNT and OS2.)#")
        .value("OSD_Unknown",OSD_SysType::OSD_Unknown)
        .value("OSD_Default",OSD_SysType::OSD_Default)
        .value("OSD_UnixBSD",OSD_SysType::OSD_UnixBSD)
        .value("OSD_UnixSystemV",OSD_SysType::OSD_UnixSystemV)
        .value("OSD_VMS",OSD_SysType::OSD_VMS)
        .value("OSD_OS2",OSD_SysType::OSD_OS2)
        .value("OSD_OSF",OSD_SysType::OSD_OSF)
        .value("OSD_MacOs",OSD_SysType::OSD_MacOs)
        .value("OSD_Taligent",OSD_SysType::OSD_Taligent)
        .value("OSD_WindowsNT",OSD_SysType::OSD_WindowsNT)
        .value("OSD_LinuxREDHAT",OSD_SysType::OSD_LinuxREDHAT)
        .value("OSD_Aix",OSD_SysType::OSD_Aix).export_values();
    py::enum_<OSD_KindFile>(m, "OSD_KindFile",R"#(Specifies the type of files.)#")
        .value("OSD_FILE",OSD_KindFile::OSD_FILE)
        .value("OSD_DIRECTORY",OSD_KindFile::OSD_DIRECTORY)
        .value("OSD_LINK",OSD_KindFile::OSD_LINK)
        .value("OSD_SOCKET",OSD_KindFile::OSD_SOCKET)
        .value("OSD_UNKNOWN",OSD_KindFile::OSD_UNKNOWN).export_values();
    py::enum_<OSD_LoadMode>(m, "OSD_LoadMode",R"#(This enumeration is used to load shareable libraries.)#")
        .value("OSD_RTLD_LAZY",OSD_LoadMode::OSD_RTLD_LAZY)
        .value("OSD_RTLD_NOW",OSD_LoadMode::OSD_RTLD_NOW).export_values();
    py::enum_<OSD_FromWhere>(m, "OSD_FromWhere",R"#(Used by OSD_File in the method Seek.)#")
        .value("OSD_FromBeginning",OSD_FromWhere::OSD_FromBeginning)
        .value("OSD_FromHere",OSD_FromWhere::OSD_FromHere)
        .value("OSD_FromEnd",OSD_FromWhere::OSD_FromEnd).export_values();
    py::enum_<OSD_SingleProtection>(m, "OSD_SingleProtection",R"#(Access rights for files. R means Read, W means Write, X means eXecute and D means Delete. On UNIX, the right to Delete is combined with Write access. So if "W"rite is not set and "D"elete is, "W"rite will be set and if "W" is set, "D" will be too.)#")
        .value("OSD_None",OSD_SingleProtection::OSD_None)
        .value("OSD_R",OSD_SingleProtection::OSD_R)
        .value("OSD_W",OSD_SingleProtection::OSD_W)
        .value("OSD_RW",OSD_SingleProtection::OSD_RW)
        .value("OSD_X",OSD_SingleProtection::OSD_X)
        .value("OSD_RX",OSD_SingleProtection::OSD_RX)
        .value("OSD_WX",OSD_SingleProtection::OSD_WX)
        .value("OSD_RWX",OSD_SingleProtection::OSD_RWX)
        .value("OSD_D",OSD_SingleProtection::OSD_D)
        .value("OSD_RD",OSD_SingleProtection::OSD_RD)
        .value("OSD_WD",OSD_SingleProtection::OSD_WD)
        .value("OSD_RWD",OSD_SingleProtection::OSD_RWD)
        .value("OSD_XD",OSD_SingleProtection::OSD_XD)
        .value("OSD_RXD",OSD_SingleProtection::OSD_RXD)
        .value("OSD_WXD",OSD_SingleProtection::OSD_WXD)
        .value("OSD_RWXD",OSD_SingleProtection::OSD_RWXD).export_values();
    py::enum_<OSD_LockType>(m, "OSD_LockType",R"#(locks for files. NoLock is the default value when opening a file.)#")
        .value("OSD_NoLock",OSD_LockType::OSD_NoLock)
        .value("OSD_ReadLock",OSD_LockType::OSD_ReadLock)
        .value("OSD_WriteLock",OSD_LockType::OSD_WriteLock)
        .value("OSD_ExclusiveLock",OSD_LockType::OSD_ExclusiveLock).export_values();
    py::enum_<OSD_WhoAmI>(m, "OSD_WhoAmI",R"#(Allows great accuracy for error management. This is private.)#")
        .value("OSD_WDirectory",OSD_WhoAmI::OSD_WDirectory)
        .value("OSD_WDirectoryIterator",OSD_WhoAmI::OSD_WDirectoryIterator)
        .value("OSD_WEnvironment",OSD_WhoAmI::OSD_WEnvironment)
        .value("OSD_WFile",OSD_WhoAmI::OSD_WFile)
        .value("OSD_WFileNode",OSD_WhoAmI::OSD_WFileNode)
        .value("OSD_WFileIterator",OSD_WhoAmI::OSD_WFileIterator)
        .value("OSD_WPath",OSD_WhoAmI::OSD_WPath)
        .value("OSD_WProcess",OSD_WhoAmI::OSD_WProcess)
        .value("OSD_WProtection",OSD_WhoAmI::OSD_WProtection)
        .value("OSD_WHost",OSD_WhoAmI::OSD_WHost)
        .value("OSD_WDisk",OSD_WhoAmI::OSD_WDisk)
        .value("OSD_WChronometer",OSD_WhoAmI::OSD_WChronometer)
        .value("OSD_WTimer",OSD_WhoAmI::OSD_WTimer)
        .value("OSD_WPackage",OSD_WhoAmI::OSD_WPackage)
        .value("OSD_WEnvironmentIterator",OSD_WhoAmI::OSD_WEnvironmentIterator).export_values();
    py::enum_<OSD_OpenMode>(m, "OSD_OpenMode",R"#(Specifies the file open mode.)#")
        .value("OSD_ReadOnly",OSD_OpenMode::OSD_ReadOnly)
        .value("OSD_WriteOnly",OSD_OpenMode::OSD_WriteOnly)
        .value("OSD_ReadWrite",OSD_OpenMode::OSD_ReadWrite).export_values();
    py::enum_<OSD_SignalMode>(m, "OSD_SignalMode",R"#(Mode of operation for OSD::SetSignal() function)#")
        .value("OSD_SignalMode_AsIs",OSD_SignalMode::OSD_SignalMode_AsIs)
        .value("OSD_SignalMode_Set",OSD_SignalMode::OSD_SignalMode_Set)
        .value("OSD_SignalMode_SetUnhandled",OSD_SignalMode::OSD_SignalMode_SetUnhandled)
        .value("OSD_SignalMode_Unset",OSD_SignalMode::OSD_SignalMode_Unset).export_values();
    py::enum_<OSD_OEMType>(m, "OSD_OEMType",R"#(This is set of possible machine types used in OSD_Host::MachineType)#")
        .value("OSD_Unavailable",OSD_OEMType::OSD_Unavailable)
        .value("OSD_SUN",OSD_OEMType::OSD_SUN)
        .value("OSD_DEC",OSD_OEMType::OSD_DEC)
        .value("OSD_SGI",OSD_OEMType::OSD_SGI)
        .value("OSD_NEC",OSD_OEMType::OSD_NEC)
        .value("OSD_MAC",OSD_OEMType::OSD_MAC)
        .value("OSD_PC",OSD_OEMType::OSD_PC)
        .value("OSD_HP",OSD_OEMType::OSD_HP)
        .value("OSD_IBM",OSD_OEMType::OSD_IBM)
        .value("OSD_VAX",OSD_OEMType::OSD_VAX)
        .value("OSD_LIN",OSD_OEMType::OSD_LIN)
        .value("OSD_AIX",OSD_OEMType::OSD_AIX).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<OSD_Chronometer , shared_ptr<OSD_Chronometer>  >(m,"OSD_Chronometer",R"#(This class measures CPU time (both user and system) consumed by current process or thread. The chronometer can be started and stopped multiple times, and measures cumulative time.)#");
    py::class_<OSD_DirectoryIterator , shared_ptr<OSD_DirectoryIterator>  >(m,"OSD_DirectoryIterator",R"#(Manages a breadth-only search for sub-directories in the specified Path. There is no specific order of results.)#");
    py::class_<OSD_Disk , shared_ptr<OSD_Disk>  >(m,"OSD_Disk",R"#(Disk management (a set of disk oriented tools))#");
    py::class_<OSD_Environment , shared_ptr<OSD_Environment>  >(m,"OSD_Environment",R"#(Management of system environment variables An environment variable is composed of a variable name and its value.)#");
    py::class_<OSD_Error , shared_ptr<OSD_Error>  >(m,"OSD_Error",R"#(Accurate management of OSD specific errors.)#");
    py::class_<OSD_FileIterator , shared_ptr<OSD_FileIterator>  >(m,"OSD_FileIterator",R"#(Manages a breadth-only search for files in the specified Path. There is no specific order of results.)#");
    py::class_<OSD_FileNode , shared_ptr_nodelete<OSD_FileNode>  >(m,"OSD_FileNode",R"#(A class for 'File' and 'Directory' grouping common methods (file/directory manipulation tools). The "file oriented" name means files or directories which are in fact hard coded as files.)#");
    py::class_<OSD_Host , shared_ptr<OSD_Host>  >(m,"OSD_Host",R"#(Carries information about a Host System version ,host name, nodename ...)#");
    py::class_<OSD_MAllocHook , shared_ptr<OSD_MAllocHook>  >(m,"OSD_MAllocHook",R"#(This class provides the possibility to set callback for memory allocation/deallocation. On MS Windows, it works only in Debug builds. It relies on the debug CRT function _CrtSetAllocHook (see MSDN for help).)#");
    py::class_<OSD_MemInfo , shared_ptr<OSD_MemInfo>  >(m,"OSD_MemInfo",R"#(This class provide information about memory utilized by current process. This information includes: - Private Memory - synthetic value that tries to filter out the memory usage only by the process itself (allocated for data and stack), excluding dynamic libraries. These pages may be in RAM or in SWAP. - Virtual Memory - amount of reserved and committed memory in the user-mode portion of the virtual address space. Notice that this counter includes reserved memory (not yet in used) and shared between processes memory (libraries). - Working Set - set of memory pages in the virtual address space of the process that are currently resident in physical memory (RAM). These pages are available for an application to use without triggering a page fault. - Pagefile Usage - space allocated for the pagefile, in bytes. Those pages may or may not be in memory (RAM) thus this counter couldn't be used to estimate how many active pages doesn't present in RAM.)#");
    py::class_<OSD_Parallel , shared_ptr<OSD_Parallel>  >(m,"OSD_Parallel",R"#(Simple tool for code parallelization.)#");
    py::class_<OSD_Path , shared_ptr<OSD_Path>  >(m,"OSD_Path",R"#(None)#");
    py::class_<OSD_PerfMeter , shared_ptr<OSD_PerfMeter>  >(m,"OSD_PerfMeter",R"#(This class enables measuring the CPU time between two points of code execution, regardless of the scope of these points of code. A meter is identified by its name (string). So multiple objects in various places of user code may point to the same meter. The results will be printed on stdout upon finish of the program. For details see OSD_PerfMeter.h)#");
    py::class_<OSD_Process , shared_ptr<OSD_Process>  >(m,"OSD_Process",R"#(A set of system process tools)#");
    py::class_<OSD_Protection , shared_ptr<OSD_Protection>  >(m,"OSD_Protection",R"#(This class provides data to manage file protection Example:These rights are treated in a system dependent manner : On UNIX you have User,Group and Other rights On VMS you have Owner,Group,World and System rights An automatic conversion is done between OSD and UNIX/VMS.)#");
    py::class_<OSD_SharedLibrary , shared_ptr<OSD_SharedLibrary>  >(m,"OSD_SharedLibrary",R"#(Interface to dynamic library loader. Provides tools to load a shared library and retrieve the address of an entry point.)#");
    py::class_<OSD_Thread , shared_ptr<OSD_Thread>  >(m,"OSD_Thread",R"#(A simple platform-intependent interface to execute and control threads.)#");
    py::class_<OSD_ThreadPool ,opencascade::handle<OSD_ThreadPool>  , Standard_Transient >(m,"OSD_ThreadPool",R"#(Class defining a thread pool for executing algorithms in multi-threaded mode. Thread pool allocates requested amount of threads and keep them alive (in sleep mode when unused) during thread pool lifetime. The same pool can be used by multiple consumers, including nested multi-threading algorithms and concurrent threads: - Thread pool can be used either by multi-threaded algorithm by creating OSD_ThreadPool::Launcher. The functor performing a job takes two parameters - Thread Index and Data Index: void operator(int theThreadIndex, int theDataIndex){} Multi-threaded algorithm may rely on Thread Index for allocating thread-local variables in array form, since the Thread Index is guaranteed to be within range OSD_ThreadPool::Lower() and OSD_ThreadPool::Upper(). - Default thread pool (OSD_ThreadPool::DefaultPool()) can be used in general case, but application may prefer creating a dedicated pool for better control. - Default thread pool allocates the amount of threads considering concurrency level of the system (amount of logical processors). This can be overridden during OSD_ThreadPool construction or by calling OSD_ThreadPool::Init() (the pool should not be used!). - OSD_ThreadPool::Launcher reserves specific amount of threads from the pool for executing multi-threaded Job. Normally, single Launcher instance will occupy all threads available in thread pool, so that nested multi-threaded algorithms (within the same thread) and concurrent threads trying to use the same thread pool will run sequentially. This behavior is affected by OSD_ThreadPool::NbDefaultThreadsToLaunch() parameter and Launcher constructor, so that single Launcher instance will occupy not all threads in the pool allowing other threads to be used concurrently. - OSD_ThreadPool::Launcher locks thread one-by-one from thread pool in a thread-safe way. - Each working thread catches exceptions occurred during job execution, and Launcher will throw Standard_Failure in a caller thread on completed execution.)#");
    py::class_<OSD_Directory , shared_ptr<OSD_Directory>  , OSD_FileNode >(m,"OSD_Directory",R"#(Management of directories (a set of directory oriented tools))#");
    py::class_<OSD_File , shared_ptr<OSD_File>  , OSD_FileNode >(m,"OSD_File",R"#(Basic tools to manage files Warning: 'ProgramError' is raised when somebody wants to use the methods Read, Write, Seek, Close when File is not open.)#");
    py::class_<OSD_Timer , shared_ptr<OSD_Timer>  , OSD_Chronometer >(m,"OSD_Timer",R"#(Working on heterogeneous platforms we need to use the system call gettimeofday. This function is portable and it measures ELAPSED time and CPU time in seconds and microseconds. Example: OSD_Timer aTimer; aTimer.Start(); // Start the timers (t1). ..... // Do something. aTimer.Stop(); // Stop the timers (t2). aTimer.Show(); // Give the elapsed time between t1 and t2. // Give also the process CPU time between // t1 and t2.)#");

};

// user-defined post-inclusion per module

// user-defined post
