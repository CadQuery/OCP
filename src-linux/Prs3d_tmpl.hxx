#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Bnd_Box.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_DimensionAspect.hxx>

// module includes
#include <Prs3d_VertexDrawMode.hxx>
#include <Prs3d_DimensionArrowOrientation.hxx>
#include <Prs3d_DimensionUnits.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_Projector.hxx>
#include <Prs3d_DimensionTextHorizontalPosition.hxx>
#include <Prs3d_DatumMode.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_ShapeTool.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_Text.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_TypeOfHighlight.hxx>
#include <Prs3d_ToolQuadric.hxx>
#include <Prs3d_TypeOfHLR.hxx>
#include <Prs3d.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_InvalidAngle.hxx>
#include <Prs3d_Root.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <Prs3d_NListIteratorOfListOfSequenceOfPnt.hxx>
#include <Prs3d_DatumParts.hxx>
#include <Prs3d_Drawer.hxx>
#include <Prs3d_ToolSphere.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_ToolSector.hxx>
#include <Prs3d_Point.hxx>
#include <Prs3d_ToolCylinder.hxx>
#include <Prs3d_DatumAttribute.hxx>
#include <Prs3d_DatumAxes.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <Prs3d_TypeOfLinePicking.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_DimensionTextVerticalPosition.hxx>
#include <Prs3d_Arrow.hxx>
#include <Prs3d_PresentationShadow.hxx>
#include <Prs3d_ToolDisk.hxx>
#include <Prs3d_NListOfSequenceOfPnt.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/Prs3d_VertexDrawMode.hxx
// ./opencascade/Prs3d_DimensionArrowOrientation.hxx
// ./opencascade/Prs3d_DimensionUnits.hxx
// ./opencascade/Prs3d_IsoAspect.hxx
// ./opencascade/Prs3d_Projector.hxx
// ./opencascade/Prs3d_DimensionTextHorizontalPosition.hxx
// ./opencascade/Prs3d_DatumMode.hxx
// ./opencascade/Prs3d_ArrowAspect.hxx
// ./opencascade/Prs3d_ShapeTool.hxx
// ./opencascade/Prs3d_DatumAspect.hxx
// ./opencascade/Prs3d_Text.hxx
// ./opencascade/Prs3d_LineAspect.hxx
// ./opencascade/Prs3d_TypeOfHighlight.hxx
// ./opencascade/Prs3d_ToolQuadric.hxx
// ./opencascade/Prs3d_TypeOfHLR.hxx
// ./opencascade/Prs3d.hxx
// ./opencascade/Prs3d_PointAspect.hxx
// ./opencascade/Prs3d_InvalidAngle.hxx
// ./opencascade/Prs3d_Root.hxx
// ./opencascade/Prs3d_BasicAspect.hxx
// ./opencascade/Prs3d_NListIteratorOfListOfSequenceOfPnt.hxx
// ./opencascade/Prs3d_DatumParts.hxx
// ./opencascade/Prs3d_Drawer.hxx
// ./opencascade/Prs3d_ToolSphere.hxx
// ./opencascade/Prs3d_ShadingAspect.hxx
// ./opencascade/Prs3d_ToolSector.hxx
// ./opencascade/Prs3d_Point.hxx

template <typename AnyPoint,typename PointTool>
void preregister_template_Prs3d_Point(py::object &m, const char *name){
    py::class_<Prs3d_Point<AnyPoint,PointTool> , shared_ptr<Prs3d_Point<AnyPoint,PointTool>> >(m,name,R"#(None)#");
}

template <typename AnyPoint,typename PointTool>
void register_template_Prs3d_Point(py::object &m, const char *name){
    static_cast<py::class_<Prs3d_Point<AnyPoint,PointTool> , shared_ptr<Prs3d_Point<AnyPoint,PointTool>> >>(m.attr(name))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const AnyPoint & , const opencascade::handle<Prs3d_Drawer> & ) ) &Prs3d_Point<AnyPoint,PointTool>::Add,
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("thePoint"),  py::arg("theDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const AnyPoint & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) &Prs3d_Point<AnyPoint,PointTool>::Match,
                    R"#(None)#"  , py::arg("thePoint"),  py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"))
    ;
};
// ./opencascade/Prs3d_ToolCylinder.hxx
// ./opencascade/Prs3d_DatumAttribute.hxx
// ./opencascade/Prs3d_DatumAxes.hxx
// ./opencascade/Prs3d_TextAspect.hxx
// ./opencascade/Prs3d_DimensionAspect.hxx
// ./opencascade/Prs3d_TypeOfLinePicking.hxx
// ./opencascade/Prs3d_PlaneAspect.hxx
// ./opencascade/Prs3d_Presentation.hxx
// ./opencascade/Prs3d_DimensionTextVerticalPosition.hxx
// ./opencascade/Prs3d_Arrow.hxx
// ./opencascade/Prs3d_PresentationShadow.hxx
// ./opencascade/Prs3d_ToolDisk.hxx
// ./opencascade/Prs3d_NListOfSequenceOfPnt.hxx

// user-defined post
