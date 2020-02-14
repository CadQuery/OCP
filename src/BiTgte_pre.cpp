
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Standard_NoSuchObject.hxx>
#include <Geom_Curve.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <BRepOffset_Inter3d.hxx>

// module includes
#include <BiTgte_Blend.hxx>
#include <BiTgte_ContactType.hxx>
#include <BiTgte_CurveOnEdge.hxx>
#include <BiTgte_CurveOnVertex.hxx>
#include <BiTgte_HCurveOnEdge.hxx>
#include <BiTgte_HCurveOnVertex.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BiTgte_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BiTgte", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BiTgte_ContactType>(m, "BiTgte_ContactType",R"#(None)#")
        .value("BiTgte_FaceFace",BiTgte_ContactType::BiTgte_FaceFace)
        .value("BiTgte_FaceEdge",BiTgte_ContactType::BiTgte_FaceEdge)
        .value("BiTgte_FaceVertex",BiTgte_ContactType::BiTgte_FaceVertex)
        .value("BiTgte_EdgeEdge",BiTgte_ContactType::BiTgte_EdgeEdge)
        .value("BiTgte_EdgeVertex",BiTgte_ContactType::BiTgte_EdgeVertex)
        .value("BiTgte_VertexVertex",BiTgte_ContactType::BiTgte_VertexVertex).export_values();

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<BiTgte_Blend , shared_ptr<BiTgte_Blend>  >(m,"BiTgte_Blend",R"#(Root class)#");
    py::class_<BiTgte_CurveOnEdge , shared_ptr<BiTgte_CurveOnEdge>  , Adaptor3d_Curve >(m,"BiTgte_CurveOnEdge",R"#(private class used to create a filler rolling on an edge.)#");
    py::class_<BiTgte_CurveOnVertex , shared_ptr<BiTgte_CurveOnVertex>  , Adaptor3d_Curve >(m,"BiTgte_CurveOnVertex",R"#(private class used to create a filler rolling on an edge.)#");
    py::class_<BiTgte_HCurveOnEdge ,opencascade::handle<BiTgte_HCurveOnEdge>  , Adaptor3d_HCurve >(m,"BiTgte_HCurveOnEdge",R"#()#");
    py::class_<BiTgte_HCurveOnVertex ,opencascade::handle<BiTgte_HCurveOnVertex>  , Adaptor3d_HCurve >(m,"BiTgte_HCurveOnVertex",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
