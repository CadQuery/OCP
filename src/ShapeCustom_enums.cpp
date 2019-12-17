
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <Message_ProgressIndicator.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <ShapeCustom_Surface.hxx>
#include <ShapeCustom_Curve.hxx>
#include <ShapeCustom_Curve2d.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <ShapeCustom_Modification.hxx>
#include <ShapeCustom_DirectModification.hxx>
#include <ShapeCustom_TrsfModification.hxx>
#include <ShapeCustom_BSplineRestriction.hxx>
#include <ShapeCustom_ConvertToRevolution.hxx>
#include <ShapeCustom_SweptToElementary.hxx>
#include <ShapeCustom_ConvertToBSpline.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <TopLoc_Location.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom2d_Curve.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Msg.hxx>

// module includes
#include <ShapeCustom.hxx>
#include <ShapeCustom_BSplineRestriction.hxx>
#include <ShapeCustom_ConvertToBSpline.hxx>
#include <ShapeCustom_ConvertToRevolution.hxx>
#include <ShapeCustom_Curve.hxx>
#include <ShapeCustom_Curve2d.hxx>
#include <ShapeCustom_DirectModification.hxx>
#include <ShapeCustom_Modification.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <ShapeCustom_Surface.hxx>
#include <ShapeCustom_SweptToElementary.hxx>
#include <ShapeCustom_TrsfModification.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_ShapeCustom_enums(py::module &main_module) {


py::module m = main_module.def_submodule("ShapeCustom", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_ShapeCustom_Modification : public ShapeCustom_Modification{
    public:
        using ShapeCustom_Modification::ShapeCustom_Modification;
        
        // public pure virtual
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes forward declarations only
    py::class_<ShapeCustom_Curve2d ,std::unique_ptr<ShapeCustom_Curve2d>  >(m,"ShapeCustom_Curve2d",R"#(Converts curve2d to analytical form with given precision or simpify curve2d.)#");
    py::class_<ShapeCustom ,std::unique_ptr<ShapeCustom>  >(m,"ShapeCustom",R"#(This package is intended to convert geometrical objects and topological. The modifications of one geometrical object to another (one) geometrical object are provided. The supported modifications are the following: conversion of BSpline and Bezier surfaces to analytical form, conversion of indirect elementary surfaces (with left-handed coordinate systems) into direct ones, conversion of elementary surfaces to surfaces of revolution, conversion of surface of linear extrusion, revolution, offset surface to bspline, modification of parameterization, degree, number of segments of bspline surfaces, scale the shape.)#");
    py::class_<ShapeCustom_Surface ,std::unique_ptr<ShapeCustom_Surface>  >(m,"ShapeCustom_Surface",R"#(Converts a surface to the analitical form with given precision. Conversion is done only the surface is bspline of bezier and this can be approximed by some analytical surface with that precision.)#");
    py::class_<ShapeCustom_TrsfModification ,opencascade::handle<ShapeCustom_TrsfModification>  , BRepTools_TrsfModification >(m,"ShapeCustom_TrsfModification",R"#(Complements BRepTools_TrsfModification to provide reversible scaling regarding tolerances. Uses actual tolerances (attached to the shapes) not ones returned by BRep_Tool::Tolerance to work with tolerances lower than Precision::Confusion.Complements BRepTools_TrsfModification to provide reversible scaling regarding tolerances. Uses actual tolerances (attached to the shapes) not ones returned by BRep_Tool::Tolerance to work with tolerances lower than Precision::Confusion.Complements BRepTools_TrsfModification to provide reversible scaling regarding tolerances. Uses actual tolerances (attached to the shapes) not ones returned by BRep_Tool::Tolerance to work with tolerances lower than Precision::Confusion.)#");
    py::class_<ShapeCustom_Modification ,opencascade::handle<ShapeCustom_Modification> ,Py_ShapeCustom_Modification , BRepTools_Modification >(m,"ShapeCustom_Modification",R"#(A base class of Modification's from ShapeCustom. Implements message sending mechanism.A base class of Modification's from ShapeCustom. Implements message sending mechanism.A base class of Modification's from ShapeCustom. Implements message sending mechanism.)#");
    py::class_<ShapeCustom_DirectModification ,opencascade::handle<ShapeCustom_DirectModification>  , ShapeCustom_Modification >(m,"ShapeCustom_DirectModification",R"#(implements a modification for the BRepTools Modifier algortihm. Will redress indirect surfaces.implements a modification for the BRepTools Modifier algortihm. Will redress indirect surfaces.implements a modification for the BRepTools Modifier algortihm. Will redress indirect surfaces.)#");
    py::class_<ShapeCustom_ConvertToBSpline ,opencascade::handle<ShapeCustom_ConvertToBSpline>  , ShapeCustom_Modification >(m,"ShapeCustom_ConvertToBSpline",R"#(implement a modification for BRepTools Modifier algortihm. Converts Surface of Linear Exctrusion, Revolution and Offset surfaces into BSpline Surface according to flags.implement a modification for BRepTools Modifier algortihm. Converts Surface of Linear Exctrusion, Revolution and Offset surfaces into BSpline Surface according to flags.implement a modification for BRepTools Modifier algortihm. Converts Surface of Linear Exctrusion, Revolution and Offset surfaces into BSpline Surface according to flags.)#");
    py::class_<ShapeCustom_ConvertToRevolution ,opencascade::handle<ShapeCustom_ConvertToRevolution>  , ShapeCustom_Modification >(m,"ShapeCustom_ConvertToRevolution",R"#(implements a modification for the BRepTools Modifier algortihm. Converts all elementary surfaces into surfaces of revolution.implements a modification for the BRepTools Modifier algortihm. Converts all elementary surfaces into surfaces of revolution.implements a modification for the BRepTools Modifier algortihm. Converts all elementary surfaces into surfaces of revolution.)#");
    py::class_<ShapeCustom_RestrictionParameters ,opencascade::handle<ShapeCustom_RestrictionParameters>  , Standard_Transient >(m,"ShapeCustom_RestrictionParameters",R"#(This class is axuluary tool which contains parameters for BSplineRestriction class.This class is axuluary tool which contains parameters for BSplineRestriction class.This class is axuluary tool which contains parameters for BSplineRestriction class.)#");
    py::class_<ShapeCustom_SweptToElementary ,opencascade::handle<ShapeCustom_SweptToElementary>  , ShapeCustom_Modification >(m,"ShapeCustom_SweptToElementary",R"#(implements a modification for the BRepTools Modifier algortihm. Converts all elementary surfaces into surfaces of revolution.implements a modification for the BRepTools Modifier algortihm. Converts all elementary surfaces into surfaces of revolution.implements a modification for the BRepTools Modifier algortihm. Converts all elementary surfaces into surfaces of revolution.)#");
    py::class_<ShapeCustom_Curve ,std::unique_ptr<ShapeCustom_Curve>  >(m,"ShapeCustom_Curve",R"#(Converts BSpline curve to periodic)#");
    py::class_<ShapeCustom_BSplineRestriction ,opencascade::handle<ShapeCustom_BSplineRestriction>  , ShapeCustom_Modification >(m,"ShapeCustom_BSplineRestriction",R"#(this tool intended for aproximation surfaces, curves and pcurves with specified degree , max number of segments, tolerance 2d, tolerance 3d. Specified continuity can be reduced if approximation with specified continuity was not done.this tool intended for aproximation surfaces, curves and pcurves with specified degree , max number of segments, tolerance 2d, tolerance 3d. Specified continuity can be reduced if approximation with specified continuity was not done.this tool intended for aproximation surfaces, curves and pcurves with specified degree , max number of segments, tolerance 2d, tolerance 3d. Specified continuity can be reduced if approximation with specified continuity was not done.)#");

// pre-register typdefs
// ./opencascade/ShapeCustom_DirectModification.hxx
// ./opencascade/ShapeCustom_Curve2d.hxx
// ./opencascade/ShapeCustom_SweptToElementary.hxx
// ./opencascade/ShapeCustom.hxx
// ./opencascade/ShapeCustom_ConvertToBSpline.hxx
// ./opencascade/ShapeCustom_BSplineRestriction.hxx
// ./opencascade/ShapeCustom_ConvertToRevolution.hxx
// ./opencascade/ShapeCustom_Surface.hxx
// ./opencascade/ShapeCustom_Curve.hxx
// ./opencascade/ShapeCustom_TrsfModification.hxx
// ./opencascade/ShapeCustom_RestrictionParameters.hxx
// ./opencascade/ShapeCustom_Modification.hxx

};

// user-defined post-inclusion per module

// user-defined post
