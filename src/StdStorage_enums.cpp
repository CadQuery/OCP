
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Storage_BaseDriver.hxx>
#include <Storage_BaseDriver.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Storage_Schema.hxx>
#include <Storage_Root.hxx>
#include <Storage_Schema.hxx>
#include <Storage_BaseDriver.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <StdStorage_HeaderData.hxx>
#include <StdStorage_TypeData.hxx>
#include <StdStorage_RootData.hxx>
#include <StdStorage_Data.hxx>
#include <Storage_BaseDriver.hxx>
#include <TCollection_AsciiString.hxx>
#include <StdObjMgt_Persistent.hxx>

// module includes
#include <StdStorage.hxx>
#include <StdStorage_BacketOfPersistent.hxx>
#include <StdStorage_Data.hxx>
#include <StdStorage_HeaderData.hxx>
#include <StdStorage_HSequenceOfRoots.hxx>
#include <StdStorage_MapOfRoots.hxx>
#include <StdStorage_MapOfTypes.hxx>
#include <StdStorage_Root.hxx>
#include <StdStorage_RootData.hxx>
#include <StdStorage_SequenceOfRoots.hxx>
#include <StdStorage_TypeData.hxx>

// template related includes
// ./opencascade/StdStorage_SequenceOfRoots.hxx
#include "NCollection.hxx"
// ./opencascade/StdStorage_MapOfRoots.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdStorage_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdStorage", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<StdStorage_TypeData ,opencascade::handle<StdStorage_TypeData>  , Standard_Transient >(m,"StdStorage_TypeData",R"#(Storage type data section keeps association between persistent textual types and their numbersStorage type data section keeps association between persistent textual types and their numbersStorage type data section keeps association between persistent textual types and their numbers)#");
    py::class_<StdStorage_Root ,opencascade::handle<StdStorage_Root>  , Standard_Transient >(m,"StdStorage_Root",R"#(Describes a named persistent rootDescribes a named persistent root)#");
    py::class_<StdStorage_Data ,opencascade::handle<StdStorage_Data>  , Standard_Transient >(m,"StdStorage_Data",R"#(A picture memorizing the stored in a container (for example, in a file). A StdStorage_Data object represents either: - persistent data to be written into a container, or - persistent data which are read from a container. A StdStorage_Data object is used in both the storage and retrieval operations: - Storage mechanism: create an empty StdStorage_Data object, then add successively persistent objects (roots) to be stored using the StdStorage_RootData's function AddRoot. When the set of data is complete, write it to a container using the function Write in your StdStorage algorithm. - Retrieval mechanism: a StdStorage_Data object is returned by the Read function from your StdStorage algorithm. Use the StdStorage_RootData's functions NumberOfRoots and Roots to find the roots which were stored in the read container. The roots of a StdStorage_Data object may share references on objects. The shared internal references of a StdStorage_Data object are maintained by the storage/retrieval mechanism. Note: References shared by objects which are contained in two distinct StdStorage_Data objects are not maintained by the storage/retrieval mechanism: external references are not supported by Storage_Schema algorithm)#");
    py::class_<StdStorage ,std::unique_ptr<StdStorage>  >(m,"StdStorage",R"#(StdStorage package is used to write and read persistent objects. These objects are read and written by a retrieval or storage algorithm (compatible with legacy Storage_Schema) in a container (disk, memory, network ...). Drivers (FSD_File objects) assign a physical container for data to be stored or retrieved. The standard procedure for an application in reading a container is to call one of the Read functions providing either a file path or a driver opened for reading. Thes function update the instance of the StdStorage_Data class which contains the data being read. The standard procedure for an application in writing a container is the following: - open the driver in writing mode, - create an instance of the StdStorage_Data class, then add the persistent data to write with the function AddRoot, - call the function Write from the storage, setting the driver and the Storage_Data instance as parameters, - close the driver.)#");
    py::class_<StdStorage_BucketIterator ,std::unique_ptr<StdStorage_BucketIterator>  >(m,"StdStorage_BucketIterator",R"#()#");
    py::class_<StdStorage_HeaderData ,opencascade::handle<StdStorage_HeaderData>  , Standard_Transient >(m,"StdStorage_HeaderData",R"#(Storage header data section that contains some auxiliary information (application name, schema version, creation date, comments and so on...)Storage header data section that contains some auxiliary information (application name, schema version, creation date, comments and so on...)Storage header data section that contains some auxiliary information (application name, schema version, creation date, comments and so on...))#");
    py::class_<StdStorage_HSequenceOfRoots ,std::unique_ptr<StdStorage_HSequenceOfRoots>  >(m,"StdStorage_HSequenceOfRoots",R"#()#");
    py::class_<StdStorage_Bucket ,std::unique_ptr<StdStorage_Bucket>  >(m,"StdStorage_Bucket",R"#(None)#");
    py::class_<StdStorage_RootData ,opencascade::handle<StdStorage_RootData>  , Standard_Transient >(m,"StdStorage_RootData",R"#(Storage root data section contains root persistent objectsStorage root data section contains root persistent objectsStorage root data section contains root persistent objects)#");
    py::class_<StdStorage_BucketOfPersistent ,std::unique_ptr<StdStorage_BucketOfPersistent>  >(m,"StdStorage_BucketOfPersistent",R"#()#");

// pre-register typdefs
// ./opencascade/StdStorage_TypeData.hxx
// ./opencascade/StdStorage_HeaderData.hxx
// ./opencascade/StdStorage_SequenceOfRoots.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<StdStorage_Root> >(m,"StdStorage_SequenceOfRoots");  
// ./opencascade/StdStorage_Root.hxx
// ./opencascade/StdStorage_RootData.hxx
// ./opencascade/StdStorage_Data.hxx
// ./opencascade/StdStorage_HSequenceOfRoots.hxx
// ./opencascade/StdStorage.hxx
// ./opencascade/StdStorage_MapOfRoots.hxx
// ./opencascade/StdStorage_BacketOfPersistent.hxx
// ./opencascade/StdStorage_MapOfTypes.hxx

};

// user-defined post-inclusion per module

// user-defined post
