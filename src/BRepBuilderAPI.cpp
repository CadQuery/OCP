
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepTools_Modification.hxx>
#include <Standard_NullObject.hxx>
#include <BRepTools_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Curve.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Vertex.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Wire.hxx>
#include <Geom_Plane.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <StdFail_NotDone.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Pln.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
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
#include <StdFail_NotDone.hxx>
#include <StdFail_NotDone.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Shell.hxx>
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
#include "NCollection.hxx"


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

    static_cast<py::class_<BRepBuilderAPI , shared_ptr<BRepBuilderAPI>  >>(m.attr("BRepBuilderAPI"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Plane_s",
                    (void (*)( const opencascade::handle<Geom_Plane> &  ) ) static_cast<void (*)( const opencascade::handle<Geom_Plane> &  ) >(&BRepBuilderAPI::Plane),
                    R"#(Sets the current plane.)#"  , py::arg("P"))
        .def_static("Plane_s",
                    (const opencascade::handle<Geom_Plane> & (*)() ) static_cast<const opencascade::handle<Geom_Plane> & (*)() >(&BRepBuilderAPI::Plane),
                    R"#(Returns the current plane.)#" )
        .def_static("Precision_s",
                    (void (*)( const Standard_Real  ) ) static_cast<void (*)( const Standard_Real  ) >(&BRepBuilderAPI::Precision),
                    R"#(Sets the default precision. The current Precision is returned.)#"  , py::arg("P"))
        .def_static("Precision_s",
                    (Standard_Real (*)() ) static_cast<Standard_Real (*)() >(&BRepBuilderAPI::Precision),
                    R"#(Returns the default precision.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_BndBoxTreeSelector , shared_ptr<BRepBuilderAPI_BndBoxTreeSelector>  >>(m.attr("BRepBuilderAPI_BndBoxTreeSelector"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reject",
             (Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box &  ) const) static_cast<Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box &  ) const>(&BRepBuilderAPI_BndBoxTreeSelector::Reject),
             R"#(Implementation of rejection method)#"  , py::arg("theBox"))
        .def("Accept",
             (Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Standard_Integer &  ) ) static_cast<Standard_Boolean (BRepBuilderAPI_BndBoxTreeSelector::*)( const Standard_Integer &  ) >(&BRepBuilderAPI_BndBoxTreeSelector::Accept),
             R"#(Implementation of acceptance method This method is called when the bounding box intersect with the current. It stores the object - the index of box in the list of accepted objects.)#"  , py::arg("theObj"))
        .def("ClearResList",
             (void (BRepBuilderAPI_BndBoxTreeSelector::*)() ) static_cast<void (BRepBuilderAPI_BndBoxTreeSelector::*)() >(&BRepBuilderAPI_BndBoxTreeSelector::ClearResList),
             R"#(Clear the list of intersecting boxes)#" )
        .def("SetCurrent",
             (void (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box &  ) ) static_cast<void (BRepBuilderAPI_BndBoxTreeSelector::*)( const Bnd_Box &  ) >(&BRepBuilderAPI_BndBoxTreeSelector::SetCurrent),
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


    static_cast<py::class_<BRepBuilderAPI_Collect , shared_ptr<BRepBuilderAPI_Collect>  >>(m.attr("BRepBuilderAPI_Collect"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape & ,  BRepBuilderAPI_MakeShape &  ) ) static_cast<void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape & ,  BRepBuilderAPI_MakeShape &  ) >(&BRepBuilderAPI_Collect::Add),
             R"#(None)#"  , py::arg("SI"),  py::arg("MKS"))
        .def("AddGenerated",
             (void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepBuilderAPI_Collect::AddGenerated),
             R"#(None)#"  , py::arg("S"),  py::arg("Gen"))
        .def("AddModif",
             (void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&BRepBuilderAPI_Collect::AddModif),
             R"#(None)#"  , py::arg("S"),  py::arg("Mod"))
        .def("Filter",
             (void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepBuilderAPI_Collect::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_Collect::Filter),
             R"#(None)#"  , py::arg("SF"))
        .def("Modification",
             (const TopTools_DataMapOfShapeListOfShape & (BRepBuilderAPI_Collect::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BRepBuilderAPI_Collect::*)() const>(&BRepBuilderAPI_Collect::Modification),
             R"#(None)#" )
        .def("Generated",
             (const TopTools_DataMapOfShapeListOfShape & (BRepBuilderAPI_Collect::*)() const) static_cast<const TopTools_DataMapOfShapeListOfShape & (BRepBuilderAPI_Collect::*)() const>(&BRepBuilderAPI_Collect::Generated),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Command , shared_ptr<BRepBuilderAPI_Command>  >>(m.attr("BRepBuilderAPI_Command"))
    // constructors
    // custom constructors
    // methods
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_Command::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Command::*)() const>(&BRepBuilderAPI_Command::IsDone),
             R"#(None)#" )
        .def("Check",
             (void (BRepBuilderAPI_Command::*)() const) static_cast<void (BRepBuilderAPI_Command::*)() const>(&BRepBuilderAPI_Command::Check),
             R"#(Raises NotDone if done is false.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_FastSewing ,opencascade::handle<BRepBuilderAPI_FastSewing>  , Standard_Transient >>(m.attr("BRepBuilderAPI_FastSewing"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("theTolerance")=static_cast<const Standard_Real>(1.0e-06) )
    // custom constructors
    // methods
        .def("Add",
             (Standard_Boolean (BRepBuilderAPI_FastSewing::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepBuilderAPI_FastSewing::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_FastSewing::Add),
             R"#(Adds faces of a shape)#"  , py::arg("theShape"))
        .def("Add",
             (Standard_Boolean (BRepBuilderAPI_FastSewing::*)( const opencascade::handle<Geom_Surface> &  ) ) static_cast<Standard_Boolean (BRepBuilderAPI_FastSewing::*)( const opencascade::handle<Geom_Surface> &  ) >(&BRepBuilderAPI_FastSewing::Add),
             R"#(Adds a surface)#"  , py::arg("theSurface"))
        .def("Perform",
             (void (BRepBuilderAPI_FastSewing::*)() ) static_cast<void (BRepBuilderAPI_FastSewing::*)() >(&BRepBuilderAPI_FastSewing::Perform),
             R"#(Compute resulted shape)#" )
        .def("SetTolerance",
             (void (BRepBuilderAPI_FastSewing::*)( const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_FastSewing::*)( const Standard_Real  ) >(&BRepBuilderAPI_FastSewing::SetTolerance),
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
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepBuilderAPI_FastSewing::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_FindPlane , shared_ptr<BRepBuilderAPI_FindPlane>  >>(m.attr("BRepBuilderAPI_FindPlane"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real >()  , py::arg("S"),  py::arg("Tol")=static_cast<const Standard_Real>(- 1) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepBuilderAPI_FindPlane::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_FindPlane::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&BRepBuilderAPI_FindPlane::Init),
             R"#(Constructs the plane containing the edges of the shape S. A plane is built only if all the edges are within a distance of less than or equal to tolerance from a planar surface. This tolerance value is equal to the larger of the following two values: - Tol, where the default value is negative, or - the largest of the tolerance values assigned to the individual edges of S. Use the function Found to verify that a plane is built. The resulting plane is then retrieved using the function Plane.)#"  , py::arg("S"),  py::arg("Tol")=static_cast<const Standard_Real>(- 1))
        .def("Found",
             (Standard_Boolean (BRepBuilderAPI_FindPlane::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_FindPlane::*)() const>(&BRepBuilderAPI_FindPlane::Found),
             R"#(Returns true if a plane containing the edges of the shape is found and built. Use the function Plane to consult the result.)#" )
        .def("Plane",
             (opencascade::handle<Geom_Plane> (BRepBuilderAPI_FindPlane::*)() const) static_cast<opencascade::handle<Geom_Plane> (BRepBuilderAPI_FindPlane::*)() const>(&BRepBuilderAPI_FindPlane::Plane),
             R"#(Returns the plane containing the edges of the shape. Warning Use the function Found to verify that the plane is built. If a plane is not found, Plane returns a null handle.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Sewing ,opencascade::handle<BRepBuilderAPI_Sewing>  , Standard_Transient >>(m.attr("BRepBuilderAPI_Sewing"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("tolerance")=static_cast<const Standard_Real>(1.0e-06),  py::arg("option1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("option2")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("option3")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("option4")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::Init),
             R"#(initialize the parameters if necessary)#"  , py::arg("tolerance")=static_cast<const Standard_Real>(1.0e-06),  py::arg("option1")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("option2")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("option3")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("option4")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Load",
             (void (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_Sewing::Load),
             R"#(Loades the context shape.)#"  , py::arg("shape"))
        .def("Add",
             (void (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_Sewing::Add),
             R"#(Defines the shapes to be sewed or controlled)#"  , py::arg("shape"))
        .def("Perform",
             (void (BRepBuilderAPI_Sewing::*)( const opencascade::handle<Message_ProgressIndicator> &  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const opencascade::handle<Message_ProgressIndicator> &  ) >(&BRepBuilderAPI_Sewing::Perform),
             R"#(Computing thePI - progress indicator of algorithm)#"  , py::arg("thePI")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(0))
        .def("SewedShape",
             (const TopoDS_Shape & (BRepBuilderAPI_Sewing::*)() const) static_cast<const TopoDS_Shape & (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::SewedShape),
             R"#(Gives the sewed shape a null shape if nothing constructed may be a face, a shell, a solid or a compound)#" )
        .def("SetContext",
             (void (BRepBuilderAPI_Sewing::*)( const opencascade::handle<BRepTools_ReShape> &  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const opencascade::handle<BRepTools_ReShape> &  ) >(&BRepBuilderAPI_Sewing::SetContext),
             R"#(set context)#"  , py::arg("theContext"))
        .def("GetContext",
             (const opencascade::handle<BRepTools_ReShape> & (BRepBuilderAPI_Sewing::*)() const) static_cast<const opencascade::handle<BRepTools_ReShape> & (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::GetContext),
             R"#(return context)#" )
        .def("NbFreeEdges",
             (Standard_Integer (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Integer (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NbFreeEdges),
             R"#(Gives the number of free edges (edge shared by one face))#" )
        .def("FreeEdge",
             (const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const>(&BRepBuilderAPI_Sewing::FreeEdge),
             R"#(Gives each free edge)#"  , py::arg("index"))
        .def("NbMultipleEdges",
             (Standard_Integer (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Integer (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NbMultipleEdges),
             R"#(Gives the number of multiple edges (edge shared by more than two faces))#" )
        .def("MultipleEdge",
             (const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const>(&BRepBuilderAPI_Sewing::MultipleEdge),
             R"#(Gives each multiple edge)#"  , py::arg("index"))
        .def("NbContigousEdges",
             (Standard_Integer (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Integer (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NbContigousEdges),
             R"#(Gives the number of contigous edges (edge shared by two faces))#" )
        .def("ContigousEdge",
             (const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const>(&BRepBuilderAPI_Sewing::ContigousEdge),
             R"#(Gives each contigous edge)#"  , py::arg("index"))
        .def("ContigousEdgeCouple",
             (const TopTools_ListOfShape & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const>(&BRepBuilderAPI_Sewing::ContigousEdgeCouple),
             R"#(Gives the sections (edge) belonging to a contigous edge)#"  , py::arg("index"))
        .def("IsSectionBound",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Edge &  ) const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Edge &  ) const>(&BRepBuilderAPI_Sewing::IsSectionBound),
             R"#(Indicates if a section is bound (before use SectionToBoundary))#"  , py::arg("section"))
        .def("SectionToBoundary",
             (const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const TopoDS_Edge &  ) const) static_cast<const TopoDS_Edge & (BRepBuilderAPI_Sewing::*)( const TopoDS_Edge &  ) const>(&BRepBuilderAPI_Sewing::SectionToBoundary),
             R"#(Gives the original edge (free boundary) which becomes the the section. Remember that sections constitute common edges. This imformation is important for control because with original edge we can find the surface to which the section is attached.)#"  , py::arg("section"))
        .def("NbDegeneratedShapes",
             (Standard_Integer (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Integer (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NbDegeneratedShapes),
             R"#(Gives the number of degenerated shapes)#" )
        .def("DegeneratedShape",
             (const TopoDS_Shape & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Shape & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const>(&BRepBuilderAPI_Sewing::DegeneratedShape),
             R"#(Gives each degenerated shape)#"  , py::arg("index"))
        .def("IsDegenerated",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_Sewing::IsDegenerated),
             R"#(Indicates if a input shape is degenerated)#"  , py::arg("shape"))
        .def("IsModified",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_Sewing::IsModified),
             R"#(Indicates if a input shape has been modified)#"  , py::arg("shape"))
        .def("Modified",
             (const TopoDS_Shape & (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const) static_cast<const TopoDS_Shape & (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_Sewing::Modified),
             R"#(Gives a modifieded shape)#"  , py::arg("shape"))
        .def("IsModifiedSubShape",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_Sewing::IsModifiedSubShape),
             R"#(Indicates if a input subshape has been modified)#"  , py::arg("shape"))
        .def("ModifiedSubShape",
             (TopoDS_Shape (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_Sewing::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_Sewing::ModifiedSubShape),
             R"#(Gives a modifieded subshape)#"  , py::arg("shape"))
        .def("Dump",
             (void (BRepBuilderAPI_Sewing::*)() const) static_cast<void (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::Dump),
             R"#(print the informations)#" )
        .def("NbDeletedFaces",
             (Standard_Integer (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Integer (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NbDeletedFaces),
             R"#(Gives the number of deleted faces (faces smallest than tolerance))#" )
        .def("DeletedFace",
             (const TopoDS_Face & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const) static_cast<const TopoDS_Face & (BRepBuilderAPI_Sewing::*)( const Standard_Integer  ) const>(&BRepBuilderAPI_Sewing::DeletedFace),
             R"#(Gives each deleted face)#"  , py::arg("index"))
        .def("WhichFace",
             (TopoDS_Face (BRepBuilderAPI_Sewing::*)( const TopoDS_Edge & ,  const Standard_Integer  ) const) static_cast<TopoDS_Face (BRepBuilderAPI_Sewing::*)( const TopoDS_Edge & ,  const Standard_Integer  ) const>(&BRepBuilderAPI_Sewing::WhichFace),
             R"#(Gives a modified shape)#"  , py::arg("theEdg"),  py::arg("index")=static_cast<const Standard_Integer>(1))
        .def("SameParameterMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::SameParameterMode),
             R"#(Gets same parameter mode.)#" )
        .def("SetSameParameterMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetSameParameterMode),
             R"#(Sets same parameter mode.)#"  , py::arg("SameParameterMode"))
        .def("Tolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::Tolerance),
             R"#(Gives set tolerance.)#" )
        .def("SetTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) >(&BRepBuilderAPI_Sewing::SetTolerance),
             R"#(Sets tolerance)#"  , py::arg("theToler"))
        .def("MinTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MinTolerance),
             R"#(Gives set min tolerance.)#" )
        .def("SetMinTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) >(&BRepBuilderAPI_Sewing::SetMinTolerance),
             R"#(Sets min tolerance)#"  , py::arg("theMinToler"))
        .def("MaxTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MaxTolerance),
             R"#(Gives set max tolerance)#" )
        .def("SetMaxTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) >(&BRepBuilderAPI_Sewing::SetMaxTolerance),
             R"#(Sets max tolerance.)#"  , py::arg("theMaxToler"))
        .def("FaceMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FaceMode),
             R"#(Returns mode for sewing faces By default - true.)#" )
        .def("SetFaceMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetFaceMode),
             R"#(Sets mode for sewing faces By default - true.)#"  , py::arg("theFaceMode"))
        .def("FloatingEdgesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FloatingEdgesMode),
             R"#(Returns mode for sewing floating edges By default - false.)#" )
        .def("SetFloatingEdgesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetFloatingEdgesMode),
             R"#(Sets mode for sewing floating edges By default - false. Returns mode for cutting floating edges By default - false. Sets mode for cutting floating edges By default - false.)#"  , py::arg("theFloatingEdgesMode"))
        .def("LocalTolerancesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::LocalTolerancesMode),
             R"#(Returns mode for accounting of local tolerances of edges and vertices during of merging.)#" )
        .def("SetLocalTolerancesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetLocalTolerancesMode),
             R"#(Sets mode for accounting of local tolerances of edges and vertices during of merging in this case WorkTolerance = myTolerance + tolEdge1+ tolEdg2;)#"  , py::arg("theLocalTolerancesMode"))
        .def("SetNonManifoldMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetNonManifoldMode),
             R"#(Sets mode for non-manifold sewing.)#"  , py::arg("theNonManifoldMode"))
        .def("NonManifoldMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NonManifoldMode),
             R"#(Gets mode for non-manifold sewing.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepBuilderAPI_Sewing::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::DynamicType),
             R"#(None)#" )
        .def("SetMaxTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) >(&BRepBuilderAPI_Sewing::SetMaxTolerance),
             R"#(Sets max tolerance.)#"  , py::arg("theMaxToler"))
        .def("MaxTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MaxTolerance),
             R"#(Gives set max tolerance)#" )
        .def("Tolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::Tolerance),
             R"#(Gives set tolerance.)#" )
        .def("SetTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) >(&BRepBuilderAPI_Sewing::SetTolerance),
             R"#(Sets tolerance)#"  , py::arg("theToler"))
        .def("SetMinTolerance",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Real  ) >(&BRepBuilderAPI_Sewing::SetMinTolerance),
             R"#(Sets min tolerance)#"  , py::arg("theMinToler"))
        .def("MinTolerance",
             (Standard_Real (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Real (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::MinTolerance),
             R"#(Gives set min tolerance.)#" )
        .def("SetFaceMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetFaceMode),
             R"#(Sets mode for sewing faces By default - true.)#"  , py::arg("theFaceMode"))
        .def("FaceMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FaceMode),
             R"#(Returns mode for sewing faces By default - true.)#" )
        .def("SetFloatingEdgesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetFloatingEdgesMode),
             R"#(Sets mode for sewing floating edges By default - false. Returns mode for cutting floating edges By default - false. Sets mode for cutting floating edges By default - false.)#"  , py::arg("theFloatingEdgesMode"))
        .def("FloatingEdgesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::FloatingEdgesMode),
             R"#(Returns mode for sewing floating edges By default - false.)#" )
        .def("SameParameterMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::SameParameterMode),
             R"#(Gets same parameter mode.)#" )
        .def("SetSameParameterMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetSameParameterMode),
             R"#(Sets same parameter mode.)#"  , py::arg("SameParameterMode"))
        .def("SetLocalTolerancesMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetLocalTolerancesMode),
             R"#(Sets mode for accounting of local tolerances of edges and vertices during of merging in this case WorkTolerance = myTolerance + tolEdge1+ tolEdg2;)#"  , py::arg("theLocalTolerancesMode"))
        .def("LocalTolerancesMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::LocalTolerancesMode),
             R"#(Returns mode for accounting of local tolerances of edges and vertices during of merging.)#" )
        .def("SetNonManifoldMode",
             (void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Sewing::*)( const Standard_Boolean  ) >(&BRepBuilderAPI_Sewing::SetNonManifoldMode),
             R"#(Sets mode for non-manifold sewing.)#"  , py::arg("theNonManifoldMode"))
        .def("NonManifoldMode",
             (Standard_Boolean (BRepBuilderAPI_Sewing::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_Sewing::*)() const>(&BRepBuilderAPI_Sewing::NonManifoldMode),
             R"#(Gets mode for non-manifold sewing.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepBuilderAPI_Sewing::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepBuilderAPI_Sewing::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_VertexInspector , shared_ptr<BRepBuilderAPI_VertexInspector>  , NCollection_CellFilter_InspectorXYZ >>(m.attr("BRepBuilderAPI_VertexInspector"))
    // constructors
        .def(py::init< const Standard_Real >()  , py::arg("theTol") )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ &  ) ) static_cast<void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ &  ) >(&BRepBuilderAPI_VertexInspector::Add),
             R"#(Keep the points used for comparison)#"  , py::arg("thePnt"))
        .def("ClearResList",
             (void (BRepBuilderAPI_VertexInspector::*)() ) static_cast<void (BRepBuilderAPI_VertexInspector::*)() >(&BRepBuilderAPI_VertexInspector::ClearResList),
             R"#(Clear the list of adjacent points)#" )
        .def("SetCurrent",
             (void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ &  ) ) static_cast<void (BRepBuilderAPI_VertexInspector::*)( const gp_XYZ &  ) >(&BRepBuilderAPI_VertexInspector::SetCurrent),
             R"#(Set current point to search for coincidence)#"  , py::arg("theCurPnt"))
        .def("ResInd",
             (const TColStd_ListOfInteger & (BRepBuilderAPI_VertexInspector::*)() ) static_cast<const TColStd_ListOfInteger & (BRepBuilderAPI_VertexInspector::*)() >(&BRepBuilderAPI_VertexInspector::ResInd),
             R"#(Get list of indexes of points adjacent with the current)#" )
        .def("Inspect",
             (NCollection_CellFilter_Action (BRepBuilderAPI_VertexInspector::*)( const Standard_Integer  ) ) static_cast<NCollection_CellFilter_Action (BRepBuilderAPI_VertexInspector::*)( const Standard_Integer  ) >(&BRepBuilderAPI_VertexInspector::Inspect),
             R"#(Implementation of inspection method)#"  , py::arg("theTarget"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeShape , shared_ptr<BRepBuilderAPI_MakeShape>  , BRepBuilderAPI_Command >>(m.attr("BRepBuilderAPI_MakeShape"))
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
             (const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_MakeShape::Generated),
             R"#(Returns the list of shapes generated from the shape <S>.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_MakeShape::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("IsDeleted",
             (Standard_Boolean (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepBuilderAPI_MakeShape::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_MakeShape::IsDeleted),
             R"#(Returns true if the shape S has been deleted.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeEdge , shared_ptr<BRepBuilderAPI_MakeEdge>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakeEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin & >()  , py::arg("L") )
        .def(py::init< const gp_Lin &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Lin &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Circ & >()  , py::arg("L") )
        .def(py::init< const gp_Circ &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Circ &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Circ &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Elips & >()  , py::arg("L") )
        .def(py::init< const gp_Elips &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Elips &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Elips &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Hypr & >()  , py::arg("L") )
        .def(py::init< const gp_Hypr &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Hypr &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Hypr &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Parab & >()  , py::arg("L") )
        .def(py::init< const gp_Parab &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Parab &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Parab &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom_Curve> & >()  , py::arg("L") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> & >()  , py::arg("L"),  py::arg("S") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("S"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("L"),  py::arg("S"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("S"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const gp_Pnt &,const gp_Pnt &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("S"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const opencascade::handle<Geom_Surface> &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("S"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> &  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> &  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("P1"),  py::arg("P2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("V1"),  py::arg("V2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("S"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge::*)( const opencascade::handle<Geom2d_Curve> & ,  const opencascade::handle<Geom_Surface> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge::Init),
             R"#(Defines or redefines the arguments for the construction of an edge. This function is currently used after the empty constructor BRepAPI_MakeEdge().)#"  , py::arg("C"),  py::arg("S"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2"))
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeEdge::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeEdge::*)() const>(&BRepBuilderAPI_MakeEdge::IsDone),
             R"#(Returns true if the edge is built.)#" )
        .def("Error",
             (BRepBuilderAPI_EdgeError (BRepBuilderAPI_MakeEdge::*)() const) static_cast<BRepBuilderAPI_EdgeError (BRepBuilderAPI_MakeEdge::*)() const>(&BRepBuilderAPI_MakeEdge::Error),
             R"#(Returns the construction status - BRepBuilderAPI_EdgeDone if the edge is built, or - another value of the BRepBuilderAPI_EdgeError enumeration indicating the reason of construction failure.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepBuilderAPI_MakeEdge::*)() ) static_cast<const TopoDS_Edge & (BRepBuilderAPI_MakeEdge::*)() >(&BRepBuilderAPI_MakeEdge::Edge),
             R"#(Returns the constructed edge. Exceptions StdFail_NotDone if the edge is not built.)#" )
        .def("Vertex1",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge::*)() const) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge::*)() const>(&BRepBuilderAPI_MakeEdge::Vertex1),
             R"#(Returns the first vertex of the edge. May be Null.)#" )
        .def("Vertex2",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge::*)() const) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge::*)() const>(&BRepBuilderAPI_MakeEdge::Vertex2),
             R"#(Returns the second vertex of the edge. May be Null.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeEdge2d , shared_ptr<BRepBuilderAPI_MakeEdge2d>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakeEdge2d"))
    // constructors
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin2d & >()  , py::arg("L") )
        .def(py::init< const gp_Lin2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Lin2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Lin2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Circ2d & >()  , py::arg("L") )
        .def(py::init< const gp_Circ2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Circ2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Circ2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Elips2d & >()  , py::arg("L") )
        .def(py::init< const gp_Elips2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Elips2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Elips2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Hypr2d & >()  , py::arg("L") )
        .def(py::init< const gp_Hypr2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Hypr2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Hypr2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const gp_Parab2d & >()  , py::arg("L") )
        .def(py::init< const gp_Parab2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const gp_Parab2d &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Parab2d &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> & >()  , py::arg("L") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const gp_Pnt2d &,const gp_Pnt2d & >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const gp_Pnt2d &,const gp_Pnt2d &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2") )
        .def(py::init< const opencascade::handle<Geom2d_Curve> &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Real,const Standard_Real >()  , py::arg("L"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> &  ) >(&BRepBuilderAPI_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&BRepBuilderAPI_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&BRepBuilderAPI_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const gp_Pnt2d & ,  const gp_Pnt2d & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("P1"),  py::arg("P2"),  py::arg("p1"),  py::arg("p2"))
        .def("Init",
             (void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeEdge2d::*)( const opencascade::handle<Geom2d_Curve> & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeEdge2d::Init),
             R"#(None)#"  , py::arg("C"),  py::arg("V1"),  py::arg("V2"),  py::arg("p1"),  py::arg("p2"))
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeEdge2d::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeEdge2d::*)() const>(&BRepBuilderAPI_MakeEdge2d::IsDone),
             R"#(None)#" )
        .def("Error",
             (BRepBuilderAPI_EdgeError (BRepBuilderAPI_MakeEdge2d::*)() const) static_cast<BRepBuilderAPI_EdgeError (BRepBuilderAPI_MakeEdge2d::*)() const>(&BRepBuilderAPI_MakeEdge2d::Error),
             R"#(Returns the error description when NotDone.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepBuilderAPI_MakeEdge2d::*)() ) static_cast<const TopoDS_Edge & (BRepBuilderAPI_MakeEdge2d::*)() >(&BRepBuilderAPI_MakeEdge2d::Edge),
             R"#(None)#" )
        .def("Vertex1",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge2d::*)() const) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge2d::*)() const>(&BRepBuilderAPI_MakeEdge2d::Vertex1),
             R"#(Returns the first vertex of the edge. May be Null.)#" )
        .def("Vertex2",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge2d::*)() const) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge2d::*)() const>(&BRepBuilderAPI_MakeEdge2d::Vertex2),
             R"#(Returns the second vertex of the edge. May be Null.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeFace , shared_ptr<BRepBuilderAPI_MakeFace>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakeFace"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("F") )
        .def(py::init< const gp_Pln & >()  , py::arg("P") )
        .def(py::init< const gp_Cylinder & >()  , py::arg("C") )
        .def(py::init< const gp_Cone & >()  , py::arg("C") )
        .def(py::init< const gp_Sphere & >()  , py::arg("S") )
        .def(py::init< const gp_Torus & >()  , py::arg("C") )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real >()  , py::arg("S"),  py::arg("TolDegen") )
        .def(py::init< const gp_Pln &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("P"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Cylinder &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Cone &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Sphere &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const gp_Torus &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("C"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax") )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("TolDegen") )
        .def(py::init< const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("W"),  py::arg("OnlyPlane")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const gp_Pln &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("P"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Cylinder &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("C"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Cone &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("C"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Sphere &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("S"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const gp_Torus &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("C"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const TopoDS_Wire &,const Standard_Boolean >()  , py::arg("S"),  py::arg("W"),  py::arg("Inside")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const TopoDS_Face &,const TopoDS_Wire & >()  , py::arg("F"),  py::arg("W") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepBuilderAPI_MakeFace::*)( const TopoDS_Face &  ) ) static_cast<void (BRepBuilderAPI_MakeFace::*)( const TopoDS_Face &  ) >(&BRepBuilderAPI_MakeFace::Init),
             R"#(Initializes (or reinitializes) the construction of a face by creating a new object which is a copy of the face F, in order to add wires to it, using the function Add. Note: this complete copy of the geometry is only required if you want to work on the geometries of the two faces independently.)#"  , py::arg("F"))
        .def("Init",
             (void (BRepBuilderAPI_MakeFace::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Boolean ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeFace::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Boolean ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeFace::Init),
             R"#(Initializes (or reinitializes) the construction of a face on the surface S. If Bound is true, a wire is automatically created from the natural bounds of the surface S and added to the face in order to bound it. If Bound is false, no wire is added. This option is used when real bounds are known. These will be added to the face after this initialization, using the function Add. TolDegen parameter is used for resolution of degenerated edges if calculation of natural bounds is turned on.)#"  , py::arg("S"),  py::arg("Bound"),  py::arg("TolDegen"))
        .def("Init",
             (void (BRepBuilderAPI_MakeFace::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (BRepBuilderAPI_MakeFace::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&BRepBuilderAPI_MakeFace::Init),
             R"#(Initializes (or reinitializes) the construction of a face on the surface S, limited in the u parametric direction by the two parameter values UMin and UMax and in the v parametric direction by the two parameter values VMin and VMax. Warning Error returns: - BRepBuilderAPI_ParametersOutOfRange when the parameters given are outside the bounds of the surface or the basis surface of a trimmed surface. TolDegen parameter is used for resolution of degenerated edges.)#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("TolDegen"))
        .def("Add",
             (void (BRepBuilderAPI_MakeFace::*)( const TopoDS_Wire &  ) ) static_cast<void (BRepBuilderAPI_MakeFace::*)( const TopoDS_Wire &  ) >(&BRepBuilderAPI_MakeFace::Add),
             R"#(Adds the wire W to the constructed face as a hole. Warning W must not cross the other bounds of the face, and all the bounds must define only one area on the surface. (Be careful, however, as this is not checked.) Example // a cylinder gp_Cylinder C = ..; // a wire TopoDS_Wire W = ...; BRepBuilderAPI_MakeFace MF(C); MF.Add(W); TopoDS_Face F = MF;)#"  , py::arg("W"))
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeFace::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeFace::*)() const>(&BRepBuilderAPI_MakeFace::IsDone),
             R"#(Returns true if this algorithm has a valid face.)#" )
        .def("Error",
             (BRepBuilderAPI_FaceError (BRepBuilderAPI_MakeFace::*)() const) static_cast<BRepBuilderAPI_FaceError (BRepBuilderAPI_MakeFace::*)() const>(&BRepBuilderAPI_MakeFace::Error),
             R"#(Returns the construction status BRepBuilderAPI_FaceDone if the face is built, or - another value of the BRepBuilderAPI_FaceError enumeration indicating why the construction failed, in particular when the given parameters are outside the bounds of the surface.)#" )
        .def("Face",
             (const TopoDS_Face & (BRepBuilderAPI_MakeFace::*)() const) static_cast<const TopoDS_Face & (BRepBuilderAPI_MakeFace::*)() const>(&BRepBuilderAPI_MakeFace::Face),
             R"#(Returns the constructed face. Exceptions StdFail_NotDone if no face is built.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakePolygon , shared_ptr<BRepBuilderAPI_MakePolygon>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakePolygon"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Pnt &,const gp_Pnt & >()  , py::arg("P1"),  py::arg("P2") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("P1"),  py::arg("P2"),  py::arg("P3"),  py::arg("P4"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("V1"),  py::arg("V2") )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Boolean >()  , py::arg("V1"),  py::arg("V2"),  py::arg("V3"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex &,const TopoDS_Vertex &,const TopoDS_Vertex &,const Standard_Boolean >()  , py::arg("V1"),  py::arg("V2"),  py::arg("V3"),  py::arg("V4"),  py::arg("Close")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepBuilderAPI_MakePolygon::*)( const gp_Pnt &  ) ) static_cast<void (BRepBuilderAPI_MakePolygon::*)( const gp_Pnt &  ) >(&BRepBuilderAPI_MakePolygon::Add),
             R"#(None)#"  , py::arg("P"))
        .def("Add",
             (void (BRepBuilderAPI_MakePolygon::*)( const TopoDS_Vertex &  ) ) static_cast<void (BRepBuilderAPI_MakePolygon::*)( const TopoDS_Vertex &  ) >(&BRepBuilderAPI_MakePolygon::Add),
             R"#(Adds the point P or the vertex V at the end of the polygonal wire under construction. A vertex is automatically created on the point P. Warning - When P or V is coincident to the previous vertex, no edge is built. The method Added can be used to test for this. Neither P nor V is checked to verify that it is coincident with another vertex than the last one, of the polygonal wire under construction. It is also possible to add vertices on a closed polygon (built for example by using a constructor which declares the polygon closed, or after the use of the Close function). Consequently, be careful using this function: you might create: - a polygonal wire with two consecutive coincident edges, or - a non manifold polygonal wire. - P or V is not checked to verify if it is coincident with another vertex but the last one, of the polygonal wire under construction. It is also possible to add vertices on a closed polygon (built for example by using a constructor which declares the polygon closed, or after the use of the Close function). Consequently, be careful when using this function: you might create: - a polygonal wire with two consecutive coincident edges, or - a non-manifold polygonal wire.)#"  , py::arg("V"))
        .def("Added",
             (Standard_Boolean (BRepBuilderAPI_MakePolygon::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakePolygon::*)() const>(&BRepBuilderAPI_MakePolygon::Added),
             R"#(Returns true if the last vertex added to the constructed polygonal wire is not coincident with the previous one.)#" )
        .def("Close",
             (void (BRepBuilderAPI_MakePolygon::*)() ) static_cast<void (BRepBuilderAPI_MakePolygon::*)() >(&BRepBuilderAPI_MakePolygon::Close),
             R"#(Closes the polygonal wire under construction. Note - this is equivalent to adding the first vertex to the polygonal wire under construction.)#" )
        .def("FirstVertex",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakePolygon::*)() const) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakePolygon::*)() const>(&BRepBuilderAPI_MakePolygon::FirstVertex),
             R"#(None)#" )
        .def("LastVertex",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakePolygon::*)() const) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakePolygon::*)() const>(&BRepBuilderAPI_MakePolygon::LastVertex),
             R"#(Returns the first or the last vertex of the polygonal wire under construction. If the constructed polygonal wire is closed, the first and the last vertices are identical.)#" )
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakePolygon::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakePolygon::*)() const>(&BRepBuilderAPI_MakePolygon::IsDone),
             R"#(Returns true if this algorithm contains a valid polygonal wire (i.e. if there is at least one edge). IsDone returns false if fewer than two vertices have been chained together by this construction algorithm.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepBuilderAPI_MakePolygon::*)() const) static_cast<const TopoDS_Edge & (BRepBuilderAPI_MakePolygon::*)() const>(&BRepBuilderAPI_MakePolygon::Edge),
             R"#(Returns the edge built between the last two points or vertices added to the constructed polygonal wire under construction. Warning If there is only one vertex in the polygonal wire, the result is a null edge.)#" )
        .def("Wire",
             (const TopoDS_Wire & (BRepBuilderAPI_MakePolygon::*)() ) static_cast<const TopoDS_Wire & (BRepBuilderAPI_MakePolygon::*)() >(&BRepBuilderAPI_MakePolygon::Wire),
             R"#(Returns the constructed polygonal wire, or the already built part of the polygonal wire under construction. Exceptions StdFail_NotDone if the wire is not built, i.e. if fewer than two vertices have been chained together by this construction algorithm.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeShell , shared_ptr<BRepBuilderAPI_MakeShell>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakeShell"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Boolean >()  , py::arg("S"),  py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<Geom_Surface> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepBuilderAPI_MakeShell::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_MakeShell::*)( const opencascade::handle<Geom_Surface> & ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&BRepBuilderAPI_MakeShell::Init),
             R"#(Defines or redefines the arguments for the construction of a shell. The construction is initialized with the surface S, limited in the u parametric direction by the two parameter values UMin and UMax, and in the v parametric direction by the two parameter values VMin and VMax. Warning The function Error returns: - BRepBuilderAPI_ShellParametersOutOfRange when the given parameters are outside the bounds of the surface or the basis surface if S is trimmed)#"  , py::arg("S"),  py::arg("UMin"),  py::arg("UMax"),  py::arg("VMin"),  py::arg("VMax"),  py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeShell::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeShell::*)() const>(&BRepBuilderAPI_MakeShell::IsDone),
             R"#(Returns true if the shell is built.)#" )
        .def("Error",
             (BRepBuilderAPI_ShellError (BRepBuilderAPI_MakeShell::*)() const) static_cast<BRepBuilderAPI_ShellError (BRepBuilderAPI_MakeShell::*)() const>(&BRepBuilderAPI_MakeShell::Error),
             R"#(Returns the construction status: - BRepBuilderAPI_ShellDone if the shell is built, or - another value of the BRepBuilderAPI_ShellError enumeration indicating why the construction failed. This is frequently BRepBuilderAPI_ShellParametersOutOfRange indicating that the given parameters are outside the bounds of the surface.)#" )
        .def("Shell",
             (const TopoDS_Shell & (BRepBuilderAPI_MakeShell::*)() const) static_cast<const TopoDS_Shell & (BRepBuilderAPI_MakeShell::*)() const>(&BRepBuilderAPI_MakeShell::Shell),
             R"#(Returns the new Shell.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeSolid , shared_ptr<BRepBuilderAPI_MakeSolid>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakeSolid"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_CompSolid & >()  , py::arg("S") )
        .def(py::init< const TopoDS_Shell & >()  , py::arg("S") )
        .def(py::init< const TopoDS_Shell &,const TopoDS_Shell & >()  , py::arg("S1"),  py::arg("S2") )
        .def(py::init< const TopoDS_Shell &,const TopoDS_Shell &,const TopoDS_Shell & >()  , py::arg("S1"),  py::arg("S2"),  py::arg("S3") )
        .def(py::init< const TopoDS_Solid & >()  , py::arg("So") )
        .def(py::init< const TopoDS_Solid &,const TopoDS_Shell & >()  , py::arg("So"),  py::arg("S") )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepBuilderAPI_MakeSolid::*)( const TopoDS_Shell &  ) ) static_cast<void (BRepBuilderAPI_MakeSolid::*)( const TopoDS_Shell &  ) >(&BRepBuilderAPI_MakeSolid::Add),
             R"#(Adds the shell to the current solid. Warning No check is done to verify the conditions of coherence of the resulting solid. In particular, S must not intersect other shells of the solid under construction. Besides, after all shells have been added, one of these shells should constitute the outside skin of the solid. It may be closed (a finite solid) or open (an infinite solid). Other shells form hollows (cavities) in these previous ones. Each must bound a closed volume.)#"  , py::arg("S"))
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeSolid::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeSolid::*)() const>(&BRepBuilderAPI_MakeSolid::IsDone),
             R"#(Returns true if the solid is built. For this class, a solid under construction is always valid. If no shell has been added, it could be a whole-space solid. However, no check was done to verify the conditions of coherence of the resulting solid.)#" )
        .def("Solid",
             (const TopoDS_Solid & (BRepBuilderAPI_MakeSolid::*)() ) static_cast<const TopoDS_Solid & (BRepBuilderAPI_MakeSolid::*)() >(&BRepBuilderAPI_MakeSolid::Solid),
             R"#(Returns the new Solid.)#" )
        .def("IsDeleted",
             (Standard_Boolean (BRepBuilderAPI_MakeSolid::*)( const TopoDS_Shape &  ) ) static_cast<Standard_Boolean (BRepBuilderAPI_MakeSolid::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_MakeSolid::IsDeleted),
             R"#(None)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeVertex , shared_ptr<BRepBuilderAPI_MakeVertex>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakeVertex"))
    // constructors
        .def(py::init< const gp_Pnt & >()  , py::arg("P") )
    // custom constructors
    // methods
        .def("Vertex",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakeVertex::*)() ) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakeVertex::*)() >(&BRepBuilderAPI_MakeVertex::Vertex),
             R"#(Returns the constructed vertex.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_MakeWire , shared_ptr<BRepBuilderAPI_MakeWire>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_MakeWire"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Edge & >()  , py::arg("E") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("E1"),  py::arg("E2") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("E1"),  py::arg("E2"),  py::arg("E3") )
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("E1"),  py::arg("E2"),  py::arg("E3"),  py::arg("E4") )
        .def(py::init< const TopoDS_Wire & >()  , py::arg("W") )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Edge & >()  , py::arg("W"),  py::arg("E") )
    // custom constructors
    // methods
        .def("Add",
             (void (BRepBuilderAPI_MakeWire::*)( const TopoDS_Edge &  ) ) static_cast<void (BRepBuilderAPI_MakeWire::*)( const TopoDS_Edge &  ) >(&BRepBuilderAPI_MakeWire::Add),
             R"#(Adds the edge E to the wire under construction. E must be connectable to the wire under construction, and, unless it is the first edge of the wire, must satisfy the following condition: one of its vertices must be geometrically coincident with one of the vertices of the wire (provided that the highest tolerance factor is assigned to the two vertices). It could also be the same vertex. Warning If E is not connectable to the wire under construction it is not added. The function Error will return BRepBuilderAPI_DisconnectedWire, the function IsDone will return false and the function Wire will raise an error, until a new connectable edge is added.)#"  , py::arg("E"))
        .def("Add",
             (void (BRepBuilderAPI_MakeWire::*)( const TopoDS_Wire &  ) ) static_cast<void (BRepBuilderAPI_MakeWire::*)( const TopoDS_Wire &  ) >(&BRepBuilderAPI_MakeWire::Add),
             R"#(Add the edges of <W> to the current wire.)#"  , py::arg("W"))
        .def("Add",
             (void (BRepBuilderAPI_MakeWire::*)(  const NCollection_List<TopoDS_Shape> &  ) ) static_cast<void (BRepBuilderAPI_MakeWire::*)(  const NCollection_List<TopoDS_Shape> &  ) >(&BRepBuilderAPI_MakeWire::Add),
             R"#(Adds the edges of <L> to the current wire. The edges are not to be consecutive. But they are to be all connected geometrically or topologically. If some of them are not connected the Status give DisconnectedWire but the "Maker" is Done() and you can get the partial result. (ie connected to the first edgeof the list <L>))#"  , py::arg("L"))
        .def("IsDone",
             (Standard_Boolean (BRepBuilderAPI_MakeWire::*)() const) static_cast<Standard_Boolean (BRepBuilderAPI_MakeWire::*)() const>(&BRepBuilderAPI_MakeWire::IsDone),
             R"#(Returns true if this algorithm contains a valid wire. IsDone returns false if: - there are no edges in the wire, or - the last edge which you tried to add was not connectable.)#" )
        .def("Error",
             (BRepBuilderAPI_WireError (BRepBuilderAPI_MakeWire::*)() const) static_cast<BRepBuilderAPI_WireError (BRepBuilderAPI_MakeWire::*)() const>(&BRepBuilderAPI_MakeWire::Error),
             R"#(Returns the construction status - BRepBuilderAPI_WireDone if the wire is built, or - another value of the BRepBuilderAPI_WireError enumeration indicating why the construction failed.)#" )
        .def("Wire",
             (const TopoDS_Wire & (BRepBuilderAPI_MakeWire::*)() ) static_cast<const TopoDS_Wire & (BRepBuilderAPI_MakeWire::*)() >(&BRepBuilderAPI_MakeWire::Wire),
             R"#(Returns the constructed wire; or the part of the wire under construction already built. Exceptions StdFail_NotDone if a wire is not built.)#" )
        .def("Edge",
             (const TopoDS_Edge & (BRepBuilderAPI_MakeWire::*)() const) static_cast<const TopoDS_Edge & (BRepBuilderAPI_MakeWire::*)() const>(&BRepBuilderAPI_MakeWire::Edge),
             R"#(Returns the last edge added to the wire under construction. Warning - This edge can be different from the original one (the argument of the function Add, for instance,) - A null edge is returned if there are no edges in the wire under construction, or if the last edge which you tried to add was not connectable..)#" )
        .def("Vertex",
             (const TopoDS_Vertex & (BRepBuilderAPI_MakeWire::*)() const) static_cast<const TopoDS_Vertex & (BRepBuilderAPI_MakeWire::*)() const>(&BRepBuilderAPI_MakeWire::Vertex),
             R"#(Returns the last vertex of the last edge added to the wire under construction. Warning A null vertex is returned if there are no edges in the wire under construction, or if the last edge which you tried to add was not connectableR)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_ModifyShape , shared_ptr<BRepBuilderAPI_ModifyShape>  , BRepBuilderAPI_MakeShape >>(m.attr("BRepBuilderAPI_ModifyShape"))
    // constructors
    // custom constructors
    // methods
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_ModifyShape::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_ModifyShape::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_ModifyShape::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>. S can correspond to the entire initial shape or to its subshape. Exceptions Standard_NoSuchObject if S is not the initial shape or a subshape of the initial shape to which the transformation has been applied. Raises NoSuchObject from Standard if S is not the initial shape or a sub-shape of the initial shape.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Copy , shared_ptr<BRepBuilderAPI_Copy>  , BRepBuilderAPI_ModifyShape >>(m.attr("BRepBuilderAPI_Copy"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean,const Standard_Boolean >()  , py::arg("S"),  py::arg("copyGeom")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("copyMesh")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepBuilderAPI_Copy::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Copy::*)( const TopoDS_Shape & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&BRepBuilderAPI_Copy::Perform),
             R"#(Copies the shape S. Use the function Shape to access the result. If copyMesh is True, triangulation contained in original shape will be copied along with geometry (by default, triangulation gets lost). If copyGeom is False, only topological objects will be copied, while geometry and triangulation will be shared with original shape.)#"  , py::arg("S"),  py::arg("copyGeom")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("copyMesh")=static_cast<const Standard_Boolean>(Standard_False))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_GTransform , shared_ptr<BRepBuilderAPI_GTransform>  , BRepBuilderAPI_ModifyShape >>(m.attr("BRepBuilderAPI_GTransform"))
    // constructors
        .def(py::init< const gp_GTrsf & >()  , py::arg("T") )
        .def(py::init< const TopoDS_Shape &,const gp_GTrsf &,const Standard_Boolean >()  , py::arg("S"),  py::arg("T"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) >(&BRepBuilderAPI_GTransform::Perform),
             R"#(Applies the geometric transformation defined at the time of construction of this framework to the shape S. - If the transformation T is direct and isometric (i.e. if the determinant of the vectorial part of T is equal to 1.), and if Copy equals false (default value), the resulting shape is the same as the original but with a new location assigned to it. - In all other cases, the transformation is applied to a duplicate of S. Use the function Shape to access the result. Note: this framework can be reused to apply the same geometric transformation to other shapes: just specify them by calling the function Perform again.)#"  , py::arg("S"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_GTransform::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_GTransform::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_GTransform::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_NurbsConvert , shared_ptr<BRepBuilderAPI_NurbsConvert>  , BRepBuilderAPI_ModifyShape >>(m.attr("BRepBuilderAPI_NurbsConvert"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Boolean >()  , py::arg("S"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) >(&BRepBuilderAPI_NurbsConvert::Perform),
             R"#(Builds a new shape by converting the geometry of the shape S into NURBS geometry. Specifically, all curves supporting edges of S are converted into BSpline curves, and all surfaces supporting its faces are converted into BSpline surfaces. Use the function Shape to access the new shape. Note: this framework can be reused to convert other shapes: you specify them by calling the function Perform again.)#"  , py::arg("S"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_NurbsConvert::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_NurbsConvert::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_NurbsConvert::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>. S can correspond to the entire initial shape or to its subshape. Exceptions Standard_NoSuchObject if S is not the initial shape or a subshape of the initial shape to which the transformation has been applied.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepBuilderAPI_Transform , shared_ptr<BRepBuilderAPI_Transform>  , BRepBuilderAPI_ModifyShape >>(m.attr("BRepBuilderAPI_Transform"))
    // constructors
        .def(py::init< const gp_Trsf & >()  , py::arg("T") )
        .def(py::init< const TopoDS_Shape &,const gp_Trsf &,const Standard_Boolean >()  , py::arg("S"),  py::arg("T"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepBuilderAPI_Transform::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<void (BRepBuilderAPI_Transform::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) >(&BRepBuilderAPI_Transform::Perform),
             R"#(pplies the geometric transformation defined at the time of construction of this framework to the shape S. - If the transformation T is direct and isometric, in other words, if the determinant of the vectorial part of T is equal to 1., and if Copy equals false (the default value), the resulting shape is the same as the original but with a new location assigned to it. - In all other cases, the transformation is applied to a duplicate of S. Use the function Shape to access the result. Note: this framework can be reused to apply the same geometric transformation to other shapes. You only need to specify them by calling the function Perform again.)#"  , py::arg("S"),  py::arg("Copy")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ModifiedShape",
             (TopoDS_Shape (BRepBuilderAPI_Transform::*)( const TopoDS_Shape &  ) const) static_cast<TopoDS_Shape (BRepBuilderAPI_Transform::*)( const TopoDS_Shape &  ) const>(&BRepBuilderAPI_Transform::ModifiedShape),
             R"#(Returns the modified shape corresponding to <S>.)#"  , py::arg("S"))
        .def("Modified",
             (const TopTools_ListOfShape & (BRepBuilderAPI_Transform::*)( const TopoDS_Shape &  ) ) static_cast<const TopTools_ListOfShape & (BRepBuilderAPI_Transform::*)( const TopoDS_Shape &  ) >(&BRepBuilderAPI_Transform::Modified),
             R"#(Returns the list of shapes modified from the shape <S>.)#"  , py::arg("S"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepBuilderAPI_WireError.hxx
// ./opencascade/BRepBuilderAPI_ShapeModification.hxx
// ./opencascade/BRepBuilderAPI_MakeShape.hxx
// ./opencascade/BRepBuilderAPI_FaceError.hxx
// ./opencascade/BRepBuilderAPI_MakeEdge2d.hxx
// ./opencascade/BRepBuilderAPI_Copy.hxx
// ./opencascade/BRepBuilderAPI_TransitionMode.hxx
// ./opencascade/BRepBuilderAPI_ModifyShape.hxx
// ./opencascade/BRepBuilderAPI_Sewing.hxx
// ./opencascade/BRepBuilderAPI_VertexInspector.hxx
// ./opencascade/BRepBuilderAPI_MakeWire.hxx
// ./opencascade/BRepBuilderAPI_MakeSolid.hxx
// ./opencascade/BRepBuilderAPI_MakeVertex.hxx
// ./opencascade/BRepBuilderAPI_ShellError.hxx
// ./opencascade/BRepBuilderAPI_EdgeError.hxx
// ./opencascade/BRepBuilderAPI_NurbsConvert.hxx
// ./opencascade/BRepBuilderAPI_MakePolygon.hxx
// ./opencascade/BRepBuilderAPI_FindPlane.hxx
// ./opencascade/BRepBuilderAPI_Transform.hxx
// ./opencascade/BRepBuilderAPI_Collect.hxx
// ./opencascade/BRepBuilderAPI_PipeError.hxx
// ./opencascade/BRepBuilderAPI_MakeFace.hxx
// ./opencascade/BRepBuilderAPI_BndBoxTreeSelector.hxx
// ./opencascade/BRepBuilderAPI.hxx
// ./opencascade/BRepBuilderAPI_GTransform.hxx
// ./opencascade/BRepBuilderAPI_Command.hxx
// ./opencascade/BRepBuilderAPI_MakeShell.hxx
// ./opencascade/BRepBuilderAPI_FastSewing.hxx
// ./opencascade/BRepBuilderAPI_MakeEdge.hxx
// ./opencascade/BRepBuilderAPI_CellFilter.hxx

// operators

// register typdefs
    register_template_NCollection_Vector<gp_XYZ>(m,"VectorOfPoint");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
