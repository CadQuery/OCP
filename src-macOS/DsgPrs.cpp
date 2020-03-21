
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <gp_Elips.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Geom_Plane.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <Geom_OffsetCurve.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Circ.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <gp_Circ.hxx>

// module includes
#include <DsgPrs.hxx>
#include <DsgPrs_AnglePresentation.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <DsgPrs_Chamf2dPresentation.hxx>
#include <DsgPrs_ConcentricPresentation.hxx>
#include <DsgPrs_DatumPrs.hxx>
#include <DsgPrs_DiameterPresentation.hxx>
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include <DsgPrs_EqualDistancePresentation.hxx>
#include <DsgPrs_EqualRadiusPresentation.hxx>
#include <DsgPrs_FilletRadiusPresentation.hxx>
#include <DsgPrs_FixPresentation.hxx>
#include <DsgPrs_IdenticPresentation.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <DsgPrs_MidPointPresentation.hxx>
#include <DsgPrs_OffsetPresentation.hxx>
#include <DsgPrs_ParalPresentation.hxx>
#include <DsgPrs_PerpenPresentation.hxx>
#include <DsgPrs_RadiusPresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>
#include <DsgPrs_SymbPresentation.hxx>
#include <DsgPrs_SymmetricPresentation.hxx>
#include <DsgPrs_TangentPresentation.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_DsgPrs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("DsgPrs"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<DsgPrs , shared_ptr<DsgPrs>>(m,"DsgPrs");

    static_cast<py::class_<DsgPrs , shared_ptr<DsgPrs> >>(m.attr("DsgPrs"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_AnglePresentation , shared_ptr<DsgPrs_AnglePresentation>>(m,"DsgPrs_AnglePresentation");

    static_cast<py::class_<DsgPrs_AnglePresentation , shared_ptr<DsgPrs_AnglePresentation> >>(m.attr("DsgPrs_AnglePresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_Chamf2dPresentation , shared_ptr<DsgPrs_Chamf2dPresentation>>(m,"DsgPrs_Chamf2dPresentation");

    static_cast<py::class_<DsgPrs_Chamf2dPresentation , shared_ptr<DsgPrs_Chamf2dPresentation> >>(m.attr("DsgPrs_Chamf2dPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_ConcentricPresentation , shared_ptr<DsgPrs_ConcentricPresentation>>(m,"DsgPrs_ConcentricPresentation");

    static_cast<py::class_<DsgPrs_ConcentricPresentation , shared_ptr<DsgPrs_ConcentricPresentation> >>(m.attr("DsgPrs_ConcentricPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_DatumPrs , shared_ptr<DsgPrs_DatumPrs>>(m,"DsgPrs_DatumPrs");

    static_cast<py::class_<DsgPrs_DatumPrs , shared_ptr<DsgPrs_DatumPrs> , Prs3d_Root>>(m.attr("DsgPrs_DatumPrs"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_DiameterPresentation , shared_ptr<DsgPrs_DiameterPresentation>>(m,"DsgPrs_DiameterPresentation");

    static_cast<py::class_<DsgPrs_DiameterPresentation , shared_ptr<DsgPrs_DiameterPresentation> >>(m.attr("DsgPrs_DiameterPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_EllipseRadiusPresentation , shared_ptr<DsgPrs_EllipseRadiusPresentation>>(m,"DsgPrs_EllipseRadiusPresentation");

    static_cast<py::class_<DsgPrs_EllipseRadiusPresentation , shared_ptr<DsgPrs_EllipseRadiusPresentation> >>(m.attr("DsgPrs_EllipseRadiusPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_EqualDistancePresentation , shared_ptr<DsgPrs_EqualDistancePresentation>>(m,"DsgPrs_EqualDistancePresentation");

    static_cast<py::class_<DsgPrs_EqualDistancePresentation , shared_ptr<DsgPrs_EqualDistancePresentation> >>(m.attr("DsgPrs_EqualDistancePresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_EqualRadiusPresentation , shared_ptr<DsgPrs_EqualRadiusPresentation>>(m,"DsgPrs_EqualRadiusPresentation");

    static_cast<py::class_<DsgPrs_EqualRadiusPresentation , shared_ptr<DsgPrs_EqualRadiusPresentation> >>(m.attr("DsgPrs_EqualRadiusPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_FilletRadiusPresentation , shared_ptr<DsgPrs_FilletRadiusPresentation>>(m,"DsgPrs_FilletRadiusPresentation");

    static_cast<py::class_<DsgPrs_FilletRadiusPresentation , shared_ptr<DsgPrs_FilletRadiusPresentation> >>(m.attr("DsgPrs_FilletRadiusPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_FixPresentation , shared_ptr<DsgPrs_FixPresentation>>(m,"DsgPrs_FixPresentation");

    static_cast<py::class_<DsgPrs_FixPresentation , shared_ptr<DsgPrs_FixPresentation> >>(m.attr("DsgPrs_FixPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_IdenticPresentation , shared_ptr<DsgPrs_IdenticPresentation>>(m,"DsgPrs_IdenticPresentation");

    static_cast<py::class_<DsgPrs_IdenticPresentation , shared_ptr<DsgPrs_IdenticPresentation> >>(m.attr("DsgPrs_IdenticPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_LengthPresentation , shared_ptr<DsgPrs_LengthPresentation>>(m,"DsgPrs_LengthPresentation");

    static_cast<py::class_<DsgPrs_LengthPresentation , shared_ptr<DsgPrs_LengthPresentation> >>(m.attr("DsgPrs_LengthPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_MidPointPresentation , shared_ptr<DsgPrs_MidPointPresentation>>(m,"DsgPrs_MidPointPresentation");

    static_cast<py::class_<DsgPrs_MidPointPresentation , shared_ptr<DsgPrs_MidPointPresentation> >>(m.attr("DsgPrs_MidPointPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_OffsetPresentation , shared_ptr<DsgPrs_OffsetPresentation>>(m,"DsgPrs_OffsetPresentation");

    static_cast<py::class_<DsgPrs_OffsetPresentation , shared_ptr<DsgPrs_OffsetPresentation> >>(m.attr("DsgPrs_OffsetPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_ParalPresentation , shared_ptr<DsgPrs_ParalPresentation>>(m,"DsgPrs_ParalPresentation");

    static_cast<py::class_<DsgPrs_ParalPresentation , shared_ptr<DsgPrs_ParalPresentation> >>(m.attr("DsgPrs_ParalPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_PerpenPresentation , shared_ptr<DsgPrs_PerpenPresentation>>(m,"DsgPrs_PerpenPresentation");

    static_cast<py::class_<DsgPrs_PerpenPresentation , shared_ptr<DsgPrs_PerpenPresentation> >>(m.attr("DsgPrs_PerpenPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_RadiusPresentation , shared_ptr<DsgPrs_RadiusPresentation>>(m,"DsgPrs_RadiusPresentation");

    static_cast<py::class_<DsgPrs_RadiusPresentation , shared_ptr<DsgPrs_RadiusPresentation> >>(m.attr("DsgPrs_RadiusPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_ShadedPlanePresentation , shared_ptr<DsgPrs_ShadedPlanePresentation>>(m,"DsgPrs_ShadedPlanePresentation");

    static_cast<py::class_<DsgPrs_ShadedPlanePresentation , shared_ptr<DsgPrs_ShadedPlanePresentation> >>(m.attr("DsgPrs_ShadedPlanePresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_ShapeDirPresentation , shared_ptr<DsgPrs_ShapeDirPresentation>>(m,"DsgPrs_ShapeDirPresentation");

    static_cast<py::class_<DsgPrs_ShapeDirPresentation , shared_ptr<DsgPrs_ShapeDirPresentation> >>(m.attr("DsgPrs_ShapeDirPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_SymbPresentation , shared_ptr<DsgPrs_SymbPresentation>>(m,"DsgPrs_SymbPresentation");

    static_cast<py::class_<DsgPrs_SymbPresentation , shared_ptr<DsgPrs_SymbPresentation> >>(m.attr("DsgPrs_SymbPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_SymmetricPresentation , shared_ptr<DsgPrs_SymmetricPresentation>>(m,"DsgPrs_SymmetricPresentation");

    static_cast<py::class_<DsgPrs_SymmetricPresentation , shared_ptr<DsgPrs_SymmetricPresentation> >>(m.attr("DsgPrs_SymmetricPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_TangentPresentation , shared_ptr<DsgPrs_TangentPresentation>>(m,"DsgPrs_TangentPresentation");

    static_cast<py::class_<DsgPrs_TangentPresentation , shared_ptr<DsgPrs_TangentPresentation> >>(m.attr("DsgPrs_TangentPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_XYZAxisPresentation , shared_ptr<DsgPrs_XYZAxisPresentation>>(m,"DsgPrs_XYZAxisPresentation");

    static_cast<py::class_<DsgPrs_XYZAxisPresentation , shared_ptr<DsgPrs_XYZAxisPresentation> >>(m.attr("DsgPrs_XYZAxisPresentation"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<DsgPrs_XYZPlanePresentation , shared_ptr<DsgPrs_XYZPlanePresentation>>(m,"DsgPrs_XYZPlanePresentation");

    static_cast<py::class_<DsgPrs_XYZPlanePresentation , shared_ptr<DsgPrs_XYZPlanePresentation> >>(m.attr("DsgPrs_XYZPlanePresentation"))
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
// ./opencascade/DsgPrs_IdenticPresentation.hxx
// ./opencascade/DsgPrs_FilletRadiusPresentation.hxx
// ./opencascade/DsgPrs_XYZPlanePresentation.hxx
// ./opencascade/DsgPrs_ParalPresentation.hxx
// ./opencascade/DsgPrs_ShapeDirPresentation.hxx
// ./opencascade/DsgPrs.hxx
// ./opencascade/DsgPrs_XYZAxisPresentation.hxx
// ./opencascade/DsgPrs_DatumPrs.hxx
// ./opencascade/DsgPrs_ShadedPlanePresentation.hxx
// ./opencascade/DsgPrs_OffsetPresentation.hxx
// ./opencascade/DsgPrs_TangentPresentation.hxx
// ./opencascade/DsgPrs_EqualDistancePresentation.hxx
// ./opencascade/DsgPrs_ArrowSide.hxx
// ./opencascade/DsgPrs_RadiusPresentation.hxx
// ./opencascade/DsgPrs_AnglePresentation.hxx
// ./opencascade/DsgPrs_FixPresentation.hxx
// ./opencascade/DsgPrs_ConcentricPresentation.hxx
// ./opencascade/DsgPrs_EllipseRadiusPresentation.hxx
// ./opencascade/DsgPrs_PerpenPresentation.hxx
// ./opencascade/DsgPrs_Chamf2dPresentation.hxx
// ./opencascade/DsgPrs_MidPointPresentation.hxx
// ./opencascade/DsgPrs_SymmetricPresentation.hxx
// ./opencascade/DsgPrs_LengthPresentation.hxx
// ./opencascade/DsgPrs_SymbPresentation.hxx
// ./opencascade/DsgPrs_EqualRadiusPresentation.hxx
// ./opencascade/DsgPrs_DiameterPresentation.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
