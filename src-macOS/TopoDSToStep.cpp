
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Shape.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
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
#include <StepShape_GeometricCurveSet.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shape.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Solid.hxx>
#include <Transfer_FinderProcess.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Shell.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TopoDS_Solid.hxx>
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

    // default constructor
    register_default_constructor<TopoDSToStep , shared_ptr<TopoDSToStep>>(m,"TopoDSToStep");

    static_cast<py::class_<TopoDSToStep , shared_ptr<TopoDSToStep> >>(m.attr("TopoDSToStep"))
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
    register_default_constructor<TopoDSToStep_FacetedTool , shared_ptr<TopoDSToStep_FacetedTool>>(m,"TopoDSToStep_FacetedTool");

    static_cast<py::class_<TopoDSToStep_FacetedTool , shared_ptr<TopoDSToStep_FacetedTool> >>(m.attr("TopoDSToStep_FacetedTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_Root , shared_ptr<TopoDSToStep_Root> >>(m.attr("TopoDSToStep_Root"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_Tool , shared_ptr<TopoDSToStep_Tool> >>(m.attr("TopoDSToStep_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_Builder , shared_ptr<TopoDSToStep_Builder> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_Builder"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeBrepWithVoids , shared_ptr<TopoDSToStep_MakeBrepWithVoids> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeBrepWithVoids"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeFacetedBrep , shared_ptr<TopoDSToStep_MakeFacetedBrep> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeFacetedBrep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeFacetedBrepAndBrepWithVoids , shared_ptr<TopoDSToStep_MakeFacetedBrepAndBrepWithVoids> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeFacetedBrepAndBrepWithVoids"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeGeometricCurveSet , shared_ptr<TopoDSToStep_MakeGeometricCurveSet> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeGeometricCurveSet"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeManifoldSolidBrep , shared_ptr<TopoDSToStep_MakeManifoldSolidBrep> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeManifoldSolidBrep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeShellBasedSurfaceModel , shared_ptr<TopoDSToStep_MakeShellBasedSurfaceModel> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeShellBasedSurfaceModel"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeStepEdge , shared_ptr<TopoDSToStep_MakeStepEdge> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeStepEdge"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeStepFace , shared_ptr<TopoDSToStep_MakeStepFace> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeStepFace"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeStepVertex , shared_ptr<TopoDSToStep_MakeStepVertex> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeStepVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_MakeStepWire , shared_ptr<TopoDSToStep_MakeStepWire> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_MakeStepWire"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<TopoDSToStep_WireframeBuilder , shared_ptr<TopoDSToStep_WireframeBuilder> , TopoDSToStep_Root>>(m.attr("TopoDSToStep_WireframeBuilder"))
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
// ./opencascade/TopoDSToStep_MakeShellBasedSurfaceModel.hxx
// ./opencascade/TopoDSToStep_FacetedTool.hxx
// ./opencascade/TopoDSToStep_MakeFacetedBrep.hxx
// ./opencascade/TopoDSToStep_Builder.hxx
// ./opencascade/TopoDSToStep.hxx
// ./opencascade/TopoDSToStep_FacetedError.hxx
// ./opencascade/TopoDSToStep_MakeGeometricCurveSet.hxx
// ./opencascade/TopoDSToStep_Tool.hxx
// ./opencascade/TopoDSToStep_Root.hxx
// ./opencascade/TopoDSToStep_MakeWireError.hxx
// ./opencascade/TopoDSToStep_BuilderError.hxx
// ./opencascade/TopoDSToStep_WireframeBuilder.hxx
// ./opencascade/TopoDSToStep_MakeBrepWithVoids.hxx
// ./opencascade/TopoDSToStep_MakeStepVertex.hxx
// ./opencascade/TopoDSToStep_MakeStepWire.hxx
// ./opencascade/TopoDSToStep_MakeFaceError.hxx
// ./opencascade/TopoDSToStep_MakeStepEdge.hxx
// ./opencascade/TopoDSToStep_MakeVertexError.hxx
// ./opencascade/TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx
// ./opencascade/TopoDSToStep_MakeEdgeError.hxx
// ./opencascade/TopoDSToStep_MakeManifoldSolidBrep.hxx
// ./opencascade/TopoDSToStep_MakeStepFace.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
