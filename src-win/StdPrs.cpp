
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Vertex.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <HLRBRep_Data.hxx>
#include <TopoDS_Shape.hxx>
#include <HLRAlgo_Projector.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <Graphic3d_ArrayOfPoints.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Point.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <TopoDS_Shape.hxx>
#include <BRep_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Shape.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_HSurface.hxx>

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
// ./opencascade\StdPrs_Vertex.hxx
#include "Prs3d_tmpl.hxx"
// ./opencascade\StdPrs_Point.hxx
#include "Prs3d_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StdPrs(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StdPrs"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StdPrs_BndBox , shared_ptr<StdPrs_BndBox>>(m,"StdPrs_BndBox");

    static_cast<py::class_<StdPrs_BndBox , shared_ptr<StdPrs_BndBox> , Prs3d_Root>>(m.attr("StdPrs_BndBox"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Bnd_Box & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Bnd_Box & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_BndBox::Add),
                    R"#(Computes presentation of a bounding box.)#"  , py::arg("thePresentation"),  py::arg("theBndBox"),  py::arg("theDrawer"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Bnd_OBB & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Bnd_OBB & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_BndBox::Add),
                    R"#(Computes presentation of a bounding box.)#"  , py::arg("thePresentation"),  py::arg("theBndBox"),  py::arg("theDrawer"))
        .def_static("FillSegments_s",
                    (opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const Bnd_OBB & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const Bnd_OBB & ) >(&StdPrs_BndBox::FillSegments),
                    R"#(Create primitive array with line segments for displaying a box.)#"  , py::arg("theBox"))
        .def_static("FillSegments_s",
                    (opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const Bnd_Box & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const Bnd_Box & ) >(&StdPrs_BndBox::FillSegments),
                    R"#(Create primitive array with line segments for displaying a box.)#"  , py::arg("theBox"))
        .def_static("FillSegments_s",
                    (void (*)( const opencascade::handle<Graphic3d_ArrayOfSegments> & , const Bnd_OBB & ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_ArrayOfSegments> & , const Bnd_OBB & ) >(&StdPrs_BndBox::FillSegments),
                    R"#(Create primitive array with line segments for displaying a box.)#"  , py::arg("theSegments"),  py::arg("theBox"))
        .def_static("FillSegments_s",
                    (void (*)( const opencascade::handle<Graphic3d_ArrayOfSegments> & , const Bnd_Box & ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_ArrayOfSegments> & , const Bnd_Box & ) >(&StdPrs_BndBox::FillSegments),
                    R"#(Create primitive array with line segments for displaying a box.)#"  , py::arg("theSegments"),  py::arg("theBox"))
        .def_static("fillSegments_s",
                    (void (*)( const opencascade::handle<Graphic3d_ArrayOfSegments> & , const gp_Pnt * ) ) static_cast<void (*)( const opencascade::handle<Graphic3d_ArrayOfSegments> & , const gp_Pnt * ) >(&StdPrs_BndBox::fillSegments),
                    R"#(Create primitive array with line segments for displaying a box.)#"  , py::arg("theSegments"),  py::arg("theBox"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_Curve , shared_ptr<StdPrs_Curve>>(m,"StdPrs_Curve");

    static_cast<py::class_<StdPrs_Curve , shared_ptr<StdPrs_Curve> , Prs3d_Root>>(m.attr("StdPrs_Curve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) >(&StdPrs_Curve::Add),
                    R"#(Adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is defined by LineAspect in aDrawer. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) >(&StdPrs_Curve::Add),
                    R"#(Adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is defined by LineAspect in aDrawer. The drawing will be limited between the points of parameter U1 and U2. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & , NCollection_Sequence<gp_Pnt> & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & , NCollection_Sequence<gp_Pnt> & , const Standard_Boolean ) >(&StdPrs_Curve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is the current aspect. aDeflection is used in the circle case. Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"),  py::arg("Points"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , NCollection_Sequence<gp_Pnt> & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , NCollection_Sequence<gp_Pnt> & , const Standard_Integer , const Standard_Boolean ) >(&StdPrs_Curve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve. The aspect is the current aspect. The drawing will be limited between the points of parameter U1 and U2. aDeflection is used in the circle case. Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("Points"),  py::arg("aNbPoints")=static_cast<const Standard_Integer>(30),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve is less than aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve is less than aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDeflection"),  py::arg("aLimit"),  py::arg("aNbPoints"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve is less than aDistance. The drawing is considered between the points of parameter U1 and U2;)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Integer ) >(&StdPrs_Curve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve is less than aDistance. The drawing is considered between the points of parameter U1 and U2;)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDeflection"),  py::arg("aNbPoints"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_DeflectionCurve , shared_ptr<StdPrs_DeflectionCurve>>(m,"StdPrs_DeflectionCurve");

    static_cast<py::class_<StdPrs_DeflectionCurve , shared_ptr<StdPrs_DeflectionCurve> , Prs3d_Root>>(m.attr("StdPrs_DeflectionCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation defined by the drawer aDrawer. The aspect is defined by LineAspect in aDrawer. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation defined by the drawer aDrawer. The aspect is defined by LineAspect in aDrawer. The drawing will be limited between the points of parameter U1 and U2. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Boolean ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation aDeflection. The aspect is the current aspect If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDeflection"),  py::arg("aLimit"),  py::arg("anAngle")=static_cast<const Standard_Real>(0.2),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & , NCollection_Sequence<gp_Pnt> & , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & , NCollection_Sequence<gp_Pnt> & , const Standard_Boolean ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation aDeflection. The aspect is the current aspect Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDeflection"),  py::arg("aDrawer"),  py::arg("Points"),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Sequence<gp_Pnt> & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , NCollection_Sequence<gp_Pnt> & , const Standard_Real , const Standard_Boolean ) >(&StdPrs_DeflectionCurve::Add),
                    R"#(adds to the presentation aPresentation the drawing of the curve aCurve with respect to the maximal chordial deviation aDeflection. The aspect is the current aspect The drawing will be limited between the points of parameter U1 and U2. Points give a sequence of curve points. If drawCurve equals Standard_False the curve will not be displayed, it is used if the curve is a part of some shape and PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDeflection"),  py::arg("Points"),  py::arg("anAngle")=static_cast<const Standard_Real>(0.2),  py::arg("drawCurve")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve with respect of the maximal chordial deviation defined by the drawer aDrawer is less then aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the drawing of the curve aCurve with respect of the maximal chordial deviation defined by the drawer aDrawer is less then aDistance. The drawing is considered between the points of parameter U1 and U2;)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("U1"),  py::arg("U2"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(Returns true if the distance between the point (theX, theY, theZ) and the drawing with respect of the maximal chordial deviation theDeflection is less then theDistance.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theCurve"),  py::arg("theDeflection"),  py::arg("theLimit"),  py::arg("theAngle"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&StdPrs_DeflectionCurve::Match),
                    R"#(Returns true if the distance between the point (theX, theY, theZ) and the drawing with respect of the maximal chordial deviation theDeflection is less then theDistance. The drawing is considered between the points of parameter theU1 and theU2.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theCurve"),  py::arg("theU1"),  py::arg("theU2"),  py::arg("theDeflection"),  py::arg("theAngle"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_HLRPolyShape , shared_ptr<StdPrs_HLRPolyShape>>(m,"StdPrs_HLRPolyShape");

    static_cast<py::class_<StdPrs_HLRPolyShape , shared_ptr<StdPrs_HLRPolyShape> , Prs3d_Root>>(m.attr("StdPrs_HLRPolyShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const opencascade::handle<Prs3d_Projector> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const opencascade::handle<Prs3d_Projector> & ) >(&StdPrs_HLRPolyShape::Add),
                    R"#(Defines the hidden line removal display of the topology aShape in the projection defined by aProjector. The shape and the projection are added to the display aPresentation, and the attributes of the elements present in the aPresentation are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aShape"),  py::arg("aDrawer"),  py::arg("aProjector"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_HLRShape , shared_ptr<StdPrs_HLRShape>>(m,"StdPrs_HLRShape");

    static_cast<py::class_<StdPrs_HLRShape , shared_ptr<StdPrs_HLRShape> , Prs3d_Root>>(m.attr("StdPrs_HLRShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdPrs_HLRToolShape , shared_ptr<StdPrs_HLRToolShape> >>(m.attr("StdPrs_HLRToolShape"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const HLRAlgo_Projector & >()  , py::arg("TheShape"),  py::arg("TheProjector") )
    // custom constructors
    // methods
        .def("NbEdges",
             (Standard_Integer (StdPrs_HLRToolShape::*)() const) static_cast<Standard_Integer (StdPrs_HLRToolShape::*)() const>(&StdPrs_HLRToolShape::NbEdges),
             R"#(None)#" )
        .def("InitVisible",
             (void (StdPrs_HLRToolShape::*)( const Standard_Integer ) ) static_cast<void (StdPrs_HLRToolShape::*)( const Standard_Integer ) >(&StdPrs_HLRToolShape::InitVisible),
             R"#(None)#"  , py::arg("EdgeNumber"))
        .def("MoreVisible",
             (Standard_Boolean (StdPrs_HLRToolShape::*)() const) static_cast<Standard_Boolean (StdPrs_HLRToolShape::*)() const>(&StdPrs_HLRToolShape::MoreVisible),
             R"#(None)#" )
        .def("NextVisible",
             (void (StdPrs_HLRToolShape::*)() ) static_cast<void (StdPrs_HLRToolShape::*)() >(&StdPrs_HLRToolShape::NextVisible),
             R"#(None)#" )
        .def("InitHidden",
             (void (StdPrs_HLRToolShape::*)( const Standard_Integer ) ) static_cast<void (StdPrs_HLRToolShape::*)( const Standard_Integer ) >(&StdPrs_HLRToolShape::InitHidden),
             R"#(None)#"  , py::arg("EdgeNumber"))
        .def("MoreHidden",
             (Standard_Boolean (StdPrs_HLRToolShape::*)() const) static_cast<Standard_Boolean (StdPrs_HLRToolShape::*)() const>(&StdPrs_HLRToolShape::MoreHidden),
             R"#(None)#" )
        .def("NextHidden",
             (void (StdPrs_HLRToolShape::*)() ) static_cast<void (StdPrs_HLRToolShape::*)() >(&StdPrs_HLRToolShape::NextHidden),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Visible",
             []( StdPrs_HLRToolShape &self , BRepAdaptor_Curve & TheEdge ){ Standard_Real  U1; Standard_Real  U2; self.Visible(TheEdge,U1,U2); return std::make_tuple(U1,U2); },
             R"#(None)#"  , py::arg("TheEdge"))
        .def("Hidden",
             []( StdPrs_HLRToolShape &self , BRepAdaptor_Curve & TheEdge ){ Standard_Real  U1; Standard_Real  U2; self.Hidden(TheEdge,U1,U2); return std::make_tuple(U1,U2); },
             R"#(None)#"  , py::arg("TheEdge"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_Isolines , shared_ptr<StdPrs_Isolines>>(m,"StdPrs_Isolines");

    static_cast<py::class_<StdPrs_Isolines , shared_ptr<StdPrs_Isolines> , Prs3d_Root>>(m.attr("StdPrs_Isolines"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real ) >(&StdPrs_Isolines::Add),
                    R"#(Computes isolines presentation for a TopoDS face. This method chooses proper version of isoline builder algorithm : on triangulation or surface depending on the flag passed from Prs3d_Drawer attributes. This method is a default way to display isolines for a given TopoDS face.)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"),  py::arg("theDeflection"))
        .def_static("Add_s",
                    (void (*)( const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<void (*)( const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&StdPrs_Isolines::Add),
                    R"#(Computes isolines presentation for a TopoDS face. This method chooses proper version of isoline builder algorithm : on triangulation or surface depending on the flag passed from Prs3d_Drawer attributes. This method is a default way to display isolines for a given TopoDS face.)#"  , py::arg("theFace"),  py::arg("theDrawer"),  py::arg("theDeflection"),  py::arg("theUPolylines"),  py::arg("theVPolylines"))
        .def_static("AddOnTriangulation_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_Isolines::AddOnTriangulation),
                    R"#(Computes isolines on triangulation and adds them to a presentation.)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("AddOnTriangulation_s",
                    (void (*)( const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<void (*)( const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&StdPrs_Isolines::AddOnTriangulation),
                    R"#(Computes isolines on triangulation.)#"  , py::arg("theFace"),  py::arg("theDrawer"),  py::arg("theUPolylines"),  py::arg("theVPolylines"))
        .def_static("AddOnTriangulation_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Poly_Triangulation> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const opencascade::handle<Prs3d_Drawer> & ,  const NCollection_Sequence<Standard_Real> & ,  const NCollection_Sequence<Standard_Real> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Poly_Triangulation> & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const opencascade::handle<Prs3d_Drawer> & ,  const NCollection_Sequence<Standard_Real> & ,  const NCollection_Sequence<Standard_Real> & ) >(&StdPrs_Isolines::AddOnTriangulation),
                    R"#(Computes isolines on triangulation and adds them to a presentation.)#"  , py::arg("thePresentation"),  py::arg("theTriangulation"),  py::arg("theSurface"),  py::arg("theLocation"),  py::arg("theDrawer"),  py::arg("theUIsoParams"),  py::arg("theVIsoParams"))
        .def_static("AddOnSurface_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real ) >(&StdPrs_Isolines::AddOnSurface),
                    R"#(Computes isolines on surface and adds them to presentation.)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"),  py::arg("theDeflection"))
        .def_static("AddOnSurface_s",
                    (void (*)( const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<void (*)( const TopoDS_Face & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&StdPrs_Isolines::AddOnSurface),
                    R"#(Computes isolines on surface and adds them to presentation.)#"  , py::arg("theFace"),  py::arg("theDrawer"),  py::arg("theDeflection"),  py::arg("theUPolylines"),  py::arg("theVPolylines"))
        .def_static("AddOnSurface_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real ,  const NCollection_Sequence<Standard_Real> & ,  const NCollection_Sequence<Standard_Real> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Real ,  const NCollection_Sequence<Standard_Real> & ,  const NCollection_Sequence<Standard_Real> & ) >(&StdPrs_Isolines::AddOnSurface),
                    R"#(Computes isolines on surface and adds them to presentation.)#"  , py::arg("thePresentation"),  py::arg("theSurface"),  py::arg("theDrawer"),  py::arg("theDeflection"),  py::arg("theUIsoParams"),  py::arg("theVIsoParams"))
    // static methods using call by reference i.s.o. return
        .def_static("UVIsoParameters_s",
                    []( const TopoDS_Face & theFace,const Standard_Integer theNbIsoU,const Standard_Integer theNbIsoV,const Standard_Real theUVLimit,NCollection_Sequence<Standard_Real> & theUIsoParams,NCollection_Sequence<Standard_Real> & theVIsoParams ){ Standard_Real  theUmin; Standard_Real  theUmax; Standard_Real  theVmin; Standard_Real  theVmax; StdPrs_Isolines::UVIsoParameters(theFace,theNbIsoU,theNbIsoV,theUVLimit,theUIsoParams,theVIsoParams,theUmin,theUmax,theVmin,theVmax); return std::make_tuple(theUmin,theUmax,theVmin,theVmax); },
                    R"#(Evalute sequence of parameters for drawing uv isolines for a given face.)#"  , py::arg("theFace"),  py::arg("theNbIsoU"),  py::arg("theNbIsoV"),  py::arg("theUVLimit"),  py::arg("theUIsoParams"),  py::arg("theVIsoParams"))
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_Plane , shared_ptr<StdPrs_Plane>>(m,"StdPrs_Plane");

    static_cast<py::class_<StdPrs_Plane , shared_ptr<StdPrs_Plane> , Prs3d_Root>>(m.attr("StdPrs_Plane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_Plane::Add),
                    R"#(Defines display of infinite planes. The infinite plane aPlane is added to the display aPresentation, and the attributes of the display are defined by the attribute manager aDrawer.)#"  , py::arg("aPresentation"),  py::arg("aPlane"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_Plane::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the plane is less than aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aPlane"),  py::arg("aDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_PoleCurve , shared_ptr<StdPrs_PoleCurve>>(m,"StdPrs_PoleCurve");

    static_cast<py::class_<StdPrs_PoleCurve , shared_ptr<StdPrs_PoleCurve> , Prs3d_Root>>(m.attr("StdPrs_PoleCurve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_PoleCurve::Add),
                    R"#(Defines display of BSpline and Bezier curves. Adds the 3D curve aCurve to the StdPrs_PoleCurve algorithm. This shape is found in the presentation object aPresentation, and its display attributes are set in the attribute manager aDrawer. The curve object from Adaptor3d provides data from a Geom curve. This makes it possible to use the surface in a geometric algorithm.)#"  , py::arg("aPresentation"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_PoleCurve::Match),
                    R"#(returns true if the distance between the point (X,Y,Z) and the broken line made of the poles is less then aDistance.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
        .def_static("Pick_s",
                    (Standard_Integer (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Integer (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Adaptor3d_Curve & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_PoleCurve::Pick),
                    R"#(returns the pole the most near of the point (X,Y,Z) and returns its range. The distance between the pole and (X,Y,Z) must be less then aDistance. If no pole corresponds, 0 is returned.)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aCurve"),  py::arg("aDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_ShadedShape , shared_ptr<StdPrs_ShadedShape>>(m,"StdPrs_ShadedShape");

    static_cast<py::class_<StdPrs_ShadedShape , shared_ptr<StdPrs_ShadedShape> , Prs3d_Root>>(m.attr("StdPrs_ShadedShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const StdPrs_Volume ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const StdPrs_Volume ) >(&StdPrs_ShadedShape::Add),
                    R"#(Shades <theShape>.)#"  , py::arg("thePresentation"),  py::arg("theShape"),  py::arg("theDrawer"),  py::arg("theVolume")=static_cast<const StdPrs_Volume>(StdPrs_Volume_Autodetection))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean , const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & , const StdPrs_Volume ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean , const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & , const StdPrs_Volume ) >(&StdPrs_ShadedShape::Add),
                    R"#(Shades <theShape> with texture coordinates.)#"  , py::arg("thePresentation"),  py::arg("theShape"),  py::arg("theDrawer"),  py::arg("theHasTexels"),  py::arg("theUVOrigin"),  py::arg("theUVRepeat"),  py::arg("theUVScale"),  py::arg("theVolume")=static_cast<const StdPrs_Volume>(StdPrs_Volume_Autodetection))
        .def_static("ExploreSolids_s",
                    (void (*)( const TopoDS_Shape & , const BRep_Builder & , TopoDS_Compound & , TopoDS_Compound & , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , const BRep_Builder & , TopoDS_Compound & , TopoDS_Compound & , const Standard_Boolean ) >(&StdPrs_ShadedShape::ExploreSolids),
                    R"#(Searches closed and unclosed subshapes in shape structure and puts them into two compounds for separate processing of closed and unclosed sub-shapes)#"  , py::arg("theShape"),  py::arg("theBuilder"),  py::arg("theClosed"),  py::arg("theOpened"),  py::arg("theIgnore1DSubShape"))
        .def_static("AddWireframeForFreeElements_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_ShadedShape::AddWireframeForFreeElements),
                    R"#(Computes wireframe presentation for free wires and vertices)#"  , py::arg("thePrs"),  py::arg("theShape"),  py::arg("theDrawer"))
        .def_static("AddWireframeForFacesWithoutTriangles_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_ShadedShape::AddWireframeForFacesWithoutTriangles),
                    R"#(Computes special wireframe presentation for faces without triangulation.)#"  , py::arg("thePrs"),  py::arg("theShape"),  py::arg("theDrawer"))
        .def_static("FillTriangles_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const TopoDS_Shape & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const TopoDS_Shape & ) >(&StdPrs_ShadedShape::FillTriangles),
                    R"#(Create primitive array with triangles for specified shape.)#"  , py::arg("theShape"))
        .def_static("FillTriangles_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const TopoDS_Shape & , const Standard_Boolean , const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const TopoDS_Shape & , const Standard_Boolean , const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & ) >(&StdPrs_ShadedShape::FillTriangles),
                    R"#(Create primitive array of triangles for specified shape.)#"  , py::arg("theShape"),  py::arg("theHasTexels"),  py::arg("theUVOrigin"),  py::arg("theUVRepeat"),  py::arg("theUVScale"))
        .def_static("FillFaceBoundaries_s",
                    (opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const TopoDS_Shape & , GeomAbs_Shape ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfSegments> (*)( const TopoDS_Shape & , GeomAbs_Shape ) >(&StdPrs_ShadedShape::FillFaceBoundaries),
                    R"#(Define primitive array of boundary segments for specified shape.)#"  , py::arg("theShape"),  py::arg("theUpperContinuity")=static_cast<GeomAbs_Shape>(GeomAbs_CN))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_ShadedSurface , shared_ptr<StdPrs_ShadedSurface>>(m,"StdPrs_ShadedSurface");

    static_cast<py::class_<StdPrs_ShadedSurface , shared_ptr<StdPrs_ShadedSurface> , Prs3d_Root>>(m.attr("StdPrs_ShadedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_ShadedSurface::Add),
                    R"#(Adds the surface aSurface to the presentation object aPresentation. The surface's display attributes are set in the attribute manager aDrawer. The surface object from Adaptor3d provides data from a Geom surface in order to use the surface in an algorithm.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_ToolPoint , shared_ptr<StdPrs_ToolPoint>>(m,"StdPrs_ToolPoint");

    static_cast<py::class_<StdPrs_ToolPoint , shared_ptr<StdPrs_ToolPoint> >>(m.attr("StdPrs_ToolPoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
        .def_static("Coord_s",
                    []( const opencascade::handle<Geom_Point> & aPoint ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; StdPrs_ToolPoint::Coord(aPoint,X,Y,Z); return std::make_tuple(X,Y,Z); },
                    R"#(None)#"  , py::arg("aPoint"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdPrs_ToolRFace , shared_ptr<StdPrs_ToolRFace> >>(m.attr("StdPrs_ToolRFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BRepAdaptor_HSurface> & >()  , py::arg("aSurface") )
    // custom constructors
    // methods
        .def("IsOriented",
             (Standard_Boolean (StdPrs_ToolRFace::*)() const) static_cast<Standard_Boolean (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::IsOriented),
             R"#(Return TRUE indicating that iterator looks only for oriented edges.)#" )
        .def("Init",
             (void (StdPrs_ToolRFace::*)() ) static_cast<void (StdPrs_ToolRFace::*)() >(&StdPrs_ToolRFace::Init),
             R"#(Move iterator to the first element.)#" )
        .def("More",
             (Standard_Boolean (StdPrs_ToolRFace::*)() const) static_cast<Standard_Boolean (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::More),
             R"#(Return TRUE if iterator points to the curve.)#" )
        .def("Next",
             (void (StdPrs_ToolRFace::*)() ) static_cast<void (StdPrs_ToolRFace::*)() >(&StdPrs_ToolRFace::Next),
             R"#(Go to the next curve in the face.)#" )
        .def("Value",
             (const Adaptor2d_Curve2d & (StdPrs_ToolRFace::*)() const) static_cast<const Adaptor2d_Curve2d & (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::Value),
             R"#(Return current curve.)#" )
        .def("Orientation",
             (TopAbs_Orientation (StdPrs_ToolRFace::*)() const) static_cast<TopAbs_Orientation (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::Orientation),
             R"#(Return current edge orientation.)#" )
        .def("IsInvalidGeometry",
             (Standard_Boolean (StdPrs_ToolRFace::*)() const) static_cast<Standard_Boolean (StdPrs_ToolRFace::*)() const>(&StdPrs_ToolRFace::IsInvalidGeometry),
             R"#(Return TRUE if NULL curves have been skipped.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_ToolTriangulatedShape , shared_ptr<StdPrs_ToolTriangulatedShape>>(m,"StdPrs_ToolTriangulatedShape");

    static_cast<py::class_<StdPrs_ToolTriangulatedShape , shared_ptr<StdPrs_ToolTriangulatedShape> >>(m.attr("StdPrs_ToolTriangulatedShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsTriangulated_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ) >(&StdPrs_ToolTriangulatedShape::IsTriangulated),
                    R"#(Similar to BRepTools::Triangulation() but without extra checks.)#"  , py::arg("theShape"))
        .def_static("IsClosed_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & ) >(&StdPrs_ToolTriangulatedShape::IsClosed),
                    R"#(Checks back faces visibility for specified shape (to activate back-face culling).)#"  , py::arg("theShape"))
        .def_static("ComputeNormals_s",
                    (void (*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) ) static_cast<void (*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) >(&StdPrs_ToolTriangulatedShape::ComputeNormals),
                    R"#(Computes nodal normals for Poly_Triangulation structure using UV coordinates and surface. Does nothing if triangulation already defines normals.)#"  , py::arg("theFace"),  py::arg("theTris"))
        .def_static("ComputeNormals_s",
                    (void (*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & , Poly_Connect & ) ) static_cast<void (*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & , Poly_Connect & ) >(&StdPrs_ToolTriangulatedShape::ComputeNormals),
                    R"#(Computes nodal normals for Poly_Triangulation structure using UV coordinates and surface. Does nothing if triangulation already defines normals.)#"  , py::arg("theFace"),  py::arg("theTris"),  py::arg("thePolyConnect"))
        .def_static("Normal_s",
                    (void (*)( const TopoDS_Face & , Poly_Connect & , NCollection_Array1<gp_Dir> & ) ) static_cast<void (*)( const TopoDS_Face & , Poly_Connect & , NCollection_Array1<gp_Dir> & ) >(&StdPrs_ToolTriangulatedShape::Normal),
                    R"#(Evaluate normals for a triangle of a face.)#"  , py::arg("theFace"),  py::arg("thePolyConnect"),  py::arg("theNormals"))
        .def_static("IsTessellated_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_ToolTriangulatedShape::IsTessellated),
                    R"#(Checks whether the shape is properly triangulated for a given display settings.)#"  , py::arg("theShape"),  py::arg("theDrawer"))
        .def_static("Tessellate_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_ToolTriangulatedShape::Tessellate),
                    R"#(Validates triangulation within the shape and performs tessellation if necessary.)#"  , py::arg("theShape"),  py::arg("theDrawer"))
        .def_static("ClearOnOwnDeflectionChange_s",
                    (void (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean ) >(&StdPrs_ToolTriangulatedShape::ClearOnOwnDeflectionChange),
                    R"#(If presentation has own deviation coefficient and IsAutoTriangulation() is true, function will compare actual coefficients with previous values and will clear triangulation on their change (regardless actual tessellation quality). Function is placed here for compatibility reasons - new code should avoid using IsAutoTriangulation().)#"  , py::arg("theShape"),  py::arg("theDrawer"),  py::arg("theToResetCoeff"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_ToolVertex , shared_ptr<StdPrs_ToolVertex>>(m,"StdPrs_ToolVertex");

    static_cast<py::class_<StdPrs_ToolVertex , shared_ptr<StdPrs_ToolVertex> >>(m.attr("StdPrs_ToolVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
        .def_static("Coord_s",
                    []( const TopoDS_Vertex & aPoint ){ Standard_Real  X; Standard_Real  Y; Standard_Real  Z; StdPrs_ToolVertex::Coord(aPoint,X,Y,Z); return std::make_tuple(X,Y,Z); },
                    R"#(None)#"  , py::arg("aPoint"))
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_WFDeflectionRestrictedFace , shared_ptr<StdPrs_WFDeflectionRestrictedFace>>(m,"StdPrs_WFDeflectionRestrictedFace");

    static_cast<py::class_<StdPrs_WFDeflectionRestrictedFace , shared_ptr<StdPrs_WFDeflectionRestrictedFace> , Prs3d_Root>>(m.attr("StdPrs_WFDeflectionRestrictedFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFDeflectionRestrictedFace::Add),
                    R"#(Defines a display featuring U and V isoparameters. Adds the surface aFace to the StdPrs_WFRestrictedFace algorithm. This face is found in a shape in the presentation object aPresentation, and its display attributes - in particular, the number of U and V isoparameters - are set in the attribute manager aDrawer. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface.)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("AddUIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFDeflectionRestrictedFace::AddUIso),
                    R"#(Defines a display featuring U isoparameters respectively. Add the surface aFace to the StdPrs_WFRestrictedFace algorithm. This face is found in a shape in the presentation object aPresentation, and its display attributes - in particular, the number of U isoparameters - are set in the attribute manager aDrawer. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed to the function as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface.)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("AddVIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFDeflectionRestrictedFace::AddVIso),
                    R"#(Defines a display featuring V isoparameters respectively. Add the surface aFace to the StdPrs_WFRestrictedFace algorithm. This face is found in a shape in the presentation object aPresentation, and its display attributes - in particular, the number of V isoparameters - are set in the attribute manager aDrawer. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed to the function as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface.)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Integer , const Standard_Integer , const opencascade::handle<Prs3d_Drawer> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Integer , const Standard_Integer , const opencascade::handle<Prs3d_Drawer> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&StdPrs_WFDeflectionRestrictedFace::Add),
                    R"#(Defines a display of a delection-specified face. The display will feature U and V isoparameters. Adds the topology aShape to the StdPrs_WFRestrictedFace algorithm. This shape is found in the presentation object aPresentation, and its display attributes - except the number of U and V isoparameters - are set in the attribute manager aDrawer. The function sets the number of U and V isoparameters, NBUiso and NBViso, in the shape. To do this, the arguments DrawUIso and DrawVIso must be true. aFace is BRepAdaptor_HSurface surface created from a face in a topological shape. which is passed as an argument through the BRepAdaptor_HSurface surface created from it. This is what allows the topological face to be treated as a geometric surface. Curves give a sequence of face curves, it is used if the PrimitiveArray visualization approach is activated (it is activated by default).)#"  , py::arg("aPresentation"),  py::arg("aFace"),  py::arg("DrawUIso"),  py::arg("DrawVIso"),  py::arg("Deflection"),  py::arg("NBUiso"),  py::arg("NBViso"),  py::arg("aDrawer"),  py::arg("Curves"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFDeflectionRestrictedFace::Match),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("MatchUIso_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFDeflectionRestrictedFace::MatchUIso),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("MatchVIso_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFDeflectionRestrictedFace::MatchVIso),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Integer , const Standard_Integer ) >(&StdPrs_WFDeflectionRestrictedFace::Match),
                    R"#(None)#"  , py::arg("X"),  py::arg("Y"),  py::arg("Z"),  py::arg("aDistance"),  py::arg("aFace"),  py::arg("aDrawer"),  py::arg("DrawUIso"),  py::arg("DrawVIso"),  py::arg("aDeflection"),  py::arg("NBUiso"),  py::arg("NBViso"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_WFDeflectionSurface , shared_ptr<StdPrs_WFDeflectionSurface>>(m,"StdPrs_WFDeflectionSurface");

    static_cast<py::class_<StdPrs_WFDeflectionSurface , shared_ptr<StdPrs_WFDeflectionSurface> , Prs3d_Root>>(m.attr("StdPrs_WFDeflectionSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFDeflectionSurface::Add),
                    R"#(Adds the surface aSurface to the presentation object aPresentation, and defines its boundaries and isoparameters. The shape's display attributes are set in the attribute manager aDrawer. These include whether deflection is absolute or relative to the size of the shape. The surface aSurface is a surface object from Adaptor, and provides data from a Geom surface. This makes it possible to use the surface in a geometric algorithm. Note that this surface object is manipulated by handles.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_WFPoleSurface , shared_ptr<StdPrs_WFPoleSurface>>(m,"StdPrs_WFPoleSurface");

    static_cast<py::class_<StdPrs_WFPoleSurface , shared_ptr<StdPrs_WFPoleSurface> , Prs3d_Root>>(m.attr("StdPrs_WFPoleSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const Adaptor3d_Surface & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFPoleSurface::Add),
                    R"#(Adds the surface aSurface to the presentation object aPresentation. The shape's display attributes are set in the attribute manager aDrawer. The surface aSurface is a surface object from Adaptor3d, and provides data from a Geom surface. This makes it possible to use the surface in a geometric algorithm.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_WFRestrictedFace , shared_ptr<StdPrs_WFRestrictedFace>>(m,"StdPrs_WFRestrictedFace");

    static_cast<py::class_<StdPrs_WFRestrictedFace , shared_ptr<StdPrs_WFRestrictedFace> , Prs3d_Root>>(m.attr("StdPrs_WFRestrictedFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const opencascade::handle<Prs3d_Drawer> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Integer , const opencascade::handle<Prs3d_Drawer> & , NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> > & ) >(&StdPrs_WFRestrictedFace::Add),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawUIso"),  py::arg("theDrawVIso"),  py::arg("theNbUIso"),  py::arg("theNbVIso"),  py::arg("theDrawer"),  py::arg("theCurves"))
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFRestrictedFace::Add),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Integer , const Standard_Integer , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Boolean , const Standard_Boolean , const Standard_Real , const Standard_Integer , const Standard_Integer , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFRestrictedFace::Match),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawUIso"),  py::arg("theDrawVIso"),  py::arg("theDeflection"),  py::arg("theNbUIso"),  py::arg("theNbVIso"),  py::arg("theDrawer"))
        .def_static("Match_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFRestrictedFace::Match),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("MatchUIso_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFRestrictedFace::MatchUIso),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("MatchVIso_s",
                    (Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFRestrictedFace::MatchVIso),
                    R"#(None)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"),  py::arg("theDistance"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("AddUIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFRestrictedFace::AddUIso),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"))
        .def_static("AddVIso_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFRestrictedFace::AddVIso),
                    R"#(None)#"  , py::arg("thePresentation"),  py::arg("theFace"),  py::arg("theDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_WFShape , shared_ptr<StdPrs_WFShape>>(m,"StdPrs_WFShape");

    static_cast<py::class_<StdPrs_WFShape , shared_ptr<StdPrs_WFShape> , Prs3d_Root>>(m.attr("StdPrs_WFShape"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , Standard_Boolean ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & , Standard_Boolean ) >(&StdPrs_WFShape::Add),
                    R"#(Computes wireframe presentation of a shape.)#"  , py::arg("thePresentation"),  py::arg("theShape"),  py::arg("theDrawer"),  py::arg("theIsParallel")=static_cast<Standard_Boolean>(Standard_False))
        .def_static("AddEdgesOnTriangulation_s",
                    (opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( const TopoDS_Shape & , const Standard_Boolean ) >(&StdPrs_WFShape::AddEdgesOnTriangulation),
                    R"#(Compute free and boundary edges on a triangulation of each face in the given shape.)#"  , py::arg("theShape"),  py::arg("theToExcludeGeometric")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("AddEdgesOnTriangulation_s",
                    (void (*)( NCollection_Sequence<gp_Pnt> & , const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (*)( NCollection_Sequence<gp_Pnt> & , const TopoDS_Shape & , const Standard_Boolean ) >(&StdPrs_WFShape::AddEdgesOnTriangulation),
                    R"#(Compute free and boundary edges on a triangulation of each face in the given shape.)#"  , py::arg("theSegments"),  py::arg("theShape"),  py::arg("theToExcludeGeometric")=static_cast<const Standard_Boolean>(Standard_True))
        .def_static("AddAllEdges_s",
                    (opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfPrimitives> (*)( const TopoDS_Shape & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFShape::AddAllEdges),
                    R"#(Compute all edges (wire, free, unfree) and put them into single primitive array.)#"  , py::arg("theShape"),  py::arg("theDrawer"))
        .def_static("AddVertexes_s",
                    (opencascade::handle<Graphic3d_ArrayOfPoints> (*)( const TopoDS_Shape & , Prs3d_VertexDrawMode ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfPoints> (*)( const TopoDS_Shape & , Prs3d_VertexDrawMode ) >(&StdPrs_WFShape::AddVertexes),
                    R"#(Compute vertex presentation for a shape.)#"  , py::arg("theShape"),  py::arg("theVertexMode"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<StdPrs_WFSurface , shared_ptr<StdPrs_WFSurface>>(m,"StdPrs_WFSurface");

    static_cast<py::class_<StdPrs_WFSurface , shared_ptr<StdPrs_WFSurface> , Prs3d_Root>>(m.attr("StdPrs_WFSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Add_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & , const opencascade::handle<Adaptor3d_HSurface> & , const opencascade::handle<Prs3d_Drawer> & ) >(&StdPrs_WFSurface::Add),
                    R"#(Draws a surface by drawing the isoparametric curves with respect to a fixed number of points given by the Drawer. The number of isoparametric curves to be drawn and their color are controlled by the furnished Drawer.)#"  , py::arg("aPresentation"),  py::arg("aSurface"),  py::arg("aDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\StdPrs_Vertex.hxx
// ./opencascade\StdPrs_ToolVertex.hxx
// ./opencascade\StdPrs_WFRestrictedFace.hxx
// ./opencascade\StdPrs_ToolRFace.hxx
// ./opencascade\StdPrs_Volume.hxx
// ./opencascade\StdPrs_WFDeflectionRestrictedFace.hxx
// ./opencascade\StdPrs_HLRToolShape.hxx
// ./opencascade\StdPrs_WFShape.hxx
// ./opencascade\StdPrs_Point.hxx
// ./opencascade\StdPrs_WFPoleSurface.hxx
// ./opencascade\StdPrs_DeflectionCurve.hxx
// ./opencascade\StdPrs_Plane.hxx
// ./opencascade\StdPrs_HLRPolyShape.hxx
// ./opencascade\StdPrs_ToolPoint.hxx
// ./opencascade\StdPrs_BndBox.hxx
// ./opencascade\StdPrs_ShadedSurface.hxx
// ./opencascade\StdPrs_WFDeflectionSurface.hxx
// ./opencascade\StdPrs_ShadedShape.hxx
// ./opencascade\StdPrs_PoleCurve.hxx
// ./opencascade\StdPrs_HLRShape.hxx
// ./opencascade\StdPrs_ToolTriangulatedShape.hxx
// ./opencascade\StdPrs_Curve.hxx
// ./opencascade\StdPrs_WFSurface.hxx
// ./opencascade\StdPrs_Isolines.hxx

// Additional functions

// operators

// register typdefs
    register_template_Prs3d_Point<TopoDS_Vertex, StdPrs_ToolVertex>(m,"StdPrs_Vertex");
    register_template_Prs3d_Point<opencascade::handle<Geom_Point>, StdPrs_ToolPoint>(m,"StdPrs_Point");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
