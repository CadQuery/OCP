
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

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
void register_StdPersistent_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdPersistent", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<StdPersistent_PPrsStd ,std::unique_ptr<StdPersistent_PPrsStd>  >(m,"StdPersistent_PPrsStd",R"#(None)#");
    py::class_<StdPersistent_TopoDS ,std::unique_ptr<StdPersistent_TopoDS>  >(m,"StdPersistent_TopoDS",R"#(None)#");
    py::class_<StdPersistent_Naming ,std::unique_ptr<StdPersistent_Naming>  >(m,"StdPersistent_Naming",R"#(None)#");
    py::class_<StdPersistent_TopLoc ,std::unique_ptr<StdPersistent_TopLoc>  >(m,"StdPersistent_TopLoc",R"#(None)#");
    py::class_<StdPersistent_HArray1 ,std::unique_ptr<StdPersistent_HArray1>  >(m,"StdPersistent_HArray1",R"#(None)#");
    py::class_<StdPersistent ,std::unique_ptr<StdPersistent>  >(m,"StdPersistent",R"#(None)#");
    py::class_<StdPersistent_DataXtd ,std::unique_ptr<StdPersistent_DataXtd>  >(m,"StdPersistent_DataXtd",R"#(None)#");
    py::class_<StdPersistent_DataXtd_Constraint ,std::unique_ptr<StdPersistent_DataXtd_Constraint>  >(m,"StdPersistent_DataXtd_Constraint",R"#(None)#");
    py::class_<StdPersistent_DataXtd_PatternStd ,std::unique_ptr<StdPersistent_DataXtd_PatternStd>  >(m,"StdPersistent_DataXtd_PatternStd",R"#(None)#");
    py::class_<StdPersistent_HArray1OfShape1 ,std::unique_ptr<StdPersistent_HArray1OfShape1>  >(m,"StdPersistent_HArray1OfShape1",R"#()#");

// pre-register typdefs
// ./opencascade/StdPersistent_PPrsStd.hxx
// ./opencascade/StdPersistent.hxx
// ./opencascade/StdPersistent_TopoDS.hxx
// ./opencascade/StdPersistent_DataXtd_PatternStd.hxx
// ./opencascade/StdPersistent_Naming.hxx
// ./opencascade/StdPersistent_DataXtd.hxx
// ./opencascade/StdPersistent_TopLoc.hxx
// ./opencascade/StdPersistent_HArray1.hxx
// ./opencascade/StdPersistent_DataXtd_Constraint.hxx

};

// user-defined post-inclusion per module

// user-defined post
