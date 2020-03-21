
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Solid.hxx>
#include <TopOpeBRepTool_GeomTool.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <TopOpeBRepTool_SolidClassifier.hxx>
#include <TopOpeBRepTool_CurveTool.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRepTool_BoxSort.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_ShapeTool.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopOpeBRepTool_connexity.hxx>
#include <TopOpeBRepTool_face.hxx>
#include <TopOpeBRepTool_CLASSI.hxx>
#include <TopOpeBRepTool_TOOL.hxx>
#include <TopOpeBRepTool_CORRISO.hxx>
#include <TopOpeBRepTool_REGUW.hxx>
#include <TopOpeBRepTool_REGUS.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>
#include <TopOpeBRepTool_mkTondgE.hxx>
#include <TopOpeBRepTool_PurgeInternalEdges.hxx>
#include <TopOpeBRepTool_FuseEdges.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Dir.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <TopOpeBRepTool.hxx>
#include <TopOpeBRepTool_2d.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include <TopOpeBRepTool_box.hxx>
#include <TopOpeBRepTool_BoxSort.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <TopOpeBRepTool_CLASSI.hxx>
#include <TopOpeBRepTool_connexity.hxx>
#include <TopOpeBRepTool_CORRISO.hxx>
#include <TopOpeBRepTool_CurveTool.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx>
#include <TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx>
#include <TopOpeBRepTool_DataMapOfShapeface.hxx>
#include <TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx>
#include <TopOpeBRepTool_define.hxx>
#include <TopOpeBRepTool_defineG.hxx>
#include <TopOpeBRepTool_DRAW.hxx>
#include <TopOpeBRepTool_EXPORT.hxx>
#include <TopOpeBRepTool_face.hxx>
#include <TopOpeBRepTool_FuseEdges.hxx>
#include <TopOpeBRepTool_GEOMETRY.hxx>
#include <TopOpeBRepTool_GeomTool.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx>
#include <TopOpeBRepTool_KRO.hxx>
#include <TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx>
#include <TopOpeBRepTool_ListOfC2DF.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>
#include <TopOpeBRepTool_mkTondgE.hxx>
#include <TopOpeBRepTool_OutCurveType.hxx>
#include <TopOpeBRepTool_Plos.hxx>
#include <TopOpeBRepTool_PROJECT.hxx>
#include <TopOpeBRepTool_PShapeClassifier.hxx>
#include <TopOpeBRepTool_PSoClassif.hxx>
#include <TopOpeBRepTool_PURGE.hxx>
#include <TopOpeBRepTool_PurgeInternalEdges.hxx>
#include <TopOpeBRepTool_REGUS.hxx>
#include <TopOpeBRepTool_REGUW.hxx>
#include <TopOpeBRepTool_SC.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_ShapeTool.hxx>
#include <TopOpeBRepTool_SolidClassifier.hxx>
#include <TopOpeBRepTool_STATE.hxx>
#include <TopOpeBRepTool_tol.hxx>
#include <TopOpeBRepTool_TOOL.hxx>
#include <TopOpeBRepTool_TOPOLOGY.hxx>

// template related includes
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRepTool(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopOpeBRepTool"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TopOpeBRepTool , shared_ptr<TopOpeBRepTool>>(m,"TopOpeBRepTool");

    static_cast<py::class_<TopOpeBRepTool , shared_ptr<TopOpeBRepTool> >>(m.attr("TopOpeBRepTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("PurgeClosingEdges_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & ,  const NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher> & , NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & ,  const NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher> & , NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & ) >(&TopOpeBRepTool::PurgeClosingEdges),
                    R"#(Fuse edges (in a wire) of a shape where we have useless vertex. In case face <FF> is built on UV-non-connexed wires (with the two closing edges FORWARD and REVERSED, in spite of one only), we find out the faulty edge, add the faulty shapes (edge,wire,face) to <MshNOK>. <FF> is a face descendant of <F>. <MWisOld>(wire) = 1 if wire is wire of <F> 0 wire results from <F>'s wire splitted. returns false if purge fails)#"  , py::arg("F"),  py::arg("FF"),  py::arg("MWisOld"),  py::arg("MshNOK"))
        .def_static("PurgeClosingEdges_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & ,  const NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher> & , NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & ,  const NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_ShapeMapHasher> & , NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & ) >(&TopOpeBRepTool::PurgeClosingEdges),
                    R"#(None)#"  , py::arg("F"),  py::arg("LOF"),  py::arg("MWisOld"),  py::arg("MshNOK"))
        .def_static("CorrectONUVISO_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Face & ) >(&TopOpeBRepTool::CorrectONUVISO),
                    R"#(None)#"  , py::arg("F"),  py::arg("Fsp"))
        .def_static("MakeFaces_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & ,  const NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & ,  const NCollection_IndexedMap<TopoDS_Shape, TopTools_OrientedShapeMapHasher> & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool::MakeFaces),
                    R"#(Builds up the correct list of faces <LOFF> from <LOF>, using faulty shapes from map <MshNOK>. <LOF> is the list of <F>'s descendant faces. returns false if building fails)#"  , py::arg("F"),  py::arg("LOF"),  py::arg("MshNOK"),  py::arg("LOFF"))
        .def_static("Regularize_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , NCollection_List<TopoDS_Shape> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool::Regularize),
                    R"#(Returns <False> if the face is valid (the UV representation of the face is a set of pcurves connexed by points with connexity 2). Else, splits <aFace> in order to return a list of valid faces.)#"  , py::arg("aFace"),  py::arg("aListOfFaces"),  py::arg("ESplits"))
        .def_static("RegularizeWires_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool::RegularizeWires),
                    R"#(Returns <False> if the face is valid (the UV representation of the face is a set of pcurves connexed by points with connexity 2). Else, splits wires of the face, these are boundaries of the new faces to build up; <OldWiresNewWires> describes (wire, splits of wire); <ESplits> describes (edge, edge's splits))#"  , py::arg("aFace"),  py::arg("OldWiresNewWires"),  py::arg("ESplits"))
        .def_static("RegularizeFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool::RegularizeFace),
                    R"#(Classify wire's splits of map <OldWiresnewWires> in order to compute <aListOfFaces>, the splits of <aFace>.)#"  , py::arg("aFace"),  py::arg("OldWiresnewWires"),  py::arg("aListOfFaces"))
        .def_static("RegularizeShells_s",
                    (Standard_Boolean (*)( const TopoDS_Solid & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Solid & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool::RegularizeShells),
                    R"#(Returns <False> if the shell is valid (the solid is a set of faces connexed by edges with connexity 2). Else, splits faces of the shell; <OldFacesnewFaces> describes (face, splits of face).)#"  , py::arg("aSolid"),  py::arg("OldSheNewShe"),  py::arg("FSplits"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopOpeBRepTool_OutCurveType , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopOpeBRepTool_OutCurveType , std::ostream & ) >(&TopOpeBRepTool::Print),
                    R"#(Prints <OCT> as string on stream <S>; returns <S>.)#"  , py::arg("OCT"),  py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepTool_AncestorsTool , shared_ptr<TopOpeBRepTool_AncestorsTool>>(m,"TopOpeBRepTool_AncestorsTool");

    static_cast<py::class_<TopOpeBRepTool_AncestorsTool , shared_ptr<TopOpeBRepTool_AncestorsTool> >>(m.attr("TopOpeBRepTool_AncestorsTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeAncestors_s",
                    (void (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum , NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_AncestorsTool::MakeAncestors),
                    R"#(same as package method TopExp::MapShapeListOfShapes())#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA"),  py::arg("M"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_BoxSort , shared_ptr<TopOpeBRepTool_BoxSort> >>(m.attr("TopOpeBRepTool_BoxSort"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TopOpeBRepTool_HBoxTool> & >()  , py::arg("T") )
    // custom constructors
    // methods
        .def("SetHBoxTool",
             (void (TopOpeBRepTool_BoxSort::*)( const opencascade::handle<TopOpeBRepTool_HBoxTool> & ) ) static_cast<void (TopOpeBRepTool_BoxSort::*)( const opencascade::handle<TopOpeBRepTool_HBoxTool> & ) >(&TopOpeBRepTool_BoxSort::SetHBoxTool),
             R"#(None)#"  , py::arg("T"))
        .def("HBoxTool",
             (const opencascade::handle<TopOpeBRepTool_HBoxTool> & (TopOpeBRepTool_BoxSort::*)() const) static_cast<const opencascade::handle<TopOpeBRepTool_HBoxTool> & (TopOpeBRepTool_BoxSort::*)() const>(&TopOpeBRepTool_BoxSort::HBoxTool),
             R"#(None)#" )
        .def("Clear",
             (void (TopOpeBRepTool_BoxSort::*)() ) static_cast<void (TopOpeBRepTool_BoxSort::*)() >(&TopOpeBRepTool_BoxSort::Clear),
             R"#(None)#" )
        .def("AddBoxes",
             (void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepTool_BoxSort::AddBoxes),
             R"#(None)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("MakeHAB",
             (void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepTool_BoxSort::MakeHAB),
             R"#(None)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("HAB",
             (const opencascade::handle<Bnd_HArray1OfBox> & (TopOpeBRepTool_BoxSort::*)() const) static_cast<const opencascade::handle<Bnd_HArray1OfBox> & (TopOpeBRepTool_BoxSort::*)() const>(&TopOpeBRepTool_BoxSort::HAB),
             R"#(None)#" )
        .def("HABShape",
             (const TopoDS_Shape & (TopOpeBRepTool_BoxSort::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRepTool_BoxSort::*)( const Standard_Integer ) const>(&TopOpeBRepTool_BoxSort::HABShape),
             R"#(None)#"  , py::arg("I"))
        .def("MakeCOB",
             (void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepTool_BoxSort::MakeCOB),
             R"#(None)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("AddBoxesMakeCOB",
             (void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepTool_BoxSort::AddBoxesMakeCOB),
             R"#(None)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("Compare",
             (const TColStd_ListIteratorOfListOfInteger & (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & ) ) static_cast<const TColStd_ListIteratorOfListOfInteger & (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_BoxSort::Compare),
             R"#(None)#"  , py::arg("S"))
        .def("TouchedShape",
             (const TopoDS_Shape & (TopOpeBRepTool_BoxSort::*)(  const NCollection_List<Standard_Integer>::Iterator & ) const) static_cast<const TopoDS_Shape & (TopOpeBRepTool_BoxSort::*)(  const NCollection_List<Standard_Integer>::Iterator & ) const>(&TopOpeBRepTool_BoxSort::TouchedShape),
             R"#(None)#"  , py::arg("I"))
        .def("Box",
             (const Bnd_Box & (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & ) const) static_cast<const Bnd_Box & (TopOpeBRepTool_BoxSort::*)( const TopoDS_Shape & ) const>(&TopOpeBRepTool_BoxSort::Box),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeHABCOB_s",
                    (void (*)( const opencascade::handle<Bnd_HArray1OfBox> & , Bnd_Box & ) ) static_cast<void (*)( const opencascade::handle<Bnd_HArray1OfBox> & , Bnd_Box & ) >(&TopOpeBRepTool_BoxSort::MakeHABCOB),
                    R"#(None)#"  , py::arg("HAB"),  py::arg("COB"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_C2DF , shared_ptr<TopOpeBRepTool_C2DF> >>(m.attr("TopOpeBRepTool_C2DF"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real,const Standard_Real,const TopoDS_Face & >()  , py::arg("PC"),  py::arg("f2d"),  py::arg("l2d"),  py::arg("tol"),  py::arg("F") )
    // custom constructors
    // methods
        .def("SetPC",
             (void (TopOpeBRepTool_C2DF::*)( const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (TopOpeBRepTool_C2DF::*)( const opencascade::handle<Geom2d_Curve> & , const Standard_Real , const Standard_Real , const Standard_Real ) >(&TopOpeBRepTool_C2DF::SetPC),
             R"#(None)#"  , py::arg("PC"),  py::arg("f2d"),  py::arg("l2d"),  py::arg("tol"))
        .def("SetFace",
             (void (TopOpeBRepTool_C2DF::*)( const TopoDS_Face & ) ) static_cast<void (TopOpeBRepTool_C2DF::*)( const TopoDS_Face & ) >(&TopOpeBRepTool_C2DF::SetFace),
             R"#(None)#"  , py::arg("F"))
        .def("PC",
             (const opencascade::handle<Geom2d_Curve> & (TopOpeBRepTool_C2DF::*)( Standard_Real & , Standard_Real & , Standard_Real & ) const) static_cast<const opencascade::handle<Geom2d_Curve> & (TopOpeBRepTool_C2DF::*)( Standard_Real & , Standard_Real & , Standard_Real & ) const>(&TopOpeBRepTool_C2DF::PC),
             R"#(None)#"  , py::arg("f2d"),  py::arg("l2d"),  py::arg("tol"))
        .def("Face",
             (const TopoDS_Face & (TopOpeBRepTool_C2DF::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepTool_C2DF::*)() const>(&TopOpeBRepTool_C2DF::Face),
             R"#(None)#" )
        .def("IsPC",
             (Standard_Boolean (TopOpeBRepTool_C2DF::*)( const opencascade::handle<Geom2d_Curve> & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_C2DF::*)( const opencascade::handle<Geom2d_Curve> & ) const>(&TopOpeBRepTool_C2DF::IsPC),
             R"#(None)#"  , py::arg("PC"))
        .def("IsFace",
             (Standard_Boolean (TopOpeBRepTool_C2DF::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_C2DF::*)( const TopoDS_Face & ) const>(&TopOpeBRepTool_C2DF::IsFace),
             R"#(None)#"  , py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_CLASSI , shared_ptr<TopOpeBRepTool_CLASSI> >>(m.attr("TopOpeBRepTool_CLASSI"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init2d",
             (void (TopOpeBRepTool_CLASSI::*)( const TopoDS_Face & ) ) static_cast<void (TopOpeBRepTool_CLASSI::*)( const TopoDS_Face & ) >(&TopOpeBRepTool_CLASSI::Init2d),
             R"#(None)#"  , py::arg("Fref"))
        .def("HasInit2d",
             (Standard_Boolean (TopOpeBRepTool_CLASSI::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_CLASSI::*)() const>(&TopOpeBRepTool_CLASSI::HasInit2d),
             R"#(None)#" )
        .def("Add2d",
             (Standard_Boolean (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_CLASSI::Add2d),
             R"#(None)#"  , py::arg("S"))
        .def("GetBox2d",
             (Standard_Boolean (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , Bnd_Box2d & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , Bnd_Box2d & ) >(&TopOpeBRepTool_CLASSI::GetBox2d),
             R"#(None)#"  , py::arg("S"),  py::arg("Box2d"))
        .def("ClassiBnd2d",
             (Standard_Integer (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Integer (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Real , const Standard_Boolean ) >(&TopOpeBRepTool_CLASSI::ClassiBnd2d),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("tol"),  py::arg("checklarge"))
        .def("Classip2d",
             (Standard_Integer (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Integer ) ) static_cast<Standard_Integer (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRepTool_CLASSI::Classip2d),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("stabnd2d12"))
        .def("Getface",
             (Standard_Boolean (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , TopOpeBRepTool_face & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CLASSI::*)( const TopoDS_Shape & , TopOpeBRepTool_face & ) const>(&TopOpeBRepTool_CLASSI::Getface),
             R"#(None)#"  , py::arg("S"),  py::arg("fa"))
        .def("Classilist",
             (Standard_Boolean (TopOpeBRepTool_CLASSI::*)(  const NCollection_List<TopoDS_Shape> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CLASSI::*)(  const NCollection_List<TopoDS_Shape> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_CLASSI::Classilist),
             R"#(None)#"  , py::arg("lS"),  py::arg("mapgreasma"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_CORRISO , shared_ptr<TopOpeBRepTool_CORRISO> >>(m.attr("TopOpeBRepTool_CORRISO"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("FRef") )
    // custom constructors
    // methods
        .def("Fref",
             (const TopoDS_Face & (TopOpeBRepTool_CORRISO::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepTool_CORRISO::*)() const>(&TopOpeBRepTool_CORRISO::Fref),
             R"#(None)#" )
        .def("GASref",
             (const GeomAdaptor_Surface & (TopOpeBRepTool_CORRISO::*)() const) static_cast<const GeomAdaptor_Surface & (TopOpeBRepTool_CORRISO::*)() const>(&TopOpeBRepTool_CORRISO::GASref),
             R"#(None)#" )
        .def("Refclosed",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const Standard_Integer , Standard_Real & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const Standard_Integer , Standard_Real & ) const>(&TopOpeBRepTool_CORRISO::Refclosed),
             R"#(None)#"  , py::arg("x"),  py::arg("xperiod"))
        .def("Init",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_CORRISO::Init),
             R"#(None)#"  , py::arg("S"))
        .def("S",
             (const TopoDS_Shape & (TopOpeBRepTool_CORRISO::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepTool_CORRISO::*)() const>(&TopOpeBRepTool_CORRISO::S),
             R"#(None)#" )
        .def("Eds",
             (const TopTools_ListOfShape & (TopOpeBRepTool_CORRISO::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepTool_CORRISO::*)() const>(&TopOpeBRepTool_CORRISO::Eds),
             R"#(None)#" )
        .def("UVClosed",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)() const>(&TopOpeBRepTool_CORRISO::UVClosed),
             R"#(None)#" )
        .def("Tol",
             (Standard_Real (TopOpeBRepTool_CORRISO::*)( const Standard_Integer , const Standard_Real ) const) static_cast<Standard_Real (TopOpeBRepTool_CORRISO::*)( const Standard_Integer , const Standard_Real ) const>(&TopOpeBRepTool_CORRISO::Tol),
             R"#(None)#"  , py::arg("I"),  py::arg("tol3d"))
        .def("PurgeFyClosingE",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) const>(&TopOpeBRepTool_CORRISO::PurgeFyClosingE),
             R"#(None)#"  , py::arg("ClEds"),  py::arg("fyClEds"))
        .def("EdgeOUTofBoundsUV",
             (Standard_Integer (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , const Standard_Boolean , const Standard_Real , Standard_Real & ) const) static_cast<Standard_Integer (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , const Standard_Boolean , const Standard_Real , Standard_Real & ) const>(&TopOpeBRepTool_CORRISO::EdgeOUTofBoundsUV),
             R"#(None)#"  , py::arg("E"),  py::arg("onU"),  py::arg("tolx"),  py::arg("parspE"))
        .def("EdgesOUTofBoundsUV",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Boolean , const Standard_Real , NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher> & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Boolean , const Standard_Real , NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher> & ) const>(&TopOpeBRepTool_CORRISO::EdgesOUTofBoundsUV),
             R"#(None)#"  , py::arg("EdsToCheck"),  py::arg("onU"),  py::arg("tolx"),  py::arg("FyEds"))
        .def("EdgeWithFaultyUV",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , Standard_Integer & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , Standard_Integer & ) const>(&TopOpeBRepTool_CORRISO::EdgeWithFaultyUV),
             R"#(None)#"  , py::arg("E"),  py::arg("Ivfaulty"))
        .def("EdgesWithFaultyUV",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Integer , NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher> & , const Standard_Boolean ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Integer , NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher> & , const Standard_Boolean ) const>(&TopOpeBRepTool_CORRISO::EdgesWithFaultyUV),
             R"#(None)#"  , py::arg("EdsToCheck"),  py::arg("nfybounds"),  py::arg("FyEds"),  py::arg("stopatfirst")=static_cast<const Standard_Boolean>(Standard_False))
        .def("EdgeWithFaultyUV",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Integer , TopoDS_Shape & , Standard_Integer & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Integer , TopoDS_Shape & , Standard_Integer & ) const>(&TopOpeBRepTool_CORRISO::EdgeWithFaultyUV),
             R"#(None)#"  , py::arg("EdsToCheck"),  py::arg("nfybounds"),  py::arg("fyE"),  py::arg("Ifaulty"))
        .def("TrslUV",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const Standard_Boolean ,  const NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher> & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const Standard_Boolean ,  const NCollection_DataMap<TopoDS_Shape, Standard_Integer, TopTools_OrientedShapeMapHasher> & ) >(&TopOpeBRepTool_CORRISO::TrslUV),
             R"#(None)#"  , py::arg("onU"),  py::arg("FyEds"))
        .def("GetnewS",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( TopoDS_Face & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( TopoDS_Face & ) const>(&TopOpeBRepTool_CORRISO::GetnewS),
             R"#(None)#"  , py::arg("newS"))
        .def("UVRep",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , TopOpeBRepTool_C2DF & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , TopOpeBRepTool_C2DF & ) const>(&TopOpeBRepTool_CORRISO::UVRep),
             R"#(None)#"  , py::arg("E"),  py::arg("C2DF"))
        .def("SetUVRep",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , const TopOpeBRepTool_C2DF & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Edge & , const TopOpeBRepTool_C2DF & ) >(&TopOpeBRepTool_CORRISO::SetUVRep),
             R"#(None)#"  , py::arg("E"),  py::arg("C2DF"))
        .def("Connexity",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & , NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & , NCollection_List<TopoDS_Shape> & ) const>(&TopOpeBRepTool_CORRISO::Connexity),
             R"#(None)#"  , py::arg("V"),  py::arg("Eds"))
        .def("SetConnexity",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & ,  const NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_CORRISO::SetConnexity),
             R"#(None)#"  , py::arg("V"),  py::arg("Eds"))
        .def("AddNewConnexity",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & , const TopoDS_Edge & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & , const TopoDS_Edge & ) >(&TopOpeBRepTool_CORRISO::AddNewConnexity),
             R"#(None)#"  , py::arg("V"),  py::arg("E"))
        .def("RemoveOldConnexity",
             (Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & , const TopoDS_Edge & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_CORRISO::*)( const TopoDS_Vertex & , const TopoDS_Edge & ) >(&TopOpeBRepTool_CORRISO::RemoveOldConnexity),
             R"#(None)#"  , py::arg("V"),  py::arg("E"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_CurveTool , shared_ptr<TopOpeBRepTool_CurveTool> >>(m.attr("TopOpeBRepTool_CurveTool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepTool_OutCurveType >()  , py::arg("OCT") )
        .def(py::init< const TopOpeBRepTool_GeomTool & >()  , py::arg("GT") )
    // custom constructors
    // methods
        .def("ChangeGeomTool",
             (TopOpeBRepTool_GeomTool & (TopOpeBRepTool_CurveTool::*)() ) static_cast<TopOpeBRepTool_GeomTool & (TopOpeBRepTool_CurveTool::*)() >(&TopOpeBRepTool_CurveTool::ChangeGeomTool),
             R"#(None)#" )
        .def("GetGeomTool",
             (const TopOpeBRepTool_GeomTool & (TopOpeBRepTool_CurveTool::*)() const) static_cast<const TopOpeBRepTool_GeomTool & (TopOpeBRepTool_CurveTool::*)() const>(&TopOpeBRepTool_CurveTool::GetGeomTool),
             R"#(None)#" )
        .def("SetGeomTool",
             (void (TopOpeBRepTool_CurveTool::*)( const TopOpeBRepTool_GeomTool & ) ) static_cast<void (TopOpeBRepTool_CurveTool::*)( const TopOpeBRepTool_GeomTool & ) >(&TopOpeBRepTool_CurveTool::SetGeomTool),
             R"#(None)#"  , py::arg("GT"))
        .def("MakeCurves",
             (Standard_Boolean (TopOpeBRepTool_CurveTool::*)( const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Shape & , const TopoDS_Shape & , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_CurveTool::*)( const Standard_Real , const Standard_Real , const opencascade::handle<Geom_Curve> & , const opencascade::handle<Geom2d_Curve> & , const opencascade::handle<Geom2d_Curve> & , const TopoDS_Shape & , const TopoDS_Shape & , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & ) const>(&TopOpeBRepTool_CurveTool::MakeCurves),
             R"#(Approximates curves. Returns False in the case of failure)#"  , py::arg("min"),  py::arg("max"),  py::arg("C3D"),  py::arg("PC1"),  py::arg("PC2"),  py::arg("S1"),  py::arg("S2"),  py::arg("C3DN"),  py::arg("PC1N"),  py::arg("PC2N"),  py::arg("Tol3d"),  py::arg("Tol2d"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeBSpline1fromPnt_s",
                    (opencascade::handle<Geom_Curve> (*)(  const NCollection_Array1<gp_Pnt> & ) ) static_cast<opencascade::handle<Geom_Curve> (*)(  const NCollection_Array1<gp_Pnt> & ) >(&TopOpeBRepTool_CurveTool::MakeBSpline1fromPnt),
                    R"#(None)#"  , py::arg("P"))
        .def_static("MakeBSpline1fromPnt2d_s",
                    (opencascade::handle<Geom2d_Curve> (*)(  const NCollection_Array1<gp_Pnt2d> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)(  const NCollection_Array1<gp_Pnt2d> & ) >(&TopOpeBRepTool_CurveTool::MakeBSpline1fromPnt2d),
                    R"#(None)#"  , py::arg("P"))
        .def_static("IsProjectable_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<Geom_Curve> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<Geom_Curve> & ) >(&TopOpeBRepTool_CurveTool::IsProjectable),
                    R"#(None)#"  , py::arg("S"),  py::arg("C"))
        .def_static("MakePCurveOnFace_s",
                    (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Shape & , const opencascade::handle<Geom_Curve> & , Standard_Real & , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Shape & , const opencascade::handle<Geom_Curve> & , Standard_Real & , const Standard_Real , const Standard_Real ) >(&TopOpeBRepTool_CurveTool::MakePCurveOnFace),
                    R"#(None)#"  , py::arg("S"),  py::arg("C"),  py::arg("TolReached2d"),  py::arg("first")=static_cast<const Standard_Real>(0.0),  py::arg("last")=static_cast<const Standard_Real>(0.0))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_FuseEdges , shared_ptr<TopOpeBRepTool_FuseEdges> >>(m.attr("TopOpeBRepTool_FuseEdges"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("theShape"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("AvoidEdges",
             (void (TopOpeBRepTool_FuseEdges::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepTool_FuseEdges::*)(  const NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_FuseEdges::AvoidEdges),
             R"#(set edges to avoid being fused)#"  , py::arg("theMapEdg"))
        .def("Edges",
             (void (TopOpeBRepTool_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopTools_ListOfShape, TColStd_MapIntegerHasher> & ) ) static_cast<void (TopOpeBRepTool_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopTools_ListOfShape, TColStd_MapIntegerHasher> & ) >(&TopOpeBRepTool_FuseEdges::Edges),
             R"#(returns all the list of edges to be fused each list of the map represent a set of connex edges that can be fused.)#"  , py::arg("theMapLstEdg"))
        .def("ResultEdges",
             (void (TopOpeBRepTool_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher> & ) ) static_cast<void (TopOpeBRepTool_FuseEdges::*)( NCollection_DataMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher> & ) >(&TopOpeBRepTool_FuseEdges::ResultEdges),
             R"#(returns all the fused edges. each integer entry in the map corresponds to the integer in the DataMapOfIntegerListOfShape we get in method Edges. That is to say, to the list of edges in theMapLstEdg(i) corresponds the resulting edge theMapEdge(i))#"  , py::arg("theMapEdg"))
        .def("Faces",
             (void (TopOpeBRepTool_FuseEdges::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepTool_FuseEdges::*)( NCollection_DataMap<TopoDS_Shape, TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_FuseEdges::Faces),
             R"#(returns the map of modified faces.)#"  , py::arg("theMapFac"))
        .def("Shape",
             (TopoDS_Shape & (TopOpeBRepTool_FuseEdges::*)() ) static_cast<TopoDS_Shape & (TopOpeBRepTool_FuseEdges::*)() >(&TopOpeBRepTool_FuseEdges::Shape),
             R"#(returns myShape modified with the list of internal edges removed from it.)#" )
        .def("NbVertices",
             (Standard_Integer (TopOpeBRepTool_FuseEdges::*)() ) static_cast<Standard_Integer (TopOpeBRepTool_FuseEdges::*)() >(&TopOpeBRepTool_FuseEdges::NbVertices),
             R"#(returns the number of vertices candidate to be removed)#" )
        .def("Perform",
             (void (TopOpeBRepTool_FuseEdges::*)() ) static_cast<void (TopOpeBRepTool_FuseEdges::*)() >(&TopOpeBRepTool_FuseEdges::Perform),
             R"#(Using map of list of connex edges, fuse each list to one edge and then update myShape)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_GeomTool , shared_ptr<TopOpeBRepTool_GeomTool> >>(m.attr("TopOpeBRepTool_GeomTool"))
    // constructors
        .def(py::init< const TopOpeBRepTool_OutCurveType,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("TypeC3D")=static_cast<const TopOpeBRepTool_OutCurveType>(TopOpeBRepTool_BSPLINE1),  py::arg("CompC3D")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("CompPC1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("CompPC2")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Define",
             (void (TopOpeBRepTool_GeomTool::*)( const TopOpeBRepTool_OutCurveType , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const TopOpeBRepTool_OutCurveType , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&TopOpeBRepTool_GeomTool::Define),
             R"#(None)#"  , py::arg("TypeC3D"),  py::arg("CompC3D"),  py::arg("CompPC1"),  py::arg("CompPC2"))
        .def("Define",
             (void (TopOpeBRepTool_GeomTool::*)( const TopOpeBRepTool_OutCurveType ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const TopOpeBRepTool_OutCurveType ) >(&TopOpeBRepTool_GeomTool::Define),
             R"#(None)#"  , py::arg("TypeC3D"))
        .def("DefineCurves",
             (void (TopOpeBRepTool_GeomTool::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const Standard_Boolean ) >(&TopOpeBRepTool_GeomTool::DefineCurves),
             R"#(None)#"  , py::arg("CompC3D"))
        .def("DefinePCurves1",
             (void (TopOpeBRepTool_GeomTool::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const Standard_Boolean ) >(&TopOpeBRepTool_GeomTool::DefinePCurves1),
             R"#(None)#"  , py::arg("CompPC1"))
        .def("DefinePCurves2",
             (void (TopOpeBRepTool_GeomTool::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const Standard_Boolean ) >(&TopOpeBRepTool_GeomTool::DefinePCurves2),
             R"#(None)#"  , py::arg("CompPC2"))
        .def("Define",
             (void (TopOpeBRepTool_GeomTool::*)( const TopOpeBRepTool_GeomTool & ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const TopOpeBRepTool_GeomTool & ) >(&TopOpeBRepTool_GeomTool::Define),
             R"#(None)#"  , py::arg("GT"))
        .def("SetTolerances",
             (void (TopOpeBRepTool_GeomTool::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const Standard_Real , const Standard_Real ) >(&TopOpeBRepTool_GeomTool::SetTolerances),
             R"#(None)#"  , py::arg("tol3d"),  py::arg("tol2d"))
        .def("NbPntMax",
             (Standard_Integer (TopOpeBRepTool_GeomTool::*)() const) static_cast<Standard_Integer (TopOpeBRepTool_GeomTool::*)() const>(&TopOpeBRepTool_GeomTool::NbPntMax),
             R"#(None)#" )
        .def("SetNbPntMax",
             (void (TopOpeBRepTool_GeomTool::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepTool_GeomTool::*)( const Standard_Integer ) >(&TopOpeBRepTool_GeomTool::SetNbPntMax),
             R"#(None)#"  , py::arg("NbPntMax"))
        .def("TypeC3D",
             (TopOpeBRepTool_OutCurveType (TopOpeBRepTool_GeomTool::*)() const) static_cast<TopOpeBRepTool_OutCurveType (TopOpeBRepTool_GeomTool::*)() const>(&TopOpeBRepTool_GeomTool::TypeC3D),
             R"#(None)#" )
        .def("CompC3D",
             (Standard_Boolean (TopOpeBRepTool_GeomTool::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_GeomTool::*)() const>(&TopOpeBRepTool_GeomTool::CompC3D),
             R"#(None)#" )
        .def("CompPC1",
             (Standard_Boolean (TopOpeBRepTool_GeomTool::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_GeomTool::*)() const>(&TopOpeBRepTool_GeomTool::CompPC1),
             R"#(None)#" )
        .def("CompPC2",
             (Standard_Boolean (TopOpeBRepTool_GeomTool::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_GeomTool::*)() const>(&TopOpeBRepTool_GeomTool::CompPC2),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetTolerances",
             []( TopOpeBRepTool_GeomTool &self   ){ Standard_Real  tol3d; Standard_Real  tol2d; self.GetTolerances(tol3d,tol2d); return std::make_tuple(tol3d,tol2d); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_HBoxTool ,opencascade::handle<TopOpeBRepTool_HBoxTool> , Standard_Transient>>(m.attr("TopOpeBRepTool_HBoxTool"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TopOpeBRepTool_HBoxTool::*)() ) static_cast<void (TopOpeBRepTool_HBoxTool::*)() >(&TopOpeBRepTool_HBoxTool::Clear),
             R"#(None)#" )
        .def("AddBoxes",
             (void (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepTool_HBoxTool::AddBoxes),
             R"#(None)#"  , py::arg("S"),  py::arg("TS"),  py::arg("TA")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("AddBox",
             (void (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_HBoxTool::AddBox),
             R"#(None)#"  , py::arg("S"))
        .def("Box",
             (const Bnd_Box & (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) ) static_cast<const Bnd_Box & (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_HBoxTool::Box),
             R"#(None)#"  , py::arg("S"))
        .def("Box",
             (const Bnd_Box & (TopOpeBRepTool_HBoxTool::*)( const Standard_Integer ) const) static_cast<const Bnd_Box & (TopOpeBRepTool_HBoxTool::*)( const Standard_Integer ) const>(&TopOpeBRepTool_HBoxTool::Box),
             R"#(None)#"  , py::arg("I"))
        .def("HasBox",
             (Standard_Boolean (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) const>(&TopOpeBRepTool_HBoxTool::HasBox),
             R"#(None)#"  , py::arg("S"))
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepTool_HBoxTool::*)( const Standard_Integer ) const) static_cast<const TopoDS_Shape & (TopOpeBRepTool_HBoxTool::*)( const Standard_Integer ) const>(&TopOpeBRepTool_HBoxTool::Shape),
             R"#(None)#"  , py::arg("I"))
        .def("Index",
             (Standard_Integer (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) const) static_cast<Standard_Integer (TopOpeBRepTool_HBoxTool::*)( const TopoDS_Shape & ) const>(&TopOpeBRepTool_HBoxTool::Index),
             R"#(None)#"  , py::arg("S"))
        .def("Extent",
             (Standard_Integer (TopOpeBRepTool_HBoxTool::*)() const) static_cast<Standard_Integer (TopOpeBRepTool_HBoxTool::*)() const>(&TopOpeBRepTool_HBoxTool::Extent),
             R"#(None)#" )
        .def("ChangeIMS",
             (TopOpeBRepTool_IndexedDataMapOfShapeBox & (TopOpeBRepTool_HBoxTool::*)() ) static_cast<TopOpeBRepTool_IndexedDataMapOfShapeBox & (TopOpeBRepTool_HBoxTool::*)() >(&TopOpeBRepTool_HBoxTool::ChangeIMS),
             R"#(None)#" )
        .def("IMS",
             (const TopOpeBRepTool_IndexedDataMapOfShapeBox & (TopOpeBRepTool_HBoxTool::*)() const) static_cast<const TopOpeBRepTool_IndexedDataMapOfShapeBox & (TopOpeBRepTool_HBoxTool::*)() const>(&TopOpeBRepTool_HBoxTool::IMS),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepTool_HBoxTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepTool_HBoxTool::*)() const>(&TopOpeBRepTool_HBoxTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ComputeBox_s",
                    (void (*)( const TopoDS_Shape & , Bnd_Box & ) ) static_cast<void (*)( const TopoDS_Shape & , Bnd_Box & ) >(&TopOpeBRepTool_HBoxTool::ComputeBox),
                    R"#(None)#"  , py::arg("S"),  py::arg("B"))
        .def_static("ComputeBoxOnVertices_s",
                    (void (*)( const TopoDS_Shape & , Bnd_Box & ) ) static_cast<void (*)( const TopoDS_Shape & , Bnd_Box & ) >(&TopOpeBRepTool_HBoxTool::ComputeBoxOnVertices),
                    R"#(None)#"  , py::arg("S"),  py::arg("B"))
        .def_static("DumpB_s",
                    (void (*)( const Bnd_Box & ) ) static_cast<void (*)( const Bnd_Box & ) >(&TopOpeBRepTool_HBoxTool::DumpB),
                    R"#(None)#"  , py::arg("B"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepTool_HBoxTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepTool_HBoxTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_PurgeInternalEdges , shared_ptr<TopOpeBRepTool_PurgeInternalEdges> >>(m.attr("TopOpeBRepTool_PurgeInternalEdges"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("theShape"),  py::arg("PerformNow")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Faces",
             (void (TopOpeBRepTool_PurgeInternalEdges::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepTool_PurgeInternalEdges::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_PurgeInternalEdges::Faces),
             R"#(returns the list internal edges associated with the faces of the myShape. If PerformNow was False when created, then call the private Perform method that do the main job.)#"  , py::arg("theMapFacLstEdg"))
        .def("Shape",
             (TopoDS_Shape & (TopOpeBRepTool_PurgeInternalEdges::*)() ) static_cast<TopoDS_Shape & (TopOpeBRepTool_PurgeInternalEdges::*)() >(&TopOpeBRepTool_PurgeInternalEdges::Shape),
             R"#(returns myShape modified with the list of internal edges removed from it.)#" )
        .def("NbEdges",
             (Standard_Integer (TopOpeBRepTool_PurgeInternalEdges::*)() const) static_cast<Standard_Integer (TopOpeBRepTool_PurgeInternalEdges::*)() const>(&TopOpeBRepTool_PurgeInternalEdges::NbEdges),
             R"#(returns the number of edges candidate to be removed)#" )
        .def("IsDone",
             (Standard_Boolean (TopOpeBRepTool_PurgeInternalEdges::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_PurgeInternalEdges::*)() const>(&TopOpeBRepTool_PurgeInternalEdges::IsDone),
             R"#(returns False if the list of internal edges has not been extracted)#" )
        .def("Perform",
             (void (TopOpeBRepTool_PurgeInternalEdges::*)() ) static_cast<void (TopOpeBRepTool_PurgeInternalEdges::*)() >(&TopOpeBRepTool_PurgeInternalEdges::Perform),
             R"#(Using the list of internal edge from each face, rebuild myShape by removing thoses edges.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_REGUS , shared_ptr<TopOpeBRepTool_REGUS> >>(m.attr("TopOpeBRepTool_REGUS"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepTool_REGUS::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepTool_REGUS::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_REGUS::Init),
             R"#(None)#"  , py::arg("S"))
        .def("S",
             (const TopoDS_Shape & (TopOpeBRepTool_REGUS::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepTool_REGUS::*)() const>(&TopOpeBRepTool_REGUS::S),
             R"#(None)#" )
        .def("MapS",
             (Standard_Boolean (TopOpeBRepTool_REGUS::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUS::*)() >(&TopOpeBRepTool_REGUS::MapS),
             R"#(None)#" )
        .def("SplitFaces",
             (Standard_Boolean (TopOpeBRepTool_REGUS::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUS::*)() >(&TopOpeBRepTool_REGUS::SplitFaces),
             R"#(None)#" )
        .def("REGU",
             (Standard_Boolean (TopOpeBRepTool_REGUS::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUS::*)() >(&TopOpeBRepTool_REGUS::REGU),
             R"#(None)#" )
        .def("SetFsplits",
             (void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_REGUS::SetFsplits),
             R"#(None)#"  , py::arg("Fsplits"))
        .def("GetFsplits",
             (void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const) static_cast<void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const>(&TopOpeBRepTool_REGUS::GetFsplits),
             R"#(None)#"  , py::arg("Fsplits"))
        .def("SetOshNsh",
             (void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_REGUS::SetOshNsh),
             R"#(None)#"  , py::arg("OshNsh"))
        .def("GetOshNsh",
             (void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const) static_cast<void (TopOpeBRepTool_REGUS::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const>(&TopOpeBRepTool_REGUS::GetOshNsh),
             R"#(None)#"  , py::arg("OshNsh"))
        .def("InitBlock",
             (Standard_Boolean (TopOpeBRepTool_REGUS::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUS::*)() >(&TopOpeBRepTool_REGUS::InitBlock),
             R"#(None)#" )
        .def("NextinBlock",
             (Standard_Boolean (TopOpeBRepTool_REGUS::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUS::*)() >(&TopOpeBRepTool_REGUS::NextinBlock),
             R"#(None)#" )
        .def("NearestF",
             (Standard_Boolean (TopOpeBRepTool_REGUS::*)( const TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & , TopoDS_Face & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_REGUS::*)( const TopoDS_Edge & ,  const NCollection_List<TopoDS_Shape> & , TopoDS_Face & ) const>(&TopOpeBRepTool_REGUS::NearestF),
             R"#(None)#"  , py::arg("e"),  py::arg("lof"),  py::arg("ffound"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("WireToFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_REGUS::WireToFace),
                    R"#(None)#"  , py::arg("Fanc"),  py::arg("nWs"),  py::arg("nFs"))
        .def_static("SplitF_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_REGUS::SplitF),
                    R"#(None)#"  , py::arg("Fanc"),  py::arg("FSplits"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_REGUW , shared_ptr<TopOpeBRepTool_REGUW> >>(m.attr("TopOpeBRepTool_REGUW"))
    // constructors
        .def(py::init< const TopoDS_Face & >()  , py::arg("FRef") )
    // custom constructors
    // methods
        .def("Fref",
             (const TopoDS_Face & (TopOpeBRepTool_REGUW::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepTool_REGUW::*)() const>(&TopOpeBRepTool_REGUW::Fref),
             R"#(None)#" )
        .def("SetEsplits",
             (void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_REGUW::SetEsplits),
             R"#(None)#"  , py::arg("Esplits"))
        .def("GetEsplits",
             (void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const) static_cast<void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const>(&TopOpeBRepTool_REGUW::GetEsplits),
             R"#(None)#"  , py::arg("Esplits"))
        .def("SetOwNw",
             (void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepTool_REGUW::SetOwNw),
             R"#(None)#"  , py::arg("OwNw"))
        .def("GetOwNw",
             (void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const) static_cast<void (TopOpeBRepTool_REGUW::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) const>(&TopOpeBRepTool_REGUW::GetOwNw),
             R"#(None)#"  , py::arg("OwNw"))
        .def("SplitEds",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)() >(&TopOpeBRepTool_REGUW::SplitEds),
             R"#(None)#" )
        .def("Init",
             (void (TopOpeBRepTool_REGUW::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepTool_REGUW::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_REGUW::Init),
             R"#(None)#"  , py::arg("S"))
        .def("S",
             (const TopoDS_Shape & (TopOpeBRepTool_REGUW::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepTool_REGUW::*)() const>(&TopOpeBRepTool_REGUW::S),
             R"#(None)#" )
        .def("HasInit",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)() const>(&TopOpeBRepTool_REGUW::HasInit),
             R"#(None)#" )
        .def("MapS",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)() >(&TopOpeBRepTool_REGUW::MapS),
             R"#(None)#" )
        .def("REGU",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)( const Standard_Integer , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)( const Standard_Integer , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_REGUW::REGU),
             R"#(None)#"  , py::arg("istep"),  py::arg("Scur"),  py::arg("Splits"))
        .def("REGU",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)() >(&TopOpeBRepTool_REGUW::REGU),
             R"#(None)#" )
        .def("GetSplits",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)( NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)( NCollection_List<TopoDS_Shape> & ) const>(&TopOpeBRepTool_REGUW::GetSplits),
             R"#(None)#"  , py::arg("Splits"))
        .def("InitBlock",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)() >(&TopOpeBRepTool_REGUW::InitBlock),
             R"#(None)#" )
        .def("NextinBlock",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)() ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)() >(&TopOpeBRepTool_REGUW::NextinBlock),
             R"#(None)#" )
        .def("NearestE",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Edge & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Edge & ) const>(&TopOpeBRepTool_REGUW::NearestE),
             R"#(None)#"  , py::arg("loe"),  py::arg("efound"))
        .def("Connexity",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & , TopOpeBRepTool_connexity & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & , TopOpeBRepTool_connexity & ) const>(&TopOpeBRepTool_REGUW::Connexity),
             R"#(None)#"  , py::arg("v"),  py::arg("co"))
        .def("AddNewConnexity",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & , const Standard_Integer , const TopoDS_Edge & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & , const Standard_Integer , const TopoDS_Edge & ) >(&TopOpeBRepTool_REGUW::AddNewConnexity),
             R"#(None)#"  , py::arg("v"),  py::arg("OriKey"),  py::arg("e"))
        .def("RemoveOldConnexity",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & , const Standard_Integer , const TopoDS_Edge & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & , const Standard_Integer , const TopoDS_Edge & ) >(&TopOpeBRepTool_REGUW::RemoveOldConnexity),
             R"#(None)#"  , py::arg("v"),  py::arg("OriKey"),  py::arg("e"))
        .def("UpdateMultiple",
             (Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_REGUW::*)( const TopoDS_Vertex & ) >(&TopOpeBRepTool_REGUW::UpdateMultiple),
             R"#(None)#"  , py::arg("v"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_ShapeClassifier , shared_ptr<TopOpeBRepTool_ShapeClassifier> >>(m.attr("TopOpeBRepTool_ShapeClassifier"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("SRef") )
    // custom constructors
    // methods
        .def("ClearAll",
             (void (TopOpeBRepTool_ShapeClassifier::*)() ) static_cast<void (TopOpeBRepTool_ShapeClassifier::*)() >(&TopOpeBRepTool_ShapeClassifier::ClearAll),
             R"#(reset all internal data (SolidClassifier included))#" )
        .def("ClearCurrent",
             (void (TopOpeBRepTool_ShapeClassifier::*)() ) static_cast<void (TopOpeBRepTool_ShapeClassifier::*)() >(&TopOpeBRepTool_ShapeClassifier::ClearCurrent),
             R"#(reset all internal data (except SolidClassified))#" )
        .def("SetReference",
             (void (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeClassifier::SetReference),
             R"#(Set SRef as reference shape the next StateShapeReference(S,AvoidS) calls will classify S with SRef.)#"  , py::arg("SRef"))
        .def("StateShapeShape",
             (TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Integer ) ) static_cast<TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRepTool_ShapeClassifier::StateShapeShape),
             R"#(classify shape S compared with shape SRef. samedomain = 0 : S1,S2 are not same domain samedomain = 1 : S1,S2 are same domain)#"  , py::arg("S"),  py::arg("SRef"),  py::arg("samedomain")=static_cast<const Standard_Integer>(0))
        .def("SameDomain",
             (Standard_Integer (TopOpeBRepTool_ShapeClassifier::*)() const) static_cast<Standard_Integer (TopOpeBRepTool_ShapeClassifier::*)() const>(&TopOpeBRepTool_ShapeClassifier::SameDomain),
             R"#(None)#" )
        .def("SameDomain",
             (void (TopOpeBRepTool_ShapeClassifier::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepTool_ShapeClassifier::*)( const Standard_Integer ) >(&TopOpeBRepTool_ShapeClassifier::SameDomain),
             R"#(set mode for next StateShapeShape call samedomain = true --> S,Sref are same domain --> point on restriction (ON S) is used to classify S. samedomain = false --> S,Sref are not domain --> point not on restriction of S (IN S) is used to classify S. samedomain value is used only in next StateShapeShape call)#"  , py::arg("samedomain"))
        .def("StateShapeShape",
             (TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeClassifier::StateShapeShape),
             R"#(classify shape S compared with shape SRef. AvoidS is not used in classification; AvoidS may be IsNull(). (usefull to avoid ON or UNKNOWN state in special cases))#"  , py::arg("S"),  py::arg("AvoidS"),  py::arg("SRef"))
        .def("StateShapeShape",
             (TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeClassifier::StateShapeShape),
             R"#(classify shape S compared with shape SRef. LAvoidS is list of S subshapes to avoid in classification AvoidS is not used in classification; AvoidS may be IsNull(). (usefull to avoid ON or UNKNOWN state in special cases))#"  , py::arg("S"),  py::arg("LAvoidS"),  py::arg("SRef"))
        .def("StateShapeReference",
             (TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeClassifier::StateShapeReference),
             R"#(classify shape S compared with reference shape. AvoidS is not used in classification; AvoidS may be IsNull(). (usefull to avoid ON or UNKNOWN state in special cases))#"  , py::arg("S"),  py::arg("AvoidS"))
        .def("StateShapeReference",
             (TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_ShapeClassifier::StateShapeReference),
             R"#(classify shape S compared with reference shape. LAvoidS is list of S subshapes to avoid in classification (usefull to avoid ON or UNKNOWN state in special cases))#"  , py::arg("S"),  py::arg("LAvoidS"))
        .def("ChangeSolidClassifier",
             (TopOpeBRepTool_SolidClassifier & (TopOpeBRepTool_ShapeClassifier::*)() ) static_cast<TopOpeBRepTool_SolidClassifier & (TopOpeBRepTool_ShapeClassifier::*)() >(&TopOpeBRepTool_ShapeClassifier::ChangeSolidClassifier),
             R"#(None)#" )
        .def("StateP2DReference",
             (void (TopOpeBRepTool_ShapeClassifier::*)( const gp_Pnt2d & ) ) static_cast<void (TopOpeBRepTool_ShapeClassifier::*)( const gp_Pnt2d & ) >(&TopOpeBRepTool_ShapeClassifier::StateP2DReference),
             R"#(classify point P2D with myRef)#"  , py::arg("P2D"))
        .def("StateP3DReference",
             (void (TopOpeBRepTool_ShapeClassifier::*)( const gp_Pnt & ) ) static_cast<void (TopOpeBRepTool_ShapeClassifier::*)( const gp_Pnt & ) >(&TopOpeBRepTool_ShapeClassifier::StateP3DReference),
             R"#(classify point P3D with myRef)#"  , py::arg("P3D"))
        .def("State",
             (TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)() const) static_cast<TopAbs_State (TopOpeBRepTool_ShapeClassifier::*)() const>(&TopOpeBRepTool_ShapeClassifier::State),
             R"#(return field myState)#" )
        .def("P2D",
             (const gp_Pnt2d & (TopOpeBRepTool_ShapeClassifier::*)() const) static_cast<const gp_Pnt2d & (TopOpeBRepTool_ShapeClassifier::*)() const>(&TopOpeBRepTool_ShapeClassifier::P2D),
             R"#(None)#" )
        .def("P3D",
             (const gp_Pnt & (TopOpeBRepTool_ShapeClassifier::*)() const) static_cast<const gp_Pnt & (TopOpeBRepTool_ShapeClassifier::*)() const>(&TopOpeBRepTool_ShapeClassifier::P3D),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_ShapeExplorer , shared_ptr<TopOpeBRepTool_ShapeExplorer> , TopExp_Explorer>>(m.attr("TopOpeBRepTool_ShapeExplorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopAbs_ShapeEnum,const TopAbs_ShapeEnum >()  , py::arg("S"),  py::arg("ToFind"),  py::arg("ToAvoid")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE) )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepTool_ShapeExplorer::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepTool_ShapeExplorer::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepTool_ShapeExplorer::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("ToFind"),  py::arg("ToAvoid")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("Next",
             (void (TopOpeBRepTool_ShapeExplorer::*)() ) static_cast<void (TopOpeBRepTool_ShapeExplorer::*)() >(&TopOpeBRepTool_ShapeExplorer::Next),
             R"#(Moves to the next Shape in the exploration.)#" )
        .def("Index",
             (Standard_Integer (TopOpeBRepTool_ShapeExplorer::*)() const) static_cast<Standard_Integer (TopOpeBRepTool_ShapeExplorer::*)() const>(&TopOpeBRepTool_ShapeExplorer::Index),
             R"#(Index of current sub-shape)#" )
        .def("DumpCurrent",
             (Standard_OStream & (TopOpeBRepTool_ShapeExplorer::*)( std::ostream & ) const) static_cast<Standard_OStream & (TopOpeBRepTool_ShapeExplorer::*)( std::ostream & ) const>(&TopOpeBRepTool_ShapeExplorer::DumpCurrent),
             R"#(Dump info on current shape to stream)#"  , py::arg("OS"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepTool_ShapeTool , shared_ptr<TopOpeBRepTool_ShapeTool>>(m,"TopOpeBRepTool_ShapeTool");

    static_cast<py::class_<TopOpeBRepTool_ShapeTool , shared_ptr<TopOpeBRepTool_ShapeTool> >>(m.attr("TopOpeBRepTool_ShapeTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Tolerance_s",
                    (Standard_Real (*)( const TopoDS_Shape & ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeTool::Tolerance),
                    R"#(Returns the tolerance of the shape <S>. If the shape <S> is Null, returns 0.)#"  , py::arg("S"))
        .def_static("Pnt_s",
                    (gp_Pnt (*)( const TopoDS_Shape & ) ) static_cast<gp_Pnt (*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeTool::Pnt),
                    R"#(Returns 3D point of vertex <S>.)#"  , py::arg("S"))
        .def_static("BASISCURVE_s",
                    (opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom_Curve> & ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const opencascade::handle<Geom_Curve> & ) >(&TopOpeBRepTool_ShapeTool::BASISCURVE),
                    R"#(None)#"  , py::arg("C"))
        .def_static("BASISCURVE_s",
                    (opencascade::handle<Geom_Curve> (*)( const TopoDS_Edge & ) ) static_cast<opencascade::handle<Geom_Curve> (*)( const TopoDS_Edge & ) >(&TopOpeBRepTool_ShapeTool::BASISCURVE),
                    R"#(None)#"  , py::arg("E"))
        .def_static("BASISSURFACE_s",
                    (opencascade::handle<Geom_Surface> (*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<opencascade::handle<Geom_Surface> (*)( const opencascade::handle<Geom_Surface> & ) >(&TopOpeBRepTool_ShapeTool::BASISSURFACE),
                    R"#(None)#"  , py::arg("S"))
        .def_static("BASISSURFACE_s",
                    (opencascade::handle<Geom_Surface> (*)( const TopoDS_Face & ) ) static_cast<opencascade::handle<Geom_Surface> (*)( const TopoDS_Face & ) >(&TopOpeBRepTool_ShapeTool::BASISSURFACE),
                    R"#(None)#"  , py::arg("F"))
        .def_static("Closed_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeTool::Closed),
                    R"#(indicates wheter shape S1 is a closing shape on S2 or not.)#"  , py::arg("S1"),  py::arg("S2"))
        .def_static("PeriodizeParameter_s",
                    (Standard_Real (*)( const Standard_Real , const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Real (*)( const Standard_Real , const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeTool::PeriodizeParameter),
                    R"#(None)#"  , py::arg("par"),  py::arg("EE"),  py::arg("FF"))
        .def_static("ShapesSameOriented_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeTool::ShapesSameOriented),
                    R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def_static("SurfacesSameOriented_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Surface & , const BRepAdaptor_Surface & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Surface & , const BRepAdaptor_Surface & ) >(&TopOpeBRepTool_ShapeTool::SurfacesSameOriented),
                    R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def_static("FacesSameOriented_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeTool::FacesSameOriented),
                    R"#(None)#"  , py::arg("F1"),  py::arg("F2"))
        .def_static("CurvesSameOriented_s",
                    (Standard_Boolean (*)( const BRepAdaptor_Curve & , const BRepAdaptor_Curve & ) ) static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & , const BRepAdaptor_Curve & ) >(&TopOpeBRepTool_ShapeTool::CurvesSameOriented),
                    R"#(None)#"  , py::arg("C1"),  py::arg("C2"))
        .def_static("EdgesSameOriented_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_ShapeTool::EdgesSameOriented),
                    R"#(None)#"  , py::arg("E1"),  py::arg("E2"))
        .def_static("EdgeData_s",
                    (Standard_Real (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Dir & , gp_Dir & , Standard_Real & ) ) static_cast<Standard_Real (*)( const BRepAdaptor_Curve & , const Standard_Real , gp_Dir & , gp_Dir & , Standard_Real & ) >(&TopOpeBRepTool_ShapeTool::EdgeData),
                    R"#(Compute tangent T, normal N, curvature C at point of parameter P on curve BRAC. Returns the tolerance indicating if T,N are null.)#"  , py::arg("BRAC"),  py::arg("P"),  py::arg("T"),  py::arg("N"),  py::arg("C"))
        .def_static("EdgeData_s",
                    (Standard_Real (*)( const TopoDS_Shape & , const Standard_Real , gp_Dir & , gp_Dir & , Standard_Real & ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , const Standard_Real , gp_Dir & , gp_Dir & , Standard_Real & ) >(&TopOpeBRepTool_ShapeTool::EdgeData),
                    R"#(Same as previous on edge E.)#"  , py::arg("E"),  py::arg("P"),  py::arg("T"),  py::arg("N"),  py::arg("C"))
        .def_static("Resolution3dU_s",
                    (Standard_Real (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) >(&TopOpeBRepTool_ShapeTool::Resolution3dU),
                    R"#(None)#"  , py::arg("SU"),  py::arg("Tol2d"))
        .def_static("Resolution3dV_s",
                    (Standard_Real (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) >(&TopOpeBRepTool_ShapeTool::Resolution3dV),
                    R"#(None)#"  , py::arg("SU"),  py::arg("Tol2d"))
        .def_static("Resolution3d_s",
                    (Standard_Real (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) ) static_cast<Standard_Real (*)( const opencascade::handle<Geom_Surface> & , const Standard_Real ) >(&TopOpeBRepTool_ShapeTool::Resolution3d),
                    R"#(None)#"  , py::arg("SU"),  py::arg("Tol2d"))
        .def_static("Resolution3d_s",
                    (Standard_Real (*)( const TopoDS_Face & , const Standard_Real ) ) static_cast<Standard_Real (*)( const TopoDS_Face & , const Standard_Real ) >(&TopOpeBRepTool_ShapeTool::Resolution3d),
                    R"#(None)#"  , py::arg("F"),  py::arg("Tol2d"))
    // static methods using call by reference i.s.o. return
        .def_static("UVBOUNDS_s",
                    []( const opencascade::handle<Geom_Surface> & S ){ Standard_Boolean  UPeri; Standard_Boolean  VPeri; Standard_Real  Umin; Standard_Real  Umax; Standard_Real  Vmin; Standard_Real  Vmax; TopOpeBRepTool_ShapeTool::UVBOUNDS(S,UPeri,VPeri,Umin,Umax,Vmin,Vmax); return std::make_tuple(UPeri,VPeri,Umin,Umax,Vmin,Vmax); },
                    R"#(None)#"  , py::arg("S"))
        .def_static("UVBOUNDS_s",
                    []( const TopoDS_Face & F ){ Standard_Boolean  UPeri; Standard_Boolean  VPeri; Standard_Real  Umin; Standard_Real  Umax; Standard_Real  Vmin; Standard_Real  Vmax; TopOpeBRepTool_ShapeTool::UVBOUNDS(F,UPeri,VPeri,Umin,Umax,Vmin,Vmax); return std::make_tuple(UPeri,VPeri,Umin,Umax,Vmin,Vmax); },
                    R"#(None)#"  , py::arg("F"))
        .def_static("AdjustOnPeriodic_s",
                    []( const TopoDS_Shape & S ){ Standard_Real  u; Standard_Real  v; TopOpeBRepTool_ShapeTool::AdjustOnPeriodic(S,u,v); return std::make_tuple(u,v); },
                    R"#(ajust u,v values in UVBounds of the domain of the geometric shape <S>, according to Uperiodicity and VPeriodicity of the domain. <S> is assumed to be a face. u and/or v is/are not modified when the domain is not periodic in U and/or V .)#"  , py::arg("S"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_SolidClassifier , shared_ptr<TopOpeBRepTool_SolidClassifier> >>(m.attr("TopOpeBRepTool_SolidClassifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TopOpeBRepTool_SolidClassifier::*)() ) static_cast<void (TopOpeBRepTool_SolidClassifier::*)() >(&TopOpeBRepTool_SolidClassifier::Clear),
             R"#(None)#" )
        .def("LoadSolid",
             (void (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Solid & ) ) static_cast<void (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Solid & ) >(&TopOpeBRepTool_SolidClassifier::LoadSolid),
             R"#(None)#"  , py::arg("S"))
        .def("Classify",
             (TopAbs_State (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Solid & , const gp_Pnt & , const Standard_Real ) ) static_cast<TopAbs_State (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Solid & , const gp_Pnt & , const Standard_Real ) >(&TopOpeBRepTool_SolidClassifier::Classify),
             R"#(compute the position of point <P> regarding with the geometric domain of the solid <S>.)#"  , py::arg("S"),  py::arg("P"),  py::arg("Tol"))
        .def("LoadShell",
             (void (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Shell & ) ) static_cast<void (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Shell & ) >(&TopOpeBRepTool_SolidClassifier::LoadShell),
             R"#(None)#"  , py::arg("S"))
        .def("Classify",
             (TopAbs_State (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Shell & , const gp_Pnt & , const Standard_Real ) ) static_cast<TopAbs_State (TopOpeBRepTool_SolidClassifier::*)( const TopoDS_Shell & , const gp_Pnt & , const Standard_Real ) >(&TopOpeBRepTool_SolidClassifier::Classify),
             R"#(compute the position of point <P> regarding with the geometric domain of the shell <S>.)#"  , py::arg("S"),  py::arg("P"),  py::arg("Tol"))
        .def("State",
             (TopAbs_State (TopOpeBRepTool_SolidClassifier::*)() const) static_cast<TopAbs_State (TopOpeBRepTool_SolidClassifier::*)() const>(&TopOpeBRepTool_SolidClassifier::State),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepTool_TOOL , shared_ptr<TopOpeBRepTool_TOOL>>(m,"TopOpeBRepTool_TOOL");

    static_cast<py::class_<TopOpeBRepTool_TOOL , shared_ptr<TopOpeBRepTool_TOOL> >>(m.attr("TopOpeBRepTool_TOOL"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("OriinSor_s",
                    (Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean ) >(&TopOpeBRepTool_TOOL::OriinSor),
                    R"#(None)#"  , py::arg("sub"),  py::arg("S"),  py::arg("checkclo")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("OriinSorclosed_s",
                    (Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepTool_TOOL::OriinSorclosed),
                    R"#(None)#"  , py::arg("sub"),  py::arg("S"))
        .def_static("ClosedE_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , TopoDS_Vertex & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , TopoDS_Vertex & ) >(&TopOpeBRepTool_TOOL::ClosedE),
                    R"#(None)#"  , py::arg("E"),  py::arg("vclo"))
        .def_static("ClosedS_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::ClosedS),
                    R"#(None)#"  , py::arg("F"))
        .def_static("IsClosingE_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::IsClosingE),
                    R"#(None)#"  , py::arg("E"),  py::arg("F"))
        .def_static("IsClosingE_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Shape & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Shape & , const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::IsClosingE),
                    R"#(None)#"  , py::arg("E"),  py::arg("W"),  py::arg("F"))
        .def_static("Vertices_s",
                    (void (*)( const TopoDS_Edge & , NCollection_Array1<TopoDS_Shape> & ) ) static_cast<void (*)( const TopoDS_Edge & , NCollection_Array1<TopoDS_Shape> & ) >(&TopOpeBRepTool_TOOL::Vertices),
                    R"#(None)#"  , py::arg("E"),  py::arg("Vces"))
        .def_static("Vertex_s",
                    (TopoDS_Vertex (*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<TopoDS_Vertex (*)( const Standard_Integer , const TopoDS_Edge & ) >(&TopOpeBRepTool_TOOL::Vertex),
                    R"#(None)#"  , py::arg("Iv"),  py::arg("E"))
        .def_static("ParE_s",
                    (Standard_Real (*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<Standard_Real (*)( const Standard_Integer , const TopoDS_Edge & ) >(&TopOpeBRepTool_TOOL::ParE),
                    R"#(None)#"  , py::arg("Iv"),  py::arg("E"))
        .def_static("OnBoundary_s",
                    (Standard_Integer (*)( const Standard_Real , const TopoDS_Edge & ) ) static_cast<Standard_Integer (*)( const Standard_Real , const TopoDS_Edge & ) >(&TopOpeBRepTool_TOOL::OnBoundary),
                    R"#(None)#"  , py::arg("par"),  py::arg("E"))
        .def_static("UVF_s",
                    (gp_Pnt2d (*)( const Standard_Real , const TopOpeBRepTool_C2DF & ) ) static_cast<gp_Pnt2d (*)( const Standard_Real , const TopOpeBRepTool_C2DF & ) >(&TopOpeBRepTool_TOOL::UVF),
                    R"#(None)#"  , py::arg("par"),  py::arg("C2DF"))
        .def_static("ParISO_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & ) >(&TopOpeBRepTool_TOOL::ParISO),
                    R"#(None)#"  , py::arg("p2d"),  py::arg("e"),  py::arg("f"),  py::arg("pare"))
        .def_static("ParE2d_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & ) >(&TopOpeBRepTool_TOOL::ParE2d),
                    R"#(None)#"  , py::arg("p2d"),  py::arg("e"),  py::arg("f"),  py::arg("par"),  py::arg("dist"))
        .def_static("Getduv_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const gp_Pnt2d & , const gp_Vec & , const Standard_Real , gp_Dir2d & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const gp_Pnt2d & , const gp_Vec & , const Standard_Real , gp_Dir2d & ) >(&TopOpeBRepTool_TOOL::Getduv),
                    R"#(None)#"  , py::arg("f"),  py::arg("uv"),  py::arg("dir"),  py::arg("factor"),  py::arg("duv"))
        .def_static("uvApp_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const Standard_Real , gp_Pnt2d & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const Standard_Real , gp_Pnt2d & ) >(&TopOpeBRepTool_TOOL::uvApp),
                    R"#(None)#"  , py::arg("f"),  py::arg("e"),  py::arg("par"),  py::arg("eps"),  py::arg("uvapp"))
        .def_static("TolUV_s",
                    (Standard_Real (*)( const TopoDS_Face & , const Standard_Real ) ) static_cast<Standard_Real (*)( const TopoDS_Face & , const Standard_Real ) >(&TopOpeBRepTool_TOOL::TolUV),
                    R"#(None)#"  , py::arg("F"),  py::arg("tol3d"))
        .def_static("TolP_s",
                    (Standard_Real (*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Real (*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::TolP),
                    R"#(None)#"  , py::arg("E"),  py::arg("F"))
        .def_static("minDUV_s",
                    (Standard_Real (*)( const TopoDS_Face & ) ) static_cast<Standard_Real (*)( const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::minDUV),
                    R"#(None)#"  , py::arg("F"))
        .def_static("outUVbounds_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::outUVbounds),
                    R"#(None)#"  , py::arg("uv"),  py::arg("F"))
        .def_static("TggeomE_s",
                    (Standard_Boolean (*)( const Standard_Real , const BRepAdaptor_Curve & , gp_Vec & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const BRepAdaptor_Curve & , gp_Vec & ) >(&TopOpeBRepTool_TOOL::TggeomE),
                    R"#(None)#"  , py::arg("par"),  py::arg("BC"),  py::arg("Tg"))
        .def_static("TggeomE_s",
                    (Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , gp_Vec & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , gp_Vec & ) >(&TopOpeBRepTool_TOOL::TggeomE),
                    R"#(None)#"  , py::arg("par"),  py::arg("E"),  py::arg("Tg"))
        .def_static("TgINSIDE_s",
                    (Standard_Boolean (*)( const TopoDS_Vertex & , const TopoDS_Edge & , gp_Vec & , Standard_Integer & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Vertex & , const TopoDS_Edge & , gp_Vec & , Standard_Integer & ) >(&TopOpeBRepTool_TOOL::TgINSIDE),
                    R"#(None)#"  , py::arg("v"),  py::arg("E"),  py::arg("Tg"),  py::arg("OvinE"))
        .def_static("Tg2d_s",
                    (gp_Vec2d (*)( const Standard_Integer , const TopoDS_Edge & , const TopOpeBRepTool_C2DF & ) ) static_cast<gp_Vec2d (*)( const Standard_Integer , const TopoDS_Edge & , const TopOpeBRepTool_C2DF & ) >(&TopOpeBRepTool_TOOL::Tg2d),
                    R"#(None)#"  , py::arg("iv"),  py::arg("E"),  py::arg("C2DF"))
        .def_static("Tg2dApp_s",
                    (gp_Vec2d (*)( const Standard_Integer , const TopoDS_Edge & , const TopOpeBRepTool_C2DF & , const Standard_Real ) ) static_cast<gp_Vec2d (*)( const Standard_Integer , const TopoDS_Edge & , const TopOpeBRepTool_C2DF & , const Standard_Real ) >(&TopOpeBRepTool_TOOL::Tg2dApp),
                    R"#(None)#"  , py::arg("iv"),  py::arg("E"),  py::arg("C2DF"),  py::arg("factor"))
        .def_static("tryTg2dApp_s",
                    (gp_Vec2d (*)( const Standard_Integer , const TopoDS_Edge & , const TopOpeBRepTool_C2DF & , const Standard_Real ) ) static_cast<gp_Vec2d (*)( const Standard_Integer , const TopoDS_Edge & , const TopOpeBRepTool_C2DF & , const Standard_Real ) >(&TopOpeBRepTool_TOOL::tryTg2dApp),
                    R"#(None)#"  , py::arg("iv"),  py::arg("E"),  py::arg("C2DF"),  py::arg("factor"))
        .def_static("XX_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , const Standard_Real , const TopoDS_Edge & , gp_Dir & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , const Standard_Real , const TopoDS_Edge & , gp_Dir & ) >(&TopOpeBRepTool_TOOL::XX),
                    R"#(None)#"  , py::arg("uv"),  py::arg("f"),  py::arg("par"),  py::arg("e"),  py::arg("xx"))
        .def_static("Nt_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , gp_Dir & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , gp_Dir & ) >(&TopOpeBRepTool_TOOL::Nt),
                    R"#(None)#"  , py::arg("uv"),  py::arg("f"),  py::arg("normt"))
        .def_static("NggeomF_s",
                    (Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , gp_Vec & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , gp_Vec & ) >(&TopOpeBRepTool_TOOL::NggeomF),
                    R"#(None)#"  , py::arg("uv"),  py::arg("F"),  py::arg("ng"))
        .def_static("NgApp_s",
                    (Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , gp_Dir & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , gp_Dir & ) >(&TopOpeBRepTool_TOOL::NgApp),
                    R"#(None)#"  , py::arg("par"),  py::arg("E"),  py::arg("F"),  py::arg("tola"),  py::arg("ngApp"))
        .def_static("tryNgApp_s",
                    (Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , gp_Dir & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real , gp_Dir & ) >(&TopOpeBRepTool_TOOL::tryNgApp),
                    R"#(None)#"  , py::arg("par"),  py::arg("E"),  py::arg("F"),  py::arg("tola"),  py::arg("ng"))
        .def_static("tryOriEinF_s",
                    (Standard_Integer (*)( const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Integer (*)( const Standard_Real , const TopoDS_Edge & , const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::tryOriEinF),
                    R"#(None)#"  , py::arg("par"),  py::arg("E"),  py::arg("F"))
        .def_static("IsQuad_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ) >(&TopOpeBRepTool_TOOL::IsQuad),
                    R"#(None)#"  , py::arg("E"))
        .def_static("IsQuad_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ) >(&TopOpeBRepTool_TOOL::IsQuad),
                    R"#(None)#"  , py::arg("F"))
        .def_static("CurvE_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const gp_Dir & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const gp_Dir & , Standard_Real & ) >(&TopOpeBRepTool_TOOL::CurvE),
                    R"#(None)#"  , py::arg("E"),  py::arg("par"),  py::arg("tg0"),  py::arg("Curv"))
        .def_static("CurvF_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const gp_Pnt2d & , const gp_Dir & , Standard_Real & , Standard_Boolean & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const gp_Pnt2d & , const gp_Dir & , Standard_Real & , Standard_Boolean & ) >(&TopOpeBRepTool_TOOL::CurvF),
                    R"#(None)#"  , py::arg("F"),  py::arg("uv"),  py::arg("tg0"),  py::arg("Curv"),  py::arg("direct"))
        .def_static("UVISO_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & , Standard_Boolean & , Standard_Boolean & , gp_Dir2d & , gp_Pnt2d & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & , Standard_Boolean & , Standard_Boolean & , gp_Dir2d & , gp_Pnt2d & ) >(&TopOpeBRepTool_TOOL::UVISO),
                    R"#(None)#"  , py::arg("PC"),  py::arg("isou"),  py::arg("isov"),  py::arg("d2d"),  py::arg("o2d"))
        .def_static("UVISO_s",
                    (Standard_Boolean (*)( const TopOpeBRepTool_C2DF & , Standard_Boolean & , Standard_Boolean & , gp_Dir2d & , gp_Pnt2d & ) ) static_cast<Standard_Boolean (*)( const TopOpeBRepTool_C2DF & , Standard_Boolean & , Standard_Boolean & , gp_Dir2d & , gp_Pnt2d & ) >(&TopOpeBRepTool_TOOL::UVISO),
                    R"#(None)#"  , py::arg("C2DF"),  py::arg("isou"),  py::arg("isov"),  py::arg("d2d"),  py::arg("o2d"))
        .def_static("UVISO_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Boolean & , Standard_Boolean & , gp_Dir2d & , gp_Pnt2d & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Boolean & , Standard_Boolean & , gp_Dir2d & , gp_Pnt2d & ) >(&TopOpeBRepTool_TOOL::UVISO),
                    R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("isou"),  py::arg("isov"),  py::arg("d2d"),  py::arg("o2d"))
        .def_static("IsonCLO_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Real ) >(&TopOpeBRepTool_TOOL::IsonCLO),
                    R"#(None)#"  , py::arg("PC"),  py::arg("onU"),  py::arg("xfirst"),  py::arg("xperiod"),  py::arg("xtol"))
        .def_static("IsonCLO_s",
                    (Standard_Boolean (*)( const TopOpeBRepTool_C2DF & , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Boolean (*)( const TopOpeBRepTool_C2DF & , const Standard_Boolean , const Standard_Real , const Standard_Real , const Standard_Real ) >(&TopOpeBRepTool_TOOL::IsonCLO),
                    R"#(None)#"  , py::arg("C2DF"),  py::arg("onU"),  py::arg("xfirst"),  py::arg("xperiod"),  py::arg("xtol"))
        .def_static("TrslUV_s",
                    (void (*)( const gp_Vec2d & , TopOpeBRepTool_C2DF & ) ) static_cast<void (*)( const gp_Vec2d & , TopOpeBRepTool_C2DF & ) >(&TopOpeBRepTool_TOOL::TrslUV),
                    R"#(None)#"  , py::arg("t2d"),  py::arg("C2DF"))
        .def_static("TrslUVModifE_s",
                    (Standard_Boolean (*)( const gp_Vec2d & , const TopoDS_Face & , TopoDS_Edge & ) ) static_cast<Standard_Boolean (*)( const gp_Vec2d & , const TopoDS_Face & , TopoDS_Edge & ) >(&TopOpeBRepTool_TOOL::TrslUVModifE),
                    R"#(None)#"  , py::arg("t2d"),  py::arg("F"),  py::arg("E"))
        .def_static("Matter_s",
                    (Standard_Real (*)( const gp_Vec & , const gp_Vec & , const gp_Vec & ) ) static_cast<Standard_Real (*)( const gp_Vec & , const gp_Vec & , const gp_Vec & ) >(&TopOpeBRepTool_TOOL::Matter),
                    R"#(None)#"  , py::arg("d1"),  py::arg("d2"),  py::arg("ref"))
        .def_static("Matter_s",
                    (Standard_Real (*)( const gp_Vec2d & , const gp_Vec2d & ) ) static_cast<Standard_Real (*)( const gp_Vec2d & , const gp_Vec2d & ) >(&TopOpeBRepTool_TOOL::Matter),
                    R"#(None)#"  , py::arg("d1"),  py::arg("d2"))
        .def_static("Matter_s",
                    (Standard_Boolean (*)( const gp_Dir & , const gp_Dir & , const gp_Dir & , const gp_Dir & , const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const gp_Dir & , const gp_Dir & , const gp_Dir & , const gp_Dir & , const Standard_Real , Standard_Real & ) >(&TopOpeBRepTool_TOOL::Matter),
                    R"#(None)#"  , py::arg("xx1"),  py::arg("nt1"),  py::arg("xx2"),  py::arg("nt2"),  py::arg("tola"),  py::arg("Ang"))
        .def_static("Matter_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const Standard_Real , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const Standard_Real , Standard_Real & ) >(&TopOpeBRepTool_TOOL::Matter),
                    R"#(None)#"  , py::arg("f1"),  py::arg("f2"),  py::arg("e"),  py::arg("pare"),  py::arg("tola"),  py::arg("Ang"))
        .def_static("MatterKPtg_s",
                    (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Face & , const TopoDS_Edge & , Standard_Real & ) >(&TopOpeBRepTool_TOOL::MatterKPtg),
                    R"#(None)#"  , py::arg("f1"),  py::arg("f2"),  py::arg("e"),  py::arg("Ang"))
        .def_static("Getstp3dF_s",
                    (Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Face & , gp_Pnt2d & , TopAbs_State & ) ) static_cast<Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Face & , gp_Pnt2d & , TopAbs_State & ) >(&TopOpeBRepTool_TOOL::Getstp3dF),
                    R"#(None)#"  , py::arg("p"),  py::arg("f"),  py::arg("uv"),  py::arg("st"))
        .def_static("SplitE_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_TOOL::SplitE),
                    R"#(None)#"  , py::arg("Eanc"),  py::arg("Splits"))
        .def_static("MkShell_s",
                    (void (*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Shape & ) ) static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Shape & ) >(&TopOpeBRepTool_TOOL::MkShell),
                    R"#(None)#"  , py::arg("lF"),  py::arg("She"))
        .def_static("Remove_s",
                    (Standard_Boolean (*)( NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( NCollection_List<TopoDS_Shape> & , const TopoDS_Shape & ) >(&TopOpeBRepTool_TOOL::Remove),
                    R"#(None)#"  , py::arg("loS"),  py::arg("toremove"))
        .def_static("WireToFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_TOOL::WireToFace),
                    R"#(None)#"  , py::arg("Fref"),  py::arg("mapWlow"),  py::arg("lFs"))
        .def_static("EdgeONFace_s",
                    (Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , const gp_Pnt2d & , const TopoDS_Face & , Standard_Boolean & ) ) static_cast<Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , const gp_Pnt2d & , const TopoDS_Face & , Standard_Boolean & ) >(&TopOpeBRepTool_TOOL::EdgeONFace),
                    R"#(None)#"  , py::arg("par"),  py::arg("ed"),  py::arg("uv"),  py::arg("fa"),  py::arg("isonfa"))
    // static methods using call by reference i.s.o. return
        .def_static("stuvF_s",
                    []( const gp_Pnt2d & uv,const TopoDS_Face & F ){ Standard_Integer  onU; Standard_Integer  onV; TopOpeBRepTool_TOOL::stuvF(uv,F,onU,onV); return std::make_tuple(onU,onV); },
                    R"#(None)#"  , py::arg("uv"),  py::arg("F"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_connexity , shared_ptr<TopOpeBRepTool_connexity> >>(m.attr("TopOpeBRepTool_connexity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("Key") )
    // custom constructors
    // methods
        .def("SetKey",
             (void (TopOpeBRepTool_connexity::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepTool_connexity::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_connexity::SetKey),
             R"#(None)#"  , py::arg("Key"))
        .def("Key",
             (const TopoDS_Shape & (TopOpeBRepTool_connexity::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepTool_connexity::*)() const>(&TopOpeBRepTool_connexity::Key),
             R"#(None)#" )
        .def("Item",
             (Standard_Integer (TopOpeBRepTool_connexity::*)( const Standard_Integer , NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Integer (TopOpeBRepTool_connexity::*)( const Standard_Integer , NCollection_List<TopoDS_Shape> & ) const>(&TopOpeBRepTool_connexity::Item),
             R"#(None)#"  , py::arg("OriKey"),  py::arg("Item"))
        .def("AllItems",
             (Standard_Integer (TopOpeBRepTool_connexity::*)( NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Integer (TopOpeBRepTool_connexity::*)( NCollection_List<TopoDS_Shape> & ) const>(&TopOpeBRepTool_connexity::AllItems),
             R"#(None)#"  , py::arg("Item"))
        .def("AddItem",
             (void (TopOpeBRepTool_connexity::*)( const Standard_Integer ,  const NCollection_List<TopoDS_Shape> & ) ) static_cast<void (TopOpeBRepTool_connexity::*)( const Standard_Integer ,  const NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_connexity::AddItem),
             R"#(None)#"  , py::arg("OriKey"),  py::arg("Item"))
        .def("AddItem",
             (void (TopOpeBRepTool_connexity::*)( const Standard_Integer , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepTool_connexity::*)( const Standard_Integer , const TopoDS_Shape & ) >(&TopOpeBRepTool_connexity::AddItem),
             R"#(None)#"  , py::arg("OriKey"),  py::arg("Item"))
        .def("RemoveItem",
             (Standard_Boolean (TopOpeBRepTool_connexity::*)( const Standard_Integer , const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_connexity::*)( const Standard_Integer , const TopoDS_Shape & ) >(&TopOpeBRepTool_connexity::RemoveItem),
             R"#(None)#"  , py::arg("OriKey"),  py::arg("Item"))
        .def("RemoveItem",
             (Standard_Boolean (TopOpeBRepTool_connexity::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_connexity::*)( const TopoDS_Shape & ) >(&TopOpeBRepTool_connexity::RemoveItem),
             R"#(None)#"  , py::arg("Item"))
        .def("ChangeItem",
             (TopTools_ListOfShape & (TopOpeBRepTool_connexity::*)( const Standard_Integer ) ) static_cast<TopTools_ListOfShape & (TopOpeBRepTool_connexity::*)( const Standard_Integer ) >(&TopOpeBRepTool_connexity::ChangeItem),
             R"#(None)#"  , py::arg("OriKey"))
        .def("IsMultiple",
             (Standard_Boolean (TopOpeBRepTool_connexity::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_connexity::*)() const>(&TopOpeBRepTool_connexity::IsMultiple),
             R"#(None)#" )
        .def("IsFaulty",
             (Standard_Boolean (TopOpeBRepTool_connexity::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_connexity::*)() const>(&TopOpeBRepTool_connexity::IsFaulty),
             R"#(None)#" )
        .def("IsInternal",
             (Standard_Integer (TopOpeBRepTool_connexity::*)( NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Integer (TopOpeBRepTool_connexity::*)( NCollection_List<TopoDS_Shape> & ) const>(&TopOpeBRepTool_connexity::IsInternal),
             R"#(None)#"  , py::arg("Item"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_face , shared_ptr<TopOpeBRepTool_face> >>(m.attr("TopOpeBRepTool_face"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (Standard_Boolean (TopOpeBRepTool_face::*)( const TopoDS_Wire & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_face::*)( const TopoDS_Wire & , const TopoDS_Face & ) >(&TopOpeBRepTool_face::Init),
             R"#(None)#"  , py::arg("W"),  py::arg("Fref"))
        .def("W",
             (const TopoDS_Wire & (TopOpeBRepTool_face::*)() const) static_cast<const TopoDS_Wire & (TopOpeBRepTool_face::*)() const>(&TopOpeBRepTool_face::W),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (TopOpeBRepTool_face::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_face::*)() const>(&TopOpeBRepTool_face::IsDone),
             R"#(None)#" )
        .def("Finite",
             (Standard_Boolean (TopOpeBRepTool_face::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_face::*)() const>(&TopOpeBRepTool_face::Finite),
             R"#(None)#" )
        .def("Ffinite",
             (const TopoDS_Face & (TopOpeBRepTool_face::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepTool_face::*)() const>(&TopOpeBRepTool_face::Ffinite),
             R"#(None)#" )
        .def("RealF",
             (TopoDS_Face (TopOpeBRepTool_face::*)() const) static_cast<TopoDS_Face (TopOpeBRepTool_face::*)() const>(&TopOpeBRepTool_face::RealF),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_makeTransition , shared_ptr<TopOpeBRepTool_makeTransition> >>(m.attr("TopOpeBRepTool_makeTransition"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Initialize",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Real , const TopoDS_Face & , const gp_Pnt2d & , const Standard_Real ) ) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const Standard_Real , const TopoDS_Face & , const gp_Pnt2d & , const Standard_Real ) >(&TopOpeBRepTool_makeTransition::Initialize),
             R"#(None)#"  , py::arg("E"),  py::arg("pbef"),  py::arg("paft"),  py::arg("parE"),  py::arg("FS"),  py::arg("uv"),  py::arg("factor"))
        .def("Setfactor",
             (void (TopOpeBRepTool_makeTransition::*)( const Standard_Real ) ) static_cast<void (TopOpeBRepTool_makeTransition::*)( const Standard_Real ) >(&TopOpeBRepTool_makeTransition::Setfactor),
             R"#(None)#"  , py::arg("factor"))
        .def("Getfactor",
             (Standard_Real (TopOpeBRepTool_makeTransition::*)() const) static_cast<Standard_Real (TopOpeBRepTool_makeTransition::*)() const>(&TopOpeBRepTool_makeTransition::Getfactor),
             R"#(None)#" )
        .def("IsT2d",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)() const>(&TopOpeBRepTool_makeTransition::IsT2d),
             R"#(None)#" )
        .def("SetRest",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)( const TopoDS_Edge & , const Standard_Real ) ) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)( const TopoDS_Edge & , const Standard_Real ) >(&TopOpeBRepTool_makeTransition::SetRest),
             R"#(None)#"  , py::arg("ES"),  py::arg("parES"))
        .def("HasRest",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)() const>(&TopOpeBRepTool_makeTransition::HasRest),
             R"#(None)#" )
        .def("MkT2donE",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) const>(&TopOpeBRepTool_makeTransition::MkT2donE),
             R"#(None)#"  , py::arg("stb"),  py::arg("sta"))
        .def("MkT3onE",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) const>(&TopOpeBRepTool_makeTransition::MkT3onE),
             R"#(None)#"  , py::arg("stb"),  py::arg("sta"))
        .def("MkT3dproj",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) const) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) const>(&TopOpeBRepTool_makeTransition::MkT3dproj),
             R"#(None)#"  , py::arg("stb"),  py::arg("sta"))
        .def("MkTonE",
             (Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_makeTransition::*)( TopAbs_State & , TopAbs_State & ) >(&TopOpeBRepTool_makeTransition::MkTonE),
             R"#(None)#"  , py::arg("stb"),  py::arg("sta"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_mkTondgE , shared_ptr<TopOpeBRepTool_mkTondgE> >>(m.attr("TopOpeBRepTool_mkTondgE"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Initialize",
             (Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const TopoDS_Edge & , const TopoDS_Face & , const gp_Pnt2d & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const TopoDS_Edge & , const TopoDS_Face & , const gp_Pnt2d & , const TopoDS_Face & ) >(&TopOpeBRepTool_mkTondgE::Initialize),
             R"#(None)#"  , py::arg("dgE"),  py::arg("F"),  py::arg("uvi"),  py::arg("Fi"))
        .def("SetclE",
             (Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const TopoDS_Edge & ) >(&TopOpeBRepTool_mkTondgE::SetclE),
             R"#(None)#"  , py::arg("clE"))
        .def("IsT2d",
             (Standard_Boolean (TopOpeBRepTool_mkTondgE::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_mkTondgE::*)() const>(&TopOpeBRepTool_mkTondgE::IsT2d),
             R"#(None)#" )
        .def("SetRest",
             (Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const Standard_Real , const TopoDS_Edge & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const Standard_Real , const TopoDS_Edge & ) >(&TopOpeBRepTool_mkTondgE::SetRest),
             R"#(None)#"  , py::arg("pari"),  py::arg("Ei"))
        .def("GetAllRest",
             (Standard_Integer (TopOpeBRepTool_mkTondgE::*)( NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Integer (TopOpeBRepTool_mkTondgE::*)( NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepTool_mkTondgE::GetAllRest),
             R"#(None)#"  , py::arg("lEi"))
        .def("MkTonE",
             (Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( Standard_Integer & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( Standard_Integer & , Standard_Real & , Standard_Real & ) >(&TopOpeBRepTool_mkTondgE::MkTonE),
             R"#(None)#"  , py::arg("mkT"),  py::arg("par1"),  py::arg("par2"))
        .def("MkTonE",
             (Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const TopoDS_Edge & , Standard_Integer & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (TopOpeBRepTool_mkTondgE::*)( const TopoDS_Edge & , Standard_Integer & , Standard_Real & , Standard_Real & ) >(&TopOpeBRepTool_mkTondgE::MkTonE),
             R"#(None)#"  , py::arg("Ei"),  py::arg("mkT"),  py::arg("par1"),  py::arg("par2"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx
// ./opencascade/TopOpeBRepTool_OutCurveType.hxx
// ./opencascade/TopOpeBRepTool_defineG.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
// ./opencascade/TopOpeBRepTool_SolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
// ./opencascade/TopOpeBRepTool_Plos.hxx
// ./opencascade/TopOpeBRepTool_PShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_GEOMETRY.hxx
    m.def("BASISCURVE2D",
          (opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom2d_Curve> & ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const opencascade::handle<Geom2d_Curve> & )>(&BASISCURVE2D),
          R"#(None)#"  , py::arg("C"));
    m.def("FUN_tool_dirC",
          (gp_Dir (*)( const Standard_Real , const opencascade::handle<Geom_Curve> & ))  static_cast<gp_Dir (*)( const Standard_Real , const opencascade::handle<Geom_Curve> & )>(&FUN_tool_dirC),
          R"#(None)#"  , py::arg("par"),  py::arg("C"));
    m.def("FUN_tool_onapex",
          (Standard_Boolean (*)( const gp_Pnt2d & , const opencascade::handle<Geom_Surface> & ))  static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const opencascade::handle<Geom_Surface> & )>(&FUN_tool_onapex),
          R"#(None)#"  , py::arg("p2d"),  py::arg("S"));
    m.def("FUN_tool_ngS",
          (gp_Dir (*)( const gp_Pnt2d & , const opencascade::handle<Geom_Surface> & ))  static_cast<gp_Dir (*)( const gp_Pnt2d & , const opencascade::handle<Geom_Surface> & )>(&FUN_tool_ngS),
          R"#(None)#"  , py::arg("p2d"),  py::arg("S"));
    m.def("FUN_tool_line",
          (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & )>(&FUN_tool_line),
          R"#(None)#"  , py::arg("C3d"));
    m.def("FUN_tool_line",
          (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & )>(&FUN_tool_line),
          R"#(None)#"  , py::arg("C2d"));
    m.def("FUN_quadCT",
          (Standard_Boolean (*)( const GeomAbs_CurveType & ))  static_cast<Standard_Boolean (*)( const GeomAbs_CurveType & )>(&FUN_quadCT),
          R"#(None)#"  , py::arg("CT"));
    m.def("FUN_tool_quad",
          (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & )>(&FUN_tool_quad),
          R"#(None)#"  , py::arg("C3d"));
    m.def("FUN_tool_quad",
          (Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom2d_Curve> & )>(&FUN_tool_quad),
          R"#(None)#"  , py::arg("pc"));
    m.def("FUN_tool_quad",
          (Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & )>(&FUN_tool_quad),
          R"#(None)#"  , py::arg("S"));
    m.def("FUN_tool_closed",
          (Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & , Standard_Boolean & , Standard_Real & , Standard_Boolean & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Surface> & , Standard_Boolean & , Standard_Real & , Standard_Boolean & , Standard_Real & )>(&FUN_tool_closed),
          R"#(None)#"  , py::arg("S"),  py::arg("uclosed"),  py::arg("uperiod"),  py::arg("vclosed"),  py::arg("vperiod"));
    m.def("FUN_tool_UpdateBnd2d",
          (void (*)( Bnd_Box2d & , const Bnd_Box2d & ))  static_cast<void (*)( Bnd_Box2d & , const Bnd_Box2d & )>(&FUN_tool_UpdateBnd2d),
          R"#(None)#"  , py::arg("B2d"),  py::arg("newB2d"));
    m.def("FUN_tool_nCinsideS",
          (gp_Dir (*)( const gp_Dir & , const gp_Dir & ))  static_cast<gp_Dir (*)( const gp_Dir & , const gp_Dir & )>(&FUN_tool_nCinsideS),
          R"#(None)#"  , py::arg("tgC"),  py::arg("ngS"));
    m.def("FUN_tool_nC2dINSIDES",
          (gp_Dir2d (*)( const gp_Dir2d & ))  static_cast<gp_Dir2d (*)( const gp_Dir2d & )>(&FUN_tool_nC2dINSIDES),
          R"#(None)#"  , py::arg("tgC2d"));
// ./opencascade/TopOpeBRepTool_DRAW.hxx
// ./opencascade/TopOpeBRepTool_tol.hxx
    m.def("FTOL_FaceTolerances",
          (void (*)( const Bnd_Box & , const Bnd_Box & , const TopoDS_Face & , const TopoDS_Face & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const Bnd_Box & , const Bnd_Box & , const TopoDS_Face & , const TopoDS_Face & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & )>(&FTOL_FaceTolerances),
          R"#(None)#"  , py::arg("B1"),  py::arg("B2"),  py::arg("myFace1"),  py::arg("myFace2"),  py::arg("mySurface1"),  py::arg("mySurface2"),  py::arg("myTol1"),  py::arg("myTol2"),  py::arg("Deflection"),  py::arg("MaxUV"));
    m.def("FTOL_FaceTolerances3d",
          (void (*)( const TopoDS_Face & , const TopoDS_Face & , Standard_Real & ))  static_cast<void (*)( const TopoDS_Face & , const TopoDS_Face & , Standard_Real & )>(&FTOL_FaceTolerances3d),
          R"#(None)#"  , py::arg("myFace1"),  py::arg("myFace2"),  py::arg("Tol"));
    m.def("FTOL_FaceTolerances3d",
          (void (*)( const Bnd_Box & , const Bnd_Box & , const TopoDS_Face & , const TopoDS_Face & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const Bnd_Box & , const Bnd_Box & , const TopoDS_Face & , const TopoDS_Face & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & )>(&FTOL_FaceTolerances3d),
          R"#(None)#"  , py::arg("B1"),  py::arg("B2"),  py::arg("myFace1"),  py::arg("myFace2"),  py::arg("mySurface1"),  py::arg("mySurface2"),  py::arg("myTol1"),  py::arg("myTol2"),  py::arg("Deflection"),  py::arg("MaxUV"));
    m.def("FTOL_FaceTolerances2d",
          (void (*)( const Bnd_Box & , const Bnd_Box & , const TopoDS_Face & , const TopoDS_Face & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const Bnd_Box & , const Bnd_Box & , const TopoDS_Face & , const TopoDS_Face & , const BRepAdaptor_Surface & , const BRepAdaptor_Surface & , Standard_Real & , Standard_Real & )>(&FTOL_FaceTolerances2d),
          R"#(None)#"  , py::arg("B1"),  py::arg("B2"),  py::arg("myFace1"),  py::arg("myFace2"),  py::arg("mySurface1"),  py::arg("mySurface2"),  py::arg("myTol1"),  py::arg("myTol2"));
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx
// ./opencascade/TopOpeBRepTool_REGUW.hxx
// ./opencascade/TopOpeBRepTool_SC.hxx
    m.def("FSC_GetPSC",
          (TopOpeBRepTool_ShapeClassifier & (*)())  static_cast<TopOpeBRepTool_ShapeClassifier & (*)()>(&FSC_GetPSC),
          R"#(None)#" );
    m.def("FSC_GetPSC",
          (TopOpeBRepTool_ShapeClassifier & (*)( const TopoDS_Shape & ))  static_cast<TopOpeBRepTool_ShapeClassifier & (*)( const TopoDS_Shape & )>(&FSC_GetPSC),
          R"#(None)#"  , py::arg("S"));
    m.def("FSC_StatePonFace",
          (TopAbs_State (*)( const gp_Pnt & , const TopoDS_Shape & , TopOpeBRepTool_ShapeClassifier & ))  static_cast<TopAbs_State (*)( const gp_Pnt & , const TopoDS_Shape & , TopOpeBRepTool_ShapeClassifier & )>(&FSC_StatePonFace),
          R"#(None)#"  , py::arg("P"),  py::arg("F"),  py::arg("PSC"));
    m.def("FSC_StateEonFace",
          (TopAbs_State (*)( const TopoDS_Shape & , const Standard_Real , const TopoDS_Shape & , TopOpeBRepTool_ShapeClassifier & ))  static_cast<TopAbs_State (*)( const TopoDS_Shape & , const Standard_Real , const TopoDS_Shape & , TopOpeBRepTool_ShapeClassifier & )>(&FSC_StateEonFace),
          R"#(None)#"  , py::arg("E"),  py::arg("t"),  py::arg("F"),  py::arg("PSC"));
// ./opencascade/TopOpeBRepTool_C2DF.hxx
// ./opencascade/TopOpeBRepTool_makeTransition.hxx
// ./opencascade/TopOpeBRepTool_ShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_PURGE.hxx
// ./opencascade/TopOpeBRepTool_2d.hxx
    m.def("FC2D_Prepare",
          (Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & ))  static_cast<Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & )>(&FC2D_Prepare),
          R"#(None)#"  , py::arg("S1"),  py::arg("S2"));
    m.def("FC2D_HasC3D",
          (Standard_Boolean (*)( const TopoDS_Edge & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & )>(&FC2D_HasC3D),
          R"#(None)#"  , py::arg("E"));
    m.def("FC2D_HasCurveOnSurface",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & )>(&FC2D_HasCurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"));
    m.def("FC2D_HasOldCurveOnSurface",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , Standard_Real & )>(&FC2D_HasOldCurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("C2D"),  py::arg("f"),  py::arg("l"),  py::arg("tol"));
    m.def("FC2D_HasOldCurveOnSurface",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & )>(&FC2D_HasOldCurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("C2D"));
    m.def("FC2D_HasNewCurveOnSurface",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , Standard_Real & )>(&FC2D_HasNewCurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("C2D"),  py::arg("f"),  py::arg("l"),  py::arg("tol"));
    m.def("FC2D_HasNewCurveOnSurface",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & )>(&FC2D_HasNewCurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("C2D"));
    m.def("FC2D_CurveOnSurface",
          (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean )>(&FC2D_CurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("f"),  py::arg("l"),  py::arg("tol"),  py::arg("trim3d")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("FC2D_CurveOnSurface",
          (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , const TopoDS_Edge & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean )>(&FC2D_CurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("EF"),  py::arg("f"),  py::arg("l"),  py::arg("tol"),  py::arg("trim3d")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("FC2D_MakeCurveOnSurface",
          (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean )>(&FC2D_MakeCurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("f"),  py::arg("l"),  py::arg("tol"),  py::arg("trim3d")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("FC2D_EditableCurveOnSurface",
          (opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean ))  static_cast<opencascade::handle<Geom2d_Curve> (*)( const TopoDS_Edge & , const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , const Standard_Boolean )>(&FC2D_EditableCurveOnSurface),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("f"),  py::arg("l"),  py::arg("tol"),  py::arg("trim3d")=static_cast<const Standard_Boolean>(Standard_False));
    m.def("FC2D_AddNewCurveOnSurface",
          (Standard_Integer (*)( opencascade::handle<Geom2d_Curve> , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real & , const Standard_Real & , const Standard_Real & ))  static_cast<Standard_Integer (*)( opencascade::handle<Geom2d_Curve> , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real & , const Standard_Real & , const Standard_Real & )>(&FC2D_AddNewCurveOnSurface),
          R"#(None)#"  , py::arg("PC"),  py::arg("E"),  py::arg("F"),  py::arg("f"),  py::arg("l"),  py::arg("tol"));
// ./opencascade/TopOpeBRepTool_AncestorsTool.hxx
// ./opencascade/TopOpeBRepTool_PROJECT.hxx
    m.def("FUN_tool_bounds",
          (void (*)( const TopoDS_Edge & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const TopoDS_Edge & , Standard_Real & , Standard_Real & )>(&FUN_tool_bounds),
          R"#(None)#"  , py::arg("E"),  py::arg("f"),  py::arg("l"));
    m.def("FUN_tool_getindex",
          (Standard_Integer (*)( const Extrema_ExtPC & ))  static_cast<Standard_Integer (*)( const Extrema_ExtPC & )>(&FUN_tool_getindex),
          R"#(None)#"  , py::arg("ponc"));
    m.def("FUN_tool_getindex",
          (Standard_Integer (*)( const Extrema_ExtPC2d & ))  static_cast<Standard_Integer (*)( const Extrema_ExtPC2d & )>(&FUN_tool_getindex),
          R"#(None)#"  , py::arg("ponc"));
    m.def("FUN_tool_projPonC",
          (Standard_Boolean (*)( const gp_Pnt & , const Standard_Real , const BRepAdaptor_Curve & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const Standard_Real , const BRepAdaptor_Curve & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonC),
          R"#(None)#"  , py::arg("P"),  py::arg("tole"),  py::arg("BAC"),  py::arg("pmin"),  py::arg("pmax"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonC",
          (Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonC),
          R"#(None)#"  , py::arg("P"),  py::arg("BAC"),  py::arg("pmin"),  py::arg("pmax"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonC",
          (Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonC),
          R"#(None)#"  , py::arg("P"),  py::arg("BAC"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonC2D",
          (Standard_Boolean (*)( const gp_Pnt & , const Standard_Real , const BRepAdaptor_Curve2d & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const Standard_Real , const BRepAdaptor_Curve2d & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonC2D),
          R"#(None)#"  , py::arg("P"),  py::arg("tole"),  py::arg("BAC2D"),  py::arg("pmin"),  py::arg("pmax"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonC2D",
          (Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve2d & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve2d & , const Standard_Real , const Standard_Real , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonC2D),
          R"#(None)#"  , py::arg("P"),  py::arg("BAC2D"),  py::arg("pmin"),  py::arg("pmax"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonC2D",
          (Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve2d & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve2d & , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonC2D),
          R"#(None)#"  , py::arg("P"),  py::arg("BAC2D"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonS",
          (Standard_Boolean (*)( const gp_Pnt & , const opencascade::handle<Geom_Surface> & , gp_Pnt2d & , Standard_Real & , const Extrema_ExtFlag , const Extrema_ExtAlgo ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const opencascade::handle<Geom_Surface> & , gp_Pnt2d & , Standard_Real & , const Extrema_ExtFlag , const Extrema_ExtAlgo )>(&FUN_tool_projPonS),
          R"#(None)#"  , py::arg("P"),  py::arg("S"),  py::arg("UV"),  py::arg("dist"),  py::arg("anExtFlag")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("anExtAlgo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad));
    m.def("FUN_tool_projPonE",
          (Standard_Boolean (*)( const gp_Pnt & , const Standard_Real , const TopoDS_Edge & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const Standard_Real , const TopoDS_Edge & , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonE),
          R"#(None)#"  , py::arg("P"),  py::arg("tole"),  py::arg("E"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonE",
          (Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Edge & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Edge & , Standard_Real & , Standard_Real & )>(&FUN_tool_projPonE),
          R"#(None)#"  , py::arg("P"),  py::arg("E"),  py::arg("param"),  py::arg("dist"));
    m.def("FUN_tool_projPonboundedF",
          (Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Face & , gp_Pnt2d & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Face & , gp_Pnt2d & , Standard_Real & )>(&FUN_tool_projPonboundedF),
          R"#(None)#"  , py::arg("P"),  py::arg("F"),  py::arg("UV"),  py::arg("dist"));
    m.def("FUN_tool_projPonF",
          (Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Face & , gp_Pnt2d & , Standard_Real & , const Extrema_ExtFlag , const Extrema_ExtAlgo ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const TopoDS_Face & , gp_Pnt2d & , Standard_Real & , const Extrema_ExtFlag , const Extrema_ExtAlgo )>(&FUN_tool_projPonF),
          R"#(None)#"  , py::arg("P"),  py::arg("F"),  py::arg("UV"),  py::arg("dist"),  py::arg("anExtFlag")=static_cast<const Extrema_ExtFlag>(Extrema_ExtFlag_MINMAX),  py::arg("anExtAlgo")=static_cast<const Extrema_ExtAlgo>(Extrema_ExtAlgo_Grad));
// ./opencascade/TopOpeBRepTool_face.hxx
// ./opencascade/TopOpeBRepTool_PurgeInternalEdges.hxx
// ./opencascade/TopOpeBRepTool_box.hxx
    m.def("FBOX_Prepare",
          (void (*)())  static_cast<void (*)()>(&FBOX_Prepare),
          R"#(None)#" );
    m.def("FBOX_GetHBoxTool",
          (opencascade::handle<TopOpeBRepTool_HBoxTool> (*)())  static_cast<opencascade::handle<TopOpeBRepTool_HBoxTool> (*)()>(&FBOX_GetHBoxTool),
          R"#(None)#" );
    m.def("FBOX_Box",
          (const Bnd_Box & (*)( const TopoDS_Shape & ))  static_cast<const Bnd_Box & (*)( const TopoDS_Shape & )>(&FBOX_Box),
          R"#(None)#"  , py::arg("S"));
// ./opencascade/TopOpeBRepTool_PSoClassif.hxx
// ./opencascade/TopOpeBRepTool_KRO.hxx
// ./opencascade/TopOpeBRepTool_GeomTool.hxx
// ./opencascade/TopOpeBRepTool_ShapeExplorer.hxx
// ./opencascade/TopOpeBRepTool.hxx
// ./opencascade/TopOpeBRepTool_ShapeTool.hxx
// ./opencascade/TopOpeBRepTool_connexity.hxx
// ./opencascade/TopOpeBRepTool_TOOL.hxx
// ./opencascade/TopOpeBRepTool_TOPOLOGY.hxx
    m.def("FUN_tool_tolUV",
          (void (*)( const TopoDS_Face & , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const TopoDS_Face & , Standard_Real & , Standard_Real & )>(&FUN_tool_tolUV),
          R"#(None)#"  , py::arg("F"),  py::arg("tolu"),  py::arg("tolv"));
    m.def("FUN_tool_direct",
          (Standard_Boolean (*)( const TopoDS_Face & , Standard_Boolean & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , Standard_Boolean & )>(&FUN_tool_direct),
          R"#(None)#"  , py::arg("F"),  py::arg("direct"));
    m.def("FUN_tool_bounds",
          (Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & )>(&FUN_tool_bounds),
          R"#(None)#"  , py::arg("F"),  py::arg("u1"),  py::arg("u2"),  py::arg("v1"),  py::arg("v2"));
    m.def("FUN_tool_geombounds",
          (Standard_Boolean (*)( const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & )>(&FUN_tool_geombounds),
          R"#(None)#"  , py::arg("F"),  py::arg("u1"),  py::arg("u2"),  py::arg("v1"),  py::arg("v2"));
    m.def("FUN_tool_isobounds",
          (Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & )>(&FUN_tool_isobounds),
          R"#(None)#"  , py::arg("F"),  py::arg("u1"),  py::arg("u2"),  py::arg("v1"),  py::arg("v2"));
    m.def("FUN_tool_outbounds",
          (Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Boolean & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Real & , Standard_Boolean & )>(&FUN_tool_outbounds),
          R"#(None)#"  , py::arg("Sh"),  py::arg("u1"),  py::arg("u2"),  py::arg("v1"),  py::arg("v2"),  py::arg("outbounds"));
    m.def("FUN_tool_PinC",
          (Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , const Standard_Real , const Standard_Real , const Standard_Real ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , const Standard_Real , const Standard_Real , const Standard_Real )>(&FUN_tool_PinC),
          R"#(None)#"  , py::arg("P"),  py::arg("BAC"),  py::arg("pmin"),  py::arg("pmax"),  py::arg("tol"));
    m.def("FUN_tool_PinC",
          (Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const gp_Pnt & , const BRepAdaptor_Curve & , const Standard_Real )>(&FUN_tool_PinC),
          R"#(None)#"  , py::arg("P"),  py::arg("BAC"),  py::arg("tol"));
    m.def("FUN_tool_value",
          (Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , gp_Pnt & ))  static_cast<Standard_Boolean (*)( const Standard_Real , const TopoDS_Edge & , gp_Pnt & )>(&FUN_tool_value),
          R"#(None)#"  , py::arg("par"),  py::arg("E"),  py::arg("P"));
    m.def("FUN_tool_value",
          (Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , gp_Pnt & ))  static_cast<Standard_Boolean (*)( const gp_Pnt2d & , const TopoDS_Face & , gp_Pnt & )>(&FUN_tool_value),
          R"#(None)#"  , py::arg("UV"),  py::arg("F"),  py::arg("P"));
    m.def("FUN_tool_staPinE",
          (TopAbs_State (*)( const gp_Pnt & , const TopoDS_Edge & , const Standard_Real ))  static_cast<TopAbs_State (*)( const gp_Pnt & , const TopoDS_Edge & , const Standard_Real )>(&FUN_tool_staPinE),
          R"#(None)#"  , py::arg("P"),  py::arg("E"),  py::arg("tol"));
    m.def("FUN_tool_staPinE",
          (TopAbs_State (*)( const gp_Pnt & , const TopoDS_Edge & ))  static_cast<TopAbs_State (*)( const gp_Pnt & , const TopoDS_Edge & )>(&FUN_tool_staPinE),
          R"#(None)#"  , py::arg("P"),  py::arg("E"));
    m.def("FUN_tool_orientVinE",
          (Standard_Integer (*)( const TopoDS_Vertex & , const TopoDS_Edge & ))  static_cast<Standard_Integer (*)( const TopoDS_Vertex & , const TopoDS_Edge & )>(&FUN_tool_orientVinE),
          R"#(None)#"  , py::arg("v"),  py::arg("e"));
    m.def("FUN_tool_orientEinF",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , TopAbs_Orientation & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , TopAbs_Orientation & )>(&FUN_tool_orientEinF),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("oriEinF"));
    m.def("FUN_tool_orientEinFFORWARD",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , TopAbs_Orientation & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , TopAbs_Orientation & )>(&FUN_tool_orientEinFFORWARD),
          R"#(None)#"  , py::arg("E"),  py::arg("F"),  py::arg("oriEinF"));
    m.def("FUN_tool_EboundF",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & )>(&FUN_tool_EboundF),
          R"#(None)#"  , py::arg("E"),  py::arg("F"));
    m.def("FUN_tool_nggeomF",
          (gp_Vec (*)( const gp_Pnt2d & , const TopoDS_Face & ))  static_cast<gp_Vec (*)( const gp_Pnt2d & , const TopoDS_Face & )>(&FUN_tool_nggeomF),
          R"#(None)#"  , py::arg("p2d"),  py::arg("F"));
    m.def("FUN_tool_nggeomF",
          (Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const TopoDS_Face & , gp_Vec & ))  static_cast<Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const TopoDS_Face & , gp_Vec & )>(&FUN_tool_nggeomF),
          R"#(None)#"  , py::arg("paronE"),  py::arg("E"),  py::arg("F"),  py::arg("nggeomF"));
    m.def("FUN_tool_nggeomF",
          (Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const TopoDS_Face & , gp_Vec & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const TopoDS_Face & , gp_Vec & , const Standard_Real )>(&FUN_tool_nggeomF),
          R"#(None)#"  , py::arg("paronE"),  py::arg("E"),  py::arg("F"),  py::arg("nggeomF"),  py::arg("tol"));
    m.def("FUN_tool_EtgF",
          (Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const gp_Pnt2d & , const TopoDS_Face & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const gp_Pnt2d & , const TopoDS_Face & , const Standard_Real )>(&FUN_tool_EtgF),
          R"#(None)#"  , py::arg("paronE"),  py::arg("E"),  py::arg("p2d"),  py::arg("F"),  py::arg("tola"));
    m.def("FUN_tool_EtgOOE",
          (Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const Standard_Real & , const TopoDS_Edge & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const Standard_Real & , const TopoDS_Edge & , const Standard_Real & , const TopoDS_Edge & , const Standard_Real )>(&FUN_tool_EtgOOE),
          R"#(None)#"  , py::arg("paronE"),  py::arg("E"),  py::arg("paronOOE"),  py::arg("OOE"),  py::arg("tola"));
    m.def("FUN_tool_getgeomxx",
          (gp_Vec (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const gp_Dir & ))  static_cast<gp_Vec (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const gp_Dir & )>(&FUN_tool_getgeomxx),
          R"#(None)#"  , py::arg("Fi"),  py::arg("Ei"),  py::arg("parOnEi"),  py::arg("ngFi"));
    m.def("FUN_tool_getgeomxx",
          (gp_Vec (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real ))  static_cast<gp_Vec (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real )>(&FUN_tool_getgeomxx),
          R"#(None)#"  , py::arg("Fi"),  py::arg("Ei"),  py::arg("parOnEi"));
    m.def("FUN_nearestISO",
          (Standard_Boolean (*)( const TopoDS_Face & , const Standard_Real , const Standard_Boolean , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , const Standard_Real , const Standard_Boolean , Standard_Real & , Standard_Real & )>(&FUN_nearestISO),
          R"#(None)#"  , py::arg("F"),  py::arg("xpar"),  py::arg("isoU"),  py::arg("xinf"),  py::arg("xsup"));
    m.def("FUN_tool_getxx",
          (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const gp_Dir & , gp_Dir & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , const gp_Dir & , gp_Dir & )>(&FUN_tool_getxx),
          R"#(None)#"  , py::arg("Fi"),  py::arg("Ei"),  py::arg("parOnEi"),  py::arg("ngFi"),  py::arg("XX"));
    m.def("FUN_tool_getxx",
          (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , gp_Dir & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , gp_Dir & )>(&FUN_tool_getxx),
          R"#(None)#"  , py::arg("Fi"),  py::arg("Ei"),  py::arg("parOnEi"),  py::arg("XX"));
    m.def("FUN_tool_getdxx",
          (Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , gp_Vec2d & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , const TopoDS_Edge & , const Standard_Real , gp_Vec2d & )>(&FUN_tool_getdxx),
          R"#(None)#"  , py::arg("F"),  py::arg("E"),  py::arg("parE"),  py::arg("XX"));
    m.def("FUN_tool_EitangenttoFe",
          (Standard_Boolean (*)( const gp_Dir & , const TopoDS_Edge & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const gp_Dir & , const TopoDS_Edge & , const Standard_Real )>(&FUN_tool_EitangenttoFe),
          R"#(None)#"  , py::arg("ngFe"),  py::arg("Ei"),  py::arg("parOnEi"));
    m.def("FUN_tool_typ",
          (GeomAbs_CurveType (*)( const TopoDS_Edge & ))  static_cast<GeomAbs_CurveType (*)( const TopoDS_Edge & )>(&FUN_tool_typ),
          R"#(None)#"  , py::arg("E"));
    m.def("FUN_tool_line",
          (Standard_Boolean (*)( const TopoDS_Edge & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & )>(&FUN_tool_line),
          R"#(None)#"  , py::arg("E"));
    m.def("FUN_tool_plane",
          (Standard_Boolean (*)( const TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & )>(&FUN_tool_plane),
          R"#(None)#"  , py::arg("F"));
    m.def("FUN_tool_cylinder",
          (Standard_Boolean (*)( const TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & )>(&FUN_tool_cylinder),
          R"#(None)#"  , py::arg("F"));
    m.def("FUN_tool_closedS",
          (Standard_Boolean (*)( const TopoDS_Shape & , Standard_Boolean & , Standard_Real & , Standard_Boolean & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , Standard_Boolean & , Standard_Real & , Standard_Boolean & , Standard_Real & )>(&FUN_tool_closedS),
          R"#(None)#"  , py::arg("F"),  py::arg("uclosed"),  py::arg("uperiod"),  py::arg("vclosed"),  py::arg("vperiod"));
    m.def("FUN_tool_closedS",
          (Standard_Boolean (*)( const TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & )>(&FUN_tool_closedS),
          R"#(None)#"  , py::arg("F"));
    m.def("FUN_tool_closedS",
          (Standard_Boolean (*)( const TopoDS_Shape & , Standard_Boolean & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , Standard_Boolean & , Standard_Real & , Standard_Real & )>(&FUN_tool_closedS),
          R"#(None)#"  , py::arg("F"),  py::arg("inU"),  py::arg("xmin"),  py::arg("xper"));
    m.def("FUN_tool_mkBnd2d",
          (void (*)( const TopoDS_Shape & , const TopoDS_Shape & , Bnd_Box2d & ))  static_cast<void (*)( const TopoDS_Shape & , const TopoDS_Shape & , Bnd_Box2d & )>(&FUN_tool_mkBnd2d),
          R"#(None)#"  , py::arg("W"),  py::arg("FF"),  py::arg("B2d"));
    m.def("FUN_tool_IsClosingE",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Shape & , const TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Shape & , const TopoDS_Face & )>(&FUN_tool_IsClosingE),
          R"#(None)#"  , py::arg("E"),  py::arg("S"),  py::arg("F"));
    m.def("FUN_tool_ClosingE",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Wire & , const TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Wire & , const TopoDS_Face & )>(&FUN_tool_ClosingE),
          R"#(None)#"  , py::arg("E"),  py::arg("W"),  py::arg("F"));
    m.def("FUN_tool_inS",
          (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & )>(&FUN_tool_inS),
          R"#(None)#"  , py::arg("subshape"),  py::arg("shape"));
    m.def("FUN_tool_Eshared",
          (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , TopoDS_Shape & )>(&FUN_tool_Eshared),
          R"#(None)#"  , py::arg("v"),  py::arg("F1"),  py::arg("F2"),  py::arg("Eshared"));
    m.def("FUN_tool_parVonE",
          (Standard_Boolean (*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Vertex & , const TopoDS_Edge & , Standard_Real & )>(&FUN_tool_parVonE),
          R"#(None)#"  , py::arg("v"),  py::arg("E"),  py::arg("par"));
    m.def("FUN_tool_parE",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Edge & , Standard_Real & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Edge & , Standard_Real & , const Standard_Real )>(&FUN_tool_parE),
          R"#(None)#"  , py::arg("E0"),  py::arg("par0"),  py::arg("E"),  py::arg("par"),  py::arg("tol"));
    m.def("FUN_tool_parE",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Edge & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Edge & , Standard_Real & )>(&FUN_tool_parE),
          R"#(None)#"  , py::arg("E0"),  py::arg("par0"),  py::arg("E"),  py::arg("par"));
    m.def("FUN_tool_paronEF",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & , const Standard_Real )>(&FUN_tool_paronEF),
          R"#(None)#"  , py::arg("E"),  py::arg("par"),  py::arg("F"),  py::arg("UV"),  py::arg("tol"));
    m.def("FUN_tool_paronEF",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & )>(&FUN_tool_paronEF),
          R"#(None)#"  , py::arg("E"),  py::arg("par"),  py::arg("F"),  py::arg("UV"));
    m.def("FUN_tool_parF",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & , const Standard_Real ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & , const Standard_Real )>(&FUN_tool_parF),
          R"#(None)#"  , py::arg("E"),  py::arg("par"),  py::arg("F"),  py::arg("UV"),  py::arg("tol"));
    m.def("FUN_tool_parF",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real & , const TopoDS_Face & , gp_Pnt2d & )>(&FUN_tool_parF),
          R"#(None)#"  , py::arg("E"),  py::arg("par"),  py::arg("F"),  py::arg("UV"));
    m.def("FUN_tool_dirC",
          (gp_Dir (*)( const Standard_Real , const BRepAdaptor_Curve & ))  static_cast<gp_Dir (*)( const Standard_Real , const BRepAdaptor_Curve & )>(&FUN_tool_dirC),
          R"#(None)#"  , py::arg("par"),  py::arg("BAC"));
    m.def("FUN_tool_tggeomE",
          (gp_Vec (*)( const Standard_Real , const TopoDS_Edge & ))  static_cast<gp_Vec (*)( const Standard_Real , const TopoDS_Edge & )>(&FUN_tool_tggeomE),
          R"#(None)#"  , py::arg("paronE"),  py::arg("E"));
    m.def("FUN_tool_line",
          (Standard_Boolean (*)( const BRepAdaptor_Curve & ))  static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & )>(&FUN_tool_line),
          R"#(None)#"  , py::arg("BAC"));
    m.def("FUN_tool_quad",
          (Standard_Boolean (*)( const TopoDS_Edge & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & )>(&FUN_tool_quad),
          R"#(None)#"  , py::arg("E"));
    m.def("FUN_tool_quad",
          (Standard_Boolean (*)( const BRepAdaptor_Curve & ))  static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & )>(&FUN_tool_quad),
          R"#(None)#"  , py::arg("BAC"));
    m.def("FUN_tool_quad",
          (Standard_Boolean (*)( const TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & )>(&FUN_tool_quad),
          R"#(None)#"  , py::arg("F"));
    m.def("FUN_tool_findPinBAC",
          (Standard_Boolean (*)( const BRepAdaptor_Curve & , gp_Pnt & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & , gp_Pnt & , Standard_Real & )>(&FUN_tool_findPinBAC),
          R"#(None)#"  , py::arg("BAC"),  py::arg("P"),  py::arg("par"));
    m.def("FUN_tool_findparinBAC",
          (Standard_Boolean (*)( const BRepAdaptor_Curve & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const BRepAdaptor_Curve & , Standard_Real & )>(&FUN_tool_findparinBAC),
          R"#(None)#"  , py::arg("BAC"),  py::arg("par"));
    m.def("FUN_tool_findparinE",
          (Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , Standard_Real & )>(&FUN_tool_findparinE),
          R"#(None)#"  , py::arg("E"),  py::arg("par"));
    m.def("FUN_tool_findPinE",
          (Standard_Boolean (*)( const TopoDS_Shape & , gp_Pnt & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , gp_Pnt & , Standard_Real & )>(&FUN_tool_findPinE),
          R"#(None)#"  , py::arg("E"),  py::arg("P"),  py::arg("par"));
    m.def("FUN_tool_maxtol",
          (Standard_Boolean (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum & , Standard_Real & )>(&FUN_tool_maxtol),
          R"#(None)#"  , py::arg("S"),  py::arg("typ"),  py::arg("tol"));
    m.def("FUN_tool_maxtol",
          (Standard_Real (*)( const TopoDS_Shape & ))  static_cast<Standard_Real (*)( const TopoDS_Shape & )>(&FUN_tool_maxtol),
          R"#(None)#"  , py::arg("S"));
    m.def("FUN_tool_nbshapes",
          (Standard_Integer (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum & ))  static_cast<Standard_Integer (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum & )>(&FUN_tool_nbshapes),
          R"#(None)#"  , py::arg("S"),  py::arg("typ"));
    m.def("FUN_tool_shapes",
          (void (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)( const TopoDS_Shape & , const TopAbs_ShapeEnum & , NCollection_List<TopoDS_Shape> & )>(&FUN_tool_shapes),
          R"#(None)#"  , py::arg("S"),  py::arg("typ"),  py::arg("ltyp"));
    m.def("FUN_tool_comparebndkole",
          (Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & ))  static_cast<Standard_Integer (*)( const TopoDS_Shape & , const TopoDS_Shape & )>(&FUN_tool_comparebndkole),
          R"#(None)#"  , py::arg("sh1"),  py::arg("sh2"));
    m.def("FUN_tool_SameOri",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Edge & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Edge & )>(&FUN_tool_SameOri),
          R"#(None)#"  , py::arg("E1"),  py::arg("E2"));
    m.def("FUN_tool_haspc",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & )>(&FUN_tool_haspc),
          R"#(None)#"  , py::arg("E"),  py::arg("F"));
    m.def("FUN_tool_pcurveonF",
          (Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Edge & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Edge & )>(&FUN_tool_pcurveonF),
          R"#(None)#"  , py::arg("F"),  py::arg("E"));
    m.def("FUN_tool_pcurveonF",
          (Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , TopoDS_Face & ))  static_cast<Standard_Boolean (*)( const TopoDS_Face & , TopoDS_Edge & , const opencascade::handle<Geom2d_Curve> & , TopoDS_Face & )>(&FUN_tool_pcurveonF),
          R"#(None)#"  , py::arg("fF"),  py::arg("faultyE"),  py::arg("C2d"),  py::arg("newf"));
    m.def("FUN_tool_curvesSO",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Edge & , const Standard_Real , Standard_Boolean & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Edge & , const Standard_Real , Standard_Boolean & )>(&FUN_tool_curvesSO),
          R"#(None)#"  , py::arg("E1"),  py::arg("p1"),  py::arg("E2"),  py::arg("p2"),  py::arg("so"));
    m.def("FUN_tool_curvesSO",
          (Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Edge & , Standard_Boolean & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Edge & , Standard_Boolean & )>(&FUN_tool_curvesSO),
          R"#(None)#"  , py::arg("E1"),  py::arg("p1"),  py::arg("E2"),  py::arg("so"));
    m.def("FUN_tool_curvesSO",
          (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Edge & , Standard_Boolean & ))  static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Edge & , Standard_Boolean & )>(&FUN_tool_curvesSO),
          R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("so"));
    m.def("FUN_tool_findAncestor",
          (Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Edge & , TopoDS_Face & ))  static_cast<Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & , const TopoDS_Edge & , TopoDS_Face & )>(&FUN_tool_findAncestor),
          R"#(None)#"  , py::arg("lF"),  py::arg("E"),  py::arg("Fanc"));
    m.def("FUN_ds_CopyEdge",
          (void (*)( const TopoDS_Shape & , TopoDS_Shape & ))  static_cast<void (*)( const TopoDS_Shape & , TopoDS_Shape & )>(&FUN_ds_CopyEdge),
          R"#(None)#"  , py::arg("Ein"),  py::arg("Eou"));
    m.def("FUN_ds_Parameter",
          (void (*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Real ))  static_cast<void (*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Real )>(&FUN_ds_Parameter),
          R"#(None)#"  , py::arg("E"),  py::arg("V"),  py::arg("P"));
    m.def("FUN_tool_MakeWire",
          (Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Wire & ))  static_cast<Standard_Boolean (*)(  const NCollection_List<TopoDS_Shape> & , TopoDS_Wire & )>(&FUN_tool_MakeWire),
          R"#(None)#"  , py::arg("loE"),  py::arg("newW"));
// ./opencascade/TopOpeBRepTool_CLASSI.hxx
// ./opencascade/TopOpeBRepTool_CurveTool.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_FuseEdges.hxx
// ./opencascade/TopOpeBRepTool_define.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_mkTondgE.hxx
// ./opencascade/TopOpeBRepTool_BoxSort.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx
// ./opencascade/TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx
// ./opencascade/TopOpeBRepTool_CORRISO.hxx
// ./opencascade/TopOpeBRepTool_STATE.hxx
// ./opencascade/TopOpeBRepTool_EXPORT.hxx
// ./opencascade/TopOpeBRepTool_HBoxTool.hxx
// ./opencascade/TopOpeBRepTool_REGUS.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, Bnd_Box2d, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeBox2d");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_face, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfShapeface");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_C2DF, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfOrientedShapeC2DF");
    register_template_NCollection_List<TopOpeBRepTool_C2DF>(m,"TopOpeBRepTool_ListOfC2DF");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepTool_connexity, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeconnexity");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_ListOfC2DF, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfShapeListOfC2DF");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, Bnd_Box, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeBox");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
