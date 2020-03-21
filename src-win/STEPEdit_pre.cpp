
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_Protocol.hxx>
#include <StepData_StepModel.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SelectSignature.hxx>
#include <STEPEdit_EditContext.hxx>
#include <STEPEdit_EditSDR.hxx>
#include <IFSelect_EditForm.hxx>
#include <Interface_InterfaceModel.hxx>

// module includes
#include <STEPEdit.hxx>
#include <STEPEdit_EditContext.hxx>
#include <STEPEdit_EditSDR.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_STEPEdit_enums(py::module &main_module) {


py::module m = main_module.def_submodule("STEPEdit", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<STEPEdit , shared_ptr<STEPEdit> >(m,"STEPEdit",R"#(Provides tools to exploit and edit a set of STEP data : editors, selections ..)#");
    py::class_<STEPEdit_EditContext ,opencascade::handle<STEPEdit_EditContext> , IFSelect_Editor>(m,"STEPEdit_EditContext",R"#(EditContext is an Editor fit for Product Definition Context (one per Model) , i.e. : - ProductDefinition - ApplicationProtocolDefinition - ProductRelatedProductCategoryEditContext is an Editor fit for Product Definition Context (one per Model) , i.e. : - ProductDefinition - ApplicationProtocolDefinition - ProductRelatedProductCategoryEditContext is an Editor fit for Product Definition Context (one per Model) , i.e. : - ProductDefinition - ApplicationProtocolDefinition - ProductRelatedProductCategory)#");
    py::class_<STEPEdit_EditSDR ,opencascade::handle<STEPEdit_EditSDR> , IFSelect_Editor>(m,"STEPEdit_EditSDR",R"#(EditSDR is an Editor fit for a Shape Definition Representation which designates a Product DefinitionEditSDR is an Editor fit for a Shape Definition Representation which designates a Product DefinitionEditSDR is an Editor fit for a Shape Definition Representation which designates a Product Definition)#");

};

// user-defined post-inclusion per module

// user-defined post
