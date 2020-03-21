
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_BuildWires.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <StdFail_NotDone.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_NoMoreObject.hxx>
#include <TopoDS_Edge.hxx>
#include <LocOpe_PntFace.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <Standard_NullObject.hxx>
#include <LocOpe_WiresOnShape.hxx>
#include <gp_Ax1.hxx>
#include <gp_Circ.hxx>

// module includes
#include <LocOpe.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_BuildWires.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>
#include <LocOpe_DataMapOfShapePnt.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_Operation.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_SequenceOfCirc.hxx>
#include <LocOpe_SequenceOfLin.hxx>
#include <LocOpe_SequenceOfPntFace.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>

// template related includes
// ./opencascade/LocOpe_SequenceOfCirc.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_DataMapOfShapePnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_DataMapOfShapePnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_SequenceOfPntFace.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/LocOpe_SequenceOfLin.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_LocOpe_enums(py::module &main_module) {


py::module m = main_module.def_submodule("LocOpe", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<LocOpe_Operation>(m, "LocOpe_Operation",R"#(None)#")
        .value("LocOpe_FUSE",LocOpe_Operation::LocOpe_FUSE)
        .value("LocOpe_CUT",LocOpe_Operation::LocOpe_CUT)
        .value("LocOpe_INVALID",LocOpe_Operation::LocOpe_INVALID).export_values();

//Python trampoline classes
    class Py_LocOpe_GeneratedShape : public LocOpe_GeneratedShape{
    public:
        using LocOpe_GeneratedShape::LocOpe_GeneratedShape;


        // public pure virtual
        const TopTools_ListOfShape & GeneratingEdges() override { PYBIND11_OVERLOAD_PURE(const TopTools_ListOfShape &,LocOpe_GeneratedShape,GeneratingEdges,) };
        TopoDS_Edge Generated(const TopoDS_Vertex & V) override { PYBIND11_OVERLOAD_PURE(TopoDS_Edge,LocOpe_GeneratedShape,Generated,V) };
        TopoDS_Face Generated(const TopoDS_Edge & E) override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,LocOpe_GeneratedShape,Generated,E) };
        const TopTools_ListOfShape & OrientedFaces() override { PYBIND11_OVERLOAD_PURE(const TopTools_ListOfShape &,LocOpe_GeneratedShape,OrientedFaces,) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_Sequence<gp_Circ>(m,"LocOpe_SequenceOfCirc");
    preregister_template_NCollection_DataMap<TopoDS_Shape, gp_Pnt, TopTools_ShapeMapHasher>(m,"LocOpe_DataMapOfShapePnt");
    preregister_template_NCollection_Sequence<LocOpe_PntFace>(m,"LocOpe_SequenceOfPntFace");
    preregister_template_NCollection_Sequence<gp_Lin>(m,"LocOpe_SequenceOfLin");

// classes forward declarations only
    py::class_<LocOpe , shared_ptr<LocOpe> >(m,"LocOpe",R"#(Provides tools to implement local topological operations on a shape.)#");
    py::class_<LocOpe_BuildShape , shared_ptr<LocOpe_BuildShape> >(m,"LocOpe_BuildShape",R"#(None)#");
    py::class_<LocOpe_BuildWires , shared_ptr<LocOpe_BuildWires> >(m,"LocOpe_BuildWires",R"#(None)#");
    py::class_<LocOpe_CSIntersector , shared_ptr<LocOpe_CSIntersector> >(m,"LocOpe_CSIntersector",R"#(This class provides the intersection between a set of axis or a circle and the faces of a shape. The intersection points are sorted in increasing parameter along each axis or circle.)#");
    py::class_<LocOpe_CurveShapeIntersector , shared_ptr<LocOpe_CurveShapeIntersector> >(m,"LocOpe_CurveShapeIntersector",R"#(This class provides the intersection between an axis or a circle and the faces of a shape. The intersection points are sorted in increasing parameter along the axis.)#");
    py::class_<LocOpe_DPrism , shared_ptr<LocOpe_DPrism> >(m,"LocOpe_DPrism",R"#(Defines a pipe (near from Pipe from BRepFill), with modifications provided for the Pipe feature.)#");
    py::class_<LocOpe_FindEdges , shared_ptr<LocOpe_FindEdges> >(m,"LocOpe_FindEdges",R"#(None)#");
    py::class_<LocOpe_FindEdgesInFace , shared_ptr<LocOpe_FindEdgesInFace> >(m,"LocOpe_FindEdgesInFace",R"#(None)#");
    py::class_<LocOpe_GeneratedShape ,opencascade::handle<LocOpe_GeneratedShape>,Py_LocOpe_GeneratedShape , Standard_Transient>(m,"LocOpe_GeneratedShape",R"#()#");
    py::class_<LocOpe_Generator , shared_ptr<LocOpe_Generator> >(m,"LocOpe_Generator",R"#(None)#");
    py::class_<LocOpe_Gluer , shared_ptr<LocOpe_Gluer> >(m,"LocOpe_Gluer",R"#(None)#");
    py::class_<LocOpe_LinearForm , shared_ptr<LocOpe_LinearForm> >(m,"LocOpe_LinearForm",R"#(Defines a linear form (using Prism from BRepSweep) with modifications provided for the LinearForm feature.)#");
    py::class_<LocOpe_Pipe , shared_ptr<LocOpe_Pipe> >(m,"LocOpe_Pipe",R"#(Defines a pipe (near from Pipe from BRepFill), with modifications provided for the Pipe feature.)#");
    py::class_<LocOpe_PntFace , shared_ptr<LocOpe_PntFace> >(m,"LocOpe_PntFace",R"#(None)#");
    py::class_<LocOpe_Prism , shared_ptr<LocOpe_Prism> >(m,"LocOpe_Prism",R"#(Defines a prism (using Prism from BRepSweep) with modifications provided for the Prism feature.)#");
    py::class_<LocOpe_Revol , shared_ptr<LocOpe_Revol> >(m,"LocOpe_Revol",R"#(Defines a prism (using Prism from BRepSweep) with modifications provided for the Prism feature.)#");
    py::class_<LocOpe_RevolutionForm , shared_ptr<LocOpe_RevolutionForm> >(m,"LocOpe_RevolutionForm",R"#(Defines a revolution form (using Revol from BRepSweep) with modifications provided for the RevolutionForm feature.)#");
    py::class_<LocOpe_SplitDrafts , shared_ptr<LocOpe_SplitDrafts> >(m,"LocOpe_SplitDrafts",R"#(This class provides a tool to realize the following operations on a shape : - split a face of the shape with a wire, - put draft angle on both side of the wire. For each side, the draft angle may be different.)#");
    py::class_<LocOpe_SplitShape , shared_ptr<LocOpe_SplitShape> >(m,"LocOpe_SplitShape",R"#(Provides a tool to cut : - edges with a vertices, - faces with wires, and rebuilds the shape containing the edges and the faces.)#");
    py::class_<LocOpe_Spliter , shared_ptr<LocOpe_Spliter> >(m,"LocOpe_Spliter",R"#(None)#");
    py::class_<LocOpe_WiresOnShape ,opencascade::handle<LocOpe_WiresOnShape> , Standard_Transient>(m,"LocOpe_WiresOnShape",R"#()#");
    py::class_<LocOpe_GluedShape ,opencascade::handle<LocOpe_GluedShape> , LocOpe_GeneratedShape>(m,"LocOpe_GluedShape",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
