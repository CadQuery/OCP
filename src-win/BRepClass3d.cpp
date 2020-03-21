
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
#include <BRepClass3d_SolidExplorer.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopoDS_Shell.hxx>
#include <IntCurvesFace_Intersector.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <gp_Lin.hxx>

// module includes
#include <BRepClass3d.hxx>
#include <BRepClass3d_BndBoxTree.hxx>
#include <BRepClass3d_DataMapIteratorOfMapOfInter.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_MapOfInter.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>

// template related includes
// ./opencascade\BRepClass3d_MapOfInter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepClass3d_MapOfInter.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepClass3d(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepClass3d"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepClass3d , shared_ptr<BRepClass3d>>(m,"BRepClass3d");

    static_cast<py::class_<BRepClass3d , shared_ptr<BRepClass3d> >>(m.attr("BRepClass3d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("OuterShell_s",
                    (TopoDS_Shell (*)( const TopoDS_Solid & ) ) static_cast<TopoDS_Shell (*)( const TopoDS_Solid & ) >(&BRepClass3d::OuterShell),
                    R"#(Returns the outer most shell of <S>. Returns a Null shell if <S> has no outer shell. If <S> has only one shell, then it will return, without checking orientation.)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_Intersector3d , shared_ptr<BRepClass3d_Intersector3d> >>(m.attr("BRepClass3d_Intersector3d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepClass3d_Intersector3d::*)( const gp_Lin & , const Standard_Real , const Standard_Real , const TopoDS_Face & ) ) static_cast<void (BRepClass3d_Intersector3d::*)( const gp_Lin & , const Standard_Real , const Standard_Real , const TopoDS_Face & ) >(&BRepClass3d_Intersector3d::Perform),
             R"#(Perform the intersection between the segment L(0) ... L(Prm) and the Shape <Sh>.)#"  , py::arg("L"),  py::arg("Prm"),  py::arg("Tol"),  py::arg("F"))
        .def("IsDone",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
        .def("HasAPoint",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::HasAPoint),
             R"#(True is returned if a point has been found.)#" )
        .def("UParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::UParameter),
             R"#(Returns the U parameter of the intersection point on the surface.)#" )
        .def("VParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::VParameter),
             R"#(Returns the V parameter of the intersection point on the surface.)#" )
        .def("WParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::WParameter),
             R"#(Returns the parameter of the intersection point on the line.)#" )
        .def("Pnt",
             (const gp_Pnt & (BRepClass3d_Intersector3d::*)() const) static_cast<const gp_Pnt & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Pnt),
             R"#(Returns the geometric point of the intersection between the line and the surface.)#" )
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const) static_cast<IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Transition),
             R"#(Returns the transition of the line on the surface.)#" )
        .def("State",
             (TopAbs_State (BRepClass3d_Intersector3d::*)() const) static_cast<TopAbs_State (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::State),
             R"#(Returns the state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#" )
        .def("Face",
             (const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const) static_cast<const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Face),
             R"#(Returns the significant face used to determine the intersection.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::IsDone),
             R"#(True is returned when the intersection have been computed.)#" )
        .def("HasAPoint",
             (Standard_Boolean (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Boolean (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::HasAPoint),
             R"#(True is returned if a point has been found.)#" )
        .def("Pnt",
             (const gp_Pnt & (BRepClass3d_Intersector3d::*)() const) static_cast<const gp_Pnt & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Pnt),
             R"#(Returns the geometric point of the intersection between the line and the surface.)#" )
        .def("UParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::UParameter),
             R"#(Returns the U parameter of the intersection point on the surface.)#" )
        .def("VParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::VParameter),
             R"#(Returns the V parameter of the intersection point on the surface.)#" )
        .def("WParameter",
             (Standard_Real (BRepClass3d_Intersector3d::*)() const) static_cast<Standard_Real (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::WParameter),
             R"#(Returns the parameter of the intersection point on the line.)#" )
        .def("Transition",
             (IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const) static_cast<IntCurveSurface_TransitionOnCurve (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Transition),
             R"#(Returns the transition of the line on the surface.)#" )
        .def("State",
             (TopAbs_State (BRepClass3d_Intersector3d::*)() const) static_cast<TopAbs_State (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::State),
             R"#(Returns the state of the point on the face. The values can be either TopAbs_IN ( the point is in the face) or TopAbs_ON ( the point is on a boudary of the face).)#" )
        .def("Face",
             (const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const) static_cast<const TopoDS_Face & (BRepClass3d_Intersector3d::*)() const>(&BRepClass3d_Intersector3d::Face),
             R"#(Returns the significant face used to determine the intersection.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SClassifier , shared_ptr<BRepClass3d_SClassifier> >>(m.attr("BRepClass3d_SClassifier"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< BRepClass3d_SolidExplorer &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("P"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepClass3d_SClassifier::*)( BRepClass3d_SolidExplorer & , const gp_Pnt & , const Standard_Real ) ) static_cast<void (BRepClass3d_SClassifier::*)( BRepClass3d_SolidExplorer & , const gp_Pnt & , const Standard_Real ) >(&BRepClass3d_SClassifier::Perform),
             R"#(Classify the point P with the tolerance Tol on the solid S.)#"  , py::arg("S"),  py::arg("P"),  py::arg("Tol"))
        .def("PerformInfinitePoint",
             (void (BRepClass3d_SClassifier::*)( BRepClass3d_SolidExplorer & , const Standard_Real ) ) static_cast<void (BRepClass3d_SClassifier::*)( BRepClass3d_SolidExplorer & , const Standard_Real ) >(&BRepClass3d_SClassifier::PerformInfinitePoint),
             R"#(Classify an infinite point with the tolerance Tol on the solid S.)#"  , py::arg("S"),  py::arg("Tol"))
        .def("Rejected",
             (Standard_Boolean (BRepClass3d_SClassifier::*)() const) static_cast<Standard_Boolean (BRepClass3d_SClassifier::*)() const>(&BRepClass3d_SClassifier::Rejected),
             R"#(Returns True if the classification has been computed by rejection. The State is then OUT.)#" )
        .def("State",
             (TopAbs_State (BRepClass3d_SClassifier::*)() const) static_cast<TopAbs_State (BRepClass3d_SClassifier::*)() const>(&BRepClass3d_SClassifier::State),
             R"#(Returns the result of the classification.)#" )
        .def("IsOnAFace",
             (Standard_Boolean (BRepClass3d_SClassifier::*)() const) static_cast<Standard_Boolean (BRepClass3d_SClassifier::*)() const>(&BRepClass3d_SClassifier::IsOnAFace),
             R"#(Returns True when the point is a point of a face.)#" )
        .def("Face",
             (TopoDS_Face (BRepClass3d_SClassifier::*)() const) static_cast<TopoDS_Face (BRepClass3d_SClassifier::*)() const>(&BRepClass3d_SClassifier::Face),
             R"#(Returns the face used to determine the classification. When the state is ON, this is the face containing the point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SolidExplorer , shared_ptr<BRepClass3d_SolidExplorer> >>(m.attr("BRepClass3d_SolidExplorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("InitShape",
             (void (BRepClass3d_SolidExplorer::*)( const TopoDS_Shape & ) ) static_cast<void (BRepClass3d_SolidExplorer::*)( const TopoDS_Shape & ) >(&BRepClass3d_SolidExplorer::InitShape),
             R"#(None)#"  , py::arg("S"))
        .def("Reject",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Pnt & ) const>(&BRepClass3d_SolidExplorer::Reject),
             R"#(Should return True if P outside of bounding vol. of the shape)#"  , py::arg("P"))
        .def("PointInTheFace",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Integer & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Integer & ) const>(&BRepClass3d_SolidExplorer::PointInTheFace),
             R"#(None)#"  , py::arg("F"),  py::arg("P"),  py::arg("u"),  py::arg("v"),  py::arg("Param"),  py::arg("Index"))
        .def("PointInTheFace",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Integer & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Integer & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) const>(&BRepClass3d_SolidExplorer::PointInTheFace),
             R"#(None)#"  , py::arg("F"),  py::arg("P"),  py::arg("u"),  py::arg("v"),  py::arg("Param"),  py::arg("Index"),  py::arg("surf"),  py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"))
        .def("PointInTheFace",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Integer & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & , gp_Vec & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Integer & , const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , gp_Vec & , gp_Vec & ) const>(&BRepClass3d_SolidExplorer::PointInTheFace),
             R"#(<Index> gives point index to search from and returns point index of succeseful search)#"  , py::arg("F"),  py::arg("P"),  py::arg("u"),  py::arg("v"),  py::arg("Param"),  py::arg("Index"),  py::arg("surf"),  py::arg("u1"),  py::arg("v1"),  py::arg("u2"),  py::arg("v2"),  py::arg("theVecD1U"),  py::arg("theVecD1V"))
        .def("InitShell",
             (void (BRepClass3d_SolidExplorer::*)() ) static_cast<void (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::InitShell),
             R"#(Starts an exploration of the shells.)#" )
        .def("MoreShell",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)() const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)() const>(&BRepClass3d_SolidExplorer::MoreShell),
             R"#(Returns True if there is a current shell.)#" )
        .def("NextShell",
             (void (BRepClass3d_SolidExplorer::*)() ) static_cast<void (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::NextShell),
             R"#(Sets the explorer to the next shell.)#" )
        .def("CurrentShell",
             (TopoDS_Shell (BRepClass3d_SolidExplorer::*)() const) static_cast<TopoDS_Shell (BRepClass3d_SolidExplorer::*)() const>(&BRepClass3d_SolidExplorer::CurrentShell),
             R"#(Returns the current shell.)#" )
        .def("RejectShell",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const>(&BRepClass3d_SolidExplorer::RejectShell),
             R"#(Returns True if the Shell is rejected.)#"  , py::arg("L"))
        .def("InitFace",
             (void (BRepClass3d_SolidExplorer::*)() ) static_cast<void (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::InitFace),
             R"#(Starts an exploration of the faces of the current shell.)#" )
        .def("MoreFace",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)() const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)() const>(&BRepClass3d_SolidExplorer::MoreFace),
             R"#(Returns True if current face in current shell.)#" )
        .def("NextFace",
             (void (BRepClass3d_SolidExplorer::*)() ) static_cast<void (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::NextFace),
             R"#(Sets the explorer to the next Face of the current shell.)#" )
        .def("CurrentFace",
             (TopoDS_Face (BRepClass3d_SolidExplorer::*)() const) static_cast<TopoDS_Face (BRepClass3d_SolidExplorer::*)() const>(&BRepClass3d_SolidExplorer::CurrentFace),
             R"#(Returns the current face.)#" )
        .def("RejectFace",
             (Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const) static_cast<Standard_Boolean (BRepClass3d_SolidExplorer::*)( const gp_Lin & ) const>(&BRepClass3d_SolidExplorer::RejectFace),
             R"#(returns True if the face is rejected.)#"  , py::arg("L"))
        .def("Segment",
             (Standard_Integer (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , gp_Lin & , Standard_Real & ) ) static_cast<Standard_Integer (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , gp_Lin & , Standard_Real & ) >(&BRepClass3d_SolidExplorer::Segment),
             R"#(Returns in <L>, <Par> a segment having at least one intersection with the shape boundary to compute intersections.)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("OtherSegment",
             (Standard_Integer (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , gp_Lin & , Standard_Real & ) ) static_cast<Standard_Integer (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , gp_Lin & , Standard_Real & ) >(&BRepClass3d_SolidExplorer::OtherSegment),
             R"#(Returns in <L>, <Par> a segment having at least one intersection with the shape boundary to compute intersections.)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"))
        .def("GetFaceSegmentIndex",
             (Standard_Integer (BRepClass3d_SolidExplorer::*)() const) static_cast<Standard_Integer (BRepClass3d_SolidExplorer::*)() const>(&BRepClass3d_SolidExplorer::GetFaceSegmentIndex),
             R"#(Returns the index of face for which last segment is calculated.)#" )
        .def("DumpSegment",
             (void (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , const gp_Lin & , const Standard_Real , const TopAbs_State ) const) static_cast<void (BRepClass3d_SolidExplorer::*)( const gp_Pnt & , const gp_Lin & , const Standard_Real , const TopAbs_State ) const>(&BRepClass3d_SolidExplorer::DumpSegment),
             R"#(None)#"  , py::arg("P"),  py::arg("L"),  py::arg("Par"),  py::arg("S"))
        .def("Box",
             (const Bnd_Box & (BRepClass3d_SolidExplorer::*)() const) static_cast<const Bnd_Box & (BRepClass3d_SolidExplorer::*)() const>(&BRepClass3d_SolidExplorer::Box),
             R"#(None)#" )
        .def("GetShape",
             (const TopoDS_Shape & (BRepClass3d_SolidExplorer::*)() const) static_cast<const TopoDS_Shape & (BRepClass3d_SolidExplorer::*)() const>(&BRepClass3d_SolidExplorer::GetShape),
             R"#(None)#" )
        .def("Intersector",
             (IntCurvesFace_Intersector & (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & ) const) static_cast<IntCurvesFace_Intersector & (BRepClass3d_SolidExplorer::*)( const TopoDS_Face & ) const>(&BRepClass3d_SolidExplorer::Intersector),
             R"#(None)#"  , py::arg("F"))
        .def("GetTree",
             (const BRepClass3d_BndBoxTree & (BRepClass3d_SolidExplorer::*)() ) static_cast<const BRepClass3d_BndBoxTree & (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::GetTree),
             R"#(Return UB-tree instance which is used for edge / vertex checks.)#" )
        .def("GetMapEV",
             (const TopTools_IndexedMapOfShape & (BRepClass3d_SolidExplorer::*)() ) static_cast<const TopTools_IndexedMapOfShape & (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::GetMapEV),
             R"#(Return edge/vertices map for current shape.)#" )
        .def("Destroy",
             (void (BRepClass3d_SolidExplorer::*)() ) static_cast<void (BRepClass3d_SolidExplorer::*)() >(&BRepClass3d_SolidExplorer::Destroy),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("FindAPointInTheFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & ) >(&BRepClass3d_SolidExplorer::FindAPointInTheFace),
                    R"#(compute a point P in the face F. Param is a Real in ]0,1[ and is used to initialise the algorithm. For different values , different points are returned.)#"  , py::arg("F"),  py::arg("P"),  py::arg("Param"))
        .def_static("FindAPointInTheFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & ) >(&BRepClass3d_SolidExplorer::FindAPointInTheFace),
                    R"#(None)#"  , py::arg("F"),  py::arg("P"),  py::arg("u"),  py::arg("v"),  py::arg("Param"))
        .def_static("FindAPointInTheFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Vec & , gp_Vec & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & , Standard_Real & , gp_Vec & , gp_Vec & ) >(&BRepClass3d_SolidExplorer::FindAPointInTheFace),
                    R"#(None)#"  , py::arg("F"),  py::arg("P"),  py::arg("u"),  py::arg("v"),  py::arg("Param"),  py::arg("theVecD1U"),  py::arg("theVecD1V"))
        .def_static("FindAPointInTheFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & , Standard_Real & , Standard_Real & ) >(&BRepClass3d_SolidExplorer::FindAPointInTheFace),
                    R"#(None)#"  , py::arg("F"),  py::arg("P"),  py::arg("u"),  py::arg("v"))
        .def_static("FindAPointInTheFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , gp_Pnt & ) >(&BRepClass3d_SolidExplorer::FindAPointInTheFace),
                    R"#(None)#"  , py::arg("F"),  py::arg("P"))
        .def_static("FindAPointInTheFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , Standard_Real & , Standard_Real & ) >(&BRepClass3d_SolidExplorer::FindAPointInTheFace),
                    R"#(None)#"  , py::arg("F"),  py::arg("u"),  py::arg("v"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SolidPassiveClassifier , shared_ptr<BRepClass3d_SolidPassiveClassifier> >>(m.attr("BRepClass3d_SolidPassiveClassifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reset",
             (void (BRepClass3d_SolidPassiveClassifier::*)( const gp_Lin & , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepClass3d_SolidPassiveClassifier::*)( const gp_Lin & , const Standard_Real , const Standard_Real ) >(&BRepClass3d_SolidPassiveClassifier::Reset),
             R"#(Starts a classification process. The point to classify is the origin of the line <L>. <P> is the original length of the segment on <L> used to compute intersections. <Tol> is the tolerance attached to the intersections.)#"  , py::arg("L"),  py::arg("P"),  py::arg("Tol"))
        .def("Compare",
             (void (BRepClass3d_SolidPassiveClassifier::*)( const TopoDS_Face & , const TopAbs_Orientation ) ) static_cast<void (BRepClass3d_SolidPassiveClassifier::*)( const TopoDS_Face & , const TopAbs_Orientation ) >(&BRepClass3d_SolidPassiveClassifier::Compare),
             R"#(Updates the classification process with the face <F> from the boundary.)#"  , py::arg("F"),  py::arg("Or"))
        .def("Parameter",
             (Standard_Real (BRepClass3d_SolidPassiveClassifier::*)() const) static_cast<Standard_Real (BRepClass3d_SolidPassiveClassifier::*)() const>(&BRepClass3d_SolidPassiveClassifier::Parameter),
             R"#(Returns the current value of the parameter.)#" )
        .def("HasIntersection",
             (Standard_Boolean (BRepClass3d_SolidPassiveClassifier::*)() const) static_cast<Standard_Boolean (BRepClass3d_SolidPassiveClassifier::*)() const>(&BRepClass3d_SolidPassiveClassifier::HasIntersection),
             R"#(Returns True if an intersection is computed.)#" )
        .def("Intersector",
             (BRepClass3d_Intersector3d & (BRepClass3d_SolidPassiveClassifier::*)() ) static_cast<BRepClass3d_Intersector3d & (BRepClass3d_SolidPassiveClassifier::*)() >(&BRepClass3d_SolidPassiveClassifier::Intersector),
             R"#(Returns the intersecting algorithm.)#" )
        .def("State",
             (TopAbs_State (BRepClass3d_SolidPassiveClassifier::*)() const) static_cast<TopAbs_State (BRepClass3d_SolidPassiveClassifier::*)() const>(&BRepClass3d_SolidPassiveClassifier::State),
             R"#(Returns the current state of the point.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepClass3d_SolidClassifier , shared_ptr<BRepClass3d_SolidClassifier> , BRepClass3d_SClassifier>>(m.attr("BRepClass3d_SolidClassifier"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
        .def(py::init< const TopoDS_Shape &,const gp_Pnt &,const Standard_Real >()  , py::arg("S"),  py::arg("P"),  py::arg("Tol") )
    // custom constructors
    // methods
        .def("Load",
             (void (BRepClass3d_SolidClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (BRepClass3d_SolidClassifier::*)( const TopoDS_Shape & ) >(&BRepClass3d_SolidClassifier::Load),
             R"#(None)#"  , py::arg("S"))
        .def("Perform",
             (void (BRepClass3d_SolidClassifier::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (BRepClass3d_SolidClassifier::*)( const gp_Pnt & , const Standard_Real ) >(&BRepClass3d_SolidClassifier::Perform),
             R"#(Classify the point P with the tolerance Tol on the solid S.)#"  , py::arg("P"),  py::arg("Tol"))
        .def("PerformInfinitePoint",
             (void (BRepClass3d_SolidClassifier::*)( const Standard_Real ) ) static_cast<void (BRepClass3d_SolidClassifier::*)( const Standard_Real ) >(&BRepClass3d_SolidClassifier::PerformInfinitePoint),
             R"#(Classify an infinite point with the tolerance Tol on the solid S. Useful for compute the orientation of a solid.)#"  , py::arg("Tol"))
        .def("Destroy",
             (void (BRepClass3d_SolidClassifier::*)() ) static_cast<void (BRepClass3d_SolidClassifier::*)() >(&BRepClass3d_SolidClassifier::Destroy),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BRepClass3d_SClassifier.hxx
// ./opencascade\BRepClass3d_BndBoxTree.hxx
// ./opencascade\BRepClass3d_DataMapIteratorOfMapOfInter.hxx
// ./opencascade\BRepClass3d_SolidExplorer.hxx
// ./opencascade\BRepClass3d_MapOfInter.hxx
// ./opencascade\BRepClass3d.hxx
// ./opencascade\BRepClass3d_Intersector3d.hxx
// ./opencascade\BRepClass3d_SolidClassifier.hxx
// ./opencascade\BRepClass3d_SolidPassiveClassifier.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, Standard_Address, TopTools_ShapeMapHasher>(m,"BRepClass3d_MapOfInter");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
