
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepShape_FacetedBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_Root.hxx>
#include <TopoDSToStep_MakeManifoldSolidBrep.hxx>
#include <TopoDSToStep_MakeBrepWithVoids.hxx>
#include <TopoDSToStep_MakeFacetedBrep.hxx>
#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx>
#include <TopoDSToStep_MakeShellBasedSurfaceModel.hxx>
#include <TopoDSToStep_MakeGeometricCurveSet.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_WireframeBuilder.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_FacetedTool.hxx>
#include <TopoDSToStep_MakeStepFace.hxx>
#include <TopoDSToStep_MakeStepWire.hxx>
#include <TopoDSToStep_MakeStepEdge.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shape.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>

// module includes
#include <TopoDSToStep.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_BuilderError.hxx>
#include <TopoDSToStep_FacetedError.hxx>
#include <TopoDSToStep_FacetedTool.hxx>
#include <TopoDSToStep_MakeBrepWithVoids.hxx>
#include <TopoDSToStep_MakeEdgeError.hxx>
#include <TopoDSToStep_MakeFaceError.hxx>
#include <TopoDSToStep_MakeFacetedBrep.hxx>
#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx>
#include <TopoDSToStep_MakeGeometricCurveSet.hxx>
#include <TopoDSToStep_MakeManifoldSolidBrep.hxx>
#include <TopoDSToStep_MakeShellBasedSurfaceModel.hxx>
#include <TopoDSToStep_MakeStepEdge.hxx>
#include <TopoDSToStep_MakeStepFace.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>
#include <TopoDSToStep_MakeStepWire.hxx>
#include <TopoDSToStep_MakeVertexError.hxx>
#include <TopoDSToStep_MakeWireError.hxx>
#include <TopoDSToStep_Root.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_WireframeBuilder.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_TopoDSToStep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("TopoDSToStep"));


//Python trampoline classes

// classes


    static_cast<py::class_<TopoDSToStep_Root ,std::unique_ptr<TopoDSToStep_Root>  >>(m.attr("TopoDSToStep_Root"))
        .def("Tolerance",
             (Standard_Real & (TopoDSToStep_Root::*)() ) static_cast<Standard_Real & (TopoDSToStep_Root::*)() >(&TopoDSToStep_Root::Tolerance),
             R"#(Returns (modifiable) the tolerance to be used for writing If not set, starts at 0.0001)#" )
        .def("IsDone",
             (Standard_Boolean (TopoDSToStep_Root::*)() const) static_cast<Standard_Boolean (TopoDSToStep_Root::*)() const>(&TopoDSToStep_Root::IsDone),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeFacetedBrep ,std::unique_ptr<TopoDSToStep_MakeFacetedBrep>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeFacetedBrep"))
        .def(py::init< const TopoDS_Shell &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def(py::init< const TopoDS_Solid &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def("Value",
             (const opencascade::handle<StepShape_FacetedBrep> & (TopoDSToStep_MakeFacetedBrep::*)() const) static_cast<const opencascade::handle<StepShape_FacetedBrep> & (TopoDSToStep_MakeFacetedBrep::*)() const>(&TopoDSToStep_MakeFacetedBrep::Value),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeGeometricCurveSet ,std::unique_ptr<TopoDSToStep_MakeGeometricCurveSet>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeGeometricCurveSet"))
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("SH"),  py::arg("FP") )
        .def("Value",
             (const opencascade::handle<StepShape_GeometricCurveSet> & (TopoDSToStep_MakeGeometricCurveSet::*)() const) static_cast<const opencascade::handle<StepShape_GeometricCurveSet> & (TopoDSToStep_MakeGeometricCurveSet::*)() const>(&TopoDSToStep_MakeGeometricCurveSet::Value),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeStepEdge ,std::unique_ptr<TopoDSToStep_MakeStepEdge>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeStepEdge"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,TopoDSToStep_Tool &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("E"),  py::arg("T"),  py::arg("FP") )
        .def("Init",
             (void (TopoDSToStep_MakeStepEdge::*)( const TopoDS_Edge & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (TopoDSToStep_MakeStepEdge::*)( const TopoDS_Edge & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&TopoDSToStep_MakeStepEdge::Init),
             R"#(None)#"  , py::arg("E"),  py::arg("T"),  py::arg("FP"))
        .def("Value",
             (const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepEdge::*)() const) static_cast<const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepEdge::*)() const>(&TopoDSToStep_MakeStepEdge::Value),
             R"#(None)#" )
        .def("Error",
             (TopoDSToStep_MakeEdgeError (TopoDSToStep_MakeStepEdge::*)() const) static_cast<TopoDSToStep_MakeEdgeError (TopoDSToStep_MakeStepEdge::*)() const>(&TopoDSToStep_MakeStepEdge::Error),
             R"#(None)#" )
;

    register_default_constructor<TopoDSToStep ,std::unique_ptr<TopoDSToStep>>(m,"TopoDSToStep");

    static_cast<py::class_<TopoDSToStep ,std::unique_ptr<TopoDSToStep>  >>(m.attr("TopoDSToStep"))
        .def_static("DecodeBuilderError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_BuilderError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_BuilderError  ) >(&TopoDSToStep::DecodeBuilderError),
                    R"#(None)#"  , py::arg("E"))
        .def_static("DecodeFaceError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeFaceError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeFaceError  ) >(&TopoDSToStep::DecodeFaceError),
                    R"#(None)#"  , py::arg("E"))
        .def_static("DecodeWireError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeWireError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeWireError  ) >(&TopoDSToStep::DecodeWireError),
                    R"#(None)#"  , py::arg("E"))
        .def_static("DecodeEdgeError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeEdgeError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeEdgeError  ) >(&TopoDSToStep::DecodeEdgeError),
                    R"#(None)#"  , py::arg("E"))
        .def_static("DecodeVertexError_s",
                    (opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeVertexError  ) ) static_cast<opencascade::handle<TCollection_HAsciiString> (*)( const TopoDSToStep_MakeVertexError  ) >(&TopoDSToStep::DecodeVertexError),
                    R"#(Returns a new shape without undirect surfaces.)#"  , py::arg("E"))
        .def_static("AddResult_s",
                    (void (*)( const opencascade::handle<Transfer_FinderProcess> & ,  const TopoDS_Shape & ,  const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (*)( const opencascade::handle<Transfer_FinderProcess> & ,  const TopoDS_Shape & ,  const opencascade::handle<Standard_Transient> &  ) >(&TopoDSToStep::AddResult),
                    R"#(Adds an entity into the list of results (binders) for shape stored in FinderProcess)#"  , py::arg("FP"),  py::arg("Shape"),  py::arg("entity"))
        .def_static("AddResult_s",
                    (void (*)( const opencascade::handle<Transfer_FinderProcess> & ,  const TopoDSToStep_Tool &  ) ) static_cast<void (*)( const opencascade::handle<Transfer_FinderProcess> & ,  const TopoDSToStep_Tool &  ) >(&TopoDSToStep::AddResult),
                    R"#(Adds all entities recorded in Tool into the map of results (binders) stored in FinderProcess)#"  , py::arg("FP"),  py::arg("Tool"))
;


    static_cast<py::class_<TopoDSToStep_WireframeBuilder ,std::unique_ptr<TopoDSToStep_WireframeBuilder>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_WireframeBuilder"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,TopoDSToStep_Tool &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("T"),  py::arg("FP") )
        .def("Init",
             (void (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Shape & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Shape & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&TopoDSToStep_WireframeBuilder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("FP"))
        .def("Error",
             (TopoDSToStep_BuilderError (TopoDSToStep_WireframeBuilder::*)() const) static_cast<TopoDSToStep_BuilderError (TopoDSToStep_WireframeBuilder::*)() const>(&TopoDSToStep_WireframeBuilder::Error),
             R"#(None)#" )
        .def("Value",
             (const opencascade::handle<TColStd_HSequenceOfTransient> & (TopoDSToStep_WireframeBuilder::*)() const) static_cast<const opencascade::handle<TColStd_HSequenceOfTransient> & (TopoDSToStep_WireframeBuilder::*)() const>(&TopoDSToStep_WireframeBuilder::Value),
             R"#(None)#" )
        .def("GetTrimmedCurveFromEdge",
             (Standard_Boolean (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  opencascade::handle<TColStd_HSequenceOfTransient> &  ) const) static_cast<Standard_Boolean (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Edge & ,  const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  opencascade::handle<TColStd_HSequenceOfTransient> &  ) const>(&TopoDSToStep_WireframeBuilder::GetTrimmedCurveFromEdge),
             R"#(Extraction of Trimmed Curves from TopoDS_Edge for the Creation of a GeometricallyBoundedWireframeRepresentation)#"  , py::arg("E"),  py::arg("F"),  py::arg("M"),  py::arg("L"))
        .def("GetTrimmedCurveFromFace",
             (Standard_Boolean (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  opencascade::handle<TColStd_HSequenceOfTransient> &  ) const) static_cast<Standard_Boolean (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Face & ,  NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  opencascade::handle<TColStd_HSequenceOfTransient> &  ) const>(&TopoDSToStep_WireframeBuilder::GetTrimmedCurveFromFace),
             R"#(Extraction of Trimmed Curves from TopoDS_Face for the Creation of a GeometricallyBoundedWireframeRepresentation)#"  , py::arg("F"),  py::arg("M"),  py::arg("L"))
        .def("GetTrimmedCurveFromShape",
             (Standard_Boolean (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Shape & ,  NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  opencascade::handle<TColStd_HSequenceOfTransient> &  ) const) static_cast<Standard_Boolean (TopoDSToStep_WireframeBuilder::*)( const TopoDS_Shape & ,  NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  opencascade::handle<TColStd_HSequenceOfTransient> &  ) const>(&TopoDSToStep_WireframeBuilder::GetTrimmedCurveFromShape),
             R"#(Extraction of Trimmed Curves from any TopoDS_Shape for the Creation of a GeometricallyBoundedWireframeRepresentation)#"  , py::arg("S"),  py::arg("M"),  py::arg("L"))
;


    static_cast<py::class_<TopoDSToStep_MakeStepWire ,std::unique_ptr<TopoDSToStep_MakeStepWire>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeStepWire"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,TopoDSToStep_Tool &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("W"),  py::arg("T"),  py::arg("FP") )
        .def("Init",
             (void (TopoDSToStep_MakeStepWire::*)( const TopoDS_Wire & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (TopoDSToStep_MakeStepWire::*)( const TopoDS_Wire & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&TopoDSToStep_MakeStepWire::Init),
             R"#(None)#"  , py::arg("W"),  py::arg("T"),  py::arg("FP"))
        .def("Value",
             (const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepWire::*)() const) static_cast<const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepWire::*)() const>(&TopoDSToStep_MakeStepWire::Value),
             R"#(None)#" )
        .def("Error",
             (TopoDSToStep_MakeWireError (TopoDSToStep_MakeStepWire::*)() const) static_cast<TopoDSToStep_MakeWireError (TopoDSToStep_MakeStepWire::*)() const>(&TopoDSToStep_MakeStepWire::Error),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeFacetedBrepAndBrepWithVoids ,std::unique_ptr<TopoDSToStep_MakeFacetedBrepAndBrepWithVoids>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeFacetedBrepAndBrepWithVoids"))
        .def(py::init< const TopoDS_Solid &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def("Value",
             (const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & (TopoDSToStep_MakeFacetedBrepAndBrepWithVoids::*)() const) static_cast<const opencascade::handle<StepShape_FacetedBrepAndBrepWithVoids> & (TopoDSToStep_MakeFacetedBrepAndBrepWithVoids::*)() const>(&TopoDSToStep_MakeFacetedBrepAndBrepWithVoids::Value),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeStepFace ,std::unique_ptr<TopoDSToStep_MakeStepFace>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeStepFace"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,TopoDSToStep_Tool &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("F"),  py::arg("T"),  py::arg("FP") )
        .def("Init",
             (void (TopoDSToStep_MakeStepFace::*)( const TopoDS_Face & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (TopoDSToStep_MakeStepFace::*)( const TopoDS_Face & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&TopoDSToStep_MakeStepFace::Init),
             R"#(None)#"  , py::arg("F"),  py::arg("T"),  py::arg("FP"))
        .def("Value",
             (const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepFace::*)() const) static_cast<const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepFace::*)() const>(&TopoDSToStep_MakeStepFace::Value),
             R"#(None)#" )
        .def("Error",
             (TopoDSToStep_MakeFaceError (TopoDSToStep_MakeStepFace::*)() const) static_cast<TopoDSToStep_MakeFaceError (TopoDSToStep_MakeStepFace::*)() const>(&TopoDSToStep_MakeStepFace::Error),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeBrepWithVoids ,std::unique_ptr<TopoDSToStep_MakeBrepWithVoids>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeBrepWithVoids"))
        .def(py::init< const TopoDS_Solid &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def("Value",
             (const opencascade::handle<StepShape_BrepWithVoids> & (TopoDSToStep_MakeBrepWithVoids::*)() const) static_cast<const opencascade::handle<StepShape_BrepWithVoids> & (TopoDSToStep_MakeBrepWithVoids::*)() const>(&TopoDSToStep_MakeBrepWithVoids::Value),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_Tool ,std::unique_ptr<TopoDSToStep_Tool>  >>(m.attr("TopoDSToStep_Tool"))
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> &,const Standard_Boolean >()  , py::arg("M"),  py::arg("FacetedContext") )
        .def("Init",
             (void (TopoDSToStep_Tool::*)(  const NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  const Standard_Boolean  ) ) static_cast<void (TopoDSToStep_Tool::*)(  const NCollection_DataMap<TopoDS_Shape, opencascade::handle<Standard_Transient>, TopTools_ShapeMapHasher> & ,  const Standard_Boolean  ) >(&TopoDSToStep_Tool::Init),
             R"#(None)#"  , py::arg("M"),  py::arg("FacetedContext"))
        .def("IsBound",
             (Standard_Boolean (TopoDSToStep_Tool::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (TopoDSToStep_Tool::*)( const TopoDS_Shape &  ) >(&TopoDSToStep_Tool::IsBound),
             R"#(None)#"  , py::arg("S"))
        .def("Bind",
             (void (TopoDSToStep_Tool::*)( const TopoDS_Shape & ,  const opencascade::handle<StepShape_TopologicalRepresentationItem> &  ) ) static_cast<void (TopoDSToStep_Tool::*)( const TopoDS_Shape & ,  const opencascade::handle<StepShape_TopologicalRepresentationItem> &  ) >(&TopoDSToStep_Tool::Bind),
             R"#(None)#"  , py::arg("S"),  py::arg("T"))
        .def("Find",
             (opencascade::handle<StepShape_TopologicalRepresentationItem> (TopoDSToStep_Tool::*)( const TopoDS_Shape &  ) ) static_cast<opencascade::handle<StepShape_TopologicalRepresentationItem> (TopoDSToStep_Tool::*)( const TopoDS_Shape &  ) >(&TopoDSToStep_Tool::Find),
             R"#(None)#"  , py::arg("S"))
        .def("Faceted",
             (Standard_Boolean (TopoDSToStep_Tool::*)() const) static_cast<Standard_Boolean (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::Faceted),
             R"#(None)#" )
        .def("SetCurrentShell",
             (void (TopoDSToStep_Tool::*)( const TopoDS_Shell &  ) ) static_cast<void (TopoDSToStep_Tool::*)( const TopoDS_Shell &  ) >(&TopoDSToStep_Tool::SetCurrentShell),
             R"#(None)#"  , py::arg("S"))
        .def("CurrentShell",
             (const TopoDS_Shell & (TopoDSToStep_Tool::*)() const) static_cast<const TopoDS_Shell & (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::CurrentShell),
             R"#(None)#" )
        .def("SetCurrentFace",
             (void (TopoDSToStep_Tool::*)( const TopoDS_Face &  ) ) static_cast<void (TopoDSToStep_Tool::*)( const TopoDS_Face &  ) >(&TopoDSToStep_Tool::SetCurrentFace),
             R"#(None)#"  , py::arg("F"))
        .def("CurrentFace",
             (const TopoDS_Face & (TopoDSToStep_Tool::*)() const) static_cast<const TopoDS_Face & (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::CurrentFace),
             R"#(None)#" )
        .def("SetCurrentWire",
             (void (TopoDSToStep_Tool::*)( const TopoDS_Wire &  ) ) static_cast<void (TopoDSToStep_Tool::*)( const TopoDS_Wire &  ) >(&TopoDSToStep_Tool::SetCurrentWire),
             R"#(None)#"  , py::arg("W"))
        .def("CurrentWire",
             (const TopoDS_Wire & (TopoDSToStep_Tool::*)() const) static_cast<const TopoDS_Wire & (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::CurrentWire),
             R"#(None)#" )
        .def("SetCurrentEdge",
             (void (TopoDSToStep_Tool::*)( const TopoDS_Edge &  ) ) static_cast<void (TopoDSToStep_Tool::*)( const TopoDS_Edge &  ) >(&TopoDSToStep_Tool::SetCurrentEdge),
             R"#(None)#"  , py::arg("E"))
        .def("CurrentEdge",
             (const TopoDS_Edge & (TopoDSToStep_Tool::*)() const) static_cast<const TopoDS_Edge & (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::CurrentEdge),
             R"#(None)#" )
        .def("SetCurrentVertex",
             (void (TopoDSToStep_Tool::*)( const TopoDS_Vertex &  ) ) static_cast<void (TopoDSToStep_Tool::*)( const TopoDS_Vertex &  ) >(&TopoDSToStep_Tool::SetCurrentVertex),
             R"#(None)#"  , py::arg("V"))
        .def("CurrentVertex",
             (const TopoDS_Vertex & (TopoDSToStep_Tool::*)() const) static_cast<const TopoDS_Vertex & (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::CurrentVertex),
             R"#(None)#" )
        .def("Lowest3DTolerance",
             (Standard_Real (TopoDSToStep_Tool::*)() const) static_cast<Standard_Real (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::Lowest3DTolerance),
             R"#(None)#" )
        .def("SetSurfaceReversed",
             (void (TopoDSToStep_Tool::*)( const Standard_Boolean  ) ) static_cast<void (TopoDSToStep_Tool::*)( const Standard_Boolean  ) >(&TopoDSToStep_Tool::SetSurfaceReversed),
             R"#(None)#"  , py::arg("B"))
        .def("SurfaceReversed",
             (Standard_Boolean (TopoDSToStep_Tool::*)() const) static_cast<Standard_Boolean (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::SurfaceReversed),
             R"#(None)#" )
        .def("Map",
             (const MoniTool_DataMapOfShapeTransient & (TopoDSToStep_Tool::*)() const) static_cast<const MoniTool_DataMapOfShapeTransient & (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::Map),
             R"#(None)#" )
        .def("PCurveMode",
             (Standard_Integer (TopoDSToStep_Tool::*)() const) static_cast<Standard_Integer (TopoDSToStep_Tool::*)() const>(&TopoDSToStep_Tool::PCurveMode),
             R"#(Returns mode for writing pcurves (initialized by parameter write.surfacecurve.mode))#" )
;


    static_cast<py::class_<TopoDSToStep_MakeShellBasedSurfaceModel ,std::unique_ptr<TopoDSToStep_MakeShellBasedSurfaceModel>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeShellBasedSurfaceModel"))
        .def(py::init< const TopoDS_Face &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("F"),  py::arg("FP") )
        .def(py::init< const TopoDS_Shell &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def(py::init< const TopoDS_Solid &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def("Value",
             (const opencascade::handle<StepShape_ShellBasedSurfaceModel> & (TopoDSToStep_MakeShellBasedSurfaceModel::*)() const) static_cast<const opencascade::handle<StepShape_ShellBasedSurfaceModel> & (TopoDSToStep_MakeShellBasedSurfaceModel::*)() const>(&TopoDSToStep_MakeShellBasedSurfaceModel::Value),
             R"#(None)#" )
;

    register_default_constructor<TopoDSToStep_FacetedTool ,std::unique_ptr<TopoDSToStep_FacetedTool>>(m,"TopoDSToStep_FacetedTool");

    static_cast<py::class_<TopoDSToStep_FacetedTool ,std::unique_ptr<TopoDSToStep_FacetedTool>  >>(m.attr("TopoDSToStep_FacetedTool"))
        .def_static("CheckTopoDSShape_s",
                    (TopoDSToStep_FacetedError (*)( const TopoDS_Shape &  ) ) static_cast<TopoDSToStep_FacetedError (*)( const TopoDS_Shape &  ) >(&TopoDSToStep_FacetedTool::CheckTopoDSShape),
                    R"#(None)#"  , py::arg("SH"))
;


    static_cast<py::class_<TopoDSToStep_Builder ,std::unique_ptr<TopoDSToStep_Builder>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_Builder"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,TopoDSToStep_Tool &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("T"),  py::arg("FP") )
        .def("Init",
             (void (TopoDSToStep_Builder::*)( const TopoDS_Shape & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (TopoDSToStep_Builder::*)( const TopoDS_Shape & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&TopoDSToStep_Builder::Init),
             R"#(None)#"  , py::arg("S"),  py::arg("T"),  py::arg("FP"))
        .def("Error",
             (TopoDSToStep_BuilderError (TopoDSToStep_Builder::*)() const) static_cast<TopoDSToStep_BuilderError (TopoDSToStep_Builder::*)() const>(&TopoDSToStep_Builder::Error),
             R"#(None)#" )
        .def("Value",
             (const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_Builder::*)() const) static_cast<const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_Builder::*)() const>(&TopoDSToStep_Builder::Value),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeStepVertex ,std::unique_ptr<TopoDSToStep_MakeStepVertex>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeStepVertex"))
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Vertex &,TopoDSToStep_Tool &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("V"),  py::arg("T"),  py::arg("FP") )
        .def("Init",
             (void (TopoDSToStep_MakeStepVertex::*)( const TopoDS_Vertex & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) ) static_cast<void (TopoDSToStep_MakeStepVertex::*)( const TopoDS_Vertex & ,  TopoDSToStep_Tool & ,  const opencascade::handle<Transfer_FinderProcess> &  ) >(&TopoDSToStep_MakeStepVertex::Init),
             R"#(None)#"  , py::arg("V"),  py::arg("T"),  py::arg("FP"))
        .def("Value",
             (const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepVertex::*)() const) static_cast<const opencascade::handle<StepShape_TopologicalRepresentationItem> & (TopoDSToStep_MakeStepVertex::*)() const>(&TopoDSToStep_MakeStepVertex::Value),
             R"#(None)#" )
        .def("Error",
             (TopoDSToStep_MakeVertexError (TopoDSToStep_MakeStepVertex::*)() const) static_cast<TopoDSToStep_MakeVertexError (TopoDSToStep_MakeStepVertex::*)() const>(&TopoDSToStep_MakeStepVertex::Error),
             R"#(None)#" )
;


    static_cast<py::class_<TopoDSToStep_MakeManifoldSolidBrep ,std::unique_ptr<TopoDSToStep_MakeManifoldSolidBrep>  , TopoDSToStep_Root >>(m.attr("TopoDSToStep_MakeManifoldSolidBrep"))
        .def(py::init< const TopoDS_Shell &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def(py::init< const TopoDS_Solid &,const opencascade::handle<Transfer_FinderProcess> & >()  , py::arg("S"),  py::arg("FP") )
        .def("Value",
             (const opencascade::handle<StepShape_ManifoldSolidBrep> & (TopoDSToStep_MakeManifoldSolidBrep::*)() const) static_cast<const opencascade::handle<StepShape_ManifoldSolidBrep> & (TopoDSToStep_MakeManifoldSolidBrep::*)() const>(&TopoDSToStep_MakeManifoldSolidBrep::Value),
             R"#(None)#" )
;

// functions
// ./opencascade/TopoDSToStep_Root.hxx
// ./opencascade/TopoDSToStep_MakeFacetedBrep.hxx
// ./opencascade/TopoDSToStep_MakeBrepWithVoids.hxx
// ./opencascade/TopoDSToStep_MakeWireError.hxx
// ./opencascade/TopoDSToStep_MakeGeometricCurveSet.hxx
// ./opencascade/TopoDSToStep_MakeVertexError.hxx
// ./opencascade/TopoDSToStep_Builder.hxx
// ./opencascade/TopoDSToStep_MakeStepEdge.hxx
// ./opencascade/TopoDSToStep_MakeEdgeError.hxx
// ./opencascade/TopoDSToStep_BuilderError.hxx
// ./opencascade/TopoDSToStep_Tool.hxx
// ./opencascade/TopoDSToStep.hxx
// ./opencascade/TopoDSToStep_MakeManifoldSolidBrep.hxx
// ./opencascade/TopoDSToStep_WireframeBuilder.hxx
// ./opencascade/TopoDSToStep_MakeShellBasedSurfaceModel.hxx
// ./opencascade/TopoDSToStep_MakeStepWire.hxx
// ./opencascade/TopoDSToStep_FacetedError.hxx
// ./opencascade/TopoDSToStep_MakeStepVertex.hxx
// ./opencascade/TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx
// ./opencascade/TopoDSToStep_MakeFaceError.hxx
// ./opencascade/TopoDSToStep_FacetedTool.hxx
// ./opencascade/TopoDSToStep_MakeStepFace.hxx

// operators

// register typdefs
// ./opencascade/TopoDSToStep_Root.hxx
// ./opencascade/TopoDSToStep_MakeFacetedBrep.hxx
// ./opencascade/TopoDSToStep_MakeBrepWithVoids.hxx
// ./opencascade/TopoDSToStep_MakeWireError.hxx
// ./opencascade/TopoDSToStep_MakeGeometricCurveSet.hxx
// ./opencascade/TopoDSToStep_MakeVertexError.hxx
// ./opencascade/TopoDSToStep_Builder.hxx
// ./opencascade/TopoDSToStep_MakeStepEdge.hxx
// ./opencascade/TopoDSToStep_MakeEdgeError.hxx
// ./opencascade/TopoDSToStep_BuilderError.hxx
// ./opencascade/TopoDSToStep_Tool.hxx
// ./opencascade/TopoDSToStep.hxx
// ./opencascade/TopoDSToStep_MakeManifoldSolidBrep.hxx
// ./opencascade/TopoDSToStep_WireframeBuilder.hxx
// ./opencascade/TopoDSToStep_MakeShellBasedSurfaceModel.hxx
// ./opencascade/TopoDSToStep_MakeStepWire.hxx
// ./opencascade/TopoDSToStep_FacetedError.hxx
// ./opencascade/TopoDSToStep_MakeStepVertex.hxx
// ./opencascade/TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx
// ./opencascade/TopoDSToStep_MakeFaceError.hxx
// ./opencascade/TopoDSToStep_FacetedTool.hxx
// ./opencascade/TopoDSToStep_MakeStepFace.hxx


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
