
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Graphic3d_ArrayOfPoints.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Geom_Point.hxx>
#include <TopoDS_Face.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Shape.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_Projector.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Vertex.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <TopoDS_Shape.hxx>
#include <BRep_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <Adaptor3d_Curve.hxx>
#include <HLRBRep_Data.hxx>
#include <TopoDS_Shape.hxx>
#include <HLRAlgo_Projector.hxx>
#include <BRepAdaptor_Curve.hxx>
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
// ./opencascade/StdPrs_Vertex.hxx
#include "Prs3d_tmpl.hxx"
// ./opencascade/StdPrs_Point.hxx
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
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
    // static methods using call by reference i.s.o. return
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
        .def_static("FillTriangles_s",
                    (opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const TopoDS_Shape & ) ) static_cast<opencascade::handle<Graphic3d_ArrayOfTriangles> (*)( const TopoDS_Shape & ) >(&StdPrs_ShadedShape::FillTriangles),
                    R"#(Create primitive array with triangles for specified shape.)#"  , py::arg("theShape"))
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
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StdPrs_ToolRFace , shared_ptr<StdPrs_ToolRFace> >>(m.attr("StdPrs_ToolRFace"))
    // constructors
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
        .def_static("ComputeNormals_s",
                    (void (*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) ) static_cast<void (*)( const TopoDS_Face & , const opencascade::handle<Poly_Triangulation> & ) >(&StdPrs_ToolTriangulatedShape::ComputeNormals),
                    R"#(Computes nodal normals for Poly_Triangulation structure using UV coordinates and surface. Does nothing if triangulation already defines normals.)#"  , py::arg("theFace"),  py::arg("theTris"))
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/StdPrs_Vertex.hxx
// ./opencascade/StdPrs_WFShape.hxx
// ./opencascade/StdPrs_ShadedSurface.hxx
// ./opencascade/StdPrs_ToolPoint.hxx
// ./opencascade/StdPrs_ToolTriangulatedShape.hxx
// ./opencascade/StdPrs_DeflectionCurve.hxx
// ./opencascade/StdPrs_Plane.hxx
// ./opencascade/StdPrs_WFSurface.hxx
// ./opencascade/StdPrs_ToolRFace.hxx
// ./opencascade/StdPrs_WFPoleSurface.hxx
// ./opencascade/StdPrs_Curve.hxx
// ./opencascade/StdPrs_HLRShape.hxx
// ./opencascade/StdPrs_HLRPolyShape.hxx
// ./opencascade/StdPrs_Volume.hxx
// ./opencascade/StdPrs_WFDeflectionRestrictedFace.hxx
// ./opencascade/StdPrs_ToolVertex.hxx
// ./opencascade/StdPrs_Isolines.hxx
// ./opencascade/StdPrs_Point.hxx
// ./opencascade/StdPrs_ShadedShape.hxx
// ./opencascade/StdPrs_BndBox.hxx
// ./opencascade/StdPrs_PoleCurve.hxx
// ./opencascade/StdPrs_HLRToolShape.hxx
// ./opencascade/StdPrs_WFRestrictedFace.hxx
// ./opencascade/StdPrs_WFDeflectionSurface.hxx

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
