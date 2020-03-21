
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_AdvancedEvolved , shared_ptr<BRepFill_AdvancedEvolved> >>(m.attr("BRepFill_AdvancedEvolved"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_CompatibleWires , shared_ptr<BRepFill_CompatibleWires> >>(m.attr("BRepFill_CompatibleWires"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_ComputeCLine , shared_ptr<BRepFill_ComputeCLine> >>(m.attr("BRepFill_ComputeCLine"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_CurveConstraint ,opencascade::handle<BRepFill_CurveConstraint> , GeomPlate_CurveConstraint>>(m.attr("BRepFill_CurveConstraint"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Draft , shared_ptr<BRepFill_Draft> >>(m.attr("BRepFill_Draft"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_EdgeFaceAndOrder , shared_ptr<BRepFill_EdgeFaceAndOrder> >>(m.attr("BRepFill_EdgeFaceAndOrder"))
    // constructors
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_FaceAndOrder , shared_ptr<BRepFill_FaceAndOrder> >>(m.attr("BRepFill_FaceAndOrder"))
    // constructors
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Generator , shared_ptr<BRepFill_Generator> >>(m.attr("BRepFill_Generator"))
    // constructors
    // custom constructors
    // methods
        .def("Shell",
             (const TopoDS_Shell & (BRepFill_Generator::*)() const) static_cast<const TopoDS_Shell & (BRepFill_Generator::*)() const>(&BRepFill_Generator::Shell),
             R"#(None)#" )
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
        .def("TransformInG0Law",
             (void (BRepFill_LocationLaw::*)() ) static_cast<void (BRepFill_LocationLaw::*)() >(&BRepFill_LocationLaw::TransformInG0Law),
             R"#(Apply a linear transformation on each law, to have continuity of the global law beetween the edges.)#" )
        .def("TransformInCompatibleLaw",
             (void (BRepFill_LocationLaw::*)( const Standard_Real ) ) static_cast<void (BRepFill_LocationLaw::*)( const Standard_Real ) >(&BRepFill_LocationLaw::TransformInCompatibleLaw),
             R"#(Apply a linear transformation on each law, to reduce the dicontinuities of law at one rotation.)#"  , py::arg("AngularTolerance"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_LocationLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_LocationLaw::*)() const>(&BRepFill_LocationLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_LocationLaw::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_MultiLine , shared_ptr<BRepFill_MultiLine> , AppCont_Function>>(m.attr("BRepFill_MultiLine"))
    // constructors
    // custom constructors
    // methods
        .def("FirstParameter",
             (Standard_Real (BRepFill_MultiLine::*)() const) static_cast<Standard_Real (BRepFill_MultiLine::*)() const>(&BRepFill_MultiLine::FirstParameter),
             R"#(returns the first parameter of the Bissectrice.)#" )
        .def("LastParameter",
             (Standard_Real (BRepFill_MultiLine::*)() const) static_cast<Standard_Real (BRepFill_MultiLine::*)() const>(&BRepFill_MultiLine::LastParameter),
             R"#(returns the last parameter of the Bissectrice.)#" )
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
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_OffsetWire , shared_ptr<BRepFill_OffsetWire> >>(m.attr("BRepFill_OffsetWire"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Pipe , shared_ptr<BRepFill_Pipe> >>(m.attr("BRepFill_Pipe"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_PipeShell ,opencascade::handle<BRepFill_PipeShell> , Standard_Transient>>(m.attr("BRepFill_PipeShell"))
    // constructors
    // custom constructors
    // methods
        .def("Profiles",
             (void (BRepFill_PipeShell::*)( NCollection_List<TopoDS_Shape> & ) ) static_cast<void (BRepFill_PipeShell::*)( NCollection_List<TopoDS_Shape> & ) >(&BRepFill_PipeShell::Profiles),
             R"#(Returns the list of original profiles)#"  , py::arg("theProfiles"))
        .def("Spine",
             (const TopoDS_Wire & (BRepFill_PipeShell::*)() ) static_cast<const TopoDS_Wire & (BRepFill_PipeShell::*)() >(&BRepFill_PipeShell::Spine),
             R"#(Returns the spine)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_PipeShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_PipeShell::*)() const>(&BRepFill_PipeShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_PipeShell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Section , shared_ptr<BRepFill_Section> >>(m.attr("BRepFill_Section"))
    // constructors
    // custom constructors
    // methods
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
        .def("IsConstant",
             (Standard_Boolean (BRepFill_SectionLaw::*)() const) static_cast<Standard_Boolean (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::IsConstant),
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
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_SectionLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_SectionLaw::*)() const>(&BRepFill_SectionLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_SectionLaw::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_SectionPlacement , shared_ptr<BRepFill_SectionPlacement> >>(m.attr("BRepFill_SectionPlacement"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Sweep , shared_ptr<BRepFill_Sweep> >>(m.attr("BRepFill_Sweep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_TrimEdgeTool , shared_ptr<BRepFill_TrimEdgeTool> >>(m.attr("BRepFill_TrimEdgeTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_TrimShellCorner , shared_ptr<BRepFill_TrimShellCorner> >>(m.attr("BRepFill_TrimShellCorner"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_TrimSurfaceTool , shared_ptr<BRepFill_TrimSurfaceTool> >>(m.attr("BRepFill_TrimSurfaceTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_ACRLaw ,opencascade::handle<BRepFill_ACRLaw> , BRepFill_LocationLaw>>(m.attr("BRepFill_ACRLaw"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_Edge3DLaw ,opencascade::handle<BRepFill_Edge3DLaw> , BRepFill_LocationLaw>>(m.attr("BRepFill_Edge3DLaw"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_EdgeOnSurfLaw ,opencascade::handle<BRepFill_EdgeOnSurfLaw> , BRepFill_LocationLaw>>(m.attr("BRepFill_EdgeOnSurfLaw"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_EdgeOnSurfLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_EdgeOnSurfLaw::*)() const>(&BRepFill_EdgeOnSurfLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_EdgeOnSurfLaw::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_NSections ,opencascade::handle<BRepFill_NSections> , BRepFill_SectionLaw>>(m.attr("BRepFill_NSections"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_ShapeLaw ,opencascade::handle<BRepFill_ShapeLaw> , BRepFill_SectionLaw>>(m.attr("BRepFill_ShapeLaw"))
    // constructors
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepFill_DraftLaw ,opencascade::handle<BRepFill_DraftLaw> , BRepFill_Edge3DLaw>>(m.attr("BRepFill_DraftLaw"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepFill_DraftLaw::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepFill_DraftLaw::*)() const>(&BRepFill_DraftLaw::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepFill_DraftLaw::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.hxx
// ./opencascade/BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfReal.hxx
// ./opencascade/BRepFill_CurveConstraint.hxx
// ./opencascade/BRepFill_MultiLine.hxx
// ./opencascade/BRepFill_ListIteratorOfListOfOffsetWire.hxx
// ./opencascade/BRepFill_ACRLaw.hxx
// ./opencascade/BRepFill_SectionLaw.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfOrientedShapeListOfShape.hxx
// ./opencascade/BRepFill_ApproxSeewing.hxx
// ./opencascade/BRepFill_Draft.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeHArray2OfShape.hxx
// ./opencascade/BRepFill_Pipe.hxx
// ./opencascade/BRepFill_ListOfOffsetWire.hxx
// ./opencascade/BRepFill_LocationLaw.hxx
// ./opencascade/BRepFill_ShapeLaw.hxx
// ./opencascade/BRepFill_Filling.hxx
// ./opencascade/BRepFill_ComputeCLine.hxx
// ./opencascade/BRepFill_PipeShell.hxx
// ./opencascade/BRepFill_EdgeOnSurfLaw.hxx
// ./opencascade/BRepFill_CompatibleWires.hxx
// ./opencascade/BRepFill.hxx
// ./opencascade/BRepFill_DataMapOfNodeShape.hxx
// ./opencascade/BRepFill_SectionPlacement.hxx
// ./opencascade/BRepFill_DraftLaw.hxx
// ./opencascade/BRepFill_SequenceOfEdgeFaceAndOrder.hxx
// ./opencascade/BRepFill_DataMapOfShapeHArray2OfShape.hxx
// ./opencascade/BRepFill_Evolved.hxx
// ./opencascade/BRepFill_Generator.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.hxx
// ./opencascade/BRepFill_TrimShellCorner.hxx
// ./opencascade/BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfPnt.hxx
// ./opencascade/BRepFill_OffsetWire.hxx
// ./opencascade/BRepFill_EdgeFaceAndOrder.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfShapeSequenceOfPnt.hxx
// ./opencascade/BRepFill_TypeOfContact.hxx
// ./opencascade/BRepFill_AdvancedEvolved.hxx
// ./opencascade/BRepFill_TrimEdgeTool.hxx
// ./opencascade/BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx
// ./opencascade/BRepFill_TransitionStyle.hxx
// ./opencascade/BRepFill_Section.hxx
// ./opencascade/BRepFill_FaceAndOrder.hxx
// ./opencascade/BRepFill_DataMapIteratorOfDataMapOfNodeShape.hxx
// ./opencascade/BRepFill_NSections.hxx
// ./opencascade/BRepFill_TrimSurfaceTool.hxx
// ./opencascade/BRepFill_SequenceOfFaceAndOrder.hxx
// ./opencascade/BRepFill_DataMapOfOrientedShapeListOfShape.hxx
// ./opencascade/BRepFill_Sweep.hxx
// ./opencascade/BRepFill_DataMapOfShapeSequenceOfReal.hxx
// ./opencascade/BRepFill_OffsetAncestors.hxx
// ./opencascade/BRepFill_Edge3DLaw.hxx
// ./opencascade/BRepFill_SequenceOfSection.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<opencascade::handle<MAT_Node>, TopTools_DataMapOfShapeShape, TColStd_MapTransientHasher>(m,"BRepFill_DataMapOfNodeDataMapOfShapeShape");
    register_template_NCollection_List<BRepFill_OffsetWire>(m,"BRepFill_ListOfOffsetWire");
    register_template_NCollection_DataMap<opencascade::handle<MAT_Node>, TopoDS_Shape, TColStd_MapTransientHasher>(m,"BRepFill_DataMapOfNodeShape");
    register_template_NCollection_Sequence<BRepFill_EdgeFaceAndOrder>(m,"BRepFill_SequenceOfEdgeFaceAndOrder");
    register_template_NCollection_IndexedDataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_OrientedShapeMapHasher>(m,"BRepFill_IndexedDataMapOfOrientedShapeListOfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TColgp_SequenceOfPnt, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeSequenceOfPnt");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_DataMapOfShapeListOfShape, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeDataMapOfShapeListOfShape");
    register_template_NCollection_Sequence<BRepFill_FaceAndOrder>(m,"BRepFill_SequenceOfFaceAndOrder");
    register_template_NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_OrientedShapeMapHasher>(m,"BRepFill_DataMapOfOrientedShapeListOfShape");
    register_template_NCollection_DataMap<TopoDS_Shape, TColStd_SequenceOfReal, TopTools_ShapeMapHasher>(m,"BRepFill_DataMapOfShapeSequenceOfReal");
    register_template_NCollection_Sequence<BRepFill_Section>(m,"BRepFill_SequenceOfSection");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
