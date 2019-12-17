
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

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
// ./opencascade/TColGeom_SequenceOfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfBSplineCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_SequenceOfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfBezierCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array1OfCurve.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array2OfBezierSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_Array2OfSurface.hxx
#include "NCollection.hxx"
// ./opencascade/TColGeom_SequenceOfBoundedCurve.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TColGeom_enums(py::module &main_module) {


py::module m = main_module.def_submodule("TColGeom", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// classes forward declarations only
    py::class_<TColGeom_HSequenceOfCurve ,std::unique_ptr<TColGeom_HSequenceOfCurve>  >(m,"TColGeom_HSequenceOfCurve",R"#()#");
    py::class_<TColGeom_HArray1OfCurve ,std::unique_ptr<TColGeom_HArray1OfCurve>  >(m,"TColGeom_HArray1OfCurve",R"#()#");
    py::class_<TColGeom_HSequenceOfBoundedCurve ,std::unique_ptr<TColGeom_HSequenceOfBoundedCurve>  >(m,"TColGeom_HSequenceOfBoundedCurve",R"#()#");
    py::class_<TColGeom_HArray1OfSurface ,std::unique_ptr<TColGeom_HArray1OfSurface>  >(m,"TColGeom_HArray1OfSurface",R"#()#");
    py::class_<TColGeom_HArray1OfBezierCurve ,std::unique_ptr<TColGeom_HArray1OfBezierCurve>  >(m,"TColGeom_HArray1OfBezierCurve",R"#()#");
    py::class_<TColGeom_HArray2OfSurface ,std::unique_ptr<TColGeom_HArray2OfSurface>  >(m,"TColGeom_HArray2OfSurface",R"#()#");
    py::class_<TColGeom_HArray1OfBSplineCurve ,std::unique_ptr<TColGeom_HArray1OfBSplineCurve>  >(m,"TColGeom_HArray1OfBSplineCurve",R"#()#");

// pre-register typdefs
// ./opencascade/TColGeom_SequenceOfCurve.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Geom_Curve> >(m,"TColGeom_SequenceOfCurve");  
// ./opencascade/TColGeom_Array1OfBSplineCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Geom_BSplineCurve> >(m,"TColGeom_Array1OfBSplineCurve");  
// ./opencascade/TColGeom_HSequenceOfCurve.hxx
// ./opencascade/TColGeom_SequenceOfSurface.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Geom_Surface> >(m,"TColGeom_SequenceOfSurface");  
// ./opencascade/TColGeom_Array1OfSurface.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array1OfSurface");  
// ./opencascade/TColGeom_Array1OfBezierCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Geom_BezierCurve> >(m,"TColGeom_Array1OfBezierCurve");  
// ./opencascade/TColGeom_HArray1OfBezierCurve.hxx
// ./opencascade/TColGeom_Array1OfCurve.hxx
    preregister_template_NCollection_Array1<opencascade::handle<Geom_Curve> >(m,"TColGeom_Array1OfCurve");  
// ./opencascade/TColGeom_Array2OfBezierSurface.hxx
    preregister_template_NCollection_Array2<opencascade::handle<Geom_BezierSurface> >(m,"TColGeom_Array2OfBezierSurface");  
// ./opencascade/TColGeom_Array2OfSurface.hxx
    preregister_template_NCollection_Array2<opencascade::handle<Geom_Surface> >(m,"TColGeom_Array2OfSurface");  
// ./opencascade/TColGeom_HArray1OfCurve.hxx
// ./opencascade/TColGeom_HArray1OfBSplineCurve.hxx
// ./opencascade/TColGeom_HSequenceOfBoundedCurve.hxx
// ./opencascade/TColGeom_SequenceOfBoundedCurve.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<Geom_BoundedCurve> >(m,"TColGeom_SequenceOfBoundedCurve");  
// ./opencascade/TColGeom_HArray2OfSurface.hxx
// ./opencascade/TColGeom_HArray1OfSurface.hxx

};

// user-defined post-inclusion per module

// user-defined post
