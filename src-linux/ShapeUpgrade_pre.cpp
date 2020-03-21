
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <ShapeBuild_ReShape.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <Message_Msg.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <Message_Msg.hxx>
#include <Geom_Surface.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
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
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_WireDivide.hxx>

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
void register_ShapeUpgrade_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeUpgrade", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes

// pre-register typdefs

// classes forward declarations only
    py::class_<ShapeUpgrade , shared_ptr<ShapeUpgrade> >(m,"ShapeUpgrade",R"#(This package provides tools for splitting and converting shapes by some criteria. It provides modifications of the kind when one topological object can be converted or splitted to several ones. In particular this package contains high level API classes which perform: converting geometry of shapes up to given continuity, splitting revolutions by U to segments less than given value, converting to beziers, splitting closed faces.)#");
    py::class_<ShapeUpgrade_RemoveLocations ,opencascade::handle<ShapeUpgrade_RemoveLocations> , Standard_Transient>(m,"ShapeUpgrade_RemoveLocations",R"#(Removes all locations sub-shapes of specified shapeRemoves all locations sub-shapes of specified shapeRemoves all locations sub-shapes of specified shape)#");
    py::class_<ShapeUpgrade_ShapeDivide , shared_ptr<ShapeUpgrade_ShapeDivide> >(m,"ShapeUpgrade_ShapeDivide",R"#(Divides a all faces in shell with given criteria Shell.)#");
    py::class_<ShapeUpgrade_ShellSewing , shared_ptr<ShapeUpgrade_ShellSewing> >(m,"ShapeUpgrade_ShellSewing",R"#(This class provides a tool for applying sewing algorithm from BRepBuilderAPI: it takes a shape, calls sewing for each shell, and then replaces sewed shells with use of ShapeBuild_ReShape)#");
    py::class_<ShapeUpgrade_SplitCurve ,opencascade::handle<ShapeUpgrade_SplitCurve> , Standard_Transient>(m,"ShapeUpgrade_SplitCurve",R"#(Splits a curve with a criterion.Splits a curve with a criterion.Splits a curve with a criterion.)#");
    py::class_<ShapeUpgrade_SplitSurface ,opencascade::handle<ShapeUpgrade_SplitSurface> , Standard_Transient>(m,"ShapeUpgrade_SplitSurface",R"#(Splits a Surface with a criterion.Splits a Surface with a criterion.Splits a Surface with a criterion.)#");
    py::class_<ShapeUpgrade_Tool ,opencascade::handle<ShapeUpgrade_Tool> , Standard_Transient>(m,"ShapeUpgrade_Tool",R"#(Tool is a root class for splitting classes Provides context for recording changes, basic precision value and limit (minimal and maximal) values for tolerancesTool is a root class for splitting classes Provides context for recording changes, basic precision value and limit (minimal and maximal) values for tolerancesTool is a root class for splitting classes Provides context for recording changes, basic precision value and limit (minimal and maximal) values for tolerances)#");
    py::class_<ShapeUpgrade_UnifySameDomain ,opencascade::handle<ShapeUpgrade_UnifySameDomain> , Standard_Transient>(m,"ShapeUpgrade_UnifySameDomain",R"#(This tool tries to unify faces and edges of the shape which lie on the same geometry. Faces/edges are considering as 'same-domain' if a group of neighbouring faces/edges are lying on coincident surfaces/curves. In this case these faces/edges can be unified into one face/edge. ShapeUpgrade_UnifySameDomain is initialized by a shape and the next optional parameters: UnifyFaces - tries to unify all possible faces UnifyEdges - tries to unify all possible edges ConcatBSplines - if this flag is set to true then all neighbouring edges, which lay on BSpline or Bezier curves with C1 continuity on their common vertices, will be merged into one common edge.This tool tries to unify faces and edges of the shape which lie on the same geometry. Faces/edges are considering as 'same-domain' if a group of neighbouring faces/edges are lying on coincident surfaces/curves. In this case these faces/edges can be unified into one face/edge. ShapeUpgrade_UnifySameDomain is initialized by a shape and the next optional parameters: UnifyFaces - tries to unify all possible faces UnifyEdges - tries to unify all possible edges ConcatBSplines - if this flag is set to true then all neighbouring edges, which lay on BSpline or Bezier curves with C1 continuity on their common vertices, will be merged into one common edge.This tool tries to unify faces and edges of the shape which lie on the same geometry. Faces/edges are considering as 'same-domain' if a group of neighbouring faces/edges are lying on coincident surfaces/curves. In this case these faces/edges can be unified into one face/edge. ShapeUpgrade_UnifySameDomain is initialized by a shape and the next optional parameters: UnifyFaces - tries to unify all possible faces UnifyEdges - tries to unify all possible edges ConcatBSplines - if this flag is set to true then all neighbouring edges, which lay on BSpline or Bezier curves with C1 continuity on their common vertices, will be merged into one common edge.)#");
    py::class_<ShapeUpgrade_ConvertSurfaceToBezierBasis ,opencascade::handle<ShapeUpgrade_ConvertSurfaceToBezierBasis> , ShapeUpgrade_SplitSurface>(m,"ShapeUpgrade_ConvertSurfaceToBezierBasis",R"#(Converts a plane, bspline surface, surface of revolution, surface of extrusion, offset surface to grid of bezier basis surface ( bezier surface, surface of revolution based on bezier curve, offset surface based on any previous type).Converts a plane, bspline surface, surface of revolution, surface of extrusion, offset surface to grid of bezier basis surface ( bezier surface, surface of revolution based on bezier curve, offset surface based on any previous type).Converts a plane, bspline surface, surface of revolution, surface of extrusion, offset surface to grid of bezier basis surface ( bezier surface, surface of revolution based on bezier curve, offset surface based on any previous type).)#");
    py::class_<ShapeUpgrade_EdgeDivide ,opencascade::handle<ShapeUpgrade_EdgeDivide> , ShapeUpgrade_Tool>(m,"ShapeUpgrade_EdgeDivide",R"#()#");
    py::class_<ShapeUpgrade_FaceDivide ,opencascade::handle<ShapeUpgrade_FaceDivide> , ShapeUpgrade_Tool>(m,"ShapeUpgrade_FaceDivide",R"#(Divides a Face (both edges in the wires, by splitting curves and pcurves, and the face itself, by splitting supporting surface) according to splitting criteria. * The domain of the face to divide is defined by the PCurves of the wires on the Face.Divides a Face (both edges in the wires, by splitting curves and pcurves, and the face itself, by splitting supporting surface) according to splitting criteria. * The domain of the face to divide is defined by the PCurves of the wires on the Face.Divides a Face (both edges in the wires, by splitting curves and pcurves, and the face itself, by splitting supporting surface) according to splitting criteria. * The domain of the face to divide is defined by the PCurves of the wires on the Face.)#");
    py::class_<ShapeUpgrade_FixSmallCurves ,opencascade::handle<ShapeUpgrade_FixSmallCurves> , ShapeUpgrade_Tool>(m,"ShapeUpgrade_FixSmallCurves",R"#()#");
    py::class_<ShapeUpgrade_RemoveInternalWires ,opencascade::handle<ShapeUpgrade_RemoveInternalWires> , ShapeUpgrade_Tool>(m,"ShapeUpgrade_RemoveInternalWires",R"#(Removes all internal wires having area less than specified min areaRemoves all internal wires having area less than specified min areaRemoves all internal wires having area less than specified min area)#");
    py::class_<ShapeUpgrade_ShapeConvertToBezier , shared_ptr<ShapeUpgrade_ShapeConvertToBezier> , ShapeUpgrade_ShapeDivide>(m,"ShapeUpgrade_ShapeConvertToBezier",R"#(API class for performing conversion of 3D, 2D curves to bezier curves and surfaces to bezier based surfaces ( bezier surface, surface of revolution based on bezier curve, offset surface based on any previous type).)#");
    py::class_<ShapeUpgrade_ShapeDivideAngle , shared_ptr<ShapeUpgrade_ShapeDivideAngle> , ShapeUpgrade_ShapeDivide>(m,"ShapeUpgrade_ShapeDivideAngle",R"#(Splits all surfaces of revolution, cylindrical, toroidal, conical, spherical surfaces in the given shape so that each resulting segment covers not more than defined number of degrees (to segments less than 90).)#");
    py::class_<ShapeUpgrade_ShapeDivideArea , shared_ptr<ShapeUpgrade_ShapeDivideArea> , ShapeUpgrade_ShapeDivide>(m,"ShapeUpgrade_ShapeDivideArea",R"#(Divides faces from sprcified shape by max area criterium.)#");
    py::class_<ShapeUpgrade_ShapeDivideClosed , shared_ptr<ShapeUpgrade_ShapeDivideClosed> , ShapeUpgrade_ShapeDivide>(m,"ShapeUpgrade_ShapeDivideClosed",R"#(Divides all closed faces in the shape. Class ShapeUpgrade_ClosedFaceDivide is used as divide tool.)#");
    py::class_<ShapeUpgrade_ShapeDivideClosedEdges , shared_ptr<ShapeUpgrade_ShapeDivideClosedEdges> , ShapeUpgrade_ShapeDivide>(m,"ShapeUpgrade_ShapeDivideClosedEdges",R"#(None)#");
    py::class_<ShapeUpgrade_ShapeDivideContinuity , shared_ptr<ShapeUpgrade_ShapeDivideContinuity> , ShapeUpgrade_ShapeDivide>(m,"ShapeUpgrade_ShapeDivideContinuity",R"#(API Tool for converting shapes with C0 geometry into C1 ones)#");
    py::class_<ShapeUpgrade_SplitCurve2d ,opencascade::handle<ShapeUpgrade_SplitCurve2d> , ShapeUpgrade_SplitCurve>(m,"ShapeUpgrade_SplitCurve2d",R"#(Splits a 2d curve with a criterion.Splits a 2d curve with a criterion.Splits a 2d curve with a criterion.)#");
    py::class_<ShapeUpgrade_SplitCurve3d ,opencascade::handle<ShapeUpgrade_SplitCurve3d> , ShapeUpgrade_SplitCurve>(m,"ShapeUpgrade_SplitCurve3d",R"#(Splits a 3d curve with a criterion.Splits a 3d curve with a criterion.Splits a 3d curve with a criterion.)#");
    py::class_<ShapeUpgrade_SplitSurfaceAngle ,opencascade::handle<ShapeUpgrade_SplitSurfaceAngle> , ShapeUpgrade_SplitSurface>(m,"ShapeUpgrade_SplitSurfaceAngle",R"#(Splits a surfaces of revolution, cylindrical, toroidal, conical, spherical so that each resulting segment covers not more than defined number of degrees.Splits a surfaces of revolution, cylindrical, toroidal, conical, spherical so that each resulting segment covers not more than defined number of degrees.Splits a surfaces of revolution, cylindrical, toroidal, conical, spherical so that each resulting segment covers not more than defined number of degrees.)#");
    py::class_<ShapeUpgrade_SplitSurfaceArea ,opencascade::handle<ShapeUpgrade_SplitSurfaceArea> , ShapeUpgrade_SplitSurface>(m,"ShapeUpgrade_SplitSurfaceArea",R"#(Split surface in the parametric space in according specified number of splits on theSplit surface in the parametric space in according specified number of splits on theSplit surface in the parametric space in according specified number of splits on the)#");
    py::class_<ShapeUpgrade_SplitSurfaceContinuity ,opencascade::handle<ShapeUpgrade_SplitSurfaceContinuity> , ShapeUpgrade_SplitSurface>(m,"ShapeUpgrade_SplitSurfaceContinuity",R"#(Splits a Surface with a continuity criterion. At the present moment C1 criterion is used only. This tool works with tolerance. If C0 surface can be corrected at a knot with given tolerance then the surface is corrected, otherwise it is spltted at that knot.Splits a Surface with a continuity criterion. At the present moment C1 criterion is used only. This tool works with tolerance. If C0 surface can be corrected at a knot with given tolerance then the surface is corrected, otherwise it is spltted at that knot.Splits a Surface with a continuity criterion. At the present moment C1 criterion is used only. This tool works with tolerance. If C0 surface can be corrected at a knot with given tolerance then the surface is corrected, otherwise it is spltted at that knot.)#");
    py::class_<ShapeUpgrade_WireDivide ,opencascade::handle<ShapeUpgrade_WireDivide> , ShapeUpgrade_Tool>(m,"ShapeUpgrade_WireDivide",R"#(Divides edges in the wire lying on the face or free wires or free edges with a criterion. Splits 3D curve and pcurve(s) of the edge on the face. Other pcurves which may be associated with the edge are simply copied. If 3D curve is splitted then pcurve on the face is splitted as well, and wice-versa. Input shape is not modified. The modifications made are recorded in external context (ShapeBuild_ReShape). This tool is applied to all edges before splitting them in order to keep sharing.Divides edges in the wire lying on the face or free wires or free edges with a criterion. Splits 3D curve and pcurve(s) of the edge on the face. Other pcurves which may be associated with the edge are simply copied. If 3D curve is splitted then pcurve on the face is splitted as well, and wice-versa. Input shape is not modified. The modifications made are recorded in external context (ShapeBuild_ReShape). This tool is applied to all edges before splitting them in order to keep sharing.Divides edges in the wire lying on the face or free wires or free edges with a criterion. Splits 3D curve and pcurve(s) of the edge on the face. Other pcurves which may be associated with the edge are simply copied. If 3D curve is splitted then pcurve on the face is splitted as well, and wice-versa. Input shape is not modified. The modifications made are recorded in external context (ShapeBuild_ReShape). This tool is applied to all edges before splitting them in order to keep sharing.)#");
    py::class_<ShapeUpgrade_ClosedEdgeDivide ,opencascade::handle<ShapeUpgrade_ClosedEdgeDivide> , ShapeUpgrade_EdgeDivide>(m,"ShapeUpgrade_ClosedEdgeDivide",R"#()#");
    py::class_<ShapeUpgrade_ClosedFaceDivide ,opencascade::handle<ShapeUpgrade_ClosedFaceDivide> , ShapeUpgrade_FaceDivide>(m,"ShapeUpgrade_ClosedFaceDivide",R"#(Divides a Face with one or more seam edge to avoid closed faces. Splitting is performed by U and V direction. The number of resulting faces can be defined by user.Divides a Face with one or more seam edge to avoid closed faces. Splitting is performed by U and V direction. The number of resulting faces can be defined by user.Divides a Face with one or more seam edge to avoid closed faces. Splitting is performed by U and V direction. The number of resulting faces can be defined by user.)#");
    py::class_<ShapeUpgrade_ConvertCurve2dToBezier ,opencascade::handle<ShapeUpgrade_ConvertCurve2dToBezier> , ShapeUpgrade_SplitCurve2d>(m,"ShapeUpgrade_ConvertCurve2dToBezier",R"#(converts/splits a 2d curve to a list of beziersconverts/splits a 2d curve to a list of beziersconverts/splits a 2d curve to a list of beziers)#");
    py::class_<ShapeUpgrade_ConvertCurve3dToBezier ,opencascade::handle<ShapeUpgrade_ConvertCurve3dToBezier> , ShapeUpgrade_SplitCurve3d>(m,"ShapeUpgrade_ConvertCurve3dToBezier",R"#(converts/splits a 3d curve of any type to a list of beziersconverts/splits a 3d curve of any type to a list of beziersconverts/splits a 3d curve of any type to a list of beziers)#");
    py::class_<ShapeUpgrade_FaceDivideArea ,opencascade::handle<ShapeUpgrade_FaceDivideArea> , ShapeUpgrade_FaceDivide>(m,"ShapeUpgrade_FaceDivideArea",R"#(Divides face by max area criterium.Divides face by max area criterium.Divides face by max area criterium.)#");
    py::class_<ShapeUpgrade_FixSmallBezierCurves ,opencascade::handle<ShapeUpgrade_FixSmallBezierCurves> , ShapeUpgrade_FixSmallCurves>(m,"ShapeUpgrade_FixSmallBezierCurves",R"#()#");
    py::class_<ShapeUpgrade_SplitCurve2dContinuity ,opencascade::handle<ShapeUpgrade_SplitCurve2dContinuity> , ShapeUpgrade_SplitCurve2d>(m,"ShapeUpgrade_SplitCurve2dContinuity",R"#(Corrects/splits a 2d curve with a continuity criterion. Tolerance is used to correct the curve at a knot that respects geometrically the criterion, in order to reduce the multiplicity of the knot.Corrects/splits a 2d curve with a continuity criterion. Tolerance is used to correct the curve at a knot that respects geometrically the criterion, in order to reduce the multiplicity of the knot.Corrects/splits a 2d curve with a continuity criterion. Tolerance is used to correct the curve at a knot that respects geometrically the criterion, in order to reduce the multiplicity of the knot.)#");
    py::class_<ShapeUpgrade_SplitCurve3dContinuity ,opencascade::handle<ShapeUpgrade_SplitCurve3dContinuity> , ShapeUpgrade_SplitCurve3d>(m,"ShapeUpgrade_SplitCurve3dContinuity",R"#(Corrects/splits a 2d curve with a continuity criterion. Tolerance is used to correct the curve at a knot that respects geometrically the criterion, in order to reduce the multiplicity of the knot.Corrects/splits a 2d curve with a continuity criterion. Tolerance is used to correct the curve at a knot that respects geometrically the criterion, in order to reduce the multiplicity of the knot.Corrects/splits a 2d curve with a continuity criterion. Tolerance is used to correct the curve at a knot that respects geometrically the criterion, in order to reduce the multiplicity of the knot.)#");

};

// user-defined post-inclusion per module

// user-defined post
