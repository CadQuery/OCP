
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <V3d_Viewer.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Standard_NotImplemented.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SensitiveEntitySet.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectableObject.hxx>

// module includes
#include <SelectMgr_AndFilter.hxx>
#include <SelectMgr_BaseFrustum.hxx>
#include <SelectMgr_CompositionFilter.hxx>
#include <SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors.hxx>
#include <SelectMgr_DataMapOfObjectSelectors.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_Filter.hxx>
#include <SelectMgr_Frustum.hxx>
#include <SelectMgr_FrustumBuilder.hxx>
#include <SelectMgr_IndexedDataMapOfOwnerCriterion.hxx>
#include <SelectMgr_IndexedMapOfOwner.hxx>
#include <SelectMgr_ListIteratorOfListOfFilter.hxx>
#include <SelectMgr_ListOfFilter.hxx>
#include <SelectMgr_OrFilter.hxx>
#include <SelectMgr_PickingStrategy.hxx>
#include <SelectMgr_RectangularFrustum.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_SelectableObjectSet.hxx>
#include <SelectMgr_SelectingVolumeManager.hxx>
#include <SelectMgr_Selection.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SensitiveEntity.hxx>
#include <SelectMgr_SensitiveEntitySet.hxx>
#include <SelectMgr_SequenceOfFilter.hxx>
#include <SelectMgr_SequenceOfOwner.hxx>
#include <SelectMgr_SequenceOfSelection.hxx>
#include <SelectMgr_SequenceOfSelector.hxx>
#include <SelectMgr_SOPtr.hxx>
#include <SelectMgr_SortCriterion.hxx>
#include <SelectMgr_StateOfSelection.hxx>
#include <SelectMgr_ToleranceMap.hxx>
#include <SelectMgr_TriangularFrustum.hxx>
#include <SelectMgr_TriangularFrustumSet.hxx>
#include <SelectMgr_TypeOfBVHUpdate.hxx>
#include <SelectMgr_TypeOfUpdate.hxx>
#include <SelectMgr_VectorTypes.hxx>
#include <SelectMgr_ViewClipRange.hxx>
#include <SelectMgr_ViewerSelector.hxx>

// template related includes
// ./opencascade/SelectMgr_SequenceOfFilter.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_IndexedDataMapOfOwnerCriterion.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_DataMapOfObjectSelectors.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_DataMapOfObjectSelectors.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_SequenceOfSelector.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_ViewerSelector.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_SequenceOfOwner.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_ListOfFilter.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_ListOfFilter.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_VectorTypes.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_SequenceOfSelection.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_SelectMgr(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("SelectMgr"));


//Python trampoline classes
    class Py_SelectMgr_Filter : public SelectMgr_Filter{
    public:
        using SelectMgr_Filter::SelectMgr_Filter;
        
        // public pure virtual
        Standard_Boolean IsOk(const opencascade::handle<SelectMgr_EntityOwner> & anObj) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectMgr_Filter,IsOk,anObj) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_SelectMgr_SelectableObject : public SelectMgr_SelectableObject{
    public:
        using SelectMgr_SelectableObject::SelectMgr_SelectableObject;
        
        // public pure virtual
        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & aSelection,const Standard_Integer aMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,aSelection,aMode) };
        void BoundingBox(Bnd_Box & theBndBox) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,BoundingBox,theBndBox) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_SelectMgr_CompositionFilter : public SelectMgr_CompositionFilter{
    public:
        using SelectMgr_CompositionFilter::SelectMgr_CompositionFilter;
        
        // public pure virtual
        
        Standard_Boolean IsOk(const opencascade::handle<SelectMgr_EntityOwner> & anObj) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectMgr_Filter,IsOk,anObj) };
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// classes


    static_cast<py::class_<SelectMgr_BaseFrustum ,opencascade::handle<SelectMgr_BaseFrustum>  , Standard_Transient >>(m.attr("SelectMgr_BaseFrustum"))
        .def(py::init<  >()  )
    // methods
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (SelectMgr_BaseFrustum::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (SelectMgr_BaseFrustum::*)() const>(&SelectMgr_BaseFrustum::Camera),
             R"#(Return camera definition.)#" )
        .def("SetCamera",
             (void (SelectMgr_BaseFrustum::*)( const opencascade::handle<Graphic3d_Camera> &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const opencascade::handle<Graphic3d_Camera> &  ) >(&SelectMgr_BaseFrustum::SetCamera),
             R"#(Passes camera projection and orientation matrices to builder)#"  , py::arg("theCamera"))
        .def("SetCamera",
             (void (SelectMgr_BaseFrustum::*)(  const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Standard_Boolean ,  const Graphic3d_WorldViewProjState &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)(  const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Standard_Boolean ,  const Graphic3d_WorldViewProjState &  ) >(&SelectMgr_BaseFrustum::SetCamera),
             R"#(Passes camera projection and orientation matrices to builder)#"  , py::arg("theProjection"),  py::arg("theWorldView"),  py::arg("theIsOrthographic"),  py::arg("theWVPState")=static_cast<const Graphic3d_WorldViewProjState &>(Graphic3d_WorldViewProjState ( )))
        .def("ProjectionMatrix",
             (const Graphic3d_Mat4d & (SelectMgr_BaseFrustum::*)() const) static_cast<const Graphic3d_Mat4d & (SelectMgr_BaseFrustum::*)() const>(&SelectMgr_BaseFrustum::ProjectionMatrix),
             R"#(Returns current camera projection transformation common for all selecting volumes)#" )
        .def("WorldViewMatrix",
             (const Graphic3d_Mat4d & (SelectMgr_BaseFrustum::*)() const) static_cast<const Graphic3d_Mat4d & (SelectMgr_BaseFrustum::*)() const>(&SelectMgr_BaseFrustum::WorldViewMatrix),
             R"#(Returns current camera world view transformation common for all selecting volumes)#" )
        .def("WorldViewProjState",
             (const Graphic3d_WorldViewProjState & (SelectMgr_BaseFrustum::*)() const) static_cast<const Graphic3d_WorldViewProjState & (SelectMgr_BaseFrustum::*)() const>(&SelectMgr_BaseFrustum::WorldViewProjState),
             R"#(Returns current camera world view projection transformation state)#" )
        .def("SetPixelTolerance",
             (void (SelectMgr_BaseFrustum::*)( const Standard_Integer  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const Standard_Integer  ) >(&SelectMgr_BaseFrustum::SetPixelTolerance),
             R"#(None)#"  , py::arg("theTol"))
        .def("SetWindowSize",
             (void (SelectMgr_BaseFrustum::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const Standard_Integer ,  const Standard_Integer  ) >(&SelectMgr_BaseFrustum::SetWindowSize),
             R"#(None)#"  , py::arg("theWidth"),  py::arg("theHeight"))
        .def("SetViewport",
             (void (SelectMgr_BaseFrustum::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&SelectMgr_BaseFrustum::SetViewport),
             R"#(Passes viewport parameters to builder)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theWidth"),  py::arg("theHeight"))
        .def("SetBuilder",
             (void (SelectMgr_BaseFrustum::*)( const opencascade::handle<SelectMgr_FrustumBuilder> &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const opencascade::handle<SelectMgr_FrustumBuilder> &  ) >(&SelectMgr_BaseFrustum::SetBuilder),
             R"#(Nullifies the builder created in the constructor and copies the pointer given)#"  , py::arg("theBuilder"))
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d &  ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds volume according to the point and given pixel tolerance)#"  , py::arg(""))
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds volume according to the selected rectangle)#"  , py::arg(""),  py::arg(""))
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds volume according to the triangle given)#"  , py::arg(""),  py::arg(""),  py::arg(""))
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt2d> &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt2d> &  ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds selecting volumes set according to polyline points)#"  , py::arg(""))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_BaseFrustum::*)( const Standard_Integer ,  const gp_GTrsf &  ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_BaseFrustum::*)( const Standard_Integer ,  const gp_GTrsf &  ) const>(&SelectMgr_BaseFrustum::ScaleAndTransform),
             R"#(IMPORTANT: Scaling makes sense only for frustum built on a single point! Note that this method does not perform any checks on type of the frustum. Returns a copy of the frustum resized according to the scale factor given and transforms it using the matrix given. There are no default parameters, but in case if: - transformation only is needed: must be initialized as any negative value; - scale only is needed: must be set to gp_Identity.)#"  , py::arg(""),  py::arg(""))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) >(&SelectMgr_BaseFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) >(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theInside")=static_cast<Standard_Boolean *>(NULL))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt &  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt &  ) >(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point Does not perform depth calculation, so this method is defined as helper function for inclusion test. Therefore, its implementation makes sense only for rectangular frustum with box selection mode activated.)#"  , py::arg("thePnt"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_BaseFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_BaseFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePt1"),  py::arg("thePt2"),  py::arg("thePt3"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("DistToGeometryCenter",
             (Standard_Real (SelectMgr_BaseFrustum::*)( const gp_Pnt &  ) ) static_cast<Standard_Real (SelectMgr_BaseFrustum::*)( const gp_Pnt &  ) >(&SelectMgr_BaseFrustum::DistToGeometryCenter),
             R"#(Measures distance between 3d projection of user-picked screen point and given point theCOG)#"  , py::arg("theCOG"))
        .def("DetectedPoint",
             (gp_Pnt (SelectMgr_BaseFrustum::*)( const Standard_Real  ) const) static_cast<gp_Pnt (SelectMgr_BaseFrustum::*)( const Standard_Real  ) const>(&SelectMgr_BaseFrustum::DetectedPoint),
             R"#(None)#"  , py::arg("theDepth"))
        .def("IsClipped",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const Graphic3d_SequenceOfHClipPlane & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const Graphic3d_SequenceOfHClipPlane & ,  const Standard_Real  ) >(&SelectMgr_BaseFrustum::IsClipped),
             R"#(Checks if the point of sensitive in which selection was detected belongs to the region defined by clipping planes)#"  , py::arg("thePlanes"),  py::arg("theDepth"))
        .def("SetViewClipping",
             (void (SelectMgr_BaseFrustum::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&SelectMgr_BaseFrustum::SetViewClipping),
             R"#(Valid for point selection only! Computes depth range for global (defined for the whole view) clipping planes.)#"  , py::arg(""))
        .def("SetViewClippingEnabled",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const Standard_Boolean  ) >(&SelectMgr_BaseFrustum::SetViewClippingEnabled),
             R"#(Set if view clipping plane is enabled or not.)#"  , py::arg(""))
        .def("GetPlanes",
             (void (SelectMgr_BaseFrustum::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const) static_cast<void (SelectMgr_BaseFrustum::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const>(&SelectMgr_BaseFrustum::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_BaseFrustum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_BaseFrustum::*)() const>(&SelectMgr_BaseFrustum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("WindowSize",
             []( SelectMgr_BaseFrustum &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.WindowSize(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_BaseFrustum::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_BaseFrustum::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_EntityOwner ,opencascade::handle<SelectMgr_EntityOwner>  , SelectBasics_EntityOwner >>(m.attr("SelectMgr_EntityOwner"))
        .def(py::init< const Standard_Integer >()  , py::arg("aPriority")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const opencascade::handle<SelectMgr_SelectableObject> &,const Standard_Integer >()  , py::arg("aSO"),  py::arg("aPriority")=static_cast<const Standard_Integer>(0) )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const Standard_Integer >()  , py::arg("theOwner"),  py::arg("aPriority")=static_cast<const Standard_Integer>(0) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_EntityOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::DynamicType),
             R"#(None)#" )
        .def("HasSelectable",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::HasSelectable),
             R"#(Returns true if there is a selectable object to serve as an owner.)#" )
        .def("Selectable",
             (opencascade::handle<SelectMgr_SelectableObject> (SelectMgr_EntityOwner::*)() const) static_cast<opencascade::handle<SelectMgr_SelectableObject> (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::Selectable),
             R"#(Returns a selectable object detected in the working context.)#" )
        .def("SetSelectable",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_EntityOwner::SetSelectable),
             R"#(Sets the selectable object.)#"  , py::arg("theSelObj"))
        .def("IsHilighted",
             (Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) const>(&SelectMgr_EntityOwner::IsHilighted),
             R"#(Returns true if the presentation manager aPM highlights selections corresponding to the selection mode aMode.)#"  , py::arg("aPM"),  py::arg("aMode")=static_cast<const Standard_Integer>(0))
        .def("HilightWithColor",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const Standard_Integer  ) >(&SelectMgr_EntityOwner::HilightWithColor),
             R"#(Highlights selectable object's presentation with mode theMode in presentation manager with given highlight style. Also a check for auto-highlight is performed - if selectable object manages highlighting on its own, execution will be passed to SelectMgr_SelectableObject::HilightOwnerWithColor method)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Unhilight",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) >(&SelectMgr_EntityOwner::Unhilight),
             R"#(Removes highlighting from the owner of a detected selectable object in the presentation manager. This object could be the owner of a sensitive primitive.)#"  , py::arg("thePrsMgr"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const Standard_Integer  ) >(&SelectMgr_EntityOwner::Clear),
             R"#(Clears the owners matching the value of the selection mode aMode from the presentation manager object aPM.)#"  , py::arg("aPM"),  py::arg("aMode")=static_cast<const Standard_Integer>(0))
        .def("HasLocation",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::HasLocation),
             R"#(None)#" )
        .def("SetLocation",
             (void (SelectMgr_EntityOwner::*)( const TopLoc_Location &  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const TopLoc_Location &  ) >(&SelectMgr_EntityOwner::SetLocation),
             R"#(None)#"  , py::arg("aLoc"))
        .def("ResetLocation",
             (void (SelectMgr_EntityOwner::*)() ) static_cast<void (SelectMgr_EntityOwner::*)() >(&SelectMgr_EntityOwner::ResetLocation),
             R"#(None)#" )
        .def("Location",
             (TopLoc_Location (SelectMgr_EntityOwner::*)() const) static_cast<TopLoc_Location (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::Location),
             R"#(None)#" )
        .def("SetSelected",
             (void (SelectMgr_EntityOwner::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Standard_Boolean  ) >(&SelectMgr_EntityOwner::SetSelected),
             R"#(Set the state of the owner.)#"  , py::arg("theIsSelected"))
        .def("IsSelected",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::IsSelected),
             R"#(Returns Standard_True if the owner is selected.)#" )
        .def("State",
             (void (SelectMgr_EntityOwner::*)( const Standard_Integer  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Standard_Integer  ) >(&SelectMgr_EntityOwner::State),
             R"#(Set the state of the owner. The method is deprecated. Use SetSelected() instead.)#"  , py::arg("theStatus"))
        .def("State",
             (Standard_Integer (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Integer (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::State),
             R"#(None)#" )
        .def("IsAutoHilight",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::IsAutoHilight),
             R"#(if owner is not auto hilighted, for group contains many such owners will be called one method HilightSelected of SelectableObject)#" )
        .def("IsForcedHilight",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::IsForcedHilight),
             R"#(if this method returns TRUE the owner will allways call method Hilight for SelectableObject when the owner is detected. By default it always return FALSE.)#" )
        .def("SetZLayer",
             (void (SelectMgr_EntityOwner::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Graphic3d_ZLayerId  ) >(&SelectMgr_EntityOwner::SetZLayer),
             R"#(Set Z layer ID and update all presentations.)#"  , py::arg("theLayerId"))
        .def("UpdateHighlightTrsf",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<V3d_Viewer> & ,  const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<V3d_Viewer> & ,  const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const Standard_Integer  ) >(&SelectMgr_EntityOwner::UpdateHighlightTrsf),
             R"#(Implements immediate application of location transformation of parent object to dynamic highlight structure)#"  , py::arg("theViewer"),  py::arg("theManager"),  py::arg("theDispMode"))
        .def("IsSameSelectable",
             (Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const>(&SelectMgr_EntityOwner::IsSameSelectable),
             R"#(Returns true if pointer to selectable object of this owner is equal to the given one)#"  , py::arg("theOther"))
        .def("ComesFromDecomposition",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::ComesFromDecomposition),
             R"#(Returns TRUE if this owner points to a part of object and FALSE for entire object.)#" )
        .def("SetComesFromDecomposition",
             (void (SelectMgr_EntityOwner::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Standard_Boolean  ) >(&SelectMgr_EntityOwner::SetComesFromDecomposition),
             R"#(Sets flag indicating this owner points to a part of object (TRUE) or to entire object (FALSE).)#"  , py::arg("theIsFromDecomposition"))
        .def("Set",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_EntityOwner::Set),
             R"#(Sets the selectable object.)#"  , py::arg("theSelObj"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_EntityOwner::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_EntityOwner::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_Filter ,opencascade::handle<SelectMgr_Filter> ,Py_SelectMgr_Filter , Standard_Transient >>(m.attr("SelectMgr_Filter"))
    // methods
        .def("IsOk",
             (Standard_Boolean (SelectMgr_Filter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (SelectMgr_Filter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&SelectMgr_Filter::IsOk),
             R"#(Indicates that the selected Interactive Object passes the filter. The owner, anObj, can be either direct or user. A direct owner is the corresponding construction element, whereas a user is the compound shape of which the entity forms a part. When an object is detected by the mouse - in AIS, this is done through a context selector - its owner is passed to the filter as an argument. If the object returns Standard_True, it is kept; if not, it is rejected. If you are creating a filter class inheriting this framework, and the daughter class is to be used in an AIS local context, you will need to implement the virtual function ActsOn.)#"  , py::arg("anObj"))
        .def("ActsOn",
             (Standard_Boolean (SelectMgr_Filter::*)( const TopAbs_ShapeEnum  ) const) static_cast<Standard_Boolean (SelectMgr_Filter::*)( const TopAbs_ShapeEnum  ) const>(&SelectMgr_Filter::ActsOn),
             R"#(Returns true in an AIS local context, if this filter operates on a type of subshape defined in a filter class inheriting this framework. This function completes IsOk in an AIS local context.)#"  , py::arg("aStandardMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_Filter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_Filter::*)() const>(&SelectMgr_Filter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_Filter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_Filter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_FrustumBuilder ,opencascade::handle<SelectMgr_FrustumBuilder>  , Standard_Transient >>(m.attr("SelectMgr_FrustumBuilder"))
        .def(py::init<  >()  )
    // methods
        .def("SetWorldViewMatrix",
             (void (SelectMgr_FrustumBuilder::*)(  const NCollection_Mat4<Standard_Real> &  ) ) static_cast<void (SelectMgr_FrustumBuilder::*)(  const NCollection_Mat4<Standard_Real> &  ) >(&SelectMgr_FrustumBuilder::SetWorldViewMatrix),
             R"#(Stores current world view transformation matrix)#"  , py::arg("theWorldViewMatrix"))
        .def("WorldViewMatrix",
             (const Graphic3d_Mat4d & (SelectMgr_FrustumBuilder::*)() const) static_cast<const Graphic3d_Mat4d & (SelectMgr_FrustumBuilder::*)() const>(&SelectMgr_FrustumBuilder::WorldViewMatrix),
             R"#(Returns current world view transformation matrix)#" )
        .def("SetProjectionMatrix",
             (void (SelectMgr_FrustumBuilder::*)(  const NCollection_Mat4<Standard_Real> &  ) ) static_cast<void (SelectMgr_FrustumBuilder::*)(  const NCollection_Mat4<Standard_Real> &  ) >(&SelectMgr_FrustumBuilder::SetProjectionMatrix),
             R"#(Stores current projection matrix)#"  , py::arg("theProjection"))
        .def("ProjectionMatrix",
             (const Graphic3d_Mat4d & (SelectMgr_FrustumBuilder::*)() const) static_cast<const Graphic3d_Mat4d & (SelectMgr_FrustumBuilder::*)() const>(&SelectMgr_FrustumBuilder::ProjectionMatrix),
             R"#(Returns current projection matrix)#" )
        .def("SetWorldViewProjState",
             (void (SelectMgr_FrustumBuilder::*)( const Graphic3d_WorldViewProjState &  ) ) static_cast<void (SelectMgr_FrustumBuilder::*)( const Graphic3d_WorldViewProjState &  ) >(&SelectMgr_FrustumBuilder::SetWorldViewProjState),
             R"#(Stores current world view projection matrix state for the orientation and projection matrices)#"  , py::arg("theState"))
        .def("WorldViewProjState",
             (const Graphic3d_WorldViewProjState & (SelectMgr_FrustumBuilder::*)() const) static_cast<const Graphic3d_WorldViewProjState & (SelectMgr_FrustumBuilder::*)() const>(&SelectMgr_FrustumBuilder::WorldViewProjState),
             R"#(Returns current world view projection state)#" )
        .def("SetWindowSize",
             (void (SelectMgr_FrustumBuilder::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_FrustumBuilder::*)( const Standard_Integer ,  const Standard_Integer  ) >(&SelectMgr_FrustumBuilder::SetWindowSize),
             R"#(Stores current window width and height)#"  , py::arg("theWidth"),  py::arg("theHeight"))
        .def("SetViewport",
             (void (SelectMgr_FrustumBuilder::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (SelectMgr_FrustumBuilder::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&SelectMgr_FrustumBuilder::SetViewport),
             R"#(Stores current viewport coordinates)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theWidth"),  py::arg("theHeight"))
        .def("InvalidateViewport",
             (void (SelectMgr_FrustumBuilder::*)() ) static_cast<void (SelectMgr_FrustumBuilder::*)() >(&SelectMgr_FrustumBuilder::InvalidateViewport),
             R"#(None)#" )
        .def("SignedPlanePntDist",
             (Standard_Real (SelectMgr_FrustumBuilder::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> &  ) const) static_cast<Standard_Real (SelectMgr_FrustumBuilder::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> &  ) const>(&SelectMgr_FrustumBuilder::SignedPlanePntDist),
             R"#(Calculates signed distance between plane with equation theEq and point thePnt)#"  , py::arg("theEq"),  py::arg("thePnt"))
        .def("ProjectPntOnViewPlane",
             (gp_Pnt (SelectMgr_FrustumBuilder::*)( const Standard_Real & ,  const Standard_Real & ,  const Standard_Real &  ) const) static_cast<gp_Pnt (SelectMgr_FrustumBuilder::*)( const Standard_Real & ,  const Standard_Real & ,  const Standard_Real &  ) const>(&SelectMgr_FrustumBuilder::ProjectPntOnViewPlane),
             R"#(Projects 2d screen point onto view frustum plane: theZ = 0 - near plane, theZ = 1 - far plane)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theZ"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_FrustumBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_FrustumBuilder::*)() const>(&SelectMgr_FrustumBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("WindowSize",
             []( SelectMgr_FrustumBuilder &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.WindowSize(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_FrustumBuilder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_FrustumBuilder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_RectangularFrustum , shared_ptr<SelectMgr_RectangularFrustum>  >>(m.attr("SelectMgr_RectangularFrustum"))
        .def(py::init<  >()  )
    // methods
        .def("Build",
             (void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d &  ) >(&SelectMgr_RectangularFrustum::Build),
             R"#(Builds volume according to the point and given pixel tolerance)#"  , py::arg("thePoint"))
        .def("Build",
             (void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&SelectMgr_RectangularFrustum::Build),
             R"#(Builds volume according to the selected rectangle)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_RectangularFrustum::*)( const Standard_Integer ,  const gp_GTrsf &  ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_RectangularFrustum::*)( const Standard_Integer ,  const gp_GTrsf &  ) const>(&SelectMgr_RectangularFrustum::ScaleAndTransform),
             R"#(IMPORTANT: Scaling makes sense only for frustum built on a single point! Note that this method does not perform any checks on type of the frustum. Returns a copy of the frustum resized according to the scale factor given and transforms it using the matrix given. There are no default parameters, but in case if: - transformation only is needed: must be initialized as any negative value; - scale only is needed: must be set to gp_Identity.)#"  , py::arg("theScaleFactor"),  py::arg("theTrsf"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) >(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) >(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theInside")=static_cast<Standard_Boolean *>(NULL))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt &  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt &  ) >(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("DistToGeometryCenter",
             (Standard_Real (SelectMgr_RectangularFrustum::*)( const gp_Pnt &  ) ) static_cast<Standard_Real (SelectMgr_RectangularFrustum::*)( const gp_Pnt &  ) >(&SelectMgr_RectangularFrustum::DistToGeometryCenter),
             R"#(Measures distance between 3d projection of user-picked screen point and given point theCOG)#"  , py::arg("theCOG"))
        .def("DetectedPoint",
             (gp_Pnt (SelectMgr_RectangularFrustum::*)( const Standard_Real  ) const) static_cast<gp_Pnt (SelectMgr_RectangularFrustum::*)( const Standard_Real  ) const>(&SelectMgr_RectangularFrustum::DetectedPoint),
             R"#(Calculates the point on a view ray that was detected during the run of selection algo by given depth)#"  , py::arg("theDepth"))
        .def("IsClipped",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const Graphic3d_SequenceOfHClipPlane & ,  const Standard_Real  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const Graphic3d_SequenceOfHClipPlane & ,  const Standard_Real  ) >(&SelectMgr_RectangularFrustum::IsClipped),
             R"#(Checks if the point of sensitive in which selection was detected belongs to the region defined by clipping planes)#"  , py::arg("thePlanes"),  py::arg("theDepth"))
        .def("SetViewClipping",
             (void (SelectMgr_RectangularFrustum::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (SelectMgr_RectangularFrustum::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&SelectMgr_RectangularFrustum::SetViewClipping),
             R"#(Valid for point selection only! Computes depth range for global (defined for the whole view) clipping planes.)#"  , py::arg("thePlanes"))
        .def("SetViewClippingEnabled",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const Standard_Boolean  ) >(&SelectMgr_RectangularFrustum::SetViewClippingEnabled),
             R"#(Set if view clipping plane is enabled or not.)#"  , py::arg("theToEnable"))
        .def("GetVertices",
             (const gp_Pnt * (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Pnt * (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetVertices),
             R"#(A set of helper functions that return rectangular selecting frustum data)#" )
        .def("GetNearPnt",
             (const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetNearPnt),
             R"#(Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto near view frustum plane)#" )
        .def("GetFarPnt",
             (const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetFarPnt),
             R"#(Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto far view frustum plane)#" )
        .def("GetPlanes",
             (void (SelectMgr_RectangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const) static_cast<void (SelectMgr_RectangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const>(&SelectMgr_RectangularFrustum::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_SelectableObject ,opencascade::handle<SelectMgr_SelectableObject> ,Py_SelectMgr_SelectableObject , PrsMgr_PresentableObject >>(m.attr("SelectMgr_SelectableObject"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_SelectableObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::DynamicType),
             R"#(None)#" )
        .def("ComputeSelection",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) >(&SelectMgr_SelectableObject::ComputeSelection),
             R"#(Recovers and calculates any sensitive primitive, aSelection, available in Shape mode, specified by aMode. As a rule, these are sensitive faces. This method is defined as virtual. This enables you to implement it in the creation of a new class of AIS Interactive Object. You need to do this and in so doing, redefine this method, if you create a class which enriches the list of signatures and types.)#"  , py::arg("aSelection"),  py::arg("aMode"))
        .def("RecomputePrimitives",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::RecomputePrimitives),
             R"#(Re-computes the sensitive primitives for all modes. IMPORTANT: Do not use this method to update selection primitives except implementing custom selection manager! This method does not take into account necessary BVH updates, but may invalidate the pointers it refers to. TO UPDATE SELECTION properly from outside classes, use method UpdateSelection.)#" )
        .def("RecomputePrimitives",
             (void (SelectMgr_SelectableObject::*)( const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Standard_Integer  ) >(&SelectMgr_SelectableObject::RecomputePrimitives),
             R"#(Re-computes the sensitive primitives which correspond to the <theMode>th selection mode. IMPORTANT: Do not use this method to update selection primitives except implementing custom selection manager! selection manager! This method does not take into account necessary BVH updates, but may invalidate the pointers it refers to. TO UPDATE SELECTION properly from outside classes, use method UpdateSelection.)#"  , py::arg("theMode"))
        .def("AddSelection",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & ,  const Standard_Integer  ) >(&SelectMgr_SelectableObject::AddSelection),
             R"#(Adds the selection aSelection with the selection mode index aMode to this framework.)#"  , py::arg("aSelection"),  py::arg("aMode"))
        .def("ClearSelections",
             (void (SelectMgr_SelectableObject::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Standard_Boolean  ) >(&SelectMgr_SelectableObject::ClearSelections),
             R"#(Empties all the selections in the SelectableObject <update> parameter defines whether all object's selections should be flagged for further update or not. This improved method can be used to recompute an object's selection (without redisplaying the object completely) when some selection mode is activated not for the first time.)#"  , py::arg("update")=static_cast<const Standard_Boolean>(Standard_False))
        .def("Selection",
             (const opencascade::handle<SelectMgr_Selection> & (SelectMgr_SelectableObject::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<SelectMgr_Selection> & (SelectMgr_SelectableObject::*)( const Standard_Integer  ) const>(&SelectMgr_SelectableObject::Selection),
             R"#(Returns the selection having specified selection mode or NULL.)#"  , py::arg("theMode"))
        .def("HasSelection",
             (Standard_Boolean (SelectMgr_SelectableObject::*)( const Standard_Integer  ) const) static_cast<Standard_Boolean (SelectMgr_SelectableObject::*)( const Standard_Integer  ) const>(&SelectMgr_SelectableObject::HasSelection),
             R"#(Returns true if a selection corresponding to the selection mode theMode was computed for this object.)#"  , py::arg("theMode"))
        .def("Selections",
             (const SelectMgr_SequenceOfSelection & (SelectMgr_SelectableObject::*)() const) static_cast<const SelectMgr_SequenceOfSelection & (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::Selections),
             R"#(Return the sequence of selections.)#" )
        .def("Init",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::Init),
             R"#(Begins the iteration scanning for sensitive primitives.)#" )
        .def("More",
             (Standard_Boolean (SelectMgr_SelectableObject::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::More),
             R"#(Continues the iteration scanning for sensitive primitives.)#" )
        .def("Next",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::Next),
             R"#(Continues the iteration scanning for sensitive primitives.)#" )
        .def("CurrentSelection",
             (const opencascade::handle<SelectMgr_Selection> & (SelectMgr_SelectableObject::*)() const) static_cast<const opencascade::handle<SelectMgr_Selection> & (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::CurrentSelection),
             R"#(Returns the current selection in this framework.)#" )
        .def("ResetTransformation",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::ResetTransformation),
             R"#(None)#" )
        .def("UpdateTransformation",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::UpdateTransformation),
             R"#(Recomputes the location of the selection aSelection.)#" )
        .def("UpdateTransformations",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> &  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> &  ) >(&SelectMgr_SelectableObject::UpdateTransformations),
             R"#(Updates locations in all sensitive entities from <aSelection> and in corresponding entity owners.)#"  , py::arg("aSelection"))
        .def("HilightSelected",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,   const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > &  ) >(&SelectMgr_SelectableObject::HilightSelected),
             R"#(Method which draws selected owners ( for fast presentation draw ))#"  , py::arg("PM"),  py::arg("Seq"))
        .def("ClearSelected",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::ClearSelected),
             R"#(Method which clear all selected owners belonging to this selectable object ( for fast presentation draw ))#" )
        .def("ClearDynamicHighlight",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> &  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> &  ) >(&SelectMgr_SelectableObject::ClearDynamicHighlight),
             R"#(Method that needs to be implemented when the object manages selection and dynamic highlighting on its own. Clears or invalidates dynamic highlight presentation. By default it clears immediate draw of given presentation manager.)#"  , py::arg("theMgr"))
        .def("HilightOwnerWithColor",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const opencascade::handle<Prs3d_Drawer> & ,  const opencascade::handle<SelectMgr_EntityOwner> &  ) >(&SelectMgr_SelectableObject::HilightOwnerWithColor),
             R"#(Method which hilight an owner belonging to this selectable object ( for fast presentation draw ))#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theOwner"))
        .def("IsAutoHilight",
             (Standard_Boolean (SelectMgr_SelectableObject::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::IsAutoHilight),
             R"#(If returns True, the old mechanism for highlighting selected objects is used (HilightSelected Method may be empty). If returns False, the HilightSelected method will be fully responsible for highlighting selected entity owners belonging to this selectable object.)#" )
        .def("SetAutoHilight",
             (void (SelectMgr_SelectableObject::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Standard_Boolean  ) >(&SelectMgr_SelectableObject::SetAutoHilight),
             R"#(Set AutoHilight property to true or false Sets up Transform Persistence Mode for this object)#"  , py::arg("newAutoHilight"))
        .def("GetHilightPresentation",
             (opencascade::handle<Prs3d_Presentation> (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> &  ) ) static_cast<opencascade::handle<Prs3d_Presentation> (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> &  ) >(&SelectMgr_SelectableObject::GetHilightPresentation),
             R"#(None)#"  , py::arg("TheMgr"))
        .def("GetSelectPresentation",
             (opencascade::handle<Prs3d_Presentation> (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> &  ) ) static_cast<opencascade::handle<Prs3d_Presentation> (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager3d> &  ) >(&SelectMgr_SelectableObject::GetSelectPresentation),
             R"#(None)#"  , py::arg("TheMgr"))
        .def("ErasePresentations",
             (void (SelectMgr_SelectableObject::*)( Standard_Boolean  ) ) static_cast<void (SelectMgr_SelectableObject::*)( Standard_Boolean  ) >(&SelectMgr_SelectableObject::ErasePresentations),
             R"#(Removes presentations returned by GetHilightPresentation() and GetSelectPresentation().)#"  , py::arg("theToRemove"))
        .def("SetZLayer",
             (void (SelectMgr_SelectableObject::*)( const Graphic3d_ZLayerId  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Graphic3d_ZLayerId  ) >(&SelectMgr_SelectableObject::SetZLayer),
             R"#(Set Z layer ID and update all presentations of the selectable object. The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.)#"  , py::arg("theLayerId"))
        .def("UpdateSelection",
             (void (SelectMgr_SelectableObject::*)( const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Standard_Integer  ) >(&SelectMgr_SelectableObject::UpdateSelection),
             R"#(Sets update status FULL to selections of the object. Must be used as the only method of UpdateSelection from outer classes to prevent BVH structures from being outdated.)#"  , py::arg("theMode")=static_cast<const Standard_Integer>(- 1))
        .def("BoundingBox",
             (void (SelectMgr_SelectableObject::*)( Bnd_Box &  ) ) static_cast<void (SelectMgr_SelectableObject::*)( Bnd_Box &  ) >(&SelectMgr_SelectableObject::BoundingBox),
             R"#(Returns bounding box of selectable object by storing its minimum and maximum 3d coordinates to output parameters)#"  , py::arg("theBndBox"))
        .def("SetAssemblyOwner",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_EntityOwner> & ,  const Standard_Integer  ) >(&SelectMgr_SelectableObject::SetAssemblyOwner),
             R"#(Sets common entity owner for assembly sensitive object entities)#"  , py::arg("theOwner"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1))
        .def("BndBoxOfSelected",
             (Bnd_Box (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_IndexedMapOfOwner> &  ) ) static_cast<Bnd_Box (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_IndexedMapOfOwner> &  ) >(&SelectMgr_SelectableObject::BndBoxOfSelected),
             R"#(Returns a bounding box of sensitive entities with the owners given if they are a part of activated selection)#"  , py::arg("theOwners"))
        .def("GlobalSelectionMode",
             (Standard_Integer (SelectMgr_SelectableObject::*)() const) static_cast<Standard_Integer (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::GlobalSelectionMode),
             R"#(Returns the mode for selection of object as a whole)#" )
        .def("GlobalSelOwner",
             (opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_SelectableObject::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::GlobalSelOwner),
             R"#(Returns the owner of mode for selection of object as a whole)#" )
        .def("GetAssemblyOwner",
             (const opencascade::handle<SelectMgr_EntityOwner> & (SelectMgr_SelectableObject::*)() const) static_cast<const opencascade::handle<SelectMgr_EntityOwner> & (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::GetAssemblyOwner),
             R"#(Returns common entity owner if the object is an assembly)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_SelectableObject::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_SelectableObject::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_SelectableObjectSet , shared_ptr<SelectMgr_SelectableObjectSet>  >>(m.attr("SelectMgr_SelectableObjectSet"))
        .def(py::init<  >()  )
    // methods
        .def("Append",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_SelectableObjectSet::Append),
             R"#(Adds the new selectable object to the set. The selectable object is placed into one of the predefined subsets depending on its persistence type. After adding an object, this method marks the corresponding BVH tree for rebuild.)#"  , py::arg("theObject"))
        .def("Remove",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_SelectableObjectSet::Remove),
             R"#(Removes the selectable object from the set. The selectable object is removed from the subset it has been placed into. After removing an object, this method marks the corresponding BVH tree for rebuild.)#"  , py::arg("theObject"))
        .def("ChangeSubset",
             (void (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_SelectableObjectSet::ChangeSubset),
             R"#(Performs necessary updates when object's persistence types changes. This method should be called right after changing transformation persistence flags of the objects and before updating BVH tree - to provide up-to-date state of the object set.)#"  , py::arg("theObject"))
        .def("UpdateBVH",
             (void (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<Graphic3d_Camera> & ,   const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Graphic3d_WorldViewProjState & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<Graphic3d_Camera> & ,   const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Graphic3d_WorldViewProjState & ,  const Standard_Integer ,  const Standard_Integer  ) >(&SelectMgr_SelectableObjectSet::UpdateBVH),
             R"#(Updates outdated BVH trees and remembers the last state of the camera view-projection matrices and viewport (window) dimensions.)#"  , py::arg("theCamera"),  py::arg("theProjectionMat"),  py::arg("theWorldViewMat"),  py::arg("theViewState"),  py::arg("theViewportWidth"),  py::arg("theViewportHeight"))
        .def("MarkDirty",
             (void (SelectMgr_SelectableObjectSet::*)() ) static_cast<void (SelectMgr_SelectableObjectSet::*)() >(&SelectMgr_SelectableObjectSet::MarkDirty),
             R"#(Marks every BVH subset for update.)#" )
        .def("Contains",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const>(&SelectMgr_SelectableObjectSet::Contains),
             R"#(Returns true if this objects set contains theObject given.)#"  , py::arg("theObject"))
        .def("IsEmpty",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)() const>(&SelectMgr_SelectableObjectSet::IsEmpty),
             R"#(Returns true if the object set does not contain any selectable objects.)#" )
        .def("IsEmpty",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset  ) const) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset  ) const>(&SelectMgr_SelectableObjectSet::IsEmpty),
             R"#(Returns true if the specified object subset is empty.)#"  , py::arg("theSubset"))
        .def("GetObjectById",
             (const opencascade::handle<SelectMgr_SelectableObject> & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset ,  const Standard_Integer  ) const) static_cast<const opencascade::handle<SelectMgr_SelectableObject> & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset ,  const Standard_Integer  ) const>(&SelectMgr_SelectableObjectSet::GetObjectById),
             R"#(Returns object from subset theSubset by theIndex given. The method allows to get selectable object referred by the index of an element of the subset's BVH tree.)#"  , py::arg("theSubset"),  py::arg("theIndex"))
        .def("BVH",
             (const opencascade::handle<BVH_Tree<Standard_Real, 3> > & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset  ) const) static_cast<const opencascade::handle<BVH_Tree<Standard_Real, 3> > & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset  ) const>(&SelectMgr_SelectableObjectSet::BVH),
             R"#(Returns computed BVH for the theSubset given.)#"  , py::arg("theSubset"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_SelectingVolumeManager , shared_ptr<SelectMgr_SelectingVolumeManager>  , SelectBasics_SelectingVolumeManager >>(m.attr("SelectMgr_SelectingVolumeManager"))
        .def(py::init< Standard_Boolean >()  , py::arg("theToAllocateFrustums")=static_cast<Standard_Boolean>(Standard_True) )
    // methods
        .def("ScaleAndTransform",
             (SelectMgr_SelectingVolumeManager (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer ,  const gp_GTrsf & ,  const opencascade::handle<SelectMgr_FrustumBuilder> &  ) const) static_cast<SelectMgr_SelectingVolumeManager (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer ,  const gp_GTrsf & ,  const opencascade::handle<SelectMgr_FrustumBuilder> &  ) const>(&SelectMgr_SelectingVolumeManager::ScaleAndTransform),
             R"#(IMPORTANT: Scaling makes sense only for frustum built on a single point! Note that this method does not perform any checks on type of the frustum.)#"  , py::arg("theScaleFactor"),  py::arg("theTrsf"),  py::arg("theBuilder")=static_cast<const opencascade::handle<SelectMgr_FrustumBuilder> &>(NULL))
        .def("GetActiveSelectionType",
             (Standard_Integer (SelectMgr_SelectingVolumeManager::*)() const) static_cast<Standard_Integer (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetActiveSelectionType),
             R"#(None)#" )
        .def("SetActiveSelectionType",
             (void (SelectMgr_SelectingVolumeManager::*)( const SelectBasics_SelectingVolumeManager::SelectionType &  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const SelectBasics_SelectingVolumeManager::SelectionType &  ) >(&SelectMgr_SelectingVolumeManager::SetActiveSelectionType),
             R"#(None)#"  , py::arg("theType"))
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::Camera),
             R"#(Returns current camera definition.)#" )
        .def("SetCamera",
             (void (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<Graphic3d_Camera>  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<Graphic3d_Camera>  ) >(&SelectMgr_SelectingVolumeManager::SetCamera),
             R"#(Updates camera projection and orientation matrices in all selecting volumes)#"  , py::arg("theCamera"))
        .def("SetCamera",
             (void (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Standard_Boolean ,  const Graphic3d_WorldViewProjState &  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Mat4<Standard_Real> & ,   const NCollection_Mat4<Standard_Real> & ,  const Standard_Boolean ,  const Graphic3d_WorldViewProjState &  ) >(&SelectMgr_SelectingVolumeManager::SetCamera),
             R"#(Updates camera projection and orientation matrices in all selecting volumes)#"  , py::arg("theProjection"),  py::arg("theWorldView"),  py::arg("theIsOrthographic"),  py::arg("theWVPState")=static_cast<const Graphic3d_WorldViewProjState &>(Graphic3d_WorldViewProjState ( )))
        .def("ProjectionMatrix",
             (const Graphic3d_Mat4d & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const Graphic3d_Mat4d & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::ProjectionMatrix),
             R"#(Returns current projection transformation common for all selecting volumes)#" )
        .def("WorldViewMatrix",
             (const Graphic3d_Mat4d & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const Graphic3d_Mat4d & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::WorldViewMatrix),
             R"#(Returns current world view transformation common for all selecting volumes)#" )
        .def("WorldViewProjState",
             (const Graphic3d_WorldViewProjState & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const Graphic3d_WorldViewProjState & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::WorldViewProjState),
             R"#(Returns current camera world view projection transformation state common for all selecting volumes)#" )
        .def("SetViewport",
             (void (SelectMgr_SelectingVolumeManager::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const Standard_Real ,  const Standard_Real ,  const Standard_Real ,  const Standard_Real  ) >(&SelectMgr_SelectingVolumeManager::SetViewport),
             R"#(Updates viewport in all selecting volumes)#"  , py::arg("theX"),  py::arg("theY"),  py::arg("theWidth"),  py::arg("theHeight"))
        .def("SetPixelTolerance",
             (void (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer  ) >(&SelectMgr_SelectingVolumeManager::SetPixelTolerance),
             R"#(Updates pixel tolerance in all selecting volumes)#"  , py::arg("theTolerance"))
        .def("SetWindowSize",
             (void (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer ,  const Standard_Integer  ) >(&SelectMgr_SelectingVolumeManager::SetWindowSize),
             R"#(Updates window size in all selecting volumes)#"  , py::arg("theWidth"),  py::arg("theHeight"))
        .def("BuildSelectingVolume",
             (void (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt2d &  ) >(&SelectMgr_SelectingVolumeManager::BuildSelectingVolume),
             R"#(Builds rectangular selecting frustum for point selection)#"  , py::arg("thePoint"))
        .def("BuildSelectingVolume",
             (void (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&SelectMgr_SelectingVolumeManager::BuildSelectingVolume),
             R"#(Builds rectangular selecting frustum for box selection)#"  , py::arg("theMinPt"),  py::arg("theMaxPt"))
        .def("BuildSelectingVolume",
             (void (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt2d> &  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt2d> &  ) >(&SelectMgr_SelectingVolumeManager::BuildSelectingVolume),
             R"#(Builds set of triangular selecting frustums for polyline selection)#"  , py::arg("thePoints"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theInside")=static_cast<Standard_Boolean *>(NULL))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt &  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<TColgp_HArray1OfPnt> & ,  Standard_Integer ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<TColgp_HArray1OfPnt> & ,  Standard_Integer ,  Standard_Real &  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPts"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt> & ,  Standard_Integer ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt> & ,  Standard_Integer ,  Standard_Real &  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPts"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Integer ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Integer ,  Standard_Real &  ) >(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("DistToGeometryCenter",
             (Standard_Real (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt &  ) ) static_cast<Standard_Real (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt &  ) >(&SelectMgr_SelectingVolumeManager::DistToGeometryCenter),
             R"#(Measures distance between 3d projection of user-picked screen point and given point theCOG)#"  , py::arg("theCOG"))
        .def("DetectedPoint",
             (gp_Pnt (SelectMgr_SelectingVolumeManager::*)( const Standard_Real  ) const) static_cast<gp_Pnt (SelectMgr_SelectingVolumeManager::*)( const Standard_Real  ) const>(&SelectMgr_SelectingVolumeManager::DetectedPoint),
             R"#(Calculates the point on a view ray that was detected during the run of selection algo by given depth. Throws exception if active selection type is not Point.)#"  , py::arg("theDepth"))
        .def("IsClipped",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const Graphic3d_SequenceOfHClipPlane & ,  const Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const Graphic3d_SequenceOfHClipPlane & ,  const Standard_Real &  ) >(&SelectMgr_SelectingVolumeManager::IsClipped),
             R"#(Checks if the point of sensitive in which selection was detected belongs to the region defined by clipping planes)#"  , py::arg("thePlanes"),  py::arg("theDepth"))
        .def("AllowOverlapDetection",
             (void (SelectMgr_SelectingVolumeManager::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const Standard_Boolean  ) >(&SelectMgr_SelectingVolumeManager::AllowOverlapDetection),
             R"#(Is used for rectangular selection only If theIsToAllow is false, only fully included sensitives will be detected, otherwise the algorithm will mark both included and overlapped entities as matched)#"  , py::arg("theIsToAllow"))
        .def("IsOverlapAllowed",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::IsOverlapAllowed),
             R"#(None)#" )
        .def("ViewClipping",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::ViewClipping),
             R"#(Return view clipping planes.)#" )
        .def("SetViewClipping",
             (void (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<Graphic3d_SequenceOfHClipPlane> &  ) >(&SelectMgr_SelectingVolumeManager::SetViewClipping),
             R"#(Valid for point selection only! Computes depth range for global (defined for the whole view) clipping planes.)#"  , py::arg("thePlanes"))
        .def("SetViewClippingEnabled",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const Standard_Boolean  ) ) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const Standard_Boolean  ) >(&SelectMgr_SelectingVolumeManager::SetViewClippingEnabled),
             R"#(Set if view clipping plane is enabled or not.)#"  , py::arg("theToEnable"))
        .def("GetVertices",
             (const gp_Pnt * (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const gp_Pnt * (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetVertices),
             R"#(A set of helper functions that return rectangular selecting frustum data)#" )
        .def("GetNearPickedPnt",
             (gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const) static_cast<gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetNearPickedPnt),
             R"#(Valid only for point and rectangular selection. Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto near view frustum plane)#" )
        .def("GetFarPickedPnt",
             (gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const) static_cast<gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetFarPickedPnt),
             R"#(Valid only for point and rectangular selection. Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto far view frustum plane)#" )
        .def("ActiveVolume",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_SelectingVolumeManager::*)() const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::ActiveVolume),
             R"#(Returns active selecting volume that was built during last run of OCCT selection mechanism)#" )
        .def("GetPlanes",
             (void (SelectMgr_SelectingVolumeManager::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const) static_cast<void (SelectMgr_SelectingVolumeManager::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const>(&SelectMgr_SelectingVolumeManager::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
    // methods using call by reference i.s.o. return
        .def("WindowSize",
             []( SelectMgr_SelectingVolumeManager &self   ){ Standard_Integer  theWidth; Standard_Integer  theHeight; self.WindowSize(theWidth,theHeight); return std::make_tuple(theWidth,theHeight); },
             R"#(None)#" )
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_Selection ,opencascade::handle<SelectMgr_Selection>  , Standard_Transient >>(m.attr("SelectMgr_Selection"))
        .def(py::init< const Standard_Integer >()  , py::arg("theModeIdx")=static_cast<const Standard_Integer>(0) )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_Selection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::DynamicType),
             R"#(None)#" )
        .def("Destroy",
             (void (SelectMgr_Selection::*)() ) static_cast<void (SelectMgr_Selection::*)() >(&SelectMgr_Selection::Destroy),
             R"#(None)#" )
        .def("Add",
             (void (SelectMgr_Selection::*)( const opencascade::handle<SelectBasics_SensitiveEntity> &  ) ) static_cast<void (SelectMgr_Selection::*)( const opencascade::handle<SelectBasics_SensitiveEntity> &  ) >(&SelectMgr_Selection::Add),
             R"#(Adds the sensitive primitive to the list of stored entities in this object. Raises NullObject if the primitive is a null handle.)#"  , py::arg("theSensitive"))
        .def("Clear",
             (void (SelectMgr_Selection::*)() ) static_cast<void (SelectMgr_Selection::*)() >(&SelectMgr_Selection::Clear),
             R"#(empties the selection from all the stored entities)#" )
        .def("IsEmpty",
             (Standard_Boolean (SelectMgr_Selection::*)() const) static_cast<Standard_Boolean (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::IsEmpty),
             R"#(returns true if no sensitive entity is stored.)#" )
        .def("Mode",
             (Standard_Integer (SelectMgr_Selection::*)() const) static_cast<Standard_Integer (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::Mode),
             R"#(returns the selection mode represented by this selection)#" )
        .def("Entities",
             (const NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity> > & (SelectMgr_Selection::*)() const) static_cast<const NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity> > & (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::Entities),
             R"#(Return entities.)#" )
        .def("ChangeEntities",
             (NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity> > & (SelectMgr_Selection::*)() ) static_cast<NCollection_Vector<opencascade::handle<SelectMgr_SensitiveEntity> > & (SelectMgr_Selection::*)() >(&SelectMgr_Selection::ChangeEntities),
             R"#(Return entities.)#" )
        .def("Init",
             (void (SelectMgr_Selection::*)() ) static_cast<void (SelectMgr_Selection::*)() >(&SelectMgr_Selection::Init),
             R"#(Begins an iteration scanning for sensitive primitives.)#" )
        .def("More",
             (Standard_Boolean (SelectMgr_Selection::*)() const) static_cast<Standard_Boolean (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::More),
             R"#(Continues the iteration scanning for sensitive primitives with the mode defined in this framework.)#" )
        .def("Next",
             (void (SelectMgr_Selection::*)() ) static_cast<void (SelectMgr_Selection::*)() >(&SelectMgr_Selection::Next),
             R"#(Returns the next sensitive primitive found in the iteration. This is a scan for entities with the mode defined in this framework.)#" )
        .def("Sensitive",
             (const opencascade::handle<SelectMgr_SensitiveEntity> & (SelectMgr_Selection::*)() const) static_cast<const opencascade::handle<SelectMgr_SensitiveEntity> & (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::Sensitive),
             R"#(Returns any sensitive primitive in this framework.)#" )
        .def("UpdateStatus",
             (SelectMgr_TypeOfUpdate (SelectMgr_Selection::*)() const) static_cast<SelectMgr_TypeOfUpdate (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::UpdateStatus),
             R"#(Returns the flag UpdateFlag. This flage gives the update status of this framework in a ViewerSelector object: - full - partial, or - none.)#" )
        .def("UpdateStatus",
             (void (SelectMgr_Selection::*)( const SelectMgr_TypeOfUpdate  ) ) static_cast<void (SelectMgr_Selection::*)( const SelectMgr_TypeOfUpdate  ) >(&SelectMgr_Selection::UpdateStatus),
             R"#(None)#"  , py::arg("theStatus"))
        .def("UpdateBVHStatus",
             (void (SelectMgr_Selection::*)( const SelectMgr_TypeOfBVHUpdate  ) ) static_cast<void (SelectMgr_Selection::*)( const SelectMgr_TypeOfBVHUpdate  ) >(&SelectMgr_Selection::UpdateBVHStatus),
             R"#(None)#"  , py::arg("theStatus"))
        .def("BVHUpdateStatus",
             (SelectMgr_TypeOfBVHUpdate (SelectMgr_Selection::*)() const) static_cast<SelectMgr_TypeOfBVHUpdate (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::BVHUpdateStatus),
             R"#(None)#" )
        .def("GetSelectionState",
             (SelectMgr_StateOfSelection (SelectMgr_Selection::*)() const) static_cast<SelectMgr_StateOfSelection (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::GetSelectionState),
             R"#(Returns status of selection)#" )
        .def("SetSelectionState",
             (void (SelectMgr_Selection::*)( const SelectMgr_StateOfSelection  ) const) static_cast<void (SelectMgr_Selection::*)( const SelectMgr_StateOfSelection  ) const>(&SelectMgr_Selection::SetSelectionState),
             R"#(Sets status of selection)#"  , py::arg("theState"))
        .def("Sensitivity",
             (Standard_Integer (SelectMgr_Selection::*)() const) static_cast<Standard_Integer (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::Sensitivity),
             R"#(Returns sensitivity of the selection)#" )
        .def("SetSensitivity",
             (void (SelectMgr_Selection::*)( const Standard_Integer  ) ) static_cast<void (SelectMgr_Selection::*)( const Standard_Integer  ) >(&SelectMgr_Selection::SetSensitivity),
             R"#(Changes sensitivity of the selection and all its entities to the given value. IMPORTANT: This method does not update any outer selection structures, so for proper updates use SelectMgr_SelectionManager::SetSelectionSensitivity method.)#"  , py::arg("theNewSens"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_Selection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_Selection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_SelectionManager ,opencascade::handle<SelectMgr_SelectionManager>  , Standard_Transient >>(m.attr("SelectMgr_SelectionManager"))
        .def(py::init<  >()  )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_SelectionManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_SelectionManager::*)() const>(&SelectMgr_SelectionManager::DynamicType),
             R"#(None)#" )
        .def("Add",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_ViewerSelector> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_ViewerSelector> &  ) >(&SelectMgr_SelectionManager::Add),
             R"#(Adds the viewer selector theSelector to the list of known items.)#"  , py::arg("theSelector"))
        .def("Remove",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_ViewerSelector> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_ViewerSelector> &  ) >(&SelectMgr_SelectionManager::Remove),
             R"#(Removes viewer selector theSelector from the list of known items.)#"  , py::arg("theSelector"))
        .def("Contains",
             (Standard_Boolean (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_ViewerSelector> &  ) const) static_cast<Standard_Boolean (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_ViewerSelector> &  ) const>(&SelectMgr_SelectionManager::Contains),
             R"#(Returns true if the manager contains the viewer selector theSelector in a list of known items.)#"  , py::arg("theSelector"))
        .def("Contains",
             (Standard_Boolean (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const) static_cast<Standard_Boolean (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const>(&SelectMgr_SelectionManager::Contains),
             R"#(Returns true if the manager contains the selectable object theObject.)#"  , py::arg("theObject"))
        .def("Load",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer  ) >(&SelectMgr_SelectionManager::Load),
             R"#(Loads and computes selection mode theMode (if it is not equal to -1) in global context and adds selectable object to BVH tree. If the object theObject has an already calculated selection with mode theMode and it was removed, the selection will be recalculated.)#"  , py::arg("theObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1))
        .def("Load",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_ViewerSelector> & ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_ViewerSelector> & ,  const Standard_Integer  ) >(&SelectMgr_SelectionManager::Load),
             R"#(Loads and computes selection mode theMode (if it is not equal to -1) and adds selectable object to BVH tree. Does not perform check of existence of theObject in global context before addition, but adds theSelector to local context.)#"  , py::arg("theObject"),  py::arg("theSelector"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1))
        .def("Remove",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_SelectionManager::Remove),
             R"#(Removes selectable object theObject from all viewer selectors it was added to previously, removes it from all contexts and clears all computed selections of theObject.)#"  , py::arg("theObject"))
        .def("Remove",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) >(&SelectMgr_SelectionManager::Remove),
             R"#(Removes theObject from theSelector, does not clear selections and unbind theObject from context maps.)#"  , py::arg("theObject"),  py::arg("theSelector"))
        .def("Activate",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) >(&SelectMgr_SelectionManager::Activate),
             R"#(Activates the selection mode theMode in the selector theSelector for the selectable object anObject. By default, theMode is equal to 0. If theSelector is set to default (NULL), the selection with the mode theMode will be activated in all the viewers available.)#"  , py::arg("theObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(0),  py::arg("theSelector")=static_cast<const opencascade::handle<SelectMgr_ViewerSelector> &>(Handle ( SelectMgr_ViewerSelector ) ( )))
        .def("Deactivate",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) >(&SelectMgr_SelectionManager::Deactivate),
             R"#(Deactivates mode theMode of theObject in theSelector. If theMode value is set to default (-1), all active selection modes will be deactivated. Likewise, if theSelector value is set to default (NULL), theMode will be deactivated in all viewer selectors.)#"  , py::arg("theObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1),  py::arg("theSelector")=static_cast<const opencascade::handle<SelectMgr_ViewerSelector> &>(Handle ( SelectMgr_ViewerSelector ) ( )))
        .def("IsActivated",
             (Standard_Boolean (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) const) static_cast<Standard_Boolean (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) const>(&SelectMgr_SelectionManager::IsActivated),
             R"#(Returns true if the selection with theMode is active for the selectable object theObject and selector theSelector. If all parameters are set to default values, it returns it there is any active selection in any known viewer selector for object theObject.)#"  , py::arg("theObject"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1),  py::arg("theSelector")=static_cast<const opencascade::handle<SelectMgr_ViewerSelector> &>(Handle ( SelectMgr_ViewerSelector ) ( )))
        .def("ClearSelectionStructures",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) >(&SelectMgr_SelectionManager::ClearSelectionStructures),
             R"#(Removes sensitive entities from all viewer selectors after method Clear() was called to the selection they belonged to or it was recomputed somehow.)#"  , py::arg("theObj"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1),  py::arg("theSelector")=static_cast<const opencascade::handle<SelectMgr_ViewerSelector> &>(Handle ( SelectMgr_ViewerSelector ) ( )))
        .def("RestoreSelectionStructures",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const opencascade::handle<SelectMgr_ViewerSelector> &  ) >(&SelectMgr_SelectionManager::RestoreSelectionStructures),
             R"#(Re-adds newly calculated sensitive entities of recomputed selection defined by mode theMode to all viewer selectors contained that selection.)#"  , py::arg("theObj"),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1),  py::arg("theSelector")=static_cast<const opencascade::handle<SelectMgr_ViewerSelector> &>(Handle ( SelectMgr_ViewerSelector ) ( )))
        .def("RecomputeSelection",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Boolean ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Boolean ,  const Standard_Integer  ) >(&SelectMgr_SelectionManager::RecomputeSelection),
             R"#(Recomputes activated selections of theObject for all known viewer selectors according to theMode specified. If theMode is set to default (-1), then all activated selections will be recomputed. If theIsForce is set to true, then selection mode theMode for object theObject will be recomputed regardless of its activation status.)#"  , py::arg("theObject"),  py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theMode")=static_cast<const Standard_Integer>(- 1))
        .def("Update",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Boolean  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Boolean  ) >(&SelectMgr_SelectionManager::Update),
             R"#(Updates all selections of theObject in all viewer selectors according to its current update status. If theIsForce is set to true, the call is equal to recomputation.)#"  , py::arg("theObject"),  py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Update",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_ViewerSelector> & ,  const Standard_Boolean  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_ViewerSelector> & ,  const Standard_Boolean  ) >(&SelectMgr_SelectionManager::Update),
             R"#(Updates all selections of theObject in specified viewer selector according to its current update status. If theIsForce is set to true, the call is equal to recomputation.)#"  , py::arg("theObject"),  py::arg("theSelector"),  py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_True))
        .def("SetUpdateMode",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const SelectMgr_TypeOfUpdate  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const SelectMgr_TypeOfUpdate  ) >(&SelectMgr_SelectionManager::SetUpdateMode),
             R"#(Sets type of update of all selections of theObject to the given theType.)#"  , py::arg("theObject"),  py::arg("theType"))
        .def("SetUpdateMode",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const SelectMgr_TypeOfUpdate  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const SelectMgr_TypeOfUpdate  ) >(&SelectMgr_SelectionManager::SetUpdateMode),
             R"#(Sets type of update of selection with theMode of theObject to the given theType.)#"  , py::arg("theObject"),  py::arg("theMode"),  py::arg("theType"))
        .def("SetSelectionSensitivity",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer ,  const Standard_Integer  ) >(&SelectMgr_SelectionManager::SetSelectionSensitivity),
             R"#(Allows to manage sensitivity of a particular selection of interactive object theObject and changes previous sensitivity value of all sensitive entities in selection with theMode to the given theNewSensitivity.)#"  , py::arg("theObject"),  py::arg("theMode"),  py::arg("theNewSens"))
        .def("UpdateSelection",
             (void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_SelectionManager::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_SelectionManager::UpdateSelection),
             R"#(Re-adds selectable object in BVHs in all viewer selectors.)#"  , py::arg("theObj"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_SelectionManager::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_SelectionManager::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_SensitiveEntity ,opencascade::handle<SelectMgr_SensitiveEntity>  , Standard_Transient >>(m.attr("SelectMgr_SensitiveEntity"))
        .def(py::init< const opencascade::handle<SelectBasics_SensitiveEntity> & >()  , py::arg("theEntity") )
    // methods
        .def("Clear",
             (void (SelectMgr_SensitiveEntity::*)() ) static_cast<void (SelectMgr_SensitiveEntity::*)() >(&SelectMgr_SensitiveEntity::Clear),
             R"#(Clears up all resources and memory)#" )
        .def("BaseSensitive",
             (const opencascade::handle<SelectBasics_SensitiveEntity> & (SelectMgr_SensitiveEntity::*)() const) static_cast<const opencascade::handle<SelectBasics_SensitiveEntity> & (SelectMgr_SensitiveEntity::*)() const>(&SelectMgr_SensitiveEntity::BaseSensitive),
             R"#(Returns related instance of SelectBasics class)#" )
        .def("IsActiveForSelection",
             (Standard_Boolean (SelectMgr_SensitiveEntity::*)() const) static_cast<Standard_Boolean (SelectMgr_SensitiveEntity::*)() const>(&SelectMgr_SensitiveEntity::IsActiveForSelection),
             R"#(Returns true if this entity belongs to the active selection mode of parent object)#" )
        .def("ResetSelectionActiveStatus",
             (void (SelectMgr_SensitiveEntity::*)() const) static_cast<void (SelectMgr_SensitiveEntity::*)() const>(&SelectMgr_SensitiveEntity::ResetSelectionActiveStatus),
             R"#(Marks entity as inactive for selection)#" )
        .def("SetActiveForSelection",
             (void (SelectMgr_SensitiveEntity::*)() const) static_cast<void (SelectMgr_SensitiveEntity::*)() const>(&SelectMgr_SensitiveEntity::SetActiveForSelection),
             R"#(Marks entity as active for selection)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_SensitiveEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_SensitiveEntity::*)() const>(&SelectMgr_SensitiveEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_SensitiveEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_SensitiveEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_SensitiveEntitySet , shared_ptr<SelectMgr_SensitiveEntitySet>  >>(m.attr("SelectMgr_SensitiveEntitySet"))
        .def(py::init< const opencascade::handle<Select3D_BVHBuilder3d> & >()  , py::arg("theBuilder") )
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_SensitiveEntitySet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_SensitiveEntitySet::*)() const>(&SelectMgr_SensitiveEntitySet::DynamicType),
             R"#(None)#" )
        .def("Append",
             (void (SelectMgr_SensitiveEntitySet::*)( const opencascade::handle<SelectMgr_SensitiveEntity> &  ) ) static_cast<void (SelectMgr_SensitiveEntitySet::*)( const opencascade::handle<SelectMgr_SensitiveEntity> &  ) >(&SelectMgr_SensitiveEntitySet::Append),
             R"#(Adds new entity to the set and marks BVH tree for rebuild)#"  , py::arg("theEntity"))
        .def("Append",
             (void (SelectMgr_SensitiveEntitySet::*)( const opencascade::handle<SelectMgr_Selection> &  ) ) static_cast<void (SelectMgr_SensitiveEntitySet::*)( const opencascade::handle<SelectMgr_Selection> &  ) >(&SelectMgr_SensitiveEntitySet::Append),
             R"#(Adds every entity of selection theSelection to the set and marks BVH tree for rebuild)#"  , py::arg("theSelection"))
        .def("Remove",
             (void (SelectMgr_SensitiveEntitySet::*)( const opencascade::handle<SelectMgr_Selection> &  ) ) static_cast<void (SelectMgr_SensitiveEntitySet::*)( const opencascade::handle<SelectMgr_Selection> &  ) >(&SelectMgr_SensitiveEntitySet::Remove),
             R"#(Removes every entity of selection theSelection from the set and marks BVH tree for rebuild)#"  , py::arg("theSelection"))
        .def("Box",
             (Select3D_BndBox3d (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer  ) const) static_cast<Select3D_BndBox3d (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer  ) const>(&SelectMgr_SensitiveEntitySet::Box),
             R"#(Returns bounding box of entity with index theIdx)#"  , py::arg("theIndex"))
        .def("Center",
             (Standard_Real (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer ,  const Standard_Integer  ) const) static_cast<Standard_Real (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer ,  const Standard_Integer  ) const>(&SelectMgr_SensitiveEntitySet::Center),
             R"#(Returns geometry center of sensitive entity index theIdx along the given axis theAxis)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer ,  const Standard_Integer  ) ) static_cast<void (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer ,  const Standard_Integer  ) >(&SelectMgr_SensitiveEntitySet::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("Size",
             (Standard_Integer (SelectMgr_SensitiveEntitySet::*)() const) static_cast<Standard_Integer (SelectMgr_SensitiveEntitySet::*)() const>(&SelectMgr_SensitiveEntitySet::Size),
             R"#(Returns the amount of entities)#" )
        .def("GetSensitiveById",
             (const opencascade::handle<SelectMgr_SensitiveEntity> & (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<SelectMgr_SensitiveEntity> & (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer  ) const>(&SelectMgr_SensitiveEntitySet::GetSensitiveById),
             R"#(Returns the entity with index theIndex in the set)#"  , py::arg("theIndex"))
        .def("Sensitives",
             (const SelectMgr_IndexedMapOfHSensitive & (SelectMgr_SensitiveEntitySet::*)() const) static_cast<const SelectMgr_IndexedMapOfHSensitive & (SelectMgr_SensitiveEntitySet::*)() const>(&SelectMgr_SensitiveEntitySet::Sensitives),
             R"#(Returns map of entities.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_SensitiveEntitySet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_SensitiveEntitySet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_SortCriterion , shared_ptr<SelectMgr_SortCriterion>  >>(m.attr("SelectMgr_SortCriterion"))
        .def(py::init<  >()  )
    // methods
        .def("IsGreater",
             (bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion &  ) const) static_cast<bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion &  ) const>(&SelectMgr_SortCriterion::IsGreater),
             R"#(Compare with another item.)#"  , py::arg("theOther"))
        .def("IsLower",
             (bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion &  ) const) static_cast<bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion &  ) const>(&SelectMgr_SortCriterion::IsLower),
             R"#(Compare with another item.)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_ToleranceMap , shared_ptr<SelectMgr_ToleranceMap>  >>(m.attr("SelectMgr_ToleranceMap"))
        .def(py::init<  >()  )
    // methods
        .def("Add",
             (void (SelectMgr_ToleranceMap::*)( const Standard_Integer &  ) ) static_cast<void (SelectMgr_ToleranceMap::*)( const Standard_Integer &  ) >(&SelectMgr_ToleranceMap::Add),
             R"#(Adds the value given to map, checks if the current tolerance value should be replaced by theTolerance)#"  , py::arg("theTolerance"))
        .def("Decrement",
             (void (SelectMgr_ToleranceMap::*)( const Standard_Integer &  ) ) static_cast<void (SelectMgr_ToleranceMap::*)( const Standard_Integer &  ) >(&SelectMgr_ToleranceMap::Decrement),
             R"#(Decrements a counter of the tolerance given, checks if the current tolerance value should be recalculated)#"  , py::arg("theTolerance"))
        .def("Tolerance",
             (Standard_Integer (SelectMgr_ToleranceMap::*)() const) static_cast<Standard_Integer (SelectMgr_ToleranceMap::*)() const>(&SelectMgr_ToleranceMap::Tolerance),
             R"#(Returns a current tolerance that must be applied)#" )
        .def("SetCustomTolerance",
             (void (SelectMgr_ToleranceMap::*)( const Standard_Integer  ) ) static_cast<void (SelectMgr_ToleranceMap::*)( const Standard_Integer  ) >(&SelectMgr_ToleranceMap::SetCustomTolerance),
             R"#(Sets tolerance to the given one and disables adaptive checks)#"  , py::arg("theTolerance"))
        .def("ResetDefaults",
             (void (SelectMgr_ToleranceMap::*)() ) static_cast<void (SelectMgr_ToleranceMap::*)() >(&SelectMgr_ToleranceMap::ResetDefaults),
             R"#(Unsets a custom tolerance and enables adaptive checks)#" )
        .def("CustomTolerance",
             (Standard_Integer (SelectMgr_ToleranceMap::*)() const) static_cast<Standard_Integer (SelectMgr_ToleranceMap::*)() const>(&SelectMgr_ToleranceMap::CustomTolerance),
             R"#(Returns the value of custom tolerance regardless of it validity)#" )
        .def("IsCustomTolSet",
             (Standard_Boolean (SelectMgr_ToleranceMap::*)() const) static_cast<Standard_Boolean (SelectMgr_ToleranceMap::*)() const>(&SelectMgr_ToleranceMap::IsCustomTolSet),
             R"#(Returns true if custom tolerance value is greater than zero)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_TriangularFrustum , shared_ptr<SelectMgr_TriangularFrustum>  >>(m.attr("SelectMgr_TriangularFrustum"))
        .def(py::init<  >()  )
    // methods
        .def("Build",
             (void (SelectMgr_TriangularFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) ) static_cast<void (SelectMgr_TriangularFrustum::*)( const gp_Pnt2d & ,  const gp_Pnt2d & ,  const gp_Pnt2d &  ) >(&SelectMgr_TriangularFrustum::Build),
             R"#(Creates new triangular frustum with bases of triangles with vertices theP1, theP2 and theP3 projections onto near and far view frustum planes (only for triangular frustums))#"  , py::arg("theP1"),  py::arg("theP2"),  py::arg("theP3"))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustum::*)( const Standard_Integer ,  const gp_GTrsf &  ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustum::*)( const Standard_Integer ,  const gp_GTrsf &  ) const>(&SelectMgr_TriangularFrustum::ScaleAndTransform),
             R"#(Returns a copy of the frustum transformed according to the matrix given)#"  , py::arg("theScale"),  py::arg("theTrsf"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) >(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theMinPt"),  py::arg("theMaxPt"),  py::arg("theInside"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("Clear",
             (void (SelectMgr_TriangularFrustum::*)() ) static_cast<void (SelectMgr_TriangularFrustum::*)() >(&SelectMgr_TriangularFrustum::Clear),
             R"#(Nullifies the handle to corresponding builder instance to prevent memory leaks)#" )
        .def("GetPlanes",
             (void (SelectMgr_TriangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const) static_cast<void (SelectMgr_TriangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const>(&SelectMgr_TriangularFrustum::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_TriangularFrustum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_TriangularFrustum::*)() const>(&SelectMgr_TriangularFrustum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_TriangularFrustum::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_TriangularFrustum::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_ViewClipRange , shared_ptr<SelectMgr_ViewClipRange>  >>(m.attr("SelectMgr_ViewClipRange"))
        .def(py::init<  >()  )
    // methods
        .def("Set",
             (void (SelectMgr_ViewClipRange::*)( const Standard_Real ,  const Standard_Real  ) ) static_cast<void (SelectMgr_ViewClipRange::*)( const Standard_Real ,  const Standard_Real  ) >(&SelectMgr_ViewClipRange::Set),
             R"#(Sets boundaries and validates view clipping range)#"  , py::arg("theDepthMin"),  py::arg("theDepthMax"))
        .def("IsValid",
             (Standard_Boolean (SelectMgr_ViewClipRange::*)() const) static_cast<Standard_Boolean (SelectMgr_ViewClipRange::*)() const>(&SelectMgr_ViewClipRange::IsValid),
             R"#(Returns true if clip range is set and depth of each matched primitive must be tested for satisfying the defined interval)#" )
        .def("MaxDepth",
             (Standard_Real (SelectMgr_ViewClipRange::*)() const) static_cast<Standard_Real (SelectMgr_ViewClipRange::*)() const>(&SelectMgr_ViewClipRange::MaxDepth),
             R"#(Returns the upper bound of valid depth range)#" )
        .def("MinDepth",
             (Standard_Real (SelectMgr_ViewClipRange::*)() const) static_cast<Standard_Real (SelectMgr_ViewClipRange::*)() const>(&SelectMgr_ViewClipRange::MinDepth),
             R"#(Returns the lower bound of valid depth range)#" )
        .def("Clear",
             (void (SelectMgr_ViewClipRange::*)() ) static_cast<void (SelectMgr_ViewClipRange::*)() >(&SelectMgr_ViewClipRange::Clear),
             R"#(Invalidates view clipping range)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_ViewerSelector ,opencascade::handle<SelectMgr_ViewerSelector>  , Standard_Transient >>(m.attr("SelectMgr_ViewerSelector"))
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_ViewerSelector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::DynamicType),
             R"#(None)#" )
        .def("Clear",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::Clear),
             R"#(Empties all the tables, removes all selections...)#" )
        .def("Sensitivity",
             (Standard_Real (SelectMgr_ViewerSelector::*)() const) static_cast<Standard_Real (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::Sensitivity),
             R"#(returns the Sensitivity of picking)#" )
        .def("SortResult",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::SortResult),
             R"#(Sorts the detected entites by priority and distance. to be redefined if other criterion are used...)#" )
        .def("OnePicked",
             (opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::OnePicked),
             R"#(Returns the picked element with the highest priority, and which is the closest to the last successful mouse position.)#" )
        .def("SetPickClosest",
             (void (SelectMgr_ViewerSelector::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const Standard_Boolean  ) >(&SelectMgr_ViewerSelector::SetPickClosest),
             R"#(Set preference of selecting one object for OnePicked() method: - If True, objects with less depth (distance fron the view plane) are preferred regardless of priority (priority is used then to choose among objects with similar depth), - If False, objects with higher priority are preferred regardless of the depth which is used to choose among objects of the same priority.)#"  , py::arg("theToPreferClosest"))
        .def("NbPicked",
             (Standard_Integer (SelectMgr_ViewerSelector::*)() const) static_cast<Standard_Integer (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::NbPicked),
             R"#(Returns the number of detected owners.)#" )
        .def("ClearPicked",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::ClearPicked),
             R"#(Clears picking results.)#" )
        .def("Picked",
             (opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const>(&SelectMgr_ViewerSelector::Picked),
             R"#(Returns the entity Owner for the object picked at specified position.)#"  , py::arg("theRank"))
        .def("PickedData",
             (const SelectMgr_SortCriterion & (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const) static_cast<const SelectMgr_SortCriterion & (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const>(&SelectMgr_ViewerSelector::PickedData),
             R"#(Returns the Entity for the object picked at specified position.)#"  , py::arg("theRank"))
        .def("PickedEntity",
             (const opencascade::handle<SelectBasics_SensitiveEntity> & (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const) static_cast<const opencascade::handle<SelectBasics_SensitiveEntity> & (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const>(&SelectMgr_ViewerSelector::PickedEntity),
             R"#(Returns the Entity for the object picked at specified position.)#"  , py::arg("theRank"))
        .def("PickedPoint",
             (gp_Pnt (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const) static_cast<gp_Pnt (SelectMgr_ViewerSelector::*)( const Standard_Integer  ) const>(&SelectMgr_ViewerSelector::PickedPoint),
             R"#(Returns the 3D point (intersection of picking axis with the object nearest to eye) for the object picked at specified position.)#"  , py::arg("theRank"))
        .def("Contains",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const>(&SelectMgr_ViewerSelector::Contains),
             R"#(None)#"  , py::arg("theObject"))
        .def("EntitySetBuilder",
             (const opencascade::handle<Select3D_BVHBuilder3d> (SelectMgr_ViewerSelector::*)() ) static_cast<const opencascade::handle<Select3D_BVHBuilder3d> (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::EntitySetBuilder),
             R"#(Returns the default builder used to construct BVH of entity set.)#" )
        .def("SetEntitySetBuilder",
             (void (SelectMgr_ViewerSelector::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const opencascade::handle<Select3D_BVHBuilder3d> &  ) >(&SelectMgr_ViewerSelector::SetEntitySetBuilder),
             R"#(Sets the default builder used to construct BVH of entity set. The new builder will be also assigned for already defined objects, but computed BVH trees will not be invalidated.)#"  , py::arg("theBuilder"))
        .def("Modes",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  NCollection_List<Standard_Integer> & ,  const SelectMgr_StateOfSelection  ) const) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  NCollection_List<Standard_Integer> & ,  const SelectMgr_StateOfSelection  ) const>(&SelectMgr_ViewerSelector::Modes),
             R"#(Returns the list of selection modes ModeList found in this selector for the selectable object aSelectableObject. Returns true if aSelectableObject is referenced inside this selector; returns false if the object is not present in this selector.)#"  , py::arg("theSelectableObject"),  py::arg("theModeList"),  py::arg("theWantedState")=static_cast<const SelectMgr_StateOfSelection>(SelectMgr_SOS_Any))
        .def("IsActive",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer  ) const>(&SelectMgr_ViewerSelector::IsActive),
             R"#(Returns true if the selectable object aSelectableObject having the selection mode aMode is active in this selector.)#"  , py::arg("theSelectableObject"),  py::arg("theMode"))
        .def("IsInside",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer  ) const) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Integer  ) const>(&SelectMgr_ViewerSelector::IsInside),
             R"#(Returns true if the selectable object aSelectableObject having the selection mode aMode is in this selector.)#"  , py::arg("theSelectableObject"),  py::arg("theMode"))
        .def("Status",
             (SelectMgr_StateOfSelection (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_Selection> &  ) const) static_cast<SelectMgr_StateOfSelection (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_Selection> &  ) const>(&SelectMgr_ViewerSelector::Status),
             R"#(Returns the selection status Status of the selection aSelection.)#"  , py::arg("theSelection"))
        .def("Status",
             (TCollection_AsciiString (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const) static_cast<TCollection_AsciiString (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) const>(&SelectMgr_ViewerSelector::Status),
             R"#(None)#"  , py::arg("theSelectableObject"))
        .def("ActiveOwners",
             (void (SelectMgr_ViewerSelector::*)( NCollection_List<opencascade::handle<SelectBasics_EntityOwner> > &  ) const) static_cast<void (SelectMgr_ViewerSelector::*)( NCollection_List<opencascade::handle<SelectBasics_EntityOwner> > &  ) const>(&SelectMgr_ViewerSelector::ActiveOwners),
             R"#(Returns the list of active entity owners)#"  , py::arg("theOwners"))
        .def("AddSelectableObject",
             (void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_ViewerSelector::AddSelectableObject),
             R"#(Adds new object to the map of selectable objects)#"  , py::arg("theObject"))
        .def("AddSelectionToObject",
             (void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_Selection> &  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_Selection> &  ) >(&SelectMgr_ViewerSelector::AddSelectionToObject),
             R"#(Adds new selection to the object and builds its BVH tree)#"  , py::arg("theObject"),  py::arg("theSelection"))
        .def("MoveSelectableObject",
             (void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_ViewerSelector::MoveSelectableObject),
             R"#(Moves existing object from set of not transform persistence objects to set of transform persistence objects (or vice versa).)#"  , py::arg("theObject"))
        .def("RemoveSelectableObject",
             (void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> &  ) >(&SelectMgr_ViewerSelector::RemoveSelectableObject),
             R"#(Removes selectable object from map of selectable ones)#"  , py::arg("theObject"))
        .def("RemoveSelectionOfObject",
             (void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_Selection> &  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const opencascade::handle<SelectMgr_Selection> &  ) >(&SelectMgr_ViewerSelector::RemoveSelectionOfObject),
             R"#(Removes selection of the object and marks its BVH tree for rebuild)#"  , py::arg("theObject"),  py::arg("theSelection"))
        .def("RebuildObjectsTree",
             (void (SelectMgr_ViewerSelector::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const Standard_Boolean  ) >(&SelectMgr_ViewerSelector::RebuildObjectsTree),
             R"#(Marks BVH of selectable objects for rebuild. Parameter theIsForce set as true guarantees that 1st level BVH for the viewer selector will be rebuilt during this call)#"  , py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("RebuildSensitivesTree",
             (void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Boolean  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const opencascade::handle<SelectMgr_SelectableObject> & ,  const Standard_Boolean  ) >(&SelectMgr_ViewerSelector::RebuildSensitivesTree),
             R"#(Marks BVH of sensitive entities of particular selectable object for rebuild. Parameter theIsForce set as true guarantees that 2nd level BVH for the object given will be rebuilt during this call)#"  , py::arg("theObject"),  py::arg("theIsForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("GetManager",
             (SelectMgr_SelectingVolumeManager & (SelectMgr_ViewerSelector::*)() ) static_cast<SelectMgr_SelectingVolumeManager & (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::GetManager),
             R"#(Returns instance of selecting volume manager of the viewer selector)#" )
        .def("ResetSelectionActivationStatus",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::ResetSelectionActivationStatus),
             R"#(Marks all added sensitive entities of all objects as non-selectable)#" )
        .def("AllowOverlapDetection",
             (void (SelectMgr_ViewerSelector::*)( const Standard_Boolean  ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const Standard_Boolean  ) >(&SelectMgr_ViewerSelector::AllowOverlapDetection),
             R"#(Is used for rectangular selection only If theIsToAllow is false, only fully included sensitives will be detected, otherwise the algorithm will mark both included and overlapped entities as matched)#"  , py::arg("theIsToAllow"))
        .def("Init",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::Init),
             R"#(Begins an iteration scanning for the owners detected at a position in the view.)#" )
        .def("More",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)() ) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::More),
             R"#(Continues the interation scanning for the owners detected at a position in the view, or continues the iteration scanning for the owner closest to the position in the view.)#" )
        .def("Next",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::Next),
             R"#(Returns the next owner found in the iteration. This is a scan for the owners detected at a position in the view.)#" )
        .def("Picked",
             (opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::Picked),
             R"#(Returns the current selected entity detected by the selector;)#" )
        .def("InitDetected",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::InitDetected),
             R"#(Initializes internal iterator for stored detected sensitive entities)#" )
        .def("NextDetected",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::NextDetected),
             R"#(Makes a step along the map of detected sensitive entities and their owners)#" )
        .def("MoreDetected",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)() ) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::MoreDetected),
             R"#(Returns true if iterator of map of detected sensitive entities has reached its end)#" )
        .def("DetectedEntity",
             (const opencascade::handle<SelectBasics_SensitiveEntity> & (SelectMgr_ViewerSelector::*)() const) static_cast<const opencascade::handle<SelectBasics_SensitiveEntity> & (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::DetectedEntity),
             R"#(Returns sensitive entity that was detected during the previous run of selection algorithm)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_ViewerSelector::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_ViewerSelector::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_CompositionFilter ,opencascade::handle<SelectMgr_CompositionFilter> ,Py_SelectMgr_CompositionFilter , SelectMgr_Filter >>(m.attr("SelectMgr_CompositionFilter"))
    // methods
        .def("Add",
             (void (SelectMgr_CompositionFilter::*)( const opencascade::handle<SelectMgr_Filter> &  ) ) static_cast<void (SelectMgr_CompositionFilter::*)( const opencascade::handle<SelectMgr_Filter> &  ) >(&SelectMgr_CompositionFilter::Add),
             R"#(Adds the filter afilter to a filter object created by a filter class inheriting this framework.)#"  , py::arg("afilter"))
        .def("Remove",
             (void (SelectMgr_CompositionFilter::*)( const opencascade::handle<SelectMgr_Filter> &  ) ) static_cast<void (SelectMgr_CompositionFilter::*)( const opencascade::handle<SelectMgr_Filter> &  ) >(&SelectMgr_CompositionFilter::Remove),
             R"#(Removes the filter aFilter from this framework.)#"  , py::arg("aFilter"))
        .def("IsEmpty",
             (Standard_Boolean (SelectMgr_CompositionFilter::*)() const) static_cast<Standard_Boolean (SelectMgr_CompositionFilter::*)() const>(&SelectMgr_CompositionFilter::IsEmpty),
             R"#(Returns true if this framework is empty.)#" )
        .def("IsIn",
             (Standard_Boolean (SelectMgr_CompositionFilter::*)( const opencascade::handle<SelectMgr_Filter> &  ) const) static_cast<Standard_Boolean (SelectMgr_CompositionFilter::*)( const opencascade::handle<SelectMgr_Filter> &  ) const>(&SelectMgr_CompositionFilter::IsIn),
             R"#(Returns true if the filter aFilter is in this framework.)#"  , py::arg("aFilter"))
        .def("StoredFilters",
             (const SelectMgr_ListOfFilter & (SelectMgr_CompositionFilter::*)() const) static_cast<const SelectMgr_ListOfFilter & (SelectMgr_CompositionFilter::*)() const>(&SelectMgr_CompositionFilter::StoredFilters),
             R"#(Returns the list of stored filters from this framework.)#" )
        .def("Clear",
             (void (SelectMgr_CompositionFilter::*)() ) static_cast<void (SelectMgr_CompositionFilter::*)() >(&SelectMgr_CompositionFilter::Clear),
             R"#(Clears the filters used in this framework.)#" )
        .def("ActsOn",
             (Standard_Boolean (SelectMgr_CompositionFilter::*)( const TopAbs_ShapeEnum  ) const) static_cast<Standard_Boolean (SelectMgr_CompositionFilter::*)( const TopAbs_ShapeEnum  ) const>(&SelectMgr_CompositionFilter::ActsOn),
             R"#(None)#"  , py::arg("aStandardMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_CompositionFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_CompositionFilter::*)() const>(&SelectMgr_CompositionFilter::DynamicType),
             R"#(None)#" )
        .def("StoredFilters",
             (const SelectMgr_ListOfFilter & (SelectMgr_CompositionFilter::*)() const) static_cast<const SelectMgr_ListOfFilter & (SelectMgr_CompositionFilter::*)() const>(&SelectMgr_CompositionFilter::StoredFilters),
             R"#(Returns the list of stored filters from this framework.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_CompositionFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_CompositionFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_TriangularFrustumSet ,opencascade::handle<SelectMgr_TriangularFrustumSet>  , SelectMgr_BaseFrustum >>(m.attr("SelectMgr_TriangularFrustumSet"))
        .def(py::init<  >()  )
    // methods
        .def("Build",
             (void (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt2d> &  ) ) static_cast<void (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt2d> &  ) >(&SelectMgr_TriangularFrustumSet::Build),
             R"#(Meshes polygon bounded by polyline. Than organizes a set of triangular frustums, where each triangle's projection onto near and far view frustum planes is considered as a frustum base)#"  , py::arg("thePoints"))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustumSet::*)( const Standard_Integer ,  const gp_GTrsf &  ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustumSet::*)( const Standard_Integer ,  const gp_GTrsf &  ) const>(&SelectMgr_TriangularFrustumSet::ScaleAndTransform),
             R"#(Returns a copy of the frustum with all sub-volumes transformed according to the matrix given)#"  , py::arg("theScale"),  py::arg("theTrsf"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,   const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) >(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"),  py::arg("theInside"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("thePnt"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt> & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & ,  const gp_Pnt & ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theDepth"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) ) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Select3D_TypeOfSensitivity ,  Standard_Real &  ) >(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("theDepth"))
        .def("GetPlanes",
             (void (SelectMgr_TriangularFrustumSet::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const) static_cast<void (SelectMgr_TriangularFrustumSet::*)( NCollection_Vector<SelectMgr_Vec4> &  ) const>(&SelectMgr_TriangularFrustumSet::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_AndFilter ,opencascade::handle<SelectMgr_AndFilter>  , SelectMgr_CompositionFilter >>(m.attr("SelectMgr_AndFilter"))
        .def(py::init<  >()  )
    // methods
        .def("IsOk",
             (Standard_Boolean (SelectMgr_AndFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (SelectMgr_AndFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&SelectMgr_AndFilter::IsOk),
             R"#(None)#"  , py::arg("anobj"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_AndFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_AndFilter::*)() const>(&SelectMgr_AndFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_AndFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_AndFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;


    static_cast<py::class_<SelectMgr_OrFilter ,opencascade::handle<SelectMgr_OrFilter>  , SelectMgr_CompositionFilter >>(m.attr("SelectMgr_OrFilter"))
        .def(py::init<  >()  )
    // methods
        .def("IsOk",
             (Standard_Boolean (SelectMgr_OrFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const) static_cast<Standard_Boolean (SelectMgr_OrFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> &  ) const>(&SelectMgr_OrFilter::IsOk),
             R"#(None)#"  , py::arg("anobj"))
        .def("SetDisabledObjects",
             (void (SelectMgr_OrFilter::*)( const opencascade::handle<Graphic3d_NMapOfTransient> &  ) ) static_cast<void (SelectMgr_OrFilter::*)( const opencascade::handle<Graphic3d_NMapOfTransient> &  ) >(&SelectMgr_OrFilter::SetDisabledObjects),
             R"#(Disable selection of specified objects.)#"  , py::arg("theObjects"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_OrFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_OrFilter::*)() const>(&SelectMgr_OrFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_OrFilter::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&SelectMgr_OrFilter::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // Additional methods
;

// functions
// ./opencascade/SelectMgr_SequenceOfFilter.hxx
// ./opencascade/SelectMgr_IndexedDataMapOfOwnerCriterion.hxx
// ./opencascade/SelectMgr_SensitiveEntity.hxx
// ./opencascade/SelectMgr_EntityOwner.hxx
// ./opencascade/SelectMgr_DataMapOfObjectSelectors.hxx
// ./opencascade/SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors.hxx
// ./opencascade/SelectMgr_Filter.hxx
// ./opencascade/SelectMgr_SequenceOfSelector.hxx
// ./opencascade/SelectMgr_TypeOfUpdate.hxx
// ./opencascade/SelectMgr_Selection.hxx
// ./opencascade/SelectMgr_SelectingVolumeManager.hxx
// ./opencascade/SelectMgr_ListIteratorOfListOfFilter.hxx
// ./opencascade/SelectMgr_SelectionManager.hxx
// ./opencascade/SelectMgr_StateOfSelection.hxx
// ./opencascade/SelectMgr_CompositionFilter.hxx
// ./opencascade/SelectMgr_SelectableObjectSet.hxx
// ./opencascade/SelectMgr_ViewClipRange.hxx
// ./opencascade/SelectMgr_SelectableObject.hxx
// ./opencascade/SelectMgr_FrustumBuilder.hxx
// ./opencascade/SelectMgr_ViewerSelector.hxx
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
// ./opencascade/SelectMgr_IndexedMapOfOwner.hxx
// ./opencascade/SelectMgr_RectangularFrustum.hxx
// ./opencascade/SelectMgr_TypeOfBVHUpdate.hxx
// ./opencascade/SelectMgr_ToleranceMap.hxx
// ./opencascade/SelectMgr_SortCriterion.hxx
// ./opencascade/SelectMgr_SequenceOfOwner.hxx
// ./opencascade/SelectMgr_BaseFrustum.hxx
// ./opencascade/SelectMgr_SensitiveEntitySet.hxx
// ./opencascade/SelectMgr_TriangularFrustum.hxx
// ./opencascade/SelectMgr_AndFilter.hxx
// ./opencascade/SelectMgr_ListOfFilter.hxx
// ./opencascade/SelectMgr_Frustum.hxx
// ./opencascade/SelectMgr_PickingStrategy.hxx
// ./opencascade/SelectMgr_OrFilter.hxx
// ./opencascade/SelectMgr_VectorTypes.hxx
// ./opencascade/SelectMgr_SequenceOfSelection.hxx
// ./opencascade/SelectMgr_SOPtr.hxx

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<SelectMgr_Filter> >(m,"SelectMgr_SequenceOfFilter");  
    register_template_NCollection_IndexedDataMap<opencascade::handle<SelectBasics_EntityOwner>, SelectMgr_SortCriterion, TColStd_MapTransientHasher>(m,"SelectMgr_IndexedDataMapOfOwnerCriterion");  
    register_template_NCollection_DataMap<opencascade::handle<SelectMgr_SelectableObject>, SelectMgr_SequenceOfSelector, TColStd_MapTransientHasher>(m,"SelectMgr_DataMapOfObjectSelectors");  
    register_template_NCollection_Sequence<opencascade::handle<SelectMgr_ViewerSelector> >(m,"SelectMgr_SequenceOfSelector");  
    register_template_NCollection_List<opencascade::handle<SelectMgr_TriangularFrustum> >(m,"SelectMgr_TriangFrustums");  
    register_template_NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> >(m,"SelectMgr_SequenceOfOwner");  
    register_template_NCollection_List<opencascade::handle<SelectMgr_Filter> >(m,"SelectMgr_ListOfFilter");  
    register_template_NCollection_Vec3<Standard_Real>(m,"SelectMgr_Vec3");  
    register_template_NCollection_Sequence<opencascade::handle<SelectMgr_Selection> >(m,"SelectMgr_SequenceOfSelection");  


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
