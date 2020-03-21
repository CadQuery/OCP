
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepAlgo_AsDes.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <TopoDS_Face.hxx>
#include <BRepOffset_Offset.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepOffset_Analyse.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>

// module includes
#include <BRepOffset.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx>
#include <BRepOffset_DataMapOfShapeListOfInterval.hxx>
#include <BRepOffset_DataMapOfShapeMapOfShape.hxx>
#include <BRepOffset_DataMapOfShapeOffset.hxx>
#include <BRepOffset_Error.hxx>
#include <BRepOffset_Inter2d.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepOffset_Interval.hxx>
#include <BRepOffset_ListIteratorOfListOfInterval.hxx>
#include <BRepOffset_ListOfInterval.hxx>
#include <BRepOffset_MakeLoops.hxx>
#include <BRepOffset_MakeOffset.hxx>
#include <BRepOffset_MakeSimpleOffset.hxx>
#include <BRepOffset_Mode.hxx>
#include <BRepOffset_Offset.hxx>
#include <BRepOffset_SimpleOffset.hxx>
#include <BRepOffset_Status.hxx>
#include <BRepOffset_Tool.hxx>
#include <BRepOffset_Type.hxx>

// template related includes
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_ListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_ListOfInterval.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepOffset(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepOffset"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepOffset , shared_ptr<BRepOffset>>(m,"BRepOffset");

    static_cast<py::class_<BRepOffset , shared_ptr<BRepOffset> >>(m.attr("BRepOffset"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Surface_s",
                    (opencascade::handle<Geom_Surface> (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , BRepOffset_Status & , Standard_Boolean ) ) static_cast<opencascade::handle<Geom_Surface> (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , BRepOffset_Status & , Standard_Boolean ) >(&BRepOffset::Surface),
                    R"#(returns the Offset surface computed from the surface <Surface> at an OffsetDistance <Offset>.)#"  , py::arg("Surface"),  py::arg("Offset"),  py::arg("theStatus"),  py::arg("allowC0")=static_cast<Standard_Boolean>(Standard_False))
        .def_static("CollapseSingularities_s",
                    (opencascade::handle<Geom_Surface> (*)( const opencascade::handle<Geom_Surface> & , const TopoDS_Face & , Standard_Real ) ) static_cast<opencascade::handle<Geom_Surface> (*)( const opencascade::handle<Geom_Surface> & , const TopoDS_Face & , Standard_Real ) >(&BRepOffset::CollapseSingularities),
                    R"#(Preprocess surface to be offset (bspline, bezier, or revolution based on bspline or bezier curve), by collapsing each singular side to single point.)#"  , py::arg("theSurface"),  py::arg("theFace"),  py::arg("thePrecision"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Analyse , shared_ptr<BRepOffset_Analyse> >>(m.attr("BRepOffset_Analyse"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real >()  , py::arg("S"),  py::arg("Angle") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepOffset_Analyse::*)( const TopoDS_Shape & , const Standard_Real ) ) static_cast<void (BRepOffset_Analyse::*)( const TopoDS_Shape & , const Standard_Real ) >(&BRepOffset_Analyse::Perform),
             R"#(None)#"  , py::arg("S"),  py::arg("Angle"))
        .def("IsDone",
             (Standard_Boolean (BRepOffset_Analyse::*)() const) static_cast<Standard_Boolean (BRepOffset_Analyse::*)() const>(&BRepOffset_Analyse::IsDone),
             R"#(None)#" )
        .def("Clear",
             (void (BRepOffset_Analyse::*)() ) static_cast<void (BRepOffset_Analyse::*)() >(&BRepOffset_Analyse::Clear),
             R"#(None)#" )
        .def("Type",
             (const BRepOffset_ListOfInterval & (BRepOffset_Analyse::*)( const TopoDS_Edge & ) const) static_cast<const BRepOffset_ListOfInterval & (BRepOffset_Analyse::*)( const TopoDS_Edge & ) const>(&BRepOffset_Analyse::Type),
             R"#(None)#"  , py::arg("E"))
        .def("Edges",
             (void (BRepOffset_Analyse::*)( const TopoDS_Vertex & , const BRepOffset_Type , NCollection_List<TopoDS_Shape> & ) const) static_cast<void (BRepOffset_Analyse::*)( const TopoDS_Vertex & , const BRepOffset_Type , NCollection_List<TopoDS_Shape> & ) const>(&BRepOffset_Analyse::Edges),
             R"#(Stores in <L> all the edges of Type <T> on the vertex <V>.)#"  , py::arg("V"),  py::arg("T"),  py::arg("L"))
        .def("Edges",
             (void (BRepOffset_Analyse::*)( const TopoDS_Face & , const BRepOffset_Type , NCollection_List<TopoDS_Shape> & ) const) static_cast<void (BRepOffset_Analyse::*)( const TopoDS_Face & , const BRepOffset_Type , NCollection_List<TopoDS_Shape> & ) const>(&BRepOffset_Analyse::Edges),
             R"#(Stores in <L> all the edges of Type <T> on the face <F>.)#"  , py::arg("F"),  py::arg("T"),  py::arg("L"))
        .def("TangentEdges",
             (void (BRepOffset_Analyse::*)( const TopoDS_Edge & , const TopoDS_Vertex & , NCollection_List<TopoDS_Shape> & ) const) static_cast<void (BRepOffset_Analyse::*)( const TopoDS_Edge & , const TopoDS_Vertex & , NCollection_List<TopoDS_Shape> & ) const>(&BRepOffset_Analyse::TangentEdges),
             R"#(set in <Edges> all the Edges of <Shape> which are tangent to <Edge> at the vertex <Vertex>.)#"  , py::arg("Edge"),  py::arg("Vertex"),  py::arg("Edges"))
        .def("HasAncestor",
             (Standard_Boolean (BRepOffset_Analyse::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (BRepOffset_Analyse::*)( const TopoDS_Shape & ) const>(&BRepOffset_Analyse::HasAncestor),
             R"#(None)#"  , py::arg("S"))
        .def("Ancestors",
             (const TopTools_ListOfShape & (BRepOffset_Analyse::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (BRepOffset_Analyse::*)( const TopoDS_Shape & ) const>(&BRepOffset_Analyse::Ancestors),
             R"#(None)#"  , py::arg("S"))
        .def("Explode",
             (void (BRepOffset_Analyse::*)( NCollection_List<TopoDS_Shape> & , const BRepOffset_Type ) const) static_cast<void (BRepOffset_Analyse::*)( NCollection_List<TopoDS_Shape> & , const BRepOffset_Type ) const>(&BRepOffset_Analyse::Explode),
             R"#(Explode in compounds of faces where all the connex edges are of type <Side>)#"  , py::arg("L"),  py::arg("Type"))
        .def("Explode",
             (void (BRepOffset_Analyse::*)( NCollection_List<TopoDS_Shape> & , const BRepOffset_Type , const BRepOffset_Type ) const) static_cast<void (BRepOffset_Analyse::*)( NCollection_List<TopoDS_Shape> & , const BRepOffset_Type , const BRepOffset_Type ) const>(&BRepOffset_Analyse::Explode),
             R"#(Explode in compounds of faces where all the connex edges are of type <Side1> or <Side2>)#"  , py::arg("L"),  py::arg("Type1"),  py::arg("Type2"))
        .def("AddFaces",
             (void (BRepOffset_Analyse::*)( const TopoDS_Face & , TopoDS_Compound & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , const BRepOffset_Type ) const) static_cast<void (BRepOffset_Analyse::*)( const TopoDS_Face & , TopoDS_Compound & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , const BRepOffset_Type ) const>(&BRepOffset_Analyse::AddFaces),
             R"#(Add in <CO> the faces of the shell containing <Face> where all the connex edges are of type <Side>.)#"  , py::arg("Face"),  py::arg("Co"),  py::arg("Map"),  py::arg("Type"))
        .def("AddFaces",
             (void (BRepOffset_Analyse::*)( const TopoDS_Face & , TopoDS_Compound & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , const BRepOffset_Type , const BRepOffset_Type ) const) static_cast<void (BRepOffset_Analyse::*)( const TopoDS_Face & , TopoDS_Compound & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , const BRepOffset_Type , const BRepOffset_Type ) const>(&BRepOffset_Analyse::AddFaces),
             R"#(Add in <CO> the faces of the shell containing <Face> where all the connex edges are of type <Side1> or <Side2>.)#"  , py::arg("Face"),  py::arg("Co"),  py::arg("Map"),  py::arg("Type1"),  py::arg("Type2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepOffset_Inter2d , shared_ptr<BRepOffset_Inter2d>>(m,"BRepOffset_Inter2d");

    static_cast<py::class_<BRepOffset_Inter2d , shared_ptr<BRepOffset_Inter2d> >>(m.attr("BRepOffset_Inter2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Compute_s",
                    (void (*)( const opencascade::handle<BRepAlgo_AsDes> & , const TopoDS_Face & ,  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Real , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const opencascade::handle<BRepAlgo_AsDes> & , const TopoDS_Face & ,  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Real , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&BRepOffset_Inter2d::Compute),
                    R"#(Computes the intersections between the edges stored is AsDes as descendants of <F> . Intersections is computed between two edges if one of them is bound in NewEdges. When all faces of the shape are treated the intersection vertices have to be fused using the FuseVertices method. theDMVV contains the vertices that should be fused)#"  , py::arg("AsDes"),  py::arg("F"),  py::arg("NewEdges"),  py::arg("Tol"),  py::arg("theDMVV"))
        .def_static("ConnexIntByInt_s",
                    (void (*)( const TopoDS_Face & , BRepOffset_Offset & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<BRepAlgo_AsDes> & , const Standard_Real , const Standard_Real , NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TopoDS_Face & , BRepOffset_Offset & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<BRepAlgo_AsDes> & , const Standard_Real , const Standard_Real , NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&BRepOffset_Inter2d::ConnexIntByInt),
                    R"#(Computes the intersection between the offset edges of the <FI>. All intersection vertices will be stored in AsDes2d. When all faces of the shape are treated the intersection vertices have to be fused using the FuseVertices method. theDMVV contains the vertices that should be fused.)#"  , py::arg("FI"),  py::arg("OFI"),  py::arg("MES"),  py::arg("Build"),  py::arg("AsDes2d"),  py::arg("Offset"),  py::arg("Tol"),  py::arg("FacesWithVerts"),  py::arg("theDMVV"))
        .def_static("ConnexIntByIntInVert_s",
                    (void (*)( const TopoDS_Face & , BRepOffset_Offset & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<BRepAlgo_AsDes> & , const opencascade::handle<BRepAlgo_AsDes> & , const Standard_Real , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TopoDS_Face & , BRepOffset_Offset & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ,  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const opencascade::handle<BRepAlgo_AsDes> & , const opencascade::handle<BRepAlgo_AsDes> & , const Standard_Real , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&BRepOffset_Inter2d::ConnexIntByIntInVert),
                    R"#(Computes the intersection between the offset edges generated from vertices and stored into AsDes as descendants of the <FI>. All intersection vertices will be stored in AsDes2d. When all faces of the shape are treated the intersection vertices have to be fused using the FuseVertices method. theDMVV contains the vertices that should be fused.)#"  , py::arg("FI"),  py::arg("OFI"),  py::arg("MES"),  py::arg("Build"),  py::arg("AsDes"),  py::arg("AsDes2d"),  py::arg("Tol"),  py::arg("theDMVV"))
        .def_static("FuseVertices_s",
                    (void (*)(  const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , const opencascade::handle<BRepAlgo_AsDes> & ) ) static_cast<void (*)(  const NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , const opencascade::handle<BRepAlgo_AsDes> & ) >(&BRepOffset_Inter2d::FuseVertices),
                    R"#(Fuses the chains of vertices in the theDMVV and updates AsDes by replacing the old vertices with the new ones.)#"  , py::arg("theDMVV"),  py::arg("theAsDes"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Inter3d , shared_ptr<BRepOffset_Inter3d> >>(m.attr("BRepOffset_Inter3d"))
    // constructors
        .def(py::init< const opencascade::handle<BRepAlgo_AsDes> &,const TopAbs_State,const Standard_Real >()  , py::arg("AsDes"),  py::arg("Side"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("CompletInt",
             (void (BRepOffset_Inter3d::*)(  const NCollection_List<TopoDS_Shape> & , const BRepAlgo_Image & ) ) static_cast<void (BRepOffset_Inter3d::*)(  const NCollection_List<TopoDS_Shape> & , const BRepAlgo_Image & ) >(&BRepOffset_Inter3d::CompletInt),
             R"#(None)#"  , py::arg("SetOfFaces"),  py::arg("InitOffsetFace"))
        .def("FaceInter",
             (void (BRepOffset_Inter3d::*)( const TopoDS_Face & , const TopoDS_Face & , const BRepAlgo_Image & ) ) static_cast<void (BRepOffset_Inter3d::*)( const TopoDS_Face & , const TopoDS_Face & , const BRepAlgo_Image & ) >(&BRepOffset_Inter3d::FaceInter),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("InitOffsetFace"))
        .def("ConnexIntByArc",
             (void (BRepOffset_Inter3d::*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & , const BRepOffset_Analyse & , const BRepAlgo_Image & ) ) static_cast<void (BRepOffset_Inter3d::*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & , const BRepOffset_Analyse & , const BRepAlgo_Image & ) >(&BRepOffset_Inter3d::ConnexIntByArc),
             R"#(None)#"  , py::arg("SetOfFaces"),  py::arg("ShapeInit"),  py::arg("Analyse"),  py::arg("InitOffsetFace"))
        .def("ConnexIntByInt",
             (void (BRepOffset_Inter3d::*)( const TopoDS_Shape & ,  const NCollection_DataMap<TopoDS_Shape, BRepOffset_Offset, TopTools_ShapeMapHasher> & , const BRepOffset_Analyse & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & , const Standard_Boolean ) ) static_cast<void (BRepOffset_Inter3d::*)( const TopoDS_Shape & ,  const NCollection_DataMap<TopoDS_Shape, BRepOffset_Offset, TopTools_ShapeMapHasher> & , const BRepOffset_Analyse & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & , const Standard_Boolean ) >(&BRepOffset_Inter3d::ConnexIntByInt),
             R"#(None)#"  , py::arg("SI"),  py::arg("MapSF"),  py::arg("A"),  py::arg("MES"),  py::arg("Build"),  py::arg("Failed"),  py::arg("bIsPlanar")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ContextIntByInt",
             (void (BRepOffset_Inter3d::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean ,  const NCollection_DataMap<TopoDS_Shape, BRepOffset_Offset, TopTools_ShapeMapHasher> & , const BRepOffset_Analyse & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & , const Standard_Boolean ) ) static_cast<void (BRepOffset_Inter3d::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean ,  const NCollection_DataMap<TopoDS_Shape, BRepOffset_Offset, TopTools_ShapeMapHasher> & , const BRepOffset_Analyse & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & , const Standard_Boolean ) >(&BRepOffset_Inter3d::ContextIntByInt),
             R"#(None)#"  , py::arg("ContextFaces"),  py::arg("ExtentContext"),  py::arg("MapSF"),  py::arg("A"),  py::arg("MES"),  py::arg("Build"),  py::arg("Failed"),  py::arg("bIsPlanar")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ContextIntByArc",
             (void (BRepOffset_Inter3d::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean , const BRepOffset_Analyse & , const BRepAlgo_Image & , BRepAlgo_Image & ) ) static_cast<void (BRepOffset_Inter3d::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean , const BRepOffset_Analyse & , const BRepAlgo_Image & , BRepAlgo_Image & ) >(&BRepOffset_Inter3d::ContextIntByArc),
             R"#(None)#"  , py::arg("ContextFaces"),  py::arg("ExtentContext"),  py::arg("Analyse"),  py::arg("InitOffsetFace"),  py::arg("InitOffsetEdge"))
        .def("AddCommonEdges",
             (void (BRepOffset_Inter3d::*)(  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepOffset_Inter3d::*)(  const NCollection_List<TopoDS_Shape> & ) >(&BRepOffset_Inter3d::AddCommonEdges),
             R"#(None)#"  , py::arg("SetOfFaces"))
        .def("SetDone",
             (void (BRepOffset_Inter3d::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (BRepOffset_Inter3d::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&BRepOffset_Inter3d::SetDone),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def("IsDone",
             (Standard_Boolean (BRepOffset_Inter3d::*)( const TopoDS_Face & , const TopoDS_Face & ) const) static_cast<Standard_Boolean (BRepOffset_Inter3d::*)( const TopoDS_Face & , const TopoDS_Face & ) const>(&BRepOffset_Inter3d::IsDone),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def("TouchedFaces",
             (TopTools_IndexedMapOfShape & (BRepOffset_Inter3d::*)() ) static_cast<TopTools_IndexedMapOfShape & (BRepOffset_Inter3d::*)() >(&BRepOffset_Inter3d::TouchedFaces),
             R"#(None)#" )
        .def("AsDes",
             (opencascade::handle<BRepAlgo_AsDes> (BRepOffset_Inter3d::*)() const) static_cast<opencascade::handle<BRepAlgo_AsDes> (BRepOffset_Inter3d::*)() const>(&BRepOffset_Inter3d::AsDes),
             R"#(None)#" )
        .def("NewEdges",
             (TopTools_IndexedMapOfShape & (BRepOffset_Inter3d::*)() ) static_cast<TopTools_IndexedMapOfShape & (BRepOffset_Inter3d::*)() >(&BRepOffset_Inter3d::NewEdges),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Interval , shared_ptr<BRepOffset_Interval> >>(m.attr("BRepOffset_Interval"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Real,const Standard_Real,const BRepOffset_Type >()  , py::arg("U1"),  py::arg("U2"),  py::arg("Type") )
    // custom constructors
    // methods
        .def("First",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::First),
             R"#(None)#"  , py::arg("U"))
        .def("Last",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::Last),
             R"#(None)#"  , py::arg("U"))
        .def("Type",
             (void (BRepOffset_Interval::*)( const BRepOffset_Type ) ) static_cast<void (BRepOffset_Interval::*)( const BRepOffset_Type ) >(&BRepOffset_Interval::Type),
             R"#(None)#"  , py::arg("T"))
        .def("First",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Last),
             R"#(None)#" )
        .def("Type",
             (BRepOffset_Type (BRepOffset_Interval::*)() const) static_cast<BRepOffset_Type (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Type),
             R"#(None)#" )
        .def("First",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::First),
             R"#(None)#"  , py::arg("U"))
        .def("Last",
             (void (BRepOffset_Interval::*)( const Standard_Real ) ) static_cast<void (BRepOffset_Interval::*)( const Standard_Real ) >(&BRepOffset_Interval::Last),
             R"#(None)#"  , py::arg("U"))
        .def("Type",
             (void (BRepOffset_Interval::*)( const BRepOffset_Type ) ) static_cast<void (BRepOffset_Interval::*)( const BRepOffset_Type ) >(&BRepOffset_Interval::Type),
             R"#(None)#"  , py::arg("T"))
        .def("First",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::First),
             R"#(None)#" )
        .def("Last",
             (Standard_Real (BRepOffset_Interval::*)() const) static_cast<Standard_Real (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Last),
             R"#(None)#" )
        .def("Type",
             (BRepOffset_Type (BRepOffset_Interval::*)() const) static_cast<BRepOffset_Type (BRepOffset_Interval::*)() const>(&BRepOffset_Interval::Type),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_MakeLoops , shared_ptr<BRepOffset_MakeLoops> >>(m.attr("BRepOffset_MakeLoops"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Build",
             (void (BRepOffset_MakeLoops::*)(  const NCollection_List<TopoDS_Shape> & , const opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & ) ) static_cast<void (BRepOffset_MakeLoops::*)(  const NCollection_List<TopoDS_Shape> & , const opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & ) >(&BRepOffset_MakeLoops::Build),
             R"#(None)#"  , py::arg("LF"),  py::arg("AsDes"),  py::arg("Image"))
        .def("BuildOnContext",
             (void (BRepOffset_MakeLoops::*)(  const NCollection_List<TopoDS_Shape> & , const BRepOffset_Analyse & , const opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & , const Standard_Boolean ) ) static_cast<void (BRepOffset_MakeLoops::*)(  const NCollection_List<TopoDS_Shape> & , const BRepOffset_Analyse & , const opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & , const Standard_Boolean ) >(&BRepOffset_MakeLoops::BuildOnContext),
             R"#(None)#"  , py::arg("LContext"),  py::arg("Analyse"),  py::arg("AsDes"),  py::arg("Image"),  py::arg("InSide"))
        .def("BuildFaces",
             (void (BRepOffset_MakeLoops::*)(  const NCollection_List<TopoDS_Shape> & , const opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & ) ) static_cast<void (BRepOffset_MakeLoops::*)(  const NCollection_List<TopoDS_Shape> & , const opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & ) >(&BRepOffset_MakeLoops::BuildFaces),
             R"#(None)#"  , py::arg("LF"),  py::arg("AsDes"),  py::arg("Image"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_MakeOffset , shared_ptr<BRepOffset_MakeOffset> >>(m.attr("BRepOffset_MakeOffset"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Real,const BRepOffset_Mode,const Standard_Boolean,const Standard_Boolean,const GeomAbs_JoinType,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("Offset"),  py::arg("Tol"),  py::arg("Mode")=static_cast<const BRepOffset_Mode>(BRepOffset_Skin),  py::arg("Intersection")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SelfInter")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("Thickening")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("RemoveIntEdges")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Initialize",
             (void (BRepOffset_MakeOffset::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real , const BRepOffset_Mode , const Standard_Boolean , const Standard_Boolean , const GeomAbs_JoinType , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepOffset_MakeOffset::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real , const BRepOffset_Mode , const Standard_Boolean , const Standard_Boolean , const GeomAbs_JoinType , const Standard_Boolean , const Standard_Boolean ) >(&BRepOffset_MakeOffset::Initialize),
             R"#(None)#"  , py::arg("S"),  py::arg("Offset"),  py::arg("Tol"),  py::arg("Mode")=static_cast<const BRepOffset_Mode>(BRepOffset_Skin),  py::arg("Intersection")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("SelfInter")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("Thickening")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("RemoveIntEdges")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Clear",
             (void (BRepOffset_MakeOffset::*)() ) static_cast<void (BRepOffset_MakeOffset::*)() >(&BRepOffset_MakeOffset::Clear),
             R"#(None)#" )
        .def("AddFace",
             (void (BRepOffset_MakeOffset::*)( const TopoDS_Face & ) ) static_cast<void (BRepOffset_MakeOffset::*)( const TopoDS_Face & ) >(&BRepOffset_MakeOffset::AddFace),
             R"#(Add Closing Faces, <F> has to be in the initial shape S.)#"  , py::arg("F"))
        .def("SetOffsetOnFace",
             (void (BRepOffset_MakeOffset::*)( const TopoDS_Face & , const Standard_Real ) ) static_cast<void (BRepOffset_MakeOffset::*)( const TopoDS_Face & , const Standard_Real ) >(&BRepOffset_MakeOffset::SetOffsetOnFace),
             R"#(set the offset <Off> on the Face <F>)#"  , py::arg("F"),  py::arg("Off"))
        .def("MakeOffsetShape",
             (void (BRepOffset_MakeOffset::*)() ) static_cast<void (BRepOffset_MakeOffset::*)() >(&BRepOffset_MakeOffset::MakeOffsetShape),
             R"#(None)#" )
        .def("MakeThickSolid",
             (void (BRepOffset_MakeOffset::*)() ) static_cast<void (BRepOffset_MakeOffset::*)() >(&BRepOffset_MakeOffset::MakeThickSolid),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepOffset_MakeOffset::*)() const) static_cast<Standard_Boolean (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepOffset_MakeOffset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::Shape),
             R"#(None)#" )
        .def("Error",
             (BRepOffset_Error (BRepOffset_MakeOffset::*)() const) static_cast<BRepOffset_Error (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::Error),
             R"#(returns information about offset state.)#" )
        .def("OffsetFacesFromShapes",
             (const BRepAlgo_Image & (BRepOffset_MakeOffset::*)() const) static_cast<const BRepAlgo_Image & (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::OffsetFacesFromShapes),
             R"#(Returns <Image> containing links between initials shapes and offset faces.)#" )
        .def("GetJoinType",
             (GeomAbs_JoinType (BRepOffset_MakeOffset::*)() const) static_cast<GeomAbs_JoinType (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::GetJoinType),
             R"#(Returns myJoin.)#" )
        .def("OffsetEdgesFromShapes",
             (const BRepAlgo_Image & (BRepOffset_MakeOffset::*)() const) static_cast<const BRepAlgo_Image & (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::OffsetEdgesFromShapes),
             R"#(Returns <Image> containing links between initials shapes and offset edges.)#" )
        .def("ClosingFaces",
             (const TopTools_IndexedMapOfShape & (BRepOffset_MakeOffset::*)() const) static_cast<const TopTools_IndexedMapOfShape & (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::ClosingFaces),
             R"#(Returns the list of closing faces stores by AddFace)#" )
        .def("CheckInputData",
             (Standard_Boolean (BRepOffset_MakeOffset::*)() ) static_cast<Standard_Boolean (BRepOffset_MakeOffset::*)() >(&BRepOffset_MakeOffset::CheckInputData),
             R"#(Makes pre analysis of possibility offset perform. Use method Error() to get more information. Finds first error. List of checks: 1) Check for existence object with non-null offset. 2) Check for connectivity in offset shell. 3) Check continuity of input surfaces. 4) Check for normals existence on grid.)#" )
        .def("GetBadShape",
             (const TopoDS_Shape & (BRepOffset_MakeOffset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_MakeOffset::*)() const>(&BRepOffset_MakeOffset::GetBadShape),
             R"#(Return bad shape, which obtained in CheckInputData.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_MakeSimpleOffset , shared_ptr<BRepOffset_MakeSimpleOffset> >>(m.attr("BRepOffset_MakeSimpleOffset"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real >()  , py::arg("theInputShape"),  py::arg("theOffsetValue") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (BRepOffset_MakeSimpleOffset::*)( const TopoDS_Shape & , const Standard_Real ) ) static_cast<void (BRepOffset_MakeSimpleOffset::*)( const TopoDS_Shape & , const Standard_Real ) >(&BRepOffset_MakeSimpleOffset::Initialize),
             R"#(Initialies shape for modifications.)#"  , py::arg("theInputShape"),  py::arg("theOffsetValue"))
        .def("Perform",
             (void (BRepOffset_MakeSimpleOffset::*)() ) static_cast<void (BRepOffset_MakeSimpleOffset::*)() >(&BRepOffset_MakeSimpleOffset::Perform),
             R"#(Computes offset shape.)#" )
        .def("GetErrorMessage",
             (TCollection_AsciiString (BRepOffset_MakeSimpleOffset::*)() const) static_cast<TCollection_AsciiString (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetErrorMessage),
             R"#(Gets error message.)#" )
        .def("GetError",
             (BRepOffsetSimple_Status (BRepOffset_MakeSimpleOffset::*)() const) static_cast<BRepOffsetSimple_Status (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetError),
             R"#(Gets error code.)#" )
        .def("GetBuildSolidFlag",
             (Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetBuildSolidFlag),
             R"#(Gets solid building flag.)#" )
        .def("SetBuildSolidFlag",
             (void (BRepOffset_MakeSimpleOffset::*)( const Standard_Boolean ) ) static_cast<void (BRepOffset_MakeSimpleOffset::*)( const Standard_Boolean ) >(&BRepOffset_MakeSimpleOffset::SetBuildSolidFlag),
             R"#(Sets solid building flag.)#"  , py::arg("theBuildFlag"))
        .def("GetOffsetValue",
             (Standard_Real (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Real (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetOffsetValue),
             R"#(Gets offset value.)#" )
        .def("SetOffsetValue",
             (void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) ) static_cast<void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) >(&BRepOffset_MakeSimpleOffset::SetOffsetValue),
             R"#(Sets offset value.)#"  , py::arg("theOffsetValue"))
        .def("GetTolerance",
             (Standard_Real (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Real (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetTolerance),
             R"#(Gets tolerance (used for handling singularities).)#" )
        .def("SetTolerance",
             (void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) ) static_cast<void (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) >(&BRepOffset_MakeSimpleOffset::SetTolerance),
             R"#(Sets tolerance (used for handling singularities).)#"  , py::arg("theValue"))
        .def("IsDone",
             (Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const) static_cast<Standard_Boolean (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::IsDone),
             R"#(Gets done state.)#" )
        .def("GetResultShape",
             (const TopoDS_Shape & (BRepOffset_MakeSimpleOffset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_MakeSimpleOffset::*)() const>(&BRepOffset_MakeSimpleOffset::GetResultShape),
             R"#(Returns result shape.)#" )
        .def("GetSafeOffset",
             (Standard_Real (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) ) static_cast<Standard_Real (BRepOffset_MakeSimpleOffset::*)( const Standard_Real ) >(&BRepOffset_MakeSimpleOffset::GetSafeOffset),
             R"#(Computes max safe offset value for the given tolerance.)#"  , py::arg("theExpectedToler"))
        .def("Generated",
             (const TopoDS_Shape (BRepOffset_MakeSimpleOffset::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Shape (BRepOffset_MakeSimpleOffset::*)( const TopoDS_Shape & ) const>(&BRepOffset_MakeSimpleOffset::Generated),
             R"#(Returnes result shape for the given one (if exists).)#"  , py::arg("theShape"))
        .def("Modified",
             (const TopoDS_Shape (BRepOffset_MakeSimpleOffset::*)( const TopoDS_Shape & ) const) static_cast<const TopoDS_Shape (BRepOffset_MakeSimpleOffset::*)( const TopoDS_Shape & ) const>(&BRepOffset_MakeSimpleOffset::Modified),
             R"#(Returnes modified shape for the given one (if exists).)#"  , py::arg("theShape"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_Offset , shared_ptr<BRepOffset_Offset> >>(m.attr("BRepOffset_Offset"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const Standard_Real,const Standard_Boolean,const GeomAbs_JoinType >()  , py::arg("Face"),  py::arg("Offset"),  py::arg("OffsetOutside")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("JoinType")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc) )
        .def(py::init< const TopoDS_Face &,const Standard_Real, const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> &,const Standard_Boolean,const GeomAbs_JoinType >()  , py::arg("Face"),  py::arg("Offset"),  py::arg("Created"),  py::arg("OffsetOutside")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("JoinType")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc) )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge &,const Standard_Real,const Standard_Boolean,const Standard_Real,const GeomAbs_Shape >()  , py::arg("Path"),  py::arg("Edge1"),  py::arg("Edge2"),  py::arg("Offset"),  py::arg("Polynomial")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Conti")=static_cast<const GeomAbs_Shape>(GeomAbs_C1) )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge &,const Standard_Real,const TopoDS_Edge &,const TopoDS_Edge &,const Standard_Boolean,const Standard_Real,const GeomAbs_Shape >()  , py::arg("Path"),  py::arg("Edge1"),  py::arg("Edge2"),  py::arg("Offset"),  py::arg("FirstEdge"),  py::arg("LastEdge"),  py::arg("Polynomial")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Conti")=static_cast<const GeomAbs_Shape>(GeomAbs_C1) )
        .def(py::init< const TopoDS_Vertex &, const NCollection_List<TopoDS_Shape> &,const Standard_Real,const Standard_Boolean,const Standard_Real,const GeomAbs_Shape >()  , py::arg("Vertex"),  py::arg("LEdge"),  py::arg("Offset"),  py::arg("Polynomial")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Conti")=static_cast<const GeomAbs_Shape>(GeomAbs_C1) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepOffset_Offset::*)( const TopoDS_Face & , const Standard_Real , const Standard_Boolean , const GeomAbs_JoinType ) ) static_cast<void (BRepOffset_Offset::*)( const TopoDS_Face & , const Standard_Real , const Standard_Boolean , const GeomAbs_JoinType ) >(&BRepOffset_Offset::Init),
             R"#(None)#"  , py::arg("Face"),  py::arg("Offset"),  py::arg("OffsetOutside")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("JoinType")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc))
        .def("Init",
             (void (BRepOffset_Offset::*)( const TopoDS_Face & , const Standard_Real ,  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean , const GeomAbs_JoinType ) ) static_cast<void (BRepOffset_Offset::*)( const TopoDS_Face & , const Standard_Real ,  const NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean , const GeomAbs_JoinType ) >(&BRepOffset_Offset::Init),
             R"#(None)#"  , py::arg("Face"),  py::arg("Offset"),  py::arg("Created"),  py::arg("OffsetOutside")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("JoinType")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc))
        .def("Init",
             (void (BRepOffset_Offset::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Real , const Standard_Boolean , const Standard_Real , const GeomAbs_Shape ) ) static_cast<void (BRepOffset_Offset::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Real , const Standard_Boolean , const Standard_Real , const GeomAbs_Shape ) >(&BRepOffset_Offset::Init),
             R"#(None)#"  , py::arg("Path"),  py::arg("Edge1"),  py::arg("Edge2"),  py::arg("Offset"),  py::arg("Polynomial")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Conti")=static_cast<const GeomAbs_Shape>(GeomAbs_C1))
        .def("Init",
             (void (BRepOffset_Offset::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Real , const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Boolean , const Standard_Real , const GeomAbs_Shape ) ) static_cast<void (BRepOffset_Offset::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Real , const TopoDS_Edge & , const TopoDS_Edge & , const Standard_Boolean , const Standard_Real , const GeomAbs_Shape ) >(&BRepOffset_Offset::Init),
             R"#(None)#"  , py::arg("Path"),  py::arg("Edge1"),  py::arg("Edge2"),  py::arg("Offset"),  py::arg("FirstEdge"),  py::arg("LastEdge"),  py::arg("Polynomial")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Conti")=static_cast<const GeomAbs_Shape>(GeomAbs_C1))
        .def("Init",
             (void (BRepOffset_Offset::*)( const TopoDS_Vertex & ,  const NCollection_List<TopoDS_Shape> & , const Standard_Real , const Standard_Boolean , const Standard_Real , const GeomAbs_Shape ) ) static_cast<void (BRepOffset_Offset::*)( const TopoDS_Vertex & ,  const NCollection_List<TopoDS_Shape> & , const Standard_Real , const Standard_Boolean , const Standard_Real , const GeomAbs_Shape ) >(&BRepOffset_Offset::Init),
             R"#(Tol and Conti are only used if Polynomial is True (Used to perfrom the approximation))#"  , py::arg("Vertex"),  py::arg("LEdge"),  py::arg("Offset"),  py::arg("Polynomial")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("Conti")=static_cast<const GeomAbs_Shape>(GeomAbs_C1))
        .def("Init",
             (void (BRepOffset_Offset::*)( const TopoDS_Edge & , const Standard_Real ) ) static_cast<void (BRepOffset_Offset::*)( const TopoDS_Edge & , const Standard_Real ) >(&BRepOffset_Offset::Init),
             R"#(Only used in Rolling Ball. Pipe on Free Boundary)#"  , py::arg("Edge"),  py::arg("Offset"))
        .def("InitialShape",
             (const TopoDS_Shape & (BRepOffset_Offset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_Offset::*)() const>(&BRepOffset_Offset::InitialShape),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (BRepOffset_Offset::*)() const) static_cast<const TopoDS_Face & (BRepOffset_Offset::*)() const>(&BRepOffset_Offset::Face),
             R"#(None)#" )
        .def("Generated",
             (TopoDS_Shape (BRepOffset_Offset::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepOffset_Offset::*)( const TopoDS_Shape & ) const>(&BRepOffset_Offset::Generated),
             R"#(None)#"  , py::arg("Shape"))
        .def("Status",
             (BRepOffset_Status (BRepOffset_Offset::*)() const) static_cast<BRepOffset_Status (BRepOffset_Offset::*)() const>(&BRepOffset_Offset::Status),
             R"#(None)#" )
        .def("InitialShape",
             (const TopoDS_Shape & (BRepOffset_Offset::*)() const) static_cast<const TopoDS_Shape & (BRepOffset_Offset::*)() const>(&BRepOffset_Offset::InitialShape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepOffset_SimpleOffset ,opencascade::handle<BRepOffset_SimpleOffset> , BRepTools_Modification>>(m.attr("BRepOffset_SimpleOffset"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Real >()  , py::arg("theInputShape"),  py::arg("theOffsetValue"),  py::arg("theTolerance") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepOffset_SimpleOffset::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepOffset_SimpleOffset::*)() const>(&BRepOffset_SimpleOffset::DynamicType),
             R"#(None)#" )
        .def("NewSurface",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Face & , opencascade::handle<Geom_Surface> & , TopLoc_Location & , Standard_Real & , Standard_Boolean & , Standard_Boolean & ) >(&BRepOffset_SimpleOffset::NewSurface),
             R"#(Returns Standard_True if the face <F> has been modified. In this case, <S> is the new geometric support of the face, <L> the new location,<Tol> the new tolerance.<RevWires> has to be set to Standard_True when the modification reverses the normal of the surface.(the wires have to be reversed). <RevFace> has to be set to Standard_True if the orientation of the modified face changes in the shells which contain it. -- Here, <RevFace> will return Standard_True if the -- gp_Trsf is negative.)#"  , py::arg("F"),  py::arg("S"),  py::arg("L"),  py::arg("Tol"),  py::arg("RevWires"),  py::arg("RevFace"))
        .def("NewCurve",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , TopLoc_Location & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewCurve),
             R"#(Returns Standard_True if the edge <E> has been modified. In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("C"),  py::arg("L"),  py::arg("Tol"))
        .def("NewPoint",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , gp_Pnt & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewPoint),
             R"#(Returns Standard_True if the vertex <V> has been modified. In this case, <P> is the new geometric support of the vertex, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("P"),  py::arg("Tol"))
        .def("NewCurve2d",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewCurve2d),
             R"#(Returns Standard_True if the edge <E> has a new curve on surface on the face <F>.In this case, <C> is the new geometric support of the edge, <L> the new location, <Tol> the new tolerance. Otherwise, returns Standard_False, and <C>, <L>, <Tol> are not significant.)#"  , py::arg("E"),  py::arg("F"),  py::arg("NewE"),  py::arg("NewF"),  py::arg("C"),  py::arg("Tol"))
        .def("NewParameter",
             (Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (BRepOffset_SimpleOffset::*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ) >(&BRepOffset_SimpleOffset::NewParameter),
             R"#(Returns Standard_True if the Vertex <V> has a new parameter on the edge <E>. In this case, <P> is the parameter, <Tol> the new tolerance. Otherwise, returns Standard_False, and <P>, <Tol> are not significant.)#"  , py::arg("V"),  py::arg("E"),  py::arg("P"),  py::arg("Tol"))
        .def("Continuity",
             (GeomAbs_Shape (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<GeomAbs_Shape (BRepOffset_SimpleOffset::*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & ) >(&BRepOffset_SimpleOffset::Continuity),
             R"#(Returns the continuity of <NewE> between <NewF1> and <NewF2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("NewE"),  py::arg("NewF1"),  py::arg("NewF2"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepOffset_SimpleOffset::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepOffset_SimpleOffset::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepOffset_Tool , shared_ptr<BRepOffset_Tool>>(m,"BRepOffset_Tool");

    static_cast<py::class_<BRepOffset_Tool , shared_ptr<BRepOffset_Tool> >>(m.attr("BRepOffset_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("EdgeVertices_s",
                    (void (*)( const TopoDS_Edge & , TopoDS_Vertex & , TopoDS_Vertex & ) ) static_cast<void (*)( const TopoDS_Edge & , TopoDS_Vertex & , TopoDS_Vertex & ) >(&BRepOffset_Tool::EdgeVertices),
                    R"#(<V1> is the FirstVertex ,<V2> is the Last Vertex of <Edge> taking account the orientation of Edge.)#"  , py::arg("E"),  py::arg("V1"),  py::arg("V2"))
        .def_static("OriEdgeInFace_s",
                    (TopAbs_Orientation (*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<TopAbs_Orientation (*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&BRepOffset_Tool::OriEdgeInFace),
                    R"#(returns the cumul of the orientation of <Edge> and thc containing wire in <Face>)#"  , py::arg("E"),  py::arg("F"))
        .def_static("OrientSection_s",
                    (void (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , TopAbs_Orientation & , TopAbs_Orientation & ) ) static_cast<void (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Face & , TopAbs_Orientation & , TopAbs_Orientation & ) >(&BRepOffset_Tool::OrientSection),
                    R"#(<E> is a section between <F1> and <F2>. Computes <O1> the orientation of <E> in <F1> influenced by <F2>. idem for <O2>.)#"  , py::arg("E"),  py::arg("F1"),  py::arg("F2"),  py::arg("O1"),  py::arg("O2"))
        .def_static("FindCommonShapes_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) >(&BRepOffset_Tool::FindCommonShapes),
                    R"#(Looks for the common Vertices and Edges between faces <theF1> and <theF2>. Returns TRUE if common shapes have been found. <theLE> will contain the found common edges; <theLV> will contain the found common vertices.)#"  , py::arg("theF1"),  py::arg("theF2"),  py::arg("theLE"),  py::arg("theLV"))
        .def_static("FindCommonShapes_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopAbs_ShapeEnum , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopAbs_ShapeEnum , NCollection_List<TopoDS_Shape> & ) >(&BRepOffset_Tool::FindCommonShapes),
                    R"#(Looks for the common shapes of type <theType> between shapes <theS1> and <theS2>. Returns TRUE if common shapes have been found. <theLSC> will contain the found common shapes.)#"  , py::arg("theS1"),  py::arg("theS2"),  py::arg("theType"),  py::arg("theLSC"))
        .def_static("Inter3D_s",
                    (void (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State , const TopoDS_Edge & , const Standard_Boolean ) ) static_cast<void (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State , const TopoDS_Edge & , const Standard_Boolean ) >(&BRepOffset_Tool::Inter3D),
                    R"#(Computes the Section betwwen <F1> and <F2> the edges solution are stored in <LInt1> with the orientation on <F1>, the sames edges are stored in <Lint2> with the orientation on <F2>.)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("LInt1"),  py::arg("LInt2"),  py::arg("Side"),  py::arg("RefEdge"),  py::arg("IsRefEdgeDefined")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("TryProject_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State , const Standard_Real ) >(&BRepOffset_Tool::TryProject),
                    R"#(Find if the edges <Edges> of the face <F2> are on the face <F1>. Set in <LInt1> <LInt2> the updated edges. If all the edges are computed, returns true.)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("Edges"),  py::arg("LInt1"),  py::arg("LInt2"),  py::arg("Side"),  py::arg("TolConf"))
        .def_static("PipeInter_s",
                    (void (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State ) ) static_cast<void (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State ) >(&BRepOffset_Tool::PipeInter),
                    R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("LInt1"),  py::arg("LInt2"),  py::arg("Side"))
        .def_static("Inter2d_s",
                    (void (*)( const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Edge & , NCollection_List<TopoDS_Shape> & , const Standard_Real ) ) static_cast<void (*)( const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Edge & , NCollection_List<TopoDS_Shape> & , const Standard_Real ) >(&BRepOffset_Tool::Inter2d),
                    R"#(None)#"  , py::arg("F"),  py::arg("E1"),  py::arg("E2"),  py::arg("LV"),  py::arg("Tol"))
        .def_static("InterOrExtent_s",
                    (void (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State ) ) static_cast<void (*)( const TopoDS_Face & , const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & , const TopAbs_State ) >(&BRepOffset_Tool::InterOrExtent),
                    R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("LInt1"),  py::arg("LInt2"),  py::arg("Side"))
        .def_static("EnLargeFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Face & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Face & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Integer , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepOffset_Tool::EnLargeFace),
                    R"#(Returns True if The Surface of <NF> has changed. if <ChangeGeom> is TRUE , the surface can be changed . if <UpdatePCurve> is TRUE, update the pcurves of the edges of <F> on the new surface if the surface has been changed. <enlargeU>, <enlargeVfirst>, <enlargeVlast> allow or forbid enlargement in U and V directions correspondingly. <theExtensionMode> is a mode of extension of the surface of the face: if <theExtensionMode> equals 1, potentially infinite surfaces are extended by maximum value, and limited surfaces are extended by 25%. if <theExtensionMode> equals 2, potentially infinite surfaces are extended by 10*(correspondent size of face), and limited surfaces are extended by 100%. <theLenBeforeUfirst>, <theLenAfterUlast>, <theLenBeforeVfirst>, <theLenAfterVlast> set the values of enlargement on correspondent directions. If some of them equals -1, the default value of enlargement is used.)#"  , py::arg("F"),  py::arg("NF"),  py::arg("ChangeGeom"),  py::arg("UpDatePCurve")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("enlargeU")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("enlargeVfirst")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("enlargeVlast")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("theExtensionMode")=static_cast<const Standard_Integer>(1),  py::arg("theLenBeforeUfirst")=static_cast<const Standard_Real>(- 1.),  py::arg("theLenAfterUlast")=static_cast<const Standard_Real>(- 1.),  py::arg("theLenBeforeVfirst")=static_cast<const Standard_Real>(- 1.),  py::arg("theLenAfterVlast")=static_cast<const Standard_Real>(- 1.))
        .def_static("ExtentFace_s",
                    (void (*)( const TopoDS_Face & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const TopAbs_State , const Standard_Real , TopoDS_Face & ) ) static_cast<void (*)( const TopoDS_Face & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , const TopAbs_State , const Standard_Real , TopoDS_Face & ) >(&BRepOffset_Tool::ExtentFace),
                    R"#(None)#"  , py::arg("F"),  py::arg("ConstShapes"),  py::arg("ToBuild"),  py::arg("Side"),  py::arg("TolConf"),  py::arg("NF"))
        .def_static("BuildNeighbour_s",
                    (void (*)( const TopoDS_Wire & , const TopoDS_Face & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TopoDS_Wire & , const TopoDS_Face & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&BRepOffset_Tool::BuildNeighbour),
                    R"#(Via the wire explorer store in <NOnV1> for an Edge <E> of <W> his Edge neighbour on the first vertex <V1> of <E>. Store in NOnV2 the Neighbour of <E>on the last vertex <V2> of <E>.)#"  , py::arg("W"),  py::arg("F"),  py::arg("NOnV1"),  py::arg("NOnV2"))
        .def_static("MapVertexEdges_s",
                    (void (*)( const TopoDS_Shape & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TopoDS_Shape & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&BRepOffset_Tool::MapVertexEdges),
                    R"#(Store in MVE for a vertex <V> in <S> the incident edges <E> in <S>. An Edge is Store only one Time for a vertex.)#"  , py::arg("S"),  py::arg("MVE"))
        .def_static("Deboucle3D_s",
                    (TopoDS_Shape (*)( const TopoDS_Shape & ,  const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<TopoDS_Shape (*)( const TopoDS_Shape & ,  const NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&BRepOffset_Tool::Deboucle3D),
                    R"#(Remove the non valid part of an offsetshape 1 - Remove all the free boundary and the faces connex to such edges. 2 - Remove all the shapes not valid in the result (according to the side of offseting) in this verion only the first point is implemented.)#"  , py::arg("S"),  py::arg("Boundary"))
        .def_static("CorrectOrientation_s",
                    (void (*)( const TopoDS_Shape & ,  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & , const Standard_Real ) ) static_cast<void (*)( const TopoDS_Shape & ,  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & , opencascade::handle<BRepAlgo_AsDes> & , BRepAlgo_Image & , const Standard_Real ) >(&BRepOffset_Tool::CorrectOrientation),
                    R"#(None)#"  , py::arg("SI"),  py::arg("NewEdges"),  py::arg("AsDes"),  py::arg("InitOffset"),  py::arg("Offset"))
        .def_static("Gabarit_s",
                    (Standard_Real (*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom_Curve> & ) >(&BRepOffset_Tool::Gabarit),
                    R"#(None)#"  , py::arg("aCurve"))
        .def_static("CheckPlanesNormals_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , const Standard_Real ) >(&BRepOffset_Tool::CheckPlanesNormals),
                    R"#(Compares the normal directions of the planar faces and returns TRUE if the directions are the same with the given precision.)#"  , py::arg("theFace1"),  py::arg("theFace2"),  py::arg("theTolAng")=static_cast<const Standard_Real>(1.e-8))
    // static methods using call by reference i.s.o. return
        .def_static("CheckBounds_s",
                    []( const TopoDS_Face & F,const BRepOffset_Analyse & Analyse ){ Standard_Boolean  enlargeU; Standard_Boolean  enlargeVfirst; Standard_Boolean  enlargeVlast; BRepOffset_Tool::CheckBounds(F,Analyse,enlargeU,enlargeVfirst,enlargeVlast); return std::make_tuple(enlargeU,enlargeVfirst,enlargeVlast); },
                    R"#(None)#"  , py::arg("F"),  py::arg("Analyse"))
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx
// ./opencascade/BRepOffset_MakeOffset.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeMapOfShape.hxx
// ./opencascade/BRepOffset_DataMapOfShapeOffset.hxx
// ./opencascade/BRepOffset_DataMapOfShapeListOfInterval.hxx
// ./opencascade/BRepOffset_ListOfInterval.hxx
// ./opencascade/BRepOffset_Status.hxx
// ./opencascade/BRepOffset_MakeSimpleOffset.hxx
// ./opencascade/BRepOffset_Inter3d.hxx
// ./opencascade/BRepOffset_Tool.hxx
// ./opencascade/BRepOffset.hxx
// ./opencascade/BRepOffset_Interval.hxx
// ./opencascade/BRepOffset_Offset.hxx
// ./opencascade/BRepOffset_ListIteratorOfListOfInterval.hxx
// ./opencascade/BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval.hxx
// ./opencascade/BRepOffset_Inter2d.hxx
// ./opencascade/BRepOffset_SimpleOffset.hxx
// ./opencascade/BRepOffset_Type.hxx
// ./opencascade/BRepOffset_Error.hxx
// ./opencascade/BRepOffset_DataMapOfShapeMapOfShape.hxx
// ./opencascade/BRepOffset_Mode.hxx
// ./opencascade/BRepOffset_MakeLoops.hxx
// ./opencascade/BRepOffset_Analyse.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, BRepOffset_Offset, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeOffset");
    register_template_NCollection_DataMap<TopoDS_Shape, BRepOffset_ListOfInterval, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeListOfInterval");
    register_template_NCollection_List<BRepOffset_Interval>(m,"BRepOffset_ListOfInterval");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_MapOfShape, TopTools_ShapeMapHasher>(m,"BRepOffset_DataMapOfShapeMapOfShape");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
