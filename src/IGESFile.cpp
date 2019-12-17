
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations

// module includes
#include <IGESFile_Read.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESFile(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESFile"));


//Python trampoline classes

// classes

// functions
// ./opencascade/IGESFile_Read.hxx
    m.def("IGESFile_Read", 
          (Standard_Integer (*)( char * ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> &  ))  static_cast<Standard_Integer (*)( char * ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> &  )>(&IGESFile_Read),
          R"#(None)#"  , py::arg("nomfic"),  py::arg("amodel"),  py::arg("protocol"));
    m.def("IGESFile_ReadFNES", 
          (Standard_Integer (*)( char * ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> &  ))  static_cast<Standard_Integer (*)( char * ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> &  )>(&IGESFile_ReadFNES),
          R"#(None)#"  , py::arg("nomfic"),  py::arg("amodel"),  py::arg("protocol"));
    m.def("IGESFile_Read", 
          (Standard_Integer (*)( char * ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> & ,  const opencascade::handle<IGESData_FileRecognizer> & ,  const Standard_Boolean  ))  static_cast<Standard_Integer (*)( char * ,  const opencascade::handle<IGESData_IGESModel> & ,  const opencascade::handle<IGESData_Protocol> & ,  const opencascade::handle<IGESData_FileRecognizer> & ,  const Standard_Boolean  )>(&IGESFile_Read),
          R"#(None)#"  , py::arg("nomfic"),  py::arg("amodel"),  py::arg("protocol"),  py::arg("reco"),  py::arg("modefnes")=static_cast<const Standard_Boolean>(Standard_False));

// operators

// register typdefs
// ./opencascade/IGESFile_Read.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
