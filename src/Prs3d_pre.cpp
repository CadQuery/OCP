
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Bnd_Box.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Poly_Triangulation.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Shape.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_DimensionAspect.hxx>

// module includes
#include <Prs3d.hxx>
#include <Prs3d_Arrow.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_DatumAttribute.hxx>
#include <Prs3d_DatumAxes.hxx>
#include <Prs3d_DatumMode.hxx>
#include <Prs3d_DatumParts.hxx>
#include <Prs3d_DimensionArrowOrientation.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <Prs3d_DimensionTextHorizontalPosition.hxx>
#include <Prs3d_DimensionTextVerticalPosition.hxx>
#include <Prs3d_DimensionUnits.hxx>
#include <Prs3d_Drawer.hxx>
#include <Prs3d_InvalidAngle.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_NListIteratorOfListOfSequenceOfPnt.hxx>
#include <Prs3d_NListOfSequenceOfPnt.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_Point.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_PresentationShadow.hxx>
#include <Prs3d_Projector.hxx>
#include <Prs3d_Root.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_ShapeTool.hxx>
#include <Prs3d_Text.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ToolCylinder.hxx>
#include <Prs3d_ToolDisk.hxx>
#include <Prs3d_ToolQuadric.hxx>
#include <Prs3d_ToolSector.hxx>
#include <Prs3d_ToolSphere.hxx>
#include <Prs3d_TypeOfHighlight.hxx>
#include <Prs3d_TypeOfHLR.hxx>
#include <Prs3d_TypeOfLinePicking.hxx>
#include <Prs3d_VertexDrawMode.hxx>

// template related includes
// ./opencascade/Prs3d_NListOfSequenceOfPnt.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Graphic3d_StructureManager.hxx>

// Module definiiton
void register_Prs3d_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Prs3d", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Prs3d_DatumMode>(m, "Prs3d_DatumMode",R"#(Enumeration defining a mode of datum graphic presentation, see Prs3d_Datum.)#")
        .value("Prs3d_DM_WireFrame",Prs3d_DatumMode::Prs3d_DM_WireFrame)
        .value("Prs3d_DM_Shaded",Prs3d_DatumMode::Prs3d_DM_Shaded).export_values();
    py::enum_<Prs3d_TypeOfLinePicking>(m, "Prs3d_TypeOfLinePicking",R"#(None)#")
        .value("Prs3d_TOLP_Point",Prs3d_TypeOfLinePicking::Prs3d_TOLP_Point)
        .value("Prs3d_TOLP_Segment",Prs3d_TypeOfLinePicking::Prs3d_TOLP_Segment).export_values();
    py::enum_<Prs3d_VertexDrawMode>(m, "Prs3d_VertexDrawMode",R"#(Describes supported modes of visualization of the shape's vertices: VDM_Isolated - only isolated vertices (not belonging to a face) are displayed. VDM_All - all vertices of the shape are displayed. VDM_Inherited - the global settings are inherited and applied to the shape's presentation.)#")
        .value("Prs3d_VDM_Isolated",Prs3d_VertexDrawMode::Prs3d_VDM_Isolated)
        .value("Prs3d_VDM_All",Prs3d_VertexDrawMode::Prs3d_VDM_All)
        .value("Prs3d_VDM_Inherited",Prs3d_VertexDrawMode::Prs3d_VDM_Inherited).export_values();
    py::enum_<Prs3d_DatumAxes>(m, "Prs3d_DatumAxes",R"#(Enumeration defining an axes used in datum aspect, see Prs3d_Datum.)#")
        .value("Prs3d_DA_XAxis",Prs3d_DatumAxes::Prs3d_DA_XAxis)
        .value("Prs3d_DA_YAxis",Prs3d_DatumAxes::Prs3d_DA_YAxis)
        .value("Prs3d_DA_ZAxis",Prs3d_DatumAxes::Prs3d_DA_ZAxis)
        .value("Prs3d_DA_XYAxis",Prs3d_DatumAxes::Prs3d_DA_XYAxis)
        .value("Prs3d_DA_YZAxis",Prs3d_DatumAxes::Prs3d_DA_YZAxis)
        .value("Prs3d_DA_XZAxis",Prs3d_DatumAxes::Prs3d_DA_XZAxis)
        .value("Prs3d_DA_XYZAxis",Prs3d_DatumAxes::Prs3d_DA_XYZAxis).export_values();
    py::enum_<Prs3d_DimensionArrowOrientation>(m, "Prs3d_DimensionArrowOrientation",R"#(Specifies dimension arrow location and orientation. DAO_Internal - arrows "inside", pointing outwards. DAO_External - arrows "outside", pointing inwards. DAO_Fit - arrows oriented inside if value label with arrowtips fit the dimension line, otherwise - externally)#")
        .value("Prs3d_DAO_Internal",Prs3d_DimensionArrowOrientation::Prs3d_DAO_Internal)
        .value("Prs3d_DAO_External",Prs3d_DimensionArrowOrientation::Prs3d_DAO_External)
        .value("Prs3d_DAO_Fit",Prs3d_DimensionArrowOrientation::Prs3d_DAO_Fit).export_values();
    py::enum_<Prs3d_TypeOfHighlight>(m, "Prs3d_TypeOfHighlight",R"#(Type of highlighting to apply specific style.)#")
        .value("Prs3d_TypeOfHighlight_None",Prs3d_TypeOfHighlight::Prs3d_TypeOfHighlight_None)
        .value("Prs3d_TypeOfHighlight_Selected",Prs3d_TypeOfHighlight::Prs3d_TypeOfHighlight_Selected)
        .value("Prs3d_TypeOfHighlight_Dynamic",Prs3d_TypeOfHighlight::Prs3d_TypeOfHighlight_Dynamic)
        .value("Prs3d_TypeOfHighlight_LocalSelected",Prs3d_TypeOfHighlight::Prs3d_TypeOfHighlight_LocalSelected)
        .value("Prs3d_TypeOfHighlight_LocalDynamic",Prs3d_TypeOfHighlight::Prs3d_TypeOfHighlight_LocalDynamic)
        .value("Prs3d_TypeOfHighlight_SubIntensity",Prs3d_TypeOfHighlight::Prs3d_TypeOfHighlight_SubIntensity)
        .value("Prs3d_TypeOfHighlight_NB",Prs3d_TypeOfHighlight::Prs3d_TypeOfHighlight_NB).export_values();
    py::enum_<Prs3d_TypeOfHLR>(m, "Prs3d_TypeOfHLR",R"#(Declares types of hidden line removal algorithm. TOH_Algo enables using of exact HLR algorithm. TOH_PolyAlgo enables using of polygonal HLR algorithm. TOH_NotSet is used by Prs3d_Drawer class, it means that the drawer should return the global value. For more details see Prs3d_Drawer class, AIS_Shape::Compute() method and HLRAlgo package from TKHLR toolkit.)#")
        .value("Prs3d_TOH_NotSet",Prs3d_TypeOfHLR::Prs3d_TOH_NotSet)
        .value("Prs3d_TOH_PolyAlgo",Prs3d_TypeOfHLR::Prs3d_TOH_PolyAlgo)
        .value("Prs3d_TOH_Algo",Prs3d_TypeOfHLR::Prs3d_TOH_Algo).export_values();
    py::enum_<Prs3d_DatumAttribute>(m, "Prs3d_DatumAttribute",R"#(Enumeration defining a part of datum aspect, see Prs3d_Datum.)#")
        .value("Prs3d_DA_XAxisLength",Prs3d_DatumAttribute::Prs3d_DA_XAxisLength)
        .value("Prs3d_DA_YAxisLength",Prs3d_DatumAttribute::Prs3d_DA_YAxisLength)
        .value("Prs3d_DA_ZAxisLength",Prs3d_DatumAttribute::Prs3d_DA_ZAxisLength)
        .value("Prs3d_DP_ShadingTubeRadiusPercent",Prs3d_DatumAttribute::Prs3d_DP_ShadingTubeRadiusPercent)
        .value("Prs3d_DP_ShadingConeRadiusPercent",Prs3d_DatumAttribute::Prs3d_DP_ShadingConeRadiusPercent)
        .value("Prs3d_DP_ShadingConeLengthPercent",Prs3d_DatumAttribute::Prs3d_DP_ShadingConeLengthPercent)
        .value("Prs3d_DP_ShadingOriginRadiusPercent",Prs3d_DatumAttribute::Prs3d_DP_ShadingOriginRadiusPercent)
        .value("Prs3d_DP_ShadingNumberOfFacettes",Prs3d_DatumAttribute::Prs3d_DP_ShadingNumberOfFacettes).export_values();
    py::enum_<Prs3d_DimensionTextVerticalPosition>(m, "Prs3d_DimensionTextVerticalPosition",R"#(Specifies options for positioning dimension value label in vertical direction with respect to dimension (extension) line. DTVP_Above - text label is located above the dimension or extension line. DTVP_Below - text label is located below the dimension or extension line. DTVP_Center - the text label middle-point is in line with dimension or extension line.)#")
        .value("Prs3d_DTVP_Above",Prs3d_DimensionTextVerticalPosition::Prs3d_DTVP_Above)
        .value("Prs3d_DTVP_Below",Prs3d_DimensionTextVerticalPosition::Prs3d_DTVP_Below)
        .value("Prs3d_DTVP_Center",Prs3d_DimensionTextVerticalPosition::Prs3d_DTVP_Center).export_values();
    py::enum_<Prs3d_DatumParts>(m, "Prs3d_DatumParts",R"#(Enumeration defining a part of datum aspect, see Prs3d_Datum.)#")
        .value("Prs3d_DP_Origin",Prs3d_DatumParts::Prs3d_DP_Origin)
        .value("Prs3d_DP_XAxis",Prs3d_DatumParts::Prs3d_DP_XAxis)
        .value("Prs3d_DP_YAxis",Prs3d_DatumParts::Prs3d_DP_YAxis)
        .value("Prs3d_DP_ZAxis",Prs3d_DatumParts::Prs3d_DP_ZAxis)
        .value("Prs3d_DP_XArrow",Prs3d_DatumParts::Prs3d_DP_XArrow)
        .value("Prs3d_DP_YArrow",Prs3d_DatumParts::Prs3d_DP_YArrow)
        .value("Prs3d_DP_ZArrow",Prs3d_DatumParts::Prs3d_DP_ZArrow)
        .value("Prs3d_DP_XOYAxis",Prs3d_DatumParts::Prs3d_DP_XOYAxis)
        .value("Prs3d_DP_YOZAxis",Prs3d_DatumParts::Prs3d_DP_YOZAxis)
        .value("Prs3d_DP_XOZAxis",Prs3d_DatumParts::Prs3d_DP_XOZAxis)
        .value("Prs3d_DP_None",Prs3d_DatumParts::Prs3d_DP_None).export_values();
    py::enum_<Prs3d_DimensionTextHorizontalPosition>(m, "Prs3d_DimensionTextHorizontalPosition",R"#(Specifies options for positioning dimension value label in horizontal direction. DTHP_Left - value label located at left side on dimension extension. DTHP_Right - value label located at right side on dimension extension. DTHP_Center - value label located at center of dimension line. DTHP_Fit - value label located automatically at left side if does not fits the dimension space, otherwise the value label is placed at center.)#")
        .value("Prs3d_DTHP_Left",Prs3d_DimensionTextHorizontalPosition::Prs3d_DTHP_Left)
        .value("Prs3d_DTHP_Right",Prs3d_DimensionTextHorizontalPosition::Prs3d_DTHP_Right)
        .value("Prs3d_DTHP_Center",Prs3d_DimensionTextHorizontalPosition::Prs3d_DTHP_Center)
        .value("Prs3d_DTHP_Fit",Prs3d_DimensionTextHorizontalPosition::Prs3d_DTHP_Fit).export_values();

//Python trampoline classes
    class Py_Prs3d_BasicAspect : public Prs3d_BasicAspect{
    public:
        using Prs3d_BasicAspect::Prs3d_BasicAspect;
        
        
        // public pure virtual
        void DumpJson(std::ostream & theOStream,const Standard_Integer theDepth) const  override { PYBIND11_OVERLOAD_PURE(void,Prs3d_BasicAspect,DumpJson,theOStream,theDepth) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_Prs3d_ToolQuadric : public Prs3d_ToolQuadric{
    public:
        using Prs3d_ToolQuadric::Prs3d_ToolQuadric;
        
        
        // public pure virtual
        
        
        // protected pure virtual
        gp_Pnt Vertex(const Standard_Real theU,const Standard_Real theV) override { PYBIND11_OVERLOAD_PURE(gp_Pnt,Prs3d_ToolQuadric,Vertex,theU,theV) };
        gp_Dir Normal(const Standard_Real theU,const Standard_Real theV) override { PYBIND11_OVERLOAD_PURE(gp_Dir,Prs3d_ToolQuadric,Normal,theU,theV) };
        
        
        // private pure virtual
        
    };

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<TColgp_HSequenceOfPnt> >(m,"Prs3d_NListOfSequenceOfPnt");  

// classes forward declarations only
    py::class_<Prs3d , shared_ptr<Prs3d>  >(m,"Prs3d",R"#(The Prs3d package provides the following services - a presentation object (the context for all modifications to the display, its presentation will be displayed in every view of an active viewer) - an attribute manager governing how objects such as color, width, and type of line are displayed; these are generic objects, whereas those in StdPrs are specific geometries and topologies. - generic algorithms providing default settings for objects such as points, curves, surfaces and shapes - a root object which provides the abstract framework for the DsgPrs definitions at work in display of dimensions, relations and trihedra.)#");
    py::class_<Prs3d_BasicAspect ,opencascade::handle<Prs3d_BasicAspect> ,Py_Prs3d_BasicAspect , Standard_Transient >(m,"Prs3d_BasicAspect",R"#(All basic Prs3d_xxxAspect must inherits from this class The aspect classes qualifies how to represent a given kind of object.All basic Prs3d_xxxAspect must inherits from this class The aspect classes qualifies how to represent a given kind of object.)#");
    py::class_<Prs3d_DimensionUnits , shared_ptr<Prs3d_DimensionUnits>  >(m,"Prs3d_DimensionUnits",R"#(This class provides units for two dimension groups: - lengthes (length, radius, diameter) - angles)#");
    py::class_<Prs3d_Drawer ,opencascade::handle<Prs3d_Drawer>  , Graphic3d_PresentationAttributes >(m,"Prs3d_Drawer",R"#(A graphic attribute manager which governs how objects such as color, width, line thickness and deflection are displayed. A drawer includes an instance of the Aspect classes with particular default values.A graphic attribute manager which governs how objects such as color, width, line thickness and deflection are displayed. A drawer includes an instance of the Aspect classes with particular default values.)#");
    py::class_<Prs3d_PresentationShadow ,opencascade::handle<Prs3d_PresentationShadow>  , Graphic3d_Structure >(m,"Prs3d_PresentationShadow",R"#(Defines a "shadow" of existing presentation object with custom aspects.Defines a "shadow" of existing presentation object with custom aspects.)#");
    py::class_<Prs3d_Projector ,opencascade::handle<Prs3d_Projector>  , Standard_Transient >(m,"Prs3d_Projector",R"#(A projector object. This object defines the parameters of a view for a visualization algorithm. It is, for example, used by the hidden line removal algorithms.A projector object. This object defines the parameters of a view for a visualization algorithm. It is, for example, used by the hidden line removal algorithms.A projector object. This object defines the parameters of a view for a visualization algorithm. It is, for example, used by the hidden line removal algorithms.)#");
    py::class_<Prs3d_Root , shared_ptr<Prs3d_Root>  >(m,"Prs3d_Root",R"#(A root class for the standard presentation algorithms of the StdPrs package.)#");
    py::class_<Prs3d_ShapeTool , shared_ptr<Prs3d_ShapeTool>  >(m,"Prs3d_ShapeTool",R"#(describes the behaviour requested for a wireframe shape presentation.)#");
    py::class_<Prs3d_ToolQuadric , shared_ptr<Prs3d_ToolQuadric> ,Py_Prs3d_ToolQuadric >(m,"Prs3d_ToolQuadric",R"#(Base class to build 3D surfaces presentation of quadric surfaces.)#");
    py::class_<Prs3d_Arrow , shared_ptr<Prs3d_Arrow>  , Prs3d_Root >(m,"Prs3d_Arrow",R"#(Provides class methods to draw an arrow at a given location, along a given direction and using a given angle.)#");
    py::class_<Prs3d_ArrowAspect ,opencascade::handle<Prs3d_ArrowAspect>  , Prs3d_BasicAspect >(m,"Prs3d_ArrowAspect",R"#(A framework for displaying arrows in representations of dimensions and relations.A framework for displaying arrows in representations of dimensions and relations.)#");
    py::class_<Prs3d_DatumAspect ,opencascade::handle<Prs3d_DatumAspect>  , Prs3d_BasicAspect >(m,"Prs3d_DatumAspect",R"#(A framework to define the display of datums.A framework to define the display of datums.)#");
    py::class_<Prs3d_DimensionAspect ,opencascade::handle<Prs3d_DimensionAspect>  , Prs3d_BasicAspect >(m,"Prs3d_DimensionAspect",R"#(defines the attributes when drawing a Length Presentation.defines the attributes when drawing a Length Presentation.)#");
    py::class_<Prs3d_LineAspect ,opencascade::handle<Prs3d_LineAspect>  , Prs3d_BasicAspect >(m,"Prs3d_LineAspect",R"#(A framework for defining how a line will be displayed in a presentation. Aspects of line display include width, color and type of line. The definition set by this class is then passed to the attribute manager Prs3d_Drawer. Any object which requires a value for line aspect as an argument may then be given the attribute manager as a substitute argument in the form of a field such as myDrawer for example.A framework for defining how a line will be displayed in a presentation. Aspects of line display include width, color and type of line. The definition set by this class is then passed to the attribute manager Prs3d_Drawer. Any object which requires a value for line aspect as an argument may then be given the attribute manager as a substitute argument in the form of a field such as myDrawer for example.)#");
    py::class_<Prs3d_PlaneAspect ,opencascade::handle<Prs3d_PlaneAspect>  , Prs3d_BasicAspect >(m,"Prs3d_PlaneAspect",R"#(A framework to define the display of planes.A framework to define the display of planes.)#");
    py::class_<Prs3d_PointAspect ,opencascade::handle<Prs3d_PointAspect>  , Prs3d_BasicAspect >(m,"Prs3d_PointAspect",R"#(This class defines attributes for the points The points are drawn using markers, whose size does not depend on the zoom value of the views.This class defines attributes for the points The points are drawn using markers, whose size does not depend on the zoom value of the views.)#");
    py::class_<Prs3d_ShadingAspect ,opencascade::handle<Prs3d_ShadingAspect>  , Prs3d_BasicAspect >(m,"Prs3d_ShadingAspect",R"#(A framework to define the display of shading. The attributes which make up this definition include: - fill aspect - color, and - materialA framework to define the display of shading. The attributes which make up this definition include: - fill aspect - color, and - material)#");
    py::class_<Prs3d_Text , shared_ptr<Prs3d_Text>  , Prs3d_Root >(m,"Prs3d_Text",R"#(A framework to define the display of texts.)#");
    py::class_<Prs3d_TextAspect ,opencascade::handle<Prs3d_TextAspect>  , Prs3d_BasicAspect >(m,"Prs3d_TextAspect",R"#(Defines the attributes when displaying a text.Defines the attributes when displaying a text.)#");
    py::class_<Prs3d_ToolCylinder , shared_ptr<Prs3d_ToolCylinder>  , Prs3d_ToolQuadric >(m,"Prs3d_ToolCylinder",R"#(Standard presentation algorithm that outputs graphical primitives for cylindrical surface.)#");
    py::class_<Prs3d_ToolDisk , shared_ptr<Prs3d_ToolDisk>  , Prs3d_ToolQuadric >(m,"Prs3d_ToolDisk",R"#(Standard presentation algorithm that outputs graphical primitives for disk surface.)#");
    py::class_<Prs3d_ToolSector , shared_ptr<Prs3d_ToolSector>  , Prs3d_ToolQuadric >(m,"Prs3d_ToolSector",R"#(Standard presentation algorithm that outputs graphical primitives for disk surface.)#");
    py::class_<Prs3d_ToolSphere , shared_ptr<Prs3d_ToolSphere>  , Prs3d_ToolQuadric >(m,"Prs3d_ToolSphere",R"#(Standard presentation algorithm that outputs graphical primitives for spherical surface.)#");
    py::class_<Prs3d_IsoAspect ,opencascade::handle<Prs3d_IsoAspect>  , Prs3d_LineAspect >(m,"Prs3d_IsoAspect",R"#(A framework to define the display attributes of isoparameters. This framework can be used to modify the default setting for isoparameters in Prs3d_Drawer.A framework to define the display attributes of isoparameters. This framework can be used to modify the default setting for isoparameters in Prs3d_Drawer.)#");

};

// user-defined post-inclusion per module

// user-defined post
