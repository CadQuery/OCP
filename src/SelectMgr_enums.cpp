
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SensitiveEntitySet.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Standard_NotImplemented.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <V3d_Viewer.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>

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
// ./opencascade/SelectMgr_ViewerSelector.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_SequenceOfFilter.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_SequenceOfSelection.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_DataMapOfObjectSelectors.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_DataMapOfObjectSelectors.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_SequenceOfSelector.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_ListOfFilter.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_ListOfFilter.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_IndexedDataMapOfOwnerCriterion.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_SequenceOfOwner.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
#include "NCollection.hxx"
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_SelectMgr_enums(py::module &main_module) {


py::module m = main_module.def_submodule("SelectMgr", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<SelectMgr_TypeOfBVHUpdate>(m, "SelectMgr_TypeOfBVHUpdate",R"#(Keeps track for BVH update state for each SelectMgr_Selection entity in a following way: - Add : 2nd level BVH does not contain any of the selection's sensitive entities and they must be added; - Remove : all sensitive entities of the selection must be removed from 2nd level BVH; - Renew : 2nd level BVH already contains sensitives of the selection, but the its complete update and removal is required. Therefore, sensitives of the selection with this type of update must be removed from 2nd level BVH and added after recomputation. - Invalidate : the 2nd level BVH needs to be rebuilt; - None : entities of the selection are up to date.)#")
        .value("SelectMgr_TBU_Add",SelectMgr_TypeOfBVHUpdate::SelectMgr_TBU_Add)
        .value("SelectMgr_TBU_Remove",SelectMgr_TypeOfBVHUpdate::SelectMgr_TBU_Remove)
        .value("SelectMgr_TBU_Renew",SelectMgr_TypeOfBVHUpdate::SelectMgr_TBU_Renew)
        .value("SelectMgr_TBU_Invalidate",SelectMgr_TypeOfBVHUpdate::SelectMgr_TBU_Invalidate)
        .value("SelectMgr_TBU_None",SelectMgr_TypeOfBVHUpdate::SelectMgr_TBU_None).export_values();
    py::enum_<SelectMgr_StateOfSelection>(m, "SelectMgr_StateOfSelection",R"#(different state of a Selection in a ViewerSelector...)#")
        .value("SelectMgr_SOS_Activated",SelectMgr_StateOfSelection::SelectMgr_SOS_Activated)
        .value("SelectMgr_SOS_Deactivated",SelectMgr_StateOfSelection::SelectMgr_SOS_Deactivated)
        .value("SelectMgr_SOS_Sleeping",SelectMgr_StateOfSelection::SelectMgr_SOS_Sleeping)
        .value("SelectMgr_SOS_Any",SelectMgr_StateOfSelection::SelectMgr_SOS_Any)
        .value("SelectMgr_SOS_Unknown",SelectMgr_StateOfSelection::SelectMgr_SOS_Unknown).export_values();
    py::enum_<SelectMgr_TypeOfUpdate>(m, "SelectMgr_TypeOfUpdate",R"#(Provides values for types of update, including - full - partial - none.)#")
        .value("SelectMgr_TOU_Full",SelectMgr_TypeOfUpdate::SelectMgr_TOU_Full)
        .value("SelectMgr_TOU_Partial",SelectMgr_TypeOfUpdate::SelectMgr_TOU_Partial)
        .value("SelectMgr_TOU_None",SelectMgr_TypeOfUpdate::SelectMgr_TOU_None).export_values();
    py::enum_<SelectMgr_PickingStrategy>(m, "SelectMgr_PickingStrategy",R"#(Enumeration defines picking strategy - which entities detected by picking line will be accepted, considering selection filters.)#")
        .value("SelectMgr_PickingStrategy_FirstAcceptable",SelectMgr_PickingStrategy::SelectMgr_PickingStrategy_FirstAcceptable)
        .value("SelectMgr_PickingStrategy_OnlyTopmost",SelectMgr_PickingStrategy::SelectMgr_PickingStrategy_OnlyTopmost).export_values();

//Python trampoline classes
    class Py_SelectMgr_SelectableObject : public SelectMgr_SelectableObject{
    public:
        using SelectMgr_SelectableObject::SelectMgr_SelectableObject;
        
        // public pure virtual
        void ComputeSelection(const opencascade::handle<SelectMgr_Selection> & aSelection,const Standard_Integer aMode) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,ComputeSelection,aSelection,aMode) };
        void BoundingBox(Bnd_Box & theBndBox) override { PYBIND11_OVERLOAD_PURE(void,SelectMgr_SelectableObject,BoundingBox,theBndBox) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_SelectMgr_Filter : public SelectMgr_Filter{
    public:
        using SelectMgr_Filter::SelectMgr_Filter;
        
        // public pure virtual
        Standard_Boolean IsOk(const opencascade::handle<SelectMgr_EntityOwner> & anObj) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectMgr_Filter,IsOk,anObj) };
        
        
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

// classes forward declarations only
    py::class_<SelectMgr_RectangularFrustum ,std::unique_ptr<SelectMgr_RectangularFrustum>  >(m,"SelectMgr_RectangularFrustum",R"#(This class contains representation of rectangular selecting frustum, created in case of point and box selection, and algorithms for overlap detection between selecting frustum and sensitive entities. The principle of frustum calculation: - for point selection: on a near view frustum plane rectangular neighborhood of user-picked point is created according to the pixel tolerance given and then this rectangle is projected onto far view frustum plane. This rectangles define the parallel bases of selecting frustum; - for box selection: box points are projected onto near and far view frustum planes. These 2 projected rectangles define parallel bases of selecting frustum. Overlap detection tests are implemented according to the terms of separating axis theorem (SAT).)#");
    py::class_<SelectMgr_ViewClipRange ,std::unique_ptr<SelectMgr_ViewClipRange>  >(m,"SelectMgr_ViewClipRange",R"#(Class for handling depth clipping range. It is used to perform checks in case if global (for the whole view) clipping planes are defined inside of SelectMgr_RectangularFrustum class methods.)#");
    py::class_<SelectMgr_Selection ,opencascade::handle<SelectMgr_Selection>  , Standard_Transient >(m,"SelectMgr_Selection",R"#(Represents the state of a given selection mode for a Selectable Object. Contains all the sensitive entities available for this mode. An interactive object can have an indefinite number of modes of selection, each representing a "decomposition" into sensitive primitives; each primitive has an Owner (SelectMgr_EntityOwner) which allows us to identify the exact entity which has been detected. Each Selection mode is identified by an index. The set of sensitive primitives which correspond to a given mode is stocked in a SelectMgr_Selection object. By Convention, the default selection mode which allows us to grasp the Interactive object in its entirety will be mode 0. AIS_Trihedron : 4 selection modes - mode 0 : selection of a trihedron - mode 1 : selection of the origin of the trihedron - mode 2 : selection of the axes - mode 3 : selection of the planes XOY, YOZ, XOZ when you activate one of modes 1 2 3 4 , you pick AIS objects of type: - AIS_Point - AIS_Axis (and information on the type of axis) - AIS_Plane (and information on the type of plane). AIS_PlaneTrihedron offers 3 selection modes: - mode 0 : selection of the whole trihedron - mode 1 : selection of the origin of the trihedron - mode 2 : selection of the axes - same remarks as for the Trihedron. AIS_Shape : 7 maximum selection modes, depending on the complexity of the shape : - mode 0 : selection of the AIS_Shape - mode 1 : selection of the vertices - mode 2 : selection of the edges - mode 3 : selection of the wires - mode 4 : selection of the faces - mode 5 : selection of the shells - mode 6 : selection of the constituent solids.Represents the state of a given selection mode for a Selectable Object. Contains all the sensitive entities available for this mode. An interactive object can have an indefinite number of modes of selection, each representing a "decomposition" into sensitive primitives; each primitive has an Owner (SelectMgr_EntityOwner) which allows us to identify the exact entity which has been detected. Each Selection mode is identified by an index. The set of sensitive primitives which correspond to a given mode is stocked in a SelectMgr_Selection object. By Convention, the default selection mode which allows us to grasp the Interactive object in its entirety will be mode 0. AIS_Trihedron : 4 selection modes - mode 0 : selection of a trihedron - mode 1 : selection of the origin of the trihedron - mode 2 : selection of the axes - mode 3 : selection of the planes XOY, YOZ, XOZ when you activate one of modes 1 2 3 4 , you pick AIS objects of type: - AIS_Point - AIS_Axis (and information on the type of axis) - AIS_Plane (and information on the type of plane). AIS_PlaneTrihedron offers 3 selection modes: - mode 0 : selection of the whole trihedron - mode 1 : selection of the origin of the trihedron - mode 2 : selection of the axes - same remarks as for the Trihedron. AIS_Shape : 7 maximum selection modes, depending on the complexity of the shape : - mode 0 : selection of the AIS_Shape - mode 1 : selection of the vertices - mode 2 : selection of the edges - mode 3 : selection of the wires - mode 4 : selection of the faces - mode 5 : selection of the shells - mode 6 : selection of the constituent solids.)#");
    py::class_<SelectMgr_SortCriterion ,std::unique_ptr<SelectMgr_SortCriterion>  >(m,"SelectMgr_SortCriterion",R"#(This class provides data and criterion for sorting candidate entities in the process of interactive selection by mouse click)#");
    py::class_<SelectMgr_SelectableObject ,opencascade::handle<SelectMgr_SelectableObject> ,Py_SelectMgr_SelectableObject , PrsMgr_PresentableObject >(m,"SelectMgr_SelectableObject",R"#(A framework to supply the structure of the object to be selected. At the first pick, this structure is created by calling the appropriate algorithm and retaining this framework for further picking. This abstract framework is inherited in Application Interactive Services (AIS), notably in AIS_InteractiveObject. Consequently, 3D selection should be handled by the relevant daughter classes and their member functions in AIS. This is particularly true in the creation of new interactive objects.A framework to supply the structure of the object to be selected. At the first pick, this structure is created by calling the appropriate algorithm and retaining this framework for further picking. This abstract framework is inherited in Application Interactive Services (AIS), notably in AIS_InteractiveObject. Consequently, 3D selection should be handled by the relevant daughter classes and their member functions in AIS. This is particularly true in the creation of new interactive objects.)#");
    py::class_<SelectMgr_EntityOwner ,opencascade::handle<SelectMgr_EntityOwner>  , SelectBasics_EntityOwner >(m,"SelectMgr_EntityOwner",R"#(A framework to define classes of owners of sensitive primitives. The owner is the link between application and selection data structures. For the application to make its own objects selectable, it must define owner classes inheriting this framework.A framework to define classes of owners of sensitive primitives. The owner is the link between application and selection data structures. For the application to make its own objects selectable, it must define owner classes inheriting this framework.)#");
    py::class_<SelectMgr_ToleranceMap ,std::unique_ptr<SelectMgr_ToleranceMap>  >(m,"SelectMgr_ToleranceMap",R"#(An internal class for calculation of current largest tolerance value which will be applied for creation of selecting frustum by default. Each time the selection set is deactivated, maximum tolerance value will be recalculated. If a user enables custom precision using StdSelect_ViewerSelector3d::SetPixelTolerance, it will be applied to all sensitive entities without any checks.)#");
    py::class_<SelectMgr_BaseFrustum ,opencascade::handle<SelectMgr_BaseFrustum>  , Standard_Transient >(m,"SelectMgr_BaseFrustum",R"#(This class is an interface for different types of selecting frustums, defining different selection types, like point, box or polyline selection. It contains signatures of functions for detection of overlap by sensitive entity and initializes some data for building the selecting frustum)#");
    py::class_<SelectMgr_TriangularFrustumSet ,opencascade::handle<SelectMgr_TriangularFrustumSet>  , SelectMgr_BaseFrustum >(m,"SelectMgr_TriangularFrustumSet",R"#(This class is used to handle polyline selection. The main principle of polyline selection algorithm is to split the polygon defined by polyline onto triangles. Than each of them is considered as a base for triangular frustum building. In other words, each triangle vertiex will be projected from 2d screen space to 3d world space onto near and far view frustum planes. Thus, the projected triangles make up the bases of selecting frustum. When the set of such frustums is created, the function determining selection iterates through triangular frustum set and searches for overlap with any frustum.)#");
    py::class_<SelectMgr_SensitiveEntitySet ,std::unique_ptr<SelectMgr_SensitiveEntitySet>  >(m,"SelectMgr_SensitiveEntitySet",R"#(This class is used to store all calculated sensitive entites of one selectable object. It provides an interface for building BVH tree which is used to speed-up the performance of searching for overlap among sensitives of one selectable object)#");
    py::class_<SelectMgr_ViewerSelector ,opencascade::handle<SelectMgr_ViewerSelector>  , Standard_Transient >(m,"SelectMgr_ViewerSelector",R"#(A framework to define finding, sorting the sensitive primitives in a view. Services are also provided to define the return of the owners of those primitives selected. The primitives are sorted by criteria such as priority of the primitive or its depth in the view relative to that of other primitives. Note that in 3D, the inheriting framework StdSelect_ViewerSelector3d is only to be used if you do not want to use the services provided by AIS. Two tools are available to find and select objects found at a given position in the view. If you want to select the owners of all the objects detected at point x,y,z you use the Init - More - Next - Picked loop. If, on the other hand, you want to select only one object detected at that point, you use the Init - More - OnePicked loop. In this iteration, More is used to see if an object was picked and OnePicked, to get the object closest to the pick position. Viewer selectors are driven by SelectMgr_SelectionManager, and manipulate the SelectMgr_Selection objects given to them by the selection manager.A framework to define finding, sorting the sensitive primitives in a view. Services are also provided to define the return of the owners of those primitives selected. The primitives are sorted by criteria such as priority of the primitive or its depth in the view relative to that of other primitives. Note that in 3D, the inheriting framework StdSelect_ViewerSelector3d is only to be used if you do not want to use the services provided by AIS. Two tools are available to find and select objects found at a given position in the view. If you want to select the owners of all the objects detected at point x,y,z you use the Init - More - Next - Picked loop. If, on the other hand, you want to select only one object detected at that point, you use the Init - More - OnePicked loop. In this iteration, More is used to see if an object was picked and OnePicked, to get the object closest to the pick position. Viewer selectors are driven by SelectMgr_SelectionManager, and manipulate the SelectMgr_Selection objects given to them by the selection manager.)#");
    py::class_<SelectMgr_SelectingVolumeManager ,std::unique_ptr<SelectMgr_SelectingVolumeManager>  , SelectBasics_SelectingVolumeManager >(m,"SelectMgr_SelectingVolumeManager",R"#(This class is used to switch between active selecting volumes depending on selection type chosen by the user)#");
    py::class_<SelectMgr_Filter ,opencascade::handle<SelectMgr_Filter> ,Py_SelectMgr_Filter , Standard_Transient >(m,"SelectMgr_Filter",R"#(The root class to define filter objects for selection. Advance handling of objects requires the services of filters. These only allow dynamic detection and selection of objects which correspond to the criteria defined in each. Eight standard filters inheriting SelectMgr_Filter are defined in Open CASCADE. You can create your own filters by defining new filter classes inheriting this framework. You use these filters by loading them into an AIS interactive context.The root class to define filter objects for selection. Advance handling of objects requires the services of filters. These only allow dynamic detection and selection of objects which correspond to the criteria defined in each. Eight standard filters inheriting SelectMgr_Filter are defined in Open CASCADE. You can create your own filters by defining new filter classes inheriting this framework. You use these filters by loading them into an AIS interactive context.The root class to define filter objects for selection. Advance handling of objects requires the services of filters. These only allow dynamic detection and selection of objects which correspond to the criteria defined in each. Eight standard filters inheriting SelectMgr_Filter are defined in Open CASCADE. You can create your own filters by defining new filter classes inheriting this framework. You use these filters by loading them into an AIS interactive context.)#");
    py::class_<SelectMgr_TriangularFrustum ,std::unique_ptr<SelectMgr_TriangularFrustum>  >(m,"SelectMgr_TriangularFrustum",R"#(This class contains representation of triangular selecting frustum, created in case of polyline selection, and algorithms for overlap detection between selecting frustum and sensitive entities. Overlap detection tests are implemented according to the terms of separating axis theorem (SAT).)#");
    py::class_<SelectMgr_SelectableObjectSet ,std::unique_ptr<SelectMgr_SelectableObjectSet>  >(m,"SelectMgr_SelectableObjectSet",R"#(The purpose of this class is to organize all selectable objects into data structure, allowing to build set of BVH trees for each transformation persistence subclass of selectable objects. This allow to minify number of updates for BVH trees - for example 2D persistent object subclass depends only on camera's projection and the corresponding BVH tree needs to be updated when camera's projection parameters change, while another tree for non-persistent objects can be left unchanged in this case.)#");
    py::class_<SelectMgr_SensitiveEntity ,opencascade::handle<SelectMgr_SensitiveEntity>  , Standard_Transient >(m,"SelectMgr_SensitiveEntity",R"#(The purpose of this class is to mark sensitive entities selectable or not depending on current active selection of parent object for proper BVH traverseThe purpose of this class is to mark sensitive entities selectable or not depending on current active selection of parent object for proper BVH traverse)#");
    py::class_<SelectMgr_SelectionManager ,opencascade::handle<SelectMgr_SelectionManager>  , Standard_Transient >(m,"SelectMgr_SelectionManager",R"#(A framework to manage selection from the point of view of viewer selectors. These can be added and removed, and selection modes can be activated and deactivated. In addition, objects may be known to all selectors or only to some.A framework to manage selection from the point of view of viewer selectors. These can be added and removed, and selection modes can be activated and deactivated. In addition, objects may be known to all selectors or only to some.)#");
    py::class_<SelectMgr_FrustumBuilder ,opencascade::handle<SelectMgr_FrustumBuilder>  , Standard_Transient >(m,"SelectMgr_FrustumBuilder",R"#(The purpose of this class is to provide unified interface for building selecting frustum depending on current camera projection and orientation matrices, window size and viewport parameters.The purpose of this class is to provide unified interface for building selecting frustum depending on current camera projection and orientation matrices, window size and viewport parameters.)#");
    py::class_<SelectMgr_CompositionFilter ,opencascade::handle<SelectMgr_CompositionFilter> ,Py_SelectMgr_CompositionFilter , SelectMgr_Filter >(m,"SelectMgr_CompositionFilter",R"#(A framework to define a compound filter composed of two or more simple filters.A framework to define a compound filter composed of two or more simple filters.A framework to define a compound filter composed of two or more simple filters.)#");
    py::class_<SelectMgr_OrFilter ,opencascade::handle<SelectMgr_OrFilter>  , SelectMgr_CompositionFilter >(m,"SelectMgr_OrFilter",R"#(A framework to define an or selection filter. This selects one or another type of sensitive entity.A framework to define an or selection filter. This selects one or another type of sensitive entity.A framework to define an or selection filter. This selects one or another type of sensitive entity.)#");
    py::class_<SelectMgr_AndFilter ,opencascade::handle<SelectMgr_AndFilter>  , SelectMgr_CompositionFilter >(m,"SelectMgr_AndFilter",R"#(A framework to define a selection filter for two or more types of entity.A framework to define a selection filter for two or more types of entity.A framework to define a selection filter for two or more types of entity.)#");

// pre-register typdefs
// ./opencascade/SelectMgr_RectangularFrustum.hxx
// ./opencascade/SelectMgr_SOPtr.hxx
// ./opencascade/SelectMgr_TypeOfBVHUpdate.hxx
// ./opencascade/SelectMgr_OrFilter.hxx
// ./opencascade/SelectMgr_ViewClipRange.hxx
// ./opencascade/SelectMgr_ViewerSelector.hxx
// ./opencascade/SelectMgr_IndexedMapOfOwner.hxx
// ./opencascade/SelectMgr_SequenceOfFilter.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<SelectMgr_Filter> >(m,"SelectMgr_SequenceOfFilter");  
// ./opencascade/SelectMgr_Selection.hxx
// ./opencascade/SelectMgr_StateOfSelection.hxx
// ./opencascade/SelectMgr_SensitiveEntity.hxx
// ./opencascade/SelectMgr_SortCriterion.hxx
// ./opencascade/SelectMgr_TypeOfUpdate.hxx
// ./opencascade/SelectMgr_SelectingVolumeManager.hxx
// ./opencascade/SelectMgr_ListIteratorOfListOfFilter.hxx
// ./opencascade/SelectMgr_Frustum.hxx
// ./opencascade/SelectMgr_SelectableObject.hxx
// ./opencascade/SelectMgr_PickingStrategy.hxx
// ./opencascade/SelectMgr_FrustumBuilder.hxx
// ./opencascade/SelectMgr_EntityOwner.hxx
// ./opencascade/SelectMgr_SequenceOfSelection.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<SelectMgr_Selection> >(m,"SelectMgr_SequenceOfSelection");  
// ./opencascade/SelectMgr_Filter.hxx
// ./opencascade/SelectMgr_ToleranceMap.hxx
// ./opencascade/SelectMgr_DataMapOfObjectSelectors.hxx
    preregister_template_NCollection_DataMap<opencascade::handle<SelectMgr_SelectableObject>, SelectMgr_SequenceOfSelector, TColStd_MapTransientHasher>(m,"SelectMgr_DataMapOfObjectSelectors");  
// ./opencascade/SelectMgr_SelectionManager.hxx
// ./opencascade/SelectMgr_SequenceOfSelector.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<SelectMgr_ViewerSelector> >(m,"SelectMgr_SequenceOfSelector");  
// ./opencascade/SelectMgr_ListOfFilter.hxx
    preregister_template_NCollection_List<opencascade::handle<SelectMgr_Filter> >(m,"SelectMgr_ListOfFilter");  
// ./opencascade/SelectMgr_VectorTypes.hxx
// ./opencascade/SelectMgr_BaseFrustum.hxx
// ./opencascade/SelectMgr_IndexedDataMapOfOwnerCriterion.hxx
    preregister_template_NCollection_IndexedDataMap<opencascade::handle<SelectBasics_EntityOwner>, SelectMgr_SortCriterion, TColStd_MapTransientHasher>(m,"SelectMgr_IndexedDataMapOfOwnerCriterion");  
// ./opencascade/SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors.hxx
// ./opencascade/SelectMgr_SequenceOfOwner.hxx
    preregister_template_NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> >(m,"SelectMgr_SequenceOfOwner");  
// ./opencascade/SelectMgr_TriangularFrustum.hxx
// ./opencascade/SelectMgr_TriangularFrustumSet.hxx
    preregister_template_NCollection_List<opencascade::handle<SelectMgr_TriangularFrustum> >(m,"SelectMgr_TriangFrustums");  
// ./opencascade/SelectMgr_CompositionFilter.hxx
// ./opencascade/SelectMgr_SensitiveEntitySet.hxx
// ./opencascade/SelectMgr_SelectableObjectSet.hxx
// ./opencascade/SelectMgr_AndFilter.hxx

};

// user-defined post-inclusion per module

// user-defined post
