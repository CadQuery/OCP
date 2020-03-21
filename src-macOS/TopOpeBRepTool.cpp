
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepClass3d_SolidClassifier.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Dir.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
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
#include <Standard_NullObject.hxx>

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
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_BoxSort , shared_ptr<TopOpeBRepTool_BoxSort> >>(m.attr("TopOpeBRepTool_BoxSort"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_C2DF , shared_ptr<TopOpeBRepTool_C2DF> >>(m.attr("TopOpeBRepTool_C2DF"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_CLASSI , shared_ptr<TopOpeBRepTool_CLASSI> >>(m.attr("TopOpeBRepTool_CLASSI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_CORRISO , shared_ptr<TopOpeBRepTool_CORRISO> >>(m.attr("TopOpeBRepTool_CORRISO"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_CurveTool , shared_ptr<TopOpeBRepTool_CurveTool> >>(m.attr("TopOpeBRepTool_CurveTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_FuseEdges , shared_ptr<TopOpeBRepTool_FuseEdges> >>(m.attr("TopOpeBRepTool_FuseEdges"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_GeomTool , shared_ptr<TopOpeBRepTool_GeomTool> >>(m.attr("TopOpeBRepTool_GeomTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_HBoxTool ,opencascade::handle<TopOpeBRepTool_HBoxTool> , Standard_Transient>>(m.attr("TopOpeBRepTool_HBoxTool"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepTool_HBoxTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepTool_HBoxTool::*)() const>(&TopOpeBRepTool_HBoxTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepTool_HBoxTool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_PurgeInternalEdges , shared_ptr<TopOpeBRepTool_PurgeInternalEdges> >>(m.attr("TopOpeBRepTool_PurgeInternalEdges"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (TopOpeBRepTool_PurgeInternalEdges::*)() const) static_cast<Standard_Boolean (TopOpeBRepTool_PurgeInternalEdges::*)() const>(&TopOpeBRepTool_PurgeInternalEdges::IsDone),
             R"#(returns False if the list of internal edges has not been extracted)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_REGUS , shared_ptr<TopOpeBRepTool_REGUS> >>(m.attr("TopOpeBRepTool_REGUS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_REGUW , shared_ptr<TopOpeBRepTool_REGUW> >>(m.attr("TopOpeBRepTool_REGUW"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_ShapeClassifier , shared_ptr<TopOpeBRepTool_ShapeClassifier> >>(m.attr("TopOpeBRepTool_ShapeClassifier"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_SolidClassifier , shared_ptr<TopOpeBRepTool_SolidClassifier> >>(m.attr("TopOpeBRepTool_SolidClassifier"))
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
    register_default_constructor<TopOpeBRepTool_TOOL , shared_ptr<TopOpeBRepTool_TOOL>>(m,"TopOpeBRepTool_TOOL");

    static_cast<py::class_<TopOpeBRepTool_TOOL , shared_ptr<TopOpeBRepTool_TOOL> >>(m.attr("TopOpeBRepTool_TOOL"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_connexity , shared_ptr<TopOpeBRepTool_connexity> >>(m.attr("TopOpeBRepTool_connexity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_face , shared_ptr<TopOpeBRepTool_face> >>(m.attr("TopOpeBRepTool_face"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_makeTransition , shared_ptr<TopOpeBRepTool_makeTransition> >>(m.attr("TopOpeBRepTool_makeTransition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepTool_mkTondgE , shared_ptr<TopOpeBRepTool_mkTondgE> >>(m.attr("TopOpeBRepTool_mkTondgE"))
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
// ./opencascade/TopOpeBRepTool_KRO.hxx
// ./opencascade/TopOpeBRepTool_DRAW.hxx
// ./opencascade/TopOpeBRepTool_tol.hxx
// ./opencascade/TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_OutCurveType.hxx
// ./opencascade/TopOpeBRepTool_PROJECT.hxx
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx
// ./opencascade/TopOpeBRepTool_EXPORT.hxx
// ./opencascade/TopOpeBRepTool_PSoClassif.hxx
// ./opencascade/TopOpeBRepTool_REGUW.hxx
// ./opencascade/TopOpeBRepTool_PShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_HBoxTool.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.hxx
// ./opencascade/TopOpeBRepTool_PURGE.hxx
// ./opencascade/TopOpeBRepTool_C2DF.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx
// ./opencascade/TopOpeBRepTool_FuseEdges.hxx
// ./opencascade/TopOpeBRepTool_SC.hxx
// ./opencascade/TopOpeBRepTool_ShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_ShapeTool.hxx
// ./opencascade/TopOpeBRepTool_defineG.hxx
// ./opencascade/TopOpeBRepTool_AncestorsTool.hxx
// ./opencascade/TopOpeBRepTool_BoxSort.hxx
// ./opencascade/TopOpeBRepTool_STATE.hxx
// ./opencascade/TopOpeBRepTool_2d.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_CLASSI.hxx
// ./opencascade/TopOpeBRepTool_ShapeExplorer.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx
// ./opencascade/TopOpeBRepTool_connexity.hxx
// ./opencascade/TopOpeBRepTool_TOPOLOGY.hxx
// ./opencascade/TopOpeBRepTool_CORRISO.hxx
// ./opencascade/TopOpeBRepTool_Plos.hxx
// ./opencascade/TopOpeBRepTool_face.hxx
// ./opencascade/TopOpeBRepTool_TOOL.hxx
// ./opencascade/TopOpeBRepTool_REGUS.hxx
// ./opencascade/TopOpeBRepTool_CurveTool.hxx
// ./opencascade/TopOpeBRepTool_makeTransition.hxx
// ./opencascade/TopOpeBRepTool.hxx
// ./opencascade/TopOpeBRepTool_PurgeInternalEdges.hxx
// ./opencascade/TopOpeBRepTool_mkTondgE.hxx
// ./opencascade/TopOpeBRepTool_define.hxx
// ./opencascade/TopOpeBRepTool_GEOMETRY.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
// ./opencascade/TopOpeBRepTool_SolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_GeomTool.hxx
// ./opencascade/TopOpeBRepTool_box.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<TopOpeBRepTool_C2DF>(m,"TopOpeBRepTool_ListOfC2DF");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepTool_connexity, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeconnexity");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_ListOfC2DF, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfShapeListOfC2DF");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, Bnd_Box2d, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeBox2d");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_C2DF, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfOrientedShapeC2DF");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, Bnd_Box, TopTools_OrientedShapeMapHasher>(m,"TopOpeBRepTool_IndexedDataMapOfShapeBox");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepTool_face, TopTools_ShapeMapHasher>(m,"TopOpeBRepTool_DataMapOfShapeface");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
