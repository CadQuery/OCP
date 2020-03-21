
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <BRepTools_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <gp_Hypr.hxx>
#include <gp_Parab.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Plane.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeEdge2d.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_FindPlane.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeShell.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_GTransform.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_Collect.hxx>
#include <BRepTools_Modification.hxx>
#include <Standard_NullObject.hxx>
#include <StdFail_NotDone.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_Plane.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>

// module includes
#include <BRepBuilderAPI.hxx>
#include <BRepBuilderAPI_BndBoxTreeSelector.hxx>
#include <BRepBuilderAPI_CellFilter.hxx>
#include <BRepBuilderAPI_Collect.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_EdgeError.hxx>
#include <BRepBuilderAPI_FaceError.hxx>
#include <BRepBuilderAPI_FastSewing.hxx>
#include <BRepBuilderAPI_FindPlane.hxx>
#include <BRepBuilderAPI_GTransform.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeEdge2d.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepBuilderAPI_MakeShell.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_PipeError.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <BRepBuilderAPI_ShapeModification.hxx>
#include <BRepBuilderAPI_ShellError.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_TransitionMode.hxx>
#include <BRepBuilderAPI_VertexInspector.hxx>
#include <BRepBuilderAPI_WireError.hxx>

// template related includes
// ./opencascade/BRepBuilderAPI_VertexInspector.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepBuilderAPI(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepBuilderAPI"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<BRepBuilderAPI , shared_ptr<BRepBuilderAPI>>(m,"BRepBuilderAPI");

    static_cast<py::class_<BRepBuilderAPI , shared_ptr<BRepBuilderAPI> >>(m.attr("BRepBuilderAPI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_BndBoxTreeSelector , shared_ptr<BRepBuilderAPI_BndBoxTreeSelector> >>(m.attr("BRepBuilderAPI_BndBoxTreeSelector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reject",
             (Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box & ) const) static_cast<Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box & ) const>(&BRepBuilderAPI_BndBoxTreeSelector::Reject),
             R"#(Implementation of rejection method)#"  , py::arg("theBox"))
        .def("Accept",
             (Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Standard_Integer & ) ) static_cast<Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Standard_Integer & ) >(&BRepBuilderAPI_BndBoxTreeSelector::Accept),
             R"#(Implementation of acceptance method This method is called when the bounding box intersect with the current. It stores the object - the index of box in the list of accepted objects.)#"  , py::arg("theObj"))
        .def("ClearResList",
             (void (BRepBuilderAPI_BndBoxTreeSelector::*)() ) static_cast<void (BRepBuilderAPI_BndBoxTreeSelector::*)() >(&BRepBuilderAPI_BndBoxTreeSelector::ClearResList),
             R"#(Clear the list of intersecting boxes)#" )
        .def("SetCurrent",
             (void (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box & ) ) static_cast<void (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box & ) >(&BRepBuilderAPI_BndBoxTreeSelector::SetCurrent),
             R"#(Set current box to search for overlapping with him)#"  , py::arg("theBox"))
        .def("ResInd",
             (const TColStd_ListOfInteger & (BRepBuilderAPI_BndBoxTreeSelector::*)() ) static_cast<const TColStd_ListOfInteger & (BRepBuilderAPI_BndBoxTreeSelector::*)() >(&BRepBuilderAPI_BndBoxTreeSelector::ResInd),
             R"#(Get list of indexes of boxes intersecting with the current box)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Collect , shared_ptr<BRepBuilderAPI_Collect> >>(m.attr("BRepBuilderAPI_Collect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Command , shared_ptr<BRepBuilderAPI_Command> >>(m.attr("BRepBuilderAPI_Command"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_Command::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Command::*)() const>(&BRepBuilderAPI_Command::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_FastSewing ,opencascade::handle<BRepBuilderAPI_FastSewing> , Standard_Transient>>(m.attr("BRepBuilderAPI_FastSewing"))
    // constructors
    // custom constructors
    // methods
        .def("SetTolerance",
             (void (BRepBuilderAPI_FastSewing::*)( const Standard_Real ) ) static_cast<void (BRepBuilderAPI_FastSewing::*)( const Standard_Real ) >(&BRepBuilderAPI_FastSewing::SetTolerance),
             R"#(Sets tolerance)#"  , py::arg("theToler"))
        .def("GetTolerance",
             (Standard_Real (BRepBuilderAPI_FastSewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_FastSewing::*)() const>(&BRepBuilderAPI_FastSewing::GetTolerance),
             R"#(Returns tolerance)#" )
        .def("GetResult",
             (const TopoDS_Shape & (BRepBuilderAPI_FastSewing::*)() const) static_cast<const TopoDS_Shape & (BRepBuilderAPI_FastSewing::*)() const>(&BRepBuilderAPI_FastSewing::GetResult),
             R"#(Returns resulted shape)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBuilderAPI_FastSewing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBuilderAPI_FastSewing::*)() const>(&BRepBuilderAPI_FastSewing::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBuilderAPI_FastSewing::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_FindPlane , shared_ptr<BRepBuilderAPI_FindPlane> >>(m.attr("BRepBuilderAPI_FindPlane"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Sewing ,opencascade::handle<BRepBuilderAPI_Sewing> , Standard_Transient>>(m.attr("BRepBuilderAPI_Sewing"))
    // constructors
    // custom constructors
    // methods
        .def("SameParameterMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::SameParameterMode),
             R"#(Gets same parameter mode.)#" )
        .def("SetSameParameterMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetSameParameterMode),
             R"#(Sets same parameter mode.)#"  , py::arg("SameParameterMode"))
        .def("Tolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::Tolerance),
             R"#(Gives set tolerance.)#" )
        .def("SetTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) >(&BRepBuilderAPI_Sewing::SetTolerance),
             R"#(Sets tolerance)#"  , py::arg("theToler"))
        .def("MinTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MinTolerance),
             R"#(Gives set min tolerance.)#" )
        .def("SetMinTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) >(&BRepBuilderAPI_Sewing::SetMinTolerance),
             R"#(Sets min tolerance)#"  , py::arg("theMinToler"))
        .def("MaxTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MaxTolerance),
             R"#(Gives set max tolerance)#" )
        .def("SetMaxTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) >(&BRepBuilderAPI_Sewing::SetMaxTolerance),
             R"#(Sets max tolerance.)#"  , py::arg("theMaxToler"))
        .def("FaceMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FaceMode),
             R"#(Returns mode for sewing faces By default - true.)#" )
        .def("SetFaceMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetFaceMode),
             R"#(Sets mode for sewing faces By default - true.)#"  , py::arg("theFaceMode"))
        .def("FloatingEdgesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FloatingEdgesMode),
             R"#(Returns mode for sewing floating edges By default - false.)#" )
        .def("SetFloatingEdgesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetFloatingEdgesMode),
             R"#(Sets mode for sewing floating edges By default - false. Returns mode for cutting floating edges By default - false. Sets mode for cutting floating edges By default - false.)#"  , py::arg("theFloatingEdgesMode"))
        .def("LocalTolerancesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::LocalTolerancesMode),
             R"#(Returns mode for accounting of local tolerances of edges and vertices during of merging.)#" )
        .def("SetLocalTolerancesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetLocalTolerancesMode),
             R"#(Sets mode for accounting of local tolerances of edges and vertices during of merging in this case WorkTolerance = myTolerance + tolEdge1+ tolEdg2;)#"  , py::arg("theLocalTolerancesMode"))
        .def("SetNonManifoldMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetNonManifoldMode),
             R"#(Sets mode for non-manifold sewing.)#"  , py::arg("theNonManifoldMode"))
        .def("NonManifoldMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NonManifoldMode),
             R"#(Gets mode for non-manifold sewing.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBuilderAPI_Sewing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::DynamicType),
             R"#(None)#" )
        .def("SetMaxTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) >(&BRepBuilderAPI_Sewing::SetMaxTolerance),
             R"#(Sets max tolerance.)#"  , py::arg("theMaxToler"))
        .def("MaxTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MaxTolerance),
             R"#(Gives set max tolerance)#" )
        .def("Tolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::Tolerance),
             R"#(Gives set tolerance.)#" )
        .def("SetTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) >(&BRepBuilderAPI_Sewing::SetTolerance),
             R"#(Sets tolerance)#"  , py::arg("theToler"))
        .def("SetMinTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real ) >(&BRepBuilderAPI_Sewing::SetMinTolerance),
             R"#(Sets min tolerance)#"  , py::arg("theMinToler"))
        .def("MinTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MinTolerance),
             R"#(Gives set min tolerance.)#" )
        .def("SetFaceMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetFaceMode),
             R"#(Sets mode for sewing faces By default - true.)#"  , py::arg("theFaceMode"))
        .def("FaceMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FaceMode),
             R"#(Returns mode for sewing faces By default - true.)#" )
        .def("SetFloatingEdgesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetFloatingEdgesMode),
             R"#(Sets mode for sewing floating edges By default - false. Returns mode for cutting floating edges By default - false. Sets mode for cutting floating edges By default - false.)#"  , py::arg("theFloatingEdgesMode"))
        .def("FloatingEdgesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FloatingEdgesMode),
             R"#(Returns mode for sewing floating edges By default - false.)#" )
        .def("SameParameterMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::SameParameterMode),
             R"#(Gets same parameter mode.)#" )
        .def("SetSameParameterMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetSameParameterMode),
             R"#(Sets same parameter mode.)#"  , py::arg("SameParameterMode"))
        .def("SetLocalTolerancesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetLocalTolerancesMode),
             R"#(Sets mode for accounting of local tolerances of edges and vertices during of merging in this case WorkTolerance = myTolerance + tolEdge1+ tolEdg2;)#"  , py::arg("theLocalTolerancesMode"))
        .def("LocalTolerancesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::LocalTolerancesMode),
             R"#(Returns mode for accounting of local tolerances of edges and vertices during of merging.)#" )
        .def("SetNonManifoldMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean ) >(&BRepBuilderAPI_Sewing::SetNonManifoldMode),
             R"#(Sets mode for non-manifold sewing.)#"  , py::arg("theNonManifoldMode"))
        .def("NonManifoldMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NonManifoldMode),
             R"#(Gets mode for non-manifold sewing.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBuilderAPI_Sewing::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_VertexInspector , shared_ptr<BRepBuilderAPI_VertexInspector> , NCollection_CellFilter_InspectorXYZ>>(m.attr("BRepBuilderAPI_VertexInspector"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("theTol") )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ & ) ) static_cast<void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ & ) >(&BRepBuilderAPI_VertexInspector::Add),
             R"#(Keep the points used for comparison)#"  , py::arg("thePnt"))
        .def("ClearResList",
             (void (BRepBuilderAPI_VertexInspector::*)() ) static_cast<void (BRepBuilderAPI_VertexInspector::*)() >(&BRepBuilderAPI_VertexInspector::ClearResList),
             R"#(Clear the list of adjacent points)#" )
        .def("SetCurrent",
             (void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ & ) ) static_cast<void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ & ) >(&BRepBuilderAPI_VertexInspector::SetCurrent),
             R"#(Set current point to search for coincidence)#"  , py::arg("theCurPnt"))
        .def("ResInd",
             (const TColStd_ListOfInteger & (BRepBuilderAPI_VertexInspector::*)() ) static_cast<const TColStd_ListOfInteger & (BRepBuilderAPI_VertexInspector::*)() >(&BRepBuilderAPI_VertexInspector::ResInd),
             R"#(Get list of indexes of points adjacent with the current)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeShape , shared_ptr<BRepBuilderAPI_MakeShape> , BRepBuilderAPI_Command>>(m.attr("BRepBuilderAPI_MakeShape"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (BRepBuilderAPI_MakeShape::*)() ) static_cast<void (BRepBuilderAPI_MakeShape::*)() >(&BRepBuilderAPI_MakeShape::Build),
             R"#(This is called by Shape(). It does nothing but may be redefined.)#" )
        .def("Shape",
             (const TopoDS_Shape & (BRepBuilderAPI_MakeShape::*)() ) static_cast<const TopoDS_Shape & (BRepBuilderAPI_MakeShape::*)() >(&BRepBuilderAPI_MakeShape::Shape),
             R"#(Returns a shape built by the shape construction algorithm. Raises exception StdFail_NotDone if the shape was not built.)#" )
        .def("Generated",
             (const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_MakeShape::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_MakeShape::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_MakeShape::IsDeleted),
             R"#(Returns true if the shape S has been deleted.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeEdge , shared_ptr<BRepBuilderAPI_MakeEdge> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakeEdge"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeEdge::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeEdge::*)() const>(&BRepBuilderAPI_MakeEdge::IsDone),
             R"#(Returns true if the edge is built.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeEdge2d , shared_ptr<BRepBuilderAPI_MakeEdge2d> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakeEdge2d"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeEdge2d::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeEdge2d::*)() const>(&BRepBuilderAPI_MakeEdge2d::IsDone),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeFace , shared_ptr<BRepBuilderAPI_MakeFace> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakeFace"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeFace::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeFace::*)() const>(&BRepBuilderAPI_MakeFace::IsDone),
             R"#(Returns true if this algorithm has a valid face.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakePolygon , shared_ptr<BRepBuilderAPI_MakePolygon> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakePolygon"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakePolygon::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakePolygon::*)() const>(&BRepBuilderAPI_MakePolygon::IsDone),
             R"#(Returns true if this algorithm contains a valid polygonal wire (i.e. if there is at least one edge). IsDone returns false if fewer than two vertices have been chained together by this construction algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeShell , shared_ptr<BRepBuilderAPI_MakeShell> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakeShell"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeShell::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeShell::*)() const>(&BRepBuilderAPI_MakeShell::IsDone),
             R"#(Returns true if the shell is built.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeSolid , shared_ptr<BRepBuilderAPI_MakeSolid> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakeSolid"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeSolid::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeSolid::*)() const>(&BRepBuilderAPI_MakeSolid::IsDone),
             R"#(Returns true if the solid is built. For this class, a solid under construction is always valid. If no shell has been added, it could be a whole-space solid. However, no check was done to verify the conditions of coherence of the resulting solid.)#" )
        .def("IsDeleted",
             (Standard_Boolean (BRepBuilderAPI_MakeSolid::*)( const TopoDS_Shape & ) ) static_cast<Standard_Boolean (BRepBuilderAPI_MakeSolid::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_MakeSolid::IsDeleted),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeVertex , shared_ptr<BRepBuilderAPI_MakeVertex> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakeVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeWire , shared_ptr<BRepBuilderAPI_MakeWire> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_MakeWire"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeWire::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeWire::*)() const>(&BRepBuilderAPI_MakeWire::IsDone),
             R"#(Returns true if this algorithm contains a valid wire. IsDone returns false if: - there are no edges in the wire, or - the last edge which you tried to add was not connectable.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_ModifyShape , shared_ptr<BRepBuilderAPI_ModifyShape> , BRepBuilderAPI_MakeShape>>(m.attr("BRepBuilderAPI_ModifyShape"))
    // constructors
    // custom constructors
    // methods
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_ModifyShape::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape & ) const>(&BRepBuilderAPI_ModifyShape::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>. S can correspond to the entire initial shape or to its subshape. Exceptions Standard_NoSuchObject if S is not the initial shape or a subshape of the initial shape to which the transformation has been applied. Raises NoSuchObject from Standard if S is not the initial shape or a sub-shape of the initial shape.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Copy , shared_ptr<BRepBuilderAPI_Copy> , BRepBuilderAPI_ModifyShape>>(m.attr("BRepBuilderAPI_Copy"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_GTransform , shared_ptr<BRepBuilderAPI_GTransform> , BRepBuilderAPI_ModifyShape>>(m.attr("BRepBuilderAPI_GTransform"))
    // constructors
    // custom constructors
    // methods
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_GTransform::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape & ) const>(&BRepBuilderAPI_GTransform::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_NurbsConvert , shared_ptr<BRepBuilderAPI_NurbsConvert> , BRepBuilderAPI_ModifyShape>>(m.attr("BRepBuilderAPI_NurbsConvert"))
    // constructors
    // custom constructors
    // methods
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_NurbsConvert::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape & ) const>(&BRepBuilderAPI_NurbsConvert::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>. S can correspond to the entire initial shape or to its subshape. Exceptions Standard_NoSuchObject if S is not the initial shape or a subshape of the initial shape to which the transformation has been applied.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Transform , shared_ptr<BRepBuilderAPI_Transform> , BRepBuilderAPI_ModifyShape>>(m.attr("BRepBuilderAPI_Transform"))
    // constructors
    // custom constructors
    // methods
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_Transform::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_Transform::*)( const TopoDS_Shape & ) const>(&BRepBuilderAPI_Transform::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_Transform::*)( const TopoDS_Shape & ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_Transform::*)( const TopoDS_Shape & ) >(&BRepBuilderAPI_Transform::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepBuilderAPI_Sewing.hxx
// ./opencascade/BRepBuilderAPI_MakeEdge.hxx
// ./opencascade/BRepBuilderAPI_CellFilter.hxx
// ./opencascade/BRepBuilderAPI_MakeShape.hxx
// ./opencascade/BRepBuilderAPI_ShapeModification.hxx
// ./opencascade/BRepBuilderAPI.hxx
// ./opencascade/BRepBuilderAPI_ModifyShape.hxx
// ./opencascade/BRepBuilderAPI_Command.hxx
// ./opencascade/BRepBuilderAPI_Collect.hxx
// ./opencascade/BRepBuilderAPI_GTransform.hxx
// ./opencascade/BRepBuilderAPI_MakeSolid.hxx
// ./opencascade/BRepBuilderAPI_MakeWire.hxx
// ./opencascade/BRepBuilderAPI_NurbsConvert.hxx
// ./opencascade/BRepBuilderAPI_Transform.hxx
// ./opencascade/BRepBuilderAPI_VertexInspector.hxx
// ./opencascade/BRepBuilderAPI_EdgeError.hxx
// ./opencascade/BRepBuilderAPI_FaceError.hxx
// ./opencascade/BRepBuilderAPI_FastSewing.hxx
// ./opencascade/BRepBuilderAPI_Copy.hxx
// ./opencascade/BRepBuilderAPI_PipeError.hxx
// ./opencascade/BRepBuilderAPI_MakeShell.hxx
// ./opencascade/BRepBuilderAPI_BndBoxTreeSelector.hxx
// ./opencascade/BRepBuilderAPI_MakeVertex.hxx
// ./opencascade/BRepBuilderAPI_FindPlane.hxx
// ./opencascade/BRepBuilderAPI_WireError.hxx
// ./opencascade/BRepBuilderAPI_MakePolygon.hxx
// ./opencascade/BRepBuilderAPI_TransitionMode.hxx
// ./opencascade/BRepBuilderAPI_MakeFace.hxx
// ./opencascade/BRepBuilderAPI_MakeEdge2d.hxx
// ./opencascade/BRepBuilderAPI_ShellError.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Vector<gp_XYZ>(m,"VectorOfPoint");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
