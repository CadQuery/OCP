
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Bnd_Box.hxx>
#include <SelectBasics_EntityOwner.hxx>

// module includes
#include <SelectBasics.hxx>
#include <SelectBasics_EntityOwner.hxx>
#include <SelectBasics_PickResult.hxx>
#include <SelectBasics_SelectingVolumeManager.hxx>
#include <SelectBasics_SensitiveEntity.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_SelectBasics_enums(py::module &main_module) {


py::module m = main_module.def_submodule("SelectBasics", R"#()#");

// user-defined inclusion per module in the body

// enums

//Python trampoline classes
    class Py_SelectBasics_EntityOwner : public SelectBasics_EntityOwner{
    public:
        using SelectBasics_EntityOwner::SelectBasics_EntityOwner;
        
        // public pure virtual
        Standard_Boolean HasLocation() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_EntityOwner,HasLocation,) };
        void SetLocation(const TopLoc_Location & aLoc) override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_EntityOwner,SetLocation,aLoc) };
        void ResetLocation() override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_EntityOwner,ResetLocation,) };
        TopLoc_Location Location() const  override { PYBIND11_OVERLOAD_PURE(TopLoc_Location,SelectBasics_EntityOwner,Location,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_SelectBasics_SelectingVolumeManager : public SelectBasics_SelectingVolumeManager{
    public:
        using SelectBasics_SelectingVolumeManager::SelectBasics_SelectingVolumeManager;
        
        // public pure virtual
        Standard_Integer GetActiveSelectionType() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,SelectBasics_SelectingVolumeManager,GetActiveSelectionType,) };
        Standard_Boolean Overlaps(const NCollection_Vec3<Standard_Real> & theBoxMin,const NCollection_Vec3<Standard_Real> & theBoxMax,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theBoxMin,theBoxMax,theDepth) };
        Standard_Boolean Overlaps(const NCollection_Vec3<Standard_Real> & theBoxMin,const NCollection_Vec3<Standard_Real> & theBoxMax,Standard_Boolean * theInside) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theBoxMin,theBoxMax,theInside) };
        Standard_Boolean Overlaps(const gp_Pnt & thePnt,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePnt,theDepth) };
        Standard_Boolean Overlaps(const gp_Pnt & thePnt) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePnt) };
        Standard_Boolean Overlaps(const opencascade::handle<TColgp_HArray1OfPnt> & theArrayOfPts,Standard_Integer theSensType,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theArrayOfPts,theSensType,theDepth) };
        Standard_Boolean Overlaps( const NCollection_Array1<gp_Pnt> & theArrayOfPts,Standard_Integer theSensType,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theArrayOfPts,theSensType,theDepth) };
        Standard_Boolean Overlaps(const gp_Pnt & thePt1,const gp_Pnt & thePt2,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePt1,thePt2,theDepth) };
        Standard_Boolean Overlaps(const gp_Pnt & thePt1,const gp_Pnt & thePt2,const gp_Pnt & thePt3,Standard_Integer theSensType,Standard_Real & theDepth) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePt1,thePt2,thePt3,theSensType,theDepth) };
        Standard_Real DistToGeometryCenter(const gp_Pnt & theCOG) override { PYBIND11_OVERLOAD_PURE(Standard_Real,SelectBasics_SelectingVolumeManager,DistToGeometryCenter,theCOG) };
        gp_Pnt DetectedPoint(const Standard_Real theDepth) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,DetectedPoint,theDepth) };
        Standard_Boolean IsOverlapAllowed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,IsOverlapAllowed,) };
        gp_Pnt GetNearPickedPnt() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,GetNearPickedPnt,) };
        gp_Pnt GetFarPickedPnt() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,GetFarPickedPnt,) };
        void GetPlanes(NCollection_Vector<NCollection_Vec4<Standard_Real> > & thePlaneEquations) const  override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_SelectingVolumeManager,GetPlanes,thePlaneEquations) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };
    class Py_SelectBasics_SensitiveEntity : public SelectBasics_SensitiveEntity{
    public:
        using SelectBasics_SensitiveEntity::SelectBasics_SensitiveEntity;
        
        // public pure virtual
        Standard_Boolean Matches(SelectBasics_SelectingVolumeManager & theMgr,SelectBasics_PickResult & thePickResult) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SensitiveEntity,Matches,theMgr,thePickResult) };
        Standard_Integer NbSubElements() override { PYBIND11_OVERLOAD_PURE(Standard_Integer,SelectBasics_SensitiveEntity,NbSubElements,) };
        Select3D_BndBox3d BoundingBox() override { PYBIND11_OVERLOAD_PURE(Select3D_BndBox3d,SelectBasics_SensitiveEntity,BoundingBox,) };
        void BVH() override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_SensitiveEntity,BVH,) };
        void Clear() override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_SensitiveEntity,Clear,) };
        Standard_Boolean HasInitLocation() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SensitiveEntity,HasInitLocation,) };
        gp_GTrsf InvInitLocation() const  override { PYBIND11_OVERLOAD_PURE(gp_GTrsf,SelectBasics_SensitiveEntity,InvInitLocation,) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<SelectBasics , shared_ptr<SelectBasics>  >(m,"SelectBasics",R"#(interface class for dynamic selection)#");
    py::class_<SelectBasics_EntityOwner ,opencascade::handle<SelectBasics_EntityOwner> ,Py_SelectBasics_EntityOwner , Standard_Transient >(m,"SelectBasics_EntityOwner",R"#(defines an abstract owner of sensitive primitives. Owners are typically used to establish a connection between sensitive entities and high-level objects (e.g. presentations).defines an abstract owner of sensitive primitives. Owners are typically used to establish a connection between sensitive entities and high-level objects (e.g. presentations).)#");
    py::class_<SelectBasics_SelectingVolumeManager , shared_ptr<SelectBasics_SelectingVolumeManager> ,Py_SelectBasics_SelectingVolumeManager >(m,"SelectBasics_SelectingVolumeManager",R"#(This class provides an interface for selecting volume manager, which is responsible for all overlap detection methods and calculation of minimum depth, distance to center of geometry and detected closest point on entity.)#");
    py::class_<SelectBasics_SensitiveEntity ,opencascade::handle<SelectBasics_SensitiveEntity> ,Py_SelectBasics_SensitiveEntity , Standard_Transient >(m,"SelectBasics_SensitiveEntity",R"#(root class; the inheriting classes will be able to give sensitive Areas for the dynamic selection algorithmsroot class; the inheriting classes will be able to give sensitive Areas for the dynamic selection algorithms)#");

};

// user-defined post-inclusion per module

// user-defined post
