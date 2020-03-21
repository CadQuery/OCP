
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepGeom_CartesianPoint.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepToTopoDS_Root.hxx>
#include <StepToTopoDS_TranslateShell.hxx>
#include <StepToTopoDS_TranslateFace.hxx>
#include <StepToTopoDS_TranslateEdgeLoop.hxx>
#include <StepToTopoDS_TranslateEdge.hxx>
#include <StepToTopoDS_TranslateVertex.hxx>
#include <StepToTopoDS_TranslatePolyLoop.hxx>
#include <StepToTopoDS_TranslateVertexLoop.hxx>
#include <StepToTopoDS_TranslateCompositeCurve.hxx>
#include <StepToTopoDS_TranslateCurveBoundedSurface.hxx>
#include <StepToTopoDS_Builder.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <StepToTopoDS_GeometricTool.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_CartesianPointHasher.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <TopoDS_Shape.hxx>
#include <StepRepr_MappedItem.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_Edge.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepGeom_Curve.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <StepShape_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <StepGeom_Pcurve.hxx>
#include <Geom_Surface.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <Transfer_TransientProcess.hxx>
#include <StepGeom_Surface.hxx>
#include <Geom_Surface.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_FaceBound.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <StepGeom_Surface.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StdFail_NotDone.hxx>
#include <StepShape_Vertex.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_NMTool.hxx>

// module includes
#include <StepToTopoDS.hxx>
#include <StepToTopoDS_Builder.hxx>
#include <StepToTopoDS_BuilderError.hxx>
#include <StepToTopoDS_CartesianPointHasher.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRINames.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx>
#include <StepToTopoDS_DataMapOfRI.hxx>
#include <StepToTopoDS_DataMapOfRINames.hxx>
#include <StepToTopoDS_DataMapOfTRI.hxx>
#include <StepToTopoDS_GeometricTool.hxx>
#include <StepToTopoDS_GeometricToolError.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepToTopoDS_PointEdgeMap.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepToTopoDS_PointPairHasher.hxx>
#include <StepToTopoDS_PointVertexMap.hxx>
#include <StepToTopoDS_Root.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_TranslateCompositeCurve.hxx>
#include <StepToTopoDS_TranslateCurveBoundedSurface.hxx>
#include <StepToTopoDS_TranslateEdge.hxx>
#include <StepToTopoDS_TranslateEdgeError.hxx>
#include <StepToTopoDS_TranslateEdgeLoop.hxx>
#include <StepToTopoDS_TranslateEdgeLoopError.hxx>
#include <StepToTopoDS_TranslateFace.hxx>
#include <StepToTopoDS_TranslateFaceError.hxx>
#include <StepToTopoDS_TranslatePolyLoop.hxx>
#include <StepToTopoDS_TranslatePolyLoopError.hxx>
#include <StepToTopoDS_TranslateShell.hxx>
#include <StepToTopoDS_TranslateShellError.hxx>
#include <StepToTopoDS_TranslateVertex.hxx>
#include <StepToTopoDS_TranslateVertexError.hxx>
#include <StepToTopoDS_TranslateVertexLoop.hxx>
#include <StepToTopoDS_TranslateVertexLoopError.hxx>

// template related includes
// ./opencascade/StepToTopoDS_DataMapOfRINames.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_DataMapOfRINames.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_DataMapOfRI.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_DataMapOfRI.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_DataMapOfTRI.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_DataMapOfTRI.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_PointVertexMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_PointVertexMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_PointEdgeMap.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/StepToTopoDS_PointEdgeMap.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_StepToTopoDS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("StepToTopoDS"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<StepToTopoDS , shared_ptr<StepToTopoDS>>(m,"StepToTopoDS");

    static_cast<py::class_<StepToTopoDS , shared_ptr<StepToTopoDS> >>(m.attr("StepToTopoDS"))
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
    register_default_constructor<StepToTopoDS_CartesianPointHasher , shared_ptr<StepToTopoDS_CartesianPointHasher>>(m,"StepToTopoDS_CartesianPointHasher");

    static_cast<py::class_<StepToTopoDS_CartesianPointHasher , shared_ptr<StepToTopoDS_CartesianPointHasher> >>(m.attr("StepToTopoDS_CartesianPointHasher"))
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
    register_default_constructor<StepToTopoDS_GeometricTool , shared_ptr<StepToTopoDS_GeometricTool>>(m,"StepToTopoDS_GeometricTool");

    static_cast<py::class_<StepToTopoDS_GeometricTool , shared_ptr<StepToTopoDS_GeometricTool> >>(m.attr("StepToTopoDS_GeometricTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_NMTool , shared_ptr<StepToTopoDS_NMTool> >>(m.attr("StepToTopoDS_NMTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_PointPair , shared_ptr<StepToTopoDS_PointPair> >>(m.attr("StepToTopoDS_PointPair"))
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
    register_default_constructor<StepToTopoDS_PointPairHasher , shared_ptr<StepToTopoDS_PointPairHasher>>(m,"StepToTopoDS_PointPairHasher");

    static_cast<py::class_<StepToTopoDS_PointPairHasher , shared_ptr<StepToTopoDS_PointPairHasher> >>(m.attr("StepToTopoDS_PointPairHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_Root , shared_ptr<StepToTopoDS_Root> >>(m.attr("StepToTopoDS_Root"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (StepToTopoDS_Root::*)() const) static_cast<Standard_Boolean (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::IsDone),
             R"#(None)#" )
        .def("Precision",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::Precision),
             R"#(Returns the value of "MyPrecision")#" )
        .def("SetPrecision",
             (void (StepToTopoDS_Root::*)( const Standard_Real ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real ) >(&StepToTopoDS_Root::SetPrecision),
             R"#(Sets the value of "MyPrecision")#"  , py::arg("preci"))
        .def("MaxTol",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::MaxTol),
             R"#(Returns the value of "MaxTol")#" )
        .def("SetMaxTol",
             (void (StepToTopoDS_Root::*)( const Standard_Real ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real ) >(&StepToTopoDS_Root::SetMaxTol),
             R"#(Sets the value of MaxTol)#"  , py::arg("maxpreci"))
        .def("IsDone",
             (Standard_Boolean (StepToTopoDS_Root::*)() const) static_cast<Standard_Boolean (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::IsDone),
             R"#(None)#" )
        .def("Precision",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::Precision),
             R"#(Returns the value of "MyPrecision")#" )
        .def("SetPrecision",
             (void (StepToTopoDS_Root::*)( const Standard_Real ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real ) >(&StepToTopoDS_Root::SetPrecision),
             R"#(Sets the value of "MyPrecision")#"  , py::arg("preci"))
        .def("MaxTol",
             (Standard_Real (StepToTopoDS_Root::*)() const) static_cast<Standard_Real (StepToTopoDS_Root::*)() const>(&StepToTopoDS_Root::MaxTol),
             R"#(Returns the value of "MaxTol")#" )
        .def("SetMaxTol",
             (void (StepToTopoDS_Root::*)( const Standard_Real ) ) static_cast<void (StepToTopoDS_Root::*)( const Standard_Real ) >(&StepToTopoDS_Root::SetMaxTol),
             R"#(Sets the value of MaxTol)#"  , py::arg("maxpreci"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_Tool , shared_ptr<StepToTopoDS_Tool> >>(m.attr("StepToTopoDS_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_Builder , shared_ptr<StepToTopoDS_Builder> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_Builder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_MakeTransformed , shared_ptr<StepToTopoDS_MakeTransformed> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_MakeTransformed"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateCompositeCurve , shared_ptr<StepToTopoDS_TranslateCompositeCurve> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateCompositeCurve"))
    // constructors
    // custom constructors
    // methods
        .def("IsInfiniteSegment",
             (Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const) static_cast<Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const>(&StepToTopoDS_TranslateCompositeCurve::IsInfiniteSegment),
             R"#(Returns True if composite_curve contains a segment with infinite parameters.)#" )
        .def("IsInfiniteSegment",
             (Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const) static_cast<Standard_Boolean (StepToTopoDS_TranslateCompositeCurve::*)() const>(&StepToTopoDS_TranslateCompositeCurve::IsInfiniteSegment),
             R"#(Returns True if composite_curve contains a segment with infinite parameters.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateCurveBoundedSurface , shared_ptr<StepToTopoDS_TranslateCurveBoundedSurface> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateCurveBoundedSurface"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateEdge , shared_ptr<StepToTopoDS_TranslateEdge> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateEdge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateEdgeLoop , shared_ptr<StepToTopoDS_TranslateEdgeLoop> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateEdgeLoop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateFace , shared_ptr<StepToTopoDS_TranslateFace> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslatePolyLoop , shared_ptr<StepToTopoDS_TranslatePolyLoop> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslatePolyLoop"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateShell , shared_ptr<StepToTopoDS_TranslateShell> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateShell"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateVertex , shared_ptr<StepToTopoDS_TranslateVertex> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<StepToTopoDS_TranslateVertexLoop , shared_ptr<StepToTopoDS_TranslateVertexLoop> , StepToTopoDS_Root>>(m.attr("StepToTopoDS_TranslateVertexLoop"))
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
// ./opencascade/StepToTopoDS_TranslateVertexError.hxx
// ./opencascade/StepToTopoDS_BuilderError.hxx
// ./opencascade/StepToTopoDS_PointPair.hxx
// ./opencascade/StepToTopoDS_TranslateCurveBoundedSurface.hxx
// ./opencascade/StepToTopoDS_NMTool.hxx
// ./opencascade/StepToTopoDS_GeometricToolError.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfRINames.hxx
// ./opencascade/StepToTopoDS_TranslateShellError.hxx
// ./opencascade/StepToTopoDS_TranslateVertexLoopError.hxx
// ./opencascade/StepToTopoDS_CartesianPointHasher.hxx
// ./opencascade/StepToTopoDS_Builder.hxx
// ./opencascade/StepToTopoDS_GeometricTool.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx
// ./opencascade/StepToTopoDS_DataMapOfRINames.hxx
// ./opencascade/StepToTopoDS_TranslateFaceError.hxx
// ./opencascade/StepToTopoDS_TranslateShell.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeLoopError.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx
// ./opencascade/StepToTopoDS_Root.hxx
// ./opencascade/StepToTopoDS_DataMapOfRI.hxx
// ./opencascade/StepToTopoDS_Tool.hxx
// ./opencascade/StepToTopoDS.hxx
// ./opencascade/StepToTopoDS_TranslatePolyLoop.hxx
// ./opencascade/StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx
// ./opencascade/StepToTopoDS_MakeTransformed.hxx
// ./opencascade/StepToTopoDS_DataMapOfTRI.hxx
// ./opencascade/StepToTopoDS_TranslateEdge.hxx
// ./opencascade/StepToTopoDS_PointVertexMap.hxx
// ./opencascade/StepToTopoDS_PointPairHasher.hxx
// ./opencascade/StepToTopoDS_TranslatePolyLoopError.hxx
// ./opencascade/StepToTopoDS_TranslateCompositeCurve.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeError.hxx
// ./opencascade/StepToTopoDS_TranslateEdgeLoop.hxx
// ./opencascade/StepToTopoDS_TranslateVertexLoop.hxx
// ./opencascade/StepToTopoDS_TranslateFace.hxx
// ./opencascade/StepToTopoDS_TranslateVertex.hxx
// ./opencascade/StepToTopoDS_PointEdgeMap.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TCollection_AsciiString, TopoDS_Shape, TCollection_AsciiString>(m,"StepToTopoDS_DataMapOfRINames");
    register_template_NCollection_DataMap<opencascade::handle<StepRepr_RepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"StepToTopoDS_DataMapOfRI");
    register_template_NCollection_DataMap<opencascade::handle<StepShape_TopologicalRepresentationItem>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"StepToTopoDS_DataMapOfTRI");
    register_template_NCollection_DataMap<opencascade::handle<StepGeom_CartesianPoint>, TopoDS_Vertex, StepToTopoDS_CartesianPointHasher>(m,"StepToTopoDS_PointVertexMap");
    register_template_NCollection_DataMap<StepToTopoDS_PointPair, TopoDS_Edge, StepToTopoDS_PointPairHasher>(m,"StepToTopoDS_PointEdgeMap");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
