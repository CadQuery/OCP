
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <V3d_Viewer.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SensitiveEntitySet.hxx>
#include <gp_Ax1.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <SelectMgr_EntityOwner.hxx>

// module includes
#include <SelectMgr_AndFilter.hxx>
#include <SelectMgr_BaseFrustum.hxx>
#include <SelectMgr_CompositionFilter.hxx>
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
// ./opencascade/SelectMgr_SequenceOfSelection.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_VectorTypes.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_ViewerSelector.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_SequenceOfFilter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_IndexedDataMapOfOwnerCriterion.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_ListOfFilter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_ListOfFilter.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/SelectMgr_SequenceOfOwner.hxx
#include "NCollection_tmpl.hxx"


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
        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & theSelection,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,theSelection,theMode) };


        // protected pure virtual

        void Compute(const opencascade::handle<PrsMgr_PresentationManager> & thePrsMgr,const opencascade::handle<Prs3d_Presentation> & thePrs,const Standard_Integer theMode) override { PYBIND11_OVERLOAD_PURE(void,PrsMgr_PresentableObject,Compute,thePrsMgr,thePrs,theMode) };

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


    static_cast<py::class_<SelectMgr_BaseFrustum ,opencascade::handle<SelectMgr_BaseFrustum> , Standard_Transient>>(m.attr("SelectMgr_BaseFrustum"))
    // constructors
    // custom constructors
    // methods
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (SelectMgr_BaseFrustum::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (SelectMgr_BaseFrustum::*)() const>(&SelectMgr_BaseFrustum::Camera),
             R"#(Return camera definition.)#" )
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds volume according to the point and given pixel tolerance)#"  , py::arg(""))
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds volume according to the selected rectangle)#"  , py::arg(""),  py::arg(""))
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (SelectMgr_BaseFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds volume according to the triangle given)#"  , py::arg(""),  py::arg(""),  py::arg(""))
        .def("Build",
             (void (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt2d> & ) >(&SelectMgr_BaseFrustum::Build),
             R"#(Builds selecting volumes set according to polyline points)#"  , py::arg(""))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_BaseFrustum::*)( const Standard_Integer , const gp_GTrsf & ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_BaseFrustum::*)( const Standard_Integer , const gp_GTrsf & ) const>(&SelectMgr_BaseFrustum::ScaleAndTransform),
             R"#(IMPORTANT: Scaling makes sense only for frustum built on a single point! Note that this method does not perform any checks on type of the frustum. Returns a copy of the frustum resized according to the scale factor given and transforms it using the matrix given. There are no default parameters, but in case if: - transformation only is needed: must be initialized as any negative value; - scale only is needed: must be set to gp_Identity.)#"  , py::arg(""),  py::arg(""))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_BaseFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const>(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theInside")=static_cast<Standard_Boolean *>(NULL))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & ) const>(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point Does not perform depth calculation, so this method is defined as helper function for inclusion test. Therefore, its implementation makes sense only for rectangular frustum with box selection mode activated.)#"  , py::arg("thePnt"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_BaseFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_BaseFrustum::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_BaseFrustum::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_BaseFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePt1"),  py::arg("thePt2"),  py::arg("thePt3"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("DistToGeometryCenter",
             (Standard_Real (SelectMgr_BaseFrustum::*)( const gp_Pnt & ) const) static_cast<Standard_Real (SelectMgr_BaseFrustum::*)( const gp_Pnt & ) const>(&SelectMgr_BaseFrustum::DistToGeometryCenter),
             R"#(Measures distance between 3d projection of user-picked screen point and given point theCOG)#"  , py::arg("theCOG"))
        .def("DetectedPoint",
             (gp_Pnt (SelectMgr_BaseFrustum::*)( const Standard_Real ) const) static_cast<gp_Pnt (SelectMgr_BaseFrustum::*)( const Standard_Real ) const>(&SelectMgr_BaseFrustum::DetectedPoint),
             R"#(None)#"  , py::arg("theDepth"))
        .def("GetPlanes",
             (void (SelectMgr_BaseFrustum::*)( NCollection_Vector<SelectMgr_Vec4> & ) const) static_cast<void (SelectMgr_BaseFrustum::*)( NCollection_Vector<SelectMgr_Vec4> & ) const>(&SelectMgr_BaseFrustum::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
        .def("DumpJson",
             (void (SelectMgr_BaseFrustum::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (SelectMgr_BaseFrustum::*)( std::ostream & , const Standard_Integer ) const>(&SelectMgr_BaseFrustum::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_BaseFrustum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_BaseFrustum::*)() const>(&SelectMgr_BaseFrustum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_BaseFrustum::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_EntityOwner ,opencascade::handle<SelectMgr_EntityOwner> , Standard_Transient>>(m.attr("SelectMgr_EntityOwner"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_EntityOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::DynamicType),
             R"#(None)#" )
        .def("Priority",
             (Standard_Integer (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Integer (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::Priority),
             R"#(Return selection priority (within range [0-9]) for results with the same depth; 0 by default. Example - selection of shapes: the owners are selectable objects (presentations) a user can give vertex priority [3], edges [2] faces [1] shape [0], so that if during selection one vertex one edge and one face are simultaneously detected, the vertex will only be hilighted.)#" )
        .def("SetPriority",
             (void (SelectMgr_EntityOwner::*)( Standard_Integer ) ) static_cast<void (SelectMgr_EntityOwner::*)( Standard_Integer ) >(&SelectMgr_EntityOwner::SetPriority),
             R"#(Sets the selectable priority of the owner within range [0-9].)#"  , py::arg("thePriority"))
        .def("HasSelectable",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::HasSelectable),
             R"#(Returns true if there is a selectable object to serve as an owner.)#" )
        .def("Selectable",
             (opencascade::handle<SelectMgr_SelectableObject> (SelectMgr_EntityOwner::*)() const) static_cast<opencascade::handle<SelectMgr_SelectableObject> (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::Selectable),
             R"#(Returns a selectable object detected in the working context.)#" )
        .def("SetSelectable",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) >(&SelectMgr_EntityOwner::SetSelectable),
             R"#(Sets the selectable object.)#"  , py::arg("theSelObj"))
        .def("HandleMouseClick",
             (Standard_Boolean (SelectMgr_EntityOwner::*)(  const NCollection_Vec2<Standard_Integer> & , Aspect_VKeyMouse , Aspect_VKeyFlags , bool ) ) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)(  const NCollection_Vec2<Standard_Integer> & , Aspect_VKeyMouse , Aspect_VKeyFlags , bool ) >(&SelectMgr_EntityOwner::HandleMouseClick),
             R"#(Handle mouse button click event. Does nothing by default and returns FALSE.)#"  , py::arg("thePoint"),  py::arg("theButton"),  py::arg("theModifiers"),  py::arg("theIsDoubleClick"))
        .def("IsHilighted",
             (Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) const>(&SelectMgr_EntityOwner::IsHilighted),
             R"#(Returns true if the presentation manager highlights selections corresponding to the selection mode.)#"  , py::arg("thePrsMgr"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("HilightWithColor",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) >(&SelectMgr_EntityOwner::HilightWithColor),
             R"#(Highlights selectable object's presentation with display mode in presentation manager with given highlight style. Also a check for auto-highlight is performed - if selectable object manages highlighting on its own, execution will be passed to SelectMgr_SelectableObject::HilightOwnerWithColor method.)#"  , py::arg("thePrsMgr"),  py::arg("theStyle"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Unhilight",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&SelectMgr_EntityOwner::Unhilight),
             R"#(Removes highlighting from the owner of a detected selectable object in the presentation manager. This object could be the owner of a sensitive primitive.)#"  , py::arg("thePrsMgr"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&SelectMgr_EntityOwner::Clear),
             R"#(Clears the owners matching the value of the selection mode aMode from the presentation manager object aPM.)#"  , py::arg("thePrsMgr"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("HasLocation",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::HasLocation),
             R"#(Returns TRUE if selectable has transformation.)#" )
        .def("Location",
             (TopLoc_Location (SelectMgr_EntityOwner::*)() const) static_cast<TopLoc_Location (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::Location),
             R"#(Returns transformation of selectable.)#" )
        .def("SetLocation",
             (void (SelectMgr_EntityOwner::*)( const TopLoc_Location & ) ) static_cast<void (SelectMgr_EntityOwner::*)( const TopLoc_Location & ) >(&SelectMgr_EntityOwner::SetLocation),
             R"#(Change owner location (callback for handling change of location of selectable object).)#"  , py::arg("theLocation"))
        .def("IsSelected",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::IsSelected),
             R"#(Returns Standard_True if the owner is selected.)#" )
        .def("SetSelected",
             (void (SelectMgr_EntityOwner::*)( const Standard_Boolean ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Standard_Boolean ) >(&SelectMgr_EntityOwner::SetSelected),
             R"#(Set the state of the owner.)#"  , py::arg("theIsSelected"))
        .def("State",
             (Standard_Integer (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Integer (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::State),
             R"#(Returns selection state.)#" )
        .def("State",
             (void (SelectMgr_EntityOwner::*)( const Standard_Integer ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Standard_Integer ) >(&SelectMgr_EntityOwner::State),
             R"#(Set the state of the owner. The method is deprecated. Use SetSelected() instead.)#"  , py::arg("theStatus"))
        .def("IsAutoHilight",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::IsAutoHilight),
             R"#(if owner is not auto hilighted, for group contains many such owners will be called one method HilightSelected of SelectableObject)#" )
        .def("IsForcedHilight",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::IsForcedHilight),
             R"#(if this method returns TRUE the owner will always call method Hilight for SelectableObject when the owner is detected. By default it always return FALSE.)#" )
        .def("SetZLayer",
             (void (SelectMgr_EntityOwner::*)( const Graphic3d_ZLayerId ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Graphic3d_ZLayerId ) >(&SelectMgr_EntityOwner::SetZLayer),
             R"#(Set Z layer ID and update all presentations.)#"  , py::arg("theLayerId"))
        .def("UpdateHighlightTrsf",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<V3d_Viewer> & , const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<V3d_Viewer> & , const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&SelectMgr_EntityOwner::UpdateHighlightTrsf),
             R"#(Implements immediate application of location transformation of parent object to dynamic highlight structure)#"  , py::arg("theViewer"),  py::arg("theManager"),  py::arg("theDispMode"))
        .def("IsSameSelectable",
             (Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) const>(&SelectMgr_EntityOwner::IsSameSelectable),
             R"#(Returns true if pointer to selectable object of this owner is equal to the given one)#"  , py::arg("theOther"))
        .def("ComesFromDecomposition",
             (Standard_Boolean (SelectMgr_EntityOwner::*)() const) static_cast<Standard_Boolean (SelectMgr_EntityOwner::*)() const>(&SelectMgr_EntityOwner::ComesFromDecomposition),
             R"#(Returns TRUE if this owner points to a part of object and FALSE for entire object.)#" )
        .def("SetComesFromDecomposition",
             (void (SelectMgr_EntityOwner::*)( const Standard_Boolean ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Standard_Boolean ) >(&SelectMgr_EntityOwner::SetComesFromDecomposition),
             R"#(Sets flag indicating this owner points to a part of object (TRUE) or to entire object (FALSE).)#"  , py::arg("theIsFromDecomposition"))
        .def("DumpJson",
             (void (SelectMgr_EntityOwner::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (SelectMgr_EntityOwner::*)( std::ostream & , const Standard_Integer ) const>(&SelectMgr_EntityOwner::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
        .def("Set",
             (void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) ) static_cast<void (SelectMgr_EntityOwner::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) >(&SelectMgr_EntityOwner::Set),
             R"#(Sets the selectable object.)#"  , py::arg("theSelObj"))
        .def("Set",
             (void (SelectMgr_EntityOwner::*)( const Standard_Integer ) ) static_cast<void (SelectMgr_EntityOwner::*)( const Standard_Integer ) >(&SelectMgr_EntityOwner::Set),
             R"#(sets the selectable priority of the owner)#"  , py::arg("thePriority"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_EntityOwner::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_Filter ,opencascade::handle<SelectMgr_Filter>,Py_SelectMgr_Filter , Standard_Transient>>(m.attr("SelectMgr_Filter"))
    // constructors
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (SelectMgr_Filter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const) static_cast<Standard_Boolean (SelectMgr_Filter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const>(&SelectMgr_Filter::IsOk),
             R"#(Indicates that the selected Interactive Object passes the filter. The owner, anObj, can be either direct or user. A direct owner is the corresponding construction element, whereas a user is the compound shape of which the entity forms a part. When an object is detected by the mouse - in AIS, this is done through a context selector - its owner is passed to the filter as an argument. If the object returns Standard_True, it is kept; if not, it is rejected. If you are creating a filter class inheriting this framework, and the daughter class is to be used in an AIS local context, you will need to implement the virtual function ActsOn.)#"  , py::arg("anObj"))
        .def("ActsOn",
             (Standard_Boolean (SelectMgr_Filter::*)( const TopAbs_ShapeEnum ) const) static_cast<Standard_Boolean (SelectMgr_Filter::*)( const TopAbs_ShapeEnum ) const>(&SelectMgr_Filter::ActsOn),
             R"#(Returns true in an AIS local context, if this filter operates on a type of subshape defined in a filter class inheriting this framework. This function completes IsOk in an AIS local context.)#"  , py::arg("aStandardMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_Filter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_Filter::*)() const>(&SelectMgr_Filter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_Filter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_FrustumBuilder ,opencascade::handle<SelectMgr_FrustumBuilder> , Standard_Transient>>(m.attr("SelectMgr_FrustumBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_FrustumBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_FrustumBuilder::*)() const>(&SelectMgr_FrustumBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_FrustumBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_RectangularFrustum , shared_ptr<SelectMgr_RectangularFrustum> >>(m.attr("SelectMgr_RectangularFrustum"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Build",
             (void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d & ) ) static_cast<void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d & ) >(&SelectMgr_RectangularFrustum::Build),
             R"#(Builds volume according to the point and given pixel tolerance)#"  , py::arg("thePoint"))
        .def("Build",
             (void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (SelectMgr_RectangularFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & ) >(&SelectMgr_RectangularFrustum::Build),
             R"#(Builds volume according to the selected rectangle)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_RectangularFrustum::*)( const Standard_Integer , const gp_GTrsf & ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_RectangularFrustum::*)( const Standard_Integer , const gp_GTrsf & ) const>(&SelectMgr_RectangularFrustum::ScaleAndTransform),
             R"#(IMPORTANT: Scaling makes sense only for frustum built on a single point! Note that this method does not perform any checks on type of the frustum. Returns a copy of the frustum resized according to the scale factor given and transforms it using the matrix given. There are no default parameters, but in case if: - transformation only is needed: must be initialized as any negative value; - scale only is needed: must be set to gp_Identity.)#"  , py::arg("theScaleFactor"),  py::arg("theTrsf"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const>(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theInside"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ) const>(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_RectangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_RectangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("DistToGeometryCenter",
             (Standard_Real (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ) const) static_cast<Standard_Real (SelectMgr_RectangularFrustum::*)( const gp_Pnt & ) const>(&SelectMgr_RectangularFrustum::DistToGeometryCenter),
             R"#(Measures distance between 3d projection of user-picked screen point and given point theCOG)#"  , py::arg("theCOG"))
        .def("DetectedPoint",
             (gp_Pnt (SelectMgr_RectangularFrustum::*)( const Standard_Real ) const) static_cast<gp_Pnt (SelectMgr_RectangularFrustum::*)( const Standard_Real ) const>(&SelectMgr_RectangularFrustum::DetectedPoint),
             R"#(Calculates the point on a view ray that was detected during the run of selection algo by given depth)#"  , py::arg("theDepth"))
        .def("GetVertices",
             (const gp_Pnt * (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Pnt * (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetVertices),
             R"#(A set of helper functions that return rectangular selecting frustum data)#" )
        .def("GetNearPnt",
             (const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetNearPnt),
             R"#(Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto near view frustum plane)#" )
        .def("GetFarPnt",
             (const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Pnt & (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetFarPnt),
             R"#(Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto far view frustum plane)#" )
        .def("GetViewRayDirection",
             (const gp_Vec & (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Vec & (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetViewRayDirection),
             R"#(Return view ray direction.)#" )
        .def("GetMousePosition",
             (const gp_Pnt2d & (SelectMgr_RectangularFrustum::*)() const) static_cast<const gp_Pnt2d & (SelectMgr_RectangularFrustum::*)() const>(&SelectMgr_RectangularFrustum::GetMousePosition),
             R"#(Return mouse coordinates.)#" )
        .def("GetPlanes",
             (void (SelectMgr_RectangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> & ) const) static_cast<void (SelectMgr_RectangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> & ) const>(&SelectMgr_RectangularFrustum::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_SelectableObject ,opencascade::handle<SelectMgr_SelectableObject>,Py_SelectMgr_SelectableObject , PrsMgr_PresentableObject>>(m.attr("SelectMgr_SelectableObject"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_SelectableObject::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::DynamicType),
             R"#(None)#" )
        .def("ComputeSelection",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & , const Standard_Integer ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & , const Standard_Integer ) >(&SelectMgr_SelectableObject::ComputeSelection),
             R"#(Computes sensitive primitives for the given selection mode - key interface method of Selectable Object.)#"  , py::arg("theSelection"),  py::arg("theMode"))
        .def("AcceptShapeDecomposition",
             (Standard_Boolean (SelectMgr_SelectableObject::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::AcceptShapeDecomposition),
             R"#(Informs the graphic context that the interactive Object may be decomposed into sub-shapes for dynamic selection. The most used Interactive Object is AIS_Shape.)#" )
        .def("HasSelection",
             (Standard_Boolean (SelectMgr_SelectableObject::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (SelectMgr_SelectableObject::*)( const Standard_Integer ) const>(&SelectMgr_SelectableObject::HasSelection),
             R"#(Returns true if a selection corresponding to the selection mode theMode was computed for this object.)#"  , py::arg("theMode"))
        .def("Selections",
             (const SelectMgr_SequenceOfSelection & (SelectMgr_SelectableObject::*)() const) static_cast<const SelectMgr_SequenceOfSelection & (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::Selections),
             R"#(Return the sequence of selections.)#" )
        .def("ResetTransformation",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::ResetTransformation),
             R"#(None)#" )
        .def("UpdateTransformation",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::UpdateTransformation),
             R"#(Recomputes the location of the selection aSelection.)#" )
        .def("UpdateTransformations",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<SelectMgr_Selection> & ) >(&SelectMgr_SelectableObject::UpdateTransformations),
             R"#(Updates locations in all sensitive entities from <aSelection> and in corresponding entity owners.)#"  , py::arg("aSelection"))
        .def("HilightSelected",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > & ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager> & ,  const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > & ) >(&SelectMgr_SelectableObject::HilightSelected),
             R"#(Method which draws selected owners ( for fast presentation draw ))#"  , py::arg("thePrsMgr"),  py::arg("theSeq"))
        .def("ClearSelected",
             (void (SelectMgr_SelectableObject::*)() ) static_cast<void (SelectMgr_SelectableObject::*)() >(&SelectMgr_SelectableObject::ClearSelected),
             R"#(Method which clear all selected owners belonging to this selectable object ( for fast presentation draw ))#" )
        .def("ClearDynamicHighlight",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager> & ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager> & ) >(&SelectMgr_SelectableObject::ClearDynamicHighlight),
             R"#(Method that needs to be implemented when the object manages selection and dynamic highlighting on its own. Clears or invalidates dynamic highlight presentation. By default it clears immediate draw of given presentation manager.)#"  , py::arg("theMgr"))
        .def("HilightOwnerWithColor",
             (void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const opencascade::handle<Prs3d_Drawer> & , const opencascade::handle<SelectMgr_EntityOwner> & ) ) static_cast<void (SelectMgr_SelectableObject::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const opencascade::handle<Prs3d_Drawer> & , const opencascade::handle<SelectMgr_EntityOwner> & ) >(&SelectMgr_SelectableObject::HilightOwnerWithColor),
             R"#(Method which hilight an owner belonging to this selectable object ( for fast presentation draw ))#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theOwner"))
        .def("IsAutoHilight",
             (Standard_Boolean (SelectMgr_SelectableObject::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::IsAutoHilight),
             R"#(If returns True, the old mechanism for highlighting selected objects is used (HilightSelected Method may be empty). If returns False, the HilightSelected method will be fully responsible for highlighting selected entity owners belonging to this selectable object.)#" )
        .def("SetAutoHilight",
             (void (SelectMgr_SelectableObject::*)( const Standard_Boolean ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Standard_Boolean ) >(&SelectMgr_SelectableObject::SetAutoHilight),
             R"#(Set AutoHilight property to true or false.)#"  , py::arg("theAutoHilight"))
        .def("ErasePresentations",
             (void (SelectMgr_SelectableObject::*)( Standard_Boolean ) ) static_cast<void (SelectMgr_SelectableObject::*)( Standard_Boolean ) >(&SelectMgr_SelectableObject::ErasePresentations),
             R"#(Removes presentations returned by GetHilightPresentation() and GetSelectPresentation().)#"  , py::arg("theToRemove"))
        .def("SetZLayer",
             (void (SelectMgr_SelectableObject::*)( const Graphic3d_ZLayerId ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Graphic3d_ZLayerId ) >(&SelectMgr_SelectableObject::SetZLayer),
             R"#(Set Z layer ID and update all presentations of the selectable object. The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.)#"  , py::arg("theLayerId"))
        .def("UpdateSelection",
             (void (SelectMgr_SelectableObject::*)( const Standard_Integer ) ) static_cast<void (SelectMgr_SelectableObject::*)( const Standard_Integer ) >(&SelectMgr_SelectableObject::UpdateSelection),
             R"#(Sets update status FULL to selections of the object. Must be used as the only method of UpdateSelection from outer classes to prevent BVH structures from being outdated.)#"  , py::arg("theMode")=static_cast<const Standard_Integer>(- 1))
        .def("GlobalSelectionMode",
             (Standard_Integer (SelectMgr_SelectableObject::*)() const) static_cast<Standard_Integer (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::GlobalSelectionMode),
             R"#(Returns the mode for selection of object as a whole; 0 by default.)#" )
        .def("GlobalSelOwner",
             (opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_SelectableObject::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::GlobalSelOwner),
             R"#(Returns the owner of mode for selection of object as a whole)#" )
        .def("GetAssemblyOwner",
             (const opencascade::handle<SelectMgr_EntityOwner> & (SelectMgr_SelectableObject::*)() const) static_cast<const opencascade::handle<SelectMgr_EntityOwner> & (SelectMgr_SelectableObject::*)() const>(&SelectMgr_SelectableObject::GetAssemblyOwner),
             R"#(Returns common entity owner if the object is an assembly)#" )
        .def("DumpJson",
             (void (SelectMgr_SelectableObject::*)( std::ostream & , const Standard_Integer ) const) static_cast<void (SelectMgr_SelectableObject::*)( std::ostream & , const Standard_Integer ) const>(&SelectMgr_SelectableObject::DumpJson),
             R"#(Dumps the content of me into the stream)#"  , py::arg("theOStream"),  py::arg("theDepth")=static_cast<const Standard_Integer>(- 1))
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
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_SelectableObject::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_SelectableObjectSet , shared_ptr<SelectMgr_SelectableObjectSet> >>(m.attr("SelectMgr_SelectableObjectSet"))
    // constructors
    // custom constructors
    // methods
        .def("Contains",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) const) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const opencascade::handle<SelectMgr_SelectableObject> & ) const>(&SelectMgr_SelectableObjectSet::Contains),
             R"#(Returns true if this objects set contains theObject given.)#"  , py::arg("theObject"))
        .def("IsEmpty",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)() const>(&SelectMgr_SelectableObjectSet::IsEmpty),
             R"#(Returns true if the object set does not contain any selectable objects.)#" )
        .def("IsEmpty",
             (Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset ) const) static_cast<Standard_Boolean (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset ) const>(&SelectMgr_SelectableObjectSet::IsEmpty),
             R"#(Returns true if the specified object subset is empty.)#"  , py::arg("theSubset"))
        .def("GetObjectById",
             (const opencascade::handle<SelectMgr_SelectableObject> & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset , const Standard_Integer ) const) static_cast<const opencascade::handle<SelectMgr_SelectableObject> & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset , const Standard_Integer ) const>(&SelectMgr_SelectableObjectSet::GetObjectById),
             R"#(Returns object from subset theSubset by theIndex given. The method allows to get selectable object referred by the index of an element of the subset's BVH tree.)#"  , py::arg("theSubset"),  py::arg("theIndex"))
        .def("BVH",
             (const opencascade::handle<BVH_Tree<Standard_Real, 3> > & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset ) const) static_cast<const opencascade::handle<BVH_Tree<Standard_Real, 3> > & (SelectMgr_SelectableObjectSet::*)( const SelectMgr_SelectableObjectSet::BVHSubset ) const>(&SelectMgr_SelectableObjectSet::BVH),
             R"#(Returns computed BVH for the theSubset given.)#"  , py::arg("theSubset"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_SelectingVolumeManager , shared_ptr<SelectMgr_SelectingVolumeManager> , SelectBasics_SelectingVolumeManager>>(m.attr("SelectMgr_SelectingVolumeManager"))
    // constructors
    // custom constructors
    // methods
        .def("ScaleAndTransform",
             (SelectMgr_SelectingVolumeManager (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer , const gp_GTrsf & , const opencascade::handle<SelectMgr_FrustumBuilder> & ) const) static_cast<SelectMgr_SelectingVolumeManager (SelectMgr_SelectingVolumeManager::*)( const Standard_Integer , const gp_GTrsf & , const opencascade::handle<SelectMgr_FrustumBuilder> & ) const>(&SelectMgr_SelectingVolumeManager::ScaleAndTransform),
             R"#(IMPORTANT: Scaling makes sense only for frustum built on a single point! Note that this method does not perform any checks on type of the frustum.)#"  , py::arg("theScaleFactor"),  py::arg("theTrsf"),  py::arg("theBuilder")=static_cast<const opencascade::handle<SelectMgr_FrustumBuilder> &>(NULL))
        .def("GetActiveSelectionType",
             (Standard_Integer (SelectMgr_SelectingVolumeManager::*)() const) static_cast<Standard_Integer (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetActiveSelectionType),
             R"#(None)#" )
        .def("Camera",
             (const opencascade::handle<Graphic3d_Camera> & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const opencascade::handle<Graphic3d_Camera> & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::Camera),
             R"#(Returns current camera definition.)#" )
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , SelectBasics_PickResult & ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theInside")=static_cast<Standard_Boolean *>(NULL))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & , SelectBasics_PickResult & ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<TColgp_HArray1OfPnt> & , Standard_Integer , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const opencascade::handle<TColgp_HArray1OfPnt> & , Standard_Integer , SelectBasics_PickResult & ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPts"),  py::arg("theSensType"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt> & , Standard_Integer , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt> & , Standard_Integer , SelectBasics_PickResult & ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPts"),  py::arg("theSensType"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & , const gp_Pnt & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & , const gp_Pnt & , SelectBasics_PickResult & ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Standard_Integer , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Standard_Integer , SelectBasics_PickResult & ) const>(&SelectMgr_SelectingVolumeManager::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("thePickResult"))
        .def("DistToGeometryCenter",
             (Standard_Real (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ) const) static_cast<Standard_Real (SelectMgr_SelectingVolumeManager::*)( const gp_Pnt & ) const>(&SelectMgr_SelectingVolumeManager::DistToGeometryCenter),
             R"#(Measures distance between 3d projection of user-picked screen point and given point theCOG)#"  , py::arg("theCOG"))
        .def("DetectedPoint",
             (gp_Pnt (SelectMgr_SelectingVolumeManager::*)( const Standard_Real ) const) static_cast<gp_Pnt (SelectMgr_SelectingVolumeManager::*)( const Standard_Real ) const>(&SelectMgr_SelectingVolumeManager::DetectedPoint),
             R"#(Calculates the point on a view ray that was detected during the run of selection algo by given depth. Throws exception if active selection type is not Point.)#"  , py::arg("theDepth"))
        .def("AllowOverlapDetection",
             (void (SelectMgr_SelectingVolumeManager::*)( const Standard_Boolean ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const Standard_Boolean ) >(&SelectMgr_SelectingVolumeManager::AllowOverlapDetection),
             R"#(Is used for rectangular selection only If theIsToAllow is false, only fully included sensitives will be detected, otherwise the algorithm will mark both included and overlapped entities as matched)#"  , py::arg("theIsToAllow"))
        .def("IsOverlapAllowed",
             (Standard_Boolean (SelectMgr_SelectingVolumeManager::*)() const) static_cast<Standard_Boolean (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::IsOverlapAllowed),
             R"#(None)#" )
        .def("ViewClipping",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::ViewClipping),
             R"#(Return view clipping planes.)#" )
        .def("ObjectClipping",
             (const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const opencascade::handle<Graphic3d_SequenceOfHClipPlane> & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::ObjectClipping),
             R"#(Return object clipping planes.)#" )
        .def("ViewClipRanges",
             (const SelectMgr_ViewClipRange & (SelectMgr_SelectingVolumeManager::*)() const) static_cast<const SelectMgr_ViewClipRange & (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::ViewClipRanges),
             R"#(Return clipping range.)#" )
        .def("SetViewClipRanges",
             (void (SelectMgr_SelectingVolumeManager::*)( const SelectMgr_ViewClipRange & ) ) static_cast<void (SelectMgr_SelectingVolumeManager::*)( const SelectMgr_ViewClipRange & ) >(&SelectMgr_SelectingVolumeManager::SetViewClipRanges),
             R"#(Set clipping range.)#"  , py::arg("theRange"))
        .def("GetNearPickedPnt",
             (gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const) static_cast<gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetNearPickedPnt),
             R"#(Valid only for point and rectangular selection. Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto near view frustum plane)#" )
        .def("GetFarPickedPnt",
             (gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const) static_cast<gp_Pnt (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetFarPickedPnt),
             R"#(Valid only for point and rectangular selection. Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto far view frustum plane)#" )
        .def("GetMousePosition",
             (gp_Pnt2d (SelectMgr_SelectingVolumeManager::*)() const) static_cast<gp_Pnt2d (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::GetMousePosition),
             R"#(Return mouse coordinates for Point selection mode.)#" )
        .def("ActiveVolume",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_SelectingVolumeManager::*)() const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_SelectingVolumeManager::*)() const>(&SelectMgr_SelectingVolumeManager::ActiveVolume),
             R"#(Returns active selecting volume that was built during last run of OCCT selection mechanism)#" )
        .def("GetPlanes",
             (void (SelectMgr_SelectingVolumeManager::*)( NCollection_Vector<SelectMgr_Vec4> & ) const) static_cast<void (SelectMgr_SelectingVolumeManager::*)( NCollection_Vector<SelectMgr_Vec4> & ) const>(&SelectMgr_SelectingVolumeManager::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_Selection ,opencascade::handle<SelectMgr_Selection> , Standard_Transient>>(m.attr("SelectMgr_Selection"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_Selection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::DynamicType),
             R"#(None)#" )
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
             (void (SelectMgr_Selection::*)( const SelectMgr_TypeOfUpdate ) ) static_cast<void (SelectMgr_Selection::*)( const SelectMgr_TypeOfUpdate ) >(&SelectMgr_Selection::UpdateStatus),
             R"#(None)#"  , py::arg("theStatus"))
        .def("UpdateBVHStatus",
             (void (SelectMgr_Selection::*)( const SelectMgr_TypeOfBVHUpdate ) ) static_cast<void (SelectMgr_Selection::*)( const SelectMgr_TypeOfBVHUpdate ) >(&SelectMgr_Selection::UpdateBVHStatus),
             R"#(None)#"  , py::arg("theStatus"))
        .def("BVHUpdateStatus",
             (SelectMgr_TypeOfBVHUpdate (SelectMgr_Selection::*)() const) static_cast<SelectMgr_TypeOfBVHUpdate (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::BVHUpdateStatus),
             R"#(None)#" )
        .def("GetSelectionState",
             (SelectMgr_StateOfSelection (SelectMgr_Selection::*)() const) static_cast<SelectMgr_StateOfSelection (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::GetSelectionState),
             R"#(Returns status of selection)#" )
        .def("SetSelectionState",
             (void (SelectMgr_Selection::*)( const SelectMgr_StateOfSelection ) const) static_cast<void (SelectMgr_Selection::*)( const SelectMgr_StateOfSelection ) const>(&SelectMgr_Selection::SetSelectionState),
             R"#(Sets status of selection)#"  , py::arg("theState"))
        .def("Sensitivity",
             (Standard_Integer (SelectMgr_Selection::*)() const) static_cast<Standard_Integer (SelectMgr_Selection::*)() const>(&SelectMgr_Selection::Sensitivity),
             R"#(Returns sensitivity of the selection)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_Selection::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_SelectionManager ,opencascade::handle<SelectMgr_SelectionManager> , Standard_Transient>>(m.attr("SelectMgr_SelectionManager"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_SelectionManager::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_SelectionManager::*)() const>(&SelectMgr_SelectionManager::DynamicType),
             R"#(None)#" )
        .def("Selector",
             (const opencascade::handle<SelectMgr_ViewerSelector> & (SelectMgr_SelectionManager::*)() const) static_cast<const opencascade::handle<SelectMgr_ViewerSelector> & (SelectMgr_SelectionManager::*)() const>(&SelectMgr_SelectionManager::Selector),
             R"#(Return the Selector.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_SelectionManager::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_SensitiveEntity ,opencascade::handle<SelectMgr_SensitiveEntity> , Standard_Transient>>(m.attr("SelectMgr_SensitiveEntity"))
    // constructors
    // custom constructors
    // methods
        .def("BaseSensitive",
             (const opencascade::handle<Select3D_SensitiveEntity> & (SelectMgr_SensitiveEntity::*)() const) static_cast<const opencascade::handle<Select3D_SensitiveEntity> & (SelectMgr_SensitiveEntity::*)() const>(&SelectMgr_SensitiveEntity::BaseSensitive),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_SensitiveEntitySet , shared_ptr<SelectMgr_SensitiveEntitySet> >>(m.attr("SelectMgr_SensitiveEntitySet"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_SensitiveEntitySet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_SensitiveEntitySet::*)() const>(&SelectMgr_SensitiveEntitySet::DynamicType),
             R"#(None)#" )
        .def("Box",
             (Select3D_BndBox3d (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer ) const>(&SelectMgr_SensitiveEntitySet::Box),
             R"#(Returns bounding box of entity with index theIdx)#"  , py::arg("theIndex"))
        .def("Center",
             (Standard_Real (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer , const Standard_Integer ) const>(&SelectMgr_SensitiveEntitySet::Center),
             R"#(Returns geometry center of sensitive entity index theIdx along the given axis theAxis)#"  , py::arg("theIndex"),  py::arg("theAxis"))
        .def("Swap",
             (void (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (SelectMgr_SensitiveEntitySet::*)( const Standard_Integer , const Standard_Integer ) >(&SelectMgr_SensitiveEntitySet::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2)#"  , py::arg("theIndex1"),  py::arg("theIndex2"))
        .def("Size",
             (Standard_Integer (SelectMgr_SensitiveEntitySet::*)() const) static_cast<Standard_Integer (SelectMgr_SensitiveEntitySet::*)() const>(&SelectMgr_SensitiveEntitySet::Size),
             R"#(Returns the amount of entities)#" )
        .def("Sensitives",
             (const SelectMgr_IndexedMapOfHSensitive & (SelectMgr_SensitiveEntitySet::*)() const) static_cast<const SelectMgr_IndexedMapOfHSensitive & (SelectMgr_SensitiveEntitySet::*)() const>(&SelectMgr_SensitiveEntitySet::Sensitives),
             R"#(Returns map of entities.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_SensitiveEntitySet::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_SortCriterion , shared_ptr<SelectMgr_SortCriterion> >>(m.attr("SelectMgr_SortCriterion"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsGreater",
             (bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion & ) const) static_cast<bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion & ) const>(&SelectMgr_SortCriterion::IsGreater),
             R"#(Compare with another item.)#"  , py::arg("theOther"))
        .def("IsLower",
             (bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion & ) const) static_cast<bool (SelectMgr_SortCriterion::*)( const SelectMgr_SortCriterion & ) const>(&SelectMgr_SortCriterion::IsLower),
             R"#(Compare with another item.)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_ToleranceMap , shared_ptr<SelectMgr_ToleranceMap> >>(m.attr("SelectMgr_ToleranceMap"))
    // constructors
    // custom constructors
    // methods
        .def("Tolerance",
             (Standard_Integer (SelectMgr_ToleranceMap::*)() const) static_cast<Standard_Integer (SelectMgr_ToleranceMap::*)() const>(&SelectMgr_ToleranceMap::Tolerance),
             R"#(Returns a current tolerance that must be applied)#" )
        .def("SetCustomTolerance",
             (void (SelectMgr_ToleranceMap::*)( const Standard_Integer ) ) static_cast<void (SelectMgr_ToleranceMap::*)( const Standard_Integer ) >(&SelectMgr_ToleranceMap::SetCustomTolerance),
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
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_TriangularFrustum , shared_ptr<SelectMgr_TriangularFrustum> >>(m.attr("SelectMgr_TriangularFrustum"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Build",
             (void (SelectMgr_TriangularFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & ) ) static_cast<void (SelectMgr_TriangularFrustum::*)( const gp_Pnt2d & , const gp_Pnt2d & , const gp_Pnt2d & ) >(&SelectMgr_TriangularFrustum::Build),
             R"#(Creates new triangular frustum with bases of triangles with vertices theP1, theP2 and theP3 projections onto near and far view frustum planes (only for triangular frustums))#"  , py::arg("theP1"),  py::arg("theP2"),  py::arg("theP3"))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustum::*)( const Standard_Integer , const gp_GTrsf & ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustum::*)( const Standard_Integer , const gp_GTrsf & ) const>(&SelectMgr_TriangularFrustum::ScaleAndTransform),
             R"#(Returns a copy of the frustum transformed according to the matrix given)#"  , py::arg("theScale"),  py::arg("theTrsf"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given axis-aligned box)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const>(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theMinPt"),  py::arg("theMaxPt"),  py::arg("theInside"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(Intersection test between defined volume and given point)#"  , py::arg("thePnt"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given ordered set of points, representing line segments. The test may be considered of interior part or boundary line defined by segments depending on given sensitivity type)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(Checks if line segment overlaps selecting frustum)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustum::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustum::Overlaps),
             R"#(SAT intersection test between defined volume and given triangle. The test may be considered of interior part or boundary line defined by triangle vertices depending on given sensitivity type)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("GetPlanes",
             (void (SelectMgr_TriangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> & ) const) static_cast<void (SelectMgr_TriangularFrustum::*)( NCollection_Vector<SelectMgr_Vec4> & ) const>(&SelectMgr_TriangularFrustum::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_TriangularFrustum::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_TriangularFrustum::*)() const>(&SelectMgr_TriangularFrustum::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_TriangularFrustum::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_ViewClipRange , shared_ptr<SelectMgr_ViewClipRange> >>(m.attr("SelectMgr_ViewClipRange"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IsClipped",
             (Standard_Boolean (SelectMgr_ViewClipRange::*)( const Standard_Real ) const) static_cast<Standard_Boolean (SelectMgr_ViewClipRange::*)( const Standard_Real ) const>(&SelectMgr_ViewClipRange::IsClipped),
             R"#(Check if the given depth is not within clipping range(s), e.g. TRUE means depth is clipped.)#"  , py::arg("theDepth"))
        .def("GetNearestDepth",
             (Standard_Boolean (SelectMgr_ViewClipRange::*)( const Bnd_Range & , Standard_Real & ) const) static_cast<Standard_Boolean (SelectMgr_ViewClipRange::*)( const Bnd_Range & , Standard_Real & ) const>(&SelectMgr_ViewClipRange::GetNearestDepth),
             R"#(Calculates the min not clipped value from the range. Returns FALSE if the whole range is clipped.)#"  , py::arg("theRange"),  py::arg("theDepth"))
        .def("SetVoid",
             (void (SelectMgr_ViewClipRange::*)() ) static_cast<void (SelectMgr_ViewClipRange::*)() >(&SelectMgr_ViewClipRange::SetVoid),
             R"#(Clears clipping range.)#" )
        .def("ChangeUnclipRange",
             (Bnd_Range & (SelectMgr_ViewClipRange::*)() ) static_cast<Bnd_Range & (SelectMgr_ViewClipRange::*)() >(&SelectMgr_ViewClipRange::ChangeUnclipRange),
             R"#(Returns the main unclipped range; [-inf, inf] by default.)#" )
        .def("AddClipSubRange",
             (void (SelectMgr_ViewClipRange::*)( const Bnd_Range & ) ) static_cast<void (SelectMgr_ViewClipRange::*)( const Bnd_Range & ) >(&SelectMgr_ViewClipRange::AddClipSubRange),
             R"#(Adds a clipping sub-range (for clipping chains).)#"  , py::arg("theRange"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_ViewerSelector ,opencascade::handle<SelectMgr_ViewerSelector> , Standard_Transient>>(m.attr("SelectMgr_ViewerSelector"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_ViewerSelector::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::DynamicType),
             R"#(None)#" )
        .def("Sensitivity",
             (Standard_Real (SelectMgr_ViewerSelector::*)() const) static_cast<Standard_Real (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::Sensitivity),
             R"#(returns the Sensitivity of picking)#" )
        .def("OnePicked",
             (opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)() const) static_cast<opencascade::handle<SelectMgr_EntityOwner> (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::OnePicked),
             R"#(Returns the picked element with the highest priority, and which is the closest to the last successful mouse position.)#" )
        .def("SetPickClosest",
             (void (SelectMgr_ViewerSelector::*)( const Standard_Boolean ) ) static_cast<void (SelectMgr_ViewerSelector::*)( const Standard_Boolean ) >(&SelectMgr_ViewerSelector::SetPickClosest),
             R"#(Set preference of selecting one object for OnePicked() method: - If True, objects with less depth (distance fron the view plane) are preferred regardless of priority (priority is used then to choose among objects with similar depth), - If False, objects with higher priority are preferred regardless of the depth which is used to choose among objects of the same priority.)#"  , py::arg("theToPreferClosest"))
        .def("NbPicked",
             (Standard_Integer (SelectMgr_ViewerSelector::*)() const) static_cast<Standard_Integer (SelectMgr_ViewerSelector::*)() const>(&SelectMgr_ViewerSelector::NbPicked),
             R"#(Returns the number of detected owners.)#" )
        .def("PickedEntity",
             (const opencascade::handle<Select3D_SensitiveEntity> & (SelectMgr_ViewerSelector::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Select3D_SensitiveEntity> & (SelectMgr_ViewerSelector::*)( const Standard_Integer ) const>(&SelectMgr_ViewerSelector::PickedEntity),
             R"#(Returns the Entity for the object picked at specified position.)#"  , py::arg("theRank"))
        .def("PickedPoint",
             (gp_Pnt (SelectMgr_ViewerSelector::*)( const Standard_Integer ) const) static_cast<gp_Pnt (SelectMgr_ViewerSelector::*)( const Standard_Integer ) const>(&SelectMgr_ViewerSelector::PickedPoint),
             R"#(Returns the 3D point (intersection of picking axis with the object nearest to eye) for the object picked at specified position.)#"  , py::arg("theRank"))
        .def("EntitySetBuilder",
             (const opencascade::handle<Select3D_BVHBuilder3d> (SelectMgr_ViewerSelector::*)() ) static_cast<const opencascade::handle<Select3D_BVHBuilder3d> (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::EntitySetBuilder),
             R"#(Returns the default builder used to construct BVH of entity set.)#" )
        .def("GetManager",
             (SelectMgr_SelectingVolumeManager & (SelectMgr_ViewerSelector::*)() ) static_cast<SelectMgr_SelectingVolumeManager & (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::GetManager),
             R"#(Returns instance of selecting volume manager of the viewer selector)#" )
        .def("Init",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::Init),
             R"#(Begins an iteration scanning for the owners detected at a position in the view.)#" )
        .def("More",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)() ) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::More),
             R"#(Continues the interation scanning for the owners detected at a position in the view, or continues the iteration scanning for the owner closest to the position in the view.)#" )
        .def("Next",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::Next),
             R"#(Returns the next owner found in the iteration. This is a scan for the owners detected at a position in the view.)#" )
        .def("InitDetected",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::InitDetected),
             R"#(Initializes internal iterator for stored detected sensitive entities)#" )
        .def("NextDetected",
             (void (SelectMgr_ViewerSelector::*)() ) static_cast<void (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::NextDetected),
             R"#(Makes a step along the map of detected sensitive entities and their owners)#" )
        .def("MoreDetected",
             (Standard_Boolean (SelectMgr_ViewerSelector::*)() ) static_cast<Standard_Boolean (SelectMgr_ViewerSelector::*)() >(&SelectMgr_ViewerSelector::MoreDetected),
             R"#(Returns true if iterator of map of detected sensitive entities has reached its end)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_ViewerSelector::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_CompositionFilter ,opencascade::handle<SelectMgr_CompositionFilter>,Py_SelectMgr_CompositionFilter , SelectMgr_Filter>>(m.attr("SelectMgr_CompositionFilter"))
    // constructors
    // custom constructors
    // methods
        .def("StoredFilters",
             (const SelectMgr_ListOfFilter & (SelectMgr_CompositionFilter::*)() const) static_cast<const SelectMgr_ListOfFilter & (SelectMgr_CompositionFilter::*)() const>(&SelectMgr_CompositionFilter::StoredFilters),
             R"#(Returns the list of stored filters from this framework.)#" )
        .def("ActsOn",
             (Standard_Boolean (SelectMgr_CompositionFilter::*)( const TopAbs_ShapeEnum ) const) static_cast<Standard_Boolean (SelectMgr_CompositionFilter::*)( const TopAbs_ShapeEnum ) const>(&SelectMgr_CompositionFilter::ActsOn),
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
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_TriangularFrustumSet ,opencascade::handle<SelectMgr_TriangularFrustumSet> , SelectMgr_BaseFrustum>>(m.attr("SelectMgr_TriangularFrustumSet"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Build",
             (void (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt2d> & ) ) static_cast<void (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt2d> & ) >(&SelectMgr_TriangularFrustumSet::Build),
             R"#(Meshes polygon bounded by polyline. Than organizes a set of triangular frustums, where each triangle's projection onto near and far view frustum planes is considered as a frustum base)#"  , py::arg("thePoints"))
        .def("ScaleAndTransform",
             (opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustumSet::*)( const Standard_Integer , const gp_GTrsf & ) const) static_cast<opencascade::handle<SelectMgr_BaseFrustum> (SelectMgr_TriangularFrustumSet::*)( const Standard_Integer , const gp_GTrsf & ) const>(&SelectMgr_TriangularFrustumSet::ScaleAndTransform),
             R"#(Returns a copy of the frustum with all sub-volumes transformed according to the matrix given)#"  , py::arg("theScale"),  py::arg("theTrsf"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & , Standard_Boolean * ) const>(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("theMinPnt"),  py::arg("theMaxPnt"),  py::arg("theInside"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("thePnt"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)(  const NCollection_Array1<gp_Pnt> & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("theArrayOfPnts"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & , const gp_Pnt & , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const) static_cast<Standard_Boolean (SelectMgr_TriangularFrustumSet::*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & , Select3D_TypeOfSensitivity , const SelectMgr_ViewClipRange & , SelectBasics_PickResult & ) const>(&SelectMgr_TriangularFrustumSet::Overlaps),
             R"#(None)#"  , py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("thePnt3"),  py::arg("theSensType"),  py::arg("theClipRange"),  py::arg("thePickResult"))
        .def("GetPlanes",
             (void (SelectMgr_TriangularFrustumSet::*)( NCollection_Vector<SelectMgr_Vec4> & ) const) static_cast<void (SelectMgr_TriangularFrustumSet::*)( NCollection_Vector<SelectMgr_Vec4> & ) const>(&SelectMgr_TriangularFrustumSet::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_AndFilter ,opencascade::handle<SelectMgr_AndFilter> , SelectMgr_CompositionFilter>>(m.attr("SelectMgr_AndFilter"))
    // constructors
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (SelectMgr_AndFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const) static_cast<Standard_Boolean (SelectMgr_AndFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const>(&SelectMgr_AndFilter::IsOk),
             R"#(None)#"  , py::arg("anobj"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_AndFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_AndFilter::*)() const>(&SelectMgr_AndFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_AndFilter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectMgr_OrFilter ,opencascade::handle<SelectMgr_OrFilter> , SelectMgr_CompositionFilter>>(m.attr("SelectMgr_OrFilter"))
    // constructors
    // custom constructors
    // methods
        .def("IsOk",
             (Standard_Boolean (SelectMgr_OrFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const) static_cast<Standard_Boolean (SelectMgr_OrFilter::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const>(&SelectMgr_OrFilter::IsOk),
             R"#(None)#"  , py::arg("anobj"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (SelectMgr_OrFilter::*)() const) static_cast<const opencascade::handle<Standard_Type> & (SelectMgr_OrFilter::*)() const>(&SelectMgr_OrFilter::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&SelectMgr_OrFilter::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/SelectMgr_TypeOfBVHUpdate.hxx
// ./opencascade/SelectMgr_StateOfSelection.hxx
// ./opencascade/SelectMgr_SensitiveEntity.hxx
// ./opencascade/SelectMgr_SequenceOfSelection.hxx
// ./opencascade/SelectMgr_TriangularFrustum.hxx
// ./opencascade/SelectMgr_SelectableObject.hxx
// ./opencascade/SelectMgr_SelectableObjectSet.hxx
// ./opencascade/SelectMgr_AndFilter.hxx
// ./opencascade/SelectMgr_Selection.hxx
// ./opencascade/SelectMgr_Filter.hxx
// ./opencascade/SelectMgr_ListIteratorOfListOfFilter.hxx
// ./opencascade/SelectMgr_OrFilter.hxx
// ./opencascade/SelectMgr_SOPtr.hxx
// ./opencascade/SelectMgr_FrustumBuilder.hxx
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
// ./opencascade/SelectMgr_ToleranceMap.hxx
// ./opencascade/SelectMgr_Frustum.hxx
// ./opencascade/SelectMgr_SelectingVolumeManager.hxx
// ./opencascade/SelectMgr_BaseFrustum.hxx
// ./opencascade/SelectMgr_IndexedMapOfOwner.hxx
// ./opencascade/SelectMgr_SelectionManager.hxx
// ./opencascade/SelectMgr_VectorTypes.hxx
// ./opencascade/SelectMgr_CompositionFilter.hxx
// ./opencascade/SelectMgr_EntityOwner.hxx
// ./opencascade/SelectMgr_RectangularFrustum.hxx
// ./opencascade/SelectMgr_SensitiveEntitySet.hxx
// ./opencascade/SelectMgr_ViewerSelector.hxx
// ./opencascade/SelectMgr_TypeOfUpdate.hxx
// ./opencascade/SelectMgr_SequenceOfFilter.hxx
// ./opencascade/SelectMgr_IndexedDataMapOfOwnerCriterion.hxx
// ./opencascade/SelectMgr_SortCriterion.hxx
// ./opencascade/SelectMgr_PickingStrategy.hxx
// ./opencascade/SelectMgr_ViewClipRange.hxx
// ./opencascade/SelectMgr_ListOfFilter.hxx
// ./opencascade/SelectMgr_SequenceOfOwner.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_Sequence<opencascade::handle<SelectMgr_Selection> >(m,"SelectMgr_SequenceOfSelection");
    register_template_NCollection_List<opencascade::handle<SelectMgr_TriangularFrustum> >(m,"SelectMgr_TriangFrustums");
    register_template_NCollection_Vec3<Standard_Real>(m,"SelectMgr_Vec3");
    register_template_NCollection_Sequence<opencascade::handle<SelectMgr_Filter> >(m,"SelectMgr_SequenceOfFilter");
    register_template_NCollection_IndexedDataMap<opencascade::handle<SelectMgr_EntityOwner>, SelectMgr_SortCriterion, TColStd_MapTransientHasher>(m,"SelectMgr_IndexedDataMapOfOwnerCriterion");
    register_template_NCollection_List<opencascade::handle<SelectMgr_Filter> >(m,"SelectMgr_ListOfFilter");
    register_template_NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> >(m,"SelectMgr_SequenceOfOwner");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
