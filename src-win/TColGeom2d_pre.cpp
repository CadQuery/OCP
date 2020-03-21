
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

// module includes
#include <TColGeom2d_Array1OfBezierCurve.hxx>
#include <TColGeom2d_Array1OfBSplineCurve.hxx>
#include <TColGeom2d_Array1OfCurve.hxx>
#include <TColGeom2d_HArray1OfBezierCurve.hxx>
#include <TColGeom2d_HArray1OfBSplineCurve.hxx>
#include <TColGeom2d_HArray1OfCurve.hxx>
#include <TColGeom2d_HSequenceOfBoundedCurve.hxx>
#include <TColGeom2d_HSequenceOfCurve.hxx>
#include <TColGeom2d_SequenceOfBoundedCurve.hxx>
#include <TColGeom2d_SequenceOfCurve.hxx>
#include <TColGeom2d_SequenceOfGeometry.hxx>

// template related includes
// ./opencascade\TColGeom2d_SequenceOfGeometry.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom2d_Array1OfBSplineCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom2d_SequenceOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom2d_SequenceOfBoundedCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom2d_Array1OfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom2d_Array1OfBezierCurve.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColGeom2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TColGeom2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<Geom2d_Geometry> >(m,"TColGeom2d_SequenceOfGeometry");
    preregister_template_NCollection_Array1<opencascade::handle<Geom2d_BSplineCurve> >(m,"TColGeom2d_Array1OfBSplineCurve");
    preregister_template_NCollection_Sequence<opencascade::handle<Geom2d_Curve> >(m,"TColGeom2d_SequenceOfCurve");
    preregister_template_NCollection_Sequence<opencascade::handle<Geom2d_BoundedCurve> >(m,"TColGeom2d_SequenceOfBoundedCurve");
    preregister_template_NCollection_Array1<opencascade::handle<Geom2d_Curve> >(m,"TColGeom2d_Array1OfCurve");
    preregister_template_NCollection_Array1<opencascade::handle<Geom2d_BezierCurve> >(m,"TColGeom2d_Array1OfBezierCurve");

// classes forward declarations only
    py::class_<TColGeom2d_HArray1OfBSplineCurve ,opencascade::handle<TColGeom2d_HArray1OfBSplineCurve> , TColGeom2d_Array1OfBSplineCurve, Standard_Transient>(m,"TColGeom2d_HArray1OfBSplineCurve",R"#()#");
    py::class_<TColGeom2d_HArray1OfBezierCurve ,opencascade::handle<TColGeom2d_HArray1OfBezierCurve> , TColGeom2d_Array1OfBezierCurve, Standard_Transient>(m,"TColGeom2d_HArray1OfBezierCurve",R"#()#");
    py::class_<TColGeom2d_HArray1OfCurve ,opencascade::handle<TColGeom2d_HArray1OfCurve> , TColGeom2d_Array1OfCurve, Standard_Transient>(m,"TColGeom2d_HArray1OfCurve",R"#()#");
    py::class_<TColGeom2d_HSequenceOfBoundedCurve ,opencascade::handle<TColGeom2d_HSequenceOfBoundedCurve> , TColGeom2d_SequenceOfBoundedCurve, Standard_Transient>(m,"TColGeom2d_HSequenceOfBoundedCurve",R"#()#");
    py::class_<TColGeom2d_HSequenceOfCurve ,opencascade::handle<TColGeom2d_HSequenceOfCurve> , TColGeom2d_SequenceOfCurve, Standard_Transient>(m,"TColGeom2d_HSequenceOfCurve",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
