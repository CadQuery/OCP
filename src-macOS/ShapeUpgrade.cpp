
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Edge.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_WireDivide.hxx>
#include <Geom_Surface.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <ShapeUpgrade_Tool.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeUpgrade_ClosedEdgeDivide.hxx>
#include <ShapeUpgrade_WireDivide.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeUpgrade_ClosedFaceDivide.hxx>
#include <ShapeUpgrade_FaceDivideArea.hxx>
#include <ShapeUpgrade_ShapeDivide.hxx>
#include <ShapeUpgrade_ShapeDivideArea.hxx>
#include <ShapeUpgrade_ShapeDivideContinuity.hxx>
#include <ShapeUpgrade_ShapeDivideAngle.hxx>
#include <ShapeUpgrade_ShapeConvertToBezier.hxx>
#include <ShapeUpgrade_ShapeDivideClosed.hxx>
#include <ShapeUpgrade_ShapeDivideClosedEdges.hxx>
#include <ShapeUpgrade_SplitCurve.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_SplitCurve2dContinuity.hxx>
#include <ShapeUpgrade_ConvertCurve2dToBezier.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve3dContinuity.hxx>
#include <ShapeUpgrade_ConvertCurve3dToBezier.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_SplitSurfaceContinuity.hxx>
#include <ShapeUpgrade_SplitSurfaceAngle.hxx>
#include <ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx>
#include <ShapeUpgrade_SplitSurfaceArea.hxx>
#include <ShapeUpgrade_ShellSewing.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <ShapeUpgrade_FixSmallBezierCurves.hxx>
#include <ShapeUpgrade_RemoveLocations.hxx>
#include <ShapeUpgrade_RemoveInternalWires.hxx>
#include <ShapeUpgrade_UnifySameDomain.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <Message_Msg.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <Message_Msg.hxx>

// module includes
#include <ShapeUpgrade.hxx>
#include <ShapeUpgrade_ClosedEdgeDivide.hxx>
#include <ShapeUpgrade_ClosedFaceDivide.hxx>
#include <ShapeUpgrade_ConvertCurve2dToBezier.hxx>
#include <ShapeUpgrade_ConvertCurve3dToBezier.hxx>
#include <ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeUpgrade_FaceDivideArea.hxx>
#include <ShapeUpgrade_FixSmallBezierCurves.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <ShapeUpgrade_RemoveInternalWires.hxx>
#include <ShapeUpgrade_RemoveLocations.hxx>
#include <ShapeUpgrade_ShapeConvertToBezier.hxx>
#include <ShapeUpgrade_ShapeDivide.hxx>
#include <ShapeUpgrade_ShapeDivideAngle.hxx>
#include <ShapeUpgrade_ShapeDivideArea.hxx>
#include <ShapeUpgrade_ShapeDivideClosed.hxx>
#include <ShapeUpgrade_ShapeDivideClosedEdges.hxx>
#include <ShapeUpgrade_ShapeDivideContinuity.hxx>
#include <ShapeUpgrade_ShellSewing.hxx>
#include <ShapeUpgrade_SplitCurve.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_SplitCurve2dContinuity.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve3dContinuity.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_SplitSurfaceAngle.hxx>
#include <ShapeUpgrade_SplitSurfaceArea.hxx>
#include <ShapeUpgrade_SplitSurfaceContinuity.hxx>
#include <ShapeUpgrade_Tool.hxx>
#include <ShapeUpgrade_UnifySameDomain.hxx>
#include <ShapeUpgrade_WireDivide.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeUpgrade(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("ShapeUpgrade"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<ShapeUpgrade , shared_ptr<ShapeUpgrade>>(m,"ShapeUpgrade");

    static_cast<py::class_<ShapeUpgrade , shared_ptr<ShapeUpgrade> >>(m.attr("ShapeUpgrade"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_RemoveLocations ,opencascade::handle<ShapeUpgrade_RemoveLocations> , Standard_Transient>>(m.attr("ShapeUpgrade_RemoveLocations"))
    // constructors
    // custom constructors
    // methods
        .def("GetResult",
             (TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)() const) static_cast<TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)() const>(&ShapeUpgrade_RemoveLocations::GetResult),
             R"#(Returns shape with removed locatins.)#" )
        .def("SetRemoveLevel",
             (void (ShapeUpgrade_RemoveLocations::*)( const TopAbs_ShapeEnum ) ) static_cast<void (ShapeUpgrade_RemoveLocations::*)( const TopAbs_ShapeEnum ) >(&ShapeUpgrade_RemoveLocations::SetRemoveLevel),
             R"#(sets level starting with that location will be removed, by default TopAbs_SHAPE. In this case locations will be kept for specified shape and if specified shape is TopAbs_COMPOUND for sub-shapes of first level.)#"  , py::arg("theLevel"))
        .def("RemoveLevel",
             (TopAbs_ShapeEnum (ShapeUpgrade_RemoveLocations::*)() const) static_cast<TopAbs_ShapeEnum (ShapeUpgrade_RemoveLocations::*)() const>(&ShapeUpgrade_RemoveLocations::RemoveLevel),
             R"#(sets level starting with that location will be removed.Value of level can be set to TopAbs_SHAPE,TopAbs_COMPOUND,TopAbs_SOLID,TopAbs_SHELL,TopAbs_FACE.By default TopAbs_SHAPE. In this case location will be removed for all shape types for exception of compound.)#" )
        .def("ModifiedShape",
             (TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)( const TopoDS_Shape & ) const>(&ShapeUpgrade_RemoveLocations::ModifiedShape),
             R"#(Returns modified shape obtained from initial shape.)#"  , py::arg("theInitShape"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_RemoveLocations::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_RemoveLocations::*)() const>(&ShapeUpgrade_RemoveLocations::DynamicType),
             R"#(None)#" )
        .def("GetResult",
             (TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)() const) static_cast<TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)() const>(&ShapeUpgrade_RemoveLocations::GetResult),
             R"#(Returns shape with removed locatins.)#" )
        .def("SetRemoveLevel",
             (void (ShapeUpgrade_RemoveLocations::*)( const TopAbs_ShapeEnum ) ) static_cast<void (ShapeUpgrade_RemoveLocations::*)( const TopAbs_ShapeEnum ) >(&ShapeUpgrade_RemoveLocations::SetRemoveLevel),
             R"#(sets level starting with that location will be removed, by default TopAbs_SHAPE. In this case locations will be kept for specified shape and if specified shape is TopAbs_COMPOUND for sub-shapes of first level.)#"  , py::arg("theLevel"))
        .def("RemoveLevel",
             (TopAbs_ShapeEnum (ShapeUpgrade_RemoveLocations::*)() const) static_cast<TopAbs_ShapeEnum (ShapeUpgrade_RemoveLocations::*)() const>(&ShapeUpgrade_RemoveLocations::RemoveLevel),
             R"#(sets level starting with that location will be removed.Value of level can be set to TopAbs_SHAPE,TopAbs_COMPOUND,TopAbs_SOLID,TopAbs_SHELL,TopAbs_FACE.By default TopAbs_SHAPE. In this case location will be removed for all shape types for exception of compound.)#" )
        .def("ModifiedShape",
             (TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)( const TopoDS_Shape & ) const) static_cast<TopoDS_Shape (ShapeUpgrade_RemoveLocations::*)( const TopoDS_Shape & ) const>(&ShapeUpgrade_RemoveLocations::ModifiedShape),
             R"#(Returns modified shape obtained from initial shape.)#"  , py::arg("theInitShape"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_RemoveLocations::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShapeDivide , shared_ptr<ShapeUpgrade_ShapeDivide> >>(m.attr("ShapeUpgrade_ShapeDivide"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (ShapeUpgrade_ShapeDivide::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeUpgrade_ShapeDivide::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeDivide::Perform),
             R"#(Performs splitting and computes the resulting shape If newContext is True (default), the internal context will be cleared at start, else previous substitutions will be acting.)#"  , py::arg("newContext")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetMsgRegistrator",
             (void (ShapeUpgrade_ShapeDivide::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) ) static_cast<void (ShapeUpgrade_ShapeDivide::*)( const opencascade::handle<ShapeExtend_BasicMsgRegistrator> & ) >(&ShapeUpgrade_ShapeDivide::SetMsgRegistrator),
             R"#(Sets message registrator)#"  , py::arg("msgreg"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShellSewing , shared_ptr<ShapeUpgrade_ShellSewing> >>(m.attr("ShapeUpgrade_ShellSewing"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitCurve ,opencascade::handle<ShapeUpgrade_SplitCurve> , Standard_Transient>>(m.attr("ShapeUpgrade_SplitCurve"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (ShapeUpgrade_SplitCurve::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitCurve::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitCurve::Build),
             R"#(If Segment is True, the result is composed with segments of the curve bounded by the SplitValues. If Segment is False, the result is composed with trimmed Curves all based on the same complete curve.)#"  , py::arg("Segment"))
        .def("Compute",
             (void (ShapeUpgrade_SplitCurve::*)() ) static_cast<void (ShapeUpgrade_SplitCurve::*)() >(&ShapeUpgrade_SplitCurve::Compute),
             R"#(Calculates points for correction/splitting of the curve)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve::*)() const>(&ShapeUpgrade_SplitCurve::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitCurve::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitSurface ,opencascade::handle<ShapeUpgrade_SplitSurface> , Standard_Transient>>(m.attr("ShapeUpgrade_SplitSurface"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (ShapeUpgrade_SplitSurface::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitSurface::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitSurface::Build),
             R"#(Performs splitting of the supporting surface. If resulting surface is B-Spline and Segment is True, the result is composed with segments of the surface bounded by the U and V SplitValues (method Geom_BSplineSurface::Segment is used). If Segment is False, the result is composed with Geom_RectangularTrimmedSurface all based on the same complete surface. Fields myNbResultingRow and myNbResultingCol must be set to specify the size of resulting grid of surfaces.)#"  , py::arg("Segment"))
        .def("Compute",
             (void (ShapeUpgrade_SplitSurface::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitSurface::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitSurface::Compute),
             R"#(Calculates points for correction/splitting of the surface.)#"  , py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurface::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurface::*)() const>(&ShapeUpgrade_SplitSurface::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitSurface::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_Tool ,opencascade::handle<ShapeUpgrade_Tool> , Standard_Transient>>(m.attr("ShapeUpgrade_Tool"))
    // constructors
    // custom constructors
    // methods
        .def("SetContext",
             (void (ShapeUpgrade_Tool::*)( const opencascade::handle<ShapeBuild_ReShape> & ) ) static_cast<void (ShapeUpgrade_Tool::*)( const opencascade::handle<ShapeBuild_ReShape> & ) >(&ShapeUpgrade_Tool::SetContext),
             R"#(Sets context)#"  , py::arg("context"))
        .def("Context",
             (opencascade::handle<ShapeBuild_ReShape> (ShapeUpgrade_Tool::*)() const) static_cast<opencascade::handle<ShapeBuild_ReShape> (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::Context),
             R"#(Returns context)#" )
        .def("SetPrecision",
             (void (ShapeUpgrade_Tool::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_Tool::*)( const Standard_Real ) >(&ShapeUpgrade_Tool::SetPrecision),
             R"#(Sets basic precision value)#"  , py::arg("preci"))
        .def("Precision",
             (Standard_Real (ShapeUpgrade_Tool::*)() const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::Precision),
             R"#(Returns basic precision value)#" )
        .def("SetMinTolerance",
             (void (ShapeUpgrade_Tool::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_Tool::*)( const Standard_Real ) >(&ShapeUpgrade_Tool::SetMinTolerance),
             R"#(Sets minimal allowed tolerance)#"  , py::arg("mintol"))
        .def("MinTolerance",
             (Standard_Real (ShapeUpgrade_Tool::*)() const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::MinTolerance),
             R"#(Returns minimal allowed tolerance)#" )
        .def("SetMaxTolerance",
             (void (ShapeUpgrade_Tool::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_Tool::*)( const Standard_Real ) >(&ShapeUpgrade_Tool::SetMaxTolerance),
             R"#(Sets maximal allowed tolerance)#"  , py::arg("maxtol"))
        .def("MaxTolerance",
             (Standard_Real (ShapeUpgrade_Tool::*)() const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::MaxTolerance),
             R"#(Returns maximal allowed tolerance)#" )
        .def("LimitTolerance",
             (Standard_Real (ShapeUpgrade_Tool::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)( const Standard_Real ) const>(&ShapeUpgrade_Tool::LimitTolerance),
             R"#(Returns tolerance limited by [myMinTol,myMaxTol])#"  , py::arg("toler"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_Tool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::DynamicType),
             R"#(None)#" )
        .def("SetContext",
             (void (ShapeUpgrade_Tool::*)( const opencascade::handle<ShapeBuild_ReShape> & ) ) static_cast<void (ShapeUpgrade_Tool::*)( const opencascade::handle<ShapeBuild_ReShape> & ) >(&ShapeUpgrade_Tool::SetContext),
             R"#(Sets context)#"  , py::arg("context"))
        .def("Context",
             (opencascade::handle<ShapeBuild_ReShape> (ShapeUpgrade_Tool::*)() const) static_cast<opencascade::handle<ShapeBuild_ReShape> (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::Context),
             R"#(Returns context)#" )
        .def("SetPrecision",
             (void (ShapeUpgrade_Tool::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_Tool::*)( const Standard_Real ) >(&ShapeUpgrade_Tool::SetPrecision),
             R"#(Sets basic precision value)#"  , py::arg("preci"))
        .def("Precision",
             (Standard_Real (ShapeUpgrade_Tool::*)() const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::Precision),
             R"#(Returns basic precision value)#" )
        .def("SetMinTolerance",
             (void (ShapeUpgrade_Tool::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_Tool::*)( const Standard_Real ) >(&ShapeUpgrade_Tool::SetMinTolerance),
             R"#(Sets minimal allowed tolerance)#"  , py::arg("mintol"))
        .def("MinTolerance",
             (Standard_Real (ShapeUpgrade_Tool::*)() const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::MinTolerance),
             R"#(Returns minimal allowed tolerance)#" )
        .def("SetMaxTolerance",
             (void (ShapeUpgrade_Tool::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_Tool::*)( const Standard_Real ) >(&ShapeUpgrade_Tool::SetMaxTolerance),
             R"#(Sets maximal allowed tolerance)#"  , py::arg("maxtol"))
        .def("MaxTolerance",
             (Standard_Real (ShapeUpgrade_Tool::*)() const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)() const>(&ShapeUpgrade_Tool::MaxTolerance),
             R"#(Returns maximal allowed tolerance)#" )
        .def("LimitTolerance",
             (Standard_Real (ShapeUpgrade_Tool::*)( const Standard_Real ) const) static_cast<Standard_Real (ShapeUpgrade_Tool::*)( const Standard_Real ) const>(&ShapeUpgrade_Tool::LimitTolerance),
             R"#(Returns tolerance limited by [myMinTol,myMaxTol])#"  , py::arg("toler"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_Tool::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_UnifySameDomain ,opencascade::handle<ShapeUpgrade_UnifySameDomain> , Standard_Transient>>(m.attr("ShapeUpgrade_UnifySameDomain"))
    // constructors
    // custom constructors
    // methods
        .def("SetLinearTolerance",
             (void (ShapeUpgrade_UnifySameDomain::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_UnifySameDomain::*)( const Standard_Real ) >(&ShapeUpgrade_UnifySameDomain::SetLinearTolerance),
             R"#(Sets the linear tolerance. It plays the role of chord error when taking decision about merging of shapes. Default value is Precision::Confusion().)#"  , py::arg("theValue"))
        .def("SetAngularTolerance",
             (void (ShapeUpgrade_UnifySameDomain::*)( const Standard_Real ) ) static_cast<void (ShapeUpgrade_UnifySameDomain::*)( const Standard_Real ) >(&ShapeUpgrade_UnifySameDomain::SetAngularTolerance),
             R"#(Sets the angular tolerance. If two shapes form a connection angle greater than this value they will not be merged. Default value is Precision::Angular().)#"  , py::arg("theValue"))
        .def("Shape",
             (const TopoDS_Shape & (ShapeUpgrade_UnifySameDomain::*)() const) static_cast<const TopoDS_Shape & (ShapeUpgrade_UnifySameDomain::*)() const>(&ShapeUpgrade_UnifySameDomain::Shape),
             R"#(Gives the resulting shape)#" )
        .def("History",
             (const opencascade::handle<BRepTools_History> & (ShapeUpgrade_UnifySameDomain::*)() const) static_cast<const opencascade::handle<BRepTools_History> & (ShapeUpgrade_UnifySameDomain::*)() const>(&ShapeUpgrade_UnifySameDomain::History),
             R"#(Returns the history of the processed shapes.)#" )
        .def("History",
             (opencascade::handle<BRepTools_History> & (ShapeUpgrade_UnifySameDomain::*)() ) static_cast<opencascade::handle<BRepTools_History> & (ShapeUpgrade_UnifySameDomain::*)() >(&ShapeUpgrade_UnifySameDomain::History),
             R"#(Returns the history of the processed shapes.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_UnifySameDomain::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_UnifySameDomain::*)() const>(&ShapeUpgrade_UnifySameDomain::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_UnifySameDomain::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ConvertSurfaceToBezierBasis ,opencascade::handle<ShapeUpgrade_ConvertSurfaceToBezierBasis> , ShapeUpgrade_SplitSurface>>(m.attr("ShapeUpgrade_ConvertSurfaceToBezierBasis"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::Build),
             R"#(Splits a list of beziers computed by Compute method according the split values and splitting parameters.)#"  , py::arg("Segment"))
        .def("Compute",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::Compute),
             R"#(Converts surface into a grid of bezier based surfaces, and stores this grid.)#"  , py::arg("Segment"))
        .def("SetPlaneMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetPlaneMode),
             R"#(Sets mode for conversion Geom_Plane to Bezier)#"  , py::arg("mode"))
        .def("GetPlaneMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetPlaneMode),
             R"#(Returns the Geom_Pline conversion mode.)#" )
        .def("SetRevolutionMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetRevolutionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfRevolution to Bezier)#"  , py::arg("mode"))
        .def("GetRevolutionMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetRevolutionMode),
             R"#(Returns the Geom_SurfaceOfRevolution conversion mode.)#" )
        .def("SetExtrusionMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetExtrusionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier)#"  , py::arg("mode"))
        .def("GetExtrusionMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetExtrusionMode),
             R"#(Returns the Geom_SurfaceOfLinearExtrusion conversion mode.)#" )
        .def("SetBSplineMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetBSplineMode),
             R"#(Sets mode for conversion Geom_BSplineSurface to Bezier)#"  , py::arg("mode"))
        .def("GetBSplineMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetBSplineMode),
             R"#(Returns the Geom_BSplineSurface conversion mode.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::DynamicType),
             R"#(None)#" )
        .def("SetPlaneMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetPlaneMode),
             R"#(Sets mode for conversion Geom_Plane to Bezier)#"  , py::arg("mode"))
        .def("GetPlaneMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetPlaneMode),
             R"#(Returns the Geom_Pline conversion mode.)#" )
        .def("SetRevolutionMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetRevolutionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfRevolution to Bezier)#"  , py::arg("mode"))
        .def("GetRevolutionMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetRevolutionMode),
             R"#(Returns the Geom_SurfaceOfRevolution conversion mode.)#" )
        .def("SetExtrusionMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetExtrusionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier)#"  , py::arg("mode"))
        .def("GetExtrusionMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetExtrusionMode),
             R"#(Returns the Geom_SurfaceOfLinearExtrusion conversion mode.)#" )
        .def("SetBSplineMode",
             (void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::SetBSplineMode),
             R"#(Sets mode for conversion Geom_BSplineSurface to Bezier)#"  , py::arg("mode"))
        .def("GetBSplineMode",
             (Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertSurfaceToBezierBasis::*)() const>(&ShapeUpgrade_ConvertSurfaceToBezierBasis::GetBSplineMode),
             R"#(Returns the Geom_BSplineSurface conversion mode.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_ConvertSurfaceToBezierBasis::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_EdgeDivide ,opencascade::handle<ShapeUpgrade_EdgeDivide> , ShapeUpgrade_Tool>>(m.attr("ShapeUpgrade_EdgeDivide"))
    // constructors
    // custom constructors
    // methods
        .def("SetFace",
             (void (ShapeUpgrade_EdgeDivide::*)( const TopoDS_Face & ) ) static_cast<void (ShapeUpgrade_EdgeDivide::*)( const TopoDS_Face & ) >(&ShapeUpgrade_EdgeDivide::SetFace),
             R"#(Sets supporting surface by face)#"  , py::arg("F"))
        .def("Compute",
             (Standard_Boolean (ShapeUpgrade_EdgeDivide::*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (ShapeUpgrade_EdgeDivide::*)( const TopoDS_Edge & ) >(&ShapeUpgrade_EdgeDivide::Compute),
             R"#(None)#"  , py::arg("E"))
        .def("HasCurve2d",
             (Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::HasCurve2d),
             R"#(None)#" )
        .def("HasCurve3d",
             (Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::HasCurve3d),
             R"#(None)#" )
        .def("Knots2d",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::Knots2d),
             R"#(None)#" )
        .def("Knots3d",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::Knots3d),
             R"#(None)#" )
        .def("GetSplitCurve2dTool",
             (opencascade::handle<ShapeUpgrade_SplitCurve2d> (ShapeUpgrade_EdgeDivide::*)() const) static_cast<opencascade::handle<ShapeUpgrade_SplitCurve2d> (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::GetSplitCurve2dTool),
             R"#(Returns the tool for splitting pcurves.)#" )
        .def("GetSplitCurve3dTool",
             (opencascade::handle<ShapeUpgrade_SplitCurve3d> (ShapeUpgrade_EdgeDivide::*)() const) static_cast<opencascade::handle<ShapeUpgrade_SplitCurve3d> (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::GetSplitCurve3dTool),
             R"#(Returns the tool for splitting 3D curves.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_EdgeDivide::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::DynamicType),
             R"#(None)#" )
        .def("SetFace",
             (void (ShapeUpgrade_EdgeDivide::*)( const TopoDS_Face & ) ) static_cast<void (ShapeUpgrade_EdgeDivide::*)( const TopoDS_Face & ) >(&ShapeUpgrade_EdgeDivide::SetFace),
             R"#(Sets supporting surface by face)#"  , py::arg("F"))
        .def("HasCurve2d",
             (Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::HasCurve2d),
             R"#(None)#" )
        .def("HasCurve3d",
             (Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::HasCurve3d),
             R"#(None)#" )
        .def("Knots2d",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::Knots2d),
             R"#(None)#" )
        .def("Knots3d",
             (opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const) static_cast<opencascade::handle<TColStd_HSequenceOfReal> (ShapeUpgrade_EdgeDivide::*)() const>(&ShapeUpgrade_EdgeDivide::Knots3d),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_EdgeDivide::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_FaceDivide ,opencascade::handle<ShapeUpgrade_FaceDivide> , ShapeUpgrade_Tool>>(m.attr("ShapeUpgrade_FaceDivide"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (ShapeUpgrade_FaceDivide::*)() ) static_cast<Standard_Boolean (ShapeUpgrade_FaceDivide::*)() >(&ShapeUpgrade_FaceDivide::Perform),
             R"#(Performs splitting and computes the resulting shell The context is used to keep track of former splittings in order to keep sharings. It is updated according to modifications made.)#" )
        .def("SplitSurface",
             (Standard_Boolean (ShapeUpgrade_FaceDivide::*)() ) static_cast<Standard_Boolean (ShapeUpgrade_FaceDivide::*)() >(&ShapeUpgrade_FaceDivide::SplitSurface),
             R"#(Performs splitting of surface and computes the shell from source face.)#" )
        .def("SplitCurves",
             (Standard_Boolean (ShapeUpgrade_FaceDivide::*)() ) static_cast<Standard_Boolean (ShapeUpgrade_FaceDivide::*)() >(&ShapeUpgrade_FaceDivide::SplitCurves),
             R"#(Performs splitting of curves of all the edges in the shape and divides these edges.)#" )
        .def("GetSplitSurfaceTool",
             (opencascade::handle<ShapeUpgrade_SplitSurface> (ShapeUpgrade_FaceDivide::*)() const) static_cast<opencascade::handle<ShapeUpgrade_SplitSurface> (ShapeUpgrade_FaceDivide::*)() const>(&ShapeUpgrade_FaceDivide::GetSplitSurfaceTool),
             R"#(Returns the tool for splitting surfaces. This tool must be already initialized.)#" )
        .def("GetWireDivideTool",
             (opencascade::handle<ShapeUpgrade_WireDivide> (ShapeUpgrade_FaceDivide::*)() const) static_cast<opencascade::handle<ShapeUpgrade_WireDivide> (ShapeUpgrade_FaceDivide::*)() const>(&ShapeUpgrade_FaceDivide::GetWireDivideTool),
             R"#(Returns the tool for dividing edges on Face. This tool must be already initialized.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_FaceDivide::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_FaceDivide::*)() const>(&ShapeUpgrade_FaceDivide::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_FaceDivide::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_FixSmallCurves ,opencascade::handle<ShapeUpgrade_FixSmallCurves> , ShapeUpgrade_Tool>>(m.attr("ShapeUpgrade_FixSmallCurves"))
    // constructors
    // custom constructors
    // methods
        .def("Approx",
             (Standard_Boolean (ShapeUpgrade_FixSmallCurves::*)( opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeUpgrade_FixSmallCurves::*)( opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & ) >(&ShapeUpgrade_FixSmallCurves::Approx),
             R"#(None)#"  , py::arg("Curve3d"),  py::arg("Curve2d"),  py::arg("Curve2dR"),  py::arg("First"),  py::arg("Last"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_FixSmallCurves::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_FixSmallCurves::*)() const>(&ShapeUpgrade_FixSmallCurves::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_FixSmallCurves::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_RemoveInternalWires ,opencascade::handle<ShapeUpgrade_RemoveInternalWires> , ShapeUpgrade_Tool>>(m.attr("ShapeUpgrade_RemoveInternalWires"))
    // constructors
    // custom constructors
    // methods
        .def("GetResult",
             (TopoDS_Shape (ShapeUpgrade_RemoveInternalWires::*)() const) static_cast<TopoDS_Shape (ShapeUpgrade_RemoveInternalWires::*)() const>(&ShapeUpgrade_RemoveInternalWires::GetResult),
             R"#(Get result shape)#" )
        .def("MinArea",
             (Standard_Real & (ShapeUpgrade_RemoveInternalWires::*)() ) static_cast<Standard_Real & (ShapeUpgrade_RemoveInternalWires::*)() >(&ShapeUpgrade_RemoveInternalWires::MinArea),
             R"#(Set min area allowed for holes( all holes having area less than mi area will be removed))#" )
        .def("RemoveFaceMode",
             (Standard_Boolean & (ShapeUpgrade_RemoveInternalWires::*)() ) static_cast<Standard_Boolean & (ShapeUpgrade_RemoveInternalWires::*)() >(&ShapeUpgrade_RemoveInternalWires::RemoveFaceMode),
             R"#(Set mode which manage removing faces which have outer wires consisting only from edges belonginig to removed internal wires. By default it is equal to true.)#" )
        .def("RemovedFaces",
             (const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const) static_cast<const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const>(&ShapeUpgrade_RemoveInternalWires::RemovedFaces),
             R"#(Returns sequence of removed faces.)#" )
        .def("RemovedWires",
             (const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const) static_cast<const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const>(&ShapeUpgrade_RemoveInternalWires::RemovedWires),
             R"#(Returns sequence of removed faces.)#" )
        .def("Status",
             (Standard_Boolean (ShapeUpgrade_RemoveInternalWires::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeUpgrade_RemoveInternalWires::*)( const ShapeExtend_Status ) const>(&ShapeUpgrade_RemoveInternalWires::Status),
             R"#(Queries status of last call to Perform() : OK - nothing was done :DONE1 - internal wires were removed :DONE2 - small faces were removed. :FAIL1 - initial shape is not specified :FAIL2 - specified sub-shape is not belonged to inotial shape.)#"  , py::arg("theStatus"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_RemoveInternalWires::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_RemoveInternalWires::*)() const>(&ShapeUpgrade_RemoveInternalWires::DynamicType),
             R"#(None)#" )
        .def("MinArea",
             (Standard_Real & (ShapeUpgrade_RemoveInternalWires::*)() ) static_cast<Standard_Real & (ShapeUpgrade_RemoveInternalWires::*)() >(&ShapeUpgrade_RemoveInternalWires::MinArea),
             R"#(Set min area allowed for holes( all holes having area less than mi area will be removed))#" )
        .def("RemoveFaceMode",
             (Standard_Boolean & (ShapeUpgrade_RemoveInternalWires::*)() ) static_cast<Standard_Boolean & (ShapeUpgrade_RemoveInternalWires::*)() >(&ShapeUpgrade_RemoveInternalWires::RemoveFaceMode),
             R"#(Set mode which manage removing faces which have outer wires consisting only from edges belonginig to removed internal wires. By default it is equal to true.)#" )
        .def("RemovedFaces",
             (const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const) static_cast<const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const>(&ShapeUpgrade_RemoveInternalWires::RemovedFaces),
             R"#(Returns sequence of removed faces.)#" )
        .def("RemovedWires",
             (const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const) static_cast<const TopTools_SequenceOfShape & (ShapeUpgrade_RemoveInternalWires::*)() const>(&ShapeUpgrade_RemoveInternalWires::RemovedWires),
             R"#(Returns sequence of removed faces.)#" )
        .def("GetResult",
             (TopoDS_Shape (ShapeUpgrade_RemoveInternalWires::*)() const) static_cast<TopoDS_Shape (ShapeUpgrade_RemoveInternalWires::*)() const>(&ShapeUpgrade_RemoveInternalWires::GetResult),
             R"#(Get result shape)#" )
        .def("Status",
             (Standard_Boolean (ShapeUpgrade_RemoveInternalWires::*)( const ShapeExtend_Status ) const) static_cast<Standard_Boolean (ShapeUpgrade_RemoveInternalWires::*)( const ShapeExtend_Status ) const>(&ShapeUpgrade_RemoveInternalWires::Status),
             R"#(Queries status of last call to Perform() : OK - nothing was done :DONE1 - internal wires were removed :DONE2 - small faces were removed. :FAIL1 - initial shape is not specified :FAIL2 - specified sub-shape is not belonged to inotial shape.)#"  , py::arg("theStatus"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_RemoveInternalWires::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShapeConvertToBezier , shared_ptr<ShapeUpgrade_ShapeConvertToBezier> , ShapeUpgrade_ShapeDivide>>(m.attr("ShapeUpgrade_ShapeConvertToBezier"))
    // constructors
    // custom constructors
    // methods
        .def("Set2dConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set2dConversion),
             R"#(Sets mode for conversion 2D curves to bezier.)#"  , py::arg("mode"))
        .def("Get2dConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get2dConversion),
             R"#(Returns the 2D conversion mode.)#" )
        .def("Set3dConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dConversion),
             R"#(Sets mode for conversion 3d curves to bezier.)#"  , py::arg("mode"))
        .def("Get3dConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dConversion),
             R"#(Returns the 3D conversion mode.)#" )
        .def("SetSurfaceConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetSurfaceConversion),
             R"#(Sets mode for conversion surfaces curves to bezier basis.)#"  , py::arg("mode"))
        .def("GetSurfaceConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetSurfaceConversion),
             R"#(Returns the surface conversion mode.)#" )
        .def("Set3dLineConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dLineConversion),
             R"#(Sets mode for conversion Geom_Line to bezier.)#"  , py::arg("mode"))
        .def("Get3dLineConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dLineConversion),
             R"#(Returns the Geom_Line conversion mode.)#" )
        .def("Set3dCircleConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dCircleConversion),
             R"#(Sets mode for conversion Geom_Circle to bezier.)#"  , py::arg("mode"))
        .def("Get3dCircleConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dCircleConversion),
             R"#(Returns the Geom_Circle conversion mode.)#" )
        .def("Set3dConicConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dConicConversion),
             R"#(Sets mode for conversion Geom_Conic to bezier.)#"  , py::arg("mode"))
        .def("Get3dConicConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dConicConversion),
             R"#(Returns the Geom_Conic conversion mode.)#" )
        .def("SetPlaneMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetPlaneMode),
             R"#(Sets mode for conversion Geom_Plane to Bezier)#"  , py::arg("mode"))
        .def("GetPlaneMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetPlaneMode),
             R"#(Returns the Geom_Pline conversion mode.)#" )
        .def("SetRevolutionMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetRevolutionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfRevolution to Bezier)#"  , py::arg("mode"))
        .def("GetRevolutionMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetRevolutionMode),
             R"#(Returns the Geom_SurfaceOfRevolution conversion mode.)#" )
        .def("SetExtrusionMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetExtrusionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier)#"  , py::arg("mode"))
        .def("GetExtrusionMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetExtrusionMode),
             R"#(Returns the Geom_SurfaceOfLinearExtrusion conversion mode.)#" )
        .def("SetBSplineMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetBSplineMode),
             R"#(Sets mode for conversion Geom_BSplineSurface to Bezier)#"  , py::arg("mode"))
        .def("GetBSplineMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetBSplineMode),
             R"#(Returns the Geom_BSplineSurface conversion mode.)#" )
        .def("Perform",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Perform),
             R"#(Performs converting and computes the resulting shape)#"  , py::arg("newContext")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Set2dConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set2dConversion),
             R"#(Sets mode for conversion 2D curves to bezier.)#"  , py::arg("mode"))
        .def("Get2dConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get2dConversion),
             R"#(Returns the 2D conversion mode.)#" )
        .def("Set3dConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dConversion),
             R"#(Sets mode for conversion 3d curves to bezier.)#"  , py::arg("mode"))
        .def("Get3dConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dConversion),
             R"#(Returns the 3D conversion mode.)#" )
        .def("SetSurfaceConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetSurfaceConversion),
             R"#(Sets mode for conversion surfaces curves to bezier basis.)#"  , py::arg("mode"))
        .def("GetSurfaceConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetSurfaceConversion),
             R"#(Returns the surface conversion mode.)#" )
        .def("Set3dLineConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dLineConversion),
             R"#(Sets mode for conversion Geom_Line to bezier.)#"  , py::arg("mode"))
        .def("Get3dLineConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dLineConversion),
             R"#(Returns the Geom_Line conversion mode.)#" )
        .def("Set3dCircleConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dCircleConversion),
             R"#(Sets mode for conversion Geom_Circle to bezier.)#"  , py::arg("mode"))
        .def("Get3dCircleConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dCircleConversion),
             R"#(Returns the Geom_Circle conversion mode.)#" )
        .def("Set3dConicConversion",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::Set3dConicConversion),
             R"#(Sets mode for conversion Geom_Conic to bezier.)#"  , py::arg("mode"))
        .def("Get3dConicConversion",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::Get3dConicConversion),
             R"#(Returns the Geom_Conic conversion mode.)#" )
        .def("SetPlaneMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetPlaneMode),
             R"#(Sets mode for conversion Geom_Plane to Bezier)#"  , py::arg("mode"))
        .def("GetPlaneMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetPlaneMode),
             R"#(Returns the Geom_Pline conversion mode.)#" )
        .def("SetRevolutionMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetRevolutionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfRevolution to Bezier)#"  , py::arg("mode"))
        .def("GetRevolutionMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetRevolutionMode),
             R"#(Returns the Geom_SurfaceOfRevolution conversion mode.)#" )
        .def("SetExtrusionMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetExtrusionMode),
             R"#(Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier)#"  , py::arg("mode"))
        .def("GetExtrusionMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetExtrusionMode),
             R"#(Returns the Geom_SurfaceOfLinearExtrusion conversion mode.)#" )
        .def("SetBSplineMode",
             (void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ShapeConvertToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ShapeConvertToBezier::SetBSplineMode),
             R"#(Sets mode for conversion Geom_BSplineSurface to Bezier)#"  , py::arg("mode"))
        .def("GetBSplineMode",
             (Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ShapeConvertToBezier::*)() const>(&ShapeUpgrade_ShapeConvertToBezier::GetBSplineMode),
             R"#(Returns the Geom_BSplineSurface conversion mode.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShapeDivideAngle , shared_ptr<ShapeUpgrade_ShapeDivideAngle> , ShapeUpgrade_ShapeDivide>>(m.attr("ShapeUpgrade_ShapeDivideAngle"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShapeDivideArea , shared_ptr<ShapeUpgrade_ShapeDivideArea> , ShapeUpgrade_ShapeDivide>>(m.attr("ShapeUpgrade_ShapeDivideArea"))
    // constructors
    // custom constructors
    // methods
        .def("MaxArea",
             (Standard_Real & (ShapeUpgrade_ShapeDivideArea::*)() ) static_cast<Standard_Real & (ShapeUpgrade_ShapeDivideArea::*)() >(&ShapeUpgrade_ShapeDivideArea::MaxArea),
             R"#(Set max area allowed for faces)#" )
        .def("MaxArea",
             (Standard_Real & (ShapeUpgrade_ShapeDivideArea::*)() ) static_cast<Standard_Real & (ShapeUpgrade_ShapeDivideArea::*)() >(&ShapeUpgrade_ShapeDivideArea::MaxArea),
             R"#(Set max area allowed for faces)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShapeDivideClosed , shared_ptr<ShapeUpgrade_ShapeDivideClosed> , ShapeUpgrade_ShapeDivide>>(m.attr("ShapeUpgrade_ShapeDivideClosed"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShapeDivideClosedEdges , shared_ptr<ShapeUpgrade_ShapeDivideClosedEdges> , ShapeUpgrade_ShapeDivide>>(m.attr("ShapeUpgrade_ShapeDivideClosedEdges"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ShapeDivideContinuity , shared_ptr<ShapeUpgrade_ShapeDivideContinuity> , ShapeUpgrade_ShapeDivide>>(m.attr("ShapeUpgrade_ShapeDivideContinuity"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitCurve2d ,opencascade::handle<ShapeUpgrade_SplitCurve2d> , ShapeUpgrade_SplitCurve>>(m.attr("ShapeUpgrade_SplitCurve2d"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (ShapeUpgrade_SplitCurve2d::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitCurve2d::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitCurve2d::Build),
             R"#(If Segment is True, the result is composed with segments of the curve bounded by the SplitValues. If Segment is False, the result is composed with trimmed Curves all based on the same complete curve.)#"  , py::arg("Segment"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve2d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve2d::*)() const>(&ShapeUpgrade_SplitCurve2d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitCurve2d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitCurve3d ,opencascade::handle<ShapeUpgrade_SplitCurve3d> , ShapeUpgrade_SplitCurve>>(m.attr("ShapeUpgrade_SplitCurve3d"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (ShapeUpgrade_SplitCurve3d::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitCurve3d::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitCurve3d::Build),
             R"#(If Segment is True, the result is composed with segments of the curve bounded by the SplitValues. If Segment is False, the result is composed with trimmed Curves all based on the same complete curve.)#"  , py::arg("Segment"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve3d::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve3d::*)() const>(&ShapeUpgrade_SplitCurve3d::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitCurve3d::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitSurfaceAngle ,opencascade::handle<ShapeUpgrade_SplitSurfaceAngle> , ShapeUpgrade_SplitSurface>>(m.attr("ShapeUpgrade_SplitSurfaceAngle"))
    // constructors
    // custom constructors
    // methods
        .def("Compute",
             (void (ShapeUpgrade_SplitSurfaceAngle::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitSurfaceAngle::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitSurfaceAngle::Compute),
             R"#(Performs splitting of the supporting surface(s). First defines splitting values, then calls inherited method.)#"  , py::arg("Segment"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurfaceAngle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurfaceAngle::*)() const>(&ShapeUpgrade_SplitSurfaceAngle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitSurfaceAngle::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitSurfaceArea ,opencascade::handle<ShapeUpgrade_SplitSurfaceArea> , ShapeUpgrade_SplitSurface>>(m.attr("ShapeUpgrade_SplitSurfaceArea"))
    // constructors
    // custom constructors
    // methods
        .def("NbParts",
             (Standard_Integer & (ShapeUpgrade_SplitSurfaceArea::*)() ) static_cast<Standard_Integer & (ShapeUpgrade_SplitSurfaceArea::*)() >(&ShapeUpgrade_SplitSurfaceArea::NbParts),
             R"#(Set number of split for surfaces)#" )
        .def("Compute",
             (void (ShapeUpgrade_SplitSurfaceArea::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitSurfaceArea::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitSurfaceArea::Compute),
             R"#(None)#"  , py::arg("Segment")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurfaceArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurfaceArea::*)() const>(&ShapeUpgrade_SplitSurfaceArea::DynamicType),
             R"#(None)#" )
        .def("NbParts",
             (Standard_Integer & (ShapeUpgrade_SplitSurfaceArea::*)() ) static_cast<Standard_Integer & (ShapeUpgrade_SplitSurfaceArea::*)() >(&ShapeUpgrade_SplitSurfaceArea::NbParts),
             R"#(Set number of split for surfaces)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitSurfaceArea::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitSurfaceContinuity ,opencascade::handle<ShapeUpgrade_SplitSurfaceContinuity> , ShapeUpgrade_SplitSurface>>(m.attr("ShapeUpgrade_SplitSurfaceContinuity"))
    // constructors
    // custom constructors
    // methods
        .def("Compute",
             (void (ShapeUpgrade_SplitSurfaceContinuity::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_SplitSurfaceContinuity::*)( const Standard_Boolean ) >(&ShapeUpgrade_SplitSurfaceContinuity::Compute),
             R"#(None)#"  , py::arg("Segment"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurfaceContinuity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitSurfaceContinuity::*)() const>(&ShapeUpgrade_SplitSurfaceContinuity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitSurfaceContinuity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_WireDivide ,opencascade::handle<ShapeUpgrade_WireDivide> , ShapeUpgrade_Tool>>(m.attr("ShapeUpgrade_WireDivide"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (void (ShapeUpgrade_WireDivide::*)() ) static_cast<void (ShapeUpgrade_WireDivide::*)() >(&ShapeUpgrade_WireDivide::Perform),
             R"#(Computes the resulting wire by splitting all the edges according to splitting criteria. All the modifications made are recorded in context (ShapeBuild_ReShape). This tool is applied to all edges before splitting them in order to keep sharings. If no supporting face or surface is defined, only 3d splitting criteria are used.)#" )
        .def("GetEdgeDivideTool",
             (opencascade::handle<ShapeUpgrade_EdgeDivide> (ShapeUpgrade_WireDivide::*)() const) static_cast<opencascade::handle<ShapeUpgrade_EdgeDivide> (ShapeUpgrade_WireDivide::*)() const>(&ShapeUpgrade_WireDivide::GetEdgeDivideTool),
             R"#(returns tool for splitting edges)#" )
        .def("GetTransferParamTool",
             (opencascade::handle<ShapeAnalysis_TransferParameters> (ShapeUpgrade_WireDivide::*)() ) static_cast<opencascade::handle<ShapeAnalysis_TransferParameters> (ShapeUpgrade_WireDivide::*)() >(&ShapeUpgrade_WireDivide::GetTransferParamTool),
             R"#(Returns the tool for Transfer of parameters.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_WireDivide::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_WireDivide::*)() const>(&ShapeUpgrade_WireDivide::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_WireDivide::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ClosedEdgeDivide ,opencascade::handle<ShapeUpgrade_ClosedEdgeDivide> , ShapeUpgrade_EdgeDivide>>(m.attr("ShapeUpgrade_ClosedEdgeDivide"))
    // constructors
    // custom constructors
    // methods
        .def("Compute",
             (Standard_Boolean (ShapeUpgrade_ClosedEdgeDivide::*)( const TopoDS_Edge & ) ) static_cast<Standard_Boolean (ShapeUpgrade_ClosedEdgeDivide::*)( const TopoDS_Edge & ) >(&ShapeUpgrade_ClosedEdgeDivide::Compute),
             R"#(None)#"  , py::arg("anEdge"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_ClosedEdgeDivide::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_ClosedEdgeDivide::*)() const>(&ShapeUpgrade_ClosedEdgeDivide::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_ClosedEdgeDivide::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ClosedFaceDivide ,opencascade::handle<ShapeUpgrade_ClosedFaceDivide> , ShapeUpgrade_FaceDivide>>(m.attr("ShapeUpgrade_ClosedFaceDivide"))
    // constructors
    // custom constructors
    // methods
        .def("SplitSurface",
             (Standard_Boolean (ShapeUpgrade_ClosedFaceDivide::*)() ) static_cast<Standard_Boolean (ShapeUpgrade_ClosedFaceDivide::*)() >(&ShapeUpgrade_ClosedFaceDivide::SplitSurface),
             R"#(Performs splitting of surface and computes the shell from source face.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_ClosedFaceDivide::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_ClosedFaceDivide::*)() const>(&ShapeUpgrade_ClosedFaceDivide::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_ClosedFaceDivide::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ConvertCurve2dToBezier ,opencascade::handle<ShapeUpgrade_ConvertCurve2dToBezier> , ShapeUpgrade_SplitCurve2d>>(m.attr("ShapeUpgrade_ConvertCurve2dToBezier"))
    // constructors
    // custom constructors
    // methods
        .def("Compute",
             (void (ShapeUpgrade_ConvertCurve2dToBezier::*)() ) static_cast<void (ShapeUpgrade_ConvertCurve2dToBezier::*)() >(&ShapeUpgrade_ConvertCurve2dToBezier::Compute),
             R"#(Converts curve into a list of beziers, and stores the splitting parameters on original curve.)#" )
        .def("Build",
             (void (ShapeUpgrade_ConvertCurve2dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve2dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve2dToBezier::Build),
             R"#(Splits a list of beziers computed by Compute method according the split values and splitting parameters.)#"  , py::arg("Segment"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_ConvertCurve2dToBezier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_ConvertCurve2dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve2dToBezier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_ConvertCurve2dToBezier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_ConvertCurve3dToBezier ,opencascade::handle<ShapeUpgrade_ConvertCurve3dToBezier> , ShapeUpgrade_SplitCurve3d>>(m.attr("ShapeUpgrade_ConvertCurve3dToBezier"))
    // constructors
    // custom constructors
    // methods
        .def("SetLineMode",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve3dToBezier::SetLineMode),
             R"#(Sets mode for conversion Geom_Line to bezier.)#"  , py::arg("mode"))
        .def("GetLineMode",
             (Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve3dToBezier::GetLineMode),
             R"#(Returns the Geom_Line conversion mode.)#" )
        .def("SetCircleMode",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve3dToBezier::SetCircleMode),
             R"#(Sets mode for conversion Geom_Circle to bezier.)#"  , py::arg("mode"))
        .def("GetCircleMode",
             (Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve3dToBezier::GetCircleMode),
             R"#(Returns the Geom_Circle conversion mode.)#" )
        .def("SetConicMode",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve3dToBezier::SetConicMode),
             R"#(Returns the Geom_Conic conversion mode.)#"  , py::arg("mode"))
        .def("GetConicMode",
             (Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve3dToBezier::GetConicMode),
             R"#(Performs converting and computes the resulting shape.)#" )
        .def("Compute",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)() ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)() >(&ShapeUpgrade_ConvertCurve3dToBezier::Compute),
             R"#(Converts curve into a list of beziers, and stores the splitting parameters on original curve.)#" )
        .def("Build",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve3dToBezier::Build),
             R"#(Splits a list of beziers computed by Compute method according the split values and splitting parameters.)#"  , py::arg("Segment"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_ConvertCurve3dToBezier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_ConvertCurve3dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve3dToBezier::DynamicType),
             R"#(None)#" )
        .def("SetLineMode",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve3dToBezier::SetLineMode),
             R"#(Sets mode for conversion Geom_Line to bezier.)#"  , py::arg("mode"))
        .def("GetLineMode",
             (Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve3dToBezier::GetLineMode),
             R"#(Returns the Geom_Line conversion mode.)#" )
        .def("SetCircleMode",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve3dToBezier::SetCircleMode),
             R"#(Sets mode for conversion Geom_Circle to bezier.)#"  , py::arg("mode"))
        .def("GetCircleMode",
             (Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve3dToBezier::GetCircleMode),
             R"#(Returns the Geom_Circle conversion mode.)#" )
        .def("SetConicMode",
             (void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) ) static_cast<void (ShapeUpgrade_ConvertCurve3dToBezier::*)( const Standard_Boolean ) >(&ShapeUpgrade_ConvertCurve3dToBezier::SetConicMode),
             R"#(Returns the Geom_Conic conversion mode.)#"  , py::arg("mode"))
        .def("GetConicMode",
             (Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const) static_cast<Standard_Boolean (ShapeUpgrade_ConvertCurve3dToBezier::*)() const>(&ShapeUpgrade_ConvertCurve3dToBezier::GetConicMode),
             R"#(Performs converting and computes the resulting shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_ConvertCurve3dToBezier::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_FaceDivideArea ,opencascade::handle<ShapeUpgrade_FaceDivideArea> , ShapeUpgrade_FaceDivide>>(m.attr("ShapeUpgrade_FaceDivideArea"))
    // constructors
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (ShapeUpgrade_FaceDivideArea::*)() ) static_cast<Standard_Boolean (ShapeUpgrade_FaceDivideArea::*)() >(&ShapeUpgrade_FaceDivideArea::Perform),
             R"#(Performs splitting and computes the resulting shell The context is used to keep track of former splittings)#" )
        .def("MaxArea",
             (Standard_Real & (ShapeUpgrade_FaceDivideArea::*)() ) static_cast<Standard_Real & (ShapeUpgrade_FaceDivideArea::*)() >(&ShapeUpgrade_FaceDivideArea::MaxArea),
             R"#(Set max area allowed for faces)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_FaceDivideArea::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_FaceDivideArea::*)() const>(&ShapeUpgrade_FaceDivideArea::DynamicType),
             R"#(None)#" )
        .def("MaxArea",
             (Standard_Real & (ShapeUpgrade_FaceDivideArea::*)() ) static_cast<Standard_Real & (ShapeUpgrade_FaceDivideArea::*)() >(&ShapeUpgrade_FaceDivideArea::MaxArea),
             R"#(Set max area allowed for faces)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_FaceDivideArea::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_FixSmallBezierCurves ,opencascade::handle<ShapeUpgrade_FixSmallBezierCurves> , ShapeUpgrade_FixSmallCurves>>(m.attr("ShapeUpgrade_FixSmallBezierCurves"))
    // constructors
    // custom constructors
    // methods
        .def("Approx",
             (Standard_Boolean (ShapeUpgrade_FixSmallBezierCurves::*)( opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & ) ) static_cast<Standard_Boolean (ShapeUpgrade_FixSmallBezierCurves::*)( opencascade::handle<Geom_Curve> & , opencascade::handle<Geom2d_Curve> & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & ) >(&ShapeUpgrade_FixSmallBezierCurves::Approx),
             R"#(None)#"  , py::arg("Curve3d"),  py::arg("Curve2d"),  py::arg("Curve2dR"),  py::arg("First"),  py::arg("Last"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_FixSmallBezierCurves::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_FixSmallBezierCurves::*)() const>(&ShapeUpgrade_FixSmallBezierCurves::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_FixSmallBezierCurves::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitCurve2dContinuity ,opencascade::handle<ShapeUpgrade_SplitCurve2dContinuity> , ShapeUpgrade_SplitCurve2d>>(m.attr("ShapeUpgrade_SplitCurve2dContinuity"))
    // constructors
    // custom constructors
    // methods
        .def("Compute",
             (void (ShapeUpgrade_SplitCurve2dContinuity::*)() ) static_cast<void (ShapeUpgrade_SplitCurve2dContinuity::*)() >(&ShapeUpgrade_SplitCurve2dContinuity::Compute),
             R"#(Calculates points for correction/splitting of the curve)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve2dContinuity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve2dContinuity::*)() const>(&ShapeUpgrade_SplitCurve2dContinuity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitCurve2dContinuity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<ShapeUpgrade_SplitCurve3dContinuity ,opencascade::handle<ShapeUpgrade_SplitCurve3dContinuity> , ShapeUpgrade_SplitCurve3d>>(m.attr("ShapeUpgrade_SplitCurve3dContinuity"))
    // constructors
    // custom constructors
    // methods
        .def("Compute",
             (void (ShapeUpgrade_SplitCurve3dContinuity::*)() ) static_cast<void (ShapeUpgrade_SplitCurve3dContinuity::*)() >(&ShapeUpgrade_SplitCurve3dContinuity::Compute),
             R"#(Calculates points for correction/splitting of the curve)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve3dContinuity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (ShapeUpgrade_SplitCurve3dContinuity::*)() const>(&ShapeUpgrade_SplitCurve3dContinuity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&ShapeUpgrade_SplitCurve3dContinuity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/ShapeUpgrade_ClosedEdgeDivide.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideClosedEdges.hxx
// ./opencascade/ShapeUpgrade_SplitCurve2dContinuity.hxx
// ./opencascade/ShapeUpgrade_EdgeDivide.hxx
// ./opencascade/ShapeUpgrade_SplitCurve2d.hxx
// ./opencascade/ShapeUpgrade_FixSmallBezierCurves.hxx
// ./opencascade/ShapeUpgrade_FaceDivide.hxx
// ./opencascade/ShapeUpgrade_SplitSurface.hxx
// ./opencascade/ShapeUpgrade_FaceDivideArea.hxx
// ./opencascade/ShapeUpgrade_SplitSurfaceAngle.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideClosed.hxx
// ./opencascade/ShapeUpgrade_RemoveInternalWires.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideArea.hxx
// ./opencascade/ShapeUpgrade_ShellSewing.hxx
// ./opencascade/ShapeUpgrade_Tool.hxx
// ./opencascade/ShapeUpgrade_ConvertCurve2dToBezier.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideContinuity.hxx
// ./opencascade/ShapeUpgrade_SplitCurve.hxx
// ./opencascade/ShapeUpgrade.hxx
// ./opencascade/ShapeUpgrade_ConvertCurve3dToBezier.hxx
// ./opencascade/ShapeUpgrade_ClosedFaceDivide.hxx
// ./opencascade/ShapeUpgrade_SplitSurfaceContinuity.hxx
// ./opencascade/ShapeUpgrade_SplitCurve3dContinuity.hxx
// ./opencascade/ShapeUpgrade_ShapeDivideAngle.hxx
// ./opencascade/ShapeUpgrade_RemoveLocations.hxx
// ./opencascade/ShapeUpgrade_UnifySameDomain.hxx
// ./opencascade/ShapeUpgrade_SplitCurve3d.hxx
// ./opencascade/ShapeUpgrade_WireDivide.hxx
// ./opencascade/ShapeUpgrade_ShapeConvertToBezier.hxx
// ./opencascade/ShapeUpgrade_SplitSurfaceArea.hxx
// ./opencascade/ShapeUpgrade_FixSmallCurves.hxx
// ./opencascade/ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx
// ./opencascade/ShapeUpgrade_ShapeDivide.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
