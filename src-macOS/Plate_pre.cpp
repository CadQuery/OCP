
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <gp_Lin.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <math_Matrix.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <gp_Pln.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>

// module includes
#include <Plate_Array1OfPinpointConstraint.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_HArray1OfPinpointConstraint.hxx>
#include <Plate_LinearScalarConstraint.hxx>
#include <Plate_LinearXYZConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_PinpointConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_Plate.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <Plate_SequenceOfLinearScalarConstraint.hxx>
#include <Plate_SequenceOfLinearXYZConstraint.hxx>
#include <Plate_SequenceOfPinpointConstraint.hxx>

// template related includes
// ./opencascade/Plate_SequenceOfLinearScalarConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_SequenceOfPinpointConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_SequenceOfLinearXYZConstraint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/Plate_Array1OfPinpointConstraint.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Plate_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Plate", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<Plate_LinearScalarConstraint>(m,"Plate_SequenceOfLinearScalarConstraint");
    preregister_template_NCollection_Sequence<Plate_PinpointConstraint>(m,"Plate_SequenceOfPinpointConstraint");
    preregister_template_NCollection_Sequence<Plate_LinearXYZConstraint>(m,"Plate_SequenceOfLinearXYZConstraint");
    preregister_template_NCollection_Array1<Plate_PinpointConstraint>(m,"Plate_Array1OfPinpointConstraint");

// classes forward declarations only
    py::class_<Plate_D1 , shared_ptr<Plate_D1> >(m,"Plate_D1",R"#(define an order 1 derivatives of a 3d valued function of a 2d variable)#");
    py::class_<Plate_D2 , shared_ptr<Plate_D2> >(m,"Plate_D2",R"#(define an order 2 derivatives of a 3d valued function of a 2d variable)#");
    py::class_<Plate_D3 , shared_ptr<Plate_D3> >(m,"Plate_D3",R"#(define an order 3 derivatives of a 3d valued function of a 2d variable)#");
    py::class_<Plate_FreeGtoCConstraint , shared_ptr<Plate_FreeGtoCConstraint> >(m,"Plate_FreeGtoCConstraint",R"#(define a G1, G2 or G3 constraint on the Plate using weaker constraint than GtoCConstraint)#");
    py::class_<Plate_GlobalTranslationConstraint , shared_ptr<Plate_GlobalTranslationConstraint> >(m,"Plate_GlobalTranslationConstraint",R"#(force a set of UV points to translate without deformation)#");
    py::class_<Plate_GtoCConstraint , shared_ptr<Plate_GtoCConstraint> >(m,"Plate_GtoCConstraint",R"#(define a G1, G2 or G3 constraint on the Plate)#");
    py::class_<Plate_HArray1OfPinpointConstraint ,opencascade::handle<Plate_HArray1OfPinpointConstraint> , Plate_Array1OfPinpointConstraint, Standard_Transient>(m,"Plate_HArray1OfPinpointConstraint",R"#()#");
    py::class_<Plate_LineConstraint , shared_ptr<Plate_LineConstraint> >(m,"Plate_LineConstraint",R"#(constraint a point to belong to a straight line)#");
    py::class_<Plate_LinearScalarConstraint , shared_ptr<Plate_LinearScalarConstraint> >(m,"Plate_LinearScalarConstraint",R"#(define on or several constraints as linear combination of the X,Y and Z components of a set of PinPointConstraint)#");
    py::class_<Plate_LinearXYZConstraint , shared_ptr<Plate_LinearXYZConstraint> >(m,"Plate_LinearXYZConstraint",R"#(define on or several constraints as linear combination of PinPointConstraint unlike the LinearScalarConstraint, usage of this kind of constraint preserve the X,Y and Z uncoupling.)#");
    py::class_<Plate_PinpointConstraint , shared_ptr<Plate_PinpointConstraint> >(m,"Plate_PinpointConstraint",R"#(define a constraint on the Plate)#");
    py::class_<Plate_PlaneConstraint , shared_ptr<Plate_PlaneConstraint> >(m,"Plate_PlaneConstraint",R"#(constraint a point to belong to a Plane)#");
    py::class_<Plate_Plate , shared_ptr<Plate_Plate> >(m,"Plate_Plate",R"#(This class implement a variationnal spline algorithm able to define a two variable function satisfying some constraints and minimizing an energy like criterion.)#");
    py::class_<Plate_SampledCurveConstraint , shared_ptr<Plate_SampledCurveConstraint> >(m,"Plate_SampledCurveConstraint",R"#(define m PinPointConstraint driven by m unknown)#");

};

// user-defined post-inclusion per module

// user-defined post
