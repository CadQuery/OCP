
// std lib related includes
#include <tuple>

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

    // default constructor
    register_default_constructor<RWStl , shared_ptr<RWStl>>(m,"RWStl");

    static_cast<py::class_<RWStl , shared_ptr<RWStl> >>(m.attr("RWStl"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("WriteBinary_s",
                    (Standard_Boolean (*)( const opencascade::handle<Poly_Triangulation> & , const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Poly_Triangulation> & , const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl::WriteBinary),
                    R"#(Write triangulation to binary STL file. binary format of an STL file. Returns false if the cannot be opened;)#"  , py::arg("theMesh"),  py::arg("thePath"),  py::arg("theProgInd")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
        .def_static("WriteAscii_s",
                    (Standard_Boolean (*)( const opencascade::handle<Poly_Triangulation> & , const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Poly_Triangulation> & , const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl::WriteAscii),
                    R"#(write the meshing in a file following the Ascii format of an STL file. Returns false if the cannot be opened;)#"  , py::arg("theMesh"),  py::arg("thePath"),  py::arg("theProgInd")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
        .def_static("ReadFile_s",
                    (opencascade::handle<Poly_Triangulation> (*)( const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<opencascade::handle<Poly_Triangulation> (*)( const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl::ReadFile),
                    R"#(Read specified STL file and returns its content as triangulation. In case of error, returns Null handle.)#"  , py::arg("theFile"),  py::arg("aProgInd")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
        .def_static("ReadFile_s",
                    (opencascade::handle<Poly_Triangulation> (*)( const Standard_CString , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<opencascade::handle<Poly_Triangulation> (*)( const Standard_CString , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl::ReadFile),
                    R"#(Read specified STL file and returns its content as triangulation. In case of error, returns Null handle.)#"  , py::arg("theFile"),  py::arg("aProgInd")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
        .def_static("ReadBinary_s",
                    (opencascade::handle<Poly_Triangulation> (*)( const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<opencascade::handle<Poly_Triangulation> (*)( const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl::ReadBinary),
                    R"#(Read triangulation from a binary STL file In case of error, returns Null handle.)#"  , py::arg("thePath"),  py::arg("theProgInd")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
        .def_static("ReadAscii_s",
                    (opencascade::handle<Poly_Triangulation> (*)( const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<opencascade::handle<Poly_Triangulation> (*)( const OSD_Path & , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl::ReadAscii),
                    R"#(Read triangulation from an Ascii STL file In case of error, returns Null handle.)#"  , py::arg("thePath"),  py::arg("theProgInd")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(Handle ( Message_ProgressIndicator ) ( )))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<RWStl_Reader ,opencascade::handle<RWStl_Reader>,Py_RWStl_Reader , Standard_Transient>>(m.attr("RWStl_Reader"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (RWStl_Reader::*)() const) static_cast<const opencascade::handle<Standard_Type> & (RWStl_Reader::*)() const>(&RWStl_Reader::DynamicType),
             R"#(None)#" )
        .def("Read",
             (Standard_Boolean (RWStl_Reader::*)( const char * , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (RWStl_Reader::*)( const char * , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl_Reader::Read),
             R"#(Reads data from STL file (either binary or Ascii). This function supports reading multi-domain STL files formed by concatenation of several "plain" files. The mesh nodes are not merged between domains. Unicode paths can be given in UTF-8 encoding. Format is recognized automatically by analysis of the file header. Returns true if success, false on error or user break.)#"  , py::arg("theFile"),  py::arg("theProgress"))
        .def("IsAscii",
             (Standard_Boolean (RWStl_Reader::*)( std::istream & ) ) static_cast<Standard_Boolean (RWStl_Reader::*)( std::istream & ) >(&RWStl_Reader::IsAscii),
             R"#(Guess whether the stream is an Ascii STL file, by analysis of the first bytes (~200). The function attempts to put back the read symbols to the stream which thus must support ungetc(). Returns true if the stream seems to contain Ascii STL.)#"  , py::arg("theStream"))
        .def("ReadBinary",
             (Standard_Boolean (RWStl_Reader::*)( std::istream & , const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (RWStl_Reader::*)( std::istream & , const opencascade::handle<Message_ProgressIndicator> & ) >(&RWStl_Reader::ReadBinary),
             R"#(Reads STL data from binary stream. The stream must be opened in binary mode. Stops after reading the number of triangles recorded in the file header. Returns true if success, false on error or user break.)#"  , py::arg("theStream"),  py::arg("theProgress"))
        .def("AddNode",
             (Standard_Integer (RWStl_Reader::*)( const gp_XYZ & ) ) static_cast<Standard_Integer (RWStl_Reader::*)( const gp_XYZ & ) >(&RWStl_Reader::AddNode),
             R"#(Callback function to be implemented in descendant. Should create new node with specified coordinates in the target model, and return its ID as integer.)#"  , py::arg("thePnt"))
        .def("AddTriangle",
             (void (RWStl_Reader::*)( Standard_Integer , Standard_Integer , Standard_Integer ) ) static_cast<void (RWStl_Reader::*)( Standard_Integer , Standard_Integer , Standard_Integer ) >(&RWStl_Reader::AddTriangle),
             R"#(Callback function to be implemented in descendant. Should create new triangle built on specified nodes in the target model.)#"  , py::arg("theN1"),  py::arg("theN2"),  py::arg("theN3"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&RWStl_Reader::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&RWStl_Reader::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/RWStl_Reader.hxx
// ./opencascade/RWStl.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
