
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
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
#include <Geom2d_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopoDS_Shape.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <Geom_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TCollection_AsciiString.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <Geom2d_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Curve.hxx>

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
// ./opencascade/TopOpeBRepDS_DataMapOfShapeState.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfShapeState.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_ShapeSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfCheckStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfCheckStatus.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_ListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_ListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfPoint.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfSurface.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfShapeData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfCurve.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfIntegerShapeData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_MapOfIntegerShapeData.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Association ,opencascade::handle<TopOpeBRepDS_Association> , Standard_Transient>>(m.attr("TopOpeBRepDS_Association"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Association::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Association::*)() const>(&TopOpeBRepDS_Association::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Association::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_BuildTool , shared_ptr<TopOpeBRepDS_BuildTool> >>(m.attr("TopOpeBRepDS_BuildTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Check ,opencascade::handle<TopOpeBRepDS_Check> , Standard_Transient>>(m.attr("TopOpeBRepDS_Check"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Check::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Check::*)() const>(&TopOpeBRepDS_Check::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Check::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Curve , shared_ptr<TopOpeBRepDS_Curve> >>(m.attr("TopOpeBRepDS_Curve"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_CurveExplorer , shared_ptr<TopOpeBRepDS_CurveExplorer> >>(m.attr("TopOpeBRepDS_CurveExplorer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_DataStructure , shared_ptr<TopOpeBRepDS_DataStructure> >>(m.attr("TopOpeBRepDS_DataStructure"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Dumper , shared_ptr<TopOpeBRepDS_Dumper> >>(m.attr("TopOpeBRepDS_Dumper"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_EIR , shared_ptr<TopOpeBRepDS_EIR> >>(m.attr("TopOpeBRepDS_EIR"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Edge3dInterferenceTool , shared_ptr<TopOpeBRepDS_Edge3dInterferenceTool> >>(m.attr("TopOpeBRepDS_Edge3dInterferenceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_EdgeInterferenceTool , shared_ptr<TopOpeBRepDS_EdgeInterferenceTool> >>(m.attr("TopOpeBRepDS_EdgeInterferenceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Explorer , shared_ptr<TopOpeBRepDS_Explorer> >>(m.attr("TopOpeBRepDS_Explorer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_FIR , shared_ptr<TopOpeBRepDS_FIR> >>(m.attr("TopOpeBRepDS_FIR"))
    // constructors
    // custom constructors
    // methods
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
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Filter , shared_ptr<TopOpeBRepDS_Filter> >>(m.attr("TopOpeBRepDS_Filter"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_GapFiller , shared_ptr<TopOpeBRepDS_GapFiller> >>(m.attr("TopOpeBRepDS_GapFiller"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_GapTool ,opencascade::handle<TopOpeBRepDS_GapTool> , Standard_Transient>>(m.attr("TopOpeBRepDS_GapTool"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_GapTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_GapTool::*)() const>(&TopOpeBRepDS_GapTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_GapTool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_GeometryData , shared_ptr<TopOpeBRepDS_GeometryData> >>(m.attr("TopOpeBRepDS_GeometryData"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_HDataStructure::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_HDataStructure::*)() const>(&TopOpeBRepDS_HDataStructure::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_HDataStructure::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Interference ,opencascade::handle<TopOpeBRepDS_Interference> , Standard_Transient>>(m.attr("TopOpeBRepDS_Interference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Interference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Interference::*)() const>(&TopOpeBRepDS_Interference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Interference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_InterferenceIterator , shared_ptr<TopOpeBRepDS_InterferenceIterator> >>(m.attr("TopOpeBRepDS_InterferenceIterator"))
    // constructors
    // custom constructors
    // methods
        .def("MatchInterference",
             (Standard_Boolean (TopOpeBRepDS_InterferenceIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_InterferenceIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_InterferenceIterator::MatchInterference),
             R"#(Returns True if the Interference <I> matches the conditions (if defined). If no conditions defined, returns True.)#"  , py::arg("I"))
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ListOfShapeOn1State , shared_ptr<TopOpeBRepDS_ListOfShapeOn1State> >>(m.attr("TopOpeBRepDS_ListOfShapeOn1State"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Marker ,opencascade::handle<TopOpeBRepDS_Marker> , Standard_Transient>>(m.attr("TopOpeBRepDS_Marker"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Marker::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_Marker::*)() const>(&TopOpeBRepDS_Marker::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_Marker::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Point , shared_ptr<TopOpeBRepDS_Point> >>(m.attr("TopOpeBRepDS_Point"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_PointExplorer , shared_ptr<TopOpeBRepDS_PointExplorer> >>(m.attr("TopOpeBRepDS_PointExplorer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Reducer , shared_ptr<TopOpeBRepDS_Reducer> >>(m.attr("TopOpeBRepDS_Reducer"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ShapeData , shared_ptr<TopOpeBRepDS_ShapeData> >>(m.attr("TopOpeBRepDS_ShapeData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ShapeWithState , shared_ptr<TopOpeBRepDS_ShapeWithState> >>(m.attr("TopOpeBRepDS_ShapeWithState"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Surface , shared_ptr<TopOpeBRepDS_Surface> >>(m.attr("TopOpeBRepDS_Surface"))
    // constructors
    // custom constructors
    // methods
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_TKI , shared_ptr<TopOpeBRepDS_TKI> >>(m.attr("TopOpeBRepDS_TKI"))
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
    register_default_constructor<TopOpeBRepDS_TOOL , shared_ptr<TopOpeBRepDS_TOOL>>(m,"TopOpeBRepDS_TOOL");

    static_cast<py::class_<TopOpeBRepDS_TOOL , shared_ptr<TopOpeBRepDS_TOOL> >>(m.attr("TopOpeBRepDS_TOOL"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_Transition , shared_ptr<TopOpeBRepDS_Transition> >>(m.attr("TopOpeBRepDS_Transition"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_CurveData , shared_ptr<TopOpeBRepDS_CurveData> , TopOpeBRepDS_GeometryData>>(m.attr("TopOpeBRepDS_CurveData"))
    // constructors
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
    // custom constructors
    // methods
        .def("MatchInterference",
             (Standard_Boolean (TopOpeBRepDS_CurveIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_CurveIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_CurveIterator::MatchInterference),
             R"#(Returns True if the Interference <I> has a GeometryType() TopOpeBRepDS_CURVE returns False else.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_CurvePointInterference ,opencascade::handle<TopOpeBRepDS_CurvePointInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_CurvePointInterference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_CurvePointInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_CurvePointInterference::*)() const>(&TopOpeBRepDS_CurvePointInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_CurvePointInterference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_PointData , shared_ptr<TopOpeBRepDS_PointData> , TopOpeBRepDS_GeometryData>>(m.attr("TopOpeBRepDS_PointData"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_PointIterator , shared_ptr<TopOpeBRepDS_PointIterator> , TopOpeBRepDS_InterferenceIterator>>(m.attr("TopOpeBRepDS_PointIterator"))
    // constructors
    // custom constructors
    // methods
        .def("MatchInterference",
             (Standard_Boolean (TopOpeBRepDS_PointIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const) static_cast<Standard_Boolean (TopOpeBRepDS_PointIterator::*)( const opencascade::handle<TopOpeBRepDS_Interference> & ) const>(&TopOpeBRepDS_PointIterator::MatchInterference),
             R"#(Returns True if the Interference <I> has a GeometryType() TopOpeBRepDS_POINT or TopOpeBRepDS_VERTEX returns False else.)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_ShapeShapeInterference ,opencascade::handle<TopOpeBRepDS_ShapeShapeInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_ShapeShapeInterference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_ShapeShapeInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_ShapeShapeInterference::*)() const>(&TopOpeBRepDS_ShapeShapeInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_ShapeShapeInterference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SolidSurfaceInterference ,opencascade::handle<TopOpeBRepDS_SolidSurfaceInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_SolidSurfaceInterference"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SurfaceCurveInterference ,opencascade::handle<TopOpeBRepDS_SurfaceCurveInterference> , TopOpeBRepDS_Interference>>(m.attr("TopOpeBRepDS_SurfaceCurveInterference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_SurfaceCurveInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_SurfaceCurveInterference::*)() const>(&TopOpeBRepDS_SurfaceCurveInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_SurfaceCurveInterference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_SurfaceData , shared_ptr<TopOpeBRepDS_SurfaceData> , TopOpeBRepDS_GeometryData>>(m.attr("TopOpeBRepDS_SurfaceData"))
    // constructors
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_EdgeVertexInterference ,opencascade::handle<TopOpeBRepDS_EdgeVertexInterference> , TopOpeBRepDS_ShapeShapeInterference>>(m.attr("TopOpeBRepDS_EdgeVertexInterference"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (TopOpeBRepDS_EdgeVertexInterference::*)() const) static_cast<const opencascade::handle<Standard_Type> & (TopOpeBRepDS_EdgeVertexInterference::*)() const>(&TopOpeBRepDS_EdgeVertexInterference::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&TopOpeBRepDS_EdgeVertexInterference::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopOpeBRepDS_FaceEdgeInterference ,opencascade::handle<TopOpeBRepDS_FaceEdgeInterference> , TopOpeBRepDS_ShapeShapeInterference>>(m.attr("TopOpeBRepDS_FaceEdgeInterference"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/TopOpeBRepDS_repvg.hxx
// ./opencascade/TopOpeBRepDS_EXPORT.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfShapeState.hxx
// ./opencascade/TopOpeBRepDS_CurvePointInterference.hxx
// ./opencascade/TopOpeBRepDS_ShapeData.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State.hxx
// ./opencascade/TopOpeBRepDS_connex.hxx
// ./opencascade/TopOpeBRepDS_Reducer.hxx
// ./opencascade/TopOpeBRepDS_Marker.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfSurface.hxx
// ./opencascade/TopOpeBRepDS_TKI.hxx
// ./opencascade/TopOpeBRepDS_DoubleMapIteratorOfDoubleMapOfIntegerShape.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfCurve.hxx
// ./opencascade/TopOpeBRepDS_ShapeWithState.hxx
// ./opencascade/TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus.hxx
// ./opencascade/TopOpeBRepDS_CurveExplorer.hxx
// ./opencascade/TopOpeBRepDS_CheckStatus.hxx
// ./opencascade/TopOpeBRepDS_samdom.hxx
// ./opencascade/TopOpeBRepDS_SurfaceData.hxx
// ./opencascade/TopOpeBRepDS_Point.hxx
// ./opencascade/TopOpeBRepDS_Edge3dInterferenceTool.hxx
// ./opencascade/TopOpeBRepDS_GapFiller.hxx
// ./opencascade/TopOpeBRepDS_BuildTool.hxx
// ./opencascade/TopOpeBRepDS_ShapeSurface.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_PointExplorer.hxx
// ./opencascade/TopOpeBRepDS_FIR.hxx
// ./opencascade/TopOpeBRepDS_EIR.hxx
// ./opencascade/TopOpeBRepDS_Config.hxx
// ./opencascade/TopOpeBRepDS_PointIterator.hxx
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfShapeWithState.hxx
// ./opencascade/TopOpeBRepDS_PointData.hxx
// ./opencascade/TopOpeBRepDS_HDataStructure.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfIntegerListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape.hxx
// ./opencascade/TopOpeBRepDS_Explorer.hxx
// ./opencascade/TopOpeBRepDS_SolidSurfaceInterference.hxx
// ./opencascade/TopOpeBRepDS_Check.hxx
// ./opencascade/TopOpeBRepDS_Transition.hxx
// ./opencascade/TopOpeBRepDS_ListIteratorOfListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_DataStructure.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfPoint.hxx
// ./opencascade/TopOpeBRepDS_PDataStructure.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfShapeSurface.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfCheckStatus.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfMapOfIntegerShapeData.hxx
// ./opencascade/TopOpeBRepDS.hxx
// ./opencascade/TopOpeBRepDS_CurveIterator.hxx
// ./opencascade/TopOpeBRepDS_InterferenceIterator.hxx
// ./opencascade/TopOpeBRepDS_SurfaceCurveInterference.hxx
// ./opencascade/TopOpeBRepDS_define.hxx
// ./opencascade/TopOpeBRepDS_ListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_FaceEdgeInterference.hxx
// ./opencascade/TopOpeBRepDS_MapOfPoint.hxx
// ./opencascade/TopOpeBRepDS_TOOL.hxx
// ./opencascade/TopOpeBRepDS_Association.hxx
// ./opencascade/TopOpeBRepDS_MapOfSurface.hxx
// ./opencascade/TopOpeBRepDS_MapOfShapeData.hxx
// ./opencascade/TopOpeBRepDS_ListOfShapeOn1State.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_DRAW.hxx
// ./opencascade/TopOpeBRepDS_Surface.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeListOfShapeOn1State.hxx
// ./opencascade/TopOpeBRepDS_GapTool.hxx
// ./opencascade/TopOpeBRepDS_MapOfCurve.hxx
// ./opencascade/TopOpeBRepDS_Filter.hxx
// ./opencascade/TopOpeBRepDS_Dumper.hxx
// ./opencascade/TopOpeBRepDS_MapOfIntegerShapeData.hxx
// ./opencascade/TopOpeBRepDS_ShapeShapeInterference.hxx
// ./opencascade/TopOpeBRepDS_Kind.hxx
// ./opencascade/TopOpeBRepDS_EdgeInterferenceTool.hxx
// ./opencascade/TopOpeBRepDS_DoubleMapOfIntegerShape.hxx
// ./opencascade/TopOpeBRepDS_Curve.hxx
// ./opencascade/TopOpeBRepDS_EdgeVertexInterference.hxx
// ./opencascade/TopOpeBRepDS_CurveData.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState.hxx
// ./opencascade/TopOpeBRepDS_SurfaceExplorer.hxx
// ./opencascade/TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_SurfaceIterator.hxx
// ./opencascade/TopOpeBRepDS_DataMapOfInterferenceShape.hxx
// ./opencascade/TopOpeBRepDS_Interference.hxx
// ./opencascade/TopOpeBRepDS_InterferenceTool.hxx
// ./opencascade/TopOpeBRepDS_IndexedDataMapOfVertexPoint.hxx
// ./opencascade/TopOpeBRepDS_GeometryData.hxx
// ./opencascade/TopOpeBRepDS_ProcessInterferencesTool.hxx
// ./opencascade/TopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference.hxx
// ./opencascade/TopOpeBRepDS_FaceInterferenceTool.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, TopAbs_State, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DataMapOfShapeState");
    register_template_NCollection_DataMap<TopoDS_Shape, TopOpeBRepDS_ListOfShapeOn1State, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DataMapOfShapeListOfShapeOn1State");
    register_template_NCollection_Array1<TopOpeBRepDS_DataMapOfIntegerListOfInterference>(m,"TopOpeBRepDS_Array1OfDataMapOfIntegerListOfInterference");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeWithState, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_IndexedDataMapOfShapeWithState");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_ListOfInterference, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_DataMapOfIntegerListOfInterference");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_CheckStatus, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_DataMapOfCheckStatus");
    register_template_NCollection_List<opencascade::handle<TopOpeBRepDS_Interference> >(m,"TopOpeBRepDS_ListOfInterference");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_PointData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfPoint");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_SurfaceData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfSurface");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_ShapeData, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_MapOfShapeData");
    register_template_NCollection_DataMap<opencascade::handle<TopOpeBRepDS_Interference>, TopOpeBRepDS_ListOfInterference, TColStd_MapTransientHasher>(m,"TopOpeBRepDS_DataMapOfInterferenceListOfInterference");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_CurveData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfCurve");
    register_template_NCollection_DataMap<Standard_Integer, TopOpeBRepDS_ShapeData, TColStd_MapIntegerHasher>(m,"TopOpeBRepDS_MapOfIntegerShapeData");
    register_template_NCollection_DoubleMap<Standard_Integer, TopoDS_Shape, TColStd_MapIntegerHasher, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_DoubleMapOfIntegerShape");
    register_template_NCollection_DataMap<opencascade::handle<TopOpeBRepDS_Interference>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"TopOpeBRepDS_DataMapOfInterferenceShape");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopOpeBRepDS_Point, TopTools_ShapeMapHasher>(m,"TopOpeBRepDS_IndexedDataMapOfVertexPoint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
