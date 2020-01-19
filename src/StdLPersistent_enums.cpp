
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TCollection_HExtendedString.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TDocStd_Document.hxx>
#include <StdLPersistent_Data.hxx>

// module includes
#include <StdLPersistent.hxx>
#include <StdLPersistent_Collection.hxx>
#include <StdLPersistent_Data.hxx>
#include <StdLPersistent_Dependency.hxx>
#include <StdLPersistent_Document.hxx>
#include <StdLPersistent_Function.hxx>
#include <StdLPersistent_HArray1.hxx>
#include <StdLPersistent_HArray2.hxx>
#include <StdLPersistent_HString.hxx>
#include <StdLPersistent_NamedData.hxx>
#include <StdLPersistent_Real.hxx>
#include <StdLPersistent_TreeNode.hxx>
#include <StdLPersistent_Value.hxx>
#include <StdLPersistent_Variable.hxx>
#include <StdLPersistent_Void.hxx>
#include <StdLPersistent_XLink.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdLPersistent_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StdLPersistent", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<StdLPersistent , shared_ptr<StdLPersistent>  >(m,"StdLPersistent",R"#(None)#");
    py::class_<StdLPersistent_Collection , shared_ptr<StdLPersistent_Collection>  >(m,"StdLPersistent_Collection",R"#(None)#");
    py::class_<StdLPersistent_Data ,opencascade::handle<StdLPersistent_Data>  , StdObjMgt_Persistent >(m,"StdLPersistent_Data",R"#(None)#");
    py::class_<StdLPersistent_Dependency , shared_ptr<StdLPersistent_Dependency>  >(m,"StdLPersistent_Dependency",R"#(None)#");
    py::class_<StdLPersistent_Document ,opencascade::handle<StdLPersistent_Document>  , StdObjMgt_Persistent >(m,"StdLPersistent_Document",R"#(None)#");
    py::class_<StdLPersistent_Function , shared_ptr<StdLPersistent_Function>  >(m,"StdLPersistent_Function",R"#(None)#");
    py::class_<StdLPersistent_HArray1 , shared_ptr<StdLPersistent_HArray1>  >(m,"StdLPersistent_HArray1",R"#(None)#");
    py::class_<StdLPersistent_HArray1OfPersistent ,opencascade::handle<StdLPersistent_HArray1OfPersistent>  , Standard_Transient >(m,"StdLPersistent_HArray1OfPersistent",R"#()#");
    py::class_<StdLPersistent_HArray2 , shared_ptr<StdLPersistent_HArray2>  >(m,"StdLPersistent_HArray2",R"#(None)#");
    py::class_<StdLPersistent_HArray2OfPersistent ,opencascade::handle<StdLPersistent_HArray2OfPersistent>  , Standard_Transient >(m,"StdLPersistent_HArray2OfPersistent",R"#()#");
    py::class_<StdLPersistent_HString , shared_ptr<StdLPersistent_HString>  >(m,"StdLPersistent_HString",R"#(None)#");
    py::class_<StdLPersistent_NamedData , shared_ptr<StdLPersistent_NamedData>  >(m,"StdLPersistent_NamedData",R"#(None)#");
    py::class_<StdLPersistent_Real , shared_ptr<StdLPersistent_Real>  >(m,"StdLPersistent_Real",R"#(None)#");
    py::class_<StdLPersistent_TreeNode , shared_ptr<StdLPersistent_TreeNode>  >(m,"StdLPersistent_TreeNode",R"#(None)#");
    py::class_<StdLPersistent_Value , shared_ptr<StdLPersistent_Value>  >(m,"StdLPersistent_Value",R"#(None)#");
    py::class_<StdLPersistent_Variable , shared_ptr<StdLPersistent_Variable>  >(m,"StdLPersistent_Variable",R"#(None)#");
    py::class_<StdLPersistent_Void , shared_ptr<StdLPersistent_Void>  >(m,"StdLPersistent_Void",R"#(None)#");
    py::class_<StdLPersistent_XLink , shared_ptr<StdLPersistent_XLink>  >(m,"StdLPersistent_XLink",R"#(None)#");

};

// user-defined post-inclusion per module

// user-defined post
