
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdObjMgt_MapOfInstantiators.hxx>

// module includes
#include <StdPersistent.hxx>
#include <StdPersistent_DataXtd.hxx>
#include <StdPersistent_DataXtd_Constraint.hxx>
#include <StdPersistent_DataXtd_PatternStd.hxx>
#include <StdPersistent_HArray1.hxx>
#include <StdPersistent_Naming.hxx>
#include <StdPersistent_PPrsStd.hxx>
#include <StdPersistent_TopLoc.hxx>
#include <StdPersistent_TopoDS.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdPersistent(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdPersistent"));


//Python trampoline classes

// classes


    static_cast<py::class_<StdPersistent_HArray1OfShape1 ,std::unique_ptr<StdPersistent_HArray1OfShape1>  >>(m.attr("StdPersistent_HArray1OfShape1"))
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const StdObject_Shape & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init< const NCollection_Array1<StdObject_Shape> & >()  , py::arg("theOther") )
        .def("Array1",
             (const NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() const) static_cast<const NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() const>(&StdPersistent_HArray1OfShape1::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() ) static_cast<NCollection_Array1<StdObject_Shape> & (StdPersistent_HArray1OfShape1::*)() >(&StdPersistent_HArray1OfShape1::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (StdPersistent_HArray1OfShape1::*)() const) static_cast<const opencascade::handle<Standard_Type> & (StdPersistent_HArray1OfShape1::*)() const>(&StdPersistent_HArray1OfShape1::DynamicType),
             R"#(None)#" )
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&StdPersistent_HArray1OfShape1::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&StdPersistent_HArray1OfShape1::get_type_descriptor),
                    R"#(None)#" )
;

// functions
// ./opencascade/StdPersistent_PPrsStd.hxx
// ./opencascade/StdPersistent.hxx
// ./opencascade/StdPersistent_TopoDS.hxx
// ./opencascade/StdPersistent_DataXtd_PatternStd.hxx
// ./opencascade/StdPersistent_Naming.hxx
// ./opencascade/StdPersistent_DataXtd.hxx
// ./opencascade/StdPersistent_TopLoc.hxx
// ./opencascade/StdPersistent_HArray1.hxx
// ./opencascade/StdPersistent_DataXtd_Constraint.hxx

// operators

// register typdefs
// ./opencascade/StdPersistent_PPrsStd.hxx
// ./opencascade/StdPersistent.hxx
// ./opencascade/StdPersistent_TopoDS.hxx
// ./opencascade/StdPersistent_DataXtd_PatternStd.hxx
// ./opencascade/StdPersistent_Naming.hxx
// ./opencascade/StdPersistent_DataXtd.hxx
// ./opencascade/StdPersistent_TopLoc.hxx
// ./opencascade/StdPersistent_HArray1.hxx
// ./opencascade/StdPersistent_DataXtd_Constraint.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
