
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepBasic_Product.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepData_StepModel.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>

// module includes
#include <StepAP209_Construct.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepAP209_enums(py::module &main_module) {


py::module m = main_module.def_submodule("StepAP209", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<StepAP209_Construct , shared_ptr<StepAP209_Construct>  , STEPConstruct_Tool >(m,"StepAP209_Construct",R"#(Basic tool for working with AP209 model)#");

};

// user-defined post-inclusion per module

// user-defined post
