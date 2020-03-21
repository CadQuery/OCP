
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <Geom_Curve.hxx>
#include <GeomFill_LocationGuide.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Bnd_Box.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepFill_Sweep.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Law_Function.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <Law_Function.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <BRepFill_Sweep.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Ax3.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <BRepFill_Generator.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <BRepFill_ShapeLaw.hxx>
#include <BRepFill_NSections.hxx>
#include <BRepFill_Draft.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_Edge3DLaw.hxx>
#include <BRepFill_EdgeOnSurfLaw.hxx>
#include <BRepFill_ACRLaw.hxx>
#include <BRepFill_Pipe.hxx>
#include <BRepFill_PipeShell.hxx>
#include <BRepFill_Evolved.hxx>
#include <BRepFill_Sweep.hxx>
#include <BRepFill_CompatibleWires.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <BRepFill_OffsetAncestors.hxx>
#include <BRepFill_ApproxSeewing.hxx>
#include <BRepFill_ComputeCLine.hxx>
#include <BRepFill_TrimSurfaceTool.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <BRepFill_SectionPlacement.hxx>
#include <BRepFill_Section.hxx>
#include <BRepFill_TrimShellCorner.hxx>
#include <BRepFill_CurveConstraint.hxx>
#include <BRepFill_Filling.hxx>
#include <BRepFill_FaceAndOrder.hxx>
#include <BRepFill_EdgeFaceAndOrder.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <gp_Ax3.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <BRepMAT2d_LinkTopoBilo.hxx>
#include <BRepTools_Quilt.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <BRepFill_Filling.hxx>
#include <BOPAlgo_MakerVolume.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepFill_Filling.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepFill.hxx>
#include <BRepFill_ACRLaw.hxx>
#include <BRepFill_AdvancedEvolved.hxx>
#include <BRepFill_ApproxSeewing.hxx>
#include <BRepFill_CompatibleWires.hxx>
#include <BRepFill_ComputeCLine.hxx>
#include <BRepFill_CurveConstraint.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfNodeShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt.hxx>
#include <BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal.hxx>
#include <BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx>
#include <BRepFill_DataMapOfNodeShape.hxx>
#include <BRepFill_DataMapOfOrientedShapeListOfShape.hxx>
#include <BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx>
#include <BRepFill_DataMapOfShapeHArray2OfShape.hxx>
#include <BRepFill_DataMapOfShapeSequenceOfPnt.hxx>
#include <BRepFill_DataMapOfShapeSequenceOfReal.hxx>
#include <BRepFill_Draft.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_Edge3DLaw.hxx>
#include <BRepFill_EdgeFaceAndOrder.hxx>
#include <BRepFill_EdgeOnSurfLaw.hxx>
#include <BRepFill_Evolved.hxx>
#include <BRepFill_FaceAndOrder.hxx>
#include <BRepFill_Filling.hxx>
#include <BRepFill_Generator.hxx>
#include <BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx>
#include <BRepFill_ListIteratorOfListOfOffsetWire.hxx>
#include <BRepFill_ListOfOffsetWire.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_MultiLine.hxx>
#include <BRepFill_NSections.hxx>
#include <BRepFill_OffsetAncestors.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <BRepFill_Pipe.hxx>
#include <BRepFill_PipeShell.hxx>
#include <BRepFill_Section.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <BRepFill_SectionPlacement.hxx>
#include <BRepFill_SequenceOfEdgeFaceAndOrder.hxx>
#include <BRepFill_SequenceOfFaceAndOrder.hxx>
#include <BRepFill_SequenceOfSection.hxx>
#include <BRepFill_ShapeLaw.hxx>
#include <BRepFill_Sweep.hxx>
#include <BRepFill_TransitionStyle.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <BRepFill_TrimShellCorner.hxx>
#include <BRepFill_TrimSurfaceTool.hxx>
#include <BRepFill_TypeOfContact.hxx>

// template related includes
// ./opencascade/BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_ListOfOffsetWire.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_ListOfOffsetWire.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfNodeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfNodeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_SequenceOfEdgeFaceAndOrder.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfShapeHArray2OfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_SequenceOfFaceAndOrder.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfOrientedShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfOrientedShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/BRepFill_SequenceOfSection.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepFill_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepFill", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepFill_TypeOfContact>(m, "BRepFill_TypeOfContact",R"#(A pair of bound shapes with the result.)#")
        .value("BRepFill_NoContact",BRepFill_TypeOfContact::BRepFill_NoContact)
        .value("BRepFill_Contact",BRepFill_TypeOfContact::BRepFill_Contact)
        .value("BRepFill_ContactOnBorder",BRepFill_TypeOfContact::BRepFill_ContactOnBorder).export_values();
    py::enum_<BRepFill_TransitionStyle>(m, "BRepFill_TransitionStyle",R"#(None)#")
        .value("BRepFill_Modified",BRepFill_TransitionStyle::BRepFill_Modified)
        .value("BRepFill_Right",BRepFill_TransitionStyle::BRepFill_Right)
        .value("BRepFill_Round",BRepFill_TransitionStyle::BRepFill_Round).export_values();

//Python trampoline classes
    class Py_BRepFill_SectionLaw : public BRepFill_SectionLaw{
    public:
        using BRepFill_SectionLaw::BRepFill_SectionLaw;


        // public pure virtual
        Standard_Boolean IsConstant() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepFill_SectionLaw,IsConstant,) };
        Standard_Boolean IsVertex() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,BRepFill_SectionLaw,IsVertex,) };
        opencascade::handle<GeomFill_SectionLaw> ConcatenedLaw() const  override { PYBIND11_OVERLOAD_PURE(opencascade::handle<GeomFill_SectionLaw>,BRepFill_SectionLaw,ConcatenedLaw,) };
        GeomAbs_Shape Continuity(const Standard_Integer Index,const Standard_Real TolAngular) const  override { PYBIND11_OVERLOAD_PURE(GeomAbs_Shape,BRepFill_SectionLaw,Continuity,Index,TolAngular) };
        Standard_Real VertexTol(const Standard_Integer Index,const Standard_Real Param) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,BRepFill_SectionLaw,VertexTol,Index,Param) };
        TopoDS_Vertex Vertex(const Standard_Integer Index,const Standard_Real Param) const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Vertex,BRepFill_SectionLaw,Vertex,Index,Param) };
        void D0(const Standard_Real U,TopoDS_Shape & S) override { PYBIND11_OVERLOAD_PURE(void,BRepFill_SectionLaw,D0,U,S) };


        // protected pure virtual


        // private pure virtual

    };

// pre-register typdefs
    preregister_template_NCollection_DataMap<opencascade::handle<MAT_Node>, TopTools_DataMapOfShapeShape, TColStd_MapTransientHasher>(m,"BRepFill_DataMapOfNodeDataMapOfShapeShape");
    preregister_template_NCollection_List<BRepFill_OffsetWire>(m,"BRepFill_ListOfOffsetWire");
    preregister_template_NCollection_DataMap<opencascade::handle<MAT_Node>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"BRepFill_DataMapOfNodeShape");
    preregister_template_NCollection_Sequence<BRepFill_EdgeFaceAndOrder>(m,"BRepFill_SequenceOfEdgeFaceAndOrder");
    preregister_template_NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_OrientedShapeMapHasher>(m,"BRepFill_IndexedDataMapOfOrientedShapeListOfShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TColgp_SequenceOfPnt, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeSequenceOfPnt");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopTools_DataMapOfShapeListOfShape, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeDataMapOfShapeListOfShape");
    preregister_template_NCollection_Sequence<BRepFill_FaceAndOrder>(m,"BRepFill_SequenceOfFaceAndOrder");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_OrientedShapeMapHasher>(m,"BRepFill_DataMapOfOrientedShapeListOfShape");
    preregister_template_NCollection_DataMap<TopoDS_Shape, TColStd_SequenceOfReal, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeSequenceOfReal");
    preregister_template_NCollection_Sequence<BRepFill_Section>(m,"BRepFill_SequenceOfSection");

// classes forward declarations only
    py::class_<BRepFill , shared_ptr<BRepFill> >(m,"BRepFill",R"#(None)#");
    py::class_<BRepFill_AdvancedEvolved , shared_ptr<BRepFill_AdvancedEvolved> >(m,"BRepFill_AdvancedEvolved",R"#(Constructs an evolved volume from a spine (wire or face) and a profile ( wire).)#");
    py::class_<BRepFill_ApproxSeewing , shared_ptr<BRepFill_ApproxSeewing> >(m,"BRepFill_ApproxSeewing",R"#(Evaluate the 3dCurve and the PCurves described in a MultiLine from BRepFill. The parametrization of those curves is not imposed by the Bissectrice. The parametrization is given approximatively by the abscissa of the curve3d.)#");
    py::class_<BRepFill_CompatibleWires , shared_ptr<BRepFill_CompatibleWires> >(m,"BRepFill_CompatibleWires",R"#(Constructs a sequence of Wires (with good orientation and origin) agreed each other so that the surface passing through these sections is not twisted)#");
    py::class_<BRepFill_ComputeCLine , shared_ptr<BRepFill_ComputeCLine> >(m,"BRepFill_ComputeCLine",R"#(None)#");
    py::class_<BRepFill_CurveConstraint ,opencascade::handle<BRepFill_CurveConstraint> , GeomPlate_CurveConstraint>(m,"BRepFill_CurveConstraint",R"#(same as CurveConstraint from GeomPlate with BRepAdaptor_Surface instead of GeomAdaptor_Surfacesame as CurveConstraint from GeomPlate with BRepAdaptor_Surface instead of GeomAdaptor_Surfacesame as CurveConstraint from GeomPlate with BRepAdaptor_Surface instead of GeomAdaptor_Surface)#");
    py::class_<BRepFill_Draft , shared_ptr<BRepFill_Draft> >(m,"BRepFill_Draft",R"#(None)#");
    py::class_<BRepFill_EdgeFaceAndOrder , shared_ptr<BRepFill_EdgeFaceAndOrder> >(m,"BRepFill_EdgeFaceAndOrder",R"#(None)#");
    py::class_<BRepFill_Evolved , shared_ptr<BRepFill_Evolved> >(m,"BRepFill_Evolved",R"#(Constructs an evolved volume from a spine (wire or face) and a profile ( wire).)#");
    py::class_<BRepFill_FaceAndOrder , shared_ptr<BRepFill_FaceAndOrder> >(m,"BRepFill_FaceAndOrder",R"#(A structure containing Face and Order of constraint)#");
    py::class_<BRepFill_Filling , shared_ptr<BRepFill_Filling> >(m,"BRepFill_Filling",R"#(N-Side Filling This algorithm avoids to build a face from: * a set of edges defining the bounds of the face and some constraints the surface support has to satisfy * a set of edges and points defining some constraints the support surface has to satisfy * an initial surface to deform for satisfying the constraints * a set of parameters to control the constraints.)#");
    py::class_<BRepFill_Generator , shared_ptr<BRepFill_Generator> >(m,"BRepFill_Generator",R"#(Compute a topological surface ( a shell) using generating wires. The face of the shell will be ruled surfaces passing by the wires. The wires must have the same number of edges.)#");
    py::class_<BRepFill_LocationLaw ,opencascade::handle<BRepFill_LocationLaw> , Standard_Transient>(m,"BRepFill_LocationLaw",R"#(Location Law on a Wire.Location Law on a Wire.Location Law on a Wire.)#");
    py::class_<BRepFill_MultiLine , shared_ptr<BRepFill_MultiLine> , AppCont_Function>(m,"BRepFill_MultiLine",R"#(Class used to compute the 3d curve and the two 2d curves resulting from the intersection of a surface of linear extrusion( Bissec, Dz) and the 2 faces. This 3 curves will have the same parametrization as the Bissectrice. This class is to be send to an approximation routine.)#");
    py::class_<BRepFill_OffsetAncestors , shared_ptr<BRepFill_OffsetAncestors> >(m,"BRepFill_OffsetAncestors",R"#(this class is used to find the generating shapes of an OffsetWire.)#");
    py::class_<BRepFill_OffsetWire , shared_ptr<BRepFill_OffsetWire> >(m,"BRepFill_OffsetWire",R"#(Constructs a Offset Wire to a spine (wire or face). Offset direction will be to outer region in case of positive offset value and to inner region in case of negative offset value. Inner/Outer region for open wire is defined by the following rule: when we go along the wire (taking into account of edges orientation) then outer region will be on the right side, inner region will be on the left side. In case of closed wire, inner region will always be inside the wire (at that, edges orientation is not taken into account). The Wire or the Face must be planar and oriented correctly.)#");
    py::class_<BRepFill_Pipe , shared_ptr<BRepFill_Pipe> >(m,"BRepFill_Pipe",R"#(Create a shape by sweeping a shape (the profile) along a wire (the spine).)#");
    py::class_<BRepFill_PipeShell ,opencascade::handle<BRepFill_PipeShell> , Standard_Transient>(m,"BRepFill_PipeShell",R"#(Computes a topological shell using some wires (spines and profiles) and diplacement option Perform general sweeping constructionComputes a topological shell using some wires (spines and profiles) and diplacement option Perform general sweeping constructionComputes a topological shell using some wires (spines and profiles) and diplacement option Perform general sweeping construction)#");
    py::class_<BRepFill_Section , shared_ptr<BRepFill_Section> >(m,"BRepFill_Section",R"#(To store section definition)#");
    py::class_<BRepFill_SectionLaw ,opencascade::handle<BRepFill_SectionLaw>,Py_BRepFill_SectionLaw , Standard_Transient>(m,"BRepFill_SectionLaw",R"#(Build Section Law, with an Vertex, or an WireBuild Section Law, with an Vertex, or an WireBuild Section Law, with an Vertex, or an Wire)#");
    py::class_<BRepFill_SectionPlacement , shared_ptr<BRepFill_SectionPlacement> >(m,"BRepFill_SectionPlacement",R"#(Place a shape in a local axis coordinate)#");
    py::class_<BRepFill_Sweep , shared_ptr<BRepFill_Sweep> >(m,"BRepFill_Sweep",R"#(Topological Sweep Algorithm Computes an Sweep shell using a generating wire, an SectionLaw and an LocationLaw.)#");
    py::class_<BRepFill_TrimEdgeTool , shared_ptr<BRepFill_TrimEdgeTool> >(m,"BRepFill_TrimEdgeTool",R"#(Geometric Tool using to construct Offset Wires.)#");
    py::class_<BRepFill_TrimShellCorner , shared_ptr<BRepFill_TrimShellCorner> >(m,"BRepFill_TrimShellCorner",R"#(Trims sets of faces in the corner to make proper parts of pipe)#");
    py::class_<BRepFill_TrimSurfaceTool , shared_ptr<BRepFill_TrimSurfaceTool> >(m,"BRepFill_TrimSurfaceTool",R"#(Compute the Pcurves and the 3d curves resulting of the trimming of a face by an extruded surface.)#");
    py::class_<BRepFill_ACRLaw ,opencascade::handle<BRepFill_ACRLaw> , BRepFill_LocationLaw>(m,"BRepFill_ACRLaw",R"#(Build Location Law, with a Wire. In the case of guided contour and trihedron by reduced curvilinear abscissaBuild Location Law, with a Wire. In the case of guided contour and trihedron by reduced curvilinear abscissaBuild Location Law, with a Wire. In the case of guided contour and trihedron by reduced curvilinear abscissa)#");
    py::class_<BRepFill_Edge3DLaw ,opencascade::handle<BRepFill_Edge3DLaw> , BRepFill_LocationLaw>(m,"BRepFill_Edge3DLaw",R"#(Build Location Law, with a Wire.Build Location Law, with a Wire.Build Location Law, with a Wire.)#");
    py::class_<BRepFill_EdgeOnSurfLaw ,opencascade::handle<BRepFill_EdgeOnSurfLaw> , BRepFill_LocationLaw>(m,"BRepFill_EdgeOnSurfLaw",R"#(Build Location Law, with a Wire and a Surface.Build Location Law, with a Wire and a Surface.Build Location Law, with a Wire and a Surface.)#");
    py::class_<BRepFill_NSections ,opencascade::handle<BRepFill_NSections> , BRepFill_SectionLaw>(m,"BRepFill_NSections",R"#(Build Section Law, with N SectionsBuild Section Law, with N SectionsBuild Section Law, with N Sections)#");
    py::class_<BRepFill_ShapeLaw ,opencascade::handle<BRepFill_ShapeLaw> , BRepFill_SectionLaw>(m,"BRepFill_ShapeLaw",R"#(Build Section Law, with an Vertex, or an WireBuild Section Law, with an Vertex, or an WireBuild Section Law, with an Vertex, or an Wire)#");
    py::class_<BRepFill_DraftLaw ,opencascade::handle<BRepFill_DraftLaw> , BRepFill_Edge3DLaw>(m,"BRepFill_DraftLaw",R"#(Build Location Law, with a Wire.Build Location Law, with a Wire.Build Location Law, with a Wire.)#");

};

// user-defined post-inclusion per module

// user-defined post
