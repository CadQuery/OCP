
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
void register_StepAP209(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepAP209"));


//Python trampoline classes

// classes


    static_cast<py::class_<StepAP209_Construct , shared_ptr<StepAP209_Construct> , STEPConstruct_Tool>>(m.attr("StepAP209_Construct"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StepAP209_Construct.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
