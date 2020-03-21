
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
#include <TColGeom_Array1OfBezierCurve.hxx>
#include <TColGeom_Array1OfBSplineCurve.hxx>
#include <TColGeom_Array1OfCurve.hxx>
#include <TColGeom_Array1OfSurface.hxx>
#include <TColGeom_Array2OfBezierSurface.hxx>
#include <TColGeom_Array2OfSurface.hxx>
#include <TColGeom_HArray1OfBezierCurve.hxx>
#include <TColGeom_HArray1OfBSplineCurve.hxx>
#include <TColGeom_HArray1OfCurve.hxx>
#include <TColGeom_HArray1OfSurface.hxx>
#include <TColGeom_HArray2OfSurface.hxx>
#include <TColGeom_HSequenceOfBoundedCurve.hxx>
#include <TColGeom_HSequenceOfCurve.hxx>
#include <TColGeom_SequenceOfBoundedCurve.hxx>
#include <TColGeom_SequenceOfCurve.hxx>
#include <TColGeom_SequenceOfSurface.hxx>

// template related includes
// ./opencascade\TColGeom_SequenceOfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfBSplineCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array2OfBezierSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array2OfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_SequenceOfBoundedCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfBezierCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_Array1OfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TColGeom_SequenceOfCurve.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColGeom_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TColGeom", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Sequence<opencascade::handle<Geom_Surface> >(m,"TColGeom_SequenceOfSurface");
    preregister_template_NCollection_Array1<opencascade::handle<Geom_Curve> >(m,"TColGeom_Array1OfCurve");
    preregister_template_NCollection_Array1<opencascade::handle<Geom_BSplineCurve> >(m,"TColGeom_Array1OfBSplineCurve");
    preregister_template_NCollection_Array2<opencascade::handle<Geom_BezierSurface> >(m,"TColGeom_Array2OfBezierSurface");
    preregister_template_NCollection_Array2<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array2OfSurface");
    preregister_template_NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> >(m,"TColGeom_SequenceOfBoundedCurve");
    preregister_template_NCollection_Array1<opencascade::handle<Geom_BezierCurve> >(m,"TColGeom_Array1OfBezierCurve");
    preregister_template_NCollection_Array1<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array1OfSurface");
    preregister_template_NCollection_Sequence<opencascade::handle<Geom_Curve> >(m,"TColGeom_SequenceOfCurve");

// classes forward declarations only
    py::class_<TColGeom_HArray1OfBSplineCurve ,opencascade::handle<TColGeom_HArray1OfBSplineCurve> , TColGeom_Array1OfBSplineCurve, Standard_Transient>(m,"TColGeom_HArray1OfBSplineCurve",R"#()#");
    py::class_<TColGeom_HArray1OfBezierCurve ,opencascade::handle<TColGeom_HArray1OfBezierCurve> , TColGeom_Array1OfBezierCurve, Standard_Transient>(m,"TColGeom_HArray1OfBezierCurve",R"#()#");
    py::class_<TColGeom_HArray1OfCurve ,opencascade::handle<TColGeom_HArray1OfCurve> , TColGeom_Array1OfCurve, Standard_Transient>(m,"TColGeom_HArray1OfCurve",R"#()#");
    py::class_<TColGeom_HArray1OfSurface ,opencascade::handle<TColGeom_HArray1OfSurface> , TColGeom_Array1OfSurface, Standard_Transient>(m,"TColGeom_HArray1OfSurface",R"#()#");
    py::class_<TColGeom_HArray2OfSurface ,opencascade::handle<TColGeom_HArray2OfSurface> , TColGeom_Array2OfSurface, Standard_Transient>(m,"TColGeom_HArray2OfSurface",R"#()#");
    py::class_<TColGeom_HSequenceOfBoundedCurve ,opencascade::handle<TColGeom_HSequenceOfBoundedCurve> , TColGeom_SequenceOfBoundedCurve, Standard_Transient>(m,"TColGeom_HSequenceOfBoundedCurve",R"#()#");
    py::class_<TColGeom_HSequenceOfCurve ,opencascade::handle<TColGeom_HSequenceOfCurve> , TColGeom_SequenceOfCurve, Standard_Transient>(m,"TColGeom_HSequenceOfCurve",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
