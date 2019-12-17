
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TDocStd_Document.hxx>
#include <StdLPersistent_Data.hxx>
#include <StdObjMgt_MapOfInstantiators.hxx>
#include <TCollection_HExtendedString.hxx>

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

// classes forward declarations only
    py::class_<StdLPersistent_Void ,std::unique_ptr<StdLPersistent_Void>  >(m,"StdLPersistent_Void",R"#(None)#");
    py::class_<StdLPersistent_HArray2 ,std::unique_ptr<StdLPersistent_HArray2>  >(m,"StdLPersistent_HArray2",R"#(None)#");
    py::class_<StdLPersistent_NamedData ,std::unique_ptr<StdLPersistent_NamedData>  >(m,"StdLPersistent_NamedData",R"#(None)#");
    py::class_<StdLPersistent_Value ,std::unique_ptr<StdLPersistent_Value>  >(m,"StdLPersistent_Value",R"#(None)#");
    py::class_<StdLPersistent_Document ,opencascade::handle<StdLPersistent_Document>  , StdObjMgt_Persistent >(m,"StdLPersistent_Document",R"#(None)#");
    py::class_<StdLPersistent_Function ,std::unique_ptr<StdLPersistent_Function>  >(m,"StdLPersistent_Function",R"#(None)#");
    py::class_<StdLPersistent_XLink ,std::unique_ptr<StdLPersistent_XLink>  >(m,"StdLPersistent_XLink",R"#(None)#");
    py::class_<StdLPersistent_HArray1OfPersistent ,std::unique_ptr<StdLPersistent_HArray1OfPersistent>  >(m,"StdLPersistent_HArray1OfPersistent",R"#()#");
    py::class_<StdLPersistent_Data ,opencascade::handle<StdLPersistent_Data>  , StdObjMgt_Persistent >(m,"StdLPersistent_Data",R"#(None)#");
    py::class_<StdLPersistent_HArray2OfPersistent ,std::unique_ptr<StdLPersistent_HArray2OfPersistent>  >(m,"StdLPersistent_HArray2OfPersistent",R"#()#");
    py::class_<StdLPersistent_Dependency ,std::unique_ptr<StdLPersistent_Dependency>  >(m,"StdLPersistent_Dependency",R"#(None)#");
    py::class_<StdLPersistent ,std::unique_ptr<StdLPersistent>  >(m,"StdLPersistent",R"#(None)#");
    py::class_<StdLPersistent_Variable ,std::unique_ptr<StdLPersistent_Variable>  >(m,"StdLPersistent_Variable",R"#(None)#");
    py::class_<StdLPersistent_Real ,std::unique_ptr<StdLPersistent_Real>  >(m,"StdLPersistent_Real",R"#(None)#");
    py::class_<StdLPersistent_TreeNode ,std::unique_ptr<StdLPersistent_TreeNode>  >(m,"StdLPersistent_TreeNode",R"#(None)#");
    py::class_<StdLPersistent_HString ,std::unique_ptr<StdLPersistent_HString>  >(m,"StdLPersistent_HString",R"#(None)#");
    py::class_<StdLPersistent_Collection ,std::unique_ptr<StdLPersistent_Collection>  >(m,"StdLPersistent_Collection",R"#(None)#");
    py::class_<StdLPersistent_HArray1 ,std::unique_ptr<StdLPersistent_HArray1>  >(m,"StdLPersistent_HArray1",R"#(None)#");

// pre-register typdefs
// ./opencascade/StdLPersistent_Void.hxx
// ./opencascade/StdLPersistent_HArray2.hxx
// ./opencascade/StdLPersistent_TreeNode.hxx
// ./opencascade/StdLPersistent_NamedData.hxx
// ./opencascade/StdLPersistent_Dependency.hxx
// ./opencascade/StdLPersistent_Value.hxx
// ./opencascade/StdLPersistent_Collection.hxx
// ./opencascade/StdLPersistent_Document.hxx
// ./opencascade/StdLPersistent.hxx
// ./opencascade/StdLPersistent_Function.hxx
// ./opencascade/StdLPersistent_HString.hxx
// ./opencascade/StdLPersistent_XLink.hxx
// ./opencascade/StdLPersistent_Variable.hxx
// ./opencascade/StdLPersistent_HArray1.hxx
// ./opencascade/StdLPersistent_Data.hxx
// ./opencascade/StdLPersistent_Real.hxx

};

// user-defined post-inclusion per module

// user-defined post
