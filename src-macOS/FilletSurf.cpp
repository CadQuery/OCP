
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ChFiDS_HElSpine.hxx>
#include <ChFiDS_Spine.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <BRepAdaptor_HCurve2d.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_TrimmedCurve.hxx>

// module includes
#include <FilletSurf_Builder.hxx>
#include <FilletSurf_ErrorTypeStatus.hxx>
#include <FilletSurf_InternalBuilder.hxx>
#include <FilletSurf_StatusDone.hxx>
#include <FilletSurf_StatusType.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_FilletSurf(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("FilletSurf"));


//Python trampoline classes

// classes


    static_cast<py::class_<FilletSurf_Builder , shared_ptr<FilletSurf_Builder> >>(m.attr("FilletSurf_Builder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<FilletSurf_InternalBuilder , shared_ptr<FilletSurf_InternalBuilder> , ChFi3d_FilBuilder>>(m.attr("FilletSurf_InternalBuilder"))
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
// ./opencascade/FilletSurf_ErrorTypeStatus.hxx
// ./opencascade/FilletSurf_InternalBuilder.hxx
// ./opencascade/FilletSurf_StatusType.hxx
// ./opencascade/FilletSurf_StatusDone.hxx
// ./opencascade/FilletSurf_Builder.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
