
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <Prs3d_Drawer.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <PrsMgr_Presentation.hxx>
#include <V3d_Viewer.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_Prs.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <Quantity_Color.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_Drawer.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Prs3d_Projector.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_DataStructureManager.hxx>

// module includes
#include <PrsMgr_ListOfPresentableObjects.hxx>
#include <PrsMgr_ListOfPresentations.hxx>
#include <PrsMgr_ModedPresentation.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <PrsMgr_PresentableObjectPointer.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_Presentation3d.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <PrsMgr_PresentationPointer.hxx>
#include <PrsMgr_Presentations.hxx>
#include <PrsMgr_Prs.hxx>
#include <PrsMgr_TypeOfPresentation3d.hxx>

// template related includes
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
#include "NCollection.hxx"
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
#include "NCollection.hxx"
// ./opencascade/PrsMgr_ListOfPresentations.hxx
#include "NCollection.hxx"
// ./opencascade/PrsMgr_Presentations.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_PrsMgr(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("PrsMgr"));


//Python trampoline classes

// classes


    static_cast<py::class_<PrsMgr_ModedPresentation , shared_ptr<PrsMgr_ModedPresentation>  >>(m.attr("PrsMgr_ModedPresentation"))
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<PrsMgr_Presentation> &,const Standard_Integer >()  , py::arg("thePrs"),  py::arg("theMode") )
    // methods
        .def("Presentation",
             (const opencascade::handle<PrsMgr_Presentation> & (PrsMgr_ModedPresentation::*)() const) static_cast<const opencascade::handle<PrsMgr_Presentation> & (PrsMgr_ModedPresentation::*)() const>(&PrsMgr_ModedPresentation::Presentation),
             R"#(None)#" )
        .def("Mode",
             (Standard_Integer (PrsMgr_ModedPresentation::*)() const) static_cast<Standard_Integer (PrsMgr_ModedPresentation::*)() const>(&PrsMgr_ModedPresentation::Mode),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<PrsMgr_PresentableObject ,opencascade::handle<PrsMgr_PresentableObject>  , Standard_Transient >>(m.attr("PrsMgr_PresentableObject"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::DynamicType),
             R"#(None)#" )
        .def("Presentations",
             (PrsMgr_Presentations & (PrsMgr_PresentableObject::*)() ) static_cast<PrsMgr_Presentations & (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::Presentations),
             R"#(None)#" )
        .def("TypeOfPresentation3d",
             (PrsMgr_TypeOfPresentation3d (PrsMgr_PresentableObject::*)() const) static_cast<PrsMgr_TypeOfPresentation3d (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::TypeOfPresentation3d),
             R"#(Returns information on whether the object accepts display in HLR mode or not.)#" )
        .def("TransformPersistence",
             (const opencascade::handle<Graphic3d_TransformPers> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Graphic3d_TransformPers> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::TransformPersistence),
             R"#(Returns Transformation Persistence defining a special Local Coordinate system where this presentable object is located or NULL handle if not defined. Position of the object having Transformation Persistence is mutable and depends on camera position. The same applies to a bounding box of the object.)#" )
        .def("SetTransformPersistence",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_TransformPers> &  ) >(&PrsMgr_PresentableObject::SetTransformPersistence),
             R"#(Sets up Transform Persistence defining a special Local Coordinate system where this object should be located. Note that management of Transform Persistence object is more expensive than of the normal one, because it requires its position being recomputed basing on camera position within each draw call / traverse.)#"  , py::arg("theTrsfPers"))
        .def("SetTransformPersistence",
             (void (PrsMgr_PresentableObject::*)( const Graphic3d_TransModeFlags ,  const gp_Pnt &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Graphic3d_TransModeFlags ,  const gp_Pnt &  ) >(&PrsMgr_PresentableObject::SetTransformPersistence),
             R"#(Sets up Transform Persistence Mode for this object. This function used to lock in object position, rotation and / or zooming relative to camera position. Object will be drawn in the origin setted by thePoint parameter (except Graphic3d_TMF_TriedronPers flag - see description later). theMode should be: - Graphic3d_TMF_None - no persistence attributes (reset); - Graphic3d_TMF_ZoomPers - object doesn't resize; - Graphic3d_TMF_RotatePers - object doesn't rotate; - Graphic3d_TMF_ZoomRotatePers - object doesn't resize and rotate; - Graphic3d_TMF_RotatePers - object doesn't rotate; - Graphic3d_TMF_TriedronPers - object behaves like trihedron. If Graphic3d_TMF_TriedronPers or Graphic3d_TMF_2d persistence mode selected thePoint coordinates X and Y means: - X = 0.0, Y = 0.0 - center of view window; - X > 0.0, Y > 0.0 - right upper corner of view window; - X > 0.0, Y < 0.0 - right lower corner of view window; - X < 0.0, Y > 0.0 - left upper corner of view window; - X < 0.0, Y < 0.0 - left lower corner of view window. And Z coordinate defines the gap from border of view window (except center position).)#"  , py::arg("theMode"),  py::arg("thePoint")=static_cast<const gp_Pnt &>(gp_Pnt ( 0.0 , 0.0 , 0.0 )))
        .def("GetTransformPersistenceMode",
             (Graphic3d_TransModeFlags (PrsMgr_PresentableObject::*)() const) static_cast<Graphic3d_TransModeFlags (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::GetTransformPersistenceMode),
             R"#(Gets Transform Persistence Mode for this object)#" )
        .def("GetTransformPersistencePoint",
             (gp_Pnt (PrsMgr_PresentableObject::*)() const) static_cast<gp_Pnt (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::GetTransformPersistencePoint),
             R"#(Gets point of transform persistence for this object)#" )
        .def("SetTypeOfPresentation",
             (void (PrsMgr_PresentableObject::*)( const PrsMgr_TypeOfPresentation3d  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const PrsMgr_TypeOfPresentation3d  ) >(&PrsMgr_PresentableObject::SetTypeOfPresentation),
             R"#(None)#"  , py::arg("aType"))
        .def("SetToUpdate",
             (void (PrsMgr_PresentableObject::*)( const Standard_Integer  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Integer  ) >(&PrsMgr_PresentableObject::SetToUpdate),
             R"#(flags the Prs of mode <AMode> to be Updated. the Update will be done when needed.)#"  , py::arg("aMode"))
        .def("SetToUpdate",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::SetToUpdate),
             R"#(flags all the Presentations to be Updated.)#" )
        .def("ToBeUpdated",
             (void (PrsMgr_PresentableObject::*)( NCollection_List<Standard_Integer> &  ) const) static_cast<void (PrsMgr_PresentableObject::*)( NCollection_List<Standard_Integer> &  ) const>(&PrsMgr_PresentableObject::ToBeUpdated),
             R"#(gives the list of modes which are flagged "to be updated".)#"  , py::arg("ListOfMode"))
        .def("LocalTransformationGeom",
             (const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Geom_Transformation> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::LocalTransformationGeom),
             R"#(Return the local transformation. Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#" )
        .def("SetLocalTransformation",
             (void (PrsMgr_PresentableObject::*)( const gp_Trsf &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const gp_Trsf &  ) >(&PrsMgr_PresentableObject::SetLocalTransformation),
             R"#(Sets local transformation to theTransformation. Note that the local transformation of the object having Transformation Persistence is applied within Local Coordinate system defined by this Persistence.)#"  , py::arg("theTrsf"))
        .def("SetLocalTransformation",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Geom_Transformation> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Geom_Transformation> &  ) >(&PrsMgr_PresentableObject::SetLocalTransformation),
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
             R"#(None)#" )
        .def("ResetTransformation",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::ResetTransformation),
             R"#(resets local transformation to identity.)#" )
        .def("UpdateTransformation",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UpdateTransformation),
             R"#(None)#" )
        .def("UpdateTransformation",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Presentation> &  ) >(&PrsMgr_PresentableObject::UpdateTransformation),
             R"#(None)#"  , py::arg("P"))
        .def("SetZLayer",
             (void (PrsMgr_PresentableObject::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Graphic3d_ZLayerId  ) >(&PrsMgr_PresentableObject::SetZLayer),
             R"#(Set Z layer ID and update all presentations of the presentable object. The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.)#"  , py::arg("theLayerId"))
        .def("ZLayer",
             (Graphic3d_ZLayerId (PrsMgr_PresentableObject::*)() const) static_cast<Graphic3d_ZLayerId (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::ZLayer),
             R"#(Get ID of Z layer.)#" )
        .def("AddClipPlane",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) >(&PrsMgr_PresentableObject::AddClipPlane),
             R"#(Adds clip plane for graphical clipping for all display mode presentations. The composition of clip planes truncates the rendering space to convex volume. Please be aware that number of supported clip plane is limited. The planes which exceed the limit are ignored. Besides of this, some planes can be already set in view where the object is shown: the number of these planes should be substracted from limit to predict the maximum possible number of object clipping planes.)#"  , py::arg("thePlane"))
        .def("RemoveClipPlane",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_ClipPlane> &  ) >(&PrsMgr_PresentableObject::RemoveClipPlane),
             R"#(Removes previously added clip plane.)#"  , py::arg("thePlane"))
        .def("SetClipPlanes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&PrsMgr_PresentableObject::SetClipPlanes),
             R"#(Set clip planes for graphical clipping for all display mode presentations. The composition of clip planes truncates the rendering space to convex volume. Please be aware that number of supported clip plane is limited. The planes which exceed the limit are ignored. Besides of this, some planes can be already set in view where the object is shown: the number of these planes should be subtracted from limit to predict the maximum possible number of object clipping planes.)#"  , py::arg("thePlanes"))
        .def("SetClipPlanes",
             (void (PrsMgr_PresentableObject::*)( const Graphic3d_SequenceOfHClipPlane &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Graphic3d_SequenceOfHClipPlane &  ) >(&PrsMgr_PresentableObject::SetClipPlanes),
             R"#(None)#"  , py::arg("thePlanes"))
        .def("ClipPlanes",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::ClipPlanes),
             R"#(Get clip planes.)#" )
        .def("SetMutable",
             (void (PrsMgr_PresentableObject::*)( const Standard_Boolean  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const Standard_Boolean  ) >(&PrsMgr_PresentableObject::SetMutable),
             R"#(Sets if the object has mutable nature (content or location will be changed regularly). This method should be called before object displaying to take effect.)#"  , py::arg("theIsMutable"))
        .def("IsMutable",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::IsMutable),
             R"#(Returns true if object has mutable nature (content or location are be changed regularly). Mutable object will be managed in different way than static onces (another optimizations).)#" )
        .def("AddChild",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) >(&PrsMgr_PresentableObject::AddChild),
             R"#(Makes theObject child of current object in scene hierarchy.)#"  , py::arg("theObject"))
        .def("RemoveChild",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) >(&PrsMgr_PresentableObject::RemoveChild),
             R"#(Removes theObject from children of current object in scene hierarchy.)#"  , py::arg("theObject"))
        .def("Children",
             (const PrsMgr_ListOfPresentableObjects & (PrsMgr_PresentableObject::*)() const) static_cast<const PrsMgr_ListOfPresentableObjects & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Children),
             R"#(Returns children of the current object.)#" )
        .def("HasOwnPresentations",
             (Standard_Boolean (PrsMgr_PresentableObject::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HasOwnPresentations),
             R"#(Returns true if object should have own presentations.)#" )
        .def("Parent",
             (PrsMgr_PresentableObjectPointer (PrsMgr_PresentableObject::*)() const) static_cast<PrsMgr_PresentableObjectPointer (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Parent),
             R"#(Returns parent of current object in scene hierarchy.)#" )
        .def("SetAttributes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&PrsMgr_PresentableObject::SetAttributes),
             R"#(Initializes the drawing tool theDrawer.)#"  , py::arg("theDrawer"))
        .def("Attributes",
             (const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::Attributes),
             R"#(Returns the attributes settings.)#" )
        .def("UnsetAttributes",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetAttributes),
             R"#(Clears settings provided by the drawing tool theDrawer.)#" )
        .def("HilightAttributes",
             (const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::HilightAttributes),
             R"#(Returns the hilight attributes settings. When not NULL, overrides both Prs3d_TypeOfHighlight_LocalSelected and Prs3d_TypeOfHighlight_Selected defined within AIS_InteractiveContext.)#" )
        .def("SetHilightAttributes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&PrsMgr_PresentableObject::SetHilightAttributes),
             R"#(Initializes the hilight drawing tool theDrawer.)#"  , py::arg("theDrawer"))
        .def("DynamicHilightAttributes",
             (const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const) static_cast<const opencascade::handle<Prs3d_Drawer> & (PrsMgr_PresentableObject::*)() const>(&PrsMgr_PresentableObject::DynamicHilightAttributes),
             R"#(Returns the hilight attributes settings. When not NULL, overrides both Prs3d_TypeOfHighlight_LocalDynamic and Prs3d_TypeOfHighlight_Dynamic defined within AIS_InteractiveContext.)#" )
        .def("SetDynamicHilightAttributes",
             (void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> &  ) ) static_cast<void (PrsMgr_PresentableObject::*)( const opencascade::handle<Prs3d_Drawer> &  ) >(&PrsMgr_PresentableObject::SetDynamicHilightAttributes),
             R"#(Initializes the dynamic hilight drawing tool.)#"  , py::arg("theDrawer"))
        .def("UnsetHilightAttributes",
             (void (PrsMgr_PresentableObject::*)() ) static_cast<void (PrsMgr_PresentableObject::*)() >(&PrsMgr_PresentableObject::UnsetHilightAttributes),
             R"#(Clears settings provided by the hilight drawing tool theDrawer.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PrsMgr_PresentableObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PrsMgr_PresentableObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<PrsMgr_Presentation ,opencascade::handle<PrsMgr_Presentation>  , Standard_Transient >>(m.attr("PrsMgr_Presentation"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PrsMgr_Presentation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::DynamicType),
             R"#(None)#" )
        .def("Presentation",
             (const opencascade::handle<Prs3d_Presentation> & (PrsMgr_Presentation::*)() const) static_cast<const opencascade::handle<Prs3d_Presentation> & (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::Presentation),
             R"#(None)#" )
        .def("PresentationManager",
             (const opencascade::handle<PrsMgr_PresentationManager> & (PrsMgr_Presentation::*)() const) static_cast<const opencascade::handle<PrsMgr_PresentationManager> & (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::PresentationManager),
             R"#(returns the PresentationManager in which the presentation has been created.)#" )
        .def("SetUpdateStatus",
             (void (PrsMgr_Presentation::*)( const Standard_Boolean  ) ) static_cast<void (PrsMgr_Presentation::*)( const Standard_Boolean  ) >(&PrsMgr_Presentation::SetUpdateStatus),
             R"#(None)#"  , py::arg("theUpdateStatus"))
        .def("MustBeUpdated",
             (Standard_Boolean (PrsMgr_Presentation::*)() const) static_cast<Standard_Boolean (PrsMgr_Presentation::*)() const>(&PrsMgr_Presentation::MustBeUpdated),
             R"#(None)#" )
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
    // Additional methods
;


    static_cast<py::class_<PrsMgr_PresentationManager ,opencascade::handle<PrsMgr_PresentationManager>  , Standard_Transient >>(m.attr("PrsMgr_PresentationManager"))
        .def(py::init< const opencascade::handle<Graphic3d_StructureManager> & >()  , py::arg("theStructureManager") )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PrsMgr_PresentationManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PrsMgr_PresentationManager::*)() const>(&PrsMgr_PresentationManager::DynamicType),
             R"#(None)#" )
        .def("Display",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) >(&PrsMgr_PresentationManager::Display),
             R"#(Displays the presentation of the object in the given Presentation manager with the given mode. The mode should be enumerated by the object which inherits PresentableObject.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Erase",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) >(&PrsMgr_PresentationManager::Erase),
             R"#(erases the presentation of the object in the given Presentation manager with the given mode. If is -1, then erases all presentations of the object.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) >(&PrsMgr_PresentationManager::Clear),
             R"#(Clears the presentation of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("SetVisibility",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Boolean  ) >(&PrsMgr_PresentationManager::SetVisibility),
             R"#(Sets the visibility of presentable object.)#"  , py::arg("thePrsObject"),  py::arg("theMode"),  py::arg("theValue"))
        .def("Unhighlight",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) >(&PrsMgr_PresentationManager::Unhighlight),
             R"#(Removes highlighting from the presentation of the presentable object.)#"  , py::arg("thePrsObject"))
        .def("Unhighlight",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) >(&PrsMgr_PresentationManager::Unhighlight),
             R"#(None)#"  , py::arg("thePrsObject"),  py::arg("theMode"))
        .def("SetDisplayPriority",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Integer  ) const) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Integer  ) const>(&PrsMgr_PresentationManager::SetDisplayPriority),
             R"#(Sets the display priority theNewPrior of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode"),  py::arg("theNewPrior"))
        .def("DisplayPriority",
             (Standard_Integer (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const) static_cast<Standard_Integer (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const>(&PrsMgr_PresentationManager::DisplayPriority),
             R"#(Returns the display priority of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode"))
        .def("SetZLayer",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Graphic3d_ZLayerId  ) >(&PrsMgr_PresentationManager::SetZLayer),
             R"#(Set Z layer ID for all presentations of the object.)#"  , py::arg("thePrsObject"),  py::arg("theLayerId"))
        .def("GetZLayer",
             (Graphic3d_ZLayerId (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) const) static_cast<Graphic3d_ZLayerId (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> &  ) const>(&PrsMgr_PresentationManager::GetZLayer),
             R"#(Get Z layer ID assigned to all presentations of the object. Method returns -1 value if object has no presentations and is impossible to get layer index.)#"  , py::arg("thePrsObject"))
        .def("IsDisplayed",
             (Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const>(&PrsMgr_PresentationManager::IsDisplayed),
             R"#(None)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("IsHighlighted",
             (Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const>(&PrsMgr_PresentationManager::IsHighlighted),
             R"#(Returns true if the presentation of the presentable object thePrsObject in this framework with the display mode theMode is highlighted.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Update",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const>(&PrsMgr_PresentationManager::Update),
             R"#(Updates the presentation of the presentable object thePrsObject in this framework with the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("BeginImmediateDraw",
             (void (PrsMgr_PresentationManager::*)() ) static_cast<void (PrsMgr_PresentationManager::*)() >(&PrsMgr_PresentationManager::BeginImmediateDraw),
             R"#(Resets the transient list of presentations previously displayed in immediate mode and begins accumulation of new list by following AddToImmediateList()/Color()/Highlight() calls.)#" )
        .def("ClearImmediateDraw",
             (void (PrsMgr_PresentationManager::*)() ) static_cast<void (PrsMgr_PresentationManager::*)() >(&PrsMgr_PresentationManager::ClearImmediateDraw),
             R"#(Resets the transient list of presentations previously displayed in immediate mode.)#" )
        .def("AddToImmediateList",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<Prs3d_Presentation> &  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<Prs3d_Presentation> &  ) >(&PrsMgr_PresentationManager::AddToImmediateList),
             R"#(Stores thePrs in the transient list of presentations to be displayed in immediate mode. Will be taken in account in EndImmediateDraw method.)#"  , py::arg("thePrs"))
        .def("EndImmediateDraw",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> &  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> &  ) >(&PrsMgr_PresentationManager::EndImmediateDraw),
             R"#(Allows rapid drawing of the each view in theViewer by avoiding an update of the whole background.)#"  , py::arg("theViewer"))
        .def("RedrawImmediate",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> &  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> &  ) >(&PrsMgr_PresentationManager::RedrawImmediate),
             R"#(Clears and redisplays immediate structures of the viewer taking into account its affinity.)#"  , py::arg("theViewer"))
        .def("IsImmediateModeOn",
             (Standard_Boolean (PrsMgr_PresentationManager::*)() const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)() const>(&PrsMgr_PresentationManager::IsImmediateModeOn),
             R"#(Returns true if Presentation Manager is accumulating transient list of presentations to be displayed in immediate mode.)#" )
        .def("Color",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer ,  const opencascade::handle<PrsMgr_PresentableObject> & ,  const Graphic3d_ZLayerId  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer ,  const opencascade::handle<PrsMgr_PresentableObject> & ,  const Graphic3d_ZLayerId  ) >(&PrsMgr_PresentationManager::Color),
             R"#(Highlights the graphic object thePrsObject in the color theColor. thePrsObject has the display mode theMode; this has the default value of 0, that is, the wireframe display mode.)#"  , py::arg("thePrsObject"),  py::arg("theStyle"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theSelObj")=static_cast<const opencascade::handle<PrsMgr_PresentableObject> &>(NULL),  py::arg("theImmediateStructLayerId")=static_cast<const Graphic3d_ZLayerId>(Graphic3d_ZLayerId_Topmost))
        .def("Connect",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&PrsMgr_PresentationManager::Connect),
             R"#(None)#"  , py::arg("thePrsObject"),  py::arg("theOtherObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theOtherMode")=static_cast<const Standard_Integer>(0))
        .def("Transform",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const opencascade::handle<Geom_Transformation> & ,  const Standard_Integer  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const opencascade::handle<Geom_Transformation> & ,  const Standard_Integer  ) >(&PrsMgr_PresentationManager::Transform),
             R"#(Sets the transformation theTransformation for the presentable object thePrsObject. thePrsObject has the display mode theMode; this has the default value of 0, that is, the wireframe display mode.)#"  , py::arg("thePrsObject"),  py::arg("theTransformation"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("StructureManager",
             (const opencascade::handle<Graphic3d_StructureManager> & (PrsMgr_PresentationManager::*)() const) static_cast<const opencascade::handle<Graphic3d_StructureManager> & (PrsMgr_PresentationManager::*)() const>(&PrsMgr_PresentationManager::StructureManager),
             R"#(Returns the structure manager.)#" )
        .def("HasPresentation",
             (Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer  ) const>(&PrsMgr_PresentationManager::HasPresentation),
             R"#(Returns true if there is a presentation of the presentable object thePrsObject in this framework, thePrsObject having the display mode theMode.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Presentation",
             (opencascade::handle<PrsMgr_Presentation> (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Boolean ,  const opencascade::handle<PrsMgr_PresentableObject> &  ) const) static_cast<opencascade::handle<PrsMgr_Presentation> (PrsMgr_PresentationManager::*)( const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const Standard_Boolean ,  const opencascade::handle<PrsMgr_PresentableObject> &  ) const>(&PrsMgr_PresentationManager::Presentation),
             R"#(Returns the presentation Presentation of the presentable object thePrsObject in this framework. When theToCreate is true - automatically creates presentation for specified mode when not exist. Optional argument theSelObj specifies parent decomposed object to inherit its view affinity.)#"  , py::arg("thePrsObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theToCreate")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theSelObj")=static_cast<const opencascade::handle<PrsMgr_PresentableObject> &>(NULL))
        .def("UpdateHighlightTrsf",
             (void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & ,  const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const opencascade::handle<PrsMgr_PresentableObject> &  ) ) static_cast<void (PrsMgr_PresentationManager::*)( const opencascade::handle<V3d_Viewer> & ,  const opencascade::handle<PrsMgr_PresentableObject> & ,  const Standard_Integer ,  const opencascade::handle<PrsMgr_PresentableObject> &  ) >(&PrsMgr_PresentationManager::UpdateHighlightTrsf),
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
    // Additional methods
;


    static_cast<py::class_<PrsMgr_Prs ,opencascade::handle<PrsMgr_Prs>  , Prs3d_Presentation >>(m.attr("PrsMgr_Prs"))
    // methods
        .def("Compute",
             (void (PrsMgr_Prs::*)() ) static_cast<void (PrsMgr_Prs::*)() >(&PrsMgr_Prs::Compute),
             R"#(None)#" )
        .def("Compute",
             (opencascade::handle<Graphic3d_Structure> (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> &  ) ) static_cast<opencascade::handle<Graphic3d_Structure> (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> &  ) >(&PrsMgr_Prs::Compute),
             R"#(None)#"  , py::arg("aProjector"))
        .def("Compute",
             (opencascade::handle<Graphic3d_Structure> (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> &  ) ) static_cast<opencascade::handle<Graphic3d_Structure> (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> &  ) >(&PrsMgr_Prs::Compute),
             R"#(the "degenerated" Structure is displayed with a transformation defined by <AMatrix> which is not a Pure Translation. We have to take in account this Transformation in the computation of hidden line removal... returns a filled Graphic Structure.)#"  , py::arg("theProjector"),  py::arg("theTrsf"))
        .def("Compute",
             (void (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  opencascade::handle<Graphic3d_Structure> &  ) >(&PrsMgr_Prs::Compute),
             R"#(No need to return a structure, just to fill <ComputedStruct> ....)#"  , py::arg("aProjector"),  py::arg("ComputedStruct"))
        .def("Compute",
             (void (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> & ,  opencascade::handle<Graphic3d_Structure> &  ) ) static_cast<void (PrsMgr_Prs::*)( const opencascade::handle<Graphic3d_DataStructureManager> & ,  const opencascade::handle<Geom_Transformation> & ,  opencascade::handle<Graphic3d_Structure> &  ) >(&PrsMgr_Prs::Compute),
             R"#(No Need to return a Structure, just to Fill <aStructure>. The Trsf has to be taken in account in the computation (Rotation Part....))#"  , py::arg("theProjector"),  py::arg("theTrsf"),  py::arg("theStructure"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (PrsMgr_Prs::*)() const) static_cast<const opencascade::handle<Standard_Type> & (PrsMgr_Prs::*)() const>(&PrsMgr_Prs::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&PrsMgr_Prs::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&PrsMgr_Prs::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/PrsMgr_TypeOfPresentation3d.hxx
// ./opencascade/PrsMgr_PresentationManager.hxx
// ./opencascade/PrsMgr_ModedPresentation.hxx
// ./opencascade/PrsMgr_PresentationPointer.hxx
// ./opencascade/PrsMgr_PresentableObjectPointer.hxx
// ./opencascade/PrsMgr_Presentation.hxx
// ./opencascade/PrsMgr_PresentationManager3d.hxx
// ./opencascade/PrsMgr_PresentableObject.hxx
// ./opencascade/PrsMgr_ListOfPresentableObjects.hxx
// ./opencascade/PrsMgr_ListOfPresentations.hxx
// ./opencascade/PrsMgr_Presentations.hxx
// ./opencascade/PrsMgr_Prs.hxx
// ./opencascade/PrsMgr_Presentation3d.hxx

// operators

// register typdefs
    register_template_NCollection_List<opencascade::handle<PrsMgr_PresentableObject> >(m,"PrsMgr_ListOfPresentableObjects");  
    register_template_NCollection_List<opencascade::handle<Prs3d_Presentation> >(m,"PrsMgr_ListOfPresentations");  
    register_template_NCollection_Sequence<PrsMgr_ModedPresentation>(m,"PrsMgr_Presentations");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
