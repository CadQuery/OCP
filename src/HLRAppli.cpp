
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
#include <HLRAppli_ReflectLines.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_HLRAppli(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("HLRAppli"));


//Python trampoline classes

// classes


    static_cast<py::class_<HLRAppli_ReflectLines , shared_ptr<HLRAppli_ReflectLines>  >>(m.attr("HLRAppli_ReflectLines"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("aShape") )
    // custom constructors
    // methods
        .def("SetAxes",
             (void (HLRAppli_ReflectLines::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (HLRAppli_ReflectLines::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&HLRAppli_ReflectLines::SetAxes),
             R"#(Sets the normal to the plane of visualisation, the coordinates of the view point and the coordinates of the vertical direction vector.)#"  , py::arg("Nx"),  py::arg("Ny"),  py::arg("Nz"),  py::arg("XAt"),  py::arg("YAt"),  py::arg("ZAt"),  py::arg("XUp"),  py::arg("YUp"),  py::arg("ZUp"))
        .def("Perform",
             (void (HLRAppli_ReflectLines::*)() ) static_cast<void (HLRAppli_ReflectLines::*)() >(&HLRAppli_ReflectLines::Perform),
             R"#(None)#" )
        .def("GetResult",
             (TopoDS_Shape (HLRAppli_ReflectLines::*)() const) static_cast<TopoDS_Shape (HLRAppli_ReflectLines::*)() const>(&HLRAppli_ReflectLines::GetResult),
             R"#(returns resulting compound of reflect lines represented by edges in 3d)#" )
        .def("GetCompoundOf3dEdges",
             (TopoDS_Shape (HLRAppli_ReflectLines::*)( const HLRBRep_TypeOfResultingEdge ,  const Standard_Boolean ,  const Standard_Boolean  ) const) static_cast<TopoDS_Shape (HLRAppli_ReflectLines::*)( const HLRBRep_TypeOfResultingEdge ,  const Standard_Boolean ,  const Standard_Boolean  ) const>(&HLRAppli_ReflectLines::GetCompoundOf3dEdges),
             R"#(returns resulting compound of lines of specified type and visibility represented by edges in 3d or 2d)#"  , py::arg("type"),  py::arg("visible"),  py::arg("In3d"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/HLRAppli_ReflectLines.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
