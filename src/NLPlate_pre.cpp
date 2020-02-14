
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_XYZ.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Geom_Surface.hxx>

// module includes
#include <NLPlate_HGPPConstraint.hxx>
#include <NLPlate_HPG0Constraint.hxx>
#include <NLPlate_HPG0G1Constraint.hxx>
#include <NLPlate_HPG0G2Constraint.hxx>
#include <NLPlate_HPG0G3Constraint.hxx>
#include <NLPlate_HPG1Constraint.hxx>
#include <NLPlate_HPG2Constraint.hxx>
#include <NLPlate_HPG3Constraint.hxx>
#include <NLPlate_ListIteratorOfStackOfPlate.hxx>
#include <NLPlate_NLPlate.hxx>
#include <NLPlate_SequenceOfHGPPConstraint.hxx>
#include <NLPlate_StackOfPlate.hxx>

// template related includes
// ./opencascade/NLPlate_StackOfPlate.hxx
#include "NCollection.hxx"
// ./opencascade/NLPlate_StackOfPlate.hxx
#include "NCollection.hxx"
// ./opencascade/NLPlate_SequenceOfHGPPConstraint.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_NLPlate_enums(py::module &main_module) {


py::module m = main_module.def_submodule("NLPlate", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_NLPlate_HGPPConstraint : public NLPlate_HGPPConstraint{
    public:
        using NLPlate_HGPPConstraint::NLPlate_HGPPConstraint;
        
        
        // public pure virtual
        Standard_Integer ActiveOrder() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,NLPlate_HGPPConstraint,ActiveOrder,) };
        Standard_Boolean IsG0() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,NLPlate_HGPPConstraint,IsG0,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_List<Plate_Plate>(m,"NLPlate_StackOfPlate");  
    preregister_template_NCollection_Sequence<opencascade::handle<NLPlate_HGPPConstraint> >(m,"NLPlate_SequenceOfHGPPConstraint");  

// classes forward declarations only
    py::class_<NLPlate_HGPPConstraint ,opencascade::handle<NLPlate_HGPPConstraint> ,Py_NLPlate_HGPPConstraint , Standard_Transient >(m,"NLPlate_HGPPConstraint",R"#(define a PinPoint geometric Constraint used to load a Non Linear Platedefine a PinPoint geometric Constraint used to load a Non Linear Platedefine a PinPoint geometric Constraint used to load a Non Linear Plate)#");
    py::class_<NLPlate_NLPlate , shared_ptr<NLPlate_NLPlate>  >(m,"NLPlate_NLPlate",R"#(None)#");
    py::class_<NLPlate_HPG0Constraint ,opencascade::handle<NLPlate_HPG0Constraint>  , NLPlate_HGPPConstraint >(m,"NLPlate_HPG0Constraint",R"#(define a PinPoint G0 Constraint used to load a Non Linear Platedefine a PinPoint G0 Constraint used to load a Non Linear Platedefine a PinPoint G0 Constraint used to load a Non Linear Plate)#");
    py::class_<NLPlate_HPG1Constraint ,opencascade::handle<NLPlate_HPG1Constraint>  , NLPlate_HGPPConstraint >(m,"NLPlate_HPG1Constraint",R"#(define a PinPoint (no G0) G1 Constraint used to load a Non Linear Platedefine a PinPoint (no G0) G1 Constraint used to load a Non Linear Platedefine a PinPoint (no G0) G1 Constraint used to load a Non Linear Plate)#");
    py::class_<NLPlate_HPG0G1Constraint ,opencascade::handle<NLPlate_HPG0G1Constraint>  , NLPlate_HPG0Constraint >(m,"NLPlate_HPG0G1Constraint",R"#(define a PinPoint G0+G1 Constraint used to load a Non Linear Platedefine a PinPoint G0+G1 Constraint used to load a Non Linear Platedefine a PinPoint G0+G1 Constraint used to load a Non Linear Plate)#");
    py::class_<NLPlate_HPG2Constraint ,opencascade::handle<NLPlate_HPG2Constraint>  , NLPlate_HPG1Constraint >(m,"NLPlate_HPG2Constraint",R"#(define a PinPoint (no G0) G2 Constraint used to load a Non Linear Platedefine a PinPoint (no G0) G2 Constraint used to load a Non Linear Platedefine a PinPoint (no G0) G2 Constraint used to load a Non Linear Plate)#");
    py::class_<NLPlate_HPG0G2Constraint ,opencascade::handle<NLPlate_HPG0G2Constraint>  , NLPlate_HPG0G1Constraint >(m,"NLPlate_HPG0G2Constraint",R"#(define a PinPoint G0+G2 Constraint used to load a Non Linear Platedefine a PinPoint G0+G2 Constraint used to load a Non Linear Platedefine a PinPoint G0+G2 Constraint used to load a Non Linear Plate)#");
    py::class_<NLPlate_HPG3Constraint ,opencascade::handle<NLPlate_HPG3Constraint>  , NLPlate_HPG2Constraint >(m,"NLPlate_HPG3Constraint",R"#(define a PinPoint (no G0) G3 Constraint used to load a Non Linear Platedefine a PinPoint (no G0) G3 Constraint used to load a Non Linear Platedefine a PinPoint (no G0) G3 Constraint used to load a Non Linear Plate)#");
    py::class_<NLPlate_HPG0G3Constraint ,opencascade::handle<NLPlate_HPG0G3Constraint>  , NLPlate_HPG0G2Constraint >(m,"NLPlate_HPG0G3Constraint",R"#(define a PinPoint G0+G3 Constraint used to load a Non Linear Platedefine a PinPoint G0+G3 Constraint used to load a Non Linear Platedefine a PinPoint G0+G3 Constraint used to load a Non Linear Plate)#");

};

// user-defined post-inclusion per module

// user-defined post
