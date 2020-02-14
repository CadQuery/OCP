
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <BRepCheck_Result.hxx>
#include <BRepCheck_Vertex.hxx>
#include <BRepCheck_Edge.hxx>
#include <BRepCheck_Wire.hxx>
#include <BRepCheck_Face.hxx>
#include <BRepCheck_Shell.hxx>
#include <BRepCheck_Solid.hxx>
#include <BRepCheck_Analyzer.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <Adaptor3d_HCurve.hxx>
#include <TopoDS_Edge.hxx>
#include <Standard_NullObject.hxx>

// module includes
#include <BRepCheck.hxx>
#include <BRepCheck_Analyzer.hxx>
#include <BRepCheck_DataMapIteratorOfDataMapOfShapeListOfStatus.hxx>
#include <BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx>
#include <BRepCheck_DataMapOfShapeListOfStatus.hxx>
#include <BRepCheck_DataMapOfShapeResult.hxx>
#include <BRepCheck_Edge.hxx>
#include <BRepCheck_Face.hxx>
#include <BRepCheck_ListIteratorOfListOfStatus.hxx>
#include <BRepCheck_ListOfStatus.hxx>
#include <BRepCheck_Result.hxx>
#include <BRepCheck_Shell.hxx>
#include <BRepCheck_Solid.hxx>
#include <BRepCheck_Status.hxx>
#include <BRepCheck_Vertex.hxx>
#include <BRepCheck_Wire.hxx>

// template related includes
// ./opencascade/BRepCheck_ListOfStatus.hxx
#include "NCollection.hxx"
// ./opencascade/BRepCheck_ListOfStatus.hxx
#include "NCollection.hxx"
// ./opencascade/BRepCheck_DataMapOfShapeListOfStatus.hxx
#include "NCollection.hxx"
// ./opencascade/BRepCheck_DataMapOfShapeListOfStatus.hxx
#include "NCollection.hxx"
// ./opencascade/BRepCheck_DataMapOfShapeResult.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_BRepCheck_enums(py::module &main_module) {


py::module m = main_module.def_submodule("BRepCheck", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<BRepCheck_Status>(m, "BRepCheck_Status",R"#(None)#")
        .value("BRepCheck_NoError",BRepCheck_Status::BRepCheck_NoError)
        .value("BRepCheck_InvalidPointOnCurve",BRepCheck_Status::BRepCheck_InvalidPointOnCurve)
        .value("BRepCheck_InvalidPointOnCurveOnSurface",BRepCheck_Status::BRepCheck_InvalidPointOnCurveOnSurface)
        .value("BRepCheck_InvalidPointOnSurface",BRepCheck_Status::BRepCheck_InvalidPointOnSurface)
        .value("BRepCheck_No3DCurve",BRepCheck_Status::BRepCheck_No3DCurve)
        .value("BRepCheck_Multiple3DCurve",BRepCheck_Status::BRepCheck_Multiple3DCurve)
        .value("BRepCheck_Invalid3DCurve",BRepCheck_Status::BRepCheck_Invalid3DCurve)
        .value("BRepCheck_NoCurveOnSurface",BRepCheck_Status::BRepCheck_NoCurveOnSurface)
        .value("BRepCheck_InvalidCurveOnSurface",BRepCheck_Status::BRepCheck_InvalidCurveOnSurface)
        .value("BRepCheck_InvalidCurveOnClosedSurface",BRepCheck_Status::BRepCheck_InvalidCurveOnClosedSurface)
        .value("BRepCheck_InvalidSameRangeFlag",BRepCheck_Status::BRepCheck_InvalidSameRangeFlag)
        .value("BRepCheck_InvalidSameParameterFlag",BRepCheck_Status::BRepCheck_InvalidSameParameterFlag)
        .value("BRepCheck_InvalidDegeneratedFlag",BRepCheck_Status::BRepCheck_InvalidDegeneratedFlag)
        .value("BRepCheck_FreeEdge",BRepCheck_Status::BRepCheck_FreeEdge)
        .value("BRepCheck_InvalidMultiConnexity",BRepCheck_Status::BRepCheck_InvalidMultiConnexity)
        .value("BRepCheck_InvalidRange",BRepCheck_Status::BRepCheck_InvalidRange)
        .value("BRepCheck_EmptyWire",BRepCheck_Status::BRepCheck_EmptyWire)
        .value("BRepCheck_RedundantEdge",BRepCheck_Status::BRepCheck_RedundantEdge)
        .value("BRepCheck_SelfIntersectingWire",BRepCheck_Status::BRepCheck_SelfIntersectingWire)
        .value("BRepCheck_NoSurface",BRepCheck_Status::BRepCheck_NoSurface)
        .value("BRepCheck_InvalidWire",BRepCheck_Status::BRepCheck_InvalidWire)
        .value("BRepCheck_RedundantWire",BRepCheck_Status::BRepCheck_RedundantWire)
        .value("BRepCheck_IntersectingWires",BRepCheck_Status::BRepCheck_IntersectingWires)
        .value("BRepCheck_InvalidImbricationOfWires",BRepCheck_Status::BRepCheck_InvalidImbricationOfWires)
        .value("BRepCheck_EmptyShell",BRepCheck_Status::BRepCheck_EmptyShell)
        .value("BRepCheck_RedundantFace",BRepCheck_Status::BRepCheck_RedundantFace)
        .value("BRepCheck_InvalidImbricationOfShells",BRepCheck_Status::BRepCheck_InvalidImbricationOfShells)
        .value("BRepCheck_UnorientableShape",BRepCheck_Status::BRepCheck_UnorientableShape)
        .value("BRepCheck_NotClosed",BRepCheck_Status::BRepCheck_NotClosed)
        .value("BRepCheck_NotConnected",BRepCheck_Status::BRepCheck_NotConnected)
        .value("BRepCheck_SubshapeNotInShape",BRepCheck_Status::BRepCheck_SubshapeNotInShape)
        .value("BRepCheck_BadOrientation",BRepCheck_Status::BRepCheck_BadOrientation)
        .value("BRepCheck_BadOrientationOfSubshape",BRepCheck_Status::BRepCheck_BadOrientationOfSubshape)
        .value("BRepCheck_InvalidPolygonOnTriangulation",BRepCheck_Status::BRepCheck_InvalidPolygonOnTriangulation)
        .value("BRepCheck_InvalidToleranceValue",BRepCheck_Status::BRepCheck_InvalidToleranceValue)
        .value("BRepCheck_EnclosedRegion",BRepCheck_Status::BRepCheck_EnclosedRegion)
        .value("BRepCheck_CheckFail",BRepCheck_Status::BRepCheck_CheckFail).export_values();

//Python trampoline classes
    class Py_BRepCheck_Result : public BRepCheck_Result{
    public:
        using BRepCheck_Result::BRepCheck_Result;
        
        
        // public pure virtual
        void InContext(const TopoDS_Shape & ContextShape) override { PYBIND11_OVERLOAD_PURE(void,BRepCheck_Result,InContext,ContextShape) };
        void Minimum() override { PYBIND11_OVERLOAD_PURE(void,BRepCheck_Result,Minimum,) };
        void Blind() override { PYBIND11_OVERLOAD_PURE(void,BRepCheck_Result,Blind,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_List<BRepCheck_Status>(m,"BRepCheck_ListOfStatus");  
    preregister_template_NCollection_DataMap<TopoDS_Shape, BRepCheck_ListOfStatus, TopTools_ShapeMapHasher>(m,"BRepCheck_DataMapOfShapeListOfStatus");  

// classes forward declarations only
    py::class_<BRepCheck , shared_ptr<BRepCheck>  >(m,"BRepCheck",R"#(This package provides tools to check the validity of the BRep.)#");
    py::class_<BRepCheck_Analyzer , shared_ptr<BRepCheck_Analyzer>  >(m,"BRepCheck_Analyzer",R"#(A framework to check the overall validity of a shape. For a shape to be valid in Open CASCADE, it - or its component subshapes - must respect certain criteria. These criteria are checked by the function IsValid. Once you have determined whether a shape is valid or not, you can diagnose its specific anomalies and correct them using the services of the ShapeAnalysis, ShapeUpgrade, and ShapeFix packages.)#");
    py::class_<BRepCheck_Result ,opencascade::handle<BRepCheck_Result> ,Py_BRepCheck_Result , Standard_Transient >(m,"BRepCheck_Result",R"#()#");
    py::class_<BRepCheck_Edge ,opencascade::handle<BRepCheck_Edge>  , BRepCheck_Result >(m,"BRepCheck_Edge",R"#()#");
    py::class_<BRepCheck_Face ,opencascade::handle<BRepCheck_Face>  , BRepCheck_Result >(m,"BRepCheck_Face",R"#()#");
    py::class_<BRepCheck_Shell ,opencascade::handle<BRepCheck_Shell>  , BRepCheck_Result >(m,"BRepCheck_Shell",R"#()#");
    py::class_<BRepCheck_Solid ,opencascade::handle<BRepCheck_Solid>  , BRepCheck_Result >(m,"BRepCheck_Solid",R"#(The class is to check a solid.The class is to check a solid.The class is to check a solid.)#");
    py::class_<BRepCheck_Vertex ,opencascade::handle<BRepCheck_Vertex>  , BRepCheck_Result >(m,"BRepCheck_Vertex",R"#()#");
    py::class_<BRepCheck_Wire ,opencascade::handle<BRepCheck_Wire>  , BRepCheck_Result >(m,"BRepCheck_Wire",R"#()#");

};

// user-defined post-inclusion per module

// user-defined post
