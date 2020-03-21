
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <math_Matrix.hxx>
#include <AppParCurves_MultiPoint.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_ConstraintCouple.hxx>

// module includes
#include <AppParCurves.hxx>
#include <AppParCurves_Array1OfConstraintCouple.hxx>
#include <AppParCurves_Array1OfMultiBSpCurve.hxx>
#include <AppParCurves_Array1OfMultiCurve.hxx>
#include <AppParCurves_Array1OfMultiPoint.hxx>
#include <AppParCurves_Constraint.hxx>
#include <AppParCurves_ConstraintCouple.hxx>
#include <AppParCurves_HArray1OfConstraintCouple.hxx>
#include <AppParCurves_HArray1OfMultiBSpCurve.hxx>
#include <AppParCurves_HArray1OfMultiCurve.hxx>
#include <AppParCurves_HArray1OfMultiPoint.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppParCurves_MultiPoint.hxx>
#include <AppParCurves_SequenceOfMultiBSpCurve.hxx>
#include <AppParCurves_SequenceOfMultiCurve.hxx>

// template related includes
// ./opencascade/AppParCurves_Array1OfConstraintCouple.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_SequenceOfMultiBSpCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiBSpCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_Array1OfMultiPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/AppParCurves_SequenceOfMultiCurve.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_AppParCurves_enums(py::module &main_module) {


py::module m = main_module.def_submodule("AppParCurves", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<AppParCurves_Constraint>(m, "AppParCurves_Constraint",R"#(- NoConstraint: this point has no constraints. - PassPoint: the approximation curve passes through this point. - TangencyPoint: this point has a tangency constraint. - CurvaturePoint: this point has a curvature constraint.)#")
        .value("AppParCurves_NoConstraint",AppParCurves_Constraint::AppParCurves_NoConstraint)
        .value("AppParCurves_PassPoint",AppParCurves_Constraint::AppParCurves_PassPoint)
        .value("AppParCurves_TangencyPoint",AppParCurves_Constraint::AppParCurves_TangencyPoint)
        .value("AppParCurves_CurvaturePoint",AppParCurves_Constraint::AppParCurves_CurvaturePoint).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_Array1<AppParCurves_ConstraintCouple>(m,"AppParCurves_Array1OfConstraintCouple");
    preregister_template_NCollection_Sequence<AppParCurves_MultiBSpCurve>(m,"AppParCurves_SequenceOfMultiBSpCurve");
    preregister_template_NCollection_Array1<AppParCurves_MultiCurve>(m,"AppParCurves_Array1OfMultiCurve");
    preregister_template_NCollection_Array1<AppParCurves_MultiBSpCurve>(m,"AppParCurves_Array1OfMultiBSpCurve");
    preregister_template_NCollection_Array1<AppParCurves_MultiPoint>(m,"AppParCurves_Array1OfMultiPoint");
    preregister_template_NCollection_Sequence<AppParCurves_MultiCurve>(m,"AppParCurves_SequenceOfMultiCurve");

// classes forward declarations only
    py::class_<AppParCurves , shared_ptr<AppParCurves> >(m,"AppParCurves",R"#(Parallel Approximation in n curves. This package gives all the algorithms used to approximate a MultiLine described by the tool MLineTool. The result of the approximation will be a MultiCurve.)#");
    py::class_<AppParCurves_ConstraintCouple , shared_ptr<AppParCurves_ConstraintCouple> >(m,"AppParCurves_ConstraintCouple",R"#(associates an index and a constraint for an object. This couple is used by AppDef_TheVariational when performing approximations.)#");
    py::class_<AppParCurves_HArray1OfConstraintCouple ,opencascade::handle<AppParCurves_HArray1OfConstraintCouple> , AppParCurves_Array1OfConstraintCouple, Standard_Transient>(m,"AppParCurves_HArray1OfConstraintCouple",R"#()#");
    py::class_<AppParCurves_HArray1OfMultiBSpCurve ,opencascade::handle<AppParCurves_HArray1OfMultiBSpCurve> , AppParCurves_Array1OfMultiBSpCurve, Standard_Transient>(m,"AppParCurves_HArray1OfMultiBSpCurve",R"#()#");
    py::class_<AppParCurves_HArray1OfMultiCurve ,opencascade::handle<AppParCurves_HArray1OfMultiCurve> , AppParCurves_Array1OfMultiCurve, Standard_Transient>(m,"AppParCurves_HArray1OfMultiCurve",R"#()#");
    py::class_<AppParCurves_HArray1OfMultiPoint ,opencascade::handle<AppParCurves_HArray1OfMultiPoint> , AppParCurves_Array1OfMultiPoint, Standard_Transient>(m,"AppParCurves_HArray1OfMultiPoint",R"#()#");
    py::class_<AppParCurves_MultiCurve , shared_ptr<AppParCurves_MultiCurve> >(m,"AppParCurves_MultiCurve",R"#(This class describes a MultiCurve approximating a Multiline. As a Multiline is a set of n lines, a MultiCurve is a set of n curves. These curves are Bezier curves. A MultiCurve is composed of m MultiPoint. The approximating degree of these n curves is the same for each one.)#");
    py::class_<AppParCurves_MultiPoint , shared_ptr<AppParCurves_MultiPoint> >(m,"AppParCurves_MultiPoint",R"#(This class describes Points composing a MultiPoint. These points can be 2D or 3D. The user must first give the 3D Points and then the 2D Points. They are Poles of a Bezier Curve. This class is used either to define data input or results when performing the approximation of several lines in parallel.)#");
    py::class_<AppParCurves_MultiBSpCurve , shared_ptr<AppParCurves_MultiBSpCurve> , AppParCurves_MultiCurve>(m,"AppParCurves_MultiBSpCurve",R"#(This class describes a MultiBSpCurve approximating a Multiline. Just as a Multiline is a set of a given number of lines, a MultiBSpCurve is a set of a specified number of bsplines defined by: - A specified number of MultiPoints - the poles of a specified number of curves - The degree of approximation identical for each of the specified number of curves.)#");

};

// user-defined post-inclusion per module

// user-defined post
