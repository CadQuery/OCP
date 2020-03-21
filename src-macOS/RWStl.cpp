
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
