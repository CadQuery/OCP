
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
#include <ShapeBuild_ReShape.hxx>
#include <Message_Msg.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeFix_Edge.hxx>
#include <Geom_Surface.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
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
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <ShapeFix_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <Message_ProgressIndicator.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeFix_Wire.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Wire.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Vertex.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeExtend_WireData.hxx>
#include <gp_Lin2d.hxx>
#include <Geom_Surface.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <TopoDS_Shape.hxx>

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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Edge ,opencascade::handle<ShapeFix_Edge> , Standard_Transient>>(m.attr("ShapeFix_Edge"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Edge::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Edge::*)() const>(&ShapeFix_Edge::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Edge::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_EdgeConnect , shared_ptr<ShapeFix_EdgeConnect> >>(m.attr("ShapeFix_EdgeConnect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_EdgeProjAux ,opencascade::handle<ShapeFix_EdgeProjAux> , Standard_Transient>>(m.attr("ShapeFix_EdgeProjAux"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_EdgeProjAux::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_EdgeProjAux::*)() const>(&ShapeFix_EdgeProjAux::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_EdgeProjAux::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FaceConnect , shared_ptr<ShapeFix_FaceConnect> >>(m.attr("ShapeFix_FaceConnect"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FreeBounds , shared_ptr<ShapeFix_FreeBounds> >>(m.attr("ShapeFix_FreeBounds"))
    // constructors
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
    // custom constructors
    // methods
        .def("Context",
             (opencascade::handle<ShapeBuild_ReShape> (ShapeFix_IntersectionTool::*)() const) static_cast<opencascade::handle<ShapeBuild_ReShape> (ShapeFix_IntersectionTool::*)() const>(&ShapeFix_IntersectionTool::Context),
             R"#(Returns context)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_ShapeTolerance , shared_ptr<ShapeFix_ShapeTolerance> >>(m.attr("ShapeFix_ShapeTolerance"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_SplitTool , shared_ptr<ShapeFix_SplitTool> >>(m.attr("ShapeFix_SplitTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_WireSegment , shared_ptr<ShapeFix_WireSegment> >>(m.attr("ShapeFix_WireSegment"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_WireVertex , shared_ptr<ShapeFix_WireVertex> >>(m.attr("ShapeFix_WireVertex"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_ComposeShell ,opencascade::handle<ShapeFix_ComposeShell> , ShapeFix_Root>>(m.attr("ShapeFix_ComposeShell"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (ShapeFix_ComposeShell::*)() ) static_cast<Standard_Boolean (ShapeFix_ComposeShell::*)() >(&ShapeFix_ComposeShell::Perform),
             R"#(Performs the work on already loaded data.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_ComposeShell::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_ComposeShell::*)() const>(&ShapeFix_ComposeShell::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_ComposeShell::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Face ,opencascade::handle<ShapeFix_Face> , ShapeFix_Root>>(m.attr("ShapeFix_Face"))
    // constructors
    // custom constructors
    // methods
        .def("ClearModes",
             (void (ShapeFix_Face::*)() ) static_cast<void (ShapeFix_Face::*)() >(&ShapeFix_Face::ClearModes),
             R"#(Sets all modes to default)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FixSmallFace ,opencascade::handle<ShapeFix_FixSmallFace> , ShapeFix_Root>>(m.attr("ShapeFix_FixSmallFace"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallFace::*)() const>(&ShapeFix_FixSmallFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_FixSmallFace::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_FixSmallSolid ,opencascade::handle<ShapeFix_FixSmallSolid> , ShapeFix_Root>>(m.attr("ShapeFix_FixSmallSolid"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallSolid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_FixSmallSolid::*)() const>(&ShapeFix_FixSmallSolid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_FixSmallSolid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Shape ,opencascade::handle<ShapeFix_Shape> , ShapeFix_Root>>(m.attr("ShapeFix_Shape"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Shell ,opencascade::handle<ShapeFix_Shell> , ShapeFix_Root>>(m.attr("ShapeFix_Shell"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Solid ,opencascade::handle<ShapeFix_Solid> , ShapeFix_Root>>(m.attr("ShapeFix_Solid"))
    // constructors
    // custom constructors
    // methods
        .def("Init",
             (void (ShapeFix_Solid::*)( const TopoDS_Solid & ) ) static_cast<void (ShapeFix_Solid::*)( const TopoDS_Solid & ) >(&ShapeFix_Solid::Init),
             R"#(Initializes by solid .)#"  , py::arg("solid"))
        .def("Perform",
             (Standard_Boolean (ShapeFix_Solid::*)( const opencascade::handle<Message_ProgressIndicator> & ) ) static_cast<Standard_Boolean (ShapeFix_Solid::*)( const opencascade::handle<Message_ProgressIndicator> & ) >(&ShapeFix_Solid::Perform),
             R"#(Iterates on shells and performs fixes (calls ShapeFix_Shell for each subshell). The passed progress indicator allows user to consult the current progress stage and abort algorithm if needed.)#"  , py::arg("theProgress")=static_cast<const opencascade::handle<Message_ProgressIndicator> &>(0))
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
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_Solid::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_Solid::*)() const>(&ShapeFix_Solid::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_Solid::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_SplitCommonVertex ,opencascade::handle<ShapeFix_SplitCommonVertex> , ShapeFix_Root>>(m.attr("ShapeFix_SplitCommonVertex"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeFix_SplitCommonVertex::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeFix_SplitCommonVertex::*)() const>(&ShapeFix_SplitCommonVertex::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeFix_SplitCommonVertex::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Wire ,opencascade::handle<ShapeFix_Wire> , ShapeFix_Root>>(m.attr("ShapeFix_Wire"))
    // constructors
    // custom constructors
    // methods
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeFix_Wireframe ,opencascade::handle<ShapeFix_Wireframe> , ShapeFix_Root>>(m.attr("ShapeFix_Wireframe"))
    // constructors
    // custom constructors
    // methods
        .def("ClearStatuses",
             (void (ShapeFix_Wireframe::*)() ) static_cast<void (ShapeFix_Wireframe::*)() >(&ShapeFix_Wireframe::ClearStatuses),
             R"#(Clears all statuses)#" )
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeFix_Root.hxx
// ./opencascade/ShapeFix_SequenceOfWireSegment.hxx
// ./opencascade/ShapeFix_IntersectionTool.hxx
// ./opencascade/ShapeFix_Shape.hxx
// ./opencascade/ShapeFix_FixSmallSolid.hxx
// ./opencascade/ShapeFix_Wire.hxx
// ./opencascade/ShapeFix.hxx
// ./opencascade/ShapeFix_FaceConnect.hxx
// ./opencascade/ShapeFix_Solid.hxx
// ./opencascade/ShapeFix_FreeBounds.hxx
// ./opencascade/ShapeFix_FixSmallFace.hxx
// ./opencascade/ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d.hxx
// ./opencascade/ShapeFix_WireVertex.hxx
// ./opencascade/ShapeFix_Shell.hxx
// ./opencascade/ShapeFix_WireSegment.hxx
// ./opencascade/ShapeFix_DataMapOfShapeBox2d.hxx
// ./opencascade/ShapeFix_EdgeProjAux.hxx
// ./opencascade/ShapeFix_SplitCommonVertex.hxx
// ./opencascade/ShapeFix_EdgeConnect.hxx
// ./opencascade/ShapeFix_Face.hxx
// ./opencascade/ShapeFix_ComposeShell.hxx
// ./opencascade/ShapeFix_Wireframe.hxx
// ./opencascade/ShapeFix_Edge.hxx
// ./opencascade/ShapeFix_SplitTool.hxx
// ./opencascade/ShapeFix_ShapeTolerance.hxx

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
