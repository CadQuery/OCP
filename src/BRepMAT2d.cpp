
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepMAT2d_Explorer.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <MAT_Graph.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <Geom2d_Geometry.hxx>
#include <MAT_Node.hxx>
#include <MAT_Arc.hxx>

// module includes
#include <BRepMAT2d_BisectingLocus.hxx>
#include <BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx>
#include <BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx>
#include <BRepMAT2d_DataMapOfBasicEltShape.hxx>
#include <BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <BRepMAT2d_LinkTopoBilo.hxx>

// template related includes
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx
#include "NCollection.hxx"
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx
#include "NCollection.hxx"
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
#include "NCollection.hxx"
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepMAT2d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepMAT2d"));


//Python trampoline classes

// classes


    static_cast<py::class_<BRepMAT2d_LinkTopoBilo ,std::unique_ptr<BRepMAT2d_LinkTopoBilo>  >>(m.attr("BRepMAT2d_LinkTopoBilo"))
        .def(py::init<  >()  )
        .def(py::init< const BRepMAT2d_Explorer &,const BRepMAT2d_BisectingLocus & >()  , py::arg("Explo"),  py::arg("BiLo") )
        .def("Perform",
             (void (BRepMAT2d_LinkTopoBilo::*)( const BRepMAT2d_Explorer & ,  const BRepMAT2d_BisectingLocus &  ) ) static_cast<void (BRepMAT2d_LinkTopoBilo::*)( const BRepMAT2d_Explorer & ,  const BRepMAT2d_BisectingLocus &  ) >(&BRepMAT2d_LinkTopoBilo::Perform),
             R"#(Constructs the links Between S and BiLo.)#"  , py::arg("Explo"),  py::arg("BiLo"))
        .def("Init",
             (void (BRepMAT2d_LinkTopoBilo::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepMAT2d_LinkTopoBilo::*)( const TopoDS_Shape &  ) >(&BRepMAT2d_LinkTopoBilo::Init),
             R"#(Initialise the Iterator on <S> <S> is an edge or a vertex of the initial wire or face. raises if <S> is not an edge or a vertex.)#"  , py::arg("S"))
        .def("More",
             (Standard_Boolean (BRepMAT2d_LinkTopoBilo::*)() ) static_cast<Standard_Boolean (BRepMAT2d_LinkTopoBilo::*)() >(&BRepMAT2d_LinkTopoBilo::More),
             R"#(Returns True if there is a current BasicElt.)#" )
        .def("Next",
             (void (BRepMAT2d_LinkTopoBilo::*)() ) static_cast<void (BRepMAT2d_LinkTopoBilo::*)() >(&BRepMAT2d_LinkTopoBilo::Next),
             R"#(Proceed to the next BasicElt.)#" )
        .def("Value",
             (opencascade::handle<MAT_BasicElt> (BRepMAT2d_LinkTopoBilo::*)() const) static_cast<opencascade::handle<MAT_BasicElt> (BRepMAT2d_LinkTopoBilo::*)() const>(&BRepMAT2d_LinkTopoBilo::Value),
             R"#(Returns the current BasicElt.)#" )
        .def("GeneratingShape",
             (TopoDS_Shape (BRepMAT2d_LinkTopoBilo::*)( const opencascade::handle<MAT_BasicElt> &  ) const) static_cast<TopoDS_Shape (BRepMAT2d_LinkTopoBilo::*)( const opencascade::handle<MAT_BasicElt> &  ) const>(&BRepMAT2d_LinkTopoBilo::GeneratingShape),
             R"#(Returns the Shape linked to <aBE>.)#"  , py::arg("aBE"))
;


    static_cast<py::class_<BRepMAT2d_BisectingLocus ,std::unique_ptr<BRepMAT2d_BisectingLocus>  >>(m.attr("BRepMAT2d_BisectingLocus"))
        .def(py::init<  >()  )
        .def("Compute",
             (void (BRepMAT2d_BisectingLocus::*)( BRepMAT2d_Explorer & ,  const Standard_Integer ,  const MAT_Side ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) ) static_cast<void (BRepMAT2d_BisectingLocus::*)( BRepMAT2d_Explorer & ,  const Standard_Integer ,  const MAT_Side ,  const GeomAbs_JoinType ,  const Standard_Boolean  ) >(&BRepMAT2d_BisectingLocus::Compute),
             R"#(Computation of the Bisector_Locus in a set of Lines defined in <anExplo>. The bisecting locus are computed on the side <aSide> from the line <LineIndex> in <anExplo>.)#"  , py::arg("anExplo"),  py::arg("LineIndex")=static_cast<const Standard_Integer>(1),  py::arg("aSide")=static_cast<const MAT_Side>(MAT_Left),  py::arg("aJoinType")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (BRepMAT2d_BisectingLocus::*)() const) static_cast<Standard_Boolean (BRepMAT2d_BisectingLocus::*)() const>(&BRepMAT2d_BisectingLocus::IsDone),
             R"#(Returns True if Compute has succeeded.)#" )
        .def("Graph",
             (opencascade::handle<MAT_Graph> (BRepMAT2d_BisectingLocus::*)() const) static_cast<opencascade::handle<MAT_Graph> (BRepMAT2d_BisectingLocus::*)() const>(&BRepMAT2d_BisectingLocus::Graph),
             R"#(Returns <theGraph> of <me>.)#" )
        .def("NumberOfContours",
             (Standard_Integer (BRepMAT2d_BisectingLocus::*)() const) static_cast<Standard_Integer (BRepMAT2d_BisectingLocus::*)() const>(&BRepMAT2d_BisectingLocus::NumberOfContours),
             R"#(Returns the number of contours.)#" )
        .def("NumberOfElts",
             (Standard_Integer (BRepMAT2d_BisectingLocus::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepMAT2d_BisectingLocus::*)( const Standard_Integer  ) const>(&BRepMAT2d_BisectingLocus::NumberOfElts),
             R"#(Returns the number of BasicElts on the line <IndLine>.)#"  , py::arg("IndLine"))
        .def("NumberOfSections",
             (Standard_Integer (BRepMAT2d_BisectingLocus::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Integer (BRepMAT2d_BisectingLocus::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepMAT2d_BisectingLocus::NumberOfSections),
             R"#(Returns the number of sections of a curve. this curve is the Indexth curve in the IndLineth contour given by anExplo.)#"  , py::arg("IndLine"),  py::arg("Index"))
        .def("BasicElt",
             (opencascade::handle<MAT_BasicElt> (BRepMAT2d_BisectingLocus::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<MAT_BasicElt> (BRepMAT2d_BisectingLocus::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&BRepMAT2d_BisectingLocus::BasicElt),
             R"#(Returns the BasicElts located at the position <Index> on the contour designed by <IndLine>. Remark: the BasicElts on a contour are sorted.)#"  , py::arg("IndLine"),  py::arg("Index"))
        .def("GeomElt",
             (opencascade::handle<Geom2d_Geometry> (BRepMAT2d_BisectingLocus::*)( const opencascade::handle<MAT_BasicElt> &  ) const) static_cast<opencascade::handle<Geom2d_Geometry> (BRepMAT2d_BisectingLocus::*)( const opencascade::handle<MAT_BasicElt> &  ) const>(&BRepMAT2d_BisectingLocus::GeomElt),
             R"#(Returns the geometry linked to the <BasicElt>.)#"  , py::arg("aBasicElt"))
        .def("GeomElt",
             (gp_Pnt2d (BRepMAT2d_BisectingLocus::*)( const opencascade::handle<MAT_Node> &  ) const) static_cast<gp_Pnt2d (BRepMAT2d_BisectingLocus::*)( const opencascade::handle<MAT_Node> &  ) const>(&BRepMAT2d_BisectingLocus::GeomElt),
             R"#(Returns the geometry of type <gp> linked to the <Node>.)#"  , py::arg("aNode"))
        .def("GeomBis",
             (Bisector_Bisec (BRepMAT2d_BisectingLocus::*)( const opencascade::handle<MAT_Arc> & ,  Standard_Boolean &  ) const) static_cast<Bisector_Bisec (BRepMAT2d_BisectingLocus::*)( const opencascade::handle<MAT_Arc> & ,  Standard_Boolean &  ) const>(&BRepMAT2d_BisectingLocus::GeomBis),
             R"#(Returns the geometry of type <Bissec> linked to the arc <ARC>. <Reverse> is False when the FirstNode of <anArc> correspond to the first point of geometry.)#"  , py::arg("anArc"),  py::arg("Reverse"))
;


    static_cast<py::class_<BRepMAT2d_Explorer ,std::unique_ptr<BRepMAT2d_Explorer>  >>(m.attr("BRepMAT2d_Explorer"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("aFace") )
        .def("Clear",
             (void (BRepMAT2d_Explorer::*)() ) static_cast<void (BRepMAT2d_Explorer::*)() >(&BRepMAT2d_Explorer::Clear),
             R"#(Clear the contents of <me>.)#" )
        .def("Perform",
             (void (BRepMAT2d_Explorer::*)( const TopoDS_Face &  ) ) static_cast<void (BRepMAT2d_Explorer::*)( const TopoDS_Face &  ) >(&BRepMAT2d_Explorer::Perform),
             R"#(None)#"  , py::arg("aFace"))
        .def("NumberOfContours",
             (Standard_Integer (BRepMAT2d_Explorer::*)() const) static_cast<Standard_Integer (BRepMAT2d_Explorer::*)() const>(&BRepMAT2d_Explorer::NumberOfContours),
             R"#(Returns the Number of contours.)#" )
        .def("NumberOfCurves",
             (Standard_Integer (BRepMAT2d_Explorer::*)( const Standard_Integer  ) const) static_cast<Standard_Integer (BRepMAT2d_Explorer::*)( const Standard_Integer  ) const>(&BRepMAT2d_Explorer::NumberOfCurves),
             R"#(Returns the Number of Curves in the Contour number <IndexContour>.)#"  , py::arg("IndexContour"))
        .def("Init",
             (void (BRepMAT2d_Explorer::*)( const Standard_Integer  ) ) static_cast<void (BRepMAT2d_Explorer::*)( const Standard_Integer  ) >(&BRepMAT2d_Explorer::Init),
             R"#(Initialisation of an Iterator on the curves of the Contour number <IndexContour>.)#"  , py::arg("IndexContour"))
        .def("More",
             (Standard_Boolean (BRepMAT2d_Explorer::*)() const) static_cast<Standard_Boolean (BRepMAT2d_Explorer::*)() const>(&BRepMAT2d_Explorer::More),
             R"#(Return False if there is no more curves on the Contour initialised by the method Init.)#" )
        .def("Next",
             (void (BRepMAT2d_Explorer::*)() ) static_cast<void (BRepMAT2d_Explorer::*)() >(&BRepMAT2d_Explorer::Next),
             R"#(Move to the next curve of the current Contour.)#" )
        .def("Value",
             (opencascade::handle<Geom2d_Curve> (BRepMAT2d_Explorer::*)() const) static_cast<opencascade::handle<Geom2d_Curve> (BRepMAT2d_Explorer::*)() const>(&BRepMAT2d_Explorer::Value),
             R"#(Returns the current curve on the current Contour.)#" )
        .def("Shape",
             (TopoDS_Shape (BRepMAT2d_Explorer::*)() const) static_cast<TopoDS_Shape (BRepMAT2d_Explorer::*)() const>(&BRepMAT2d_Explorer::Shape),
             R"#(None)#" )
        .def("Contour",
             (const TColGeom2d_SequenceOfCurve & (BRepMAT2d_Explorer::*)( const Standard_Integer  ) const) static_cast<const TColGeom2d_SequenceOfCurve & (BRepMAT2d_Explorer::*)( const Standard_Integer  ) const>(&BRepMAT2d_Explorer::Contour),
             R"#(None)#"  , py::arg("IndexContour"))
        .def("IsModified",
             (Standard_Boolean (BRepMAT2d_Explorer::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepMAT2d_Explorer::*)( const TopoDS_Shape &  ) const>(&BRepMAT2d_Explorer::IsModified),
             R"#(None)#"  , py::arg("aShape"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepMAT2d_Explorer::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepMAT2d_Explorer::*)( const TopoDS_Shape &  ) const>(&BRepMAT2d_Explorer::ModifiedShape),
             R"#(If the shape is not modified, returns the shape itself.)#"  , py::arg("aShape"))
        .def("GetIsClosed",
             (const TColStd_SequenceOfBoolean & (BRepMAT2d_Explorer::*)() const) static_cast<const TColStd_SequenceOfBoolean & (BRepMAT2d_Explorer::*)() const>(&BRepMAT2d_Explorer::GetIsClosed),
             R"#(None)#" )
;

// functions
// ./opencascade/BRepMAT2d_LinkTopoBilo.hxx
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx
// ./opencascade/BRepMAT2d_Explorer.hxx
// ./opencascade/BRepMAT2d_BisectingLocus.hxx
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx

// operators

// register typdefs
// ./opencascade/BRepMAT2d_LinkTopoBilo.hxx
// ./opencascade/BRepMAT2d_DataMapOfShapeSequenceOfBasicElt.hxx
    register_template_NCollection_DataMap<TopoDS_Shape, MAT_SequenceOfBasicElt, TopTools_ShapeMapHasher>(m,"BRepMAT2d_DataMapOfShapeSequenceOfBasicElt");  
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfShapeSequenceOfBasicElt.hxx
// ./opencascade/BRepMAT2d_Explorer.hxx
// ./opencascade/BRepMAT2d_BisectingLocus.hxx
// ./opencascade/BRepMAT2d_DataMapOfBasicEltShape.hxx
    register_template_NCollection_DataMap<opencascade::handle<MAT_BasicElt>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"BRepMAT2d_DataMapOfBasicEltShape");  
// ./opencascade/BRepMAT2d_DataMapIteratorOfDataMapOfBasicEltShape.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
