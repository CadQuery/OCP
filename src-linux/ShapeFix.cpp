
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

#include <TColStd_HArray1OfReal.hxx>

// includes to resolve forward declarations
#include <TopoDS_Shape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeFix_Root.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeFix_Wire.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_FixSmallFace.hxx>
#include <ShapeFix_FixSmallSolid.hxx>
#include <ShapeFix_WireVertex.hxx>
#include <ShapeFix_Wireframe.hxx>
#include <ShapeFix_FreeBounds.hxx>
#include <ShapeFix_FaceConnect.hxx>
#include <ShapeFix_Shell.hxx>
#include <ShapeFix_Solid.hxx>
#include <ShapeFix_ShapeTolerance.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_EdgeConnect.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <ShapeFix_WireSegment.hxx>
#include <ShapeFix_IntersectionTool.hxx>
#include <ShapeFix_SplitTool.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeFix_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <Message_Msg.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeFix_Wire.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <Message_ProgressIndicator.hxx>
#include <TopoDS_Shell.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeExtend_WireData.hxx>
#include <gp_Lin2d.hxx>
#include <Geom_Surface.hxx>
#include <ShapeFix_Edge.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>

// module includes
#include <ShapeFix.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d.hxx>
#include <ShapeFix_DataMapOfShapeBox2d.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeFix_EdgeConnect.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_FaceConnect.hxx>
#include <ShapeFix_FixSmallFace.hxx>
#include <ShapeFix_FixSmallSolid.hxx>
#include <ShapeFix_FreeBounds.hxx>
#include <ShapeFix_IntersectionTool.hxx>
#include <ShapeFix_Root.hxx>
#include <ShapeFix_SequenceOfWireSegment.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_ShapeTolerance.hxx>
#include <ShapeFix_Shell.hxx>
#include <ShapeFix_Solid.hxx>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <ShapeFix_SplitTool.hxx>
#include <ShapeFix_Wire.hxx>
#include <ShapeFix_Wireframe.hxx>
#include <ShapeFix_WireSegment.hxx>
#include <ShapeFix_WireVertex.hxx>

// template related includes
// ./opencascade/ShapeFix_SequenceOfWireSegment.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeFix_DataMapOfShapeBox2d.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/ShapeFix_DataMapOfShapeBox2d.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeFix(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeFix"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ShapeFix , shared_ptr<ShapeFix>>(m,"ShapeFix");

    static_cast<py::class_<ShapeFix , shared_ptr<ShapeFix> >>(m.attr("ShapeFix"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("SameParameter_s",
                    (Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Real , const opencascade::handle<Message_ProgressIndicator> & , const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Shape & , const Standard_Boolean , const Standard_Real , const opencascade::handle<Message_ProgressIndicator> & , const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeFix::SameParameter),
                    R"#(Runs SameParameter from BRepLib with these adaptations : <enforce> forces computations, else they are made only on Edges with flag SameParameter false <preci>, if not precised, is taken for each EDge as its own Tolerance Returns True when done, False if an exception has been raised In case of exception anyway, as many edges as possible have been processed. The passed progress indicator allows user to consult the current progress stage and abort algorithm if needed.)#"  , py::arg("shape"),  py::arg("enforce"),  py::arg("preci")=static_cast<const Standard_Real>(0.0),  py::arg("theProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(0),  py::arg("theMsgReg")=static_cast<const opencascade::handle<ShapeExtend_BasicMsgRegistrator> &>(0))
        .def_static("EncodeRegularity_s",
                    (void (*)( const TopoDS_Shape & , const Standard_Real ) ) static_cast<void (*)( const TopoDS_Shape & , const Standard_Real ) >(&ShapeFix::EncodeRegularity),
                    R"#(Runs EncodeRegularity from BRepLib taking into account shared components of assemblies, so that each component is processed only once)#"  , py::arg("shape"),  py::arg("tolang")=static_cast<const Standard_Real>(1.0e-10))
        .def_static("RemoveSmallEdges_s",
                    (TopoDS_Shape (*)( TopoDS_Shape & , const Standard_Real , opencascade::handle<ShapeBuild_ReShape> & ) ) static_cast<TopoDS_Shape (*)( TopoDS_Shape & , const Standard_Real , opencascade::handle<ShapeBuild_ReShape> & ) >(&ShapeFix::RemoveSmallEdges),
                    R"#(Removes edges which are less than given tolerance from shape with help of ShapeFix_Wire::FixSmall())#"  , py::arg("shape"),  py::arg("Tolerance"),  py::arg("context"))
        .def_static("FixVertexPosition_s",
                    (Standard_Boolean (*)( TopoDS_Shape & , const Standard_Real , const opencascade::handle<ShapeBuild_ReShape> & ) ) static_cast<Standard_Boolean (*)( TopoDS_Shape & , const Standard_Real , const opencascade::handle<ShapeBuild_ReShape> & ) >(&ShapeFix::FixVertexPosition),
                    R"#(Fix position of the vertices having tolerance more tnan specified one.;)#"  , py::arg("theshape"),  py::arg("theTolerance"),  py::arg("thecontext"))
        .def_static("LeastEdgeSize_s",
                    (Standard_Real (*)( TopoDS_Shape & ) ) static_cast<Standard_Real (*)( TopoDS_Shape & ) >(&ShapeFix::LeastEdgeSize),
                    R"#(Calculate size of least edge;)#"  , py::arg("theshape"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Edge ,opencascade::handle<ShapeFix_Edge> , Standard_Transient>>(m.attr("ShapeFix_Edge"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Projector",
             (opencascade::handle<ShapeConstruct_ProjectCurveOnSurface> (ShapeFix_Edge::*)() ) static_cast<opencascade::handle<ShapeConstruct_ProjectCurveOnSurface> (ShapeFix_Edge::*)() >(&ShapeFix_Edge::Projector),
             R"#(Returns the projector used for recomputing missing pcurves Can be used for adjusting parameters of projector)#" )
        .def("FixRemovePCurve",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&ShapeFix_Edge::FixRemovePCurve),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"))
        .def("FixRemovePCurve",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) >(&ShapeFix_Edge::FixRemovePCurve),
             R"#(Removes the pcurve(s) of the edge if it does not match the vertices Check is done Use : It is to be called when pcurve of an edge can be wrong (e.g., after import from IGES) Returns: True, if does not match, removed (status DONE) False, (status OK) if matches or (status FAIL) if no pcurve, nothing done)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"))
        .def("FixRemoveCurve3d",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & ) >(&ShapeFix_Edge::FixRemoveCurve3d),
             R"#(Removes 3d curve of the edge if it does not match the vertices Returns: True, if does not match, removed (status DONE) False, (status OK) if matches or (status FAIL) if no 3d curve, nothing done)#"  , py::arg("edge"))
        .def("FixAddPCurve",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Boolean , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Boolean , const Standard_Real ) >(&ShapeFix_Edge::FixAddPCurve),
             R"#(See method below for information)#"  , py::arg("edge"),  py::arg("face"),  py::arg("isSeam"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("FixAddPCurve",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Boolean , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Boolean , const Standard_Real ) >(&ShapeFix_Edge::FixAddPCurve),
             R"#(See method below for information)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"),  py::arg("isSeam"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("FixAddPCurve",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Boolean , const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Boolean , const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real ) >(&ShapeFix_Edge::FixAddPCurve),
             R"#(See method below for information)#"  , py::arg("edge"),  py::arg("face"),  py::arg("isSeam"),  py::arg("surfana"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("FixAddPCurve",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Boolean , const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & , const Standard_Boolean , const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real ) >(&ShapeFix_Edge::FixAddPCurve),
             R"#(Adds pcurve(s) of the edge if missing (by projecting 3d curve) Parameter isSeam indicates if the edge is a seam. The parameter <prec> defines the precision for calculations. If it is 0 (default), the tolerance of the edge is taken. Remark : This method is rather for internal use since it accepts parameter <surfana> for optimization of computations Use : It is to be called after FixRemovePCurve (if removed) or in any case when edge can have no pcurve Returns: True if pcurve was added, else False Status : OK : Pcurve exists FAIL1: No 3d curve FAIL2: fail during projecting DONE1: Pcurve was added DONE2: specific case of pcurve going through degenerated point on sphere encountered during projection (see class ShapeConstruct_ProjectCurveOnSurface for more info))#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"),  py::arg("isSeam"),  py::arg("surfana"),  py::arg("prec")=static_cast<const Standard_Real>(0.0))
        .def("FixAddCurve3d",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & ) >(&ShapeFix_Edge::FixAddCurve3d),
             R"#(Tries to build 3d curve of the edge if missing Use : It is to be called after FixRemoveCurve3d (if removed) or in any case when edge can have no 3d curve Returns: True if 3d curve was added, else False Status : OK : 3d curve exists FAIL1: BRepLib::BuildCurve3d() has failed DONE1: 3d curve was added)#"  , py::arg("edge"))
        .def("FixVertexTolerance",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&ShapeFix_Edge::FixVertexTolerance),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"))
        .def("FixVertexTolerance",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & ) >(&ShapeFix_Edge::FixVertexTolerance),
             R"#(Increases the tolerances of the edge vertices to comprise the ends of 3d curve and pcurve on the given face (first method) or all pcurves stored in an edge (second one) Returns: True, if tolerances have been increased, otherwise False Status: OK : the original tolerances have not been changed DONE1: the tolerance of first vertex has been increased DONE2: the tolerance of last vertex has been increased)#"  , py::arg("edge"))
        .def("FixReversed2d",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & ) >(&ShapeFix_Edge::FixReversed2d),
             R"#(None)#"  , py::arg("edge"),  py::arg("face"))
        .def("FixReversed2d",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) >(&ShapeFix_Edge::FixReversed2d),
             R"#(Fixes edge if pcurve is directed opposite to 3d curve Check is done by call to the function ShapeAnalysis_Edge::CheckCurve3dWithPCurve() Warning: For seam edge this method will check and fix the pcurve in only one direction. Hence, it should be called twice for seam edge: once with edge orientation FORWARD and once with REVERSED. Returns: False if nothing done, True if reversed (status DONE) Status: OK - pcurve OK, nothing done FAIL1 - no pcurve FAIL2 - no 3d curve DONE1 - pcurve was reversed)#"  , py::arg("edge"),  py::arg("surface"),  py::arg("location"))
        .def("FixSameParameter",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const Standard_Real ) >(&ShapeFix_Edge::FixSameParameter),
             R"#(Tries to make edge SameParameter and sets corresponding tolerance and SameParameter flag. First, it makes edge same range if SameRange flag is not set.)#"  , py::arg("edge"),  py::arg("tolerance")=static_cast<const Standard_Real>(0.0))
        .def("FixSameParameter",
             (Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) >(&ShapeFix_Edge::FixSameParameter),
             R"#(Tries to make edge SameParameter and sets corresponding tolerance and SameParameter flag. First, it makes edge same range if SameRange flag is not set.)#"  , py::arg("edge"),  py::arg("face"),  py::arg("tolerance")=static_cast<const Standard_Real>(0.0))
        .def("Status",
             (Standard_Boolean (ShapeFix_Edge::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Edge::*)( const ShapeExtend_Status ) const>(&ShapeFix_Edge::Status),
             R"#(Returns the status (in the form of True/False) of last Fix)#"  , py::arg("status"))
        .def("SetContext",
             (void (ShapeFix_Edge::*)( const opencascade::handle<ShapeBuild_ReShape> & ) ) static_cast<void (ShapeFix_Edge::*)( const opencascade::handle<ShapeBuild_ReShape> & ) >(&ShapeFix_Edge::SetContext),
             R"#(Sets context)#"  , py::arg("context"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Edge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Edge::*)() const>(&ShapeFix_Edge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Edge::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Edge::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_EdgeConnect , shared_ptr<ShapeFix_EdgeConnect> >>(m.attr("ShapeFix_EdgeConnect"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (void (ShapeFix_EdgeConnect::*)( const TopoDS_Edge & , const TopoDS_Edge & ) ) static_cast<void (ShapeFix_EdgeConnect::*)( const TopoDS_Edge & , const TopoDS_Edge & ) >(&ShapeFix_EdgeConnect::Add),
             R"#(Adds information on connectivity between start vertex of second edge and end vertex of first edge, taking edges orientation into account)#"  , py::arg("aFirst"),  py::arg("aSecond"))
        .def("Add",
             (void (ShapeFix_EdgeConnect::*)( const TopoDS_Shape & ) ) static_cast<void (ShapeFix_EdgeConnect::*)( const TopoDS_Shape & ) >(&ShapeFix_EdgeConnect::Add),
             R"#(Adds connectivity information for the whole shape. Note: edges in wires must be well ordered Note: flag Closed should be set for closed wires)#"  , py::arg("aShape"))
        .def("Build",
             (void (ShapeFix_EdgeConnect::*)() ) static_cast<void (ShapeFix_EdgeConnect::*)() >(&ShapeFix_EdgeConnect::Build),
             R"#(Builds shared vertices, updates their positions and tolerances)#" )
        .def("Clear",
             (void (ShapeFix_EdgeConnect::*)() ) static_cast<void (ShapeFix_EdgeConnect::*)() >(&ShapeFix_EdgeConnect::Clear),
             R"#(Clears internal data structure)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_EdgeProjAux ,opencascade::handle<ShapeFix_EdgeProjAux> , Standard_Transient>>(m.attr("ShapeFix_EdgeProjAux"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face &,const TopoDS_Edge & >()  , py::arg("F"),  py::arg("E") )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_EdgeProjAux::*)( const TopoDS_Face & , const TopoDS_Edge & ) ) static_cast<void (ShapeFix_EdgeProjAux::*)( const TopoDS_Face & , const TopoDS_Edge & ) >(&ShapeFix_EdgeProjAux::Init),
             R"#(None)#"  , py::arg("F"),  py::arg("E"))
        .def("Compute",
             (void (ShapeFix_EdgeProjAux::*)( const Standard_Real ) ) static_cast<void (ShapeFix_EdgeProjAux::*)( const Standard_Real ) >(&ShapeFix_EdgeProjAux::Compute),
             R"#(None)#"  , py::arg("preci"))
        .def("IsFirstDone",
             (Standard_Boolean (ShapeFix_EdgeProjAux::*)() const) static_cast<Standard_Boolean (ShapeFix_EdgeProjAux::*)() const>(&ShapeFix_EdgeProjAux::IsFirstDone),
             R"#(None)#" )
        .def("IsLastDone",
             (Standard_Boolean (ShapeFix_EdgeProjAux::*)() const) static_cast<Standard_Boolean (ShapeFix_EdgeProjAux::*)() const>(&ShapeFix_EdgeProjAux::IsLastDone),
             R"#(None)#" )
        .def("FirstParam",
             (Standard_Real (ShapeFix_EdgeProjAux::*)() const) static_cast<Standard_Real (ShapeFix_EdgeProjAux::*)() const>(&ShapeFix_EdgeProjAux::FirstParam),
             R"#(None)#" )
        .def("LastParam",
             (Standard_Real (ShapeFix_EdgeProjAux::*)() const) static_cast<Standard_Real (ShapeFix_EdgeProjAux::*)() const>(&ShapeFix_EdgeProjAux::LastParam),
             R"#(None)#" )
        .def("IsIso",
             (Standard_Boolean (ShapeFix_EdgeProjAux::*)( const opencascade::handle<Geom2d_Curve> & ) ) static_cast<Standard_Boolean (ShapeFix_EdgeProjAux::*)( const opencascade::handle<Geom2d_Curve> & ) >(&ShapeFix_EdgeProjAux::IsIso),
             R"#(None)#"  , py::arg("C"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_EdgeProjAux::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_EdgeProjAux::*)() const>(&ShapeFix_EdgeProjAux::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_EdgeProjAux::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_EdgeProjAux::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FaceConnect , shared_ptr<ShapeFix_FaceConnect> >>(m.attr("ShapeFix_FaceConnect"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Add",
             (Standard_Boolean (ShapeFix_FaceConnect::*)( const TopoDS_Face & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (ShapeFix_FaceConnect::*)( const TopoDS_Face & , const TopoDS_Face & ) >(&ShapeFix_FaceConnect::Add),
             R"#(None)#"  , py::arg("aFirst"),  py::arg("aSecond"))
        .def("Build",
             (TopoDS_Shell (ShapeFix_FaceConnect::*)( const TopoDS_Shell & , const Standard_Real , const Standard_Real ) ) static_cast<TopoDS_Shell (ShapeFix_FaceConnect::*)( const TopoDS_Shell & , const Standard_Real , const Standard_Real ) >(&ShapeFix_FaceConnect::Build),
             R"#(None)#"  , py::arg("shell"),  py::arg("sewtoler"),  py::arg("fixtoler"))
        .def("Clear",
             (void (ShapeFix_FaceConnect::*)() ) static_cast<void (ShapeFix_FaceConnect::*)() >(&ShapeFix_FaceConnect::Clear),
             R"#(Clears internal data structure)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FreeBounds , shared_ptr<ShapeFix_FreeBounds> >>(m.attr("ShapeFix_FreeBounds"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("shape"),  py::arg("sewtoler"),  py::arg("closetoler"),  py::arg("splitclosed"),  py::arg("splitopen") )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Boolean,const Standard_Boolean >()  , py::arg("shape"),  py::arg("closetoler"),  py::arg("splitclosed"),  py::arg("splitopen") )
    // custom constructors
    // methods
        .def("GetClosedWires",
             (const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const>(&ShapeFix_FreeBounds::GetClosedWires),
             R"#(Returns compound of closed wires out of free edges.)#" )
        .def("GetOpenWires",
             (const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const>(&ShapeFix_FreeBounds::GetOpenWires),
             R"#(Returns compound of open wires out of free edges.)#" )
        .def("GetShape",
             (const TopoDS_Shape & (ShapeFix_FreeBounds::*)() const) static_cast<const TopoDS_Shape & (ShapeFix_FreeBounds::*)() const>(&ShapeFix_FreeBounds::GetShape),
             R"#(Returns modified source shape.)#" )
        .def("GetClosedWires",
             (const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const>(&ShapeFix_FreeBounds::GetClosedWires),
             R"#(Returns compound of closed wires out of free edges.)#" )
        .def("GetOpenWires",
             (const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const) static_cast<const TopoDS_Compound & (ShapeFix_FreeBounds::*)() const>(&ShapeFix_FreeBounds::GetOpenWires),
             R"#(Returns compound of open wires out of free edges.)#" )
        .def("GetShape",
             (const TopoDS_Shape & (ShapeFix_FreeBounds::*)() const) static_cast<const TopoDS_Shape & (ShapeFix_FreeBounds::*)() const>(&ShapeFix_FreeBounds::GetShape),
             R"#(Returns modified source shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_IntersectionTool , shared_ptr<ShapeFix_IntersectionTool> >>(m.attr("ShapeFix_IntersectionTool"))
    // constructors
        .def(py::init< const opencascade::handle<ShapeBuild_ReShape> &,const Standard_Real,const Standard_Real >()  , py::arg("context"),  py::arg("preci"),  py::arg("maxtol")=static_cast<const Standard_Real>(1.0) )
    // custom constructors
    // methods
        .def("Context",
             (opencascade::handle<ShapeBuild_ReShape> (ShapeFix_IntersectionTool::*)() const) static_cast<opencascade::handle<ShapeBuild_ReShape> (ShapeFix_IntersectionTool::*)() const>(&ShapeFix_IntersectionTool::Context),
             R"#(Returns context)#" )
        .def("SplitEdge",
             (Standard_Boolean (ShapeFix_IntersectionTool::*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real ) const) static_cast<Standard_Boolean (ShapeFix_IntersectionTool::*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real ) const>(&ShapeFix_IntersectionTool::SplitEdge),
             R"#(Split edge on two new edges using new vertex "vert" and "param" - parameter for splitting The "face" is necessary for pcurves and using TransferParameterProj)#"  , py::arg("edge"),  py::arg("param"),  py::arg("vert"),  py::arg("face"),  py::arg("newE1"),  py::arg("newE2"),  py::arg("preci"))
        .def("CutEdge",
             (Standard_Boolean (ShapeFix_IntersectionTool::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const TopoDS_Face & , Standard_Boolean & ) const) static_cast<Standard_Boolean (ShapeFix_IntersectionTool::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const TopoDS_Face & , Standard_Boolean & ) const>(&ShapeFix_IntersectionTool::CutEdge),
             R"#(Cut edge by parameters pend and cut)#"  , py::arg("edge"),  py::arg("pend"),  py::arg("cut"),  py::arg("face"),  py::arg("iscutline"))
        .def("FixSelfIntersectWire",
             (Standard_Boolean (ShapeFix_IntersectionTool::*)( opencascade::handle<ShapeExtend_WireData> & , const TopoDS_Face & , Standard_Integer & , Standard_Integer & , Standard_Integer & ) const) static_cast<Standard_Boolean (ShapeFix_IntersectionTool::*)( opencascade::handle<ShapeExtend_WireData> & , const TopoDS_Face & , Standard_Integer & , Standard_Integer & , Standard_Integer & ) const>(&ShapeFix_IntersectionTool::FixSelfIntersectWire),
             R"#(None)#"  , py::arg("sewd"),  py::arg("face"),  py::arg("NbSplit"),  py::arg("NbCut"),  py::arg("NbRemoved"))
        .def("FixIntersectingWires",
             (Standard_Boolean (ShapeFix_IntersectionTool::*)( TopoDS_Face & ) const) static_cast<Standard_Boolean (ShapeFix_IntersectionTool::*)( TopoDS_Face & ) const>(&ShapeFix_IntersectionTool::FixIntersectingWires),
             R"#(None)#"  , py::arg("face"))
        .def("Context",
             (opencascade::handle<ShapeBuild_ReShape> (ShapeFix_IntersectionTool::*)() const) static_cast<opencascade::handle<ShapeBuild_ReShape> (ShapeFix_IntersectionTool::*)() const>(&ShapeFix_IntersectionTool::Context),
             R"#(Returns context)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Root ,opencascade::handle<ShapeFix_Root> , Standard_Transient>>(m.attr("ShapeFix_Root"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Set",
             (void (ShapeFix_Root::*)( const opencascade::handle<ShapeFix_Root> & ) ) static_cast<void (ShapeFix_Root::*)( const opencascade::handle<ShapeFix_Root> & ) >(&ShapeFix_Root::Set),
             R"#(Copy all fields from another Root object)#"  , py::arg("Root"))
        .def("SetContext",
             (void (ShapeFix_Root::*)( const opencascade::handle<ShapeBuild_ReShape> & ) ) static_cast<void (ShapeFix_Root::*)( const opencascade::handle<ShapeBuild_ReShape> & ) >(&ShapeFix_Root::SetContext),
             R"#(Sets context)#"  , py::arg("context"))
        .def("Context",
             (opencascade::handle<ShapeBuild_ReShape> (ShapeFix_Root::*)() const) static_cast<opencascade::handle<ShapeBuild_ReShape> (ShapeFix_Root::*)() const>(&ShapeFix_Root::Context),
             R"#(Returns context)#" )
        .def("SetMsgRegistrator",
             (void (ShapeFix_Root::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<void (ShapeFix_Root::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeFix_Root::SetMsgRegistrator),
             R"#(Sets message registrator)#"  , py::arg("msgreg"))
        .def("MsgRegistrator",
             (opencascade::handle<ShapeExtend_BasicMsgRegistrator> (ShapeFix_Root::*)() const) static_cast<opencascade::handle<ShapeExtend_BasicMsgRegistrator> (ShapeFix_Root::*)() const>(&ShapeFix_Root::MsgRegistrator),
             R"#(Returns message registrator)#" )
        .def("SetPrecision",
             (void (ShapeFix_Root::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Root::*)( const Standard_Real ) >(&ShapeFix_Root::SetPrecision),
             R"#(Sets basic precision value)#"  , py::arg("preci"))
        .def("Precision",
             (Standard_Real (ShapeFix_Root::*)() const) static_cast<Standard_Real (ShapeFix_Root::*)() const>(&ShapeFix_Root::Precision),
             R"#(Returns basic precision value)#" )
        .def("SetMinTolerance",
             (void (ShapeFix_Root::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Root::*)( const Standard_Real ) >(&ShapeFix_Root::SetMinTolerance),
             R"#(Sets minimal allowed tolerance)#"  , py::arg("mintol"))
        .def("MinTolerance",
             (Standard_Real (ShapeFix_Root::*)() const) static_cast<Standard_Real (ShapeFix_Root::*)() const>(&ShapeFix_Root::MinTolerance),
             R"#(Returns minimal allowed tolerance)#" )
        .def("SetMaxTolerance",
             (void (ShapeFix_Root::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Root::*)( const Standard_Real ) >(&ShapeFix_Root::SetMaxTolerance),
             R"#(Sets maximal allowed tolerance)#"  , py::arg("maxtol"))
        .def("MaxTolerance",
             (Standard_Real (ShapeFix_Root::*)() const) static_cast<Standard_Real (ShapeFix_Root::*)() const>(&ShapeFix_Root::MaxTolerance),
             R"#(Returns maximal allowed tolerance)#" )
        .def("LimitTolerance",
             (Standard_Real (ShapeFix_Root::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeFix_Root::*)( const Standard_Real ) const>(&ShapeFix_Root::LimitTolerance),
             R"#(Returns tolerance limited by [myMinTol,myMaxTol])#"  , py::arg("toler"))
        .def("SendMsg",
             (void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) const) static_cast<void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & , const Message_Gravity ) const>(&ShapeFix_Root::SendMsg),
             R"#(Sends a message to be attached to the shape. Calls corresponding message of message registrator.)#"  , py::arg("shape"),  py::arg("message"),  py::arg("gravity")=static_cast<const Message_Gravity>(Message_Info))
        .def("SendMsg",
             (void (ShapeFix_Root::*)( const Message_Msg & , const Message_Gravity ) const) static_cast<void (ShapeFix_Root::*)( const Message_Msg & , const Message_Gravity ) const>(&ShapeFix_Root::SendMsg),
             R"#(Sends a message to be attached to myShape. Calls previous method.)#"  , py::arg("message"),  py::arg("gravity")=static_cast<const Message_Gravity>(Message_Info))
        .def("SendWarning",
             (void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const>(&ShapeFix_Root::SendWarning),
             R"#(Sends a warning to be attached to the shape. Calls SendMsg with gravity set to Message_Warning.)#"  , py::arg("shape"),  py::arg("message"))
        .def("SendWarning",
             (void (ShapeFix_Root::*)( const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const Message_Msg & ) const>(&ShapeFix_Root::SendWarning),
             R"#(Calls previous method for myShape.)#"  , py::arg("message"))
        .def("SendFail",
             (void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const>(&ShapeFix_Root::SendFail),
             R"#(Sends a fail to be attached to the shape. Calls SendMsg with gravity set to Message_Fail.)#"  , py::arg("shape"),  py::arg("message"))
        .def("SendFail",
             (void (ShapeFix_Root::*)( const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const Message_Msg & ) const>(&ShapeFix_Root::SendFail),
             R"#(Calls previous method for myShape.)#"  , py::arg("message"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Root::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Root::*)() const>(&ShapeFix_Root::DynamicType),
             R"#(None)#" )
        .def("Context",
             (opencascade::handle<ShapeBuild_ReShape> (ShapeFix_Root::*)() const) static_cast<opencascade::handle<ShapeBuild_ReShape> (ShapeFix_Root::*)() const>(&ShapeFix_Root::Context),
             R"#(Returns context)#" )
        .def("MsgRegistrator",
             (opencascade::handle<ShapeExtend_BasicMsgRegistrator> (ShapeFix_Root::*)() const) static_cast<opencascade::handle<ShapeExtend_BasicMsgRegistrator> (ShapeFix_Root::*)() const>(&ShapeFix_Root::MsgRegistrator),
             R"#(Returns message registrator)#" )
        .def("Precision",
             (Standard_Real (ShapeFix_Root::*)() const) static_cast<Standard_Real (ShapeFix_Root::*)() const>(&ShapeFix_Root::Precision),
             R"#(Returns basic precision value)#" )
        .def("MinTolerance",
             (Standard_Real (ShapeFix_Root::*)() const) static_cast<Standard_Real (ShapeFix_Root::*)() const>(&ShapeFix_Root::MinTolerance),
             R"#(Returns minimal allowed tolerance)#" )
        .def("MaxTolerance",
             (Standard_Real (ShapeFix_Root::*)() const) static_cast<Standard_Real (ShapeFix_Root::*)() const>(&ShapeFix_Root::MaxTolerance),
             R"#(Returns maximal allowed tolerance)#" )
        .def("LimitTolerance",
             (Standard_Real (ShapeFix_Root::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeFix_Root::*)( const Standard_Real ) const>(&ShapeFix_Root::LimitTolerance),
             R"#(Returns tolerance limited by [myMinTol,myMaxTol])#"  , py::arg("toler"))
        .def("SendMsg",
             (void (ShapeFix_Root::*)( const Message_Msg & , const Message_Gravity ) const) static_cast<void (ShapeFix_Root::*)( const Message_Msg & , const Message_Gravity ) const>(&ShapeFix_Root::SendMsg),
             R"#(Sends a message to be attached to myShape. Calls previous method.)#"  , py::arg("message"),  py::arg("gravity"))
        .def("SendWarning",
             (void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const>(&ShapeFix_Root::SendWarning),
             R"#(Sends a warning to be attached to the shape. Calls SendMsg with gravity set to Message_Warning.)#"  , py::arg("shape"),  py::arg("message"))
        .def("SendWarning",
             (void (ShapeFix_Root::*)( const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const Message_Msg & ) const>(&ShapeFix_Root::SendWarning),
             R"#(Calls previous method for myShape.)#"  , py::arg("message"))
        .def("SendFail",
             (void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const TopoDS_Shape & , const Message_Msg & ) const>(&ShapeFix_Root::SendFail),
             R"#(Sends a fail to be attached to the shape. Calls SendMsg with gravity set to Message_Fail.)#"  , py::arg("shape"),  py::arg("message"))
        .def("SendFail",
             (void (ShapeFix_Root::*)( const Message_Msg & ) const) static_cast<void (ShapeFix_Root::*)( const Message_Msg & ) const>(&ShapeFix_Root::SendFail),
             R"#(Calls previous method for myShape.)#"  , py::arg("message"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Root::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Root::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_ShapeTolerance , shared_ptr<ShapeFix_ShapeTolerance> >>(m.attr("ShapeFix_ShapeTolerance"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("LimitTolerance",
             (Standard_Boolean (ShapeFix_ShapeTolerance::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real , const TopAbs_ShapeEnum ) const) static_cast<Standard_Boolean (ShapeFix_ShapeTolerance::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real , const TopAbs_ShapeEnum ) const>(&ShapeFix_ShapeTolerance::LimitTolerance),
             R"#(Limits tolerances in a shape as follows : tmin = tmax -> as SetTolerance (forces) tmin = 0 -> maximum tolerance will be <tmax> tmax = 0 or not given (more generally, tmax < tmin) -> <tmax> ignored, minimum will be <tmin> else, maximum will be <max> and minimum will be <min> styp = VERTEX : only vertices are set styp = EDGE : only edges are set styp = FACE : only faces are set styp = WIRE : to have edges and their vertices set styp = other value : all (vertices,edges,faces) are set Returns True if at least one tolerance of the sub-shape has been modified)#"  , py::arg("shape"),  py::arg("tmin"),  py::arg("tmax")=static_cast<const Standard_Real>(0.0),  py::arg("styp")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
        .def("SetTolerance",
             (void (ShapeFix_ShapeTolerance::*)( const TopoDS_Shape & , const Standard_Real , const TopAbs_ShapeEnum ) const) static_cast<void (ShapeFix_ShapeTolerance::*)( const TopoDS_Shape & , const Standard_Real , const TopAbs_ShapeEnum ) const>(&ShapeFix_ShapeTolerance::SetTolerance),
             R"#(Sets (enforces) tolerances in a shape to the given value styp = VERTEX : only vertices are set styp = EDGE : only edges are set styp = FACE : only faces are set styp = WIRE : to have edges and their vertices set styp = other value : all (vertices,edges,faces) are set)#"  , py::arg("shape"),  py::arg("preci"),  py::arg("styp")=static_cast<const TopAbs_ShapeEnum>(TopAbs_SHAPE))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_SplitTool , shared_ptr<ShapeFix_SplitTool> >>(m.attr("ShapeFix_SplitTool"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SplitEdge",
             (Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real , const Standard_Real ) const>(&ShapeFix_SplitTool::SplitEdge),
             R"#(Split edge on two new edges using new vertex "vert" and "param" - parameter for splitting The "face" is necessary for pcurves and using TransferParameterProj)#"  , py::arg("edge"),  py::arg("param"),  py::arg("vert"),  py::arg("face"),  py::arg("newE1"),  py::arg("newE2"),  py::arg("tol3d"),  py::arg("tol2d"))
        .def("SplitEdge",
             (Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real , const Standard_Real ) const>(&ShapeFix_SplitTool::SplitEdge),
             R"#(Split edge on two new edges using new vertex "vert" and "param1" and "param2" - parameter for splitting and cutting The "face" is necessary for pcurves and using TransferParameterProj)#"  , py::arg("edge"),  py::arg("param1"),  py::arg("param2"),  py::arg("vert"),  py::arg("face"),  py::arg("newE1"),  py::arg("newE2"),  py::arg("tol3d"),  py::arg("tol2d"))
        .def("CutEdge",
             (Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const TopoDS_Face & , Standard_Boolean & ) const) static_cast<Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const Standard_Real , const TopoDS_Face & , Standard_Boolean & ) const>(&ShapeFix_SplitTool::CutEdge),
             R"#(Cut edge by parameters pend and cut)#"  , py::arg("edge"),  py::arg("pend"),  py::arg("cut"),  py::arg("face"),  py::arg("iscutline"))
        .def("SplitEdge",
             (Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Vertex & , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , NCollection_Sequence<TopoDS_Shape> & , Standard_Integer & , const opencascade::handle<ShapeBuild_ReShape> & , const Standard_Real , const Standard_Real ) const) static_cast<Standard_Boolean (ShapeFix_SplitTool::*)( const TopoDS_Edge & , const Standard_Real , const TopoDS_Vertex & , const Standard_Real , const TopoDS_Vertex & , const TopoDS_Face & , NCollection_Sequence<TopoDS_Shape> & , Standard_Integer & , const opencascade::handle<ShapeBuild_ReShape> & , const Standard_Real , const Standard_Real ) const>(&ShapeFix_SplitTool::SplitEdge),
             R"#(Split edge on two new edges using two new vertex V1 and V2 and two parameters for splitting - fp and lp correspondingly The "face" is necessary for pcurves and using TransferParameterProj aNum - number of edge in SeqE which corresponding to [fp,lp])#"  , py::arg("edge"),  py::arg("fp"),  py::arg("V1"),  py::arg("lp"),  py::arg("V2"),  py::arg("face"),  py::arg("SeqE"),  py::arg("aNum"),  py::arg("context"),  py::arg("tol3d"),  py::arg("tol2d"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_WireSegment , shared_ptr<ShapeFix_WireSegment> >>(m.attr("ShapeFix_WireSegment"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<ShapeExtend_WireData> &,const TopAbs_Orientation >()  , py::arg("wire"),  py::arg("ori")=static_cast<const TopAbs_Orientation>(TopAbs_EXTERNAL) )
    // custom constructors
    // methods
        .def("Clear",
             (void (ShapeFix_WireSegment::*)() ) static_cast<void (ShapeFix_WireSegment::*)() >(&ShapeFix_WireSegment::Clear),
             R"#(Clears all fields.)#" )
        .def("Load",
             (void (ShapeFix_WireSegment::*)( const opencascade::handle<ShapeExtend_WireData> & ) ) static_cast<void (ShapeFix_WireSegment::*)( const opencascade::handle<ShapeExtend_WireData> & ) >(&ShapeFix_WireSegment::Load),
             R"#(Loads wire.)#"  , py::arg("wire"))
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_WireSegment::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::WireData),
             R"#(Returns wire.)#" )
        .def("Orientation",
             (void (ShapeFix_WireSegment::*)( const TopAbs_Orientation ) ) static_cast<void (ShapeFix_WireSegment::*)( const TopAbs_Orientation ) >(&ShapeFix_WireSegment::Orientation),
             R"#(Sets orientation flag.)#"  , py::arg("ori"))
        .def("Orientation",
             (TopAbs_Orientation (ShapeFix_WireSegment::*)() const) static_cast<TopAbs_Orientation (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::Orientation),
             R"#(Returns orientation flag.)#" )
        .def("FirstVertex",
             (TopoDS_Vertex (ShapeFix_WireSegment::*)() const) static_cast<TopoDS_Vertex (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::FirstVertex),
             R"#(Returns first vertex of the first edge in the wire (no dependance on Orientation()).)#" )
        .def("LastVertex",
             (TopoDS_Vertex (ShapeFix_WireSegment::*)() const) static_cast<TopoDS_Vertex (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::LastVertex),
             R"#(Returns last vertex of the last edge in the wire (no dependance on Orientation()).)#" )
        .def("IsClosed",
             (Standard_Boolean (ShapeFix_WireSegment::*)() const) static_cast<Standard_Boolean (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::IsClosed),
             R"#(Returns True if FirstVertex() == LastVertex())#" )
        .def("NbEdges",
             (Standard_Integer (ShapeFix_WireSegment::*)() const) static_cast<Standard_Integer (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::NbEdges),
             R"#(Returns Number of edges in the wire)#" )
        .def("Edge",
             (TopoDS_Edge (ShapeFix_WireSegment::*)( const Standard_Integer ) const) static_cast<TopoDS_Edge (ShapeFix_WireSegment::*)( const Standard_Integer ) const>(&ShapeFix_WireSegment::Edge),
             R"#(Returns edge by given index in the wire)#"  , py::arg("i"))
        .def("SetEdge",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const TopoDS_Edge & ) >(&ShapeFix_WireSegment::SetEdge),
             R"#(Replaces edge at index i by new one.)#"  , py::arg("i"),  py::arg("edge"))
        .def("AddEdge",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const TopoDS_Edge & ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const TopoDS_Edge & ) >(&ShapeFix_WireSegment::AddEdge),
             R"#(Insert a new edge with index i and implicitly defined patch indices (indefinite patch). If i==0, edge is inserted at end of wire.)#"  , py::arg("i"),  py::arg("edge"))
        .def("AddEdge",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const TopoDS_Edge & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const TopoDS_Edge & , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&ShapeFix_WireSegment::AddEdge),
             R"#(Insert a new edge with index i and explicitly defined patch indices. If i==0, edge is inserted at end of wire.)#"  , py::arg("i"),  py::arg("edge"),  py::arg("iumin"),  py::arg("iumax"),  py::arg("ivmin"),  py::arg("ivmax"))
        .def("SetPatchIndex",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&ShapeFix_WireSegment::SetPatchIndex),
             R"#(Set patch indices for edge i.)#"  , py::arg("i"),  py::arg("iumin"),  py::arg("iumax"),  py::arg("ivmin"),  py::arg("ivmax"))
        .def("DefineIUMin",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) >(&ShapeFix_WireSegment::DefineIUMin),
             R"#(None)#"  , py::arg("i"),  py::arg("iumin"))
        .def("DefineIUMax",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) >(&ShapeFix_WireSegment::DefineIUMax),
             R"#(None)#"  , py::arg("i"),  py::arg("iumax"))
        .def("DefineIVMin",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) >(&ShapeFix_WireSegment::DefineIVMin),
             R"#(None)#"  , py::arg("i"),  py::arg("ivmin"))
        .def("DefineIVMax",
             (void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (ShapeFix_WireSegment::*)( const Standard_Integer , const Standard_Integer ) >(&ShapeFix_WireSegment::DefineIVMax),
             R"#(Modify minimal or maximal patch index for edge i. The corresponding patch index for that edge is modified so as to satisfy eq. iumin <= myIUMin(i) <= myIUMax(i) <= iumax)#"  , py::arg("i"),  py::arg("ivmax"))
        .def("CheckPatchIndex",
             (Standard_Boolean (ShapeFix_WireSegment::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (ShapeFix_WireSegment::*)( const Standard_Integer ) const>(&ShapeFix_WireSegment::CheckPatchIndex),
             R"#(Checks patch indices for edge i to satisfy equations IUMin(i) <= IUMax(i) <= IUMin(i)+1)#"  , py::arg("i"))
        .def("SetVertex",
             (void (ShapeFix_WireSegment::*)( const TopoDS_Vertex & ) ) static_cast<void (ShapeFix_WireSegment::*)( const TopoDS_Vertex & ) >(&ShapeFix_WireSegment::SetVertex),
             R"#(None)#"  , py::arg("theVertex"))
        .def("GetVertex",
             (TopoDS_Vertex (ShapeFix_WireSegment::*)() const) static_cast<TopoDS_Vertex (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::GetVertex),
             R"#(None)#" )
        .def("IsVertex",
             (Standard_Boolean (ShapeFix_WireSegment::*)() const) static_cast<Standard_Boolean (ShapeFix_WireSegment::*)() const>(&ShapeFix_WireSegment::IsVertex),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetPatchIndex",
             []( ShapeFix_WireSegment &self , const Standard_Integer i ){ Standard_Integer  iumin; Standard_Integer  iumax; Standard_Integer  ivmin; Standard_Integer  ivmax; self.GetPatchIndex(i,iumin,iumax,ivmin,ivmax); return std::make_tuple(iumin,iumax,ivmin,ivmax); },
             R"#(Returns patch indices for edge i.)#"  , py::arg("i"))
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_WireVertex , shared_ptr<ShapeFix_WireVertex> >>(m.attr("ShapeFix_WireVertex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_WireVertex::*)( const TopoDS_Wire & , const Standard_Real ) ) static_cast<void (ShapeFix_WireVertex::*)( const TopoDS_Wire & , const Standard_Real ) >(&ShapeFix_WireVertex::Init),
             R"#(Loads the wire, ininializes internal analyzer (ShapeAnalysis_WireVertex) with the given precision, and performs analysis)#"  , py::arg("wire"),  py::arg("preci"))
        .def("Init",
             (void (ShapeFix_WireVertex::*)( const opencascade::handle<ShapeExtend_WireData> & , const Standard_Real ) ) static_cast<void (ShapeFix_WireVertex::*)( const opencascade::handle<ShapeExtend_WireData> & , const Standard_Real ) >(&ShapeFix_WireVertex::Init),
             R"#(Loads the wire, ininializes internal analyzer (ShapeAnalysis_WireVertex) with the given precision, and performs analysis)#"  , py::arg("sbwd"),  py::arg("preci"))
        .def("Init",
             (void (ShapeFix_WireVertex::*)( const ShapeAnalysis_WireVertex & ) ) static_cast<void (ShapeFix_WireVertex::*)( const ShapeAnalysis_WireVertex & ) >(&ShapeFix_WireVertex::Init),
             R"#(Loads all the data on wire, already analysed by ShapeAnalysis_WireVertex)#"  , py::arg("sawv"))
        .def("Analyzer",
             (const ShapeAnalysis_WireVertex & (ShapeFix_WireVertex::*)() const) static_cast<const ShapeAnalysis_WireVertex & (ShapeFix_WireVertex::*)() const>(&ShapeFix_WireVertex::Analyzer),
             R"#(returns internal analyzer)#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_WireVertex::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_WireVertex::*)() const>(&ShapeFix_WireVertex::WireData),
             R"#(returns data on wire (fixed))#" )
        .def("Wire",
             (TopoDS_Wire (ShapeFix_WireVertex::*)() const) static_cast<TopoDS_Wire (ShapeFix_WireVertex::*)() const>(&ShapeFix_WireVertex::Wire),
             R"#(returns resulting wire (fixed))#" )
        .def("FixSame",
             (Standard_Integer (ShapeFix_WireVertex::*)() ) static_cast<Standard_Integer (ShapeFix_WireVertex::*)() >(&ShapeFix_WireVertex::FixSame),
             R"#(Fixes "Same" or "Close" status (same vertex may be set, without changing parameters) Returns the count of fixed vertices, 0 if none)#" )
        .def("Fix",
             (Standard_Integer (ShapeFix_WireVertex::*)() ) static_cast<Standard_Integer (ShapeFix_WireVertex::*)() >(&ShapeFix_WireVertex::Fix),
             R"#(Fixes all statuses except "Disjoined", i.e. the cases in which a common value has been set, with or without changing parameters Returns the count of fixed vertices, 0 if none)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_ComposeShell ,opencascade::handle<ShapeFix_ComposeShell> , ShapeFix_Root>>(m.attr("ShapeFix_ComposeShell"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_ComposeShell::*)( const opencascade::handle<ShapeExtend_CompositeSurface> & , const TopLoc_Location & , const TopoDS_Face & , const Standard_Real ) ) static_cast<void (ShapeFix_ComposeShell::*)( const opencascade::handle<ShapeExtend_CompositeSurface> & , const TopLoc_Location & , const TopoDS_Face & , const Standard_Real ) >(&ShapeFix_ComposeShell::Init),
             R"#(Initializes with composite surface, face and precision. Here face defines both set of wires and way of getting pcurves. Precision is used (together with tolerance of edges) for handling subtle cases, such as tangential intersections.)#"  , py::arg("Grid"),  py::arg("L"),  py::arg("Face"),  py::arg("Prec"))
        .def("ClosedMode",
             (Standard_Boolean & (ShapeFix_ComposeShell::*)() ) static_cast<Standard_Boolean & (ShapeFix_ComposeShell::*)() >(&ShapeFix_ComposeShell::ClosedMode),
             R"#(Returns (modifiable) flag for special 'closed' mode which forces ComposeShell to consider all pcurves on closed surface as modulo period. This can reduce reliability, but allows to deal with wires closed in 3d but open in 2d (missing seam) Default is False)#" )
        .def("Perform",
             (Standard_Boolean (ShapeFix_ComposeShell::*)() ) static_cast<Standard_Boolean (ShapeFix_ComposeShell::*)() >(&ShapeFix_ComposeShell::Perform),
             R"#(Performs the work on already loaded data.)#" )
        .def("SplitEdges",
             (void (ShapeFix_ComposeShell::*)() ) static_cast<void (ShapeFix_ComposeShell::*)() >(&ShapeFix_ComposeShell::SplitEdges),
             R"#(Splits edges in the original shape by grid. This is a part of Perform() which does not produce any resulting shape; the only result is filled context where splittings are recorded.)#" )
        .def("Result",
             (const TopoDS_Shape & (ShapeFix_ComposeShell::*)() const) static_cast<const TopoDS_Shape & (ShapeFix_ComposeShell::*)() const>(&ShapeFix_ComposeShell::Result),
             R"#(Returns resulting shell or face (or Null shape if not done))#" )
        .def("Status",
             (Standard_Boolean (ShapeFix_ComposeShell::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_ComposeShell::*)( const ShapeExtend_Status ) const>(&ShapeFix_ComposeShell::Status),
             R"#(Queries status of last call to Perform() OK : nothing done (some kind of error) DONE1: splitting is done, at least one new face created DONE2: splitting is done, several new faces obtained FAIL1: misoriented wire encountered (handled) FAIL2: recoverable parity error FAIL3: edge with no pcurve on supporting face FAIL4: unrecoverable algorithm error (parity check))#"  , py::arg("status"))
        .def("DispatchWires",
             (void (ShapeFix_ComposeShell::*)( NCollection_Sequence<TopoDS_Shape> & , NCollection_Sequence<ShapeFix_WireSegment> & ) const) static_cast<void (ShapeFix_ComposeShell::*)( NCollection_Sequence<TopoDS_Shape> & , NCollection_Sequence<ShapeFix_WireSegment> & ) const>(&ShapeFix_ComposeShell::DispatchWires),
             R"#(Creates new faces from the set of (closed) wires. Each wire is put on corresponding patch in the composite surface, and all pcurves on the initial (pseudo)face are reassigned to that surface. If several wires are one inside another, single face is created.)#"  , py::arg("faces"),  py::arg("wires"))
        .def("SetTransferParamTool",
             (void (ShapeFix_ComposeShell::*)( const opencascade::handle<ShapeAnalysis_TransferParameters> & ) ) static_cast<void (ShapeFix_ComposeShell::*)( const opencascade::handle<ShapeAnalysis_TransferParameters> & ) >(&ShapeFix_ComposeShell::SetTransferParamTool),
             R"#(Sets tool for transfer parameters from 3d to 2d and vice versa.)#"  , py::arg("TransferParam"))
        .def("GetTransferParamTool",
             (opencascade::handle<ShapeAnalysis_TransferParameters> (ShapeFix_ComposeShell::*)() const) static_cast<opencascade::handle<ShapeAnalysis_TransferParameters> (ShapeFix_ComposeShell::*)() const>(&ShapeFix_ComposeShell::GetTransferParamTool),
             R"#(Gets tool for transfer parameters from 3d to 2d and vice versa.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_ComposeShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_ComposeShell::*)() const>(&ShapeFix_ComposeShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_ComposeShell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_ComposeShell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Face ,opencascade::handle<ShapeFix_Face> , ShapeFix_Root>>(m.attr("ShapeFix_Face"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Face & >()  , py::arg("face") )
    // custom constructors
    // methods
        .def("ClearModes",
             (void (ShapeFix_Face::*)() ) static_cast<void (ShapeFix_Face::*)() >(&ShapeFix_Face::ClearModes),
             R"#(Sets all modes to default)#" )
        .def("Init",
             (void (ShapeFix_Face::*)( const TopoDS_Face & ) ) static_cast<void (ShapeFix_Face::*)( const TopoDS_Face & ) >(&ShapeFix_Face::Init),
             R"#(Loads a whole face already created, with its wires, sense and location)#"  , py::arg("face"))
        .def("Init",
             (void (ShapeFix_Face::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (ShapeFix_Face::*)( const opencascade::handle<Geom_Surface> & , const Standard_Real , const Standard_Boolean ) >(&ShapeFix_Face::Init),
             R"#(Starts the creation of the face By default it will be FORWARD, or REVERSED if <fwd> is False)#"  , py::arg("surf"),  py::arg("preci"),  py::arg("fwd")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Init",
             (void (ShapeFix_Face::*)( const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real , const Standard_Boolean ) ) static_cast<void (ShapeFix_Face::*)( const opencascade::handle<ShapeAnalysis_Surface> & , const Standard_Real , const Standard_Boolean ) >(&ShapeFix_Face::Init),
             R"#(Starts the creation of the face By default it will be FORWARD, or REVERSED if <fwd> is False)#"  , py::arg("surf"),  py::arg("preci"),  py::arg("fwd")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetMsgRegistrator",
             (void (ShapeFix_Face::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<void (ShapeFix_Face::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeFix_Face::SetMsgRegistrator),
             R"#(Sets message registrator)#"  , py::arg("msgreg"))
        .def("SetPrecision",
             (void (ShapeFix_Face::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Face::*)( const Standard_Real ) >(&ShapeFix_Face::SetPrecision),
             R"#(Sets basic precision value (also to FixWireTool))#"  , py::arg("preci"))
        .def("SetMinTolerance",
             (void (ShapeFix_Face::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Face::*)( const Standard_Real ) >(&ShapeFix_Face::SetMinTolerance),
             R"#(Sets minimal allowed tolerance (also to FixWireTool))#"  , py::arg("mintol"))
        .def("SetMaxTolerance",
             (void (ShapeFix_Face::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Face::*)( const Standard_Real ) >(&ShapeFix_Face::SetMaxTolerance),
             R"#(Sets maximal allowed tolerance (also to FixWireTool))#"  , py::arg("maxtol"))
        .def("FixWireMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixWireMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Wire, by default True.)#" )
        .def("FixOrientationMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixOrientationMode),
             R"#(Returns (modifiable) the fix orientation mode, by default True. If True, wires oriented to border limited square.)#" )
        .def("FixAddNaturalBoundMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixAddNaturalBoundMode),
             R"#(Returns (modifiable) the add natural bound mode. If true, natural boundary is added on faces that miss them. Default is False for faces with single wire (they are handled by FixOrientation in that case) and True for others.)#" )
        .def("FixMissingSeamMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixMissingSeamMode),
             R"#(Returns (modifiable) the fix missing seam mode, by default True. If True, tries to insert seam is missed.)#" )
        .def("FixSmallAreaWireMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixSmallAreaWireMode),
             R"#(Returns (modifiable) the fix small area wire mode, by default False. If True, drops small wires.)#" )
        .def("RemoveSmallAreaFaceMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::RemoveSmallAreaFaceMode),
             R"#(Returns (modifiable) the remove face with small area, by default False. If True, drops faces with small outer wires.)#" )
        .def("FixIntersectingWiresMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixIntersectingWiresMode),
             R"#(Returns (modifiable) the fix intersecting wires mode by default True.)#" )
        .def("FixLoopWiresMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixLoopWiresMode),
             R"#(Returns (modifiable) the fix loop wires mode by default True.)#" )
        .def("FixSplitFaceMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixSplitFaceMode),
             R"#(Returns (modifiable) the fix split face mode by default True.)#" )
        .def("AutoCorrectPrecisionMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::AutoCorrectPrecisionMode),
             R"#(Returns (modifiable) the auto-correct precision mode by default False.)#" )
        .def("FixPeriodicDegeneratedMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixPeriodicDegeneratedMode),
             R"#(Returns (modifiable) the activation flag for periodic degenerated fix. False by default.)#" )
        .def("Face",
             (TopoDS_Face (ShapeFix_Face::*)() const) static_cast<TopoDS_Face (ShapeFix_Face::*)() const>(&ShapeFix_Face::Face),
             R"#(Returns a face which corresponds to the current state Warning: The finally produced face may be another one ... but with the same support)#" )
        .def("Result",
             (TopoDS_Shape (ShapeFix_Face::*)() const) static_cast<TopoDS_Shape (ShapeFix_Face::*)() const>(&ShapeFix_Face::Result),
             R"#(Returns resulting shape (Face or Shell if splitted) To be used instead of Face() if FixMissingSeam involved)#" )
        .def("Add",
             (void (ShapeFix_Face::*)( const TopoDS_Wire & ) ) static_cast<void (ShapeFix_Face::*)( const TopoDS_Wire & ) >(&ShapeFix_Face::Add),
             R"#(Add a wire to current face using BRep_Builder. Wire is added without taking into account orientation of face (as if face were FORWARD).)#"  , py::arg("wire"))
        .def("Perform",
             (Standard_Boolean (ShapeFix_Face::*)() ) static_cast<Standard_Boolean (ShapeFix_Face::*)() >(&ShapeFix_Face::Perform),
             R"#(Performs all the fixes, depending on modes Function Status returns the status of last call to Perform() ShapeExtend_OK : face was OK, nothing done ShapeExtend_DONE1: some wires are fixed ShapeExtend_DONE2: orientation of wires fixed ShapeExtend_DONE3: missing seam added ShapeExtend_DONE4: small area wire removed ShapeExtend_DONE5: natural bounds added ShapeExtend_FAIL1: some fails during fixing wires ShapeExtend_FAIL2: cannot fix orientation of wires ShapeExtend_FAIL3: cannot add missing seam ShapeExtend_FAIL4: cannot remove small area wire)#" )
        .def("FixOrientation",
             (Standard_Boolean (ShapeFix_Face::*)() ) static_cast<Standard_Boolean (ShapeFix_Face::*)() >(&ShapeFix_Face::FixOrientation),
             R"#(Fixes orientation of wires on the face It tries to make all wires lie outside all others (according to orientation) by reversing orientation of some of them. If face lying on sphere or torus has single wire and AddNaturalBoundMode is True, that wire is not reversed in any case (supposing that natural bound will be added). Returns True if wires were reversed)#" )
        .def("FixOrientation",
             (Standard_Boolean (ShapeFix_Face::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<Standard_Boolean (ShapeFix_Face::*)( NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&ShapeFix_Face::FixOrientation),
             R"#(Fixes orientation of wires on the face It tries to make all wires lie outside all others (according to orientation) by reversing orientation of some of them. If face lying on sphere or torus has single wire and AddNaturalBoundMode is True, that wire is not reversed in any case (supposing that natural bound will be added). Returns True if wires were reversed OutWires return information about out wires + list of internal wires for each (for performing split face).)#"  , py::arg("MapWires"))
        .def("FixAddNaturalBound",
             (Standard_Boolean (ShapeFix_Face::*)() ) static_cast<Standard_Boolean (ShapeFix_Face::*)() >(&ShapeFix_Face::FixAddNaturalBound),
             R"#(Adds natural boundary on face if it is missing. Two cases are supported: - face has no wires - face lies on geometrically double-closed surface (sphere or torus) and none of wires is left-oriented Returns True if natural boundary was added)#" )
        .def("FixMissingSeam",
             (Standard_Boolean (ShapeFix_Face::*)() ) static_cast<Standard_Boolean (ShapeFix_Face::*)() >(&ShapeFix_Face::FixMissingSeam),
             R"#(Detects and fixes the special case when face on a closed surface is given by two wires closed in 3d but with gap in 2d. In that case it creates a new wire from the two, and adds a missing seam edge Returns True if missing seam was added)#" )
        .def("FixSmallAreaWire",
             (Standard_Boolean (ShapeFix_Face::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeFix_Face::*)( const Standard_Boolean ) >(&ShapeFix_Face::FixSmallAreaWire),
             R"#(Detects wires with small area (that is less than 100*Precision::PConfusion(). Removes these wires if they are internal. Returns : True if at least one small wire removed, False if does nothing.)#"  , py::arg("theIsRemoveSmallFace"))
        .def("FixLoopWire",
             (Standard_Boolean (ShapeFix_Face::*)( NCollection_Sequence<TopoDS_Shape> & ) ) static_cast<Standard_Boolean (ShapeFix_Face::*)( NCollection_Sequence<TopoDS_Shape> & ) >(&ShapeFix_Face::FixLoopWire),
             R"#(Detects if wire has a loop and fixes this situation by splitting on the few parts. if wire has a loops and it was splitted Status was set to value ShapeExtend_DONE6.)#"  , py::arg("aResWires"))
        .def("FixIntersectingWires",
             (Standard_Boolean (ShapeFix_Face::*)() ) static_cast<Standard_Boolean (ShapeFix_Face::*)() >(&ShapeFix_Face::FixIntersectingWires),
             R"#(Detects and fixes the special case when face has more than one wire and this wires have intersection point)#" )
        .def("FixWiresTwoCoincEdges",
             (Standard_Boolean (ShapeFix_Face::*)() ) static_cast<Standard_Boolean (ShapeFix_Face::*)() >(&ShapeFix_Face::FixWiresTwoCoincEdges),
             R"#(If wire contains two coincidence edges it must be removed Queries on status after Perform())#" )
        .def("FixSplitFace",
             (Standard_Boolean (ShapeFix_Face::*)(  const NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) ) static_cast<Standard_Boolean (ShapeFix_Face::*)(  const NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & ) >(&ShapeFix_Face::FixSplitFace),
             R"#(Split face if there are more than one out wire using inrormation after FixOrientation())#"  , py::arg("MapWires"))
        .def("FixPeriodicDegenerated",
             (Standard_Boolean (ShapeFix_Face::*)() ) static_cast<Standard_Boolean (ShapeFix_Face::*)() >(&ShapeFix_Face::FixPeriodicDegenerated),
             R"#(Fixes topology for a specific case when face is composed by a single wire belting a periodic surface. In that case a degenerated edge is reconstructed in the degenerated pole of the surface. Initial wire gets consistent orientation. Must be used in couple and before FixMissingSeam routine)#" )
        .def("Status",
             (Standard_Boolean (ShapeFix_Face::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Face::*)( const ShapeExtend_Status ) const>(&ShapeFix_Face::Status),
             R"#(Returns the status of last call to Perform() ShapeExtend_OK : face was OK, nothing done ShapeExtend_DONE1: some wires are fixed ShapeExtend_DONE2: orientation of wires fixed ShapeExtend_DONE3: missing seam added ShapeExtend_DONE4: small area wire removed ShapeExtend_DONE5: natural bounds added ShapeExtend_DONE8: face may be splited ShapeExtend_FAIL1: some fails during fixing wires ShapeExtend_FAIL2: cannot fix orientation of wires ShapeExtend_FAIL3: cannot add missing seam ShapeExtend_FAIL4: cannot remove small area wire)#"  , py::arg("status"))
        .def("FixWireTool",
             (opencascade::handle<ShapeFix_Wire> (ShapeFix_Face::*)() ) static_cast<opencascade::handle<ShapeFix_Wire> (ShapeFix_Face::*)() >(&ShapeFix_Face::FixWireTool),
             R"#(Returns tool for fixing wires.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Face::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Face::*)() const>(&ShapeFix_Face::DynamicType),
             R"#(None)#" )
        .def("FixWireMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixWireMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Wire, by default True.)#" )
        .def("FixOrientationMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixOrientationMode),
             R"#(Returns (modifiable) the fix orientation mode, by default True. If True, wires oriented to border limited square.)#" )
        .def("FixAddNaturalBoundMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixAddNaturalBoundMode),
             R"#(Returns (modifiable) the add natural bound mode. If true, natural boundary is added on faces that miss them. Default is False for faces with single wire (they are handled by FixOrientation in that case) and True for others.)#" )
        .def("FixMissingSeamMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixMissingSeamMode),
             R"#(Returns (modifiable) the fix missing seam mode, by default True. If True, tries to insert seam is missed.)#" )
        .def("FixSmallAreaWireMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixSmallAreaWireMode),
             R"#(Returns (modifiable) the fix small area wire mode, by default False. If True, drops small wires.)#" )
        .def("RemoveSmallAreaFaceMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::RemoveSmallAreaFaceMode),
             R"#(Returns (modifiable) the remove face with small area, by default False. If True, drops faces with small outer wires.)#" )
        .def("FixIntersectingWiresMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixIntersectingWiresMode),
             R"#(Returns (modifiable) the fix intersecting wires mode by default True.)#" )
        .def("FixLoopWiresMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixLoopWiresMode),
             R"#(Returns (modifiable) the fix loop wires mode by default True.)#" )
        .def("FixSplitFaceMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixSplitFaceMode),
             R"#(Returns (modifiable) the fix split face mode by default True.)#" )
        .def("AutoCorrectPrecisionMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::AutoCorrectPrecisionMode),
             R"#(Returns (modifiable) the auto-correct precision mode by default False.)#" )
        .def("FixPeriodicDegeneratedMode",
             (Standard_Integer & (ShapeFix_Face::*)() ) static_cast<Standard_Integer & (ShapeFix_Face::*)() >(&ShapeFix_Face::FixPeriodicDegeneratedMode),
             R"#(Returns (modifiable) the activation flag for periodic degenerated fix. False by default.)#" )
        .def("Face",
             (TopoDS_Face (ShapeFix_Face::*)() const) static_cast<TopoDS_Face (ShapeFix_Face::*)() const>(&ShapeFix_Face::Face),
             R"#(Returns a face which corresponds to the current state Warning: The finally produced face may be another one ... but with the same support)#" )
        .def("Result",
             (TopoDS_Shape (ShapeFix_Face::*)() const) static_cast<TopoDS_Shape (ShapeFix_Face::*)() const>(&ShapeFix_Face::Result),
             R"#(Returns resulting shape (Face or Shell if splitted) To be used instead of Face() if FixMissingSeam involved)#" )
        .def("Status",
             (Standard_Boolean (ShapeFix_Face::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Face::*)( const ShapeExtend_Status ) const>(&ShapeFix_Face::Status),
             R"#(Returns the status of last call to Perform() ShapeExtend_OK : face was OK, nothing done ShapeExtend_DONE1: some wires are fixed ShapeExtend_DONE2: orientation of wires fixed ShapeExtend_DONE3: missing seam added ShapeExtend_DONE4: small area wire removed ShapeExtend_DONE5: natural bounds added ShapeExtend_DONE8: face may be splited ShapeExtend_FAIL1: some fails during fixing wires ShapeExtend_FAIL2: cannot fix orientation of wires ShapeExtend_FAIL3: cannot add missing seam ShapeExtend_FAIL4: cannot remove small area wire)#"  , py::arg("status"))
        .def("FixWireTool",
             (opencascade::handle<ShapeFix_Wire> (ShapeFix_Face::*)() ) static_cast<opencascade::handle<ShapeFix_Wire> (ShapeFix_Face::*)() >(&ShapeFix_Face::FixWireTool),
             R"#(Returns tool for fixing wires.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Face::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Face::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FixSmallFace ,opencascade::handle<ShapeFix_FixSmallFace> , ShapeFix_Root>>(m.attr("ShapeFix_FixSmallFace"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_FixSmallFace::*)( const TopoDS_Shape & ) ) static_cast<void (ShapeFix_FixSmallFace::*)( const TopoDS_Shape & ) >(&ShapeFix_FixSmallFace::Init),
             R"#(None)#"  , py::arg("S"))
        .def("Perform",
             (void (ShapeFix_FixSmallFace::*)() ) static_cast<void (ShapeFix_FixSmallFace::*)() >(&ShapeFix_FixSmallFace::Perform),
             R"#(Fixing case of spot face)#" )
        .def("FixSpotFace",
             (TopoDS_Shape (ShapeFix_FixSmallFace::*)() ) static_cast<TopoDS_Shape (ShapeFix_FixSmallFace::*)() >(&ShapeFix_FixSmallFace::FixSpotFace),
             R"#(Fixing case of spot face, if tol = -1 used local tolerance.)#" )
        .def("ReplaceVerticesInCaseOfSpot",
             (Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & , const Standard_Real ) const) static_cast<Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & , const Standard_Real ) const>(&ShapeFix_FixSmallFace::ReplaceVerticesInCaseOfSpot),
             R"#(Compute average vertex and replacing vertices by new one.)#"  , py::arg("F"),  py::arg("tol"))
        .def("RemoveFacesInCaseOfSpot",
             (Standard_Boolean (ShapeFix_FixSmallFace::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (ShapeFix_FixSmallFace::*)( const TopoDS_Face & ) const>(&ShapeFix_FixSmallFace::RemoveFacesInCaseOfSpot),
             R"#(Remove spot face from compound)#"  , py::arg("F"))
        .def("FixStripFace",
             (TopoDS_Shape (ShapeFix_FixSmallFace::*)( const Standard_Boolean ) ) static_cast<TopoDS_Shape (ShapeFix_FixSmallFace::*)( const Standard_Boolean ) >(&ShapeFix_FixSmallFace::FixStripFace),
             R"#(Fixing case of strip face, if tol = -1 used local tolerance)#"  , py::arg("wasdone")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ReplaceInCaseOfStrip",
             (Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real ) const) static_cast<Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & , TopoDS_Edge & , TopoDS_Edge & , const Standard_Real ) const>(&ShapeFix_FixSmallFace::ReplaceInCaseOfStrip),
             R"#(Replace veretces and edges.)#"  , py::arg("F"),  py::arg("E1"),  py::arg("E2"),  py::arg("tol"))
        .def("RemoveFacesInCaseOfStrip",
             (Standard_Boolean (ShapeFix_FixSmallFace::*)( const TopoDS_Face & ) const) static_cast<Standard_Boolean (ShapeFix_FixSmallFace::*)( const TopoDS_Face & ) const>(&ShapeFix_FixSmallFace::RemoveFacesInCaseOfStrip),
             R"#(Remove strip face from compound.)#"  , py::arg("F"))
        .def("ComputeSharedEdgeForStripFace",
             (TopoDS_Edge (ShapeFix_FixSmallFace::*)( const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) const) static_cast<TopoDS_Edge (ShapeFix_FixSmallFace::*)( const TopoDS_Face & , const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Face & , const Standard_Real ) const>(&ShapeFix_FixSmallFace::ComputeSharedEdgeForStripFace),
             R"#(Compute average edge for strip face)#"  , py::arg("F"),  py::arg("E1"),  py::arg("E2"),  py::arg("F1"),  py::arg("tol"))
        .def("FixSplitFace",
             (TopoDS_Shape (ShapeFix_FixSmallFace::*)( const TopoDS_Shape & ) ) static_cast<TopoDS_Shape (ShapeFix_FixSmallFace::*)( const TopoDS_Shape & ) >(&ShapeFix_FixSmallFace::FixSplitFace),
             R"#(None)#"  , py::arg("S"))
        .def("SplitOneFace",
             (Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & , TopoDS_Compound & ) ) static_cast<Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & , TopoDS_Compound & ) >(&ShapeFix_FixSmallFace::SplitOneFace),
             R"#(Compute data for face splitting.)#"  , py::arg("F"),  py::arg("theSplittedFaces"))
        .def("FixFace",
             (TopoDS_Face (ShapeFix_FixSmallFace::*)( const TopoDS_Face & ) ) static_cast<TopoDS_Face (ShapeFix_FixSmallFace::*)( const TopoDS_Face & ) >(&ShapeFix_FixSmallFace::FixFace),
             R"#(None)#"  , py::arg("F"))
        .def("FixShape",
             (TopoDS_Shape (ShapeFix_FixSmallFace::*)() ) static_cast<TopoDS_Shape (ShapeFix_FixSmallFace::*)() >(&ShapeFix_FixSmallFace::FixShape),
             R"#(None)#" )
        .def("Shape",
             (TopoDS_Shape (ShapeFix_FixSmallFace::*)() ) static_cast<TopoDS_Shape (ShapeFix_FixSmallFace::*)() >(&ShapeFix_FixSmallFace::Shape),
             R"#(None)#" )
        .def("FixPinFace",
             (Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & ) ) static_cast<Standard_Boolean (ShapeFix_FixSmallFace::*)( TopoDS_Face & ) >(&ShapeFix_FixSmallFace::FixPinFace),
             R"#(None)#"  , py::arg("F"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallFace::*)() const>(&ShapeFix_FixSmallFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_FixSmallFace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_FixSmallFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FixSmallSolid ,opencascade::handle<ShapeFix_FixSmallSolid> , ShapeFix_Root>>(m.attr("ShapeFix_FixSmallSolid"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetFixMode",
             (void (ShapeFix_FixSmallSolid::*)( const Standard_Integer ) ) static_cast<void (ShapeFix_FixSmallSolid::*)( const Standard_Integer ) >(&ShapeFix_FixSmallSolid::SetFixMode),
             R"#(Set working mode for operator: - theMode = 0 use both WidthFactorThreshold and VolumeThreshold parameters - theMode = 1 use only WidthFactorThreshold parameter - theMode = 2 use only VolumeThreshold parameter)#"  , py::arg("theMode"))
        .def("SetVolumeThreshold",
             (void (ShapeFix_FixSmallSolid::*)( const Standard_Real ) ) static_cast<void (ShapeFix_FixSmallSolid::*)( const Standard_Real ) >(&ShapeFix_FixSmallSolid::SetVolumeThreshold),
             R"#(Set or clear volume threshold for small solids)#"  , py::arg("theThreshold")=static_cast<const Standard_Real>(- 1.0))
        .def("SetWidthFactorThreshold",
             (void (ShapeFix_FixSmallSolid::*)( const Standard_Real ) ) static_cast<void (ShapeFix_FixSmallSolid::*)( const Standard_Real ) >(&ShapeFix_FixSmallSolid::SetWidthFactorThreshold),
             R"#(Set or clear width factor threshold for small solids)#"  , py::arg("theThreshold")=static_cast<const Standard_Real>(- 1.0))
        .def("Remove",
             (TopoDS_Shape (ShapeFix_FixSmallSolid::*)( const TopoDS_Shape & , const opencascade::handle<ShapeBuild_ReShape> & ) const) static_cast<TopoDS_Shape (ShapeFix_FixSmallSolid::*)( const TopoDS_Shape & , const opencascade::handle<ShapeBuild_ReShape> & ) const>(&ShapeFix_FixSmallSolid::Remove),
             R"#(Remove small solids from the given shape)#"  , py::arg("theShape"),  py::arg("theContext"))
        .def("Merge",
             (TopoDS_Shape (ShapeFix_FixSmallSolid::*)( const TopoDS_Shape & , const opencascade::handle<ShapeBuild_ReShape> & ) const) static_cast<TopoDS_Shape (ShapeFix_FixSmallSolid::*)( const TopoDS_Shape & , const opencascade::handle<ShapeBuild_ReShape> & ) const>(&ShapeFix_FixSmallSolid::Merge),
             R"#(Merge small solids in the given shape to adjacent non-small ones)#"  , py::arg("theShape"),  py::arg("theContext"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallSolid::*)() const>(&ShapeFix_FixSmallSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_FixSmallSolid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_FixSmallSolid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Shape ,opencascade::handle<ShapeFix_Shape> , ShapeFix_Root>>(m.attr("ShapeFix_Shape"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("shape") )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_Shape::*)( const TopoDS_Shape & ) ) static_cast<void (ShapeFix_Shape::*)( const TopoDS_Shape & ) >(&ShapeFix_Shape::Init),
             R"#(Initislises by shape.)#"  , py::arg("shape"))
        .def("Perform",
             (Standard_Boolean (ShapeFix_Shape::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (ShapeFix_Shape::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&ShapeFix_Shape::Perform),
             R"#(Iterates on sub- shape and performs fixes)#"  , py::arg("theProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(0))
        .def("Shape",
             (TopoDS_Shape (ShapeFix_Shape::*)() const) static_cast<TopoDS_Shape (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::Shape),
             R"#(Returns resulting shape)#" )
        .def("FixSolidTool",
             (opencascade::handle<ShapeFix_Solid> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Solid> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixSolidTool),
             R"#(Returns tool for fixing solids.)#" )
        .def("FixShellTool",
             (opencascade::handle<ShapeFix_Shell> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Shell> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixShellTool),
             R"#(Returns tool for fixing shells.)#" )
        .def("FixFaceTool",
             (opencascade::handle<ShapeFix_Face> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Face> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixFaceTool),
             R"#(Returns tool for fixing faces.)#" )
        .def("FixWireTool",
             (opencascade::handle<ShapeFix_Wire> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Wire> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixWireTool),
             R"#(Returns tool for fixing wires.)#" )
        .def("FixEdgeTool",
             (opencascade::handle<ShapeFix_Edge> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Edge> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixEdgeTool),
             R"#(Returns tool for fixing edges.)#" )
        .def("Status",
             (Standard_Boolean (ShapeFix_Shape::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Shape::*)( const ShapeExtend_Status ) const>(&ShapeFix_Shape::Status),
             R"#(Returns the status of the last Fix. This can be a combination of the following flags: ShapeExtend_DONE1: some free edges were fixed ShapeExtend_DONE2: some free wires were fixed ShapeExtend_DONE3: some free faces were fixed ShapeExtend_DONE4: some free shells were fixed ShapeExtend_DONE5: some free solids were fixed ShapeExtend_DONE6: shapes in compound(s) were fixed)#"  , py::arg("status"))
        .def("SetMsgRegistrator",
             (void (ShapeFix_Shape::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<void (ShapeFix_Shape::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeFix_Shape::SetMsgRegistrator),
             R"#(Sets message registrator)#"  , py::arg("msgreg"))
        .def("SetPrecision",
             (void (ShapeFix_Shape::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Shape::*)( const Standard_Real ) >(&ShapeFix_Shape::SetPrecision),
             R"#(Sets basic precision value (also to FixSolidTool))#"  , py::arg("preci"))
        .def("SetMinTolerance",
             (void (ShapeFix_Shape::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Shape::*)( const Standard_Real ) >(&ShapeFix_Shape::SetMinTolerance),
             R"#(Sets minimal allowed tolerance (also to FixSolidTool))#"  , py::arg("mintol"))
        .def("SetMaxTolerance",
             (void (ShapeFix_Shape::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Shape::*)( const Standard_Real ) >(&ShapeFix_Shape::SetMaxTolerance),
             R"#(Sets maximal allowed tolerance (also to FixSolidTool))#"  , py::arg("maxtol"))
        .def("FixSolidMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixSolidMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Solid, by default True.)#" )
        .def("FixFreeShellMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixFreeShellMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Shell, by default True.)#" )
        .def("FixFreeFaceMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixFreeFaceMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Face, by default True.)#" )
        .def("FixFreeWireMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixFreeWireMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Wire, by default True.)#" )
        .def("FixSameParameterMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixSameParameterMode),
             R"#(Returns (modifiable) the mode for applying ShapeFix::SameParameter after all fixes, by default True.)#" )
        .def("FixVertexPositionMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixVertexPositionMode),
             R"#(Returns (modifiable) the mode for applying ShapeFix::FixVertexPosition before all fixes, by default False.)#" )
        .def("FixVertexTolMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixVertexTolMode),
             R"#(Returns (modifiable) the mode for fixing tolerances of vertices on whole shape after performing all fixes)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Shape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::DynamicType),
             R"#(None)#" )
        .def("FixSolidTool",
             (opencascade::handle<ShapeFix_Solid> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Solid> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixSolidTool),
             R"#(Returns tool for fixing solids.)#" )
        .def("FixShellTool",
             (opencascade::handle<ShapeFix_Shell> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Shell> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixShellTool),
             R"#(Returns tool for fixing shells.)#" )
        .def("FixFaceTool",
             (opencascade::handle<ShapeFix_Face> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Face> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixFaceTool),
             R"#(Returns tool for fixing faces.)#" )
        .def("FixWireTool",
             (opencascade::handle<ShapeFix_Wire> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Wire> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixWireTool),
             R"#(Returns tool for fixing wires.)#" )
        .def("FixEdgeTool",
             (opencascade::handle<ShapeFix_Edge> (ShapeFix_Shape::*)() const) static_cast<opencascade::handle<ShapeFix_Edge> (ShapeFix_Shape::*)() const>(&ShapeFix_Shape::FixEdgeTool),
             R"#(Returns tool for fixing edges.)#" )
        .def("FixSolidMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixSolidMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Solid, by default True.)#" )
        .def("FixFreeShellMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixFreeShellMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Shell, by default True.)#" )
        .def("FixFreeFaceMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixFreeFaceMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Face, by default True.)#" )
        .def("FixFreeWireMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixFreeWireMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Wire, by default True.)#" )
        .def("FixSameParameterMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixSameParameterMode),
             R"#(Returns (modifiable) the mode for applying ShapeFix::SameParameter after all fixes, by default True.)#" )
        .def("FixVertexPositionMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixVertexPositionMode),
             R"#(Returns (modifiable) the mode for applying ShapeFix::FixVertexPosition before all fixes, by default False.)#" )
        .def("FixVertexTolMode",
             (Standard_Integer & (ShapeFix_Shape::*)() ) static_cast<Standard_Integer & (ShapeFix_Shape::*)() >(&ShapeFix_Shape::FixVertexTolMode),
             R"#(Returns (modifiable) the mode for fixing tolerances of vertices on whole shape after performing all fixes)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Shape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Shape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Shell ,opencascade::handle<ShapeFix_Shell> , ShapeFix_Root>>(m.attr("ShapeFix_Shell"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shell & >()  , py::arg("shape") )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_Shell::*)( const TopoDS_Shell & ) ) static_cast<void (ShapeFix_Shell::*)( const TopoDS_Shell & ) >(&ShapeFix_Shell::Init),
             R"#(Initializes by shell.)#"  , py::arg("shell"))
        .def("Perform",
             (Standard_Boolean (ShapeFix_Shell::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (ShapeFix_Shell::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&ShapeFix_Shell::Perform),
             R"#(Iterates on subshapes and performs fixes (for each face calls ShapeFix_Face::Perform and then calls FixFaceOrientation). The passed progress indicator allows user to consult the current progress stage and abort algorithm if needed.)#"  , py::arg("theProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(0))
        .def("FixFaceOrientation",
             (Standard_Boolean (ShapeFix_Shell::*)( const TopoDS_Shell & , const Standard_Boolean , const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeFix_Shell::*)( const TopoDS_Shell & , const Standard_Boolean , const Standard_Boolean ) >(&ShapeFix_Shell::FixFaceOrientation),
             R"#(Fixes orientation of faces in shell. Changes orientation of face in the shell, if it is oriented opposite to neigbouring faces. If it is not possible to orient all faces in the shell (like in case of mebious band), this method orients only subset of faces. Other faces are stored in Error compound. Modes : isAccountMultiConex - mode for account cases of multiconnexity. If this mode is equal to Standard_True, separate shells will be created in the cases of multiconnexity. If this mode is equal to Standard_False, one shell will be created without account of multiconnexity.By defautt - Standard_True; NonManifold - mode for creation of non-manifold shells. If this mode is equal to Standard_True one non-manifold will be created from shell contains multishared edges. Else if this mode is equal to Standard_False only manifold shells will be created. By default - Standard_False.)#"  , py::arg("shell"),  py::arg("isAccountMultiConex")=static_cast<const Standard_Boolean>(Standard_True),  py::arg("NonManifold")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Shell",
             (TopoDS_Shell (ShapeFix_Shell::*)() ) static_cast<TopoDS_Shell (ShapeFix_Shell::*)() >(&ShapeFix_Shell::Shell),
             R"#(Returns fixed shell (or subset of oriented faces).)#" )
        .def("Shape",
             (TopoDS_Shape (ShapeFix_Shell::*)() ) static_cast<TopoDS_Shape (ShapeFix_Shell::*)() >(&ShapeFix_Shell::Shape),
             R"#(In case of multiconnexity returns compound of fixed shells else returns one shell..)#" )
        .def("NbShells",
             (Standard_Integer (ShapeFix_Shell::*)() const) static_cast<Standard_Integer (ShapeFix_Shell::*)() const>(&ShapeFix_Shell::NbShells),
             R"#(Returns Number of obtainrd shells;)#" )
        .def("ErrorFaces",
             (TopoDS_Compound (ShapeFix_Shell::*)() const) static_cast<TopoDS_Compound (ShapeFix_Shell::*)() const>(&ShapeFix_Shell::ErrorFaces),
             R"#(Returns not oriented subset of faces.)#" )
        .def("Status",
             (Standard_Boolean (ShapeFix_Shell::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Shell::*)( const ShapeExtend_Status ) const>(&ShapeFix_Shell::Status),
             R"#(Returns the status of the last Fix.)#"  , py::arg("status"))
        .def("FixFaceTool",
             (opencascade::handle<ShapeFix_Face> (ShapeFix_Shell::*)() ) static_cast<opencascade::handle<ShapeFix_Face> (ShapeFix_Shell::*)() >(&ShapeFix_Shell::FixFaceTool),
             R"#(Returns tool for fixing faces.)#" )
        .def("SetMsgRegistrator",
             (void (ShapeFix_Shell::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<void (ShapeFix_Shell::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeFix_Shell::SetMsgRegistrator),
             R"#(Sets message registrator)#"  , py::arg("msgreg"))
        .def("SetPrecision",
             (void (ShapeFix_Shell::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Shell::*)( const Standard_Real ) >(&ShapeFix_Shell::SetPrecision),
             R"#(Sets basic precision value (also to FixWireTool))#"  , py::arg("preci"))
        .def("SetMinTolerance",
             (void (ShapeFix_Shell::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Shell::*)( const Standard_Real ) >(&ShapeFix_Shell::SetMinTolerance),
             R"#(Sets minimal allowed tolerance (also to FixWireTool))#"  , py::arg("mintol"))
        .def("SetMaxTolerance",
             (void (ShapeFix_Shell::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Shell::*)( const Standard_Real ) >(&ShapeFix_Shell::SetMaxTolerance),
             R"#(Sets maximal allowed tolerance (also to FixWireTool))#"  , py::arg("maxtol"))
        .def("FixFaceMode",
             (Standard_Integer & (ShapeFix_Shell::*)() ) static_cast<Standard_Integer & (ShapeFix_Shell::*)() >(&ShapeFix_Shell::FixFaceMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Face, by default True.)#" )
        .def("FixOrientationMode",
             (Standard_Integer & (ShapeFix_Shell::*)() ) static_cast<Standard_Integer & (ShapeFix_Shell::*)() >(&ShapeFix_Shell::FixOrientationMode),
             R"#(Returns (modifiable) the mode for applying FixFaceOrientation, by default True.)#" )
        .def("SetNonManifoldFlag",
             (void (ShapeFix_Shell::*)( const Standard_Boolean ) ) static_cast<void (ShapeFix_Shell::*)( const Standard_Boolean ) >(&ShapeFix_Shell::SetNonManifoldFlag),
             R"#(Sets NonManifold flag)#"  , py::arg("isNonManifold"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Shell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Shell::*)() const>(&ShapeFix_Shell::DynamicType),
             R"#(None)#" )
        .def("FixFaceTool",
             (opencascade::handle<ShapeFix_Face> (ShapeFix_Shell::*)() ) static_cast<opencascade::handle<ShapeFix_Face> (ShapeFix_Shell::*)() >(&ShapeFix_Shell::FixFaceTool),
             R"#(Returns tool for fixing faces.)#" )
        .def("FixFaceMode",
             (Standard_Integer & (ShapeFix_Shell::*)() ) static_cast<Standard_Integer & (ShapeFix_Shell::*)() >(&ShapeFix_Shell::FixFaceMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Face, by default True.)#" )
        .def("FixOrientationMode",
             (Standard_Integer & (ShapeFix_Shell::*)() ) static_cast<Standard_Integer & (ShapeFix_Shell::*)() >(&ShapeFix_Shell::FixOrientationMode),
             R"#(Returns (modifiable) the mode for applying FixFaceOrientation, by default True.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Shell::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Shell::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Solid ,opencascade::handle<ShapeFix_Solid> , ShapeFix_Root>>(m.attr("ShapeFix_Solid"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Solid & >()  , py::arg("solid") )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_Solid::*)( const TopoDS_Solid & ) ) static_cast<void (ShapeFix_Solid::*)( const TopoDS_Solid & ) >(&ShapeFix_Solid::Init),
             R"#(Initializes by solid .)#"  , py::arg("solid"))
        .def("Perform",
             (Standard_Boolean (ShapeFix_Solid::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (ShapeFix_Solid::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&ShapeFix_Solid::Perform),
             R"#(Iterates on shells and performs fixes (calls ShapeFix_Shell for each subshell). The passed progress indicator allows user to consult the current progress stage and abort algorithm if needed.)#"  , py::arg("theProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(0))
        .def("SolidFromShell",
             (TopoDS_Solid (ShapeFix_Solid::*)( const TopoDS_Shell & ) ) static_cast<TopoDS_Solid (ShapeFix_Solid::*)( const TopoDS_Shell & ) >(&ShapeFix_Solid::SolidFromShell),
             R"#(Calls MakeSolid and orients the solid to be "not infinite")#"  , py::arg("shell"))
        .def("Status",
             (Standard_Boolean (ShapeFix_Solid::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Solid::*)( const ShapeExtend_Status ) const>(&ShapeFix_Solid::Status),
             R"#(Returns the status of the last Fix.)#"  , py::arg("status"))
        .def("Solid",
             (TopoDS_Shape (ShapeFix_Solid::*)() const) static_cast<TopoDS_Shape (ShapeFix_Solid::*)() const>(&ShapeFix_Solid::Solid),
             R"#(Returns resulting solid.)#" )
        .def("FixShellTool",
             (opencascade::handle<ShapeFix_Shell> (ShapeFix_Solid::*)() const) static_cast<opencascade::handle<ShapeFix_Shell> (ShapeFix_Solid::*)() const>(&ShapeFix_Solid::FixShellTool),
             R"#(Returns tool for fixing shells.)#" )
        .def("SetMsgRegistrator",
             (void (ShapeFix_Solid::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<void (ShapeFix_Solid::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeFix_Solid::SetMsgRegistrator),
             R"#(Sets message registrator)#"  , py::arg("msgreg"))
        .def("SetPrecision",
             (void (ShapeFix_Solid::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Solid::*)( const Standard_Real ) >(&ShapeFix_Solid::SetPrecision),
             R"#(Sets basic precision value (also to FixShellTool))#"  , py::arg("preci"))
        .def("SetMinTolerance",
             (void (ShapeFix_Solid::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Solid::*)( const Standard_Real ) >(&ShapeFix_Solid::SetMinTolerance),
             R"#(Sets minimal allowed tolerance (also to FixShellTool))#"  , py::arg("mintol"))
        .def("SetMaxTolerance",
             (void (ShapeFix_Solid::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Solid::*)( const Standard_Real ) >(&ShapeFix_Solid::SetMaxTolerance),
             R"#(Sets maximal allowed tolerance (also to FixShellTool))#"  , py::arg("maxtol"))
        .def("FixShellMode",
             (Standard_Integer & (ShapeFix_Solid::*)() ) static_cast<Standard_Integer & (ShapeFix_Solid::*)() >(&ShapeFix_Solid::FixShellMode),
             R"#(Returns (modifiable) the mode for applying fixes of ShapeFix_Shell, by default True.)#" )
        .def("FixShellOrientationMode",
             (Standard_Integer & (ShapeFix_Solid::*)() ) static_cast<Standard_Integer & (ShapeFix_Solid::*)() >(&ShapeFix_Solid::FixShellOrientationMode),
             R"#(Returns (modifiable) the mode for applying analysis and fixes of orientation of shells in the solid; by default True.)#" )
        .def("CreateOpenSolidMode",
             (Standard_Boolean & (ShapeFix_Solid::*)() ) static_cast<Standard_Boolean & (ShapeFix_Solid::*)() >(&ShapeFix_Solid::CreateOpenSolidMode),
             R"#(Returns (modifiable) the mode for creation of solids. If mode myCreateOpenSolidMode is equal to true solids are created from open shells else solids are created from closed shells only. ShapeFix_Shell, by default False.)#" )
        .def("Shape",
             (TopoDS_Shape (ShapeFix_Solid::*)() ) static_cast<TopoDS_Shape (ShapeFix_Solid::*)() >(&ShapeFix_Solid::Shape),
             R"#(In case of multiconnexity returns compound of fixed solids else returns one solid.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Solid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Solid::*)() const>(&ShapeFix_Solid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Solid::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Solid::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_SplitCommonVertex ,opencascade::handle<ShapeFix_SplitCommonVertex> , ShapeFix_Root>>(m.attr("ShapeFix_SplitCommonVertex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_SplitCommonVertex::*)( const TopoDS_Shape & ) ) static_cast<void (ShapeFix_SplitCommonVertex::*)( const TopoDS_Shape & ) >(&ShapeFix_SplitCommonVertex::Init),
             R"#(None)#"  , py::arg("S"))
        .def("Perform",
             (void (ShapeFix_SplitCommonVertex::*)() ) static_cast<void (ShapeFix_SplitCommonVertex::*)() >(&ShapeFix_SplitCommonVertex::Perform),
             R"#(None)#" )
        .def("Shape",
             (TopoDS_Shape (ShapeFix_SplitCommonVertex::*)() ) static_cast<TopoDS_Shape (ShapeFix_SplitCommonVertex::*)() >(&ShapeFix_SplitCommonVertex::Shape),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_SplitCommonVertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_SplitCommonVertex::*)() const>(&ShapeFix_SplitCommonVertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_SplitCommonVertex::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_SplitCommonVertex::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Wire ,opencascade::handle<ShapeFix_Wire> , ShapeFix_Root>>(m.attr("ShapeFix_Wire"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Wire &,const TopoDS_Face &,const Standard_Real >()  , py::arg("wire"),  py::arg("face"),  py::arg("prec") )
    // custom constructors
    // methods
        .def("ClearModes",
             (void (ShapeFix_Wire::*)() ) static_cast<void (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ClearModes),
             R"#(Sets all modes to default)#" )
        .def("ClearStatuses",
             (void (ShapeFix_Wire::*)() ) static_cast<void (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ClearStatuses),
             R"#(Clears all statuses)#" )
        .def("Init",
             (void (ShapeFix_Wire::*)( const TopoDS_Wire & , const TopoDS_Face & , const Standard_Real ) ) static_cast<void (ShapeFix_Wire::*)( const TopoDS_Wire & , const TopoDS_Face & , const Standard_Real ) >(&ShapeFix_Wire::Init),
             R"#(Load analyzer with all the data for the wire and face and drops all fixing statuses)#"  , py::arg("wire"),  py::arg("face"),  py::arg("prec"))
        .def("Init",
             (void (ShapeFix_Wire::*)( const opencascade::handle<ShapeAnalysis_Wire> & ) ) static_cast<void (ShapeFix_Wire::*)( const opencascade::handle<ShapeAnalysis_Wire> & ) >(&ShapeFix_Wire::Init),
             R"#(Load analyzer with all the data already prepared and drops all fixing statuses If analyzer contains face, there is no need to set it by SetFace or SetSurface)#"  , py::arg("saw"))
        .def("Load",
             (void (ShapeFix_Wire::*)( const TopoDS_Wire & ) ) static_cast<void (ShapeFix_Wire::*)( const TopoDS_Wire & ) >(&ShapeFix_Wire::Load),
             R"#(Load data for the wire, and drops all fixing statuses)#"  , py::arg("wire"))
        .def("Load",
             (void (ShapeFix_Wire::*)( const opencascade::handle<ShapeExtend_WireData> & ) ) static_cast<void (ShapeFix_Wire::*)( const opencascade::handle<ShapeExtend_WireData> & ) >(&ShapeFix_Wire::Load),
             R"#(Load data for the wire, and drops all fixing statuses)#"  , py::arg("sbwd"))
        .def("SetFace",
             (void (ShapeFix_Wire::*)( const TopoDS_Face & ) ) static_cast<void (ShapeFix_Wire::*)( const TopoDS_Face & ) >(&ShapeFix_Wire::SetFace),
             R"#(Set working face for the wire)#"  , py::arg("face"))
        .def("SetSurface",
             (void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & ) >(&ShapeFix_Wire::SetSurface),
             R"#(Set surface for the wire)#"  , py::arg("surf"))
        .def("SetSurface",
             (void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) ) static_cast<void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) >(&ShapeFix_Wire::SetSurface),
             R"#(Set surface for the wire)#"  , py::arg("surf"),  py::arg("loc"))
        .def("SetPrecision",
             (void (ShapeFix_Wire::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Wire::*)( const Standard_Real ) >(&ShapeFix_Wire::SetPrecision),
             R"#(Set working precision (to root and to analyzer))#"  , py::arg("prec"))
        .def("SetMaxTailAngle",
             (void (ShapeFix_Wire::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Wire::*)( const Standard_Real ) >(&ShapeFix_Wire::SetMaxTailAngle),
             R"#(Sets the maximal allowed angle of the tails in radians.)#"  , py::arg("theMaxTailAngle"))
        .def("SetMaxTailWidth",
             (void (ShapeFix_Wire::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Wire::*)( const Standard_Real ) >(&ShapeFix_Wire::SetMaxTailWidth),
             R"#(Sets the maximal allowed width of the tails.)#"  , py::arg("theMaxTailWidth"))
        .def("IsLoaded",
             (Standard_Boolean (ShapeFix_Wire::*)() const) static_cast<Standard_Boolean (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::IsLoaded),
             R"#(Tells if the wire is loaded)#" )
        .def("IsReady",
             (Standard_Boolean (ShapeFix_Wire::*)() const) static_cast<Standard_Boolean (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::IsReady),
             R"#(Tells if the wire and face are loaded)#" )
        .def("NbEdges",
             (Standard_Integer (ShapeFix_Wire::*)() const) static_cast<Standard_Integer (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::NbEdges),
             R"#(returns number of edges in the working wire)#" )
        .def("Wire",
             (TopoDS_Wire (ShapeFix_Wire::*)() const) static_cast<TopoDS_Wire (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::Wire),
             R"#(Makes the resulting Wire (by basic Brep_Builder))#" )
        .def("WireAPIMake",
             (TopoDS_Wire (ShapeFix_Wire::*)() const) static_cast<TopoDS_Wire (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::WireAPIMake),
             R"#(Makes the resulting Wire (by BRepAPI_MakeWire))#" )
        .def("Analyzer",
             (opencascade::handle<ShapeAnalysis_Wire> (ShapeFix_Wire::*)() const) static_cast<opencascade::handle<ShapeAnalysis_Wire> (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::Analyzer),
             R"#(returns field Analyzer (working tool))#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_Wire::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::WireData),
             R"#(returns working wire)#" )
        .def("Face",
             (const TopoDS_Face & (ShapeFix_Wire::*)() const) static_cast<const TopoDS_Face & (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::Face),
             R"#(returns working face (Analyzer.Face()))#" )
        .def("ModifyTopologyMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ModifyTopologyMode),
             R"#(Returns (modifiable) the flag which defines whether it is allowed to modify topology of the wire during fixing (adding/removing edges etc.))#" )
        .def("ModifyGeometryMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ModifyGeometryMode),
             R"#(Returns (modifiable) the flag which defines whether the Fix..() methods are allowed to modify geometry of the edges and vertices)#" )
        .def("ModifyRemoveLoopMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ModifyRemoveLoopMode),
             R"#(Returns (modifiable) the flag which defines whether the Fix..() methods are allowed to modify RemoveLoop of the edges)#" )
        .def("ClosedWireMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ClosedWireMode),
             R"#(Returns (modifiable) the flag which defines whether the wire is to be closed (by calling methods like FixDegenerated() and FixConnected() for last and first edges).)#" )
        .def("PreferencePCurveMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::PreferencePCurveMode),
             R"#(Returns (modifiable) the flag which defines whether the 2d (True) representation of the wire is preferable over 3d one (in the case of ambiguity in FixEdgeCurves).)#" )
        .def("FixGapsByRangesMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGapsByRangesMode),
             R"#(Returns (modifiable) the flag which defines whether tool tries to fix gaps first by changing curves ranges (i.e. using intersection, extrema, projections) or not.)#" )
        .def("FixReorderMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixReorderMode),
             R"#(None)#" )
        .def("FixSmallMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSmallMode),
             R"#(None)#" )
        .def("FixConnectedMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixConnectedMode),
             R"#(None)#" )
        .def("FixEdgeCurvesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixEdgeCurvesMode),
             R"#(None)#" )
        .def("FixDegeneratedMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixDegeneratedMode),
             R"#(None)#" )
        .def("FixSelfIntersectionMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSelfIntersectionMode),
             R"#(None)#" )
        .def("FixLackingMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixLackingMode),
             R"#(None)#" )
        .def("FixGaps3dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGaps3dMode),
             R"#(None)#" )
        .def("FixGaps2dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGaps2dMode),
             R"#(Returns (modifiable) the flag for corresponding Fix..() method which defines whether this method will be called from the method APIFix(): -1 default 1 method will be called 0 method will not be called)#" )
        .def("FixReversed2dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixReversed2dMode),
             R"#(None)#" )
        .def("FixRemovePCurveMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixRemovePCurveMode),
             R"#(None)#" )
        .def("FixAddPCurveMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixAddPCurveMode),
             R"#(None)#" )
        .def("FixRemoveCurve3dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixRemoveCurve3dMode),
             R"#(None)#" )
        .def("FixAddCurve3dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixAddCurve3dMode),
             R"#(None)#" )
        .def("FixSeamMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSeamMode),
             R"#(None)#" )
        .def("FixShiftedMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixShiftedMode),
             R"#(None)#" )
        .def("FixSameParameterMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSameParameterMode),
             R"#(None)#" )
        .def("FixVertexToleranceMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixVertexToleranceMode),
             R"#(None)#" )
        .def("FixNotchedEdgesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixNotchedEdgesMode),
             R"#(None)#" )
        .def("FixSelfIntersectingEdgeMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSelfIntersectingEdgeMode),
             R"#(None)#" )
        .def("FixIntersectingEdgesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixIntersectingEdgesMode),
             R"#(None)#" )
        .def("FixNonAdjacentIntersectingEdgesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixNonAdjacentIntersectingEdgesMode),
             R"#(Returns (modifiable) the flag for corresponding Fix..() method which defines whether this method will be called from the corresponding Fix..() method of the public level: -1 default 1 method will be called 0 method will not be called)#" )
        .def("FixTailMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixTailMode),
             R"#(None)#" )
        .def("Perform",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::Perform),
             R"#(This method performs all the available fixes. If some fix is turned on or off explicitly by the Fix..Mode() flag, this fix is either called or not depending on that flag. Else (i.e. if flag is default) fix is called depending on the situation: some fixes are not called or are limited if order of edges in the wire is not OK, or depending on modes)#" )
        .def("FixReorder",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixReorder),
             R"#(Performs an analysis and reorders edges in the wire using class WireOrder)#" )
        .def("FixSmall",
             (Standard_Integer (ShapeFix_Wire::*)( const Standard_Boolean , const Standard_Real ) ) static_cast<Standard_Integer (ShapeFix_Wire::*)( const Standard_Boolean , const Standard_Real ) >(&ShapeFix_Wire::FixSmall),
             R"#(Applies FixSmall(num) to all edges in the wire)#"  , py::arg("lockvtx"),  py::arg("precsmall")=static_cast<const Standard_Real>(0.0))
        .def("FixConnected",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Real ) >(&ShapeFix_Wire::FixConnected),
             R"#(Applies FixConnected(num) to all edges in the wire Connection between first and last edges is treated only if flag ClosedMode is True If <prec> is -1 then MaxTolerance() is taken.)#"  , py::arg("prec")=static_cast<const Standard_Real>(- 1.0))
        .def("FixEdgeCurves",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixEdgeCurves),
             R"#(Groups the fixes dealing with 3d and pcurves of the edges. The order of the fixes and the default behaviour are: ShapeFix_Edge::FixReversed2d ShapeFix_Edge::FixRemovePCurve (only if forced) ShapeFix_Edge::FixAddPCurve ShapeFix_Edge::FixRemoveCurve3d (only if forced) ShapeFix_Edge::FixAddCurve3d FixSeam, FixShifted, ShapeFix_Edge::FixSameParameter)#" )
        .def("FixDegenerated",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixDegenerated),
             R"#(Applies FixDegenerated(num) to all edges in the wire Connection between first and last edges is treated only if flag ClosedMode is True)#" )
        .def("FixSelfIntersection",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSelfIntersection),
             R"#(Applies FixSelfIntersectingEdge(num) and FixIntersectingEdges(num) to all edges in the wire and FixIntersectingEdges(num1, num2) for all pairs num1 and num2 such that num2 >= num1 + 2 and removes wrong edges if any)#" )
        .def("FixLacking",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Boolean ) >(&ShapeFix_Wire::FixLacking),
             R"#(Applies FixLacking(num) to all edges in the wire Connection between first and last edges is treated only if flag ClosedMode is True If <force> is False (default), test for connectness is done with precision of vertex between edges, else it is done with minimal value of vertex tolerance and Analyzer.Precision(). Hence, <force> will lead to inserting lacking edges in replacement of vertices which have big tolerances.)#"  , py::arg("force")=static_cast<const Standard_Boolean>(Standard_False))
        .def("FixClosed",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Real ) >(&ShapeFix_Wire::FixClosed),
             R"#(Fixes a wire to be well closed It performs FixConnected, FixDegenerated and FixLacking between last and first edges (independingly on flag ClosedMode and modes for these fixings) If <prec> is -1 then MaxTolerance() is taken.)#"  , py::arg("prec")=static_cast<const Standard_Real>(- 1.0))
        .def("FixGaps3d",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGaps3d),
             R"#(Fixes gaps between ends of 3d curves on adjacent edges myPrecision is used to detect the gaps.)#" )
        .def("FixGaps2d",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGaps2d),
             R"#(Fixes gaps between ends of pcurves on adjacent edges myPrecision is used to detect the gaps.)#" )
        .def("FixReorder",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeAnalysis_WireOrder & ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeAnalysis_WireOrder & ) >(&ShapeFix_Wire::FixReorder),
             R"#(Reorder edges in the wire as determined by WireOrder that should be filled and computed before)#"  , py::arg("wi"))
        .def("FixSmall",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean , const Standard_Real ) >(&ShapeFix_Wire::FixSmall),
             R"#(Fixes Null Length Edge to be removed If an Edge has Null Length (regarding preci, or <precsmall> - what is smaller), it should be removed It can be with no problem if its two vertices are the same Else, if lockvtx is False, it is removed and its end vertex is put on the preceeding edge But if lockvtx is True, this edge must be kept ...)#"  , py::arg("num"),  py::arg("lockvtx"),  py::arg("precsmall"))
        .def("FixConnected",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Real ) >(&ShapeFix_Wire::FixConnected),
             R"#(Fixes connected edges (preceeding and current) Forces Vertices (end of preceeding-begin of current) to be the same one Tests with starting preci or, if given greater, <prec> If <prec> is -1 then MaxTolerance() is taken.)#"  , py::arg("num"),  py::arg("prec"))
        .def("FixSeam",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer ) >(&ShapeFix_Wire::FixSeam),
             R"#(Fixes a seam edge A Seam edge has two pcurves, one for forward. one for reversed The forward pcurve must be set as first)#"  , py::arg("num"))
        .def("FixShifted",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixShifted),
             R"#(Fixes edges which have pcurves shifted by whole parameter range on the closed surface (the case may occur if pcurve of edge was computed by projecting 3d curve, which goes along the seam). It compares each two consequent edges and tries to connect them if distance between ends is near to range of the surface. It also can detect and fix the case if all pcurves are connected, but lie out of parametric bounds of the surface. In addition to FixShifted from ShapeFix_Wire, more sophisticated check of degenerate points is performed, and special cases like sphere given by two meridians are treated.)#" )
        .def("FixDegenerated",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer ) >(&ShapeFix_Wire::FixDegenerated),
             R"#(Fixes Degenerated Edge Checks an <num-th> edge or a point between <num>th-1 and <num>th edges for a singularity on a supporting surface. If singularity is detected, either adds new degenerated edge (before <num>th), or makes <num>th edge to be degenerated.)#"  , py::arg("num"))
        .def("FixLacking",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean ) >(&ShapeFix_Wire::FixLacking),
             R"#(Fixes Lacking Edge Test if two adjucent edges are disconnected in 2d (while connected in 3d), and in that case either increase tolerance of the vertex or add a new edge (straight in 2d space), in order to close wire in 2d. Returns True if edge was added or tolerance was increased.)#"  , py::arg("num"),  py::arg("force")=static_cast<const Standard_Boolean>(Standard_False))
        .def("FixNotchedEdges",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixNotchedEdges),
             R"#(None)#" )
        .def("FixGap3d",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean ) >(&ShapeFix_Wire::FixGap3d),
             R"#(Fixes gap between ends of 3d curves on num-1 and num-th edges. myPrecision is used to detect the gap. If convert is True, converts curves to bsplines to bend.)#"  , py::arg("num"),  py::arg("convert")=static_cast<const Standard_Boolean>(Standard_False))
        .def("FixGap2d",
             (Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const Standard_Integer , const Standard_Boolean ) >(&ShapeFix_Wire::FixGap2d),
             R"#(Fixes gap between ends of pcurves on num-1 and num-th edges. myPrecision is used to detect the gap. If convert is True, converts pcurves to bsplines to bend.)#"  , py::arg("num"),  py::arg("convert")=static_cast<const Standard_Boolean>(Standard_False))
        .def("FixTails",
             (Standard_Boolean (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixTails),
             R"#(None)#" )
        .def("StatusReorder",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusReorder),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSmall",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusSmall),
             R"#(None)#"  , py::arg("status"))
        .def("StatusConnected",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusConnected),
             R"#(None)#"  , py::arg("status"))
        .def("StatusEdgeCurves",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusEdgeCurves),
             R"#(None)#"  , py::arg("status"))
        .def("StatusDegenerated",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusDegenerated),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSelfIntersection",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusSelfIntersection),
             R"#(None)#"  , py::arg("status"))
        .def("StatusLacking",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusLacking),
             R"#(None)#"  , py::arg("status"))
        .def("StatusClosed",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusClosed),
             R"#(None)#"  , py::arg("status"))
        .def("StatusGaps3d",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusGaps3d),
             R"#(None)#"  , py::arg("status"))
        .def("StatusGaps2d",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusGaps2d),
             R"#(None)#"  , py::arg("status"))
        .def("StatusNotches",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusNotches),
             R"#(None)#"  , py::arg("status"))
        .def("StatusRemovedSegment",
             (Standard_Boolean (ShapeFix_Wire::*)() const) static_cast<Standard_Boolean (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::StatusRemovedSegment),
             R"#(Querying the status of perfomed API fixing procedures Each Status..() methods gives information about the last call to the corresponding Fix..() method of API level: OK : no problems detected; nothing done DONE: some problem(s) was(were) detected and successfully fixed FAIL: some problem(s) cannot be fixed)#" )
        .def("StatusFixTails",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusFixTails),
             R"#(None)#"  , py::arg("status"))
        .def("LastFixStatus",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::LastFixStatus),
             R"#(Queries the status of last call to methods Fix... of advanced level For details see corresponding methods; universal statuses are: OK : problem not detected; nothing done DONE: problem was detected and successfully fixed FAIL: problem cannot be fixed)#"  , py::arg("status"))
        .def("FixEdgeTool",
             (opencascade::handle<ShapeFix_Edge> (ShapeFix_Wire::*)() const) static_cast<opencascade::handle<ShapeFix_Edge> (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::FixEdgeTool),
             R"#(Returns tool for fixing wires.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Wire::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::DynamicType),
             R"#(None)#" )
        .def("SetFace",
             (void (ShapeFix_Wire::*)( const TopoDS_Face & ) ) static_cast<void (ShapeFix_Wire::*)( const TopoDS_Face & ) >(&ShapeFix_Wire::SetFace),
             R"#(Set working face for the wire)#"  , py::arg("face"))
        .def("SetSurface",
             (void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & ) >(&ShapeFix_Wire::SetSurface),
             R"#(Set surface for the wire)#"  , py::arg("surf"))
        .def("SetSurface",
             (void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) ) static_cast<void (ShapeFix_Wire::*)( const opencascade::handle<Geom_Surface> & , const TopLoc_Location & ) >(&ShapeFix_Wire::SetSurface),
             R"#(Set surface for the wire)#"  , py::arg("surf"),  py::arg("loc"))
        .def("IsLoaded",
             (Standard_Boolean (ShapeFix_Wire::*)() const) static_cast<Standard_Boolean (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::IsLoaded),
             R"#(Tells if the wire is loaded)#" )
        .def("IsReady",
             (Standard_Boolean (ShapeFix_Wire::*)() const) static_cast<Standard_Boolean (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::IsReady),
             R"#(Tells if the wire and face are loaded)#" )
        .def("Wire",
             (TopoDS_Wire (ShapeFix_Wire::*)() const) static_cast<TopoDS_Wire (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::Wire),
             R"#(Makes the resulting Wire (by basic Brep_Builder))#" )
        .def("WireAPIMake",
             (TopoDS_Wire (ShapeFix_Wire::*)() const) static_cast<TopoDS_Wire (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::WireAPIMake),
             R"#(Makes the resulting Wire (by BRepAPI_MakeWire))#" )
        .def("Analyzer",
             (opencascade::handle<ShapeAnalysis_Wire> (ShapeFix_Wire::*)() const) static_cast<opencascade::handle<ShapeAnalysis_Wire> (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::Analyzer),
             R"#(returns field Analyzer (working tool))#" )
        .def("WireData",
             (const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_Wire::*)() const) static_cast<const opencascade::handle<ShapeExtend_WireData> & (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::WireData),
             R"#(returns working wire)#" )
        .def("Face",
             (const TopoDS_Face & (ShapeFix_Wire::*)() const) static_cast<const TopoDS_Face & (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::Face),
             R"#(returns working face (Analyzer.Face()))#" )
        .def("ModifyTopologyMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ModifyTopologyMode),
             R"#(Returns (modifiable) the flag which defines whether it is allowed to modify topology of the wire during fixing (adding/removing edges etc.))#" )
        .def("ModifyGeometryMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ModifyGeometryMode),
             R"#(Returns (modifiable) the flag which defines whether the Fix..() methods are allowed to modify geometry of the edges and vertices)#" )
        .def("ModifyRemoveLoopMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ModifyRemoveLoopMode),
             R"#(Returns (modifiable) the flag which defines whether the Fix..() methods are allowed to modify RemoveLoop of the edges)#" )
        .def("ClosedWireMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::ClosedWireMode),
             R"#(Returns (modifiable) the flag which defines whether the wire is to be closed (by calling methods like FixDegenerated() and FixConnected() for last and first edges).)#" )
        .def("PreferencePCurveMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::PreferencePCurveMode),
             R"#(Returns (modifiable) the flag which defines whether the 2d (True) representation of the wire is preferable over 3d one (in the case of ambiguity in FixEdgeCurves).)#" )
        .def("FixGapsByRangesMode",
             (Standard_Boolean & (ShapeFix_Wire::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGapsByRangesMode),
             R"#(Returns (modifiable) the flag which defines whether tool tries to fix gaps first by changing curves ranges (i.e. using intersection, extrema, projections) or not.)#" )
        .def("FixReorderMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixReorderMode),
             R"#(None)#" )
        .def("FixSmallMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSmallMode),
             R"#(None)#" )
        .def("FixConnectedMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixConnectedMode),
             R"#(None)#" )
        .def("FixEdgeCurvesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixEdgeCurvesMode),
             R"#(None)#" )
        .def("FixDegeneratedMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixDegeneratedMode),
             R"#(None)#" )
        .def("FixReversed2dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixReversed2dMode),
             R"#(None)#" )
        .def("FixRemovePCurveMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixRemovePCurveMode),
             R"#(None)#" )
        .def("FixRemoveCurve3dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixRemoveCurve3dMode),
             R"#(None)#" )
        .def("FixAddPCurveMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixAddPCurveMode),
             R"#(None)#" )
        .def("FixAddCurve3dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixAddCurve3dMode),
             R"#(None)#" )
        .def("FixSeamMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSeamMode),
             R"#(None)#" )
        .def("FixShiftedMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixShiftedMode),
             R"#(None)#" )
        .def("FixSameParameterMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSameParameterMode),
             R"#(None)#" )
        .def("FixVertexToleranceMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixVertexToleranceMode),
             R"#(None)#" )
        .def("FixLackingMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixLackingMode),
             R"#(None)#" )
        .def("FixSelfIntersectionMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSelfIntersectionMode),
             R"#(None)#" )
        .def("FixGaps3dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGaps3dMode),
             R"#(None)#" )
        .def("FixGaps2dMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixGaps2dMode),
             R"#(Returns (modifiable) the flag for corresponding Fix..() method which defines whether this method will be called from the method APIFix(): -1 default 1 method will be called 0 method will not be called)#" )
        .def("FixNotchedEdgesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixNotchedEdgesMode),
             R"#(None)#" )
        .def("FixSelfIntersectingEdgeMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixSelfIntersectingEdgeMode),
             R"#(None)#" )
        .def("FixIntersectingEdgesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixIntersectingEdgesMode),
             R"#(None)#" )
        .def("FixNonAdjacentIntersectingEdgesMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixNonAdjacentIntersectingEdgesMode),
             R"#(Returns (modifiable) the flag for corresponding Fix..() method which defines whether this method will be called from the corresponding Fix..() method of the public level: -1 default 1 method will be called 0 method will not be called)#" )
        .def("FixTailMode",
             (Standard_Integer & (ShapeFix_Wire::*)() ) static_cast<Standard_Integer & (ShapeFix_Wire::*)() >(&ShapeFix_Wire::FixTailMode),
             R"#(None)#" )
        .def("StatusReorder",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusReorder),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSmall",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusSmall),
             R"#(None)#"  , py::arg("status"))
        .def("StatusConnected",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusConnected),
             R"#(None)#"  , py::arg("status"))
        .def("StatusEdgeCurves",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusEdgeCurves),
             R"#(None)#"  , py::arg("status"))
        .def("StatusDegenerated",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusDegenerated),
             R"#(None)#"  , py::arg("status"))
        .def("StatusLacking",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusLacking),
             R"#(None)#"  , py::arg("status"))
        .def("StatusSelfIntersection",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusSelfIntersection),
             R"#(None)#"  , py::arg("status"))
        .def("StatusGaps3d",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusGaps3d),
             R"#(None)#"  , py::arg("status"))
        .def("StatusGaps2d",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusGaps2d),
             R"#(None)#"  , py::arg("status"))
        .def("StatusClosed",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusClosed),
             R"#(None)#"  , py::arg("status"))
        .def("StatusNotches",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusNotches),
             R"#(None)#"  , py::arg("status"))
        .def("StatusFixTails",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::StatusFixTails),
             R"#(None)#"  , py::arg("status"))
        .def("LastFixStatus",
             (Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wire::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wire::LastFixStatus),
             R"#(Queries the status of last call to methods Fix... of advanced level For details see corresponding methods; universal statuses are: OK : problem not detected; nothing done DONE: problem was detected and successfully fixed FAIL: problem cannot be fixed)#"  , py::arg("status"))
        .def("FixEdgeTool",
             (opencascade::handle<ShapeFix_Edge> (ShapeFix_Wire::*)() const) static_cast<opencascade::handle<ShapeFix_Edge> (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::FixEdgeTool),
             R"#(Returns tool for fixing wires.)#" )
        .def("StatusRemovedSegment",
             (Standard_Boolean (ShapeFix_Wire::*)() const) static_cast<Standard_Boolean (ShapeFix_Wire::*)() const>(&ShapeFix_Wire::StatusRemovedSegment),
             R"#(Querying the status of perfomed API fixing procedures Each Status..() methods gives information about the last call to the corresponding Fix..() method of API level: OK : no problems detected; nothing done DONE: some problem(s) was(were) detected and successfully fixed FAIL: some problem(s) cannot be fixed)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Wire::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Wire::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Wireframe ,opencascade::handle<ShapeFix_Wireframe> , ShapeFix_Root>>(m.attr("ShapeFix_Wireframe"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("shape") )
    // custom constructors
    // methods
        .def("ClearStatuses",
             (void (ShapeFix_Wireframe::*)() ) static_cast<void (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::ClearStatuses),
             R"#(Clears all statuses)#" )
        .def("Load",
             (void (ShapeFix_Wireframe::*)( const TopoDS_Shape & ) ) static_cast<void (ShapeFix_Wireframe::*)( const TopoDS_Shape & ) >(&ShapeFix_Wireframe::Load),
             R"#(Loads a shape, resets statuses)#"  , py::arg("shape"))
        .def("FixWireGaps",
             (Standard_Boolean (ShapeFix_Wireframe::*)() ) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::FixWireGaps),
             R"#(Fixes gaps between ends of curves of adjacent edges (both 3d and pcurves) in wires If precision is 0.0, uses Precision::Confusion().)#" )
        .def("FixSmallEdges",
             (Standard_Boolean (ShapeFix_Wireframe::*)() ) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::FixSmallEdges),
             R"#(Fixes small edges in shape by merging adjacent edges If precision is 0.0, uses Precision::Confusion().)#" )
        .def("CheckSmallEdges",
             (Standard_Boolean (ShapeFix_Wireframe::*)( NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) ) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)( NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & ) >(&ShapeFix_Wireframe::CheckSmallEdges),
             R"#(Auxiliary tool for FixSmallEdges which checks for small edges and fills the maps. Returns True if at least one small edge has been found.)#"  , py::arg("theSmallEdges"),  py::arg("theEdgeToFaces"),  py::arg("theFaceWithSmall"),  py::arg("theMultyEdges"))
        .def("MergeSmallEdges",
             (Standard_Boolean (ShapeFix_Wireframe::*)( NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean , const Standard_Real ) ) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)( NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_DataMap<TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher> & , NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> & , const Standard_Boolean , const Standard_Real ) >(&ShapeFix_Wireframe::MergeSmallEdges),
             R"#(Auxiliary tool for FixSmallEdges which merges small edges. If theModeDrop is equal to Standard_True then small edges, which cannot be connected with adjacent edges are dropped. Otherwise they are kept. theLimitAngle specifies maximum allowed tangency discontinuity between adjacent edges. If theLimitAngle is equal to -1, this angle is not taken into account.)#"  , py::arg("theSmallEdges"),  py::arg("theEdgeToFaces"),  py::arg("theFaceWithSmall"),  py::arg("theMultyEdges"),  py::arg("theModeDrop")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theLimitAngle")=static_cast<const Standard_Real>(- 1))
        .def("StatusWireGaps",
             (Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wireframe::StatusWireGaps),
             R"#(Decodes the status of the last FixWireGaps. OK - No gaps were found DONE1 - Some gaps in 3D were fixed DONE2 - Some gaps in 2D were fixed FAIL1 - Failed to fix some gaps in 3D FAIL2 - Failed to fix some gaps in 2D)#"  , py::arg("status"))
        .def("StatusSmallEdges",
             (Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wireframe::StatusSmallEdges),
             R"#(Decodes the status of the last FixSmallEdges. OK - No small edges were found DONE1 - Some small edges were fixed FAIL1 - Failed to fix some small edges)#"  , py::arg("status"))
        .def("Shape",
             (TopoDS_Shape (ShapeFix_Wireframe::*)() ) static_cast<TopoDS_Shape (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::Shape),
             R"#(None)#" )
        .def("ModeDropSmallEdges",
             (Standard_Boolean & (ShapeFix_Wireframe::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::ModeDropSmallEdges),
             R"#(Returns mode managing removing small edges.)#" )
        .def("SetLimitAngle",
             (void (ShapeFix_Wireframe::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Wireframe::*)( const Standard_Real ) >(&ShapeFix_Wireframe::SetLimitAngle),
             R"#(Set limit angle for merging edges.)#"  , py::arg("theLimitAngle"))
        .def("LimitAngle",
             (Standard_Real (ShapeFix_Wireframe::*)() const) static_cast<Standard_Real (ShapeFix_Wireframe::*)() const>(&ShapeFix_Wireframe::LimitAngle),
             R"#(Get limit angle for merging edges.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Wireframe::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Wireframe::*)() const>(&ShapeFix_Wireframe::DynamicType),
             R"#(None)#" )
        .def("StatusWireGaps",
             (Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wireframe::StatusWireGaps),
             R"#(Decodes the status of the last FixWireGaps. OK - No gaps were found DONE1 - Some gaps in 3D were fixed DONE2 - Some gaps in 2D were fixed FAIL1 - Failed to fix some gaps in 3D FAIL2 - Failed to fix some gaps in 2D)#"  , py::arg("status"))
        .def("StatusSmallEdges",
             (Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeFix_Wireframe::*)( const ShapeExtend_Status ) const>(&ShapeFix_Wireframe::StatusSmallEdges),
             R"#(Decodes the status of the last FixSmallEdges. OK - No small edges were found DONE1 - Some small edges were fixed FAIL1 - Failed to fix some small edges)#"  , py::arg("status"))
        .def("Shape",
             (TopoDS_Shape (ShapeFix_Wireframe::*)() ) static_cast<TopoDS_Shape (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::Shape),
             R"#(None)#" )
        .def("ModeDropSmallEdges",
             (Standard_Boolean & (ShapeFix_Wireframe::*)() ) static_cast<Standard_Boolean & (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::ModeDropSmallEdges),
             R"#(Returns mode managing removing small edges.)#" )
        .def("SetLimitAngle",
             (void (ShapeFix_Wireframe::*)( const Standard_Real ) ) static_cast<void (ShapeFix_Wireframe::*)( const Standard_Real ) >(&ShapeFix_Wireframe::SetLimitAngle),
             R"#(Set limit angle for merging edges.)#"  , py::arg("theLimitAngle"))
        .def("LimitAngle",
             (Standard_Real (ShapeFix_Wireframe::*)() const) static_cast<Standard_Real (ShapeFix_Wireframe::*)() const>(&ShapeFix_Wireframe::LimitAngle),
             R"#(Get limit angle for merging edges.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Wireframe::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&ShapeFix_Wireframe::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeFix_ShapeTolerance.hxx
// ./opencascade/ShapeFix_FixSmallSolid.hxx
// ./opencascade/ShapeFix_WireVertex.hxx
// ./opencascade/ShapeFix_IntersectionTool.hxx
// ./opencascade/ShapeFix_SequenceOfWireSegment.hxx
// ./opencascade/ShapeFix_WireSegment.hxx
// ./opencascade/ShapeFix.hxx
// ./opencascade/ShapeFix_SplitTool.hxx
// ./opencascade/ShapeFix_SplitCommonVertex.hxx
// ./opencascade/ShapeFix_EdgeConnect.hxx
// ./opencascade/ShapeFix_DataMapOfShapeBox2d.hxx
// ./opencascade/ShapeFix_Shape.hxx
// ./opencascade/ShapeFix_FixSmallFace.hxx
// ./opencascade/ShapeFix_FreeBounds.hxx
// ./opencascade/ShapeFix_Root.hxx
// ./opencascade/ShapeFix_Face.hxx
// ./opencascade/ShapeFix_Shell.hxx
// ./opencascade/ShapeFix_Solid.hxx
// ./opencascade/ShapeFix_ComposeShell.hxx
// ./opencascade/ShapeFix_Wire.hxx
// ./opencascade/ShapeFix_Wireframe.hxx
// ./opencascade/ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d.hxx
// ./opencascade/ShapeFix_Edge.hxx
// ./opencascade/ShapeFix_EdgeProjAux.hxx
// ./opencascade/ShapeFix_FaceConnect.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<ShapeFix_WireSegment>(m,"ShapeFix_SequenceOfWireSegment");
    register_template_NCollection_DataMap<TopoDS_Shape, Bnd_Box2d, TopTools_ShapeMapHasher>(m,"ShapeFix_DataMapOfShapeBox2d");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
