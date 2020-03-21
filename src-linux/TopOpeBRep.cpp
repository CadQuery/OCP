
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepAdaptor_HSurface.hxx>
#include <Bnd_Box.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Bnd_Box.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <IntPatch_ALine.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_GLine.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <Geom_Curve.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <IntPatch_Point.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_DSFiller.hxx>

// module includes
#include <TopOpeBRep.hxx>
#include <TopOpeBRep_Array1OfLineInter.hxx>
#include <TopOpeBRep_Array1OfVPointInter.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx>
#include <TopOpeBRep_DataMapOfTopolTool.hxx>
#include <TopOpeBRep_define.hxx>
#include <TopOpeBRep_DRAW.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRep_EdgesFiller.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_HArray1OfLineInter.hxx>
#include <TopOpeBRep_HArray1OfVPointInter.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_ListIteratorOfListOfBipoint.hxx>
#include <TopOpeBRep_ListOfBipoint.hxx>
#include <TopOpeBRep_P2Dstatus.hxx>
#include <TopOpeBRep_PEdgesIntersector.hxx>
#include <TopOpeBRep_PFacesFiller.hxx>
#include <TopOpeBRep_PFacesIntersector.hxx>
#include <TopOpeBRep_PIntRes2d_IntersectionPoint.hxx>
#include <TopOpeBRep_PLineInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_PPntOn2S.hxx>
#include <TopOpeBRep_PThePointOfIntersection.hxx>
#include <TopOpeBRep_SequenceOfPoint2d.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_traceSIFF.hxx>
#include <TopOpeBRep_TypeLineCurve.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>

// template related includes
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopOpeBRep"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TopOpeBRep , shared_ptr<TopOpeBRep>>(m,"TopOpeBRep");

    static_cast<py::class_<TopOpeBRep , shared_ptr<TopOpeBRep> >>(m.attr("TopOpeBRep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopOpeBRep_TypeLineCurve , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopOpeBRep_TypeLineCurve , std::ostream & ) >(&TopOpeBRep::Print),
                    R"#(Prints the name of <TLC> as a String on the Stream <S> and returns <S>.)#"  , py::arg("TLC"),  py::arg("OS"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_Bipoint , shared_ptr<TopOpeBRep_Bipoint> >>(m.attr("TopOpeBRep_Bipoint"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("I1"),  py::arg("I2") )
    // custom constructors
    // methods
        .def("I1",
             (Standard_Integer (TopOpeBRep_Bipoint::*)() const) static_cast<Standard_Integer (TopOpeBRep_Bipoint::*)() const>(&TopOpeBRep_Bipoint::I1),
             R"#(None)#" )
        .def("I2",
             (Standard_Integer (TopOpeBRep_Bipoint::*)() const) static_cast<Standard_Integer (TopOpeBRep_Bipoint::*)() const>(&TopOpeBRep_Bipoint::I2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_DSFiller , shared_ptr<TopOpeBRep_DSFiller> >>(m.attr("TopOpeBRep_DSFiller"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Insert",
             (void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Boolean ) ) static_cast<void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Boolean ) >(&TopOpeBRep_DSFiller::Insert),
             R"#(Stores in <DS> the intersections of <S1> and <S2>. if orientFORWARD = True S FORWARD,REVERSED --> FORWARD S EXTERNAL,INTERNAL --> EXTERNAL,INTERNAL)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("HDS"),  py::arg("orientFORWARD")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InsertIntersection",
             (void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Boolean ) ) static_cast<void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Boolean ) >(&TopOpeBRep_DSFiller::InsertIntersection),
             R"#(Stores in <DS> the intersections of <S1> and <S2>. if orientFORWARD = True S FORWAR,REVERSED --> FORWARD S EXTERNAL,INTERNAL --> EXTERNAL,INTERNAL)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("HDS"),  py::arg("orientFORWARD")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Complete",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRep_DSFiller::Complete),
             R"#(None)#"  , py::arg("HDS"))
        .def("Insert2d",
             (void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRep_DSFiller::Insert2d),
             R"#(Stores in <DS> the intersections of <S1> and <S2>. S1 et S2 contain only SameDomain Face)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("HDS"))
        .def("InsertIntersection2d",
             (void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRep_DSFiller::InsertIntersection2d),
             R"#(S1, S2 set of tangent face lance les intersections 2d pour coder correctement les faces SameDomain.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("HDS"))
        .def("IsMadeOf1d",
             (Standard_Boolean (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & ) const>(&TopOpeBRep_DSFiller::IsMadeOf1d),
             R"#(None)#"  , py::arg("S"))
        .def("IsContext1d",
             (Standard_Boolean (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & ) const>(&TopOpeBRep_DSFiller::IsContext1d),
             R"#(None)#"  , py::arg("S"))
        .def("Insert1d",
             (void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Face & , const TopoDS_Face & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Boolean ) ) static_cast<void (TopOpeBRep_DSFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Face & , const TopoDS_Face & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Boolean ) >(&TopOpeBRep_DSFiller::Insert1d),
             R"#(Stores in <DS> the intersections of <S1> and <S2>. S1 and S2 are edges or wires. S1 edges have a 2d representation in face F1 S2 edges have a 2d representation in face F2 F1 is the face which surface is taken as reference for 2d description of S1 and S2 edges. if orientFORWARD = True S FORWARD,REVERSED --> FORWARD S EXTERNAL,INTERNAL --> EXTERNAL,INTERNAL)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("F1"),  py::arg("F2"),  py::arg("HDS"),  py::arg("orientFORWARD")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ChangeShapeIntersector",
             (TopOpeBRep_ShapeIntersector & (TopOpeBRep_DSFiller::*)() ) static_cast<TopOpeBRep_ShapeIntersector & (TopOpeBRep_DSFiller::*)() >(&TopOpeBRep_DSFiller::ChangeShapeIntersector),
             R"#(None)#" )
        .def("ChangeShapeIntersector2d",
             (TopOpeBRep_ShapeIntersector2d & (TopOpeBRep_DSFiller::*)() ) static_cast<TopOpeBRep_ShapeIntersector2d & (TopOpeBRep_DSFiller::*)() >(&TopOpeBRep_DSFiller::ChangeShapeIntersector2d),
             R"#(None)#" )
        .def("ChangeFacesFiller",
             (TopOpeBRep_FacesFiller & (TopOpeBRep_DSFiller::*)() ) static_cast<TopOpeBRep_FacesFiller & (TopOpeBRep_DSFiller::*)() >(&TopOpeBRep_DSFiller::ChangeFacesFiller),
             R"#(None)#" )
        .def("ChangeEdgesFiller",
             (TopOpeBRep_EdgesFiller & (TopOpeBRep_DSFiller::*)() ) static_cast<TopOpeBRep_EdgesFiller & (TopOpeBRep_DSFiller::*)() >(&TopOpeBRep_DSFiller::ChangeEdgesFiller),
             R"#(None)#" )
        .def("ChangeFaceEdgeFiller",
             (TopOpeBRep_FaceEdgeFiller & (TopOpeBRep_DSFiller::*)() ) static_cast<TopOpeBRep_FaceEdgeFiller & (TopOpeBRep_DSFiller::*)() >(&TopOpeBRep_DSFiller::ChangeFaceEdgeFiller),
             R"#(None)#" )
        .def("GapFiller",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const>(&TopOpeBRep_DSFiller::GapFiller),
             R"#(None)#"  , py::arg("HDS"))
        .def("CompleteDS",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const>(&TopOpeBRep_DSFiller::CompleteDS),
             R"#(Update the data structure with relevant informations deduced from the intersections.)#"  , py::arg("HDS"))
        .def("Filter",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const>(&TopOpeBRep_DSFiller::Filter),
             R"#(None)#"  , py::arg("HDS"))
        .def("Reducer",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const>(&TopOpeBRep_DSFiller::Reducer),
             R"#(None)#"  , py::arg("HDS"))
        .def("RemoveUnsharedGeometry",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRep_DSFiller::RemoveUnsharedGeometry),
             R"#(None)#"  , py::arg("HDS"))
        .def("Checker",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const>(&TopOpeBRep_DSFiller::Checker),
             R"#(None)#"  , py::arg("HDS"))
        .def("CompleteDS2d",
             (void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const) static_cast<void (TopOpeBRep_DSFiller::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) const>(&TopOpeBRep_DSFiller::CompleteDS2d),
             R"#(Update the data structure with relevant informations deduced from the intersections 2d.)#"  , py::arg("HDS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_EdgesFiller , shared_ptr<TopOpeBRep_EdgesFiller> >>(m.attr("TopOpeBRep_EdgesFiller"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Insert",
             (void (TopOpeBRep_EdgesFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRep_EdgesIntersector & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRep_EdgesFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRep_EdgesIntersector & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRep_EdgesFiller::Insert),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("EI"),  py::arg("HDS"))
        .def("Face",
             (void (TopOpeBRep_EdgesFiller::*)( const Standard_Integer , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRep_EdgesFiller::*)( const Standard_Integer , const TopoDS_Shape & ) >(&TopOpeBRep_EdgesFiller::Face),
             R"#(None)#"  , py::arg("I"),  py::arg("F"))
        .def("Face",
             (const TopoDS_Shape & (TopOpeBRep_EdgesFiller::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_EdgesFiller::*)( const Standard_Integer ) const>(&TopOpeBRep_EdgesFiller::Face),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_EdgesIntersector , shared_ptr<TopOpeBRep_EdgesIntersector> >>(m.attr("TopOpeBRep_EdgesIntersector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetFaces",
             (void (TopOpeBRep_EdgesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRep_EdgesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRep_EdgesIntersector::SetFaces),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def("SetFaces",
             (void (TopOpeBRep_EdgesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Bnd_Box & , const Bnd_Box & ) ) static_cast<void (TopOpeBRep_EdgesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Bnd_Box & , const Bnd_Box & ) >(&TopOpeBRep_EdgesIntersector::SetFaces),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("B1"),  py::arg("B2"))
        .def("ForceTolerances",
             (void (TopOpeBRep_EdgesIntersector::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (TopOpeBRep_EdgesIntersector::*)( const Standard_Real , const Standard_Real ) >(&TopOpeBRep_EdgesIntersector::ForceTolerances),
             R"#(None)#"  , py::arg("Tol1"),  py::arg("Tol2"))
        .def("Dimension",
             (void (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) >(&TopOpeBRep_EdgesIntersector::Dimension),
             R"#(None)#"  , py::arg("D"))
        .def("Dimension",
             (Standard_Integer (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Integer (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::Dimension),
             R"#(set working space dimension D = 1 for E &|| W, 2 for E in F)#" )
        .def("Perform",
             (void (TopOpeBRep_EdgesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (TopOpeBRep_EdgesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean ) >(&TopOpeBRep_EdgesIntersector::Perform),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("ReduceSegments")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsEmpty",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() ) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() >(&TopOpeBRep_EdgesIntersector::IsEmpty),
             R"#(None)#" )
        .def("HasSegment",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::HasSegment),
             R"#(true if at least one intersection segment.)#" )
        .def("SameDomain",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::SameDomain),
             R"#(= mySameDomain.)#" )
        .def("Edge",
             (const TopoDS_Shape & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_EdgesIntersector::Edge),
             R"#(None)#"  , py::arg("Index"))
        .def("Curve",
             (const Geom2dAdaptor_Curve & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const) static_cast<const Geom2dAdaptor_Curve & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_EdgesIntersector::Curve),
             R"#(None)#"  , py::arg("Index"))
        .def("Face",
             (const TopoDS_Shape & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_EdgesIntersector::Face),
             R"#(None)#"  , py::arg("Index"))
        .def("Surface",
             (const BRepAdaptor_Surface & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const) static_cast<const BRepAdaptor_Surface & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_EdgesIntersector::Surface),
             R"#(None)#"  , py::arg("Index"))
        .def("SurfacesSameOriented",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::SurfacesSameOriented),
             R"#(None)#" )
        .def("FacesSameOriented",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::FacesSameOriented),
             R"#(None)#" )
        .def("ToleranceMax",
             (Standard_Real (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Real (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::ToleranceMax),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Integer (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::NbPoints),
             R"#(None)#" )
        .def("NbSegments",
             (Standard_Integer (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Integer (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::NbSegments),
             R"#(None)#" )
        .def("Dump",
             (void (TopOpeBRep_EdgesIntersector::*)( const TCollection_AsciiString & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRep_EdgesIntersector::*)( const TCollection_AsciiString & , const Standard_Integer , const Standard_Integer ) >(&TopOpeBRep_EdgesIntersector::Dump),
             R"#(None)#"  , py::arg("str"),  py::arg("ie1")=static_cast<const Standard_Integer>(0),  py::arg("ie2")=static_cast<const Standard_Integer>(0))
        .def("InitPoint",
             (void (TopOpeBRep_EdgesIntersector::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_EdgesIntersector::*)( const Standard_Boolean ) >(&TopOpeBRep_EdgesIntersector::InitPoint),
             R"#(None)#"  , py::arg("selectkeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("MorePoint",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::MorePoint),
             R"#(None)#" )
        .def("NextPoint",
             (void (TopOpeBRep_EdgesIntersector::*)() ) static_cast<void (TopOpeBRep_EdgesIntersector::*)() >(&TopOpeBRep_EdgesIntersector::NextPoint),
             R"#(None)#" )
        .def("Points",
             (const TopOpeBRep_SequenceOfPoint2d & (TopOpeBRep_EdgesIntersector::*)() const) static_cast<const TopOpeBRep_SequenceOfPoint2d & (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::Points),
             R"#(None)#" )
        .def("Point",
             (const TopOpeBRep_Point2d & (TopOpeBRep_EdgesIntersector::*)() const) static_cast<const TopOpeBRep_Point2d & (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::Point),
             R"#(None)#" )
        .def("Point",
             (const TopOpeBRep_Point2d & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const) static_cast<const TopOpeBRep_Point2d & (TopOpeBRep_EdgesIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_EdgesIntersector::Point),
             R"#(None)#"  , py::arg("I"))
        .def("ReduceSegment",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)( TopOpeBRep_Point2d & , TopOpeBRep_Point2d & , TopOpeBRep_Point2d & ) const) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)( TopOpeBRep_Point2d & , TopOpeBRep_Point2d & , TopOpeBRep_Point2d & ) const>(&TopOpeBRep_EdgesIntersector::ReduceSegment),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("Pn"))
        .def("Status1",
             (TopOpeBRep_P2Dstatus (TopOpeBRep_EdgesIntersector::*)() const) static_cast<TopOpeBRep_P2Dstatus (TopOpeBRep_EdgesIntersector::*)() const>(&TopOpeBRep_EdgesIntersector::Status1),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("Tolerances",
             []( TopOpeBRep_EdgesIntersector &self   ){ Standard_Real  tol1; Standard_Real  tol2; self.Tolerances(tol1,tol2); return std::make_tuple(tol1,tol2); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FFDumper ,opencascade::handle<TopOpeBRep_FFDumper> , Standard_Transient>>(m.attr("TopOpeBRep_FFDumper"))
    // constructors
    // custom constructors
    // methods
        .def("DumpLine",
             (void (TopOpeBRep_FFDumper::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_FFDumper::*)( const Standard_Integer ) >(&TopOpeBRep_FFDumper::DumpLine),
             R"#(None)#"  , py::arg("I"))
        .def("DumpLine",
             (void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_LineInter & ) ) static_cast<void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_LineInter & ) >(&TopOpeBRep_FFDumper::DumpLine),
             R"#(None)#"  , py::arg("L"))
        .def("DumpVP",
             (void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_VPointInter & ) ) static_cast<void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_VPointInter & ) >(&TopOpeBRep_FFDumper::DumpVP),
             R"#(None)#"  , py::arg("VP"))
        .def("DumpVP",
             (void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_VPointInter & , const Standard_Integer ) ) static_cast<void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_VPointInter & , const Standard_Integer ) >(&TopOpeBRep_FFDumper::DumpVP),
             R"#(None)#"  , py::arg("VP"),  py::arg("ISI"))
        .def("ExploreIndex",
             (Standard_Integer (TopOpeBRep_FFDumper::*)( const TopoDS_Shape & , const Standard_Integer ) const) static_cast<Standard_Integer (TopOpeBRep_FFDumper::*)( const TopoDS_Shape & , const Standard_Integer ) const>(&TopOpeBRep_FFDumper::ExploreIndex),
             R"#(None)#"  , py::arg("S"),  py::arg("ISI"))
        .def("DumpDSP",
             (void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_VPointInter & , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Boolean ) const) static_cast<void (TopOpeBRep_FFDumper::*)( const TopOpeBRep_VPointInter & , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Boolean ) const>(&TopOpeBRep_FFDumper::DumpDSP),
             R"#(None)#"  , py::arg("VP"),  py::arg("GK"),  py::arg("G"),  py::arg("newinDS"))
        .def("PFacesFillerDummy",
             (TopOpeBRep_PFacesFiller (TopOpeBRep_FFDumper::*)() const) static_cast<TopOpeBRep_PFacesFiller (TopOpeBRep_FFDumper::*)() const>(&TopOpeBRep_FFDumper::PFacesFillerDummy),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_FFDumper::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_FFDumper::*)() const>(&TopOpeBRep_FFDumper::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_FFDumper::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRep_FFDumper::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRep_FFTransitionTool , shared_ptr<TopOpeBRep_FFTransitionTool>>(m,"TopOpeBRep_FFTransitionTool");

    static_cast<py::class_<TopOpeBRep_FFTransitionTool , shared_ptr<TopOpeBRep_FFTransitionTool> >>(m.attr("TopOpeBRep_FFTransitionTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ProcessLineTransition_s",
                    (TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const Standard_Integer , const TopAbs_Orientation ) ) static_cast<TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const Standard_Integer , const TopAbs_Orientation ) >(&TopOpeBRep_FFTransitionTool::ProcessLineTransition),
                    R"#(None)#"  , py::arg("P"),  py::arg("Index"),  py::arg("EdgeOrientation"))
        .def_static("ProcessLineTransition_s",
                    (TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const TopOpeBRep_LineInter & ) ) static_cast<TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const TopOpeBRep_LineInter & ) >(&TopOpeBRep_FFTransitionTool::ProcessLineTransition),
                    R"#(None)#"  , py::arg("P"),  py::arg("L"))
        .def_static("ProcessEdgeTransition_s",
                    (TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const Standard_Integer , const TopAbs_Orientation ) ) static_cast<TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const Standard_Integer , const TopAbs_Orientation ) >(&TopOpeBRep_FFTransitionTool::ProcessEdgeTransition),
                    R"#(None)#"  , py::arg("P"),  py::arg("Index"),  py::arg("LineOrientation"))
        .def_static("ProcessFaceTransition_s",
                    (TopOpeBRepDS_Transition (*)( const TopOpeBRep_LineInter & , const Standard_Integer , const TopAbs_Orientation ) ) static_cast<TopOpeBRepDS_Transition (*)( const TopOpeBRep_LineInter & , const Standard_Integer , const TopAbs_Orientation ) >(&TopOpeBRep_FFTransitionTool::ProcessFaceTransition),
                    R"#(None)#"  , py::arg("L"),  py::arg("Index"),  py::arg("FaceOrientation"))
        .def_static("ProcessEdgeONTransition_s",
                    (TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const Standard_Integer , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopOpeBRepDS_Transition (*)( const TopOpeBRep_VPointInter & , const Standard_Integer , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRep_FFTransitionTool::ProcessEdgeONTransition),
                    R"#(compute transition on "IntPatch_Restriction line" edge <R> when crossing edge <E> of face <F> at point <VP>. VP is given on edge <E> of face <F> of index <Index> (1 or 2). <VP> has been classified by FacesFiller as TopAbs_ON an edge <R> of the other face than <F> of current (face/face) intersection. Transition depends on the orientation of E in F. This method should be provided by IntPatch_Line (NYI))#"  , py::arg("VP"),  py::arg("Index"),  py::arg("R"),  py::arg("E"),  py::arg("F"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FaceEdgeFiller , shared_ptr<TopOpeBRep_FaceEdgeFiller> >>(m.attr("TopOpeBRep_FaceEdgeFiller"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Insert",
             (void (TopOpeBRep_FaceEdgeFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRep_FaceEdgeIntersector & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRep_FaceEdgeFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRep_FaceEdgeIntersector & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRep_FaceEdgeFiller::Insert),
             R"#(None)#"  , py::arg("F"),  py::arg("E"),  py::arg("FEINT"),  py::arg("HDS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FaceEdgeIntersector , shared_ptr<TopOpeBRep_FaceEdgeIntersector> >>(m.attr("TopOpeBRep_FaceEdgeIntersector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (TopOpeBRep_FaceEdgeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRep_FaceEdgeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRep_FaceEdgeIntersector::Perform),
             R"#(None)#"  , py::arg("F"),  py::arg("E"))
        .def("IsEmpty",
             (Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)() ) static_cast<Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)() >(&TopOpeBRep_FaceEdgeIntersector::IsEmpty),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_FaceEdgeIntersector::Shape),
             R"#(returns intersected face or edge according to value of <Index> = 1 or 2)#"  , py::arg("Index"))
        .def("ForceTolerance",
             (void (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Real ) ) static_cast<void (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Real ) >(&TopOpeBRep_FaceEdgeIntersector::ForceTolerance),
             R"#(Force the tolerance values used by the next Perform(S1,S2) call.)#"  , py::arg("tol"))
        .def("Tolerance",
             (Standard_Real (TopOpeBRep_FaceEdgeIntersector::*)() const) static_cast<Standard_Real (TopOpeBRep_FaceEdgeIntersector::*)() const>(&TopOpeBRep_FaceEdgeIntersector::Tolerance),
             R"#(Return the tolerance value used in the last Perform() call If ForceTolerance() has been called, return the given value. If not, return value extracted from shapes.)#" )
        .def("NbPoints",
             (Standard_Integer (TopOpeBRep_FaceEdgeIntersector::*)() const) static_cast<Standard_Integer (TopOpeBRep_FaceEdgeIntersector::*)() const>(&TopOpeBRep_FaceEdgeIntersector::NbPoints),
             R"#(None)#" )
        .def("InitPoint",
             (void (TopOpeBRep_FaceEdgeIntersector::*)() ) static_cast<void (TopOpeBRep_FaceEdgeIntersector::*)() >(&TopOpeBRep_FaceEdgeIntersector::InitPoint),
             R"#(None)#" )
        .def("MorePoint",
             (Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)() const>(&TopOpeBRep_FaceEdgeIntersector::MorePoint),
             R"#(None)#" )
        .def("NextPoint",
             (void (TopOpeBRep_FaceEdgeIntersector::*)() ) static_cast<void (TopOpeBRep_FaceEdgeIntersector::*)() >(&TopOpeBRep_FaceEdgeIntersector::NextPoint),
             R"#(None)#" )
        .def("Value",
             (gp_Pnt (TopOpeBRep_FaceEdgeIntersector::*)() const) static_cast<gp_Pnt (TopOpeBRep_FaceEdgeIntersector::*)() const>(&TopOpeBRep_FaceEdgeIntersector::Value),
             R"#(return the 3D point of the current intersection point.)#" )
        .def("Parameter",
             (Standard_Real (TopOpeBRep_FaceEdgeIntersector::*)() const) static_cast<Standard_Real (TopOpeBRep_FaceEdgeIntersector::*)() const>(&TopOpeBRep_FaceEdgeIntersector::Parameter),
             R"#(parametre de Value() sur l'arete)#" )
        .def("UVPoint",
             (void (TopOpeBRep_FaceEdgeIntersector::*)( gp_Pnt2d & ) const) static_cast<void (TopOpeBRep_FaceEdgeIntersector::*)( gp_Pnt2d & ) const>(&TopOpeBRep_FaceEdgeIntersector::UVPoint),
             R"#(parametre de Value() sur la face)#"  , py::arg("P"))
        .def("State",
             (TopAbs_State (TopOpeBRep_FaceEdgeIntersector::*)() const) static_cast<TopAbs_State (TopOpeBRep_FaceEdgeIntersector::*)() const>(&TopOpeBRep_FaceEdgeIntersector::State),
             R"#(IN ou ON / a la face. Les points OUT ne sont pas retournes.)#" )
        .def("Transition",
             (TopOpeBRepDS_Transition (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Integer , const TopAbs_Orientation ) const) static_cast<TopOpeBRepDS_Transition (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Integer , const TopAbs_Orientation ) const>(&TopOpeBRep_FaceEdgeIntersector::Transition),
             R"#(Index = 1 transition par rapport a la face, en cheminant sur l'arete)#"  , py::arg("Index"),  py::arg("FaceOrientation"))
        .def("IsVertex",
             (Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)( const TopoDS_Shape & , const gp_Pnt & , const Standard_Real , TopoDS_Vertex & ) ) static_cast<Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)( const TopoDS_Shape & , const gp_Pnt & , const Standard_Real , TopoDS_Vertex & ) >(&TopOpeBRep_FaceEdgeIntersector::IsVertex),
             R"#(None)#"  , py::arg("S"),  py::arg("P"),  py::arg("Tol"),  py::arg("V"))
        .def("IsVertex",
             (Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Integer , TopoDS_Vertex & ) ) static_cast<Standard_Boolean (TopOpeBRep_FaceEdgeIntersector::*)( const Standard_Integer , TopoDS_Vertex & ) >(&TopOpeBRep_FaceEdgeIntersector::IsVertex),
             R"#(None)#"  , py::arg("I"),  py::arg("V"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_FaceEdgeIntersector::*)() const) static_cast<Standard_Integer (TopOpeBRep_FaceEdgeIntersector::*)() const>(&TopOpeBRep_FaceEdgeIntersector::Index),
             R"#(trace only)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FacesFiller , shared_ptr<TopOpeBRep_FacesFiller> >>(m.attr("TopOpeBRep_FacesFiller"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Insert",
             (void (TopOpeBRep_FacesFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRep_FacesIntersector & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRep_FacesIntersector & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRep_FacesFiller::Insert),
             R"#(Stores in <DS> the intersections of <S1> and <S2>.)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("FACINT"),  py::arg("HDS"))
        .def("ProcessSectionEdges",
             (void (TopOpeBRep_FacesFiller::*)() ) static_cast<void (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::ProcessSectionEdges),
             R"#(None)#" )
        .def("ChangePointClassifier",
             (TopOpeBRep_PointClassifier & (TopOpeBRep_FacesFiller::*)() ) static_cast<TopOpeBRep_PointClassifier & (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::ChangePointClassifier),
             R"#(None)#" )
        .def("LoadLine",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) >(&TopOpeBRep_FacesFiller::LoadLine),
             R"#(None)#"  , py::arg("L"))
        .def("CheckLine",
             (Standard_Boolean (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) const) static_cast<Standard_Boolean (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) const>(&TopOpeBRep_FacesFiller::CheckLine),
             R"#(None)#"  , py::arg("L"))
        .def("VP_Position",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_FacesIntersector & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_FacesIntersector & ) >(&TopOpeBRep_FacesFiller::VP_Position),
             R"#(compute position of VPoints of lines)#"  , py::arg("FACINT"))
        .def("VP_Position",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) >(&TopOpeBRep_FacesFiller::VP_Position),
             R"#(compute position of VPoints of line L)#"  , py::arg("L"))
        .def("VP_PositionOnL",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) >(&TopOpeBRep_FacesFiller::VP_PositionOnL),
             R"#(compute position of VPoints of non-restriction line L.)#"  , py::arg("L"))
        .def("VP_PositionOnR",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_LineInter & ) >(&TopOpeBRep_FacesFiller::VP_PositionOnR),
             R"#(compute position of VPoints of restriction line L.)#"  , py::arg("L"))
        .def("VP_Position",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_VPointInter & , TopOpeBRep_VPointInterClassifier & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_VPointInter & , TopOpeBRep_VPointInterClassifier & ) >(&TopOpeBRep_FacesFiller::VP_Position),
             R"#(compute position of VP with current faces, according to VP.ShapeIndex() .)#"  , py::arg("VP"),  py::arg("VPC"))
        .def("ProcessLine",
             (void (TopOpeBRep_FacesFiller::*)() ) static_cast<void (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::ProcessLine),
             R"#(Process current intersection line (set by LoadLine))#" )
        .def("ResetDSC",
             (void (TopOpeBRep_FacesFiller::*)() ) static_cast<void (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::ResetDSC),
             R"#(None)#" )
        .def("ProcessRLine",
             (void (TopOpeBRep_FacesFiller::*)() ) static_cast<void (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::ProcessRLine),
             R"#(Process current restriction line, adding restriction edge and computing face/edge interference.)#" )
        .def("FillLineVPonR",
             (void (TopOpeBRep_FacesFiller::*)() ) static_cast<void (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::FillLineVPonR),
             R"#(VP processing for restriction line and line sharing same domain with section edges : - if restriction : Adds restriction edges as section edges and compute face/edge interference. - if same domain : If line share same domain with section edges, compute parts of line IN/IN the two faces, and compute curve/point interference for VP boundaries.)#" )
        .def("FillLine",
             (void (TopOpeBRep_FacesFiller::*)() ) static_cast<void (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::FillLine),
             R"#(None)#" )
        .def("AddShapesLine",
             (void (TopOpeBRep_FacesFiller::*)() ) static_cast<void (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::AddShapesLine),
             R"#(compute 3d curve, pcurves and face/curve interferences for current NDSC. Add them to the DS.)#" )
        .def("GetESL",
             (void (TopOpeBRep_FacesFiller::*)( NCollection_List<TopoDS_Shape> & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRep_FacesFiller::GetESL),
             R"#(Get map <mapES > of restriction edges having parts IN one of the 2 faces.)#"  , py::arg("LES"))
        .def("ProcessVPR",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_FacesFiller & , const TopOpeBRep_VPointInter & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_FacesFiller & , const TopOpeBRep_VPointInter & ) >(&TopOpeBRep_FacesFiller::ProcessVPR),
             R"#(calling the followings ProcessVPIonR and ProcessVPonR.)#"  , py::arg("FF"),  py::arg("VP"))
        .def("ProcessVPIonR",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_VPointInterIterator & , const TopOpeBRepDS_Transition & , const TopoDS_Shape & , const Standard_Integer ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_VPointInterIterator & , const TopOpeBRepDS_Transition & , const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRep_FacesFiller::ProcessVPIonR),
             R"#(processing ProcessVPonR for VPI.)#"  , py::arg("VPI"),  py::arg("trans1"),  py::arg("F1"),  py::arg("ShapeIndex"))
        .def("ProcessVPonR",
             (void (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const TopOpeBRepDS_Transition & , const TopoDS_Shape & , const Standard_Integer ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const TopOpeBRepDS_Transition & , const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRep_FacesFiller::ProcessVPonR),
             R"#(adds <VP>'s geometric point (if not stored) and computes (curve or edge)/(point or vertex) interference.)#"  , py::arg("VP"),  py::arg("trans1"),  py::arg("F1"),  py::arg("ShapeIndex"))
        .def("ProcessVPonclosingR",
             (void (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const TopoDS_Shape & , const Standard_Integer , const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Boolean , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const TopoDS_Shape & , const Standard_Integer , const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Boolean , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRep_FacesFiller::ProcessVPonclosingR),
             R"#(VP processing on closing arc.)#"  , py::arg("VP"),  py::arg("F1"),  py::arg("ShapeIndex"),  py::arg("transEdge"),  py::arg("PVKind"),  py::arg("PVIndex"),  py::arg("EPIfound"),  py::arg("IEPI"))
        .def("ProcessVPondgE",
             (Standard_Boolean (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const Standard_Integer , TopOpeBRepDS_Kind & , Standard_Integer & , Standard_Boolean & , opencascade::handle<TopOpeBRepDS_Interference> & , Standard_Boolean & , opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<Standard_Boolean (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const Standard_Integer , TopOpeBRepDS_Kind & , Standard_Integer & , Standard_Boolean & , opencascade::handle<TopOpeBRepDS_Interference> & , Standard_Boolean & , opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRep_FacesFiller::ProcessVPondgE),
             R"#(VP processing on degenerated arc.)#"  , py::arg("VP"),  py::arg("ShapeIndex"),  py::arg("PVKind"),  py::arg("PVIndex"),  py::arg("EPIfound"),  py::arg("IEPI"),  py::arg("CPIfound"),  py::arg("ICPI"))
        .def("ProcessVPInotonR",
             (void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_VPointInterIterator & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( TopOpeBRep_VPointInterIterator & ) >(&TopOpeBRep_FacesFiller::ProcessVPInotonR),
             R"#(processing ProcessVPnotonR for VPI.)#"  , py::arg("VPI"))
        .def("ProcessVPnotonR",
             (void (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & ) >(&TopOpeBRep_FacesFiller::ProcessVPnotonR),
             R"#(adds <VP>'s geometrical point to the DS (if not stored) and computes curve point interference.)#"  , py::arg("VP"))
        .def("GetGeometry",
             (Standard_Boolean (TopOpeBRep_FacesFiller::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , const TopOpeBRep_VPointInter & , Standard_Integer & , TopOpeBRepDS_Kind & ) ) static_cast<Standard_Boolean (TopOpeBRep_FacesFiller::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , const TopOpeBRep_VPointInter & , Standard_Integer & , TopOpeBRepDS_Kind & ) >(&TopOpeBRep_FacesFiller::GetGeometry),
             R"#(Get the geometry of a DS point <DSP>. Search for it with ScanInterfList (previous method). if found, set <G> to the geometry of the interference found. else, add the point <DSP> in the <DS> and set <G> to the value of the new geometry such created. returns the value of ScanInterfList().)#"  , py::arg("IT"),  py::arg("VP"),  py::arg("G"),  py::arg("K"))
        .def("MakeGeometry",
             (Standard_Integer (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const Standard_Integer , TopOpeBRepDS_Kind & ) ) static_cast<Standard_Integer (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , const Standard_Integer , TopOpeBRepDS_Kind & ) >(&TopOpeBRep_FacesFiller::MakeGeometry),
             R"#(None)#"  , py::arg("VP"),  py::arg("ShapeIndex"),  py::arg("K"))
        .def("StoreCurveInterference",
             (void (TopOpeBRep_FacesFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRep_FacesFiller::StoreCurveInterference),
             R"#(Add interference <I> to list myDSCIL. on a given line, at first call, add a new DS curve.)#"  , py::arg("I"))
        .def("GetFFGeometry",
             (Standard_Boolean (TopOpeBRep_FacesFiller::*)( const TopOpeBRepDS_Point & , TopOpeBRepDS_Kind & , Standard_Integer & ) const) static_cast<Standard_Boolean (TopOpeBRep_FacesFiller::*)( const TopOpeBRepDS_Point & , TopOpeBRepDS_Kind & , Standard_Integer & ) const>(&TopOpeBRep_FacesFiller::GetFFGeometry),
             R"#(search for G = geometry of Point which is identical to <DSP> among the DS Points created in the CURRENT face/face intersection ( current Insert() call).)#"  , py::arg("DSP"),  py::arg("K"),  py::arg("G"))
        .def("GetFFGeometry",
             (Standard_Boolean (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , TopOpeBRepDS_Kind & , Standard_Integer & ) const) static_cast<Standard_Boolean (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_VPointInter & , TopOpeBRepDS_Kind & , Standard_Integer & ) const>(&TopOpeBRep_FacesFiller::GetFFGeometry),
             R"#(search for G = geometry of Point which is identical to <VP> among the DS Points created in the CURRENT face/face intersection ( current Insert() call).)#"  , py::arg("VP"),  py::arg("K"),  py::arg("G"))
        .def("ChangeFacesIntersector",
             (TopOpeBRep_FacesIntersector & (TopOpeBRep_FacesFiller::*)() ) static_cast<TopOpeBRep_FacesIntersector & (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::ChangeFacesIntersector),
             R"#(None)#" )
        .def("HDataStructure",
             (opencascade::handle<TopOpeBRepDS_HDataStructure> (TopOpeBRep_FacesFiller::*)() ) static_cast<opencascade::handle<TopOpeBRepDS_HDataStructure> (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::HDataStructure),
             R"#(None)#" )
        .def("ChangeDataStructure",
             (TopOpeBRepDS_DataStructure & (TopOpeBRep_FacesFiller::*)() ) static_cast<TopOpeBRepDS_DataStructure & (TopOpeBRep_FacesFiller::*)() >(&TopOpeBRep_FacesFiller::ChangeDataStructure),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (TopOpeBRep_FacesFiller::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (TopOpeBRep_FacesFiller::*)( const Standard_Integer ) const>(&TopOpeBRep_FacesFiller::Face),
             R"#(None)#"  , py::arg("I"))
        .def("FaceFaceTransition",
             (const TopOpeBRepDS_Transition & (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_LineInter & , const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Transition & (TopOpeBRep_FacesFiller::*)( const TopOpeBRep_LineInter & , const Standard_Integer ) const>(&TopOpeBRep_FacesFiller::FaceFaceTransition),
             R"#(None)#"  , py::arg("L"),  py::arg("I"))
        .def("FaceFaceTransition",
             (const TopOpeBRepDS_Transition & (TopOpeBRep_FacesFiller::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Transition & (TopOpeBRep_FacesFiller::*)( const Standard_Integer ) const>(&TopOpeBRep_FacesFiller::FaceFaceTransition),
             R"#(None)#"  , py::arg("I"))
        .def("PFacesIntersectorDummy",
             (TopOpeBRep_PFacesIntersector (TopOpeBRep_FacesFiller::*)() const) static_cast<TopOpeBRep_PFacesIntersector (TopOpeBRep_FacesFiller::*)() const>(&TopOpeBRep_FacesFiller::PFacesIntersectorDummy),
             R"#(None)#" )
        .def("PDataStructureDummy",
             (TopOpeBRepDS_PDataStructure (TopOpeBRep_FacesFiller::*)() const) static_cast<TopOpeBRepDS_PDataStructure (TopOpeBRep_FacesFiller::*)() const>(&TopOpeBRep_FacesFiller::PDataStructureDummy),
             R"#(None)#" )
        .def("PLineInterDummy",
             (TopOpeBRep_PLineInter (TopOpeBRep_FacesFiller::*)() const) static_cast<TopOpeBRep_PLineInter (TopOpeBRep_FacesFiller::*)() const>(&TopOpeBRep_FacesFiller::PLineInterDummy),
             R"#(None)#" )
        .def("SetTraceIndex",
             (void (TopOpeBRep_FacesFiller::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRep_FacesFiller::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRep_FacesFiller::SetTraceIndex),
             R"#(None)#"  , py::arg("exF1"),  py::arg("exF2"))
    // methods using call by reference i.s.o. return
        .def("GetTraceIndex",
             []( TopOpeBRep_FacesFiller &self   ){ Standard_Integer  exF1; Standard_Integer  exF2; self.GetTraceIndex(exF1,exF2); return std::make_tuple(exF1,exF2); },
             R"#(None)#" )
    // static methods
        .def_static("LSameDomainERL_s",
                    (Standard_Boolean (*)( const TopOpeBRep_LineInter & ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopOpeBRep_LineInter & ,  const NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRep_FacesFiller::LSameDomainERL),
                    R"#(Returns <True> if <L> shares a same geometric domain with at least one of the section edges of <ERL>.)#"  , py::arg("L"),  py::arg("ERL"))
        .def_static("IsVPtransLok_s",
                    (Standard_Boolean (*)( const TopOpeBRep_LineInter & , const Standard_Integer , const Standard_Integer , TopOpeBRepDS_Transition & ) ) static_cast<Standard_Boolean (*)( const TopOpeBRep_LineInter & , const Standard_Integer , const Standard_Integer , TopOpeBRepDS_Transition & ) >(&TopOpeBRep_FacesFiller::IsVPtransLok),
                    R"#(Computes the transition <T> of the VPoint <iVP> on the edge of <SI12>. Returns <False> if the status is unknown.)#"  , py::arg("L"),  py::arg("iVP"),  py::arg("SI12"),  py::arg("T"))
        .def_static("TransvpOK_s",
                    (Standard_Boolean (*)( const TopOpeBRep_LineInter & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const TopOpeBRep_LineInter & , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRep_FacesFiller::TransvpOK),
                    R"#(Computes transition on line for VP<iVP> on edge restriction of <SI>. If <isINOUT> : returns <true> if transition computed is IN/OUT else : returns <true> if transition computed is OUT/IN.)#"  , py::arg("L"),  py::arg("iVP"),  py::arg("SI"),  py::arg("isINOUT"))
        .def_static("VPParamOnER_s",
                    (Standard_Real (*)( const TopOpeBRep_VPointInter & , const TopOpeBRep_LineInter & ) ) static_cast<Standard_Real (*)( const TopOpeBRep_VPointInter & , const TopOpeBRep_LineInter & ) >(&TopOpeBRep_FacesFiller::VPParamOnER),
                    R"#(Returns parameter u of vp on the restriction edge.)#"  , py::arg("vp"),  py::arg("Lrest"))
        .def_static("EqualpPonR_s",
                    (Standard_Boolean (*)( const TopOpeBRep_LineInter & , const TopOpeBRep_VPointInter & , const TopOpeBRep_VPointInter & ) ) static_cast<Standard_Boolean (*)( const TopOpeBRep_LineInter & , const TopOpeBRep_VPointInter & , const TopOpeBRep_VPointInter & ) >(&TopOpeBRep_FacesFiller::EqualpPonR),
                    R"#(None)#"  , py::arg("Lrest"),  py::arg("VP1"),  py::arg("VP2"))
    // static methods using call by reference i.s.o. return
        .def_static("Lminmax_s",
                    []( const TopOpeBRep_LineInter & L ){ Standard_Real  pmin; Standard_Real  pmax; TopOpeBRep_FacesFiller::Lminmax(L,pmin,pmax); return std::make_tuple(pmin,pmax); },
                    R"#(Computes <pmin> and <pmax> the upper and lower bounds of <L> enclosing all vpoints.)#"  , py::arg("L"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FacesIntersector , shared_ptr<TopOpeBRep_FacesIntersector> >>(m.attr("TopOpeBRep_FacesIntersector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (TopOpeBRep_FacesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRep_FacesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRep_FacesIntersector::Perform),
             R"#(Computes the intersection of faces S1 and S2.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Perform",
             (void (TopOpeBRep_FacesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Bnd_Box & , const Bnd_Box & ) ) static_cast<void (TopOpeBRep_FacesIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Bnd_Box & , const Bnd_Box & ) >(&TopOpeBRep_FacesIntersector::Perform),
             R"#(Computes the intersection of faces S1 and S2.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("B1"),  py::arg("B2"))
        .def("IsEmpty",
             (Standard_Boolean (TopOpeBRep_FacesIntersector::*)() ) static_cast<Standard_Boolean (TopOpeBRep_FacesIntersector::*)() >(&TopOpeBRep_FacesIntersector::IsEmpty),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const>(&TopOpeBRep_FacesIntersector::IsDone),
             R"#(None)#" )
        .def("SameDomain",
             (Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const>(&TopOpeBRep_FacesIntersector::SameDomain),
             R"#(Returns True if Perform() arguments are two faces with the same surface.)#" )
        .def("Face",
             (const TopoDS_Shape & (TopOpeBRep_FacesIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_FacesIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_FacesIntersector::Face),
             R"#(returns first or second intersected face.)#"  , py::arg("Index"))
        .def("SurfacesSameOriented",
             (Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const>(&TopOpeBRep_FacesIntersector::SurfacesSameOriented),
             R"#(Returns True if Perform() arguments are two faces SameDomain() and normals on both side. Raise if SameDomain is False)#" )
        .def("IsRestriction",
             (Standard_Boolean (TopOpeBRep_FacesIntersector::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRep_FacesIntersector::*)( const TopoDS_Shape & ) const>(&TopOpeBRep_FacesIntersector::IsRestriction),
             R"#(returns true if edge <E> is found as same as the edge associated with a RESTRICTION line.)#"  , py::arg("E"))
        .def("Restrictions",
             (const TopTools_IndexedMapOfShape & (TopOpeBRep_FacesIntersector::*)() const) static_cast<const TopTools_IndexedMapOfShape & (TopOpeBRep_FacesIntersector::*)() const>(&TopOpeBRep_FacesIntersector::Restrictions),
             R"#(returns the map of edges found as TopeBRepBRep_RESTRICTION)#" )
        .def("PrepareLines",
             (void (TopOpeBRep_FacesIntersector::*)() ) static_cast<void (TopOpeBRep_FacesIntersector::*)() >(&TopOpeBRep_FacesIntersector::PrepareLines),
             R"#(None)#" )
        .def("Lines",
             (opencascade::handle<TopOpeBRep_HArray1OfLineInter> (TopOpeBRep_FacesIntersector::*)() ) static_cast<opencascade::handle<TopOpeBRep_HArray1OfLineInter> (TopOpeBRep_FacesIntersector::*)() >(&TopOpeBRep_FacesIntersector::Lines),
             R"#(None)#" )
        .def("NbLines",
             (Standard_Integer (TopOpeBRep_FacesIntersector::*)() const) static_cast<Standard_Integer (TopOpeBRep_FacesIntersector::*)() const>(&TopOpeBRep_FacesIntersector::NbLines),
             R"#(None)#" )
        .def("InitLine",
             (void (TopOpeBRep_FacesIntersector::*)() ) static_cast<void (TopOpeBRep_FacesIntersector::*)() >(&TopOpeBRep_FacesIntersector::InitLine),
             R"#(None)#" )
        .def("MoreLine",
             (Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_FacesIntersector::*)() const>(&TopOpeBRep_FacesIntersector::MoreLine),
             R"#(None)#" )
        .def("NextLine",
             (void (TopOpeBRep_FacesIntersector::*)() ) static_cast<void (TopOpeBRep_FacesIntersector::*)() >(&TopOpeBRep_FacesIntersector::NextLine),
             R"#(None)#" )
        .def("CurrentLine",
             (TopOpeBRep_LineInter & (TopOpeBRep_FacesIntersector::*)() ) static_cast<TopOpeBRep_LineInter & (TopOpeBRep_FacesIntersector::*)() >(&TopOpeBRep_FacesIntersector::CurrentLine),
             R"#(None)#" )
        .def("CurrentLineIndex",
             (Standard_Integer (TopOpeBRep_FacesIntersector::*)() const) static_cast<Standard_Integer (TopOpeBRep_FacesIntersector::*)() const>(&TopOpeBRep_FacesIntersector::CurrentLineIndex),
             R"#(None)#" )
        .def("ChangeLine",
             (TopOpeBRep_LineInter & (TopOpeBRep_FacesIntersector::*)( const Standard_Integer ) ) static_cast<TopOpeBRep_LineInter & (TopOpeBRep_FacesIntersector::*)( const Standard_Integer ) >(&TopOpeBRep_FacesIntersector::ChangeLine),
             R"#(None)#"  , py::arg("IL"))
        .def("ForceTolerances",
             (void (TopOpeBRep_FacesIntersector::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (TopOpeBRep_FacesIntersector::*)( const Standard_Real , const Standard_Real ) >(&TopOpeBRep_FacesIntersector::ForceTolerances),
             R"#(Force the tolerance values used by the next Perform(S1,S2) call.)#"  , py::arg("tolarc"),  py::arg("toltang"))
    // methods using call by reference i.s.o. return
        .def("GetTolerances",
             []( TopOpeBRep_FacesIntersector &self   ){ Standard_Real  tolarc; Standard_Real  toltang; self.GetTolerances(tolarc,toltang); return std::make_tuple(tolarc,toltang); },
             R"#(Return the tolerance values used in the last Perform() call If ForceTolerances() has been called, return the given values. If not, return values extracted from shapes.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRep_GeomTool , shared_ptr<TopOpeBRep_GeomTool>>(m,"TopOpeBRep_GeomTool");

    static_cast<py::class_<TopOpeBRep_GeomTool , shared_ptr<TopOpeBRep_GeomTool> >>(m.attr("TopOpeBRep_GeomTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeCurves_s",
                    (void (*)( const Standard_Real , const Standard_Real , const TopOpeBRep_LineInter & , const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRepDS_Curve & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const TopOpeBRep_LineInter & , const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRepDS_Curve & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & ) >(&TopOpeBRep_GeomTool::MakeCurves),
                    R"#(Make the DS curve <C> and the pcurves <PC1,PC2> from intersection line <L> lying on shapes <S1,S2>. <min,max> = <L> bounds)#"  , py::arg("min"),  py::arg("max"),  py::arg("L"),  py::arg("S1"),  py::arg("S2"),  py::arg("C"),  py::arg("PC1"),  py::arg("PC2"))
        .def_static("MakeCurve_s",
                    (void (*)( const Standard_Real , const Standard_Real , const TopOpeBRep_LineInter & , opencascade::handle<Geom_Curve> & ) ) static_cast<void (*)( const Standard_Real , const Standard_Real , const TopOpeBRep_LineInter & , opencascade::handle<Geom_Curve> & ) >(&TopOpeBRep_GeomTool::MakeCurve),
                    R"#(None)#"  , py::arg("min"),  py::arg("max"),  py::arg("L"),  py::arg("C"))
        .def_static("MakeBSpline1fromWALKING3d_s",
                    (opencascade::handle<Geom_Curve> (*)( const TopOpeBRep_LineInter & ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const TopOpeBRep_LineInter & ) >(&TopOpeBRep_GeomTool::MakeBSpline1fromWALKING3d),
                    R"#(None)#"  , py::arg("L"))
        .def_static("MakeBSpline1fromWALKING2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const TopOpeBRep_LineInter & , const Standard_Integer ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopOpeBRep_LineInter & , const Standard_Integer ) >(&TopOpeBRep_GeomTool::MakeBSpline1fromWALKING2d),
                    R"#(None)#"  , py::arg("L"),  py::arg("SI"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_HArray1OfLineInter ,opencascade::handle<TopOpeBRep_HArray1OfLineInter> , TopOpeBRep_Array1OfLineInter, Standard_Transient>>(m.attr("TopOpeBRep_HArray1OfLineInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const TopOpeBRep_LineInter & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TopOpeBRep_LineInter> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TopOpeBRep_Array1OfLineInter & (TopOpeBRep_HArray1OfLineInter::*)() const) static_cast<const TopOpeBRep_Array1OfLineInter & (TopOpeBRep_HArray1OfLineInter::*)() const>(&TopOpeBRep_HArray1OfLineInter::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TopOpeBRep_Array1OfLineInter & (TopOpeBRep_HArray1OfLineInter::*)() ) static_cast<TopOpeBRep_Array1OfLineInter & (TopOpeBRep_HArray1OfLineInter::*)() >(&TopOpeBRep_HArray1OfLineInter::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_HArray1OfLineInter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_HArray1OfLineInter::*)() const>(&TopOpeBRep_HArray1OfLineInter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_HArray1OfLineInter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRep_HArray1OfLineInter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_HArray1OfVPointInter ,opencascade::handle<TopOpeBRep_HArray1OfVPointInter> , TopOpeBRep_Array1OfVPointInter, Standard_Transient>>(m.attr("TopOpeBRep_HArray1OfVPointInter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const TopOpeBRep_VPointInter & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TopOpeBRep_VPointInter> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TopOpeBRep_Array1OfVPointInter & (TopOpeBRep_HArray1OfVPointInter::*)() const) static_cast<const TopOpeBRep_Array1OfVPointInter & (TopOpeBRep_HArray1OfVPointInter::*)() const>(&TopOpeBRep_HArray1OfVPointInter::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TopOpeBRep_Array1OfVPointInter & (TopOpeBRep_HArray1OfVPointInter::*)() ) static_cast<TopOpeBRep_Array1OfVPointInter & (TopOpeBRep_HArray1OfVPointInter::*)() >(&TopOpeBRep_HArray1OfVPointInter::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_HArray1OfVPointInter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_HArray1OfVPointInter::*)() const>(&TopOpeBRep_HArray1OfVPointInter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_HArray1OfVPointInter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRep_HArray1OfVPointInter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_Hctxee2d ,opencascade::handle<TopOpeBRep_Hctxee2d> , Standard_Transient>>(m.attr("TopOpeBRep_Hctxee2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetEdges",
             (void (TopOpeBRep_Hctxee2d::*)( const TopoDS_Edge & , const TopoDS_Edge & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & ) ) static_cast<void (TopOpeBRep_Hctxee2d::*)( const TopoDS_Edge & , const TopoDS_Edge & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & ) >(&TopOpeBRep_Hctxee2d::SetEdges),
             R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("BAS1"),  py::arg("BAS2"))
        .def("Edge",
             (const TopoDS_Shape & (TopOpeBRep_Hctxee2d::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_Hctxee2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Hctxee2d::Edge),
             R"#(None)#"  , py::arg("I"))
        .def("Curve",
             (const Geom2dAdaptor_Curve & (TopOpeBRep_Hctxee2d::*)( const Standard_Integer ) const) static_cast<const Geom2dAdaptor_Curve & (TopOpeBRep_Hctxee2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Hctxee2d::Curve),
             R"#(None)#"  , py::arg("I"))
        .def("Domain",
             (const IntRes2d_Domain & (TopOpeBRep_Hctxee2d::*)( const Standard_Integer ) const) static_cast<const IntRes2d_Domain & (TopOpeBRep_Hctxee2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Hctxee2d::Domain),
             R"#(None)#"  , py::arg("I"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxee2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxee2d::*)() const>(&TopOpeBRep_Hctxee2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_Hctxee2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRep_Hctxee2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_Hctxff2d ,opencascade::handle<TopOpeBRep_Hctxff2d> , Standard_Transient>>(m.attr("TopOpeBRep_Hctxff2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetFaces",
             (void (TopOpeBRep_Hctxff2d::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (TopOpeBRep_Hctxff2d::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&TopOpeBRep_Hctxff2d::SetFaces),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def("SetHSurfaces",
             (void (TopOpeBRep_Hctxff2d::*)( const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<BRepAdaptor_HSurface> & ) ) static_cast<void (TopOpeBRep_Hctxff2d::*)( const opencascade::handle<BRepAdaptor_HSurface> & , const opencascade::handle<BRepAdaptor_HSurface> & ) >(&TopOpeBRep_Hctxff2d::SetHSurfaces),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("SetTolerances",
             (void (TopOpeBRep_Hctxff2d::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (TopOpeBRep_Hctxff2d::*)( const Standard_Real , const Standard_Real ) >(&TopOpeBRep_Hctxff2d::SetTolerances),
             R"#(None)#"  , py::arg("Tol1"),  py::arg("Tol2"))
        .def("GetMaxTolerance",
             (Standard_Real (TopOpeBRep_Hctxff2d::*)() const) static_cast<Standard_Real (TopOpeBRep_Hctxff2d::*)() const>(&TopOpeBRep_Hctxff2d::GetMaxTolerance),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (TopOpeBRep_Hctxff2d::*)( const Standard_Integer ) const) static_cast<const TopoDS_Face & (TopOpeBRep_Hctxff2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Hctxff2d::Face),
             R"#(None)#"  , py::arg("I"))
        .def("HSurface",
             (opencascade::handle<BRepAdaptor_HSurface> (TopOpeBRep_Hctxff2d::*)( const Standard_Integer ) const) static_cast<opencascade::handle<BRepAdaptor_HSurface> (TopOpeBRep_Hctxff2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Hctxff2d::HSurface),
             R"#(None)#"  , py::arg("I"))
        .def("SurfacesSameOriented",
             (Standard_Boolean (TopOpeBRep_Hctxff2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Hctxff2d::*)() const>(&TopOpeBRep_Hctxff2d::SurfacesSameOriented),
             R"#(None)#" )
        .def("FacesSameOriented",
             (Standard_Boolean (TopOpeBRep_Hctxff2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Hctxff2d::*)() const>(&TopOpeBRep_Hctxff2d::FacesSameOriented),
             R"#(None)#" )
        .def("FaceSameOrientedWithRef",
             (Standard_Boolean (TopOpeBRep_Hctxff2d::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRep_Hctxff2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Hctxff2d::FaceSameOrientedWithRef),
             R"#(None)#"  , py::arg("I"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxff2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxff2d::*)() const>(&TopOpeBRep_Hctxff2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetTolerances",
             []( TopOpeBRep_Hctxff2d &self   ){ Standard_Real  Tol1; Standard_Real  Tol2; self.GetTolerances(Tol1,Tol2); return std::make_tuple(Tol1,Tol2); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_Hctxff2d::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRep_Hctxff2d::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_LineInter , shared_ptr<TopOpeBRep_LineInter> >>(m.attr("TopOpeBRep_LineInter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetLine",
             (void (TopOpeBRep_LineInter::*)( const opencascade::handle<IntPatch_Line> & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & ) ) static_cast<void (TopOpeBRep_LineInter::*)( const opencascade::handle<IntPatch_Line> & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & ) >(&TopOpeBRep_LineInter::SetLine),
             R"#(None)#"  , py::arg("L"),  py::arg("S1"),  py::arg("S2"))
        .def("SetFaces",
             (void (TopOpeBRep_LineInter::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (TopOpeBRep_LineInter::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&TopOpeBRep_LineInter::SetFaces),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def("TypeLineCurve",
             (TopOpeBRep_TypeLineCurve (TopOpeBRep_LineInter::*)() const) static_cast<TopOpeBRep_TypeLineCurve (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::TypeLineCurve),
             R"#(None)#" )
        .def("NbVPoint",
             (Standard_Integer (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::NbVPoint),
             R"#(None)#" )
        .def("VPoint",
             (const TopOpeBRep_VPointInter & (TopOpeBRep_LineInter::*)( const Standard_Integer ) const) static_cast<const TopOpeBRep_VPointInter & (TopOpeBRep_LineInter::*)( const Standard_Integer ) const>(&TopOpeBRep_LineInter::VPoint),
             R"#(None)#"  , py::arg("I"))
        .def("ChangeVPoint",
             (TopOpeBRep_VPointInter & (TopOpeBRep_LineInter::*)( const Standard_Integer ) ) static_cast<TopOpeBRep_VPointInter & (TopOpeBRep_LineInter::*)( const Standard_Integer ) >(&TopOpeBRep_LineInter::ChangeVPoint),
             R"#(None)#"  , py::arg("I"))
        .def("SetINL",
             (void (TopOpeBRep_LineInter::*)() ) static_cast<void (TopOpeBRep_LineInter::*)() >(&TopOpeBRep_LineInter::SetINL),
             R"#(None)#" )
        .def("INL",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::INL),
             R"#(None)#" )
        .def("SetIsVClosed",
             (void (TopOpeBRep_LineInter::*)() ) static_cast<void (TopOpeBRep_LineInter::*)() >(&TopOpeBRep_LineInter::SetIsVClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::IsVClosed),
             R"#(None)#" )
        .def("SetOK",
             (void (TopOpeBRep_LineInter::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_LineInter::*)( const Standard_Boolean ) >(&TopOpeBRep_LineInter::SetOK),
             R"#(None)#"  , py::arg("B"))
        .def("OK",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::OK),
             R"#(None)#" )
        .def("SetHasVPonR",
             (void (TopOpeBRep_LineInter::*)() ) static_cast<void (TopOpeBRep_LineInter::*)() >(&TopOpeBRep_LineInter::SetHasVPonR),
             R"#(None)#" )
        .def("HasVPonR",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::HasVPonR),
             R"#(None)#" )
        .def("SetVPBounds",
             (void (TopOpeBRep_LineInter::*)() ) static_cast<void (TopOpeBRep_LineInter::*)() >(&TopOpeBRep_LineInter::SetVPBounds),
             R"#(None)#" )
        .def("IsPeriodic",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::IsPeriodic),
             R"#(None)#" )
        .def("Period",
             (Standard_Real (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Real (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::Period),
             R"#(None)#" )
        .def("HasVInternal",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() ) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() >(&TopOpeBRep_LineInter::HasVInternal),
             R"#(None)#" )
        .def("NbWPoint",
             (Standard_Integer (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::NbWPoint),
             R"#(None)#" )
        .def("WPoint",
             (const TopOpeBRep_WPointInter & (TopOpeBRep_LineInter::*)( const Standard_Integer ) ) static_cast<const TopOpeBRep_WPointInter & (TopOpeBRep_LineInter::*)( const Standard_Integer ) >(&TopOpeBRep_LineInter::WPoint),
             R"#(None)#"  , py::arg("I"))
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::TransitionOnS1),
             R"#(None)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::TransitionOnS2),
             R"#(None)#" )
        .def("SituationS1",
             (IntSurf_Situation (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_Situation (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::SituationS1),
             R"#(None)#" )
        .def("SituationS2",
             (IntSurf_Situation (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_Situation (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::SituationS2),
             R"#(None)#" )
        .def("Curve",
             (opencascade::handle<Geom_Curve> (TopOpeBRep_LineInter::*)() const) static_cast<opencascade::handle<Geom_Curve> (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::Curve),
             R"#(None)#" )
        .def("Curve",
             (opencascade::handle<Geom_Curve> (TopOpeBRep_LineInter::*)( const Standard_Real , const Standard_Real ) const) static_cast<opencascade::handle<Geom_Curve> (TopOpeBRep_LineInter::*)( const Standard_Real , const Standard_Real ) const>(&TopOpeBRep_LineInter::Curve),
             R"#(None)#"  , py::arg("parmin"),  py::arg("parmax"))
        .def("Arc",
             (const TopoDS_Shape & (TopOpeBRep_LineInter::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::Arc),
             R"#(returns the edge of a RESTRICTION line (or a null edge).)#" )
        .def("ArcIsEdge",
             (Standard_Boolean (TopOpeBRep_LineInter::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)( const Standard_Integer ) const>(&TopOpeBRep_LineInter::ArcIsEdge),
             R"#(returns true if Arc() edge (of a RESTRICTION line) is an edge of the original face <Index> (1 or 2).)#"  , py::arg("I"))
        .def("LineW",
             (const opencascade::handle<IntPatch_WLine> & (TopOpeBRep_LineInter::*)() const) static_cast<const opencascade::handle<IntPatch_WLine> & (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::LineW),
             R"#(None)#" )
        .def("LineG",
             (const opencascade::handle<IntPatch_GLine> & (TopOpeBRep_LineInter::*)() const) static_cast<const opencascade::handle<IntPatch_GLine> & (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::LineG),
             R"#(None)#" )
        .def("LineR",
             (const opencascade::handle<IntPatch_RLine> & (TopOpeBRep_LineInter::*)() const) static_cast<const opencascade::handle<IntPatch_RLine> & (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::LineR),
             R"#(None)#" )
        .def("HasFirstPoint",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::HasFirstPoint),
             R"#(None)#" )
        .def("HasLastPoint",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::HasLastPoint),
             R"#(None)#" )
        .def("ComputeFaceFaceTransition",
             (void (TopOpeBRep_LineInter::*)() ) static_cast<void (TopOpeBRep_LineInter::*)() >(&TopOpeBRep_LineInter::ComputeFaceFaceTransition),
             R"#(None)#" )
        .def("FaceFaceTransition",
             (const TopOpeBRepDS_Transition & (TopOpeBRep_LineInter::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Transition & (TopOpeBRep_LineInter::*)( const Standard_Integer ) const>(&TopOpeBRep_LineInter::FaceFaceTransition),
             R"#(None)#"  , py::arg("I"))
        .def("Index",
             (void (TopOpeBRep_LineInter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_LineInter::*)( const Standard_Integer ) >(&TopOpeBRep_LineInter::Index),
             R"#(None)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::Index),
             R"#(None)#" )
        .def("DumpType",
             (void (TopOpeBRep_LineInter::*)() const) static_cast<void (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::DumpType),
             R"#(None)#" )
        .def("DumpVPoint",
             (void (TopOpeBRep_LineInter::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<void (TopOpeBRep_LineInter::*)( const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRep_LineInter::DumpVPoint),
             R"#(None)#"  , py::arg("I"),  py::arg("s1"),  py::arg("s2"))
        .def("DumpBipoint",
             (void (TopOpeBRep_LineInter::*)( const TopOpeBRep_Bipoint & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const) static_cast<void (TopOpeBRep_LineInter::*)( const TopOpeBRep_Bipoint & , const TCollection_AsciiString & , const TCollection_AsciiString & ) const>(&TopOpeBRep_LineInter::DumpBipoint),
             R"#(None)#"  , py::arg("B"),  py::arg("s1"),  py::arg("s2"))
        .def("SetTraceIndex",
             (void (TopOpeBRep_LineInter::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRep_LineInter::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRep_LineInter::SetTraceIndex),
             R"#(None)#"  , py::arg("exF1"),  py::arg("exF2"))
        .def("DumpLineTransitions",
             (Standard_OStream & (TopOpeBRep_LineInter::*)( std::ostream & ) const) static_cast<Standard_OStream & (TopOpeBRep_LineInter::*)( std::ostream & ) const>(&TopOpeBRep_LineInter::DumpLineTransitions),
             R"#(None)#"  , py::arg("OS"))
        .def("SetFaces",
             (void (TopOpeBRep_LineInter::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (TopOpeBRep_LineInter::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&TopOpeBRep_LineInter::SetFaces),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def("TypeLineCurve",
             (TopOpeBRep_TypeLineCurve (TopOpeBRep_LineInter::*)() const) static_cast<TopOpeBRep_TypeLineCurve (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::TypeLineCurve),
             R"#(None)#" )
        .def("NbVPoint",
             (Standard_Integer (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::NbVPoint),
             R"#(None)#" )
        .def("INL",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::INL),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::IsVClosed),
             R"#(None)#" )
        .def("HasVPonR",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::HasVPonR),
             R"#(None)#" )
        .def("TransitionOnS1",
             (IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::TransitionOnS1),
             R"#(None)#" )
        .def("TransitionOnS2",
             (IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_TypeTrans (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::TransitionOnS2),
             R"#(None)#" )
        .def("SituationS1",
             (IntSurf_Situation (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_Situation (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::SituationS1),
             R"#(None)#" )
        .def("SituationS2",
             (IntSurf_Situation (TopOpeBRep_LineInter::*)() const) static_cast<IntSurf_Situation (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::SituationS2),
             R"#(None)#" )
        .def("LineW",
             (const opencascade::handle<IntPatch_WLine> & (TopOpeBRep_LineInter::*)() const) static_cast<const opencascade::handle<IntPatch_WLine> & (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::LineW),
             R"#(None)#" )
        .def("LineG",
             (const opencascade::handle<IntPatch_GLine> & (TopOpeBRep_LineInter::*)() const) static_cast<const opencascade::handle<IntPatch_GLine> & (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::LineG),
             R"#(None)#" )
        .def("LineR",
             (const opencascade::handle<IntPatch_RLine> & (TopOpeBRep_LineInter::*)() const) static_cast<const opencascade::handle<IntPatch_RLine> & (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::LineR),
             R"#(None)#" )
        .def("Index",
             (void (TopOpeBRep_LineInter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_LineInter::*)( const Standard_Integer ) >(&TopOpeBRep_LineInter::Index),
             R"#(None)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::Index),
             R"#(None)#" )
        .def("OK",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::OK),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("VPBounds",
             []( TopOpeBRep_LineInter &self   ){ Standard_Integer  f; Standard_Integer  l; Standard_Integer  n; self.VPBounds(f,l,n); return std::make_tuple(f,l,n); },
             R"#(None)#" )
        .def("Bounds",
             []( TopOpeBRep_LineInter &self   ){ Standard_Real  f; Standard_Real  l; self.Bounds(f,l); return std::make_tuple(f,l); },
             R"#(None)#" )
        .def("GetTraceIndex",
             []( TopOpeBRep_LineInter &self   ){ Standard_Integer  exF1; Standard_Integer  exF2; self.GetTraceIndex(exF1,exF2); return std::make_tuple(exF1,exF2); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_Point2d , shared_ptr<TopOpeBRep_Point2d> >>(m.attr("TopOpeBRep_Point2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Dump",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Integer ) const>(&TopOpeBRep_Point2d::Dump),
             R"#(None)#"  , py::arg("ie1")=static_cast<const Standard_Integer>(0),  py::arg("ie2")=static_cast<const Standard_Integer>(0))
        .def("SetPint",
             (void (TopOpeBRep_Point2d::*)( const IntRes2d_IntersectionPoint & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const IntRes2d_IntersectionPoint & ) >(&TopOpeBRep_Point2d::SetPint),
             R"#(None)#"  , py::arg("P"))
        .def("HasPint",
             (Standard_Boolean (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::HasPint),
             R"#(None)#" )
        .def("Pint",
             (const IntRes2d_IntersectionPoint & (TopOpeBRep_Point2d::*)() const) static_cast<const IntRes2d_IntersectionPoint & (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Pint),
             R"#(None)#" )
        .def("SetIsVertex",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRep_Point2d::SetIsVertex),
             R"#(None)#"  , py::arg("I"),  py::arg("B"))
        .def("IsVertex",
             (Standard_Boolean (TopOpeBRep_Point2d::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Point2d::IsVertex),
             R"#(None)#"  , py::arg("I"))
        .def("SetVertex",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopoDS_Vertex & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopoDS_Vertex & ) >(&TopOpeBRep_Point2d::SetVertex),
             R"#(None)#"  , py::arg("I"),  py::arg("V"))
        .def("Vertex",
             (const TopoDS_Vertex & (TopOpeBRep_Point2d::*)( const Standard_Integer ) const) static_cast<const TopoDS_Vertex & (TopOpeBRep_Point2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Point2d::Vertex),
             R"#(None)#"  , py::arg("I"))
        .def("SetTransition",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopOpeBRepDS_Transition & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopOpeBRepDS_Transition & ) >(&TopOpeBRep_Point2d::SetTransition),
             R"#(None)#"  , py::arg("I"),  py::arg("T"))
        .def("Transition",
             (const TopOpeBRepDS_Transition & (TopOpeBRep_Point2d::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Transition & (TopOpeBRep_Point2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Point2d::Transition),
             R"#(None)#"  , py::arg("I"))
        .def("ChangeTransition",
             (TopOpeBRepDS_Transition & (TopOpeBRep_Point2d::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_Transition & (TopOpeBRep_Point2d::*)( const Standard_Integer ) >(&TopOpeBRep_Point2d::ChangeTransition),
             R"#(None)#"  , py::arg("I"))
        .def("SetParameter",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Real ) >(&TopOpeBRep_Point2d::SetParameter),
             R"#(None)#"  , py::arg("I"),  py::arg("P"))
        .def("Parameter",
             (Standard_Real (TopOpeBRep_Point2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (TopOpeBRep_Point2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Point2d::Parameter),
             R"#(None)#"  , py::arg("I"))
        .def("SetIsPointOfSegment",
             (void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) >(&TopOpeBRep_Point2d::SetIsPointOfSegment),
             R"#(None)#"  , py::arg("B"))
        .def("IsPointOfSegment",
             (Standard_Boolean (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::IsPointOfSegment),
             R"#(None)#" )
        .def("SetSegmentAncestors",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRep_Point2d::SetSegmentAncestors),
             R"#(None)#"  , py::arg("IP1"),  py::arg("IP2"))
        .def("SegmentAncestors",
             (Standard_Boolean (TopOpeBRep_Point2d::*)( Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)( Standard_Integer & , Standard_Integer & ) const>(&TopOpeBRep_Point2d::SegmentAncestors),
             R"#(None)#"  , py::arg("IP1"),  py::arg("IP2"))
        .def("SetStatus",
             (void (TopOpeBRep_Point2d::*)( const TopOpeBRep_P2Dstatus ) ) static_cast<void (TopOpeBRep_Point2d::*)( const TopOpeBRep_P2Dstatus ) >(&TopOpeBRep_Point2d::SetStatus),
             R"#(None)#"  , py::arg("S"))
        .def("Status",
             (TopOpeBRep_P2Dstatus (TopOpeBRep_Point2d::*)() const) static_cast<TopOpeBRep_P2Dstatus (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Status),
             R"#(None)#" )
        .def("SetIndex",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer ) >(&TopOpeBRep_Point2d::SetIndex),
             R"#(None)#"  , py::arg("X"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Integer (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Index),
             R"#(None)#" )
        .def("SetValue",
             (void (TopOpeBRep_Point2d::*)( const gp_Pnt & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const gp_Pnt & ) >(&TopOpeBRep_Point2d::SetValue),
             R"#(None)#"  , py::arg("P"))
        .def("Value",
             (const gp_Pnt & (TopOpeBRep_Point2d::*)() const) static_cast<const gp_Pnt & (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Value),
             R"#(None)#" )
        .def("SetValue2d",
             (void (TopOpeBRep_Point2d::*)( const gp_Pnt2d & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const gp_Pnt2d & ) >(&TopOpeBRep_Point2d::SetValue2d),
             R"#(None)#"  , py::arg("P"))
        .def("Value2d",
             (const gp_Pnt2d & (TopOpeBRep_Point2d::*)() const) static_cast<const gp_Pnt2d & (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Value2d),
             R"#(None)#" )
        .def("SetKeep",
             (void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) >(&TopOpeBRep_Point2d::SetKeep),
             R"#(None)#"  , py::arg("B"))
        .def("Keep",
             (Standard_Boolean (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Keep),
             R"#(None)#" )
        .def("SetEdgesConfig",
             (void (TopOpeBRep_Point2d::*)( const TopOpeBRepDS_Config ) ) static_cast<void (TopOpeBRep_Point2d::*)( const TopOpeBRepDS_Config ) >(&TopOpeBRep_Point2d::SetEdgesConfig),
             R"#(None)#"  , py::arg("C"))
        .def("EdgesConfig",
             (TopOpeBRepDS_Config (TopOpeBRep_Point2d::*)() const) static_cast<TopOpeBRepDS_Config (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::EdgesConfig),
             R"#(None)#" )
        .def("SetTolerance",
             (void (TopOpeBRep_Point2d::*)( const Standard_Real ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Real ) >(&TopOpeBRep_Point2d::SetTolerance),
             R"#(None)#"  , py::arg("T"))
        .def("Tolerance",
             (Standard_Real (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Real (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Tolerance),
             R"#(None)#" )
        .def("SetHctxff2d",
             (void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxff2d> & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxff2d> & ) >(&TopOpeBRep_Point2d::SetHctxff2d),
             R"#(None)#"  , py::arg("ff2d"))
        .def("Hctxff2d",
             (opencascade::handle<TopOpeBRep_Hctxff2d> (TopOpeBRep_Point2d::*)() const) static_cast<opencascade::handle<TopOpeBRep_Hctxff2d> (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Hctxff2d),
             R"#(None)#" )
        .def("SetHctxee2d",
             (void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxee2d> & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxee2d> & ) >(&TopOpeBRep_Point2d::SetHctxee2d),
             R"#(None)#"  , py::arg("ee2d"))
        .def("Hctxee2d",
             (opencascade::handle<TopOpeBRep_Hctxee2d> (TopOpeBRep_Point2d::*)() const) static_cast<opencascade::handle<TopOpeBRep_Hctxee2d> (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Hctxee2d),
             R"#(None)#" )
        .def("SetPint",
             (void (TopOpeBRep_Point2d::*)( const IntRes2d_IntersectionPoint & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const IntRes2d_IntersectionPoint & ) >(&TopOpeBRep_Point2d::SetPint),
             R"#(None)#"  , py::arg("P"))
        .def("HasPint",
             (Standard_Boolean (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::HasPint),
             R"#(None)#" )
        .def("Pint",
             (const IntRes2d_IntersectionPoint & (TopOpeBRep_Point2d::*)() const) static_cast<const IntRes2d_IntersectionPoint & (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Pint),
             R"#(None)#" )
        .def("SetIsVertex",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRep_Point2d::SetIsVertex),
             R"#(None)#"  , py::arg("Index"),  py::arg("B"))
        .def("IsVertex",
             (Standard_Boolean (TopOpeBRep_Point2d::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Point2d::IsVertex),
             R"#(None)#"  , py::arg("Index"))
        .def("SetVertex",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopoDS_Vertex & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopoDS_Vertex & ) >(&TopOpeBRep_Point2d::SetVertex),
             R"#(None)#"  , py::arg("Index"),  py::arg("V"))
        .def("SetTransition",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopOpeBRepDS_Transition & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopOpeBRepDS_Transition & ) >(&TopOpeBRep_Point2d::SetTransition),
             R"#(None)#"  , py::arg("Index"),  py::arg("T"))
        .def("SetParameter",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Real ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Real ) >(&TopOpeBRep_Point2d::SetParameter),
             R"#(None)#"  , py::arg("Index"),  py::arg("P"))
        .def("Parameter",
             (Standard_Real (TopOpeBRep_Point2d::*)( const Standard_Integer ) const) static_cast<Standard_Real (TopOpeBRep_Point2d::*)( const Standard_Integer ) const>(&TopOpeBRep_Point2d::Parameter),
             R"#(None)#"  , py::arg("Index"))
        .def("SetIsPointOfSegment",
             (void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) >(&TopOpeBRep_Point2d::SetIsPointOfSegment),
             R"#(None)#"  , py::arg("B"))
        .def("IsPointOfSegment",
             (Standard_Boolean (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::IsPointOfSegment),
             R"#(None)#" )
        .def("SetSegmentAncestors",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRep_Point2d::SetSegmentAncestors),
             R"#(None)#"  , py::arg("IP1"),  py::arg("IP2"))
        .def("SegmentAncestors",
             (Standard_Boolean (TopOpeBRep_Point2d::*)( Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)( Standard_Integer & , Standard_Integer & ) const>(&TopOpeBRep_Point2d::SegmentAncestors),
             R"#(None)#"  , py::arg("IP1"),  py::arg("IP2"))
        .def("SetStatus",
             (void (TopOpeBRep_Point2d::*)( const TopOpeBRep_P2Dstatus ) ) static_cast<void (TopOpeBRep_Point2d::*)( const TopOpeBRep_P2Dstatus ) >(&TopOpeBRep_Point2d::SetStatus),
             R"#(None)#"  , py::arg("I"))
        .def("Status",
             (TopOpeBRep_P2Dstatus (TopOpeBRep_Point2d::*)() const) static_cast<TopOpeBRep_P2Dstatus (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Status),
             R"#(None)#" )
        .def("SetIndex",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer ) >(&TopOpeBRep_Point2d::SetIndex),
             R"#(None)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Integer (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Index),
             R"#(None)#" )
        .def("SetValue",
             (void (TopOpeBRep_Point2d::*)( const gp_Pnt & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const gp_Pnt & ) >(&TopOpeBRep_Point2d::SetValue),
             R"#(None)#"  , py::arg("P"))
        .def("Value",
             (const gp_Pnt & (TopOpeBRep_Point2d::*)() const) static_cast<const gp_Pnt & (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Value),
             R"#(None)#" )
        .def("SetValue2d",
             (void (TopOpeBRep_Point2d::*)( const gp_Pnt2d & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const gp_Pnt2d & ) >(&TopOpeBRep_Point2d::SetValue2d),
             R"#(None)#"  , py::arg("P"))
        .def("Value2d",
             (const gp_Pnt2d & (TopOpeBRep_Point2d::*)() const) static_cast<const gp_Pnt2d & (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Value2d),
             R"#(None)#" )
        .def("SetKeep",
             (void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Boolean ) >(&TopOpeBRep_Point2d::SetKeep),
             R"#(None)#"  , py::arg("B"))
        .def("Keep",
             (Standard_Boolean (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Keep),
             R"#(None)#" )
        .def("SetEdgesConfig",
             (void (TopOpeBRep_Point2d::*)( const TopOpeBRepDS_Config ) ) static_cast<void (TopOpeBRep_Point2d::*)( const TopOpeBRepDS_Config ) >(&TopOpeBRep_Point2d::SetEdgesConfig),
             R"#(None)#"  , py::arg("B"))
        .def("EdgesConfig",
             (TopOpeBRepDS_Config (TopOpeBRep_Point2d::*)() const) static_cast<TopOpeBRepDS_Config (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::EdgesConfig),
             R"#(None)#" )
        .def("SetTolerance",
             (void (TopOpeBRep_Point2d::*)( const Standard_Real ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Real ) >(&TopOpeBRep_Point2d::SetTolerance),
             R"#(None)#"  , py::arg("t"))
        .def("Tolerance",
             (Standard_Real (TopOpeBRep_Point2d::*)() const) static_cast<Standard_Real (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Tolerance),
             R"#(None)#" )
        .def("SetHctxff2d",
             (void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxff2d> & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxff2d> & ) >(&TopOpeBRep_Point2d::SetHctxff2d),
             R"#(None)#"  , py::arg("h"))
        .def("Hctxff2d",
             (opencascade::handle<TopOpeBRep_Hctxff2d> (TopOpeBRep_Point2d::*)() const) static_cast<opencascade::handle<TopOpeBRep_Hctxff2d> (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Hctxff2d),
             R"#(None)#" )
        .def("SetHctxee2d",
             (void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxee2d> & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const opencascade::handle<TopOpeBRep_Hctxee2d> & ) >(&TopOpeBRep_Point2d::SetHctxee2d),
             R"#(None)#"  , py::arg("h"))
        .def("Hctxee2d",
             (opencascade::handle<TopOpeBRep_Hctxee2d> (TopOpeBRep_Point2d::*)() const) static_cast<opencascade::handle<TopOpeBRep_Hctxee2d> (TopOpeBRep_Point2d::*)() const>(&TopOpeBRep_Point2d::Hctxee2d),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_PointClassifier , shared_ptr<TopOpeBRep_PointClassifier> >>(m.attr("TopOpeBRep_PointClassifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRep_PointClassifier::*)() ) static_cast<void (TopOpeBRep_PointClassifier::*)() >(&TopOpeBRep_PointClassifier::Init),
             R"#(None)#" )
        .def("Load",
             (void (TopOpeBRep_PointClassifier::*)( const TopoDS_Face & ) ) static_cast<void (TopOpeBRep_PointClassifier::*)( const TopoDS_Face & ) >(&TopOpeBRep_PointClassifier::Load),
             R"#(None)#"  , py::arg("F"))
        .def("Classify",
             (TopAbs_State (TopOpeBRep_PointClassifier::*)( const TopoDS_Face & , const gp_Pnt2d & , const Standard_Real ) ) static_cast<TopAbs_State (TopOpeBRep_PointClassifier::*)( const TopoDS_Face & , const gp_Pnt2d & , const Standard_Real ) >(&TopOpeBRep_PointClassifier::Classify),
             R"#(compute position of point <P> regarding with the face <F>.)#"  , py::arg("F"),  py::arg("P"),  py::arg("Tol"))
        .def("State",
             (TopAbs_State (TopOpeBRep_PointClassifier::*)() const) static_cast<TopAbs_State (TopOpeBRep_PointClassifier::*)() const>(&TopOpeBRep_PointClassifier::State),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRep_PointGeomTool , shared_ptr<TopOpeBRep_PointGeomTool>>(m,"TopOpeBRep_PointGeomTool");

    static_cast<py::class_<TopOpeBRep_PointGeomTool , shared_ptr<TopOpeBRep_PointGeomTool> >>(m.attr("TopOpeBRep_PointGeomTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakePoint_s",
                    (TopOpeBRepDS_Point (*)( const TopOpeBRep_VPointInter & ) ) static_cast<TopOpeBRepDS_Point (*)( const TopOpeBRep_VPointInter & ) >(&TopOpeBRep_PointGeomTool::MakePoint),
                    R"#(None)#"  , py::arg("IP"))
        .def_static("MakePoint_s",
                    (TopOpeBRepDS_Point (*)( const TopOpeBRep_Point2d & ) ) static_cast<TopOpeBRepDS_Point (*)( const TopOpeBRep_Point2d & ) >(&TopOpeBRep_PointGeomTool::MakePoint),
                    R"#(None)#"  , py::arg("P2D"))
        .def_static("MakePoint_s",
                    (TopOpeBRepDS_Point (*)( const TopOpeBRep_FaceEdgeIntersector & ) ) static_cast<TopOpeBRepDS_Point (*)( const TopOpeBRep_FaceEdgeIntersector & ) >(&TopOpeBRep_PointGeomTool::MakePoint),
                    R"#(None)#"  , py::arg("FEI"))
        .def_static("MakePoint_s",
                    (TopOpeBRepDS_Point (*)( const TopoDS_Shape & ) ) static_cast<TopOpeBRepDS_Point (*)( const TopoDS_Shape & ) >(&TopOpeBRep_PointGeomTool::MakePoint),
                    R"#(None)#"  , py::arg("S"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const TopOpeBRepDS_Point & , const TopOpeBRepDS_Point & ) ) static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Point & , const TopOpeBRepDS_Point & ) >(&TopOpeBRep_PointGeomTool::IsEqual),
                    R"#(None)#"  , py::arg("DSP1"),  py::arg("DSP2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_ShapeIntersector , shared_ptr<TopOpeBRep_ShapeIntersector> >>(m.attr("TopOpeBRep_ShapeIntersector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("InitIntersection",
             (void (TopOpeBRep_ShapeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRep_ShapeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRep_ShapeIntersector::InitIntersection),
             R"#(Initialize the intersection of shapes S1,S2.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("InitIntersection",
             (void (TopOpeBRep_ShapeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<void (TopOpeBRep_ShapeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Face & , const TopoDS_Face & ) >(&TopOpeBRep_ShapeIntersector::InitIntersection),
             R"#(Initialize the intersection of shapes S1,S2.)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("F1"),  py::arg("F2"))
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector::Shape),
             R"#(return the shape <Index> ( = 1 or 2) given to InitIntersection(). Index = 1 will return S1, Index = 2 will return S2.)#"  , py::arg("Index"))
        .def("MoreIntersection",
             (Standard_Boolean (TopOpeBRep_ShapeIntersector::*)() const) static_cast<Standard_Boolean (TopOpeBRep_ShapeIntersector::*)() const>(&TopOpeBRep_ShapeIntersector::MoreIntersection),
             R"#(returns True if there are more intersection between two the shapes.)#" )
        .def("NextIntersection",
             (void (TopOpeBRep_ShapeIntersector::*)() ) static_cast<void (TopOpeBRep_ShapeIntersector::*)() >(&TopOpeBRep_ShapeIntersector::NextIntersection),
             R"#(search for the next intersection between the two shapes.)#" )
        .def("ChangeFacesIntersector",
             (TopOpeBRep_FacesIntersector & (TopOpeBRep_ShapeIntersector::*)() ) static_cast<TopOpeBRep_FacesIntersector & (TopOpeBRep_ShapeIntersector::*)() >(&TopOpeBRep_ShapeIntersector::ChangeFacesIntersector),
             R"#(return the current intersection of two Faces.)#" )
        .def("ChangeEdgesIntersector",
             (TopOpeBRep_EdgesIntersector & (TopOpeBRep_ShapeIntersector::*)() ) static_cast<TopOpeBRep_EdgesIntersector & (TopOpeBRep_ShapeIntersector::*)() >(&TopOpeBRep_ShapeIntersector::ChangeEdgesIntersector),
             R"#(return the current intersection of two Edges.)#" )
        .def("ChangeFaceEdgeIntersector",
             (TopOpeBRep_FaceEdgeIntersector & (TopOpeBRep_ShapeIntersector::*)() ) static_cast<TopOpeBRep_FaceEdgeIntersector & (TopOpeBRep_ShapeIntersector::*)() >(&TopOpeBRep_ShapeIntersector::ChangeFaceEdgeIntersector),
             R"#(return the current intersection of a Face and an Edge.)#" )
        .def("CurrentGeomShape",
             (const TopoDS_Shape & (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector::CurrentGeomShape),
             R"#(return geometric shape <Index> ( = 1 or 2 ) of current intersection.)#"  , py::arg("Index"))
        .def("DumpCurrent",
             (void (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<void (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector::DumpCurrent),
             R"#(None)#"  , py::arg("K"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const) static_cast<Standard_Integer (TopOpeBRep_ShapeIntersector::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector::Index),
             R"#(None)#"  , py::arg("K"))
        .def("RejectedFaces",
             (void (TopOpeBRep_ShapeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (TopOpeBRep_ShapeIntersector::*)( const TopoDS_Shape & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRep_ShapeIntersector::RejectedFaces),
             R"#(None)#"  , py::arg("anObj"),  py::arg("aReference"),  py::arg("aListOfShape"))
    // methods using call by reference i.s.o. return
        .def("GetTolerances",
             []( TopOpeBRep_ShapeIntersector &self   ){ Standard_Real  tol1; Standard_Real  tol2; self.GetTolerances(tol1,tol2); return std::make_tuple(tol1,tol2); },
             R"#(return MAX of intersection tolerances with which FacesIntersector from TopOpeBRep was working.)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_ShapeIntersector2d , shared_ptr<TopOpeBRep_ShapeIntersector2d> >>(m.attr("TopOpeBRep_ShapeIntersector2d"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("InitIntersection",
             (void (TopOpeBRep_ShapeIntersector2d::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRep_ShapeIntersector2d::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRep_ShapeIntersector2d::InitIntersection),
             R"#(Initialize the intersection of shapes S1,S2.)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector2d::Shape),
             R"#(return the shape <Index> ( = 1 or 2) given to InitIntersection(). Index = 1 will return S1, Index = 2 will return S2.)#"  , py::arg("Index"))
        .def("MoreIntersection",
             (Standard_Boolean (TopOpeBRep_ShapeIntersector2d::*)() const) static_cast<Standard_Boolean (TopOpeBRep_ShapeIntersector2d::*)() const>(&TopOpeBRep_ShapeIntersector2d::MoreIntersection),
             R"#(returns True if there are more intersection between two the shapes.)#" )
        .def("NextIntersection",
             (void (TopOpeBRep_ShapeIntersector2d::*)() ) static_cast<void (TopOpeBRep_ShapeIntersector2d::*)() >(&TopOpeBRep_ShapeIntersector2d::NextIntersection),
             R"#(search for the next intersection between the two shapes.)#" )
        .def("ChangeEdgesIntersector",
             (TopOpeBRep_EdgesIntersector & (TopOpeBRep_ShapeIntersector2d::*)() ) static_cast<TopOpeBRep_EdgesIntersector & (TopOpeBRep_ShapeIntersector2d::*)() >(&TopOpeBRep_ShapeIntersector2d::ChangeEdgesIntersector),
             R"#(return the current intersection of two Edges.)#" )
        .def("CurrentGeomShape",
             (const TopoDS_Shape & (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector2d::CurrentGeomShape),
             R"#(return geometric shape <Index> ( = 1 or 2 ) of current intersection.)#"  , py::arg("Index"))
        .def("DumpCurrent",
             (void (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const) static_cast<void (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector2d::DumpCurrent),
             R"#(None)#"  , py::arg("K"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const) static_cast<Standard_Integer (TopOpeBRep_ShapeIntersector2d::*)( const Standard_Integer ) const>(&TopOpeBRep_ShapeIntersector2d::Index),
             R"#(None)#"  , py::arg("K"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_ShapeScanner , shared_ptr<TopOpeBRep_ShapeScanner> >>(m.attr("TopOpeBRep_ShapeScanner"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TopOpeBRep_ShapeScanner::*)() ) static_cast<void (TopOpeBRep_ShapeScanner::*)() >(&TopOpeBRep_ShapeScanner::Clear),
             R"#(None)#" )
        .def("AddBoxesMakeCOB",
             (void (TopOpeBRep_ShapeScanner::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRep_ShapeScanner::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRep_ShapeScanner::AddBoxesMakeCOB),
             R"#(None)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("Init",
             (void (TopOpeBRep_ShapeScanner::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRep_ShapeScanner::*)( const TopoDS_Shape & ) >(&TopOpeBRep_ShapeScanner::Init),
             R"#(None)#"  , py::arg("E"))
        .def("Init",
             (void (TopOpeBRep_ShapeScanner::*)( TopOpeBRepTool_ShapeExplorer & ) ) static_cast<void (TopOpeBRep_ShapeScanner::*)( TopOpeBRepTool_ShapeExplorer & ) >(&TopOpeBRep_ShapeScanner::Init),
             R"#(None)#"  , py::arg("X"))
        .def("More",
             (Standard_Boolean (TopOpeBRep_ShapeScanner::*)() const) static_cast<Standard_Boolean (TopOpeBRep_ShapeScanner::*)() const>(&TopOpeBRep_ShapeScanner::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRep_ShapeScanner::*)() ) static_cast<void (TopOpeBRep_ShapeScanner::*)() >(&TopOpeBRep_ShapeScanner::Next),
             R"#(None)#" )
        .def("Current",
             (const TopoDS_Shape & (TopOpeBRep_ShapeScanner::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRep_ShapeScanner::*)() const>(&TopOpeBRep_ShapeScanner::Current),
             R"#(None)#" )
        .def("BoxSort",
             (const TopOpeBRepTool_BoxSort & (TopOpeBRep_ShapeScanner::*)() const) static_cast<const TopOpeBRepTool_BoxSort & (TopOpeBRep_ShapeScanner::*)() const>(&TopOpeBRep_ShapeScanner::BoxSort),
             R"#(None)#" )
        .def("ChangeBoxSort",
             (TopOpeBRepTool_BoxSort & (TopOpeBRep_ShapeScanner::*)() ) static_cast<TopOpeBRepTool_BoxSort & (TopOpeBRep_ShapeScanner::*)() >(&TopOpeBRep_ShapeScanner::ChangeBoxSort),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (TopOpeBRep_ShapeScanner::*)() const) static_cast<Standard_Integer (TopOpeBRep_ShapeScanner::*)() const>(&TopOpeBRep_ShapeScanner::Index),
             R"#(None)#" )
        .def("DumpCurrent",
             (Standard_OStream & (TopOpeBRep_ShapeScanner::*)( std::ostream & ) const) static_cast<Standard_OStream & (TopOpeBRep_ShapeScanner::*)( std::ostream & ) const>(&TopOpeBRep_ShapeScanner::DumpCurrent),
             R"#(None)#"  , py::arg("OS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_VPointInter , shared_ptr<TopOpeBRep_VPointInter> >>(m.attr("TopOpeBRep_VPointInter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetPoint",
             (void (TopOpeBRep_VPointInter::*)( const IntPatch_Point & ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const IntPatch_Point & ) >(&TopOpeBRep_VPointInter::SetPoint),
             R"#(None)#"  , py::arg("P"))
        .def("SetShapes",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRep_VPointInter::SetShapes),
             R"#(None)#"  , py::arg("I1"),  py::arg("I2"))
        .def("TransitionOnS1",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionOnS1),
             R"#(None)#" )
        .def("TransitionOnS2",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionOnS2),
             R"#(None)#" )
        .def("TransitionLineArc1",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionLineArc1),
             R"#(None)#" )
        .def("TransitionLineArc2",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionLineArc2),
             R"#(None)#" )
        .def("IsOnDomS1",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsOnDomS1),
             R"#(None)#" )
        .def("IsOnDomS2",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsOnDomS2),
             R"#(None)#" )
        .def("Value",
             (const gp_Pnt & (TopOpeBRep_VPointInter::*)() const) static_cast<const gp_Pnt & (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Value),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Tolerance),
             R"#(None)#" )
        .def("ArcOnS1",
             (const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ArcOnS1),
             R"#(None)#" )
        .def("ArcOnS2",
             (const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ArcOnS2),
             R"#(None)#" )
        .def("ParameterOnLine",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ParameterOnLine),
             R"#(None)#" )
        .def("ParameterOnArc1",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ParameterOnArc1),
             R"#(None)#" )
        .def("IsVertexOnS1",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsVertexOnS1),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("VertexOnS1",
             (const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::VertexOnS1),
             R"#(Returns the information about the point when it is on the domain of the first patch, i-e when the function IsVertexOnS1 returns True. Otherwise, an exception is raised.)#" )
        .def("ParameterOnArc2",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ParameterOnArc2),
             R"#(None)#" )
        .def("IsVertexOnS2",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsVertexOnS2),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the second surface.)#" )
        .def("VertexOnS2",
             (const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::VertexOnS2),
             R"#(Returns the information about the point when it is on the domain of the second patch, i-e when the function IsVertexOnS2 returns True. Otherwise, an exception is raised.)#" )
        .def("IsInternal",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsInternal),
             R"#(None)#" )
        .def("IsMultiple",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsMultiple),
             R"#(Returns True if the point belongs to several intersection lines.)#" )
        .def("State",
             (TopAbs_State (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<TopAbs_State (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::State),
             R"#(get state of VPoint within the domain of geometric shape domain <I> (= 1 or 2).)#"  , py::arg("I"))
        .def("State",
             (void (TopOpeBRep_VPointInter::*)( const TopAbs_State , const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const TopAbs_State , const Standard_Integer ) >(&TopOpeBRep_VPointInter::State),
             R"#(Set the state of VPoint within the domain of the geometric shape <I> (= 1 or 2).)#"  , py::arg("S"),  py::arg("I"))
        .def("EdgeON",
             (void (TopOpeBRep_VPointInter::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Integer ) >(&TopOpeBRep_VPointInter::EdgeON),
             R"#(set the shape Eon of shape I (1,2) containing the point, and parameter <Par> of point on <Eon>.)#"  , py::arg("Eon"),  py::arg("Par"),  py::arg("I"))
        .def("EdgeON",
             (const TopoDS_Shape & (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::EdgeON),
             R"#(get the edge of shape I (1,2) containing the point.)#"  , py::arg("I"))
        .def("EdgeONParameter",
             (Standard_Real (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::EdgeONParameter),
             R"#(get the parameter on edge of shape I (1,2) containing the point.)#"  , py::arg("I"))
        .def("ShapeIndex",
             (Standard_Integer (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ShapeIndex),
             R"#(returns value of filed myShapeIndex = 0,1,2,3 0 means the VPoint is on no restriction 1 means the VPoint is on the restriction 1 2 means the VPoint is on the restriction 2 3 means the VPoint is on the restrictions 1 and 2)#" )
        .def("ShapeIndex",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) >(&TopOpeBRep_VPointInter::ShapeIndex),
             R"#(set value of shape supporting me (0,1,2,3).)#"  , py::arg("I"))
        .def("Edge",
             (const TopoDS_Shape & (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::Edge),
             R"#(get the edge of shape I (1,2) containing the point. Returned shape is null if the VPoint is not on an edge of shape I (1,2).)#"  , py::arg("I"))
        .def("EdgeParameter",
             (Standard_Real (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::EdgeParameter),
             R"#(get the parameter on edge of shape I (1,2) containing the point)#"  , py::arg("I"))
        .def("SurfaceParameters",
             (gp_Pnt2d (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<gp_Pnt2d (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::SurfaceParameters),
             R"#(get the parameter on surface of shape I (1,2) containing the point)#"  , py::arg("I"))
        .def("IsVertex",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::IsVertex),
             R"#(None)#"  , py::arg("I"))
        .def("Vertex",
             (const TopoDS_Shape & (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInter::*)( const Standard_Integer ) const>(&TopOpeBRep_VPointInter::Vertex),
             R"#(None)#"  , py::arg("I"))
        .def("UpdateKeep",
             (void (TopOpeBRep_VPointInter::*)() ) static_cast<void (TopOpeBRep_VPointInter::*)() >(&TopOpeBRep_VPointInter::UpdateKeep),
             R"#(set myKeep value according to current states.)#" )
        .def("Keep",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Keep),
             R"#(Returns value of myKeep (does not evaluate states) False at creation of VPoint. Updated by State(State from TopAbs,Integer from Standard))#" )
        .def("ChangeKeep",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Boolean ) >(&TopOpeBRep_VPointInter::ChangeKeep),
             R"#(updates VPointInter flag "keep" with <keep>.)#"  , py::arg("keep"))
        .def("EqualpP",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)( const TopOpeBRep_VPointInter & ) const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)( const TopOpeBRep_VPointInter & ) const>(&TopOpeBRep_VPointInter::EqualpP),
             R"#(returns <True> if the 3d points and the parameters of the VPoints are same)#"  , py::arg("VP"))
        .def("ParonE",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)( const TopoDS_Edge & , Standard_Real & ) const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)( const TopoDS_Edge & , Standard_Real & ) const>(&TopOpeBRep_VPointInter::ParonE),
             R"#(returns <false> if the vpoint is not given on arc <E>, else returns <par> parameter on <E>)#"  , py::arg("E"),  py::arg("par"))
        .def("Index",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) >(&TopOpeBRep_VPointInter::Index),
             R"#(None)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Index),
             R"#(None)#" )
        .def("Dump",
             (Standard_OStream & (TopOpeBRep_VPointInter::*)( const Standard_Integer , const TopoDS_Face & , std::ostream & ) const) static_cast<Standard_OStream & (TopOpeBRep_VPointInter::*)( const Standard_Integer , const TopoDS_Face & , std::ostream & ) const>(&TopOpeBRep_VPointInter::Dump),
             R"#(None)#"  , py::arg("I"),  py::arg("F"),  py::arg("OS"))
        .def("Dump",
             (Standard_OStream & (TopOpeBRep_VPointInter::*)( const TopoDS_Face & , const TopoDS_Face & , std::ostream & ) const) static_cast<Standard_OStream & (TopOpeBRep_VPointInter::*)( const TopoDS_Face & , const TopoDS_Face & , std::ostream & ) const>(&TopOpeBRep_VPointInter::Dump),
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("OS"))
        .def("PThePointOfIntersectionDummy",
             (TopOpeBRep_PThePointOfIntersection (TopOpeBRep_VPointInter::*)() const) static_cast<TopOpeBRep_PThePointOfIntersection (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::PThePointOfIntersectionDummy),
             R"#(None)#" )
        .def("SetShapes",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRep_VPointInter::SetShapes),
             R"#(None)#"  , py::arg("I1"),  py::arg("I2"))
        .def("TransitionOnS1",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionOnS1),
             R"#(None)#" )
        .def("TransitionOnS2",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionOnS2),
             R"#(None)#" )
        .def("TransitionLineArc1",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionLineArc1),
             R"#(None)#" )
        .def("TransitionLineArc2",
             (IntSurf_Transition (TopOpeBRep_VPointInter::*)() const) static_cast<IntSurf_Transition (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::TransitionLineArc2),
             R"#(None)#" )
        .def("IsOnDomS1",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsOnDomS1),
             R"#(None)#" )
        .def("IsOnDomS2",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsOnDomS2),
             R"#(None)#" )
        .def("Value",
             (const gp_Pnt & (TopOpeBRep_VPointInter::*)() const) static_cast<const gp_Pnt & (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Value),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Tolerance),
             R"#(None)#" )
        .def("ParameterOnLine",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ParameterOnLine),
             R"#(None)#" )
        .def("ParameterOnArc1",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ParameterOnArc1),
             R"#(None)#" )
        .def("ParameterOnArc2",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ParameterOnArc2),
             R"#(None)#" )
        .def("IsVertexOnS1",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsVertexOnS1),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("IsVertexOnS2",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsVertexOnS2),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the second surface.)#" )
        .def("IsMultiple",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsMultiple),
             R"#(Returns True if the point belongs to several intersection lines.)#" )
        .def("IsInternal",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsInternal),
             R"#(None)#" )
        .def("ShapeIndex",
             (Standard_Integer (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ShapeIndex),
             R"#(returns value of filed myShapeIndex = 0,1,2,3 0 means the VPoint is on no restriction 1 means the VPoint is on the restriction 1 2 means the VPoint is on the restriction 2 3 means the VPoint is on the restrictions 1 and 2)#" )
        .def("ShapeIndex",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) >(&TopOpeBRep_VPointInter::ShapeIndex),
             R"#(set value of shape supporting me (0,1,2,3).)#"  , py::arg("I"))
        .def("Keep",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Keep),
             R"#(Returns value of myKeep (does not evaluate states) False at creation of VPoint. Updated by State(State from TopAbs,Integer from Standard))#" )
        .def("ChangeKeep",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Boolean ) >(&TopOpeBRep_VPointInter::ChangeKeep),
             R"#(updates VPointInter flag "keep" with <keep>.)#"  , py::arg("keep"))
        .def("Index",
             (void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRep_VPointInter::*)( const Standard_Integer ) >(&TopOpeBRep_VPointInter::Index),
             R"#(None)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Integer (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::Index),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetShapes",
             []( TopOpeBRep_VPointInter &self   ){ Standard_Integer  I1; Standard_Integer  I2; self.GetShapes(I1,I2); return std::make_tuple(I1,I2); },
             R"#(None)#" )
        .def("ParametersOnS1",
             []( TopOpeBRep_VPointInter &self   ){ Standard_Real  u; Standard_Real  v; self.ParametersOnS1(u,v); return std::make_tuple(u,v); },
             R"#(None)#" )
        .def("ParametersOnS2",
             []( TopOpeBRep_VPointInter &self   ){ Standard_Real  u; Standard_Real  v; self.ParametersOnS2(u,v); return std::make_tuple(u,v); },
             R"#(None)#" )
        .def("GetShapes",
             []( TopOpeBRep_VPointInter &self   ){ Standard_Integer  I1; Standard_Integer  I2; self.GetShapes(I1,I2); return std::make_tuple(I1,I2); },
             R"#(None)#" )
        .def("ParametersOnS1",
             []( TopOpeBRep_VPointInter &self   ){ Standard_Real  u; Standard_Real  v; self.ParametersOnS1(u,v); return std::make_tuple(u,v); },
             R"#(None)#" )
        .def("ParametersOnS2",
             []( TopOpeBRep_VPointInter &self   ){ Standard_Real  u; Standard_Real  v; self.ParametersOnS2(u,v); return std::make_tuple(u,v); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_VPointInterClassifier , shared_ptr<TopOpeBRep_VPointInterClassifier> >>(m.attr("TopOpeBRep_VPointInterClassifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("VPointPosition",
             (TopAbs_State (TopOpeBRep_VPointInterClassifier::*)( const TopoDS_Shape & , TopOpeBRep_VPointInter & , const Standard_Integer , TopOpeBRep_PointClassifier & , const Standard_Boolean , const Standard_Real ) ) static_cast<TopAbs_State (TopOpeBRep_VPointInterClassifier::*)( const TopoDS_Shape & , TopOpeBRep_VPointInter & , const Standard_Integer , TopOpeBRep_PointClassifier & , const Standard_Boolean , const Standard_Real ) >(&TopOpeBRep_VPointInterClassifier::VPointPosition),
             R"#(compute position of VPoint <VP> regarding with face <F>. <ShapeIndex> (= 1,2) indicates which (u,v) point of <VP> is used. when state is ON, set VP.EdgeON() with the edge containing <VP> and associated parameter. returns state of VP on ShapeIndex.)#"  , py::arg("F"),  py::arg("VP"),  py::arg("ShapeIndex"),  py::arg("PC"),  py::arg("AssumeINON"),  py::arg("Tol"))
        .def("Edge",
             (const TopoDS_Shape & (TopOpeBRep_VPointInterClassifier::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRep_VPointInterClassifier::*)() const>(&TopOpeBRep_VPointInterClassifier::Edge),
             R"#(returns the edge containing the VPoint <VP> used in the last VPointPosition() call. Edge is defined if the state previously computed is ON, else Edge is a null shape.)#" )
        .def("EdgeParameter",
             (Standard_Real (TopOpeBRep_VPointInterClassifier::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInterClassifier::*)() const>(&TopOpeBRep_VPointInterClassifier::EdgeParameter),
             R"#(returns the parameter of the VPoint <VP> on Edge())#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_VPointInterIterator , shared_ptr<TopOpeBRep_VPointInterIterator> >>(m.attr("TopOpeBRep_VPointInterIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRep_LineInter & >()  , py::arg("LI") )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRep_VPointInterIterator::*)( const TopOpeBRep_LineInter & , const Standard_Boolean ) ) static_cast<void (TopOpeBRep_VPointInterIterator::*)( const TopOpeBRep_LineInter & , const Standard_Boolean ) >(&TopOpeBRep_VPointInterIterator::Init),
             R"#(None)#"  , py::arg("LI"),  py::arg("checkkeep")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Init",
             (void (TopOpeBRep_VPointInterIterator::*)() ) static_cast<void (TopOpeBRep_VPointInterIterator::*)() >(&TopOpeBRep_VPointInterIterator::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TopOpeBRep_VPointInterIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInterIterator::*)() const>(&TopOpeBRep_VPointInterIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRep_VPointInterIterator::*)() ) static_cast<void (TopOpeBRep_VPointInterIterator::*)() >(&TopOpeBRep_VPointInterIterator::Next),
             R"#(None)#" )
        .def("CurrentVP",
             (const TopOpeBRep_VPointInter & (TopOpeBRep_VPointInterIterator::*)() ) static_cast<const TopOpeBRep_VPointInter & (TopOpeBRep_VPointInterIterator::*)() >(&TopOpeBRep_VPointInterIterator::CurrentVP),
             R"#(None)#" )
        .def("CurrentVPIndex",
             (Standard_Integer (TopOpeBRep_VPointInterIterator::*)() const) static_cast<Standard_Integer (TopOpeBRep_VPointInterIterator::*)() const>(&TopOpeBRep_VPointInterIterator::CurrentVPIndex),
             R"#(None)#" )
        .def("ChangeCurrentVP",
             (TopOpeBRep_VPointInter & (TopOpeBRep_VPointInterIterator::*)() ) static_cast<TopOpeBRep_VPointInter & (TopOpeBRep_VPointInterIterator::*)() >(&TopOpeBRep_VPointInterIterator::ChangeCurrentVP),
             R"#(None)#" )
        .def("PLineInterDummy",
             (TopOpeBRep_PLineInter (TopOpeBRep_VPointInterIterator::*)() const) static_cast<TopOpeBRep_PLineInter (TopOpeBRep_VPointInterIterator::*)() const>(&TopOpeBRep_VPointInterIterator::PLineInterDummy),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_WPointInter , shared_ptr<TopOpeBRep_WPointInter> >>(m.attr("TopOpeBRep_WPointInter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (TopOpeBRep_WPointInter::*)( const IntSurf_PntOn2S & ) ) static_cast<void (TopOpeBRep_WPointInter::*)( const IntSurf_PntOn2S & ) >(&TopOpeBRep_WPointInter::Set),
             R"#(None)#"  , py::arg("P"))
        .def("ValueOnS1",
             (gp_Pnt2d (TopOpeBRep_WPointInter::*)() const) static_cast<gp_Pnt2d (TopOpeBRep_WPointInter::*)() const>(&TopOpeBRep_WPointInter::ValueOnS1),
             R"#(None)#" )
        .def("ValueOnS2",
             (gp_Pnt2d (TopOpeBRep_WPointInter::*)() const) static_cast<gp_Pnt2d (TopOpeBRep_WPointInter::*)() const>(&TopOpeBRep_WPointInter::ValueOnS2),
             R"#(None)#" )
        .def("Value",
             (const gp_Pnt & (TopOpeBRep_WPointInter::*)() const) static_cast<const gp_Pnt & (TopOpeBRep_WPointInter::*)() const>(&TopOpeBRep_WPointInter::Value),
             R"#(None)#" )
        .def("PPntOn2SDummy",
             (TopOpeBRep_PPntOn2S (TopOpeBRep_WPointInter::*)() const) static_cast<TopOpeBRep_PPntOn2S (TopOpeBRep_WPointInter::*)() const>(&TopOpeBRep_WPointInter::PPntOn2SDummy),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("ParametersOnS1",
             []( TopOpeBRep_WPointInter &self   ){ Standard_Real  U; Standard_Real  V; self.ParametersOnS1(U,V); return std::make_tuple(U,V); },
             R"#(None)#" )
        .def("ParametersOnS2",
             []( TopOpeBRep_WPointInter &self   ){ Standard_Real  U; Standard_Real  V; self.ParametersOnS2(U,V); return std::make_tuple(U,V); },
             R"#(None)#" )
        .def("Parameters",
             []( TopOpeBRep_WPointInter &self   ){ Standard_Real  U1; Standard_Real  V1; Standard_Real  U2; Standard_Real  V2; self.Parameters(U1,V1,U2,V2); return std::make_tuple(U1,V1,U2,V2); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_WPointInterIterator , shared_ptr<TopOpeBRep_WPointInterIterator> >>(m.attr("TopOpeBRep_WPointInterIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRep_LineInter & >()  , py::arg("LI") )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRep_WPointInterIterator::*)( const TopOpeBRep_LineInter & ) ) static_cast<void (TopOpeBRep_WPointInterIterator::*)( const TopOpeBRep_LineInter & ) >(&TopOpeBRep_WPointInterIterator::Init),
             R"#(None)#"  , py::arg("LI"))
        .def("Init",
             (void (TopOpeBRep_WPointInterIterator::*)() ) static_cast<void (TopOpeBRep_WPointInterIterator::*)() >(&TopOpeBRep_WPointInterIterator::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TopOpeBRep_WPointInterIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRep_WPointInterIterator::*)() const>(&TopOpeBRep_WPointInterIterator::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRep_WPointInterIterator::*)() ) static_cast<void (TopOpeBRep_WPointInterIterator::*)() >(&TopOpeBRep_WPointInterIterator::Next),
             R"#(None)#" )
        .def("CurrentWP",
             (const TopOpeBRep_WPointInter & (TopOpeBRep_WPointInterIterator::*)() ) static_cast<const TopOpeBRep_WPointInter & (TopOpeBRep_WPointInterIterator::*)() >(&TopOpeBRep_WPointInterIterator::CurrentWP),
             R"#(None)#" )
        .def("PLineInterDummy",
             (TopOpeBRep_PLineInter (TopOpeBRep_WPointInterIterator::*)() const) static_cast<TopOpeBRep_PLineInter (TopOpeBRep_WPointInterIterator::*)() const>(&TopOpeBRep_WPointInterIterator::PLineInterDummy),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopOpeBRep_EdgesIntersector.hxx
// ./opencascade/TopOpeBRep_FFTransitionTool.hxx
// ./opencascade/TopOpeBRep_VPointInterIterator.hxx
// ./opencascade/TopOpeBRep_DSFiller.hxx
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
// ./opencascade/TopOpeBRep_FaceEdgeIntersector.hxx
// ./opencascade/TopOpeBRep_ListIteratorOfListOfBipoint.hxx
// ./opencascade/TopOpeBRep_DRAW.hxx
// ./opencascade/TopOpeBRep_TypeLineCurve.hxx
// ./opencascade/TopOpeBRep_WPointInter.hxx
// ./opencascade/TopOpeBRep_FacesFiller.hxx
// ./opencascade/TopOpeBRep_FacesIntersector.hxx
// ./opencascade/TopOpeBRep_PIntRes2d_IntersectionPoint.hxx
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
// ./opencascade/TopOpeBRep_PEdgesIntersector.hxx
// ./opencascade/TopOpeBRep_define.hxx
// ./opencascade/TopOpeBRep_PLineInter.hxx
// ./opencascade/TopOpeBRep_Point2d.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector2d.hxx
// ./opencascade/TopOpeBRep_HArray1OfVPointInter.hxx
// ./opencascade/TopOpeBRep_Hctxff2d.hxx
// ./opencascade/TopOpeBRep_HArray1OfLineInter.hxx
// ./opencascade/TopOpeBRep_FFDumper.hxx
// ./opencascade/TopOpeBRep_Hctxee2d.hxx
// ./opencascade/TopOpeBRep_ShapeScanner.hxx
// ./opencascade/TopOpeBRep_FaceEdgeFiller.hxx
// ./opencascade/TopOpeBRep_VPointInterClassifier.hxx
// ./opencascade/TopOpeBRep_VPointInter.hxx
// ./opencascade/TopOpeBRep_PFacesFiller.hxx
// ./opencascade/TopOpeBRep_LineInter.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector.hxx
// ./opencascade/TopOpeBRep_traceSIFF.hxx
// ./opencascade/TopOpeBRep_PPntOn2S.hxx
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_PFacesIntersector.hxx
// ./opencascade/TopOpeBRep_Bipoint.hxx
// ./opencascade/TopOpeBRep_EdgesFiller.hxx
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
// ./opencascade/TopOpeBRep_P2Dstatus.hxx
// ./opencascade/TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_PointClassifier.hxx
// ./opencascade/TopOpeBRep_PThePointOfIntersection.hxx
// ./opencascade/TopOpeBRep_PointGeomTool.hxx
// ./opencascade/TopOpeBRep_GeomTool.hxx
// ./opencascade/TopOpeBRep_WPointInterIterator.hxx
// ./opencascade/TopOpeBRep.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<TopOpeBRep_Point2d>(m,"TopOpeBRep_SequenceOfPoint2d");
    register_template_NCollection_List<TopOpeBRep_Bipoint>(m,"TopOpeBRep_ListOfBipoint");
    register_template_NCollection_Array1<TopOpeBRep_LineInter>(m,"TopOpeBRep_Array1OfLineInter");
    register_template_NCollection_Array1<TopOpeBRep_VPointInter>(m,"TopOpeBRep_Array1OfVPointInter");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
