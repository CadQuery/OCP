
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRep_Builder.hxx>
#include <Geom_Surface.hxx>
#include <gp_Pln.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pln.hxx>
#include <gp_Lin.hxx>

// module includes
#include <BRepPrim_Builder.hxx>
#include <BRepPrim_Cone.hxx>
#include <BRepPrim_Cylinder.hxx>
#include <BRepPrim_Direction.hxx>
#include <BRepPrim_FaceBuilder.hxx>
#include <BRepPrim_GWedge.hxx>
#include <BRepPrim_OneAxis.hxx>
#include <BRepPrim_Revolution.hxx>
#include <BRepPrim_Sphere.hxx>
#include <BRepPrim_Torus.hxx>
#include <BRepPrim_Wedge.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepPrim(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepPrim"));


//Python trampoline classes
    class Py_BRepPrim_OneAxis : public BRepPrim_OneAxis{
    public:
        using BRepPrim_OneAxis::BRepPrim_OneAxis;


        // public pure virtual
        TopoDS_Face MakeEmptyLateralFace() const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Face,BRepPrim_OneAxis,MakeEmptyLateralFace,) };
        TopoDS_Edge MakeEmptyMeridianEdge(const Standard_Real Ang) const  override { PYBIND11_OVERLOAD_PURE(TopoDS_Edge,BRepPrim_OneAxis,MakeEmptyMeridianEdge,Ang) };
        void SetMeridianPCurve(TopoDS_Edge & E,const TopoDS_Face & F) const  override { PYBIND11_OVERLOAD_PURE(void,BRepPrim_OneAxis,SetMeridianPCurve,E,F) };
        gp_Pnt2d MeridianValue(const Standard_Real V) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,BRepPrim_OneAxis,MeridianValue,V) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<BRepPrim_Builder , shared_ptr<BRepPrim_Builder> >>(m.attr("BRepPrim_Builder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const BRep_Builder & >()  , py::arg("B") )
    // custom constructors
    // methods
        .def("Builder",
             (const BRep_Builder & (BRepPrim_Builder::*)() const) static_cast<const BRep_Builder & (BRepPrim_Builder::*)() const>(&BRepPrim_Builder::Builder),
             R"#(None)#" )
        .def("MakeShell",
             (void (BRepPrim_Builder::*)( TopoDS_Shell & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Shell & ) const>(&BRepPrim_Builder::MakeShell),
             R"#(Make a empty Shell.)#"  , py::arg("S"))
        .def("MakeFace",
             (void (BRepPrim_Builder::*)( TopoDS_Face & , const gp_Pln & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Face & , const gp_Pln & ) const>(&BRepPrim_Builder::MakeFace),
             R"#(Returns in <F> a Face built with the plane equation <P>. Used by all primitives.)#"  , py::arg("F"),  py::arg("P"))
        .def("MakeWire",
             (void (BRepPrim_Builder::*)( TopoDS_Wire & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Wire & ) const>(&BRepPrim_Builder::MakeWire),
             R"#(Returns in <W> an empty Wire.)#"  , py::arg("W"))
        .def("MakeDegeneratedEdge",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & ) const>(&BRepPrim_Builder::MakeDegeneratedEdge),
             R"#(Returns in <E> a degenerated edge.)#"  , py::arg("E"))
        .def("MakeEdge",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const gp_Lin & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const gp_Lin & ) const>(&BRepPrim_Builder::MakeEdge),
             R"#(Returns in <E> an Edge built with the line equation <L>.)#"  , py::arg("E"),  py::arg("L"))
        .def("MakeEdge",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const gp_Circ & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const gp_Circ & ) const>(&BRepPrim_Builder::MakeEdge),
             R"#(Returns in <E> an Edge built with the circle equation <C>.)#"  , py::arg("E"),  py::arg("C"))
        .def("SetPCurve",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Face & , const gp_Lin2d & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Face & , const gp_Lin2d & ) const>(&BRepPrim_Builder::SetPCurve),
             R"#(Sets the line <L> to be the curve representing the edge <E> in the parametric space of the surface of <F>.)#"  , py::arg("E"),  py::arg("F"),  py::arg("L"))
        .def("SetPCurve",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Face & , const gp_Lin2d & , const gp_Lin2d & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Face & , const gp_Lin2d & , const gp_Lin2d & ) const>(&BRepPrim_Builder::SetPCurve),
             R"#(Sets the lines <L1,L2> to be the curves representing the edge <E> in the parametric space of the closed surface of <F>.)#"  , py::arg("E"),  py::arg("F"),  py::arg("L1"),  py::arg("L2"))
        .def("SetPCurve",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Face & , const gp_Circ2d & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Face & , const gp_Circ2d & ) const>(&BRepPrim_Builder::SetPCurve),
             R"#(Sets the circle <C> to be the curve representing the edge <E> in the parametric space of the surface of <F>.)#"  , py::arg("E"),  py::arg("F"),  py::arg("C"))
        .def("MakeVertex",
             (void (BRepPrim_Builder::*)( TopoDS_Vertex & , const gp_Pnt & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Vertex & , const gp_Pnt & ) const>(&BRepPrim_Builder::MakeVertex),
             R"#(Returns in <V> a Vertex built with the point <P>.)#"  , py::arg("V"),  py::arg("P"))
        .def("ReverseFace",
             (void (BRepPrim_Builder::*)( TopoDS_Face & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Face & ) const>(&BRepPrim_Builder::ReverseFace),
             R"#(Reverses the Face <F>.)#"  , py::arg("F"))
        .def("AddEdgeVertex",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Vertex & , const Standard_Real , const Standard_Boolean ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Vertex & , const Standard_Real , const Standard_Boolean ) const>(&BRepPrim_Builder::AddEdgeVertex),
             R"#(Adds the Vertex <V> in the Edge <E>. <P> is the parameter of the vertex on the edge. If direct is False the Vertex is reversed.)#"  , py::arg("E"),  py::arg("V"),  py::arg("P"),  py::arg("direct"))
        .def("AddEdgeVertex",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) const>(&BRepPrim_Builder::AddEdgeVertex),
             R"#(Adds the Vertex <V> in the Edge <E>. <P1,P2> are the parameters of the vertex on the closed edge.)#"  , py::arg("E"),  py::arg("V"),  py::arg("P1"),  py::arg("P2"))
        .def("SetParameters",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & , const TopoDS_Vertex & , const Standard_Real , const Standard_Real ) const>(&BRepPrim_Builder::SetParameters),
             R"#(<P1,P2> are the parameters of the vertex on the edge. The edge is a closed curve.)#"  , py::arg("E"),  py::arg("V"),  py::arg("P1"),  py::arg("P2"))
        .def("AddWireEdge",
             (void (BRepPrim_Builder::*)( TopoDS_Wire & , const TopoDS_Edge & , const Standard_Boolean ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Wire & , const TopoDS_Edge & , const Standard_Boolean ) const>(&BRepPrim_Builder::AddWireEdge),
             R"#(Adds the Edge <E> in the Wire <W>, if direct is False the Edge is reversed.)#"  , py::arg("W"),  py::arg("E"),  py::arg("direct"))
        .def("AddFaceWire",
             (void (BRepPrim_Builder::*)( TopoDS_Face & , const TopoDS_Wire & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Face & , const TopoDS_Wire & ) const>(&BRepPrim_Builder::AddFaceWire),
             R"#(Adds the Wire <W> in the Face <F>.)#"  , py::arg("F"),  py::arg("W"))
        .def("AddShellFace",
             (void (BRepPrim_Builder::*)( TopoDS_Shell & , const TopoDS_Face & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Shell & , const TopoDS_Face & ) const>(&BRepPrim_Builder::AddShellFace),
             R"#(Adds the Face <F> in the Shell <Sh>.)#"  , py::arg("Sh"),  py::arg("F"))
        .def("CompleteEdge",
             (void (BRepPrim_Builder::*)( TopoDS_Edge & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Edge & ) const>(&BRepPrim_Builder::CompleteEdge),
             R"#(This is called once an edge is completed. It gives the opportunity to perform any post treatment.)#"  , py::arg("E"))
        .def("CompleteWire",
             (void (BRepPrim_Builder::*)( TopoDS_Wire & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Wire & ) const>(&BRepPrim_Builder::CompleteWire),
             R"#(This is called once a wire is completed. It gives the opportunity to perform any post treatment.)#"  , py::arg("W"))
        .def("CompleteFace",
             (void (BRepPrim_Builder::*)( TopoDS_Face & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Face & ) const>(&BRepPrim_Builder::CompleteFace),
             R"#(This is called once a face is completed. It gives the opportunity to perform any post treatment.)#"  , py::arg("F"))
        .def("CompleteShell",
             (void (BRepPrim_Builder::*)( TopoDS_Shell & ) const) static_cast<void (BRepPrim_Builder::*)( TopoDS_Shell & ) const>(&BRepPrim_Builder::CompleteShell),
             R"#(This is called once a shell is completed. It gives the opportunity to perform any post treatment.)#"  , py::arg("S"))
        .def("Builder",
             (const BRep_Builder & (BRepPrim_Builder::*)() const) static_cast<const BRep_Builder & (BRepPrim_Builder::*)() const>(&BRepPrim_Builder::Builder),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_FaceBuilder , shared_ptr<BRepPrim_FaceBuilder> >>(m.attr("BRepPrim_FaceBuilder"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const BRep_Builder &,const opencascade::handle<Geom_Surface> & >()  , py::arg("B"),  py::arg("S") )
        .def(py::init< const BRep_Builder &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("B"),  py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepPrim_FaceBuilder::*)( const BRep_Builder & , const opencascade::handle<Geom_Surface> & ) ) static_cast<void (BRepPrim_FaceBuilder::*)( const BRep_Builder & , const opencascade::handle<Geom_Surface> & ) >(&BRepPrim_FaceBuilder::Init),
             R"#(None)#"  , py::arg("B"),  py::arg("S"))
        .def("Init",
             (void (BRepPrim_FaceBuilder::*)( const BRep_Builder & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) ) static_cast<void (BRepPrim_FaceBuilder::*)( const BRep_Builder & , const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real ) >(&BRepPrim_FaceBuilder::Init),
             R"#(None)#"  , py::arg("B"),  py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"))
        .def("Face",
             (const TopoDS_Face & (BRepPrim_FaceBuilder::*)() const) static_cast<const TopoDS_Face & (BRepPrim_FaceBuilder::*)() const>(&BRepPrim_FaceBuilder::Face),
             R"#(None)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepPrim_FaceBuilder::*)( const Standard_Integer ) const) static_cast<const TopoDS_Edge & (BRepPrim_FaceBuilder::*)( const Standard_Integer ) const>(&BRepPrim_FaceBuilder::Edge),
             R"#(Returns the edge of index <I> 1 - Edge VMin 2 - Edge UMax 3 - Edge VMax 4 - Edge UMin)#"  , py::arg("I"))
        .def("Vertex",
             (const TopoDS_Vertex & (BRepPrim_FaceBuilder::*)( const Standard_Integer ) const) static_cast<const TopoDS_Vertex & (BRepPrim_FaceBuilder::*)( const Standard_Integer ) const>(&BRepPrim_FaceBuilder::Vertex),
             R"#(Returns the vertex of index <I> 1 - Vertex UMin,VMin 2 - Vertex UMax,VMin 3 - Vertex UMax,VMax 4 - Vertex UMin,VMax)#"  , py::arg("I"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_GWedge , shared_ptr<BRepPrim_GWedge> >>(m.attr("BRepPrim_GWedge"))
    // constructors
        .def(py::init< const BRepPrim_Builder &,const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("B"),  py::arg("Axes"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz") )
        .def(py::init< const BRepPrim_Builder &,const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("B"),  py::arg("Axes"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz"),  py::arg("ltx") )
        .def(py::init< const BRepPrim_Builder &,const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("B"),  py::arg("Axes"),  py::arg("xmin"),  py::arg("ymin"),  py::arg("zmin"),  py::arg("z2min"),  py::arg("x2min"),  py::arg("xmax"),  py::arg("ymax"),  py::arg("zmax"),  py::arg("z2max"),  py::arg("x2max") )
    // custom constructors
    // methods
        .def("Axes",
             (gp_Ax2 (BRepPrim_GWedge::*)() const) static_cast<gp_Ax2 (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::Axes),
             R"#(Returns the coordinates system from <me>.)#" )
        .def("GetXMin",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetXMin),
             R"#(Returns Xmin value from <me>.)#" )
        .def("GetYMin",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetYMin),
             R"#(Returns YMin value from <me>.)#" )
        .def("GetZMin",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetZMin),
             R"#(Returns ZMin value from <me>.)#" )
        .def("GetZ2Min",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetZ2Min),
             R"#(Returns Z2Min value from <me>.)#" )
        .def("GetX2Min",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetX2Min),
             R"#(Returns X2Min value from <me>.)#" )
        .def("GetXMax",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetXMax),
             R"#(Returns XMax value from <me>.)#" )
        .def("GetYMax",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetYMax),
             R"#(Returns YMax value from <me>.)#" )
        .def("GetZMax",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetZMax),
             R"#(Returns ZMax value from <me>.)#" )
        .def("GetZ2Max",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetZ2Max),
             R"#(Returns Z2Max value from <me>.)#" )
        .def("GetX2Max",
             (Standard_Real (BRepPrim_GWedge::*)() const) static_cast<Standard_Real (BRepPrim_GWedge::*)() const>(&BRepPrim_GWedge::GetX2Max),
             R"#(Returns X2Max value from <me>.)#" )
        .def("Open",
             (void (BRepPrim_GWedge::*)( const BRepPrim_Direction ) ) static_cast<void (BRepPrim_GWedge::*)( const BRepPrim_Direction ) >(&BRepPrim_GWedge::Open),
             R"#(Opens <me> in <d1> direction. A face and its edges or vertices are said nonexistant.)#"  , py::arg("d1"))
        .def("Close",
             (void (BRepPrim_GWedge::*)( const BRepPrim_Direction ) ) static_cast<void (BRepPrim_GWedge::*)( const BRepPrim_Direction ) >(&BRepPrim_GWedge::Close),
             R"#(Closes <me> in <d1> direction. A face and its edges or vertices are said existant.)#"  , py::arg("d1"))
        .def("IsInfinite",
             (Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction ) const) static_cast<Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction ) const>(&BRepPrim_GWedge::IsInfinite),
             R"#(Returns True if <me> is open in <d1> direction.)#"  , py::arg("d1"))
        .def("Shell",
             (const TopoDS_Shell & (BRepPrim_GWedge::*)() ) static_cast<const TopoDS_Shell & (BRepPrim_GWedge::*)() >(&BRepPrim_GWedge::Shell),
             R"#(Returns the Shell containing the Faces of <me>.)#" )
        .def("HasFace",
             (Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction ) const) static_cast<Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction ) const>(&BRepPrim_GWedge::HasFace),
             R"#(Returns True if <me> has a Face in <d1> direction.)#"  , py::arg("d1"))
        .def("Face",
             (const TopoDS_Face & (BRepPrim_GWedge::*)( const BRepPrim_Direction ) ) static_cast<const TopoDS_Face & (BRepPrim_GWedge::*)( const BRepPrim_Direction ) >(&BRepPrim_GWedge::Face),
             R"#(Returns the Face of <me> located in <d1> direction.)#"  , py::arg("d1"))
        .def("Plane",
             (gp_Pln (BRepPrim_GWedge::*)( const BRepPrim_Direction ) ) static_cast<gp_Pln (BRepPrim_GWedge::*)( const BRepPrim_Direction ) >(&BRepPrim_GWedge::Plane),
             R"#(Returns the plane of the Face of <me> located in <d1> direction.)#"  , py::arg("d1"))
        .def("HasWire",
             (Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction ) const) static_cast<Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction ) const>(&BRepPrim_GWedge::HasWire),
             R"#(Returns True if <me> has a Wire in <d1> direction.)#"  , py::arg("d1"))
        .def("Wire",
             (const TopoDS_Wire & (BRepPrim_GWedge::*)( const BRepPrim_Direction ) ) static_cast<const TopoDS_Wire & (BRepPrim_GWedge::*)( const BRepPrim_Direction ) >(&BRepPrim_GWedge::Wire),
             R"#(Returns the Wire of <me> located in <d1> direction.)#"  , py::arg("d1"))
        .def("HasEdge",
             (Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction ) const) static_cast<Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction ) const>(&BRepPrim_GWedge::HasEdge),
             R"#(Returns True if <me> has an Edge in <d1><d2> direction.)#"  , py::arg("d1"),  py::arg("d2"))
        .def("Edge",
             (const TopoDS_Edge & (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction ) ) static_cast<const TopoDS_Edge & (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction ) >(&BRepPrim_GWedge::Edge),
             R"#(Returns the Edge of <me> located in <d1><d2> direction.)#"  , py::arg("d1"),  py::arg("d2"))
        .def("Line",
             (gp_Lin (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction ) ) static_cast<gp_Lin (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction ) >(&BRepPrim_GWedge::Line),
             R"#(Returns the line of the Edge of <me> located in <d1><d2> direction.)#"  , py::arg("d1"),  py::arg("d2"))
        .def("HasVertex",
             (Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction , const BRepPrim_Direction ) const) static_cast<Standard_Boolean (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction , const BRepPrim_Direction ) const>(&BRepPrim_GWedge::HasVertex),
             R"#(Returns True if <me> has a Vertex in <d1><d2><d3> direction.)#"  , py::arg("d1"),  py::arg("d2"),  py::arg("d3"))
        .def("Vertex",
             (const TopoDS_Vertex & (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction , const BRepPrim_Direction ) ) static_cast<const TopoDS_Vertex & (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction , const BRepPrim_Direction ) >(&BRepPrim_GWedge::Vertex),
             R"#(Returns the Vertex of <me> located in <d1><d2><d3> direction.)#"  , py::arg("d1"),  py::arg("d2"),  py::arg("d3"))
        .def("Point",
             (gp_Pnt (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction , const BRepPrim_Direction ) ) static_cast<gp_Pnt (BRepPrim_GWedge::*)( const BRepPrim_Direction , const BRepPrim_Direction , const BRepPrim_Direction ) >(&BRepPrim_GWedge::Point),
             R"#(Returns the point of the Vertex of <me> located in <d1><d2><d3> direction.)#"  , py::arg("d1"),  py::arg("d2"),  py::arg("d3"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_OneAxis , shared_ptr<BRepPrim_OneAxis>,Py_BRepPrim_OneAxis >>(m.attr("BRepPrim_OneAxis"))
    // constructors
    // custom constructors
    // methods
        .def("SetMeridianOffset",
             (void (BRepPrim_OneAxis::*)( const Standard_Real ) ) static_cast<void (BRepPrim_OneAxis::*)( const Standard_Real ) >(&BRepPrim_OneAxis::SetMeridianOffset),
             R"#(The MeridianOffset is added to the parameters on the meridian curve and to the V values of the pcurves. This is used for the sphere for example, to give a range on the meridian edge which is not VMin, VMax.)#"  , py::arg("MeridianOffset")=static_cast<const Standard_Real>(0))
        .def("Axes",
             (const gp_Ax2 & (BRepPrim_OneAxis::*)() const) static_cast<const gp_Ax2 & (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::Axes),
             R"#(Returns the Ax2 from <me>.)#" )
        .def("Axes",
             (void (BRepPrim_OneAxis::*)( const gp_Ax2 & ) ) static_cast<void (BRepPrim_OneAxis::*)( const gp_Ax2 & ) >(&BRepPrim_OneAxis::Axes),
             R"#(None)#"  , py::arg("A"))
        .def("Angle",
             (Standard_Real (BRepPrim_OneAxis::*)() const) static_cast<Standard_Real (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::Angle),
             R"#(None)#" )
        .def("Angle",
             (void (BRepPrim_OneAxis::*)( const Standard_Real ) ) static_cast<void (BRepPrim_OneAxis::*)( const Standard_Real ) >(&BRepPrim_OneAxis::Angle),
             R"#(None)#"  , py::arg("A"))
        .def("VMin",
             (Standard_Real (BRepPrim_OneAxis::*)() const) static_cast<Standard_Real (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::VMin),
             R"#(None)#" )
        .def("VMin",
             (void (BRepPrim_OneAxis::*)( const Standard_Real ) ) static_cast<void (BRepPrim_OneAxis::*)( const Standard_Real ) >(&BRepPrim_OneAxis::VMin),
             R"#(None)#"  , py::arg("V"))
        .def("VMax",
             (Standard_Real (BRepPrim_OneAxis::*)() const) static_cast<Standard_Real (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::VMax),
             R"#(None)#" )
        .def("VMax",
             (void (BRepPrim_OneAxis::*)( const Standard_Real ) ) static_cast<void (BRepPrim_OneAxis::*)( const Standard_Real ) >(&BRepPrim_OneAxis::VMax),
             R"#(None)#"  , py::arg("V"))
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_OneAxis::*)() const) static_cast<TopoDS_Face (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::MakeEmptyLateralFace),
             R"#(Returns a face with no edges. The surface is the lateral surface with normals pointing outward. The U parameter is the angle with the origin on the X axis. The V parameter is the parameter of the meridian.)#" )
        .def("MakeEmptyMeridianEdge",
             (TopoDS_Edge (BRepPrim_OneAxis::*)( const Standard_Real ) const) static_cast<TopoDS_Edge (BRepPrim_OneAxis::*)( const Standard_Real ) const>(&BRepPrim_OneAxis::MakeEmptyMeridianEdge),
             R"#(Returns an edge with a 3D curve made from the meridian in the XZ plane rotated by <Ang> around the Z-axis. Ang may be 0 or myAngle.)#"  , py::arg("Ang"))
        .def("SetMeridianPCurve",
             (void (BRepPrim_OneAxis::*)( TopoDS_Edge & , const TopoDS_Face & ) const) static_cast<void (BRepPrim_OneAxis::*)( TopoDS_Edge & , const TopoDS_Face & ) const>(&BRepPrim_OneAxis::SetMeridianPCurve),
             R"#(Sets the parametric curve of the edge <E> in the face <F> to be the 2d representation of the meridian.)#"  , py::arg("E"),  py::arg("F"))
        .def("MeridianValue",
             (gp_Pnt2d (BRepPrim_OneAxis::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepPrim_OneAxis::*)( const Standard_Real ) const>(&BRepPrim_OneAxis::MeridianValue),
             R"#(Returns the meridian point at parameter <V> in the plane XZ.)#"  , py::arg("V"))
        .def("MeridianOnAxis",
             (Standard_Boolean (BRepPrim_OneAxis::*)( const Standard_Real ) const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)( const Standard_Real ) const>(&BRepPrim_OneAxis::MeridianOnAxis),
             R"#(Returns True if the point of parameter <V> on the meridian is on the Axis. Default implementation is Abs(MeridianValue(V).X()) < Precision::Confusion())#"  , py::arg("V"))
        .def("MeridianClosed",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::MeridianClosed),
             R"#(Returns True if the meridian is closed. Default implementation is MeridianValue(VMin).IsEqual(MeridianValue(VMax), Precision::Confusion()))#" )
        .def("VMaxInfinite",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::VMaxInfinite),
             R"#(Returns True if VMax is infinite. Default Precision::IsPositiveInfinite(VMax);)#" )
        .def("VMinInfinite",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::VMinInfinite),
             R"#(Returns True if VMin is infinite. Default Precision::IsNegativeInfinite(VMax);)#" )
        .def("HasTop",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::HasTop),
             R"#(Returns True if there is a top face.)#" )
        .def("HasBottom",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::HasBottom),
             R"#(Returns True if there is a bottom face.)#" )
        .def("HasSides",
             (Standard_Boolean (BRepPrim_OneAxis::*)() const) static_cast<Standard_Boolean (BRepPrim_OneAxis::*)() const>(&BRepPrim_OneAxis::HasSides),
             R"#(Returns True if there are Start and End faces.)#" )
        .def("Shell",
             (const TopoDS_Shell & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Shell & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::Shell),
             R"#(Returns the Shell containing all the Faces of the primitive.)#" )
        .def("LateralFace",
             (const TopoDS_Face & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Face & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::LateralFace),
             R"#(Returns the lateral Face. It is oriented toward the outside of the primitive.)#" )
        .def("TopFace",
             (const TopoDS_Face & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Face & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::TopFace),
             R"#(Returns the top planar Face. It is Oriented toward the +Z axis (outside).)#" )
        .def("BottomFace",
             (const TopoDS_Face & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Face & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::BottomFace),
             R"#(Returns the Bottom planar Face. It is Oriented toward the -Z axis (outside).)#" )
        .def("StartFace",
             (const TopoDS_Face & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Face & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::StartFace),
             R"#(Returns the Face starting the slice, it is oriented toward the exterior of the primitive.)#" )
        .def("EndFace",
             (const TopoDS_Face & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Face & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::EndFace),
             R"#(Returns the Face ending the slice, it is oriented toward the exterior of the primitive.)#" )
        .def("LateralWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::LateralWire),
             R"#(Returns the wire in the lateral face.)#" )
        .def("LateralStartWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::LateralStartWire),
             R"#(Returns the wire in the lateral face with the start edge.)#" )
        .def("LateralEndWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::LateralEndWire),
             R"#(Returns the wire with in lateral face with the end edge.)#" )
        .def("TopWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::TopWire),
             R"#(Returns the wire in the top face.)#" )
        .def("BottomWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::BottomWire),
             R"#(Returns the wire in the bottom face.)#" )
        .def("StartWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::StartWire),
             R"#(Returns the wire in the start face.)#" )
        .def("AxisStartWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::AxisStartWire),
             R"#(Returns the wire in the start face with the AxisEdge.)#" )
        .def("EndWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::EndWire),
             R"#(Returns the Wire in the end face.)#" )
        .def("AxisEndWire",
             (const TopoDS_Wire & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Wire & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::AxisEndWire),
             R"#(Returns the Wire in the end face with the AxisEdge.)#" )
        .def("AxisEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::AxisEdge),
             R"#(Returns the Edge built along the Axis and oriented on +Z of the Axis.)#" )
        .def("StartEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::StartEdge),
             R"#(Returns the Edge at angle 0.)#" )
        .def("EndEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::EndEdge),
             R"#(Returns the Edge at angle Angle. If !HasSides() the StartEdge and the EndEdge are the same edge.)#" )
        .def("StartTopEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::StartTopEdge),
             R"#(Returns the linear Edge between start Face and top Face.)#" )
        .def("StartBottomEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::StartBottomEdge),
             R"#(Returns the linear Edge between start Face and bottom Face.)#" )
        .def("EndTopEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::EndTopEdge),
             R"#(Returns the linear Edge between end Face and top Face.)#" )
        .def("EndBottomEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::EndBottomEdge),
             R"#(Returns the linear Edge between end Face and bottom Face.)#" )
        .def("TopEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::TopEdge),
             R"#(Returns the edge at VMax. If MeridianClosed() the TopEdge and the BottomEdge are the same edge.)#" )
        .def("BottomEdge",
             (const TopoDS_Edge & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Edge & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::BottomEdge),
             R"#(Returns the edge at VMin. If MeridianClosed() the TopEdge and the BottomEdge are the same edge.)#" )
        .def("AxisTopVertex",
             (const TopoDS_Vertex & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Vertex & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::AxisTopVertex),
             R"#(Returns the Vertex at the Top altitude on the axis.)#" )
        .def("AxisBottomVertex",
             (const TopoDS_Vertex & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Vertex & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::AxisBottomVertex),
             R"#(Returns the Vertex at the Bottom altitude on the axis.)#" )
        .def("TopStartVertex",
             (const TopoDS_Vertex & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Vertex & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::TopStartVertex),
             R"#(Returns the vertex (0,VMax))#" )
        .def("TopEndVertex",
             (const TopoDS_Vertex & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Vertex & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::TopEndVertex),
             R"#(Returns the vertex (angle,VMax))#" )
        .def("BottomStartVertex",
             (const TopoDS_Vertex & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Vertex & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::BottomStartVertex),
             R"#(Returns the vertex (0,VMin))#" )
        .def("BottomEndVertex",
             (const TopoDS_Vertex & (BRepPrim_OneAxis::*)() ) static_cast<const TopoDS_Vertex & (BRepPrim_OneAxis::*)() >(&BRepPrim_OneAxis::BottomEndVertex),
             R"#(Returns the vertex (angle,VMax))#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Revolution , shared_ptr<BRepPrim_Revolution> , BRepPrim_OneAxis>>(m.attr("BRepPrim_Revolution"))
    // constructors
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const opencascade::handle<Geom_Curve> &,const opencascade::handle<Geom2d_Curve> & >()  , py::arg("A"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("M"),  py::arg("PM") )
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Revolution::*)() const) static_cast<TopoDS_Face (BRepPrim_Revolution::*)() const>(&BRepPrim_Revolution::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
        .def("MakeEmptyMeridianEdge",
             (TopoDS_Edge (BRepPrim_Revolution::*)( const Standard_Real ) const) static_cast<TopoDS_Edge (BRepPrim_Revolution::*)( const Standard_Real ) const>(&BRepPrim_Revolution::MakeEmptyMeridianEdge),
             R"#(Returns an edge with a 3D curve made from the meridian in the XZ plane rotated by <Ang> around the Z-axis. Ang may be 0 or myAngle.)#"  , py::arg("Ang"))
        .def("MeridianValue",
             (gp_Pnt2d (BRepPrim_Revolution::*)( const Standard_Real ) const) static_cast<gp_Pnt2d (BRepPrim_Revolution::*)( const Standard_Real ) const>(&BRepPrim_Revolution::MeridianValue),
             R"#(Returns the meridian point at parameter <V> in the plane XZ.)#"  , py::arg("V"))
        .def("SetMeridianPCurve",
             (void (BRepPrim_Revolution::*)( TopoDS_Edge & , const TopoDS_Face & ) const) static_cast<void (BRepPrim_Revolution::*)( TopoDS_Edge & , const TopoDS_Face & ) const>(&BRepPrim_Revolution::SetMeridianPCurve),
             R"#(Sets the parametric urve of the edge <E> in the face <F> to be the 2d representation of the meridian.)#"  , py::arg("E"),  py::arg("F"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Wedge , shared_ptr<BRepPrim_Wedge> , BRepPrim_GWedge>>(m.attr("BRepPrim_Wedge"))
    // constructors
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("dx"),  py::arg("dy"),  py::arg("dz"),  py::arg("ltx") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("xmin"),  py::arg("ymin"),  py::arg("zmin"),  py::arg("z2min"),  py::arg("x2min"),  py::arg("xmax"),  py::arg("ymax"),  py::arg("zmax"),  py::arg("z2max"),  py::arg("x2max") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Cone , shared_ptr<BRepPrim_Cone> , BRepPrim_Revolution>>(m.attr("BRepPrim_Cone"))
    // constructors
        .def(py::init< const Standard_Real,const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("Angle"),  py::arg("Position"),  py::arg("Height"),  py::arg("Radius")=static_cast<const Standard_Real>(0) )
        .def(py::init< const Standard_Real >()  , py::arg("Angle") )
        .def(py::init< const Standard_Real,const gp_Pnt & >()  , py::arg("Angle"),  py::arg("Apex") )
        .def(py::init< const Standard_Real,const gp_Ax2 & >()  , py::arg("Angle"),  py::arg("Axes") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("R1"),  py::arg("R2"),  py::arg("H") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Center"),  py::arg("R1"),  py::arg("R2"),  py::arg("H") )
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("Axes"),  py::arg("R1"),  py::arg("R2"),  py::arg("H") )
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Cone::*)() const) static_cast<TopoDS_Face (BRepPrim_Cone::*)() const>(&BRepPrim_Cone::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Cylinder , shared_ptr<BRepPrim_Cylinder> , BRepPrim_Revolution>>(m.attr("BRepPrim_Cylinder"))
    // constructors
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("Position"),  py::arg("Radius"),  py::arg("Height") )
        .def(py::init< const Standard_Real >()  , py::arg("Radius") )
        .def(py::init< const gp_Pnt &,const Standard_Real >()  , py::arg("Center"),  py::arg("Radius") )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("Axes"),  py::arg("Radius") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("R"),  py::arg("H") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("Center"),  py::arg("R"),  py::arg("H") )
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Cylinder::*)() const) static_cast<TopoDS_Face (BRepPrim_Cylinder::*)() const>(&BRepPrim_Cylinder::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Sphere , shared_ptr<BRepPrim_Sphere> , BRepPrim_Revolution>>(m.attr("BRepPrim_Sphere"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("Radius") )
        .def(py::init< const gp_Pnt &,const Standard_Real >()  , py::arg("Center"),  py::arg("Radius") )
        .def(py::init< const gp_Ax2 &,const Standard_Real >()  , py::arg("Axes"),  py::arg("Radius") )
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Sphere::*)() const) static_cast<TopoDS_Face (BRepPrim_Sphere::*)() const>(&BRepPrim_Sphere::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepPrim_Torus , shared_ptr<BRepPrim_Torus> , BRepPrim_Revolution>>(m.attr("BRepPrim_Torus"))
    // constructors
        .def(py::init< const gp_Ax2 &,const Standard_Real,const Standard_Real >()  , py::arg("Position"),  py::arg("Major"),  py::arg("Minor") )
        .def(py::init< const Standard_Real,const Standard_Real >()  , py::arg("Major"),  py::arg("Minor") )
        .def(py::init< const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("Center"),  py::arg("Major"),  py::arg("Minor") )
    // custom constructors
    // methods
        .def("MakeEmptyLateralFace",
             (TopoDS_Face (BRepPrim_Torus::*)() const) static_cast<TopoDS_Face (BRepPrim_Torus::*)() const>(&BRepPrim_Torus::MakeEmptyLateralFace),
             R"#(The surface normal should be directed towards the outside.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepPrim_OneAxis.hxx
// ./opencascade/BRepPrim_Wedge.hxx
// ./opencascade/BRepPrim_Torus.hxx
// ./opencascade/BRepPrim_FaceBuilder.hxx
// ./opencascade/BRepPrim_Cylinder.hxx
// ./opencascade/BRepPrim_Sphere.hxx
// ./opencascade/BRepPrim_Builder.hxx
// ./opencascade/BRepPrim_Cone.hxx
// ./opencascade/BRepPrim_GWedge.hxx
// ./opencascade/BRepPrim_Direction.hxx
// ./opencascade/BRepPrim_Revolution.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
