
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>
#include <StdObjMgt_ReadData.hxx>
#include <StdObjMgt_WriteData.hxx>
#include <TDocStd_Document.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <Standard_GUID.hxx>
#include <StdObjMgt_Persistent.hxx>

// module includes
#include <StdObjMgt_Attribute.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <StdObjMgt_Persistent.hxx>
#include <StdObjMgt_ReadData.hxx>
#include <StdObjMgt_SharedObject.hxx>
#include <StdObjMgt_TransientPersistentMap.hxx>
#include <StdObjMgt_WriteData.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdObjMgt_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdObjMgt", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_StdObjMgt_Persistent : public StdObjMgt_Persistent{
    public:
        using StdObjMgt_Persistent::StdObjMgt_Persistent;
        
        
        // public pure virtual
        void Read(StdObjMgt_ReadData & theReadData) override { PYBIND11_OVERLOAD_PURE(void,StdObjMgt_Persistent,Read,theReadData) };
        void Write(StdObjMgt_WriteData & theWriteData) const  override { PYBIND11_OVERLOAD_PURE(void,StdObjMgt_Persistent,Write,theWriteData) };
        void PChildren(NCollection_Sequence<opencascade::handle<StdObjMgt_Persistent> > & ) const  override { PYBIND11_OVERLOAD_PURE(void,StdObjMgt_Persistent,PChildren,) };
        Standard_CString PName() const  override { PYBIND11_OVERLOAD_PURE(Standard_CString,StdObjMgt_Persistent,PName,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<StdObjMgt_MapOfInstantiators , shared_ptr<StdObjMgt_MapOfInstantiators>  >(m,"StdObjMgt_MapOfInstantiators",R"#(None)#");
    py::class_<StdObjMgt_Persistent ,opencascade::handle<StdObjMgt_Persistent> ,Py_StdObjMgt_Persistent , Standard_Transient >(m,"StdObjMgt_Persistent",R"#(Root class for a temporary persistent object that reads data from a file and then creates transient object using the data.)#");
    py::class_<StdObjMgt_ReadData , shared_ptr<StdObjMgt_ReadData>  >(m,"StdObjMgt_ReadData",R"#(Auxiliary data used to read persistent objects from a file.)#");
    py::class_<StdObjMgt_SharedObject , shared_ptr<StdObjMgt_SharedObject>  >(m,"StdObjMgt_SharedObject",R"#(None)#");
    py::class_<StdObjMgt_WriteData , shared_ptr<StdObjMgt_WriteData>  >(m,"StdObjMgt_WriteData",R"#(Auxiliary data used to write persistent objects to a file.)#");

};

// user-defined post-inclusion per module

// user-defined post
