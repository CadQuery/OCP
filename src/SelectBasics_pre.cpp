
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations

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
    class Py_SelectBasics_SelectingVolumeManager : public SelectBasics_SelectingVolumeManager{
    public:
        using SelectBasics_SelectingVolumeManager::SelectBasics_SelectingVolumeManager;
        
        
        // public pure virtual
        Standard_Integer GetActiveSelectionType() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,SelectBasics_SelectingVolumeManager,GetActiveSelectionType,) };
        Standard_Boolean Overlaps(const NCollection_Vec3<Standard_Real> & theBoxMin,const NCollection_Vec3<Standard_Real> & theBoxMax,SelectBasics_PickResult & thePickResult) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theBoxMin,theBoxMax,thePickResult) };
        Standard_Boolean Overlaps(const NCollection_Vec3<Standard_Real> & theBoxMin,const NCollection_Vec3<Standard_Real> & theBoxMax,Standard_Boolean * theInside) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theBoxMin,theBoxMax,theInside) };
        Standard_Boolean Overlaps(const gp_Pnt & thePnt,SelectBasics_PickResult & thePickResult) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePnt,thePickResult) };
        Standard_Boolean Overlaps(const gp_Pnt & thePnt) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePnt) };
        Standard_Boolean Overlaps(const opencascade::handle<TColgp_HArray1OfPnt> & theArrayOfPts,Standard_Integer theSensType,SelectBasics_PickResult & thePickResult) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theArrayOfPts,theSensType,thePickResult) };
        Standard_Boolean Overlaps( const NCollection_Array1<gp_Pnt> & theArrayOfPts,Standard_Integer theSensType,SelectBasics_PickResult & thePickResult) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,theArrayOfPts,theSensType,thePickResult) };
        Standard_Boolean Overlaps(const gp_Pnt & thePt1,const gp_Pnt & thePt2,SelectBasics_PickResult & thePickResult) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePt1,thePt2,thePickResult) };
        Standard_Boolean Overlaps(const gp_Pnt & thePt1,const gp_Pnt & thePt2,const gp_Pnt & thePt3,Standard_Integer theSensType,SelectBasics_PickResult & thePickResult) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,Overlaps,thePt1,thePt2,thePt3,theSensType,thePickResult) };
        Standard_Real DistToGeometryCenter(const gp_Pnt & theCOG) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,SelectBasics_SelectingVolumeManager,DistToGeometryCenter,theCOG) };
        gp_Pnt DetectedPoint(const Standard_Real theDepth) const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,DetectedPoint,theDepth) };
        Standard_Boolean IsOverlapAllowed() const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,SelectBasics_SelectingVolumeManager,IsOverlapAllowed,) };
        gp_Pnt GetNearPickedPnt() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,GetNearPickedPnt,) };
        gp_Pnt GetFarPickedPnt() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,SelectBasics_SelectingVolumeManager,GetFarPickedPnt,) };
        gp_Pnt2d GetMousePosition() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt2d,SelectBasics_SelectingVolumeManager,GetMousePosition,) };
        void GetPlanes(NCollection_Vector<NCollection_Vec4<Standard_Real> > & thePlaneEquations) const  override { PYBIND11_OVERLOAD_PURE(void,SelectBasics_SelectingVolumeManager,GetPlanes,thePlaneEquations) };
        
        
        // protected pure virtual
        
        
        // private pure virtual
        
    };

// pre-register typdefs

// classes forward declarations only
    py::class_<SelectBasics , shared_ptr<SelectBasics>  >(m,"SelectBasics",R"#(interface class for dynamic selection)#");
    py::class_<SelectBasics_PickResult , shared_ptr<SelectBasics_PickResult>  >(m,"SelectBasics_PickResult",R"#(This structure provides unified access to the results of Matches() method in all sensitive entities, so that it defines a Depth (distance to the entity along picking ray) and a closest Point on entity.)#");
    py::class_<SelectBasics_SelectingVolumeManager , shared_ptr<SelectBasics_SelectingVolumeManager> ,Py_SelectBasics_SelectingVolumeManager >(m,"SelectBasics_SelectingVolumeManager",R"#(This class provides an interface for selecting volume manager, which is responsible for all overlap detection methods and calculation of minimum depth, distance to center of geometry and detected closest point on entity.)#");

};

// user-defined post-inclusion per module

// user-defined post
