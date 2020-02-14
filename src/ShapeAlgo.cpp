
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeAlgo_AlgoContainer.hxx>
#include <ShapeAlgo_ToolContainer.hxx>
#include <ShapeAlgo_AlgoContainer.hxx>
#include <ShapeAlgo_ToolContainer.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>

// module includes
#include <ShapeAlgo.hxx>
#include <ShapeAlgo_AlgoContainer.hxx>
#include <ShapeAlgo_ToolContainer.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeAlgo(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeAlgo"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ShapeAlgo , shared_ptr<ShapeAlgo>>(m,"ShapeAlgo");

    static_cast<py::class_<ShapeAlgo , shared_ptr<ShapeAlgo>  >>(m.attr("ShapeAlgo"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&ShapeAlgo::Init),
                    R"#(Provides initerface to the algorithms from Shape Healing. Creates and initializes default AlgoContainer.)#" )
        .def_static("SetAlgoContainer_s",
                    (void (*)( const opencascade::handle<ShapeAlgo_AlgoContainer> &  ) ) static_cast<void (*)( const opencascade::handle<ShapeAlgo_AlgoContainer> &  ) >(&ShapeAlgo::SetAlgoContainer),
                    R"#(Sets default AlgoContainer)#"  , py::arg("aContainer"))
        .def_static("AlgoContainer_s",
                    (opencascade::handle<ShapeAlgo_AlgoContainer> (*)() ) static_cast<opencascade::handle<ShapeAlgo_AlgoContainer> (*)() >(&ShapeAlgo::AlgoContainer),
                    R"#(Returns default AlgoContainer)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAlgo_AlgoContainer ,opencascade::handle<ShapeAlgo_AlgoContainer>  , Standard_Transient >>(m.attr("ShapeAlgo_AlgoContainer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetToolContainer",
             (void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<ShapeAlgo_ToolContainer> &  ) ) static_cast<void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<ShapeAlgo_ToolContainer> &  ) >(&ShapeAlgo_AlgoContainer::SetToolContainer),
             R"#(Sets ToolContainer)#"  , py::arg("TC"))
        .def("ToolContainer",
             (opencascade::handle<ShapeAlgo_ToolContainer> (ShapeAlgo_AlgoContainer::*)() const) static_cast<opencascade::handle<ShapeAlgo_ToolContainer> (ShapeAlgo_AlgoContainer::*)() const>(&ShapeAlgo_AlgoContainer::ToolContainer),
             R"#(Returns ToolContainer)#" )
        .def("ConnectNextWire",
             (Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<ShapeAnalysis_Wire> & ,  const opencascade::handle<ShapeExtend_WireData> & ,  const Standard_Real ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) const) static_cast<Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<ShapeAnalysis_Wire> & ,  const opencascade::handle<ShapeExtend_WireData> & ,  const Standard_Real ,  Standard_Real & ,  Standard_Boolean & ,  Standard_Boolean &  ) const>(&ShapeAlgo_AlgoContainer::ConnectNextWire),
             R"#(Finds the best way to connect and connects <nextsewd> to already built <sewd> (in <saw>). Returns False if <nextsewd> cannot be connected, otherwise - True. <maxtol> specifies the maximum tolerance with which <nextsewd> can be added. <distmin> is used to receive the minimum distance between <nextsewd> and <sewd>. <revsewd> is True if <sewd> has been reversed before connecting. <revnextwd> is True if <nextsewd> has been reversed before connecting. Uses functionality of ShapeAnalysis_Wire.)#"  , py::arg("saw"),  py::arg("nextsewd"),  py::arg("maxtol"),  py::arg("distmin"),  py::arg("revsewd"),  py::arg("revnextsewd"))
        .def("ApproxBSplineCurve",
             (void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_BSplineCurve> & ,  NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) const) static_cast<void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_BSplineCurve> & ,  NCollection_Sequence<opencascade::handle<Geom_Curve> > &  ) const>(&ShapeAlgo_AlgoContainer::ApproxBSplineCurve),
             R"#(None)#"  , py::arg("bspline"),  py::arg("seq"))
        .def("ApproxBSplineCurve",
             (void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  NCollection_Sequence<opencascade::handle<Geom2d_Curve> > &  ) const) static_cast<void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  NCollection_Sequence<opencascade::handle<Geom2d_Curve> > &  ) const>(&ShapeAlgo_AlgoContainer::ApproxBSplineCurve),
             R"#(None)#"  , py::arg("bspline"),  py::arg("seq"))
        .def("C0BSplineToSequenceOfC1BSplineCurve",
             (Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_BSplineCurve> & ,  opencascade::handle<TColGeom_HSequenceOfBoundedCurve> &  ) const) static_cast<Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_BSplineCurve> & ,  opencascade::handle<TColGeom_HSequenceOfBoundedCurve> &  ) const>(&ShapeAlgo_AlgoContainer::C0BSplineToSequenceOfC1BSplineCurve),
             R"#(None)#"  , py::arg("BS"),  py::arg("seqBS"))
        .def("C0BSplineToSequenceOfC1BSplineCurve",
             (Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  opencascade::handle<TColGeom2d_HSequenceOfBoundedCurve> &  ) const) static_cast<Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom2d_BSplineCurve> & ,  opencascade::handle<TColGeom2d_HSequenceOfBoundedCurve> &  ) const>(&ShapeAlgo_AlgoContainer::C0BSplineToSequenceOfC1BSplineCurve),
             R"#(Converts C0 B-Spline curve into sequence of C1 B-Spline curves. Calls ShapeUpgrade::C0BSplineToSequenceOfC1BSplineCurve.)#"  , py::arg("BS"),  py::arg("seqBS"))
        .def("C0ShapeToC1Shape",
             (TopoDS_Shape (ShapeAlgo_AlgoContainer::*)( const TopoDS_Shape & ,  const Standard_Real  ) const) static_cast<TopoDS_Shape (ShapeAlgo_AlgoContainer::*)( const TopoDS_Shape & ,  const Standard_Real  ) const>(&ShapeAlgo_AlgoContainer::C0ShapeToC1Shape),
             R"#(Converts a shape on C0 geometry into the shape on C1 geometry.)#"  , py::arg("shape"),  py::arg("tol"))
        .def("ConvertSurfaceToBSpline",
             (opencascade::handle<Geom_BSplineSurface> (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const) static_cast<opencascade::handle<Geom_BSplineSurface> (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) const>(&ShapeAlgo_AlgoContainer::ConvertSurfaceToBSpline),
             R"#(Converts a surface to B-Spline. Uses ShapeConstruct.)#"  , py::arg("surf"),  py::arg("UF"),  py::arg("UL"),  py::arg("VF"),  py::arg("VL"))
        .def("HomoWires",
             (Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const TopoDS_Wire & ,  const TopoDS_Wire & ,  TopoDS_Wire & ,  TopoDS_Wire & ,  const Standard_Boolean  ) const) static_cast<Standard_Boolean (ShapeAlgo_AlgoContainer::*)( const TopoDS_Wire & ,  const TopoDS_Wire & ,  TopoDS_Wire & ,  TopoDS_Wire & ,  const Standard_Boolean  ) const>(&ShapeAlgo_AlgoContainer::HomoWires),
             R"#(Return 2 wires with the same number of edges. The both Edges number i of these wires have got the same ratio between theirs parameter lengths and their wire parameter lengths.)#"  , py::arg("wireIn1"),  py::arg("wireIn2"),  py::arg("wireOut1"),  py::arg("wireOut2"),  py::arg("byParam"))
        .def("OuterWire",
             (TopoDS_Wire (ShapeAlgo_AlgoContainer::*)( const TopoDS_Face &  ) const) static_cast<TopoDS_Wire (ShapeAlgo_AlgoContainer::*)( const TopoDS_Face &  ) const>(&ShapeAlgo_AlgoContainer::OuterWire),
             R"#(Returns the outer wire on the face <Face>.)#"  , py::arg("face"))
        .def("ConvertToPeriodic",
             (opencascade::handle<Geom_Surface> (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_Surface> &  ) const) static_cast<opencascade::handle<Geom_Surface> (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_Surface> &  ) const>(&ShapeAlgo_AlgoContainer::ConvertToPeriodic),
             R"#(Converts surface to periodic form. Calls ShapeCustom_Surface.)#"  , py::arg("surf"))
        .def("ConvertCurveToBSpline",
             (opencascade::handle<Geom_BSplineCurve> (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<opencascade::handle<Geom_BSplineCurve> (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const GeomAbs_Shape ,  const Standard_Integer ,  const Standard_Integer  ) const>(&ShapeAlgo_AlgoContainer::ConvertCurveToBSpline),
             R"#(Convert Geom_Curve to Geom_BSplineCurve)#"  , py::arg("C3D"),  py::arg("First"),  py::arg("Last"),  py::arg("Tol3d"),  py::arg("Continuity"),  py::arg("MaxSegments"),  py::arg("MaxDegree"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAlgo_AlgoContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAlgo_AlgoContainer::*)() const>(&ShapeAlgo_AlgoContainer::DynamicType),
             R"#(None)#" )
        .def("SetToolContainer",
             (void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<ShapeAlgo_ToolContainer> &  ) ) static_cast<void (ShapeAlgo_AlgoContainer::*)( const opencascade::handle<ShapeAlgo_ToolContainer> &  ) >(&ShapeAlgo_AlgoContainer::SetToolContainer),
             R"#(Sets ToolContainer)#"  , py::arg("TC"))
        .def("ToolContainer",
             (opencascade::handle<ShapeAlgo_ToolContainer> (ShapeAlgo_AlgoContainer::*)() const) static_cast<opencascade::handle<ShapeAlgo_ToolContainer> (ShapeAlgo_AlgoContainer::*)() const>(&ShapeAlgo_AlgoContainer::ToolContainer),
             R"#(Returns ToolContainer)#" )
    // methods using call by reference i.s.o. return
        .def("GetFaceUVBounds",
             []( ShapeAlgo_AlgoContainer &self , const TopoDS_Face & F ){ Standard_Real  Umin; Standard_Real  Umax; Standard_Real  Vmin; Standard_Real  Vmax; self.GetFaceUVBounds(F,Umin,Umax,Vmin,Vmax); return std::make_tuple(Umin,Umax,Vmin,Vmax); },
             R"#(Computes exact UV bounds of all wires on the face)#"  , py::arg("F"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAlgo_AlgoContainer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAlgo_AlgoContainer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeAlgo_ToolContainer ,opencascade::handle<ShapeAlgo_ToolContainer>  , Standard_Transient >>(m.attr("ShapeAlgo_ToolContainer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("FixShape",
             (opencascade::handle<ShapeFix_Shape> (ShapeAlgo_ToolContainer::*)() const) static_cast<opencascade::handle<ShapeFix_Shape> (ShapeAlgo_ToolContainer::*)() const>(&ShapeAlgo_ToolContainer::FixShape),
             R"#(Returns ShapeFix_Shape)#" )
        .def("EdgeProjAux",
             (opencascade::handle<ShapeFix_EdgeProjAux> (ShapeAlgo_ToolContainer::*)() const) static_cast<opencascade::handle<ShapeFix_EdgeProjAux> (ShapeAlgo_ToolContainer::*)() const>(&ShapeAlgo_ToolContainer::EdgeProjAux),
             R"#(Returns ShapeFix_EdgeProjAux)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeAlgo_ToolContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeAlgo_ToolContainer::*)() const>(&ShapeAlgo_ToolContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeAlgo_ToolContainer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeAlgo_ToolContainer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeAlgo_ToolContainer.hxx
// ./opencascade/ShapeAlgo.hxx
// ./opencascade/ShapeAlgo_AlgoContainer.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
