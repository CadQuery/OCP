
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

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
// ./opencascade/TColGeom2d_Array1OfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_SequenceOfBoundedCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_Array1OfBezierCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_SequenceOfGeometry.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_Array1OfBSplineCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom2d_SequenceOfCurve.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColGeom2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TColGeom2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<TColGeom2d_HSequenceOfBoundedCurve ,std::unique_ptr<TColGeom2d_HSequenceOfBoundedCurve>  >(m,"TColGeom2d_HSequenceOfBoundedCurve",R"#()#");
    py::class_<TColGeom2d_HArray1OfBSplineCurve ,std::unique_ptr<TColGeom2d_HArray1OfBSplineCurve>  >(m,"TColGeom2d_HArray1OfBSplineCurve",R"#()#");
    py::class_<TColGeom2d_HArray1OfBezierCurve ,std::unique_ptr<TColGeom2d_HArray1OfBezierCurve>  >(m,"TColGeom2d_HArray1OfBezierCurve",R"#()#");
    py::class_<TColGeom2d_HSequenceOfCurve ,std::unique_ptr<TColGeom2d_HSequenceOfCurve>  >(m,"TColGeom2d_HSequenceOfCurve",R"#()#");
    py::class_<TColGeom2d_HArray1OfCurve ,std::unique_ptr<TColGeom2d_HArray1OfCurve>  >(m,"TColGeom2d_HArray1OfCurve",R"#()#");

// pre-register typdefs
// ./opencascade/TColGeom2d_Array1OfCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Geom2d_Curve> >(m,"TColGeom2d_Array1OfCurve");  
// ./opencascade/TColGeom2d_SequenceOfBoundedCurve.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Geom2d_BoundedCurve> >(m,"TColGeom2d_SequenceOfBoundedCurve");  
// ./opencascade/TColGeom2d_Array1OfBezierCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Geom2d_BezierCurve> >(m,"TColGeom2d_Array1OfBezierCurve");  
// ./opencascade/TColGeom2d_HSequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom2d_HSequenceOfCurve.hxx
// ./opencascade/TColGeom2d_HArray1OfBSplineCurve.hxx
// ./opencascade/TColGeom2d_SequenceOfGeometry.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Geom2d_Geometry> >(m,"TColGeom2d_SequenceOfGeometry");  
// ./opencascade/TColGeom2d_HArray1OfCurve.hxx
// ./opencascade/TColGeom2d_HArray1OfBezierCurve.hxx
// ./opencascade/TColGeom2d_Array1OfBSplineCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Geom2d_BSplineCurve> >(m,"TColGeom2d_Array1OfBSplineCurve");  
// ./opencascade/TColGeom2d_SequenceOfCurve.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Geom2d_Curve> >(m,"TColGeom2d_SequenceOfCurve");  

};

// user-defined post-inclusion per module

// user-defined post
