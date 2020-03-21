
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Circ2d.hxx>
#include <gp_Sphere.hxx>
#include <Standard_ConstructionError.hxx>
#include <gp_Cone.hxx>
#include <gp_Torus.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Parab2d.hxx>

// module includes
#include <Convert_CircleToBSplineCurve.hxx>
#include <Convert_CompBezierCurves2dToBSplineCurve2d.hxx>
#include <Convert_CompBezierCurvesToBSplineCurve.hxx>
#include <Convert_CompPolynomialToPoles.hxx>
#include <Convert_ConeToBSplineSurface.hxx>
#include <Convert_ConicToBSplineCurve.hxx>
#include <Convert_CosAndSinEvalFunction.hxx>
#include <Convert_CylinderToBSplineSurface.hxx>
#include <Convert_ElementarySurfaceToBSplineSurface.hxx>
#include <Convert_EllipseToBSplineCurve.hxx>
#include <Convert_GridPolynomialToPoles.hxx>
#include <Convert_HyperbolaToBSplineCurve.hxx>
#include <Convert_ParabolaToBSplineCurve.hxx>
#include <Convert_ParameterisationType.hxx>
#include <Convert_PolynomialCosAndSin.hxx>
#include <Convert_SequenceOfArray1OfPoles.hxx>
#include <Convert_SequenceOfArray1OfPoles2d.hxx>
#include <Convert_SphereToBSplineSurface.hxx>
#include <Convert_TorusToBSplineSurface.hxx>

// template related includes
// ./opencascade/Convert_SequenceOfArray1OfPoles.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Convert(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Convert"));


//Python trampoline classes

// classes


    static_cast<py::class_<Convert_CompBezierCurves2dToBSplineCurve2d , shared_ptr<Convert_CompBezierCurves2dToBSplineCurve2d> >>(m.attr("Convert_CompBezierCurves2dToBSplineCurve2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CompBezierCurvesToBSplineCurve , shared_ptr<Convert_CompBezierCurvesToBSplineCurve> >>(m.attr("Convert_CompBezierCurvesToBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CompPolynomialToPoles , shared_ptr<Convert_CompPolynomialToPoles> >>(m.attr("Convert_CompPolynomialToPoles"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ConicToBSplineCurve , shared_ptr<Convert_ConicToBSplineCurve> >>(m.attr("Convert_ConicToBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ElementarySurfaceToBSplineSurface , shared_ptr<Convert_ElementarySurfaceToBSplineSurface> >>(m.attr("Convert_ElementarySurfaceToBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_GridPolynomialToPoles , shared_ptr<Convert_GridPolynomialToPoles> >>(m.attr("Convert_GridPolynomialToPoles"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CircleToBSplineCurve , shared_ptr<Convert_CircleToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_CircleToBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ConeToBSplineSurface , shared_ptr<Convert_ConeToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_ConeToBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_CylinderToBSplineSurface , shared_ptr<Convert_CylinderToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_CylinderToBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_EllipseToBSplineCurve , shared_ptr<Convert_EllipseToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_EllipseToBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_HyperbolaToBSplineCurve , shared_ptr<Convert_HyperbolaToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_HyperbolaToBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_ParabolaToBSplineCurve , shared_ptr<Convert_ParabolaToBSplineCurve> , Convert_ConicToBSplineCurve>>(m.attr("Convert_ParabolaToBSplineCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_SphereToBSplineSurface , shared_ptr<Convert_SphereToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_SphereToBSplineSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Convert_TorusToBSplineSurface , shared_ptr<Convert_TorusToBSplineSurface> , Convert_ElementarySurfaceToBSplineSurface>>(m.attr("Convert_TorusToBSplineSurface"))
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
// ./opencascade/Convert_CompBezierCurves2dToBSplineCurve2d.hxx
// ./opencascade/Convert_CircleToBSplineCurve.hxx
// ./opencascade/Convert_ParameterisationType.hxx
// ./opencascade/Convert_SphereToBSplineSurface.hxx
// ./opencascade/Convert_CompBezierCurvesToBSplineCurve.hxx
// ./opencascade/Convert_CompPolynomialToPoles.hxx
// ./opencascade/Convert_ConicToBSplineCurve.hxx
// ./opencascade/Convert_ConeToBSplineSurface.hxx
// ./opencascade/Convert_TorusToBSplineSurface.hxx
// ./opencascade/Convert_PolynomialCosAndSin.hxx
// ./opencascade/Convert_CylinderToBSplineSurface.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles.hxx
// ./opencascade/Convert_EllipseToBSplineCurve.hxx
// ./opencascade/Convert_SequenceOfArray1OfPoles2d.hxx
// ./opencascade/Convert_HyperbolaToBSplineCurve.hxx
// ./opencascade/Convert_CosAndSinEvalFunction.hxx
// ./opencascade/Convert_GridPolynomialToPoles.hxx
// ./opencascade/Convert_ElementarySurfaceToBSplineSurface.hxx
// ./opencascade/Convert_ParabolaToBSplineCurve.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<TColgp_HArray1OfPnt> >(m,"Convert_SequenceOfArray1OfPoles");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
