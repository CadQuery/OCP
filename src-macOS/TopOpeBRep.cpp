
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
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
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <IntPatch_Point.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Bnd_Box.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Pnt.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <IntPatch_ALine.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_GLine.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <Geom_Curve.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Bnd_Box.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterClassifier.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>

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
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_Bipoint , shared_ptr<TopOpeBRep_Bipoint> >>(m.attr("TopOpeBRep_Bipoint"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_DSFiller , shared_ptr<TopOpeBRep_DSFiller> >>(m.attr("TopOpeBRep_DSFiller"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_EdgesFiller , shared_ptr<TopOpeBRep_EdgesFiller> >>(m.attr("TopOpeBRep_EdgesFiller"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_EdgesIntersector , shared_ptr<TopOpeBRep_EdgesIntersector> >>(m.attr("TopOpeBRep_EdgesIntersector"))
    // constructors
    // custom constructors
    // methods
        .def("ReduceSegment",
             (Standard_Boolean (TopOpeBRep_EdgesIntersector::*)( TopOpeBRep_Point2d & , TopOpeBRep_Point2d & , TopOpeBRep_Point2d & ) const) static_cast<Standard_Boolean (TopOpeBRep_EdgesIntersector::*)( TopOpeBRep_Point2d & , TopOpeBRep_Point2d & , TopOpeBRep_Point2d & ) const>(&TopOpeBRep_EdgesIntersector::ReduceSegment),
             R"#(None)#"  , py::arg("P1"),  py::arg("P2"),  py::arg("Pn"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FFDumper ,opencascade::handle<TopOpeBRep_FFDumper> , Standard_Transient>>(m.attr("TopOpeBRep_FFDumper"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_FFDumper::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_FFDumper::*)() const>(&TopOpeBRep_FFDumper::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_FFDumper::get_type_name),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FaceEdgeFiller , shared_ptr<TopOpeBRep_FaceEdgeFiller> >>(m.attr("TopOpeBRep_FaceEdgeFiller"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FaceEdgeIntersector , shared_ptr<TopOpeBRep_FaceEdgeIntersector> >>(m.attr("TopOpeBRep_FaceEdgeIntersector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FacesFiller , shared_ptr<TopOpeBRep_FacesFiller> >>(m.attr("TopOpeBRep_FacesFiller"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_FacesIntersector , shared_ptr<TopOpeBRep_FacesIntersector> >>(m.attr("TopOpeBRep_FacesIntersector"))
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
    register_default_constructor<TopOpeBRep_GeomTool , shared_ptr<TopOpeBRep_GeomTool>>(m,"TopOpeBRep_GeomTool");

    static_cast<py::class_<TopOpeBRep_GeomTool , shared_ptr<TopOpeBRep_GeomTool> >>(m.attr("TopOpeBRep_GeomTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
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
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxee2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxee2d::*)() const>(&TopOpeBRep_Hctxee2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_Hctxee2d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_Hctxff2d ,opencascade::handle<TopOpeBRep_Hctxff2d> , Standard_Transient>>(m.attr("TopOpeBRep_Hctxff2d"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxff2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRep_Hctxff2d::*)() const>(&TopOpeBRep_Hctxff2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRep_Hctxff2d::get_type_name),
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
        .def("OK",
             (Standard_Boolean (TopOpeBRep_LineInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_LineInter::*)() const>(&TopOpeBRep_LineInter::OK),
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
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_Point2d , shared_ptr<TopOpeBRep_Point2d> >>(m.attr("TopOpeBRep_Point2d"))
    // constructors
    // custom constructors
    // methods
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
        .def("SetTransition",
             (void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopOpeBRepDS_Transition & ) ) static_cast<void (TopOpeBRep_Point2d::*)( const Standard_Integer , const TopOpeBRepDS_Transition & ) >(&TopOpeBRep_Point2d::SetTransition),
             R"#(None)#"  , py::arg("I"),  py::arg("T"))
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
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_ShapeIntersector , shared_ptr<TopOpeBRep_ShapeIntersector> >>(m.attr("TopOpeBRep_ShapeIntersector"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_ShapeIntersector2d , shared_ptr<TopOpeBRep_ShapeIntersector2d> >>(m.attr("TopOpeBRep_ShapeIntersector2d"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_ShapeScanner , shared_ptr<TopOpeBRep_ShapeScanner> >>(m.attr("TopOpeBRep_ShapeScanner"))
    // constructors
    // custom constructors
    // methods
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
        .def("IsVertexOnS1",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsVertexOnS1),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the first surface.)#" )
        .def("ParameterOnArc2",
             (Standard_Real (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Real (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::ParameterOnArc2),
             R"#(None)#" )
        .def("IsVertexOnS2",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsVertexOnS2),
             R"#(Returns TRUE if the point is a vertex on the initial restriction facet of the second surface.)#" )
        .def("IsInternal",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsInternal),
             R"#(None)#" )
        .def("IsMultiple",
             (Standard_Boolean (TopOpeBRep_VPointInter::*)() const) static_cast<Standard_Boolean (TopOpeBRep_VPointInter::*)() const>(&TopOpeBRep_VPointInter::IsMultiple),
             R"#(Returns True if the point belongs to several intersection lines.)#" )
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_VPointInterIterator , shared_ptr<TopOpeBRep_VPointInterIterator> >>(m.attr("TopOpeBRep_VPointInterIterator"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_WPointInter , shared_ptr<TopOpeBRep_WPointInter> >>(m.attr("TopOpeBRep_WPointInter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRep_WPointInterIterator , shared_ptr<TopOpeBRep_WPointInterIterator> >>(m.attr("TopOpeBRep_WPointInterIterator"))
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
// ./opencascade/TopOpeBRep.hxx
// ./opencascade/TopOpeBRep_ShapeScanner.hxx
// ./opencascade/TopOpeBRep_PIntRes2d_IntersectionPoint.hxx
// ./opencascade/TopOpeBRep_FaceEdgeFiller.hxx
// ./opencascade/TopOpeBRep_EdgesFiller.hxx
// ./opencascade/TopOpeBRep_ListOfBipoint.hxx
// ./opencascade/TopOpeBRep_P2Dstatus.hxx
// ./opencascade/TopOpeBRep_PThePointOfIntersection.hxx
// ./opencascade/TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_PPntOn2S.hxx
// ./opencascade/TopOpeBRep_DataMapOfTopolTool.hxx
// ./opencascade/TopOpeBRep_FacesIntersector.hxx
// ./opencascade/TopOpeBRep_WPointInter.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector2d.hxx
// ./opencascade/TopOpeBRep_Array1OfLineInter.hxx
// ./opencascade/TopOpeBRep_LineInter.hxx
// ./opencascade/TopOpeBRep_FaceEdgeIntersector.hxx
// ./opencascade/TopOpeBRep_ListIteratorOfListOfBipoint.hxx
// ./opencascade/TopOpeBRep_PFacesFiller.hxx
// ./opencascade/TopOpeBRep_PointClassifier.hxx
// ./opencascade/TopOpeBRep_VPointInterClassifier.hxx
// ./opencascade/TopOpeBRep_DSFiller.hxx
// ./opencascade/TopOpeBRep_Hctxee2d.hxx
// ./opencascade/TopOpeBRep_EdgesIntersector.hxx
// ./opencascade/TopOpeBRep_TypeLineCurve.hxx
// ./opencascade/TopOpeBRep_PLineInter.hxx
// ./opencascade/TopOpeBRep_FFTransitionTool.hxx
// ./opencascade/TopOpeBRep_FacesFiller.hxx
// ./opencascade/TopOpeBRep_traceSIFF.hxx
// ./opencascade/TopOpeBRep_ShapeIntersector.hxx
// ./opencascade/TopOpeBRep_VPointInter.hxx
// ./opencascade/TopOpeBRep_GeomTool.hxx
// ./opencascade/TopOpeBRep_Bipoint.hxx
// ./opencascade/TopOpeBRep_HArray1OfVPointInter.hxx
// ./opencascade/TopOpeBRep_WPointInterIterator.hxx
// ./opencascade/TopOpeBRep_Array1OfVPointInter.hxx
// ./opencascade/TopOpeBRep_HArray1OfLineInter.hxx
// ./opencascade/TopOpeBRep_SequenceOfPoint2d.hxx
// ./opencascade/TopOpeBRep_PointGeomTool.hxx
// ./opencascade/TopOpeBRep_FFDumper.hxx
// ./opencascade/TopOpeBRep_PFacesIntersector.hxx
// ./opencascade/TopOpeBRep_Hctxff2d.hxx
// ./opencascade/TopOpeBRep_define.hxx
// ./opencascade/TopOpeBRep_VPointInterIterator.hxx
// ./opencascade/TopOpeBRep_Point2d.hxx
// ./opencascade/TopOpeBRep_DRAW.hxx
// ./opencascade/TopOpeBRep_PEdgesIntersector.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<TopOpeBRep_Bipoint>(m,"TopOpeBRep_ListOfBipoint");
    register_template_NCollection_Array1<TopOpeBRep_LineInter>(m,"TopOpeBRep_Array1OfLineInter");
    register_template_NCollection_Array1<TopOpeBRep_VPointInter>(m,"TopOpeBRep_Array1OfVPointInter");
    register_template_NCollection_Sequence<TopOpeBRep_Point2d>(m,"TopOpeBRep_SequenceOfPoint2d");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
