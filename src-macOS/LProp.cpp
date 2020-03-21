
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <LProp_CurAndInf.hxx>

// module includes
#include <LProp_AnalyticCurInf.hxx>
#include <LProp_BadContinuity.hxx>
#include <LProp_CIType.hxx>
#include <LProp_CurAndInf.hxx>
#include <LProp_NotDefined.hxx>
#include <LProp_SequenceOfCIType.hxx>
#include <LProp_Status.hxx>

// template related includes
// ./opencascade/LProp_SequenceOfCIType.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LProp(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("LProp"));


//Python trampoline classes

// classes


    static_cast<py::class_<LProp_AnalyticCurInf , shared_ptr<LProp_AnalyticCurInf> >>(m.attr("LProp_AnalyticCurInf"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<LProp_CurAndInf , shared_ptr<LProp_CurAndInf> >>(m.attr("LProp_CurAndInf"))
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
// ./opencascade/LProp_AnalyticCurInf.hxx
// ./opencascade/LProp_SequenceOfCIType.hxx
// ./opencascade/LProp_NotDefined.hxx
// ./opencascade/LProp_CurAndInf.hxx
// ./opencascade/LProp_BadContinuity.hxx
// ./opencascade/LProp_CIType.hxx
// ./opencascade/LProp_Status.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<LProp_CIType>(m,"LProp_SequenceOfCIType");


// exceptions
register_occ_exception<LProp_BadContinuity>(m, "LProp_BadContinuity");
register_occ_exception<LProp_NotDefined>(m, "LProp_NotDefined");

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
