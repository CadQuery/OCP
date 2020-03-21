
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <Prs3d_Drawer.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Prs3d_Projector.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <Prs3d_Drawer.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <V3d_Viewer.hxx>

// module includes
#include <PrsMgr_ListOfPresentableObjects.hxx>
#include <PrsMgr_ListOfPresentations.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_Presentation3d.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <PrsMgr_Presentations.hxx>
#include <PrsMgr_TypeOfPresentation3d.hxx>

// template related includes
// ./opencascade/PrsMgr_Presentations.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/PrsMgr_ListOfPresentations.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_PrsMgr(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("PrsMgr"));


//Python trampoline classes
    class Py_PrsMgr_PresentableObject : public PrsMgr_PresentableObject{
    public:
        using PrsMgr_PresentableObject::PrsMgr_PresentableObject;


        // public pure virtual


        // protected pure virtual
        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };


        // private pure virtual

    };

// classes


    static_cast<py::class_<PrsMgr_PresentableObject ,opencascade::handle<PrsMgr_PresentableObject>,Py_PrsMgr_PresentableObject , Standard_Transient>>(m.attr("PrsMgr_PresentableObject"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::DynamicType),
             R"#(None)#" )
        .def("Presentations",
             (PrsMgr_Presentations & (PrsMgr_PresentableObject::*)() ) static_cast<PrsMgr_Presentations & (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::Presentations),
             R"#(Return presentations.)#" )
        .def("ZLayer",
             (Graphic3d_ZLayerId (PrsMgr_PresentableObject::*)() const) static_cast<Graphic3d_ZLayerId (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::ZLayer),
             R"#(Get ID of Z layer for main presentation.)#" )
        .def("SetZLayer",
             (void (PrsMgr_PresentableObject::*)( const Graphic3d_ZLayerId ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Graphic3d_ZLayerId ) >(&PrsMgr_PresentableObject::SetZLayer),
             R"#(Set Z layer ID and update all presentations of the presentable object. The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.)#"  , py::arg("theLayerId"))
        .def("IsMutable",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::IsMutable),
             R"#(Returns true if object has mutable nature (content or location are be changed regularly). Mutable object will be managed in different way than static onces (another optimizations).)#" )
        .def("SetMutable",
             (void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) >(&PrsMgr_PresentableObject::SetMutable),
             R"#(Sets if the object has mutable nature (content or location will be changed regularly). This method should be called before object displaying to take effect.)#"  , py::arg("theIsMutable"))
        .def("HasDisplayMode",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasDisplayMode),
             R"#(Returns true if the Interactive Object has display mode setting overriding global setting (within Interactive Context).)#" )
        .def("DisplayMode",
             (Standard_Integer (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Integer (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::DisplayMode),
             R"#(Returns the display mode setting of the Interactive Object. The range of supported display mode indexes should be specified within object definition and filtered by AccepDisplayMode().)#" )
        .def("SetDisplayMode",
             (void (PrsMgr_PresentableObject::*)( const Standard_Integer ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Integer ) >(&PrsMgr_PresentableObject::SetDisplayMode),
             R"#(Sets the display mode for the interactive object. An object can have its own temporary display mode, which is different from that proposed by the interactive context.)#"  , py::arg("theMode"))
        .def("UnsetDisplayMode",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetDisplayMode),
             R"#(Removes display mode settings from the interactive object.)#" )
        .def("HasHilightMode",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasHilightMode),
             R"#(Returns true if the Interactive Object is in highlight mode.)#" )
        .def("HilightMode",
             (Standard_Integer (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Integer (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HilightMode),
             R"#(Returns highlight display mode. This is obsolete method for backward compatibility - use ::HilightAttributes() and ::DynamicHilightAttributes() instead.)#" )
        .def("SetHilightMode",
             (void (PrsMgr_PresentableObject::*)( const Standard_Integer ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Integer ) >(&PrsMgr_PresentableObject::SetHilightMode),
             R"#(Sets highlight display mode. This is obsolete method for backward compatibility - use ::HilightAttributes() and ::DynamicHilightAttributes() instead.)#"  , py::arg("theMode"))
        .def("UnsetHilightMode",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetHilightMode),
             R"#(Unsets highlight display mode.)#" )
        .def("AcceptDisplayMode",
             (Standard_Boolean (PrsMgr_PresentableObject::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)( const Standard_Integer ) const>(&PrsMgr_PresentableObject::AcceptDisplayMode),
             R"#(Returns true if the class of objects accepts specified display mode index. The interactive context can have a default mode of representation for the set of Interactive Objects. This mode may not be accepted by a given class of objects. Consequently, this virtual method allowing us to get information about the class in question must be implemented. At least one display mode index should be accepted by this method. Although subclass can leave default implementation, it is highly desired defining exact list of supported modes instead, which is usually an enumeration for one object or objects class sharing similar list of display modes.)#"  , py::arg("theMode"))
        .def("DefaultDisplayMode",
             (Standard_Integer (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Integer (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::DefaultDisplayMode),
             R"#(Returns the default display mode.)#" )
        .def("ToBeUpdated",
             (Standard_Boolean (PrsMgr_PresentableObject::*)( Standard_Boolean ) const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)( Standard_Boolean ) const>(&PrsMgr_PresentableObject::ToBeUpdated),
             R"#(Returns TRUE if any active presentation has invalidation flag.)#"  , py::arg("theToIncludeHidden")=static_cast<Standard_Boolean>(Standard_False))
        .def("SetToUpdate",
             (void (PrsMgr_PresentableObject::*)( Standard_Integer ) ) static_cast<void (PrsMgr_PresentableObject::*)( Standard_Integer ) >(&PrsMgr_PresentableObject::SetToUpdate),
             R"#(Flags presentation to be updated; UpdatePresentations() will recompute these presentations.)#"  , py::arg("theMode"))
        .def("SetToUpdate",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::SetToUpdate),
             R"#(flags all the Presentations to be Updated.)#" )
        .def("IsInfinite",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::IsInfinite),
             R"#(Returns true if the interactive object is infinite; FALSE by default. This flag affects various operations operating on bounding box of graphic presentations of this object. For instance, infinite objects are not taken in account for View FitAll. This does not necessarily means that object is actually infinite, auxiliary objects might be also marked with this flag to achieve desired behavior.)#" )
        .def("SetInfiniteState",
             (void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) >(&PrsMgr_PresentableObject::SetInfiniteState),
             R"#(Sets if object should be considered as infinite.)#"  , py::arg("theFlag")=static_cast<const Standard_Boolean>(Standard_True))
        .def("TypeOfPresentation3d",
             (PrsMgr_TypeOfPresentation3d (PrsMgr_PresentableObject::*)() const) static_cast<PrsMgr_TypeOfPresentation3d (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::TypeOfPresentation3d),
             R"#(Returns information on whether the object accepts display in HLR mode or not.)#" )
        .def("SetTypeOfPresentation",
             (void (PrsMgr_PresentableObject::*)( const PrsMgr_TypeOfPresentation3d ) ) static_cast<void (PrsMgr_PresentableObject::*)( const PrsMgr_TypeOfPresentation3d ) >(&PrsMgr_PresentableObject::SetTypeOfPresentation),
             R"#(Set type of presentation.)#"  , py::arg("theType"))
        .def("Attributes",
             (const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Attributes),
             R"#(Returns the attributes settings.)#" )
        .def("SetAttributes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&PrsMgr_PresentableObject::SetAttributes),
             R"#(Initializes the drawing tool theDrawer.)#"  , py::arg("theDrawer"))
        .def("HilightAttributes",
             (const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HilightAttributes),
             R"#(Returns the hilight attributes settings. When not NULL, overrides both Prs3d_TypeOfHighlight_LocalSelected and Prs3d_TypeOfHighlight_Selected defined within AIS_InteractiveContext.)#" )
        .def("SetHilightAttributes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&PrsMgr_PresentableObject::SetHilightAttributes),
             R"#(Initializes the hilight drawing tool theDrawer.)#"  , py::arg("theDrawer"))
        .def("DynamicHilightAttributes",
             (const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::DynamicHilightAttributes),
             R"#(Returns the hilight attributes settings. When not NULL, overrides both Prs3d_TypeOfHighlight_LocalDynamic and Prs3d_TypeOfHighlight_Dynamic defined within AIS_InteractiveContext.)#" )
        .def("SetDynamicHilightAttributes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&PrsMgr_PresentableObject::SetDynamicHilightAttributes),
             R"#(Initializes the dynamic hilight drawing tool.)#"  , py::arg("theDrawer"))
        .def("UnsetHilightAttributes",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetHilightAttributes),
             R"#(Clears settings provided by the hilight drawing tool theDrawer.)#" )
        .def("SynchronizeAspects",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::SynchronizeAspects),
             R"#(Synchronize presentation aspects after their modification.)#" )
        .def("TransformPersistence",
             (const opencascade::handle<Graphic3d_TransformPers> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Graphic3d_TransformPers> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::TransformPersistence),
             R"#(Returns Transformation Persistence defining a special Local Coordinate system where this presentable object is located or NULL handle if not defined. Position of the object having Transformation Persistence is mutable and depends on camera position. The same applies to a bounding box of the object.)#" )
        .def("SetTransformPersistence",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_TransformPers> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_TransformPers> & ) >(&PrsMgr_PresentableObject::SetTransformPersistence),
             R"#(Sets up Transform Persistence defining a special Local Coordinate system where this object should be located. Note that management of Transform Persistence object is more expensive than of the normal one, because it requires its position being recomputed basing on camera position within each draw call / traverse.)#"  , py::arg("theTrsfPers"))
        .def("LocalTransformationGeom",
             (const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::LocalTransformationGeom),
             R"#(Return the local transformation. Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#" )
        .def("SetLocalTransformation",
             (void (PrsMgr_PresentableObject::*)( const gp_Trsf & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const gp_Trsf & ) >(&PrsMgr_PresentableObject::SetLocalTransformation),
             R"#(Sets local transformation to theTransformation. Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#"  , py::arg("theTrsf"))
        .def("SetLocalTransformation",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Geom_Transformation> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Geom_Transformation> & ) >(&PrsMgr_PresentableObject::SetLocalTransformation),
             R"#(Sets local transformation to theTransformation. Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#"  , py::arg("theTrsf"))
        .def("HasTransformation",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasTransformation),
             R"#(Returns true if object has a transformation that is different from the identity.)#" )
        .def("TransformationGeom",
             (const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::TransformationGeom),
             R"#(Return the transformation taking into account transformation of parent object(s). Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#" )
        .def("LocalTransformation",
             (const gp_Trsf & (PrsMgr_PresentableObject::*)() const) static_cast<const gp_Trsf & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::LocalTransformation),
             R"#(Return the local transformation. Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#" )
        .def("Transformation",
             (const gp_Trsf & (PrsMgr_PresentableObject::*)() const) static_cast<const gp_Trsf & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Transformation),
             R"#(Return the transformation taking into account transformation of parent object(s). Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#" )
        .def("InversedTransformation",
             (const gp_GTrsf & (PrsMgr_PresentableObject::*)() const) static_cast<const gp_GTrsf & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::InversedTransformation),
             R"#(Return inversed transformation.)#" )
        .def("CombinedParentTransformation",
             (const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::CombinedParentTransformation),
             R"#(Return combined parent transformation.)#" )
        .def("ResetTransformation",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::ResetTransformation),
             R"#(resets local transformation to identity.)#" )
        .def("UpdateTransformation",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UpdateTransformation),
             R"#(Updates final transformation (parent + local) of presentable object and its presentations.)#" )
        .def("ClipPlanes",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::ClipPlanes),
             R"#(Get clip planes.)#" )
        .def("SetClipPlanes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & ) >(&PrsMgr_PresentableObject::SetClipPlanes),
             R"#(Set clip planes for graphical clipping for all display mode presentations. The composition of clip planes truncates the rendering space to convex volume. Please be aware that number of supported clip plane is limited. The planes which exceed the limit are ignored. Besides of this, some planes can be already set in view where the object is shown: the number of these planes should be subtracted from limit to predict the maximum possible number of object clipping planes.)#"  , py::arg("thePlanes"))
        .def("AddClipPlane",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) >(&PrsMgr_PresentableObject::AddClipPlane),
             R"#(Adds clip plane for graphical clipping for all display mode presentations. The composition of clip planes truncates the rendering space to convex volume. Please be aware that number of supported clip plane is limited. The planes which exceed the limit are ignored. Besides of this, some planes can be already set in view where the object is shown: the number of these planes should be subtracted from limit to predict the maximum possible number of object clipping planes.)#"  , py::arg("thePlane"))
        .def("RemoveClipPlane",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> & ) >(&PrsMgr_PresentableObject::RemoveClipPlane),
             R"#(Removes previously added clip plane.)#"  , py::arg("thePlane"))
        .def("Parent",
             (PrsMgr_PresentableObject * (PrsMgr_PresentableObject::*)() const) static_cast<PrsMgr_PresentableObject * (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Parent),
             R"#(Returns parent of current object in scene hierarchy.)#" )
        .def("Children",
             (const PrsMgr_ListOfPresentableObjects & (PrsMgr_PresentableObject::*)() const) static_cast<const PrsMgr_ListOfPresentableObjects & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Children),
             R"#(Returns children of the current object.)#" )
        .def("AddChild",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) >(&PrsMgr_PresentableObject::AddChild),
             R"#(Makes theObject child of current object in scene hierarchy.)#"  , py::arg("theObject"))
        .def("AddChildWithCurrentTransformation",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) >(&PrsMgr_PresentableObject::AddChildWithCurrentTransformation),
             R"#(Makes theObject child of current object in scene hierarchy with keeping the current global transformation So the object keeps the same position/orientation in the global CS.)#"  , py::arg("theObject"))
        .def("RemoveChild",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) >(&PrsMgr_PresentableObject::RemoveChild),
             R"#(Removes theObject from children of current object in scene hierarchy.)#"  , py::arg("theObject"))
        .def("RemoveChildWithRestoreTransformation",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) >(&PrsMgr_PresentableObject::RemoveChildWithRestoreTransformation),
             R"#(Removes theObject from children of current object in scene hierarchy with keeping the current global transformation. So the object keeps the same position/orientation in the global CS.)#"  , py::arg("theObject"))
        .def("HasOwnPresentations",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasOwnPresentations),
             R"#(Returns true if object should have own presentations.)#" )
        .def("BoundingBox",
             (void (PrsMgr_PresentableObject::*)( Bnd_Box & ) ) static_cast<void (PrsMgr_PresentableObject::*)( Bnd_Box & ) >(&PrsMgr_PresentableObject::BoundingBox),
             R"#(Returns bounding box of object correspondingly to its current display mode. This method requires presentation to be already computed, since it relies on bounding box of presentation structures, which are supposed to be same/close amongst different display modes of this object.)#"  , py::arg("theBndBox"))
        .def("SetIsoOnTriangulation",
             (void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) >(&PrsMgr_PresentableObject::SetIsoOnTriangulation),
             R"#(Enables or disables on-triangulation build of isolines according to the flag given.)#"  , py::arg("theIsEnabled"))
        .def("CurrentFacingModel",
             (Aspect_TypeOfFacingModel (PrsMgr_PresentableObject::*)() const) static_cast<Aspect_TypeOfFacingModel (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::CurrentFacingModel),
             R"#(Returns the current facing model which is in effect.)#" )
        .def("SetCurrentFacingModel",
             (void (PrsMgr_PresentableObject::*)( const Aspect_TypeOfFacingModel ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Aspect_TypeOfFacingModel ) >(&PrsMgr_PresentableObject::SetCurrentFacingModel),
             R"#(change the current facing model apply on polygons for SetColor(), SetTransparency(), SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE. This mean that attributes is applying both on the front and back face.)#"  , py::arg("theModel")=static_cast<const Aspect_TypeOfFacingModel>(Aspect_TOFM_BOTH_SIDE))
        .def("HasColor",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasColor),
             R"#(Returns true if the Interactive Object has color.)#" )
        .def("Color",
             (void (PrsMgr_PresentableObject::*)( Quantity_Color & ) const) static_cast<void (PrsMgr_PresentableObject::*)( Quantity_Color & ) const>(&PrsMgr_PresentableObject::Color),
             R"#(Returns the color setting of the Interactive Object.)#"  , py::arg("theColor"))
        .def("SetColor",
             (void (PrsMgr_PresentableObject::*)( const Quantity_Color & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Quantity_Color & ) >(&PrsMgr_PresentableObject::SetColor),
             R"#(Only the interactive object knowns which Drawer attribute is affected by the color, if any (ex: for a wire,it's the wireaspect field of the drawer, but for a vertex, only the point aspect field is affected by the color). WARNING : Do not forget to set the corresponding fields here (hasOwnColor and myDrawer->SetColor()))#"  , py::arg("theColor"))
        .def("UnsetColor",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetColor),
             R"#(Removes color settings. Only the Interactive Object knows which Drawer attribute is affected by the color setting. For a wire, for example, wire aspect is the attribute affected. For a vertex, however, only point aspect is affected by the color setting.)#" )
        .def("HasWidth",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasWidth),
             R"#(Returns true if the Interactive Object has width.)#" )
        .def("Width",
             (Standard_Real (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Real (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Width),
             R"#(Returns the width setting of the Interactive Object.)#" )
        .def("SetWidth",
             (void (PrsMgr_PresentableObject::*)( const Standard_Real ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Real ) >(&PrsMgr_PresentableObject::SetWidth),
             R"#(Allows you to provide the setting aValue for width. Only the Interactive Object knows which Drawer attribute is affected by the width setting.)#"  , py::arg("theWidth"))
        .def("UnsetWidth",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetWidth),
             R"#(Reset width to default value.)#" )
        .def("HasMaterial",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasMaterial),
             R"#(Returns true if the Interactive Object has a setting for material.)#" )
        .def("Material",
             (Graphic3d_NameOfMaterial (PrsMgr_PresentableObject::*)() const) static_cast<Graphic3d_NameOfMaterial (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Material),
             R"#(Returns the current material setting as enumeration value.)#" )
        .def("SetMaterial",
             (void (PrsMgr_PresentableObject::*)( const Graphic3d_MaterialAspect & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Graphic3d_MaterialAspect & ) >(&PrsMgr_PresentableObject::SetMaterial),
             R"#(Sets the material aMat defining this display attribute for the interactive object. Material aspect determines shading aspect, color and transparency of visible entities.)#"  , py::arg("aName"))
        .def("UnsetMaterial",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetMaterial),
             R"#(Removes the setting for material.)#" )
        .def("IsTransparent",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::IsTransparent),
             R"#(Returns true if there is a transparency setting.)#" )
        .def("Transparency",
             (Standard_Real (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Real (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Transparency),
             R"#(Returns the transparency setting. This will be between 0.0 and 1.0. At 0.0 an object will be totally opaque, and at 1.0, fully transparent.)#" )
        .def("SetTransparency",
             (void (PrsMgr_PresentableObject::*)( const Standard_Real ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Real ) >(&PrsMgr_PresentableObject::SetTransparency),
             R"#(Attributes a setting aValue for transparency. The transparency value should be between 0.0 and 1.0. At 0.0 an object will be totally opaque, and at 1.0, fully transparent. Warning At a value of 1.0, there may be nothing visible.)#"  , py::arg("aValue")=static_cast<const Standard_Real>(0.6))
        .def("UnsetTransparency",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetTransparency),
             R"#(Removes the transparency setting. The object is opaque by default.)#" )
        .def("HasPolygonOffsets",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasPolygonOffsets),
             R"#(Returns Standard_True if <myDrawer> has non-null shading aspect)#" )
        .def("SetPolygonOffsets",
             (void (PrsMgr_PresentableObject::*)( const Standard_Integer , const Standard_ShortReal , const Standard_ShortReal ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Integer , const Standard_ShortReal , const Standard_ShortReal ) >(&PrsMgr_PresentableObject::SetPolygonOffsets),
             R"#(Sets up polygon offsets for this object.)#"  , py::arg("aMode"),  py::arg("aFactor")=static_cast<const Standard_ShortReal>(1.0),  py::arg("aUnits")=static_cast<const Standard_ShortReal>(0.0))
        .def("UnsetAttributes",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetAttributes),
             R"#(Clears settings provided by the drawing tool aDrawer.)#" )
        .def("DumpJson",
             (void (PrsMgr_PresentableObject::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (PrsMgr_PresentableObject::*)( std::ostream & , const Standard_Integer ) const>(&PrsMgr_PresentableObject::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("ToBeUpdated",
             (void (PrsMgr_PresentableObject::*)( NCollection_List<Standard_Integer> & ) const) static_cast<void (PrsMgr_PresentableObject::*)( NCollection_List<Standard_Integer> & ) const>(&PrsMgr_PresentableObject::ToBeUpdated),
             R"#(gives the list of modes which are flagged "to be updated".)#"  , py::arg("ListOfMode"))
        .def("SetClipPlanes",
             (void (PrsMgr_PresentableObject::*)( const Graphic3d_SequenceOfHClipPlane & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Graphic3d_SequenceOfHClipPlane & ) >(&PrsMgr_PresentableObject::SetClipPlanes),
             R"#(None)#"  , py::arg("thePlanes"))
        .def("SetTransformPersistence",
             (void (PrsMgr_PresentableObject::*)( const Graphic3d_TransModeFlags , const gp_Pnt & ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Graphic3d_TransModeFlags , const gp_Pnt & ) >(&PrsMgr_PresentableObject::SetTransformPersistence),
             R"#(Sets up Transform Persistence Mode for this object. This function used to lock in object position, rotation and / or zooming relative to camera position. Object will be drawn in the origin setted by thePoint parameter (except Graphic3d_TMF_TriedronPers flag - see description later). theMode should be: - Graphic3d_TMF_None - no persistence attributes (reset); - Graphic3d_TMF_ZoomPers - object doesn't resize; - Graphic3d_TMF_RotatePers - object doesn't rotate; - Graphic3d_TMF_ZoomRotatePers - object doesn't resize and rotate; - Graphic3d_TMF_RotatePers - object doesn't rotate; - Graphic3d_TMF_TriedronPers - object behaves like trihedron. If Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d persistence mode selected thePoint coordinates X and Y means: - X = 0.0, Y = 0.0 - center of view window; - X > 0.0, Y > 0.0 - right upper corner of view window; - X > 0.0, Y < 0.0 - right lower corner of view window; - X < 0.0, Y > 0.0 - left upper corner of view window; - X < 0.0, Y < 0.0 - left lower corner of view window. And Z coordinate defines the gap from border of view window (except center position).)#"  , py::arg("theMode"),  py::arg("thePoint")=static_cast<const gp_Pnt &>(gp_Pnt ( 0.0 , 0.0 , 0.0 )))
        .def("GetTransformPersistenceMode",
             (Graphic3d_TransModeFlags (PrsMgr_PresentableObject::*)() const) static_cast<Graphic3d_TransModeFlags (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::GetTransformPersistenceMode),
             R"#(Gets Transform Persistence Mode for this object)#" )
        .def("GetTransformPersistencePoint",
             (gp_Pnt (PrsMgr_PresentableObject::*)() const) static_cast<gp_Pnt (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::GetTransformPersistencePoint),
             R"#(Gets point of transform persistence for this object)#" )
        .def("ToPropagateVisualState",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::ToPropagateVisualState),
             R"#(Get value of the flag "propagate visual state" It means that the display/erase/color visual state is propagated automatically to all children; by default, the flag is true)#" )
        .def("SetPropagateVisualState",
             (void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Boolean ) >(&PrsMgr_PresentableObject::SetPropagateVisualState),
             R"#(Change the value of the flag "propagate visual state")#"  , py::arg("theFlag"))
    // methods using call by reference i.s.o. return
        .def("PolygonOffsets",
             []( PrsMgr_PresentableObject &self , Standard_ShortReal & aFactor,Standard_ShortReal & aUnits ){ Standard_Integer  aMode; self.PolygonOffsets(aMode,aFactor,aUnits); return std::make_tuple(aMode); },
             R"#(Retrieves current polygon offsets settings from <myDrawer>.)#"  , py::arg("aFactor"),  py::arg("aUnits"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PrsMgr_PresentableObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PrsMgr_PresentableObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PrsMgr_Presentation ,opencascade::handle<PrsMgr_Presentation> , Graphic3d_Structure>>(m.attr("PrsMgr_Presentation"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PrsMgr_Presentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::DynamicType),
             R"#(None)#" )
        .def("Presentation",
             (Prs3d_Presentation * (PrsMgr_Presentation::*)() ) static_cast<Prs3d_Presentation * (PrsMgr_Presentation::*)() >(&PrsMgr_Presentation::Presentation),
             R"#(None)#" )
        .def("PresentationManager",
             (const opencascade::handle<PrsMgr_PresentationManager> & (PrsMgr_Presentation::*)() const) static_cast<const opencascade::handle<PrsMgr_PresentationManager> & (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::PresentationManager),
             R"#(returns the PresentationManager in which the presentation has been created.)#" )
        .def("SetUpdateStatus",
             (void (PrsMgr_Presentation::*)( const Standard_Boolean ) ) static_cast<void (PrsMgr_Presentation::*)( const Standard_Boolean ) >(&PrsMgr_Presentation::SetUpdateStatus),
             R"#(None)#"  , py::arg("theUpdateStatus"))
        .def("MustBeUpdated",
             (Standard_Boolean (PrsMgr_Presentation::*)() const) static_cast<Standard_Boolean (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::MustBeUpdated),
             R"#(None)#" )
        .def("Mode",
             (Standard_Integer (PrsMgr_Presentation::*)() const) static_cast<Standard_Integer (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::Mode),
             R"#(Return display mode index.)#" )
        .def("Display",
             (void (PrsMgr_Presentation::*)() ) static_cast<void (PrsMgr_Presentation::*)() >(&PrsMgr_Presentation::Display),
             R"#(Display structure.)#" )
        .def("Erase",
             (void (PrsMgr_Presentation::*)() ) static_cast<void (PrsMgr_Presentation::*)() >(&PrsMgr_Presentation::Erase),
             R"#(Remove structure.)#" )
        .def("Highlight",
             (void (PrsMgr_Presentation::*)( const opencascade::handle<Prs3d_Drawer> & ) ) static_cast<void (PrsMgr_Presentation::*)( const opencascade::handle<Prs3d_Drawer> & ) >(&PrsMgr_Presentation::Highlight),
             R"#(Highlight structure.)#"  , py::arg("theStyle"))
        .def("Unhighlight",
             (void (PrsMgr_Presentation::*)() ) static_cast<void (PrsMgr_Presentation::*)() >(&PrsMgr_Presentation::Unhighlight),
             R"#(Unhighlight structure.)#" )
        .def("IsDisplayed",
             (Standard_Boolean (PrsMgr_Presentation::*)() const) static_cast<Standard_Boolean (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::IsDisplayed),
             R"#(Return TRUE if structure has been displayed and in no hidden state.)#" )
        .def("Clear",
             (void (PrsMgr_Presentation::*)( const Standard_Boolean ) ) static_cast<void (PrsMgr_Presentation::*)( const Standard_Boolean ) >(&PrsMgr_Presentation::Clear),
             R"#(removes the whole content of the presentation. Does not remove the other connected presentations.)#"  , py::arg("theWithDestruction")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Compute",
             (void (PrsMgr_Presentation::*)() ) static_cast<void (PrsMgr_Presentation::*)() >(&PrsMgr_Presentation::Compute),
             R"#(Compute structure using presentation manager.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PrsMgr_Presentation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PrsMgr_Presentation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<PrsMgr_PresentationManager ,opencascade::handle<PrsMgr_PresentationManager> , Standard_Transient>>(m.attr("PrsMgr_PresentationManager"))
    // constructors
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> & >()  , py::arg("theStructureManager") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PrsMgr_PresentationManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PrsMgr_PresentationManager::*)() const>(&PrsMgr_PresentationManager::DynamicType),
             R"#(None)#" )
        .def("Display",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) >(&PrsMgr_PresentationManager::Display),
             R"#(Displays the presentation of the object in the given Presentation manager with the given mode. The mode should be enumerated by the object which inherits PresentableObject.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Erase",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) >(&PrsMgr_PresentationManager::Erase),
             R"#(erases the presentation of the object in the given Presentation manager with the given mode. If is -1, then erases all presentations of the object.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) >(&PrsMgr_PresentationManager::Clear),
             R"#(Clears the presentation of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("SetVisibility",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Boolean ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Boolean ) >(&PrsMgr_PresentationManager::SetVisibility),
             R"#(Sets the visibility of presentable object.)#"  , py::arg("thePrsObject"),  py::arg("theMode"),  py::arg("theValue"))
        .def("Unhighlight",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) >(&PrsMgr_PresentationManager::Unhighlight),
             R"#(Removes highlighting from the presentation of the presentable object.)#"  , py::arg("thePrsObject"))
        .def("Unhighlight",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) >(&PrsMgr_PresentationManager::Unhighlight),
             R"#(None)#"  , py::arg("thePrsObject"),  py::arg("theMode"))
        .def("SetDisplayPriority",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Integer ) const) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Integer ) const>(&PrsMgr_PresentationManager::SetDisplayPriority),
             R"#(Sets the display priority theNewPrior of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode"),  py::arg("theNewPrior"))
        .def("DisplayPriority",
             (Standard_Integer (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const) static_cast<Standard_Integer (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const>(&PrsMgr_PresentationManager::DisplayPriority),
             R"#(Returns the display priority of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode"))
        .def("SetZLayer",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Graphic3d_ZLayerId ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Graphic3d_ZLayerId ) >(&PrsMgr_PresentationManager::SetZLayer),
             R"#(Set Z layer ID for all presentations of the object.)#"  , py::arg("thePrsObject"),  py::arg("theLayerId"))
        .def("GetZLayer",
             (Graphic3d_ZLayerId (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) const) static_cast<Graphic3d_ZLayerId (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ) const>(&PrsMgr_PresentationManager::GetZLayer),
             R"#(Get Z layer ID assigned to all presentations of the object. Method returns -1 value if object has no presentations and is impossible to get layer index.)#"  , py::arg("thePrsObject"))
        .def("IsDisplayed",
             (Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const>(&PrsMgr_PresentationManager::IsDisplayed),
             R"#(None)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("IsHighlighted",
             (Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const>(&PrsMgr_PresentationManager::IsHighlighted),
             R"#(Returns true if the presentation of the presentable object thePrsObject in this framework with the display mode theMode is highlighted.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Update",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const>(&PrsMgr_PresentationManager::Update),
             R"#(Updates the presentation of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("BeginImmediateDraw",
             (void (PrsMgr_PresentationManager::*)() ) static_cast<void (PrsMgr_PresentationManager::*)() >(&PrsMgr_PresentationManager::BeginImmediateDraw),
             R"#(Resets the transient list of presentations previously displayed in immediate mode and begins accumulation of new list by following AddToImmediateList()/Color()/Highlight() calls.)#" )
        .def("ClearImmediateDraw",
             (void (PrsMgr_PresentationManager::*)() ) static_cast<void (PrsMgr_PresentationManager::*)() >(&PrsMgr_PresentationManager::ClearImmediateDraw),
             R"#(Resets the transient list of presentations previously displayed in immediate mode.)#" )
        .def("AddToImmediateList",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<Prs3d_Presentation> & ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<Prs3d_Presentation> & ) >(&PrsMgr_PresentationManager::AddToImmediateList),
             R"#(Stores thePrs in the transient list of presentations to be displayed in immediate mode. Will be taken in account in EndImmediateDraw method.)#"  , py::arg("thePrs"))
        .def("EndImmediateDraw",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & ) >(&PrsMgr_PresentationManager::EndImmediateDraw),
             R"#(Allows rapid drawing of the each view in theViewer by avoiding an update of the whole background.)#"  , py::arg("theViewer"))
        .def("RedrawImmediate",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & ) >(&PrsMgr_PresentationManager::RedrawImmediate),
             R"#(Clears and redisplays immediate structures of the viewer taking into account its affinity.)#"  , py::arg("theViewer"))
        .def("IsImmediateModeOn",
             (Standard_Boolean (PrsMgr_PresentationManager::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)() const>(&PrsMgr_PresentationManager::IsImmediateModeOn),
             R"#(Returns true if Presentation Manager is accumulating transient list of presentations to be displayed in immediate mode.)#" )
        .def("Color",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer , const opencascade::handle<PrsMgr_PresentableObject> & , const Graphic3d_ZLayerId ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer , const opencascade::handle<PrsMgr_PresentableObject> & , const Graphic3d_ZLayerId ) >(&PrsMgr_PresentationManager::Color),
             R"#(Highlights the graphic object thePrsObject in the color theColor. thePrsObject has the display mode theMode; this has the default value of 0, that is, the wireframe display mode.)#"  , py::arg("thePrsObject"),  py::arg("theStyle"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theSelObj")=static_cast<const opencascade::handle<PrsMgr_PresentableObject> &>(NULL),  py::arg("theImmediateStructLayerId")=static_cast<const Graphic3d_ZLayerId>(Graphic3d_ZLayerId_Topmost))
        .def("Connect",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Integer ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Integer ) >(&PrsMgr_PresentationManager::Connect),
             R"#(None)#"  , py::arg("thePrsObject"),  py::arg("theOtherObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theOtherMode")=static_cast<const Standard_Integer>(0))
        .def("Transform",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const opencascade::handle<Geom_Transformation> & , const Standard_Integer ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const opencascade::handle<Geom_Transformation> & , const Standard_Integer ) >(&PrsMgr_PresentationManager::Transform),
             R"#(Sets the transformation theTransformation for the presentable object thePrsObject. thePrsObject has the display mode theMode; this has the default value of 0, that is, the wireframe display mode.)#"  , py::arg("thePrsObject"),  py::arg("theTransformation"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("StructureManager",
             (const opencascade::handle<Graphic3d_StructureManager> & (PrsMgr_PresentationManager::*)() const) static_cast<const opencascade::handle<Graphic3d_StructureManager> & (PrsMgr_PresentationManager::*)() const>(&PrsMgr_PresentationManager::StructureManager),
             R"#(Returns the structure manager.)#" )
        .def("HasPresentation",
             (Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer ) const>(&PrsMgr_PresentationManager::HasPresentation),
             R"#(Returns true if there is a presentation of the presentable object thePrsObject in this framework, thePrsObject having the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Presentation",
             (opencascade::handle<PrsMgr_Presentation> (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Boolean , const opencascade::handle<PrsMgr_PresentableObject> & ) const) static_cast<opencascade::handle<PrsMgr_Presentation> (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const Standard_Boolean , const opencascade::handle<PrsMgr_PresentableObject> & ) const>(&PrsMgr_PresentationManager::Presentation),
             R"#(Returns the presentation Presentation of the presentable object thePrsObject in this framework. When theToCreate is true - automatically creates presentation for specified mode when not exist. Optional argument theSelObj specifies parent decomposed object to inherit its view affinity.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theToCreate")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theSelObj")=static_cast<const opencascade::handle<PrsMgr_PresentableObject> &>(NULL))
        .def("UpdateHighlightTrsf",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & , const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const opencascade::handle<PrsMgr_PresentableObject> & ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & , const opencascade::handle<PrsMgr_PresentableObject> & , const Standard_Integer , const opencascade::handle<PrsMgr_PresentableObject> & ) >(&PrsMgr_PresentationManager::UpdateHighlightTrsf),
             R"#(Allows to apply location transformation to shadow highlight presentation immediately.)#"  , py::arg("theViewer"),  py::arg("theObj"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theSelObj")=static_cast<const opencascade::handle<PrsMgr_PresentableObject> &>(NULL))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PrsMgr_PresentationManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PrsMgr_PresentationManager::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/PrsMgr_Presentation.hxx
// ./opencascade/PrsMgr_PresentableObject.hxx
// ./opencascade/PrsMgr_Presentation3d.hxx
// ./opencascade/PrsMgr_Presentations.hxx
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
// ./opencascade/PrsMgr_ListOfPresentations.hxx
// ./opencascade/PrsMgr_PresentationManager.hxx
// ./opencascade/PrsMgr_TypeOfPresentation3d.hxx
// ./opencascade/PrsMgr_PresentationManager3d.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<PrsMgr_Presentation> >(m,"PrsMgr_Presentations");
    register_template_NCollection_List<opencascade::handle<PrsMgr_PresentableObject> >(m,"PrsMgr_ListOfPresentableObjects");
    register_template_NCollection_List<opencascade::handle<Prs3d_Presentation> >(m,"PrsMgr_ListOfPresentations");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
