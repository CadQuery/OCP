
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <GeomPlate_Surface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <AdvApp2Var_Criterion.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Line.hxx>
#include <AdvApp2Var_Patch.hxx>
#include <AdvApp2Var_Context.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom2d_Curve.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Law_Function.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <Geom_Surface.hxx>
#include <GeomPlate_Surface.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Geom_Surface.hxx>
#include <Geom_UndefinedDerivative.hxx>
#include <Geom_UndefinedValue.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

// module includes
#include <GeomPlate_Aij.hxx>
#include <GeomPlate_Array1OfHCurve.hxx>
#include <GeomPlate_Array1OfSequenceOfReal.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <GeomPlate_BuildPlateSurface.hxx>
#include <GeomPlate_CurveConstraint.hxx>
#include <GeomPlate_HArray1OfHCurve.hxx>
#include <GeomPlate_HArray1OfSequenceOfReal.hxx>
#include <GeomPlate_HSequenceOfCurveConstraint.hxx>
#include <GeomPlate_HSequenceOfPointConstraint.hxx>
#include <GeomPlate_MakeApprox.hxx>
#include <GeomPlate_PlateG0Criterion.hxx>
#include <GeomPlate_PlateG1Criterion.hxx>
#include <GeomPlate_PointConstraint.hxx>
#include <GeomPlate_SequenceOfAij.hxx>
#include <GeomPlate_SequenceOfCurveConstraint.hxx>
#include <GeomPlate_SequenceOfPointConstraint.hxx>
#include <GeomPlate_Surface.hxx>

// template related includes
// ./opencascade/GeomPlate_Array1OfSequenceOfReal.hxx
#include "NCollection.hxx"
// ./opencascade/GeomPlate_SequenceOfAij.hxx
#include "NCollection.hxx"
// ./opencascade/GeomPlate_SequenceOfCurveConstraint.hxx
#include "NCollection.hxx"
// ./opencascade/GeomPlate_Array1OfHCurve.hxx
#include "NCollection.hxx"
// ./opencascade/GeomPlate_SequenceOfPointConstraint.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_GeomPlate_enums(py::module &main_module) {


py::module m = main_module.def_submodule("GeomPlate", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<TColStd_SequenceOfReal>(m,"GeomPlate_Array1OfSequenceOfReal");  
    preregister_template_NCollection_Sequence<GeomPlate_Aij>(m,"GeomPlate_SequenceOfAij");  
    preregister_template_NCollection_Sequence<opencascade::handle<GeomPlate_CurveConstraint> >(m,"GeomPlate_SequenceOfCurveConstraint");  
    preregister_template_NCollection_Array1<opencascade::handle<Adaptor3d_HCurve> >(m,"GeomPlate_Array1OfHCurve");  
    preregister_template_NCollection_Sequence<opencascade::handle<GeomPlate_PointConstraint> >(m,"GeomPlate_SequenceOfPointConstraint");  

// classes forward declarations only
    py::class_<GeomPlate_Aij , shared_ptr<GeomPlate_Aij>  >(m,"GeomPlate_Aij",R"#(A structure containing indexes of two normals and its cross product)#");
    py::class_<GeomPlate_BuildAveragePlane , shared_ptr<GeomPlate_BuildAveragePlane>  >(m,"GeomPlate_BuildAveragePlane",R"#(This class computes an average inertial plane with an array of points. Computes the initial surface (average plane) in the cases when the initial surface is not given.)#");
    py::class_<GeomPlate_BuildPlateSurface , shared_ptr<GeomPlate_BuildPlateSurface>  >(m,"GeomPlate_BuildPlateSurface",R"#(This class provides an algorithm for constructing such a plate surface that it conforms to given curve and/or point constraints. The algorithm accepts or constructs an initial surface and looks for a deformation of it satisfying the constraints and minimizing energy input. A BuildPlateSurface object provides a framework for: - defining or setting constraints - implementing the construction algorithm - consulting the result.)#");
    py::class_<GeomPlate_CurveConstraint ,opencascade::handle<GeomPlate_CurveConstraint>  , Standard_Transient >(m,"GeomPlate_CurveConstraint",R"#(Defines curves as constraints to be used to deform a surface.Defines curves as constraints to be used to deform a surface.Defines curves as constraints to be used to deform a surface.)#");
    py::class_<GeomPlate_HArray1OfHCurve ,opencascade::handle<GeomPlate_HArray1OfHCurve>  , GeomPlate_Array1OfHCurve , Standard_Transient >(m,"GeomPlate_HArray1OfHCurve",R"#()#");
    py::class_<GeomPlate_HArray1OfSequenceOfReal ,opencascade::handle<GeomPlate_HArray1OfSequenceOfReal>  , GeomPlate_Array1OfSequenceOfReal , Standard_Transient >(m,"GeomPlate_HArray1OfSequenceOfReal",R"#()#");
    py::class_<GeomPlate_HSequenceOfCurveConstraint ,opencascade::handle<GeomPlate_HSequenceOfCurveConstraint>  , GeomPlate_SequenceOfCurveConstraint , Standard_Transient >(m,"GeomPlate_HSequenceOfCurveConstraint",R"#()#");
    py::class_<GeomPlate_HSequenceOfPointConstraint ,opencascade::handle<GeomPlate_HSequenceOfPointConstraint>  , GeomPlate_SequenceOfPointConstraint , Standard_Transient >(m,"GeomPlate_HSequenceOfPointConstraint",R"#()#");
    py::class_<GeomPlate_MakeApprox , shared_ptr<GeomPlate_MakeApprox>  >(m,"GeomPlate_MakeApprox",R"#(Allows you to convert a GeomPlate surface into a BSpline.)#");
    py::class_<GeomPlate_PlateG0Criterion , shared_ptr<GeomPlate_PlateG0Criterion>  , AdvApp2Var_Criterion >(m,"GeomPlate_PlateG0Criterion",R"#(this class contains a specific G0 criterion for GeomPlate_MakeApprox)#");
    py::class_<GeomPlate_PlateG1Criterion , shared_ptr<GeomPlate_PlateG1Criterion>  , AdvApp2Var_Criterion >(m,"GeomPlate_PlateG1Criterion",R"#(this class contains a specific G1 criterion for GeomPlate_MakeApprox)#");
    py::class_<GeomPlate_PointConstraint ,opencascade::handle<GeomPlate_PointConstraint>  , Standard_Transient >(m,"GeomPlate_PointConstraint",R"#(Defines points as constraints to be used to deform a surface.Defines points as constraints to be used to deform a surface.Defines points as constraints to be used to deform a surface.)#");
    py::class_<GeomPlate_Surface ,opencascade::handle<GeomPlate_Surface>  , Geom_Surface >(m,"GeomPlate_Surface",R"#(Describes the characteristics of plate surface objects returned by BuildPlateSurface::Surface. These can be used to verify the quality of the resulting surface before approximating it to a Geom_BSpline surface generated by MakeApprox. This proves necessary in cases where you want to use the resulting surface as the support for a shape. The algorithmically generated surface cannot fill this function as is, and as a result must be converted first.Describes the characteristics of plate surface objects returned by BuildPlateSurface::Surface. These can be used to verify the quality of the resulting surface before approximating it to a Geom_BSpline surface generated by MakeApprox. This proves necessary in cases where you want to use the resulting surface as the support for a shape. The algorithmically generated surface cannot fill this function as is, and as a result must be converted first.Describes the characteristics of plate surface objects returned by BuildPlateSurface::Surface. These can be used to verify the quality of the resulting surface before approximating it to a Geom_BSpline surface generated by MakeApprox. This proves necessary in cases where you want to use the resulting surface as the support for a shape. The algorithmically generated surface cannot fill this function as is, and as a result must be converted first.)#");

};

// user-defined post-inclusion per module

// user-defined post
