
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <AIS_AnimationCamera.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <V3d_View.hxx>
#include <Geom_Plane.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Geom_Line.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Prs3d_LineAspect.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Geom_Plane.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Line.hxx>
#include <Geom_Point.hxx>
#include <Geom_Plane.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <V3d_Viewer.hxx>
#include <SelectMgr_OrFilter.hxx>
#include <V3d_View.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <TopoDS_Shape.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Axis2Placement.hxx>
#include <AIS_Axis.hxx>
#include <AIS_Point.hxx>
#include <AIS_Plane.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Plane.hxx>
#include <gp_Circ.hxx>
#include <gp_Elips.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <MeshVS_TwoColors.hxx>
#include <AIS_AnimationCamera.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_InteractiveContext.hxx>
#include <AIS_Point.hxx>
#include <AIS_RubberBand.hxx>
#include <V3d_View.hxx>
#include <Geom_Plane.hxx>
#include <AIS_Line.hxx>
#include <AIS_Point.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Curve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Geom_Point.hxx>
#include <TopoDS_Vertex.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Line.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Ellipse.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Vertex.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_Surface.hxx>
#include <Graphic3d_Camera.hxx>
#include <V3d_View.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>

// module includes
#include <AIS.hxx>
#include <AIS_AngleDimension.hxx>
#include <AIS_Animation.hxx>
#include <AIS_AnimationCamera.hxx>
#include <AIS_AnimationObject.hxx>
#include <AIS_AnimationTimer.hxx>
#include <AIS_AttributeFilter.hxx>
#include <AIS_Axis.hxx>
#include <AIS_BadEdgeFilter.hxx>
#include <AIS_C0RegularityFilter.hxx>
#include <AIS_CameraFrustum.hxx>
#include <AIS_Chamf2dDimension.hxx>
#include <AIS_Chamf3dDimension.hxx>
#include <AIS_Circle.hxx>
#include <AIS_ClearMode.hxx>
#include <AIS_ColoredDrawer.hxx>
#include <AIS_ColoredShape.hxx>
#include <AIS_ColorScale.hxx>
#include <AIS_ConcentricRelation.hxx>
#include <AIS_ConnectedInteractive.hxx>
#include <AIS_ConnectStatus.hxx>
#include <AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive.hxx>
#include <AIS_DataMapIteratorOfDataMapOfIOStatus.hxx>
#include <AIS_DataMapofIntegerListOfinteractive.hxx>
#include <AIS_DataMapOfIOStatus.hxx>
#include <AIS_DataMapOfShapeDrawer.hxx>
#include <AIS_DiameterDimension.hxx>
#include <AIS_Dimension.hxx>
#include <AIS_DimensionOwner.hxx>
#include <AIS_DimensionSelectionMode.hxx>
#include <AIS_DisplayMode.hxx>
#include <AIS_DisplaySpecialSymbol.hxx>
#include <AIS_DisplayStatus.hxx>
#include <AIS_DragAction.hxx>
#include <AIS_EllipseRadiusDimension.hxx>
#include <AIS_EqualDistanceRelation.hxx>
#include <AIS_EqualRadiusRelation.hxx>
#include <AIS_ExclusionFilter.hxx>
#include <AIS_FixRelation.hxx>
#include <AIS_GlobalStatus.hxx>
#include <AIS_GraphicTool.hxx>
#include <AIS_IdenticRelation.hxx>
#include <AIS_IndexedDataMapOfOwnerPrs.hxx>
#include <AIS_InteractiveContext.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_KindOfDimension.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <AIS_KindOfRelation.hxx>
#include <AIS_KindOfSurface.hxx>
#include <AIS_KindOfUnit.hxx>
#include <AIS_LengthDimension.hxx>
#include <AIS_Line.hxx>
#include <AIS_ListIteratorOfListOfInteractive.hxx>
#include <AIS_ListOfInteractive.hxx>
#include <AIS_Manipulator.hxx>
#include <AIS_ManipulatorMode.hxx>
#include <AIS_ManipulatorOwner.hxx>
#include <AIS_MapIteratorOfMapOfInteractive.hxx>
#include <AIS_MapOfInteractive.hxx>
#include <AIS_MaxRadiusDimension.hxx>
#include <AIS_MediaPlayer.hxx>
#include <AIS_MidPointRelation.hxx>
#include <AIS_MinRadiusDimension.hxx>
#include <AIS_MouseGesture.hxx>
#include <AIS_MultipleConnectedInteractive.hxx>
#include <AIS_NavigationMode.hxx>
#include <AIS_NListOfEntityOwner.hxx>
#include <AIS_OffsetDimension.hxx>
#include <AIS_ParallelRelation.hxx>
#include <AIS_PerpendicularRelation.hxx>
#include <AIS_Plane.hxx>
#include <AIS_PlaneTrihedron.hxx>
#include <AIS_Point.hxx>
#include <AIS_PointCloud.hxx>
#include <AIS_RadiusDimension.hxx>
#include <AIS_Relation.hxx>
#include <AIS_RotationMode.hxx>
#include <AIS_RubberBand.hxx>
#include <AIS_Selection.hxx>
#include <AIS_SelectionModesConcurrency.hxx>
#include <AIS_SelectStatus.hxx>
#include <AIS_SequenceOfDimension.hxx>
#include <AIS_SequenceOfInteractive.hxx>
#include <AIS_Shape.hxx>
#include <AIS_SignatureFilter.hxx>
#include <AIS_StandardDatum.hxx>
#include <AIS_StatusOfDetection.hxx>
#include <AIS_StatusOfPick.hxx>
#include <AIS_SymmetricRelation.hxx>
#include <AIS_TangentRelation.hxx>
#include <AIS_TextLabel.hxx>
#include <AIS_TexturedShape.hxx>
#include <AIS_Triangulation.hxx>
#include <AIS_Trihedron.hxx>
#include <AIS_TrihedronOwner.hxx>
#include <AIS_TrihedronSelectionMode.hxx>
#include <AIS_TypeFilter.hxx>
#include <AIS_TypeOfAngle.hxx>
#include <AIS_TypeOfAngleArrowVisibility.hxx>
#include <AIS_TypeOfAttribute.hxx>
#include <AIS_TypeOfAxis.hxx>
#include <AIS_TypeOfDist.hxx>
#include <AIS_TypeOfIso.hxx>
#include <AIS_TypeOfPlane.hxx>
#include <AIS_ViewController.hxx>
#include <AIS_ViewCube.hxx>
#include <AIS_ViewInputBuffer.hxx>
#include <AIS_WalkDelta.hxx>

// template related includes
// ./opencascade/AIS_NListOfEntityOwner.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_MapOfInteractive.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_MapOfInteractive.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_DataMapOfIOStatus.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_DataMapofIntegerListOfinteractive.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_DataMapofIntegerListOfinteractive.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_ListOfInteractive.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_ListOfInteractive.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_MouseGesture.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_SequenceOfDimension.hxx
#include "NCollection.hxx"
// ./opencascade/AIS_SequenceOfInteractive.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <Media_PlayerContext.hxx>
auto OptionsForAttach = [](){return AIS_Manipulator::OptionsForAttach();};

// Module definiiton
void register_AIS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("AIS"));


//Python trampoline classes
    class Py_AIS_InteractiveObject : public AIS_InteractiveObject{
    public:
        using AIS_InteractiveObject::AIS_InteractiveObject;
        
        
        // public pure virtual
        
        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };
        
        // protected pure virtual
        
        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };
        
        // private pure virtual
        
    };
    class Py_AIS_Dimension : public AIS_Dimension{
    public:
        using AIS_Dimension::AIS_Dimension;
        
        
        // public pure virtual
        
        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };
        
        // protected pure virtual
        
        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };
        
        // private pure virtual
        
    };
    class Py_AIS_Relation : public AIS_Relation{
    public:
        using AIS_Relation::AIS_Relation;
        
        
        // public pure virtual
        
        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };
        
        // protected pure virtual
        
        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };
        
        // private pure virtual
        
    };
    class Py_AIS_EllipseRadiusDimension : public AIS_EllipseRadiusDimension{
    public:
        using AIS_EllipseRadiusDimension::AIS_EllipseRadiusDimension;
        
        
        // public pure virtual
        
        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };
        
        // protected pure virtual
        
        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };
        
        // private pure virtual
        
    };

// classes

    // default constructor
    register_default_constructor<AIS , shared_ptr<AIS>>(m,"AIS");

    static_cast<py::class_<AIS , shared_ptr<AIS>  >>(m.attr("AIS"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Nearest_s",
                    (gp_Pnt (*)( const TopoDS_Shape & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt (*)( const TopoDS_Shape & ,  const gp_Pnt &  ) >(&AIS::Nearest),
                    R"#(Returns the nearest point in a shape. This is used by several classes in calculation of dimensions.)#"  , py::arg("aShape"),  py::arg("aPoint"))
        .def_static("Nearest_s",
                    (gp_Pnt (*)( const gp_Lin & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt (*)( const gp_Lin & ,  const gp_Pnt &  ) >(&AIS::Nearest),
                    R"#(Returns the nearest point on the line.)#"  , py::arg("theLine"),  py::arg("thePoint"))
        .def_static("Nearest_s",
                    (Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  gp_Pnt &  ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  gp_Pnt &  ) >(&AIS::Nearest),
                    R"#(For the given point finds nearest point on the curve,)#"  , py::arg("theCurve"),  py::arg("thePoint"),  py::arg("theFirstPoint"),  py::arg("theLastPoint"),  py::arg("theNearestPoint"))
        .def_static("Farest_s",
                    (gp_Pnt (*)( const TopoDS_Shape & ,  const gp_Pnt &  ) ) static_cast<gp_Pnt (*)( const TopoDS_Shape & ,  const gp_Pnt &  ) >(&AIS::Farest),
                    R"#(None)#"  , py::arg("aShape"),  py::arg("aPoint"))
        .def_static("ComputeGeometry_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt &  ) >(&AIS::ComputeGeometry),
                    R"#(Used by 2d Relation only Computes the 3d geometry of <anEdge> in the current WorkingPlane and the extremities if any Return TRUE if ok.)#"  , py::arg("theEdge"),  py::arg("theCurve"),  py::arg("theFirstPnt"),  py::arg("theLastPnt"))
        .def_static("ComputeGeometry_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  Standard_Boolean &  ) >(&AIS::ComputeGeometry),
                    R"#(Used by dimensions only. Computes the 3d geometry of <anEdge>. Return TRUE if ok.)#"  , py::arg("theEdge"),  py::arg("theCurve"),  py::arg("theFirstPnt"),  py::arg("theLastPnt"),  py::arg("theIsInfinite"))
        .def_static("ComputeGeometry_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  opencascade::handle<Geom_Curve> & ,  Standard_Boolean & ,  Standard_Boolean & ,  const opencascade::handle<Geom_Plane> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  opencascade::handle<Geom_Curve> & ,  Standard_Boolean & ,  Standard_Boolean & ,  const opencascade::handle<Geom_Plane> &  ) >(&AIS::ComputeGeometry),
                    R"#(Used by 2d Relation only Computes the 3d geometry of <anEdge> in the current WorkingPlane and the extremities if any. If <aCurve> is not in the current plane, <extCurve> contains the not projected curve associated to <anEdge>. If <anEdge> is infinite, <isinfinite> = true and the 2 parameters <FirstPnt> and <LastPnt> have no signification. Return TRUE if ok.)#"  , py::arg("theEdge"),  py::arg("theCurve"),  py::arg("theFirstPnt"),  py::arg("theLastPnt"),  py::arg("theExtCurve"),  py::arg("theIsInfinite"),  py::arg("theIsOnPlane"),  py::arg("thePlane"))
        .def_static("ComputeGeometry_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  const opencascade::handle<Geom_Plane> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  const opencascade::handle<Geom_Plane> &  ) >(&AIS::ComputeGeometry),
                    R"#(Used by 2d Relation only Computes the 3d geometry of <anEdge> in the current WorkingPlane and the extremities if any Return TRUE if ok.)#"  , py::arg("theFirstEdge"),  py::arg("theSecondEdge"),  py::arg("theFirstCurve"),  py::arg("theSecondCurve"),  py::arg("theFirstPnt1"),  py::arg("theLastPnt1"),  py::arg("theFirstPnt2"),  py::arg("theLastPnt2"),  py::arg("thePlane"))
        .def_static("ComputeGeometry_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  Standard_Boolean & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  opencascade::handle<Geom_Curve> & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  Standard_Boolean & ,  Standard_Boolean &  ) >(&AIS::ComputeGeometry),
                    R"#(Used by dimensions only.Computes the 3d geometry of<anEdge1> and <anEdge2> and checks if they are infinite.)#"  , py::arg("theFirstEdge"),  py::arg("theSecondEdge"),  py::arg("theFirstCurve"),  py::arg("theSecondCurve"),  py::arg("theFirstPnt1"),  py::arg("theLastPnt1"),  py::arg("theFirstPnt2"),  py::arg("theLastPnt2"),  py::arg("theIsinfinite1"),  py::arg("theIsinfinite2"))
        .def_static("ComputeGeometry_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  Standard_Integer & ,  opencascade::handle<Geom_Curve> & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  opencascade::handle<Geom_Curve> & ,  Standard_Boolean & ,  Standard_Boolean & ,  const opencascade::handle<Geom_Plane> &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & ,  const TopoDS_Edge & ,  Standard_Integer & ,  opencascade::handle<Geom_Curve> & ,  opencascade::handle<Geom_Curve> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  opencascade::handle<Geom_Curve> & ,  Standard_Boolean & ,  Standard_Boolean & ,  const opencascade::handle<Geom_Plane> &  ) >(&AIS::ComputeGeometry),
                    R"#(Used by 2d Relation only Computes the 3d geometry of<anEdge1> and <anEdge2> in the current Plane and the extremities if any. Return in ExtCurve the 3d curve (not projected in the plane) of the first edge if <indexExt> =1 or of the 2nd edge if <indexExt> = 2. If <indexExt> = 0, ExtCurve is Null. if there is an edge external to the plane, <isinfinite> is true if this edge is infinite. So, the extremities of it are not significant. Return TRUE if ok)#"  , py::arg("theFirstEdge"),  py::arg("theSecondEdge"),  py::arg("theExtIndex"),  py::arg("theFirstCurve"),  py::arg("theSecondCurve"),  py::arg("theFirstPnt1"),  py::arg("theLastPnt1"),  py::arg("theFirstPnt2"),  py::arg("theLastPnt2"),  py::arg("theExtCurve"),  py::arg("theIsinfinite1"),  py::arg("theIsinfinite2"),  py::arg("thePlane"))
        .def_static("ComputeGeomCurve_s",
                    (Standard_Boolean (*)( opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Pnt & ,  const opencascade::handle<Geom_Plane> & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (*)( opencascade::handle<Geom_Curve> & ,  const Standard_Real ,  const Standard_Real ,  gp_Pnt & ,  gp_Pnt & ,  const opencascade::handle<Geom_Plane> & ,  Standard_Boolean &  ) >(&AIS::ComputeGeomCurve),
                    R"#(Checks if aCurve belongs to aPlane; if not, projects aCurve in aPlane and returns aCurve; Return TRUE if ok)#"  , py::arg("aCurve"),  py::arg("first1"),  py::arg("last1"),  py::arg("FirstPnt1"),  py::arg("LastPnt1"),  py::arg("aPlane"),  py::arg("isOnPlane"))
        .def_static("ComputeGeometry_s",
                    (Standard_Boolean (*)( const TopoDS_Vertex & ,  gp_Pnt & ,  const opencascade::handle<Geom_Plane> & ,  Standard_Boolean &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Vertex & ,  gp_Pnt & ,  const opencascade::handle<Geom_Plane> & ,  Standard_Boolean &  ) >(&AIS::ComputeGeometry),
                    R"#(None)#"  , py::arg("aVertex"),  py::arg("point"),  py::arg("aPlane"),  py::arg("isOnPlane"))
        .def_static("GetPlaneFromFace_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  gp_Pln & ,  opencascade::handle<Geom_Surface> & ,  AIS_KindOfSurface & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  gp_Pln & ,  opencascade::handle<Geom_Surface> & ,  AIS_KindOfSurface & ,  Standard_Real &  ) >(&AIS::GetPlaneFromFace),
                    R"#(Tryes to get Plane from Face. Returns Surface of Face in aSurf. Returns Standard_True and Plane of Face in aPlane in following cases: Face is Plane, Offset of Plane, Extrusion of Line and Offset of Extrusion of Line Returns pure type of Surface which can be: Plane, Cylinder, Cone, Sphere, Torus, SurfaceOfRevolution, SurfaceOfExtrusion)#"  , py::arg("aFace"),  py::arg("aPlane"),  py::arg("aSurf"),  py::arg("aSurfType"),  py::arg("Offset"))
        .def_static("InitLengthBetweenCurvilinearFaces_s",
                    (void (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  opencascade::handle<Geom_Surface> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Dir &  ) ) static_cast<void (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  opencascade::handle<Geom_Surface> & ,  opencascade::handle<Geom_Surface> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Dir &  ) >(&AIS::InitLengthBetweenCurvilinearFaces),
                    R"#(Finds attachment points on two curvilinear faces for length dimension.)#"  , py::arg("theFirstFace"),  py::arg("theSecondFace"),  py::arg("theFirstSurf"),  py::arg("theSecondSurf"),  py::arg("theFirstAttach"),  py::arg("theSecondAttach"),  py::arg("theDirOnPlane"))
        .def_static("InitAngleBetweenPlanarFaces_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  const Standard_Boolean  ) >(&AIS::InitAngleBetweenPlanarFaces),
                    R"#(Finds three points for the angle dimension between two planes.)#"  , py::arg("theFirstFace"),  py::arg("theSecondFace"),  py::arg("theCenter"),  py::arg("theFirstAttach"),  py::arg("theSecondAttach"),  py::arg("theIsFirstPointSet")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("InitAngleBetweenCurvilinearFaces_s",
                    (Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const AIS_KindOfSurface ,  const AIS_KindOfSurface ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const AIS_KindOfSurface ,  const AIS_KindOfSurface ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  const Standard_Boolean  ) >(&AIS::InitAngleBetweenCurvilinearFaces),
                    R"#(Finds three points for the angle dimension between two curvilinear surfaces.)#"  , py::arg("theFirstFace"),  py::arg("theSecondFace"),  py::arg("theFirstSurfType"),  py::arg("theSecondSurfType"),  py::arg("theCenter"),  py::arg("theFirstAttach"),  py::arg("theSecondAttach"),  py::arg("theIsFirstPointSet")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("ProjectPointOnPlane_s",
                    (gp_Pnt (*)( const gp_Pnt & ,  const gp_Pln &  ) ) static_cast<gp_Pnt (*)( const gp_Pnt & ,  const gp_Pln &  ) >(&AIS::ProjectPointOnPlane),
                    R"#(None)#"  , py::arg("aPoint"),  py::arg("aPlane"))
        .def_static("ProjectPointOnLine_s",
                    (gp_Pnt (*)( const gp_Pnt & ,  const gp_Lin &  ) ) static_cast<gp_Pnt (*)( const gp_Pnt & ,  const gp_Lin &  ) >(&AIS::ProjectPointOnLine),
                    R"#(None)#"  , py::arg("aPoint"),  py::arg("aLine"))
        .def_static("TranslatePointToBound_s",
                    (gp_Pnt (*)( const gp_Pnt & ,  const gp_Dir & ,  const Bnd_Box &  ) ) static_cast<gp_Pnt (*)( const gp_Pnt & ,  const gp_Dir & ,  const Bnd_Box &  ) >(&AIS::TranslatePointToBound),
                    R"#(None)#"  , py::arg("aPoint"),  py::arg("aDir"),  py::arg("aBndBox"))
        .def_static("InDomain_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AIS::InDomain),
                    R"#(returns True if point with anAttachPar is in domain of arc)#"  , py::arg("aFirstPar"),  py::arg("aLastPar"),  py::arg("anAttachPar"))
        .def_static("NearestApex_s",
                    (gp_Pnt (*)( const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  Standard_Boolean &  ) ) static_cast<gp_Pnt (*)( const gp_Elips & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Standard_Real ,  const Standard_Real ,  Standard_Boolean &  ) >(&AIS::NearestApex),
                    R"#(computes nearest to ellipse arc apex)#"  , py::arg("elips"),  py::arg("pApex"),  py::arg("nApex"),  py::arg("fpara"),  py::arg("lpara"),  py::arg("IsInDomain"))
        .def_static("DistanceFromApex_s",
                    (Standard_Real (*)( const gp_Elips & ,  const gp_Pnt & ,  const Standard_Real  ) ) static_cast<Standard_Real (*)( const gp_Elips & ,  const gp_Pnt & ,  const Standard_Real  ) >(&AIS::DistanceFromApex),
                    R"#(computes length of ellipse arc in parametric units)#"  , py::arg("elips"),  py::arg("Apex"),  py::arg("par"))
        .def_static("ComputeProjEdgePresentation_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TopoDS_Edge & ,  const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Quantity_NameOfColor ,  const Standard_Real ,  const Aspect_TypeOfLine ,  const Aspect_TypeOfLine  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TopoDS_Edge & ,  const opencascade::handle<Geom_Curve> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const Quantity_NameOfColor ,  const Standard_Real ,  const Aspect_TypeOfLine ,  const Aspect_TypeOfLine  ) >(&AIS::ComputeProjEdgePresentation),
                    R"#(None)#"  , py::arg("aPres"),  py::arg("aDrawer"),  py::arg("anEdge"),  py::arg("ProjCurve"),  py::arg("FirstP"),  py::arg("LastP"),  py::arg("aColor")=static_cast<const Quantity_NameOfColor>(Quantity_NOC_PURPLE),  py::arg("aWidth")=static_cast<const Standard_Real>(2),  py::arg("aProjTOL")=static_cast<const Aspect_TypeOfLine>(Aspect_TOL_DASH),  py::arg("aCallTOL")=static_cast<const Aspect_TypeOfLine>(Aspect_TOL_DOT))
        .def_static("ComputeProjVertexPresentation_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TopoDS_Vertex & ,  const gp_Pnt & ,  const Quantity_NameOfColor ,  const Standard_Real ,  const Aspect_TypeOfMarker ,  const Aspect_TypeOfLine  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const TopoDS_Vertex & ,  const gp_Pnt & ,  const Quantity_NameOfColor ,  const Standard_Real ,  const Aspect_TypeOfMarker ,  const Aspect_TypeOfLine  ) >(&AIS::ComputeProjVertexPresentation),
                    R"#(None)#"  , py::arg("aPres"),  py::arg("aDrawer"),  py::arg("aVertex"),  py::arg("ProjPoint"),  py::arg("aColor")=static_cast<const Quantity_NameOfColor>(Quantity_NOC_PURPLE),  py::arg("aWidth")=static_cast<const Standard_Real>(2),  py::arg("aProjTOM")=static_cast<const Aspect_TypeOfMarker>(Aspect_TOM_PLUS),  py::arg("aCallTOL")=static_cast<const Aspect_TypeOfLine>(Aspect_TOL_DOT))
    // static methods using call by reference i.s.o. return
        .def_static("InitFaceLength_s",
                    []( const TopoDS_Face & aFace,gp_Pln & aPlane,opencascade::handle<Geom_Surface> & aSurface,AIS_KindOfSurface & aSurfaceType ){ Standard_Real  anOffset; AIS::InitFaceLength(aFace,aPlane,aSurface,aSurfaceType,anOffset); return std::make_tuple(anOffset); },
                    R"#(None)#"  , py::arg("aFace"),  py::arg("aPlane"),  py::arg("aSurface"),  py::arg("aSurfaceType"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Animation ,opencascade::handle<AIS_Animation>  , Standard_Transient >>(m.attr("AIS_Animation"))
    // constructors
        .def(py::init< const TCollection_AsciiString & >()  , py::arg("theAnimationName") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Animation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Animation::*)() const>(&AIS_Animation::DynamicType),
             R"#(None)#" )
        .def("Name",
             (const TCollection_AsciiString & (AIS_Animation::*)() const) static_cast<const TCollection_AsciiString & (AIS_Animation::*)() const>(&AIS_Animation::Name),
             R"#(Animation name.)#" )
        .def("StartPts",
             (Standard_Real (AIS_Animation::*)() const) static_cast<Standard_Real (AIS_Animation::*)() const>(&AIS_Animation::StartPts),
             R"#(Returns start time of the animation in the timeline)#" )
        .def("SetStartPts",
             (void (AIS_Animation::*)( const Standard_Real  ) ) static_cast<void (AIS_Animation::*)( const Standard_Real  ) >(&AIS_Animation::SetStartPts),
             R"#(Sets time limits for animation in the animation timeline)#"  , py::arg("thePtsStart"))
        .def("Duration",
             (Standard_Real (AIS_Animation::*)() const) static_cast<Standard_Real (AIS_Animation::*)() const>(&AIS_Animation::Duration),
             R"#(Returns duration of the animation in the timeline)#" )
        .def("UpdateTotalDuration",
             (void (AIS_Animation::*)() ) static_cast<void (AIS_Animation::*)() >(&AIS_Animation::UpdateTotalDuration),
             R"#(Update total duration considering all animations on timeline.)#" )
        .def("HasOwnDuration",
             (Standard_Boolean (AIS_Animation::*)() const) static_cast<Standard_Boolean (AIS_Animation::*)() const>(&AIS_Animation::HasOwnDuration),
             R"#(Return true if duration is defined.)#" )
        .def("OwnDuration",
             (Standard_Real (AIS_Animation::*)() const) static_cast<Standard_Real (AIS_Animation::*)() const>(&AIS_Animation::OwnDuration),
             R"#(Returns own duration of the animation in the timeline)#" )
        .def("SetOwnDuration",
             (void (AIS_Animation::*)( const Standard_Real  ) ) static_cast<void (AIS_Animation::*)( const Standard_Real  ) >(&AIS_Animation::SetOwnDuration),
             R"#(Defines duration of the animation.)#"  , py::arg("theDuration"))
        .def("Add",
             (void (AIS_Animation::*)( const opencascade::handle<AIS_Animation> &  ) ) static_cast<void (AIS_Animation::*)( const opencascade::handle<AIS_Animation> &  ) >(&AIS_Animation::Add),
             R"#(Add single animation to the timeline.)#"  , py::arg("theAnimation"))
        .def("Clear",
             (void (AIS_Animation::*)() ) static_cast<void (AIS_Animation::*)() >(&AIS_Animation::Clear),
             R"#(Clear animation timeline - remove all animations from it.)#" )
        .def("Find",
             (opencascade::handle<AIS_Animation> (AIS_Animation::*)( const TCollection_AsciiString &  ) const) static_cast<opencascade::handle<AIS_Animation> (AIS_Animation::*)( const TCollection_AsciiString &  ) const>(&AIS_Animation::Find),
             R"#(Return the child animation with the given name.)#"  , py::arg("theAnimationName"))
        .def("Remove",
             (Standard_Boolean (AIS_Animation::*)( const opencascade::handle<AIS_Animation> &  ) ) static_cast<Standard_Boolean (AIS_Animation::*)( const opencascade::handle<AIS_Animation> &  ) >(&AIS_Animation::Remove),
             R"#(Remove the child animation.)#"  , py::arg("theAnimation"))
        .def("Replace",
             (Standard_Boolean (AIS_Animation::*)( const opencascade::handle<AIS_Animation> & ,  const opencascade::handle<AIS_Animation> &  ) ) static_cast<Standard_Boolean (AIS_Animation::*)( const opencascade::handle<AIS_Animation> & ,  const opencascade::handle<AIS_Animation> &  ) >(&AIS_Animation::Replace),
             R"#(Replace the child animation.)#"  , py::arg("theAnimationOld"),  py::arg("theAnimationNew"))
        .def("CopyFrom",
             (void (AIS_Animation::*)( const opencascade::handle<AIS_Animation> &  ) ) static_cast<void (AIS_Animation::*)( const opencascade::handle<AIS_Animation> &  ) >(&AIS_Animation::CopyFrom),
             R"#(Clears own children and then copy child animations from another object. Copy also Start Time and Duration values.)#"  , py::arg("theOther"))
        .def("Children",
             (const NCollection_Sequence<opencascade::handle<AIS_Animation> > & (AIS_Animation::*)() const) static_cast<const NCollection_Sequence<opencascade::handle<AIS_Animation> > & (AIS_Animation::*)() const>(&AIS_Animation::Children),
             R"#(Return sequence of child animations.)#" )
        .def("StartTimer",
             (void (AIS_Animation::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (AIS_Animation::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&AIS_Animation::StartTimer),
             R"#(Start animation with internally defined timer instance. Calls ::Start() internally.)#"  , py::arg("theStartPts"),  py::arg("thePlaySpeed"),  py::arg("theToUpdate"),  py::arg("theToStopTimer")=static_cast<const Standard_Boolean>(Standard_False))
        .def("UpdateTimer",
             (Standard_Real (AIS_Animation::*)() ) static_cast<Standard_Real (AIS_Animation::*)() >(&AIS_Animation::UpdateTimer),
             R"#(Update single frame of animation, update timer state)#" )
        .def("ElapsedTime",
             (Standard_Real (AIS_Animation::*)() const) static_cast<Standard_Real (AIS_Animation::*)() const>(&AIS_Animation::ElapsedTime),
             R"#(Return elapsed time.)#" )
        .def("Start",
             (void (AIS_Animation::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Animation::*)( const Standard_Boolean  ) >(&AIS_Animation::Start),
             R"#(Start animation. This method changes status of the animation to Started. This status defines whether animation is to be performed in the timeline or not.)#"  , py::arg("theToUpdate"))
        .def("Pause",
             (void (AIS_Animation::*)() ) static_cast<void (AIS_Animation::*)() >(&AIS_Animation::Pause),
             R"#(Pause the process timeline.)#" )
        .def("Stop",
             (void (AIS_Animation::*)() ) static_cast<void (AIS_Animation::*)() >(&AIS_Animation::Stop),
             R"#(Stop animation. This method changed status of the animation to Stopped. This status shows that animation will not be performed in the timeline or it is finished.)#" )
        .def("IsStopped",
             (bool (AIS_Animation::*)() ) static_cast<bool (AIS_Animation::*)() >(&AIS_Animation::IsStopped),
             R"#(Check if animation is to be performed in the animation timeline.)#" )
        .def("Update",
             (Standard_Boolean (AIS_Animation::*)( const Standard_Real  ) ) static_cast<Standard_Boolean (AIS_Animation::*)( const Standard_Real  ) >(&AIS_Animation::Update),
             R"#(Update single frame of animation, update timer state)#"  , py::arg("thePts"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Animation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Animation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_AnimationProgress , shared_ptr<AIS_AnimationProgress>  >>(m.attr("AIS_AnimationProgress"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_AttributeFilter ,opencascade::handle<AIS_AttributeFilter>  , SelectMgr_Filter >>(m.attr("AIS_AttributeFilter"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Quantity_NameOfColor >()  , py::arg("aCol") )
        .def(py::init< const Standard_Real >()  , py::arg("aWidth") )
    // custom constructors
    // methods
        .def("HasColor",
             (Standard_Boolean (AIS_AttributeFilter::*)() const) static_cast<Standard_Boolean (AIS_AttributeFilter::*)() const>(&AIS_AttributeFilter::HasColor),
             R"#(Indicates that the Interactive Object has the color setting specified by the argument aCol at construction time.)#" )
        .def("HasWidth",
             (Standard_Boolean (AIS_AttributeFilter::*)() const) static_cast<Standard_Boolean (AIS_AttributeFilter::*)() const>(&AIS_AttributeFilter::HasWidth),
             R"#(Indicates that the Interactive Object has the width setting specified by the argument aWidth at construction time.)#" )
        .def("SetColor",
             (void (AIS_AttributeFilter::*)( const Quantity_NameOfColor  ) ) static_cast<void (AIS_AttributeFilter::*)( const Quantity_NameOfColor  ) >(&AIS_AttributeFilter::SetColor),
             R"#(Sets the color aCol. This must be chosen from the list of colors in Quantity_NameOfColor.)#"  , py::arg("aCol"))
        .def("SetWidth",
             (void (AIS_AttributeFilter::*)( const Standard_Real  ) ) static_cast<void (AIS_AttributeFilter::*)( const Standard_Real  ) >(&AIS_AttributeFilter::SetWidth),
             R"#(Sets the line width aWidth.)#"  , py::arg("aWidth"))
        .def("UnsetColor",
             (void (AIS_AttributeFilter::*)() ) static_cast<void (AIS_AttributeFilter::*)() >(&AIS_AttributeFilter::UnsetColor),
             R"#(Removes the setting for color from the filter.)#" )
        .def("UnsetWidth",
             (void (AIS_AttributeFilter::*)() ) static_cast<void (AIS_AttributeFilter::*)() >(&AIS_AttributeFilter::UnsetWidth),
             R"#(Removes the setting for width from the filter.)#" )
        .def("IsOk",
             (Standard_Boolean (AIS_AttributeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_AttributeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_AttributeFilter::IsOk),
             R"#(Indicates that the selected Interactive Object passes the filter. The owner, anObj, can be either direct or user. A direct owner is the corresponding construction element, whereas a user is the compound shape of which the entity forms a part. If the Interactive Object returns Standard_True when detected by the Local Context selector through the mouse, the object is kept; if not, it is rejected.)#"  , py::arg("anObj"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_AttributeFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_AttributeFilter::*)() const>(&AIS_AttributeFilter::DynamicType),
             R"#(None)#" )
        .def("SetColor",
             (void (AIS_AttributeFilter::*)( const Quantity_NameOfColor  ) ) static_cast<void (AIS_AttributeFilter::*)( const Quantity_NameOfColor  ) >(&AIS_AttributeFilter::SetColor),
             R"#(Sets the color aCol. This must be chosen from the list of colors in Quantity_NameOfColor.)#"  , py::arg("aCol"))
        .def("SetWidth",
             (void (AIS_AttributeFilter::*)( const Standard_Real  ) ) static_cast<void (AIS_AttributeFilter::*)( const Standard_Real  ) >(&AIS_AttributeFilter::SetWidth),
             R"#(Sets the line width aWidth.)#"  , py::arg("aWid"))
        .def("UnsetColor",
             (void (AIS_AttributeFilter::*)() ) static_cast<void (AIS_AttributeFilter::*)() >(&AIS_AttributeFilter::UnsetColor),
             R"#(Removes the setting for color from the filter.)#" )
        .def("UnsetWidth",
             (void (AIS_AttributeFilter::*)() ) static_cast<void (AIS_AttributeFilter::*)() >(&AIS_AttributeFilter::UnsetWidth),
             R"#(Removes the setting for width from the filter.)#" )
        .def("HasColor",
             (Standard_Boolean (AIS_AttributeFilter::*)() const) static_cast<Standard_Boolean (AIS_AttributeFilter::*)() const>(&AIS_AttributeFilter::HasColor),
             R"#(Indicates that the Interactive Object has the color setting specified by the argument aCol at construction time.)#" )
        .def("HasWidth",
             (Standard_Boolean (AIS_AttributeFilter::*)() const) static_cast<Standard_Boolean (AIS_AttributeFilter::*)() const>(&AIS_AttributeFilter::HasWidth),
             R"#(Indicates that the Interactive Object has the width setting specified by the argument aWidth at construction time.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_AttributeFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_AttributeFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_BadEdgeFilter ,opencascade::handle<AIS_BadEdgeFilter>  , SelectMgr_Filter >>(m.attr("AIS_BadEdgeFilter"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("ActsOn",
             (Standard_Boolean (AIS_BadEdgeFilter::*)( const TopAbs_ShapeEnum  ) const) static_cast<Standard_Boolean (AIS_BadEdgeFilter::*)( const TopAbs_ShapeEnum  ) const>(&AIS_BadEdgeFilter::ActsOn),
             R"#(None)#"  , py::arg("aType"))
        .def("IsOk",
             (Standard_Boolean (AIS_BadEdgeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_BadEdgeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_BadEdgeFilter::IsOk),
             R"#(None)#"  , py::arg("EO"))
        .def("SetContour",
             (void (AIS_BadEdgeFilter::*)( const Standard_Integer  ) ) static_cast<void (AIS_BadEdgeFilter::*)( const Standard_Integer  ) >(&AIS_BadEdgeFilter::SetContour),
             R"#(sets <myContour> with current contour. used by IsOk.)#"  , py::arg("Index"))
        .def("AddEdge",
             (void (AIS_BadEdgeFilter::*)( const TopoDS_Edge & ,  const Standard_Integer  ) ) static_cast<void (AIS_BadEdgeFilter::*)( const TopoDS_Edge & ,  const Standard_Integer  ) >(&AIS_BadEdgeFilter::AddEdge),
             R"#(Adds an edge to the list of non-selectionnable edges.)#"  , py::arg("anEdge"),  py::arg("Index"))
        .def("RemoveEdges",
             (void (AIS_BadEdgeFilter::*)( const Standard_Integer  ) ) static_cast<void (AIS_BadEdgeFilter::*)( const Standard_Integer  ) >(&AIS_BadEdgeFilter::RemoveEdges),
             R"#(removes from the list of non-selectionnable edges all edges in the contour <Index>.)#"  , py::arg("Index"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_BadEdgeFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_BadEdgeFilter::*)() const>(&AIS_BadEdgeFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_BadEdgeFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_BadEdgeFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_C0RegularityFilter ,opencascade::handle<AIS_C0RegularityFilter>  , SelectMgr_Filter >>(m.attr("AIS_C0RegularityFilter"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("aShape") )
    // custom constructors
    // methods
        .def("ActsOn",
             (Standard_Boolean (AIS_C0RegularityFilter::*)( const TopAbs_ShapeEnum  ) const) static_cast<Standard_Boolean (AIS_C0RegularityFilter::*)( const TopAbs_ShapeEnum  ) const>(&AIS_C0RegularityFilter::ActsOn),
             R"#(None)#"  , py::arg("aType"))
        .def("IsOk",
             (Standard_Boolean (AIS_C0RegularityFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_C0RegularityFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_C0RegularityFilter::IsOk),
             R"#(None)#"  , py::arg("EO"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_C0RegularityFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_C0RegularityFilter::*)() const>(&AIS_C0RegularityFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_C0RegularityFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_C0RegularityFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ColoredDrawer ,opencascade::handle<AIS_ColoredDrawer>  , Prs3d_Drawer >>(m.attr("AIS_ColoredDrawer"))
    // constructors
        .def(py::init< const opencascade::handle<Prs3d_Drawer> & >()  , py::arg("theLink") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ColoredDrawer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ColoredDrawer::*)() const>(&AIS_ColoredDrawer::DynamicType),
             R"#(None)#" )
        .def("IsHidden",
             (bool (AIS_ColoredDrawer::*)() const) static_cast<bool (AIS_ColoredDrawer::*)() const>(&AIS_ColoredDrawer::IsHidden),
             R"#(None)#" )
        .def("SetHidden",
             (void (AIS_ColoredDrawer::*)( const bool  ) ) static_cast<void (AIS_ColoredDrawer::*)( const bool  ) >(&AIS_ColoredDrawer::SetHidden),
             R"#(None)#"  , py::arg("theToHide"))
        .def("HasOwnColor",
             (bool (AIS_ColoredDrawer::*)() const) static_cast<bool (AIS_ColoredDrawer::*)() const>(&AIS_ColoredDrawer::HasOwnColor),
             R"#(None)#" )
        .def("UnsetOwnColor",
             (void (AIS_ColoredDrawer::*)() ) static_cast<void (AIS_ColoredDrawer::*)() >(&AIS_ColoredDrawer::UnsetOwnColor),
             R"#(None)#" )
        .def("SetOwnColor",
             (void (AIS_ColoredDrawer::*)( const Quantity_Color &  ) ) static_cast<void (AIS_ColoredDrawer::*)( const Quantity_Color &  ) >(&AIS_ColoredDrawer::SetOwnColor),
             R"#(None)#"  , py::arg(""))
        .def("HasOwnTransparency",
             (bool (AIS_ColoredDrawer::*)() const) static_cast<bool (AIS_ColoredDrawer::*)() const>(&AIS_ColoredDrawer::HasOwnTransparency),
             R"#(None)#" )
        .def("UnsetOwnTransparency",
             (void (AIS_ColoredDrawer::*)() ) static_cast<void (AIS_ColoredDrawer::*)() >(&AIS_ColoredDrawer::UnsetOwnTransparency),
             R"#(None)#" )
        .def("SetOwnTransparency",
             (void (AIS_ColoredDrawer::*)( Standard_Real  ) ) static_cast<void (AIS_ColoredDrawer::*)( Standard_Real  ) >(&AIS_ColoredDrawer::SetOwnTransparency),
             R"#(None)#"  , py::arg(""))
        .def("HasOwnWidth",
             (bool (AIS_ColoredDrawer::*)() const) static_cast<bool (AIS_ColoredDrawer::*)() const>(&AIS_ColoredDrawer::HasOwnWidth),
             R"#(None)#" )
        .def("UnsetOwnWidth",
             (void (AIS_ColoredDrawer::*)() ) static_cast<void (AIS_ColoredDrawer::*)() >(&AIS_ColoredDrawer::UnsetOwnWidth),
             R"#(None)#" )
        .def("SetOwnWidth",
             (void (AIS_ColoredDrawer::*)( const Standard_Real  ) ) static_cast<void (AIS_ColoredDrawer::*)( const Standard_Real  ) >(&AIS_ColoredDrawer::SetOwnWidth),
             R"#(None)#"  , py::arg(""))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ColoredDrawer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ColoredDrawer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_DimensionOwner ,opencascade::handle<AIS_DimensionOwner>  , SelectMgr_EntityOwner >>(m.attr("AIS_DimensionOwner"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_SelectableObject> &,const AIS_DimensionSelectionMode,const Standard_Integer >()  , py::arg("theSelObject"),  py::arg("theSelMode"),  py::arg("thePriority")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_DimensionOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_DimensionOwner::*)() const>(&AIS_DimensionOwner::DynamicType),
             R"#(None)#" )
        .def("SelectionMode",
             (AIS_DimensionSelectionMode (AIS_DimensionOwner::*)() const) static_cast<AIS_DimensionSelectionMode (AIS_DimensionOwner::*)() const>(&AIS_DimensionOwner::SelectionMode),
             R"#(None)#" )
        .def("HilightWithColor",
             (void (AIS_DimensionOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) ) static_cast<void (AIS_DimensionOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) >(&AIS_DimensionOwner::HilightWithColor),
             R"#(None)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("IsHilighted",
             (Standard_Boolean (AIS_DimensionOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_DimensionOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const>(&AIS_DimensionOwner::IsHilighted),
             R"#(Returns true if an object with the selection mode aMode is highlighted in the presentation manager aPM.)#"  , py::arg("thePM"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Unhilight",
             (void (AIS_DimensionOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) ) static_cast<void (AIS_DimensionOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) >(&AIS_DimensionOwner::Unhilight),
             R"#(Removes highlighting from the selected part of dimension.)#"  , py::arg("thePM"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_DimensionOwner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_DimensionOwner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ExclusionFilter ,opencascade::handle<AIS_ExclusionFilter>  , SelectMgr_Filter >>(m.attr("AIS_ExclusionFilter"))
    // constructors
        .def(py::init< const Standard_Boolean >()  , py::arg("ExclusionFlagOn")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const AIS_KindOfInteractive,const Standard_Boolean >()  , py::arg("TypeToExclude"),  py::arg("ExclusionFlagOn")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const AIS_KindOfInteractive,const Standard_Integer,const Standard_Boolean >()  , py::arg("TypeToExclude"),  py::arg("SignatureInType"),  py::arg("ExclusionFlagOn")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (AIS_ExclusionFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_ExclusionFilter::IsOk),
             R"#(None)#"  , py::arg("anObj"))
        .def("Add",
             (Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive  ) ) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive  ) >(&AIS_ExclusionFilter::Add),
             R"#(Adds the type TypeToExclude to the list of types.)#"  , py::arg("TypeToExclude"))
        .def("Add",
             (Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive ,  const Standard_Integer  ) >(&AIS_ExclusionFilter::Add),
             R"#(None)#"  , py::arg("TypeToExclude"),  py::arg("SignatureInType"))
        .def("Remove",
             (Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive  ) ) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive  ) >(&AIS_ExclusionFilter::Remove),
             R"#(None)#"  , py::arg("TypeToExclude"))
        .def("Remove",
             (Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive ,  const Standard_Integer  ) >(&AIS_ExclusionFilter::Remove),
             R"#(None)#"  , py::arg("TypeToExclude"),  py::arg("SignatureInType"))
        .def("Clear",
             (void (AIS_ExclusionFilter::*)() ) static_cast<void (AIS_ExclusionFilter::*)() >(&AIS_ExclusionFilter::Clear),
             R"#(None)#" )
        .def("IsExclusionFlagOn",
             (Standard_Boolean (AIS_ExclusionFilter::*)() const) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)() const>(&AIS_ExclusionFilter::IsExclusionFlagOn),
             R"#(None)#" )
        .def("SetExclusionFlag",
             (void (AIS_ExclusionFilter::*)( const Standard_Boolean  ) ) static_cast<void (AIS_ExclusionFilter::*)( const Standard_Boolean  ) >(&AIS_ExclusionFilter::SetExclusionFlag),
             R"#(None)#"  , py::arg("Status"))
        .def("IsStored",
             (Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive  ) const) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive  ) const>(&AIS_ExclusionFilter::IsStored),
             R"#(None)#"  , py::arg("aType"))
        .def("ListOfStoredTypes",
             (void (AIS_ExclusionFilter::*)( NCollection_List<Standard_Integer> &  ) const) static_cast<void (AIS_ExclusionFilter::*)( NCollection_List<Standard_Integer> &  ) const>(&AIS_ExclusionFilter::ListOfStoredTypes),
             R"#(None)#"  , py::arg("TheList"))
        .def("ListOfSignature",
             (void (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive ,  NCollection_List<Standard_Integer> &  ) const) static_cast<void (AIS_ExclusionFilter::*)( const AIS_KindOfInteractive ,  NCollection_List<Standard_Integer> &  ) const>(&AIS_ExclusionFilter::ListOfSignature),
             R"#(None)#"  , py::arg("aType"),  py::arg("TheStoredList"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ExclusionFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ExclusionFilter::*)() const>(&AIS_ExclusionFilter::DynamicType),
             R"#(None)#" )
        .def("IsExclusionFlagOn",
             (Standard_Boolean (AIS_ExclusionFilter::*)() const) static_cast<Standard_Boolean (AIS_ExclusionFilter::*)() const>(&AIS_ExclusionFilter::IsExclusionFlagOn),
             R"#(None)#" )
        .def("SetExclusionFlag",
             (void (AIS_ExclusionFilter::*)( const Standard_Boolean  ) ) static_cast<void (AIS_ExclusionFilter::*)( const Standard_Boolean  ) >(&AIS_ExclusionFilter::SetExclusionFlag),
             R"#(None)#"  , py::arg("Status"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ExclusionFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ExclusionFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_GlobalStatus ,opencascade::handle<AIS_GlobalStatus>  , Standard_Transient >>(m.attr("AIS_GlobalStatus"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const AIS_DisplayStatus,const Standard_Integer,const Standard_Integer,const Standard_Boolean,const Standard_Integer >()  , py::arg("aStat"),  py::arg("aDispMode"),  py::arg("aSelMode"),  py::arg("ishilighted")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("aLayerIndex")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_GlobalStatus::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::DynamicType),
             R"#(None)#" )
        .def("SetGraphicStatus",
             (void (AIS_GlobalStatus::*)( const AIS_DisplayStatus  ) ) static_cast<void (AIS_GlobalStatus::*)( const AIS_DisplayStatus  ) >(&AIS_GlobalStatus::SetGraphicStatus),
             R"#(None)#"  , py::arg("theStatus"))
        .def("AddSelectionMode",
             (void (AIS_GlobalStatus::*)( const Standard_Integer  ) ) static_cast<void (AIS_GlobalStatus::*)( const Standard_Integer  ) >(&AIS_GlobalStatus::AddSelectionMode),
             R"#(None)#"  , py::arg("theMode"))
        .def("SetDisplayMode",
             (void (AIS_GlobalStatus::*)( const Standard_Integer  ) ) static_cast<void (AIS_GlobalStatus::*)( const Standard_Integer  ) >(&AIS_GlobalStatus::SetDisplayMode),
             R"#(Sets display mode.)#"  , py::arg("theMode"))
        .def("DisplayMode",
             (Standard_Integer (AIS_GlobalStatus::*)() const) static_cast<Standard_Integer (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::DisplayMode),
             R"#(Returns the display mode.)#" )
        .def("SetLayerIndex",
             (void (AIS_GlobalStatus::*)( const Standard_Integer  ) ) static_cast<void (AIS_GlobalStatus::*)( const Standard_Integer  ) >(&AIS_GlobalStatus::SetLayerIndex),
             R"#(None)#"  , py::arg("theIndex"))
        .def("SetHilightStatus",
             (void (AIS_GlobalStatus::*)( const Standard_Boolean  ) ) static_cast<void (AIS_GlobalStatus::*)( const Standard_Boolean  ) >(&AIS_GlobalStatus::SetHilightStatus),
             R"#(None)#"  , py::arg("theStatus"))
        .def("SetHilightStyle",
             (void (AIS_GlobalStatus::*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (AIS_GlobalStatus::*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&AIS_GlobalStatus::SetHilightStyle),
             R"#(Changes applied highlight style for a particular object)#"  , py::arg("theStyle"))
        .def("HilightStyle",
             (const opencascade::handle<Prs3d_Drawer> & (AIS_GlobalStatus::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::HilightStyle),
             R"#(Returns applied highlight style for a particular object)#" )
        .def("IsSubIntensityOn",
             (Standard_Boolean (AIS_GlobalStatus::*)() const) static_cast<Standard_Boolean (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::IsSubIntensityOn),
             R"#(None)#" )
        .def("SubIntensityOn",
             (void (AIS_GlobalStatus::*)() ) static_cast<void (AIS_GlobalStatus::*)() >(&AIS_GlobalStatus::SubIntensityOn),
             R"#(None)#" )
        .def("SubIntensityOff",
             (void (AIS_GlobalStatus::*)() ) static_cast<void (AIS_GlobalStatus::*)() >(&AIS_GlobalStatus::SubIntensityOff),
             R"#(None)#" )
        .def("RemoveSelectionMode",
             (void (AIS_GlobalStatus::*)( const Standard_Integer  ) ) static_cast<void (AIS_GlobalStatus::*)( const Standard_Integer  ) >(&AIS_GlobalStatus::RemoveSelectionMode),
             R"#(None)#"  , py::arg("aMode"))
        .def("ClearSelectionModes",
             (void (AIS_GlobalStatus::*)() ) static_cast<void (AIS_GlobalStatus::*)() >(&AIS_GlobalStatus::ClearSelectionModes),
             R"#(None)#" )
        .def("GraphicStatus",
             (AIS_DisplayStatus (AIS_GlobalStatus::*)() const) static_cast<AIS_DisplayStatus (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::GraphicStatus),
             R"#(None)#" )
        .def("SelectionModes",
             (const TColStd_ListOfInteger & (AIS_GlobalStatus::*)() const) static_cast<const TColStd_ListOfInteger & (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::SelectionModes),
             R"#(keeps the active selection modes of the object in the main viewer.)#" )
        .def("IsHilighted",
             (Standard_Boolean (AIS_GlobalStatus::*)() const) static_cast<Standard_Boolean (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::IsHilighted),
             R"#(None)#" )
        .def("IsSModeIn",
             (Standard_Boolean (AIS_GlobalStatus::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_GlobalStatus::*)( const Standard_Integer  ) const>(&AIS_GlobalStatus::IsSModeIn),
             R"#(None)#"  , py::arg("aMode"))
        .def("GetLayerIndex",
             (Standard_Integer (AIS_GlobalStatus::*)() const) static_cast<Standard_Integer (AIS_GlobalStatus::*)() const>(&AIS_GlobalStatus::GetLayerIndex),
             R"#(Returns layer index.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_GlobalStatus::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_GlobalStatus::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<AIS_GraphicTool , shared_ptr<AIS_GraphicTool>>(m,"AIS_GraphicTool");

    static_cast<py::class_<AIS_GraphicTool , shared_ptr<AIS_GraphicTool>  >>(m.attr("AIS_GraphicTool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("GetLineColor_s",
                    (Quantity_NameOfColor (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute  ) ) static_cast<Quantity_NameOfColor (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute  ) >(&AIS_GraphicTool::GetLineColor),
                    R"#(None)#"  , py::arg("aDrawer"),  py::arg("TheTypeOfAttributes"))
        .def_static("GetLineColor_s",
                    (void (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute ,  Quantity_Color &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute ,  Quantity_Color &  ) >(&AIS_GraphicTool::GetLineColor),
                    R"#(None)#"  , py::arg("aDrawer"),  py::arg("TheTypeOfAttributes"),  py::arg("TheLineColor"))
        .def_static("GetLineWidth_s",
                    (Standard_Real (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute  ) ) static_cast<Standard_Real (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute  ) >(&AIS_GraphicTool::GetLineWidth),
                    R"#(None)#"  , py::arg("aDrawer"),  py::arg("TheTypeOfAttributes"))
        .def_static("GetLineType_s",
                    (Aspect_TypeOfLine (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute  ) ) static_cast<Aspect_TypeOfLine (*)( const opencascade::handle<Prs3d_Drawer> & ,  const AIS_TypeOfAttribute  ) >(&AIS_GraphicTool::GetLineType),
                    R"#(None)#"  , py::arg("aDrawer"),  py::arg("TheTypeOfAttributes"))
        .def_static("GetInteriorColor_s",
                    (Quantity_NameOfColor (*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Quantity_NameOfColor (*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&AIS_GraphicTool::GetInteriorColor),
                    R"#(None)#"  , py::arg("aDrawer"))
        .def_static("GetInteriorColor_s",
                    (void (*)( const opencascade::handle<Prs3d_Drawer> & ,  Quantity_Color &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Drawer> & ,  Quantity_Color &  ) >(&AIS_GraphicTool::GetInteriorColor),
                    R"#(None)#"  , py::arg("aDrawer"),  py::arg("aColor"))
        .def_static("GetMaterial_s",
                    (Graphic3d_MaterialAspect (*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<Graphic3d_MaterialAspect (*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&AIS_GraphicTool::GetMaterial),
                    R"#(None)#"  , py::arg("aDrawer"))
    // static methods using call by reference i.s.o. return
        .def_static("GetLineAtt_s",
                    []( const opencascade::handle<Prs3d_Drawer> & aDrawer,const AIS_TypeOfAttribute TheTypeOfAttributes,Quantity_NameOfColor & aCol,Aspect_TypeOfLine & aTyp ){ Standard_Real  aWidth; AIS_GraphicTool::GetLineAtt(aDrawer,TheTypeOfAttributes,aCol,aWidth,aTyp); return std::make_tuple(aWidth); },
                    R"#(None)#"  , py::arg("aDrawer"),  py::arg("TheTypeOfAttributes"),  py::arg("aCol"),  py::arg("aTyp"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_InteractiveContext ,opencascade::handle<AIS_InteractiveContext>  , Standard_Transient >>(m.attr("AIS_InteractiveContext"))
    // constructors
        .def(py::init< const opencascade::handle<V3d_Viewer> & >()  , py::arg("MainViewer") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DynamicType),
             R"#(None)#" )
        .def("DisplayStatus",
             (AIS_DisplayStatus (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<AIS_DisplayStatus (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::DisplayStatus),
             R"#(Returns the display status of the entity anIobj. This will be one of the following: - AIS_DS_Displayed displayed in main viewer - AIS_DS_Erased hidden in main viewer - AIS_DS_Temporary temporarily displayed - AIS_DS_None nowhere displayed.)#"  , py::arg("anIobj"))
        .def("Status",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  TCollection_ExtendedString &  ) const) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  TCollection_ExtendedString &  ) const>(&AIS_InteractiveContext::Status),
             R"#(Returns the status of the Interactive Context for the view of the Interactive Object.)#"  , py::arg("anObj"),  py::arg("astatus"))
        .def("IsDisplayed",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::IsDisplayed),
             R"#(Returns true if Object is displayed in the interactive context.)#"  , py::arg("anIobj"))
        .def("IsDisplayed",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) const>(&AIS_InteractiveContext::IsDisplayed),
             R"#(None)#"  , py::arg("aniobj"),  py::arg("aMode"))
        .def("SetAutoActivateSelection",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::SetAutoActivateSelection),
             R"#(Enable or disable automatic activation of default selection mode while displaying the object.)#"  , py::arg("theIsAuto"))
        .def("GetAutoActivateSelection",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::GetAutoActivateSelection),
             R"#(Manages displaying the new object should also automatically activate default selection mode; TRUE by default.)#" )
        .def("Display",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Display),
             R"#(Displays the object in this Context using default Display Mode. This will be the object's default display mode, if there is one. Otherwise, it will be the context mode. The Interactive Object's default selection mode is activated if GetAutoActivateSelection() is TRUE. In general, this is 0.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("Display",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const AIS_DisplayStatus  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const AIS_DisplayStatus  ) >(&AIS_InteractiveContext::Display),
             R"#(Sets status, display mode and selection mode for specified Object If theSelectionMode equals -1, theIObj will not be activated: it will be displayed but will not be selectable.)#"  , py::arg("theIObj"),  py::arg("theDispMode"),  py::arg("theSelectionMode"),  py::arg("theToUpdateViewer"),  py::arg("theDispStatus")=static_cast<const AIS_DisplayStatus>(AIS_DS_None))
        .def("Load",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) >(&AIS_InteractiveContext::Load),
             R"#(Allows you to load the Interactive Object with a given selection mode, and/or with the desired decomposition option, whether the object is visualized or not. The loaded objects will be selectable but displayable in highlighting only when detected by the Selector.)#"  , py::arg("theObj"),  py::arg("theSelectionMode")=static_cast<const Standard_Integer>(- 1))
        .def("Display",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean ,  const AIS_DisplayStatus  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Boolean ,  const Standard_Boolean ,  const AIS_DisplayStatus  ) >(&AIS_InteractiveContext::Display),
             R"#(None)#"  , py::arg("theIObj"),  py::arg("theDispMode"),  py::arg("theSelectionMode"),  py::arg("theToUpdateViewer"),  py::arg("theToAllowDecomposition"),  py::arg("theDispStatus")=static_cast<const AIS_DisplayStatus>(AIS_DS_None))
        .def("Load",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  Standard_Integer ,  Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  Standard_Integer ,  Standard_Boolean  ) >(&AIS_InteractiveContext::Load),
             R"#(None)#"  , py::arg("theObj"),  py::arg("theSelectionMode"),  py::arg(""))
        .def("Erase",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Erase),
             R"#(Hides the object. The object's presentations are simply flagged as invisible and therefore excluded from redrawing. To show hidden objects, use Display().)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("EraseAll",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::EraseAll),
             R"#(Hides all objects. The object's presentations are simply flagged as invisible and therefore excluded from redrawing. To show all hidden objects, use DisplayAll().)#"  , py::arg("theToUpdateViewer"))
        .def("DisplayAll",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::DisplayAll),
             R"#(Displays all hidden objects.)#"  , py::arg("theToUpdateViewer"))
        .def("EraseSelected",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::EraseSelected),
             R"#(Hides selected objects. The object's presentations are simply flagged as invisible and therefore excluded from redrawing. To show hidden objects, use Display().)#"  , py::arg("theToUpdateViewer"))
        .def("DisplaySelected",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::DisplaySelected),
             R"#(Displays current objects.)#"  , py::arg("theToUpdateViewer"))
        .def("ClearPrs",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::ClearPrs),
             R"#(Empties the graphic presentation of the mode indexed by aMode. Warning! Removes theIObj. theIObj is still active if it was previously activated.)#"  , py::arg("theIObj"),  py::arg("theMode"),  py::arg("theToUpdateViewer"))
        .def("Remove",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Remove),
             R"#(Removes Object from every viewer.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("RemoveAll",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::RemoveAll),
             R"#(Removes all the objects from Context.)#"  , py::arg("theToUpdateViewer"))
        .def("Redisplay",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Redisplay),
             R"#(Recomputes the seen parts presentation of the Object. If theAllModes equals true, all presentations are present in the object even if unseen.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"),  py::arg("theAllModes")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Redisplay",
             (void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Redisplay),
             R"#(Recomputes the Prs/Selection of displayed objects of a given type and a given signature. if signature = -1 doesn't take signature criterion.)#"  , py::arg("theTypeOfObject"),  py::arg("theSignature"),  py::arg("theToUpdateViewer"))
        .def("RecomputePrsOnly",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::RecomputePrsOnly),
             R"#(Recomputes the displayed presentations, flags the others. Doesn't update presentations.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"),  py::arg("theAllModes")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RecomputeSelectionOnly",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_InteractiveContext::RecomputeSelectionOnly),
             R"#(Recomputes the active selections, flags the others. Doesn't update presentations.)#"  , py::arg("anIObj"))
        .def("Update",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Update),
             R"#(Updates displayed interactive object by checking and recomputing its flagged as "to be recomputed" presentation and selection structures. This method does not force any recomputation on its own. The method recomputes selections even if they are loaded without activation in particular selector.)#"  , py::arg("theIObj"),  py::arg("theUpdateViewer"))
        .def("HighlightStyle",
             (const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)( const Prs3d_TypeOfHighlight  ) const) static_cast<const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)( const Prs3d_TypeOfHighlight  ) const>(&AIS_InteractiveContext::HighlightStyle),
             R"#(Returns highlight style settings.)#"  , py::arg("theStyleType"))
        .def("SetHighlightStyle",
             (void (AIS_InteractiveContext::*)( const Prs3d_TypeOfHighlight ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const Prs3d_TypeOfHighlight ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&AIS_InteractiveContext::SetHighlightStyle),
             R"#(Setup highlight style settings. It is preferred modifying existing style returned by method HighlightStyle() instead of creating a new drawer.)#"  , py::arg("theStyleType"),  py::arg("theStyle"))
        .def("HighlightStyle",
             (const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HighlightStyle),
             R"#(Returns current dynamic highlight style settings. By default: - the color of dynamic highlight is Quantity_NOC_CYAN1; - the presentation for dynamic highlight is completely opaque; - the type of highlight is Aspect_TOHM_COLOR.)#" )
        .def("SetHighlightStyle",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&AIS_InteractiveContext::SetHighlightStyle),
             R"#(Setup the style of dynamic highlighting. It is preferred modifying existing style returned by method HighlightStyle() instead of creating a new drawer.)#"  , py::arg("theStyle"))
        .def("SelectionStyle",
             (const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::SelectionStyle),
             R"#(Returns current selection style settings. By default: - the color of selection is Quantity_NOC_GRAY80; - the presentation for selection is completely opaque; - the type of highlight is Aspect_TOHM_COLOR.)#" )
        .def("SetSelectionStyle",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&AIS_InteractiveContext::SetSelectionStyle),
             R"#(Setup the style of selection highlighting.)#"  , py::arg("theStyle"))
        .def("HighlightStyle",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  opencascade::handle<Prs3d_Drawer> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  opencascade::handle<Prs3d_Drawer> &  ) const>(&AIS_InteractiveContext::HighlightStyle),
             R"#(Returns highlight style of the object if it is marked as highlighted via global status)#"  , py::arg("theObj"),  py::arg("theStyle"))
        .def("HighlightStyle",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  opencascade::handle<Prs3d_Drawer> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  opencascade::handle<Prs3d_Drawer> &  ) const>(&AIS_InteractiveContext::HighlightStyle),
             R"#(Returns highlight style of the owner if it is selected)#"  , py::arg("theOwner"),  py::arg("theStyle"))
        .def("IsHilighted",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::IsHilighted),
             R"#(Returns true if the object is marked as highlighted via its global status)#"  , py::arg("theObj"))
        .def("IsHilighted",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_InteractiveContext::IsHilighted),
             R"#(Returns true if the owner is marked as selected)#"  , py::arg("theOwner"))
        .def("Hilight",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Hilight),
             R"#(Updates the display in the viewer to take dynamic detection into account. On dynamic detection by the mouse cursor, sensitive primitives are highlighted. The highlight color of entities detected by mouse movement is white by default.)#"  , py::arg("theObj"),  py::arg("theIsToUpdateViewer"))
        .def("HilightWithColor",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::HilightWithColor),
             R"#(Changes the color of all the lines of the object in view.)#"  , py::arg("theObj"),  py::arg("theStyle"),  py::arg("theToUpdateViewer"))
        .def("Unhilight",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Unhilight),
             R"#(Removes hilighting from the Object.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("DisplayPriority",
             (Standard_Integer (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Integer (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::DisplayPriority),
             R"#(Returns the display priority of the Object.)#"  , py::arg("theIObj"))
        .def("SetDisplayPriority",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) >(&AIS_InteractiveContext::SetDisplayPriority),
             R"#(Sets the display priority of the seen parts presentation of the Object.)#"  , py::arg("theIObj"),  py::arg("thePriority"))
        .def("GetZLayer",
             (Graphic3d_ZLayerId (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Graphic3d_ZLayerId (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::GetZLayer),
             R"#(Get Z layer id set for displayed interactive object.)#"  , py::arg("theIObj"))
        .def("SetZLayer",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Graphic3d_ZLayerId  ) >(&AIS_InteractiveContext::SetZLayer),
             R"#(Set Z layer id for interactive object. The Z layers can be used to display temporarily presentations of some object in front of the other objects in the scene. The ids for Z layers are generated by V3d_Viewer.)#"  , py::arg("theIObj"),  py::arg("theLayerId"))
        .def("SetViewAffinity",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetViewAffinity),
             R"#(Setup object visibility in specified view. Has no effect if object is not displayed in this context.)#"  , py::arg("theIObj"),  py::arg("theView"),  py::arg("theIsVisible"))
        .def("DisplayMode",
             (Standard_Integer (AIS_InteractiveContext::*)() const) static_cast<Standard_Integer (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DisplayMode),
             R"#(Returns the Display Mode setting to be used by default.)#" )
        .def("SetDisplayMode",
             (void (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetDisplayMode),
             R"#(Sets the display mode of seen Interactive Objects (which have no overridden Display Mode).)#"  , py::arg("theMode"),  py::arg("theToUpdateViewer"))
        .def("SetDisplayMode",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetDisplayMode),
             R"#(Sets the display mode of seen Interactive Objects. theMode provides the display mode index of the entity theIObj.)#"  , py::arg("theIObj"),  py::arg("theMode"),  py::arg("theToUpdateViewer"))
        .def("UnsetDisplayMode",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::UnsetDisplayMode),
             R"#(Unsets the display mode of seen Interactive Objects.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("SetLocation",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const TopLoc_Location &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const TopLoc_Location &  ) >(&AIS_InteractiveContext::SetLocation),
             R"#(Puts the location on the initial graphic representation and the selection for the Object.)#"  , py::arg("theObject"),  py::arg("theLocation"))
        .def("ResetLocation",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_InteractiveContext::ResetLocation),
             R"#(Puts the Object back into its initial position.)#"  , py::arg("theObject"))
        .def("HasLocation",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::HasLocation),
             R"#(Returns true if the Object has a location.)#"  , py::arg("theObject"))
        .def("Location",
             (TopLoc_Location (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<TopLoc_Location (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::Location),
             R"#(Returns the location of the Object.)#"  , py::arg("theObject"))
        .def("SetTransformPersistence",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Graphic3d_TransformPers> &  ) >(&AIS_InteractiveContext::SetTransformPersistence),
             R"#(Sets transform persistence.)#"  , py::arg("theObject"),  py::arg("theTrsfPers"))
        .def("SetTransformPersistence",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Graphic3d_TransModeFlags & ,  const gp_Pnt &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Graphic3d_TransModeFlags & ,  const gp_Pnt &  ) >(&AIS_InteractiveContext::SetTransformPersistence),
             R"#(None)#"  , py::arg("theObj"),  py::arg("theFlag"),  py::arg("thePoint")=static_cast<const gp_Pnt &>(gp_Pnt ( 0.0 , 0.0 , 0.0 )))
        .def("SetPixelTolerance",
             (void (AIS_InteractiveContext::*)( const Standard_Integer  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Integer  ) >(&AIS_InteractiveContext::SetPixelTolerance),
             R"#(Setup pixel tolerance for MoveTo() operation.)#"  , py::arg("thePrecision")=static_cast<const Standard_Integer>(2))
        .def("PixelTolerance",
             (Standard_Integer (AIS_InteractiveContext::*)() const) static_cast<Standard_Integer (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::PixelTolerance),
             R"#(Returns the pixel tolerance, default is 2. Pixel Tolerance extends sensitivity within MoveTo() operation (picking by point) and can be adjusted by application based on user input precision (e.g. screen pixel density, input device precision, etc.).)#" )
        .def("SetSelectionSensitivity",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&AIS_InteractiveContext::SetSelectionSensitivity),
             R"#(Allows to manage sensitivity of a particular selection of interactive object theObject and changes previous sensitivity value of all sensitive entities in selection with theMode to the given theNewSensitivity.)#"  , py::arg("theObject"),  py::arg("theMode"),  py::arg("theNewSensitivity"))
        .def("LastActiveView",
             (opencascade::handle<V3d_View> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<V3d_View> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::LastActiveView),
             R"#(Returns last active View (argument of MoveTo()/Select() methods).)#" )
        .def("MoveTo",
             (AIS_StatusOfDetection (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<AIS_StatusOfDetection (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::MoveTo),
             R"#(Relays mouse position in pixels theXPix and theYPix to the interactive context selectors. This is done by the view theView passing this position to the main viewer and updating it. If theToRedrawOnUpdate is set to false, callee should call RedrawImmediate() to highlight detected object.)#"  , py::arg("theXPix"),  py::arg("theYPix"),  py::arg("theView"),  py::arg("theToRedrawOnUpdate"))
        .def("ClearDetected",
             (Standard_Boolean (AIS_InteractiveContext::*)( Standard_Boolean  ) ) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( Standard_Boolean  ) >(&AIS_InteractiveContext::ClearDetected),
             R"#(Clears the list of entities detected by MoveTo() and resets dynamic highlighting.)#"  , py::arg("theToRedrawImmediate")=static_cast<Standard_Boolean>(Standard_False))
        .def("HasDetected",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HasDetected),
             R"#(Returns true if there is a mouse-detected entity in context.)#" )
        .def("DetectedOwner",
             (const opencascade::handle<SelectMgr_EntityOwner> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<SelectMgr_EntityOwner> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DetectedOwner),
             R"#(Returns the owner of the detected sensitive primitive which is currently dynamically highlighted. WARNING! This method is irrelevant to InitDetected()/MoreDetected()/NextDetected().)#" )
        .def("DetectedInteractive",
             (opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DetectedInteractive),
             R"#(Returns the interactive objects last detected in context. In general this is just a wrapper for Handle(AIS_InteractiveObject)::DownCast(DetectedOwner()->Selectable()).)#" )
        .def("HasDetectedShape",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HasDetectedShape),
             R"#(Returns true if there is a detected shape in local context.)#" )
        .def("DetectedShape",
             (const TopoDS_Shape & (AIS_InteractiveContext::*)() const) static_cast<const TopoDS_Shape & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DetectedShape),
             R"#(Returns the shape detected in local context.)#" )
        .def("HasNextDetected",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HasNextDetected),
             R"#(returns True if other entities were detected in the last mouse detection)#" )
        .def("HilightNextDetected",
             (Standard_Integer (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::HilightNextDetected),
             R"#(If more than 1 object is detected by the selector, only the "best" owner is hilighted at the mouse position. This Method allows the user to hilight one after another the other detected entities. If The method select is called, the selected entity will be the hilighted one! WARNING: Loop Method. When all the detected entities have been hilighted, the next call will hilight the first one again.)#"  , py::arg("theView"),  py::arg("theToRedrawImmediate")=static_cast<const Standard_Boolean>(Standard_True))
        .def("HilightPreviousDetected",
             (Standard_Integer (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<Standard_Integer (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::HilightPreviousDetected),
             R"#(Same as previous methods in reverse direction.)#"  , py::arg("theView"),  py::arg("theToRedrawImmediate")=static_cast<const Standard_Boolean>(Standard_True))
        .def("InitDetected",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::InitDetected),
             R"#(Initialization for iteration through mouse-detected objects in interactive context or in local context if it is opened.)#" )
        .def("MoreDetected",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::MoreDetected),
             R"#(Return TRUE if there is more mouse-detected objects after the current one during iteration through mouse-detected interactive objects.)#" )
        .def("NextDetected",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::NextDetected),
             R"#(Gets next current object during iteration through mouse-detected interactive objects.)#" )
        .def("DetectedCurrentOwner",
             (opencascade::handle<SelectMgr_EntityOwner> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DetectedCurrentOwner),
             R"#(Returns the owner from detected list pointed by current iterator position. WARNING! This method is irrelevant to DetectedOwner() which returns last picked Owner regardless of iterator position!)#" )
        .def("SetSelectedAspect",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_BasicAspect> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_BasicAspect> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetSelectedAspect),
             R"#(Sets the graphic basic aspect to the current presentation of ALL selected objects.)#"  , py::arg("theAspect"),  py::arg("theToUpdateViewer"))
        .def("AddSelect",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&AIS_InteractiveContext::AddSelect),
             R"#(Adds object in the selection.)#"  , py::arg("theObject"))
        .def("AddSelect",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_InteractiveContext::AddSelect),
             R"#(Adds object in the selection.)#"  , py::arg("theObject"))
        .def("Select",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Select),
             R"#(Selects everything found in the bounding rectangle defined by the pixel minima and maxima, XPMin, YPMin, XPMax, and YPMax in the view. The objects detected are passed to the main viewer, which is then updated.)#"  , py::arg("theXPMin"),  py::arg("theYPMin"),  py::arg("theXPMax"),  py::arg("theYPMax"),  py::arg("theView"),  py::arg("theToUpdateViewer"))
        .def("Select",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Select),
             R"#(polyline selection; clears the previous picked list)#"  , py::arg("thePolyline"),  py::arg("theView"),  py::arg("theToUpdateViewer"))
        .def("Select",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::Select),
             R"#(Stores and hilights the previous detected; Unhilights the previous picked.)#"  , py::arg("theToUpdateViewer"))
        .def("ShiftSelect",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::ShiftSelect),
             R"#(Adds the last detected to the list of previous picked. If the last detected was already declared as picked, removes it from the Picked List.)#"  , py::arg("theToUpdateViewer"))
        .def("ShiftSelect",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)(  const NCollection_Array1<gp_Pnt2d> & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::ShiftSelect),
             R"#(Adds the last detected to the list of previous picked. If the last detected was already declared as picked, removes it from the Picked List.)#"  , py::arg("thePolyline"),  py::arg("theView"),  py::arg("theToUpdateViewer"))
        .def("ShiftSelect",
             (AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) ) static_cast<AIS_StatusOfPick (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::ShiftSelect),
             R"#(Rectangle of selection; adds new detected entities into the picked list, removes the detected entities that were already stored.)#"  , py::arg("theXPMin"),  py::arg("theYPMin"),  py::arg("theXPMax"),  py::arg("theYPMax"),  py::arg("theView"),  py::arg("theToUpdateViewer"))
        .def("BoundingBoxOfSelection",
             (Bnd_Box (AIS_InteractiveContext::*)() const) static_cast<Bnd_Box (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::BoundingBoxOfSelection),
             R"#(Returns bounding box of selected objects.)#" )
        .def("FitSelected",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::FitSelected),
             R"#(Fits the view correspondingly to the bounds of selected objects. Infinite objects are ignored if infinite state of AIS_InteractiveObject is set to true.)#"  , py::arg("theView"),  py::arg("theMargin"),  py::arg("theToUpdate"))
        .def("FitSelected",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) >(&AIS_InteractiveContext::FitSelected),
             R"#(Fits the view correspondingly to the bounds of selected objects. Infinite objects are ignored if infinite state of AIS_InteractiveObject is set to true.)#"  , py::arg("theView"))
        .def("ToHilightSelected",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::ToHilightSelected),
             R"#(Return value specified whether selected object must be hilighted when mouse cursor is moved above it)#" )
        .def("SetToHilightSelected",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::SetToHilightSelected),
             R"#(Specify whether selected object must be hilighted when mouse cursor is moved above it (in MoveTo method). By default this value is false and selected object is not hilighted in this case.)#"  , py::arg("toHilight"))
        .def("AutomaticHilight",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::AutomaticHilight),
             R"#(Returns true if the automatic highlight mode is active; TRUE by default.)#" )
        .def("SetAutomaticHilight",
             (void (AIS_InteractiveContext::*)( Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( Standard_Boolean  ) >(&AIS_InteractiveContext::SetAutomaticHilight),
             R"#(Sets the highlighting status of detected and selected entities. This function allows you to disconnect the automatic mode.)#"  , py::arg("theStatus"))
        .def("SetSelected",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetSelected),
             R"#(Unhighlights previously selected owners and marks them as not selected. Marks owner given as selected and highlights it. Performs selection filters check.)#"  , py::arg("theOwners"),  py::arg("theToUpdateViewer"))
        .def("SetSelected",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetSelected),
             R"#(Puts the interactive object aniObj in the list of selected objects. Performs selection filters check.)#"  , py::arg("theObject"),  py::arg("theToUpdateViewer"))
        .def("AddOrRemoveSelected",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::AddOrRemoveSelected),
             R"#(Allows to highlight or unhighlight the owner given depending on its selection status)#"  , py::arg("theObject"),  py::arg("theToUpdateViewer"))
        .def("SetSelectedState",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Boolean  ) ) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetSelectedState),
             R"#(Updates Selected state of specified owner without calling HilightSelected(). Has no effect if Selected state is not changed, and redirects to AddOrRemoveSelected() otherwise.)#"  , py::arg("theOwner"),  py::arg("theIsSelected"))
        .def("HilightSelected",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::HilightSelected),
             R"#(Highlights selected objects.)#"  , py::arg("theToUpdateViewer"))
        .def("UnhilightSelected",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::UnhilightSelected),
             R"#(Removes highlighting from selected objects.)#"  , py::arg("theToUpdateViewer"))
        .def("UpdateSelected",
             (void (AIS_InteractiveContext::*)( Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( Standard_Boolean  ) >(&AIS_InteractiveContext::UpdateSelected),
             R"#(Updates the list of selected objects: i.e. highlights the newly selected ones and unhighlights previously selected objects.)#"  , py::arg("theToUpdateViewer"))
        .def("ClearSelected",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::ClearSelected),
             R"#(Empties previous selected objects in order to get the selected objects detected by the selector using UpdateSelected.)#"  , py::arg("theToUpdateViewer"))
        .def("AddOrRemoveSelected",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::AddOrRemoveSelected),
             R"#(Allows to highlight or unhighlight the owner given depending on its selection status)#"  , py::arg("theOwner"),  py::arg("theToUpdateViewer"))
        .def("IsSelected",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_InteractiveContext::IsSelected),
             R"#(Returns true is the owner given is selected)#"  , py::arg("theOwner"))
        .def("IsSelected",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::IsSelected),
             R"#(Returns true is the object given is selected)#"  , py::arg("theObj"))
        .def("FirstSelectedObject",
             (opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::FirstSelectedObject),
             R"#(Returns the first selected object in the list of current selected.)#" )
        .def("NbSelected",
             (Standard_Integer (AIS_InteractiveContext::*)() ) static_cast<Standard_Integer (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::NbSelected),
             R"#(Count a number of selected entities using InitSelected()+MoreSelected()+NextSelected() iterator.)#" )
        .def("InitSelected",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::InitSelected),
             R"#(Initializes a scan of the selected objects.)#" )
        .def("MoreSelected",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::MoreSelected),
             R"#(Returns true if there is another object found by the scan of the list of selected objects.)#" )
        .def("NextSelected",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::NextSelected),
             R"#(Continues the scan to the next object in the list of selected objects.)#" )
        .def("SelectedOwner",
             (opencascade::handle<SelectMgr_EntityOwner> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::SelectedOwner),
             R"#(Returns the owner of the selected entity.)#" )
        .def("SelectedInteractive",
             (opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::SelectedInteractive),
             R"#(Return Handle(AIS_InteractiveObject)::DownCast (SelectedOwner()->Selectable()).)#" )
        .def("HasSelectedShape",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HasSelectedShape),
             R"#(Returns TRUE if the interactive context has a shape selected.)#" )
        .def("SelectedShape",
             (TopoDS_Shape (AIS_InteractiveContext::*)() const) static_cast<TopoDS_Shape (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::SelectedShape),
             R"#(Returns the selected shape. Basically it is just a shape returned stored by StdSelect_BRepOwner with graphic transformation being applied:)#" )
        .def("HasApplicative",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HasApplicative),
             R"#(Returns SelectedInteractive()->HasOwner().)#" )
        .def("Applicative",
             (opencascade::handle<Standard_Transient> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<Standard_Transient> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::Applicative),
             R"#(Returns SelectedInteractive()->GetOwner().)#" )
        .def("BeginImmediateDraw",
             (Standard_Boolean (AIS_InteractiveContext::*)() ) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::BeginImmediateDraw),
             R"#(initializes the list of presentations to be displayed returns False if no local context is opened.)#" )
        .def("ImmediateAdd",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) ) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) >(&AIS_InteractiveContext::ImmediateAdd),
             R"#(returns True if <anIObj> has been stored in the list.)#"  , py::arg("theObj"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("EndImmediateDraw",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) >(&AIS_InteractiveContext::EndImmediateDraw),
             R"#(returns True if the immediate display has been done.)#"  , py::arg("theView"))
        .def("EndImmediateDraw",
             (Standard_Boolean (AIS_InteractiveContext::*)() ) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::EndImmediateDraw),
             R"#(Uses the First Active View of Main Viewer! returns True if the immediate display has been done.)#" )
        .def("IsImmediateModeOn",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::IsImmediateModeOn),
             R"#(None)#" )
        .def("RedrawImmediate",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_Viewer> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_Viewer> &  ) >(&AIS_InteractiveContext::RedrawImmediate),
             R"#(Redraws immediate structures in all views of the viewer given taking into account its visibility.)#"  , py::arg("theViewer"))
        .def("SetSelectionModeActive",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean ,  const AIS_SelectionModesConcurrency ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean ,  const AIS_SelectionModesConcurrency ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetSelectionModeActive),
             R"#(Activates or deactivates the selection mode for specified object. Has no effect if selection mode was already active/deactivated.)#"  , py::arg("theObj"),  py::arg("theMode"),  py::arg("theToActivate"),  py::arg("theConcurrency")=static_cast<const AIS_SelectionModesConcurrency>(AIS_SelectionModesConcurrency_Multiple),  py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Activate",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Activate),
             R"#(Activates the selection mode aMode whose index is given, for the given interactive entity anIobj.)#"  , py::arg("theObj"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Activate",
             (void (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Integer ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::Activate),
             R"#(Activates the given selection mode for the all displayed objects.)#"  , py::arg("theMode"),  py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Deactivate",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_InteractiveContext::Deactivate),
             R"#(Deactivates all the activated selection modes of an object.)#"  , py::arg("theObj"))
        .def("Deactivate",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) >(&AIS_InteractiveContext::Deactivate),
             R"#(Deactivates all the activated selection modes of the interactive object anIobj with a given selection mode aMode.)#"  , py::arg("theObj"),  py::arg("theMode"))
        .def("Deactivate",
             (void (AIS_InteractiveContext::*)( const Standard_Integer  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Integer  ) >(&AIS_InteractiveContext::Deactivate),
             R"#(Deactivates the given selection mode for all displayed objects.)#"  , py::arg("theMode"))
        .def("Deactivate",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::Deactivate),
             R"#(Deactivates all the activated selection mode at all displayed objects.)#" )
        .def("ActivatedModes",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  NCollection_List<Standard_Integer> &  ) const) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  NCollection_List<Standard_Integer> &  ) const>(&AIS_InteractiveContext::ActivatedModes),
             R"#(Returns the list of activated selection modes.)#"  , py::arg("anIobj"),  py::arg("theList"))
        .def("EntityOwners",
             (void (AIS_InteractiveContext::*)( opencascade::handle<SelectMgr_IndexedMapOfOwner> & ,  const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) const) static_cast<void (AIS_InteractiveContext::*)( opencascade::handle<SelectMgr_IndexedMapOfOwner> & ,  const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer  ) const>(&AIS_InteractiveContext::EntityOwners),
             R"#(Returns a collection containing all entity owners created for the interactive object in specified selection mode (in all active modes if the Mode == -1))#"  , py::arg("theOwners"),  py::arg("theIObj"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1))
        .def("Filters",
             (const SelectMgr_ListOfFilter & (AIS_InteractiveContext::*)() const) static_cast<const SelectMgr_ListOfFilter & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::Filters),
             R"#(Returns the list of filters active in a local context.)#" )
        .def("AddFilter",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_Filter> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_Filter> &  ) >(&AIS_InteractiveContext::AddFilter),
             R"#(Allows you to add the filter.)#"  , py::arg("theFilter"))
        .def("RemoveFilter",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_Filter> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<SelectMgr_Filter> &  ) >(&AIS_InteractiveContext::RemoveFilter),
             R"#(Removes a filter from context.)#"  , py::arg("theFilter"))
        .def("RemoveFilters",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::RemoveFilters),
             R"#(Remove all filters from context.)#" )
        .def("PickingStrategy",
             (SelectMgr_PickingStrategy (AIS_InteractiveContext::*)() const) static_cast<SelectMgr_PickingStrategy (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::PickingStrategy),
             R"#(Return picking strategy; SelectMgr_PickingStrategy_FirstAcceptable by default.)#" )
        .def("SetPickingStrategy",
             (void (AIS_InteractiveContext::*)( const SelectMgr_PickingStrategy  ) ) static_cast<void (AIS_InteractiveContext::*)( const SelectMgr_PickingStrategy  ) >(&AIS_InteractiveContext::SetPickingStrategy),
             R"#(Setup picking strategy - which entities detected by picking line will be accepted, considering Selection Filters. By default (SelectMgr_PickingStrategy_FirstAcceptable), Selection Filters reduce the list of entities so that the context accepts topmost in remaining.)#"  , py::arg("theStrategy"))
        .def("DefaultDrawer",
             (const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DefaultDrawer),
             R"#(Returns the default attribute manager. This contains all the color and line attributes which can be used by interactive objects which do not have their own attributes.)#" )
        .def("CurrentViewer",
             (const opencascade::handle<V3d_Viewer> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<V3d_Viewer> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::CurrentViewer),
             R"#(Returns the current viewer.)#" )
        .def("SelectionManager",
             (const opencascade::handle<SelectMgr_SelectionManager> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<SelectMgr_SelectionManager> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::SelectionManager),
             R"#(None)#" )
        .def("MainPrsMgr",
             (const opencascade::handle<PrsMgr_PresentationManager3d> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<PrsMgr_PresentationManager3d> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::MainPrsMgr),
             R"#(None)#" )
        .def("MainSelector",
             (const opencascade::handle<StdSelect_ViewerSelector3d> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<StdSelect_ViewerSelector3d> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::MainSelector),
             R"#(None)#" )
        .def("UpdateCurrentViewer",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::UpdateCurrentViewer),
             R"#(Updates the current viewer.)#" )
        .def("DisplayedObjects",
             (void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const) static_cast<void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const>(&AIS_InteractiveContext::DisplayedObjects),
             R"#(Returns the list of displayed objects of a particular Type WhichKind and Signature WhichSignature. By Default, WhichSignature equals -1. This means that there is a check on type only.)#"  , py::arg("aListOfIO"))
        .def("DisplayedObjects",
             (void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const) static_cast<void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const>(&AIS_InteractiveContext::DisplayedObjects),
             R"#(gives the list of displayed objects of a particular Type and signature. by Default, <WhichSignature> = -1 means control only on <WhichKind>.)#"  , py::arg("theWhichKind"),  py::arg("theWhichSignature"),  py::arg("theListOfIO"))
        .def("ErasedObjects",
             (void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const) static_cast<void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const>(&AIS_InteractiveContext::ErasedObjects),
             R"#(Returns the list theListOfIO of erased objects (hidden objects) particular Type WhichKind and Signature WhichSignature. By Default, WhichSignature equals 1. This means that there is a check on type only.)#"  , py::arg("theListOfIO"))
        .def("ErasedObjects",
             (void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const) static_cast<void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const>(&AIS_InteractiveContext::ErasedObjects),
             R"#(gives the list of erased objects (hidden objects) Type and signature by Default, <WhichSignature> = -1 means control only on <WhichKind>.)#"  , py::arg("theWhichKind"),  py::arg("theWhichSignature"),  py::arg("theListOfIO"))
        .def("ObjectsByDisplayStatus",
             (void (AIS_InteractiveContext::*)( const AIS_DisplayStatus ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const) static_cast<void (AIS_InteractiveContext::*)( const AIS_DisplayStatus ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const>(&AIS_InteractiveContext::ObjectsByDisplayStatus),
             R"#(Returns the list theListOfIO of objects with indicated display status particular Type WhichKind and Signature WhichSignature. By Default, WhichSignature equals 1. This means that there is a check on type only.)#"  , py::arg("theStatus"),  py::arg("theListOfIO"))
        .def("ObjectsByDisplayStatus",
             (void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  const AIS_DisplayStatus ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const) static_cast<void (AIS_InteractiveContext::*)( const AIS_KindOfInteractive ,  const Standard_Integer ,  const AIS_DisplayStatus ,  NCollection_List<opencascade::handle<AIS_InteractiveObject> > &  ) const>(&AIS_InteractiveContext::ObjectsByDisplayStatus),
             R"#(gives the list of objects with indicated display status Type and signature by Default, <WhichSignature> = -1 means control only on <WhichKind>.)#"  , py::arg("WhichKind"),  py::arg("WhichSignature"),  py::arg("theStatus"),  py::arg("theListOfIO"))
        .def("ObjectsInside",
             (void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > & ,  const AIS_KindOfInteractive ,  const Standard_Integer  ) const) static_cast<void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > & ,  const AIS_KindOfInteractive ,  const Standard_Integer  ) const>(&AIS_InteractiveContext::ObjectsInside),
             R"#(fills <aListOfIO> with objects of a particular Type and Signature with no consideration of display status. by Default, <WhichSignature> = -1 means control only on <WhichKind>. if <WhichKind> = AIS_KOI_None and <WhichSignature> = -1, all the objects are put into the list.)#"  , py::arg("aListOfIO"),  py::arg("WhichKind")=static_cast<const AIS_KindOfInteractive>(AIS_KOI_None),  py::arg("WhichSignature")=static_cast<const Standard_Integer>(- 1))
        .def("RebuildSelectionStructs",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::RebuildSelectionStructs),
             R"#(Rebuilds 1st level of BVH selection forcibly)#" )
        .def("Disconnect",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_InteractiveContext::Disconnect),
             R"#(Disconnects theObjToDisconnect from theAssembly and removes dependent selection structures)#"  , py::arg("theAssembly"),  py::arg("theObjToDisconnect")=static_cast<const opencascade::handle<AIS_InteractiveObject> &>(NULL))
        .def("ObjectsForView",
             (void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean ,  const AIS_DisplayStatus  ) const) static_cast<void (AIS_InteractiveContext::*)( NCollection_List<opencascade::handle<AIS_InteractiveObject> > & ,  const opencascade::handle<V3d_View> & ,  const Standard_Boolean ,  const AIS_DisplayStatus  ) const>(&AIS_InteractiveContext::ObjectsForView),
             R"#(Query objects visible or hidden in specified view due to affinity mask.)#"  , py::arg("theListOfIO"),  py::arg("theView"),  py::arg("theIsVisibleInView"),  py::arg("theStatus")=static_cast<const AIS_DisplayStatus>(AIS_DS_None))
        .def("PurgeDisplay",
             (Standard_Integer (AIS_InteractiveContext::*)() ) static_cast<Standard_Integer (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::PurgeDisplay),
             R"#(Clears all the structures which don't belong to objects displayed at neutral point only effective when no Local Context is opened... returns the number of removed structures from the viewers.)#" )
        .def("GravityPoint",
             (gp_Pnt (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) const) static_cast<gp_Pnt (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) const>(&AIS_InteractiveContext::GravityPoint),
             R"#(Return rotation gravity point.)#"  , py::arg("theView"))
        .def("DisplayActiveSensitive",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) >(&AIS_InteractiveContext::DisplayActiveSensitive),
             R"#(Visualization of sensitives - for debugging purposes!)#"  , py::arg("aView"))
        .def("ClearActiveSensitive",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<V3d_View> &  ) >(&AIS_InteractiveContext::ClearActiveSensitive),
             R"#(Clear visualization of sensitives.)#"  , py::arg("aView"))
        .def("DisplayActiveSensitive",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<V3d_View> &  ) >(&AIS_InteractiveContext::DisplayActiveSensitive),
             R"#(Visualization of sensitives - for debugging purposes!)#"  , py::arg("anObject"),  py::arg("aView"))
        .def("SetLocalAttributes",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetLocalAttributes),
             R"#(Sets the graphic attributes of the interactive object, such as visualization mode, color, and material.)#"  , py::arg("theIObj"),  py::arg("theDrawer"),  py::arg("theToUpdateViewer"))
        .def("UnsetLocalAttributes",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::UnsetLocalAttributes),
             R"#(Removes the settings for local attributes of the Object and returns to defaults.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("SetCurrentFacingModel",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Aspect_TypeOfFacingModel  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Aspect_TypeOfFacingModel  ) >(&AIS_InteractiveContext::SetCurrentFacingModel),
             R"#(change the current facing model apply on polygons for SetColor(), SetTransparency(), SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE. This mean that attributes is applying both on the front and back face.)#"  , py::arg("aniobj"),  py::arg("aModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_BOTH_SIDE))
        .def("HasColor",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::HasColor),
             R"#(Returns true if a view of the Interactive Object has color.)#"  , py::arg("aniobj"))
        .def("Color",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  Quantity_Color &  ) const) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  Quantity_Color &  ) const>(&AIS_InteractiveContext::Color),
             R"#(Returns the color of the Object in the interactive context.)#"  , py::arg("aniobj"),  py::arg("acolor"))
        .def("SetColor",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Quantity_Color & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Quantity_Color & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetColor),
             R"#(Sets the color of the selected entity.)#"  , py::arg("theIObj"),  py::arg("theColor"),  py::arg("theToUpdateViewer"))
        .def("UnsetColor",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::UnsetColor),
             R"#(Removes the color selection for the selected entity.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("Width",
             (Standard_Real (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Real (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::Width),
             R"#(Returns the width of the Interactive Object in the interactive context.)#"  , py::arg("aniobj"))
        .def("SetWidth",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetWidth),
             R"#(Sets the width of the Object.)#"  , py::arg("theIObj"),  py::arg("theValue"),  py::arg("theToUpdateViewer"))
        .def("UnsetWidth",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::UnsetWidth),
             R"#(Removes the width setting of the Object.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("SetMaterial",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Graphic3d_MaterialAspect & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Graphic3d_MaterialAspect & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetMaterial),
             R"#(Provides the type of material setting for the view of the Object.)#"  , py::arg("theIObj"),  py::arg("theMaterial"),  py::arg("theToUpdateViewer"))
        .def("UnsetMaterial",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::UnsetMaterial),
             R"#(Removes the type of material setting for viewing the Object.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("SetTransparency",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetTransparency),
             R"#(Provides the transparency settings for viewing the Object. The transparency value aValue may be between 0.0, opaque, and 1.0, fully transparent.)#"  , py::arg("theIObj"),  py::arg("theValue"),  py::arg("theToUpdateViewer"))
        .def("UnsetTransparency",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::UnsetTransparency),
             R"#(Removes the transparency settings for viewing the Object.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("SetPolygonOffsets",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Integer ,  const Standard_ShortReal ,  const Standard_ShortReal ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetPolygonOffsets),
             R"#(Sets up polygon offsets for the given AIS_InteractiveObject. It simply calls AIS_InteractiveObject::SetPolygonOffsets().)#"  , py::arg("theIObj"),  py::arg("theMode"),  py::arg("theFactor"),  py::arg("theUnits"),  py::arg("theToUpdateViewer"))
        .def("HasPolygonOffsets",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::HasPolygonOffsets),
             R"#(Simply calls AIS_InteractiveObject::HasPolygonOffsets().)#"  , py::arg("anObj"))
        .def("SetTrihedronSize",
             (void (AIS_InteractiveContext::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetTrihedronSize),
             R"#(Sets the size aSize of the trihedron. Is used to change the default value 100 mm for display of trihedra. Use of this function in one of your own interactive objects requires a call to the Compute function of the new class. This will recalculate the presentation for every trihedron displayed.)#"  , py::arg("theSize"),  py::arg("theToUpdateViewer"))
        .def("TrihedronSize",
             (Standard_Real (AIS_InteractiveContext::*)() const) static_cast<Standard_Real (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::TrihedronSize),
             R"#(returns the current value of trihedron size.)#" )
        .def("SetPlaneSize",
             (void (AIS_InteractiveContext::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetPlaneSize),
             R"#(Sets the plane size defined by the length in the X direction XSize and that in the Y direction YSize.)#"  , py::arg("theSizeX"),  py::arg("theSizeY"),  py::arg("theToUpdateViewer"))
        .def("SetPlaneSize",
             (void (AIS_InteractiveContext::*)( const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetPlaneSize),
             R"#(Sets the plane size aSize.)#"  , py::arg("theSize"),  py::arg("theToUpdateViewer"))
        .def("PlaneSize",
             (Standard_Boolean (AIS_InteractiveContext::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( Standard_Real & ,  Standard_Real &  ) const>(&AIS_InteractiveContext::PlaneSize),
             R"#(Returns true if the length in the X direction XSize is the same as that in the Y direction YSize.)#"  , py::arg("XSize"),  py::arg("YSize"))
        .def("SetDeviationCoefficient",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetDeviationCoefficient),
             R"#(Sets the deviation coefficient theCoefficient. Drawings of curves or patches are made with respect to a maximal chordal deviation. A Deviation coefficient is used in the shading display mode. The shape is seen decomposed into triangles. These are used to calculate reflection of light from the surface of the object. The triangles are formed from chords of the curves in the shape. The deviation coefficient theCoefficient gives the highest value of the angle with which a chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is begun. This deviation is absolute and is set through the method: SetMaximalChordialDeviation. The default value is 0.001. In drawing shapes, however, you are allowed to ask for a relative deviation. This deviation will be: SizeOfObject * DeviationCoefficient.)#"  , py::arg("theIObj"),  py::arg("theCoefficient"),  py::arg("theToUpdateViewer"))
        .def("SetDeviationAngle",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetDeviationAngle),
             R"#(None)#"  , py::arg("theIObj"),  py::arg("theAngle"),  py::arg("theToUpdateViewer"))
        .def("SetAngleAndDeviation",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetAngleAndDeviation),
             R"#(Calls the AIS_Shape SetAngleAndDeviation to set both Angle and Deviation coefficients)#"  , py::arg("theIObj"),  py::arg("theAngle"),  py::arg("theToUpdateViewer"))
        .def("SetHLRDeviationCoefficient",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetHLRDeviationCoefficient),
             R"#(Sets the deviation coefficient aCoefficient for removal of hidden lines created by different viewpoints in different presentations. The Default value is 0.02.)#"  , py::arg("theIObj"),  py::arg("theCoefficient"),  py::arg("theToUpdateViewer"))
        .def("SetHLRDeviationAngle",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetHLRDeviationAngle),
             R"#(None)#"  , py::arg("theIObj"),  py::arg("theAngle"),  py::arg("theToUpdateViewer"))
        .def("SetHLRAngleAndDeviation",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Real ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetHLRAngleAndDeviation),
             R"#(Computes a HLRAngle and a HLRDeviationCoefficient by means of the angle anAngle and sets the corresponding methods in the default drawing tool with these values.)#"  , py::arg("theIObj"),  py::arg("theAngle"),  py::arg("theToUpdateViewer"))
        .def("SetDeviationCoefficient",
             (void (AIS_InteractiveContext::*)( const Standard_Real  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real  ) >(&AIS_InteractiveContext::SetDeviationCoefficient),
             R"#(Sets the deviation coefficient theCoefficient. Drawings of curves or patches are made with respect to a maximal chordal deviation. A Deviation coefficient is used in the shading display mode. The shape is seen decomposed into triangles. These are used to calculate reflection of light from the surface of the object. The triangles are formed from chords of the curves in the shape. The deviation coefficient theCoefficient gives the highest value of the angle with which a chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is begun. This deviation is absolute and is set through the method: SetMaximalChordialDeviation. The default value is 0.001. In drawing shapes, however, you are allowed to ask for a relative deviation. This deviation will be: SizeOfObject * DeviationCoefficient.)#"  , py::arg("theCoefficient"))
        .def("DeviationCoefficient",
             (Standard_Real (AIS_InteractiveContext::*)() const) static_cast<Standard_Real (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DeviationCoefficient),
             R"#(Returns the deviation coefficient. Drawings of curves or patches are made with respect to a maximal chordal deviation. A Deviation coefficient is used in the shading display mode. The shape is seen decomposed into triangles. These are used to calculate reflection of light from the surface of the object. The triangles are formed from chords of the curves in the shape. The deviation coefficient gives the highest value of the angle with which a chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is begun. This deviation is absolute and is set through Prs3d_Drawer::SetMaximalChordialDeviation. The default value is 0.001. In drawing shapes, however, you are allowed to ask for a relative deviation. This deviation will be: SizeOfObject * DeviationCoefficient.)#" )
        .def("SetDeviationAngle",
             (void (AIS_InteractiveContext::*)( const Standard_Real  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real  ) >(&AIS_InteractiveContext::SetDeviationAngle),
             R"#(default 12 degrees)#"  , py::arg("anAngle"))
        .def("DeviationAngle",
             (Standard_Real (AIS_InteractiveContext::*)() const) static_cast<Standard_Real (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DeviationAngle),
             R"#(None)#" )
        .def("SetHLRDeviationCoefficient",
             (void (AIS_InteractiveContext::*)( const Standard_Real  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real  ) >(&AIS_InteractiveContext::SetHLRDeviationCoefficient),
             R"#(Sets the deviation coefficient aCoefficient for removal of hidden lines created by different viewpoints in different presentations. The Default value is 0.02.)#"  , py::arg("aCoefficient"))
        .def("HLRDeviationCoefficient",
             (Standard_Real (AIS_InteractiveContext::*)() const) static_cast<Standard_Real (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HLRDeviationCoefficient),
             R"#(Returns the real number value of the hidden line removal deviation coefficient. A Deviation coefficient is used in the shading display mode. The shape is seen decomposed into triangles. These are used to calculate reflection of light from the surface of the object. The triangles are formed from chords of the curves in the shape. The deviation coefficient give the highest value of the angle with which a chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is begun. To find the hidden lines, hidden line display mode entails recalculation of the view at each different projector perspective. Because hidden lines entail calculations of more than usual complexity to decompose them into these triangles, a deviation coefficient allowing greater tolerance is used. This increases efficiency in calculation. The Default value is 0.02.)#" )
        .def("SetHLRAngle",
             (void (AIS_InteractiveContext::*)( const Standard_Real  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real  ) >(&AIS_InteractiveContext::SetHLRAngle),
             R"#(Sets the HLR angle.)#"  , py::arg("theAngle"))
        .def("HLRAngle",
             (Standard_Real (AIS_InteractiveContext::*)() const) static_cast<Standard_Real (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HLRAngle),
             R"#(Returns the real number value of the deviation angle in hidden line removal views in this interactive context. The default value is 20*PI/180.)#" )
        .def("SetHLRAngleAndDeviation",
             (void (AIS_InteractiveContext::*)( const Standard_Real  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Real  ) >(&AIS_InteractiveContext::SetHLRAngleAndDeviation),
             R"#(compute with theAngle a HLRAngle and a HLRDeviationCoefficient and set them in myHLRAngle and in myHLRDeviationCoefficient of myDefaultDrawer; theAngle is in radian; ( 1 deg < angle in deg < 20 deg))#"  , py::arg("theAngle"))
        .def("HiddenLineAspect",
             (opencascade::handle<Prs3d_LineAspect> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<Prs3d_LineAspect> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::HiddenLineAspect),
             R"#(Initializes hidden line aspect in the default drawing tool, or Drawer. The default values are: Color: Quantity_NOC_YELLOW Type of line: Aspect_TOL_DASH Width: 1.)#" )
        .def("SetHiddenLineAspect",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_LineAspect> &  ) const) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<Prs3d_LineAspect> &  ) const>(&AIS_InteractiveContext::SetHiddenLineAspect),
             R"#(Sets the hidden line aspect anAspect. Aspect defines display attributes for hidden lines in HLR projections.)#"  , py::arg("anAspect"))
        .def("DrawHiddenLine",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DrawHiddenLine),
             R"#(returns Standard_True if the hidden lines are to be drawn. By default the hidden lines are not drawn.)#" )
        .def("EnableDrawHiddenLine",
             (void (AIS_InteractiveContext::*)() const) static_cast<void (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::EnableDrawHiddenLine),
             R"#(None)#" )
        .def("DisableDrawHiddenLine",
             (void (AIS_InteractiveContext::*)() const) static_cast<void (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DisableDrawHiddenLine),
             R"#(None)#" )
        .def("SetIsoNumber",
             (void (AIS_InteractiveContext::*)( const Standard_Integer ,  const AIS_TypeOfIso  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Integer ,  const AIS_TypeOfIso  ) >(&AIS_InteractiveContext::SetIsoNumber),
             R"#(Sets the number of U and V isoparameters displayed.)#"  , py::arg("NbIsos"),  py::arg("WhichIsos")=static_cast<const AIS_TypeOfIso>(AIS_TOI_Both))
        .def("IsoNumber",
             (Standard_Integer (AIS_InteractiveContext::*)( const AIS_TypeOfIso  ) ) static_cast<Standard_Integer (AIS_InteractiveContext::*)( const AIS_TypeOfIso  ) >(&AIS_InteractiveContext::IsoNumber),
             R"#(Returns the number of U and V isoparameters displayed.)#"  , py::arg("WhichIsos")=static_cast<const AIS_TypeOfIso>(AIS_TOI_Both))
        .def("IsoOnPlane",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::IsoOnPlane),
             R"#(Returns True if drawing isoparameters on planes is enabled.)#"  , py::arg("SwitchOn"))
        .def("IsoOnPlane",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::IsoOnPlane),
             R"#(Returns True if drawing isoparameters on planes is enabled. if <forUIsos> = False,)#" )
        .def("IsoOnTriangulation",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean ,  const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean ,  const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_InteractiveContext::IsoOnTriangulation),
             R"#(Enables or disables on-triangulation build for isolines for a particular object. In case if on-triangulation builder is disabled, default on-plane builder will compute isolines for the object given.)#"  , py::arg("theIsEnabled"),  py::arg("theObject"))
        .def("IsoOnTriangulation",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::IsoOnTriangulation),
             R"#(Enables or disables on-triangulation build for isolines for default drawer. In case if on-triangulation builder is disabled, default on-plane builder will compute isolines for the object given.)#"  , py::arg("theToSwitchOn"))
        .def("IsoOnTriangulation",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::IsoOnTriangulation),
             R"#(Returns true if drawing isolines on triangulation algorithm is enabled.)#" )
        .def("SetCurrentObject",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SetCurrentObject),
             R"#(Updates the view of the current object in open context. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("AddOrRemoveCurrentObject",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::AddOrRemoveCurrentObject),
             R"#(Allows to add or remove the object given to the list of current and highlight/unhighlight it correspondingly. Is valid for global context only; for local context use method AddOrRemoveSelected. Since this method makes sence only for neutral point selection of a whole object, if 0 selection of the object is empty this method simply does nothing.)#"  , py::arg("theObj"),  py::arg("theIsToUpdateViewer"))
        .def("UpdateCurrent",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::UpdateCurrent),
             R"#(Updates the list of current objects, i.e. hilights new current objects, removes hilighting from former current objects. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#" )
        .def("IsCurrent",
             (Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> &  ) const>(&AIS_InteractiveContext::IsCurrent),
             R"#(Returns true if there is a non-null interactive object in Neutral Point. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#"  , py::arg("theObject"))
        .def("InitCurrent",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::InitCurrent),
             R"#(Initializes a scan of the current selected objects in Neutral Point. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#" )
        .def("MoreCurrent",
             (Standard_Boolean (AIS_InteractiveContext::*)() const) static_cast<Standard_Boolean (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::MoreCurrent),
             R"#(Returns true if there is another object found by the scan of the list of current objects. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#" )
        .def("NextCurrent",
             (void (AIS_InteractiveContext::*)() ) static_cast<void (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::NextCurrent),
             R"#(Continues the scan to the next object in the list of current objects. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#" )
        .def("Current",
             (opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::Current),
             R"#(Returns the current interactive object. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#" )
        .def("NbCurrents",
             (Standard_Integer (AIS_InteractiveContext::*)() ) static_cast<Standard_Integer (AIS_InteractiveContext::*)() >(&AIS_InteractiveContext::NbCurrents),
             R"#(None)#" )
        .def("HilightCurrents",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::HilightCurrents),
             R"#(Highlights current objects. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#"  , py::arg("theToUpdateViewer"))
        .def("UnhilightCurrents",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::UnhilightCurrents),
             R"#(Removes highlighting from current objects. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#"  , py::arg("theToUpdateViewer"))
        .def("ClearCurrents",
             (void (AIS_InteractiveContext::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const Standard_Boolean  ) >(&AIS_InteractiveContext::ClearCurrents),
             R"#(Empties previous current objects in order to get the current objects detected by the selector using UpdateCurrent. Objects selected when there is no open local context are called current objects; those selected in open local context, selected objects.)#"  , py::arg("theToUpdateViewer"))
        .def("DetectedCurrentShape",
             (const TopoDS_Shape & (AIS_InteractiveContext::*)() const) static_cast<const TopoDS_Shape & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DetectedCurrentShape),
             R"#(Returns current mouse-detected shape or empty (null) shape, if current interactive object is not a shape (AIS_Shape) or there is no current mouse-detected interactive object at all. DetectedCurrentOwner()/InitDetected()/MoreDetected()/NextDetected().)#" )
        .def("DetectedCurrentObject",
             (opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::DetectedCurrentObject),
             R"#(Returns current mouse-detected interactive object or null object, if there is no currently detected interactives DetectedCurrentOwner()/InitDetected()/MoreDetected()/NextDetected().)#" )
        .def("SubIntensityColor",
             (const Quantity_Color & (AIS_InteractiveContext::*)() const) static_cast<const Quantity_Color & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::SubIntensityColor),
             R"#(Sub-intensity allows temporary highlighting of particular objects with specified color in a manner of selection highlight, but without actual selection (e.g., global status and owner's selection state will not be updated). The method returns the color of such highlighting. By default, it is Quantity_NOC_GRAY40.)#" )
        .def("SetSubIntensityColor",
             (void (AIS_InteractiveContext::*)( const Quantity_Color &  ) ) static_cast<void (AIS_InteractiveContext::*)( const Quantity_Color &  ) >(&AIS_InteractiveContext::SetSubIntensityColor),
             R"#(Sub-intensity allows temporary highlighting of particular objects with specified color in a manner of selection highlight, but without actual selection (e.g., global status and owner's selection state will not be updated). The method sets up the color for such highlighting. By default, this is Quantity_NOC_GRAY40.)#"  , py::arg("theColor"))
        .def("SubIntensityOn",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SubIntensityOn),
             R"#(Highlights, and removes highlights from, the displayed object which is displayed at Neutral Point with subintensity color. Available only for active local context. There is no effect if there is no local context. If a local context is open, the presentation of the Interactive Object activates the selection mode.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("SubIntensityOff",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const Standard_Boolean  ) >(&AIS_InteractiveContext::SubIntensityOff),
             R"#(Removes the subintensity option for the entity. If a local context is open, the presentation of the Interactive Object activates the selection mode.)#"  , py::arg("theIObj"),  py::arg("theToUpdateViewer"))
        .def("Selection",
             (const opencascade::handle<AIS_Selection> & (AIS_InteractiveContext::*)() const) static_cast<const opencascade::handle<AIS_Selection> & (AIS_InteractiveContext::*)() const>(&AIS_InteractiveContext::Selection),
             R"#(Returns selection instance)#" )
        .def("SetSelection",
             (void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_Selection> &  ) ) static_cast<void (AIS_InteractiveContext::*)( const opencascade::handle<AIS_Selection> &  ) >(&AIS_InteractiveContext::SetSelection),
             R"#(Sets selection instance to manipulate a container of selected owners)#"  , py::arg("theSelection"))
    // methods using call by reference i.s.o. return
        .def("PolygonOffsets",
             []( AIS_InteractiveContext &self , const opencascade::handle<AIS_InteractiveObject> & anObj,Standard_ShortReal & aFactor,Standard_ShortReal & aUnits ){ Standard_Integer  aMode; self.PolygonOffsets(anObj,aMode,aFactor,aUnits); return std::make_tuple(aMode); },
             R"#(Retrieves current polygon offsets settings for Object.)#"  , py::arg("anObj"),  py::arg("aFactor"),  py::arg("aUnits"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_InteractiveContext::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_InteractiveContext::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_InteractiveObject ,opencascade::handle<AIS_InteractiveObject> ,Py_AIS_InteractiveObject , SelectMgr_SelectableObject >>(m.attr("AIS_InteractiveObject"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_InteractiveObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::DynamicType),
             R"#(None)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_InteractiveObject::*)() const) static_cast<AIS_KindOfInteractive (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::Type),
             R"#(Returns the kind of Interactive Object; AIS_KOI_None by default.)#" )
        .def("Signature",
             (Standard_Integer (AIS_InteractiveObject::*)() const) static_cast<Standard_Integer (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::Signature),
             R"#(Specifies additional characteristics of Interactive Object of Type(); -1 by default. Among the datums, this signature is attributed to the shape. The remaining datums have the following default signatures: - Point signature 1 - Axis signature 2 - Trihedron signature 3 - PlaneTrihedron signature 4 - Line signature 5 - Circle signature 6 - Plane signature 7.)#" )
        .def("Redisplay",
             (void (AIS_InteractiveObject::*)( const Standard_Boolean  ) ) static_cast<void (AIS_InteractiveObject::*)( const Standard_Boolean  ) >(&AIS_InteractiveObject::Redisplay),
             R"#(Updates the active presentation; if <AllModes> = Standard_True all the presentations inside are recomputed. IMPORTANT: It is preferable to call Redisplay method of corresponding AIS_InteractiveContext instance for cases when it is accessible. This method just redirects call to myCTXPtr, so this class field must be up to date for proper result.)#"  , py::arg("AllModes")=static_cast<const Standard_Boolean>(Standard_False))
        .def("HasInteractiveContext",
             (Standard_Boolean (AIS_InteractiveObject::*)() const) static_cast<Standard_Boolean (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::HasInteractiveContext),
             R"#(Indicates whether the Interactive Object has a pointer to an interactive context.)#" )
        .def("InteractiveContext",
             (AIS_InteractiveContext * (AIS_InteractiveObject::*)() const) static_cast<AIS_InteractiveContext * (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::InteractiveContext),
             R"#(Returns the context pointer to the interactive context.)#" )
        .def("SetContext",
             (void (AIS_InteractiveObject::*)( const opencascade::handle<AIS_InteractiveContext> &  ) ) static_cast<void (AIS_InteractiveObject::*)( const opencascade::handle<AIS_InteractiveContext> &  ) >(&AIS_InteractiveObject::SetContext),
             R"#(Sets the interactive context aCtx and provides a link to the default drawing tool or "Drawer" if there is none.)#"  , py::arg("aCtx"))
        .def("HasOwner",
             (Standard_Boolean (AIS_InteractiveObject::*)() const) static_cast<Standard_Boolean (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::HasOwner),
             R"#(Returns true if the object has an owner attributed to it. The owner can be a shape for a set of sub-shapes or a sub-shape for sub-shapes which it is composed of, and takes the form of a transient.)#" )
        .def("GetOwner",
             (const opencascade::handle<Standard_Transient> & (AIS_InteractiveObject::*)() const) static_cast<const opencascade::handle<Standard_Transient> & (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::GetOwner),
             R"#(Returns the owner of the Interactive Object. The owner can be a shape for a set of sub-shapes or a sub-shape for sub-shapes which it is composed of, and takes the form of a transient. There are two types of owners: - Direct owners, decomposition shapes such as edges, wires, and faces. - Users, presentable objects connecting to sensitive primitives, or a shape which has been decomposed.)#" )
        .def("SetOwner",
             (void (AIS_InteractiveObject::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (AIS_InteractiveObject::*)( const opencascade::handle<Standard_Transient> &  ) >(&AIS_InteractiveObject::SetOwner),
             R"#(Allows you to attribute the owner theApplicativeEntity to an Interactive Object. This can be a shape for a set of sub-shapes or a sub-shape for sub-shapes which it is composed of. The owner takes the form of a transient.)#"  , py::arg("theApplicativeEntity"))
        .def("ClearOwner",
             (void (AIS_InteractiveObject::*)() ) static_cast<void (AIS_InteractiveObject::*)() >(&AIS_InteractiveObject::ClearOwner),
             R"#(Each Interactive Object has methods which allow us to attribute an Owner to it in the form of a Transient. This method removes the owner from the graphic entity.)#" )
        .def("GetContext",
             (opencascade::handle<AIS_InteractiveContext> (AIS_InteractiveObject::*)() const) static_cast<opencascade::handle<AIS_InteractiveContext> (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::GetContext),
             R"#(Returns the context pointer to the interactive context.)#" )
        .def("HasPresentation",
             (Standard_Boolean (AIS_InteractiveObject::*)() const) static_cast<Standard_Boolean (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::HasPresentation),
             R"#(Returns TRUE when this object has a presentation in the current DisplayMode())#" )
        .def("Presentation",
             (opencascade::handle<Prs3d_Presentation> (AIS_InteractiveObject::*)() const) static_cast<opencascade::handle<Prs3d_Presentation> (AIS_InteractiveObject::*)() const>(&AIS_InteractiveObject::Presentation),
             R"#(Returns the current presentation of this object according to the current DisplayMode())#" )
        .def("SetAspect",
             (void (AIS_InteractiveObject::*)( const opencascade::handle<Prs3d_BasicAspect> &  ) ) static_cast<void (AIS_InteractiveObject::*)( const opencascade::handle<Prs3d_BasicAspect> &  ) >(&AIS_InteractiveObject::SetAspect),
             R"#(Sets the graphic basic aspect to the current presentation.)#"  , py::arg("anAspect"))
        .def("DumpJson",
             (void (AIS_InteractiveObject::*)( std::ostream & ,  const Standard_Integer  ) const) static_cast<void (AIS_InteractiveObject::*)( std::ostream & ,  const Standard_Integer  ) const>(&AIS_InteractiveObject::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_InteractiveObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_InteractiveObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ManipulatorObjectSequence ,opencascade::handle<AIS_ManipulatorObjectSequence>  , Standard_Transient >>(m.attr("AIS_ManipulatorObjectSequence"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Sequence",
             (const NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > & (AIS_ManipulatorObjectSequence::*)() const) static_cast<const NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > & (AIS_ManipulatorObjectSequence::*)() const>(&AIS_ManipulatorObjectSequence::Sequence),
             R"#(None)#" )
        .def("Append",
             (void (AIS_ManipulatorObjectSequence::*)(  const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_ManipulatorObjectSequence::*)(  const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_ManipulatorObjectSequence::Append),
             R"#(None)#"  , py::arg("theItem"))
        .def("Append",
             (void (AIS_ManipulatorObjectSequence::*)( NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > &  ) ) static_cast<void (AIS_ManipulatorObjectSequence::*)( NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > &  ) >(&AIS_ManipulatorObjectSequence::Append),
             R"#(None)#"  , py::arg("theSequence"))
        .def("ChangeSequence",
             (NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > & (AIS_ManipulatorObjectSequence::*)() ) static_cast<NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> > & (AIS_ManipulatorObjectSequence::*)() >(&AIS_ManipulatorObjectSequence::ChangeSequence),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ManipulatorObjectSequence::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ManipulatorObjectSequence::*)() const>(&AIS_ManipulatorObjectSequence::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ManipulatorObjectSequence::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ManipulatorObjectSequence::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ManipulatorOwner ,opencascade::handle<AIS_ManipulatorOwner>  , SelectMgr_EntityOwner >>(m.attr("AIS_ManipulatorOwner"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_SelectableObject> &,const Standard_Integer,const AIS_ManipulatorMode,const Standard_Integer >()  , py::arg("theSelObject"),  py::arg("theIndex"),  py::arg("theMode"),  py::arg("thePriority")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ManipulatorOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ManipulatorOwner::*)() const>(&AIS_ManipulatorOwner::DynamicType),
             R"#(None)#" )
        .def("HilightWithColor",
             (void (AIS_ManipulatorOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) ) static_cast<void (AIS_ManipulatorOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) >(&AIS_ManipulatorOwner::HilightWithColor),
             R"#(None)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theMode"))
        .def("IsHilighted",
             (Standard_Boolean (AIS_ManipulatorOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_ManipulatorOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const>(&AIS_ManipulatorOwner::IsHilighted),
             R"#(None)#"  , py::arg("thePM"),  py::arg("theMode"))
        .def("Unhilight",
             (void (AIS_ManipulatorOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) ) static_cast<void (AIS_ManipulatorOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) >(&AIS_ManipulatorOwner::Unhilight),
             R"#(None)#"  , py::arg("thePM"),  py::arg("theMode"))
        .def("Mode",
             (AIS_ManipulatorMode (AIS_ManipulatorOwner::*)() const) static_cast<AIS_ManipulatorMode (AIS_ManipulatorOwner::*)() const>(&AIS_ManipulatorOwner::Mode),
             R"#(None)#" )
        .def("Index",
             (Standard_Integer (AIS_ManipulatorOwner::*)() const) static_cast<Standard_Integer (AIS_ManipulatorOwner::*)() const>(&AIS_ManipulatorOwner::Index),
             R"#(Returns index of manipulator axis.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ManipulatorOwner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ManipulatorOwner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_PointCloudOwner ,opencascade::handle<AIS_PointCloudOwner>  , SelectMgr_EntityOwner >>(m.attr("AIS_PointCloudOwner"))
    // constructors
        .def(py::init< const opencascade::handle<AIS_PointCloud> & >()  , py::arg("theOrigin") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_PointCloudOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_PointCloudOwner::*)() const>(&AIS_PointCloudOwner::DynamicType),
             R"#(None)#" )
        .def("SelectedPoints",
             (const opencascade::handle<TColStd_HPackedMapOfInteger> & (AIS_PointCloudOwner::*)() const) static_cast<const opencascade::handle<TColStd_HPackedMapOfInteger> & (AIS_PointCloudOwner::*)() const>(&AIS_PointCloudOwner::SelectedPoints),
             R"#(Return selected points. WARNING! Indexation starts with 0 (shifted by -1 comparing to Graphic3d_ArrayOfPoints::Vertice()).)#" )
        .def("DetectedPoints",
             (const opencascade::handle<TColStd_HPackedMapOfInteger> & (AIS_PointCloudOwner::*)() const) static_cast<const opencascade::handle<TColStd_HPackedMapOfInteger> & (AIS_PointCloudOwner::*)() const>(&AIS_PointCloudOwner::DetectedPoints),
             R"#(Return last detected points. WARNING! Indexation starts with 0 (shifted by -1 comparing to Graphic3d_ArrayOfPoints::Vertice()).)#" )
        .def("IsForcedHilight",
             (Standard_Boolean (AIS_PointCloudOwner::*)() const) static_cast<Standard_Boolean (AIS_PointCloudOwner::*)() const>(&AIS_PointCloudOwner::IsForcedHilight),
             R"#(Always update dynamic highlighting.)#" )
        .def("HilightWithColor",
             (void (AIS_PointCloudOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) ) static_cast<void (AIS_PointCloudOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) >(&AIS_PointCloudOwner::HilightWithColor),
             R"#(Handle dynamic highlighting.)#"  , py::arg("thePrsMgr"),  py::arg("theStyle"),  py::arg("theMode"))
        .def("Unhilight",
             (void (AIS_PointCloudOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) ) static_cast<void (AIS_PointCloudOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) >(&AIS_PointCloudOwner::Unhilight),
             R"#(Removes highlighting.)#"  , py::arg("thePrsMgr"),  py::arg("theMode"))
        .def("Clear",
             (void (AIS_PointCloudOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) ) static_cast<void (AIS_PointCloudOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) >(&AIS_PointCloudOwner::Clear),
             R"#(Clears presentation.)#"  , py::arg("thePrsMgr"),  py::arg("theMode"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_PointCloudOwner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_PointCloudOwner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Selection ,opencascade::handle<AIS_Selection>  , Standard_Transient >>(m.attr("AIS_Selection"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Selection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Selection::*)() const>(&AIS_Selection::DynamicType),
             R"#(None)#" )
        .def("Clear",
             (void (AIS_Selection::*)() ) static_cast<void (AIS_Selection::*)() >(&AIS_Selection::Clear),
             R"#(removes all the object of the selection.)#" )
        .def("Select",
             (AIS_SelectStatus (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<AIS_SelectStatus (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&AIS_Selection::Select),
             R"#(if the object is not yet in the selection, it will be added. if the object is already in the selection, it will be removed.)#"  , py::arg("theObject"))
        .def("AddSelect",
             (AIS_SelectStatus (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<AIS_SelectStatus (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&AIS_Selection::AddSelect),
             R"#(the object is always add int the selection. faster when the number of objects selected is great.)#"  , py::arg("theObject"))
        .def("ClearAndSelect",
             (void (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<void (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&AIS_Selection::ClearAndSelect),
             R"#(clears the selection and adds the object in the selection.)#"  , py::arg("theObject"))
        .def("IsSelected",
             (Standard_Boolean (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_Selection::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_Selection::IsSelected),
             R"#(checks if the object is in the selection.)#"  , py::arg("theObject"))
        .def("Objects",
             (const AIS_NListOfEntityOwner & (AIS_Selection::*)() const) static_cast<const AIS_NListOfEntityOwner & (AIS_Selection::*)() const>(&AIS_Selection::Objects),
             R"#(Return the list of selected objects.)#" )
        .def("Extent",
             (Standard_Integer (AIS_Selection::*)() const) static_cast<Standard_Integer (AIS_Selection::*)() const>(&AIS_Selection::Extent),
             R"#(Return the number of selected objects.)#" )
        .def("IsEmpty",
             (Standard_Boolean (AIS_Selection::*)() const) static_cast<Standard_Boolean (AIS_Selection::*)() const>(&AIS_Selection::IsEmpty),
             R"#(Return true if list of selected objects is empty.)#" )
        .def("Init",
             (void (AIS_Selection::*)() ) static_cast<void (AIS_Selection::*)() >(&AIS_Selection::Init),
             R"#(Start iteration through selected objects.)#" )
        .def("More",
             (Standard_Boolean (AIS_Selection::*)() const) static_cast<Standard_Boolean (AIS_Selection::*)() const>(&AIS_Selection::More),
             R"#(Return true if iterator points to selected object.)#" )
        .def("Next",
             (void (AIS_Selection::*)() ) static_cast<void (AIS_Selection::*)() >(&AIS_Selection::Next),
             R"#(Continue iteration through selected objects.)#" )
        .def("Value",
             (const opencascade::handle<SelectMgr_EntityOwner> & (AIS_Selection::*)() const) static_cast<const opencascade::handle<SelectMgr_EntityOwner> & (AIS_Selection::*)() const>(&AIS_Selection::Value),
             R"#(Return selected object at iterator position.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Selection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Selection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_TrihedronOwner ,opencascade::handle<AIS_TrihedronOwner>  , SelectMgr_EntityOwner >>(m.attr("AIS_TrihedronOwner"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_SelectableObject> &,const Prs3d_DatumParts,const Standard_Integer >()  , py::arg("theSelObject"),  py::arg("theDatumPart"),  py::arg("thePriority") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_TrihedronOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_TrihedronOwner::*)() const>(&AIS_TrihedronOwner::DynamicType),
             R"#(None)#" )
        .def("DatumPart",
             (Prs3d_DatumParts (AIS_TrihedronOwner::*)() const) static_cast<Prs3d_DatumParts (AIS_TrihedronOwner::*)() const>(&AIS_TrihedronOwner::DatumPart),
             R"#(Returns the datum part identifier.)#" )
        .def("HilightWithColor",
             (void (AIS_TrihedronOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) ) static_cast<void (AIS_TrihedronOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) >(&AIS_TrihedronOwner::HilightWithColor),
             R"#(Highlights selectable object's presentation.)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theMode"))
        .def("IsHilighted",
             (Standard_Boolean (AIS_TrihedronOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_TrihedronOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const>(&AIS_TrihedronOwner::IsHilighted),
             R"#(Returns true if the presentation manager thePM highlights selections corresponding to the selection mode aMode.)#"  , py::arg("thePM"),  py::arg("theMode"))
        .def("Unhilight",
             (void (AIS_TrihedronOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) ) static_cast<void (AIS_TrihedronOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) >(&AIS_TrihedronOwner::Unhilight),
             R"#(Removes highlighting from the owner of a detected selectable object in the presentation manager thePM.)#"  , py::arg("thePM"),  py::arg("theMode"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_TrihedronOwner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_TrihedronOwner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_TypeFilter ,opencascade::handle<AIS_TypeFilter>  , SelectMgr_Filter >>(m.attr("AIS_TypeFilter"))
    // constructors
        .def(py::init< const AIS_KindOfInteractive >()  , py::arg("aGivenKind") )
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (AIS_TypeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_TypeFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_TypeFilter::IsOk),
             R"#(Returns False if the transient is not an Interactive Object, or if the type of the Interactive Object is not the same as that stored in the filter.)#"  , py::arg("anobj"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_TypeFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_TypeFilter::*)() const>(&AIS_TypeFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_TypeFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_TypeFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ViewController , shared_ptr<AIS_ViewController>  >>(m.attr("AIS_ViewController"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("InputBuffer",
             (const AIS_ViewInputBuffer & (AIS_ViewController::*)( AIS_ViewInputBufferType  ) const) static_cast<const AIS_ViewInputBuffer & (AIS_ViewController::*)( AIS_ViewInputBufferType  ) const>(&AIS_ViewController::InputBuffer),
             R"#(Return input buffer.)#"  , py::arg("theType"))
        .def("ChangeInputBuffer",
             (AIS_ViewInputBuffer & (AIS_ViewController::*)( AIS_ViewInputBufferType  ) ) static_cast<AIS_ViewInputBuffer & (AIS_ViewController::*)( AIS_ViewInputBufferType  ) >(&AIS_ViewController::ChangeInputBuffer),
             R"#(Return input buffer.)#"  , py::arg("theType"))
        .def("ViewAnimation",
             (const opencascade::handle<AIS_AnimationCamera> & (AIS_ViewController::*)() const) static_cast<const opencascade::handle<AIS_AnimationCamera> & (AIS_ViewController::*)() const>(&AIS_ViewController::ViewAnimation),
             R"#(Return view animation; empty (but not NULL) animation by default.)#" )
        .def("SetViewAnimation",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_AnimationCamera> &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_AnimationCamera> &  ) >(&AIS_ViewController::SetViewAnimation),
             R"#(Set view animation to be handled within handleViewRedraw().)#"  , py::arg("theAnimation"))
        .def("AbortViewAnimation",
             (void (AIS_ViewController::*)() ) static_cast<void (AIS_ViewController::*)() >(&AIS_ViewController::AbortViewAnimation),
             R"#(Interrupt active view animation.)#" )
        .def("RotationMode",
             (AIS_RotationMode (AIS_ViewController::*)() const) static_cast<AIS_RotationMode (AIS_ViewController::*)() const>(&AIS_ViewController::RotationMode),
             R"#(Return camera rotation mode, AIS_RotationMode_BndBoxActive by default.)#" )
        .def("SetRotationMode",
             (void (AIS_ViewController::*)( AIS_RotationMode  ) ) static_cast<void (AIS_ViewController::*)( AIS_RotationMode  ) >(&AIS_ViewController::SetRotationMode),
             R"#(Set camera rotation mode.)#"  , py::arg("theMode"))
        .def("NavigationMode",
             (AIS_NavigationMode (AIS_ViewController::*)() const) static_cast<AIS_NavigationMode (AIS_ViewController::*)() const>(&AIS_ViewController::NavigationMode),
             R"#(Return camera navigation mode; AIS_NavigationMode_Orbit by default.)#" )
        .def("SetNavigationMode",
             (void (AIS_ViewController::*)( AIS_NavigationMode  ) ) static_cast<void (AIS_ViewController::*)( AIS_NavigationMode  ) >(&AIS_ViewController::SetNavigationMode),
             R"#(Set camera navigation mode.)#"  , py::arg("theMode"))
        .def("MouseAcceleration",
             (float (AIS_ViewController::*)() const) static_cast<float (AIS_ViewController::*)() const>(&AIS_ViewController::MouseAcceleration),
             R"#(Return mouse input acceleration ratio in First Person mode; 1.0 by default.)#" )
        .def("SetMouseAcceleration",
             (void (AIS_ViewController::*)( float  ) ) static_cast<void (AIS_ViewController::*)( float  ) >(&AIS_ViewController::SetMouseAcceleration),
             R"#(Set mouse input acceleration ratio.)#"  , py::arg("theRatio"))
        .def("OrbitAcceleration",
             (float (AIS_ViewController::*)() const) static_cast<float (AIS_ViewController::*)() const>(&AIS_ViewController::OrbitAcceleration),
             R"#(Return orbit rotation acceleration ratio; 1.0 by default.)#" )
        .def("SetOrbitAcceleration",
             (void (AIS_ViewController::*)( float  ) ) static_cast<void (AIS_ViewController::*)( float  ) >(&AIS_ViewController::SetOrbitAcceleration),
             R"#(Set orbit rotation acceleration ratio.)#"  , py::arg("theRatio"))
        .def("ToShowPanAnchorPoint",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToShowPanAnchorPoint),
             R"#(Return TRUE if panning anchor point within perspective projection should be displayed in 3D Viewer; TRUE by default.)#" )
        .def("SetShowPanAnchorPoint",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetShowPanAnchorPoint),
             R"#(Set if panning anchor point within perspective projection should be displayed in 3D Viewer.)#"  , py::arg("theToShow"))
        .def("ToShowRotateCenter",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToShowRotateCenter),
             R"#(Return TRUE if rotation point should be displayed in 3D Viewer; TRUE by default.)#" )
        .def("SetShowRotateCenter",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetShowRotateCenter),
             R"#(Set if rotation point should be displayed in 3D Viewer.)#"  , py::arg("theToShow"))
        .def("ToLockOrbitZUp",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToLockOrbitZUp),
             R"#(Return TRUE if camera up orientation within AIS_NavigationMode_Orbit rotation mode should be forced Z up; FALSE by default.)#" )
        .def("SetLockOrbitZUp",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetLockOrbitZUp),
             R"#(Set if camera up orientation within AIS_NavigationMode_Orbit rotation mode should be forced Z up.)#"  , py::arg("theToForceUp"))
        .def("ToAllowTouchZRotation",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToAllowTouchZRotation),
             R"#(Return TRUE if z-rotation via two-touches gesture is enabled; FALSE by default.)#" )
        .def("SetAllowTouchZRotation",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetAllowTouchZRotation),
             R"#(Set if z-rotation via two-touches gesture is enabled.)#"  , py::arg("theToEnable"))
        .def("ToAllowRotation",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToAllowRotation),
             R"#(Return TRUE if camera rotation is allowed; TRUE by default.)#" )
        .def("SetAllowRotation",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetAllowRotation),
             R"#(Set if camera rotation is allowed.)#"  , py::arg("theToEnable"))
        .def("ToAllowPanning",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToAllowPanning),
             R"#(Return TRUE if panning is allowed; TRUE by default.)#" )
        .def("SetAllowPanning",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetAllowPanning),
             R"#(Set if panning is allowed.)#"  , py::arg("theToEnable"))
        .def("ToAllowZooming",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToAllowZooming),
             R"#(Return TRUE if zooming is allowed; TRUE by default.)#" )
        .def("SetAllowZooming",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetAllowZooming),
             R"#(Set if zooming is allowed.)#"  , py::arg("theToEnable"))
        .def("ToAllowZFocus",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToAllowZFocus),
             R"#(Return TRUE if ZFocus change is allowed; TRUE by default.)#" )
        .def("SetAllowZFocus",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetAllowZFocus),
             R"#(Set if ZFocus change is allowed.)#"  , py::arg("theToEnable"))
        .def("ToAllowHighlight",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToAllowHighlight),
             R"#(Return TRUE if dynamic highlight on mouse move is allowed; TRUE by default.)#" )
        .def("SetAllowHighlight",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetAllowHighlight),
             R"#(Set if dragging object is allowed.)#"  , py::arg("theToEnable"))
        .def("ToAllowDragging",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToAllowDragging),
             R"#(Return TRUE if dragging object is allowed; TRUE by default.)#" )
        .def("SetAllowDragging",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetAllowDragging),
             R"#(Set if dynamic highlight on mouse move is allowed.)#"  , py::arg("theToEnable"))
        .def("ToStickToRayOnZoom",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToStickToRayOnZoom),
             R"#(Return TRUE if picked point should be projected to picking ray on zooming at point; TRUE by default.)#" )
        .def("SetStickToRayOnZoom",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetStickToRayOnZoom),
             R"#(Set if picked point should be projected to picking ray on zooming at point.)#"  , py::arg("theToEnable"))
        .def("ToStickToRayOnRotation",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToStickToRayOnRotation),
             R"#(Return TRUE if picked point should be projected to picking ray on rotating around point; TRUE by default.)#" )
        .def("SetStickToRayOnRotation",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetStickToRayOnRotation),
             R"#(Set if picked point should be projected to picking ray on rotating around point.)#"  , py::arg("theToEnable"))
        .def("ToInvertPitch",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::ToInvertPitch),
             R"#(Return TRUE if pitch direction should be inverted while processing Aspect_VKey_NavLookUp/Aspect_VKey_NavLookDown; FALSE by default.)#" )
        .def("SetInvertPitch",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::SetInvertPitch),
             R"#(Set flag inverting pitch direction.)#"  , py::arg("theToInvert"))
        .def("WalkSpeedAbsolute",
             (float (AIS_ViewController::*)() const) static_cast<float (AIS_ViewController::*)() const>(&AIS_ViewController::WalkSpeedAbsolute),
             R"#(Return normal walking speed, in m/s; 1.5 by default.)#" )
        .def("SetWalkSpeedAbsolute",
             (void (AIS_ViewController::*)( float  ) ) static_cast<void (AIS_ViewController::*)( float  ) >(&AIS_ViewController::SetWalkSpeedAbsolute),
             R"#(Set normal walking speed, in m/s; 1.5 by default.)#"  , py::arg("theSpeed"))
        .def("WalkSpeedRelative",
             (float (AIS_ViewController::*)() const) static_cast<float (AIS_ViewController::*)() const>(&AIS_ViewController::WalkSpeedRelative),
             R"#(Return walking speed relative to scene bounding box; 0.1 by default.)#" )
        .def("SetWalkSpeedRelative",
             (void (AIS_ViewController::*)( float  ) ) static_cast<void (AIS_ViewController::*)( float  ) >(&AIS_ViewController::SetWalkSpeedRelative),
             R"#(Set walking speed relative to scene bounding box.)#"  , py::arg("theFactor"))
        .def("ThrustSpeed",
             (float (AIS_ViewController::*)() const) static_cast<float (AIS_ViewController::*)() const>(&AIS_ViewController::ThrustSpeed),
             R"#(Return active thrust value; 0.0f by default.)#" )
        .def("SetThrustSpeed",
             (void (AIS_ViewController::*)( float  ) ) static_cast<void (AIS_ViewController::*)( float  ) >(&AIS_ViewController::SetThrustSpeed),
             R"#(Set active thrust value.)#"  , py::arg("theSpeed"))
        .def("HasPreviousMoveTo",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::HasPreviousMoveTo),
             R"#(Return TRUE if previous position of MoveTo has been defined.)#" )
        .def("PreviousMoveTo",
             (const Graphic3d_Vec2i & (AIS_ViewController::*)() const) static_cast<const Graphic3d_Vec2i & (AIS_ViewController::*)() const>(&AIS_ViewController::PreviousMoveTo),
             R"#(Return previous position of MoveTo event in 3D viewer.)#" )
        .def("ResetPreviousMoveTo",
             (void (AIS_ViewController::*)() ) static_cast<void (AIS_ViewController::*)() >(&AIS_ViewController::ResetPreviousMoveTo),
             R"#(Reset previous position of MoveTo.)#" )
        .def("Keys",
             (const Aspect_VKeySet & (AIS_ViewController::*)() const) static_cast<const Aspect_VKeySet & (AIS_ViewController::*)() const>(&AIS_ViewController::Keys),
             R"#(Return keyboard state.)#" )
        .def("ChangeKeys",
             (Aspect_VKeySet & (AIS_ViewController::*)() ) static_cast<Aspect_VKeySet & (AIS_ViewController::*)() >(&AIS_ViewController::ChangeKeys),
             R"#(Return keyboard state.)#" )
        .def("KeyDown",
             (void (AIS_ViewController::*)( Aspect_VKey ,  double ,  double  ) ) static_cast<void (AIS_ViewController::*)( Aspect_VKey ,  double ,  double  ) >(&AIS_ViewController::KeyDown),
             R"#(Press key.)#"  , py::arg("theKey"),  py::arg("theTime"),  py::arg("thePressure")=static_cast<double>(1.0))
        .def("KeyUp",
             (void (AIS_ViewController::*)( Aspect_VKey ,  double  ) ) static_cast<void (AIS_ViewController::*)( Aspect_VKey ,  double  ) >(&AIS_ViewController::KeyUp),
             R"#(Release key.)#"  , py::arg("theKey"),  py::arg("theTime"))
        .def("KeyFromAxis",
             (void (AIS_ViewController::*)( Aspect_VKey ,  Aspect_VKey ,  double ,  double  ) ) static_cast<void (AIS_ViewController::*)( Aspect_VKey ,  Aspect_VKey ,  double ,  double  ) >(&AIS_ViewController::KeyFromAxis),
             R"#(Simulate key up/down events from axis value.)#"  , py::arg("theNegative"),  py::arg("thePositive"),  py::arg("theTime"),  py::arg("thePressure"))
        .def("FetchNavigationKeys",
             (AIS_WalkDelta (AIS_ViewController::*)( Standard_Real ,  Standard_Real  ) ) static_cast<AIS_WalkDelta (AIS_ViewController::*)( Standard_Real ,  Standard_Real  ) >(&AIS_ViewController::FetchNavigationKeys),
             R"#(Fetch active navigation actions.)#"  , py::arg("theCrouchRatio"),  py::arg("theRunRatio"))
        .def("MouseGestureMap",
             (const AIS_MouseGestureMap & (AIS_ViewController::*)() const) static_cast<const AIS_MouseGestureMap & (AIS_ViewController::*)() const>(&AIS_ViewController::MouseGestureMap),
             R"#(Return map defining mouse gestures.)#" )
        .def("ChangeMouseGestureMap",
             (AIS_MouseGestureMap & (AIS_ViewController::*)() ) static_cast<AIS_MouseGestureMap & (AIS_ViewController::*)() >(&AIS_ViewController::ChangeMouseGestureMap),
             R"#(Return map defining mouse gestures.)#" )
        .def("MouseDoubleClickInterval",
             (double (AIS_ViewController::*)() const) static_cast<double (AIS_ViewController::*)() const>(&AIS_ViewController::MouseDoubleClickInterval),
             R"#(Return double click interval in seconds; 0.4 by default.)#" )
        .def("SetMouseDoubleClickInterval",
             (void (AIS_ViewController::*)( double  ) ) static_cast<void (AIS_ViewController::*)( double  ) >(&AIS_ViewController::SetMouseDoubleClickInterval),
             R"#(Set double click interval in seconds.)#"  , py::arg("theSeconds"))
        .def("SelectInViewer",
             (void (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  const bool  ) ) static_cast<void (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  const bool  ) >(&AIS_ViewController::SelectInViewer),
             R"#(Perform selection in 3D viewer. This method is expected to be called from UI thread.)#"  , py::arg("thePnt"),  py::arg("theIsXOR")=static_cast<const bool>(false))
        .def("SelectInViewer",
             (void (AIS_ViewController::*)( const NCollection_Sequence<Graphic3d_Vec2i> & ,  const bool  ) ) static_cast<void (AIS_ViewController::*)( const NCollection_Sequence<Graphic3d_Vec2i> & ,  const bool  ) >(&AIS_ViewController::SelectInViewer),
             R"#(Perform selection in 3D viewer. This method is expected to be called from UI thread.)#"  , py::arg("thePnts"),  py::arg("theIsXOR")=static_cast<const bool>(false))
        .def("UpdateRubberBand",
             (void (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,   const NCollection_Vec2<Standard_Integer> & ,  const bool  ) ) static_cast<void (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,   const NCollection_Vec2<Standard_Integer> & ,  const bool  ) >(&AIS_ViewController::UpdateRubberBand),
             R"#(Update rectangle selection tool. This method is expected to be called from UI thread.)#"  , py::arg("thePntFrom"),  py::arg("thePntTo"),  py::arg("theIsXOR")=static_cast<const bool>(false))
        .def("UpdatePolySelection",
             (void (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  bool  ) ) static_cast<void (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  bool  ) >(&AIS_ViewController::UpdatePolySelection),
             R"#(Update polygonal selection tool. This method is expected to be called from UI thread.)#"  , py::arg("thePnt"),  py::arg("theToAppend"))
        .def("UpdateZoom",
             (bool (AIS_ViewController::*)( const Aspect_ScrollDelta &  ) ) static_cast<bool (AIS_ViewController::*)( const Aspect_ScrollDelta &  ) >(&AIS_ViewController::UpdateZoom),
             R"#(Update zoom event (e.g. from mouse scroll). This method is expected to be called from UI thread.)#"  , py::arg("theDelta"))
        .def("UpdateZRotation",
             (bool (AIS_ViewController::*)( double  ) ) static_cast<bool (AIS_ViewController::*)( double  ) >(&AIS_ViewController::UpdateZRotation),
             R"#(Update Z rotation event.)#"  , py::arg("theAngle"))
        .def("UpdateMouseScroll",
             (bool (AIS_ViewController::*)( const Aspect_ScrollDelta &  ) ) static_cast<bool (AIS_ViewController::*)( const Aspect_ScrollDelta &  ) >(&AIS_ViewController::UpdateMouseScroll),
             R"#(Update mouse scroll event; redirects to UpdateZoom by default. This method is expected to be called from UI thread.)#"  , py::arg("theDelta"))
        .def("UpdateMouseButtons",
             (bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) ) static_cast<bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) >(&AIS_ViewController::UpdateMouseButtons),
             R"#(Handle mouse button press/release event. This method is expected to be called from UI thread.)#"  , py::arg("thePoint"),  py::arg("theButtons"),  py::arg("theModifiers"),  py::arg("theIsEmulated"))
        .def("UpdateMousePosition",
             (bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) ) static_cast<bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) >(&AIS_ViewController::UpdateMousePosition),
             R"#(Handle mouse cursor movement event. This method is expected to be called from UI thread.)#"  , py::arg("thePoint"),  py::arg("theButtons"),  py::arg("theModifiers"),  py::arg("theIsEmulated"))
        .def("PressMouseButton",
             (bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) ) static_cast<bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) >(&AIS_ViewController::PressMouseButton),
             R"#(Handle mouse button press event. This method is expected to be called from UI thread.)#"  , py::arg("thePoint"),  py::arg("theButton"),  py::arg("theModifiers"),  py::arg("theIsEmulated"))
        .def("ReleaseMouseButton",
             (bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) ) static_cast<bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) >(&AIS_ViewController::ReleaseMouseButton),
             R"#(Handle mouse button release event. This method is expected to be called from UI thread.)#"  , py::arg("thePoint"),  py::arg("theButton"),  py::arg("theModifiers"),  py::arg("theIsEmulated"))
        .def("UpdateMouseClick",
             (bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) ) static_cast<bool (AIS_ViewController::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) >(&AIS_ViewController::UpdateMouseClick),
             R"#(Handle mouse button click event (emulated by UpdateMouseButtons() while releasing single button). Note that as this method is called by UpdateMouseButtons(), it should be executed from UI thread. Default implementation redirects to SelectInViewer(). This method is expected to be called from UI thread.)#"  , py::arg("thePoint"),  py::arg("theButton"),  py::arg("theModifiers"),  py::arg("theIsDoubleClick"))
        .def("PressedMouseButtons",
             (Aspect_VKeyMouse (AIS_ViewController::*)() const) static_cast<Aspect_VKeyMouse (AIS_ViewController::*)() const>(&AIS_ViewController::PressedMouseButtons),
             R"#(Return currently pressed mouse buttons.)#" )
        .def("LastMouseFlags",
             (Aspect_VKeyFlags (AIS_ViewController::*)() const) static_cast<Aspect_VKeyFlags (AIS_ViewController::*)() const>(&AIS_ViewController::LastMouseFlags),
             R"#(Return active key modifiers passed with last mouse event.)#" )
        .def("LastMousePosition",
             (const Graphic3d_Vec2i & (AIS_ViewController::*)() const) static_cast<const Graphic3d_Vec2i & (AIS_ViewController::*)() const>(&AIS_ViewController::LastMousePosition),
             R"#(Return last mouse position.)#" )
        .def("TouchToleranceScale",
             (float (AIS_ViewController::*)() const) static_cast<float (AIS_ViewController::*)() const>(&AIS_ViewController::TouchToleranceScale),
             R"#(Return scale factor for adjusting tolerances for starting multi-touch gestures; 1.0 by default This scale factor is expected to be computed from touch screen resolution.)#" )
        .def("SetTouchToleranceScale",
             (void (AIS_ViewController::*)( float  ) ) static_cast<void (AIS_ViewController::*)( float  ) >(&AIS_ViewController::SetTouchToleranceScale),
             R"#(Set scale factor for adjusting tolerances for starting multi-touch gestures.)#"  , py::arg("theTolerance"))
        .def("HasTouchPoints",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::HasTouchPoints),
             R"#(Return TRUE if touches map is not empty.)#" )
        .def("AddTouchPoint",
             (void (AIS_ViewController::*)( Standard_Size ,   const NCollection_Vec2<Standard_Real> & ,  Standard_Boolean  ) ) static_cast<void (AIS_ViewController::*)( Standard_Size ,   const NCollection_Vec2<Standard_Real> & ,  Standard_Boolean  ) >(&AIS_ViewController::AddTouchPoint),
             R"#(Add touch point with the given ID. This method is expected to be called from UI thread.)#"  , py::arg("theId"),  py::arg("thePnt"),  py::arg("theClearBefore")=static_cast<Standard_Boolean>(false))
        .def("RemoveTouchPoint",
             (bool (AIS_ViewController::*)( Standard_Size ,  Standard_Boolean  ) ) static_cast<bool (AIS_ViewController::*)( Standard_Size ,  Standard_Boolean  ) >(&AIS_ViewController::RemoveTouchPoint),
             R"#(Remove touch point with the given ID. This method is expected to be called from UI thread.)#"  , py::arg("theId"),  py::arg("theClearSelectPnts")=static_cast<Standard_Boolean>(false))
        .def("UpdateTouchPoint",
             (void (AIS_ViewController::*)( Standard_Size ,   const NCollection_Vec2<Standard_Real> &  ) ) static_cast<void (AIS_ViewController::*)( Standard_Size ,   const NCollection_Vec2<Standard_Real> &  ) >(&AIS_ViewController::UpdateTouchPoint),
             R"#(Update touch point with the given ID. If point with specified ID was not registered before, it will be added. This method is expected to be called from UI thread.)#"  , py::arg("theId"),  py::arg("thePnt"))
        .def("EventTime",
             (double (AIS_ViewController::*)() const) static_cast<double (AIS_ViewController::*)() const>(&AIS_ViewController::EventTime),
             R"#(Return event time (e.g. current time).)#" )
        .def("ResetViewInput",
             (void (AIS_ViewController::*)() ) static_cast<void (AIS_ViewController::*)() >(&AIS_ViewController::ResetViewInput),
             R"#(Reset input state (pressed keys, mouse buttons, etc.) e.g. on window focus loss. This method is expected to be called from UI thread.)#" )
        .def("UpdateViewOrientation",
             (void (AIS_ViewController::*)( V3d_TypeOfOrientation ,  bool  ) ) static_cast<void (AIS_ViewController::*)( V3d_TypeOfOrientation ,  bool  ) >(&AIS_ViewController::UpdateViewOrientation),
             R"#(Reset view orientation. This method is expected to be called from UI thread.)#"  , py::arg("theOrientation"),  py::arg("theToFitAll"))
        .def("FlushViewEvents",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,  Standard_Boolean  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,  Standard_Boolean  ) >(&AIS_ViewController::FlushViewEvents),
             R"#(Update buffer for rendering thread. This method is expected to be called within synchronization barrier between GUI and Rendering threads (e.g. GUI thread should be locked beforehand to avoid data races).)#"  , py::arg("theCtx"),  py::arg("theView"),  py::arg("theToHandle")=static_cast<Standard_Boolean>(Standard_False))
        .def("HandleViewEvents",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) >(&AIS_ViewController::HandleViewEvents),
             R"#(Process events within rendering thread.)#"  , py::arg("theCtx"),  py::arg("theView"))
        .def("OnSelectionChanged",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) >(&AIS_ViewController::OnSelectionChanged),
             R"#(Callback called by handleMoveTo() on Selection in 3D Viewer. This method is expected to be called from rendering thread.)#"  , py::arg("theCtx"),  py::arg("theView"))
        .def("OnObjectDragged",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,  AIS_DragAction  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,  AIS_DragAction  ) >(&AIS_ViewController::OnObjectDragged),
             R"#(Callback called by handleMoveTo() on dragging object in 3D Viewer. This method is expected to be called from rendering thread.)#"  , py::arg("theCtx"),  py::arg("theView"),  py::arg("theAction"))
        .def("PickPoint",
             (bool (AIS_ViewController::*)( gp_Pnt & ,  const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,   const NCollection_Vec2<Standard_Integer> & ,  bool  ) ) static_cast<bool (AIS_ViewController::*)( gp_Pnt & ,  const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,   const NCollection_Vec2<Standard_Integer> & ,  bool  ) >(&AIS_ViewController::PickPoint),
             R"#(Pick closest point under mouse cursor. This method is expected to be called from rendering thread.)#"  , py::arg("thePnt"),  py::arg("theCtx"),  py::arg("theView"),  py::arg("theCursor"),  py::arg("theToStickToPickRay"))
        .def("GravityPoint",
             (gp_Pnt (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) ) static_cast<gp_Pnt (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) >(&AIS_ViewController::GravityPoint),
             R"#(Compute rotation gravity center point depending on rotation mode. This method is expected to be called from rendering thread.)#"  , py::arg("theCtx"),  py::arg("theView"))
        .def("handleCameraActions",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,  const AIS_WalkDelta &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> & ,  const AIS_WalkDelta &  ) >(&AIS_ViewController::handleCameraActions),
             R"#(Perform camera actions. This method is expected to be called from rendering thread.)#"  , py::arg("theCtx"),  py::arg("theView"),  py::arg("theWalk"))
        .def("handleMoveTo",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) >(&AIS_ViewController::handleMoveTo),
             R"#(Perform moveto/selection/dragging. This method is expected to be called from rendering thread.)#"  , py::arg("theCtx"),  py::arg("theView"))
        .def("toAskNextFrame",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::toAskNextFrame),
             R"#(Return TRUE if another frame should be drawn right after this one.)#" )
        .def("setAskNextFrame",
             (void (AIS_ViewController::*)( bool  ) ) static_cast<void (AIS_ViewController::*)( bool  ) >(&AIS_ViewController::setAskNextFrame),
             R"#(Set if another frame should be drawn right after this one.)#"  , py::arg("theToDraw")=static_cast<bool>(true))
        .def("hasPanningAnchorPoint",
             (bool (AIS_ViewController::*)() const) static_cast<bool (AIS_ViewController::*)() const>(&AIS_ViewController::hasPanningAnchorPoint),
             R"#(Return if panning anchor point has been defined.)#" )
        .def("panningAnchorPoint",
             (const gp_Pnt & (AIS_ViewController::*)() const) static_cast<const gp_Pnt & (AIS_ViewController::*)() const>(&AIS_ViewController::panningAnchorPoint),
             R"#(Return active panning anchor point.)#" )
        .def("setPanningAnchorPoint",
             (void (AIS_ViewController::*)( const gp_Pnt &  ) ) static_cast<void (AIS_ViewController::*)( const gp_Pnt &  ) >(&AIS_ViewController::setPanningAnchorPoint),
             R"#(Set active panning anchor point.)#"  , py::arg("thePnt"))
        .def("handlePanning",
             (void (AIS_ViewController::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<V3d_View> &  ) >(&AIS_ViewController::handlePanning),
             R"#(Handle panning event myGL.Panning.)#"  , py::arg("theView"))
        .def("handleZRotate",
             (void (AIS_ViewController::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<V3d_View> &  ) >(&AIS_ViewController::handleZRotate),
             R"#(Handle Z rotation event myGL.ZRotate.)#"  , py::arg("theView"))
        .def("MinZoomDistance",
             (double (AIS_ViewController::*)() const) static_cast<double (AIS_ViewController::*)() const>(&AIS_ViewController::MinZoomDistance),
             R"#(Return minimal camera distance for zoom operation.)#" )
        .def("SetMinZoomDistance",
             (void (AIS_ViewController::*)( double  ) ) static_cast<void (AIS_ViewController::*)( double  ) >(&AIS_ViewController::SetMinZoomDistance),
             R"#(Set minimal camera distance for zoom operation.)#"  , py::arg("theDist"))
        .def("handleZoom",
             (void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  const Aspect_ScrollDelta & ,  const gp_Pnt *  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  const Aspect_ScrollDelta & ,  const gp_Pnt *  ) >(&AIS_ViewController::handleZoom),
             R"#(Handle zoom event myGL.ZoomActions. This method is expected to be called from rendering thread.)#"  , py::arg("theView"),  py::arg("theParams"),  py::arg("thePnt"))
        .def("handleZFocusScroll",
             (void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  const Aspect_ScrollDelta &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  const Aspect_ScrollDelta &  ) >(&AIS_ViewController::handleZFocusScroll),
             R"#(Handle ZScroll event myGL.ZoomActions. This method is expected to be called from rendering thread.)#"  , py::arg("theView"),  py::arg("theParams"))
        .def("handleOrbitRotation",
             (void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  const gp_Pnt & ,  bool  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  const gp_Pnt & ,  bool  ) >(&AIS_ViewController::handleOrbitRotation),
             R"#(Handle orbital rotation events myGL.OrbitRotation.)#"  , py::arg("theView"),  py::arg("thePnt"),  py::arg("theToLockZUp"))
        .def("handleViewRotation",
             (void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  double ,  double ,  double ,  bool  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<V3d_View> & ,  double ,  double ,  double ,  bool  ) >(&AIS_ViewController::handleViewRotation),
             R"#(Handle view direction rotation events myGL.ViewRotation. This method is expected to be called from rendering thread.)#"  , py::arg("theView"),  py::arg("theYawExtra"),  py::arg("thePitchExtra"),  py::arg("theRoll"),  py::arg("theToRestartOnIncrement"))
        .def("handleViewRedraw",
             (void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_ViewController::*)( const opencascade::handle<AIS_InteractiveContext> & ,  const opencascade::handle<V3d_View> &  ) >(&AIS_ViewController::handleViewRedraw),
             R"#(Handle view redraw. This method is expected to be called from rendering thread.)#"  , py::arg("theCtx"),  py::arg("theView"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ViewCubeOwner ,opencascade::handle<AIS_ViewCubeOwner>  , SelectMgr_EntityOwner >>(m.attr("AIS_ViewCubeOwner"))
    // constructors
        .def(py::init< const opencascade::handle<AIS_ViewCube> &,V3d_TypeOfOrientation,Standard_Integer >()  , py::arg("theObject"),  py::arg("theOrient"),  py::arg("thePriority")=static_cast<Standard_Integer>(5) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ViewCubeOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ViewCubeOwner::*)() const>(&AIS_ViewCubeOwner::DynamicType),
             R"#(None)#" )
        .def("IsForcedHilight",
             (Standard_Boolean (AIS_ViewCubeOwner::*)() const) static_cast<Standard_Boolean (AIS_ViewCubeOwner::*)() const>(&AIS_ViewCubeOwner::IsForcedHilight),
             R"#(Returns TRUE. This owner will always call method Hilight for its Selectable Object when the owner is detected.)#" )
        .def("MainOrientation",
             (V3d_TypeOfOrientation (AIS_ViewCubeOwner::*)() const) static_cast<V3d_TypeOfOrientation (AIS_ViewCubeOwner::*)() const>(&AIS_ViewCubeOwner::MainOrientation),
             R"#(Return new orientation to set.)#" )
        .def("HandleMouseClick",
             (Standard_Boolean (AIS_ViewCubeOwner::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) ) static_cast<Standard_Boolean (AIS_ViewCubeOwner::*)(  const NCollection_Vec2<Standard_Integer> & ,  Aspect_VKeyMouse ,  Aspect_VKeyFlags ,  bool  ) >(&AIS_ViewCubeOwner::HandleMouseClick),
             R"#(Handle mouse button click event.)#"  , py::arg("thePoint"),  py::arg("theButton"),  py::arg("theModifiers"),  py::arg("theIsDoubleClick"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ViewCubeOwner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ViewCubeOwner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ViewInputBuffer , shared_ptr<AIS_ViewInputBuffer>  >>(m.attr("AIS_ViewInputBuffer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Reset",
             (void (AIS_ViewInputBuffer::*)() ) static_cast<void (AIS_ViewInputBuffer::*)() >(&AIS_ViewInputBuffer::Reset),
             R"#(Reset events buffer.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_WalkDelta , shared_ptr<AIS_WalkDelta>  >>(m.attr("AIS_WalkDelta"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsJumping",
             (bool (AIS_WalkDelta::*)() const) static_cast<bool (AIS_WalkDelta::*)() const>(&AIS_WalkDelta::IsJumping),
             R"#(Return jumping state.)#" )
        .def("SetJumping",
             (void (AIS_WalkDelta::*)( bool  ) ) static_cast<void (AIS_WalkDelta::*)( bool  ) >(&AIS_WalkDelta::SetJumping),
             R"#(Set jumping state.)#"  , py::arg("theIsJumping"))
        .def("IsCrouching",
             (bool (AIS_WalkDelta::*)() const) static_cast<bool (AIS_WalkDelta::*)() const>(&AIS_WalkDelta::IsCrouching),
             R"#(Return crouching state.)#" )
        .def("SetCrouching",
             (void (AIS_WalkDelta::*)( bool  ) ) static_cast<void (AIS_WalkDelta::*)( bool  ) >(&AIS_WalkDelta::SetCrouching),
             R"#(Set crouching state.)#"  , py::arg("theIsCrouching"))
        .def("IsRunning",
             (bool (AIS_WalkDelta::*)() const) static_cast<bool (AIS_WalkDelta::*)() const>(&AIS_WalkDelta::IsRunning),
             R"#(Return running state.)#" )
        .def("SetRunning",
             (void (AIS_WalkDelta::*)( bool  ) ) static_cast<void (AIS_WalkDelta::*)( bool  ) >(&AIS_WalkDelta::SetRunning),
             R"#(Set running state.)#"  , py::arg("theIsRunning"))
        .def("IsEmpty",
             (bool (AIS_WalkDelta::*)() const) static_cast<bool (AIS_WalkDelta::*)() const>(&AIS_WalkDelta::IsEmpty),
             R"#(Return TRUE when both Rotation and Translation deltas are empty.)#" )
        .def("ToMove",
             (bool (AIS_WalkDelta::*)() const) static_cast<bool (AIS_WalkDelta::*)() const>(&AIS_WalkDelta::ToMove),
             R"#(Return TRUE if translation delta is defined.)#" )
        .def("ToRotate",
             (bool (AIS_WalkDelta::*)() const) static_cast<bool (AIS_WalkDelta::*)() const>(&AIS_WalkDelta::ToRotate),
             R"#(Return TRUE if rotation delta is defined.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_WalkPart , shared_ptr<AIS_WalkPart>  >>(m.attr("AIS_WalkPart"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsEmpty",
             (bool (AIS_WalkPart::*)() const) static_cast<bool (AIS_WalkPart::*)() const>(&AIS_WalkPart::IsEmpty),
             R"#(Return TRUE if delta is empty.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_AnimationCamera ,opencascade::handle<AIS_AnimationCamera>  , AIS_Animation >>(m.attr("AIS_AnimationCamera"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<V3d_View> & >()  , py::arg("theAnimationName"),  py::arg("theView") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_AnimationCamera::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_AnimationCamera::*)() const>(&AIS_AnimationCamera::DynamicType),
             R"#(None)#" )
        .def("View",
             (const opencascade::handle<V3d_View> & (AIS_AnimationCamera::*)() const) static_cast<const opencascade::handle<V3d_View> & (AIS_AnimationCamera::*)() const>(&AIS_AnimationCamera::View),
             R"#(Return the target view.)#" )
        .def("SetView",
             (void (AIS_AnimationCamera::*)( const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_AnimationCamera::*)( const opencascade::handle<V3d_View> &  ) >(&AIS_AnimationCamera::SetView),
             R"#(Set target view.)#"  , py::arg("theView"))
        .def("CameraStart",
             (const opencascade::handle<Graphic3d_Camera> & (AIS_AnimationCamera::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (AIS_AnimationCamera::*)() const>(&AIS_AnimationCamera::CameraStart),
             R"#(Return camera start position.)#" )
        .def("SetCameraStart",
             (void (AIS_AnimationCamera::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (AIS_AnimationCamera::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&AIS_AnimationCamera::SetCameraStart),
             R"#(Define camera start position.)#"  , py::arg("theCameraStart"))
        .def("CameraEnd",
             (const opencascade::handle<Graphic3d_Camera> & (AIS_AnimationCamera::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (AIS_AnimationCamera::*)() const>(&AIS_AnimationCamera::CameraEnd),
             R"#(Return camera end position.)#" )
        .def("SetCameraEnd",
             (void (AIS_AnimationCamera::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (AIS_AnimationCamera::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&AIS_AnimationCamera::SetCameraEnd),
             R"#(Define camera end position.)#"  , py::arg("theCameraEnd"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_AnimationCamera::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_AnimationCamera::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_AnimationObject ,opencascade::handle<AIS_AnimationObject>  , AIS_Animation >>(m.attr("AIS_AnimationObject"))
    // constructors
        .def(py::init< const TCollection_AsciiString &,const opencascade::handle<AIS_InteractiveContext> &,const opencascade::handle<AIS_InteractiveObject> &,const gp_Trsf &,const gp_Trsf & >()  , py::arg("theAnimationName"),  py::arg("theContext"),  py::arg("theObject"),  py::arg("theTrsfStart"),  py::arg("theTrsfEnd") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_AnimationObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_AnimationObject::*)() const>(&AIS_AnimationObject::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_AnimationObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_AnimationObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Axis ,opencascade::handle<AIS_Axis>  , AIS_InteractiveObject >>(m.attr("AIS_Axis"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Line> & >()  , py::arg("aComponent") )
        .def(py::init< const opencascade::handle<Geom_Axis2Placement> &,const AIS_TypeOfAxis >()  , py::arg("aComponent"),  py::arg("anAxisType") )
        .def(py::init< const opencascade::handle<Geom_Axis1Placement> & >()  , py::arg("anAxis") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Axis::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Axis::*)() const>(&AIS_Axis::DynamicType),
             R"#(None)#" )
        .def("Component",
             (const opencascade::handle<Geom_Line> & (AIS_Axis::*)() const) static_cast<const opencascade::handle<Geom_Line> & (AIS_Axis::*)() const>(&AIS_Axis::Component),
             R"#(Returns the axis entity aComponent and identifies it as a component of a shape.)#" )
        .def("SetComponent",
             (void (AIS_Axis::*)( const opencascade::handle<Geom_Line> &  ) ) static_cast<void (AIS_Axis::*)( const opencascade::handle<Geom_Line> &  ) >(&AIS_Axis::SetComponent),
             R"#(Sets the coordinates of the lin aComponent.)#"  , py::arg("aComponent"))
        .def("Axis2Placement",
             (const opencascade::handle<Geom_Axis2Placement> & (AIS_Axis::*)() const) static_cast<const opencascade::handle<Geom_Axis2Placement> & (AIS_Axis::*)() const>(&AIS_Axis::Axis2Placement),
             R"#(Returns the position of axis2 and positions it by identifying it as the x, y, or z axis and giving its direction in 3D space. The coordinate system used is right-handed.)#" )
        .def("SetAxis2Placement",
             (void (AIS_Axis::*)( const opencascade::handle<Geom_Axis2Placement> & ,  const AIS_TypeOfAxis  ) ) static_cast<void (AIS_Axis::*)( const opencascade::handle<Geom_Axis2Placement> & ,  const AIS_TypeOfAxis  ) >(&AIS_Axis::SetAxis2Placement),
             R"#(Allows you to provide settings for aComponent:the position and direction of an axis in 3D space. The coordinate system used is right-handed.)#"  , py::arg("aComponent"),  py::arg("anAxisType"))
        .def("SetAxis1Placement",
             (void (AIS_Axis::*)( const opencascade::handle<Geom_Axis1Placement> &  ) ) static_cast<void (AIS_Axis::*)( const opencascade::handle<Geom_Axis1Placement> &  ) >(&AIS_Axis::SetAxis1Placement),
             R"#(Constructs a new line to serve as the axis anAxis in 3D space.)#"  , py::arg("anAxis"))
        .def("TypeOfAxis",
             (AIS_TypeOfAxis (AIS_Axis::*)() const) static_cast<AIS_TypeOfAxis (AIS_Axis::*)() const>(&AIS_Axis::TypeOfAxis),
             R"#(Returns the type of axis.)#" )
        .def("SetTypeOfAxis",
             (void (AIS_Axis::*)( const AIS_TypeOfAxis  ) ) static_cast<void (AIS_Axis::*)( const AIS_TypeOfAxis  ) >(&AIS_Axis::SetTypeOfAxis),
             R"#(Constructs the entity theTypeAxis to stock information concerning type of axis.)#"  , py::arg("theTypeAxis"))
        .def("IsXYZAxis",
             (Standard_Boolean (AIS_Axis::*)() const) static_cast<Standard_Boolean (AIS_Axis::*)() const>(&AIS_Axis::IsXYZAxis),
             R"#(Returns a signature of 2 for axis datums. When you activate mode 2 by a signature, you pick AIS objects of type AIS_Axis.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_Axis::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_Axis::*)( const Standard_Integer  ) const>(&AIS_Axis::AcceptDisplayMode),
             R"#(Returns true if the interactive object accepts the display mode aMode.)#"  , py::arg("aMode"))
        .def("Compute",
             (void (AIS_Axis::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_Axis::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_Axis::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("Signature",
             (Standard_Integer (AIS_Axis::*)() const) static_cast<Standard_Integer (AIS_Axis::*)() const>(&AIS_Axis::Signature),
             R"#(None)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Axis::*)() const) static_cast<AIS_KindOfInteractive (AIS_Axis::*)() const>(&AIS_Axis::Type),
             R"#(None)#" )
        .def("SetColor",
             (void (AIS_Axis::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Axis::*)( const Quantity_Color &  ) >(&AIS_Axis::SetColor),
             R"#(None)#"  , py::arg("aColor"))
        .def("SetWidth",
             (void (AIS_Axis::*)( const Standard_Real  ) ) static_cast<void (AIS_Axis::*)( const Standard_Real  ) >(&AIS_Axis::SetWidth),
             R"#(None)#"  , py::arg("aValue"))
        .def("UnsetColor",
             (void (AIS_Axis::*)() ) static_cast<void (AIS_Axis::*)() >(&AIS_Axis::UnsetColor),
             R"#(None)#" )
        .def("UnsetWidth",
             (void (AIS_Axis::*)() ) static_cast<void (AIS_Axis::*)() >(&AIS_Axis::UnsetWidth),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Axis::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Axis::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_CameraFrustum ,opencascade::handle<AIS_CameraFrustum>  , AIS_InteractiveObject >>(m.attr("AIS_CameraFrustum"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_CameraFrustum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_CameraFrustum::*)() const>(&AIS_CameraFrustum::DynamicType),
             R"#(None)#" )
        .def("SetCameraFrustum",
             (void (AIS_CameraFrustum::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (AIS_CameraFrustum::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&AIS_CameraFrustum::SetCameraFrustum),
             R"#(Sets camera frustum.)#"  , py::arg("theCamera"))
        .def("SetColor",
             (void (AIS_CameraFrustum::*)( const Quantity_Color &  ) ) static_cast<void (AIS_CameraFrustum::*)( const Quantity_Color &  ) >(&AIS_CameraFrustum::SetColor),
             R"#(Setup custom color.)#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (AIS_CameraFrustum::*)() ) static_cast<void (AIS_CameraFrustum::*)() >(&AIS_CameraFrustum::UnsetColor),
             R"#(Restore default color.)#" )
        .def("UnsetTransparency",
             (void (AIS_CameraFrustum::*)() ) static_cast<void (AIS_CameraFrustum::*)() >(&AIS_CameraFrustum::UnsetTransparency),
             R"#(Restore transparency setting.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_CameraFrustum::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_CameraFrustum::*)( const Standard_Integer  ) const>(&AIS_CameraFrustum::AcceptDisplayMode),
             R"#(Return true if specified display mode is supported.)#"  , py::arg("theMode"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_CameraFrustum::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_CameraFrustum::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Circle ,opencascade::handle<AIS_Circle>  , AIS_InteractiveObject >>(m.attr("AIS_Circle"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Circle> & >()  , py::arg("aCircle") )
        .def(py::init< const opencascade::handle<Geom_Circle> &,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("theCircle"),  py::arg("theUStart"),  py::arg("theUEnd"),  py::arg("theIsFilledCircleSens")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Circle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Circle::*)() const>(&AIS_Circle::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_Circle::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_Circle::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_Circle::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("Signature",
             (Standard_Integer (AIS_Circle::*)() const) static_cast<Standard_Integer (AIS_Circle::*)() const>(&AIS_Circle::Signature),
             R"#(Returns index 6 by default.)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Circle::*)() const) static_cast<AIS_KindOfInteractive (AIS_Circle::*)() const>(&AIS_Circle::Type),
             R"#(Indicates that the type of Interactive Object is a datum.)#" )
        .def("Circle",
             (const opencascade::handle<Geom_Circle> & (AIS_Circle::*)() const) static_cast<const opencascade::handle<Geom_Circle> & (AIS_Circle::*)() const>(&AIS_Circle::Circle),
             R"#(Returns the circle component defined in SetCircle.)#" )
        .def("SetCircle",
             (void (AIS_Circle::*)( const opencascade::handle<Geom_Circle> &  ) ) static_cast<void (AIS_Circle::*)( const opencascade::handle<Geom_Circle> &  ) >(&AIS_Circle::SetCircle),
             R"#(Allows you to provide settings for the circle datum aCircle.)#"  , py::arg("theCircle"))
        .def("SetFirstParam",
             (void (AIS_Circle::*)( const Standard_Real  ) ) static_cast<void (AIS_Circle::*)( const Standard_Real  ) >(&AIS_Circle::SetFirstParam),
             R"#(Allows you to set the parameter theU for the starting point of an arc.)#"  , py::arg("theU"))
        .def("SetLastParam",
             (void (AIS_Circle::*)( const Standard_Real  ) ) static_cast<void (AIS_Circle::*)( const Standard_Real  ) >(&AIS_Circle::SetLastParam),
             R"#(Allows you to provide the parameter theU for the end point of an arc.)#"  , py::arg("theU"))
        .def("SetColor",
             (void (AIS_Circle::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Circle::*)( const Quantity_Color &  ) >(&AIS_Circle::SetColor),
             R"#(None)#"  , py::arg("aColor"))
        .def("SetWidth",
             (void (AIS_Circle::*)( const Standard_Real  ) ) static_cast<void (AIS_Circle::*)( const Standard_Real  ) >(&AIS_Circle::SetWidth),
             R"#(Assigns the width aValue to the solid line boundary of the circle datum.)#"  , py::arg("aValue"))
        .def("UnsetColor",
             (void (AIS_Circle::*)() ) static_cast<void (AIS_Circle::*)() >(&AIS_Circle::UnsetColor),
             R"#(Removes color from the solid line boundary of the circle datum.)#" )
        .def("UnsetWidth",
             (void (AIS_Circle::*)() ) static_cast<void (AIS_Circle::*)() >(&AIS_Circle::UnsetWidth),
             R"#(Removes width settings from the solid line boundary of the circle datum.)#" )
        .def("IsFilledCircleSens",
             (Standard_Boolean (AIS_Circle::*)() const) static_cast<Standard_Boolean (AIS_Circle::*)() const>(&AIS_Circle::IsFilledCircleSens),
             R"#(Returns the type of sensitivity for the circle;)#" )
        .def("SetFilledCircleSens",
             (void (AIS_Circle::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Circle::*)( const Standard_Boolean  ) >(&AIS_Circle::SetFilledCircleSens),
             R"#(Sets the type of sensitivity for the circle. If theIsFilledCircleSens set to Standard_True then the whole circle will be detectable, otherwise only the boundary of the circle.)#"  , py::arg("theIsFilledCircleSens"))
    // methods using call by reference i.s.o. return
        .def("Parameters",
             []( AIS_Circle &self   ){ Standard_Real  theU1; Standard_Real  theU2; self.Parameters(theU1,theU2); return std::make_tuple(theU1,theU2); },
             R"#(Constructs instances of the starting point and the end point parameters, theU1 and theU2.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Circle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Circle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ColorScale ,opencascade::handle<AIS_ColorScale>  , AIS_InteractiveObject >>(m.attr("AIS_ColorScale"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ColorScale::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ColorScale::*)() const>(&AIS_ColorScale::DynamicType),
             R"#(None)#" )
        .def("FindColor",
             (Standard_Boolean (AIS_ColorScale::*)( const Standard_Real ,  Quantity_Color &  ) const) static_cast<Standard_Boolean (AIS_ColorScale::*)( const Standard_Real ,  Quantity_Color &  ) const>(&AIS_ColorScale::FindColor),
             R"#(Calculate color according passed value; returns true if value is in range or false, if isn't)#"  , py::arg("theValue"),  py::arg("theColor"))
        .def("GetMin",
             (Standard_Real (AIS_ColorScale::*)() const) static_cast<Standard_Real (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetMin),
             R"#(Returns minimal value of color scale, 0.0 by default.)#" )
        .def("SetMin",
             (void (AIS_ColorScale::*)( const Standard_Real  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Real  ) >(&AIS_ColorScale::SetMin),
             R"#(Sets the minimal value of color scale.)#"  , py::arg("theMin"))
        .def("GetMax",
             (Standard_Real (AIS_ColorScale::*)() const) static_cast<Standard_Real (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetMax),
             R"#(Returns maximal value of color scale, 1.0 by default.)#" )
        .def("SetMax",
             (void (AIS_ColorScale::*)( const Standard_Real  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Real  ) >(&AIS_ColorScale::SetMax),
             R"#(Sets the maximal value of color scale.)#"  , py::arg("theMax"))
        .def("SetRange",
             (void (AIS_ColorScale::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Real ,  const Standard_Real  ) >(&AIS_ColorScale::SetRange),
             R"#(Sets the minimal and maximal value of color scale. Note that values order will be ignored - the minimum and maximum values will be swapped if needed. ::SetReversed() should be called to swap displaying order.)#"  , py::arg("theMin"),  py::arg("theMax"))
        .def("HueMin",
             (Standard_Real (AIS_ColorScale::*)() const) static_cast<Standard_Real (AIS_ColorScale::*)() const>(&AIS_ColorScale::HueMin),
             R"#(Returns the hue angle corresponding to minimum value, 230 by default (blue).)#" )
        .def("HueMax",
             (Standard_Real (AIS_ColorScale::*)() const) static_cast<Standard_Real (AIS_ColorScale::*)() const>(&AIS_ColorScale::HueMax),
             R"#(Returns the hue angle corresponding to maximum value, 0 by default (red).)#" )
        .def("SetHueRange",
             (void (AIS_ColorScale::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Real ,  const Standard_Real  ) >(&AIS_ColorScale::SetHueRange),
             R"#(Sets hue angle range corresponding to minimum and maximum values. The valid angle range is [0, 360], see Quantity_Color and Quantity_TOC_HLS for more details.)#"  , py::arg("theMinAngle"),  py::arg("theMaxAngle"))
        .def("ColorRange",
             (void (AIS_ColorScale::*)( Quantity_Color & ,  Quantity_Color &  ) const) static_cast<void (AIS_ColorScale::*)( Quantity_Color & ,  Quantity_Color &  ) const>(&AIS_ColorScale::ColorRange),
             R"#(Returns color range corresponding to minimum and maximum values, blue to red by default.)#"  , py::arg("theMinColor"),  py::arg("theMaxColor"))
        .def("SetColorRange",
             (void (AIS_ColorScale::*)( const Quantity_Color & ,  const Quantity_Color &  ) ) static_cast<void (AIS_ColorScale::*)( const Quantity_Color & ,  const Quantity_Color &  ) >(&AIS_ColorScale::SetColorRange),
             R"#(Sets color range corresponding to minimum and maximum values.)#"  , py::arg("theMinColor"),  py::arg("theMaxColor"))
        .def("GetLabelType",
             (Aspect_TypeOfColorScaleData (AIS_ColorScale::*)() const) static_cast<Aspect_TypeOfColorScaleData (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetLabelType),
             R"#(Returns the type of labels, Aspect_TOCSD_AUTO by default. Aspect_TOCSD_AUTO - labels as boundary values for intervals Aspect_TOCSD_USER - user specified label is used)#" )
        .def("SetLabelType",
             (void (AIS_ColorScale::*)( const Aspect_TypeOfColorScaleData  ) ) static_cast<void (AIS_ColorScale::*)( const Aspect_TypeOfColorScaleData  ) >(&AIS_ColorScale::SetLabelType),
             R"#(Sets the type of labels. Aspect_TOCSD_AUTO - labels as boundary values for intervals Aspect_TOCSD_USER - user specified label is used)#"  , py::arg("theType"))
        .def("GetColorType",
             (Aspect_TypeOfColorScaleData (AIS_ColorScale::*)() const) static_cast<Aspect_TypeOfColorScaleData (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetColorType),
             R"#(Returns the type of colors, Aspect_TOCSD_AUTO by default. Aspect_TOCSD_AUTO - value between Red and Blue Aspect_TOCSD_USER - user specified color from color map)#" )
        .def("SetColorType",
             (void (AIS_ColorScale::*)( const Aspect_TypeOfColorScaleData  ) ) static_cast<void (AIS_ColorScale::*)( const Aspect_TypeOfColorScaleData  ) >(&AIS_ColorScale::SetColorType),
             R"#(Sets the type of colors. Aspect_TOCSD_AUTO - value between Red and Blue Aspect_TOCSD_USER - user specified color from color map)#"  , py::arg("theType"))
        .def("GetNumberOfIntervals",
             (Standard_Integer (AIS_ColorScale::*)() const) static_cast<Standard_Integer (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetNumberOfIntervals),
             R"#(Returns the number of color scale intervals, 10 by default.)#" )
        .def("SetNumberOfIntervals",
             (void (AIS_ColorScale::*)( const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer  ) >(&AIS_ColorScale::SetNumberOfIntervals),
             R"#(Sets the number of color scale intervals.)#"  , py::arg("theNum"))
        .def("GetTitle",
             (const TCollection_ExtendedString & (AIS_ColorScale::*)() const) static_cast<const TCollection_ExtendedString & (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetTitle),
             R"#(Returns the color scale title string, empty string by default.)#" )
        .def("SetTitle",
             (void (AIS_ColorScale::*)( const TCollection_ExtendedString &  ) ) static_cast<void (AIS_ColorScale::*)( const TCollection_ExtendedString &  ) >(&AIS_ColorScale::SetTitle),
             R"#(Sets the color scale title string.)#"  , py::arg("theTitle"))
        .def("GetFormat",
             (const TCollection_AsciiString & (AIS_ColorScale::*)() const) static_cast<const TCollection_AsciiString & (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetFormat),
             R"#(Returns the format for numbers, "%.4g" by default. The same like format for function printf(). Used if GetLabelType() is TOCSD_AUTO;)#" )
        .def("Format",
             (const TCollection_AsciiString & (AIS_ColorScale::*)() const) static_cast<const TCollection_AsciiString & (AIS_ColorScale::*)() const>(&AIS_ColorScale::Format),
             R"#(Returns the format of text.)#" )
        .def("SetFormat",
             (void (AIS_ColorScale::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_ColorScale::*)( const TCollection_AsciiString &  ) >(&AIS_ColorScale::SetFormat),
             R"#(Sets the color scale auto label format specification.)#"  , py::arg("theFormat"))
        .def("GetLabel",
             (TCollection_ExtendedString (AIS_ColorScale::*)( const Standard_Integer  ) const) static_cast<TCollection_ExtendedString (AIS_ColorScale::*)( const Standard_Integer  ) const>(&AIS_ColorScale::GetLabel),
             R"#(Returns the user specified label with index theIndex. Index is in range from 1 to GetNumberOfIntervals() or to GetNumberOfIntervals() + 1 if IsLabelAtBorder() is true. Returns empty string if label not defined.)#"  , py::arg("theIndex"))
        .def("GetIntervalColor",
             (Quantity_Color (AIS_ColorScale::*)( const Standard_Integer  ) const) static_cast<Quantity_Color (AIS_ColorScale::*)( const Standard_Integer  ) const>(&AIS_ColorScale::GetIntervalColor),
             R"#(Returns the user specified color from color map with index (starts at 1). Returns default color if index is out of range in color map.)#"  , py::arg("theIndex"))
        .def("SetIntervalColor",
             (void (AIS_ColorScale::*)( const Quantity_Color & ,  const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Quantity_Color & ,  const Standard_Integer  ) >(&AIS_ColorScale::SetIntervalColor),
             R"#(Sets the color of the specified interval. Note that list is automatically resized to include specified index.)#"  , py::arg("theColor"),  py::arg("theIndex"))
        .def("GetLabels",
             (void (AIS_ColorScale::*)( NCollection_Sequence<TCollection_ExtendedString> &  ) const) static_cast<void (AIS_ColorScale::*)( NCollection_Sequence<TCollection_ExtendedString> &  ) const>(&AIS_ColorScale::GetLabels),
             R"#(Returns the user specified labels.)#"  , py::arg("theLabels"))
        .def("Labels",
             (const TColStd_SequenceOfExtendedString & (AIS_ColorScale::*)() const) static_cast<const TColStd_SequenceOfExtendedString & (AIS_ColorScale::*)() const>(&AIS_ColorScale::Labels),
             R"#(Returns the user specified labels.)#" )
        .def("SetLabels",
             (void (AIS_ColorScale::*)(  const NCollection_Sequence<TCollection_ExtendedString> &  ) ) static_cast<void (AIS_ColorScale::*)(  const NCollection_Sequence<TCollection_ExtendedString> &  ) >(&AIS_ColorScale::SetLabels),
             R"#(Sets the color scale labels. The length of the sequence should be equal to GetNumberOfIntervals() or to GetNumberOfIntervals() + 1 if IsLabelAtBorder() is true. If length of the sequence does not much the number of intervals, then these labels will be considered as "free" and will be located at the virtual intervals corresponding to the number of labels (with flag IsLabelAtBorder() having the same effect as in normal case).)#"  , py::arg("theSeq"))
        .def("GetColors",
             (void (AIS_ColorScale::*)( NCollection_Sequence<Quantity_Color> &  ) const) static_cast<void (AIS_ColorScale::*)( NCollection_Sequence<Quantity_Color> &  ) const>(&AIS_ColorScale::GetColors),
             R"#(Returns the user specified colors.)#"  , py::arg("theColors"))
        .def("GetColors",
             (const Aspect_SequenceOfColor & (AIS_ColorScale::*)() const) static_cast<const Aspect_SequenceOfColor & (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetColors),
             R"#(Returns the user specified colors.)#" )
        .def("SetColors",
             (void (AIS_ColorScale::*)(  const NCollection_Sequence<Quantity_Color> &  ) ) static_cast<void (AIS_ColorScale::*)(  const NCollection_Sequence<Quantity_Color> &  ) >(&AIS_ColorScale::SetColors),
             R"#(Sets the color scale colors. The length of the sequence should be equal to GetNumberOfIntervals().)#"  , py::arg("theSeq"))
        .def("GetLabelPosition",
             (Aspect_TypeOfColorScalePosition (AIS_ColorScale::*)() const) static_cast<Aspect_TypeOfColorScalePosition (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetLabelPosition),
             R"#(Returns the position of labels concerning color filled rectangles, Aspect_TOCSP_RIGHT by default.)#" )
        .def("SetLabelPosition",
             (void (AIS_ColorScale::*)( const Aspect_TypeOfColorScalePosition  ) ) static_cast<void (AIS_ColorScale::*)( const Aspect_TypeOfColorScalePosition  ) >(&AIS_ColorScale::SetLabelPosition),
             R"#(Sets the color scale labels position relative to color bar.)#"  , py::arg("thePos"))
        .def("GetTitlePosition",
             (Aspect_TypeOfColorScalePosition (AIS_ColorScale::*)() const) static_cast<Aspect_TypeOfColorScalePosition (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetTitlePosition),
             R"#(Returns the position of color scale title, Aspect_TOCSP_LEFT by default.)#" )
        .def("SetTitlePosition",
             (void (AIS_ColorScale::*)( const Aspect_TypeOfColorScalePosition  ) ) static_cast<void (AIS_ColorScale::*)( const Aspect_TypeOfColorScalePosition  ) >(&AIS_ColorScale::SetTitlePosition),
             R"#(Sets the color scale title position.)#"  , py::arg("thePos"))
        .def("IsReversed",
             (Standard_Boolean (AIS_ColorScale::*)() const) static_cast<Standard_Boolean (AIS_ColorScale::*)() const>(&AIS_ColorScale::IsReversed),
             R"#(Returns TRUE if the labels and colors used in reversed order, FALSE by default. - Normal, bottom-up order with Minimal value on the Bottom and Maximum value on Top. - Reversed, top-down order with Maximum value on the Bottom and Minimum value on Top.)#" )
        .def("SetReversed",
             (void (AIS_ColorScale::*)( const Standard_Boolean  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Boolean  ) >(&AIS_ColorScale::SetReversed),
             R"#(Sets true if the labels and colors used in reversed order.)#"  , py::arg("theReverse"))
        .def("IsSmoothTransition",
             (Standard_Boolean (AIS_ColorScale::*)() const) static_cast<Standard_Boolean (AIS_ColorScale::*)() const>(&AIS_ColorScale::IsSmoothTransition),
             R"#(Return TRUE if color transition between neighbor intervals should be linearly interpolated, FALSE by default.)#" )
        .def("SetSmoothTransition",
             (void (AIS_ColorScale::*)( const Standard_Boolean  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Boolean  ) >(&AIS_ColorScale::SetSmoothTransition),
             R"#(Setup smooth color transition.)#"  , py::arg("theIsSmooth"))
        .def("IsLabelAtBorder",
             (Standard_Boolean (AIS_ColorScale::*)() const) static_cast<Standard_Boolean (AIS_ColorScale::*)() const>(&AIS_ColorScale::IsLabelAtBorder),
             R"#(Returns TRUE if the labels are placed at border of color intervals, TRUE by default. The automatically generated label will show value exactly on the current position: - value connecting two neighbor intervals (TRUE) - value in the middle of interval (FALSE))#" )
        .def("SetLabelAtBorder",
             (void (AIS_ColorScale::*)( const Standard_Boolean  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Boolean  ) >(&AIS_ColorScale::SetLabelAtBorder),
             R"#(Sets true if the labels are placed at border of color intervals (TRUE by default). If set to False, labels will be drawn at color intervals rather than at borders.)#"  , py::arg("theOn"))
        .def("IsLogarithmic",
             (Standard_Boolean (AIS_ColorScale::*)() const) static_cast<Standard_Boolean (AIS_ColorScale::*)() const>(&AIS_ColorScale::IsLogarithmic),
             R"#(Returns TRUE if the color scale has logarithmic intervals, FALSE by default.)#" )
        .def("SetLogarithmic",
             (void (AIS_ColorScale::*)( const Standard_Boolean  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Boolean  ) >(&AIS_ColorScale::SetLogarithmic),
             R"#(Sets true if the color scale has logarithmic intervals.)#"  , py::arg("isLogarithmic"))
        .def("SetLabel",
             (void (AIS_ColorScale::*)( const TCollection_ExtendedString & ,  const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const TCollection_ExtendedString & ,  const Standard_Integer  ) >(&AIS_ColorScale::SetLabel),
             R"#(Sets the color scale label at index. Note that list is automatically resized to include specified index.)#"  , py::arg("theLabel"),  py::arg("theIndex"))
        .def("SetSize",
             (void (AIS_ColorScale::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer ,  const Standard_Integer  ) >(&AIS_ColorScale::SetSize),
             R"#(Sets the size of color bar.)#"  , py::arg("theBreadth"),  py::arg("theHeight"))
        .def("GetBreadth",
             (Standard_Integer (AIS_ColorScale::*)() const) static_cast<Standard_Integer (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetBreadth),
             R"#(Returns the breadth of color bar, 0 by default (e.g. should be set by user explicitly before displaying).)#" )
        .def("SetBreadth",
             (void (AIS_ColorScale::*)( const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer  ) >(&AIS_ColorScale::SetBreadth),
             R"#(Sets the width of color bar.)#"  , py::arg("theBreadth"))
        .def("GetHeight",
             (Standard_Integer (AIS_ColorScale::*)() const) static_cast<Standard_Integer (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetHeight),
             R"#(Returns the height of color bar, 0 by default (e.g. should be set by user explicitly before displaying).)#" )
        .def("SetHeight",
             (void (AIS_ColorScale::*)( const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer  ) >(&AIS_ColorScale::SetHeight),
             R"#(Sets the height of color bar.)#"  , py::arg("theHeight"))
        .def("SetPosition",
             (void (AIS_ColorScale::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer ,  const Standard_Integer  ) >(&AIS_ColorScale::SetPosition),
             R"#(Sets the position of color scale.)#"  , py::arg("theX"),  py::arg("theY"))
        .def("GetXPosition",
             (Standard_Integer (AIS_ColorScale::*)() const) static_cast<Standard_Integer (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetXPosition),
             R"#(Returns the left position of color scale, 0 by default.)#" )
        .def("SetXPosition",
             (void (AIS_ColorScale::*)( const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer  ) >(&AIS_ColorScale::SetXPosition),
             R"#(Sets the left position of color scale.)#"  , py::arg("theX"))
        .def("GetYPosition",
             (Standard_Integer (AIS_ColorScale::*)() const) static_cast<Standard_Integer (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetYPosition),
             R"#(Returns the bottom position of color scale, 0 by default.)#" )
        .def("SetYPosition",
             (void (AIS_ColorScale::*)( const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer  ) >(&AIS_ColorScale::SetYPosition),
             R"#(Sets the bottom position of color scale.)#"  , py::arg("theY"))
        .def("GetTextHeight",
             (Standard_Integer (AIS_ColorScale::*)() const) static_cast<Standard_Integer (AIS_ColorScale::*)() const>(&AIS_ColorScale::GetTextHeight),
             R"#(Returns the font height of text labels, 20 by default.)#" )
        .def("SetTextHeight",
             (void (AIS_ColorScale::*)( const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const Standard_Integer  ) >(&AIS_ColorScale::SetTextHeight),
             R"#(Sets the height of text of color scale.)#"  , py::arg("theHeight"))
        .def("TextWidth",
             (Standard_Integer (AIS_ColorScale::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Integer (AIS_ColorScale::*)( const TCollection_ExtendedString &  ) const>(&AIS_ColorScale::TextWidth),
             R"#(Returns the width of text.)#"  , py::arg("theText"))
        .def("TextHeight",
             (Standard_Integer (AIS_ColorScale::*)( const TCollection_ExtendedString &  ) const) static_cast<Standard_Integer (AIS_ColorScale::*)( const TCollection_ExtendedString &  ) const>(&AIS_ColorScale::TextHeight),
             R"#(Returns the height of text.)#"  , py::arg("theText"))
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_ColorScale::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_ColorScale::*)( const Standard_Integer  ) const>(&AIS_ColorScale::AcceptDisplayMode),
             R"#(Return true if specified display mode is supported.)#"  , py::arg("theMode"))
        .def("Compute",
             (void (AIS_ColorScale::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const Standard_Integer  ) >(&AIS_ColorScale::Compute),
             R"#(Compute presentation.)#"  , py::arg("thePresentationManager"),  py::arg("thePresentation"),  py::arg("theMode"))
        .def("ComputeSelection",
             (void (AIS_ColorScale::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) ) static_cast<void (AIS_ColorScale::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) >(&AIS_ColorScale::ComputeSelection),
             R"#(Compute selection - not implemented for color scale.)#"  , py::arg(""),  py::arg(""))
    // methods using call by reference i.s.o. return
        .def("GetRange",
             []( AIS_ColorScale &self   ){ Standard_Real  theMin; Standard_Real  theMax; self.GetRange(theMin,theMax); return std::make_tuple(theMin,theMax); },
             R"#(Returns minimal and maximal values of color scale, 0.0 to 1.0 by default.)#" )
        .def("HueRange",
             []( AIS_ColorScale &self   ){ Standard_Real  theMinAngle; Standard_Real  theMaxAngle; self.HueRange(theMinAngle,theMaxAngle); return std::make_tuple(theMinAngle,theMaxAngle); },
             R"#(Returns the hue angle range corresponding to minimum and maximum values, 230 to 0 by default (blue to red).)#" )
        .def("GetSize",
             []( AIS_ColorScale &self   ){ Standard_Integer  theBreadth; Standard_Integer  theHeight; self.GetSize(theBreadth,theHeight); return std::make_tuple(theBreadth,theHeight); },
             R"#(Returns the size of color bar, 0 and 0 by default (e.g. should be set by user explicitly before displaying).)#" )
        .def("GetPosition",
             []( AIS_ColorScale &self   ){ Standard_Real  theX; Standard_Real  theY; self.GetPosition(theX,theY); return std::make_tuple(theX,theY); },
             R"#(Returns the bottom-left position of color scale, 0x0 by default.)#" )
        .def("TextSize",
             []( AIS_ColorScale &self , const TCollection_ExtendedString & theText,const Standard_Integer theHeight ){ Standard_Integer  theWidth; Standard_Integer  theAscent; Standard_Integer  theDescent; self.TextSize(theText,theHeight,theWidth,theAscent,theDescent); return std::make_tuple(theWidth,theAscent,theDescent); },
             R"#(None)#"  , py::arg("theText"),  py::arg("theHeight"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ColorScale::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ColorScale::get_type_descriptor),
                    R"#(None)#" )
        .def_static("FindColor_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,   const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Quantity_Color &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,   const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Quantity_Color &  ) >(&AIS_ColorScale::FindColor),
                    R"#(Calculate color according passed value; returns true if value is in range or false, if isn't)#"  , py::arg("theValue"),  py::arg("theMin"),  py::arg("theMax"),  py::arg("theColorsCount"),  py::arg("theColorHlsMin"),  py::arg("theColorHlsMax"),  py::arg("theColor"))
        .def_static("FindColor_s",
                    (Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  Quantity_Color &  ) ) static_cast<Standard_Boolean (*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Integer ,  Quantity_Color &  ) >(&AIS_ColorScale::FindColor),
                    R"#(Calculate color according passed value; returns true if value is in range or false, if isn't)#"  , py::arg("theValue"),  py::arg("theMin"),  py::arg("theMax"),  py::arg("theColorsCount"),  py::arg("theColor"))
        .def_static("hueToValidRange_s",
                    (Standard_Real (*)( const Standard_Real  ) ) static_cast<Standard_Real (*)( const Standard_Real  ) >(&AIS_ColorScale::hueToValidRange),
                    R"#(Shift hue into valid range. Lightness and Saturation should be specified in valid range [0.0, 1.0], however Hue might be given out of Quantity_Color range to specify desired range for interpolation.)#"  , py::arg("theHue"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ConnectedInteractive ,opencascade::handle<AIS_ConnectedInteractive>  , AIS_InteractiveObject >>(m.attr("AIS_ConnectedInteractive"))
    // constructors
        .def(py::init< const PrsMgr_TypeOfPresentation3d >()  , py::arg("aTypeOfPresentation3d")=static_cast<const PrsMgr_TypeOfPresentation3d>(PrsMgr_TOP_AllView) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ConnectedInteractive::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ConnectedInteractive::*)() const>(&AIS_ConnectedInteractive::DynamicType),
             R"#(None)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_ConnectedInteractive::*)() const) static_cast<AIS_KindOfInteractive (AIS_ConnectedInteractive::*)() const>(&AIS_ConnectedInteractive::Type),
             R"#(Returns KOI_Object)#" )
        .def("Signature",
             (Standard_Integer (AIS_ConnectedInteractive::*)() const) static_cast<Standard_Integer (AIS_ConnectedInteractive::*)() const>(&AIS_ConnectedInteractive::Signature),
             R"#(Returns 0)#" )
        .def("Connect",
             (void (AIS_ConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_ConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_ConnectedInteractive::Connect),
             R"#(Establishes the connection between the Connected Interactive Object, anotherIobj, and its reference.)#"  , py::arg("theAnotherObj"))
        .def("Connect",
             (void (AIS_ConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf &  ) ) static_cast<void (AIS_ConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf &  ) >(&AIS_ConnectedInteractive::Connect),
             R"#(Establishes the connection between the Connected Interactive Object, anotherIobj, and its reference. Locates instance in aLocation.)#"  , py::arg("theAnotherObj"),  py::arg("theLocation"))
        .def("Connect",
             (void (AIS_ConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (AIS_ConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Geom_Transformation> &  ) >(&AIS_ConnectedInteractive::Connect),
             R"#(Establishes the connection between the Connected Interactive Object, anotherIobj, and its reference. Locates instance in aLocation.)#"  , py::arg("theAnotherObj"),  py::arg("theLocation"))
        .def("HasConnection",
             (Standard_Boolean (AIS_ConnectedInteractive::*)() const) static_cast<Standard_Boolean (AIS_ConnectedInteractive::*)() const>(&AIS_ConnectedInteractive::HasConnection),
             R"#(Returns true if there is a connection established between the presentation and its source reference.)#" )
        .def("ConnectedTo",
             (const opencascade::handle<AIS_InteractiveObject> & (AIS_ConnectedInteractive::*)() const) static_cast<const opencascade::handle<AIS_InteractiveObject> & (AIS_ConnectedInteractive::*)() const>(&AIS_ConnectedInteractive::ConnectedTo),
             R"#(Returns the connection with the reference Interactive Object.)#" )
        .def("Disconnect",
             (void (AIS_ConnectedInteractive::*)() ) static_cast<void (AIS_ConnectedInteractive::*)() >(&AIS_ConnectedInteractive::Disconnect),
             R"#(Clears the connection with a source reference. The presentation will no longer be displayed. Warning Must be done before deleting the presentation.)#" )
        .def("AcceptShapeDecomposition",
             (Standard_Boolean (AIS_ConnectedInteractive::*)() const) static_cast<Standard_Boolean (AIS_ConnectedInteractive::*)() const>(&AIS_ConnectedInteractive::AcceptShapeDecomposition),
             R"#(Informs the graphic context that the interactive Object may be decomposed into sub-shapes for dynamic selection.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_ConnectedInteractive::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_ConnectedInteractive::*)( const Standard_Integer  ) const>(&AIS_ConnectedInteractive::AcceptDisplayMode),
             R"#(Return true if reference presentation accepts specified display mode.)#"  , py::arg("theMode"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ConnectedInteractive::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ConnectedInteractive::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Dimension ,opencascade::handle<AIS_Dimension> ,Py_AIS_Dimension , AIS_InteractiveObject >>(m.attr("AIS_Dimension"))
    // constructors
        .def(py::init< const AIS_KindOfDimension >()  , py::arg("theType") )
    // custom constructors
    // methods
        .def("GetValue",
             (Standard_Real (AIS_Dimension::*)() const) static_cast<Standard_Real (AIS_Dimension::*)() const>(&AIS_Dimension::GetValue),
             R"#(Gets dimension measurement value. If the value to display is not specified by user, then the dimension object is responsible to compute it on its own in model space coordinates.)#" )
        .def("SetComputedValue",
             (void (AIS_Dimension::*)() ) static_cast<void (AIS_Dimension::*)() >(&AIS_Dimension::SetComputedValue),
             R"#(Sets computed dimension value. Resets custom value mode if it was set.)#" )
        .def("SetCustomValue",
             (void (AIS_Dimension::*)( const Standard_Real  ) ) static_cast<void (AIS_Dimension::*)( const Standard_Real  ) >(&AIS_Dimension::SetCustomValue),
             R"#(Sets user-defined dimension value. The user-defined dimension value is specified in model space, and affect by unit conversion during the display.)#"  , py::arg("theValue"))
        .def("SetCustomValue",
             (void (AIS_Dimension::*)( const TCollection_ExtendedString &  ) ) static_cast<void (AIS_Dimension::*)( const TCollection_ExtendedString &  ) >(&AIS_Dimension::SetCustomValue),
             R"#(Sets user-defined dimension value. Unit conversion during the display is not applyed.)#"  , py::arg("theValue"))
        .def("GetCustomValue",
             (const TCollection_ExtendedString & (AIS_Dimension::*)() const) static_cast<const TCollection_ExtendedString & (AIS_Dimension::*)() const>(&AIS_Dimension::GetCustomValue),
             R"#(Gets user-defined dimension value.)#" )
        .def("GetPlane",
             (const gp_Pln & (AIS_Dimension::*)() const) static_cast<const gp_Pln & (AIS_Dimension::*)() const>(&AIS_Dimension::GetPlane),
             R"#(Get the dimension plane in which the 2D dimension presentation is computed. By default, if plane is not defined by user, it is computed automatically after dimension geometry is computed. If computed dimension geometry (points) can't be placed on the user-defined plane, dimension geometry was set as invalid (validity flag is set to false) and dimension presentation will not be computed. If user-defined plane allow geometry placement on it, it will be used for computing of the dimension presentation.)#" )
        .def("GetGeometryType",
             (Standard_Integer (AIS_Dimension::*)() const) static_cast<Standard_Integer (AIS_Dimension::*)() const>(&AIS_Dimension::GetGeometryType),
             R"#(Geometry type defines type of shapes on which the dimension is to be built.)#" )
        .def("SetCustomPlane",
             (void (AIS_Dimension::*)( const gp_Pln &  ) ) static_cast<void (AIS_Dimension::*)( const gp_Pln &  ) >(&AIS_Dimension::SetCustomPlane),
             R"#(Sets user-defined plane where the 2D dimension presentation will be placed. Checks validity of this plane if geometry has been set already. Validity of the plane is checked according to the geometry set and has different criteria for different kinds of dimensions.)#"  , py::arg("thePlane"))
        .def("UnsetCustomPlane",
             (void (AIS_Dimension::*)() ) static_cast<void (AIS_Dimension::*)() >(&AIS_Dimension::UnsetCustomPlane),
             R"#(Unsets user-defined plane. Therefore the plane for dimension will be computed automatically.)#" )
        .def("IsTextPositionCustom",
             (Standard_Boolean (AIS_Dimension::*)() const) static_cast<Standard_Boolean (AIS_Dimension::*)() const>(&AIS_Dimension::IsTextPositionCustom),
             R"#(Returns TRUE if text position is set by user with method SetTextPosition().)#" )
        .def("SetTextPosition",
             (void (AIS_Dimension::*)( const gp_Pnt &  ) ) static_cast<void (AIS_Dimension::*)( const gp_Pnt &  ) >(&AIS_Dimension::SetTextPosition),
             R"#(Fixes the absolute text position and adjusts flyout, plane and text alignment according to it. Updates presentation if the text position is valid. ATTENTION! It does not change vertical text alignment.)#"  , py::arg(""))
        .def("GetTextPosition",
             (const gp_Pnt (AIS_Dimension::*)() const) static_cast<const gp_Pnt (AIS_Dimension::*)() const>(&AIS_Dimension::GetTextPosition),
             R"#(Computes absolute text position from dimension parameters (flyout, plane and text alignment).)#" )
        .def("DimensionAspect",
             (opencascade::handle<Prs3d_DimensionAspect> (AIS_Dimension::*)() const) static_cast<opencascade::handle<Prs3d_DimensionAspect> (AIS_Dimension::*)() const>(&AIS_Dimension::DimensionAspect),
             R"#(Gets the dimension aspect from AIS object drawer. Dimension aspect contains aspects of line, text and arrows for dimension presentation.)#" )
        .def("SetDimensionAspect",
             (void (AIS_Dimension::*)( const opencascade::handle<Prs3d_DimensionAspect> &  ) ) static_cast<void (AIS_Dimension::*)( const opencascade::handle<Prs3d_DimensionAspect> &  ) >(&AIS_Dimension::SetDimensionAspect),
             R"#(Sets new dimension aspect for the interactive object drawer. The dimension aspect provides dynamic properties which are generally used during computation of dimension presentations.)#"  , py::arg("theDimensionAspect"))
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_Dimension::*)() const) static_cast<AIS_KindOfDimension (AIS_Dimension::*)() const>(&AIS_Dimension::KindOfDimension),
             R"#(Returns the kind of dimension.)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Dimension::*)() const) static_cast<AIS_KindOfInteractive (AIS_Dimension::*)() const>(&AIS_Dimension::Type),
             R"#(Returns the kind of interactive.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_Dimension::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_Dimension::*)( const Standard_Integer  ) const>(&AIS_Dimension::AcceptDisplayMode),
             R"#(Returns true if the class of objects accepts the display mode theMode. The interactive context can have a default mode of representation for the set of Interactive Objects. This mode may not be accepted by object.)#"  , py::arg("theMode"))
        .def("DisplaySpecialSymbol",
             (AIS_DisplaySpecialSymbol (AIS_Dimension::*)() const) static_cast<AIS_DisplaySpecialSymbol (AIS_Dimension::*)() const>(&AIS_Dimension::DisplaySpecialSymbol),
             R"#(Returns dimension special symbol display options.)#" )
        .def("SetDisplaySpecialSymbol",
             (void (AIS_Dimension::*)( const AIS_DisplaySpecialSymbol  ) ) static_cast<void (AIS_Dimension::*)( const AIS_DisplaySpecialSymbol  ) >(&AIS_Dimension::SetDisplaySpecialSymbol),
             R"#(Specifies whether to display special symbol or not.)#"  , py::arg("theDisplaySpecSymbol"))
        .def("SpecialSymbol",
             (Standard_ExtCharacter (AIS_Dimension::*)() const) static_cast<Standard_ExtCharacter (AIS_Dimension::*)() const>(&AIS_Dimension::SpecialSymbol),
             R"#(Returns special symbol.)#" )
        .def("SetSpecialSymbol",
             (void (AIS_Dimension::*)( const Standard_ExtCharacter  ) ) static_cast<void (AIS_Dimension::*)( const Standard_ExtCharacter  ) >(&AIS_Dimension::SetSpecialSymbol),
             R"#(Specifies special symbol.)#"  , py::arg("theSpecialSymbol"))
        .def("GetDisplayUnits",
             (const TCollection_AsciiString & (AIS_Dimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_Dimension::*)() const>(&AIS_Dimension::GetDisplayUnits),
             R"#(None)#" )
        .def("GetModelUnits",
             (const TCollection_AsciiString & (AIS_Dimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_Dimension::*)() const>(&AIS_Dimension::GetModelUnits),
             R"#(None)#" )
        .def("SetDisplayUnits",
             (void (AIS_Dimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_Dimension::*)( const TCollection_AsciiString &  ) >(&AIS_Dimension::SetDisplayUnits),
             R"#(None)#"  , py::arg(""))
        .def("SetModelUnits",
             (void (AIS_Dimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_Dimension::*)( const TCollection_AsciiString &  ) >(&AIS_Dimension::SetModelUnits),
             R"#(None)#"  , py::arg(""))
        .def("UnsetFixedTextPosition",
             (void (AIS_Dimension::*)() ) static_cast<void (AIS_Dimension::*)() >(&AIS_Dimension::UnsetFixedTextPosition),
             R"#(Unsets user defined text positioning and enables text positioning by other parameters: text alignment, extension size, flyout and custom plane.)#" )
        .def("SelToleranceForText2d",
             (Standard_Real (AIS_Dimension::*)() const) static_cast<Standard_Real (AIS_Dimension::*)() const>(&AIS_Dimension::SelToleranceForText2d),
             R"#(Returns selection tolerance for text2d: For 2d text selection detection sensitive point with tolerance is used Important! Only for 2d text.)#" )
        .def("SetSelToleranceForText2d",
             (void (AIS_Dimension::*)( const Standard_Real  ) ) static_cast<void (AIS_Dimension::*)( const Standard_Real  ) >(&AIS_Dimension::SetSelToleranceForText2d),
             R"#(Sets selection tolerance for text2d: For 2d text selection detection sensitive point with tolerance is used to change this tolerance use this method Important! Only for 2d text.)#"  , py::arg("theTol"))
        .def("GetFlyout",
             (Standard_Real (AIS_Dimension::*)() const) static_cast<Standard_Real (AIS_Dimension::*)() const>(&AIS_Dimension::GetFlyout),
             R"#(Returns flyout value for dimension.)#" )
        .def("SetFlyout",
             (void (AIS_Dimension::*)( const Standard_Real  ) ) static_cast<void (AIS_Dimension::*)( const Standard_Real  ) >(&AIS_Dimension::SetFlyout),
             R"#(Sets flyout value for dimension.)#"  , py::arg("theFlyout"))
        .def("IsValid",
             (Standard_Boolean (AIS_Dimension::*)() const) static_cast<Standard_Boolean (AIS_Dimension::*)() const>(&AIS_Dimension::IsValid),
             R"#(Check that the input geometry for dimension is valid and the presentation can be successfully computed.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Dimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Dimension::*)() const>(&AIS_Dimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Dimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Dimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Line ,opencascade::handle<AIS_Line>  , AIS_InteractiveObject >>(m.attr("AIS_Line"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Line> & >()  , py::arg("aLine") )
        .def(py::init< const opencascade::handle<Geom_Point> &,const opencascade::handle<Geom_Point> & >()  , py::arg("aStartPoint"),  py::arg("aEndPoint") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Line::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Line::*)() const>(&AIS_Line::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_Line::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_Line::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_Line::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("Signature",
             (Standard_Integer (AIS_Line::*)() const) static_cast<Standard_Integer (AIS_Line::*)() const>(&AIS_Line::Signature),
             R"#(Returns the signature 5.)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Line::*)() const) static_cast<AIS_KindOfInteractive (AIS_Line::*)() const>(&AIS_Line::Type),
             R"#(Returns the type Datum.)#" )
        .def("Line",
             (const opencascade::handle<Geom_Line> & (AIS_Line::*)() const) static_cast<const opencascade::handle<Geom_Line> & (AIS_Line::*)() const>(&AIS_Line::Line),
             R"#(Constructs an infinite line.)#" )
        .def("Points",
             (void (AIS_Line::*)( opencascade::handle<Geom_Point> & ,  opencascade::handle<Geom_Point> &  ) const) static_cast<void (AIS_Line::*)( opencascade::handle<Geom_Point> & ,  opencascade::handle<Geom_Point> &  ) const>(&AIS_Line::Points),
             R"#(Returns the starting point thePStart and the end point thePEnd of the line set by SetPoints.)#"  , py::arg("thePStart"),  py::arg("thePEnd"))
        .def("SetLine",
             (void (AIS_Line::*)( const opencascade::handle<Geom_Line> &  ) ) static_cast<void (AIS_Line::*)( const opencascade::handle<Geom_Line> &  ) >(&AIS_Line::SetLine),
             R"#(instantiates an infinite line.)#"  , py::arg("theLine"))
        .def("SetPoints",
             (void (AIS_Line::*)( const opencascade::handle<Geom_Point> & ,  const opencascade::handle<Geom_Point> &  ) ) static_cast<void (AIS_Line::*)( const opencascade::handle<Geom_Point> & ,  const opencascade::handle<Geom_Point> &  ) >(&AIS_Line::SetPoints),
             R"#(Sets the starting point thePStart and ending point thePEnd of the infinite line to create a finite line segment.)#"  , py::arg("thePStart"),  py::arg("thePEnd"))
        .def("SetColor",
             (void (AIS_Line::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Line::*)( const Quantity_Color &  ) >(&AIS_Line::SetColor),
             R"#(Provides a new color setting aColor for the line in the drawing tool, or "Drawer".)#"  , py::arg("aColor"))
        .def("SetWidth",
             (void (AIS_Line::*)( const Standard_Real  ) ) static_cast<void (AIS_Line::*)( const Standard_Real  ) >(&AIS_Line::SetWidth),
             R"#(Provides the new width setting aValue for the line in the drawing tool, or "Drawer".)#"  , py::arg("aValue"))
        .def("UnsetColor",
             (void (AIS_Line::*)() ) static_cast<void (AIS_Line::*)() >(&AIS_Line::UnsetColor),
             R"#(Removes the color setting and returns the original color.)#" )
        .def("UnsetWidth",
             (void (AIS_Line::*)() ) static_cast<void (AIS_Line::*)() >(&AIS_Line::UnsetWidth),
             R"#(Removes the width setting and returns the original width.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Line::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Line::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Manipulator ,opencascade::handle<AIS_Manipulator>  , AIS_InteractiveObject >>(m.attr("AIS_Manipulator"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_Ax2 & >()  , py::arg("thePosition") )
    // custom constructors
    // methods
        .def("SetPart",
             (void (AIS_Manipulator::*)( const Standard_Integer ,  const AIS_ManipulatorMode ,  const Standard_Boolean  ) ) static_cast<void (AIS_Manipulator::*)( const Standard_Integer ,  const AIS_ManipulatorMode ,  const Standard_Boolean  ) >(&AIS_Manipulator::SetPart),
             R"#(Disable or enable visual parts for translation, rotation or scaling for some axis. By default all parts are enabled (will be displayed).)#"  , py::arg("theAxisIndex"),  py::arg("theMode"),  py::arg("theIsEnabled"))
        .def("SetPart",
             (void (AIS_Manipulator::*)( const AIS_ManipulatorMode ,  const Standard_Boolean  ) ) static_cast<void (AIS_Manipulator::*)( const AIS_ManipulatorMode ,  const Standard_Boolean  ) >(&AIS_Manipulator::SetPart),
             R"#(Disable or enable visual parts for translation, rotation or scaling for ALL axes. By default all parts are enabled (will be displayed).)#"  , py::arg("theMode"),  py::arg("theIsEnabled"))
        .def("Attach",
             (void (AIS_Manipulator::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const AIS_Manipulator::OptionsForAttach &  ) ) static_cast<void (AIS_Manipulator::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const AIS_Manipulator::OptionsForAttach &  ) >(&AIS_Manipulator::Attach),
             R"#(Attaches himself to the input interactive object and become displayed in the same context. It is placed in the center of object bounding box, and its size is adjusted to the object bounding box.)#"  , py::arg("theObject"),  py::arg("theOptions")=static_cast<const AIS_Manipulator::OptionsForAttach &>(OptionsForAttach ( )))
        .def("Attach",
             (void (AIS_Manipulator::*)( const opencascade::handle<AIS_ManipulatorObjectSequence> & ,  const AIS_Manipulator::OptionsForAttach &  ) ) static_cast<void (AIS_Manipulator::*)( const opencascade::handle<AIS_ManipulatorObjectSequence> & ,  const AIS_Manipulator::OptionsForAttach &  ) >(&AIS_Manipulator::Attach),
             R"#(Attaches himself to the input interactive object group and become displayed in the same context. It become attached to the first object, baut manage manipulation of the whole group. It is placed in the center of object bounding box, and its size is adjusted to the object bounding box.)#"  , py::arg("theObject"),  py::arg("theOptions")=static_cast<const AIS_Manipulator::OptionsForAttach &>(OptionsForAttach ( )))
        .def("EnableMode",
             (void (AIS_Manipulator::*)( const AIS_ManipulatorMode  ) ) static_cast<void (AIS_Manipulator::*)( const AIS_ManipulatorMode  ) >(&AIS_Manipulator::EnableMode),
             R"#(Enable manipualtion mode.)#"  , py::arg("theMode"))
        .def("SetModeActivationOnDetection",
             (void (AIS_Manipulator::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Manipulator::*)( const Standard_Boolean  ) >(&AIS_Manipulator::SetModeActivationOnDetection),
             R"#(Enables mode activation on detection (highlighting). By default, mode is activated on selection of manipulator part.)#"  , py::arg("theToEnable"))
        .def("IsModeActivationOnDetection",
             (Standard_Boolean (AIS_Manipulator::*)() const) static_cast<Standard_Boolean (AIS_Manipulator::*)() const>(&AIS_Manipulator::IsModeActivationOnDetection),
             R"#(Returns true if manual mode activation is enabled.)#" )
        .def("StartTransform",
             (void (AIS_Manipulator::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> &  ) ) static_cast<void (AIS_Manipulator::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> &  ) >(&AIS_Manipulator::StartTransform),
             R"#(Init start (reference) transformation.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theView"))
        .def("Transform",
             (void (AIS_Manipulator::*)( const gp_Trsf &  ) ) static_cast<void (AIS_Manipulator::*)( const gp_Trsf &  ) >(&AIS_Manipulator::Transform),
             R"#(Apply to the owning objects the input transformation.)#"  , py::arg("aTrsf"))
        .def("StopTransform",
             (void (AIS_Manipulator::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Manipulator::*)( const Standard_Boolean  ) >(&AIS_Manipulator::StopTransform),
             R"#(Reset start (reference) transformation.)#"  , py::arg("theToApply")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Transform",
             (gp_Trsf (AIS_Manipulator::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> &  ) ) static_cast<gp_Trsf (AIS_Manipulator::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> &  ) >(&AIS_Manipulator::Transform),
             R"#(Apply transformation made from mouse moving from start position (save on the first Tranform() call and reset on DeactivateCurrentMode() call.) to the in/out mouse position (theX, theY))#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theView"))
        .def("ObjectTransformation",
             (Standard_Boolean (AIS_Manipulator::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  gp_Trsf &  ) ) static_cast<Standard_Boolean (AIS_Manipulator::*)( const Standard_Integer ,  const Standard_Integer ,  const opencascade::handle<V3d_View> & ,  gp_Trsf &  ) >(&AIS_Manipulator::ObjectTransformation),
             R"#(Computes transformation of parent object according to the active mode and input motion vector. You can use this method to get object transformation according to current mode or use own algorithm to implement any other tranformation for modes.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theView"),  py::arg("theTrsf"))
        .def("DeactivateCurrentMode",
             (void (AIS_Manipulator::*)() ) static_cast<void (AIS_Manipulator::*)() >(&AIS_Manipulator::DeactivateCurrentMode),
             R"#(Make inactive the current selected manipulator part and reset current axis index and current mode. After its call HasActiveMode() returns false.)#" )
        .def("Detach",
             (void (AIS_Manipulator::*)() ) static_cast<void (AIS_Manipulator::*)() >(&AIS_Manipulator::Detach),
             R"#(Detaches himself from the owner object, and removes itself from context.)#" )
        .def("Objects",
             (opencascade::handle<AIS_ManipulatorObjectSequence> (AIS_Manipulator::*)() const) static_cast<opencascade::handle<AIS_ManipulatorObjectSequence> (AIS_Manipulator::*)() const>(&AIS_Manipulator::Objects),
             R"#(Returns all owning objects.)#" )
        .def("Object",
             (opencascade::handle<AIS_InteractiveObject> (AIS_Manipulator::*)() const) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_Manipulator::*)() const>(&AIS_Manipulator::Object),
             R"#(Returns the first (leading) object of the owning objects.)#" )
        .def("Object",
             (opencascade::handle<AIS_InteractiveObject> (AIS_Manipulator::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_Manipulator::*)( const Standard_Integer  ) const>(&AIS_Manipulator::Object),
             R"#(Returns one of the owning objects. raises program error if theIndex is more than owning objects count or less than 1.)#"  , py::arg("theIndex"))
        .def("IsAttached",
             (Standard_Boolean (AIS_Manipulator::*)() const) static_cast<Standard_Boolean (AIS_Manipulator::*)() const>(&AIS_Manipulator::IsAttached),
             R"#(Returns true if manipulator is attached to some interactive object (has owning object).)#" )
        .def("HasActiveMode",
             (Standard_Boolean (AIS_Manipulator::*)() const) static_cast<Standard_Boolean (AIS_Manipulator::*)() const>(&AIS_Manipulator::HasActiveMode),
             R"#(Returns true if some part of manipulator is selected (transformation mode is active, and owning object can be transformed).)#" )
        .def("HasActiveTransformation",
             (Standard_Boolean (AIS_Manipulator::*)() ) static_cast<Standard_Boolean (AIS_Manipulator::*)() >(&AIS_Manipulator::HasActiveTransformation),
             R"#(None)#" )
        .def("StartTransformation",
             (gp_Trsf (AIS_Manipulator::*)() const) static_cast<gp_Trsf (AIS_Manipulator::*)() const>(&AIS_Manipulator::StartTransformation),
             R"#(None)#" )
        .def("StartTransformation",
             (gp_Trsf (AIS_Manipulator::*)( Standard_Integer  ) const) static_cast<gp_Trsf (AIS_Manipulator::*)( Standard_Integer  ) const>(&AIS_Manipulator::StartTransformation),
             R"#(None)#"  , py::arg("theIndex"))
        .def("SetZoomPersistence",
             (void (AIS_Manipulator::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Manipulator::*)( const Standard_Boolean  ) >(&AIS_Manipulator::SetZoomPersistence),
             R"#(Enable or disable zoom persistence mode for the manipulator. With this mode turned on the presentation will keep fixed screen size.)#"  , py::arg("theToEnable"))
        .def("ZoomPersistence",
             (Standard_Boolean (AIS_Manipulator::*)() const) static_cast<Standard_Boolean (AIS_Manipulator::*)() const>(&AIS_Manipulator::ZoomPersistence),
             R"#(Returns state of zoom persistence mode, whether it turned on or off.)#" )
        .def("SetTransformPersistence",
             (void (AIS_Manipulator::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<void (AIS_Manipulator::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) >(&AIS_Manipulator::SetTransformPersistence),
             R"#(Redefines transform persistence management to setup transformation for sub-presentation of axes.)#"  , py::arg("theTrsfPers"))
        .def("ActiveMode",
             (AIS_ManipulatorMode (AIS_Manipulator::*)() const) static_cast<AIS_ManipulatorMode (AIS_Manipulator::*)() const>(&AIS_Manipulator::ActiveMode),
             R"#()#" )
        .def("Position",
             (const gp_Ax2 & (AIS_Manipulator::*)() const) static_cast<const gp_Ax2 & (AIS_Manipulator::*)() const>(&AIS_Manipulator::Position),
             R"#(Returns poition of manipulator interactive object.)#" )
        .def("SetPosition",
             (void (AIS_Manipulator::*)( const gp_Ax2 &  ) ) static_cast<void (AIS_Manipulator::*)( const gp_Ax2 &  ) >(&AIS_Manipulator::SetPosition),
             R"#(Sets position of the manipulator object.)#"  , py::arg("thePosition"))
        .def("Size",
             (Standard_ShortReal (AIS_Manipulator::*)() const) static_cast<Standard_ShortReal (AIS_Manipulator::*)() const>(&AIS_Manipulator::Size),
             R"#(None)#" )
        .def("SetSize",
             (void (AIS_Manipulator::*)( const Standard_ShortReal  ) ) static_cast<void (AIS_Manipulator::*)( const Standard_ShortReal  ) >(&AIS_Manipulator::SetSize),
             R"#(Sets size (length of side of the manipulator cubic bounding box.)#"  , py::arg("theSideLength"))
        .def("SetGap",
             (void (AIS_Manipulator::*)( const Standard_ShortReal  ) ) static_cast<void (AIS_Manipulator::*)( const Standard_ShortReal  ) >(&AIS_Manipulator::SetGap),
             R"#(Sets gaps between translator, scaler and rotator sub-presentations.)#"  , py::arg("theValue"))
        .def("SetTransformBehavior",
             (void (AIS_Manipulator::*)( const AIS_Manipulator::BehaviorOnTransform &  ) ) static_cast<void (AIS_Manipulator::*)( const AIS_Manipulator::BehaviorOnTransform &  ) >(&AIS_Manipulator::SetTransformBehavior),
             R"#(Sets behavior settings for transformation action carried on the manipulator, whether it translates, rotates together with the transformed object or not.)#"  , py::arg("theSettings"))
        .def("ChangeTransformBehavior",
             (AIS_Manipulator::BehaviorOnTransform & (AIS_Manipulator::*)() ) static_cast<AIS_Manipulator::BehaviorOnTransform & (AIS_Manipulator::*)() >(&AIS_Manipulator::ChangeTransformBehavior),
             R"#(Returns behavior settings for transformation action of the manipulator.)#" )
        .def("TransformBehavior",
             (const AIS_Manipulator::BehaviorOnTransform & (AIS_Manipulator::*)() const) static_cast<const AIS_Manipulator::BehaviorOnTransform & (AIS_Manipulator::*)() const>(&AIS_Manipulator::TransformBehavior),
             R"#(Returns behavior settings for transformation action of the manipulator.)#" )
        .def("Compute",
             (void (AIS_Manipulator::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const Standard_Integer  ) ) static_cast<void (AIS_Manipulator::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const Standard_Integer  ) >(&AIS_Manipulator::Compute),
             R"#(Fills presentation.)#"  , py::arg("thePrsMgr"),  py::arg("thePrs"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("ComputeSelection",
             (void (AIS_Manipulator::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) ) static_cast<void (AIS_Manipulator::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) >(&AIS_Manipulator::ComputeSelection),
             R"#(Computes selection sensitive zones (triangulation) for manipulator.)#"  , py::arg("theSelection"),  py::arg("theMode"))
        .def("IsAutoHilight",
             (Standard_Boolean (AIS_Manipulator::*)() const) static_cast<Standard_Boolean (AIS_Manipulator::*)() const>(&AIS_Manipulator::IsAutoHilight),
             R"#(Disables auto highlighting to use HilightSelected() and HilightOwnerWithColor() overridden methods.)#" )
        .def("ClearSelected",
             (void (AIS_Manipulator::*)() ) static_cast<void (AIS_Manipulator::*)() >(&AIS_Manipulator::ClearSelected),
             R"#(Method which clear all selected owners belonging to this selectable object ( for fast presentation draw ).)#" )
        .def("HilightSelected",
             (void (AIS_Manipulator::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) ) static_cast<void (AIS_Manipulator::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) >(&AIS_Manipulator::HilightSelected),
             R"#(Method which draws selected owners ( for fast presentation draw ).)#"  , py::arg("thePM"),  py::arg("theSeq"))
        .def("HilightOwnerWithColor",
             (void (AIS_Manipulator::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<void (AIS_Manipulator::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&AIS_Manipulator::HilightOwnerWithColor),
             R"#(Method which hilight an owner belonging to this selectable object ( for fast presentation draw ).)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theOwner"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Manipulator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Manipulator::*)() const>(&AIS_Manipulator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Manipulator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Manipulator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_MediaPlayer ,opencascade::handle<AIS_MediaPlayer>  , AIS_InteractiveObject >>(m.attr("AIS_MediaPlayer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_MediaPlayer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_MediaPlayer::*)() const>(&AIS_MediaPlayer::DynamicType),
             R"#(None)#" )
        .def("SetCallback",
             (void (AIS_MediaPlayer::*)( Graphic3d_MediaTextureSet::CallbackOnUpdate_t ,  void *  ) ) static_cast<void (AIS_MediaPlayer::*)( Graphic3d_MediaTextureSet::CallbackOnUpdate_t ,  void *  ) >(&AIS_MediaPlayer::SetCallback),
             R"#(Setup callback to be called on queue progress (e.g. when new frame should be displayed).)#"  , py::arg("theCallbackFunction"),  py::arg("theCallbackUserPtr"))
        .def("OpenInput",
             (void (AIS_MediaPlayer::*)( const TCollection_AsciiString & ,  Standard_Boolean  ) ) static_cast<void (AIS_MediaPlayer::*)( const TCollection_AsciiString & ,  Standard_Boolean  ) >(&AIS_MediaPlayer::OpenInput),
             R"#(Open specified file.)#"  , py::arg("thePath"),  py::arg("theToWait"))
        .def("PresentFrame",
             (bool (AIS_MediaPlayer::*)(  const NCollection_Vec2<Standard_Integer> & ,   const NCollection_Vec2<Standard_Integer> &  ) ) static_cast<bool (AIS_MediaPlayer::*)(  const NCollection_Vec2<Standard_Integer> & ,   const NCollection_Vec2<Standard_Integer> &  ) >(&AIS_MediaPlayer::PresentFrame),
             R"#(Display new frame.)#"  , py::arg("theLeftCorner"),  py::arg("theMaxSize"))
        .def("PlayerContext",
             (const opencascade::handle<Media_PlayerContext> & (AIS_MediaPlayer::*)() const) static_cast<const opencascade::handle<Media_PlayerContext> & (AIS_MediaPlayer::*)() const>(&AIS_MediaPlayer::PlayerContext),
             R"#(Return player context.)#" )
        .def("PlayPause",
             (void (AIS_MediaPlayer::*)() ) static_cast<void (AIS_MediaPlayer::*)() >(&AIS_MediaPlayer::PlayPause),
             R"#(Switch playback state.)#" )
        .def("SetClosePlayer",
             (void (AIS_MediaPlayer::*)() ) static_cast<void (AIS_MediaPlayer::*)() >(&AIS_MediaPlayer::SetClosePlayer),
             R"#(Schedule player to be closed.)#" )
        .def("Duration",
             (double (AIS_MediaPlayer::*)() const) static_cast<double (AIS_MediaPlayer::*)() const>(&AIS_MediaPlayer::Duration),
             R"#(Return duration.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_MediaPlayer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_MediaPlayer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_MultipleConnectedInteractive ,opencascade::handle<AIS_MultipleConnectedInteractive>  , AIS_InteractiveObject >>(m.attr("AIS_MultipleConnectedInteractive"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_MultipleConnectedInteractive::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_MultipleConnectedInteractive::*)() const>(&AIS_MultipleConnectedInteractive::DynamicType),
             R"#(None)#" )
        .def("Connect",
             (opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Graphic3d_TransformPers> &  ) >(&AIS_MultipleConnectedInteractive::Connect),
             R"#(Establishes the connection between the Connected Interactive Object, theInteractive, and its reference. Locates instance in theLocation and applies specified transformation persistence mode.)#"  , py::arg("theAnotherObj"),  py::arg("theLocation"),  py::arg("theTrsfPers"))
        .def("Type",
             (AIS_KindOfInteractive (AIS_MultipleConnectedInteractive::*)() const) static_cast<AIS_KindOfInteractive (AIS_MultipleConnectedInteractive::*)() const>(&AIS_MultipleConnectedInteractive::Type),
             R"#(None)#" )
        .def("Signature",
             (Standard_Integer (AIS_MultipleConnectedInteractive::*)() const) static_cast<Standard_Integer (AIS_MultipleConnectedInteractive::*)() const>(&AIS_MultipleConnectedInteractive::Signature),
             R"#(None)#" )
        .def("HasConnection",
             (Standard_Boolean (AIS_MultipleConnectedInteractive::*)() const) static_cast<Standard_Boolean (AIS_MultipleConnectedInteractive::*)() const>(&AIS_MultipleConnectedInteractive::HasConnection),
             R"#(Returns true if the object is connected to others.)#" )
        .def("Disconnect",
             (void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_MultipleConnectedInteractive::Disconnect),
             R"#(Removes the connection with theInteractive.)#"  , py::arg("theInteractive"))
        .def("DisconnectAll",
             (void (AIS_MultipleConnectedInteractive::*)() ) static_cast<void (AIS_MultipleConnectedInteractive::*)() >(&AIS_MultipleConnectedInteractive::DisconnectAll),
             R"#(Clears all the connections to objects.)#" )
        .def("Compute",
             (void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_MultipleConnectedInteractive::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("Compute",
             (void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_MultipleConnectedInteractive::Compute),
             R"#(None)#"  , py::arg("aProjector"),  py::arg("aPresentation"))
        .def("AcceptShapeDecomposition",
             (Standard_Boolean (AIS_MultipleConnectedInteractive::*)() const) static_cast<Standard_Boolean (AIS_MultipleConnectedInteractive::*)() const>(&AIS_MultipleConnectedInteractive::AcceptShapeDecomposition),
             R"#(Informs the graphic context that the interactive Object may be decomposed into sub-shapes for dynamic selection.)#" )
        .def("GetAssemblyOwner",
             (const opencascade::handle<SelectMgr_EntityOwner> & (AIS_MultipleConnectedInteractive::*)() const) static_cast<const opencascade::handle<SelectMgr_EntityOwner> & (AIS_MultipleConnectedInteractive::*)() const>(&AIS_MultipleConnectedInteractive::GetAssemblyOwner),
             R"#(Returns common entity owner if the object is an assembly)#" )
        .def("GlobalSelOwner",
             (opencascade::handle<SelectMgr_EntityOwner> (AIS_MultipleConnectedInteractive::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (AIS_MultipleConnectedInteractive::*)() const>(&AIS_MultipleConnectedInteractive::GlobalSelOwner),
             R"#(Returns the owner of mode for selection of object as a whole)#" )
        .def("SetContext",
             (void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveContext> &  ) ) static_cast<void (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveContext> &  ) >(&AIS_MultipleConnectedInteractive::SetContext),
             R"#(Assigns interactive context.)#"  , py::arg("theCtx"))
        .def("Connect",
             (opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> &  ) ) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> &  ) >(&AIS_MultipleConnectedInteractive::Connect),
             R"#(Establishes the connection between the Connected Interactive Object, theInteractive, and its reference. Copies local transformation and transformation persistence mode from theInteractive.)#"  , py::arg("theAnotherObj"))
        .def("Connect",
             (opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf &  ) ) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf &  ) >(&AIS_MultipleConnectedInteractive::Connect),
             R"#(Establishes the connection between the Connected Interactive Object, theInteractive, and its reference. Locates instance in theLocation and copies transformation persistence mode from theInteractive.)#"  , py::arg("theAnotherObj"),  py::arg("theLocation"))
        .def("Connect",
             (opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf & ,  const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf & ,  const opencascade::handle<Graphic3d_TransformPers> &  ) >(&AIS_MultipleConnectedInteractive::Connect),
             R"#(Establishes the connection between the Connected Interactive Object, theInteractive, and its reference. Locates instance in theLocation and applies specified transformation persistence mode.)#"  , py::arg("theAnotherObj"),  py::arg("theLocation"),  py::arg("theTrsfPers"))
        .def("Connect",
             (opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf & ,  const Graphic3d_TransModeFlags & ,  const gp_Pnt &  ) ) static_cast<opencascade::handle<AIS_InteractiveObject> (AIS_MultipleConnectedInteractive::*)( const opencascade::handle<AIS_InteractiveObject> & ,  const gp_Trsf & ,  const Graphic3d_TransModeFlags & ,  const gp_Pnt &  ) >(&AIS_MultipleConnectedInteractive::Connect),
             R"#(None)#"  , py::arg("theInteractive"),  py::arg("theLocation"),  py::arg("theTrsfPersFlag"),  py::arg("theTrsfPersPoint"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_MultipleConnectedInteractive::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_MultipleConnectedInteractive::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Plane ,opencascade::handle<AIS_Plane>  , AIS_InteractiveObject >>(m.attr("AIS_Plane"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Plane> &,const Standard_Boolean >()  , py::arg("aComponent"),  py::arg("aCurrentMode")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<Geom_Plane> &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("aComponent"),  py::arg("aCenter"),  py::arg("aCurrentMode")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<Geom_Plane> &,const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("aComponent"),  py::arg("aCenter"),  py::arg("aPmin"),  py::arg("aPmax"),  py::arg("aCurrentMode")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<Geom_Axis2Placement> &,const AIS_TypeOfPlane,const Standard_Boolean >()  , py::arg("aComponent"),  py::arg("aPlaneType"),  py::arg("aCurrentMode")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Plane::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Plane::*)() const>(&AIS_Plane::DynamicType),
             R"#(None)#" )
        .def("SetSize",
             (void (AIS_Plane::*)( const Standard_Real  ) ) static_cast<void (AIS_Plane::*)( const Standard_Real  ) >(&AIS_Plane::SetSize),
             R"#(Same value for x and y directions)#"  , py::arg("aValue"))
        .def("SetSize",
             (void (AIS_Plane::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AIS_Plane::*)( const Standard_Real ,  const Standard_Real  ) >(&AIS_Plane::SetSize),
             R"#(Sets the size defined by the length along the X axis XVal and the length along the Y axis YVal.)#"  , py::arg("Xval"),  py::arg("YVal"))
        .def("UnsetSize",
             (void (AIS_Plane::*)() ) static_cast<void (AIS_Plane::*)() >(&AIS_Plane::UnsetSize),
             R"#(None)#" )
        .def("Size",
             (Standard_Boolean (AIS_Plane::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AIS_Plane::*)( Standard_Real & ,  Standard_Real &  ) const>(&AIS_Plane::Size),
             R"#(None)#"  , py::arg("X"),  py::arg("Y"))
        .def("HasOwnSize",
             (Standard_Boolean (AIS_Plane::*)() const) static_cast<Standard_Boolean (AIS_Plane::*)() const>(&AIS_Plane::HasOwnSize),
             R"#(None)#" )
        .def("Signature",
             (Standard_Integer (AIS_Plane::*)() const) static_cast<Standard_Integer (AIS_Plane::*)() const>(&AIS_Plane::Signature),
             R"#(None)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Plane::*)() const) static_cast<AIS_KindOfInteractive (AIS_Plane::*)() const>(&AIS_Plane::Type),
             R"#(None)#" )
        .def("Component",
             (const opencascade::handle<Geom_Plane> & (AIS_Plane::*)() ) static_cast<const opencascade::handle<Geom_Plane> & (AIS_Plane::*)() >(&AIS_Plane::Component),
             R"#(Returns the component specified in SetComponent.)#" )
        .def("SetComponent",
             (void (AIS_Plane::*)( const opencascade::handle<Geom_Plane> &  ) ) static_cast<void (AIS_Plane::*)( const opencascade::handle<Geom_Plane> &  ) >(&AIS_Plane::SetComponent),
             R"#(Creates an instance of the plane aComponent.)#"  , py::arg("aComponent"))
        .def("PlaneAttributes",
             (Standard_Boolean (AIS_Plane::*)( opencascade::handle<Geom_Plane> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt &  ) ) static_cast<Standard_Boolean (AIS_Plane::*)( opencascade::handle<Geom_Plane> & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt &  ) >(&AIS_Plane::PlaneAttributes),
             R"#(Returns the settings for the selected plane aComponent, provided in SetPlaneAttributes. These include the points aCenter, aPmin, and aPmax)#"  , py::arg("aComponent"),  py::arg("aCenter"),  py::arg("aPmin"),  py::arg("aPmax"))
        .def("SetPlaneAttributes",
             (void (AIS_Plane::*)( const opencascade::handle<Geom_Plane> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (AIS_Plane::*)( const opencascade::handle<Geom_Plane> & ,  const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&AIS_Plane::SetPlaneAttributes),
             R"#(Allows you to provide settings other than default ones for the selected plane. These include: center point aCenter, maximum aPmax and minimum aPmin.)#"  , py::arg("aComponent"),  py::arg("aCenter"),  py::arg("aPmin"),  py::arg("aPmax"))
        .def("Center",
             (const gp_Pnt & (AIS_Plane::*)() const) static_cast<const gp_Pnt & (AIS_Plane::*)() const>(&AIS_Plane::Center),
             R"#(Returns the coordinates of the center point.)#" )
        .def("SetCenter",
             (void (AIS_Plane::*)( const gp_Pnt &  ) ) static_cast<void (AIS_Plane::*)( const gp_Pnt &  ) >(&AIS_Plane::SetCenter),
             R"#(Provides settings for the center theCenter other than (0, 0, 0).)#"  , py::arg("theCenter"))
        .def("SetAxis2Placement",
             (void (AIS_Plane::*)( const opencascade::handle<Geom_Axis2Placement> & ,  const AIS_TypeOfPlane  ) ) static_cast<void (AIS_Plane::*)( const opencascade::handle<Geom_Axis2Placement> & ,  const AIS_TypeOfPlane  ) >(&AIS_Plane::SetAxis2Placement),
             R"#(Allows you to provide settings for the position and direction of one of the plane's axes, aComponent, in 3D space. The coordinate system used is right-handed, and the type of plane aPlaneType is one of: - AIS_ TOPL_Unknown - AIS_ TOPL_XYPlane - AIS_ TOPL_XZPlane - AIS_ TOPL_YZPlane}.)#"  , py::arg("aComponent"),  py::arg("aPlaneType"))
        .def("Axis2Placement",
             (opencascade::handle<Geom_Axis2Placement> (AIS_Plane::*)() ) static_cast<opencascade::handle<Geom_Axis2Placement> (AIS_Plane::*)() >(&AIS_Plane::Axis2Placement),
             R"#(Returns the position of the plane's axis2 system identifying the x, y, or z axis and giving the plane a direction in 3D space. An axis2 system is a right-handed coordinate system.)#" )
        .def("TypeOfPlane",
             (AIS_TypeOfPlane (AIS_Plane::*)() ) static_cast<AIS_TypeOfPlane (AIS_Plane::*)() >(&AIS_Plane::TypeOfPlane),
             R"#(Returns the type of plane - xy, yz, xz or unknown.)#" )
        .def("IsXYZPlane",
             (Standard_Boolean (AIS_Plane::*)() ) static_cast<Standard_Boolean (AIS_Plane::*)() >(&AIS_Plane::IsXYZPlane),
             R"#(Returns the type of plane - xy, yz, or xz.)#" )
        .def("CurrentMode",
             (Standard_Boolean (AIS_Plane::*)() ) static_cast<Standard_Boolean (AIS_Plane::*)() >(&AIS_Plane::CurrentMode),
             R"#(Returns the non-default current display mode set by SetCurrentMode.)#" )
        .def("SetCurrentMode",
             (void (AIS_Plane::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Plane::*)( const Standard_Boolean  ) >(&AIS_Plane::SetCurrentMode),
             R"#(Allows you to provide settings for a non-default current display mode.)#"  , py::arg("theCurrentMode"))
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_Plane::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_Plane::*)( const Standard_Integer  ) const>(&AIS_Plane::AcceptDisplayMode),
             R"#(Returns true if the display mode selected, aMode, is valid for planes.)#"  , py::arg("aMode"))
        .def("SetContext",
             (void (AIS_Plane::*)( const opencascade::handle<AIS_InteractiveContext> &  ) ) static_cast<void (AIS_Plane::*)( const opencascade::handle<AIS_InteractiveContext> &  ) >(&AIS_Plane::SetContext),
             R"#(connection to <aCtx> default drawer implies a recomputation of Frame values.)#"  , py::arg("aCtx"))
        .def("TypeOfSensitivity",
             (Select3D_TypeOfSensitivity (AIS_Plane::*)() const) static_cast<Select3D_TypeOfSensitivity (AIS_Plane::*)() const>(&AIS_Plane::TypeOfSensitivity),
             R"#(Returns the type of sensitivity for the plane;)#" )
        .def("SetTypeOfSensitivity",
             (void (AIS_Plane::*)( Select3D_TypeOfSensitivity  ) ) static_cast<void (AIS_Plane::*)( Select3D_TypeOfSensitivity  ) >(&AIS_Plane::SetTypeOfSensitivity),
             R"#(Sets the type of sensitivity for the plane.)#"  , py::arg("theTypeOfSensitivity"))
        .def("Compute",
             (void (AIS_Plane::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_Plane::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_Plane::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("ComputeSelection",
             (void (AIS_Plane::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) ) static_cast<void (AIS_Plane::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) >(&AIS_Plane::ComputeSelection),
             R"#(None)#"  , py::arg("theSelection"),  py::arg("theMode"))
        .def("SetColor",
             (void (AIS_Plane::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Plane::*)( const Quantity_Color &  ) >(&AIS_Plane::SetColor),
             R"#(None)#"  , py::arg("aColor"))
        .def("UnsetColor",
             (void (AIS_Plane::*)() ) static_cast<void (AIS_Plane::*)() >(&AIS_Plane::UnsetColor),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Plane::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Plane::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_PlaneTrihedron ,opencascade::handle<AIS_PlaneTrihedron>  , AIS_InteractiveObject >>(m.attr("AIS_PlaneTrihedron"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Plane> & >()  , py::arg("aPlane") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_PlaneTrihedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_PlaneTrihedron::*)() const>(&AIS_PlaneTrihedron::DynamicType),
             R"#(None)#" )
        .def("Component",
             (opencascade::handle<Geom_Plane> (AIS_PlaneTrihedron::*)() ) static_cast<opencascade::handle<Geom_Plane> (AIS_PlaneTrihedron::*)() >(&AIS_PlaneTrihedron::Component),
             R"#(Returns the component specified in SetComponent.)#" )
        .def("SetComponent",
             (void (AIS_PlaneTrihedron::*)( const opencascade::handle<Geom_Plane> &  ) ) static_cast<void (AIS_PlaneTrihedron::*)( const opencascade::handle<Geom_Plane> &  ) >(&AIS_PlaneTrihedron::SetComponent),
             R"#(Creates an instance of the component object aPlane.)#"  , py::arg("aPlane"))
        .def("XAxis",
             (opencascade::handle<AIS_Line> (AIS_PlaneTrihedron::*)() const) static_cast<opencascade::handle<AIS_Line> (AIS_PlaneTrihedron::*)() const>(&AIS_PlaneTrihedron::XAxis),
             R"#(Returns the "XAxis".)#" )
        .def("YAxis",
             (opencascade::handle<AIS_Line> (AIS_PlaneTrihedron::*)() const) static_cast<opencascade::handle<AIS_Line> (AIS_PlaneTrihedron::*)() const>(&AIS_PlaneTrihedron::YAxis),
             R"#(Returns the "YAxis".)#" )
        .def("Position",
             (opencascade::handle<AIS_Point> (AIS_PlaneTrihedron::*)() const) static_cast<opencascade::handle<AIS_Point> (AIS_PlaneTrihedron::*)() const>(&AIS_PlaneTrihedron::Position),
             R"#(Returns the point of origin of the plane trihedron.)#" )
        .def("SetLength",
             (void (AIS_PlaneTrihedron::*)( const Standard_Real  ) ) static_cast<void (AIS_PlaneTrihedron::*)( const Standard_Real  ) >(&AIS_PlaneTrihedron::SetLength),
             R"#(Sets the length of the X and Y axes.)#"  , py::arg("theLength"))
        .def("GetLength",
             (Standard_Real (AIS_PlaneTrihedron::*)() const) static_cast<Standard_Real (AIS_PlaneTrihedron::*)() const>(&AIS_PlaneTrihedron::GetLength),
             R"#(Returns the length of X and Y axes.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_PlaneTrihedron::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_PlaneTrihedron::*)( const Standard_Integer  ) const>(&AIS_PlaneTrihedron::AcceptDisplayMode),
             R"#(Returns true if the display mode selected, aMode, is valid.)#"  , py::arg("aMode"))
        .def("Compute",
             (void (AIS_PlaneTrihedron::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_PlaneTrihedron::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_PlaneTrihedron::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("Signature",
             (Standard_Integer (AIS_PlaneTrihedron::*)() const) static_cast<Standard_Integer (AIS_PlaneTrihedron::*)() const>(&AIS_PlaneTrihedron::Signature),
             R"#(None)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_PlaneTrihedron::*)() const) static_cast<AIS_KindOfInteractive (AIS_PlaneTrihedron::*)() const>(&AIS_PlaneTrihedron::Type),
             R"#(Returns datum as the type of Interactive Object.)#" )
        .def("SetColor",
             (void (AIS_PlaneTrihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_PlaneTrihedron::*)( const Quantity_Color &  ) >(&AIS_PlaneTrihedron::SetColor),
             R"#(Allows you to provide settings for the color aColor.)#"  , py::arg("theColor"))
        .def("SetXLabel",
             (void (AIS_PlaneTrihedron::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_PlaneTrihedron::*)( const TCollection_AsciiString &  ) >(&AIS_PlaneTrihedron::SetXLabel),
             R"#(None)#"  , py::arg("theLabel"))
        .def("SetYLabel",
             (void (AIS_PlaneTrihedron::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_PlaneTrihedron::*)( const TCollection_AsciiString &  ) >(&AIS_PlaneTrihedron::SetYLabel),
             R"#(None)#"  , py::arg("theLabel"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_PlaneTrihedron::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_PlaneTrihedron::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Point ,opencascade::handle<AIS_Point>  , AIS_InteractiveObject >>(m.attr("AIS_Point"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Point> & >()  , py::arg("aComponent") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Point::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Point::*)() const>(&AIS_Point::DynamicType),
             R"#(None)#" )
        .def("Signature",
             (Standard_Integer (AIS_Point::*)() const) static_cast<Standard_Integer (AIS_Point::*)() const>(&AIS_Point::Signature),
             R"#(Returns index 1, the default index for a point.)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Point::*)() const) static_cast<AIS_KindOfInteractive (AIS_Point::*)() const>(&AIS_Point::Type),
             R"#(Indicates that a point is a datum.)#" )
        .def("Component",
             (opencascade::handle<Geom_Point> (AIS_Point::*)() ) static_cast<opencascade::handle<Geom_Point> (AIS_Point::*)() >(&AIS_Point::Component),
             R"#(Returns the component specified in SetComponent.)#" )
        .def("SetComponent",
             (void (AIS_Point::*)( const opencascade::handle<Geom_Point> &  ) ) static_cast<void (AIS_Point::*)( const opencascade::handle<Geom_Point> &  ) >(&AIS_Point::SetComponent),
             R"#(Constructs an instance of the point aComponent.)#"  , py::arg("aComponent"))
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_Point::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_Point::*)( const Standard_Integer  ) const>(&AIS_Point::AcceptDisplayMode),
             R"#(Returns true if the display mode selected is valid for point datums.)#"  , py::arg("aMode"))
        .def("Compute",
             (void (AIS_Point::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_Point::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_Point::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("SetColor",
             (void (AIS_Point::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Point::*)( const Quantity_Color &  ) >(&AIS_Point::SetColor),
             R"#(Allows you to provide settings for the Color.)#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (AIS_Point::*)() ) static_cast<void (AIS_Point::*)() >(&AIS_Point::UnsetColor),
             R"#(Allows you to remove color settings.)#" )
        .def("SetMarker",
             (void (AIS_Point::*)( const Aspect_TypeOfMarker  ) ) static_cast<void (AIS_Point::*)( const Aspect_TypeOfMarker  ) >(&AIS_Point::SetMarker),
             R"#(Allows you to provide settings for a marker. These include - type of marker, - marker color, - scale factor.)#"  , py::arg("aType"))
        .def("UnsetMarker",
             (void (AIS_Point::*)() ) static_cast<void (AIS_Point::*)() >(&AIS_Point::UnsetMarker),
             R"#(Removes the marker settings.)#" )
        .def("HasMarker",
             (Standard_Boolean (AIS_Point::*)() const) static_cast<Standard_Boolean (AIS_Point::*)() const>(&AIS_Point::HasMarker),
             R"#(Returns true if the point datum has a marker.)#" )
        .def("Vertex",
             (TopoDS_Vertex (AIS_Point::*)() const) static_cast<TopoDS_Vertex (AIS_Point::*)() const>(&AIS_Point::Vertex),
             R"#(Converts a point into a vertex.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Point::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Point::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_PointCloud ,opencascade::handle<AIS_PointCloud>  , AIS_InteractiveObject >>(m.attr("AIS_PointCloud"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_PointCloud::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_PointCloud::*)() const>(&AIS_PointCloud::DynamicType),
             R"#(None)#" )
        .def("SetPoints",
             (void (AIS_PointCloud::*)( const opencascade::handle<Graphic3d_ArrayOfPoints> &  ) ) static_cast<void (AIS_PointCloud::*)( const opencascade::handle<Graphic3d_ArrayOfPoints> &  ) >(&AIS_PointCloud::SetPoints),
             R"#(Sets the points from array of points. Method will not copy the input data - array will be stored as handle.)#"  , py::arg("thePoints"))
        .def("SetPoints",
             (void (AIS_PointCloud::*)( const opencascade::handle<TColgp_HArray1OfPnt> & ,  const opencascade::handle<Quantity_HArray1OfColor> & ,  const opencascade::handle<TColgp_HArray1OfDir> &  ) ) static_cast<void (AIS_PointCloud::*)( const opencascade::handle<TColgp_HArray1OfPnt> & ,  const opencascade::handle<Quantity_HArray1OfColor> & ,  const opencascade::handle<TColgp_HArray1OfDir> &  ) >(&AIS_PointCloud::SetPoints),
             R"#(Sets the points with optional colors. The input data will be copied into internal buffer. The input arrays should have equal length, otherwise the presentation will not be computed and displayed.)#"  , py::arg("theCoords"),  py::arg("theColors")=static_cast<const opencascade::handle<Quantity_HArray1OfColor> &>(NULL),  py::arg("theNormals")=static_cast<const opencascade::handle<TColgp_HArray1OfDir> &>(NULL))
        .def("GetPoints",
             (const opencascade::handle<Graphic3d_ArrayOfPoints> (AIS_PointCloud::*)() const) static_cast<const opencascade::handle<Graphic3d_ArrayOfPoints> (AIS_PointCloud::*)() const>(&AIS_PointCloud::GetPoints),
             R"#(Get the points array. Method might be overridden to fill in points array dynamically from application data structures.)#" )
        .def("GetBoundingBox",
             (Bnd_Box (AIS_PointCloud::*)() const) static_cast<Bnd_Box (AIS_PointCloud::*)() const>(&AIS_PointCloud::GetBoundingBox),
             R"#(Get bounding box for presentation.)#" )
        .def("SetColor",
             (void (AIS_PointCloud::*)( const Quantity_Color &  ) ) static_cast<void (AIS_PointCloud::*)( const Quantity_Color &  ) >(&AIS_PointCloud::SetColor),
             R"#(Setup custom color. Affects presentation only when no per-point color attribute has been assigned.)#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (AIS_PointCloud::*)() ) static_cast<void (AIS_PointCloud::*)() >(&AIS_PointCloud::UnsetColor),
             R"#(Restore default color.)#" )
        .def("SetMaterial",
             (void (AIS_PointCloud::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (AIS_PointCloud::*)( const Graphic3d_MaterialAspect &  ) >(&AIS_PointCloud::SetMaterial),
             R"#(Setup custom material. Affects presentation only when normals are defined.)#"  , py::arg("theMat"))
        .def("UnsetMaterial",
             (void (AIS_PointCloud::*)() ) static_cast<void (AIS_PointCloud::*)() >(&AIS_PointCloud::UnsetMaterial),
             R"#(Restore default material.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_PointCloud::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_PointCloud::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Relation ,opencascade::handle<AIS_Relation> ,Py_AIS_Relation , AIS_InteractiveObject >>(m.attr("AIS_Relation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Relation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Relation::*)() const>(&AIS_Relation::DynamicType),
             R"#(None)#" )
        .def("SetColor",
             (void (AIS_Relation::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Relation::*)( const Quantity_Color &  ) >(&AIS_Relation::SetColor),
             R"#(Allows you to provide settings for the color theColor of the lines representing the relation between the two shapes.)#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (AIS_Relation::*)() ) static_cast<void (AIS_Relation::*)() >(&AIS_Relation::UnsetColor),
             R"#(Allows you to remove settings for the color of the lines representing the relation between the two shapes.)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Relation::*)() const) static_cast<AIS_KindOfInteractive (AIS_Relation::*)() const>(&AIS_Relation::Type),
             R"#(None)#" )
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_Relation::*)() const) static_cast<AIS_KindOfDimension (AIS_Relation::*)() const>(&AIS_Relation::KindOfDimension),
             R"#(Indicates that the type of dimension is unknown.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_Relation::*)() const) static_cast<Standard_Boolean (AIS_Relation::*)() const>(&AIS_Relation::IsMovable),
             R"#(Returns true if the interactive object is movable.)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (AIS_Relation::*)() const) static_cast<const TopoDS_Shape & (AIS_Relation::*)() const>(&AIS_Relation::FirstShape),
             R"#(None)#" )
        .def("SetFirstShape",
             (void (AIS_Relation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_Relation::*)( const TopoDS_Shape &  ) >(&AIS_Relation::SetFirstShape),
             R"#(None)#"  , py::arg("aFShape"))
        .def("SecondShape",
             (const TopoDS_Shape & (AIS_Relation::*)() const) static_cast<const TopoDS_Shape & (AIS_Relation::*)() const>(&AIS_Relation::SecondShape),
             R"#(Returns the second shape.)#" )
        .def("SetSecondShape",
             (void (AIS_Relation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_Relation::*)( const TopoDS_Shape &  ) >(&AIS_Relation::SetSecondShape),
             R"#(Allows you to identify the second shape aSShape relative to the first.)#"  , py::arg("aSShape"))
        .def("SetBndBox",
             (void (AIS_Relation::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AIS_Relation::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&AIS_Relation::SetBndBox),
             R"#(None)#"  , py::arg("theXmin"),  py::arg("theYmin"),  py::arg("theZmin"),  py::arg("theXmax"),  py::arg("theYmax"),  py::arg("theZmax"))
        .def("UnsetBndBox",
             (void (AIS_Relation::*)() ) static_cast<void (AIS_Relation::*)() >(&AIS_Relation::UnsetBndBox),
             R"#(None)#" )
        .def("Plane",
             (const opencascade::handle<Geom_Plane> & (AIS_Relation::*)() const) static_cast<const opencascade::handle<Geom_Plane> & (AIS_Relation::*)() const>(&AIS_Relation::Plane),
             R"#(Returns the plane.)#" )
        .def("SetPlane",
             (void (AIS_Relation::*)( const opencascade::handle<Geom_Plane> &  ) ) static_cast<void (AIS_Relation::*)( const opencascade::handle<Geom_Plane> &  ) >(&AIS_Relation::SetPlane),
             R"#(Allows you to set the plane thePlane. This is used to define relations and dimensions in several daughter classes.)#"  , py::arg("thePlane"))
        .def("Value",
             (Standard_Real (AIS_Relation::*)() const) static_cast<Standard_Real (AIS_Relation::*)() const>(&AIS_Relation::Value),
             R"#(Returns the value of each object in the relation.)#" )
        .def("SetValue",
             (void (AIS_Relation::*)( const Standard_Real  ) ) static_cast<void (AIS_Relation::*)( const Standard_Real  ) >(&AIS_Relation::SetValue),
             R"#(Allows you to provide settings for the value theVal for each object in the relation.)#"  , py::arg("theVal"))
        .def("Position",
             (const gp_Pnt & (AIS_Relation::*)() const) static_cast<const gp_Pnt & (AIS_Relation::*)() const>(&AIS_Relation::Position),
             R"#(Returns the position set using SetPosition.)#" )
        .def("SetPosition",
             (void (AIS_Relation::*)( const gp_Pnt &  ) ) static_cast<void (AIS_Relation::*)( const gp_Pnt &  ) >(&AIS_Relation::SetPosition),
             R"#(Allows you to provide the objects in the relation with settings for a non-default position.)#"  , py::arg("thePosition"))
        .def("Text",
             (const TCollection_ExtendedString & (AIS_Relation::*)() const) static_cast<const TCollection_ExtendedString & (AIS_Relation::*)() const>(&AIS_Relation::Text),
             R"#(Returns settings for text aspect.)#" )
        .def("SetText",
             (void (AIS_Relation::*)( const TCollection_ExtendedString &  ) ) static_cast<void (AIS_Relation::*)( const TCollection_ExtendedString &  ) >(&AIS_Relation::SetText),
             R"#(Allows you to provide the settings theText for text aspect.)#"  , py::arg("theText"))
        .def("ArrowSize",
             (Standard_Real (AIS_Relation::*)() const) static_cast<Standard_Real (AIS_Relation::*)() const>(&AIS_Relation::ArrowSize),
             R"#(Returns the value for the size of the arrow identifying the relation between the two shapes.)#" )
        .def("SetArrowSize",
             (void (AIS_Relation::*)( const Standard_Real  ) ) static_cast<void (AIS_Relation::*)( const Standard_Real  ) >(&AIS_Relation::SetArrowSize),
             R"#(Allows you to provide settings for the size of the arrow theArrowSize identifying the relation between the two shapes.)#"  , py::arg("theArrowSize"))
        .def("SymbolPrs",
             (DsgPrs_ArrowSide (AIS_Relation::*)() const) static_cast<DsgPrs_ArrowSide (AIS_Relation::*)() const>(&AIS_Relation::SymbolPrs),
             R"#(Returns the value of the symbol presentation. This will be one of: - AS_NONE - none - AS_FIRSTAR - first arrow - AS_LASTAR - last arrow - AS_BOTHAR - both arrows - AS_FIRSTPT - first point - AS_LASTPT - last point - AS_BOTHPT - both points - AS_FIRSTAR_LASTPT - first arrow, last point - AS_FIRSTPT_LASTAR - first point, last arrow)#" )
        .def("SetSymbolPrs",
             (void (AIS_Relation::*)( const DsgPrs_ArrowSide  ) ) static_cast<void (AIS_Relation::*)( const DsgPrs_ArrowSide  ) >(&AIS_Relation::SetSymbolPrs),
             R"#(Allows you to provide settings for the symbol presentation.)#"  , py::arg("theSymbolPrs"))
        .def("SetExtShape",
             (void (AIS_Relation::*)( const Standard_Integer  ) ) static_cast<void (AIS_Relation::*)( const Standard_Integer  ) >(&AIS_Relation::SetExtShape),
             R"#(Allows you to set the status of the extension shape by the index aIndex. The status will be one of the following: - 0 - there is no connection to a shape; - 1 - there is a connection to the first shape; - 2 - there is a connection to the second shape.)#"  , py::arg("theIndex"))
        .def("ExtShape",
             (Standard_Integer (AIS_Relation::*)() const) static_cast<Standard_Integer (AIS_Relation::*)() const>(&AIS_Relation::ExtShape),
             R"#(Returns the status index of the extension shape.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_Relation::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_Relation::*)( const Standard_Integer  ) const>(&AIS_Relation::AcceptDisplayMode),
             R"#(Returns true if the display mode aMode is accepted for the Interactive Objects in the relation. ComputeProjPresentation(me; aPres : Presentation from Prs3d; Curve1 : Curve from Geom; Curve2 : Curve from Geom; FirstP1 : Pnt from gp; LastP1 : Pnt from gp; FirstP2 : Pnt from gp; LastP2 : Pnt from gp; aColor : NameOfColor from Quantity = Quantity_NOC_PURPLE; aWidth : Real from Standard = 2; aProjTOL : TypeOfLine from Aspect = Aspect_TOL_DASH; aCallTOL : TypeOfLine from Aspect = Aspect_TOL_DOT))#"  , py::arg("aMode"))
        .def("SetAutomaticPosition",
             (void (AIS_Relation::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Relation::*)( const Standard_Boolean  ) >(&AIS_Relation::SetAutomaticPosition),
             R"#(None)#"  , py::arg("theStatus"))
        .def("AutomaticPosition",
             (Standard_Boolean (AIS_Relation::*)() const) static_cast<Standard_Boolean (AIS_Relation::*)() const>(&AIS_Relation::AutomaticPosition),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Relation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Relation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_RubberBand ,opencascade::handle<AIS_RubberBand>  , AIS_InteractiveObject >>(m.attr("AIS_RubberBand"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Quantity_Color &,const Aspect_TypeOfLine,const Standard_Real,const Standard_Boolean >()  , py::arg("theLineColor"),  py::arg("theType"),  py::arg("theLineWidth")=static_cast<const Standard_Real>(1.0),  py::arg("theIsPolygonClosed")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const Quantity_Color &,const Aspect_TypeOfLine,const Quantity_Color,const Standard_Real,const Standard_Real,const Standard_Boolean >()  , py::arg("theLineColor"),  py::arg("theType"),  py::arg("theFillColor"),  py::arg("theTransparency")=static_cast<const Standard_Real>(1.0),  py::arg("theLineWidth")=static_cast<const Standard_Real>(1.0),  py::arg("theIsPolygonClosed")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_RubberBand::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_RubberBand::*)() const>(&AIS_RubberBand::DynamicType),
             R"#(None)#" )
        .def("SetRectangle",
             (void (AIS_RubberBand::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (AIS_RubberBand::*)( const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer ,  const Standard_Integer  ) >(&AIS_RubberBand::SetRectangle),
             R"#(Sets rectangle bounds.)#"  , py::arg("theMinX"),  py::arg("theMinY"),  py::arg("theMaxX"),  py::arg("theMaxY"))
        .def("AddPoint",
             (void (AIS_RubberBand::*)(  const NCollection_Vec2<Standard_Integer> &  ) ) static_cast<void (AIS_RubberBand::*)(  const NCollection_Vec2<Standard_Integer> &  ) >(&AIS_RubberBand::AddPoint),
             R"#(Adds last point to the list of points. They are used to build polygon for rubber band.)#"  , py::arg("thePoint"))
        .def("RemoveLastPoint",
             (void (AIS_RubberBand::*)() ) static_cast<void (AIS_RubberBand::*)() >(&AIS_RubberBand::RemoveLastPoint),
             R"#(Remove last point from the list of points for the rubber band polygon.)#" )
        .def("Points",
             (const NCollection_Sequence<Graphic3d_Vec2i> & (AIS_RubberBand::*)() const) static_cast<const NCollection_Sequence<Graphic3d_Vec2i> & (AIS_RubberBand::*)() const>(&AIS_RubberBand::Points),
             R"#(Returns points for the rubber band polygon.)#" )
        .def("ClearPoints",
             (void (AIS_RubberBand::*)() ) static_cast<void (AIS_RubberBand::*)() >(&AIS_RubberBand::ClearPoints),
             R"#(Remove all points for the rubber band polygon.)#" )
        .def("LineColor",
             (Quantity_Color (AIS_RubberBand::*)() const) static_cast<Quantity_Color (AIS_RubberBand::*)() const>(&AIS_RubberBand::LineColor),
             R"#(Returns the Color attributes.)#" )
        .def("SetLineColor",
             (void (AIS_RubberBand::*)( const Quantity_Color &  ) ) static_cast<void (AIS_RubberBand::*)( const Quantity_Color &  ) >(&AIS_RubberBand::SetLineColor),
             R"#(Sets color of lines for rubber band presentation.)#"  , py::arg("theColor"))
        .def("FillColor",
             (Quantity_Color (AIS_RubberBand::*)() const) static_cast<Quantity_Color (AIS_RubberBand::*)() const>(&AIS_RubberBand::FillColor),
             R"#(Returns the color of rubber band filling.)#" )
        .def("SetFillColor",
             (void (AIS_RubberBand::*)( const Quantity_Color &  ) ) static_cast<void (AIS_RubberBand::*)( const Quantity_Color &  ) >(&AIS_RubberBand::SetFillColor),
             R"#(Sets color of rubber band filling.)#"  , py::arg("theColor"))
        .def("SetLineWidth",
             (void (AIS_RubberBand::*)( const Standard_Real  ) const) static_cast<void (AIS_RubberBand::*)( const Standard_Real  ) const>(&AIS_RubberBand::SetLineWidth),
             R"#(Sets width of line for rubber band presentation.)#"  , py::arg("theWidth"))
        .def("LineWidth",
             (Standard_Real (AIS_RubberBand::*)() const) static_cast<Standard_Real (AIS_RubberBand::*)() const>(&AIS_RubberBand::LineWidth),
             R"#(Returns width of lines.)#" )
        .def("SetLineType",
             (void (AIS_RubberBand::*)( const Aspect_TypeOfLine  ) ) static_cast<void (AIS_RubberBand::*)( const Aspect_TypeOfLine  ) >(&AIS_RubberBand::SetLineType),
             R"#(Sets type of line for rubber band presentation.)#"  , py::arg("theType"))
        .def("LineType",
             (Aspect_TypeOfLine (AIS_RubberBand::*)() const) static_cast<Aspect_TypeOfLine (AIS_RubberBand::*)() const>(&AIS_RubberBand::LineType),
             R"#(Returns type of lines.)#" )
        .def("SetFillTransparency",
             (void (AIS_RubberBand::*)( const Standard_Real  ) const) static_cast<void (AIS_RubberBand::*)( const Standard_Real  ) const>(&AIS_RubberBand::SetFillTransparency),
             R"#(Sets fill transparency.)#"  , py::arg("theValue"))
        .def("FillTransparency",
             (Standard_Real (AIS_RubberBand::*)() const) static_cast<Standard_Real (AIS_RubberBand::*)() const>(&AIS_RubberBand::FillTransparency),
             R"#(Returns fill transparency.)#" )
        .def("SetFilling",
             (void (AIS_RubberBand::*)( const Standard_Boolean  ) ) static_cast<void (AIS_RubberBand::*)( const Standard_Boolean  ) >(&AIS_RubberBand::SetFilling),
             R"#(Enable or disable filling of rubber band.)#"  , py::arg("theIsFilling"))
        .def("SetFilling",
             (void (AIS_RubberBand::*)( const Quantity_Color ,  const Standard_Real  ) ) static_cast<void (AIS_RubberBand::*)( const Quantity_Color ,  const Standard_Real  ) >(&AIS_RubberBand::SetFilling),
             R"#(Enable filling of rubber band with defined parameters.)#"  , py::arg("theColor"),  py::arg("theTransparency"))
        .def("IsFilling",
             (Standard_Boolean (AIS_RubberBand::*)() const) static_cast<Standard_Boolean (AIS_RubberBand::*)() const>(&AIS_RubberBand::IsFilling),
             R"#(Returns true if filling of rubber band is enabled.)#" )
        .def("IsPolygonClosed",
             (Standard_Boolean (AIS_RubberBand::*)() const) static_cast<Standard_Boolean (AIS_RubberBand::*)() const>(&AIS_RubberBand::IsPolygonClosed),
             R"#(Returns true if automatic closing of rubber band is enabled.)#" )
        .def("SetPolygonClosed",
             (void (AIS_RubberBand::*)( Standard_Boolean  ) ) static_cast<void (AIS_RubberBand::*)( Standard_Boolean  ) >(&AIS_RubberBand::SetPolygonClosed),
             R"#(Automatically create an additional line connecting the first and the last screen points to close the boundary polyline)#"  , py::arg("theIsPolygonClosed"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_RubberBand::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_RubberBand::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Shape ,opencascade::handle<AIS_Shape>  , AIS_InteractiveObject >>(m.attr("AIS_Shape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("shap") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Shape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Shape::*)() const>(&AIS_Shape::DynamicType),
             R"#(None)#" )
        .def("Signature",
             (Standard_Integer (AIS_Shape::*)() const) static_cast<Standard_Integer (AIS_Shape::*)() const>(&AIS_Shape::Signature),
             R"#(Returns index 0. This value refers to SHAPE from TopAbs_ShapeEnum)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Shape::*)() const) static_cast<AIS_KindOfInteractive (AIS_Shape::*)() const>(&AIS_Shape::Type),
             R"#(Returns Object as the type of Interactive Object.)#" )
        .def("AcceptShapeDecomposition",
             (Standard_Boolean (AIS_Shape::*)() const) static_cast<Standard_Boolean (AIS_Shape::*)() const>(&AIS_Shape::AcceptShapeDecomposition),
             R"#(Returns true if the Interactive Object accepts shape decomposition.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_Shape::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_Shape::*)( const Standard_Integer  ) const>(&AIS_Shape::AcceptDisplayMode),
             R"#(Return true if specified display mode is supported.)#"  , py::arg("theMode"))
        .def("Shape",
             (const TopoDS_Shape & (AIS_Shape::*)() const) static_cast<const TopoDS_Shape & (AIS_Shape::*)() const>(&AIS_Shape::Shape),
             R"#(Returns this shape object.)#" )
        .def("SetShape",
             (void (AIS_Shape::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_Shape::*)( const TopoDS_Shape &  ) >(&AIS_Shape::SetShape),
             R"#(Constructs an instance of the shape object theShape.)#"  , py::arg("theShape"))
        .def("Set",
             (void (AIS_Shape::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_Shape::*)( const TopoDS_Shape &  ) >(&AIS_Shape::Set),
             R"#(Alias for ::SetShape().)#"  , py::arg("theShape"))
        .def("SetOwnDeviationCoefficient",
             (Standard_Boolean (AIS_Shape::*)() ) static_cast<Standard_Boolean (AIS_Shape::*)() >(&AIS_Shape::SetOwnDeviationCoefficient),
             R"#(Sets a local value for deviation coefficient for this specific shape.)#" )
        .def("SetOwnHLRDeviationCoefficient",
             (Standard_Boolean (AIS_Shape::*)() ) static_cast<Standard_Boolean (AIS_Shape::*)() >(&AIS_Shape::SetOwnHLRDeviationCoefficient),
             R"#(Sets a local value for HLR deviation coefficient for this specific shape.)#" )
        .def("SetOwnDeviationAngle",
             (Standard_Boolean (AIS_Shape::*)() ) static_cast<Standard_Boolean (AIS_Shape::*)() >(&AIS_Shape::SetOwnDeviationAngle),
             R"#(Sets a local value for deviation angle for this specific shape.)#" )
        .def("SetOwnHLRDeviationAngle",
             (Standard_Boolean (AIS_Shape::*)() ) static_cast<Standard_Boolean (AIS_Shape::*)() >(&AIS_Shape::SetOwnHLRDeviationAngle),
             R"#(Sets a local value for HLR deviation angle for this specific shape.)#" )
        .def("SetOwnDeviationCoefficient",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetOwnDeviationCoefficient),
             R"#(Sets a local value for deviation coefficient for this specific shape.)#"  , py::arg("aCoefficient"))
        .def("SetOwnHLRDeviationCoefficient",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetOwnHLRDeviationCoefficient),
             R"#(sets myOwnHLRDeviationCoefficient field in Prs3d_Drawer & recomputes presentation)#"  , py::arg("aCoefficient"))
        .def("SetAngleAndDeviation",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetAngleAndDeviation),
             R"#(this compute a new angle and Deviation from the value anAngle and set the values stored in myDrawer with these that become local to the shape)#"  , py::arg("anAngle"))
        .def("UserAngle",
             (Standard_Real (AIS_Shape::*)() const) static_cast<Standard_Real (AIS_Shape::*)() const>(&AIS_Shape::UserAngle),
             R"#(gives back the angle initial value put by the User.)#" )
        .def("SetOwnDeviationAngle",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetOwnDeviationAngle),
             R"#(sets myOwnDeviationAngle field in Prs3d_Drawer & recomputes presentation)#"  , py::arg("anAngle"))
        .def("SetHLRAngleAndDeviation",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetHLRAngleAndDeviation),
             R"#(this compute a new Angle and Deviation from the value anAngle for HLR and set the values stored in myDrawer for with these that become local to the shape)#"  , py::arg("anAngle"))
        .def("SetOwnHLRDeviationAngle",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetOwnHLRDeviationAngle),
             R"#(sets myOwnHLRDeviationAngle field in Prs3d_Drawer & recomputes presentation)#"  , py::arg("anAngle"))
        .def("OwnDeviationCoefficient",
             (Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const>(&AIS_Shape::OwnDeviationCoefficient),
             R"#(Returns true and the values of the deviation coefficient aCoefficient and the previous deviation coefficient aPreviousCoefficient. If these values are not already set, false is returned.)#"  , py::arg("aCoefficient"),  py::arg("aPreviousCoefficient"))
        .def("OwnHLRDeviationCoefficient",
             (Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const>(&AIS_Shape::OwnHLRDeviationCoefficient),
             R"#(Returns true and the values of the HLR deviation coefficient aCoefficient and the previous HLR deviation coefficient aPreviousCoefficient. If these values are not already set, false is returned.)#"  , py::arg("aCoefficient"),  py::arg("aPreviousCoefficient"))
        .def("OwnDeviationAngle",
             (Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const>(&AIS_Shape::OwnDeviationAngle),
             R"#(Returns true and the values of the deviation angle anAngle and the previous deviation angle aPreviousAngle. If these values are not already set, false is returned.)#"  , py::arg("anAngle"),  py::arg("aPreviousAngle"))
        .def("OwnHLRDeviationAngle",
             (Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const) static_cast<Standard_Boolean (AIS_Shape::*)( Standard_Real & ,  Standard_Real &  ) const>(&AIS_Shape::OwnHLRDeviationAngle),
             R"#(Returns true and the values of the HLR deviation angle anAngle and of the previous HLR deviation angle aPreviousAngle. If these values are not already set, false is returned.)#"  , py::arg("anAngle"),  py::arg("aPreviousAngle"))
        .def("SetTypeOfHLR",
             (void (AIS_Shape::*)( const Prs3d_TypeOfHLR  ) ) static_cast<void (AIS_Shape::*)( const Prs3d_TypeOfHLR  ) >(&AIS_Shape::SetTypeOfHLR),
             R"#(Sets the type of HLR algorithm used by the shape)#"  , py::arg("theTypeOfHLR"))
        .def("TypeOfHLR",
             (Prs3d_TypeOfHLR (AIS_Shape::*)() const) static_cast<Prs3d_TypeOfHLR (AIS_Shape::*)() const>(&AIS_Shape::TypeOfHLR),
             R"#(Gets the type of HLR algorithm)#" )
        .def("SetColor",
             (void (AIS_Shape::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Shape::*)( const Quantity_Color &  ) >(&AIS_Shape::SetColor),
             R"#(Sets the color aColor in the reconstructed compound shape. Acts via the Drawer methods below on the appearance of: - free boundaries: Prs3d_Drawer_FreeBoundaryAspect, - isos: Prs3d_Drawer_UIsoAspect, Prs3dDrawer_VIsoAspect, - shared boundaries: Prs3d_Drawer_UnFreeBoundaryAspect, - shading: Prs3d_Drawer_ShadingAspect, - visible line color in hidden line mode: Prs3d_Drawer_SeenLineAspect - hidden line color in hidden line mode: Prs3d_Drawer_HiddenLineAspect.)#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (AIS_Shape::*)() ) static_cast<void (AIS_Shape::*)() >(&AIS_Shape::UnsetColor),
             R"#(Removes settings for color in the reconstructed compound shape.)#" )
        .def("SetWidth",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetWidth),
             R"#(Sets the value aValue for line width in the reconstructed compound shape. Changes line aspects for lines presentation.)#"  , py::arg("aValue"))
        .def("UnsetWidth",
             (void (AIS_Shape::*)() ) static_cast<void (AIS_Shape::*)() >(&AIS_Shape::UnsetWidth),
             R"#(Removes the setting for line width in the reconstructed compound shape.)#" )
        .def("SetMaterial",
             (void (AIS_Shape::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (AIS_Shape::*)( const Graphic3d_MaterialAspect &  ) >(&AIS_Shape::SetMaterial),
             R"#(Allows you to provide settings for the material aName in the reconstructed compound shape.)#"  , py::arg("aName"))
        .def("UnsetMaterial",
             (void (AIS_Shape::*)() ) static_cast<void (AIS_Shape::*)() >(&AIS_Shape::UnsetMaterial),
             R"#(Removes settings for material in the reconstructed compound shape.)#" )
        .def("SetTransparency",
             (void (AIS_Shape::*)( const Standard_Real  ) ) static_cast<void (AIS_Shape::*)( const Standard_Real  ) >(&AIS_Shape::SetTransparency),
             R"#(Sets the value aValue for transparency in the reconstructed compound shape.)#"  , py::arg("aValue")=static_cast<const Standard_Real>(0.6))
        .def("UnsetTransparency",
             (void (AIS_Shape::*)() ) static_cast<void (AIS_Shape::*)() >(&AIS_Shape::UnsetTransparency),
             R"#(Removes the setting for transparency in the reconstructed compound shape.)#" )
        .def("BoundingBox",
             (const Bnd_Box & (AIS_Shape::*)() ) static_cast<const Bnd_Box & (AIS_Shape::*)() >(&AIS_Shape::BoundingBox),
             R"#(Constructs a bounding box with which to reconstruct compound topological shapes for presentation.)#" )
        .def("Color",
             (void (AIS_Shape::*)( Quantity_Color &  ) const) static_cast<void (AIS_Shape::*)( Quantity_Color &  ) const>(&AIS_Shape::Color),
             R"#(Returns the Color attributes of the shape accordingly to the current facing model;)#"  , py::arg("aColor"))
        .def("Material",
             (Graphic3d_NameOfMaterial (AIS_Shape::*)() const) static_cast<Graphic3d_NameOfMaterial (AIS_Shape::*)() const>(&AIS_Shape::Material),
             R"#(Returns the NameOfMaterial attributes of the shape accordingly to the current facing model;)#" )
        .def("Transparency",
             (Standard_Real (AIS_Shape::*)() const) static_cast<Standard_Real (AIS_Shape::*)() const>(&AIS_Shape::Transparency),
             R"#(Returns the transparency attributes of the shape accordingly to the current facing model;)#" )
        .def("TextureRepeatUV",
             (const gp_Pnt2d & (AIS_Shape::*)() const) static_cast<const gp_Pnt2d & (AIS_Shape::*)() const>(&AIS_Shape::TextureRepeatUV),
             R"#(Return texture repeat UV values; (1, 1) by default.)#" )
        .def("SetTextureRepeatUV",
             (void (AIS_Shape::*)( const gp_Pnt2d &  ) ) static_cast<void (AIS_Shape::*)( const gp_Pnt2d &  ) >(&AIS_Shape::SetTextureRepeatUV),
             R"#(Sets the number of occurrences of the texture on each face. The texture itself is parameterized in (0,1) by (0,1). Each face of the shape to be textured is parameterized in UV space (Umin,Umax) by (Vmin,Vmax).)#"  , py::arg("theRepeatUV"))
        .def("TextureOriginUV",
             (const gp_Pnt2d & (AIS_Shape::*)() const) static_cast<const gp_Pnt2d & (AIS_Shape::*)() const>(&AIS_Shape::TextureOriginUV),
             R"#(Return texture origin UV position; (0, 0) by default.)#" )
        .def("SetTextureOriginUV",
             (void (AIS_Shape::*)( const gp_Pnt2d &  ) ) static_cast<void (AIS_Shape::*)( const gp_Pnt2d &  ) >(&AIS_Shape::SetTextureOriginUV),
             R"#(Use this method to change the origin of the texture. The texel (0,0) will be mapped to the surface (myUVOrigin.X(), myUVOrigin.Y()).)#"  , py::arg("theOriginUV"))
        .def("TextureScaleUV",
             (const gp_Pnt2d & (AIS_Shape::*)() const) static_cast<const gp_Pnt2d & (AIS_Shape::*)() const>(&AIS_Shape::TextureScaleUV),
             R"#(Return scale factor for UV coordinates; (1, 1) by default.)#" )
        .def("SetTextureScaleUV",
             (void (AIS_Shape::*)( const gp_Pnt2d &  ) ) static_cast<void (AIS_Shape::*)( const gp_Pnt2d &  ) >(&AIS_Shape::SetTextureScaleUV),
             R"#(Use this method to scale the texture (percent of the face). You can specify a scale factor for both U and V. Example: if you set ScaleU and ScaleV to 0.5 and you enable texture repeat, the texture will appear twice on the face in each direction.)#"  , py::arg("theScaleUV"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Shape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Shape::get_type_descriptor),
                    R"#(None)#" )
        .def_static("SelectionType_s",
                    (TopAbs_ShapeEnum (*)( const Standard_Integer  ) ) static_cast<TopAbs_ShapeEnum (*)( const Standard_Integer  ) >(&AIS_Shape::SelectionType),
                    R"#(Return shape type for specified selection mode.)#"  , py::arg("theSelMode"))
        .def_static("SelectionMode_s",
                    (Standard_Integer (*)( const TopAbs_ShapeEnum  ) ) static_cast<Standard_Integer (*)( const TopAbs_ShapeEnum  ) >(&AIS_Shape::SelectionMode),
                    R"#(Return selection mode for specified shape type.)#"  , py::arg("theShapeType"))
        .def_static("computeHlrPresentation_s",
                    (void (*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const TopoDS_Shape & ,  const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const TopoDS_Shape & ,  const opencascade::handle<Prs3d_Drawer> &  ) >(&AIS_Shape::computeHlrPresentation),
                    R"#(Compute HLR presentation for specified shape.)#"  , py::arg("theProjector"),  py::arg("thePrs"),  py::arg("theShape"),  py::arg("theDrawer"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_SignatureFilter ,opencascade::handle<AIS_SignatureFilter>  , AIS_TypeFilter >>(m.attr("AIS_SignatureFilter"))
    // constructors
        .def(py::init< const AIS_KindOfInteractive,const Standard_Integer >()  , py::arg("aGivenKind"),  py::arg("aGivenSignature") )
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (AIS_SignatureFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (AIS_SignatureFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&AIS_SignatureFilter::IsOk),
             R"#(Returns False if the transient is not an AIS_InteractiveObject. Returns False if the signature of InteractiveObject is not the same as the stored one in the filter...)#"  , py::arg("anobj"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_SignatureFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_SignatureFilter::*)() const>(&AIS_SignatureFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_SignatureFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_SignatureFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_TextLabel ,opencascade::handle<AIS_TextLabel>  , AIS_InteractiveObject >>(m.attr("AIS_TextLabel"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetColor",
             (void (AIS_TextLabel::*)( const Quantity_Color &  ) ) static_cast<void (AIS_TextLabel::*)( const Quantity_Color &  ) >(&AIS_TextLabel::SetColor),
             R"#(Setup color of entire text.)#"  , py::arg("theColor"))
        .def("SetTransparency",
             (void (AIS_TextLabel::*)( const Standard_Real  ) ) static_cast<void (AIS_TextLabel::*)( const Standard_Real  ) >(&AIS_TextLabel::SetTransparency),
             R"#(Setup transparency within [0, 1] range.)#"  , py::arg("theValue"))
        .def("UnsetTransparency",
             (void (AIS_TextLabel::*)() ) static_cast<void (AIS_TextLabel::*)() >(&AIS_TextLabel::UnsetTransparency),
             R"#(Removes the transparency setting.)#" )
        .def("SetMaterial",
             (void (AIS_TextLabel::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (AIS_TextLabel::*)( const Graphic3d_MaterialAspect &  ) >(&AIS_TextLabel::SetMaterial),
             R"#(Material has no effect for text label.)#"  , py::arg(""))
        .def("SetText",
             (void (AIS_TextLabel::*)( const TCollection_ExtendedString &  ) ) static_cast<void (AIS_TextLabel::*)( const TCollection_ExtendedString &  ) >(&AIS_TextLabel::SetText),
             R"#(Setup text.)#"  , py::arg("theText"))
        .def("SetPosition",
             (void (AIS_TextLabel::*)( const gp_Pnt &  ) ) static_cast<void (AIS_TextLabel::*)( const gp_Pnt &  ) >(&AIS_TextLabel::SetPosition),
             R"#(Setup position.)#"  , py::arg("thePosition"))
        .def("SetHJustification",
             (void (AIS_TextLabel::*)( const Graphic3d_HorizontalTextAlignment  ) ) static_cast<void (AIS_TextLabel::*)( const Graphic3d_HorizontalTextAlignment  ) >(&AIS_TextLabel::SetHJustification),
             R"#(Setup horizontal justification.)#"  , py::arg("theHJust"))
        .def("SetVJustification",
             (void (AIS_TextLabel::*)( const Graphic3d_VerticalTextAlignment  ) ) static_cast<void (AIS_TextLabel::*)( const Graphic3d_VerticalTextAlignment  ) >(&AIS_TextLabel::SetVJustification),
             R"#(Setup vertical justification.)#"  , py::arg("theVJust"))
        .def("SetAngle",
             (void (AIS_TextLabel::*)( const Standard_Real  ) ) static_cast<void (AIS_TextLabel::*)( const Standard_Real  ) >(&AIS_TextLabel::SetAngle),
             R"#(Setup angle.)#"  , py::arg("theAngle"))
        .def("SetZoomable",
             (void (AIS_TextLabel::*)( const Standard_Boolean  ) ) static_cast<void (AIS_TextLabel::*)( const Standard_Boolean  ) >(&AIS_TextLabel::SetZoomable),
             R"#(Setup zoomable property.)#"  , py::arg("theIsZoomable"))
        .def("SetHeight",
             (void (AIS_TextLabel::*)( const Standard_Real  ) ) static_cast<void (AIS_TextLabel::*)( const Standard_Real  ) >(&AIS_TextLabel::SetHeight),
             R"#(Setup height.)#"  , py::arg("theHeight"))
        .def("SetFontAspect",
             (void (AIS_TextLabel::*)( const Font_FontAspect  ) ) static_cast<void (AIS_TextLabel::*)( const Font_FontAspect  ) >(&AIS_TextLabel::SetFontAspect),
             R"#(Setup font aspect.)#"  , py::arg("theFontAspect"))
        .def("SetFont",
             (void (AIS_TextLabel::*)( Standard_CString  ) ) static_cast<void (AIS_TextLabel::*)( Standard_CString  ) >(&AIS_TextLabel::SetFont),
             R"#(Setup font.)#"  , py::arg("theFont"))
        .def("SetOrientation3D",
             (void (AIS_TextLabel::*)( const gp_Ax2 &  ) ) static_cast<void (AIS_TextLabel::*)( const gp_Ax2 &  ) >(&AIS_TextLabel::SetOrientation3D),
             R"#(Setup label orientation in the model 3D space.)#"  , py::arg("theOrientation"))
        .def("UnsetOrientation3D",
             (void (AIS_TextLabel::*)() ) static_cast<void (AIS_TextLabel::*)() >(&AIS_TextLabel::UnsetOrientation3D),
             R"#(Reset label orientation in the model 3D space.)#" )
        .def("Position",
             (const gp_Pnt & (AIS_TextLabel::*)() const) static_cast<const gp_Pnt & (AIS_TextLabel::*)() const>(&AIS_TextLabel::Position),
             R"#(Returns position.)#" )
        .def("Orientation3D",
             (const gp_Ax2 & (AIS_TextLabel::*)() const) static_cast<const gp_Ax2 & (AIS_TextLabel::*)() const>(&AIS_TextLabel::Orientation3D),
             R"#(Returns label orientation in the model 3D space.)#" )
        .def("HasOrientation3D",
             (Standard_Boolean (AIS_TextLabel::*)() const) static_cast<Standard_Boolean (AIS_TextLabel::*)() const>(&AIS_TextLabel::HasOrientation3D),
             R"#(Returns true if the current text placement mode uses text orientation in the model 3D space.)#" )
        .def("SetFlipping",
             (void (AIS_TextLabel::*)( const Standard_Boolean  ) ) static_cast<void (AIS_TextLabel::*)( const Standard_Boolean  ) >(&AIS_TextLabel::SetFlipping),
             R"#(None)#"  , py::arg("theIsFlipping"))
        .def("HasFlipping",
             (Standard_Boolean (AIS_TextLabel::*)() const) static_cast<Standard_Boolean (AIS_TextLabel::*)() const>(&AIS_TextLabel::HasFlipping),
             R"#(None)#" )
        .def("SetDisplayType",
             (void (AIS_TextLabel::*)( const Aspect_TypeOfDisplayText  ) ) static_cast<void (AIS_TextLabel::*)( const Aspect_TypeOfDisplayText  ) >(&AIS_TextLabel::SetDisplayType),
             R"#(Define the display type of the text.)#"  , py::arg("theDisplayType"))
        .def("SetColorSubTitle",
             (void (AIS_TextLabel::*)( const Quantity_Color &  ) ) static_cast<void (AIS_TextLabel::*)( const Quantity_Color &  ) >(&AIS_TextLabel::SetColorSubTitle),
             R"#(Modifies the colour of the subtitle for the TODT_SUBTITLE TextDisplayType and the colour of backgroubd for the TODT_DEKALE TextDisplayType.)#"  , py::arg("theColor"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_TextLabel::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_TextLabel::*)() const>(&AIS_TextLabel::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_TextLabel::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_TextLabel::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Triangulation ,opencascade::handle<AIS_Triangulation>  , AIS_InteractiveObject >>(m.attr("AIS_Triangulation"))
    // constructors
        .def(py::init< const opencascade::handle<Poly_Triangulation> & >()  , py::arg("aTriangulation") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Triangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Triangulation::*)() const>(&AIS_Triangulation::DynamicType),
             R"#(None)#" )
        .def("SetColors",
             (void (AIS_Triangulation::*)( const opencascade::handle<TColStd_HArray1OfInteger> &  ) ) static_cast<void (AIS_Triangulation::*)( const opencascade::handle<TColStd_HArray1OfInteger> &  ) >(&AIS_Triangulation::SetColors),
             R"#(Set the color for each node. Each 32-bit color is Alpha << 24 + Blue << 16 + Green << 8 + Red Order of color components is essential for further usage by OpenGL)#"  , py::arg("aColor"))
        .def("GetColors",
             (opencascade::handle<TColStd_HArray1OfInteger> (AIS_Triangulation::*)() const) static_cast<opencascade::handle<TColStd_HArray1OfInteger> (AIS_Triangulation::*)() const>(&AIS_Triangulation::GetColors),
             R"#(Get the color for each node. Each 32-bit color is Alpha << 24 + Blue << 16 + Green << 8 + Red)#" )
        .def("HasVertexColors",
             (Standard_Boolean (AIS_Triangulation::*)() const) static_cast<Standard_Boolean (AIS_Triangulation::*)() const>(&AIS_Triangulation::HasVertexColors),
             R"#(Returns true if triangulation has vertex colors.)#" )
        .def("SetTriangulation",
             (void (AIS_Triangulation::*)( const opencascade::handle<Poly_Triangulation> &  ) ) static_cast<void (AIS_Triangulation::*)( const opencascade::handle<Poly_Triangulation> &  ) >(&AIS_Triangulation::SetTriangulation),
             R"#(None)#"  , py::arg("aTriangulation"))
        .def("GetTriangulation",
             (opencascade::handle<Poly_Triangulation> (AIS_Triangulation::*)() const) static_cast<opencascade::handle<Poly_Triangulation> (AIS_Triangulation::*)() const>(&AIS_Triangulation::GetTriangulation),
             R"#(Returns Poly_Triangulation .)#" )
        .def("SetTransparency",
             (void (AIS_Triangulation::*)( const Standard_Real  ) ) static_cast<void (AIS_Triangulation::*)( const Standard_Real  ) >(&AIS_Triangulation::SetTransparency),
             R"#(Sets the value aValue for transparency in the reconstructed compound shape.)#"  , py::arg("aValue")=static_cast<const Standard_Real>(0.6))
        .def("UnsetTransparency",
             (void (AIS_Triangulation::*)() ) static_cast<void (AIS_Triangulation::*)() >(&AIS_Triangulation::UnsetTransparency),
             R"#(Removes the setting for transparency in the reconstructed compound shape.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Triangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Triangulation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Trihedron ,opencascade::handle<AIS_Trihedron>  , AIS_InteractiveObject >>(m.attr("AIS_Trihedron"))
    // constructors
        .def(py::init< const opencascade::handle<Geom_Axis2Placement> & >()  , py::arg("theComponent") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Trihedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Trihedron::*)() const>(&AIS_Trihedron::DynamicType),
             R"#(None)#" )
        .def("SetDatumDisplayMode",
             (void (AIS_Trihedron::*)( Prs3d_DatumMode  ) ) static_cast<void (AIS_Trihedron::*)( Prs3d_DatumMode  ) >(&AIS_Trihedron::SetDatumDisplayMode),
             R"#(Sets Shading or Wireframe display mode, triangle or segment graphic group is used relatively.)#"  , py::arg("theMode"))
        .def("DatumDisplayMode",
             (Prs3d_DatumMode (AIS_Trihedron::*)() const) static_cast<Prs3d_DatumMode (AIS_Trihedron::*)() const>(&AIS_Trihedron::DatumDisplayMode),
             R"#(Returns datum display mode.)#" )
        .def("Component",
             (const opencascade::handle<Geom_Axis2Placement> & (AIS_Trihedron::*)() const) static_cast<const opencascade::handle<Geom_Axis2Placement> & (AIS_Trihedron::*)() const>(&AIS_Trihedron::Component),
             R"#(Returns the right-handed coordinate system set in SetComponent.)#" )
        .def("SetComponent",
             (void (AIS_Trihedron::*)( const opencascade::handle<Geom_Axis2Placement> &  ) ) static_cast<void (AIS_Trihedron::*)( const opencascade::handle<Geom_Axis2Placement> &  ) >(&AIS_Trihedron::SetComponent),
             R"#(Constructs the right-handed coordinate system aComponent.)#"  , py::arg("theComponent"))
        .def("HasOwnSize",
             (Standard_Boolean (AIS_Trihedron::*)() const) static_cast<Standard_Boolean (AIS_Trihedron::*)() const>(&AIS_Trihedron::HasOwnSize),
             R"#(Returns true if the trihedron object has a size other than the default size of 100 mm. along each axis.)#" )
        .def("SetSize",
             (void (AIS_Trihedron::*)( const Standard_Real  ) ) static_cast<void (AIS_Trihedron::*)( const Standard_Real  ) >(&AIS_Trihedron::SetSize),
             R"#(Sets the size aValue for the trihedron object. The default value is 100 mm.)#"  , py::arg("theValue"))
        .def("UnsetSize",
             (void (AIS_Trihedron::*)() ) static_cast<void (AIS_Trihedron::*)() >(&AIS_Trihedron::UnsetSize),
             R"#(Removes any non-default settings for size of this trihedron object. If the object has 1 color, the default size of the drawer is reproduced, otherwise DatumAspect becomes null.)#" )
        .def("Size",
             (Standard_Real (AIS_Trihedron::*)() const) static_cast<Standard_Real (AIS_Trihedron::*)() const>(&AIS_Trihedron::Size),
             R"#(None)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_Trihedron::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_Trihedron::*)( const Standard_Integer  ) const>(&AIS_Trihedron::AcceptDisplayMode),
             R"#(Returns true if the display mode selected, aMode, is valid for trihedron datums.)#"  , py::arg("theMode"))
        .def("Signature",
             (Standard_Integer (AIS_Trihedron::*)() const) static_cast<Standard_Integer (AIS_Trihedron::*)() const>(&AIS_Trihedron::Signature),
             R"#(Returns index 3, selection of the planes XOY, YOZ, XOZ.)#" )
        .def("Type",
             (AIS_KindOfInteractive (AIS_Trihedron::*)() const) static_cast<AIS_KindOfInteractive (AIS_Trihedron::*)() const>(&AIS_Trihedron::Type),
             R"#(Indicates that the type of Interactive Object is datum.)#" )
        .def("SetColor",
             (void (AIS_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Quantity_Color &  ) >(&AIS_Trihedron::SetColor),
             R"#(Sets the color theColor for this trihedron object, it changes color of axes.)#"  , py::arg("theColor"))
        .def("SetTextColor",
             (void (AIS_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Quantity_Color &  ) >(&AIS_Trihedron::SetTextColor),
             R"#(Sets color of label of trihedron axes.)#"  , py::arg("theColor"))
        .def("HasTextColor",
             (Standard_Boolean (AIS_Trihedron::*)() const) static_cast<Standard_Boolean (AIS_Trihedron::*)() const>(&AIS_Trihedron::HasTextColor),
             R"#(Returns true if trihedron has own text color)#" )
        .def("TextColor",
             (Quantity_Color (AIS_Trihedron::*)() const) static_cast<Quantity_Color (AIS_Trihedron::*)() const>(&AIS_Trihedron::TextColor),
             R"#(Returns trihedron text color)#" )
        .def("SetArrowColor",
             (void (AIS_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Quantity_Color &  ) >(&AIS_Trihedron::SetArrowColor),
             R"#(Sets color of arrow of trihedron axes. Used only in wireframe mode)#"  , py::arg("theColor"))
        .def("HasArrowColor",
             (Standard_Boolean (AIS_Trihedron::*)() const) static_cast<Standard_Boolean (AIS_Trihedron::*)() const>(&AIS_Trihedron::HasArrowColor),
             R"#(Returns true if trihedron has own arrow color)#" )
        .def("ArrowColor",
             (Quantity_Color (AIS_Trihedron::*)() const) static_cast<Quantity_Color (AIS_Trihedron::*)() const>(&AIS_Trihedron::ArrowColor),
             R"#(Returns trihedron arrow color)#" )
        .def("UnsetColor",
             (void (AIS_Trihedron::*)() ) static_cast<void (AIS_Trihedron::*)() >(&AIS_Trihedron::UnsetColor),
             R"#(Removes the settings for color.)#" )
        .def("SetDatumPartColor",
             (void (AIS_Trihedron::*)( const Prs3d_DatumParts ,  const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Prs3d_DatumParts ,  const Quantity_Color &  ) >(&AIS_Trihedron::SetDatumPartColor),
             R"#(Sets color of datum part: origin or some of trihedron axes. If presentation is shading mode, this color is set for both sides of facing model)#"  , py::arg("thePart"),  py::arg("theColor"))
        .def("DatumPartColor",
             (Quantity_Color (AIS_Trihedron::*)( Prs3d_DatumParts  ) ) static_cast<Quantity_Color (AIS_Trihedron::*)( Prs3d_DatumParts  ) >(&AIS_Trihedron::DatumPartColor),
             R"#(Returns color of datum part: origin or some of trihedron axes.)#"  , py::arg("thePart"))
        .def("SetOriginColor",
             (void (AIS_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Quantity_Color &  ) >(&AIS_Trihedron::SetOriginColor),
             R"#(Sets color of origin. Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead"))#"  , py::arg("theColor"))
        .def("SetXAxisColor",
             (void (AIS_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Quantity_Color &  ) >(&AIS_Trihedron::SetXAxisColor),
             R"#(Sets color of x-axis. Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead"))#"  , py::arg("theColor"))
        .def("SetYAxisColor",
             (void (AIS_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Quantity_Color &  ) >(&AIS_Trihedron::SetYAxisColor),
             R"#(Sets color of y-axis. Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead"))#"  , py::arg("theColor"))
        .def("SetAxisColor",
             (void (AIS_Trihedron::*)( const Quantity_Color &  ) ) static_cast<void (AIS_Trihedron::*)( const Quantity_Color &  ) >(&AIS_Trihedron::SetAxisColor),
             R"#(Sets color of z-axis. Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead"))#"  , py::arg("theColor"))
        .def("ToDrawArrows",
             (Standard_Boolean (AIS_Trihedron::*)() const) static_cast<Standard_Boolean (AIS_Trihedron::*)() const>(&AIS_Trihedron::ToDrawArrows),
             R"#(Returns true if arrows are to be drawn)#" )
        .def("SetDrawArrows",
             (void (AIS_Trihedron::*)( const Standard_Boolean  ) ) static_cast<void (AIS_Trihedron::*)( const Standard_Boolean  ) >(&AIS_Trihedron::SetDrawArrows),
             R"#(Sets whether to draw the arrows in visualization)#"  , py::arg("theToDraw"))
        .def("SetSelectionPriority",
             (void (AIS_Trihedron::*)( Prs3d_DatumParts ,  Standard_Integer  ) ) static_cast<void (AIS_Trihedron::*)( Prs3d_DatumParts ,  Standard_Integer  ) >(&AIS_Trihedron::SetSelectionPriority),
             R"#(Sets priority of selection for owner of the given type)#"  , py::arg("thePart"),  py::arg("thePriority"))
        .def("SelectionPriority",
             (Standard_Integer (AIS_Trihedron::*)( Prs3d_DatumParts  ) ) static_cast<Standard_Integer (AIS_Trihedron::*)( Prs3d_DatumParts  ) >(&AIS_Trihedron::SelectionPriority),
             R"#(Sets priority of selection for owner of the given type)#"  , py::arg("thePart"))
        .def("SetLabel",
             (void (AIS_Trihedron::*)( const Prs3d_DatumParts ,  const TCollection_ExtendedString &  ) ) static_cast<void (AIS_Trihedron::*)( const Prs3d_DatumParts ,  const TCollection_ExtendedString &  ) >(&AIS_Trihedron::SetLabel),
             R"#(Sets text label for trihedron axis. Parameter thePart should be XAxis, YAxis or ZAxis)#"  , py::arg("thePart"),  py::arg("thePriority"))
        .def("Label",
             (const TCollection_ExtendedString & (AIS_Trihedron::*)( Prs3d_DatumParts  ) ) static_cast<const TCollection_ExtendedString & (AIS_Trihedron::*)( Prs3d_DatumParts  ) >(&AIS_Trihedron::Label),
             R"#(Returns text of axis. Parameter thePart should be XAxis, YAxis or ZAxis)#"  , py::arg("thePart"))
        .def("IsAutoHilight",
             (Standard_Boolean (AIS_Trihedron::*)() const) static_cast<Standard_Boolean (AIS_Trihedron::*)() const>(&AIS_Trihedron::IsAutoHilight),
             R"#(Disables auto highlighting to use HilightSelected() and HilightOwnerWithColor() overridden methods.)#" )
        .def("ClearSelected",
             (void (AIS_Trihedron::*)() ) static_cast<void (AIS_Trihedron::*)() >(&AIS_Trihedron::ClearSelected),
             R"#(Method which clear all selected owners belonging to this selectable object ( for fast presentation draw ).)#" )
        .def("HilightSelected",
             (void (AIS_Trihedron::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) ) static_cast<void (AIS_Trihedron::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) >(&AIS_Trihedron::HilightSelected),
             R"#(Method which draws selected owners ( for fast presentation draw ).)#"  , py::arg("thePM"),  py::arg("theOwners"))
        .def("HilightOwnerWithColor",
             (void (AIS_Trihedron::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<void (AIS_Trihedron::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&AIS_Trihedron::HilightOwnerWithColor),
             R"#(Method which hilight an owner belonging to this selectable object ( for fast presentation draw ).)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theOwner"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Trihedron::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Trihedron::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ViewCube ,opencascade::handle<AIS_ViewCube>  , AIS_InteractiveObject >>(m.attr("AIS_ViewCube"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ViewCube::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ViewCube::*)() const>(&AIS_ViewCube::DynamicType),
             R"#(None)#" )
        .def("ViewAnimation",
             (const opencascade::handle<AIS_AnimationCamera> & (AIS_ViewCube::*)() const) static_cast<const opencascade::handle<AIS_AnimationCamera> & (AIS_ViewCube::*)() const>(&AIS_ViewCube::ViewAnimation),
             R"#(Return view animation.)#" )
        .def("SetViewAnimation",
             (void (AIS_ViewCube::*)( const opencascade::handle<AIS_AnimationCamera> &  ) ) static_cast<void (AIS_ViewCube::*)( const opencascade::handle<AIS_AnimationCamera> &  ) >(&AIS_ViewCube::SetViewAnimation),
             R"#(Set view animation.)#"  , py::arg("theAnimation"))
        .def("ToAutoStartAnimation",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::ToAutoStartAnimation),
             R"#(Return TRUE if automatic camera transformation on selection (highlighting) is enabled; TRUE by default.)#" )
        .def("SetAutoStartAnimation",
             (void (AIS_ViewCube::*)( bool  ) ) static_cast<void (AIS_ViewCube::*)( bool  ) >(&AIS_ViewCube::SetAutoStartAnimation),
             R"#(Enable/disable automatic camera transformation on selection (highlighting). The automatic logic can be disabled if application wants performing action manually basing on picking results (AIS_ViewCubeOwner).)#"  , py::arg("theToEnable"))
        .def("IsFixedAnimationLoop",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::IsFixedAnimationLoop),
             R"#(Return TRUE if camera animation should be done in uninterruptible loop; TRUE by default.)#" )
        .def("SetFixedAnimationLoop",
             (void (AIS_ViewCube::*)( bool  ) ) static_cast<void (AIS_ViewCube::*)( bool  ) >(&AIS_ViewCube::SetFixedAnimationLoop),
             R"#(Set if camera animation should be done in uninterruptible loop.)#"  , py::arg("theToEnable"))
        .def("ResetStyles",
             (void (AIS_ViewCube::*)() ) static_cast<void (AIS_ViewCube::*)() >(&AIS_ViewCube::ResetStyles),
             R"#(Reset all size and style parameters to default.)#" )
        .def("Size",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::Size),
             R"#(Returns size (width and height) of View cube sides; 100 by default.)#" )
        .def("SetSize",
             (void (AIS_ViewCube::*)( Standard_Real ,  Standard_Boolean  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real ,  Standard_Boolean  ) >(&AIS_ViewCube::SetSize),
             R"#(Sets size (width and height) of View cube sides.)#"  , py::arg("theValue"),  py::arg("theToAdaptAnother")=static_cast<Standard_Boolean>(true))
        .def("BoxFacetExtension",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxFacetExtension),
             R"#(Return box facet extension to edge/corner facet split; 10 by default.)#" )
        .def("SetBoxFacetExtension",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetBoxFacetExtension),
             R"#(Set new value of box facet extension.)#"  , py::arg("theValue"))
        .def("AxesPadding",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::AxesPadding),
             R"#(Return padding between axes and 3D part (box); 10 by default.)#" )
        .def("SetAxesPadding",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetAxesPadding),
             R"#(Set new value of padding between axes and 3D part (box).)#"  , py::arg("theValue"))
        .def("BoxEdgeGap",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxEdgeGap),
             R"#(Return gap between box edges and box sides; 0 by default.)#" )
        .def("SetBoxEdgeGap",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetBoxEdgeGap),
             R"#(Set new value of box edges gap.)#"  , py::arg("theValue"))
        .def("BoxEdgeMinSize",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxEdgeMinSize),
             R"#(Return minimal size of box edge; 2 by default.)#" )
        .def("SetBoxEdgeMinSize",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetBoxEdgeMinSize),
             R"#(Set new value of box edge minimal size.)#"  , py::arg("theValue"))
        .def("BoxCornerMinSize",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxCornerMinSize),
             R"#(Return minimal size of box corner; 2 by default.)#" )
        .def("SetBoxCornerMinSize",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetBoxCornerMinSize),
             R"#(Set new value of box corner minimal size.)#"  , py::arg("theValue"))
        .def("RoundRadius",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::RoundRadius),
             R"#(Return relative radius of side corners (round rectangle); 0.0 by default. The value in within [0, 0.5] range meaning absolute radius = RoundRadius() / Size().)#" )
        .def("SetRoundRadius",
             (void (AIS_ViewCube::*)( const Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( const Standard_Real  ) >(&AIS_ViewCube::SetRoundRadius),
             R"#(Set relative radius of View Cube sides corners (round rectangle). The value should be within [0, 0.5] range.)#"  , py::arg("theValue"))
        .def("ToDrawAxes",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::ToDrawAxes),
             R"#(Returns TRUE if trihedron is drawn; TRUE by default.)#" )
        .def("SetDrawAxes",
             (void (AIS_ViewCube::*)( Standard_Boolean  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Boolean  ) >(&AIS_ViewCube::SetDrawAxes),
             R"#(Enable/disable drawing of trihedron.)#"  , py::arg("theValue"))
        .def("ToDrawEdges",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::ToDrawEdges),
             R"#(Returns TRUE if edges of View Cube is drawn; TRUE by default.)#" )
        .def("SetDrawEdges",
             (void (AIS_ViewCube::*)( Standard_Boolean  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Boolean  ) >(&AIS_ViewCube::SetDrawEdges),
             R"#(Enable/disable drawing of edges of View Cube.)#"  , py::arg("theValue"))
        .def("ToDrawVertices",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::ToDrawVertices),
             R"#(Return TRUE if vertices (vertex) of View Cube is drawn; TRUE by default.)#" )
        .def("SetDrawVertices",
             (void (AIS_ViewCube::*)( Standard_Boolean  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Boolean  ) >(&AIS_ViewCube::SetDrawVertices),
             R"#(Enable/disable drawing of vertices (corners) of View Cube.)#"  , py::arg("theValue"))
        .def("IsYup",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::IsYup),
             R"#(Return TRUE if application expects Y-up viewer orientation instead of Z-up; FALSE by default.)#" )
        .def("SetYup",
             (void (AIS_ViewCube::*)( Standard_Boolean ,  Standard_Boolean  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Boolean ,  Standard_Boolean  ) >(&AIS_ViewCube::SetYup),
             R"#(Set if application expects Y-up viewer orientation instead of Z-up.)#"  , py::arg("theIsYup"),  py::arg("theToUpdateLabels")=static_cast<Standard_Boolean>(Standard_True))
        .def("BoxSideStyle",
             (const opencascade::handle<Prs3d_ShadingAspect> & (AIS_ViewCube::*)() const) static_cast<const opencascade::handle<Prs3d_ShadingAspect> & (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxSideStyle),
             R"#(Return shading style of box sides.)#" )
        .def("BoxEdgeStyle",
             (const opencascade::handle<Prs3d_ShadingAspect> & (AIS_ViewCube::*)() const) static_cast<const opencascade::handle<Prs3d_ShadingAspect> & (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxEdgeStyle),
             R"#(Return shading style of box edges.)#" )
        .def("BoxCornerStyle",
             (const opencascade::handle<Prs3d_ShadingAspect> & (AIS_ViewCube::*)() const) static_cast<const opencascade::handle<Prs3d_ShadingAspect> & (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxCornerStyle),
             R"#(Return shading style of box corners.)#" )
        .def("BoxColor",
             (const Quantity_Color & (AIS_ViewCube::*)() const) static_cast<const Quantity_Color & (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxColor),
             R"#(Return value of front color for the 3D part of object.)#" )
        .def("SetBoxColor",
             (void (AIS_ViewCube::*)( const Quantity_Color &  ) ) static_cast<void (AIS_ViewCube::*)( const Quantity_Color &  ) >(&AIS_ViewCube::SetBoxColor),
             R"#(Set new value of front color for the 3D part of object.)#"  , py::arg("theColor"))
        .def("BoxTransparency",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::BoxTransparency),
             R"#(Return transparency for 3D part of object.)#" )
        .def("SetBoxTransparency",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetBoxTransparency),
             R"#(Set new value of transparency for 3D part of object.)#"  , py::arg("theValue"))
        .def("InnerColor",
             (const Quantity_Color & (AIS_ViewCube::*)() const) static_cast<const Quantity_Color & (AIS_ViewCube::*)() const>(&AIS_ViewCube::InnerColor),
             R"#(Return color of sides back material.)#" )
        .def("SetInnerColor",
             (void (AIS_ViewCube::*)( const Quantity_Color &  ) ) static_cast<void (AIS_ViewCube::*)( const Quantity_Color &  ) >(&AIS_ViewCube::SetInnerColor),
             R"#(Set color of sides back material. Alias for:)#"  , py::arg("theColor"))
        .def("BoxSideLabel",
             (TCollection_AsciiString (AIS_ViewCube::*)( V3d_TypeOfOrientation  ) const) static_cast<TCollection_AsciiString (AIS_ViewCube::*)( V3d_TypeOfOrientation  ) const>(&AIS_ViewCube::BoxSideLabel),
             R"#(Return box side label or empty string if undefined. Default labels: FRONT, BACK, LEFT, RIGHT, TOP, BOTTOM.)#"  , py::arg("theSide"))
        .def("SetBoxSideLabel",
             (void (AIS_ViewCube::*)( const V3d_TypeOfOrientation ,  const TCollection_AsciiString &  ) ) static_cast<void (AIS_ViewCube::*)( const V3d_TypeOfOrientation ,  const TCollection_AsciiString &  ) >(&AIS_ViewCube::SetBoxSideLabel),
             R"#(Set box side label.)#"  , py::arg("theSide"),  py::arg("theLabel"))
        .def("TextColor",
             (const Quantity_Color & (AIS_ViewCube::*)() const) static_cast<const Quantity_Color & (AIS_ViewCube::*)() const>(&AIS_ViewCube::TextColor),
             R"#(Return text color of labels of box sides; BLACK by default.)#" )
        .def("SetTextColor",
             (void (AIS_ViewCube::*)( const Quantity_Color &  ) ) static_cast<void (AIS_ViewCube::*)( const Quantity_Color &  ) >(&AIS_ViewCube::SetTextColor),
             R"#(Set color of text labels on box sides. Alias for:)#"  , py::arg("theColor"))
        .def("Font",
             (const TCollection_AsciiString & (AIS_ViewCube::*)() const) static_cast<const TCollection_AsciiString & (AIS_ViewCube::*)() const>(&AIS_ViewCube::Font),
             R"#(Return font name that is used for displaying of sides and axes text. Alias for:)#" )
        .def("SetFont",
             (void (AIS_ViewCube::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_ViewCube::*)( const TCollection_AsciiString &  ) >(&AIS_ViewCube::SetFont),
             R"#(Set font name that is used for displaying of sides and axes text. Alias for:)#"  , py::arg("theFont"))
        .def("FontHeight",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::FontHeight),
             R"#(Return height of font)#" )
        .def("SetFontHeight",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetFontHeight),
             R"#(Change font height. Alias for:)#"  , py::arg("theValue"))
        .def("AxisLabel",
             (TCollection_AsciiString (AIS_ViewCube::*)( Prs3d_DatumParts  ) const) static_cast<TCollection_AsciiString (AIS_ViewCube::*)( Prs3d_DatumParts  ) const>(&AIS_ViewCube::AxisLabel),
             R"#(Return axes labels or empty string if undefined. Default labels: X, Y, Z.)#"  , py::arg("theAxis"))
        .def("SetAxesLabels",
             (void (AIS_ViewCube::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) ) static_cast<void (AIS_ViewCube::*)( const TCollection_AsciiString & ,  const TCollection_AsciiString & ,  const TCollection_AsciiString &  ) >(&AIS_ViewCube::SetAxesLabels),
             R"#(Set axes labels.)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("SetColor",
             (void (AIS_ViewCube::*)( const Quantity_Color &  ) ) static_cast<void (AIS_ViewCube::*)( const Quantity_Color &  ) >(&AIS_ViewCube::SetColor),
             R"#(Set new value of color for the whole object.)#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (AIS_ViewCube::*)() ) static_cast<void (AIS_ViewCube::*)() >(&AIS_ViewCube::UnsetColor),
             R"#(Reset color for the whole object.)#" )
        .def("SetTransparency",
             (void (AIS_ViewCube::*)( const Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( const Standard_Real  ) >(&AIS_ViewCube::SetTransparency),
             R"#(Set new value of transparency for the whole object.)#"  , py::arg("theValue"))
        .def("UnsetTransparency",
             (void (AIS_ViewCube::*)() ) static_cast<void (AIS_ViewCube::*)() >(&AIS_ViewCube::UnsetTransparency),
             R"#(Reset transparency for the whole object.)#" )
        .def("SetMaterial",
             (void (AIS_ViewCube::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (AIS_ViewCube::*)( const Graphic3d_MaterialAspect &  ) >(&AIS_ViewCube::SetMaterial),
             R"#(Sets the material for the interactive object.)#"  , py::arg("theMat"))
        .def("UnsetMaterial",
             (void (AIS_ViewCube::*)() ) static_cast<void (AIS_ViewCube::*)() >(&AIS_ViewCube::UnsetMaterial),
             R"#(Sets the material for the interactive object.)#" )
        .def("Duration",
             (Standard_Real (AIS_ViewCube::*)() const) static_cast<Standard_Real (AIS_ViewCube::*)() const>(&AIS_ViewCube::Duration),
             R"#(Return duration of animation in seconds; 0.5 sec by default)#" )
        .def("SetDuration",
             (void (AIS_ViewCube::*)( Standard_Real  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Real  ) >(&AIS_ViewCube::SetDuration),
             R"#(Set duration of animation.)#"  , py::arg("theValue"))
        .def("ToResetCameraUp",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::ToResetCameraUp),
             R"#(Return TRUE if new camera Up direction should be always set to default value for a new camera Direction; FALSE by default. When this flag is FALSE, the new camera Up will be set as current Up orthogonalized to the new camera Direction, and will set to default Up on second click.)#" )
        .def("SetResetCamera",
             (void (AIS_ViewCube::*)( Standard_Boolean  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Boolean  ) >(&AIS_ViewCube::SetResetCamera),
             R"#(Set if new camera Up direction should be always set to default value for a new camera Direction.)#"  , py::arg("theToReset"))
        .def("ToFitSelected",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::ToFitSelected),
             R"#(Return TRUE if animation should fit selected objects and FALSE to fit entire scene; TRUE by default.)#" )
        .def("SetFitSelected",
             (void (AIS_ViewCube::*)( Standard_Boolean  ) ) static_cast<void (AIS_ViewCube::*)( Standard_Boolean  ) >(&AIS_ViewCube::SetFitSelected),
             R"#(Set if animation should fit selected objects or to fit entire scene.)#"  , py::arg("theToFitSelected"))
        .def("HasAnimation",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::HasAnimation),
             R"#(Returns TRUE if View Cube has unfinished animation of view camera.)#" )
        .def("StartAnimation",
             (void (AIS_ViewCube::*)( const opencascade::handle<AIS_ViewCubeOwner> &  ) ) static_cast<void (AIS_ViewCube::*)( const opencascade::handle<AIS_ViewCubeOwner> &  ) >(&AIS_ViewCube::StartAnimation),
             R"#(Start camera transformation corresponding to the input detected owner.)#"  , py::arg("theOwner"))
        .def("UpdateAnimation",
             (Standard_Boolean (AIS_ViewCube::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (AIS_ViewCube::*)( const Standard_Boolean  ) >(&AIS_ViewCube::UpdateAnimation),
             R"#(Perform one step of current camera transformation. theToUpdate [in] enable/disable update of view.)#"  , py::arg("theToUpdate"))
        .def("HandleClick",
             (void (AIS_ViewCube::*)( const opencascade::handle<AIS_ViewCubeOwner> &  ) ) static_cast<void (AIS_ViewCube::*)( const opencascade::handle<AIS_ViewCubeOwner> &  ) >(&AIS_ViewCube::HandleClick),
             R"#(Perform camera transformation corresponding to the input detected owner.)#"  , py::arg("theOwner"))
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_ViewCube::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_ViewCube::*)( const Standard_Integer  ) const>(&AIS_ViewCube::AcceptDisplayMode),
             R"#(Return TRUE for supported display mode.)#"  , py::arg("theMode"))
        .def("GlobalSelOwner",
             (opencascade::handle<SelectMgr_EntityOwner> (AIS_ViewCube::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (AIS_ViewCube::*)() const>(&AIS_ViewCube::GlobalSelOwner),
             R"#(Global selection has no meaning for this class.)#" )
        .def("Compute",
             (void (AIS_ViewCube::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const Standard_Integer  ) ) static_cast<void (AIS_ViewCube::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Presentation> & ,  const Standard_Integer  ) >(&AIS_ViewCube::Compute),
             R"#(Compute 3D part of View Cube.)#"  , py::arg("thePrsMgr"),  py::arg("thePrs"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("ComputeSelection",
             (void (AIS_ViewCube::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) ) static_cast<void (AIS_ViewCube::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) >(&AIS_ViewCube::ComputeSelection),
             R"#(Redefine computing of sensitive entities for View Cube.)#"  , py::arg("theSelection"),  py::arg("theMode"))
        .def("IsAutoHilight",
             (Standard_Boolean (AIS_ViewCube::*)() const) static_cast<Standard_Boolean (AIS_ViewCube::*)() const>(&AIS_ViewCube::IsAutoHilight),
             R"#(Disables auto highlighting to use HilightSelected() and HilightOwnerWithColor() overridden methods.)#" )
        .def("ClearSelected",
             (void (AIS_ViewCube::*)() ) static_cast<void (AIS_ViewCube::*)() >(&AIS_ViewCube::ClearSelected),
             R"#(Method which clear all selected owners belonging to this selectable object.)#" )
        .def("HilightOwnerWithColor",
             (void (AIS_ViewCube::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<void (AIS_ViewCube::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&AIS_ViewCube::HilightOwnerWithColor),
             R"#(Method which highlights input owner belonging to this selectable object.)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theOwner"))
        .def("HilightSelected",
             (void (AIS_ViewCube::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) ) static_cast<void (AIS_ViewCube::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) >(&AIS_ViewCube::HilightSelected),
             R"#(Method which draws selected owners.)#"  , py::arg("thePM"),  py::arg("theSeq"))
        .def("UnsetAttributes",
             (void (AIS_ViewCube::*)() ) static_cast<void (AIS_ViewCube::*)() >(&AIS_ViewCube::UnsetAttributes),
             R"#(Set default parameters for visual attributes)#" )
        .def("UnsetHilightAttributes",
             (void (AIS_ViewCube::*)() ) static_cast<void (AIS_ViewCube::*)() >(&AIS_ViewCube::UnsetHilightAttributes),
             R"#(Set default parameters for dynamic highlighting attributes, reset highlight attributes)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ViewCube::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ViewCube::get_type_descriptor),
                    R"#(None)#" )
        .def_static("IsBoxSide_s",
                    (bool (*)( V3d_TypeOfOrientation  ) ) static_cast<bool (*)( V3d_TypeOfOrientation  ) >(&AIS_ViewCube::IsBoxSide),
                    R"#(Return TRUE if specified orientation belongs to box side.)#"  , py::arg("theOrient"))
        .def_static("IsBoxEdge_s",
                    (bool (*)( V3d_TypeOfOrientation  ) ) static_cast<bool (*)( V3d_TypeOfOrientation  ) >(&AIS_ViewCube::IsBoxEdge),
                    R"#(Return TRUE if specified orientation belongs to box edge.)#"  , py::arg("theOrient"))
        .def_static("IsBoxCorner_s",
                    (bool (*)( V3d_TypeOfOrientation  ) ) static_cast<bool (*)( V3d_TypeOfOrientation  ) >(&AIS_ViewCube::IsBoxCorner),
                    R"#(Return TRUE if specified orientation belongs to box corner (vertex).)#"  , py::arg("theOrient"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_AngleDimension ,opencascade::handle<AIS_AngleDimension>  , AIS_Dimension >>(m.attr("AIS_AngleDimension"))
    // constructors
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge & >()  , py::arg("theFirstEdge"),  py::arg("theSecondEdge") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("theFirstPoint"),  py::arg("theSecondPoint"),  py::arg("theThirdPoint") )
        .def(py::init< const TopoDS_Vertex &,const TopoDS_Vertex &,const TopoDS_Vertex & >()  , py::arg("theFirstVertex"),  py::arg("theSecondVertex"),  py::arg("theThirdVertex") )
        .def(py::init< const TopoDS_Face & >()  , py::arg("theCone") )
        .def(py::init< const TopoDS_Face &,const TopoDS_Face & >()  , py::arg("theFirstFace"),  py::arg("theSecondFace") )
        .def(py::init< const TopoDS_Face &,const TopoDS_Face &,const gp_Pnt & >()  , py::arg("theFirstFace"),  py::arg("theSecondFace"),  py::arg("thePoint") )
    // custom constructors
    // methods
        .def("FirstPoint",
             (const gp_Pnt & (AIS_AngleDimension::*)() const) static_cast<const gp_Pnt & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::FirstPoint),
             R"#(Returns first point forming the angle.)#" )
        .def("SecondPoint",
             (const gp_Pnt & (AIS_AngleDimension::*)() const) static_cast<const gp_Pnt & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::SecondPoint),
             R"#(Returns second point forming the angle.)#" )
        .def("CenterPoint",
             (const gp_Pnt & (AIS_AngleDimension::*)() const) static_cast<const gp_Pnt & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::CenterPoint),
             R"#(Returns center point forming the angle.)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (AIS_AngleDimension::*)() const) static_cast<const TopoDS_Shape & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::FirstShape),
             R"#(Returns first argument shape.)#" )
        .def("SecondShape",
             (const TopoDS_Shape & (AIS_AngleDimension::*)() const) static_cast<const TopoDS_Shape & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::SecondShape),
             R"#(Returns second argument shape.)#" )
        .def("ThirdShape",
             (const TopoDS_Shape & (AIS_AngleDimension::*)() const) static_cast<const TopoDS_Shape & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::ThirdShape),
             R"#(Returns third argument shape.)#" )
        .def("SetMeasuredGeometry",
             (void (AIS_AngleDimension::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) ) static_cast<void (AIS_AngleDimension::*)( const TopoDS_Edge & ,  const TopoDS_Edge &  ) >(&AIS_AngleDimension::SetMeasuredGeometry),
             R"#(Measures minimum angle dimension between two linear edges. These two edges should be intersected by each other. Otherwise the geometry is not valid.)#"  , py::arg("theFirstEdge"),  py::arg("theSecondEdge"))
        .def("SetMeasuredGeometry",
             (void (AIS_AngleDimension::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) ) static_cast<void (AIS_AngleDimension::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt &  ) >(&AIS_AngleDimension::SetMeasuredGeometry),
             R"#(Measures angle defined by three points.)#"  , py::arg("theFirstPoint"),  py::arg("theSecondPoint"),  py::arg("theThridPoint"))
        .def("SetMeasuredGeometry",
             (void (AIS_AngleDimension::*)( const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) ) static_cast<void (AIS_AngleDimension::*)( const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const TopoDS_Vertex &  ) >(&AIS_AngleDimension::SetMeasuredGeometry),
             R"#(Measures angle defined by three vertices.)#"  , py::arg("theFirstVertex"),  py::arg("theSecondVertex"),  py::arg("theThirdVertex"))
        .def("SetMeasuredGeometry",
             (void (AIS_AngleDimension::*)( const TopoDS_Face &  ) ) static_cast<void (AIS_AngleDimension::*)( const TopoDS_Face &  ) >(&AIS_AngleDimension::SetMeasuredGeometry),
             R"#(Measures angle of conical face.)#"  , py::arg("theCone"))
        .def("SetMeasuredGeometry",
             (void (AIS_AngleDimension::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (AIS_AngleDimension::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&AIS_AngleDimension::SetMeasuredGeometry),
             R"#(Measures angle between two planar faces.)#"  , py::arg("theFirstFace"),  py::arg("theSecondFace"))
        .def("SetMeasuredGeometry",
             (void (AIS_AngleDimension::*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const gp_Pnt &  ) ) static_cast<void (AIS_AngleDimension::*)( const TopoDS_Face & ,  const TopoDS_Face & ,  const gp_Pnt &  ) >(&AIS_AngleDimension::SetMeasuredGeometry),
             R"#(Measures angle between two planar faces.)#"  , py::arg("theFirstFace"),  py::arg("theSecondFace"),  py::arg("thePoint"))
        .def("GetDisplayUnits",
             (const TCollection_AsciiString & (AIS_AngleDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::GetDisplayUnits),
             R"#(Returns the display units string.)#" )
        .def("GetModelUnits",
             (const TCollection_AsciiString & (AIS_AngleDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::GetModelUnits),
             R"#(Returns the model units string.)#" )
        .def("SetDisplayUnits",
             (void (AIS_AngleDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_AngleDimension::*)( const TCollection_AsciiString &  ) >(&AIS_AngleDimension::SetDisplayUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetModelUnits",
             (void (AIS_AngleDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_AngleDimension::*)( const TCollection_AsciiString &  ) >(&AIS_AngleDimension::SetModelUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetTextPosition",
             (void (AIS_AngleDimension::*)( const gp_Pnt &  ) ) static_cast<void (AIS_AngleDimension::*)( const gp_Pnt &  ) >(&AIS_AngleDimension::SetTextPosition),
             R"#(Principle of horizontal text alignment settings: - divide circle into two halves according to attachment points - if aTextPos is between attach points -> Center + positive flyout - if aTextPos is not between attach points but in this half -> Left or Right + positive flyout - if aTextPos is between reflections of attach points -> Center + negative flyout - if aTextPos is not between reflections of attach points -> Left or Right + negative flyout)#"  , py::arg("theTextPos"))
        .def("GetTextPosition",
             (const gp_Pnt (AIS_AngleDimension::*)() const) static_cast<const gp_Pnt (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::GetTextPosition),
             R"#(None)#" )
        .def("SetType",
             (void (AIS_AngleDimension::*)( const AIS_TypeOfAngle  ) ) static_cast<void (AIS_AngleDimension::*)( const AIS_TypeOfAngle  ) >(&AIS_AngleDimension::SetType),
             R"#(Sets angle type.)#"  , py::arg("theType"))
        .def("GetType",
             (AIS_TypeOfAngle (AIS_AngleDimension::*)() const) static_cast<AIS_TypeOfAngle (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::GetType),
             R"#(Returns the current angle type.)#" )
        .def("SetArrowsVisibility",
             (void (AIS_AngleDimension::*)( const AIS_TypeOfAngleArrowVisibility &  ) ) static_cast<void (AIS_AngleDimension::*)( const AIS_TypeOfAngleArrowVisibility &  ) >(&AIS_AngleDimension::SetArrowsVisibility),
             R"#(Sets visible arrows type)#"  , py::arg("theType"))
        .def("GetArrowsVisibility",
             (AIS_TypeOfAngleArrowVisibility (AIS_AngleDimension::*)() const) static_cast<AIS_TypeOfAngleArrowVisibility (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::GetArrowsVisibility),
             R"#(Returns the type of visibility of arrows.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_AngleDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_AngleDimension::*)() const>(&AIS_AngleDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_AngleDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_AngleDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Chamf2dDimension ,opencascade::handle<AIS_Chamf2dDimension>  , AIS_Relation >>(m.attr("AIS_Chamf2dDimension"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Plane> &,const Standard_Real,const TCollection_ExtendedString & >()  , py::arg("aFShape"),  py::arg("aPlane"),  py::arg("aVal"),  py::arg("aText") )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Plane> &,const Standard_Real,const TCollection_ExtendedString &,const gp_Pnt &,const DsgPrs_ArrowSide,const Standard_Real >()  , py::arg("aFShape"),  py::arg("aPlane"),  py::arg("aVal"),  py::arg("aText"),  py::arg("aPosition"),  py::arg("aSymbolPrs"),  py::arg("anArrowSize")=static_cast<const Standard_Real>(0.0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Chamf2dDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Chamf2dDimension::*)() const>(&AIS_Chamf2dDimension::DynamicType),
             R"#(None)#" )
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_Chamf2dDimension::*)() const) static_cast<AIS_KindOfDimension (AIS_Chamf2dDimension::*)() const>(&AIS_Chamf2dDimension::KindOfDimension),
             R"#(Indicates that we are concerned with a 2d length.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_Chamf2dDimension::*)() const) static_cast<Standard_Boolean (AIS_Chamf2dDimension::*)() const>(&AIS_Chamf2dDimension::IsMovable),
             R"#(Returns true if the 2d chamfer dimension is movable.)#" )
        .def("Compute",
             (void (AIS_Chamf2dDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_Chamf2dDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_Chamf2dDimension::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_Chamf2dDimension::*)() const) static_cast<AIS_KindOfDimension (AIS_Chamf2dDimension::*)() const>(&AIS_Chamf2dDimension::KindOfDimension),
             R"#(Indicates that we are concerned with a 2d length.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_Chamf2dDimension::*)() const) static_cast<Standard_Boolean (AIS_Chamf2dDimension::*)() const>(&AIS_Chamf2dDimension::IsMovable),
             R"#(Returns true if the 2d chamfer dimension is movable.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Chamf2dDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Chamf2dDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_Chamf3dDimension ,opencascade::handle<AIS_Chamf3dDimension>  , AIS_Relation >>(m.attr("AIS_Chamf3dDimension"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const TCollection_ExtendedString & >()  , py::arg("aFShape"),  py::arg("aVal"),  py::arg("aText") )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const TCollection_ExtendedString &,const gp_Pnt &,const DsgPrs_ArrowSide,const Standard_Real >()  , py::arg("aFShape"),  py::arg("aVal"),  py::arg("aText"),  py::arg("aPosition"),  py::arg("aSymbolPrs"),  py::arg("anArrowSize")=static_cast<const Standard_Real>(0.0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_Chamf3dDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_Chamf3dDimension::*)() const>(&AIS_Chamf3dDimension::DynamicType),
             R"#(None)#" )
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_Chamf3dDimension::*)() const) static_cast<AIS_KindOfDimension (AIS_Chamf3dDimension::*)() const>(&AIS_Chamf3dDimension::KindOfDimension),
             R"#(Indicates that we are concerned with a 3d length.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_Chamf3dDimension::*)() const) static_cast<Standard_Boolean (AIS_Chamf3dDimension::*)() const>(&AIS_Chamf3dDimension::IsMovable),
             R"#(Returns true if the 3d chamfer dimension is movable.)#" )
        .def("Compute",
             (void (AIS_Chamf3dDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_Chamf3dDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_Chamf3dDimension::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_Chamf3dDimension::*)() const) static_cast<AIS_KindOfDimension (AIS_Chamf3dDimension::*)() const>(&AIS_Chamf3dDimension::KindOfDimension),
             R"#(Indicates that we are concerned with a 3d length.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_Chamf3dDimension::*)() const) static_cast<Standard_Boolean (AIS_Chamf3dDimension::*)() const>(&AIS_Chamf3dDimension::IsMovable),
             R"#(Returns true if the 3d chamfer dimension is movable.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_Chamf3dDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_Chamf3dDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ColoredShape ,opencascade::handle<AIS_ColoredShape>  , AIS_Shape >>(m.attr("AIS_ColoredShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def(py::init< const opencascade::handle<AIS_Shape> & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("CustomAspects",
             (opencascade::handle<AIS_ColoredDrawer> (AIS_ColoredShape::*)( const TopoDS_Shape &  ) ) static_cast<opencascade::handle<AIS_ColoredDrawer> (AIS_ColoredShape::*)( const TopoDS_Shape &  ) >(&AIS_ColoredShape::CustomAspects),
             R"#(Customize properties of specified sub-shape. The shape will be stored in the map but ignored, if it is not sub-shape of main Shape! This method can be used to mark sub-shapes with customizable properties.)#"  , py::arg("theShape"))
        .def("ClearCustomAspects",
             (void (AIS_ColoredShape::*)() ) static_cast<void (AIS_ColoredShape::*)() >(&AIS_ColoredShape::ClearCustomAspects),
             R"#(Reset the map of custom sub-shape aspects.)#" )
        .def("UnsetCustomAspects",
             (void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) ) static_cast<void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  const Standard_Boolean  ) >(&AIS_ColoredShape::UnsetCustomAspects),
             R"#(Reset custom properties of specified sub-shape.)#"  , py::arg("theShape"),  py::arg("theToUnregister")=static_cast<const Standard_Boolean>(Standard_False))
        .def("SetCustomColor",
             (void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  const Quantity_Color &  ) ) static_cast<void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  const Quantity_Color &  ) >(&AIS_ColoredShape::SetCustomColor),
             R"#(Customize color of specified sub-shape)#"  , py::arg("theShape"),  py::arg("theColor"))
        .def("SetCustomTransparency",
             (void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  Standard_Real  ) ) static_cast<void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  Standard_Real  ) >(&AIS_ColoredShape::SetCustomTransparency),
             R"#(Customize transparency of specified sub-shape)#"  , py::arg("theShape"),  py::arg("theTransparency"))
        .def("SetCustomWidth",
             (void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  const Standard_Real  ) ) static_cast<void (AIS_ColoredShape::*)( const TopoDS_Shape & ,  const Standard_Real  ) >(&AIS_ColoredShape::SetCustomWidth),
             R"#(Customize line width of specified sub-shape)#"  , py::arg("theShape"),  py::arg("theLineWidth"))
        .def("CustomAspectsMap",
             (const AIS_DataMapOfShapeDrawer & (AIS_ColoredShape::*)() const) static_cast<const AIS_DataMapOfShapeDrawer & (AIS_ColoredShape::*)() const>(&AIS_ColoredShape::CustomAspectsMap),
             R"#(Return the map of custom aspects.)#" )
        .def("ChangeCustomAspectsMap",
             (AIS_DataMapOfShapeDrawer & (AIS_ColoredShape::*)() ) static_cast<AIS_DataMapOfShapeDrawer & (AIS_ColoredShape::*)() >(&AIS_ColoredShape::ChangeCustomAspectsMap),
             R"#(Return the map of custom aspects.)#" )
        .def("SetColor",
             (void (AIS_ColoredShape::*)( const Quantity_Color &  ) ) static_cast<void (AIS_ColoredShape::*)( const Quantity_Color &  ) >(&AIS_ColoredShape::SetColor),
             R"#(Setup color of entire shape.)#"  , py::arg("theColor"))
        .def("SetWidth",
             (void (AIS_ColoredShape::*)( const Standard_Real  ) ) static_cast<void (AIS_ColoredShape::*)( const Standard_Real  ) >(&AIS_ColoredShape::SetWidth),
             R"#(Setup line width of entire shape.)#"  , py::arg("theLineWidth"))
        .def("SetTransparency",
             (void (AIS_ColoredShape::*)( const Standard_Real  ) ) static_cast<void (AIS_ColoredShape::*)( const Standard_Real  ) >(&AIS_ColoredShape::SetTransparency),
             R"#(Sets transparency value.)#"  , py::arg("theValue"))
        .def("SetMaterial",
             (void (AIS_ColoredShape::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (AIS_ColoredShape::*)( const Graphic3d_MaterialAspect &  ) >(&AIS_ColoredShape::SetMaterial),
             R"#(Sets the material aspect.)#"  , py::arg("theAspect"))
        .def("UnsetTransparency",
             (void (AIS_ColoredShape::*)() ) static_cast<void (AIS_ColoredShape::*)() >(&AIS_ColoredShape::UnsetTransparency),
             R"#(Removes the setting for transparency in the reconstructed compound shape.)#" )
        .def("UnsetWidth",
             (void (AIS_ColoredShape::*)() ) static_cast<void (AIS_ColoredShape::*)() >(&AIS_ColoredShape::UnsetWidth),
             R"#(Setup line width of entire shape.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ColoredShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ColoredShape::*)() const>(&AIS_ColoredShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ColoredShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ColoredShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ConcentricRelation ,opencascade::handle<AIS_ConcentricRelation>  , AIS_Relation >>(m.attr("AIS_ConcentricRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aFShape"),  py::arg("aSShape"),  py::arg("aPlane") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ConcentricRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ConcentricRelation::*)() const>(&AIS_ConcentricRelation::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_ConcentricRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_ConcentricRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_ConcentricRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ConcentricRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ConcentricRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_DiameterDimension ,opencascade::handle<AIS_DiameterDimension>  , AIS_Dimension >>(m.attr("AIS_DiameterDimension"))
    // constructors
        .def(py::init< const gp_Circ & >()  , py::arg("theCircle") )
        .def(py::init< const gp_Circ &,const gp_Pln & >()  , py::arg("theCircle"),  py::arg("thePlane") )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
        .def(py::init< const TopoDS_Shape &,const gp_Pln & >()  , py::arg("theShape"),  py::arg("thePlane") )
    // custom constructors
    // methods
        .def("Circle",
             (const gp_Circ & (AIS_DiameterDimension::*)() const) static_cast<const gp_Circ & (AIS_DiameterDimension::*)() const>(&AIS_DiameterDimension::Circle),
             R"#(Returns measured geometry circle.)#" )
        .def("AnchorPoint",
             (gp_Pnt (AIS_DiameterDimension::*)() ) static_cast<gp_Pnt (AIS_DiameterDimension::*)() >(&AIS_DiameterDimension::AnchorPoint),
             R"#(Returns anchor point on circle for diameter dimension.)#" )
        .def("Shape",
             (const TopoDS_Shape & (AIS_DiameterDimension::*)() const) static_cast<const TopoDS_Shape & (AIS_DiameterDimension::*)() const>(&AIS_DiameterDimension::Shape),
             R"#(Returns the measured shape.)#" )
        .def("SetMeasuredGeometry",
             (void (AIS_DiameterDimension::*)( const gp_Circ &  ) ) static_cast<void (AIS_DiameterDimension::*)( const gp_Circ &  ) >(&AIS_DiameterDimension::SetMeasuredGeometry),
             R"#(Measure diameter of the circle. The actual dimension plane is used for determining anchor points on the circle to attach the dimension lines to. The dimension will become invalid if the diameter of the circle is less than Precision::Confusion().)#"  , py::arg("theCircle"))
        .def("SetMeasuredGeometry",
             (void (AIS_DiameterDimension::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_DiameterDimension::*)( const TopoDS_Shape &  ) >(&AIS_DiameterDimension::SetMeasuredGeometry),
             R"#(Measure diameter on the passed shape, if applicable. The dimension will become invalid if the passed shape is not measurable or if measured diameter value is less than Precision::Confusion().)#"  , py::arg("theShape"))
        .def("GetDisplayUnits",
             (const TCollection_AsciiString & (AIS_DiameterDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_DiameterDimension::*)() const>(&AIS_DiameterDimension::GetDisplayUnits),
             R"#(Returns the display units string.)#" )
        .def("GetModelUnits",
             (const TCollection_AsciiString & (AIS_DiameterDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_DiameterDimension::*)() const>(&AIS_DiameterDimension::GetModelUnits),
             R"#(Returns the model units string.)#" )
        .def("SetDisplayUnits",
             (void (AIS_DiameterDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_DiameterDimension::*)( const TCollection_AsciiString &  ) >(&AIS_DiameterDimension::SetDisplayUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetModelUnits",
             (void (AIS_DiameterDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_DiameterDimension::*)( const TCollection_AsciiString &  ) >(&AIS_DiameterDimension::SetModelUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetTextPosition",
             (void (AIS_DiameterDimension::*)( const gp_Pnt &  ) ) static_cast<void (AIS_DiameterDimension::*)( const gp_Pnt &  ) >(&AIS_DiameterDimension::SetTextPosition),
             R"#(None)#"  , py::arg("theTextPos"))
        .def("GetTextPosition",
             (const gp_Pnt (AIS_DiameterDimension::*)() const) static_cast<const gp_Pnt (AIS_DiameterDimension::*)() const>(&AIS_DiameterDimension::GetTextPosition),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_DiameterDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_DiameterDimension::*)() const>(&AIS_DiameterDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_DiameterDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_DiameterDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_EllipseRadiusDimension ,opencascade::handle<AIS_EllipseRadiusDimension> ,Py_AIS_EllipseRadiusDimension , AIS_Relation >>(m.attr("AIS_EllipseRadiusDimension"))
    // constructors
    // custom constructors
    // methods
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_EllipseRadiusDimension::*)() const) static_cast<AIS_KindOfDimension (AIS_EllipseRadiusDimension::*)() const>(&AIS_EllipseRadiusDimension::KindOfDimension),
             R"#(None)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_EllipseRadiusDimension::*)() const) static_cast<Standard_Boolean (AIS_EllipseRadiusDimension::*)() const>(&AIS_EllipseRadiusDimension::IsMovable),
             R"#(None)#" )
        .def("ComputeGeometry",
             (void (AIS_EllipseRadiusDimension::*)() ) static_cast<void (AIS_EllipseRadiusDimension::*)() >(&AIS_EllipseRadiusDimension::ComputeGeometry),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_EllipseRadiusDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_EllipseRadiusDimension::*)() const>(&AIS_EllipseRadiusDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_EllipseRadiusDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_EllipseRadiusDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_EqualDistanceRelation ,opencascade::handle<AIS_EqualDistanceRelation>  , AIS_Relation >>(m.attr("AIS_EqualDistanceRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aShape1"),  py::arg("aShape2"),  py::arg("aShape3"),  py::arg("aShape4"),  py::arg("aPlane") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_EqualDistanceRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_EqualDistanceRelation::*)() const>(&AIS_EqualDistanceRelation::DynamicType),
             R"#(None)#" )
        .def("SetShape3",
             (void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) >(&AIS_EqualDistanceRelation::SetShape3),
             R"#(Sets the shape aShape to be used as the shape aShape3 in the framework created at construction time.)#"  , py::arg("aShape"))
        .def("Shape3",
             (const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const>(&AIS_EqualDistanceRelation::Shape3),
             R"#(Returns the shape aShape3 from the framework created at construction time.)#" )
        .def("SetShape4",
             (void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) >(&AIS_EqualDistanceRelation::SetShape4),
             R"#(Sets the shape aShape to be used as the shape aShape4 in the framework created at construction time.)#"  , py::arg("aShape"))
        .def("Shape4",
             (const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const>(&AIS_EqualDistanceRelation::Shape4),
             R"#(Returns the shape aShape4 from the framework created at construction time.)#" )
        .def("Compute",
             (void (AIS_EqualDistanceRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_EqualDistanceRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_EqualDistanceRelation::Compute),
             R"#(Computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("SetShape3",
             (void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) >(&AIS_EqualDistanceRelation::SetShape3),
             R"#(Sets the shape aShape to be used as the shape aShape3 in the framework created at construction time.)#"  , py::arg("aShape"))
        .def("Shape3",
             (const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const>(&AIS_EqualDistanceRelation::Shape3),
             R"#(Returns the shape aShape3 from the framework created at construction time.)#" )
        .def("SetShape4",
             (void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_EqualDistanceRelation::*)( const TopoDS_Shape &  ) >(&AIS_EqualDistanceRelation::SetShape4),
             R"#(Sets the shape aShape to be used as the shape aShape4 in the framework created at construction time.)#"  , py::arg("aShape"))
        .def("Shape4",
             (const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_EqualDistanceRelation::*)() const>(&AIS_EqualDistanceRelation::Shape4),
             R"#(Returns the shape aShape4 from the framework created at construction time.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_EqualDistanceRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_EqualDistanceRelation::get_type_descriptor),
                    R"#(None)#" )
        .def_static("ComputeTwoEdgesLength_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const opencascade::handle<Geom_Plane> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Bnd_Box & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  DsgPrs_ArrowSide &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TopoDS_Edge & ,  const TopoDS_Edge & ,  const opencascade::handle<Geom_Plane> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Bnd_Box & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  DsgPrs_ArrowSide &  ) >(&AIS_EqualDistanceRelation::ComputeTwoEdgesLength),
                    R"#(Computes the location of an intreval between between two edges. FirstAttach , SecondAttach are the returned extreme points of the interval.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("ArrowSize"),  py::arg("FirstEdge"),  py::arg("SecondEdge"),  py::arg("Plane"),  py::arg("AutomaticPos"),  py::arg("IsSetBndBox"),  py::arg("BndBox"),  py::arg("Position"),  py::arg("FirstAttach"),  py::arg("SecondAttach"),  py::arg("FirstExtreme"),  py::arg("SecondExtreme"),  py::arg("SymbolPrs"))
        .def_static("ComputeTwoVerticesLength_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const opencascade::handle<Geom_Plane> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Bnd_Box & ,  const AIS_TypeOfDist ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  DsgPrs_ArrowSide &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TopoDS_Vertex & ,  const TopoDS_Vertex & ,  const opencascade::handle<Geom_Plane> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Bnd_Box & ,  const AIS_TypeOfDist ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  DsgPrs_ArrowSide &  ) >(&AIS_EqualDistanceRelation::ComputeTwoVerticesLength),
                    R"#(Computes the interval position between two vertexs. FirstAttach, SecondAttach are the returned extreme points of the interval.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("ArrowSize"),  py::arg("FirstVertex"),  py::arg("SecondVertex"),  py::arg("Plane"),  py::arg("AutomaticPos"),  py::arg("IsSetBndBox"),  py::arg("BndBox"),  py::arg("TypeDist"),  py::arg("Position"),  py::arg("FirstAttach"),  py::arg("SecondAttach"),  py::arg("FirstExtreme"),  py::arg("SecondExtreme"),  py::arg("SymbolPrs"))
        .def_static("ComputeOneEdgeOneVertexLength_s",
                    (void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TopoDS_Shape & ,  const TopoDS_Shape & ,  const opencascade::handle<Geom_Plane> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Bnd_Box & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  DsgPrs_ArrowSide &  ) ) static_cast<void (*)( const opencascade::handle<Prs3d_Presentation> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Real ,  const TopoDS_Shape & ,  const TopoDS_Shape & ,  const opencascade::handle<Geom_Plane> & ,  const Standard_Boolean ,  const Standard_Boolean ,  const Bnd_Box & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  gp_Pnt & ,  DsgPrs_ArrowSide &  ) >(&AIS_EqualDistanceRelation::ComputeOneEdgeOneVertexLength),
                    R"#(Compute the interval location between a vertex and an edge. Edge may be a line or a circle.)#"  , py::arg("aPresentation"),  py::arg("aDrawer"),  py::arg("ArrowSize"),  py::arg("FirstShape"),  py::arg("SecondShape"),  py::arg("Plane"),  py::arg("AutomaticPos"),  py::arg("IsSetBndBox"),  py::arg("BndBox"),  py::arg("Position"),  py::arg("FirstAttach"),  py::arg("SecondAttach"),  py::arg("FirstExtreme"),  py::arg("SecondExtreme"),  py::arg("SymbolPrs"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_EqualRadiusRelation ,opencascade::handle<AIS_EqualRadiusRelation>  , AIS_Relation >>(m.attr("AIS_EqualRadiusRelation"))
    // constructors
        .def(py::init< const TopoDS_Edge &,const TopoDS_Edge &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aFirstEdge"),  py::arg("aSecondEdge"),  py::arg("aPlane") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_EqualRadiusRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_EqualRadiusRelation::*)() const>(&AIS_EqualRadiusRelation::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_EqualRadiusRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_EqualRadiusRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_EqualRadiusRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_EqualRadiusRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_EqualRadiusRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_FixRelation ,opencascade::handle<AIS_FixRelation>  , AIS_Relation >>(m.attr("AIS_FixRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Plane> &,const TopoDS_Wire & >()  , py::arg("aShape"),  py::arg("aPlane"),  py::arg("aWire") )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Plane> &,const TopoDS_Wire &,const gp_Pnt &,const Standard_Real >()  , py::arg("aShape"),  py::arg("aPlane"),  py::arg("aWire"),  py::arg("aPosition"),  py::arg("anArrowSize")=static_cast<const Standard_Real>(0.01) )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aShape"),  py::arg("aPlane") )
        .def(py::init< const TopoDS_Shape &,const opencascade::handle<Geom_Plane> &,const gp_Pnt &,const Standard_Real >()  , py::arg("aShape"),  py::arg("aPlane"),  py::arg("aPosition"),  py::arg("anArrowSize")=static_cast<const Standard_Real>(0.01) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_FixRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_FixRelation::*)() const>(&AIS_FixRelation::DynamicType),
             R"#(None)#" )
        .def("Wire",
             (TopoDS_Wire (AIS_FixRelation::*)() ) static_cast<TopoDS_Wire (AIS_FixRelation::*)() >(&AIS_FixRelation::Wire),
             R"#(Returns the wire which connects vertices in a fixed relation.)#" )
        .def("SetWire",
             (void (AIS_FixRelation::*)( const TopoDS_Wire &  ) ) static_cast<void (AIS_FixRelation::*)( const TopoDS_Wire &  ) >(&AIS_FixRelation::SetWire),
             R"#(Constructs the wire aWire. This connects vertices which are in a fixed relation.)#"  , py::arg("aWire"))
        .def("IsMovable",
             (Standard_Boolean (AIS_FixRelation::*)() const) static_cast<Standard_Boolean (AIS_FixRelation::*)() const>(&AIS_FixRelation::IsMovable),
             R"#(Returns true if the Interactive Objects in the relation are movable.)#" )
        .def("Compute",
             (void (AIS_FixRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_FixRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_FixRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("IsMovable",
             (Standard_Boolean (AIS_FixRelation::*)() const) static_cast<Standard_Boolean (AIS_FixRelation::*)() const>(&AIS_FixRelation::IsMovable),
             R"#(Returns true if the Interactive Objects in the relation are movable.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_FixRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_FixRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_IdenticRelation ,opencascade::handle<AIS_IdenticRelation>  , AIS_Relation >>(m.attr("AIS_IdenticRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("FirstShape"),  py::arg("SecondShape"),  py::arg("aPlane") )
    // custom constructors
    // methods
        .def("HasUsers",
             (Standard_Boolean (AIS_IdenticRelation::*)() const) static_cast<Standard_Boolean (AIS_IdenticRelation::*)() const>(&AIS_IdenticRelation::HasUsers),
             R"#(None)#" )
        .def("Users",
             (const TColStd_ListOfTransient & (AIS_IdenticRelation::*)() const) static_cast<const TColStd_ListOfTransient & (AIS_IdenticRelation::*)() const>(&AIS_IdenticRelation::Users),
             R"#(None)#" )
        .def("AddUser",
             (void (AIS_IdenticRelation::*)( const opencascade::handle<Standard_Transient> &  ) ) static_cast<void (AIS_IdenticRelation::*)( const opencascade::handle<Standard_Transient> &  ) >(&AIS_IdenticRelation::AddUser),
             R"#(None)#"  , py::arg("theUser"))
        .def("ClearUsers",
             (void (AIS_IdenticRelation::*)() ) static_cast<void (AIS_IdenticRelation::*)() >(&AIS_IdenticRelation::ClearUsers),
             R"#(None)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_IdenticRelation::*)() const) static_cast<Standard_Boolean (AIS_IdenticRelation::*)() const>(&AIS_IdenticRelation::IsMovable),
             R"#(Returns true if the interactive object is movable.)#" )
        .def("Compute",
             (void (AIS_IdenticRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_IdenticRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_IdenticRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_IdenticRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_IdenticRelation::*)() const>(&AIS_IdenticRelation::DynamicType),
             R"#(None)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_IdenticRelation::*)() const) static_cast<Standard_Boolean (AIS_IdenticRelation::*)() const>(&AIS_IdenticRelation::IsMovable),
             R"#(Returns true if the interactive object is movable.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_IdenticRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_IdenticRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_LengthDimension ,opencascade::handle<AIS_LengthDimension>  , AIS_Dimension >>(m.attr("AIS_LengthDimension"))
    // constructors
        .def(py::init< const TopoDS_Face &,const TopoDS_Edge & >()  , py::arg("theFace"),  py::arg("theEdge") )
        .def(py::init< const TopoDS_Face &,const TopoDS_Face & >()  , py::arg("theFirstFace"),  py::arg("theSecondFace") )
        .def(py::init< const gp_Pnt &,const gp_Pnt &,const gp_Pln & >()  , py::arg("theFirstPoint"),  py::arg("theSecondPoint"),  py::arg("thePlane") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const gp_Pln & >()  , py::arg("theFirstShape"),  py::arg("theSecondShape"),  py::arg("thePlane") )
        .def(py::init< const TopoDS_Edge &,const gp_Pln & >()  , py::arg("theEdge"),  py::arg("thePlane") )
    // custom constructors
    // methods
        .def("FirstPoint",
             (const gp_Pnt & (AIS_LengthDimension::*)() const) static_cast<const gp_Pnt & (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::FirstPoint),
             R"#(Returns first attachement point.)#" )
        .def("SecondPoint",
             (const gp_Pnt & (AIS_LengthDimension::*)() const) static_cast<const gp_Pnt & (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::SecondPoint),
             R"#(Returns second attachement point.)#" )
        .def("FirstShape",
             (const TopoDS_Shape & (AIS_LengthDimension::*)() const) static_cast<const TopoDS_Shape & (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::FirstShape),
             R"#(Returns first attachement shape.)#" )
        .def("SecondShape",
             (const TopoDS_Shape & (AIS_LengthDimension::*)() const) static_cast<const TopoDS_Shape & (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::SecondShape),
             R"#(Returns second attachement shape.)#" )
        .def("SetMeasuredGeometry",
             (void (AIS_LengthDimension::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pln &  ) ) static_cast<void (AIS_LengthDimension::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pln &  ) >(&AIS_LengthDimension::SetMeasuredGeometry),
             R"#(Measure distance between two points. The dimension will become invalid if the new distance between attachement points is less than Precision::Confusion().)#"  , py::arg("theFirstPoint"),  py::arg("theSecondPoint"),  py::arg("thePlane"))
        .def("SetMeasuredGeometry",
             (void (AIS_LengthDimension::*)( const TopoDS_Edge & ,  const gp_Pln &  ) ) static_cast<void (AIS_LengthDimension::*)( const TopoDS_Edge & ,  const gp_Pln &  ) >(&AIS_LengthDimension::SetMeasuredGeometry),
             R"#(Measure length of edge. The dimension will become invalid if the new length of edge is less than Precision::Confusion().)#"  , py::arg("theEdge"),  py::arg("thePlane"))
        .def("SetMeasuredGeometry",
             (void (AIS_LengthDimension::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) ) static_cast<void (AIS_LengthDimension::*)( const TopoDS_Face & ,  const TopoDS_Face &  ) >(&AIS_LengthDimension::SetMeasuredGeometry),
             R"#(Measure distance between two faces. The dimension will become invalid if the distance can not be measured or it is less than Precision::Confusion().)#"  , py::arg("theFirstFace"),  py::arg("theSecondFace"))
        .def("SetMeasuredGeometry",
             (void (AIS_LengthDimension::*)( const TopoDS_Face & ,  const TopoDS_Edge &  ) ) static_cast<void (AIS_LengthDimension::*)( const TopoDS_Face & ,  const TopoDS_Edge &  ) >(&AIS_LengthDimension::SetMeasuredGeometry),
             R"#(Measure distance between face and edge. The dimension will become invalid if the distance can not be measured or it is less than Precision::Confusion().)#"  , py::arg("theFace"),  py::arg("theEdge"))
        .def("SetMeasuredShapes",
             (void (AIS_LengthDimension::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) ) static_cast<void (AIS_LengthDimension::*)( const TopoDS_Shape & ,  const TopoDS_Shape &  ) >(&AIS_LengthDimension::SetMeasuredShapes),
             R"#(Measure distance between generic pair of shapes (edges, vertices, length), where measuring is applicable.)#"  , py::arg("theFirstShape"),  py::arg("theSecondShape"))
        .def("GetDisplayUnits",
             (const TCollection_AsciiString & (AIS_LengthDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::GetDisplayUnits),
             R"#(Returns the display units string.)#" )
        .def("GetModelUnits",
             (const TCollection_AsciiString & (AIS_LengthDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::GetModelUnits),
             R"#(Returns the model units string.)#" )
        .def("SetDisplayUnits",
             (void (AIS_LengthDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_LengthDimension::*)( const TCollection_AsciiString &  ) >(&AIS_LengthDimension::SetDisplayUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetModelUnits",
             (void (AIS_LengthDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_LengthDimension::*)( const TCollection_AsciiString &  ) >(&AIS_LengthDimension::SetModelUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetTextPosition",
             (void (AIS_LengthDimension::*)( const gp_Pnt &  ) ) static_cast<void (AIS_LengthDimension::*)( const gp_Pnt &  ) >(&AIS_LengthDimension::SetTextPosition),
             R"#(None)#"  , py::arg("theTextPos"))
        .def("GetTextPosition",
             (const gp_Pnt (AIS_LengthDimension::*)() const) static_cast<const gp_Pnt (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::GetTextPosition),
             R"#(None)#" )
        .def("SetDirection",
             (void (AIS_LengthDimension::*)( const gp_Dir & ,  const Standard_Boolean  ) ) static_cast<void (AIS_LengthDimension::*)( const gp_Dir & ,  const Standard_Boolean  ) >(&AIS_LengthDimension::SetDirection),
             R"#(Set custom direction for dimension. If it is not set, the direction is obtained from the measured geometry (e.g. line between points of dimension) The direction does not change flyout direction of dimension.)#"  , py::arg("theDirection"),  py::arg("theUseDirection")=static_cast<const Standard_Boolean>(Standard_True))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_LengthDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_LengthDimension::*)() const>(&AIS_LengthDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_LengthDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_LengthDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_MidPointRelation ,opencascade::handle<AIS_MidPointRelation>  , AIS_Relation >>(m.attr("AIS_MidPointRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aSymmTool"),  py::arg("FirstShape"),  py::arg("SecondShape"),  py::arg("aPlane") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_MidPointRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_MidPointRelation::*)() const>(&AIS_MidPointRelation::DynamicType),
             R"#(None)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_MidPointRelation::*)() const) static_cast<Standard_Boolean (AIS_MidPointRelation::*)() const>(&AIS_MidPointRelation::IsMovable),
             R"#(None)#" )
        .def("SetTool",
             (void (AIS_MidPointRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_MidPointRelation::*)( const TopoDS_Shape &  ) >(&AIS_MidPointRelation::SetTool),
             R"#(None)#"  , py::arg("aMidPointTool"))
        .def("GetTool",
             (const TopoDS_Shape & (AIS_MidPointRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_MidPointRelation::*)() const>(&AIS_MidPointRelation::GetTool),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_MidPointRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_MidPointRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_MidPointRelation::Compute),
             R"#(Computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("SetTool",
             (void (AIS_MidPointRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_MidPointRelation::*)( const TopoDS_Shape &  ) >(&AIS_MidPointRelation::SetTool),
             R"#(None)#"  , py::arg("aMidPointTool"))
        .def("GetTool",
             (const TopoDS_Shape & (AIS_MidPointRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_MidPointRelation::*)() const>(&AIS_MidPointRelation::GetTool),
             R"#(None)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_MidPointRelation::*)() const) static_cast<Standard_Boolean (AIS_MidPointRelation::*)() const>(&AIS_MidPointRelation::IsMovable),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_MidPointRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_MidPointRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_OffsetDimension ,opencascade::handle<AIS_OffsetDimension>  , AIS_Relation >>(m.attr("AIS_OffsetDimension"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const Standard_Real,const TCollection_ExtendedString & >()  , py::arg("FistShape"),  py::arg("SecondShape"),  py::arg("aVal"),  py::arg("aText") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_OffsetDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_OffsetDimension::*)() const>(&AIS_OffsetDimension::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_OffsetDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_OffsetDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_OffsetDimension::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_OffsetDimension::*)() const) static_cast<AIS_KindOfDimension (AIS_OffsetDimension::*)() const>(&AIS_OffsetDimension::KindOfDimension),
             R"#(Indicates that the dimension we are concerned with is an offset.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_OffsetDimension::*)() const) static_cast<Standard_Boolean (AIS_OffsetDimension::*)() const>(&AIS_OffsetDimension::IsMovable),
             R"#(Returns true if the offset datum is movable.)#" )
        .def("SetRelativePos",
             (void (AIS_OffsetDimension::*)( const gp_Trsf &  ) ) static_cast<void (AIS_OffsetDimension::*)( const gp_Trsf &  ) >(&AIS_OffsetDimension::SetRelativePos),
             R"#(Sets a transformation aTrsf for presentation and selection to a relative position.)#"  , py::arg("aTrsf"))
        .def("KindOfDimension",
             (AIS_KindOfDimension (AIS_OffsetDimension::*)() const) static_cast<AIS_KindOfDimension (AIS_OffsetDimension::*)() const>(&AIS_OffsetDimension::KindOfDimension),
             R"#(Indicates that the dimension we are concerned with is an offset.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_OffsetDimension::*)() const) static_cast<Standard_Boolean (AIS_OffsetDimension::*)() const>(&AIS_OffsetDimension::IsMovable),
             R"#(Returns true if the offset datum is movable.)#" )
        .def("SetRelativePos",
             (void (AIS_OffsetDimension::*)( const gp_Trsf &  ) ) static_cast<void (AIS_OffsetDimension::*)( const gp_Trsf &  ) >(&AIS_OffsetDimension::SetRelativePos),
             R"#(Sets a transformation aTrsf for presentation and selection to a relative position.)#"  , py::arg("aTrsf"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_OffsetDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_OffsetDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_ParallelRelation ,opencascade::handle<AIS_ParallelRelation>  , AIS_Relation >>(m.attr("AIS_ParallelRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aFShape"),  py::arg("aSShape"),  py::arg("aPlane") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> &,const gp_Pnt &,const DsgPrs_ArrowSide,const Standard_Real >()  , py::arg("aFShape"),  py::arg("aSShape"),  py::arg("aPlane"),  py::arg("aPosition"),  py::arg("aSymbolPrs"),  py::arg("anArrowSize")=static_cast<const Standard_Real>(0.01) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_ParallelRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_ParallelRelation::*)() const>(&AIS_ParallelRelation::DynamicType),
             R"#(None)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_ParallelRelation::*)() const) static_cast<Standard_Boolean (AIS_ParallelRelation::*)() const>(&AIS_ParallelRelation::IsMovable),
             R"#(Returns true if the parallelism is movable.)#" )
        .def("Compute",
             (void (AIS_ParallelRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_ParallelRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_ParallelRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("IsMovable",
             (Standard_Boolean (AIS_ParallelRelation::*)() const) static_cast<Standard_Boolean (AIS_ParallelRelation::*)() const>(&AIS_ParallelRelation::IsMovable),
             R"#(Returns true if the parallelism is movable.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_ParallelRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_ParallelRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_PerpendicularRelation ,opencascade::handle<AIS_PerpendicularRelation>  , AIS_Relation >>(m.attr("AIS_PerpendicularRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aFShape"),  py::arg("aSShape"),  py::arg("aPlane") )
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape & >()  , py::arg("aFShape"),  py::arg("aSShape") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_PerpendicularRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_PerpendicularRelation::*)() const>(&AIS_PerpendicularRelation::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_PerpendicularRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_PerpendicularRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_PerpendicularRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_PerpendicularRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_PerpendicularRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_RadiusDimension ,opencascade::handle<AIS_RadiusDimension>  , AIS_Dimension >>(m.attr("AIS_RadiusDimension"))
    // constructors
        .def(py::init< const gp_Circ & >()  , py::arg("theCircle") )
        .def(py::init< const gp_Circ &,const gp_Pnt & >()  , py::arg("theCircle"),  py::arg("theAnchorPoint") )
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("Circle",
             (const gp_Circ & (AIS_RadiusDimension::*)() const) static_cast<const gp_Circ & (AIS_RadiusDimension::*)() const>(&AIS_RadiusDimension::Circle),
             R"#(Returns measured geometry circle.)#" )
        .def("AnchorPoint",
             (const gp_Pnt & (AIS_RadiusDimension::*)() const) static_cast<const gp_Pnt & (AIS_RadiusDimension::*)() const>(&AIS_RadiusDimension::AnchorPoint),
             R"#(Returns anchor point on circle for radius dimension.)#" )
        .def("Shape",
             (const TopoDS_Shape & (AIS_RadiusDimension::*)() const) static_cast<const TopoDS_Shape & (AIS_RadiusDimension::*)() const>(&AIS_RadiusDimension::Shape),
             R"#(Returns the measured shape.)#" )
        .def("SetMeasuredGeometry",
             (void (AIS_RadiusDimension::*)( const gp_Circ &  ) ) static_cast<void (AIS_RadiusDimension::*)( const gp_Circ &  ) >(&AIS_RadiusDimension::SetMeasuredGeometry),
             R"#(Measure radius of the circle. The dimension will become invalid if the radius of the circle is less than Precision::Confusion().)#"  , py::arg("theCircle"))
        .def("SetMeasuredGeometry",
             (void (AIS_RadiusDimension::*)( const gp_Circ & ,  const gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<void (AIS_RadiusDimension::*)( const gp_Circ & ,  const gp_Pnt & ,  const Standard_Boolean  ) >(&AIS_RadiusDimension::SetMeasuredGeometry),
             R"#(Measure radius of the circle and orient the dimension so the dimension lines attaches to anchor point on the circle. The dimension will become invalid if the radius of the circle is less than Precision::Confusion().)#"  , py::arg("theCircle"),  py::arg("theAnchorPoint"),  py::arg("theHasAnchor")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetMeasuredGeometry",
             (void (AIS_RadiusDimension::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_RadiusDimension::*)( const TopoDS_Shape &  ) >(&AIS_RadiusDimension::SetMeasuredGeometry),
             R"#(Measure radius on the passed shape, if applicable. The dimension will become invalid if the passed shape is not measurable or if measured diameter value is less than Precision::Confusion().)#"  , py::arg("theShape"))
        .def("SetMeasuredGeometry",
             (void (AIS_RadiusDimension::*)( const TopoDS_Shape & ,  const gp_Pnt & ,  const Standard_Boolean  ) ) static_cast<void (AIS_RadiusDimension::*)( const TopoDS_Shape & ,  const gp_Pnt & ,  const Standard_Boolean  ) >(&AIS_RadiusDimension::SetMeasuredGeometry),
             R"#(Measure radius on the passed shape, if applicable. The dimension will become invalid if the passed shape is not measurable or if measured diameter value is less than Precision::Confusion().)#"  , py::arg("theShape"),  py::arg("theAnchorPoint"),  py::arg("theHasAnchor")=static_cast<const Standard_Boolean>(Standard_True))
        .def("GetDisplayUnits",
             (const TCollection_AsciiString & (AIS_RadiusDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_RadiusDimension::*)() const>(&AIS_RadiusDimension::GetDisplayUnits),
             R"#(Returns the display units string.)#" )
        .def("GetModelUnits",
             (const TCollection_AsciiString & (AIS_RadiusDimension::*)() const) static_cast<const TCollection_AsciiString & (AIS_RadiusDimension::*)() const>(&AIS_RadiusDimension::GetModelUnits),
             R"#(Returns the model units string.)#" )
        .def("SetDisplayUnits",
             (void (AIS_RadiusDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_RadiusDimension::*)( const TCollection_AsciiString &  ) >(&AIS_RadiusDimension::SetDisplayUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetModelUnits",
             (void (AIS_RadiusDimension::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_RadiusDimension::*)( const TCollection_AsciiString &  ) >(&AIS_RadiusDimension::SetModelUnits),
             R"#(None)#"  , py::arg("theUnits"))
        .def("SetTextPosition",
             (void (AIS_RadiusDimension::*)( const gp_Pnt &  ) ) static_cast<void (AIS_RadiusDimension::*)( const gp_Pnt &  ) >(&AIS_RadiusDimension::SetTextPosition),
             R"#(None)#"  , py::arg("theTextPos"))
        .def("GetTextPosition",
             (const gp_Pnt (AIS_RadiusDimension::*)() const) static_cast<const gp_Pnt (AIS_RadiusDimension::*)() const>(&AIS_RadiusDimension::GetTextPosition),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_RadiusDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_RadiusDimension::*)() const>(&AIS_RadiusDimension::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_RadiusDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_RadiusDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_SymmetricRelation ,opencascade::handle<AIS_SymmetricRelation>  , AIS_Relation >>(m.attr("AIS_SymmetricRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> & >()  , py::arg("aSymmTool"),  py::arg("FirstShape"),  py::arg("SecondShape"),  py::arg("aPlane") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_SymmetricRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_SymmetricRelation::*)() const>(&AIS_SymmetricRelation::DynamicType),
             R"#(None)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_SymmetricRelation::*)() const) static_cast<Standard_Boolean (AIS_SymmetricRelation::*)() const>(&AIS_SymmetricRelation::IsMovable),
             R"#(Returns true if the symmetric constraint display is movable.)#" )
        .def("SetTool",
             (void (AIS_SymmetricRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_SymmetricRelation::*)( const TopoDS_Shape &  ) >(&AIS_SymmetricRelation::SetTool),
             R"#(Sets the tool aSymmetricTool composed of a first shape, a second shape, and a plane. This tool is initially created at construction time.)#"  , py::arg("aSymmetricTool"))
        .def("GetTool",
             (const TopoDS_Shape & (AIS_SymmetricRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_SymmetricRelation::*)() const>(&AIS_SymmetricRelation::GetTool),
             R"#(Returns the tool composed of a first shape, a second shape, and a plane. This tool is created at construction time.)#" )
        .def("Compute",
             (void (AIS_SymmetricRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_SymmetricRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_SymmetricRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
        .def("SetTool",
             (void (AIS_SymmetricRelation::*)( const TopoDS_Shape &  ) ) static_cast<void (AIS_SymmetricRelation::*)( const TopoDS_Shape &  ) >(&AIS_SymmetricRelation::SetTool),
             R"#(Sets the tool aSymmetricTool composed of a first shape, a second shape, and a plane. This tool is initially created at construction time.)#"  , py::arg("aSymmetricTool"))
        .def("GetTool",
             (const TopoDS_Shape & (AIS_SymmetricRelation::*)() const) static_cast<const TopoDS_Shape & (AIS_SymmetricRelation::*)() const>(&AIS_SymmetricRelation::GetTool),
             R"#(Returns the tool composed of a first shape, a second shape, and a plane. This tool is created at construction time.)#" )
        .def("IsMovable",
             (Standard_Boolean (AIS_SymmetricRelation::*)() const) static_cast<Standard_Boolean (AIS_SymmetricRelation::*)() const>(&AIS_SymmetricRelation::IsMovable),
             R"#(Returns true if the symmetric constraint display is movable.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_SymmetricRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_SymmetricRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_TangentRelation ,opencascade::handle<AIS_TangentRelation>  , AIS_Relation >>(m.attr("AIS_TangentRelation"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const TopoDS_Shape &,const opencascade::handle<Geom_Plane> &,const Standard_Integer >()  , py::arg("aFShape"),  py::arg("aSShape"),  py::arg("aPlane"),  py::arg("anExternRef")=static_cast<const Standard_Integer>(0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_TangentRelation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_TangentRelation::*)() const>(&AIS_TangentRelation::DynamicType),
             R"#(None)#" )
        .def("ExternRef",
             (Standard_Integer (AIS_TangentRelation::*)() ) static_cast<Standard_Integer (AIS_TangentRelation::*)() >(&AIS_TangentRelation::ExternRef),
             R"#(Returns the external reference for tangency. The values are as follows: - 0 - there is no connection; - 1 - there is a connection to the first shape; - 2 - there is a connection to the second shape. This reference is defined at construction time.)#" )
        .def("SetExternRef",
             (void (AIS_TangentRelation::*)( const Standard_Integer  ) ) static_cast<void (AIS_TangentRelation::*)( const Standard_Integer  ) >(&AIS_TangentRelation::SetExternRef),
             R"#(Sets the external reference for tangency, aRef. The values are as follows: - 0 - there is no connection; - 1 - there is a connection to the first shape; - 2 - there is a connection to the second shape. This reference is initially defined at construction time.)#"  , py::arg("aRef"))
        .def("Compute",
             (void (AIS_TangentRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_TangentRelation::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_TangentRelation::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_TangentRelation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_TangentRelation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_TexturedShape ,opencascade::handle<AIS_TexturedShape>  , AIS_Shape >>(m.attr("AIS_TexturedShape"))
    // constructors
        .def(py::init< const TopoDS_Shape & >()  , py::arg("theShape") )
    // custom constructors
    // methods
        .def("SetTextureFileName",
             (void (AIS_TexturedShape::*)( const TCollection_AsciiString &  ) ) static_cast<void (AIS_TexturedShape::*)( const TCollection_AsciiString &  ) >(&AIS_TexturedShape::SetTextureFileName),
             R"#(Sets the texture source. <theTextureFileName> can specify path to texture image or one of the standard predefined textures. The accepted file types are those used in Image_AlienPixMap with extensions such as rgb, png, jpg and more. To specify the standard predefined texture, the <theTextureFileName> should contain integer - the Graphic3d_NameOfTexture2D enumeration index. Setting texture source using this method resets the source pixmap (if was set previously).)#"  , py::arg("theTextureFileName"))
        .def("SetTexturePixMap",
             (void (AIS_TexturedShape::*)( const opencascade::handle<Image_PixMap> &  ) ) static_cast<void (AIS_TexturedShape::*)( const opencascade::handle<Image_PixMap> &  ) >(&AIS_TexturedShape::SetTexturePixMap),
             R"#(Sets the texture source. <theTexturePixMap> specifies image data. Please note that the data should be in Bottom-Up order, the flag of Image_PixMap::IsTopDown() will be ignored by graphic driver. Setting texture source using this method resets the source by filename (if was set previously).)#"  , py::arg("theTexturePixMap"))
        .def("TextureMapState",
             (Standard_Boolean (AIS_TexturedShape::*)() const) static_cast<Standard_Boolean (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureMapState),
             R"#(Returns flag to control texture mapping (for presentation mode 3))#" )
        .def("SetTextureMapOn",
             (void (AIS_TexturedShape::*)() ) static_cast<void (AIS_TexturedShape::*)() >(&AIS_TexturedShape::SetTextureMapOn),
             R"#(Enables texture mapping)#" )
        .def("SetTextureMapOff",
             (void (AIS_TexturedShape::*)() ) static_cast<void (AIS_TexturedShape::*)() >(&AIS_TexturedShape::SetTextureMapOff),
             R"#(Disables texture mapping)#" )
        .def("TextureFile",
             (Standard_CString (AIS_TexturedShape::*)() const) static_cast<Standard_CString (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureFile),
             R"#(Returns path to the texture file)#" )
        .def("TexturePixMap",
             (const opencascade::handle<Image_PixMap> & (AIS_TexturedShape::*)() const) static_cast<const opencascade::handle<Image_PixMap> & (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TexturePixMap),
             R"#(Returns the source pixmap for texture map)#" )
        .def("UpdateAttributes",
             (void (AIS_TexturedShape::*)() ) static_cast<void (AIS_TexturedShape::*)() >(&AIS_TexturedShape::UpdateAttributes),
             R"#(Use this method to display the textured shape without recomputing the whole presentation. Use this method when ONLY the texture content has been changed. If other parameters (ie: scale factors, texture origin, texture repeat...) have changed, the whole presentation has to be recomputed:)#" )
        .def("SetColor",
             (void (AIS_TexturedShape::*)( const Quantity_Color &  ) ) static_cast<void (AIS_TexturedShape::*)( const Quantity_Color &  ) >(&AIS_TexturedShape::SetColor),
             R"#(Sets the color.)#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (AIS_TexturedShape::*)() ) static_cast<void (AIS_TexturedShape::*)() >(&AIS_TexturedShape::UnsetColor),
             R"#(Removes settings for the color.)#" )
        .def("SetMaterial",
             (void (AIS_TexturedShape::*)( const Graphic3d_MaterialAspect &  ) ) static_cast<void (AIS_TexturedShape::*)( const Graphic3d_MaterialAspect &  ) >(&AIS_TexturedShape::SetMaterial),
             R"#(Sets the material aspect.)#"  , py::arg("theAspect"))
        .def("UnsetMaterial",
             (void (AIS_TexturedShape::*)() ) static_cast<void (AIS_TexturedShape::*)() >(&AIS_TexturedShape::UnsetMaterial),
             R"#(Removes settings for material aspect.)#" )
        .def("EnableTextureModulate",
             (void (AIS_TexturedShape::*)() ) static_cast<void (AIS_TexturedShape::*)() >(&AIS_TexturedShape::EnableTextureModulate),
             R"#(Enables texture modulation)#" )
        .def("DisableTextureModulate",
             (void (AIS_TexturedShape::*)() ) static_cast<void (AIS_TexturedShape::*)() >(&AIS_TexturedShape::DisableTextureModulate),
             R"#(Disables texture modulation)#" )
        .def("TextureRepeat",
             (Standard_Boolean (AIS_TexturedShape::*)() const) static_cast<Standard_Boolean (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureRepeat),
             R"#(Returns texture repeat flag)#" )
        .def("URepeat",
             (Standard_Real (AIS_TexturedShape::*)() const) static_cast<Standard_Real (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::URepeat),
             R"#(Returns texture repeat U value)#" )
        .def("VRepeat",
             (Standard_Real (AIS_TexturedShape::*)() const) static_cast<Standard_Real (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::VRepeat),
             R"#(Returns texture repeat V value)#" )
        .def("SetTextureRepeat",
             (void (AIS_TexturedShape::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AIS_TexturedShape::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&AIS_TexturedShape::SetTextureRepeat),
             R"#(Sets the number of occurrences of the texture on each face. The texture itself is parameterized in (0,1) by (0,1). Each face of the shape to be textured is parameterized in UV space (Umin,Umax) by (Vmin,Vmax). If RepeatYN is set to false, texture coordinates are clamped in the range (0,1)x(0,1) of the face.)#"  , py::arg("theToRepeat"),  py::arg("theURepeat")=static_cast<const Standard_Real>(1.0),  py::arg("theVRepeat")=static_cast<const Standard_Real>(1.0))
        .def("TextureOrigin",
             (Standard_Boolean (AIS_TexturedShape::*)() const) static_cast<Standard_Boolean (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureOrigin),
             R"#(Returns true if texture UV origin has been modified)#" )
        .def("TextureUOrigin",
             (Standard_Real (AIS_TexturedShape::*)() const) static_cast<Standard_Real (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureUOrigin),
             R"#(Returns texture origin U position (0.0 by default))#" )
        .def("TextureVOrigin",
             (Standard_Real (AIS_TexturedShape::*)() const) static_cast<Standard_Real (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureVOrigin),
             R"#(Returns texture origin V position (0.0 by default))#" )
        .def("SetTextureOrigin",
             (void (AIS_TexturedShape::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AIS_TexturedShape::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&AIS_TexturedShape::SetTextureOrigin),
             R"#(Use this method to change the origin of the texture. The texel (0,0) will be mapped to the surface (UOrigin,VOrigin))#"  , py::arg("theToSetTextureOrigin"),  py::arg("theUOrigin")=static_cast<const Standard_Real>(0.0),  py::arg("theVOrigin")=static_cast<const Standard_Real>(0.0))
        .def("TextureScale",
             (Standard_Boolean (AIS_TexturedShape::*)() const) static_cast<Standard_Boolean (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureScale),
             R"#(Returns true if scale factor should be applied to texture mapping)#" )
        .def("TextureScaleU",
             (Standard_Real (AIS_TexturedShape::*)() const) static_cast<Standard_Real (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureScaleU),
             R"#(Returns scale factor for U coordinate (1.0 by default))#" )
        .def("TextureScaleV",
             (Standard_Real (AIS_TexturedShape::*)() const) static_cast<Standard_Real (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureScaleV),
             R"#(Returns scale factor for V coordinate (1.0 by default))#" )
        .def("SetTextureScale",
             (void (AIS_TexturedShape::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (AIS_TexturedShape::*)( const Standard_Boolean ,  const Standard_Real ,  const Standard_Real  ) >(&AIS_TexturedShape::SetTextureScale),
             R"#(Use this method to scale the texture (percent of the face). You can specify a scale factor for both U and V. Example: if you set ScaleU and ScaleV to 0.5 and you enable texture repeat, the texture will appear twice on the face in each direction.)#"  , py::arg("theToSetTextureScale"),  py::arg("theScaleU")=static_cast<const Standard_Real>(1.0),  py::arg("theScaleV")=static_cast<const Standard_Real>(1.0))
        .def("ShowTriangles",
             (Standard_Boolean (AIS_TexturedShape::*)() const) static_cast<Standard_Boolean (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::ShowTriangles),
             R"#(Returns true if displaying of triangles is requested)#" )
        .def("ShowTriangles",
             (void (AIS_TexturedShape::*)( const Standard_Boolean  ) ) static_cast<void (AIS_TexturedShape::*)( const Standard_Boolean  ) >(&AIS_TexturedShape::ShowTriangles),
             R"#(Use this method to show the triangulation of the shape (for debugging etc.).)#"  , py::arg("theToShowTriangles"))
        .def("TextureModulate",
             (Standard_Boolean (AIS_TexturedShape::*)() const) static_cast<Standard_Boolean (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::TextureModulate),
             R"#(Returns true if texture color modulation is turned on)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (AIS_TexturedShape::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (AIS_TexturedShape::*)( const Standard_Integer  ) const>(&AIS_TexturedShape::AcceptDisplayMode),
             R"#(Return true if specified display mode is supported (extends AIS_Shape with Display Mode 3).)#"  , py::arg("theMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_TexturedShape::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_TexturedShape::*)() const>(&AIS_TexturedShape::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_TexturedShape::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_TexturedShape::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_MaxRadiusDimension ,opencascade::handle<AIS_MaxRadiusDimension>  , AIS_EllipseRadiusDimension >>(m.attr("AIS_MaxRadiusDimension"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const TCollection_ExtendedString & >()  , py::arg("aShape"),  py::arg("aVal"),  py::arg("aText") )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const TCollection_ExtendedString &,const gp_Pnt &,const DsgPrs_ArrowSide,const Standard_Real >()  , py::arg("aShape"),  py::arg("aVal"),  py::arg("aText"),  py::arg("aPosition"),  py::arg("aSymbolPrs"),  py::arg("anArrowSize")=static_cast<const Standard_Real>(0.0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_MaxRadiusDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_MaxRadiusDimension::*)() const>(&AIS_MaxRadiusDimension::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_MaxRadiusDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_MaxRadiusDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_MaxRadiusDimension::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_MaxRadiusDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_MaxRadiusDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<AIS_MinRadiusDimension ,opencascade::handle<AIS_MinRadiusDimension>  , AIS_EllipseRadiusDimension >>(m.attr("AIS_MinRadiusDimension"))
    // constructors
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const TCollection_ExtendedString & >()  , py::arg("aShape"),  py::arg("aVal"),  py::arg("aText") )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const TCollection_ExtendedString &,const gp_Pnt &,const DsgPrs_ArrowSide,const Standard_Real >()  , py::arg("aShape"),  py::arg("aVal"),  py::arg("aText"),  py::arg("aPosition"),  py::arg("aSymbolPrs"),  py::arg("anArrowSize")=static_cast<const Standard_Real>(0.0) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (AIS_MinRadiusDimension::*)() const) static_cast<const opencascade::handle<Standard_Type> & (AIS_MinRadiusDimension::*)() const>(&AIS_MinRadiusDimension::DynamicType),
             R"#(None)#" )
        .def("Compute",
             (void (AIS_MinRadiusDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (AIS_MinRadiusDimension::*)( const opencascade::handle<Prs3d_Projector> & ,  const opencascade::handle<Geom_Transformation> & ,  const opencascade::handle<Prs3d_Presentation> &  ) >(&AIS_MinRadiusDimension::Compute),
             R"#(computes the presentation according to a point of view given by <aProjector>. To be Used when the associated degenerated Presentations have been transformed by <aTrsf> which is not a Pure Translation. The HLR Prs can't be deducted automatically WARNING :<aTrsf> must be applied to the object to display before computation !!!)#"  , py::arg("aProjector"),  py::arg("aTrsf"),  py::arg("aPresentation"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&AIS_MinRadiusDimension::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&AIS_MinRadiusDimension::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/AIS.hxx
// ./opencascade/AIS_ViewCube.hxx
// ./opencascade/AIS_PerpendicularRelation.hxx
// ./opencascade/AIS_ConnectStatus.hxx
// ./opencascade/AIS_ConcentricRelation.hxx
// ./opencascade/AIS_DataMapIteratorOfDataMapOfIOStatus.hxx
// ./opencascade/AIS_InteractiveObject.hxx
// ./opencascade/AIS_SignatureFilter.hxx
// ./opencascade/AIS_Axis.hxx
// ./opencascade/AIS_DisplayStatus.hxx
// ./opencascade/AIS_TypeFilter.hxx
// ./opencascade/AIS_TextLabel.hxx
// ./opencascade/AIS_DisplaySpecialSymbol.hxx
// ./opencascade/AIS_NListOfEntityOwner.hxx
// ./opencascade/AIS_EqualDistanceRelation.hxx
// ./opencascade/AIS_TrihedronSelectionMode.hxx
// ./opencascade/AIS_BadEdgeFilter.hxx
// ./opencascade/AIS_MaxRadiusDimension.hxx
// ./opencascade/AIS_ConnectedInteractive.hxx
// ./opencascade/AIS_Line.hxx
// ./opencascade/AIS_EqualRadiusRelation.hxx
// ./opencascade/AIS_TypeOfAngle.hxx
// ./opencascade/AIS_MapOfInteractive.hxx
// ./opencascade/AIS_SelectionModesConcurrency.hxx
// ./opencascade/AIS_ParallelRelation.hxx
// ./opencascade/AIS_DimensionOwner.hxx
// ./opencascade/AIS_InteractiveContext.hxx
// ./opencascade/AIS_ExclusionFilter.hxx
// ./opencascade/AIS_MultipleConnectedInteractive.hxx
// ./opencascade/AIS_AttributeFilter.hxx
// ./opencascade/AIS_MinRadiusDimension.hxx
// ./opencascade/AIS_Plane.hxx
// ./opencascade/AIS_Selection.hxx
// ./opencascade/AIS_DragAction.hxx
// ./opencascade/AIS_ViewInputBuffer.hxx
// ./opencascade/AIS_Circle.hxx
// ./opencascade/AIS_WalkDelta.hxx
// ./opencascade/AIS_TypeOfAngleArrowVisibility.hxx
// ./opencascade/AIS_StatusOfPick.hxx
// ./opencascade/AIS_AnimationTimer.hxx
// ./opencascade/AIS_StatusOfDetection.hxx
// ./opencascade/AIS_SymmetricRelation.hxx
// ./opencascade/AIS_OffsetDimension.hxx
// ./opencascade/AIS_RadiusDimension.hxx
// ./opencascade/AIS_Trihedron.hxx
// ./opencascade/AIS_GraphicTool.hxx
// ./opencascade/AIS_TangentRelation.hxx
// ./opencascade/AIS_LengthDimension.hxx
// ./opencascade/AIS_TypeOfAxis.hxx
// ./opencascade/AIS_ManipulatorMode.hxx
// ./opencascade/AIS_IndexedDataMapOfOwnerPrs.hxx
// ./opencascade/AIS_Chamf2dDimension.hxx
// ./opencascade/AIS_DataMapOfIOStatus.hxx
// ./opencascade/AIS_DataMapofIntegerListOfinteractive.hxx
// ./opencascade/AIS_MidPointRelation.hxx
// ./opencascade/AIS_Animation.hxx
// ./opencascade/AIS_TypeOfAttribute.hxx
// ./opencascade/AIS_ColoredShape.hxx
// ./opencascade/AIS_Manipulator.hxx
// ./opencascade/AIS_KindOfDimension.hxx
// ./opencascade/AIS_AngleDimension.hxx
// ./opencascade/AIS_ListOfInteractive.hxx
// ./opencascade/AIS_DimensionSelectionMode.hxx
// ./opencascade/AIS_Chamf3dDimension.hxx
// ./opencascade/AIS_ListIteratorOfListOfInteractive.hxx
// ./opencascade/AIS_TypeOfDist.hxx
// ./opencascade/AIS_ViewController.hxx
// ./opencascade/AIS_TypeOfPlane.hxx
// ./opencascade/AIS_TypeOfIso.hxx
// ./opencascade/AIS_RubberBand.hxx
// ./opencascade/AIS_FixRelation.hxx
// ./opencascade/AIS_PlaneTrihedron.hxx
// ./opencascade/AIS_Relation.hxx
// ./opencascade/AIS_GlobalStatus.hxx
// ./opencascade/AIS_TexturedShape.hxx
// ./opencascade/AIS_ColoredDrawer.hxx
// ./opencascade/AIS_Point.hxx
// ./opencascade/AIS_KindOfSurface.hxx
// ./opencascade/AIS_Triangulation.hxx
// ./opencascade/AIS_Dimension.hxx
// ./opencascade/AIS_DataMapIteratorOfDataMapofIntegerListOfinteractive.hxx
// ./opencascade/AIS_KindOfInteractive.hxx
// ./opencascade/AIS_TrihedronOwner.hxx
// ./opencascade/AIS_DataMapOfShapeDrawer.hxx
// ./opencascade/AIS_ColorScale.hxx
// ./opencascade/AIS_MapIteratorOfMapOfInteractive.hxx
// ./opencascade/AIS_ClearMode.hxx
// ./opencascade/AIS_AnimationObject.hxx
// ./opencascade/AIS_KindOfRelation.hxx
// ./opencascade/AIS_IdenticRelation.hxx
// ./opencascade/AIS_Shape.hxx
// ./opencascade/AIS_NavigationMode.hxx
// ./opencascade/AIS_MouseGesture.hxx
// ./opencascade/AIS_PointCloud.hxx
// ./opencascade/AIS_EllipseRadiusDimension.hxx
// ./opencascade/AIS_SelectStatus.hxx
// ./opencascade/AIS_AnimationCamera.hxx
// ./opencascade/AIS_MediaPlayer.hxx
// ./opencascade/AIS_RotationMode.hxx
// ./opencascade/AIS_ManipulatorOwner.hxx
// ./opencascade/AIS_C0RegularityFilter.hxx
// ./opencascade/AIS_SequenceOfDimension.hxx
// ./opencascade/AIS_DiameterDimension.hxx
// ./opencascade/AIS_DisplayMode.hxx
// ./opencascade/AIS_SequenceOfInteractive.hxx
// ./opencascade/AIS_KindOfUnit.hxx
// ./opencascade/AIS_StandardDatum.hxx
// ./opencascade/AIS_CameraFrustum.hxx

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<SelectMgr_EntityOwner> >(m,"AIS_NListOfEntityOwner");  
    register_template_NCollection_Map<opencascade::handle<AIS_InteractiveObject>, TColStd_MapTransientHasher>(m,"AIS_MapOfInteractive");  
    register_template_NCollection_DataMap<Standard_Integer, AIS_ListOfInteractive, TColStd_MapIntegerHasher>(m,"AIS_DataMapofIntegerListOfinteractive");  
    register_template_NCollection_List<opencascade::handle<AIS_InteractiveObject> >(m,"AIS_ListOfInteractive");  
    register_template_NCollection_DataMap<unsigned int, AIS_MouseGesture>(m,"AIS_MouseGestureMap");  
    register_template_NCollection_Sequence<opencascade::handle<AIS_Relation> >(m,"AIS_SequenceOfDimension");  
    register_template_NCollection_Sequence<opencascade::handle<AIS_InteractiveObject> >(m,"AIS_SequenceOfInteractive");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
