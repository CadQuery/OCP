
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

// module includes
#include <RWStl.hxx>
#include <RWStl_Reader.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStl_enums(py::module &main_module) {


py::module m = main_module.def_submodule("RWStl", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_RWStl_Reader : public RWStl_Reader{
    public:
        using RWStl_Reader::RWStl_Reader;


        // public pure virtual
        Standard_Integer AddNode(const gp_XYZ & thePnt) override { PYBIND11_OVERLOAD_PURE(Standard_Integer,RWStl_Reader,AddNode,thePnt) };
        void AddTriangle(Standard_Integer theN1,Standard_Integer theN2,Standard_Integer theN3) override { PYBIND11_OVERLOAD_PURE(void,RWStl_Reader,AddTriangle,theN1,theN2,theN3) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<RWStl , shared_ptr<RWStl> >(m,"RWStl",R"#(This class provides methods to read and write triangulation from / to the STL files.)#");
    py::class_<RWStl_Reader ,opencascade::handle<RWStl_Reader>,Py_RWStl_Reader , Standard_Transient>(m,"RWStl_Reader",R"#(An abstract class implementing procedure to read STL file.)#");

};

// user-defined post-inclusion per module

// user-defined post
