
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <HLRBRep_Data.hxx>
#include <TopoDS_Shape.hxx>
#include <HLRAlgo_Projector.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Point.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <TopoDS_Shape.hxx>
#include <BRep_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Adaptor3d_Surface.hxx>

// module includes
#include <StdPrs_BndBox.hxx>
#include <StdPrs_Curve.hxx>
#include <StdPrs_DeflectionCurve.hxx>
#include <StdPrs_HLRPolyShape.hxx>
#include <StdPrs_HLRShape.hxx>
#include <StdPrs_HLRToolShape.hxx>
#include <StdPrs_Isolines.hxx>
#include <StdPrs_Plane.hxx>
#include <StdPrs_Point.hxx>
#include <StdPrs_PoleCurve.hxx>
#include <StdPrs_ShadedShape.hxx>
#include <StdPrs_ShadedSurface.hxx>
#include <StdPrs_ToolPoint.hxx>
#include <StdPrs_ToolRFace.hxx>
#include <StdPrs_ToolTriangulatedShape.hxx>
#include <StdPrs_ToolVertex.hxx>
#include <StdPrs_Vertex.hxx>
#include <StdPrs_Volume.hxx>
#include <StdPrs_WFDeflectionRestrictedFace.hxx>
#include <StdPrs_WFDeflectionSurface.hxx>
#include <StdPrs_WFPoleSurface.hxx>
#include <StdPrs_WFRestrictedFace.hxx>
#include <StdPrs_WFShape.hxx>
#include <StdPrs_WFSurface.hxx>

// template related includes
// ./opencascade/StdPrs_Vertex.hxx
#include "Prs3d.hxx"
// ./opencascade/StdPrs_Point.hxx
#include "Prs3d.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdPrs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdPrs"));


//Python trampoline classes

// classes

    register_default_constructor<StdPrs_Curve ,std::unique_ptr<StdPrs_Curve>>(m,"StdPrs_Curve");

    static_cast<py::class_<StdPrs_Curve ,std::unique_ptr<StdPrs_Curve>  , Prs3d_Root >>(m.attr("StdPrs_Curve"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) >(&StdPrs_Curve::Add),
                    R"#(Adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is defined by LineAspect in aDrawer. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) >(&StdPrs_Curve::Add),
                    R"#(Adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is defined by LineAspect in aDrawer. The drawing will be limited between the points of parameter U1 and U2. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Boolean  ) >(&StdPrs_Curve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is the current aspect. aDeflection is used in the circle case. Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"),  py::arg("Points"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&StdPrs_Curve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is the current aspect. The drawing will be limited between the points of parameter U1 and U2. aDeflection is used in the circle case. Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("Points"),  py::arg("aNbPoints")=static_cast<const Standard_Integer>(30),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve is less than aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve is less than aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDeflection"),  py::arg("aLimit"),  py::arg("aNbPoints"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve is less than aDistance. The drawing is considered between the points of parameter U1 and U2;)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer  ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve is less than aDistance. The drawing is considered between the points of parameter U1 and U2;)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDeflection"),  py::arg("aNbPoints"))
;

    register_default_constructor<StdPrs_WFSurface ,std::unique_ptr<StdPrs_WFSurface>>(m,"StdPrs_WFSurface");

    static_cast<py::class_<StdPrs_WFSurface ,std::unique_ptr<StdPrs_WFSurface>  , Prs3d_Root >>(m.attr("StdPrs_WFSurface"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFSurface::Add),
                    R"#(Draws a surface by drawing the isoparametric curves with respect to a fixed number of points given by the Drawer. The number of isoparametric curves to be drawn and their color are controlled by the furnished Drawer.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
;

    register_default_constructor<StdPrs_HLRPolyShape ,std::unique_ptr<StdPrs_HLRPolyShape>>(m,"StdPrs_HLRPolyShape");

    static_cast<py::class_<StdPrs_HLRPolyShape ,std::unique_ptr<StdPrs_HLRPolyShape>  , Prs3d_Root >>(m.attr("StdPrs_HLRPolyShape"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const TopoDS_Shape & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<Prs3d_Projector> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const TopoDS_Shape & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<Prs3d_Projector> &  ) >(&StdPrs_HLRPolyShape::Add),
                    R"#(Defines the hidden line removal display of the topology aShape in the projection defined by aProjector. The shape and the projection are added to the display aPresentation, and the attributes of the elements present in the aPresentation are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aShape"),  py::arg("aDrawer"),  py::arg("aProjector"))
;

    register_default_constructor<StdPrs_ToolPoint ,std::unique_ptr<StdPrs_ToolPoint>>(m,"StdPrs_ToolPoint");

    static_cast<py::class_<StdPrs_ToolPoint ,std::unique_ptr<StdPrs_ToolPoint>  >>(m.attr("StdPrs_ToolPoint"))
        .def_static("Coord_s",
                    (void (*)( const opencascade::handle<Geom_Point> & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Point> & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&StdPrs_ToolPoint::Coord),
                    R"#(None)#"  , py::arg("aPoint"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"))
;

    register_default_constructor<StdPrs_WFDeflectionSurface ,std::unique_ptr<StdPrs_WFDeflectionSurface>>(m,"StdPrs_WFDeflectionSurface");

    static_cast<py::class_<StdPrs_WFDeflectionSurface ,std::unique_ptr<StdPrs_WFDeflectionSurface>  , Prs3d_Root >>(m.attr("StdPrs_WFDeflectionSurface"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Adaptor3d_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFDeflectionSurface::Add),
                    R"#(Adds the surface aSurface to the presentation object aPresentation, and defines its boundaries and isoparameters. The shape's display attributes are set in the attribute manager aDrawer. These include whether deflection is absolute or relative to the size of the shape. The surface aSurface is a surface object from Adaptor, and provides data from a Geom surface. This makes it possible to use the surface in a geometric algorithm. Note that this surface object is manipulated by handles.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
;


    static_cast<py::class_<StdPrs_ToolRFace ,std::unique_ptr<StdPrs_ToolRFace>  >>(m.attr("StdPrs_ToolRFace"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BRepAdaptor_HSurface> & >()  , py::arg("aSurface") )
        .def("IsOriented",
             (Standard_Boolean (StdPrs_ToolRFace::*)() const) static_cast<Standard_Boolean (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::IsOriented),
             R"#(None)#" )
        .def("Init",
             (void (StdPrs_ToolRFace::*)() ) static_cast<void (StdPrs_ToolRFace::*)() >(&StdPrs_ToolRFace::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (StdPrs_ToolRFace::*)() const) static_cast<Standard_Boolean (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::More),
             R"#(None)#" )
        .def("Next",
             (void (StdPrs_ToolRFace::*)() ) static_cast<void (StdPrs_ToolRFace::*)() >(&StdPrs_ToolRFace::Next),
             R"#(None)#" )
        .def("Value",
             (Adaptor2d_Curve2dPtr (StdPrs_ToolRFace::*)() const) static_cast<Adaptor2d_Curve2dPtr (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::Value),
             R"#(None)#" )
        .def("Orientation",
             (TopAbs_Orientation (StdPrs_ToolRFace::*)() const) static_cast<TopAbs_Orientation (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::Orientation),
             R"#(None)#" )
;

    register_default_constructor<StdPrs_WFDeflectionRestrictedFace ,std::unique_ptr<StdPrs_WFDeflectionRestrictedFace>>(m,"StdPrs_WFDeflectionRestrictedFace");

    static_cast<py::class_<StdPrs_WFDeflectionRestrictedFace ,std::unique_ptr<StdPrs_WFDeflectionRestrictedFace>  , Prs3d_Root >>(m.attr("StdPrs_WFDeflectionRestrictedFace"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFDeflectionRestrictedFace::Add),
                    R"#(Defines a display featuring U and V isoparameters. Adds the surface aFace to the StdPrs_WFRestrictedFace algorithm. This face is found in a shape in the presentation object aPresentation, and its display attributes - in particular, the number of U and V isoparameters - are set in the attribute manager aDrawer. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface.)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("AddUIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFDeflectionRestrictedFace::AddUIso),
                    R"#(Defines a display featuring U isoparameters respectively. Add the surface aFace to the StdPrs_WFRestrictedFace algorithm. This face is found in a shape in the presentation object aPresentation, and its display attributes - in particular, the number of U isoparameters - are set in the attribute manager aDrawer. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed to the function as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface.)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("AddVIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFDeflectionRestrictedFace::AddVIso),
                    R"#(Defines a display featuring V isoparameters respectively. Add the surface aFace to the StdPrs_WFRestrictedFace algorithm. This face is found in a shape in the presentation object aPresentation, and its display attributes - in particular, the number of V isoparameters - are set in the attribute manager aDrawer. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed to the function as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface.)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > &  ) >(&StdPrs_WFDeflectionRestrictedFace::Add),
                    R"#(Defines a display of a delection-specified face. The display will feature U and V isoparameters. Adds the topology aShape to the StdPrs_WFRestrictedFace algorithm. This shape is found in the presentation object aPresentation, and its display attributes - except the number of U and V isoparameters - are set in the attribute manager aDrawer. The function sets the number of U and V isoparameters, NBUiso and NBViso, in the shape. To do this, the arguments DrawUIso and DrawVIso must be true. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface. Curves give a sequence of face curves, it is used if the PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("DrawUIso"),  py::arg("DrawVIso"),  py::arg("Deflection"),  py::arg("NBUiso"),  py::arg("NBViso"),  py::arg("aDrawer"),  py::arg("Curves"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFDeflectionRestrictedFace::Match),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("MatchUIso_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFDeflectionRestrictedFace::MatchUIso),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("MatchVIso_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFDeflectionRestrictedFace::MatchVIso),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer  ) >(&StdPrs_WFDeflectionRestrictedFace::Match),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"),  py::arg("DrawUIso"),  py::arg("DrawVIso"),  py::arg("aDeflection"),  py::arg("NBUiso"),  py::arg("NBViso"))
;

    register_default_constructor<StdPrs_ShadedSurface ,std::unique_ptr<StdPrs_ShadedSurface>>(m,"StdPrs_ShadedSurface");

    static_cast<py::class_<StdPrs_ShadedSurface ,std::unique_ptr<StdPrs_ShadedSurface>  , Prs3d_Root >>(m.attr("StdPrs_ShadedSurface"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_ShadedSurface::Add),
                    R"#(Adds the surface aSurface to the presentation object aPresentation. The surface's display attributes are set in the attribute manager aDrawer. The surface object from Adaptor3d provides data from a Geom surface in order to use the surface in an algorithm.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
;

    register_default_constructor<StdPrs_PoleCurve ,std::unique_ptr<StdPrs_PoleCurve>>(m,"StdPrs_PoleCurve");

    static_cast<py::class_<StdPrs_PoleCurve ,std::unique_ptr<StdPrs_PoleCurve>  , Prs3d_Root >>(m.attr("StdPrs_PoleCurve"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_PoleCurve::Add),
                    R"#(Defines display of BSpline and Bezier curves. Adds the 3D curve aCurve to the StdPrs_PoleCurve algorithm. This shape is found in the presentation object aPresentation, and its display attributes are set in the attribute manager aDrawer. The curve object from Adaptor3d provides data from a Geom curve. This makes it possible to use the surface in a geometric algorithm.)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_PoleCurve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the broken line made of the poles is less then aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Pick_s",
                    (Standard_Integer (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Integer (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_PoleCurve::Pick),
                    R"#(returns the pole the most near of the point (X,Y,Z) and returns its range. The distance between the pole and (X,Y,Z) must be less then aDistance. If no pole corresponds, 0 is returned.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
;

    register_default_constructor<StdPrs_Plane ,std::unique_ptr<StdPrs_Plane>>(m,"StdPrs_Plane");

    static_cast<py::class_<StdPrs_Plane ,std::unique_ptr<StdPrs_Plane>  , Prs3d_Root >>(m.attr("StdPrs_Plane"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_Plane::Add),
                    R"#(Defines display of infinite planes. The infinite plane aPlane is added to the display aPresentation, and the attributes of the display are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aPlane"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_Plane::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the plane is less than aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aPlane"),  py::arg("aDrawer"))
;


    static_cast<py::class_<StdPrs_HLRToolShape ,std::unique_ptr<StdPrs_HLRToolShape>  >>(m.attr("StdPrs_HLRToolShape"))
        .def(py::init< const TopoDS_Shape &,const HLRAlgo_Projector & >()  , py::arg("TheShape"),  py::arg("TheProjector") )
        .def("NbEdges",
             (Standard_Integer (StdPrs_HLRToolShape::*)() const) static_cast<Standard_Integer (StdPrs_HLRToolShape::*)() const>(&StdPrs_HLRToolShape::NbEdges),
             R"#(None)#" )
        .def("InitVisible",
             (void (StdPrs_HLRToolShape::*)( const Standard_Integer  ) ) static_cast<void (StdPrs_HLRToolShape::*)( const Standard_Integer  ) >(&StdPrs_HLRToolShape::InitVisible),
             R"#(None)#"  , py::arg("EdgeNumber"))
        .def("MoreVisible",
             (Standard_Boolean (StdPrs_HLRToolShape::*)() const) static_cast<Standard_Boolean (StdPrs_HLRToolShape::*)() const>(&StdPrs_HLRToolShape::MoreVisible),
             R"#(None)#" )
        .def("NextVisible",
             (void (StdPrs_HLRToolShape::*)() ) static_cast<void (StdPrs_HLRToolShape::*)() >(&StdPrs_HLRToolShape::NextVisible),
             R"#(None)#" )
        .def("Visible",
             (void (StdPrs_HLRToolShape::*)( BRepAdaptor_Curve & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (StdPrs_HLRToolShape::*)( BRepAdaptor_Curve & ,  Standard_Real & ,  Standard_Real &  ) >(&StdPrs_HLRToolShape::Visible),
             R"#(None)#"  , py::arg("TheEdge"),  py::arg("U1"),  py::arg("U2"))
        .def("InitHidden",
             (void (StdPrs_HLRToolShape::*)( const Standard_Integer  ) ) static_cast<void (StdPrs_HLRToolShape::*)( const Standard_Integer  ) >(&StdPrs_HLRToolShape::InitHidden),
             R"#(None)#"  , py::arg("EdgeNumber"))
        .def("MoreHidden",
             (Standard_Boolean (StdPrs_HLRToolShape::*)() const) static_cast<Standard_Boolean (StdPrs_HLRToolShape::*)() const>(&StdPrs_HLRToolShape::MoreHidden),
             R"#(None)#" )
        .def("NextHidden",
             (void (StdPrs_HLRToolShape::*)() ) static_cast<void (StdPrs_HLRToolShape::*)() >(&StdPrs_HLRToolShape::NextHidden),
             R"#(None)#" )
        .def("Hidden",
             (void (StdPrs_HLRToolShape::*)( BRepAdaptor_Curve & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (StdPrs_HLRToolShape::*)( BRepAdaptor_Curve & ,  Standard_Real & ,  Standard_Real &  ) >(&StdPrs_HLRToolShape::Hidden),
             R"#(None)#"  , py::arg("TheEdge"),  py::arg("U1"),  py::arg("U2"))
;

    register_default_constructor<StdPrs_WFRestrictedFace ,std::unique_ptr<StdPrs_WFRestrictedFace>>(m,"StdPrs_WFRestrictedFace");

    static_cast<py::class_<StdPrs_WFRestrictedFace ,std::unique_ptr<StdPrs_WFRestrictedFace>  , Prs3d_Root >>(m.attr("StdPrs_WFRestrictedFace"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > &  ) >(&StdPrs_WFRestrictedFace::Add),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawUIso"),  py::arg("theDrawVIso"),  py::arg("theNbUIso"),  py::arg("theNbVIso"),  py::arg("theDrawer"),  py::arg("theCurves"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFRestrictedFace::Add),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Real ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFRestrictedFace::Match),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawUIso"),  py::arg("theDrawVIso"),  py::arg("theDeflection"),  py::arg("theNbUIso"),  py::arg("theNbVIso"),  py::arg("theDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFRestrictedFace::Match),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("MatchUIso_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFRestrictedFace::MatchUIso),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("MatchVIso_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFRestrictedFace::MatchVIso),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("AddUIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFRestrictedFace::AddUIso),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("AddVIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<BRepAdaptor_HSurface> & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFRestrictedFace::AddVIso),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"))
;

    register_default_constructor<StdPrs_DeflectionCurve ,std::unique_ptr<StdPrs_DeflectionCurve>>(m,"StdPrs_DeflectionCurve");

    static_cast<py::class_<StdPrs_DeflectionCurve ,std::unique_ptr<StdPrs_DeflectionCurve>  , Prs3d_Root >>(m.attr("StdPrs_DeflectionCurve"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation defined by the drawer aDrawer. The aspect is defined by LineAspect in aDrawer. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation defined by the drawer aDrawer. The aspect is defined by LineAspect in aDrawer. The drawing will be limited between the points of parameter U1 and U2. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation aDeflection. The aspect is the current aspect If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDeflection"),  py::arg("aLimit"),  py::arg("anAngle")=static_cast<const Standard_Real>(0.2),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> & ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Boolean  ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation aDeflection. The aspect is the current aspect Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDeflection"),  py::arg("aDrawer"),  py::arg("Points"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  NCollection_Sequence<gp_Pnt> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation aDeflection. The aspect is the current aspect The drawing will be limited between the points of parameter U1 and U2. Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDeflection"),  py::arg("Points"),  py::arg("anAngle")=static_cast<const Standard_Real>(0.2),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve with respect of the maximal chordial deviation defined by the drawer aDrawer is less then aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve with respect of the maximal chordial deviation defined by the drawer aDrawer is less then aDistance. The drawing is considered between the points of parameter U1 and U2;)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(Returns true if the distance between the point (theX, theY, theZ) and the drawing with respect of the maximal chordial deviation theDeflection is less then theDistance.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theCurve"),  py::arg("theDeflection"),  py::arg("theLimit"),  py::arg("theAngle"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Adaptor3d_Curve & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(Returns true if the distance between the point (theX, theY, theZ) and the drawing with respect of the maximal chordial deviation theDeflection is less then theDistance. The drawing is considered between the points of parameter theU1 and theU2.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theCurve"),  py::arg("theU1"),  py::arg("theU2"),  py::arg("theDeflection"),  py::arg("theAngle"))
;

    register_default_constructor<StdPrs_ToolVertex ,std::unique_ptr<StdPrs_ToolVertex>>(m,"StdPrs_ToolVertex");

    static_cast<py::class_<StdPrs_ToolVertex ,std::unique_ptr<StdPrs_ToolVertex>  >>(m.attr("StdPrs_ToolVertex"))
        .def_static("Coord_s",
                    (void (*)( const TopoDS_Vertex & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) ) static_cast<void (*)( const TopoDS_Vertex & ,  Standard_Real & ,  Standard_Real & ,  Standard_Real &  ) >(&StdPrs_ToolVertex::Coord),
                    R"#(None)#"  , py::arg("aPoint"),  py::arg("X"),  py::arg("Y"),  py::arg("Z"))
;

    register_default_constructor<StdPrs_HLRShape ,std::unique_ptr<StdPrs_HLRShape>>(m,"StdPrs_HLRShape");

    static_cast<py::class_<StdPrs_HLRShape ,std::unique_ptr<StdPrs_HLRShape>  , Prs3d_Root >>(m.attr("StdPrs_HLRShape"))
;

    register_default_constructor<StdPrs_WFPoleSurface ,std::unique_ptr<StdPrs_WFPoleSurface>>(m,"StdPrs_WFPoleSurface");

    static_cast<py::class_<StdPrs_WFPoleSurface ,std::unique_ptr<StdPrs_WFPoleSurface>  , Prs3d_Root >>(m.attr("StdPrs_WFPoleSurface"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const Adaptor3d_Surface & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&StdPrs_WFPoleSurface::Add),
                    R"#(Adds the surface aSurface to the presentation object aPresentation. The shape's display attributes are set in the attribute manager aDrawer. The surface aSurface is a surface object from Adaptor3d, and provides data from a Geom surface. This makes it possible to use the surface in a geometric algorithm.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
;

// functions
// ./opencascade/StdPrs_Isolines.hxx
// ./opencascade/StdPrs_BndBox.hxx
// ./opencascade/StdPrs_Curve.hxx
// ./opencascade/StdPrs_WFShape.hxx
// ./opencascade/StdPrs_WFSurface.hxx
// ./opencascade/StdPrs_HLRToolShape.hxx
// ./opencascade/StdPrs_HLRPolyShape.hxx
// ./opencascade/StdPrs_HLRShape.hxx
// ./opencascade/StdPrs_ToolPoint.hxx
// ./opencascade/StdPrs_Volume.hxx
// ./opencascade/StdPrs_ShadedShape.hxx
// ./opencascade/StdPrs_WFDeflectionSurface.hxx
// ./opencascade/StdPrs_DeflectionCurve.hxx
// ./opencascade/StdPrs_ToolRFace.hxx
// ./opencascade/StdPrs_Vertex.hxx
// ./opencascade/StdPrs_ToolTriangulatedShape.hxx
// ./opencascade/StdPrs_WFDeflectionRestrictedFace.hxx
// ./opencascade/StdPrs_WFPoleSurface.hxx
// ./opencascade/StdPrs_ShadedSurface.hxx
// ./opencascade/StdPrs_WFRestrictedFace.hxx
// ./opencascade/StdPrs_Point.hxx
// ./opencascade/StdPrs_PoleCurve.hxx
// ./opencascade/StdPrs_ToolVertex.hxx
// ./opencascade/StdPrs_Plane.hxx

// operators

// register typdefs
// ./opencascade/StdPrs_Isolines.hxx
// ./opencascade/StdPrs_BndBox.hxx
// ./opencascade/StdPrs_Curve.hxx
// ./opencascade/StdPrs_WFShape.hxx
// ./opencascade/StdPrs_WFSurface.hxx
// ./opencascade/StdPrs_HLRToolShape.hxx
// ./opencascade/StdPrs_HLRPolyShape.hxx
// ./opencascade/StdPrs_HLRShape.hxx
// ./opencascade/StdPrs_ToolPoint.hxx
// ./opencascade/StdPrs_Volume.hxx
// ./opencascade/StdPrs_ShadedShape.hxx
// ./opencascade/StdPrs_WFDeflectionSurface.hxx
// ./opencascade/StdPrs_DeflectionCurve.hxx
// ./opencascade/StdPrs_ToolRFace.hxx
// ./opencascade/StdPrs_Vertex.hxx
    register_template_Prs3d_Point<TopoDS_Vertex, StdPrs_ToolVertex>(m,"StdPrs_Vertex");  
// ./opencascade/StdPrs_ToolTriangulatedShape.hxx
// ./opencascade/StdPrs_WFDeflectionRestrictedFace.hxx
// ./opencascade/StdPrs_WFPoleSurface.hxx
// ./opencascade/StdPrs_ShadedSurface.hxx
// ./opencascade/StdPrs_WFRestrictedFace.hxx
// ./opencascade/StdPrs_Point.hxx
    register_template_Prs3d_Point<opencascade::handle<Geom_Point>, StdPrs_ToolPoint>(m,"StdPrs_Point");  
// ./opencascade/StdPrs_PoleCurve.hxx
// ./opencascade/StdPrs_ToolVertex.hxx
// ./opencascade/StdPrs_Plane.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
