
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
#include <gp_Ax3.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <BRepMAT2d_LinkTopoBilo.hxx>
#include <BRepTools_Quilt.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
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
#include <Geom_Curve.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <BOPAlgo_MakerVolume.hxx>
#include <TopoDS_Face.hxx>
#include <Adaptor3d_HCurveOnSurface.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <TopoDS_Wire.hxx>
#include <Law_Function.hxx>
#include <TopoDS_Wire.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepFill_Filling.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Law_Function.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Ax2.hxx>
#include <BRepFill_Sweep.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <BRepFill_Filling.hxx>
#include <GeomFill_LocationGuide.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <BRepFill_Sweep.hxx>

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
// ./opencascade\BRepFill_DataMapOfShapeHArray2OfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfShapeSequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfShapeSequenceOfReal.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_SequenceOfEdgeFaceAndOrder.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfOrientedShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfOrientedShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_SequenceOfSection.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfShapeSequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfShapeSequenceOfPnt.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_ListOfOffsetWire.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_ListOfOffsetWire.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_SequenceOfFaceAndOrder.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfNodeShape.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\BRepFill_DataMapOfNodeShape.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepFill(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepFill"));


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

// classes

    // default constructor
    register_default_constructor<BRepFill , shared_ptr<BRepFill>>(m,"BRepFill");

    static_cast<py::class_<BRepFill , shared_ptr<BRepFill> >>(m.attr("BRepFill"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Face_s",
                    (TopoDS_Face (*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<TopoDS_Face (*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&BRepFill::Face),
                    R"#(Computes a ruled surface between two edges.)#"  , py::arg("Edge1"),  py::arg("Edge2"))
        .def_static("Shell_s",
                    (TopoDS_Shell (*)( const TopoDS_Wire & , const TopoDS_Wire & ) ) static_cast<TopoDS_Shell (*)( const TopoDS_Wire & , const TopoDS_Wire & ) >(&BRepFill::Shell),
                    R"#(Computes a ruled surface between two wires. The wires must have the same number of edges.)#"  , py::arg("Wire1"),  py::arg("Wire2"))
        .def_static("ComputeACR_s",
                    (void (*)( const TopoDS_Wire & , NCollection_Array1<Standard_Real> & ) ) static_cast<void (*)( const TopoDS_Wire & , NCollection_Array1<Standard_Real> & ) >(&BRepFill::ComputeACR),
                    R"#(Compute ACR on a wire)#"  , py::arg("wire"),  py::arg("ACR"))
        .def_static("InsertACR_s",
                    (TopoDS_Wire (*)( const TopoDS_Wire & ,  const NCollection_Array1<Standard_Real> & , const Standard_Real ) ) static_cast<TopoDS_Wire (*)( const TopoDS_Wire & ,  const NCollection_Array1<Standard_Real> & , const Standard_Real ) >(&BRepFill::InsertACR),
                    R"#(Insert ACR on a wire)#"  , py::arg("wire"),  py::arg("ACRcuts"),  py::arg("prec"))
    // static methods using call by reference i.s.o. return
        .def_static("Axe_s",
                    []( const TopoDS_Shape & Spine,const TopoDS_Wire & Profile,gp_Ax3 & AxeProf,const Standard_Real Tol ){ Standard_Boolean  ProfOnSpine; BRepFill::Axe(Spine,Profile,AxeProf,ProfOnSpine,Tol); return std::make_tuple(ProfOnSpine); },
                    R"#(Computes <AxeProf> as Follow. <Location> is the Position of the nearest vertex V of <Profile> to <Spine>.<XDirection> is confused with the tangent to <Spine> at the projected point of V on the Spine. <Direction> is normal to <Spine>. <Spine> is a plane wire or a plane face.)#"  , py::arg("Spine"),  py::arg("Profile"),  py::arg("AxeProf"),  py::arg("Tol"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_AdvancedEvolved , shared_ptr<BRepFill_AdvancedEvolved> >>(m.attr("BRepFill_AdvancedEvolved"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepFill_AdvancedEvolved::*)( const TopoDS_Wire & , const TopoDS_Wire & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (BRepFill_AdvancedEvolved::*)( const TopoDS_Wire & , const TopoDS_Wire & , const Standard_Real , const Standard_Boolean ) >(&BRepFill_AdvancedEvolved::Perform),
             R"#(None)#"  , py::arg("theSpine"),  py::arg("theProfile"),  py::arg("theTolerance"),  py::arg("theSolidReq")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsDone",
             (Standard_Boolean (BRepFill_AdvancedEvolved::*)( unsigned int * ) const) static_cast<Standard_Boolean (BRepFill_AdvancedEvolved::*)( unsigned int * ) const>(&BRepFill_AdvancedEvolved::IsDone),
             R"#(None)#"  , py::arg("theErrorCode")=static_cast<unsigned int *>(0))
        .def("Shape",
             (const TopoDS_Shape & (BRepFill_AdvancedEvolved::*)() const) static_cast<const TopoDS_Shape & (BRepFill_AdvancedEvolved::*)() const>(&BRepFill_AdvancedEvolved::Shape),
             R"#(returns the resulting shape.)#" )
        .def("SetParallelMode",
             (void (BRepFill_AdvancedEvolved::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_AdvancedEvolved::*)( const Standard_Boolean ) >(&BRepFill_AdvancedEvolved::SetParallelMode),
             R"#(Sets/Unsets computation in parallel mode)#"  , py::arg("theVal"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_ApproxSeewing , shared_ptr<BRepFill_ApproxSeewing> >>(m.attr("BRepFill_ApproxSeewing"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const BRepFill_MultiLine & >()  , py::arg("ML") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepFill_ApproxSeewing::*)( const BRepFill_MultiLine & ) ) static_cast<void (BRepFill_ApproxSeewing::*)( const BRepFill_MultiLine & ) >(&BRepFill_ApproxSeewing::Perform),
             R"#(None)#"  , py::arg("ML"))
        .def("IsDone",
             (Standard_Boolean (BRepFill_ApproxSeewing::*)() const) static_cast<Standard_Boolean (BRepFill_ApproxSeewing::*)() const>(&BRepFill_ApproxSeewing::IsDone),
             R"#(None)#" )
        .def("Curve",
             (const opencascade::handle<Geom_Curve> & (BRepFill_ApproxSeewing::*)() const) static_cast<const opencascade::handle<Geom_Curve> & (BRepFill_ApproxSeewing::*)() const>(&BRepFill_ApproxSeewing::Curve),
             R"#(returns the approximation of the 3d Curve)#" )
        .def("CurveOnF1",
             (const opencascade::handle<Geom2d_Curve> & (BRepFill_ApproxSeewing::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRepFill_ApproxSeewing::*)() const>(&BRepFill_ApproxSeewing::CurveOnF1),
             R"#(returns the approximation of the PCurve on the first face of the MultiLine)#" )
        .def("CurveOnF2",
             (const opencascade::handle<Geom2d_Curve> & (BRepFill_ApproxSeewing::*)() const) static_cast<const opencascade::handle<Geom2d_Curve> & (BRepFill_ApproxSeewing::*)() const>(&BRepFill_ApproxSeewing::CurveOnF2),
             R"#(returns the approximation of the PCurve on the first face of the MultiLine)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_CompatibleWires , shared_ptr<BRepFill_CompatibleWires> >>(m.attr("BRepFill_CompatibleWires"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init<  const NCollection_Sequence<TopoDS_Shape> & >()  , py::arg("Sections") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepFill_CompatibleWires::*)(  const NCollection_Sequence<TopoDS_Shape> & ) ) static_cast<void (BRepFill_CompatibleWires::*)(  const NCollection_Sequence<TopoDS_Shape> & ) >(&BRepFill_CompatibleWires::Init),
             R"#(None)#"  , py::arg("Sections"))
        .def("SetPercent",
             (void (BRepFill_CompatibleWires::*)( const Standard_Real ) ) static_cast<void (BRepFill_CompatibleWires::*)( const Standard_Real ) >(&BRepFill_CompatibleWires::SetPercent),
             R"#(None)#"  , py::arg("percent")=static_cast<const Standard_Real>(0.01))
        .def("Perform",
             (void (BRepFill_CompatibleWires::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_CompatibleWires::*)( const Standard_Boolean ) >(&BRepFill_CompatibleWires::Perform),
             R"#(Performs CompatibleWires According to the orientation and the origin of each other)#"  , py::arg("WithRotation")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsDone",
             (Standard_Boolean (BRepFill_CompatibleWires::*)() const) static_cast<Standard_Boolean (BRepFill_CompatibleWires::*)() const>(&BRepFill_CompatibleWires::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopTools_SequenceOfShape & (BRepFill_CompatibleWires::*)() const) static_cast<const TopTools_SequenceOfShape & (BRepFill_CompatibleWires::*)() const>(&BRepFill_CompatibleWires::Shape),
             R"#(returns the generated sequence.)#" )
        .def("GeneratedShapes",
             (const TopTools_ListOfShape & (BRepFill_CompatibleWires::*)( const TopoDS_Edge & ) const) static_cast<const TopTools_ListOfShape & (BRepFill_CompatibleWires::*)( const TopoDS_Edge & ) const>(&BRepFill_CompatibleWires::GeneratedShapes),
             R"#(Returns the shapes created from a subshape <SubSection> of a section.)#"  , py::arg("SubSection"))
        .def("Generated",
             (const TopTools_DataMapOfShapeListOfShape & (BRepFill_CompatibleWires::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BRepFill_CompatibleWires::*)() const>(&BRepFill_CompatibleWires::Generated),
             R"#(None)#" )
        .def("IsDegeneratedFirstSection",
             (Standard_Boolean (BRepFill_CompatibleWires::*)() const) static_cast<Standard_Boolean (BRepFill_CompatibleWires::*)() const>(&BRepFill_CompatibleWires::IsDegeneratedFirstSection),
             R"#(None)#" )
        .def("IsDegeneratedLastSection",
             (Standard_Boolean (BRepFill_CompatibleWires::*)() const) static_cast<Standard_Boolean (BRepFill_CompatibleWires::*)() const>(&BRepFill_CompatibleWires::IsDegeneratedLastSection),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_ComputeCLine , shared_ptr<BRepFill_ComputeCLine> >>(m.attr("BRepFill_ComputeCLine"))
    // constructors
        .def(py::init< const BRepFill_MultiLine &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Boolean,const AppParCurves_Constraint,const AppParCurves_Constraint >()  , py::arg("Line"),  py::arg("degreemin")=static_cast<const Standard_Integer>(3),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-5),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-5),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("FirstC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint),  py::arg("LastC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint) )
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Boolean,const AppParCurves_Constraint,const AppParCurves_Constraint >()  , py::arg("degreemin")=static_cast<const Standard_Integer>(3),  py::arg("degreemax")=static_cast<const Standard_Integer>(8),  py::arg("Tolerance3d")=static_cast<const Standard_Real>(1.0e-05),  py::arg("Tolerance2d")=static_cast<const Standard_Real>(1.0e-05),  py::arg("cutting")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("FirstC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint),  py::arg("LastC")=static_cast<const AppParCurves_Constraint>(AppParCurves_TangencyPoint) )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepFill_ComputeCLine::*)( const BRepFill_MultiLine & ) ) static_cast<void (BRepFill_ComputeCLine::*)( const BRepFill_MultiLine & ) >(&BRepFill_ComputeCLine::Perform),
             R"#(runs the algorithm after having initialized the fields.)#"  , py::arg("Line"))
        .def("SetDegrees",
             (void (BRepFill_ComputeCLine::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepFill_ComputeCLine::*)( const Standard_Integer , const Standard_Integer ) >(&BRepFill_ComputeCLine::SetDegrees),
             R"#(changes the degrees of the approximation.)#"  , py::arg("degreemin"),  py::arg("degreemax"))
        .def("SetTolerances",
             (void (BRepFill_ComputeCLine::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_ComputeCLine::*)( const Standard_Real , const Standard_Real ) >(&BRepFill_ComputeCLine::SetTolerances),
             R"#(Changes the tolerances of the approximation.)#"  , py::arg("Tolerance3d"),  py::arg("Tolerance2d"))
        .def("SetConstraints",
             (void (BRepFill_ComputeCLine::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) ) static_cast<void (BRepFill_ComputeCLine::*)( const AppParCurves_Constraint , const AppParCurves_Constraint ) >(&BRepFill_ComputeCLine::SetConstraints),
             R"#(Changes the constraints of the approximation.)#"  , py::arg("FirstC"),  py::arg("LastC"))
        .def("SetMaxSegments",
             (void (BRepFill_ComputeCLine::*)( const Standard_Integer ) ) static_cast<void (BRepFill_ComputeCLine::*)( const Standard_Integer ) >(&BRepFill_ComputeCLine::SetMaxSegments),
             R"#(Changes the max number of segments, which is allowed for cutting.)#"  , py::arg("theMaxSegments"))
        .def("SetInvOrder",
             (void (BRepFill_ComputeCLine::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_ComputeCLine::*)( const Standard_Boolean ) >(&BRepFill_ComputeCLine::SetInvOrder),
             R"#(Set inverse order of degree selection: if theInvOrdr = true, current degree is chosen by inverse order - from maxdegree to mindegree. By default inverse order is used.)#"  , py::arg("theInvOrder"))
        .def("IsAllApproximated",
             (Standard_Boolean (BRepFill_ComputeCLine::*)() const) static_cast<Standard_Boolean (BRepFill_ComputeCLine::*)() const>(&BRepFill_ComputeCLine::IsAllApproximated),
             R"#(returns False if at a moment of the approximation, the status NoApproximation has been sent by the user when more points were needed.)#" )
        .def("IsToleranceReached",
             (Standard_Boolean (BRepFill_ComputeCLine::*)() const) static_cast<Standard_Boolean (BRepFill_ComputeCLine::*)() const>(&BRepFill_ComputeCLine::IsToleranceReached),
             R"#(returns False if the status NoPointsAdded has been sent.)#" )
        .def("NbMultiCurves",
             (Standard_Integer (BRepFill_ComputeCLine::*)() const) static_cast<Standard_Integer (BRepFill_ComputeCLine::*)() const>(&BRepFill_ComputeCLine::NbMultiCurves),
             R"#(Returns the number of MultiCurve doing the approximation of the MultiLine.)#" )
        .def("Value",
             (AppParCurves_MultiCurve (BRepFill_ComputeCLine::*)( const Standard_Integer ) const) static_cast<AppParCurves_MultiCurve (BRepFill_ComputeCLine::*)( const Standard_Integer ) const>(&BRepFill_ComputeCLine::Value),
             R"#(returns the approximation MultiCurve of range <Index>.)#"  , py::arg("Index")=static_cast<const Standard_Integer>(1))
    // methods using call by reference i.s.o. return
        .def("Error",
             []( BRepFill_ComputeCLine &self , const Standard_Integer Index ){ Standard_Real  tol3d; Standard_Real  tol2d; self.Error(Index,tol3d,tol2d); return std::make_tuple(tol3d,tol2d); },
             R"#(returns the tolerances 2d and 3d of the <Index> MultiCurve.)#"  , py::arg("Index"))
        .def("Parameters",
             []( BRepFill_ComputeCLine &self , const Standard_Integer Index ){ Standard_Real  firstp; Standard_Real  lastp; self.Parameters(Index,firstp,lastp); return std::make_tuple(firstp,lastp); },
             R"#(None)#"  , py::arg("Index"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_CurveConstraint ,opencascade::handle<BRepFill_CurveConstraint> , GeomPlate_CurveConstraint>>(m.attr("BRepFill_CurveConstraint"))
    // constructors
        .def(py::init< const opencascade::handle<Adaptor3d_HCurveOnSurface> &,const Standard_Integer,const Standard_Integer,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Boundary"),  py::arg("Order"),  py::arg("NPt")=static_cast<const Standard_Integer>(10),  py::arg("TolDist")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1) )
        .def(py::init< const opencascade::handle<Adaptor3d_HCurve> &,const Standard_Integer,const Standard_Integer,const Standard_Real >()  , py::arg("Boundary"),  py::arg("Tang"),  py::arg("NPt")=static_cast<const Standard_Integer>(10),  py::arg("TolDist")=static_cast<const Standard_Real>(0.0001) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_CurveConstraint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_CurveConstraint::*)() const>(&BRepFill_CurveConstraint::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_CurveConstraint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_CurveConstraint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Draft , shared_ptr<BRepFill_Draft> >>(m.attr("BRepFill_Draft"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const gp_Dir &,const Standard_Real >()  , py::arg("Shape"),  py::arg("Dir"),  py::arg("Angle") )
    // custom constructors
    // methods
        .def("SetOptions",
             (void (BRepFill_Draft::*)( const BRepFill_TransitionStyle , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_Draft::*)( const BRepFill_TransitionStyle , const Standard_Real , const Standard_Real ) >(&BRepFill_Draft::SetOptions),
             R"#(None)#"  , py::arg("Style")=static_cast<const BRepFill_TransitionStyle>(BRepFill_Right),  py::arg("AngleMin")=static_cast<const Standard_Real>(0.01),  py::arg("AngleMax")=static_cast<const Standard_Real>(3.0))
        .def("SetDraft",
             (void (BRepFill_Draft::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_Draft::*)( const Standard_Boolean ) >(&BRepFill_Draft::SetDraft),
             R"#(None)#"  , py::arg("IsInternal")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (BRepFill_Draft::*)( const Standard_Real ) ) static_cast<void (BRepFill_Draft::*)( const Standard_Real ) >(&BRepFill_Draft::Perform),
             R"#(None)#"  , py::arg("LengthMax"))
        .def("Perform",
             (void (BRepFill_Draft::*)( const opencascade::handle<Geom_Surface> & , const Standard_Boolean ) ) static_cast<void (BRepFill_Draft::*)( const opencascade::handle<Geom_Surface> & , const Standard_Boolean ) >(&BRepFill_Draft::Perform),
             R"#(None)#"  , py::arg("Surface"),  py::arg("KeepInsideSurface")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Perform",
             (void (BRepFill_Draft::*)( const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (BRepFill_Draft::*)( const TopoDS_Shape & , const Standard_Boolean ) >(&BRepFill_Draft::Perform),
             R"#(None)#"  , py::arg("StopShape"),  py::arg("KeepOutSide")=static_cast<const Standard_Boolean>(Standard_True))
        .def("IsDone",
             (Standard_Boolean (BRepFill_Draft::*)() const) static_cast<Standard_Boolean (BRepFill_Draft::*)() const>(&BRepFill_Draft::IsDone),
             R"#(None)#" )
        .def("Shell",
             (TopoDS_Shell (BRepFill_Draft::*)() const) static_cast<TopoDS_Shell (BRepFill_Draft::*)() const>(&BRepFill_Draft::Shell),
             R"#(Returns the draft surface To have the complete shape you have to use the Shape() methode.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFill_Draft::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFill_Draft::*)( const TopoDS_Shape & ) >(&BRepFill_Draft::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("Shape",
             (TopoDS_Shape (BRepFill_Draft::*)() const) static_cast<TopoDS_Shape (BRepFill_Draft::*)() const>(&BRepFill_Draft::Shape),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_EdgeFaceAndOrder , shared_ptr<BRepFill_EdgeFaceAndOrder> >>(m.attr("BRepFill_EdgeFaceAndOrder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Face &,const GeomAbs_Shape >()  , py::arg("anEdge"),  py::arg("aFace"),  py::arg("anOrder") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Evolved , shared_ptr<BRepFill_Evolved> >>(m.attr("BRepFill_Evolved"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Wire &,const gp_Ax3 &,const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("Spine"),  py::arg("Profile"),  py::arg("AxeProf"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("Solid")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Face &,const TopoDS_Wire &,const gp_Ax3 &,const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("Spine"),  py::arg("Profile"),  py::arg("AxeProf"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("Solid")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepFill_Evolved::*)( const TopoDS_Wire & , const TopoDS_Wire & , const gp_Ax3 & , const GeomAbs_JoinType , const Standard_Boolean ) ) static_cast<void (BRepFill_Evolved::*)( const TopoDS_Wire & , const TopoDS_Wire & , const gp_Ax3 & , const GeomAbs_JoinType , const Standard_Boolean ) >(&BRepFill_Evolved::Perform),
             R"#(Performs an evolved shape by sweeping the <Profile> along the <Spine>)#"  , py::arg("Spine"),  py::arg("Profile"),  py::arg("AxeProf"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("Solid")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (BRepFill_Evolved::*)( const TopoDS_Face & , const TopoDS_Wire & , const gp_Ax3 & , const GeomAbs_JoinType , const Standard_Boolean ) ) static_cast<void (BRepFill_Evolved::*)( const TopoDS_Face & , const TopoDS_Wire & , const gp_Ax3 & , const GeomAbs_JoinType , const Standard_Boolean ) >(&BRepFill_Evolved::Perform),
             R"#(Performs an evolved shape by sweeping the <Profile> along the <Spine>)#"  , py::arg("Spine"),  py::arg("Profile"),  py::arg("AxeProf"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("Solid")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (BRepFill_Evolved::*)() const) static_cast<Standard_Boolean (BRepFill_Evolved::*)() const>(&BRepFill_Evolved::IsDone),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepFill_Evolved::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Evolved::*)() const>(&BRepFill_Evolved::Shape),
             R"#(returns the generated shape.)#" )
        .def("GeneratedShapes",
             (const TopTools_ListOfShape & (BRepFill_Evolved::*)( const TopoDS_Shape & , const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (BRepFill_Evolved::*)( const TopoDS_Shape & , const TopoDS_Shape & ) const>(&BRepFill_Evolved::GeneratedShapes),
             R"#(Returns the shapes created from a subshape <SpineShape> of the spine and a subshape <ProfShape> on the profile.)#"  , py::arg("SpineShape"),  py::arg("ProfShape"))
        .def("JoinType",
             (GeomAbs_JoinType (BRepFill_Evolved::*)() const) static_cast<GeomAbs_JoinType (BRepFill_Evolved::*)() const>(&BRepFill_Evolved::JoinType),
             R"#(None)#" )
        .def("Top",
             (const TopoDS_Shape & (BRepFill_Evolved::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Evolved::*)() const>(&BRepFill_Evolved::Top),
             R"#(Return the face Top if <Solid> is True in the constructor.)#" )
        .def("Bottom",
             (const TopoDS_Shape & (BRepFill_Evolved::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Evolved::*)() const>(&BRepFill_Evolved::Bottom),
             R"#(Return the face Bottom if <Solid> is True in the constructor.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_FaceAndOrder , shared_ptr<BRepFill_FaceAndOrder> >>(m.attr("BRepFill_FaceAndOrder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const GeomAbs_Shape >()  , py::arg("aFace"),  py::arg("anOrder") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Filling , shared_ptr<BRepFill_Filling> >>(m.attr("BRepFill_Filling"))
    // constructors
        .def(py::init< const Standard_Integer,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Integer >()  , py::arg("Degree")=static_cast<const Standard_Integer>(3),  py::arg("NbPtsOnCur")=static_cast<const Standard_Integer>(15),  py::arg("NbIter")=static_cast<const Standard_Integer>(2),  py::arg("Anisotropie")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("Tol2d")=static_cast<const Standard_Real>(0.00001),  py::arg("Tol3d")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1),  py::arg("MaxDeg")=static_cast<const Standard_Integer>(8),  py::arg("MaxSegments")=static_cast<const Standard_Integer>(9) )
    // custom constructors
    // methods
        .def("SetConstrParam",
             (void (BRepFill_Filling::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_Filling::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepFill_Filling::SetConstrParam),
             R"#(Sets the values of Tolerances used to control the constraint. Tol2d: Tol3d: it is the maximum distance allowed between the support surface and the constraints TolAng: it is the maximum angle allowed between the normal of the surface and the constraints TolCurv: it is the maximum difference of curvature allowed between the surface and the constraint)#"  , py::arg("Tol2d")=static_cast<const Standard_Real>(0.00001),  py::arg("Tol3d")=static_cast<const Standard_Real>(0.0001),  py::arg("TolAng")=static_cast<const Standard_Real>(0.01),  py::arg("TolCurv")=static_cast<const Standard_Real>(0.1))
        .def("SetResolParam",
             (void (BRepFill_Filling::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (BRepFill_Filling::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Boolean ) >(&BRepFill_Filling::SetResolParam),
             R"#(Sets the parameters used for resolution. The default values of these parameters have been chosen for a good ratio quality/performance. Degree: it is the order of energy criterion to minimize for computing the deformation of the surface. The default value is 3 The recommanded value is i+2 where i is the maximum order of the constraints. NbPtsOnCur: it is the average number of points for discretisation of the edges. NbIter: it is the maximum number of iterations of the process. For each iteration the number of discretisation points is increased. Anisotropie:)#"  , py::arg("Degree")=static_cast<const Standard_Integer>(3),  py::arg("NbPtsOnCur")=static_cast<const Standard_Integer>(15),  py::arg("NbIter")=static_cast<const Standard_Integer>(2),  py::arg("Anisotropie")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetApproxParam",
             (void (BRepFill_Filling::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepFill_Filling::*)( const Standard_Integer , const Standard_Integer ) >(&BRepFill_Filling::SetApproxParam),
             R"#(Sets the parameters used for approximation of the surface)#"  , py::arg("MaxDeg")=static_cast<const Standard_Integer>(8),  py::arg("MaxSegments")=static_cast<const Standard_Integer>(9))
        .def("LoadInitSurface",
             (void (BRepFill_Filling::*)( const TopoDS_Face & ) ) static_cast<void (BRepFill_Filling::*)( const TopoDS_Face & ) >(&BRepFill_Filling::LoadInitSurface),
             R"#(Loads the initial Surface The initial surface must have orthogonal local coordinates, i.e. partial derivatives dS/du and dS/dv must be orthogonal at each point of surface. If this condition breaks, distortions of resulting surface are possible.)#"  , py::arg("aFace"))
        .def("Add",
             (Standard_Integer (BRepFill_Filling::*)( const TopoDS_Edge & , const GeomAbs_Shape , const Standard_Boolean ) ) static_cast<Standard_Integer (BRepFill_Filling::*)( const TopoDS_Edge & , const GeomAbs_Shape , const Standard_Boolean ) >(&BRepFill_Filling::Add),
             R"#(Adds a new constraint which also defines an edge of the wire of the face Order: Order of the constraint: GeomAbs_C0 : the surface has to pass by 3D representation of the edge GeomAbs_G1 : the surface has to pass by 3D representation of the edge and to respect tangency with the first face of the edge GeomAbs_G2 : the surface has to pass by 3D representation of the edge and to respect tangency and curvature with the first face of the edge.)#"  , py::arg("anEdge"),  py::arg("Order"),  py::arg("IsBound")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Add",
             (Standard_Integer (BRepFill_Filling::*)( const TopoDS_Edge & , const TopoDS_Face & , const GeomAbs_Shape , const Standard_Boolean ) ) static_cast<Standard_Integer (BRepFill_Filling::*)( const TopoDS_Edge & , const TopoDS_Face & , const GeomAbs_Shape , const Standard_Boolean ) >(&BRepFill_Filling::Add),
             R"#(Adds a new constraint which also defines an edge of the wire of the face Order: Order of the constraint: GeomAbs_C0 : the surface has to pass by 3D representation of the edge GeomAbs_G1 : the surface has to pass by 3D representation of the edge and to respect tangency with the given face GeomAbs_G2 : the surface has to pass by 3D representation of the edge and to respect tangency and curvature with the given face.)#"  , py::arg("anEdge"),  py::arg("Support"),  py::arg("Order"),  py::arg("IsBound")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Add",
             (Standard_Integer (BRepFill_Filling::*)( const TopoDS_Face & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (BRepFill_Filling::*)( const TopoDS_Face & , const GeomAbs_Shape ) >(&BRepFill_Filling::Add),
             R"#(Adds a free constraint on a face. The corresponding edge has to be automatically recomputed. It is always a bound.)#"  , py::arg("Support"),  py::arg("Order"))
        .def("Add",
             (Standard_Integer (BRepFill_Filling::*)( const gp_Pnt & ) ) static_cast<Standard_Integer (BRepFill_Filling::*)( const gp_Pnt & ) >(&BRepFill_Filling::Add),
             R"#(Adds a punctual constraint)#"  , py::arg("Point"))
        .def("Add",
             (Standard_Integer (BRepFill_Filling::*)( const Standard_Real , const Standard_Real , const TopoDS_Face & , const GeomAbs_Shape ) ) static_cast<Standard_Integer (BRepFill_Filling::*)( const Standard_Real , const Standard_Real , const TopoDS_Face & , const GeomAbs_Shape ) >(&BRepFill_Filling::Add),
             R"#(Adds a punctual constraint.)#"  , py::arg("U"),  py::arg("V"),  py::arg("Support"),  py::arg("Order"))
        .def("Build",
             (void (BRepFill_Filling::*)() ) static_cast<void (BRepFill_Filling::*)() >(&BRepFill_Filling::Build),
             R"#(Builds the resulting faces)#" )
        .def("IsDone",
             (Standard_Boolean (BRepFill_Filling::*)() const) static_cast<Standard_Boolean (BRepFill_Filling::*)() const>(&BRepFill_Filling::IsDone),
             R"#(None)#" )
        .def("Face",
             (TopoDS_Face (BRepFill_Filling::*)() const) static_cast<TopoDS_Face (BRepFill_Filling::*)() const>(&BRepFill_Filling::Face),
             R"#(None)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepFill_Filling::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFill_Filling::*)( const TopoDS_Shape & ) >(&BRepFill_Filling::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("G0Error",
             (Standard_Real (BRepFill_Filling::*)() const) static_cast<Standard_Real (BRepFill_Filling::*)() const>(&BRepFill_Filling::G0Error),
             R"#(None)#" )
        .def("G1Error",
             (Standard_Real (BRepFill_Filling::*)() const) static_cast<Standard_Real (BRepFill_Filling::*)() const>(&BRepFill_Filling::G1Error),
             R"#(None)#" )
        .def("G2Error",
             (Standard_Real (BRepFill_Filling::*)() const) static_cast<Standard_Real (BRepFill_Filling::*)() const>(&BRepFill_Filling::G2Error),
             R"#(None)#" )
        .def("G0Error",
             (Standard_Real (BRepFill_Filling::*)( const Standard_Integer ) ) static_cast<Standard_Real (BRepFill_Filling::*)( const Standard_Integer ) >(&BRepFill_Filling::G0Error),
             R"#(None)#"  , py::arg("Index"))
        .def("G1Error",
             (Standard_Real (BRepFill_Filling::*)( const Standard_Integer ) ) static_cast<Standard_Real (BRepFill_Filling::*)( const Standard_Integer ) >(&BRepFill_Filling::G1Error),
             R"#(None)#"  , py::arg("Index"))
        .def("G2Error",
             (Standard_Real (BRepFill_Filling::*)( const Standard_Integer ) ) static_cast<Standard_Real (BRepFill_Filling::*)( const Standard_Integer ) >(&BRepFill_Filling::G2Error),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Generator , shared_ptr<BRepFill_Generator> >>(m.attr("BRepFill_Generator"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("AddWire",
             (void (BRepFill_Generator::*)( const TopoDS_Wire & ) ) static_cast<void (BRepFill_Generator::*)( const TopoDS_Wire & ) >(&BRepFill_Generator::AddWire),
             R"#(None)#"  , py::arg("Wire"))
        .def("Perform",
             (void (BRepFill_Generator::*)() ) static_cast<void (BRepFill_Generator::*)() >(&BRepFill_Generator::Perform),
             R"#(Compute the shell.)#" )
        .def("Shell",
             (const TopoDS_Shell & (BRepFill_Generator::*)() const) static_cast<const TopoDS_Shell & (BRepFill_Generator::*)() const>(&BRepFill_Generator::Shell),
             R"#(None)#" )
        .def("Generated",
             (const TopTools_DataMapOfShapeListOfShape & (BRepFill_Generator::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BRepFill_Generator::*)() const>(&BRepFill_Generator::Generated),
             R"#(Returns all the shapes created)#" )
        .def("GeneratedShapes",
             (const TopTools_ListOfShape & (BRepFill_Generator::*)( const TopoDS_Shape & ) const) static_cast<const TopTools_ListOfShape & (BRepFill_Generator::*)( const TopoDS_Shape & ) const>(&BRepFill_Generator::GeneratedShapes),
             R"#(Returns the shapes created from a subshape <SSection> of a section.)#"  , py::arg("SSection"))
        .def("Shell",
             (const TopoDS_Shell & (BRepFill_Generator::*)() const) static_cast<const TopoDS_Shell & (BRepFill_Generator::*)() const>(&BRepFill_Generator::Shell),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepFill_LocationLaw ,opencascade::handle<BRepFill_LocationLaw>>(m,"BRepFill_LocationLaw");

    static_cast<py::class_<BRepFill_LocationLaw ,opencascade::handle<BRepFill_LocationLaw> , Standard_Transient>>(m.attr("BRepFill_LocationLaw"))
    // constructors
    // custom constructors
    // methods
        .def("GetStatus",
             (GeomFill_PipeError (BRepFill_LocationLaw::*)() const) static_cast<GeomFill_PipeError (BRepFill_LocationLaw::*)() const>(&BRepFill_LocationLaw::GetStatus),
             R"#(Return a error status, if the status is not PipeOk then it exist a parameter tlike the law is not valuable for t.)#" )
        .def("TransformInG0Law",
             (void (BRepFill_LocationLaw::*)() ) static_cast<void (BRepFill_LocationLaw::*)() >(&BRepFill_LocationLaw::TransformInG0Law),
             R"#(Apply a linear transformation on each law, to have continuity of the global law beetween the edges.)#" )
        .def("TransformInCompatibleLaw",
             (void (BRepFill_LocationLaw::*)( const Standard_Real ) ) static_cast<void (BRepFill_LocationLaw::*)( const Standard_Real ) >(&BRepFill_LocationLaw::TransformInCompatibleLaw),
             R"#(Apply a linear transformation on each law, to reduce the dicontinuities of law at one rotation.)#"  , py::arg("AngularTolerance"))
        .def("DeleteTransform",
             (void (BRepFill_LocationLaw::*)() ) static_cast<void (BRepFill_LocationLaw::*)() >(&BRepFill_LocationLaw::DeleteTransform),
             R"#(None)#" )
        .def("NbHoles",
             (Standard_Integer (BRepFill_LocationLaw::*)( const Standard_Real ) ) static_cast<Standard_Integer (BRepFill_LocationLaw::*)( const Standard_Real ) >(&BRepFill_LocationLaw::NbHoles),
             R"#(None)#"  , py::arg("Tol")=static_cast<const Standard_Real>(1.0e-7))
        .def("Holes",
             (void (BRepFill_LocationLaw::*)( NCollection_Array1<Standard_Integer> & ) const) static_cast<void (BRepFill_LocationLaw::*)( NCollection_Array1<Standard_Integer> & ) const>(&BRepFill_LocationLaw::Holes),
             R"#(None)#"  , py::arg("Interval"))
        .def("NbLaw",
             (Standard_Integer (BRepFill_LocationLaw::*)() const) static_cast<Standard_Integer (BRepFill_LocationLaw::*)() const>(&BRepFill_LocationLaw::NbLaw),
             R"#(Return the number of elementary Law)#" )
        .def("Law",
             (const opencascade::handle<GeomFill_LocationLaw> & (BRepFill_LocationLaw::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<GeomFill_LocationLaw> & (BRepFill_LocationLaw::*)( const Standard_Integer ) const>(&BRepFill_LocationLaw::Law),
             R"#(Return the elementary Law of rank <Index> <Index> have to be in [1, NbLaw()])#"  , py::arg("Index"))
        .def("Wire",
             (const TopoDS_Wire & (BRepFill_LocationLaw::*)() const) static_cast<const TopoDS_Wire & (BRepFill_LocationLaw::*)() const>(&BRepFill_LocationLaw::Wire),
             R"#(return the path)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepFill_LocationLaw::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (BRepFill_LocationLaw::*)( const Standard_Integer ) const>(&BRepFill_LocationLaw::Edge),
             R"#(Return the Edge of rank <Index> in the path <Index> have to be in [1, NbLaw()])#"  , py::arg("Index"))
        .def("Vertex",
             (TopoDS_Vertex (BRepFill_LocationLaw::*)( const Standard_Integer ) const) static_cast<TopoDS_Vertex (BRepFill_LocationLaw::*)( const Standard_Integer ) const>(&BRepFill_LocationLaw::Vertex),
             R"#(Return the vertex of rank <Index> in the path <Index> have to be in [0, NbLaw()])#"  , py::arg("Index"))
        .def("PerformVertex",
             (void (BRepFill_LocationLaw::*)( const Standard_Integer , const TopoDS_Vertex & , const Standard_Real , TopoDS_Vertex & , const Standard_Integer ) const) static_cast<void (BRepFill_LocationLaw::*)( const Standard_Integer , const TopoDS_Vertex & , const Standard_Real , TopoDS_Vertex & , const Standard_Integer ) const>(&BRepFill_LocationLaw::PerformVertex),
             R"#(Compute <OutputVertex> like a transformation of <InputVertex> the transformation is given by evaluation of the location law in the vertex of rank <Index>. <Location> is used to manage discontinuities : - -1 : The law before the vertex is used. - 1 : The law after the vertex is used. - 0 : Average of the both laws is used.)#"  , py::arg("Index"),  py::arg("InputVertex"),  py::arg("TolMin"),  py::arg("OutputVertex"),  py::arg("Location")=static_cast<const Standard_Integer>(0))
        .def("IsClosed",
             (Standard_Boolean (BRepFill_LocationLaw::*)() const) static_cast<Standard_Boolean (BRepFill_LocationLaw::*)() const>(&BRepFill_LocationLaw::IsClosed),
             R"#(None)#" )
        .def("IsG1",
             (Standard_Integer (BRepFill_LocationLaw::*)( const Standard_Integer , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Integer (BRepFill_LocationLaw::*)( const Standard_Integer , const Standard_Real , const Standard_Real ) const>(&BRepFill_LocationLaw::IsG1),
             R"#(Compute the Law's continuity beetween 2 edges of the path The result can be : -1 : Case Not connex 0 : It is connex (G0) 1 : It is tangent (G1))#"  , py::arg("Index"),  py::arg("SpatialTolerance")=static_cast<const Standard_Real>(1.0e-7),  py::arg("AngularTolerance")=static_cast<const Standard_Real>(1.0e-4))
        .def("D0",
             (void (BRepFill_LocationLaw::*)( const Standard_Real , TopoDS_Shape & ) ) static_cast<void (BRepFill_LocationLaw::*)( const Standard_Real , TopoDS_Shape & ) >(&BRepFill_LocationLaw::D0),
             R"#(Apply the Law to a shape, for a given Curnilinear abscissa)#"  , py::arg("Abscissa"),  py::arg("Section"))
        .def("Abscissa",
             (Standard_Real (BRepFill_LocationLaw::*)( const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Real (BRepFill_LocationLaw::*)( const Standard_Integer , const Standard_Real ) >(&BRepFill_LocationLaw::Abscissa),
             R"#(Return the curvilinear abscissa corresponding to a point of the path, defined by <Index> of Edge and a parameter on the edge.)#"  , py::arg("Index"),  py::arg("Param"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_LocationLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_LocationLaw::*)() const>(&BRepFill_LocationLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("CurvilinearBounds",
             []( BRepFill_LocationLaw &self , const Standard_Integer Index ){ Standard_Real  First; Standard_Real  Last; self.CurvilinearBounds(Index,First,Last); return std::make_tuple(First,Last); },
             R"#(Return the Curvilinear Bounds of the <Index> Law)#"  , py::arg("Index"))
        .def("Parameter",
             []( BRepFill_LocationLaw &self , const Standard_Real Abscissa ){ Standard_Integer  Index; Standard_Real  Param; self.Parameter(Abscissa,Index,Param); return std::make_tuple(Index,Param); },
             R"#(Find the index Law and the parmaeter, for a given Curnilinear abscissa)#"  , py::arg("Abscissa"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_LocationLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_LocationLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_MultiLine , shared_ptr<BRepFill_MultiLine> , AppCont_Function>>(m.attr("BRepFill_MultiLine"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const TopoDS_Face &,const TopoDS_Edge &,const TopoDS_Edge &,const Standard_Boolean,const Standard_Boolean,const opencascade::handle<Geom2d_Curve> & >()  , py::arg("Face1"),  py::arg("Face2"),  py::arg("Edge1"),  py::arg("Edge2"),  py::arg("Inv1"),  py::arg("Inv2"),  py::arg("Bissec") )
    // custom constructors
    // methods
        .def("IsParticularCase",
             (Standard_Boolean (BRepFill_MultiLine::*)() const) static_cast<Standard_Boolean (BRepFill_MultiLine::*)() const>(&BRepFill_MultiLine::IsParticularCase),
             R"#(Search if the Projection of the Bissectrice on the faces needs an approximation or not. Returns true if the approximation is not needed.)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepFill_MultiLine::*)() const) static_cast<GeomAbs_Shape (BRepFill_MultiLine::*)() const>(&BRepFill_MultiLine::Continuity),
             R"#(Returns the continuity betwwen the two faces seShape from GeomAbsparated by myBis.)#" )
        .def("Curves",
             (void (BRepFill_MultiLine::*)( opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & ) const) static_cast<void (BRepFill_MultiLine::*)( opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & ) const>(&BRepFill_MultiLine::Curves),
             R"#(raises if IsParticularCase is <False>.)#"  , py::arg("Curve"),  py::arg("PCurve1"),  py::arg("PCurve2"))
        .def("FirstParameter",
             (Standard_Real (BRepFill_MultiLine::*)() const) static_cast<Standard_Real (BRepFill_MultiLine::*)() const>(&BRepFill_MultiLine::FirstParameter),
             R"#(returns the first parameter of the Bissectrice.)#" )
        .def("LastParameter",
             (Standard_Real (BRepFill_MultiLine::*)() const) static_cast<Standard_Real (BRepFill_MultiLine::*)() const>(&BRepFill_MultiLine::LastParameter),
             R"#(returns the last parameter of the Bissectrice.)#" )
        .def("Value",
             (gp_Pnt (BRepFill_MultiLine::*)( const Standard_Real ) const) static_cast<gp_Pnt (BRepFill_MultiLine::*)( const Standard_Real ) const>(&BRepFill_MultiLine::Value),
             R"#(Returns the current point on the 3d curve)#"  , py::arg("U"))
        .def("ValueOnF1",
             (gp_Pnt2d (BRepFill_MultiLine::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepFill_MultiLine::*)( const Standard_Real ) const>(&BRepFill_MultiLine::ValueOnF1),
             R"#(returns the current point on the PCurve of the first face)#"  , py::arg("U"))
        .def("ValueOnF2",
             (gp_Pnt2d (BRepFill_MultiLine::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepFill_MultiLine::*)( const Standard_Real ) const>(&BRepFill_MultiLine::ValueOnF2),
             R"#(returns the current point on the PCurve of the first face)#"  , py::arg("U"))
        .def("Value3dOnF1OnF2",
             (void (BRepFill_MultiLine::*)( const Standard_Real , gp_Pnt & , gp_Pnt2d & , gp_Pnt2d & ) const) static_cast<void (BRepFill_MultiLine::*)( const Standard_Real , gp_Pnt & , gp_Pnt2d & , gp_Pnt2d & ) const>(&BRepFill_MultiLine::Value3dOnF1OnF2),
             R"#(None)#"  , py::arg("U"),  py::arg("P3d"),  py::arg("PF1"),  py::arg("PF2"))
        .def("Value",
             (Standard_Boolean (BRepFill_MultiLine::*)( const Standard_Real , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Pnt> & ) const) static_cast<Standard_Boolean (BRepFill_MultiLine::*)( const Standard_Real , NCollection_Array1<gp_Pnt2d> & , NCollection_Array1<gp_Pnt> & ) const>(&BRepFill_MultiLine::Value),
             R"#(Returns the point at parameter <theU>.)#"  , py::arg("theU"),  py::arg("thePnt2d"),  py::arg("thePnt"))
        .def("D1",
             (Standard_Boolean (BRepFill_MultiLine::*)( const Standard_Real , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec> & ) const) static_cast<Standard_Boolean (BRepFill_MultiLine::*)( const Standard_Real , NCollection_Array1<gp_Vec2d> & , NCollection_Array1<gp_Vec> & ) const>(&BRepFill_MultiLine::D1),
             R"#(Returns the derivative at parameter <theU>.)#"  , py::arg("theU"),  py::arg("theVec2d"),  py::arg("theVec"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_OffsetAncestors , shared_ptr<BRepFill_OffsetAncestors> >>(m.attr("BRepFill_OffsetAncestors"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< BRepFill_OffsetWire & >()  , py::arg("Paral") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepFill_OffsetAncestors::*)( BRepFill_OffsetWire & ) ) static_cast<void (BRepFill_OffsetAncestors::*)( BRepFill_OffsetWire & ) >(&BRepFill_OffsetAncestors::Perform),
             R"#(None)#"  , py::arg("Paral"))
        .def("IsDone",
             (Standard_Boolean (BRepFill_OffsetAncestors::*)() const) static_cast<Standard_Boolean (BRepFill_OffsetAncestors::*)() const>(&BRepFill_OffsetAncestors::IsDone),
             R"#(None)#" )
        .def("HasAncestor",
             (Standard_Boolean (BRepFill_OffsetAncestors::*)( const TopoDS_Edge & ) const) static_cast<Standard_Boolean (BRepFill_OffsetAncestors::*)( const TopoDS_Edge & ) const>(&BRepFill_OffsetAncestors::HasAncestor),
             R"#(None)#"  , py::arg("S1"))
        .def("Ancestor",
             (const TopoDS_Shape & (BRepFill_OffsetAncestors::*)( const TopoDS_Edge & ) const) static_cast<const TopoDS_Shape & (BRepFill_OffsetAncestors::*)( const TopoDS_Edge & ) const>(&BRepFill_OffsetAncestors::Ancestor),
             R"#(may return a Null Shape if S1 is not a subShape of <Paral>; if Perform is not done.)#"  , py::arg("S1"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_OffsetWire , shared_ptr<BRepFill_OffsetWire> >>(m.attr("BRepFill_OffsetWire"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const GeomAbs_JoinType,const Standard_Boolean >()  , py::arg("Spine"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepFill_OffsetWire::*)( const TopoDS_Face & , const GeomAbs_JoinType , const Standard_Boolean ) ) static_cast<void (BRepFill_OffsetWire::*)( const TopoDS_Face & , const GeomAbs_JoinType , const Standard_Boolean ) >(&BRepFill_OffsetWire::Init),
             R"#(Initialize the evaluation of Offseting.)#"  , py::arg("Spine"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("IsOpenResult")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Perform",
             (void (BRepFill_OffsetWire::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_OffsetWire::*)( const Standard_Real , const Standard_Real ) >(&BRepFill_OffsetWire::Perform),
             R"#(Performs an OffsetWire at an altitude <Alt> from the face ( According to the orientation of the face))#"  , py::arg("Offset"),  py::arg("Alt")=static_cast<const Standard_Real>(0.0))
        .def("PerformWithBiLo",
             (void (BRepFill_OffsetWire::*)( const TopoDS_Face & , const Standard_Real , const BRepMAT2d_BisectingLocus & , BRepMAT2d_LinkTopoBilo & , const GeomAbs_JoinType , const Standard_Real ) ) static_cast<void (BRepFill_OffsetWire::*)( const TopoDS_Face & , const Standard_Real , const BRepMAT2d_BisectingLocus & , BRepMAT2d_LinkTopoBilo & , const GeomAbs_JoinType , const Standard_Real ) >(&BRepFill_OffsetWire::PerformWithBiLo),
             R"#(Performs an OffsetWire)#"  , py::arg("WSP"),  py::arg("Offset"),  py::arg("Locus"),  py::arg("Link"),  py::arg("Join")=static_cast<const GeomAbs_JoinType>(GeomAbs_Arc),  py::arg("Alt")=static_cast<const Standard_Real>(0.0))
        .def("IsDone",
             (Standard_Boolean (BRepFill_OffsetWire::*)() const) static_cast<Standard_Boolean (BRepFill_OffsetWire::*)() const>(&BRepFill_OffsetWire::IsDone),
             R"#(None)#" )
        .def("Spine",
             (const TopoDS_Face & (BRepFill_OffsetWire::*)() const) static_cast<const TopoDS_Face & (BRepFill_OffsetWire::*)() const>(&BRepFill_OffsetWire::Spine),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepFill_OffsetWire::*)() const) static_cast<const TopoDS_Shape & (BRepFill_OffsetWire::*)() const>(&BRepFill_OffsetWire::Shape),
             R"#(returns the generated shape.)#" )
        .def("GeneratedShapes",
             (const TopTools_ListOfShape & (BRepFill_OffsetWire::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepFill_OffsetWire::*)( const TopoDS_Shape & ) >(&BRepFill_OffsetWire::GeneratedShapes),
             R"#(Returns the shapes created from a subshape <SpineShape> of the spine. Returns the last computed Offset.)#"  , py::arg("SpineShape"))
        .def("JoinType",
             (GeomAbs_JoinType (BRepFill_OffsetWire::*)() const) static_cast<GeomAbs_JoinType (BRepFill_OffsetWire::*)() const>(&BRepFill_OffsetWire::JoinType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Pipe , shared_ptr<BRepFill_Pipe> >>(m.attr("BRepFill_Pipe"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Shape &,const GeomFill_Trihedron,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Spine"),  py::arg("Profile"),  py::arg("aMode")=static_cast<const GeomFill_Trihedron>(GeomFill_IsCorrectedFrenet),  py::arg("ForceApproxC1")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("GeneratePartCase")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepFill_Pipe::*)( const TopoDS_Wire & , const TopoDS_Shape & , const Standard_Boolean ) ) static_cast<void (BRepFill_Pipe::*)( const TopoDS_Wire & , const TopoDS_Shape & , const Standard_Boolean ) >(&BRepFill_Pipe::Perform),
             R"#(None)#"  , py::arg("Spine"),  py::arg("Profile"),  py::arg("GeneratePartCase")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Spine",
             (const TopoDS_Shape & (BRepFill_Pipe::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Pipe::*)() const>(&BRepFill_Pipe::Spine),
             R"#(None)#" )
        .def("Profile",
             (const TopoDS_Shape & (BRepFill_Pipe::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Pipe::*)() const>(&BRepFill_Pipe::Profile),
             R"#(None)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepFill_Pipe::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Pipe::*)() const>(&BRepFill_Pipe::Shape),
             R"#(None)#" )
        .def("ErrorOnSurface",
             (Standard_Real (BRepFill_Pipe::*)() const) static_cast<Standard_Real (BRepFill_Pipe::*)() const>(&BRepFill_Pipe::ErrorOnSurface),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (BRepFill_Pipe::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Pipe::*)() const>(&BRepFill_Pipe::FirstShape),
             R"#(None)#" )
        .def("LastShape",
             (const TopoDS_Shape & (BRepFill_Pipe::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Pipe::*)() const>(&BRepFill_Pipe::LastShape),
             R"#(None)#" )
        .def("Generated",
             (void (BRepFill_Pipe::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepFill_Pipe::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&BRepFill_Pipe::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"),  py::arg("L"))
        .def("Face",
             (TopoDS_Face (BRepFill_Pipe::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<TopoDS_Face (BRepFill_Pipe::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&BRepFill_Pipe::Face),
             R"#(Returns the face created from an edge of the spine and an edge of the profile. if the edges are not in the spine or the profile)#"  , py::arg("ESpine"),  py::arg("EProfile"))
        .def("Edge",
             (TopoDS_Edge (BRepFill_Pipe::*)( const TopoDS_Edge & , const TopoDS_Vertex & ) ) static_cast<TopoDS_Edge (BRepFill_Pipe::*)( const TopoDS_Edge & , const TopoDS_Vertex & ) >(&BRepFill_Pipe::Edge),
             R"#(Returns the edge created from an edge of the spine and a vertex of the profile. if the edge or the vertex are not in the spine or the profile.)#"  , py::arg("ESpine"),  py::arg("VProfile"))
        .def("Section",
             (TopoDS_Shape (BRepFill_Pipe::*)( const TopoDS_Vertex & ) const) static_cast<TopoDS_Shape (BRepFill_Pipe::*)( const TopoDS_Vertex & ) const>(&BRepFill_Pipe::Section),
             R"#(Returns the shape created from the profile at the position of the vertex VSpine. if the vertex is not in the Spine)#"  , py::arg("VSpine"))
        .def("PipeLine",
             (TopoDS_Wire (BRepFill_Pipe::*)( const gp_Pnt & ) ) static_cast<TopoDS_Wire (BRepFill_Pipe::*)( const gp_Pnt & ) >(&BRepFill_Pipe::PipeLine),
             R"#(Create a Wire by sweeping the Point along the <spine> if the <Spine> is undefined)#"  , py::arg("Point"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_PipeShell ,opencascade::handle<BRepFill_PipeShell> , Standard_Transient>>(m.attr("BRepFill_PipeShell"))
    // constructors
        .def(py::init< const TopoDS_Wire & >()  , py::arg("Spine") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepFill_PipeShell::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_PipeShell::*)( const Standard_Boolean ) >(&BRepFill_PipeShell::Set),
             R"#(Set an Frenet or an CorrectedFrenet trihedron to perform the sweeping)#"  , py::arg("Frenet")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetDiscrete",
             (void (BRepFill_PipeShell::*)() ) static_cast<void (BRepFill_PipeShell::*)() >(&BRepFill_PipeShell::SetDiscrete),
             R"#(Set a Discrete trihedron to perform the sweeping)#" )
        .def("Set",
             (void (BRepFill_PipeShell::*)( const gp_Ax2 & ) ) static_cast<void (BRepFill_PipeShell::*)( const gp_Ax2 & ) >(&BRepFill_PipeShell::Set),
             R"#(Set an fixed trihedron to perform the sweeping all sections will be parallel.)#"  , py::arg("Axe"))
        .def("Set",
             (void (BRepFill_PipeShell::*)( const gp_Dir & ) ) static_cast<void (BRepFill_PipeShell::*)( const gp_Dir & ) >(&BRepFill_PipeShell::Set),
             R"#(Set an fixed BiNormal direction to perform the sweeping)#"  , py::arg("BiNormal"))
        .def("Set",
             (Standard_Boolean (BRepFill_PipeShell::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepFill_PipeShell::*)( const TopoDS_Shape & ) >(&BRepFill_PipeShell::Set),
             R"#(Set support to the spine to define the BiNormal at the spine, like the normal the surfaces. Warning: To be effective, Each edge of the <spine> must have an representaion on one face of<SpineSupport>)#"  , py::arg("SpineSupport"))
        .def("Set",
             (void (BRepFill_PipeShell::*)( const TopoDS_Wire & , const Standard_Boolean , const BRepFill_TypeOfContact ) ) static_cast<void (BRepFill_PipeShell::*)( const TopoDS_Wire & , const Standard_Boolean , const BRepFill_TypeOfContact ) >(&BRepFill_PipeShell::Set),
             R"#(Set an auxiliary spine to define the Normal For each Point of the Spine P, an Point Q is evalued on <AuxiliarySpine> If <CurvilinearEquivalence> Q split <AuxiliarySpine> with the same length ratio than P split <Spline>. Else the plan define by P and the tangent to the <Spine> intersect <AuxiliarySpine> in Q. If <KeepContact> equals BRepFill_NoContact: The Normal is defined by the vector PQ. If <KeepContact> equals BRepFill_Contact: The Normal is defined to achieve that the sweeped section is in contact to the auxiliarySpine. The width of section is constant all along the path. In other words, the auxiliary spine lies on the swept surface, but not necessarily is a boundary of this surface. However, the auxiliary spine has to be close enough to the main spine to provide intersection with any section all along the path. If <KeepContact> equals BRepFill_ContactOnBorder: The auxiliary spine becomes a boundary of the swept surface and the width of section varies along the path.)#"  , py::arg("AuxiliarySpine"),  py::arg("CurvilinearEquivalence")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("KeepContact")=static_cast<const BRepFill_TypeOfContact>(BRepFill_NoContact))
        .def("SetMaxDegree",
             (void (BRepFill_PipeShell::*)( const Standard_Integer ) ) static_cast<void (BRepFill_PipeShell::*)( const Standard_Integer ) >(&BRepFill_PipeShell::SetMaxDegree),
             R"#(Define the maximum V degree of resulting surface)#"  , py::arg("NewMaxDegree"))
        .def("SetMaxSegments",
             (void (BRepFill_PipeShell::*)( const Standard_Integer ) ) static_cast<void (BRepFill_PipeShell::*)( const Standard_Integer ) >(&BRepFill_PipeShell::SetMaxSegments),
             R"#(Define the maximum number of spans in V-direction on resulting surface)#"  , py::arg("NewMaxSegments"))
        .def("SetForceApproxC1",
             (void (BRepFill_PipeShell::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_PipeShell::*)( const Standard_Boolean ) >(&BRepFill_PipeShell::SetForceApproxC1),
             R"#(Set the flag that indicates attempt to approximate a C1-continuous surface if a swept surface proved to be C0. Give section to sweep. Possibilities are : - Give one or sevral profile - Give one profile and an homotetic law. - Automatic compute of correspondance beetween profile, and section on the sweeped shape - correspondance beetween profile, and section on the sweeped shape defined by a vertex of the spine)#"  , py::arg("ForceApproxC1"))
        .def("Add",
             (void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Boolean ) >(&BRepFill_PipeShell::Add),
             R"#(Set an section. The corespondance with the spine, will be automaticaly performed.)#"  , py::arg("Profile"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Add",
             (void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const TopoDS_Vertex & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const TopoDS_Vertex & , const Standard_Boolean , const Standard_Boolean ) >(&BRepFill_PipeShell::Add),
             R"#(Set an section. The corespondance with the spine, is given by <Location>)#"  , py::arg("Profile"),  py::arg("Location"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetLaw",
             (void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const opencascade::handle<Law_Function> & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const opencascade::handle<Law_Function> & , const Standard_Boolean , const Standard_Boolean ) >(&BRepFill_PipeShell::SetLaw),
             R"#(Set an section and an homotetic law. The homotetie's centers is given by point on the <Spine>.)#"  , py::arg("Profile"),  py::arg("L"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetLaw",
             (void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const opencascade::handle<Law_Function> & , const TopoDS_Vertex & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (BRepFill_PipeShell::*)( const TopoDS_Shape & , const opencascade::handle<Law_Function> & , const TopoDS_Vertex & , const Standard_Boolean , const Standard_Boolean ) >(&BRepFill_PipeShell::SetLaw),
             R"#(Set an section and an homotetic law. The homotetie center is given by point on the <Spine>)#"  , py::arg("Profile"),  py::arg("L"),  py::arg("Location"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False))
        .def("DeleteProfile",
             (void (BRepFill_PipeShell::*)( const TopoDS_Shape & ) ) static_cast<void (BRepFill_PipeShell::*)( const TopoDS_Shape & ) >(&BRepFill_PipeShell::DeleteProfile),
             R"#(Delete an section.)#"  , py::arg("Profile"))
        .def("IsReady",
             (Standard_Boolean (BRepFill_PipeShell::*)() const) static_cast<Standard_Boolean (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::IsReady),
             R"#(Say if <me> is ready to build the shape return False if <me> do not have section definition)#" )
        .def("GetStatus",
             (GeomFill_PipeError (BRepFill_PipeShell::*)() const) static_cast<GeomFill_PipeError (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::GetStatus),
             R"#(Get a status, when Simulate or Build failed.)#" )
        .def("SetTolerance",
             (void (BRepFill_PipeShell::*)( const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_PipeShell::*)( const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepFill_PipeShell::SetTolerance),
             R"#(None)#"  , py::arg("Tol3d")=static_cast<const Standard_Real>(1.0e-4),  py::arg("BoundTol")=static_cast<const Standard_Real>(1.0e-4),  py::arg("TolAngular")=static_cast<const Standard_Real>(1.0e-2))
        .def("SetTransition",
             (void (BRepFill_PipeShell::*)( const BRepFill_TransitionStyle , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_PipeShell::*)( const BRepFill_TransitionStyle , const Standard_Real , const Standard_Real ) >(&BRepFill_PipeShell::SetTransition),
             R"#(Set the Transition Mode to manage discontinuities on the sweep.)#"  , py::arg("Mode")=static_cast<const BRepFill_TransitionStyle>(BRepFill_Modified),  py::arg("Angmin")=static_cast<const Standard_Real>(1.0e-2),  py::arg("Angmax")=static_cast<const Standard_Real>(6.0))
        .def("Simulate",
             (void (BRepFill_PipeShell::*)( const Standard_Integer , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepFill_PipeShell::*)( const Standard_Integer , NCollection_List<TopoDS_Shape> & ) >(&BRepFill_PipeShell::Simulate),
             R"#(Perform simulation of the sweep : Somes Section are returned.)#"  , py::arg("NumberOfSection"),  py::arg("Sections"))
        .def("Build",
             (Standard_Boolean (BRepFill_PipeShell::*)() ) static_cast<Standard_Boolean (BRepFill_PipeShell::*)() >(&BRepFill_PipeShell::Build),
             R"#(Builds the resulting shape (redefined from MakeShape).)#" )
        .def("MakeSolid",
             (Standard_Boolean (BRepFill_PipeShell::*)() ) static_cast<Standard_Boolean (BRepFill_PipeShell::*)() >(&BRepFill_PipeShell::MakeSolid),
             R"#(Transform the sweeping Shell in Solid. If the section are not closed returns False)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepFill_PipeShell::*)() const) static_cast<const TopoDS_Shape & (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::Shape),
             R"#(Returns the result Shape.)#" )
        .def("ErrorOnSurface",
             (Standard_Real (BRepFill_PipeShell::*)() const) static_cast<Standard_Real (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::ErrorOnSurface),
             R"#(None)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (BRepFill_PipeShell::*)() const) static_cast<const TopoDS_Shape & (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::FirstShape),
             R"#(Returns the TopoDS Shape of the bottom of the sweep.)#" )
        .def("LastShape",
             (const TopoDS_Shape & (BRepFill_PipeShell::*)() const) static_cast<const TopoDS_Shape & (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::LastShape),
             R"#(Returns the TopoDS Shape of the top of the sweep.)#" )
        .def("Profiles",
             (void (BRepFill_PipeShell::*)( NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepFill_PipeShell::*)( NCollection_List<TopoDS_Shape> & ) >(&BRepFill_PipeShell::Profiles),
             R"#(Returns the list of original profiles)#"  , py::arg("theProfiles"))
        .def("Spine",
             (const TopoDS_Wire & (BRepFill_PipeShell::*)() ) static_cast<const TopoDS_Wire & (BRepFill_PipeShell::*)() >(&BRepFill_PipeShell::Spine),
             R"#(Returns the spine)#" )
        .def("Generated",
             (void (BRepFill_PipeShell::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepFill_PipeShell::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&BRepFill_PipeShell::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"),  py::arg("L"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_PipeShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_PipeShell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_PipeShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Section , shared_ptr<BRepFill_Section> >>(m.attr("BRepFill_Section"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Vertex &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Profile"),  py::arg("V"),  py::arg("WithContact"),  py::arg("WithCorrection") )
    // custom constructors
    // methods
        .def("Set",
             (void (BRepFill_Section::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_Section::*)( const Standard_Boolean ) >(&BRepFill_Section::Set),
             R"#(None)#"  , py::arg("IsLaw"))
        .def("OriginalShape",
             (const TopoDS_Shape & (BRepFill_Section::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Section::*)() const>(&BRepFill_Section::OriginalShape),
             R"#(None)#" )
        .def("Wire",
             (const TopoDS_Wire & (BRepFill_Section::*)() const) static_cast<const TopoDS_Wire & (BRepFill_Section::*)() const>(&BRepFill_Section::Wire),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (BRepFill_Section::*)() const) static_cast<const TopoDS_Vertex & (BRepFill_Section::*)() const>(&BRepFill_Section::Vertex),
             R"#(None)#" )
        .def("ModifiedShape",
             (TopoDS_Shape (BRepFill_Section::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepFill_Section::*)( const TopoDS_Shape & ) const>(&BRepFill_Section::ModifiedShape),
             R"#(None)#"  , py::arg("theShape"))
        .def("IsLaw",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::IsLaw),
             R"#(None)#" )
        .def("IsPunctual",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::IsPunctual),
             R"#(None)#" )
        .def("WithContact",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::WithContact),
             R"#(None)#" )
        .def("WithCorrection",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::WithCorrection),
             R"#(None)#" )
        .def("OriginalShape",
             (const TopoDS_Shape & (BRepFill_Section::*)() const) static_cast<const TopoDS_Shape & (BRepFill_Section::*)() const>(&BRepFill_Section::OriginalShape),
             R"#(None)#" )
        .def("Wire",
             (const TopoDS_Wire & (BRepFill_Section::*)() const) static_cast<const TopoDS_Wire & (BRepFill_Section::*)() const>(&BRepFill_Section::Wire),
             R"#(None)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (BRepFill_Section::*)() const) static_cast<const TopoDS_Vertex & (BRepFill_Section::*)() const>(&BRepFill_Section::Vertex),
             R"#(None)#" )
        .def("IsLaw",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::IsLaw),
             R"#(None)#" )
        .def("IsPunctual",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::IsPunctual),
             R"#(None)#" )
        .def("WithContact",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::WithContact),
             R"#(None)#" )
        .def("WithCorrection",
             (Standard_Boolean (BRepFill_Section::*)() const) static_cast<Standard_Boolean (BRepFill_Section::*)() const>(&BRepFill_Section::WithCorrection),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_SectionLaw ,opencascade::handle<BRepFill_SectionLaw>,Py_BRepFill_SectionLaw , Standard_Transient>>(m.attr("BRepFill_SectionLaw"))
    // constructors
    // custom constructors
    // methods
        .def("NbLaw",
             (Standard_Integer (BRepFill_SectionLaw::*)() const) static_cast<Standard_Integer (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::NbLaw),
             R"#(None)#" )
        .def("Law",
             (const opencascade::handle<GeomFill_SectionLaw> & (BRepFill_SectionLaw::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<GeomFill_SectionLaw> & (BRepFill_SectionLaw::*)( const Standard_Integer ) const>(&BRepFill_SectionLaw::Law),
             R"#(None)#"  , py::arg("Index"))
        .def("IndexOfEdge",
             (Standard_Integer (BRepFill_SectionLaw::*)( const TopoDS_Shape & ) const) static_cast<Standard_Integer (BRepFill_SectionLaw::*)( const TopoDS_Shape & ) const>(&BRepFill_SectionLaw::IndexOfEdge),
             R"#(None)#"  , py::arg("anEdge"))
        .def("IsConstant",
             (Standard_Boolean (BRepFill_SectionLaw::*)() const) static_cast<Standard_Boolean (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::IsConstant),
             R"#(None)#" )
        .def("IsUClosed",
             (Standard_Boolean (BRepFill_SectionLaw::*)() const) static_cast<Standard_Boolean (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::IsUClosed),
             R"#(None)#" )
        .def("IsVClosed",
             (Standard_Boolean (BRepFill_SectionLaw::*)() const) static_cast<Standard_Boolean (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::IsVClosed),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepFill_SectionLaw::*)() const) static_cast<Standard_Boolean (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::IsDone),
             R"#(None)#" )
        .def("IsVertex",
             (Standard_Boolean (BRepFill_SectionLaw::*)() const) static_cast<Standard_Boolean (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::IsVertex),
             R"#(Say if the input shape is a vertex.)#" )
        .def("ConcatenedLaw",
             (opencascade::handle<GeomFill_SectionLaw> (BRepFill_SectionLaw::*)() const) static_cast<opencascade::handle<GeomFill_SectionLaw> (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::ConcatenedLaw),
             R"#(None)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepFill_SectionLaw::*)( const Standard_Integer , const Standard_Real ) const) static_cast<GeomAbs_Shape (BRepFill_SectionLaw::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_SectionLaw::Continuity),
             R"#(None)#"  , py::arg("Index"),  py::arg("TolAngular"))
        .def("VertexTol",
             (Standard_Real (BRepFill_SectionLaw::*)( const Standard_Integer , const Standard_Real ) const) static_cast<Standard_Real (BRepFill_SectionLaw::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_SectionLaw::VertexTol),
             R"#(None)#"  , py::arg("Index"),  py::arg("Param"))
        .def("Vertex",
             (TopoDS_Vertex (BRepFill_SectionLaw::*)( const Standard_Integer , const Standard_Real ) const) static_cast<TopoDS_Vertex (BRepFill_SectionLaw::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_SectionLaw::Vertex),
             R"#(None)#"  , py::arg("Index"),  py::arg("Param"))
        .def("D0",
             (void (BRepFill_SectionLaw::*)( const Standard_Real , TopoDS_Shape & ) ) static_cast<void (BRepFill_SectionLaw::*)( const Standard_Real , TopoDS_Shape & ) >(&BRepFill_SectionLaw::D0),
             R"#(None)#"  , py::arg("U"),  py::arg("S"))
        .def("Init",
             (void (BRepFill_SectionLaw::*)( const TopoDS_Wire & ) ) static_cast<void (BRepFill_SectionLaw::*)( const TopoDS_Wire & ) >(&BRepFill_SectionLaw::Init),
             R"#(None)#"  , py::arg("W"))
        .def("CurrentEdge",
             (TopoDS_Edge (BRepFill_SectionLaw::*)() ) static_cast<TopoDS_Edge (BRepFill_SectionLaw::*)() >(&BRepFill_SectionLaw::CurrentEdge),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_SectionLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_SectionLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_SectionLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_SectionPlacement , shared_ptr<BRepFill_SectionPlacement> >>(m.attr("BRepFill_SectionPlacement"))
    // constructors
        .def(py::init< const opencascade::handle<BRepFill_LocationLaw> &,const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Law"),  py::arg("Section"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<BRepFill_LocationLaw> &,const TopoDS_Shape &,const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Law"),  py::arg("Section"),  py::arg("Vertex"),  py::arg("WithContact")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("WithCorrection")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Transformation",
             (const gp_Trsf & (BRepFill_SectionPlacement::*)() const) static_cast<const gp_Trsf & (BRepFill_SectionPlacement::*)() const>(&BRepFill_SectionPlacement::Transformation),
             R"#(None)#" )
        .def("AbscissaOnPath",
             (Standard_Real (BRepFill_SectionPlacement::*)() ) static_cast<Standard_Real (BRepFill_SectionPlacement::*)() >(&BRepFill_SectionPlacement::AbscissaOnPath),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Sweep , shared_ptr<BRepFill_Sweep> >>(m.attr("BRepFill_Sweep"))
    // constructors
        .def(py::init< const opencascade::handle<BRepFill_SectionLaw> &,const opencascade::handle<BRepFill_LocationLaw> &,const Standard_Boolean >()  , py::arg("Section"),  py::arg("Location"),  py::arg("WithKPart") )
    // custom constructors
    // methods
        .def("SetBounds",
             (void (BRepFill_Sweep::*)( const TopoDS_Wire & , const TopoDS_Wire & ) ) static_cast<void (BRepFill_Sweep::*)( const TopoDS_Wire & , const TopoDS_Wire & ) >(&BRepFill_Sweep::SetBounds),
             R"#(None)#"  , py::arg("FirstShape"),  py::arg("LastShape"))
        .def("SetTolerance",
             (void (BRepFill_Sweep::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_Sweep::*)( const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepFill_Sweep::SetTolerance),
             R"#(Set Approximation Tolerance Tol3d : Tolerance to surface approximation Tol2d : Tolerance used to perform curve approximation Normaly the 2d curve are approximated with a tolerance given by the resolution on support surfaces, but if this tolerance is too large Tol2d is used. TolAngular : Tolerance (in radian) to control the angle beetween tangents on the section law and tangent of iso-v on approximed surface)#"  , py::arg("Tol3d"),  py::arg("BoundTol")=static_cast<const Standard_Real>(1.0),  py::arg("Tol2d")=static_cast<const Standard_Real>(1.0e-5),  py::arg("TolAngular")=static_cast<const Standard_Real>(1.0e-2))
        .def("SetAngularControl",
             (void (BRepFill_Sweep::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepFill_Sweep::*)( const Standard_Real , const Standard_Real ) >(&BRepFill_Sweep::SetAngularControl),
             R"#(Tolerance To controle Corner management.)#"  , py::arg("AngleMin")=static_cast<const Standard_Real>(0.01),  py::arg("AngleMax")=static_cast<const Standard_Real>(6.0))
        .def("SetForceApproxC1",
             (void (BRepFill_Sweep::*)( const Standard_Boolean ) ) static_cast<void (BRepFill_Sweep::*)( const Standard_Boolean ) >(&BRepFill_Sweep::SetForceApproxC1),
             R"#(Set the flag that indicates attempt to approximate a C1-continuous surface if a swept surface proved to be C0.)#"  , py::arg("ForceApproxC1"))
        .def("Build",
             (void (BRepFill_Sweep::*)( NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, opencascade::handle<TopTools_HArray2OfShape>, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, opencascade::handle<TopTools_HArray2OfShape>, TopTools_ShapeMapHasher> & , const BRepFill_TransitionStyle , const GeomAbs_Shape , const GeomFill_ApproxStyle , const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepFill_Sweep::*)( NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, opencascade::handle<TopTools_HArray2OfShape>, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, opencascade::handle<TopTools_HArray2OfShape>, TopTools_ShapeMapHasher> & , const BRepFill_TransitionStyle , const GeomAbs_Shape , const GeomFill_ApproxStyle , const Standard_Integer , const Standard_Integer ) >(&BRepFill_Sweep::Build),
             R"#(Build the Sweep Surface Transition define Transition strategy Approx define Approximation Strategy - GeomFill_Section : The composed Function Location X Section is directly approximed. - GeomFill_Location : The location law is approximed, and the SweepSurface is bulid algebric composition of approximed location law and section law This option is Ok, if Section.Surface() methode is effective. Continuity : The continuity in v waiting on the surface Degmax : The maximum degree in v requiered on the surface Segmax : The maximum number of span in v requiered on the surface.)#"  , py::arg("ReversedEdges"),  py::arg("Tapes"),  py::arg("Rails"),  py::arg("Transition")=static_cast<const BRepFill_TransitionStyle>(BRepFill_Modified),  py::arg("Continuity")=static_cast<const GeomAbs_Shape>(GeomAbs_C2),  py::arg("Approx")=static_cast<const GeomFill_ApproxStyle>(GeomFill_Location),  py::arg("Degmax")=static_cast<const Standard_Integer>(11),  py::arg("Segmax")=static_cast<const Standard_Integer>(30))
        .def("IsDone",
             (Standard_Boolean (BRepFill_Sweep::*)() const) static_cast<Standard_Boolean (BRepFill_Sweep::*)() const>(&BRepFill_Sweep::IsDone),
             R"#(Say if the Shape is Build.)#" )
        .def("Shape",
             (TopoDS_Shape (BRepFill_Sweep::*)() const) static_cast<TopoDS_Shape (BRepFill_Sweep::*)() const>(&BRepFill_Sweep::Shape),
             R"#(returns the Sweeping Shape)#" )
        .def("ErrorOnSurface",
             (Standard_Real (BRepFill_Sweep::*)() const) static_cast<Standard_Real (BRepFill_Sweep::*)() const>(&BRepFill_Sweep::ErrorOnSurface),
             R"#(Get the Approximation error.)#" )
        .def("SubShape",
             (opencascade::handle<TopTools_HArray2OfShape> (BRepFill_Sweep::*)() const) static_cast<opencascade::handle<TopTools_HArray2OfShape> (BRepFill_Sweep::*)() const>(&BRepFill_Sweep::SubShape),
             R"#(None)#" )
        .def("InterFaces",
             (opencascade::handle<TopTools_HArray2OfShape> (BRepFill_Sweep::*)() const) static_cast<opencascade::handle<TopTools_HArray2OfShape> (BRepFill_Sweep::*)() const>(&BRepFill_Sweep::InterFaces),
             R"#(None)#" )
        .def("Sections",
             (opencascade::handle<TopTools_HArray2OfShape> (BRepFill_Sweep::*)() const) static_cast<opencascade::handle<TopTools_HArray2OfShape> (BRepFill_Sweep::*)() const>(&BRepFill_Sweep::Sections),
             R"#(None)#" )
        .def("Tape",
             (TopoDS_Shape (BRepFill_Sweep::*)( const Standard_Integer ) const) static_cast<TopoDS_Shape (BRepFill_Sweep::*)( const Standard_Integer ) const>(&BRepFill_Sweep::Tape),
             R"#(returns the Tape corresponding to Index-th edge of section)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_TrimEdgeTool , shared_ptr<BRepFill_TrimEdgeTool> >>(m.attr("BRepFill_TrimEdgeTool"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Bisector_Bisec &,const opencascade::handle<Geom2d_Geometry> &,const opencascade::handle<Geom2d_Geometry> &,const Standard_Real >()  , py::arg("Bisec"),  py::arg("S1"),  py::arg("S2"),  py::arg("Offset") )
    // custom constructors
    // methods
        .def("IntersectWith",
             (void (BRepFill_TrimEdgeTool::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Vertex & , const TopoDS_Vertex & , const GeomAbs_JoinType , const Standard_Boolean , NCollection_Sequence<gp_Pnt> & ) ) static_cast<void (BRepFill_TrimEdgeTool::*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Shape & , const TopoDS_Shape & , const TopoDS_Vertex & , const TopoDS_Vertex & , const GeomAbs_JoinType , const Standard_Boolean , NCollection_Sequence<gp_Pnt> & ) >(&BRepFill_TrimEdgeTool::IntersectWith),
             R"#(None)#"  , py::arg("Edge1"),  py::arg("Edge2"),  py::arg("InitShape1"),  py::arg("InitShape2"),  py::arg("End1"),  py::arg("End2"),  py::arg("theJoinType"),  py::arg("IsOpenResult"),  py::arg("Params"))
        .def("AddOrConfuse",
             (void (BRepFill_TrimEdgeTool::*)( const Standard_Boolean , const TopoDS_Edge & , const TopoDS_Edge & , NCollection_Sequence<gp_Pnt> & ) const) static_cast<void (BRepFill_TrimEdgeTool::*)( const Standard_Boolean , const TopoDS_Edge & , const TopoDS_Edge & , NCollection_Sequence<gp_Pnt> & ) const>(&BRepFill_TrimEdgeTool::AddOrConfuse),
             R"#(None)#"  , py::arg("Start"),  py::arg("Edge1"),  py::arg("Edge2"),  py::arg("Params"))
        .def("IsInside",
             (Standard_Boolean (BRepFill_TrimEdgeTool::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (BRepFill_TrimEdgeTool::*)( const gp_Pnt2d & ) const>(&BRepFill_TrimEdgeTool::IsInside),
             R"#(None)#"  , py::arg("P"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_TrimShellCorner , shared_ptr<BRepFill_TrimShellCorner> >>(m.attr("BRepFill_TrimShellCorner"))
    // constructors
        .def(py::init< const opencascade::handle<TopTools_HArray2OfShape> &,const BRepFill_TransitionStyle,const gp_Ax2 & >()  , py::arg("theFaces"),  py::arg("theTransition"),  py::arg("theAxeOfBisPlane") )
    // custom constructors
    // methods
        .def("AddBounds",
             (void (BRepFill_TrimShellCorner::*)( const opencascade::handle<TopTools_HArray2OfShape> & ) ) static_cast<void (BRepFill_TrimShellCorner::*)( const opencascade::handle<TopTools_HArray2OfShape> & ) >(&BRepFill_TrimShellCorner::AddBounds),
             R"#(None)#"  , py::arg("Bounds"))
        .def("AddUEdges",
             (void (BRepFill_TrimShellCorner::*)( const opencascade::handle<TopTools_HArray2OfShape> & ) ) static_cast<void (BRepFill_TrimShellCorner::*)( const opencascade::handle<TopTools_HArray2OfShape> & ) >(&BRepFill_TrimShellCorner::AddUEdges),
             R"#(None)#"  , py::arg("theUEdges"))
        .def("AddVEdges",
             (void (BRepFill_TrimShellCorner::*)( const opencascade::handle<TopTools_HArray2OfShape> & , const Standard_Integer ) ) static_cast<void (BRepFill_TrimShellCorner::*)( const opencascade::handle<TopTools_HArray2OfShape> & , const Standard_Integer ) >(&BRepFill_TrimShellCorner::AddVEdges),
             R"#(None)#"  , py::arg("theVEdges"),  py::arg("theIndex"))
        .def("Perform",
             (void (BRepFill_TrimShellCorner::*)() ) static_cast<void (BRepFill_TrimShellCorner::*)() >(&BRepFill_TrimShellCorner::Perform),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepFill_TrimShellCorner::*)() const) static_cast<Standard_Boolean (BRepFill_TrimShellCorner::*)() const>(&BRepFill_TrimShellCorner::IsDone),
             R"#(None)#" )
        .def("HasSection",
             (Standard_Boolean (BRepFill_TrimShellCorner::*)() const) static_cast<Standard_Boolean (BRepFill_TrimShellCorner::*)() const>(&BRepFill_TrimShellCorner::HasSection),
             R"#(None)#" )
        .def("Modified",
             (void (BRepFill_TrimShellCorner::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepFill_TrimShellCorner::*)( const TopoDS_Shape & , NCollection_List<TopoDS_Shape> & ) >(&BRepFill_TrimShellCorner::Modified),
             R"#(None)#"  , py::arg("S"),  py::arg("theModified"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_TrimSurfaceTool , shared_ptr<BRepFill_TrimSurfaceTool> >>(m.attr("BRepFill_TrimSurfaceTool"))
    // constructors
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const TopoDS_Face &,const TopoDS_Face &,const TopoDS_Edge &,const TopoDS_Edge &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("Bis"),  py::arg("Face1"),  py::arg("Face2"),  py::arg("Edge1"),  py::arg("Edge2"),  py::arg("Inv1"),  py::arg("Inv2") )
    // custom constructors
    // methods
        .def("IntersectWith",
             (void (BRepFill_TrimSurfaceTool::*)( const TopoDS_Edge & , const TopoDS_Edge & , NCollection_Sequence<gp_Pnt> & ) const) static_cast<void (BRepFill_TrimSurfaceTool::*)( const TopoDS_Edge & , const TopoDS_Edge & , NCollection_Sequence<gp_Pnt> & ) const>(&BRepFill_TrimSurfaceTool::IntersectWith),
             R"#(Intersect <Bis> with the projection of the edges <EdgeOnFi> and returns the intersecting parameters on Bis and on the edges P.X() : Parameter on Bis P.Y() : Parameter on EdgeOnF1 P.Z() : Parameter on EdgeOnF2 raises if <Edge> is not a edge of Face1 or Face2.)#"  , py::arg("EdgeOnF1"),  py::arg("EdgeOnF2"),  py::arg("Points"))
        .def("IsOnFace",
             (Standard_Boolean (BRepFill_TrimSurfaceTool::*)( const gp_Pnt2d & ) const) static_cast<Standard_Boolean (BRepFill_TrimSurfaceTool::*)( const gp_Pnt2d & ) const>(&BRepFill_TrimSurfaceTool::IsOnFace),
             R"#(returns True if the Line (P, DZ) intersect the Faces)#"  , py::arg("Point"))
        .def("ProjOn",
             (Standard_Real (BRepFill_TrimSurfaceTool::*)( const gp_Pnt2d & , const TopoDS_Edge & ) const) static_cast<Standard_Real (BRepFill_TrimSurfaceTool::*)( const gp_Pnt2d & , const TopoDS_Edge & ) const>(&BRepFill_TrimSurfaceTool::ProjOn),
             R"#(returns the parameter of the point <Point> on the Edge <Edge>, assuming that the point is on the edge.)#"  , py::arg("Point"),  py::arg("Edge"))
        .def("Project",
             (void (BRepFill_TrimSurfaceTool::*)( const Standard_Real , const Standard_Real , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , GeomAbs_Shape & ) const) static_cast<void (BRepFill_TrimSurfaceTool::*)( const Standard_Real , const Standard_Real , opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , GeomAbs_Shape & ) const>(&BRepFill_TrimSurfaceTool::Project),
             R"#(None)#"  , py::arg("U1"),  py::arg("U2"),  py::arg("Curve"),  py::arg("PCurve1"),  py::arg("PCurve2"),  py::arg("myCont"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_ACRLaw ,opencascade::handle<BRepFill_ACRLaw> , BRepFill_LocationLaw>>(m.attr("BRepFill_ACRLaw"))
    // constructors
        .def(py::init< const TopoDS_Wire &,const opencascade::handle<GeomFill_LocationGuide> & >()  , py::arg("Path"),  py::arg("Law") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_ACRLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_ACRLaw::*)() const>(&BRepFill_ACRLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_ACRLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_ACRLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Edge3DLaw ,opencascade::handle<BRepFill_Edge3DLaw> , BRepFill_LocationLaw>>(m.attr("BRepFill_Edge3DLaw"))
    // constructors
        .def(py::init< const TopoDS_Wire &,const opencascade::handle<GeomFill_LocationLaw> & >()  , py::arg("Path"),  py::arg("Law") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_Edge3DLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_Edge3DLaw::*)() const>(&BRepFill_Edge3DLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_Edge3DLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_Edge3DLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_EdgeOnSurfLaw ,opencascade::handle<BRepFill_EdgeOnSurfLaw> , BRepFill_LocationLaw>>(m.attr("BRepFill_EdgeOnSurfLaw"))
    // constructors
        .def(py::init< const TopoDS_Wire &,const TopoDS_Shape & >()  , py::arg("Path"),  py::arg("Surf") )
    // custom constructors
    // methods
        .def("HasResult",
             (Standard_Boolean (BRepFill_EdgeOnSurfLaw::*)() const) static_cast<Standard_Boolean (BRepFill_EdgeOnSurfLaw::*)() const>(&BRepFill_EdgeOnSurfLaw::HasResult),
             R"#(returns <False> if one Edge of <Path> do not have representation on <Surf>. In this case it is impossible to use this object.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_EdgeOnSurfLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_EdgeOnSurfLaw::*)() const>(&BRepFill_EdgeOnSurfLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_EdgeOnSurfLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_EdgeOnSurfLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_NSections ,opencascade::handle<BRepFill_NSections> , BRepFill_SectionLaw>>(m.attr("BRepFill_NSections"))
    // constructors
        .def(py::init<  const NCollection_Sequence<TopoDS_Shape> &,const Standard_Boolean >()  , py::arg("S"),  py::arg("Build")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init<  const NCollection_Sequence<TopoDS_Shape> &, const NCollection_Sequence<gp_Trsf> &, const NCollection_Sequence<Standard_Real> &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("S"),  py::arg("Trsfs"),  py::arg("P"),  py::arg("VF"),  py::arg("VL"),  py::arg("Build")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("IsVertex",
             (Standard_Boolean (BRepFill_NSections::*)() const) static_cast<Standard_Boolean (BRepFill_NSections::*)() const>(&BRepFill_NSections::IsVertex),
             R"#(Say if the input shape is a vertex.)#" )
        .def("IsConstant",
             (Standard_Boolean (BRepFill_NSections::*)() const) static_cast<Standard_Boolean (BRepFill_NSections::*)() const>(&BRepFill_NSections::IsConstant),
             R"#(Say if the Law is Constant.)#" )
        .def("ConcatenedLaw",
             (opencascade::handle<GeomFill_SectionLaw> (BRepFill_NSections::*)() const) static_cast<opencascade::handle<GeomFill_SectionLaw> (BRepFill_NSections::*)() const>(&BRepFill_NSections::ConcatenedLaw),
             R"#(Give the law build on a concatened section)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepFill_NSections::*)( const Standard_Integer , const Standard_Real ) const) static_cast<GeomAbs_Shape (BRepFill_NSections::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_NSections::Continuity),
             R"#(None)#"  , py::arg("Index"),  py::arg("TolAngular"))
        .def("VertexTol",
             (Standard_Real (BRepFill_NSections::*)( const Standard_Integer , const Standard_Real ) const) static_cast<Standard_Real (BRepFill_NSections::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_NSections::VertexTol),
             R"#(None)#"  , py::arg("Index"),  py::arg("Param"))
        .def("Vertex",
             (TopoDS_Vertex (BRepFill_NSections::*)( const Standard_Integer , const Standard_Real ) const) static_cast<TopoDS_Vertex (BRepFill_NSections::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_NSections::Vertex),
             R"#(None)#"  , py::arg("Index"),  py::arg("Param"))
        .def("D0",
             (void (BRepFill_NSections::*)( const Standard_Real , TopoDS_Shape & ) ) static_cast<void (BRepFill_NSections::*)( const Standard_Real , TopoDS_Shape & ) >(&BRepFill_NSections::D0),
             R"#(None)#"  , py::arg("Param"),  py::arg("S"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_NSections::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_NSections::*)() const>(&BRepFill_NSections::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_NSections::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_NSections::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_ShapeLaw ,opencascade::handle<BRepFill_ShapeLaw> , BRepFill_SectionLaw>>(m.attr("BRepFill_ShapeLaw"))
    // constructors
        .def(py::init< const TopoDS_Vertex &,const Standard_Boolean >()  , py::arg("V"),  py::arg("Build")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("W"),  py::arg("Build")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Wire &,const opencascade::handle<Law_Function> &,const Standard_Boolean >()  , py::arg("W"),  py::arg("L"),  py::arg("Build")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("IsVertex",
             (Standard_Boolean (BRepFill_ShapeLaw::*)() const) static_cast<Standard_Boolean (BRepFill_ShapeLaw::*)() const>(&BRepFill_ShapeLaw::IsVertex),
             R"#(Say if the input shape is a vertex.)#" )
        .def("IsConstant",
             (Standard_Boolean (BRepFill_ShapeLaw::*)() const) static_cast<Standard_Boolean (BRepFill_ShapeLaw::*)() const>(&BRepFill_ShapeLaw::IsConstant),
             R"#(Say if the Law is Constant.)#" )
        .def("ConcatenedLaw",
             (opencascade::handle<GeomFill_SectionLaw> (BRepFill_ShapeLaw::*)() const) static_cast<opencascade::handle<GeomFill_SectionLaw> (BRepFill_ShapeLaw::*)() const>(&BRepFill_ShapeLaw::ConcatenedLaw),
             R"#(Give the law build on a concaneted section)#" )
        .def("Continuity",
             (GeomAbs_Shape (BRepFill_ShapeLaw::*)( const Standard_Integer , const Standard_Real ) const) static_cast<GeomAbs_Shape (BRepFill_ShapeLaw::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_ShapeLaw::Continuity),
             R"#(None)#"  , py::arg("Index"),  py::arg("TolAngular"))
        .def("VertexTol",
             (Standard_Real (BRepFill_ShapeLaw::*)( const Standard_Integer , const Standard_Real ) const) static_cast<Standard_Real (BRepFill_ShapeLaw::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_ShapeLaw::VertexTol),
             R"#(None)#"  , py::arg("Index"),  py::arg("Param"))
        .def("Vertex",
             (TopoDS_Vertex (BRepFill_ShapeLaw::*)( const Standard_Integer , const Standard_Real ) const) static_cast<TopoDS_Vertex (BRepFill_ShapeLaw::*)( const Standard_Integer , const Standard_Real ) const>(&BRepFill_ShapeLaw::Vertex),
             R"#(None)#"  , py::arg("Index"),  py::arg("Param"))
        .def("D0",
             (void (BRepFill_ShapeLaw::*)( const Standard_Real , TopoDS_Shape & ) ) static_cast<void (BRepFill_ShapeLaw::*)( const Standard_Real , TopoDS_Shape & ) >(&BRepFill_ShapeLaw::D0),
             R"#(None)#"  , py::arg("Param"),  py::arg("S"))
        .def("Edge",
             (const TopoDS_Edge & (BRepFill_ShapeLaw::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (BRepFill_ShapeLaw::*)( const Standard_Integer ) const>(&BRepFill_ShapeLaw::Edge),
             R"#(None)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_ShapeLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_ShapeLaw::*)() const>(&BRepFill_ShapeLaw::DynamicType),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepFill_ShapeLaw::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (BRepFill_ShapeLaw::*)( const Standard_Integer ) const>(&BRepFill_ShapeLaw::Edge),
             R"#(None)#"  , py::arg("Index"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_ShapeLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_ShapeLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_DraftLaw ,opencascade::handle<BRepFill_DraftLaw> , BRepFill_Edge3DLaw>>(m.attr("BRepFill_DraftLaw"))
    // constructors
        .def(py::init< const TopoDS_Wire &,const opencascade::handle<GeomFill_LocationDraft> & >()  , py::arg("Path"),  py::arg("Law") )
    // custom constructors
    // methods
        .def("CleanLaw",
             (void (BRepFill_DraftLaw::*)( const Standard_Real ) ) static_cast<void (BRepFill_DraftLaw::*)( const Standard_Real ) >(&BRepFill_DraftLaw::CleanLaw),
             R"#(To clean the little discontinuities.)#"  , py::arg("TolAngular"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_DraftLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_DraftLaw::*)() const>(&BRepFill_DraftLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_DraftLaw::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepFill_DraftLaw::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\BRepFill_Evolved.hxx
// ./opencascade\BRepFill_DataMapOfShapeHArray2OfShape.hxx
// ./opencascade\BRepFill_DataMapOfShapeSequenceOfReal.hxx
// ./opencascade\BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.hxx
// ./opencascade\BRepFill_ApproxSeewing.hxx
// ./opencascade\BRepFill.hxx
// ./opencascade\BRepFill_MultiLine.hxx
// ./opencascade\BRepFill_Generator.hxx
// ./opencascade\BRepFill_TrimShellCorner.hxx
// ./opencascade\BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx
// ./opencascade\BRepFill_TrimSurfaceTool.hxx
// ./opencascade\BRepFill_AdvancedEvolved.hxx
// ./opencascade\BRepFill_SequenceOfEdgeFaceAndOrder.hxx
// ./opencascade\BRepFill_DataMapOfOrientedShapeListOfShape.hxx
// ./opencascade\BRepFill_Edge3DLaw.hxx
// ./opencascade\BRepFill_SequenceOfSection.hxx
// ./opencascade\BRepFill_ComputeCLine.hxx
// ./opencascade\BRepFill_CurveConstraint.hxx
// ./opencascade\BRepFill_DataMapOfShapeSequenceOfPnt.hxx
// ./opencascade\BRepFill_Section.hxx
// ./opencascade\BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx
// ./opencascade\BRepFill_SectionLaw.hxx
// ./opencascade\BRepFill_ShapeLaw.hxx
// ./opencascade\BRepFill_Draft.hxx
// ./opencascade\BRepFill_LocationLaw.hxx
// ./opencascade\BRepFill_TransitionStyle.hxx
// ./opencascade\BRepFill_DataMapIteratorOfDataMapOfNodeShape.hxx
// ./opencascade\BRepFill_OffsetAncestors.hxx
// ./opencascade\BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape.hxx
// ./opencascade\BRepFill_EdgeFaceAndOrder.hxx
// ./opencascade\BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx
// ./opencascade\BRepFill_NSections.hxx
// ./opencascade\BRepFill_PipeShell.hxx
// ./opencascade\BRepFill_TrimEdgeTool.hxx
// ./opencascade\BRepFill_ListOfOffsetWire.hxx
// ./opencascade\BRepFill_SequenceOfFaceAndOrder.hxx
// ./opencascade\BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape.hxx
// ./opencascade\BRepFill_Filling.hxx
// ./opencascade\BRepFill_Sweep.hxx
// ./opencascade\BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal.hxx
// ./opencascade\BRepFill_CompatibleWires.hxx
// ./opencascade\BRepFill_TypeOfContact.hxx
// ./opencascade\BRepFill_EdgeOnSurfLaw.hxx
// ./opencascade\BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt.hxx
// ./opencascade\BRepFill_OffsetWire.hxx
// ./opencascade\BRepFill_ListIteratorOfListOfOffsetWire.hxx
// ./opencascade\BRepFill_FaceAndOrder.hxx
// ./opencascade\BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.hxx
// ./opencascade\BRepFill_ACRLaw.hxx
// ./opencascade\BRepFill_DataMapOfNodeShape.hxx
// ./opencascade\BRepFill_SectionPlacement.hxx
// ./opencascade\BRepFill_DraftLaw.hxx
// ./opencascade\BRepFill_Pipe.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<TopoDS_Shape, TColStd_SequenceOfReal, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeSequenceOfReal");
    register_template_NCollection_DataMap<opencascade::handle<MAT_Node>, TopTools_DataMapOfShapeShape, TColStd_MapTransientHasher>(m,"BRepFill_DataMapOfNodeDataMapOfShapeShape");
    register_template_NCollection_Sequence<BRepFill_EdgeFaceAndOrder>(m,"BRepFill_SequenceOfEdgeFaceAndOrder");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_OrientedShapeMapHasher>(m,"BRepFill_DataMapOfOrientedShapeListOfShape");
    register_template_NCollection_Sequence<BRepFill_Section>(m,"BRepFill_SequenceOfSection");
    register_template_NCollection_DataMap<TopoDS_Shape, TColgp_SequenceOfPnt, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeSequenceOfPnt");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_DataMapOfShapeListOfShape, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeDataMapOfShapeListOfShape");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_OrientedShapeMapHasher>(m,"BRepFill_IndexedDataMapOfOrientedShapeListOfShape");
    register_template_NCollection_List<BRepFill_OffsetWire>(m,"BRepFill_ListOfOffsetWire");
    register_template_NCollection_Sequence<BRepFill_FaceAndOrder>(m,"BRepFill_SequenceOfFaceAndOrder");
    register_template_NCollection_DataMap<opencascade::handle<MAT_Node>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"BRepFill_DataMapOfNodeShape");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
