
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
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_InterferenceIterator.hxx>
#include <TopOpeBRepDS_TKI.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRepDS_CurvePointInterference.hxx>
#include <TopOpeBRepDS_SurfaceCurveInterference.hxx>
#include <TopOpeBRepDS_SolidSurfaceInterference.hxx>
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#include <TopOpeBRepDS_EdgeVertexInterference.hxx>
#include <TopOpeBRepDS_FaceEdgeInterference.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_GeometryData.hxx>
#include <TopOpeBRepDS_SurfaceData.hxx>
#include <TopOpeBRepDS_CurveData.hxx>
#include <TopOpeBRepDS_PointData.hxx>
#include <TopOpeBRepDS_ShapeData.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopOpeBRepDS_InterferenceTool.hxx>
#include <TopOpeBRepDS_BuildTool.hxx>
#include <TopOpeBRepDS_Dumper.hxx>
#include <TopOpeBRepDS_Marker.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_EdgeInterferenceTool.hxx>
#include <TopOpeBRepDS_Edge3dInterferenceTool.hxx>
#include <TopOpeBRepDS_FaceInterferenceTool.hxx>
#include <TopOpeBRepDS_Filter.hxx>
#include <TopOpeBRepDS_Reducer.hxx>
#include <TopOpeBRepDS_TOOL.hxx>
#include <TopOpeBRepDS_FIR.hxx>
#include <TopOpeBRepDS_EIR.hxx>
#include <TopOpeBRepDS_Check.hxx>
#include <TopOpeBRepDS_GapFiller.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopOpeBRepDS_ListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_Explorer.hxx>
#include <TopOpeBRepDS_ShapeWithState.hxx>
#include <Geom_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <TopOpeBRepDS.hxx>
#include <TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopOpeBRepDS_BuildTool.hxx>
#include <TopOpeBRepDS_Check.hxx>
#include <TopOpeBRepDS_CheckStatus.hxx>
#include <TopOpeBRepDS_Config.hxx>
#include <TopOpeBRepDS_connex.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_CurveData.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_CurvePointInterference.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfCurve.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfPoint.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfMapOfSurface.hxx>
#include <TopOpeBRepDS_DataMapIteratorOfShapeSurface.hxx>
#include <TopOpeBRepDS_DataMapOfCheckStatus.hxx>
#include <TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx>
#include <TopOpeBRepDS_DataMapOfInterferenceShape.hxx>
#include <TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_DataMapOfShapeState.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_define.hxx>
#include <TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape.hxx>
#include <TopOpeBRepDS_DoubleMapOfIntegerShape.hxx>
#include <TopOpeBRepDS_DRAW.hxx>
#include <TopOpeBRepDS_Dumper.hxx>
#include <TopOpeBRepDS_Edge3dInterferenceTool.hxx>
#include <TopOpeBRepDS_EdgeInterferenceTool.hxx>
#include <TopOpeBRepDS_EdgeVertexInterference.hxx>
#include <TopOpeBRepDS_EIR.hxx>
#include <TopOpeBRepDS_Explorer.hxx>
#include <TopOpeBRepDS_EXPORT.hxx>
#include <TopOpeBRepDS_FaceEdgeInterference.hxx>
#include <TopOpeBRepDS_FaceInterferenceTool.hxx>
#include <TopOpeBRepDS_Filter.hxx>
#include <TopOpeBRepDS_FIR.hxx>
#include <TopOpeBRepDS_GapFiller.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_GeometryData.hxx>
#include <TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx>
#include <TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_InterferenceIterator.hxx>
#include <TopOpeBRepDS_InterferenceTool.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <TopOpeBRepDS_ListIteratorOfListOfInterference.hxx>
#include <TopOpeBRepDS_ListOfInterference.hxx>
#include <TopOpeBRepDS_ListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_MapOfCurve.hxx>
#include <TopOpeBRepDS_MapOfIntegerShapeData.hxx>
#include <TopOpeBRepDS_MapOfPoint.hxx>
#include <TopOpeBRepDS_MapOfShapeData.hxx>
#include <TopOpeBRepDS_MapOfSurface.hxx>
#include <TopOpeBRepDS_Marker.hxx>
#include <TopOpeBRepDS_PDataStructure.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_PointData.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_ProcessInterferencesTool.hxx>
#include <TopOpeBRepDS_Reducer.hxx>
#include <TopOpeBRepDS_repvg.hxx>
#include <TopOpeBRepDS_samdom.hxx>
#include <TopOpeBRepDS_ShapeData.hxx>
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#include <TopOpeBRepDS_ShapeSurface.hxx>
#include <TopOpeBRepDS_ShapeWithState.hxx>
#include <TopOpeBRepDS_SolidSurfaceInterference.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopOpeBRepDS_SurfaceCurveInterference.hxx>
#include <TopOpeBRepDS_SurfaceData.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_TKI.hxx>
#include <TopOpeBRepDS_TOOL.hxx>
#include <TopOpeBRepDS_Transition.hxx>

// template related includes
// ./opencascade\TopOpeBRepDS_ListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_ListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfIntegerShapeData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfIntegerShapeData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfShapeState.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfShapeState.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfCheckStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfCheckStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfInterferenceShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_DataMapOfInterferenceShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_ShapeSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\TopOpeBRepDS_MapOfShapeData.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopOpeBRepDS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopOpeBRepDS"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<TopOpeBRepDS , shared_ptr<TopOpeBRepDS>>(m,"TopOpeBRepDS");

    static_cast<py::class_<TopOpeBRepDS , shared_ptr<TopOpeBRepDS> >>(m.attr("TopOpeBRepDS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SPrint_s",
                    (TCollection_AsciiString (*)( const TopAbs_State ) ) static_cast<TCollection_AsciiString (*)( const TopAbs_State ) >(&TopOpeBRepDS::SPrint),
                    R"#(IN OU ON UN)#"  , py::arg("S"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopAbs_State , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopAbs_State , std::ostream & ) >(&TopOpeBRepDS::Print),
                    R"#(None)#"  , py::arg("S"),  py::arg("OS"))
        .def_static("SPrint_s",
                    (TCollection_AsciiString (*)( const TopOpeBRepDS_Kind ) ) static_cast<TCollection_AsciiString (*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS::SPrint),
                    R"#(<K>)#"  , py::arg("K"))
        .def_static("SPrint_s",
                    (TCollection_AsciiString (*)( const TopOpeBRepDS_Kind , const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & ) ) static_cast<TCollection_AsciiString (*)( const TopOpeBRepDS_Kind , const Standard_Integer , const TCollection_AsciiString & , const TCollection_AsciiString & ) >(&TopOpeBRepDS::SPrint),
                    R"#(S1(<K>,<I>)S2)#"  , py::arg("K"),  py::arg("I"),  py::arg("B")=static_cast<const TCollection_AsciiString &>(""),  py::arg("A")=static_cast<const TCollection_AsciiString &>(""))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopOpeBRepDS_Kind , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopOpeBRepDS_Kind , std::ostream & ) >(&TopOpeBRepDS::Print),
                    R"#(None)#"  , py::arg("K"),  py::arg("S"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopOpeBRepDS_Kind , const Standard_Integer , std::ostream & , const TCollection_AsciiString & , const TCollection_AsciiString & ) ) static_cast<Standard_OStream & (*)( const TopOpeBRepDS_Kind , const Standard_Integer , std::ostream & , const TCollection_AsciiString & , const TCollection_AsciiString & ) >(&TopOpeBRepDS::Print),
                    R"#(None)#"  , py::arg("K"),  py::arg("I"),  py::arg("S"),  py::arg("B")=static_cast<const TCollection_AsciiString &>(""),  py::arg("A")=static_cast<const TCollection_AsciiString &>(""))
        .def_static("SPrint_s",
                    (TCollection_AsciiString (*)( const TopAbs_ShapeEnum ) ) static_cast<TCollection_AsciiString (*)( const TopAbs_ShapeEnum ) >(&TopOpeBRepDS::SPrint),
                    R"#(None)#"  , py::arg("T"))
        .def_static("SPrint_s",
                    (TCollection_AsciiString (*)( const TopAbs_ShapeEnum , const Standard_Integer ) ) static_cast<TCollection_AsciiString (*)( const TopAbs_ShapeEnum , const Standard_Integer ) >(&TopOpeBRepDS::SPrint),
                    R"#((<T>,<I>))#"  , py::arg("T"),  py::arg("I"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopAbs_ShapeEnum , const Standard_Integer , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopAbs_ShapeEnum , const Standard_Integer , std::ostream & ) >(&TopOpeBRepDS::Print),
                    R"#(None)#"  , py::arg("T"),  py::arg("I"),  py::arg("S"))
        .def_static("SPrint_s",
                    (TCollection_AsciiString (*)( const TopAbs_Orientation ) ) static_cast<TCollection_AsciiString (*)( const TopAbs_Orientation ) >(&TopOpeBRepDS::SPrint),
                    R"#(None)#"  , py::arg("O"))
        .def_static("SPrint_s",
                    (TCollection_AsciiString (*)( const TopOpeBRepDS_Config ) ) static_cast<TCollection_AsciiString (*)( const TopOpeBRepDS_Config ) >(&TopOpeBRepDS::SPrint),
                    R"#(None)#"  , py::arg("C"))
        .def_static("Print_s",
                    (Standard_OStream & (*)( const TopOpeBRepDS_Config , std::ostream & ) ) static_cast<Standard_OStream & (*)( const TopOpeBRepDS_Config , std::ostream & ) >(&TopOpeBRepDS::Print),
                    R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def_static("IsGeometry_s",
                    (Standard_Boolean (*)( const TopOpeBRepDS_Kind ) ) static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS::IsGeometry),
                    R"#(None)#"  , py::arg("K"))
        .def_static("IsTopology_s",
                    (Standard_Boolean (*)( const TopOpeBRepDS_Kind ) ) static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS::IsTopology),
                    R"#(None)#"  , py::arg("K"))
        .def_static("KindToShape_s",
                    (TopAbs_ShapeEnum (*)( const TopOpeBRepDS_Kind ) ) static_cast<TopAbs_ShapeEnum (*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS::KindToShape),
                    R"#(None)#"  , py::arg("K"))
        .def_static("ShapeToKind_s",
                    (TopOpeBRepDS_Kind (*)( const TopAbs_ShapeEnum ) ) static_cast<TopOpeBRepDS_Kind (*)( const TopAbs_ShapeEnum ) >(&TopOpeBRepDS::ShapeToKind),
                    R"#(None)#"  , py::arg("S"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Association ,opencascade::handle<TopOpeBRepDS_Association> , Standard_Transient>>(m.attr("TopOpeBRepDS_Association"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Associate",
             (void (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_Association::Associate),
             R"#(None)#"  , py::arg("I"),  py::arg("K"))
        .def("Associate",
             (void (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_Association::Associate),
             R"#(None)#"  , py::arg("I"),  py::arg("LI"))
        .def("HasAssociation",
             (Standard_Boolean (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_Association::HasAssociation),
             R"#(None)#"  , py::arg("I"))
        .def("Associated",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_Association::Associated),
             R"#(None)#"  , py::arg("I"))
        .def("AreAssociated",
             (Standard_Boolean (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Association::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_Association::AreAssociated),
             R"#(None)#"  , py::arg("I"),  py::arg("K"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Association::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Association::*)() const>(&TopOpeBRepDS_Association::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Association::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_Association::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_BuildTool , shared_ptr<TopOpeBRepDS_BuildTool> >>(m.attr("TopOpeBRepDS_BuildTool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepTool_OutCurveType >()  , py::arg("OutCurveType") )
        .def(py::init< const TopOpeBRepTool_GeomTool & >()  , py::arg("GT") )
    // custom constructors
    // methods
        .def("GetGeomTool",
             (const TopOpeBRepTool_GeomTool & (TopOpeBRepDS_BuildTool::*)() const) static_cast<const TopOpeBRepTool_GeomTool & (TopOpeBRepDS_BuildTool::*)() const>(&TopOpeBRepDS_BuildTool::GetGeomTool),
             R"#(None)#" )
        .def("ChangeGeomTool",
             (TopOpeBRepTool_GeomTool & (TopOpeBRepDS_BuildTool::*)() ) static_cast<TopOpeBRepTool_GeomTool & (TopOpeBRepDS_BuildTool::*)() >(&TopOpeBRepDS_BuildTool::ChangeGeomTool),
             R"#(None)#" )
        .def("MakeVertex",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Point & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Point & ) const>(&TopOpeBRepDS_BuildTool::MakeVertex),
             R"#(None)#"  , py::arg("V"),  py::arg("P"))
        .def("MakeEdge",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Curve & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Curve & ) const>(&TopOpeBRepDS_BuildTool::MakeEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("C"))
        .def("MakeEdge",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Curve & , const TopOpeBRepDS_DataStructure & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Curve & , const TopOpeBRepDS_DataStructure & ) const>(&TopOpeBRepDS_BuildTool::MakeEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("C"),  py::arg("DS"))
        .def("MakeEdge",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const>(&TopOpeBRepDS_BuildTool::MakeEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("C"),  py::arg("Tol"))
        .def("MakeEdge",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::MakeEdge),
             R"#(None)#"  , py::arg("E"))
        .def("MakeWire",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::MakeWire),
             R"#(None)#"  , py::arg("W"))
        .def("MakeFace",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Surface & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopOpeBRepDS_Surface & ) const>(&TopOpeBRepDS_BuildTool::MakeFace),
             R"#(None)#"  , py::arg("F"),  py::arg("S"))
        .def("MakeShell",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::MakeShell),
             R"#(None)#"  , py::arg("Sh"))
        .def("MakeSolid",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::MakeSolid),
             R"#(None)#"  , py::arg("S"))
        .def("CopyEdge",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::CopyEdge),
             R"#(Make an edge <Eou> with the curve of the edge <Ein>)#"  , py::arg("Ein"),  py::arg("Eou"))
        .def("ComputePCurves",
             (void (TopOpeBRepDS_BuildTool::*)( const TopOpeBRepDS_Curve & , TopoDS_Edge & , TopOpeBRepDS_Curve & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopOpeBRepDS_Curve & , TopoDS_Edge & , TopOpeBRepDS_Curve & , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) const>(&TopOpeBRepDS_BuildTool::ComputePCurves),
             R"#(None)#"  , py::arg("C"),  py::arg("E"),  py::arg("newC"),  py::arg("CompPC1"),  py::arg("CompPC2"),  py::arg("CompC3D"))
        .def("PutPCurves",
             (void (TopOpeBRepDS_BuildTool::*)( const TopOpeBRepDS_Curve & , TopoDS_Edge & , const Standard_Boolean , const Standard_Boolean ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopOpeBRepDS_Curve & , TopoDS_Edge & , const Standard_Boolean , const Standard_Boolean ) const>(&TopOpeBRepDS_BuildTool::PutPCurves),
             R"#(None)#"  , py::arg("newC"),  py::arg("E"),  py::arg("CompPC1"),  py::arg("CompPC2"))
        .def("CopyFace",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::CopyFace),
             R"#(Make a face <Fou> with the surface of the face <Fin>)#"  , py::arg("Fin"),  py::arg("Fou"))
        .def("AddEdgeVertex",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & , const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::AddEdgeVertex),
             R"#(None)#"  , py::arg("Ein"),  py::arg("Eou"),  py::arg("V"))
        .def("AddEdgeVertex",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::AddEdgeVertex),
             R"#(None)#"  , py::arg("E"),  py::arg("V"))
        .def("AddWireEdge",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::AddWireEdge),
             R"#(None)#"  , py::arg("W"),  py::arg("E"))
        .def("AddFaceWire",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::AddFaceWire),
             R"#(None)#"  , py::arg("F"),  py::arg("W"))
        .def("AddShellFace",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::AddShellFace),
             R"#(None)#"  , py::arg("Sh"),  py::arg("F"))
        .def("AddSolidShell",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::AddSolidShell),
             R"#(None)#"  , py::arg("S"),  py::arg("Sh"))
        .def("Parameter",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Real ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Real ) const>(&TopOpeBRepDS_BuildTool::Parameter),
             R"#(Sets the parameter <P> for the vertex <V> on the edge <E>.)#"  , py::arg("E"),  py::arg("V"),  py::arg("P"))
        .def("Range",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) const>(&TopOpeBRepDS_BuildTool::Range),
             R"#(Sets the range of edge <E>.)#"  , py::arg("E"),  py::arg("first"),  py::arg("last"))
        .def("UpdateEdge",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::UpdateEdge),
             R"#(Sets the range of edge <Eou> from <Ein> only when <Ein> has a closed geometry.)#"  , py::arg("Ein"),  py::arg("Eou"))
        .def("Parameter",
             (void (TopOpeBRepDS_BuildTool::*)( const TopOpeBRepDS_Curve & , TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopOpeBRepDS_Curve & , TopoDS_Shape & , TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::Parameter),
             R"#(Compute the parameter of the vertex <V>, supported by the edge <E>, on the curve <C>.)#"  , py::arg("C"),  py::arg("E"),  py::arg("V"))
        .def("Curve3D",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const opencascade::handle<Geom_Curve> & , const Standard_Real ) const>(&TopOpeBRepDS_BuildTool::Curve3D),
             R"#(Sets the curve <C> for the edge <E>)#"  , py::arg("E"),  py::arg("C"),  py::arg("Tol"))
        .def("PCurve",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , TopoDS_Shape & , const opencascade::handle<Geom2d_Curve> & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , TopoDS_Shape & , const opencascade::handle<Geom2d_Curve> & ) const>(&TopOpeBRepDS_BuildTool::PCurve),
             R"#(Sets the pcurve <C> for the edge <E> on the face <F>. If OverWrite is True the old pcurve if there is one is overwritten, else the two pcurves are set.)#"  , py::arg("F"),  py::arg("E"),  py::arg("C"))
        .def("PCurve",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , TopoDS_Shape & , const TopOpeBRepDS_Curve & , const opencascade::handle<Geom2d_Curve> & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , TopoDS_Shape & , const TopOpeBRepDS_Curve & , const opencascade::handle<Geom2d_Curve> & ) const>(&TopOpeBRepDS_BuildTool::PCurve),
             R"#(None)#"  , py::arg("F"),  py::arg("E"),  py::arg("CDS"),  py::arg("C"))
        .def("Orientation",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopAbs_Orientation ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const TopAbs_Orientation ) const>(&TopOpeBRepDS_BuildTool::Orientation),
             R"#(None)#"  , py::arg("S"),  py::arg("O"))
        .def("Orientation",
             (TopAbs_Orientation (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & ) const) static_cast<TopAbs_Orientation (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::Orientation),
             R"#(None)#"  , py::arg("S"))
        .def("Closed",
             (void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const Standard_Boolean ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_BuildTool::Closed),
             R"#(None)#"  , py::arg("S"),  py::arg("B"))
        .def("Approximation",
             (Standard_Boolean (TopOpeBRepDS_BuildTool::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_BuildTool::*)() const>(&TopOpeBRepDS_BuildTool::Approximation),
             R"#(None)#" )
        .def("UpdateSurface",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const opencascade::handle<Geom_Surface> & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const opencascade::handle<Geom_Surface> & ) const>(&TopOpeBRepDS_BuildTool::UpdateSurface),
             R"#(None)#"  , py::arg("F"),  py::arg("SU"))
        .def("UpdateSurface",
             (void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_BuildTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & ) const>(&TopOpeBRepDS_BuildTool::UpdateSurface),
             R"#(None)#"  , py::arg("E"),  py::arg("oldF"),  py::arg("newF"))
        .def("OverWrite",
             (Standard_Boolean (TopOpeBRepDS_BuildTool::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_BuildTool::*)() const>(&TopOpeBRepDS_BuildTool::OverWrite),
             R"#(None)#" )
        .def("OverWrite",
             (void (TopOpeBRepDS_BuildTool::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_BuildTool::*)( const Standard_Boolean ) >(&TopOpeBRepDS_BuildTool::OverWrite),
             R"#(None)#"  , py::arg("O"))
        .def("Translate",
             (Standard_Boolean (TopOpeBRepDS_BuildTool::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_BuildTool::*)() const>(&TopOpeBRepDS_BuildTool::Translate),
             R"#(None)#" )
        .def("Translate",
             (void (TopOpeBRepDS_BuildTool::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_BuildTool::*)( const Standard_Boolean ) >(&TopOpeBRepDS_BuildTool::Translate),
             R"#(None)#"  , py::arg("T"))
    // methods using call by reference i.s.o. return
        .def("GetOrientedEdgeVertices",
             []( TopOpeBRepDS_BuildTool &self , TopoDS_Edge & E,TopoDS_Vertex & Vmin,TopoDS_Vertex & Vmax ){ Standard_Real  Parmin; Standard_Real  Parmax; self.GetOrientedEdgeVertices(E,Vmin,Vmax,Parmin,Parmax); return std::make_tuple(Parmin,Parmax); },
             R"#(None)#"  , py::arg("E"),  py::arg("Vmin"),  py::arg("Vmax"))
        .def("UpdateEdgeCurveTol",
             []( TopOpeBRepDS_BuildTool &self , const TopoDS_Face & F1,const TopoDS_Face & F2,TopoDS_Edge & E,const opencascade::handle<Geom_Curve> & C3Dnew,const Standard_Real tol3d,const Standard_Real tol2d1,const Standard_Real tol2d2 ){ Standard_Real  newtol; Standard_Real  newparmin; Standard_Real  newparmax; self.UpdateEdgeCurveTol(F1,F2,E,C3Dnew,tol3d,tol2d1,tol2d2,newtol,newparmin,newparmax); return std::make_tuple(newtol,newparmin,newparmax); },
             R"#(None)#"  , py::arg("F1"),  py::arg("F2"),  py::arg("E"),  py::arg("C3Dnew"),  py::arg("tol3d"),  py::arg("tol2d1"),  py::arg("tol2d2"))
        .def("ApproxCurves",
             []( TopOpeBRepDS_BuildTool &self , const TopOpeBRepDS_Curve & C,TopoDS_Edge & E,const opencascade::handle<TopOpeBRepDS_HDataStructure> & HDS ){ Standard_Integer  inewC; self.ApproxCurves(C,E,inewC,HDS); return std::make_tuple(inewC); },
             R"#(None)#"  , py::arg("C"),  py::arg("E"),  py::arg("HDS"))
        .def("RecomputeCurves",
             []( TopOpeBRepDS_BuildTool &self , const TopOpeBRepDS_Curve & C,const TopoDS_Edge & oldE,TopoDS_Edge & E,const opencascade::handle<TopOpeBRepDS_HDataStructure> & HDS ){ Standard_Integer  inewC; self.RecomputeCurves(C,oldE,E,inewC,HDS); return std::make_tuple(inewC); },
             R"#(None)#"  , py::arg("C"),  py::arg("oldE"),  py::arg("E"),  py::arg("HDS"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Check ,opencascade::handle<TopOpeBRepDS_Check> , Standard_Transient>>(m.attr("TopOpeBRepDS_Check"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> & >()  , py::arg("HDS") )
    // custom constructors
    // methods
        .def("ChkIntg",
             (Standard_Boolean (TopOpeBRepDS_Check::*)() ) static_cast<Standard_Boolean (TopOpeBRepDS_Check::*)() >(&TopOpeBRepDS_Check::ChkIntg),
             R"#(Check integrition of DS)#" )
        .def("ChkIntgInterf",
             (Standard_Boolean (TopOpeBRepDS_Check::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<Standard_Boolean (TopOpeBRepDS_Check::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_Check::ChkIntgInterf),
             R"#(Check integrition of interferences (les supports et les geometries de LI))#"  , py::arg("LI"))
        .def("CheckDS",
             (Standard_Boolean (TopOpeBRepDS_Check::*)( const Standard_Integer , const TopOpeBRepDS_Kind ) ) static_cast<Standard_Boolean (TopOpeBRepDS_Check::*)( const Standard_Integer , const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS_Check::CheckDS),
             R"#(Verifie que le ieme element de la DS existe, et pour un K de type topologique, verifie qu'il est du bon type (VERTEX, EDGE, WIRE, FACE, SHELL ou SOLID))#"  , py::arg("i"),  py::arg("K"))
        .def("ChkIntgSamDom",
             (Standard_Boolean (TopOpeBRepDS_Check::*)() ) static_cast<Standard_Boolean (TopOpeBRepDS_Check::*)() >(&TopOpeBRepDS_Check::ChkIntgSamDom),
             R"#(Check integrition des champs SameDomain de la DS)#" )
        .def("CheckShapes",
             (Standard_Boolean (TopOpeBRepDS_Check::*)(  const NCollection_List<TopoDS_Shape> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Check::*)(  const NCollection_List<TopoDS_Shape> & ) const>(&TopOpeBRepDS_Check::CheckShapes),
             R"#(Verifie que les Shapes existent bien dans la DS Utile pour les Shapes SameDomain si la liste est vide, renvoie vrai)#"  , py::arg("LS"))
        .def("OneVertexOnPnt",
             (Standard_Boolean (TopOpeBRepDS_Check::*)() ) static_cast<Standard_Boolean (TopOpeBRepDS_Check::*)() >(&TopOpeBRepDS_Check::OneVertexOnPnt),
             R"#(Verifie que les Vertex non SameDomain sont bien nonSameDomain, que les vertex sameDomain sont bien SameDomain, que les Points sont non confondus ni entre eux, ni avec des Vertex.)#" )
        .def("HDS",
             (const opencascade::handle<TopOpeBRepDS_HDataStructure> & (TopOpeBRepDS_Check::*)() const) static_cast<const opencascade::handle<TopOpeBRepDS_HDataStructure> & (TopOpeBRepDS_Check::*)() const>(&TopOpeBRepDS_Check::HDS),
             R"#(None)#" )
        .def("ChangeHDS",
             (opencascade::handle<TopOpeBRepDS_HDataStructure> & (TopOpeBRepDS_Check::*)() ) static_cast<opencascade::handle<TopOpeBRepDS_HDataStructure> & (TopOpeBRepDS_Check::*)() >(&TopOpeBRepDS_Check::ChangeHDS),
             R"#(None)#" )
        .def("PrintIntg",
             (Standard_OStream & (TopOpeBRepDS_Check::*)( std::ostream & ) ) static_cast<Standard_OStream & (TopOpeBRepDS_Check::*)( std::ostream & ) >(&TopOpeBRepDS_Check::PrintIntg),
             R"#(None)#"  , py::arg("S"))
        .def("Print",
             (Standard_OStream & (TopOpeBRepDS_Check::*)( const TopOpeBRepDS_CheckStatus , std::ostream & ) ) static_cast<Standard_OStream & (TopOpeBRepDS_Check::*)( const TopOpeBRepDS_CheckStatus , std::ostream & ) >(&TopOpeBRepDS_Check::Print),
             R"#(Prints the name of CheckStatus <stat> as a String)#"  , py::arg("stat"),  py::arg("S"))
        .def("PrintShape",
             (Standard_OStream & (TopOpeBRepDS_Check::*)( const TopAbs_ShapeEnum , std::ostream & ) ) static_cast<Standard_OStream & (TopOpeBRepDS_Check::*)( const TopAbs_ShapeEnum , std::ostream & ) >(&TopOpeBRepDS_Check::PrintShape),
             R"#(Prints the name of CheckStatus <stat> as a String)#"  , py::arg("SE"),  py::arg("S"))
        .def("PrintShape",
             (Standard_OStream & (TopOpeBRepDS_Check::*)( const Standard_Integer , std::ostream & ) ) static_cast<Standard_OStream & (TopOpeBRepDS_Check::*)( const Standard_Integer , std::ostream & ) >(&TopOpeBRepDS_Check::PrintShape),
             R"#(Prints the name of CheckStatus <stat> as a String)#"  , py::arg("index"),  py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Check::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Check::*)() const>(&TopOpeBRepDS_Check::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Check::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_Check::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Curve , shared_ptr<TopOpeBRepDS_Curve> >>(m.attr("TopOpeBRepDS_Curve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Boolean >()  , py::arg("P"),  py::arg("T"),  py::arg("IsWalk")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DefineCurve",
             (void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom_Curve> & , const Standard_Real , const Standard_Boolean ) >(&TopOpeBRepDS_Curve::DefineCurve),
             R"#(None)#"  , py::arg("P"),  py::arg("T"),  py::arg("IsWalk"))
        .def("Tolerance",
             (void (TopOpeBRepDS_Curve::*)( const Standard_Real ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const Standard_Real ) >(&TopOpeBRepDS_Curve::Tolerance),
             R"#(Update the tolerance)#"  , py::arg("tol"))
        .def("SetSCI",
             (void (TopOpeBRepDS_Curve::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_Curve::SetSCI),
             R"#(define the interferences face/curve.)#"  , py::arg("I1"),  py::arg("I2"))
        .def("GetSCI1",
             (const opencascade::handle<TopOpeBRepDS_Interference> & (TopOpeBRepDS_Curve::*)() const) static_cast<const opencascade::handle<TopOpeBRepDS_Interference> & (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::GetSCI1),
             R"#(None)#" )
        .def("GetSCI2",
             (const opencascade::handle<TopOpeBRepDS_Interference> & (TopOpeBRepDS_Curve::*)() const) static_cast<const opencascade::handle<TopOpeBRepDS_Interference> & (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::GetSCI2),
             R"#(None)#" )
        .def("GetSCI",
             (void (TopOpeBRepDS_Curve::*)( opencascade::handle<TopOpeBRepDS_Interference> & , opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<void (TopOpeBRepDS_Curve::*)( opencascade::handle<TopOpeBRepDS_Interference> & , opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_Curve::GetSCI),
             R"#(None)#"  , py::arg("I1"),  py::arg("I2"))
        .def("SetShapes",
             (void (TopOpeBRepDS_Curve::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepDS_Curve::SetShapes),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("GetShapes",
             (void (TopOpeBRepDS_Curve::*)( TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<void (TopOpeBRepDS_Curve::*)( TopoDS_Shape & , TopoDS_Shape & ) const>(&TopOpeBRepDS_Curve::GetShapes),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("Shape1",
             (const TopoDS_Shape & (TopOpeBRepDS_Curve::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Shape1),
             R"#(None)#" )
        .def("ChangeShape1",
             (TopoDS_Shape & (TopOpeBRepDS_Curve::*)() ) static_cast<TopoDS_Shape & (TopOpeBRepDS_Curve::*)() >(&TopOpeBRepDS_Curve::ChangeShape1),
             R"#(None)#" )
        .def("Shape2",
             (const TopoDS_Shape & (TopOpeBRepDS_Curve::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Shape2),
             R"#(None)#" )
        .def("ChangeShape2",
             (TopoDS_Shape & (TopOpeBRepDS_Curve::*)() ) static_cast<TopoDS_Shape & (TopOpeBRepDS_Curve::*)() >(&TopOpeBRepDS_Curve::ChangeShape2),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (TopOpeBRepDS_Curve::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Curve),
             R"#(None)#" )
        .def("SetRange",
             (void (TopOpeBRepDS_Curve::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const Standard_Real , const Standard_Real ) >(&TopOpeBRepDS_Curve::SetRange),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("Range",
             (Standard_Boolean (TopOpeBRepDS_Curve::*)( Standard_Real & , Standard_Real & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Curve::*)( Standard_Real & , Standard_Real & ) const>(&TopOpeBRepDS_Curve::Range),
             R"#(None)#"  , py::arg("First"),  py::arg("Last"))
        .def("Tolerance",
             (Standard_Real (TopOpeBRepDS_Curve::*)() const) static_cast<Standard_Real (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Tolerance),
             R"#(None)#" )
        .def("ChangeCurve",
             (opencascade::handle<Geom_Curve> & (TopOpeBRepDS_Curve::*)() ) static_cast<opencascade::handle<Geom_Curve> & (TopOpeBRepDS_Curve::*)() >(&TopOpeBRepDS_Curve::ChangeCurve),
             R"#(None)#" )
        .def("Curve",
             (void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom_Curve> & , const Standard_Real ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom_Curve> & , const Standard_Real ) >(&TopOpeBRepDS_Curve::Curve),
             R"#(None)#"  , py::arg("C3D"),  py::arg("Tol"))
        .def("Curve1",
             (const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_Curve::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Curve1),
             R"#(None)#" )
        .def("Curve1",
             (void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) >(&TopOpeBRepDS_Curve::Curve1),
             R"#(None)#"  , py::arg("PC1"))
        .def("Curve2",
             (const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_Curve::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Curve2),
             R"#(None)#" )
        .def("Curve2",
             (void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const opencascade::handle<Geom2d_Curve> & ) >(&TopOpeBRepDS_Curve::Curve2),
             R"#(None)#"  , py::arg("PC2"))
        .def("IsWalk",
             (Standard_Boolean (TopOpeBRepDS_Curve::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::IsWalk),
             R"#(None)#" )
        .def("ChangeIsWalk",
             (void (TopOpeBRepDS_Curve::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const Standard_Boolean ) >(&TopOpeBRepDS_Curve::ChangeIsWalk),
             R"#(None)#"  , py::arg("B"))
        .def("Keep",
             (Standard_Boolean (TopOpeBRepDS_Curve::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Keep),
             R"#(None)#" )
        .def("ChangeKeep",
             (void (TopOpeBRepDS_Curve::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const Standard_Boolean ) >(&TopOpeBRepDS_Curve::ChangeKeep),
             R"#(None)#"  , py::arg("B"))
        .def("Mother",
             (Standard_Integer (TopOpeBRepDS_Curve::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::Mother),
             R"#(None)#" )
        .def("ChangeMother",
             (void (TopOpeBRepDS_Curve::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const Standard_Integer ) >(&TopOpeBRepDS_Curve::ChangeMother),
             R"#(None)#"  , py::arg("I"))
        .def("DSIndex",
             (Standard_Integer (TopOpeBRepDS_Curve::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Curve::*)() const>(&TopOpeBRepDS_Curve::DSIndex),
             R"#(None)#" )
        .def("ChangeDSIndex",
             (void (TopOpeBRepDS_Curve::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Curve::*)( const Standard_Integer ) >(&TopOpeBRepDS_Curve::ChangeDSIndex),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_CurveExplorer , shared_ptr<TopOpeBRepDS_CurveExplorer> >>(m.attr("TopOpeBRepDS_CurveExplorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_DataStructure &,const Standard_Boolean >()  , py::arg("DS"),  py::arg("FindOnlyKeep")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_CurveExplorer::*)( const TopOpeBRepDS_DataStructure & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_CurveExplorer::*)( const TopOpeBRepDS_DataStructure & , const Standard_Boolean ) >(&TopOpeBRepDS_CurveExplorer::Init),
             R"#(None)#"  , py::arg("DS"),  py::arg("FindOnlyKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("More",
             (Standard_Boolean (TopOpeBRepDS_CurveExplorer::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_CurveExplorer::*)() const>(&TopOpeBRepDS_CurveExplorer::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepDS_CurveExplorer::*)() ) static_cast<void (TopOpeBRepDS_CurveExplorer::*)() >(&TopOpeBRepDS_CurveExplorer::Next),
             R"#(None)#" )
        .def("Curve",
             (const TopOpeBRepDS_Curve & (TopOpeBRepDS_CurveExplorer::*)() const) static_cast<const TopOpeBRepDS_Curve & (TopOpeBRepDS_CurveExplorer::*)() const>(&TopOpeBRepDS_CurveExplorer::Curve),
             R"#(None)#" )
        .def("IsCurve",
             (Standard_Boolean (TopOpeBRepDS_CurveExplorer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_CurveExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_CurveExplorer::IsCurve),
             R"#(None)#"  , py::arg("I"))
        .def("IsCurveKeep",
             (Standard_Boolean (TopOpeBRepDS_CurveExplorer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_CurveExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_CurveExplorer::IsCurveKeep),
             R"#(None)#"  , py::arg("I"))
        .def("Curve",
             (const TopOpeBRepDS_Curve & (TopOpeBRepDS_CurveExplorer::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Curve & (TopOpeBRepDS_CurveExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_CurveExplorer::Curve),
             R"#(None)#"  , py::arg("I"))
        .def("NbCurve",
             (Standard_Integer (TopOpeBRepDS_CurveExplorer::*)() ) static_cast<Standard_Integer (TopOpeBRepDS_CurveExplorer::*)() >(&TopOpeBRepDS_CurveExplorer::NbCurve),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (TopOpeBRepDS_CurveExplorer::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_CurveExplorer::*)() const>(&TopOpeBRepDS_CurveExplorer::Index),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_DataStructure , shared_ptr<TopOpeBRepDS_DataStructure> >>(m.attr("TopOpeBRepDS_DataStructure"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_DataStructure::*)() ) static_cast<void (TopOpeBRepDS_DataStructure::*)() >(&TopOpeBRepDS_DataStructure::Init),
             R"#(reset the data structure)#" )
        .def("AddSurface",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Surface & ) ) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Surface & ) >(&TopOpeBRepDS_DataStructure::AddSurface),
             R"#(Insert a new surface. Returns the index.)#"  , py::arg("S"))
        .def("RemoveSurface",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::RemoveSurface),
             R"#(None)#"  , py::arg("I"))
        .def("KeepSurface",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::KeepSurface),
             R"#(None)#"  , py::arg("I"))
        .def("KeepSurface",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Surface & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Surface & ) const>(&TopOpeBRepDS_DataStructure::KeepSurface),
             R"#(None)#"  , py::arg("S"))
        .def("ChangeKeepSurface",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepSurface),
             R"#(None)#"  , py::arg("I"),  py::arg("FindKeep"))
        .def("ChangeKeepSurface",
             (void (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Surface & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Surface & , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepSurface),
             R"#(None)#"  , py::arg("S"),  py::arg("FindKeep"))
        .def("AddCurve",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Curve & ) ) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Curve & ) >(&TopOpeBRepDS_DataStructure::AddCurve),
             R"#(Insert a new curve. Returns the index.)#"  , py::arg("S"))
        .def("RemoveCurve",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::RemoveCurve),
             R"#(None)#"  , py::arg("I"))
        .def("KeepCurve",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::KeepCurve),
             R"#(None)#"  , py::arg("I"))
        .def("KeepCurve",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Curve & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Curve & ) const>(&TopOpeBRepDS_DataStructure::KeepCurve),
             R"#(None)#"  , py::arg("C"))
        .def("ChangeKeepCurve",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepCurve),
             R"#(None)#"  , py::arg("I"),  py::arg("FindKeep"))
        .def("ChangeKeepCurve",
             (void (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Curve & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Curve & , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepCurve),
             R"#(None)#"  , py::arg("C"),  py::arg("FindKeep"))
        .def("AddPoint",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Point & ) ) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Point & ) >(&TopOpeBRepDS_DataStructure::AddPoint),
             R"#(Insert a new point. Returns the index.)#"  , py::arg("PDS"))
        .def("AddPointSS",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Point & , const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Point & , const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepDS_DataStructure::AddPointSS),
             R"#(Insert a new point. Returns the index.)#"  , py::arg("PDS"),  py::arg("S1"),  py::arg("S2"))
        .def("RemovePoint",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::RemovePoint),
             R"#(None)#"  , py::arg("I"))
        .def("KeepPoint",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::KeepPoint),
             R"#(None)#"  , py::arg("I"))
        .def("KeepPoint",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Point & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopOpeBRepDS_Point & ) const>(&TopOpeBRepDS_DataStructure::KeepPoint),
             R"#(None)#"  , py::arg("P"))
        .def("ChangeKeepPoint",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepPoint),
             R"#(None)#"  , py::arg("I"),  py::arg("FindKeep"))
        .def("ChangeKeepPoint",
             (void (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Point & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( TopOpeBRepDS_Point & , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepPoint),
             R"#(None)#"  , py::arg("P"),  py::arg("FindKeep"))
        .def("AddShape",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) ) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) >(&TopOpeBRepDS_DataStructure::AddShape),
             R"#(Insert a shape S. Returns the index.)#"  , py::arg("S"))
        .def("AddShape",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) ) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::AddShape),
             R"#(Insert a shape S which ancestor is I = 1 or 2. Returns the index.)#"  , py::arg("S"),  py::arg("I"))
        .def("KeepShape",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::KeepShape),
             R"#(None)#"  , py::arg("I"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("KeepShape",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::KeepShape),
             R"#(None)#"  , py::arg("S"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ChangeKeepShape",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepShape),
             R"#(None)#"  , py::arg("I"),  py::arg("FindKeep"))
        .def("ChangeKeepShape",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::ChangeKeepShape),
             R"#(None)#"  , py::arg("S"),  py::arg("FindKeep"))
        .def("InitSectionEdges",
             (void (TopOpeBRepDS_DataStructure::*)() ) static_cast<void (TopOpeBRepDS_DataStructure::*)() >(&TopOpeBRepDS_DataStructure::InitSectionEdges),
             R"#(None)#" )
        .def("AddSectionEdge",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Edge & ) ) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Edge & ) >(&TopOpeBRepDS_DataStructure::AddSectionEdge),
             R"#(None)#"  , py::arg("E"))
        .def("SurfaceInterferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::SurfaceInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("ChangeSurfaceInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangeSurfaceInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("CurveInterferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::CurveInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("ChangeCurveInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangeCurveInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("PointInterferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::PointInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("ChangePointInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangePointInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("ShapeInterferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::ShapeInterferences),
             R"#(None)#"  , py::arg("S"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ChangeShapeInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) >(&TopOpeBRepDS_DataStructure::ChangeShapeInterferences),
             R"#(None)#"  , py::arg("S"))
        .def("ShapeInterferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::ShapeInterferences),
             R"#(None)#"  , py::arg("I"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("ChangeShapeInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangeShapeInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("ShapeSameDomain",
             (const TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::ShapeSameDomain),
             R"#(None)#"  , py::arg("S"))
        .def("ChangeShapeSameDomain",
             (TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) ) static_cast<TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) >(&TopOpeBRepDS_DataStructure::ChangeShapeSameDomain),
             R"#(None)#"  , py::arg("S"))
        .def("ShapeSameDomain",
             (const TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::ShapeSameDomain),
             R"#(None)#"  , py::arg("I"))
        .def("ChangeShapeSameDomain",
             (TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopTools_ListOfShape & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangeShapeSameDomain),
             R"#(None)#"  , py::arg("I"))
        .def("ChangeShapes",
             (TopOpeBRepDS_MapOfShapeData & (TopOpeBRepDS_DataStructure::*)() ) static_cast<TopOpeBRepDS_MapOfShapeData & (TopOpeBRepDS_DataStructure::*)() >(&TopOpeBRepDS_DataStructure::ChangeShapes),
             R"#(None)#" )
        .def("AddShapeSameDomain",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepDS_DataStructure::AddShapeSameDomain),
             R"#(None)#"  , py::arg("S"),  py::arg("SSD"))
        .def("RemoveShapeSameDomain",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepDS_DataStructure::RemoveShapeSameDomain),
             R"#(None)#"  , py::arg("S"),  py::arg("SSD"))
        .def("SameDomainRef",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::SameDomainRef),
             R"#(None)#"  , py::arg("I"))
        .def("SameDomainRef",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::SameDomainRef),
             R"#(None)#"  , py::arg("S"))
        .def("SameDomainRef",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::SameDomainRef),
             R"#(None)#"  , py::arg("I"),  py::arg("Ref"))
        .def("SameDomainRef",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::SameDomainRef),
             R"#(None)#"  , py::arg("S"),  py::arg("Ref"))
        .def("SameDomainOri",
             (TopOpeBRepDS_Config (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<TopOpeBRepDS_Config (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::SameDomainOri),
             R"#(None)#"  , py::arg("I"))
        .def("SameDomainOri",
             (TopOpeBRepDS_Config (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<TopOpeBRepDS_Config (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::SameDomainOri),
             R"#(None)#"  , py::arg("S"))
        .def("SameDomainOri",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const TopOpeBRepDS_Config ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const TopOpeBRepDS_Config ) >(&TopOpeBRepDS_DataStructure::SameDomainOri),
             R"#(None)#"  , py::arg("I"),  py::arg("Ori"))
        .def("SameDomainOri",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopOpeBRepDS_Config ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopOpeBRepDS_Config ) >(&TopOpeBRepDS_DataStructure::SameDomainOri),
             R"#(None)#"  , py::arg("S"),  py::arg("Ori"))
        .def("SameDomainInd",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::SameDomainInd),
             R"#(None)#"  , py::arg("I"))
        .def("SameDomainInd",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::SameDomainInd),
             R"#(None)#"  , py::arg("S"))
        .def("SameDomainInd",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::SameDomainInd),
             R"#(None)#"  , py::arg("I"),  py::arg("Ind"))
        .def("SameDomainInd",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::SameDomainInd),
             R"#(None)#"  , py::arg("S"),  py::arg("Ind"))
        .def("AncestorRank",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::AncestorRank),
             R"#(None)#"  , py::arg("I"))
        .def("AncestorRank",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::AncestorRank),
             R"#(None)#"  , py::arg("S"))
        .def("AncestorRank",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::AncestorRank),
             R"#(None)#"  , py::arg("I"),  py::arg("Ianc"))
        .def("AncestorRank",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::AncestorRank),
             R"#(None)#"  , py::arg("S"),  py::arg("Ianc"))
        .def("AddShapeInterference",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_DataStructure::AddShapeInterference),
             R"#(None)#"  , py::arg("S"),  py::arg("I"))
        .def("RemoveShapeInterference",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_DataStructure::RemoveShapeInterference),
             R"#(None)#"  , py::arg("S"),  py::arg("I"))
        .def("FillShapesSameDomain",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::FillShapesSameDomain),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("refFirst")=static_cast<const Standard_Boolean>(Standard_True))
        .def("FillShapesSameDomain",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopOpeBRepDS_Config , const TopOpeBRepDS_Config , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopOpeBRepDS_Config , const TopOpeBRepDS_Config , const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::FillShapesSameDomain),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("c1"),  py::arg("c2"),  py::arg("refFirst")=static_cast<const Standard_Boolean>(Standard_True))
        .def("UnfillShapesSameDomain",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const TopoDS_Shape & ) >(&TopOpeBRepDS_DataStructure::UnfillShapesSameDomain),
             R"#(None)#"  , py::arg("S1"),  py::arg("S2"))
        .def("NbSurfaces",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)() const>(&TopOpeBRepDS_DataStructure::NbSurfaces),
             R"#(None)#" )
        .def("NbCurves",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)() const>(&TopOpeBRepDS_DataStructure::NbCurves),
             R"#(None)#" )
        .def("ChangeNbCurves",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangeNbCurves),
             R"#(None)#"  , py::arg("N"))
        .def("NbPoints",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)() const>(&TopOpeBRepDS_DataStructure::NbPoints),
             R"#(None)#" )
        .def("NbShapes",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)() const>(&TopOpeBRepDS_DataStructure::NbShapes),
             R"#(None)#" )
        .def("NbSectionEdges",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)() const>(&TopOpeBRepDS_DataStructure::NbSectionEdges),
             R"#(None)#" )
        .def("Surface",
             (const TopOpeBRepDS_Surface & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Surface & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::Surface),
             R"#(Returns the surface of index <I>.)#"  , py::arg("I"))
        .def("ChangeSurface",
             (TopOpeBRepDS_Surface & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_Surface & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangeSurface),
             R"#(Returns the surface of index <I>.)#"  , py::arg("I"))
        .def("Curve",
             (const TopOpeBRepDS_Curve & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Curve & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::Curve),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("ChangeCurve",
             (TopOpeBRepDS_Curve & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_Curve & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangeCurve),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("Point",
             (const TopOpeBRepDS_Point & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Point & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_DataStructure::Point),
             R"#(Returns the point of index <I>.)#"  , py::arg("I"))
        .def("ChangePoint",
             (TopOpeBRepDS_Point & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_Point & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_DataStructure::ChangePoint),
             R"#(Returns the point of index <I>.)#"  , py::arg("I"))
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const TopoDS_Shape & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::Shape),
             R"#(returns the shape of index I stored in the map myShapes, accessing a list of interference.)#"  , py::arg("I"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Shape",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::Shape),
             R"#(returns the index of shape <S> stored in the map myShapes, accessing a list of interference. returns 0 if <S> is not in the map.)#"  , py::arg("S"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SectionEdge",
             (const TopoDS_Edge & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const TopoDS_Edge & (TopOpeBRepDS_DataStructure::*)( const Standard_Integer , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::SectionEdge),
             R"#(None)#"  , py::arg("I"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SectionEdge",
             (Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Edge & , const Standard_Boolean ) const) static_cast<Standard_Integer (TopOpeBRepDS_DataStructure::*)( const TopoDS_Edge & , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::SectionEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsSectionEdge",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Edge & , const Standard_Boolean ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Edge & , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::IsSectionEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasGeometry",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::HasGeometry),
             R"#(Returns True if <S> has new geometries, i.e : True si : HasShape(S) True S a une liste d'interferences non vide. S = SOLID, FACE, EDGE : true/false S = SHELL, WIRE, VERTEX : false.)#"  , py::arg("S"))
        .def("HasShape",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_DataStructure::HasShape),
             R"#(Returns True if <S> est dans myShapes)#"  , py::arg("S"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetNewSurface",
             (void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const opencascade::handle<Geom_Surface> & ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , const opencascade::handle<Geom_Surface> & ) >(&TopOpeBRepDS_DataStructure::SetNewSurface),
             R"#(None)#"  , py::arg("F"),  py::arg("S"))
        .def("HasNewSurface",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::HasNewSurface),
             R"#(None)#"  , py::arg("F"))
        .def("NewSurface",
             (const opencascade::handle<Geom_Surface> & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<const opencascade::handle<Geom_Surface> & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::NewSurface),
             R"#(None)#"  , py::arg("F"))
        .def("Isfafa",
             (void (TopOpeBRepDS_DataStructure::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_DataStructure::*)( const Standard_Boolean ) >(&TopOpeBRepDS_DataStructure::Isfafa),
             R"#(None)#"  , py::arg("isfafa"))
        .def("Isfafa",
             (Standard_Boolean (TopOpeBRepDS_DataStructure::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_DataStructure::*)() const>(&TopOpeBRepDS_DataStructure::Isfafa),
             R"#(None)#" )
        .def("ChangeMapOfShapeWithStateObj",
             (TopOpeBRepDS_IndexedDataMapOfShapeWithState & (TopOpeBRepDS_DataStructure::*)() ) static_cast<TopOpeBRepDS_IndexedDataMapOfShapeWithState & (TopOpeBRepDS_DataStructure::*)() >(&TopOpeBRepDS_DataStructure::ChangeMapOfShapeWithStateObj),
             R"#(None)#" )
        .def("ChangeMapOfShapeWithStateTool",
             (TopOpeBRepDS_IndexedDataMapOfShapeWithState & (TopOpeBRepDS_DataStructure::*)() ) static_cast<TopOpeBRepDS_IndexedDataMapOfShapeWithState & (TopOpeBRepDS_DataStructure::*)() >(&TopOpeBRepDS_DataStructure::ChangeMapOfShapeWithStateTool),
             R"#(None)#" )
        .def("ChangeMapOfShapeWithState",
             (TopOpeBRepDS_IndexedDataMapOfShapeWithState & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , Standard_Boolean & ) ) static_cast<TopOpeBRepDS_IndexedDataMapOfShapeWithState & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & , Standard_Boolean & ) >(&TopOpeBRepDS_DataStructure::ChangeMapOfShapeWithState),
             R"#(None)#"  , py::arg("aShape"),  py::arg("aFlag"))
        .def("GetShapeWithState",
             (const TopOpeBRepDS_ShapeWithState & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const) static_cast<const TopOpeBRepDS_ShapeWithState & (TopOpeBRepDS_DataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_DataStructure::GetShapeWithState),
             R"#(None)#"  , py::arg("aShape"))
        .def("ChangeMapOfRejectedShapesObj",
             (TopTools_IndexedMapOfShape & (TopOpeBRepDS_DataStructure::*)() ) static_cast<TopTools_IndexedMapOfShape & (TopOpeBRepDS_DataStructure::*)() >(&TopOpeBRepDS_DataStructure::ChangeMapOfRejectedShapesObj),
             R"#(None)#" )
        .def("ChangeMapOfRejectedShapesTool",
             (TopTools_IndexedMapOfShape & (TopOpeBRepDS_DataStructure::*)() ) static_cast<TopTools_IndexedMapOfShape & (TopOpeBRepDS_DataStructure::*)() >(&TopOpeBRepDS_DataStructure::ChangeMapOfRejectedShapesTool),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Dumper , shared_ptr<TopOpeBRepDS_Dumper> >>(m.attr("TopOpeBRepDS_Dumper"))
    // constructors
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> & >()  , py::arg("HDS") )
    // custom constructors
    // methods
        .def("SDumpRefOri",
             (TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const) static_cast<TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const>(&TopOpeBRepDS_Dumper::SDumpRefOri),
             R"#(None)#"  , py::arg("K"),  py::arg("I"))
        .def("SDumpRefOri",
             (TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopoDS_Shape & ) const) static_cast<TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_Dumper::SDumpRefOri),
             R"#(None)#"  , py::arg("S"))
        .def("SPrintShape",
             (TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const Standard_Integer ) const) static_cast<TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const Standard_Integer ) const>(&TopOpeBRepDS_Dumper::SPrintShape),
             R"#(None)#"  , py::arg("I"))
        .def("SPrintShape",
             (TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopoDS_Shape & ) const) static_cast<TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_Dumper::SPrintShape),
             R"#(None)#"  , py::arg("S"))
        .def("SPrintShapeRefOri",
             (TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopoDS_Shape & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepDS_Dumper::*)( const TopoDS_Shape & , const TCollection_AsciiString & ) const>(&TopOpeBRepDS_Dumper::SPrintShapeRefOri),
             R"#(None)#"  , py::arg("S"),  py::arg("B")=static_cast<const TCollection_AsciiString &>(""))
        .def("SPrintShapeRefOri",
             (TCollection_AsciiString (TopOpeBRepDS_Dumper::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & ) const) static_cast<TCollection_AsciiString (TopOpeBRepDS_Dumper::*)(  const NCollection_List<TopoDS_Shape> & , const TCollection_AsciiString & ) const>(&TopOpeBRepDS_Dumper::SPrintShapeRefOri),
             R"#(None)#"  , py::arg("L"),  py::arg("B")=static_cast<const TCollection_AsciiString &>(""))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_EIR , shared_ptr<TopOpeBRepDS_EIR> >>(m.attr("TopOpeBRepDS_EIR"))
    // constructors
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> & >()  , py::arg("HDS") )
    // custom constructors
    // methods
        .def("ProcessEdgeInterferences",
             (void (TopOpeBRepDS_EIR::*)() ) static_cast<void (TopOpeBRepDS_EIR::*)() >(&TopOpeBRepDS_EIR::ProcessEdgeInterferences),
             R"#(None)#" )
        .def("ProcessEdgeInterferences",
             (void (TopOpeBRepDS_EIR::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_EIR::*)( const Standard_Integer ) >(&TopOpeBRepDS_EIR::ProcessEdgeInterferences),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Edge3dInterferenceTool , shared_ptr<TopOpeBRepDS_Edge3dInterferenceTool> >>(m.attr("TopOpeBRepDS_Edge3dInterferenceTool"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("InitPointVertex",
             (void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const Standard_Integer , const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const Standard_Integer , const TopoDS_Shape & ) >(&TopOpeBRepDS_Edge3dInterferenceTool::InitPointVertex),
             R"#(None)#"  , py::arg("IsVertex"),  py::arg("VonOO"))
        .def("Init",
             (void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_Edge3dInterferenceTool::Init),
             R"#(None)#"  , py::arg("Eref"),  py::arg("E"),  py::arg("F"),  py::arg("I"))
        .def("Add",
             (void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_Edge3dInterferenceTool::Add),
             R"#(None)#"  , py::arg("Eref"),  py::arg("E"),  py::arg("F"),  py::arg("I"))
        .def("Transition",
             (void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<void (TopOpeBRepDS_Edge3dInterferenceTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_Edge3dInterferenceTool::Transition),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_EdgeInterferenceTool , shared_ptr<TopOpeBRepDS_EdgeInterferenceTool> >>(m.attr("TopOpeBRepDS_EdgeInterferenceTool"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_EdgeInterferenceTool::*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_EdgeInterferenceTool::*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_EdgeInterferenceTool::Init),
             R"#(None)#"  , py::arg("E"),  py::arg("I"))
        .def("Add",
             (void (TopOpeBRepDS_EdgeInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_EdgeInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_EdgeInterferenceTool::Add),
             R"#(None)#"  , py::arg("E"),  py::arg("V"),  py::arg("I"))
        .def("Add",
             (void (TopOpeBRepDS_EdgeInterferenceTool::*)( const TopoDS_Shape & , const TopOpeBRepDS_Point & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_EdgeInterferenceTool::*)( const TopoDS_Shape & , const TopOpeBRepDS_Point & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_EdgeInterferenceTool::Add),
             R"#(None)#"  , py::arg("E"),  py::arg("P"),  py::arg("I"))
        .def("Transition",
             (void (TopOpeBRepDS_EdgeInterferenceTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<void (TopOpeBRepDS_EdgeInterferenceTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_EdgeInterferenceTool::Transition),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Explorer , shared_ptr<TopOpeBRepDS_Explorer> >>(m.attr("TopOpeBRepDS_Explorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> &,const TopAbs_ShapeEnum,const Standard_Boolean >()  , py::arg("HDS"),  py::arg("T")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE),  py::arg("findkeep")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_Explorer::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopAbs_ShapeEnum , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_Explorer::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopAbs_ShapeEnum , const Standard_Boolean ) >(&TopOpeBRepDS_Explorer::Init),
             R"#(None)#"  , py::arg("HDS"),  py::arg("T")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE),  py::arg("findkeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Type",
             (TopAbs_ShapeEnum (TopOpeBRepDS_Explorer::*)() const) static_cast<TopAbs_ShapeEnum (TopOpeBRepDS_Explorer::*)() const>(&TopOpeBRepDS_Explorer::Type),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TopOpeBRepDS_Explorer::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_Explorer::*)() const>(&TopOpeBRepDS_Explorer::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepDS_Explorer::*)() ) static_cast<void (TopOpeBRepDS_Explorer::*)() >(&TopOpeBRepDS_Explorer::Next),
             R"#(None)#" )
        .def("Current",
             (const TopoDS_Shape & (TopOpeBRepDS_Explorer::*)() const) static_cast<const TopoDS_Shape & (TopOpeBRepDS_Explorer::*)() const>(&TopOpeBRepDS_Explorer::Current),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (TopOpeBRepDS_Explorer::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Explorer::*)() const>(&TopOpeBRepDS_Explorer::Index),
             R"#(None)#" )
        .def("Face",
             (const TopoDS_Face & (TopOpeBRepDS_Explorer::*)() const) static_cast<const TopoDS_Face & (TopOpeBRepDS_Explorer::*)() const>(&TopOpeBRepDS_Explorer::Face),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (TopOpeBRepDS_Explorer::*)() const) static_cast<const TopoDS_Edge & (TopOpeBRepDS_Explorer::*)() const>(&TopOpeBRepDS_Explorer::Edge),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (TopOpeBRepDS_Explorer::*)() const) static_cast<const TopoDS_Vertex & (TopOpeBRepDS_Explorer::*)() const>(&TopOpeBRepDS_Explorer::Vertex),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_FIR , shared_ptr<TopOpeBRepDS_FIR> >>(m.attr("TopOpeBRepDS_FIR"))
    // constructors
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> & >()  , py::arg("HDS") )
    // custom constructors
    // methods
        .def("ProcessFaceInterferences",
             (void (TopOpeBRepDS_FIR::*)(  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepDS_FIR::*)(  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepDS_FIR::ProcessFaceInterferences),
             R"#(None)#"  , py::arg("M"))
        .def("ProcessFaceInterferences",
             (void (TopOpeBRepDS_FIR::*)( const Standard_Integer ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepDS_FIR::*)( const Standard_Integer ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepDS_FIR::ProcessFaceInterferences),
             R"#(None)#"  , py::arg("I"),  py::arg("M"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_FaceInterferenceTool , shared_ptr<TopOpeBRepDS_FaceInterferenceTool> >>(m.attr("TopOpeBRepDS_FaceInterferenceTool"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_FaceInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_FaceInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_FaceInterferenceTool::Init),
             R"#(Eisnew = true if E is a new edge built on edge I->Geometry() false if E is shape <=> I->Geometry())#"  , py::arg("FI"),  py::arg("E"),  py::arg("Eisnew"),  py::arg("I"))
        .def("Add",
             (void (TopOpeBRepDS_FaceInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_FaceInterferenceTool::*)( const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & , const Standard_Boolean , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_FaceInterferenceTool::Add),
             R"#(Eisnew = true if E is a new edge built on edge I->Geometry() false if E is shape <=> I->Geometry())#"  , py::arg("FI"),  py::arg("F"),  py::arg("E"),  py::arg("Eisnew"),  py::arg("I"))
        .def("Add",
             (void (TopOpeBRepDS_FaceInterferenceTool::*)( const TopoDS_Shape & , const TopOpeBRepDS_Curve & , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_FaceInterferenceTool::*)( const TopoDS_Shape & , const TopOpeBRepDS_Curve & , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_FaceInterferenceTool::Add),
             R"#(None)#"  , py::arg("E"),  py::arg("C"),  py::arg("I"))
        .def("SetEdgePntPar",
             (void (TopOpeBRepDS_FaceInterferenceTool::*)( const gp_Pnt & , const Standard_Real ) ) static_cast<void (TopOpeBRepDS_FaceInterferenceTool::*)( const gp_Pnt & , const Standard_Real ) >(&TopOpeBRepDS_FaceInterferenceTool::SetEdgePntPar),
             R"#(None)#"  , py::arg("P"),  py::arg("par"))
        .def("IsEdgePntParDef",
             (Standard_Boolean (TopOpeBRepDS_FaceInterferenceTool::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_FaceInterferenceTool::*)() const>(&TopOpeBRepDS_FaceInterferenceTool::IsEdgePntParDef),
             R"#(None)#" )
        .def("Transition",
             (void (TopOpeBRepDS_FaceInterferenceTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<void (TopOpeBRepDS_FaceInterferenceTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_FaceInterferenceTool::Transition),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
        .def("GetEdgePntPar",
             []( TopOpeBRepDS_FaceInterferenceTool &self , gp_Pnt & P ){ Standard_Real  par; self.GetEdgePntPar(P,par); return std::make_tuple(par); },
             R"#(None)#"  , py::arg("P"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Filter , shared_ptr<TopOpeBRepDS_Filter> >>(m.attr("TopOpeBRepDS_Filter"))
    // constructors
    // custom constructors
    // methods
        .def("ProcessInterferences",
             (void (TopOpeBRepDS_Filter::*)() ) static_cast<void (TopOpeBRepDS_Filter::*)() >(&TopOpeBRepDS_Filter::ProcessInterferences),
             R"#(None)#" )
        .def("ProcessFaceInterferences",
             (void (TopOpeBRepDS_Filter::*)(  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepDS_Filter::*)(  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepDS_Filter::ProcessFaceInterferences),
             R"#(None)#"  , py::arg("MEsp"))
        .def("ProcessFaceInterferences",
             (void (TopOpeBRepDS_Filter::*)( const Standard_Integer ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepDS_Filter::*)( const Standard_Integer ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepDS_Filter::ProcessFaceInterferences),
             R"#(None)#"  , py::arg("I"),  py::arg("MEsp"))
        .def("ProcessEdgeInterferences",
             (void (TopOpeBRepDS_Filter::*)() ) static_cast<void (TopOpeBRepDS_Filter::*)() >(&TopOpeBRepDS_Filter::ProcessEdgeInterferences),
             R"#(None)#" )
        .def("ProcessEdgeInterferences",
             (void (TopOpeBRepDS_Filter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Filter::*)( const Standard_Integer ) >(&TopOpeBRepDS_Filter::ProcessEdgeInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("ProcessCurveInterferences",
             (void (TopOpeBRepDS_Filter::*)() ) static_cast<void (TopOpeBRepDS_Filter::*)() >(&TopOpeBRepDS_Filter::ProcessCurveInterferences),
             R"#(None)#" )
        .def("ProcessCurveInterferences",
             (void (TopOpeBRepDS_Filter::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Filter::*)( const Standard_Integer ) >(&TopOpeBRepDS_Filter::ProcessCurveInterferences),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_GapFiller , shared_ptr<TopOpeBRepDS_GapFiller> >>(m.attr("TopOpeBRepDS_GapFiller"))
    // constructors
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> & >()  , py::arg("HDS") )
    // custom constructors
    // methods
        .def("Perform",
             (void (TopOpeBRepDS_GapFiller::*)() ) static_cast<void (TopOpeBRepDS_GapFiller::*)() >(&TopOpeBRepDS_GapFiller::Perform),
             R"#(None)#" )
        .def("FindAssociatedPoints",
             (void (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_GapFiller::FindAssociatedPoints),
             R"#(Recherche parmi l'ensemble des points d'Interference la Liste <LI> des points qui correspondent au point d'indice <Index>)#"  , py::arg("I"),  py::arg("LI"))
        .def("CheckConnexity",
             (Standard_Boolean (TopOpeBRepDS_GapFiller::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<Standard_Boolean (TopOpeBRepDS_GapFiller::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_GapFiller::CheckConnexity),
             R"#(Enchaine les sections via les points d'Interferences deja associe; Renvoit dans <L> les points extremites des Lignes. Methodes pour construire la liste des Points qui peuvent correspondre a une Point donne.)#"  , py::arg("LI"))
        .def("AddPointsOnShape",
             (void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Shape & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Shape & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_GapFiller::AddPointsOnShape),
             R"#(None)#"  , py::arg("S"),  py::arg("LI"))
        .def("AddPointsOnConnexShape",
             (void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Shape & ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Shape & ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_GapFiller::AddPointsOnConnexShape),
             R"#(Methodes pour reduire la liste des Points qui peuvent correspondre a une Point donne.)#"  , py::arg("F"),  py::arg("LI"))
        .def("FilterByFace",
             (void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Face & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Face & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_GapFiller::FilterByFace),
             R"#(None)#"  , py::arg("F"),  py::arg("LI"))
        .def("FilterByEdge",
             (void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Edge & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Edge & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_GapFiller::FilterByEdge),
             R"#(None)#"  , py::arg("E"),  py::arg("LI"))
        .def("FilterByIncidentDistance",
             (void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Face & , const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_GapFiller::*)( const TopoDS_Face & , const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_GapFiller::FilterByIncidentDistance),
             R"#(None)#"  , py::arg("F"),  py::arg("I"),  py::arg("LI"))
        .def("IsOnFace",
             (Standard_Boolean (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Face & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Face & ) const>(&TopOpeBRepDS_GapFiller::IsOnFace),
             R"#(Return TRUE si I a ete obtenu par une intersection avec <F>.)#"  , py::arg("I"),  py::arg("F"))
        .def("IsOnEdge",
             (Standard_Boolean (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Edge & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Edge & ) const>(&TopOpeBRepDS_GapFiller::IsOnEdge),
             R"#(Return TRUE si I ou une de ses representaions a pour support <E>. Methodes de reconstructions des geometries des point et des courbes de section)#"  , py::arg("I"),  py::arg("E"))
        .def("BuildNewGeometries",
             (void (TopOpeBRepDS_GapFiller::*)() ) static_cast<void (TopOpeBRepDS_GapFiller::*)() >(&TopOpeBRepDS_GapFiller::BuildNewGeometries),
             R"#(None)#" )
        .def("ReBuildGeom",
             (void (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> & ) ) static_cast<void (TopOpeBRepDS_GapFiller::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_Map<Standard_Integer, TColStd_MapIntegerHasher> & ) >(&TopOpeBRepDS_GapFiller::ReBuildGeom),
             R"#(None)#"  , py::arg("I1"),  py::arg("Done"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_GapTool ,opencascade::handle<TopOpeBRepDS_GapTool> , Standard_Transient>>(m.attr("TopOpeBRepDS_GapTool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> & >()  , py::arg("HDS") )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) ) static_cast<void (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ) >(&TopOpeBRepDS_GapTool::Init),
             R"#(None)#"  , py::arg("HDS"))
        .def("Interferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GapTool::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GapTool::*)( const Standard_Integer ) const>(&TopOpeBRepDS_GapTool::Interferences),
             R"#(None)#"  , py::arg("IndexPoint"))
        .def("SameInterferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_GapTool::SameInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("ChangeSameInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_GapTool::ChangeSameInterferences),
             R"#(None)#"  , py::arg("I"))
        .def("Curve",
             (Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopOpeBRepDS_Curve & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopOpeBRepDS_Curve & ) const>(&TopOpeBRepDS_GapTool::Curve),
             R"#(None)#"  , py::arg("I"),  py::arg("C"))
        .def("EdgeSupport",
             (Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopoDS_Shape & ) const>(&TopOpeBRepDS_GapTool::EdgeSupport),
             R"#(None)#"  , py::arg("I"),  py::arg("E"))
        .def("FacesSupport",
             (Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopoDS_Shape & , TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopoDS_Shape & , TopoDS_Shape & ) const>(&TopOpeBRepDS_GapTool::FacesSupport),
             R"#(Return les faces qui ont genere la section origine de I)#"  , py::arg("I"),  py::arg("F1"),  py::arg("F2"))
        .def("ParameterOnEdge",
             (Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & , Standard_Real & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & , Standard_Real & ) const>(&TopOpeBRepDS_GapTool::ParameterOnEdge),
             R"#(None)#"  , py::arg("I"),  py::arg("E"),  py::arg("U"))
        .def("SetPoint",
             (void (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const Standard_Integer ) >(&TopOpeBRepDS_GapTool::SetPoint),
             R"#(None)#"  , py::arg("I"),  py::arg("IndexPoint"))
        .def("SetParameterOnEdge",
             (void (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & , const Standard_Real ) ) static_cast<void (TopOpeBRepDS_GapTool::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & , const Standard_Real ) >(&TopOpeBRepDS_GapTool::SetParameterOnEdge),
             R"#(None)#"  , py::arg("I"),  py::arg("E"),  py::arg("U"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_GapTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_GapTool::*)() const>(&TopOpeBRepDS_GapTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_GapTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_GapTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_GeometryData , shared_ptr<TopOpeBRepDS_GeometryData> >>(m.attr("TopOpeBRepDS_GeometryData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_GeometryData & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Assign",
             (void (TopOpeBRepDS_GeometryData::*)( const TopOpeBRepDS_GeometryData & ) ) static_cast<void (TopOpeBRepDS_GeometryData::*)( const TopOpeBRepDS_GeometryData & ) >(&TopOpeBRepDS_GeometryData::Assign),
             R"#(None)#"  , py::arg("Other"))
        .def("Interferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GeometryData::*)() const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GeometryData::*)() const>(&TopOpeBRepDS_GeometryData::Interferences),
             R"#(None)#" )
        .def("ChangeInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GeometryData::*)() ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_GeometryData::*)() >(&TopOpeBRepDS_GeometryData::ChangeInterferences),
             R"#(None)#" )
        .def("AddInterference",
             (void (TopOpeBRepDS_GeometryData::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_GeometryData::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_GeometryData::AddInterference),
             R"#(None)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference ,opencascade::handle<TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference> , TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference, Standard_Transient>>(m.attr("TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_DataMap<int, NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >, NCollection_DefaultHasher<int> > & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TopOpeBRepDS_DataMapOfIntegerListOfInterference> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference & (TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::*)() const) static_cast<const TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference & (TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::*)() const>(&TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference & (TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::*)() ) static_cast<TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference & (TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::*)() >(&TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::*)() const>(&TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_HDataStructure ,opencascade::handle<TopOpeBRepDS_HDataStructure> , Standard_Transient>>(m.attr("TopOpeBRepDS_HDataStructure"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddAncestors",
             (void (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) >(&TopOpeBRepDS_HDataStructure::AddAncestors),
             R"#(None)#"  , py::arg("S"))
        .def("AddAncestors",
             (void (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepDS_HDataStructure::AddAncestors),
             R"#(Update the data structure with shapes of type T1 containing a subshape of type T2 which is stored in the DS. Used by the previous one.)#"  , py::arg("S"),  py::arg("T1"),  py::arg("T2"))
        .def("ChkIntg",
             (void (TopOpeBRepDS_HDataStructure::*)() ) static_cast<void (TopOpeBRepDS_HDataStructure::*)() >(&TopOpeBRepDS_HDataStructure::ChkIntg),
             R"#(Check the integrity of the DS)#" )
        .def("DS",
             (const TopOpeBRepDS_DataStructure & (TopOpeBRepDS_HDataStructure::*)() const) static_cast<const TopOpeBRepDS_DataStructure & (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::DS),
             R"#(None)#" )
        .def("ChangeDS",
             (TopOpeBRepDS_DataStructure & (TopOpeBRepDS_HDataStructure::*)() ) static_cast<TopOpeBRepDS_DataStructure & (TopOpeBRepDS_HDataStructure::*)() >(&TopOpeBRepDS_HDataStructure::ChangeDS),
             R"#(None)#" )
        .def("NbSurfaces",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::NbSurfaces),
             R"#(None)#" )
        .def("NbCurves",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::NbCurves),
             R"#(None)#" )
        .def("NbPoints",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::NbPoints),
             R"#(None)#" )
        .def("Surface",
             (const TopOpeBRepDS_Surface & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Surface & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_HDataStructure::Surface),
             R"#(Returns the surface of index <I>.)#"  , py::arg("I"))
        .def("SurfaceCurves",
             (TopOpeBRepDS_CurveIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const) static_cast<TopOpeBRepDS_CurveIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_HDataStructure::SurfaceCurves),
             R"#(Returns an iterator on the curves on the surface <I>.)#"  , py::arg("I"))
        .def("Curve",
             (const TopOpeBRepDS_Curve & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Curve & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_HDataStructure::Curve),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("ChangeCurve",
             (TopOpeBRepDS_Curve & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) ) static_cast<TopOpeBRepDS_Curve & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_HDataStructure::ChangeCurve),
             R"#(Returns the Curve of index <I>.)#"  , py::arg("I"))
        .def("CurvePoints",
             (TopOpeBRepDS_PointIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const) static_cast<TopOpeBRepDS_PointIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_HDataStructure::CurvePoints),
             R"#(Returns an iterator on the points on the curve <I>.)#"  , py::arg("I"))
        .def("Point",
             (const TopOpeBRepDS_Point & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Point & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_HDataStructure::Point),
             R"#(Returns the point of index <I>.)#"  , py::arg("I"))
        .def("NbShapes",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::NbShapes),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<const TopoDS_Shape & (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer , const Standard_Boolean ) const>(&TopOpeBRepDS_HDataStructure::Shape),
             R"#(Returns the shape of index <I> in the DS)#"  , py::arg("I"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Shape",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_HDataStructure::Shape),
             R"#(Returns the index of shape <S> in the DS returns 0 if <S> is not in the DS)#"  , py::arg("S"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasGeometry",
             (Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_HDataStructure::HasGeometry),
             R"#(Returns True if <S> has new geometries.)#"  , py::arg("S"))
        .def("HasShape",
             (Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const) static_cast<Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_HDataStructure::HasShape),
             R"#(Returns True if <S> has new geometries (SOLID,FACE,EDGE) or if <S> (SHELL,WIRE) has sub-shape (FACE,EDGE) with new geometries)#"  , py::arg("S"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HasSameDomain",
             (Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const) static_cast<Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & , const Standard_Boolean ) const>(&TopOpeBRepDS_HDataStructure::HasSameDomain),
             R"#(Returns True if <S> share a geometrical domain with some other shapes.)#"  , py::arg("S"),  py::arg("FindKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SameDomain",
             (TopTools_ListIteratorOfListOfShape (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const) static_cast<TopTools_ListIteratorOfListOfShape (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_HDataStructure::SameDomain),
             R"#(Returns an iterator on the SameDomain shapes attached to the shape <S>.)#"  , py::arg("S"))
        .def("SameDomainOrientation",
             (TopOpeBRepDS_Config (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const) static_cast<TopOpeBRepDS_Config (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_HDataStructure::SameDomainOrientation),
             R"#(Returns orientation of shape <S> compared with its reference shape)#"  , py::arg("S"))
        .def("SameDomainReference",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_HDataStructure::SameDomainReference),
             R"#(Returns orientation of shape <S> compared with its reference shape)#"  , py::arg("S"))
        .def("SolidSurfaces",
             (TopOpeBRepDS_SurfaceIterator (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const) static_cast<TopOpeBRepDS_SurfaceIterator (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_HDataStructure::SolidSurfaces),
             R"#(Returns an iterator on the surfaces attached to the solid <S>.)#"  , py::arg("S"))
        .def("SolidSurfaces",
             (TopOpeBRepDS_SurfaceIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const) static_cast<TopOpeBRepDS_SurfaceIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_HDataStructure::SolidSurfaces),
             R"#(Returns an iterator on the surfaces attached to the solid <I>.)#"  , py::arg("I"))
        .def("FaceCurves",
             (TopOpeBRepDS_CurveIterator (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const) static_cast<TopOpeBRepDS_CurveIterator (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_HDataStructure::FaceCurves),
             R"#(Returns an iterator on the curves attached to the face <F>.)#"  , py::arg("F"))
        .def("FaceCurves",
             (TopOpeBRepDS_CurveIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const) static_cast<TopOpeBRepDS_CurveIterator (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) const>(&TopOpeBRepDS_HDataStructure::FaceCurves),
             R"#(Returns an iterator on the curves attached to the face <I>.)#"  , py::arg("I"))
        .def("EdgePoints",
             (TopOpeBRepDS_PointIterator (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const) static_cast<TopOpeBRepDS_PointIterator (TopOpeBRepDS_HDataStructure::*)( const TopoDS_Shape & ) const>(&TopOpeBRepDS_HDataStructure::EdgePoints),
             R"#(Returns an iterator on the points attached to the edge <E>.)#"  , py::arg("E"))
        .def("MakeCurve",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopOpeBRepDS_Curve & , TopOpeBRepDS_Curve & ) ) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopOpeBRepDS_Curve & , TopOpeBRepDS_Curve & ) >(&TopOpeBRepDS_HDataStructure::MakeCurve),
             R"#(None)#"  , py::arg("C1"),  py::arg("C2"))
        .def("RemoveCurve",
             (void (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)( const Standard_Integer ) >(&TopOpeBRepDS_HDataStructure::RemoveCurve),
             R"#(None)#"  , py::arg("iC"))
        .def("NbGeometry",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopOpeBRepDS_Kind ) const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopOpeBRepDS_Kind ) const>(&TopOpeBRepDS_HDataStructure::NbGeometry),
             R"#(None)#"  , py::arg("K"))
        .def("NbTopology",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopOpeBRepDS_Kind ) const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)( const TopOpeBRepDS_Kind ) const>(&TopOpeBRepDS_HDataStructure::NbTopology),
             R"#(None)#"  , py::arg("K"))
        .def("NbTopology",
             (Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::NbTopology),
             R"#(None)#" )
        .def("EdgesSameParameter",
             (Standard_Boolean (TopOpeBRepDS_HDataStructure::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::EdgesSameParameter),
             R"#(returns True if all the edges stored as shapes in the DS are SameParameter, otherwise False.)#" )
        .def("SortOnParameter",
             (void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) const) static_cast<void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) const>(&TopOpeBRepDS_HDataStructure::SortOnParameter),
             R"#(None)#"  , py::arg("L1"),  py::arg("L2"))
        .def("SortOnParameter",
             (void (TopOpeBRepDS_HDataStructure::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) const) static_cast<void (TopOpeBRepDS_HDataStructure::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) const>(&TopOpeBRepDS_HDataStructure::SortOnParameter),
             R"#(None)#"  , py::arg("L"))
        .def("ScanInterfList",
             (Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , const TopOpeBRepDS_Point & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , const TopOpeBRepDS_Point & ) const>(&TopOpeBRepDS_HDataStructure::ScanInterfList),
             R"#(Search, among a list of interferences accessed by the iterator <IT>, a geometry <G> whose 3D point is identical to the 3D point of the TheDSPoint <PDS>. returns True if such an interference has been found, False else. if True, iterator It points (by the Value() method) on the first interference accessing an identical 3D point.)#"  , py::arg("IT"),  py::arg("PDS"))
        .def("GetGeometry",
             (Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , const TopOpeBRepDS_Point & , Standard_Integer & , TopOpeBRepDS_Kind & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_HDataStructure::*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , const TopOpeBRepDS_Point & , Standard_Integer & , TopOpeBRepDS_Kind & ) const>(&TopOpeBRepDS_HDataStructure::GetGeometry),
             R"#(Get the geometry of a DS point <PDS>. Search for it with ScanInterfList (previous method). if found, set <G,K> to the geometry,kind of the interference found. returns the value of ScanInterfList().)#"  , py::arg("IT"),  py::arg("PDS"),  py::arg("G"),  py::arg("K"))
        .def("StoreInterference",
             (void (TopOpeBRepDS_HDataStructure::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TCollection_AsciiString & ) >(&TopOpeBRepDS_HDataStructure::StoreInterference),
             R"#(Add interference <I> to list <LI>.)#"  , py::arg("I"),  py::arg("LI"),  py::arg("str")=static_cast<const TCollection_AsciiString &>(""))
        .def("StoreInterference",
             (void (TopOpeBRepDS_HDataStructure::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & , const TCollection_AsciiString & ) >(&TopOpeBRepDS_HDataStructure::StoreInterference),
             R"#(Add interference <I> to list of interference of shape <S>.)#"  , py::arg("I"),  py::arg("S"),  py::arg("str")=static_cast<const TCollection_AsciiString &>(""))
        .def("StoreInterference",
             (void (TopOpeBRepDS_HDataStructure::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const Standard_Integer , const TCollection_AsciiString & ) >(&TopOpeBRepDS_HDataStructure::StoreInterference),
             R"#(Add interference <I> to list of interference of shape <IS>.)#"  , py::arg("I"),  py::arg("IS"),  py::arg("str")=static_cast<const TCollection_AsciiString &>(""))
        .def("StoreInterferences",
             (void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopoDS_Shape & , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopoDS_Shape & , const TCollection_AsciiString & ) >(&TopOpeBRepDS_HDataStructure::StoreInterferences),
             R"#(None)#"  , py::arg("LI"),  py::arg("S"),  py::arg("str")=static_cast<const TCollection_AsciiString &>(""))
        .def("StoreInterferences",
             (void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , const TCollection_AsciiString & ) >(&TopOpeBRepDS_HDataStructure::StoreInterferences),
             R"#(None)#"  , py::arg("LI"),  py::arg("IS"),  py::arg("str")=static_cast<const TCollection_AsciiString &>(""))
        .def("ClearStoreInterferences",
             (void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopoDS_Shape & , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopoDS_Shape & , const TCollection_AsciiString & ) >(&TopOpeBRepDS_HDataStructure::ClearStoreInterferences),
             R"#(None)#"  , py::arg("LI"),  py::arg("S"),  py::arg("str")=static_cast<const TCollection_AsciiString &>(""))
        .def("ClearStoreInterferences",
             (void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_HDataStructure::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , const TCollection_AsciiString & ) >(&TopOpeBRepDS_HDataStructure::ClearStoreInterferences),
             R"#(None)#"  , py::arg("LI"),  py::arg("IS"),  py::arg("str")=static_cast<const TCollection_AsciiString &>(""))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_HDataStructure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("MinMaxOnParameter",
             []( TopOpeBRepDS_HDataStructure &self ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & L ){ Standard_Real  Min; Standard_Real  Max; self.MinMaxOnParameter(L,Min,Max); return std::make_tuple(Min,Max); },
             R"#(None)#"  , py::arg("L"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_HDataStructure::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_HDataStructure::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Interference ,opencascade::handle<TopOpeBRepDS_Interference> , Standard_Transient>>(m.attr("TopOpeBRepDS_Interference"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_Transition &,const TopOpeBRepDS_Kind,const Standard_Integer,const TopOpeBRepDS_Kind,const Standard_Integer >()  , py::arg("Transition"),  py::arg("SupportType"),  py::arg("Support"),  py::arg("GeometryType"),  py::arg("Geometry") )
        .def(py::init< const opencascade::handle<TopOpeBRepDS_Interference> & >()  , py::arg("I") )
    // custom constructors
    // methods
        .def("Transition",
             (const TopOpeBRepDS_Transition & (TopOpeBRepDS_Interference::*)() const) static_cast<const TopOpeBRepDS_Transition & (TopOpeBRepDS_Interference::*)() const>(&TopOpeBRepDS_Interference::Transition),
             R"#(None)#" )
        .def("ChangeTransition",
             (TopOpeBRepDS_Transition & (TopOpeBRepDS_Interference::*)() ) static_cast<TopOpeBRepDS_Transition & (TopOpeBRepDS_Interference::*)() >(&TopOpeBRepDS_Interference::ChangeTransition),
             R"#(None)#" )
        .def("Transition",
             (void (TopOpeBRepDS_Interference::*)( const TopOpeBRepDS_Transition & ) ) static_cast<void (TopOpeBRepDS_Interference::*)( const TopOpeBRepDS_Transition & ) >(&TopOpeBRepDS_Interference::Transition),
             R"#(None)#"  , py::arg("T"))
        .def("SupportType",
             (TopOpeBRepDS_Kind (TopOpeBRepDS_Interference::*)() const) static_cast<TopOpeBRepDS_Kind (TopOpeBRepDS_Interference::*)() const>(&TopOpeBRepDS_Interference::SupportType),
             R"#(None)#" )
        .def("Support",
             (Standard_Integer (TopOpeBRepDS_Interference::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Interference::*)() const>(&TopOpeBRepDS_Interference::Support),
             R"#(None)#" )
        .def("GeometryType",
             (TopOpeBRepDS_Kind (TopOpeBRepDS_Interference::*)() const) static_cast<TopOpeBRepDS_Kind (TopOpeBRepDS_Interference::*)() const>(&TopOpeBRepDS_Interference::GeometryType),
             R"#(None)#" )
        .def("Geometry",
             (Standard_Integer (TopOpeBRepDS_Interference::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Interference::*)() const>(&TopOpeBRepDS_Interference::Geometry),
             R"#(None)#" )
        .def("SetGeometry",
             (void (TopOpeBRepDS_Interference::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Interference::*)( const Standard_Integer ) >(&TopOpeBRepDS_Interference::SetGeometry),
             R"#(None)#"  , py::arg("GI"))
        .def("SupportType",
             (void (TopOpeBRepDS_Interference::*)( const TopOpeBRepDS_Kind ) ) static_cast<void (TopOpeBRepDS_Interference::*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS_Interference::SupportType),
             R"#(None)#"  , py::arg("ST"))
        .def("Support",
             (void (TopOpeBRepDS_Interference::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Interference::*)( const Standard_Integer ) >(&TopOpeBRepDS_Interference::Support),
             R"#(None)#"  , py::arg("S"))
        .def("GeometryType",
             (void (TopOpeBRepDS_Interference::*)( const TopOpeBRepDS_Kind ) ) static_cast<void (TopOpeBRepDS_Interference::*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS_Interference::GeometryType),
             R"#(None)#"  , py::arg("GT"))
        .def("Geometry",
             (void (TopOpeBRepDS_Interference::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Interference::*)( const Standard_Integer ) >(&TopOpeBRepDS_Interference::Geometry),
             R"#(None)#"  , py::arg("G"))
        .def("HasSameSupport",
             (Standard_Boolean (TopOpeBRepDS_Interference::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Interference::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_Interference::HasSameSupport),
             R"#(None)#"  , py::arg("Other"))
        .def("HasSameGeometry",
             (Standard_Boolean (TopOpeBRepDS_Interference::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Interference::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_Interference::HasSameGeometry),
             R"#(None)#"  , py::arg("Other"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Interference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Interference::*)() const>(&TopOpeBRepDS_Interference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GKGSKS",
             []( TopOpeBRepDS_Interference &self , TopOpeBRepDS_Kind & GK,TopOpeBRepDS_Kind & SK ){ Standard_Integer  G; Standard_Integer  S; self.GKGSKS(GK,G,SK,S); return std::make_tuple(G,S); },
             R"#(return GeometryType + Geometry + SupportType + Support)#"  , py::arg("GK"),  py::arg("SK"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Interference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_Interference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_InterferenceIterator , shared_ptr<TopOpeBRepDS_InterferenceIterator> >>(m.attr("TopOpeBRepDS_InterferenceIterator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & >()  , py::arg("L") )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_InterferenceIterator::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_InterferenceIterator::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_InterferenceIterator::Init),
             R"#(re-initialize interference iteration process on the list of interference <L>. Conditions are not modified.)#"  , py::arg("L"))
        .def("GeometryKind",
             (void (TopOpeBRepDS_InterferenceIterator::*)( const TopOpeBRepDS_Kind ) ) static_cast<void (TopOpeBRepDS_InterferenceIterator::*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS_InterferenceIterator::GeometryKind),
             R"#(define a condition on interference iteration process. Interference must match the Geometry Kind <ST>)#"  , py::arg("GK"))
        .def("Geometry",
             (void (TopOpeBRepDS_InterferenceIterator::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_InterferenceIterator::*)( const Standard_Integer ) >(&TopOpeBRepDS_InterferenceIterator::Geometry),
             R"#(define a condition on interference iteration process. Interference must match the Geometry <G>)#"  , py::arg("G"))
        .def("SupportKind",
             (void (TopOpeBRepDS_InterferenceIterator::*)( const TopOpeBRepDS_Kind ) ) static_cast<void (TopOpeBRepDS_InterferenceIterator::*)( const TopOpeBRepDS_Kind ) >(&TopOpeBRepDS_InterferenceIterator::SupportKind),
             R"#(define a condition on interference iteration process. Interference must match the Support Kind <ST>)#"  , py::arg("ST"))
        .def("Support",
             (void (TopOpeBRepDS_InterferenceIterator::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_InterferenceIterator::*)( const Standard_Integer ) >(&TopOpeBRepDS_InterferenceIterator::Support),
             R"#(define a condition on interference iteration process. Interference must match the Support <S>)#"  , py::arg("S"))
        .def("Match",
             (void (TopOpeBRepDS_InterferenceIterator::*)() ) static_cast<void (TopOpeBRepDS_InterferenceIterator::*)() >(&TopOpeBRepDS_InterferenceIterator::Match),
             R"#(reach for an interference matching the conditions (if defined).)#" )
        .def("MatchInterference",
             (Standard_Boolean (TopOpeBRepDS_InterferenceIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_InterferenceIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_InterferenceIterator::MatchInterference),
             R"#(Returns True if the Interference <I> matches the conditions (if defined). If no conditions defined, returns True.)#"  , py::arg("I"))
        .def("More",
             (Standard_Boolean (TopOpeBRepDS_InterferenceIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_InterferenceIterator::*)() const>(&TopOpeBRepDS_InterferenceIterator::More),
             R"#(Returns True if there is a current Interference in the iteration.)#" )
        .def("Next",
             (void (TopOpeBRepDS_InterferenceIterator::*)() ) static_cast<void (TopOpeBRepDS_InterferenceIterator::*)() >(&TopOpeBRepDS_InterferenceIterator::Next),
             R"#(Move to the next Interference.)#" )
        .def("Value",
             (const opencascade::handle<TopOpeBRepDS_Interference> & (TopOpeBRepDS_InterferenceIterator::*)() const) static_cast<const opencascade::handle<TopOpeBRepDS_Interference> & (TopOpeBRepDS_InterferenceIterator::*)() const>(&TopOpeBRepDS_InterferenceIterator::Value),
             R"#(Returns the current Interference, matching the conditions (if defined).)#" )
        .def("ChangeIterator",
             (TopOpeBRepDS_ListIteratorOfListOfInterference & (TopOpeBRepDS_InterferenceIterator::*)() ) static_cast<TopOpeBRepDS_ListIteratorOfListOfInterference & (TopOpeBRepDS_InterferenceIterator::*)() >(&TopOpeBRepDS_InterferenceIterator::ChangeIterator),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepDS_InterferenceTool , shared_ptr<TopOpeBRepDS_InterferenceTool>>(m,"TopOpeBRepDS_InterferenceTool");

    static_cast<py::class_<TopOpeBRepDS_InterferenceTool , shared_ptr<TopOpeBRepDS_InterferenceTool> >>(m.attr("TopOpeBRepDS_InterferenceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeEdgeInterference_s",
                    (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Kind , const Standard_Integer , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Real ) ) static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Kind , const Standard_Integer , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Real ) >(&TopOpeBRepDS_InterferenceTool::MakeEdgeInterference),
                    R"#(None)#"  , py::arg("T"),  py::arg("SK"),  py::arg("SI"),  py::arg("GK"),  py::arg("GI"),  py::arg("P"))
        .def_static("MakeCurveInterference_s",
                    (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Kind , const Standard_Integer , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Real ) ) static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Kind , const Standard_Integer , const TopOpeBRepDS_Kind , const Standard_Integer , const Standard_Real ) >(&TopOpeBRepDS_InterferenceTool::MakeCurveInterference),
                    R"#(None)#"  , py::arg("T"),  py::arg("SK"),  py::arg("SI"),  py::arg("GK"),  py::arg("GI"),  py::arg("P"))
        .def_static("DuplicateCurvePointInterference_s",
                    (opencascade::handle<TopOpeBRepDS_Interference> (*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_InterferenceTool::DuplicateCurvePointInterference),
                    R"#(duplicate I in a new interference with Complement() transition.)#"  , py::arg("I"))
        .def_static("MakeFaceCurveInterference_s",
                    (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const opencascade::handle<Geom2d_Curve> & ) ) static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const opencascade::handle<Geom2d_Curve> & ) >(&TopOpeBRepDS_InterferenceTool::MakeFaceCurveInterference),
                    R"#(None)#"  , py::arg("Transition"),  py::arg("FaceI"),  py::arg("CurveI"),  py::arg("PC"))
        .def_static("MakeSolidSurfaceInterference_s",
                    (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer ) ) static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer ) >(&TopOpeBRepDS_InterferenceTool::MakeSolidSurfaceInterference),
                    R"#(None)#"  , py::arg("Transition"),  py::arg("SolidI"),  py::arg("SurfaceI"))
        .def_static("MakeEdgeVertexInterference_s",
                    (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const TopOpeBRepDS_Config , const Standard_Real ) ) static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const TopOpeBRepDS_Config , const Standard_Real ) >(&TopOpeBRepDS_InterferenceTool::MakeEdgeVertexInterference),
                    R"#(None)#"  , py::arg("Transition"),  py::arg("EdgeI"),  py::arg("VertexI"),  py::arg("VertexIsBound"),  py::arg("Config"),  py::arg("param"))
        .def_static("MakeFaceEdgeInterference_s",
                    (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const TopOpeBRepDS_Config ) ) static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Boolean , const TopOpeBRepDS_Config ) >(&TopOpeBRepDS_InterferenceTool::MakeFaceEdgeInterference),
                    R"#(None)#"  , py::arg("Transition"),  py::arg("FaceI"),  py::arg("EdgeI"),  py::arg("EdgeIsBound"),  py::arg("Config"))
        .def_static("Parameter_s",
                    (Standard_Real (*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<Standard_Real (*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_InterferenceTool::Parameter),
                    R"#(None)#"  , py::arg("CPI"))
        .def_static("Parameter_s",
                    (void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const Standard_Real ) ) static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , const Standard_Real ) >(&TopOpeBRepDS_InterferenceTool::Parameter),
                    R"#(None)#"  , py::arg("CPI"),  py::arg("Par"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ListOfShapeOn1State , shared_ptr<TopOpeBRepDS_ListOfShapeOn1State> >>(m.attr("TopOpeBRepDS_ListOfShapeOn1State"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ListOnState",
             (const TopTools_ListOfShape & (TopOpeBRepDS_ListOfShapeOn1State::*)() const) static_cast<const TopTools_ListOfShape & (TopOpeBRepDS_ListOfShapeOn1State::*)() const>(&TopOpeBRepDS_ListOfShapeOn1State::ListOnState),
             R"#(None)#" )
        .def("ChangeListOnState",
             (TopTools_ListOfShape & (TopOpeBRepDS_ListOfShapeOn1State::*)() ) static_cast<TopTools_ListOfShape & (TopOpeBRepDS_ListOfShapeOn1State::*)() >(&TopOpeBRepDS_ListOfShapeOn1State::ChangeListOnState),
             R"#(None)#" )
        .def("IsSplit",
             (Standard_Boolean (TopOpeBRepDS_ListOfShapeOn1State::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_ListOfShapeOn1State::*)() const>(&TopOpeBRepDS_ListOfShapeOn1State::IsSplit),
             R"#(None)#" )
        .def("Split",
             (void (TopOpeBRepDS_ListOfShapeOn1State::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_ListOfShapeOn1State::*)( const Standard_Boolean ) >(&TopOpeBRepDS_ListOfShapeOn1State::Split),
             R"#(None)#"  , py::arg("B")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Clear",
             (void (TopOpeBRepDS_ListOfShapeOn1State::*)() ) static_cast<void (TopOpeBRepDS_ListOfShapeOn1State::*)() >(&TopOpeBRepDS_ListOfShapeOn1State::Clear),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Marker ,opencascade::handle<TopOpeBRepDS_Marker> , Standard_Transient>>(m.attr("TopOpeBRepDS_Marker"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reset",
             (void (TopOpeBRepDS_Marker::*)() ) static_cast<void (TopOpeBRepDS_Marker::*)() >(&TopOpeBRepDS_Marker::Reset),
             R"#(None)#" )
        .def("Set",
             (void (TopOpeBRepDS_Marker::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_Marker::*)( const Standard_Integer , const Standard_Boolean ) >(&TopOpeBRepDS_Marker::Set),
             R"#(None)#"  , py::arg("i"),  py::arg("b"))
        .def("Set",
             (void (TopOpeBRepDS_Marker::*)( const Standard_Boolean , const Standard_Integer , const Standard_Address ) ) static_cast<void (TopOpeBRepDS_Marker::*)( const Standard_Boolean , const Standard_Integer , const Standard_Address ) >(&TopOpeBRepDS_Marker::Set),
             R"#(None)#"  , py::arg("b"),  py::arg("n"),  py::arg("a"))
        .def("GetI",
             (Standard_Boolean (TopOpeBRepDS_Marker::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Marker::*)( const Standard_Integer ) const>(&TopOpeBRepDS_Marker::GetI),
             R"#(None)#"  , py::arg("i"))
        .def("Allocate",
             (void (TopOpeBRepDS_Marker::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Marker::*)( const Standard_Integer ) >(&TopOpeBRepDS_Marker::Allocate),
             R"#(None)#"  , py::arg("n"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Marker::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Marker::*)() const>(&TopOpeBRepDS_Marker::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Marker::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_Marker::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Point , shared_ptr<TopOpeBRepDS_Point> >>(m.attr("TopOpeBRepDS_Point"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const Standard_Real >()  , py::arg("P"),  py::arg("T") )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("S") )
    // custom constructors
    // methods
        .def("IsEqual",
             (Standard_Boolean (TopOpeBRepDS_Point::*)( const TopOpeBRepDS_Point & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_Point::*)( const TopOpeBRepDS_Point & ) const>(&TopOpeBRepDS_Point::IsEqual),
             R"#(None)#"  , py::arg("other"))
        .def("Point",
             (const gp_Pnt & (TopOpeBRepDS_Point::*)() const) static_cast<const gp_Pnt & (TopOpeBRepDS_Point::*)() const>(&TopOpeBRepDS_Point::Point),
             R"#(None)#" )
        .def("ChangePoint",
             (gp_Pnt & (TopOpeBRepDS_Point::*)() ) static_cast<gp_Pnt & (TopOpeBRepDS_Point::*)() >(&TopOpeBRepDS_Point::ChangePoint),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (TopOpeBRepDS_Point::*)() const) static_cast<Standard_Real (TopOpeBRepDS_Point::*)() const>(&TopOpeBRepDS_Point::Tolerance),
             R"#(None)#" )
        .def("Tolerance",
             (void (TopOpeBRepDS_Point::*)( const Standard_Real ) ) static_cast<void (TopOpeBRepDS_Point::*)( const Standard_Real ) >(&TopOpeBRepDS_Point::Tolerance),
             R"#(None)#"  , py::arg("Tol"))
        .def("Keep",
             (Standard_Boolean (TopOpeBRepDS_Point::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_Point::*)() const>(&TopOpeBRepDS_Point::Keep),
             R"#(None)#" )
        .def("ChangeKeep",
             (void (TopOpeBRepDS_Point::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_Point::*)( const Standard_Boolean ) >(&TopOpeBRepDS_Point::ChangeKeep),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_PointExplorer , shared_ptr<TopOpeBRepDS_PointExplorer> >>(m.attr("TopOpeBRepDS_PointExplorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_DataStructure &,const Standard_Boolean >()  , py::arg("DS"),  py::arg("FindOnlyKeep")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_PointExplorer::*)( const TopOpeBRepDS_DataStructure & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_PointExplorer::*)( const TopOpeBRepDS_DataStructure & , const Standard_Boolean ) >(&TopOpeBRepDS_PointExplorer::Init),
             R"#(None)#"  , py::arg("DS"),  py::arg("FindOnlyKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("More",
             (Standard_Boolean (TopOpeBRepDS_PointExplorer::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_PointExplorer::*)() const>(&TopOpeBRepDS_PointExplorer::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepDS_PointExplorer::*)() ) static_cast<void (TopOpeBRepDS_PointExplorer::*)() >(&TopOpeBRepDS_PointExplorer::Next),
             R"#(None)#" )
        .def("Point",
             (const TopOpeBRepDS_Point & (TopOpeBRepDS_PointExplorer::*)() const) static_cast<const TopOpeBRepDS_Point & (TopOpeBRepDS_PointExplorer::*)() const>(&TopOpeBRepDS_PointExplorer::Point),
             R"#(None)#" )
        .def("IsPoint",
             (Standard_Boolean (TopOpeBRepDS_PointExplorer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_PointExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_PointExplorer::IsPoint),
             R"#(None)#"  , py::arg("I"))
        .def("IsPointKeep",
             (Standard_Boolean (TopOpeBRepDS_PointExplorer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_PointExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_PointExplorer::IsPointKeep),
             R"#(None)#"  , py::arg("I"))
        .def("Point",
             (const TopOpeBRepDS_Point & (TopOpeBRepDS_PointExplorer::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Point & (TopOpeBRepDS_PointExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_PointExplorer::Point),
             R"#(None)#"  , py::arg("I"))
        .def("NbPoint",
             (Standard_Integer (TopOpeBRepDS_PointExplorer::*)() ) static_cast<Standard_Integer (TopOpeBRepDS_PointExplorer::*)() >(&TopOpeBRepDS_PointExplorer::NbPoint),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (TopOpeBRepDS_PointExplorer::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_PointExplorer::*)() const>(&TopOpeBRepDS_PointExplorer::Index),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Reducer , shared_ptr<TopOpeBRepDS_Reducer> >>(m.attr("TopOpeBRepDS_Reducer"))
    // constructors
        .def(py::init< const opencascade::handle<TopOpeBRepDS_HDataStructure> & >()  , py::arg("HDS") )
    // custom constructors
    // methods
        .def("ProcessFaceInterferences",
             (void (TopOpeBRepDS_Reducer::*)(  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) ) static_cast<void (TopOpeBRepDS_Reducer::*)(  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ) >(&TopOpeBRepDS_Reducer::ProcessFaceInterferences),
             R"#(None)#"  , py::arg("M"))
        .def("ProcessEdgeInterferences",
             (void (TopOpeBRepDS_Reducer::*)() ) static_cast<void (TopOpeBRepDS_Reducer::*)() >(&TopOpeBRepDS_Reducer::ProcessEdgeInterferences),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ShapeData , shared_ptr<TopOpeBRepDS_ShapeData> >>(m.attr("TopOpeBRepDS_ShapeData"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Interferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_ShapeData::*)() const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_ShapeData::*)() const>(&TopOpeBRepDS_ShapeData::Interferences),
             R"#(None)#" )
        .def("ChangeInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_ShapeData::*)() ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_ShapeData::*)() >(&TopOpeBRepDS_ShapeData::ChangeInterferences),
             R"#(None)#" )
        .def("Keep",
             (Standard_Boolean (TopOpeBRepDS_ShapeData::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_ShapeData::*)() const>(&TopOpeBRepDS_ShapeData::Keep),
             R"#(None)#" )
        .def("ChangeKeep",
             (void (TopOpeBRepDS_ShapeData::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_ShapeData::*)( const Standard_Boolean ) >(&TopOpeBRepDS_ShapeData::ChangeKeep),
             R"#(None)#"  , py::arg("B"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ShapeWithState , shared_ptr<TopOpeBRepDS_ShapeWithState> >>(m.attr("TopOpeBRepDS_ShapeWithState"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Part",
             (const TopTools_ListOfShape & (TopOpeBRepDS_ShapeWithState::*)( const TopAbs_State ) const) static_cast<const TopTools_ListOfShape & (TopOpeBRepDS_ShapeWithState::*)( const TopAbs_State ) const>(&TopOpeBRepDS_ShapeWithState::Part),
             R"#(None)#"  , py::arg("aState"))
        .def("AddPart",
             (void (TopOpeBRepDS_ShapeWithState::*)( const TopoDS_Shape & , const TopAbs_State ) ) static_cast<void (TopOpeBRepDS_ShapeWithState::*)( const TopoDS_Shape & , const TopAbs_State ) >(&TopOpeBRepDS_ShapeWithState::AddPart),
             R"#(None)#"  , py::arg("aShape"),  py::arg("aState"))
        .def("AddParts",
             (void (TopOpeBRepDS_ShapeWithState::*)(  const NCollection_List<TopoDS_Shape> & , const TopAbs_State ) ) static_cast<void (TopOpeBRepDS_ShapeWithState::*)(  const NCollection_List<TopoDS_Shape> & , const TopAbs_State ) >(&TopOpeBRepDS_ShapeWithState::AddParts),
             R"#(None)#"  , py::arg("aListOfShape"),  py::arg("aState"))
        .def("SetState",
             (void (TopOpeBRepDS_ShapeWithState::*)( const TopAbs_State ) ) static_cast<void (TopOpeBRepDS_ShapeWithState::*)( const TopAbs_State ) >(&TopOpeBRepDS_ShapeWithState::SetState),
             R"#(None)#"  , py::arg("aState"))
        .def("State",
             (TopAbs_State (TopOpeBRepDS_ShapeWithState::*)() const) static_cast<TopAbs_State (TopOpeBRepDS_ShapeWithState::*)() const>(&TopOpeBRepDS_ShapeWithState::State),
             R"#(None)#" )
        .def("SetIsSplitted",
             (void (TopOpeBRepDS_ShapeWithState::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_ShapeWithState::*)( const Standard_Boolean ) >(&TopOpeBRepDS_ShapeWithState::SetIsSplitted),
             R"#(None)#"  , py::arg("anIsSplitted"))
        .def("IsSplitted",
             (Standard_Boolean (TopOpeBRepDS_ShapeWithState::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_ShapeWithState::*)() const>(&TopOpeBRepDS_ShapeWithState::IsSplitted),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Surface , shared_ptr<TopOpeBRepDS_Surface> >>(m.attr("TopOpeBRepDS_Surface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("P"),  py::arg("T") )
        .def(py::init< const TopOpeBRepDS_Surface & >()  , py::arg("Other") )
    // custom constructors
    // methods
        .def("Assign",
             (void (TopOpeBRepDS_Surface::*)( const TopOpeBRepDS_Surface & ) ) static_cast<void (TopOpeBRepDS_Surface::*)( const TopOpeBRepDS_Surface & ) >(&TopOpeBRepDS_Surface::Assign),
             R"#(None)#"  , py::arg("Other"))
        .def("Surface",
             (const opencascade::handle<Geom_Surface> & (TopOpeBRepDS_Surface::*)() const) static_cast<const opencascade::handle<Geom_Surface> & (TopOpeBRepDS_Surface::*)() const>(&TopOpeBRepDS_Surface::Surface),
             R"#(None)#" )
        .def("Tolerance",
             (Standard_Real (TopOpeBRepDS_Surface::*)() const) static_cast<Standard_Real (TopOpeBRepDS_Surface::*)() const>(&TopOpeBRepDS_Surface::Tolerance),
             R"#(None)#" )
        .def("Tolerance",
             (void (TopOpeBRepDS_Surface::*)( Standard_Real ) ) static_cast<void (TopOpeBRepDS_Surface::*)( Standard_Real ) >(&TopOpeBRepDS_Surface::Tolerance),
             R"#(Update the tolerance)#"  , py::arg("theTol"))
        .def("Keep",
             (Standard_Boolean (TopOpeBRepDS_Surface::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_Surface::*)() const>(&TopOpeBRepDS_Surface::Keep),
             R"#(None)#" )
        .def("ChangeKeep",
             (void (TopOpeBRepDS_Surface::*)( Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_Surface::*)( Standard_Boolean ) >(&TopOpeBRepDS_Surface::ChangeKeep),
             R"#(None)#"  , py::arg("theToKeep"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SurfaceExplorer , shared_ptr<TopOpeBRepDS_SurfaceExplorer> >>(m.attr("TopOpeBRepDS_SurfaceExplorer"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_DataStructure &,const Standard_Boolean >()  , py::arg("DS"),  py::arg("FindOnlyKeep")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("Init",
             (void (TopOpeBRepDS_SurfaceExplorer::*)( const TopOpeBRepDS_DataStructure & , const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_SurfaceExplorer::*)( const TopOpeBRepDS_DataStructure & , const Standard_Boolean ) >(&TopOpeBRepDS_SurfaceExplorer::Init),
             R"#(None)#"  , py::arg("DS"),  py::arg("FindOnlyKeep")=static_cast<const Standard_Boolean>(Standard_True))
        .def("More",
             (Standard_Boolean (TopOpeBRepDS_SurfaceExplorer::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_SurfaceExplorer::*)() const>(&TopOpeBRepDS_SurfaceExplorer::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepDS_SurfaceExplorer::*)() ) static_cast<void (TopOpeBRepDS_SurfaceExplorer::*)() >(&TopOpeBRepDS_SurfaceExplorer::Next),
             R"#(None)#" )
        .def("Surface",
             (const TopOpeBRepDS_Surface & (TopOpeBRepDS_SurfaceExplorer::*)() const) static_cast<const TopOpeBRepDS_Surface & (TopOpeBRepDS_SurfaceExplorer::*)() const>(&TopOpeBRepDS_SurfaceExplorer::Surface),
             R"#(None)#" )
        .def("IsSurface",
             (Standard_Boolean (TopOpeBRepDS_SurfaceExplorer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_SurfaceExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_SurfaceExplorer::IsSurface),
             R"#(None)#"  , py::arg("I"))
        .def("IsSurfaceKeep",
             (Standard_Boolean (TopOpeBRepDS_SurfaceExplorer::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_SurfaceExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_SurfaceExplorer::IsSurfaceKeep),
             R"#(None)#"  , py::arg("I"))
        .def("Surface",
             (const TopOpeBRepDS_Surface & (TopOpeBRepDS_SurfaceExplorer::*)( const Standard_Integer ) const) static_cast<const TopOpeBRepDS_Surface & (TopOpeBRepDS_SurfaceExplorer::*)( const Standard_Integer ) const>(&TopOpeBRepDS_SurfaceExplorer::Surface),
             R"#(None)#"  , py::arg("I"))
        .def("NbSurface",
             (Standard_Integer (TopOpeBRepDS_SurfaceExplorer::*)() ) static_cast<Standard_Integer (TopOpeBRepDS_SurfaceExplorer::*)() >(&TopOpeBRepDS_SurfaceExplorer::NbSurface),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (TopOpeBRepDS_SurfaceExplorer::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_SurfaceExplorer::*)() const>(&TopOpeBRepDS_SurfaceExplorer::Index),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_TKI , shared_ptr<TopOpeBRepDS_TKI> >>(m.attr("TopOpeBRepDS_TKI"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (TopOpeBRepDS_TKI::*)() ) static_cast<void (TopOpeBRepDS_TKI::*)() >(&TopOpeBRepDS_TKI::Clear),
             R"#(None)#" )
        .def("FillOnGeometry",
             (void (TopOpeBRepDS_TKI::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_TKI::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_TKI::FillOnGeometry),
             R"#(None)#"  , py::arg("L"))
        .def("FillOnSupport",
             (void (TopOpeBRepDS_TKI::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) ) static_cast<void (TopOpeBRepDS_TKI::*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ) >(&TopOpeBRepDS_TKI::FillOnSupport),
             R"#(None)#"  , py::arg("L"))
        .def("IsBound",
             (Standard_Boolean (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const>(&TopOpeBRepDS_TKI::IsBound),
             R"#(None)#"  , py::arg("K"),  py::arg("G"))
        .def("Interferences",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const>(&TopOpeBRepDS_TKI::Interferences),
             R"#(None)#"  , py::arg("K"),  py::arg("G"))
        .def("ChangeInterferences",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) >(&TopOpeBRepDS_TKI::ChangeInterferences),
             R"#(None)#"  , py::arg("K"),  py::arg("G"))
        .def("HasInterferences",
             (Standard_Boolean (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const) static_cast<Standard_Boolean (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) const>(&TopOpeBRepDS_TKI::HasInterferences),
             R"#(None)#"  , py::arg("K"),  py::arg("G"))
        .def("Add",
             (void (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer ) >(&TopOpeBRepDS_TKI::Add),
             R"#(None)#"  , py::arg("K"),  py::arg("G"))
        .def("Add",
             (void (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer , const opencascade::handle<TopOpeBRepDS_Interference> & ) ) static_cast<void (TopOpeBRepDS_TKI::*)( const TopOpeBRepDS_Kind , const Standard_Integer , const opencascade::handle<TopOpeBRepDS_Interference> & ) >(&TopOpeBRepDS_TKI::Add),
             R"#(None)#"  , py::arg("K"),  py::arg("G"),  py::arg("HI"))
        .def("DumpTKIIterator",
             (void (TopOpeBRepDS_TKI::*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) ) static_cast<void (TopOpeBRepDS_TKI::*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) >(&TopOpeBRepDS_TKI::DumpTKIIterator),
             R"#(None)#"  , py::arg("s1")=static_cast<const TCollection_AsciiString &>(""),  py::arg("s2")=static_cast<const TCollection_AsciiString &>(""))
        .def("Init",
             (void (TopOpeBRepDS_TKI::*)() ) static_cast<void (TopOpeBRepDS_TKI::*)() >(&TopOpeBRepDS_TKI::Init),
             R"#(None)#" )
        .def("More",
             (Standard_Boolean (TopOpeBRepDS_TKI::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_TKI::*)() const>(&TopOpeBRepDS_TKI::More),
             R"#(None)#" )
        .def("Next",
             (void (TopOpeBRepDS_TKI::*)() ) static_cast<void (TopOpeBRepDS_TKI::*)() >(&TopOpeBRepDS_TKI::Next),
             R"#(None)#" )
        .def("Value",
             (const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( TopOpeBRepDS_Kind & , Standard_Integer & ) const) static_cast<const TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( TopOpeBRepDS_Kind & , Standard_Integer & ) const>(&TopOpeBRepDS_TKI::Value),
             R"#(None)#"  , py::arg("K"),  py::arg("G"))
        .def("ChangeValue",
             (TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( TopOpeBRepDS_Kind & , Standard_Integer & ) ) static_cast<TopOpeBRepDS_ListOfInterference & (TopOpeBRepDS_TKI::*)( TopOpeBRepDS_Kind & , Standard_Integer & ) >(&TopOpeBRepDS_TKI::ChangeValue),
             R"#(None)#"  , py::arg("K"),  py::arg("G"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<TopOpeBRepDS_TOOL , shared_ptr<TopOpeBRepDS_TOOL>>(m,"TopOpeBRepDS_TOOL");

    static_cast<py::class_<TopOpeBRepDS_TOOL , shared_ptr<TopOpeBRepDS_TOOL> >>(m.attr("TopOpeBRepDS_TOOL"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("EShareG_s",
                    (Standard_Integer (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Edge & , NCollection_List<TopoDS_Shape> & ) ) static_cast<Standard_Integer (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Edge & , NCollection_List<TopoDS_Shape> & ) >(&TopOpeBRepDS_TOOL::EShareG),
                    R"#(None)#"  , py::arg("HDS"),  py::arg("E"),  py::arg("lEsd"))
        .def_static("ShareG_s",
                    (Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Integer ) >(&TopOpeBRepDS_TOOL::ShareG),
                    R"#(None)#"  , py::arg("HDS"),  py::arg("is1"),  py::arg("is2"))
        .def_static("GetEsd_s",
                    (Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Shape & , const Standard_Integer , Standard_Integer & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const TopoDS_Shape & , const Standard_Integer , Standard_Integer & ) >(&TopOpeBRepDS_TOOL::GetEsd),
                    R"#(None)#"  , py::arg("HDS"),  py::arg("S"),  py::arg("ie"),  py::arg("iesd"))
        .def_static("ShareSplitON_s",
                    (Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & , const Standard_Integer , const Standard_Integer , TopoDS_Shape & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & , const Standard_Integer , const Standard_Integer , TopoDS_Shape & ) >(&TopOpeBRepDS_TOOL::ShareSplitON),
                    R"#(None)#"  , py::arg("HDS"),  py::arg("MspON"),  py::arg("i1"),  py::arg("i2"),  py::arg("spON"))
        .def_static("GetConfig_s",
                    (Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & , const Standard_Integer , const Standard_Integer , Standard_Integer & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & , const Standard_Integer , const Standard_Integer , Standard_Integer & ) >(&TopOpeBRepDS_TOOL::GetConfig),
                    R"#(None)#"  , py::arg("HDS"),  py::arg("MEspON"),  py::arg("ie"),  py::arg("iesd"),  py::arg("conf"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Transition , shared_ptr<TopOpeBRepDS_Transition> >>(m.attr("TopOpeBRepDS_Transition"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopAbs_State,const TopAbs_State,const TopAbs_ShapeEnum,const TopAbs_ShapeEnum >()  , py::arg("StateBefore"),  py::arg("StateAfter"),  py::arg("ShapeBefore")=static_cast<const TopAbs_ShapeEnum>(TopAbs_FACE),  py::arg("ShapeAfter")=static_cast<const TopAbs_ShapeEnum>(TopAbs_FACE) )
        .def(py::init< const TopAbs_Orientation >()  , py::arg("O") )
    // custom constructors
    // methods
        .def("Set",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_State , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_State , const TopAbs_ShapeEnum , const TopAbs_ShapeEnum ) >(&TopOpeBRepDS_Transition::Set),
             R"#(None)#"  , py::arg("StateBefore"),  py::arg("StateAfter"),  py::arg("ShapeBefore")=static_cast<const TopAbs_ShapeEnum>(TopAbs_FACE),  py::arg("ShapeAfter")=static_cast<const TopAbs_ShapeEnum>(TopAbs_FACE))
        .def("StateBefore",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_State ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_State ) >(&TopOpeBRepDS_Transition::StateBefore),
             R"#(None)#"  , py::arg("S"))
        .def("StateAfter",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_State ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_State ) >(&TopOpeBRepDS_Transition::StateAfter),
             R"#(None)#"  , py::arg("S"))
        .def("ShapeBefore",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_ShapeEnum ) >(&TopOpeBRepDS_Transition::ShapeBefore),
             R"#(None)#"  , py::arg("SE"))
        .def("ShapeAfter",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_ShapeEnum ) >(&TopOpeBRepDS_Transition::ShapeAfter),
             R"#(None)#"  , py::arg("SE"))
        .def("Before",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_ShapeEnum ) >(&TopOpeBRepDS_Transition::Before),
             R"#(None)#"  , py::arg("S"),  py::arg("ShapeBefore")=static_cast<const TopAbs_ShapeEnum>(TopAbs_FACE))
        .def("After",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_ShapeEnum ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_ShapeEnum ) >(&TopOpeBRepDS_Transition::After),
             R"#(None)#"  , py::arg("S"),  py::arg("ShapeAfter")=static_cast<const TopAbs_ShapeEnum>(TopAbs_FACE))
        .def("Index",
             (void (TopOpeBRepDS_Transition::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const Standard_Integer ) >(&TopOpeBRepDS_Transition::Index),
             R"#(None)#"  , py::arg("I"))
        .def("IndexBefore",
             (void (TopOpeBRepDS_Transition::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const Standard_Integer ) >(&TopOpeBRepDS_Transition::IndexBefore),
             R"#(None)#"  , py::arg("I"))
        .def("IndexAfter",
             (void (TopOpeBRepDS_Transition::*)( const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const Standard_Integer ) >(&TopOpeBRepDS_Transition::IndexAfter),
             R"#(None)#"  , py::arg("I"))
        .def("Before",
             (TopAbs_State (TopOpeBRepDS_Transition::*)() const) static_cast<TopAbs_State (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::Before),
             R"#(None)#" )
        .def("ONBefore",
             (TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const) static_cast<TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::ONBefore),
             R"#(None)#" )
        .def("After",
             (TopAbs_State (TopOpeBRepDS_Transition::*)() const) static_cast<TopAbs_State (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::After),
             R"#(None)#" )
        .def("ONAfter",
             (TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const) static_cast<TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::ONAfter),
             R"#(None)#" )
        .def("ShapeBefore",
             (TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const) static_cast<TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::ShapeBefore),
             R"#(None)#" )
        .def("ShapeAfter",
             (TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const) static_cast<TopAbs_ShapeEnum (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::ShapeAfter),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (TopOpeBRepDS_Transition::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::Index),
             R"#(None)#" )
        .def("IndexBefore",
             (Standard_Integer (TopOpeBRepDS_Transition::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::IndexBefore),
             R"#(None)#" )
        .def("IndexAfter",
             (Standard_Integer (TopOpeBRepDS_Transition::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::IndexAfter),
             R"#(None)#" )
        .def("Set",
             (void (TopOpeBRepDS_Transition::*)( const TopAbs_Orientation ) ) static_cast<void (TopOpeBRepDS_Transition::*)( const TopAbs_Orientation ) >(&TopOpeBRepDS_Transition::Set),
             R"#(set the transition corresponding to orientation <O>)#"  , py::arg("O"))
        .def("Orientation",
             (TopAbs_Orientation (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_ShapeEnum ) const) static_cast<TopAbs_Orientation (TopOpeBRepDS_Transition::*)( const TopAbs_State , const TopAbs_ShapeEnum ) const>(&TopOpeBRepDS_Transition::Orientation),
             R"#(returns the orientation corresponding to state <S>)#"  , py::arg("S"),  py::arg("T")=static_cast<const TopAbs_ShapeEnum>(TopAbs_FACE))
        .def("Complement",
             (TopOpeBRepDS_Transition (TopOpeBRepDS_Transition::*)() const) static_cast<TopOpeBRepDS_Transition (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::Complement),
             R"#(None)#" )
        .def("IsUnknown",
             (Standard_Boolean (TopOpeBRepDS_Transition::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_Transition::*)() const>(&TopOpeBRepDS_Transition::IsUnknown),
             R"#(returns True if both states are UNKNOWN)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_CurveData , shared_ptr<TopOpeBRepDS_CurveData> , TopOpeBRepDS_GeometryData>>(m.attr("TopOpeBRepDS_CurveData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_Curve & >()  , py::arg("C") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_CurveIterator , shared_ptr<TopOpeBRepDS_CurveIterator> , TopOpeBRepDS_InterferenceIterator>>(m.attr("TopOpeBRepDS_CurveIterator"))
    // constructors
        .def(py::init<  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & >()  , py::arg("L") )
    // custom constructors
    // methods
        .def("MatchInterference",
             (Standard_Boolean (TopOpeBRepDS_CurveIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_CurveIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_CurveIterator::MatchInterference),
             R"#(Returns True if the Interference <I> has a GeometryType() TopOpeBRepDS_CURVE returns False else.)#"  , py::arg("I"))
        .def("Current",
             (Standard_Integer (TopOpeBRepDS_CurveIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_CurveIterator::*)() const>(&TopOpeBRepDS_CurveIterator::Current),
             R"#(Index of the curve in the data structure.)#" )
        .def("Orientation",
             (TopAbs_Orientation (TopOpeBRepDS_CurveIterator::*)( const TopAbs_State ) const) static_cast<TopAbs_Orientation (TopOpeBRepDS_CurveIterator::*)( const TopAbs_State ) const>(&TopOpeBRepDS_CurveIterator::Orientation),
             R"#(None)#"  , py::arg("S"))
        .def("PCurve",
             (const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_CurveIterator::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_CurveIterator::*)() const>(&TopOpeBRepDS_CurveIterator::PCurve),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_CurvePointInterference ,opencascade::handle<TopOpeBRepDS_CurvePointInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_CurvePointInterference"))
    // constructors
        .def(py::init< const TopOpeBRepDS_Transition &,const TopOpeBRepDS_Kind,const Standard_Integer,const TopOpeBRepDS_Kind,const Standard_Integer,const Standard_Real >()  , py::arg("T"),  py::arg("ST"),  py::arg("S"),  py::arg("GT"),  py::arg("G"),  py::arg("P") )
    // custom constructors
    // methods
        .def("Parameter",
             (Standard_Real (TopOpeBRepDS_CurvePointInterference::*)() const) static_cast<Standard_Real (TopOpeBRepDS_CurvePointInterference::*)() const>(&TopOpeBRepDS_CurvePointInterference::Parameter),
             R"#(None)#" )
        .def("Parameter",
             (void (TopOpeBRepDS_CurvePointInterference::*)( const Standard_Real ) ) static_cast<void (TopOpeBRepDS_CurvePointInterference::*)( const Standard_Real ) >(&TopOpeBRepDS_CurvePointInterference::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_CurvePointInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_CurvePointInterference::*)() const>(&TopOpeBRepDS_CurvePointInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_CurvePointInterference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_CurvePointInterference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_PointData , shared_ptr<TopOpeBRepDS_PointData> , TopOpeBRepDS_GeometryData>>(m.attr("TopOpeBRepDS_PointData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_Point & >()  , py::arg("P") )
        .def(py::init< const TopOpeBRepDS_Point &,const Standard_Integer,const Standard_Integer >()  , py::arg("P"),  py::arg("I1"),  py::arg("I2") )
    // custom constructors
    // methods
        .def("SetShapes",
             (void (TopOpeBRepDS_PointData::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (TopOpeBRepDS_PointData::*)( const Standard_Integer , const Standard_Integer ) >(&TopOpeBRepDS_PointData::SetShapes),
             R"#(None)#"  , py::arg("I1"),  py::arg("I2"))
    // methods using call by reference i.s.o. return
        .def("GetShapes",
             []( TopOpeBRepDS_PointData &self   ){ Standard_Integer  I1; Standard_Integer  I2; self.GetShapes(I1,I2); return std::make_tuple(I1,I2); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_PointIterator , shared_ptr<TopOpeBRepDS_PointIterator> , TopOpeBRepDS_InterferenceIterator>>(m.attr("TopOpeBRepDS_PointIterator"))
    // constructors
        .def(py::init<  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & >()  , py::arg("L") )
    // custom constructors
    // methods
        .def("MatchInterference",
             (Standard_Boolean (TopOpeBRepDS_PointIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_PointIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_PointIterator::MatchInterference),
             R"#(Returns True if the Interference <I> has a GeometryType() TopOpeBRepDS_POINT or TopOpeBRepDS_VERTEX returns False else.)#"  , py::arg("I"))
        .def("Current",
             (Standard_Integer (TopOpeBRepDS_PointIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_PointIterator::*)() const>(&TopOpeBRepDS_PointIterator::Current),
             R"#(Index of the point in the data structure.)#" )
        .def("Orientation",
             (TopAbs_Orientation (TopOpeBRepDS_PointIterator::*)( const TopAbs_State ) const) static_cast<TopAbs_Orientation (TopOpeBRepDS_PointIterator::*)( const TopAbs_State ) const>(&TopOpeBRepDS_PointIterator::Orientation),
             R"#(None)#"  , py::arg("S"))
        .def("Parameter",
             (Standard_Real (TopOpeBRepDS_PointIterator::*)() const) static_cast<Standard_Real (TopOpeBRepDS_PointIterator::*)() const>(&TopOpeBRepDS_PointIterator::Parameter),
             R"#(None)#" )
        .def("IsVertex",
             (Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const>(&TopOpeBRepDS_PointIterator::IsVertex),
             R"#(None)#" )
        .def("IsPoint",
             (Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const>(&TopOpeBRepDS_PointIterator::IsPoint),
             R"#(None)#" )
        .def("DiffOriented",
             (Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const>(&TopOpeBRepDS_PointIterator::DiffOriented),
             R"#(None)#" )
        .def("SameOriented",
             (Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_PointIterator::*)() const>(&TopOpeBRepDS_PointIterator::SameOriented),
             R"#(None)#" )
        .def("Support",
             (Standard_Integer (TopOpeBRepDS_PointIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_PointIterator::*)() const>(&TopOpeBRepDS_PointIterator::Support),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ShapeShapeInterference ,opencascade::handle<TopOpeBRepDS_ShapeShapeInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_ShapeShapeInterference"))
    // constructors
        .def(py::init< const TopOpeBRepDS_Transition &,const TopOpeBRepDS_Kind,const Standard_Integer,const TopOpeBRepDS_Kind,const Standard_Integer,const Standard_Boolean,const TopOpeBRepDS_Config >()  , py::arg("T"),  py::arg("ST"),  py::arg("S"),  py::arg("GT"),  py::arg("G"),  py::arg("GBound"),  py::arg("C") )
    // custom constructors
    // methods
        .def("Config",
             (TopOpeBRepDS_Config (TopOpeBRepDS_ShapeShapeInterference::*)() const) static_cast<TopOpeBRepDS_Config (TopOpeBRepDS_ShapeShapeInterference::*)() const>(&TopOpeBRepDS_ShapeShapeInterference::Config),
             R"#(None)#" )
        .def("GBound",
             (Standard_Boolean (TopOpeBRepDS_ShapeShapeInterference::*)() const) static_cast<Standard_Boolean (TopOpeBRepDS_ShapeShapeInterference::*)() const>(&TopOpeBRepDS_ShapeShapeInterference::GBound),
             R"#(None)#" )
        .def("SetGBound",
             (void (TopOpeBRepDS_ShapeShapeInterference::*)( const Standard_Boolean ) ) static_cast<void (TopOpeBRepDS_ShapeShapeInterference::*)( const Standard_Boolean ) >(&TopOpeBRepDS_ShapeShapeInterference::SetGBound),
             R"#(None)#"  , py::arg("b"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_ShapeShapeInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_ShapeShapeInterference::*)() const>(&TopOpeBRepDS_ShapeShapeInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_ShapeShapeInterference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_ShapeShapeInterference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SolidSurfaceInterference ,opencascade::handle<TopOpeBRepDS_SolidSurfaceInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_SolidSurfaceInterference"))
    // constructors
        .def(py::init< const TopOpeBRepDS_Transition &,const TopOpeBRepDS_Kind,const Standard_Integer,const TopOpeBRepDS_Kind,const Standard_Integer >()  , py::arg("Transition"),  py::arg("SupportType"),  py::arg("Support"),  py::arg("GeometryType"),  py::arg("Geometry") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_SolidSurfaceInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_SolidSurfaceInterference::*)() const>(&TopOpeBRepDS_SolidSurfaceInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_SolidSurfaceInterference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_SolidSurfaceInterference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SurfaceCurveInterference ,opencascade::handle<TopOpeBRepDS_SurfaceCurveInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_SurfaceCurveInterference"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_Transition &,const TopOpeBRepDS_Kind,const Standard_Integer,const TopOpeBRepDS_Kind,const Standard_Integer,const opencascade::handle<Geom2d_Curve> & >()  , py::arg("Transition"),  py::arg("SupportType"),  py::arg("Support"),  py::arg("GeometryType"),  py::arg("Geometry"),  py::arg("PC") )
        .def(py::init< const opencascade::handle<TopOpeBRepDS_Interference> & >()  , py::arg("I") )
    // custom constructors
    // methods
        .def("PCurve",
             (const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_SurfaceCurveInterference::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (TopOpeBRepDS_SurfaceCurveInterference::*)() const>(&TopOpeBRepDS_SurfaceCurveInterference::PCurve),
             R"#(None)#" )
        .def("PCurve",
             (void (TopOpeBRepDS_SurfaceCurveInterference::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<void (TopOpeBRepDS_SurfaceCurveInterference::*)( const opencascade::handle<Geom2d_Curve> & ) >(&TopOpeBRepDS_SurfaceCurveInterference::PCurve),
             R"#(None)#"  , py::arg("PC"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_SurfaceCurveInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_SurfaceCurveInterference::*)() const>(&TopOpeBRepDS_SurfaceCurveInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_SurfaceCurveInterference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_SurfaceCurveInterference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SurfaceData , shared_ptr<TopOpeBRepDS_SurfaceData> , TopOpeBRepDS_GeometryData>>(m.attr("TopOpeBRepDS_SurfaceData"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopOpeBRepDS_Surface & >()  , py::arg("S") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SurfaceIterator , shared_ptr<TopOpeBRepDS_SurfaceIterator> , TopOpeBRepDS_InterferenceIterator>>(m.attr("TopOpeBRepDS_SurfaceIterator"))
    // constructors
        .def(py::init<  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & >()  , py::arg("L") )
    // custom constructors
    // methods
        .def("Current",
             (Standard_Integer (TopOpeBRepDS_SurfaceIterator::*)() const) static_cast<Standard_Integer (TopOpeBRepDS_SurfaceIterator::*)() const>(&TopOpeBRepDS_SurfaceIterator::Current),
             R"#(Index of the surface in the data structure.)#" )
        .def("Orientation",
             (TopAbs_Orientation (TopOpeBRepDS_SurfaceIterator::*)( const TopAbs_State ) const) static_cast<TopAbs_Orientation (TopOpeBRepDS_SurfaceIterator::*)( const TopAbs_State ) const>(&TopOpeBRepDS_SurfaceIterator::Orientation),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_EdgeVertexInterference ,opencascade::handle<TopOpeBRepDS_EdgeVertexInterference> , TopOpeBRepDS_ShapeShapeInterference>>(m.attr("TopOpeBRepDS_EdgeVertexInterference"))
    // constructors
        .def(py::init< const TopOpeBRepDS_Transition &,const TopOpeBRepDS_Kind,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const TopOpeBRepDS_Config,const Standard_Real >()  , py::arg("T"),  py::arg("ST"),  py::arg("S"),  py::arg("G"),  py::arg("GIsBound"),  py::arg("C"),  py::arg("P") )
        .def(py::init< const TopOpeBRepDS_Transition &,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const TopOpeBRepDS_Config,const Standard_Real >()  , py::arg("T"),  py::arg("S"),  py::arg("G"),  py::arg("GIsBound"),  py::arg("C"),  py::arg("P") )
    // custom constructors
    // methods
        .def("Parameter",
             (Standard_Real (TopOpeBRepDS_EdgeVertexInterference::*)() const) static_cast<Standard_Real (TopOpeBRepDS_EdgeVertexInterference::*)() const>(&TopOpeBRepDS_EdgeVertexInterference::Parameter),
             R"#(None)#" )
        .def("Parameter",
             (void (TopOpeBRepDS_EdgeVertexInterference::*)( const Standard_Real ) ) static_cast<void (TopOpeBRepDS_EdgeVertexInterference::*)( const Standard_Real ) >(&TopOpeBRepDS_EdgeVertexInterference::Parameter),
             R"#(None)#"  , py::arg("P"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_EdgeVertexInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_EdgeVertexInterference::*)() const>(&TopOpeBRepDS_EdgeVertexInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_EdgeVertexInterference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_EdgeVertexInterference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_FaceEdgeInterference ,opencascade::handle<TopOpeBRepDS_FaceEdgeInterference> , TopOpeBRepDS_ShapeShapeInterference>>(m.attr("TopOpeBRepDS_FaceEdgeInterference"))
    // constructors
        .def(py::init< const TopOpeBRepDS_Transition &,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const TopOpeBRepDS_Config >()  , py::arg("T"),  py::arg("S"),  py::arg("G"),  py::arg("GIsBound"),  py::arg("C") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_FaceEdgeInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_FaceEdgeInterference::*)() const>(&TopOpeBRepDS_FaceEdgeInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_FaceEdgeInterference::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&TopOpeBRepDS_FaceEdgeInterference::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\TopOpeBRepDS_FIR.hxx
// ./opencascade\TopOpeBRepDS_SurfaceIterator.hxx
// ./opencascade\TopOpeBRepDS_ListOfInterference.hxx
// ./opencascade\TopOpeBRepDS.hxx
// ./opencascade\TopOpeBRepDS_Curve.hxx
// ./opencascade\TopOpeBRepDS_FaceEdgeInterference.hxx
// ./opencascade\TopOpeBRepDS_EdgeInterferenceTool.hxx
// ./opencascade\TopOpeBRepDS_Edge3dInterferenceTool.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference.hxx
// ./opencascade\TopOpeBRepDS_SurfaceExplorer.hxx
// ./opencascade\TopOpeBRepDS_Reducer.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfMapOfSurface.hxx
// ./opencascade\TopOpeBRepDS_GapTool.hxx
// ./opencascade\TopOpeBRepDS_Dumper.hxx
// ./opencascade\TopOpeBRepDS_MapOfIntegerShapeData.hxx
// ./opencascade\TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
// ./opencascade\TopOpeBRepDS_GapFiller.hxx
// ./opencascade\TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
// ./opencascade\TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.hxx
// ./opencascade\TopOpeBRepDS_InterferenceIterator.hxx
// ./opencascade\TopOpeBRepDS_GeometryData.hxx
// ./opencascade\TopOpeBRepDS_DataMapOfShapeState.hxx
// ./opencascade\TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape.hxx
// ./opencascade\TopOpeBRepDS_MapOfCurve.hxx
// ./opencascade\TopOpeBRepDS_TKI.hxx
// ./opencascade\TopOpeBRepDS_PointIterator.hxx
// ./opencascade\TopOpeBRepDS_DataMapOfCheckStatus.hxx
// ./opencascade\TopOpeBRepDS_Surface.hxx
// ./opencascade\TopOpeBRepDS_CurveExplorer.hxx
// ./opencascade\TopOpeBRepDS_define.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape.hxx
// ./opencascade\TopOpeBRepDS_ProcessInterferencesTool.hxx
    m.def("MakeCPVInterference",
          (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopOpeBRepDS_Kind ))  static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopOpeBRepDS_Kind )>(&MakeCPVInterference),
          R"#(None)#"  , py::arg("T"),  py::arg("S"),  py::arg("G"),  py::arg("P"),  py::arg("GK"));
    m.def("MakeEPVInterference",
          (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopOpeBRepDS_Kind , const Standard_Boolean ))  static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopOpeBRepDS_Kind , const Standard_Boolean )>(&MakeEPVInterference),
          R"#(None)#"  , py::arg("T"),  py::arg("S"),  py::arg("G"),  py::arg("P"),  py::arg("GK"),  py::arg("B"));
    m.def("MakeEPVInterference",
          (opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopOpeBRepDS_Kind , const TopOpeBRepDS_Kind , const Standard_Boolean ))  static_cast<opencascade::handle<TopOpeBRepDS_Interference> (*)( const TopOpeBRepDS_Transition & , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopOpeBRepDS_Kind , const TopOpeBRepDS_Kind , const Standard_Boolean )>(&MakeEPVInterference),
          R"#(None)#"  , py::arg("T"),  py::arg("S"),  py::arg("G"),  py::arg("P"),  py::arg("GK"),  py::arg("SK"),  py::arg("B"));
    m.def("FUN_hasStateShape",
          (Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopAbs_State , const TopAbs_ShapeEnum ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopAbs_State , const TopAbs_ShapeEnum )>(&FUN_hasStateShape),
          R"#(None)#"  , py::arg("T"),  py::arg("state"),  py::arg("shape"));
    m.def("FUN_selectTRASHAinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopAbs_ShapeEnum , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopAbs_ShapeEnum , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectTRASHAinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("sha"),  py::arg("L2"));
    m.def("FUN_selectITRASHAinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectITRASHAinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("Index"),  py::arg("L2"));
    m.def("FUN_selectTRAUNKinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectTRAUNKinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("L2"));
    m.def("FUN_selectTRAORIinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopAbs_Orientation , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopAbs_Orientation , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectTRAORIinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("O"),  py::arg("L2"));
    m.def("FUN_selectGKinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectGKinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("GK"),  py::arg("L2"));
    m.def("FUN_selectSKinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectSKinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("SK"),  py::arg("L2"));
    m.def("FUN_selectGIinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectGIinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("GI"),  py::arg("L2"));
    m.def("FUN_selectSIinterference",
          (Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const Standard_Integer , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectSIinterference),
          R"#(None)#"  , py::arg("L1"),  py::arg("SI"),  py::arg("L2"));
    m.def("FUN_interfhassupport",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const opencascade::handle<TopOpeBRepDS_Interference> & , const TopoDS_Shape & )>(&FUN_interfhassupport),
          R"#(None)#"  , py::arg("DS"),  py::arg("I"),  py::arg("S"));
    m.def("FUN_transitionEQUAL",
          (Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & )>(&FUN_transitionEQUAL),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("FUN_transitionSTATEEQUAL",
          (Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & )>(&FUN_transitionSTATEEQUAL),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("FUN_transitionSHAPEEQUAL",
          (Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & )>(&FUN_transitionSHAPEEQUAL),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("FUN_transitionINDEXEQUAL",
          (Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & )>(&FUN_transitionINDEXEQUAL),
          R"#(None)#"  , py::arg(""),  py::arg(""));
    m.def("FUN_reducedoublons",
          (void (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopOpeBRepDS_DataStructure & , const Standard_Integer ))  static_cast<void (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , const TopOpeBRepDS_DataStructure & , const Standard_Integer )>(&FUN_reducedoublons),
          R"#(None)#"  , py::arg("LI"),  py::arg("BDS"),  py::arg("SIX"));
    m.def("FUN_unkeepUNKNOWN",
          (void (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , TopOpeBRepDS_DataStructure & , const Standard_Integer ))  static_cast<void (*)( NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , TopOpeBRepDS_DataStructure & , const Standard_Integer )>(&FUN_unkeepUNKNOWN),
          R"#(None)#"  , py::arg("LI"),  py::arg("BDS"),  py::arg("SIX"));
    m.def("FUN_select2dI",
          (Standard_Integer (*)( const Standard_Integer , TopOpeBRepDS_DataStructure & , const TopAbs_ShapeEnum , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( const Standard_Integer , TopOpeBRepDS_DataStructure & , const TopAbs_ShapeEnum , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_select2dI),
          R"#(None)#"  , py::arg("SIX"),  py::arg("BDS"),  py::arg("TRASHAk"),  py::arg("lI"),  py::arg("l2dI"));
    m.def("FUN_selectpure2dI",
          (Standard_Integer (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectpure2dI),
          R"#(None)#"  , py::arg("lF"),  py::arg("lFE"),  py::arg("l2dFE"));
    m.def("FUN_select1dI",
          (Standard_Integer (*)( const Standard_Integer , TopOpeBRepDS_DataStructure & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( const Standard_Integer , TopOpeBRepDS_DataStructure & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_select1dI),
          R"#(None)#"  , py::arg("SIX"),  py::arg("BDS"),  py::arg("LI"),  py::arg("l1dI"));
    m.def("FUN_select3dinterference",
          (void (*)( const Standard_Integer , TopOpeBRepDS_DataStructure & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<void (*)( const Standard_Integer , TopOpeBRepDS_DataStructure & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_select3dinterference),
          R"#(None)#"  , py::arg("SIX"),  py::arg("BDS"),  py::arg("lF"),  py::arg("l3dF"),  py::arg("lFE"),  py::arg("lFEresi"),  py::arg("l3dFE"),  py::arg("l3dFEresi"),  py::arg("l2dFE"));
// ./opencascade\TopOpeBRepDS_InterferenceTool.hxx
// ./opencascade\TopOpeBRepDS_FaceInterferenceTool.hxx
// ./opencascade\TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx
// ./opencascade\TopOpeBRepDS_Kind.hxx
// ./opencascade\TopOpeBRepDS_SolidSurfaceInterference.hxx
// ./opencascade\TopOpeBRepDS_ListOfShapeOn1State.hxx
// ./opencascade\TopOpeBRepDS_PointData.hxx
// ./opencascade\TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
// ./opencascade\TopOpeBRepDS_ListIteratorOfListOfInterference.hxx
// ./opencascade\TopOpeBRepDS_DRAW.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.hxx
// ./opencascade\TopOpeBRepDS_MapOfSurface.hxx
// ./opencascade\TopOpeBRepDS_Interference.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeListOfShapeOn1State.hxx
// ./opencascade\TopOpeBRepDS_SurfaceData.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfMapOfPoint.hxx
// ./opencascade\TopOpeBRepDS_Check.hxx
// ./opencascade\TopOpeBRepDS_ShapeShapeInterference.hxx
// ./opencascade\TopOpeBRepDS_DataMapOfInterferenceShape.hxx
// ./opencascade\TopOpeBRepDS_SurfaceCurveInterference.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState.hxx
// ./opencascade\TopOpeBRepDS_Filter.hxx
// ./opencascade\TopOpeBRepDS_Marker.hxx
// ./opencascade\TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference.hxx
// ./opencascade\TopOpeBRepDS_EIR.hxx
// ./opencascade\TopOpeBRepDS_Point.hxx
// ./opencascade\TopOpeBRepDS_Explorer.hxx
// ./opencascade\TopOpeBRepDS_Association.hxx
// ./opencascade\TopOpeBRepDS_CurvePointInterference.hxx
// ./opencascade\TopOpeBRepDS_CheckStatus.hxx
// ./opencascade\TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx
// ./opencascade\TopOpeBRepDS_Config.hxx
// ./opencascade\TopOpeBRepDS_CurveData.hxx
// ./opencascade\TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx
// ./opencascade\TopOpeBRepDS_ShapeSurface.hxx
// ./opencascade\TopOpeBRepDS_connex.hxx
    m.def("FDSCNX_EdgeConnexityShapeIndex",
          (const TopTools_ListOfShape & (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer ))  static_cast<const TopTools_ListOfShape & (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer )>(&FDSCNX_EdgeConnexityShapeIndex),
          R"#(None)#"  , py::arg("E"),  py::arg("HDS"),  py::arg("SI"));
    m.def("FDSCNX_EdgeConnexitySameShape",
          (const TopTools_ListOfShape & (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<const TopTools_ListOfShape & (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FDSCNX_EdgeConnexitySameShape),
          R"#(None)#"  , py::arg("E"),  py::arg("HDS"));
    m.def("FDSCNX_Prepare",
          (void (*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FDSCNX_Prepare),
          R"#(None)#"  , py::arg("S1"),  py::arg("S2"),  py::arg("HDS"));
    m.def("FDSCNX_HasConnexFace",
          (Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FDSCNX_HasConnexFace),
          R"#(None)#"  , py::arg("S"),  py::arg("HDS"));
    m.def("FDSCNX_FaceEdgeConnexFaces",
          (void (*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)( const TopoDS_Shape & , const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , NCollection_List<TopoDS_Shape> & )>(&FDSCNX_FaceEdgeConnexFaces),
          R"#(None)#"  , py::arg("F"),  py::arg("E"),  py::arg("HDS"),  py::arg("LF"));
    m.def("FDSCNX_Dump",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FDSCNX_Dump),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FDSCNX_Dump",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer )>(&FDSCNX_Dump),
          R"#(None)#"  , py::arg("HDS"),  py::arg("I"));
    m.def("FDSCNX_DumpIndex",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer )>(&FDSCNX_DumpIndex),
          R"#(None)#"  , py::arg("HDS"),  py::arg("I"));
// ./opencascade\TopOpeBRepDS_BuildTool.hxx
// ./opencascade\TopOpeBRepDS_DataStructure.hxx
// ./opencascade\TopOpeBRepDS_ShapeWithState.hxx
// ./opencascade\TopOpeBRepDS_MapOfPoint.hxx
// ./opencascade\TopOpeBRepDS_PointExplorer.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData.hxx
// ./opencascade\TopOpeBRepDS_PDataStructure.hxx
// ./opencascade\TopOpeBRepDS_CurveIterator.hxx
// ./opencascade\TopOpeBRepDS_samdom.hxx
    m.def("FDSSDM_prepare",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FDSSDM_prepare),
          R"#(None)#"  , py::arg(""));
    m.def("FDSSDM_makes1s2",
          (void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & )>(&FDSSDM_makes1s2),
          R"#(None)#"  , py::arg("S"),  py::arg("L1"),  py::arg("L2"));
    m.def("FDSSDM_s1s2",
          (void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & )>(&FDSSDM_s1s2),
          R"#(None)#"  , py::arg("S"),  py::arg("LS1"),  py::arg("LS2"));
    m.def("FDSSDM_sordor",
          (void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & )>(&FDSSDM_sordor),
          R"#(None)#"  , py::arg("S"),  py::arg("LSO"),  py::arg("LDO"));
    m.def("FDSSDM_contains",
          (Standard_Boolean (*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & ,  const NCollection_List<TopoDS_Shape> & )>(&FDSSDM_contains),
          R"#(None)#"  , py::arg("S"),  py::arg("L"));
    m.def("FDSSDM_copylist",
          (void (*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Integer , const Standard_Integer , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & , const Standard_Integer , const Standard_Integer , NCollection_List<TopoDS_Shape> & )>(&FDSSDM_copylist),
          R"#(None)#"  , py::arg("Lin"),  py::arg("I1"),  py::arg("I2"),  py::arg("Lou"));
    m.def("FDSSDM_copylist",
          (void (*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & )>(&FDSSDM_copylist),
          R"#(None)#"  , py::arg("Lin"),  py::arg("Lou"));
// ./opencascade\TopOpeBRepDS_EXPORT.hxx
    m.def("FUN_ds_redu2d1d",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const opencascade::handle<TopOpeBRepDS_Interference> & ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const opencascade::handle<TopOpeBRepDS_Interference> & ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , TopOpeBRepDS_Transition & )>(&FUN_ds_redu2d1d),
          R"#(None)#"  , py::arg("BDS"),  py::arg("ISE"),  py::arg("I2d"),  py::arg("l1d"),  py::arg("newT2d"));
    m.def("FUN_ds_GetTr",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const Standard_Integer ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , TopAbs_State & , Standard_Integer & , Standard_Integer & , TopAbs_State & , Standard_Integer & , Standard_Integer & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const Standard_Integer ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , TopAbs_State & , Standard_Integer & , Standard_Integer & , TopAbs_State & , Standard_Integer & , Standard_Integer & )>(&FUN_ds_GetTr),
          R"#(None)#"  , py::arg("BDS"),  py::arg("ISE"),  py::arg("G"),  py::arg("LIG"),  py::arg("stb"),  py::arg("isb"),  py::arg("bdim"),  py::arg("sta"),  py::arg("isa"),  py::arg("adim"));
    m.def("FDS_SetT",
          (void (*)( TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & ))  static_cast<void (*)( TopOpeBRepDS_Transition & , const TopOpeBRepDS_Transition & )>(&FDS_SetT),
          R"#(None)#"  , py::arg("T"),  py::arg("T0"));
    m.def("FDS_hasUNK",
          (Standard_Boolean (*)( const TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_Transition & )>(&FDS_hasUNK),
          R"#(None)#"  , py::arg("T"));
    m.def("FDS_copy",
          (void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FDS_copy),
          R"#(None)#"  , py::arg("LI"),  py::arg("LII"));
    m.def("FDS_copy",
          (void (*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & )>(&FDS_copy),
          R"#(None)#"  , py::arg("LI"),  py::arg("LII"));
    m.def("FDS_assign",
          (void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<void (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FDS_assign),
          R"#(None)#"  , py::arg("LI"),  py::arg("LII"));
    m.def("FDS_assign",
          (void (*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)(  const NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & )>(&FDS_assign),
          R"#(None)#"  , py::arg("LI"),  py::arg("LII"));
    m.def("FUN_ds_samRk",
          (void (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & ))  static_cast<void (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , NCollection_List<TopoDS_Shape> & , NCollection_List<TopoDS_Shape> & )>(&FUN_ds_samRk),
          R"#(None)#"  , py::arg("BDS"),  py::arg("Rk"),  py::arg("LI"),  py::arg("LIsrk"));
    m.def("FDS_data",
          (void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopOpeBRepDS_Kind & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopOpeBRepDS_Kind & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & )>(&FDS_data),
          R"#(None)#"  , py::arg("I"),  py::arg("GT1"),  py::arg("G1"),  py::arg("ST1"),  py::arg("S1"));
    m.def("FDS_data",
          (Standard_Boolean (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , opencascade::handle<TopOpeBRepDS_Interference> & , TopOpeBRepDS_Kind & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & ))  static_cast<Standard_Boolean (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >::Iterator & , opencascade::handle<TopOpeBRepDS_Interference> & , TopOpeBRepDS_Kind & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & )>(&FDS_data),
          R"#(None)#"  , py::arg("it"),  py::arg("I"),  py::arg("GT1"),  py::arg("G1"),  py::arg("ST1"),  py::arg("S1"));
    m.def("FDS_Tdata",
          (void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopAbs_ShapeEnum & , Standard_Integer & , TopAbs_ShapeEnum & , Standard_Integer & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopAbs_ShapeEnum & , Standard_Integer & , TopAbs_ShapeEnum & , Standard_Integer & )>(&FDS_Tdata),
          R"#(None)#"  , py::arg("I"),  py::arg("SB"),  py::arg("IB"),  py::arg("SA"),  py::arg("IA"));
    m.def("FDS_Idata",
          (void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopAbs_ShapeEnum & , Standard_Integer & , TopAbs_ShapeEnum & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , TopAbs_ShapeEnum & , Standard_Integer & , TopAbs_ShapeEnum & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & , TopOpeBRepDS_Kind & , Standard_Integer & )>(&FDS_Idata),
          R"#(None)#"  , py::arg("I"),  py::arg("SB"),  py::arg("IB"),  py::arg("SA"),  py::arg("IA"),  py::arg("GT1"),  py::arg("G1"),  py::arg("ST1"),  py::arg("S1"));
    m.def("FUN_ds_getVsdm",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , Standard_Integer & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , Standard_Integer & )>(&FUN_ds_getVsdm),
          R"#(None)#"  , py::arg("BDS"),  py::arg("iV"),  py::arg("iVsdm"));
    m.def("FUN_ds_sdm",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , const TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , const TopoDS_Shape & )>(&FUN_ds_sdm),
          R"#(None)#"  , py::arg("BDS"),  py::arg("s1"),  py::arg("s2"));
    m.def("FDS_aresamdom",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Shape & )>(&FDS_aresamdom),
          R"#(None)#"  , py::arg("BDS"),  py::arg("ES"),  py::arg("F1"),  py::arg("F2"));
    m.def("FDS_aresamdom",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const Standard_Integer , const Standard_Integer ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const Standard_Integer , const Standard_Integer )>(&FDS_aresamdom),
          R"#(None)#"  , py::arg("BDS"),  py::arg("SI"),  py::arg("isb1"),  py::arg("isb2"));
    m.def("FDS_EdgeIsConnexToSameDomainFaces",
          (Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FDS_EdgeIsConnexToSameDomainFaces),
          R"#(None)#"  , py::arg("E"),  py::arg("HDS"));
    m.def("FDS_SIisGIofIofSBAofTofI",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const opencascade::handle<TopOpeBRepDS_Interference> & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const opencascade::handle<TopOpeBRepDS_Interference> & )>(&FDS_SIisGIofIofSBAofTofI),
          R"#(None)#"  , py::arg("BDS"),  py::arg("SI"),  py::arg("I"));
    m.def("FDS_Parameter",
          (Standard_Real (*)( const opencascade::handle<TopOpeBRepDS_Interference> & ))  static_cast<Standard_Real (*)( const opencascade::handle<TopOpeBRepDS_Interference> & )>(&FDS_Parameter),
          R"#(None)#"  , py::arg("I"));
    m.def("FDS_Parameter",
          (Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_Interference> & , Standard_Real & )>(&FDS_Parameter),
          R"#(None)#"  , py::arg("I"),  py::arg("par"));
    m.def("FDS_HasSameDomain3d",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> * ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> * )>(&FDS_HasSameDomain3d),
          R"#(None)#"  , py::arg("BDS"),  py::arg("E"),  py::arg("PLSD")=static_cast<NCollection_List<TopoDS_Shape> *>(NULL));
    m.def("FDS_Config3d",
          (Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRepDS_Config & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopoDS_Shape & , TopOpeBRepDS_Config & )>(&FDS_Config3d),
          R"#(None)#"  , py::arg("E1"),  py::arg("E2"),  py::arg("c"));
    m.def("FDS_HasSameDomain2d",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> * ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Shape & , NCollection_List<TopoDS_Shape> * )>(&FDS_HasSameDomain2d),
          R"#(None)#"  , py::arg("BDS"),  py::arg("E"),  py::arg("PLSD")=static_cast<NCollection_List<TopoDS_Shape> *>(NULL));
    m.def("FDS_getupperlower",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Real , Standard_Real & , Standard_Real & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Real , Standard_Real & , Standard_Real & )>(&FDS_getupperlower),
          R"#(None)#"  , py::arg("HDS"),  py::arg("edgeIndex"),  py::arg("paredge"),  py::arg("p1"),  py::arg("p2"));
    m.def("FUN_ds_getoov",
          (Standard_Boolean (*)( const TopoDS_Shape & , const TopOpeBRepDS_DataStructure & , TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const TopOpeBRepDS_DataStructure & , TopoDS_Shape & )>(&FUN_ds_getoov),
          R"#(None)#"  , py::arg("v"),  py::arg("BDS"),  py::arg("oov"));
    m.def("FUN_ds_getoov",
          (Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , TopoDS_Shape & ))  static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const opencascade::handle<TopOpeBRepDS_HDataStructure> & , TopoDS_Shape & )>(&FUN_ds_getoov),
          R"#(None)#"  , py::arg("v"),  py::arg("HDS"),  py::arg("oov"));
    m.def("FUN_selectTRAINTinterference",
          (Standard_Boolean (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Boolean (*)(  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_selectTRAINTinterference),
          R"#(None)#"  , py::arg("li"),  py::arg("liINTERNAL"));
    m.def("FUN_ds_completeforSE1",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE1),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforSE2",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE2),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforSE3",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE3),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforSE4",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE4),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforSE5",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE5),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforSE6",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE6),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforE7",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforE7),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforSE8",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE8),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_PURGEforE9",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_PURGEforE9),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_completeforSE9",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_completeforSE9),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_complete1dForSESDM",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_complete1dForSESDM),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_redusamsha",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_redusamsha),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_shareG",
          (Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const TopoDS_Edge & , Standard_Boolean & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const TopoDS_Edge & , Standard_Boolean & )>(&FUN_ds_shareG),
          R"#(None)#"  , py::arg("HDS"),  py::arg("iF1"),  py::arg("iF2"),  py::arg("iE2"),  py::arg("Esp"),  py::arg("shareG"));
    m.def("FUN_ds_mkTonFsdm",
          (Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopoDS_Edge & , const Standard_Boolean , TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Real , const TopoDS_Edge & , const Standard_Boolean , TopOpeBRepDS_Transition & )>(&FUN_ds_mkTonFsdm),
          R"#(None)#"  , py::arg("HDS"),  py::arg("iF1"),  py::arg("iF2"),  py::arg("iE2"),  py::arg("iEG"),  py::arg("paronEG"),  py::arg("Esp"),  py::arg("pardef"),  py::arg("T"));
    m.def("FUN_ds_oriEinF",
          (Standard_Integer (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const TopoDS_Shape & , TopAbs_Orientation & ))  static_cast<Standard_Integer (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const TopoDS_Shape & , TopAbs_Orientation & )>(&FUN_ds_oriEinF),
          R"#(None)#"  , py::arg("BDS"),  py::arg("E"),  py::arg("F"),  py::arg("O"));
    m.def("FUN_ds_FillSDMFaces",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_FillSDMFaces),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_addSEsdm1d",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_addSEsdm1d),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_hasI2d",
          (Standard_Integer (*)( const Standard_Integer ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<Standard_Integer (*)( const Standard_Integer ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FUN_ds_hasI2d),
          R"#(None)#"  , py::arg("EIX"),  py::arg("LI"),  py::arg("LI2d"));
    m.def("FUN_ds_PointToVertex",
          (void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & ))  static_cast<void (*)( const opencascade::handle<TopOpeBRepDS_HDataStructure> & )>(&FUN_ds_PointToVertex),
          R"#(None)#"  , py::arg("HDS"));
    m.def("FUN_ds_hasFEI",
          (Standard_Boolean (*)( const TopOpeBRepDS_PDataStructure & , const TopoDS_Shape & , const Standard_Integer , const Standard_Integer ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_PDataStructure & , const TopoDS_Shape & , const Standard_Integer , const Standard_Integer )>(&FUN_ds_hasFEI),
          R"#(None)#"  , py::arg("pDS2d"),  py::arg("F"),  py::arg("GI"),  py::arg("ITRA"));
    m.def("FUN_ds_ONesd",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const TopoDS_Shape & , Standard_Integer & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const TopoDS_Shape & , Standard_Integer & )>(&FUN_ds_ONesd),
          R"#(None)#"  , py::arg("BDS"),  py::arg("IE"),  py::arg("EspON"),  py::arg("IEsd"));
    m.def("FDS_stateEwithF2d",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const Standard_Real , const TopOpeBRepDS_Kind , const Standard_Integer , const TopoDS_Face & , TopOpeBRepDS_Transition & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const Standard_Real , const TopOpeBRepDS_Kind , const Standard_Integer , const TopoDS_Face & , TopOpeBRepDS_Transition & )>(&FDS_stateEwithF2d),
          R"#(None)#"  , py::arg("BDS"),  py::arg("E"),  py::arg("pE"),  py::arg("KDS"),  py::arg("GDS"),  py::arg("F1"),  py::arg("TrmemeS"));
    m.def("FDS_parbefaft",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const Standard_Real , const Standard_Real & , const Standard_Real & , const Standard_Boolean & , Standard_Real & , Standard_Real & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const Standard_Real , const Standard_Real & , const Standard_Real & , const Standard_Boolean & , Standard_Real & , Standard_Real & )>(&FDS_parbefaft),
          R"#(None)#"  , py::arg("BDS"),  py::arg("E"),  py::arg("pE"),  py::arg("pbef"),  py::arg("paft"),  py::arg("isonboundper"),  py::arg("p1"),  py::arg("p2"));
    m.def("FDS_LOIinfsup",
          (Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const Standard_Real , const TopOpeBRepDS_Kind , const Standard_Integer ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , Standard_Real & , Standard_Real & , Standard_Boolean & ))  static_cast<Standard_Boolean (*)( const TopOpeBRepDS_DataStructure & , const TopoDS_Edge & , const Standard_Real , const TopOpeBRepDS_Kind , const Standard_Integer ,  const NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , Standard_Real & , Standard_Real & , Standard_Boolean & )>(&FDS_LOIinfsup),
          R"#(None)#"  , py::arg("BDS"),  py::arg("E"),  py::arg("pE"),  py::arg("KDS"),  py::arg("GDS"),  py::arg("LOI"),  py::arg("pbef"),  py::arg("paft"),  py::arg("isonboundper"));
    m.def("FUN_ds_FEIGb1TO0",
          (void (*)( opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & ))  static_cast<void (*)( opencascade::handle<TopOpeBRepDS_HDataStructure> & ,  const NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher> & )>(&FUN_ds_FEIGb1TO0),
          R"#(None)#"  , py::arg("HDS"),  py::arg("MEspON"));
// ./opencascade\TopOpeBRepDS_MapOfShapeData.hxx
// ./opencascade\TopOpeBRepDS_EdgeVertexInterference.hxx
// ./opencascade\TopOpeBRepDS_Transition.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfMapOfCurve.hxx
// ./opencascade\TopOpeBRepDS_HDataStructure.hxx
// ./opencascade\TopOpeBRepDS_DataMapIteratorOfShapeSurface.hxx
// ./opencascade\TopOpeBRepDS_ShapeData.hxx
// ./opencascade\TopOpeBRepDS_TOOL.hxx
// ./opencascade\TopOpeBRepDS_repvg.hxx
    m.def("FDS_repvg",
          (void (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<void (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FDS_repvg),
          R"#(None)#"  , py::arg("BDS"),  py::arg("EIX"),  py::arg("GT"),  py::arg("LI"),  py::arg("reducedLI"));
    m.def("FDS_repvg2",
          (void (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & ))  static_cast<void (*)( const TopOpeBRepDS_DataStructure & , const Standard_Integer , const TopOpeBRepDS_Kind , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & , NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> > & )>(&FDS_repvg2),
          R"#(None)#"  , py::arg("BDS"),  py::arg("EIX"),  py::arg("GT"),  py::arg("LI"),  py::arg("reducedLI"));

// Additional functions

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >(m,"TopOpeBRepDS_ListOfInterference");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_ShapeData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfIntegerShapeData");
    register_template_NCollection_DataMap<opencascade::handle<TopOpeBRepDS_Interference>, TopOpeBRepDS_ListOfInterference, TColStd_MapTransientHasher>(m,"TopOpeBRepDS_DataMapOfInterferenceListOfInterference");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_ListOfInterference, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_DataMapOfIntegerListOfInterference");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State");
    register_template_NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DataMapOfShapeState");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_CurveData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfCurve");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_CheckStatus, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_DataMapOfCheckStatus");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_Point, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_IndexedDataMapOfVertexPoint");
    register_template_NCollection_DoubleMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DoubleMapOfIntegerShape");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_SurfaceData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfSurface");
    register_template_NCollection_DataMap<opencascade::handle<TopOpeBRepDS_Interference>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"TopOpeBRepDS_DataMapOfInterferenceShape");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_IndexedDataMapOfShapeWithState");
    register_template_NCollection_Array1<TopOpeBRepDS_DataMapOfIntegerListOfInterference>(m,"TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_PointData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfPoint");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeData, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_MapOfShapeData");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
