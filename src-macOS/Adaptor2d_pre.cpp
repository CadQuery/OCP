
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor2d_HCurve2d.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_TypeMismatch.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <gp_Lin2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_BezierCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>

// module includes
#include <Adaptor2d_Curve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
#include <Adaptor2d_HLine2d.hxx>
#include <Adaptor2d_HOffsetCurve.hxx>
#include <Adaptor2d_Line2d.hxx>
#include <Adaptor2d_OffsetCurve.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Adaptor2d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Adaptor2d", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_Adaptor2d_HCurve2d : public Adaptor2d_HCurve2d{
    public:
        using Adaptor2d_HCurve2d::Adaptor2d_HCurve2d;


        // public pure virtual
        const Adaptor2d_Curve2d & Curve2d() const  override { PYBIND11_OVERLOAD_PURE(const Adaptor2d_Curve2d &,Adaptor2d_HCurve2d,Curve2d,) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs

// classes forward declarations only
    py::class_<Adaptor2d_Curve2d , shared_ptr<Adaptor2d_Curve2d> >(m,"Adaptor2d_Curve2d",R"#(Root class for 2D curves on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve, and those required of the curve by algorithms, which use it. A derived concrete class is provided: Geom2dAdaptor_Curve for a curve from the Geom2d package.)#");
    py::class_<Adaptor2d_HCurve2d ,opencascade::handle<Adaptor2d_HCurve2d>,Py_Adaptor2d_HCurve2d , Standard_Transient>(m,"Adaptor2d_HCurve2d",R"#(Root class for 2D curves manipulated by handles, on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve, and those required of the curve by algorithms, which use it. A derived specific class is provided: Geom2dAdaptor_HCurve for a curve from the Geom2d package.Root class for 2D curves manipulated by handles, on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve, and those required of the curve by algorithms, which use it. A derived specific class is provided: Geom2dAdaptor_HCurve for a curve from the Geom2d package.Root class for 2D curves manipulated by handles, on which geometric algorithms work. An adapted curve is an interface between the services provided by a curve, and those required of the curve by algorithms, which use it. A derived specific class is provided: Geom2dAdaptor_HCurve for a curve from the Geom2d package.)#");
    py::class_<Adaptor2d_HLine2d ,opencascade::handle<Adaptor2d_HLine2d> , Adaptor2d_HCurve2d>(m,"Adaptor2d_HLine2d",R"#()#");
    py::class_<Adaptor2d_HOffsetCurve ,opencascade::handle<Adaptor2d_HOffsetCurve> , Adaptor2d_HCurve2d>(m,"Adaptor2d_HOffsetCurve",R"#()#");
    py::class_<Adaptor2d_Line2d , shared_ptr<Adaptor2d_Line2d> , Adaptor2d_Curve2d>(m,"Adaptor2d_Line2d",R"#(Use by the TopolTool to trim a surface.)#");
    py::class_<Adaptor2d_OffsetCurve , shared_ptr<Adaptor2d_OffsetCurve> , Adaptor2d_Curve2d>(m,"Adaptor2d_OffsetCurve",R"#(Defines an Offset curve (algorithmic 2d curve).)#");

};

// user-defined post-inclusion per module

// user-defined post
