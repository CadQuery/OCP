
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <RWStl.hxx>
#include <RWStl_Reader.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_RWStl(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("RWStl"));


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

// classes


    static_cast<py::class_<RWStl_Reader ,opencascade::handle<RWStl_Reader> ,Py_RWStl_Reader , Standard_Transient >>(m.attr("RWStl_Reader"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (RWStl_Reader::*)() const) static_cast<const opencascade::handle<Standard_Type> & (RWStl_Reader::*)() const>(&RWStl_Reader::DynamicType),
             R"#(None)#" )
        .def("Read",
             (Standard_Boolean (RWStl_Reader::*)( const char * ,  const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<Standard_Boolean (RWStl_Reader::*)( const char * ,  const opencascade::handle<Message_ProgressIndicator> &  ) >(&RWStl_Reader::Read),
             R"#(Reads data from STL file (either binary or Ascii). This function supports reading multi-domain STL files formed by concatenation of several "plain" files. The mesh nodes are not merged between domains. Unicode paths can be given in UTF-8 encoding. Format is recognized automatically by analysis of the file header. Returns true if success, false on error or user break.)#"  , py::arg("theFile"),  py::arg("theProgress"))
        .def("IsAscii",
             (Standard_Boolean (RWStl_Reader::*)( std::istream &  ) ) static_cast<Standard_Boolean (RWStl_Reader::*)( std::istream &  ) >(&RWStl_Reader::IsAscii),
             R"#(Guess whether the stream is an Ascii STL file, by analysis of the first bytes (~200). The function attempts to put back the read symbols to the stream which thus must support ungetc(). Returns true if the stream seems to contain Ascii STL.)#"  , py::arg("theStream"))
        .def("ReadBinary",
             (Standard_Boolean (RWStl_Reader::*)( std::istream & ,  const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<Standard_Boolean (RWStl_Reader::*)( std::istream & ,  const opencascade::handle<Message_ProgressIndicator> &  ) >(&RWStl_Reader::ReadBinary),
             R"#(Reads STL data from binary stream. The stream must be opened in binary mode. Stops after reading the number of triangles recorded in the file header. Returns true if success, false on error or user break.)#"  , py::arg("theStream"),  py::arg("theProgress"))
        .def("AddNode",
             (Standard_Integer (RWStl_Reader::*)( const gp_XYZ &  ) ) static_cast<Standard_Integer (RWStl_Reader::*)( const gp_XYZ &  ) >(&RWStl_Reader::AddNode),
             R"#(Callback function to be implemented in descendant. Should create new node with specified coordinates in the target model, and return its ID as integer.)#"  , py::arg("thePnt"))
        .def("AddTriangle",
             (void (RWStl_Reader::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) ) static_cast<void (RWStl_Reader::*)( Standard_Integer ,  Standard_Integer ,  Standard_Integer  ) >(&RWStl_Reader::AddTriangle),
             R"#(Callback function to be implemented in descendant. Should create new triangle built on specified nodes in the target model.)#"  , py::arg("theN1"),  py::arg("theN2"),  py::arg("theN3"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&RWStl_Reader::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&RWStl_Reader::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/RWStl.hxx
// ./opencascade/RWStl_Reader.hxx

// operators

// register typdefs
// ./opencascade/RWStl.hxx
// ./opencascade/RWStl_Reader.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
