
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>


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
void register_SelectBasics(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("SelectBasics"));


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

// classes

    // default constructor
    register_default_constructor<SelectBasics , shared_ptr<SelectBasics>>(m,"SelectBasics");

    static_cast<py::class_<SelectBasics , shared_ptr<SelectBasics>  >>(m.attr("SelectBasics"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MaxOwnerPriority_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&SelectBasics::MaxOwnerPriority),
                    R"#(Structure to provide all-in-one result of selection of sensitive for "Matches" method of Select3D_SensitiveEntity.)#" )
        .def_static("MinOwnerPriority_s",
                    (Standard_Integer (*)() ) static_cast<Standard_Integer (*)() >(&SelectBasics::MinOwnerPriority),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectBasics_PickResult , shared_ptr<SelectBasics_PickResult>  >>(m.attr("SelectBasics_PickResult"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< Standard_Real,Standard_Real,const gp_Pnt & >()  , py::arg("theDepth"),  py::arg("theDistToCenter"),  py::arg("theObjPickedPnt") )
    // custom constructors
    // methods
        .def("IsValid",
             (Standard_Boolean (SelectBasics_PickResult::*)() const) static_cast<Standard_Boolean (SelectBasics_PickResult::*)() const>(&SelectBasics_PickResult::IsValid),
             R"#(Return TRUE if result was been defined.)#" )
        .def("Invalidate",
             (void (SelectBasics_PickResult::*)() ) static_cast<void (SelectBasics_PickResult::*)() >(&SelectBasics_PickResult::Invalidate),
             R"#(Reset depth value.)#" )
        .def("Depth",
             (Standard_Real (SelectBasics_PickResult::*)() const) static_cast<Standard_Real (SelectBasics_PickResult::*)() const>(&SelectBasics_PickResult::Depth),
             R"#(Return depth along picking ray.)#" )
        .def("SetDepth",
             (void (SelectBasics_PickResult::*)( Standard_Real  ) ) static_cast<void (SelectBasics_PickResult::*)( Standard_Real  ) >(&SelectBasics_PickResult::SetDepth),
             R"#(Set depth along picking ray.)#"  , py::arg("theDepth"))
        .def("HasPickedPoint",
             (Standard_Boolean (SelectBasics_PickResult::*)() const) static_cast<Standard_Boolean (SelectBasics_PickResult::*)() const>(&SelectBasics_PickResult::HasPickedPoint),
             R"#(Return TRUE if Picked Point lying on detected entity was set.)#" )
        .def("PickedPoint",
             (const gp_Pnt & (SelectBasics_PickResult::*)() const) static_cast<const gp_Pnt & (SelectBasics_PickResult::*)() const>(&SelectBasics_PickResult::PickedPoint),
             R"#(Return picked point lying on detected entity. WARNING! Point is defined in local coordinate system and should be translated into World System before usage!)#" )
        .def("SetPickedPoint",
             (void (SelectBasics_PickResult::*)( const gp_Pnt &  ) ) static_cast<void (SelectBasics_PickResult::*)( const gp_Pnt &  ) >(&SelectBasics_PickResult::SetPickedPoint),
             R"#(Set picked point.)#"  , py::arg("theObjPickedPnt"))
        .def("DistToGeomCenter",
             (Standard_Real (SelectBasics_PickResult::*)() const) static_cast<Standard_Real (SelectBasics_PickResult::*)() const>(&SelectBasics_PickResult::DistToGeomCenter),
             R"#(Return distance to geometry center (auxiliary value for comparing results).)#" )
        .def("SetDistToGeomCenter",
             (void (SelectBasics_PickResult::*)( Standard_Real  ) ) static_cast<void (SelectBasics_PickResult::*)( Standard_Real  ) >(&SelectBasics_PickResult::SetDistToGeomCenter),
             R"#(Set distance to geometry center.)#"  , py::arg("theDistToCenter"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Min_s",
                    (const SelectBasics_PickResult & (*)( const SelectBasics_PickResult & ,  const SelectBasics_PickResult &  ) ) static_cast<const SelectBasics_PickResult & (*)( const SelectBasics_PickResult & ,  const SelectBasics_PickResult &  ) >(&SelectBasics_PickResult::Min),
                    R"#(Return closest result between two Pick Results according to Depth value.)#"  , py::arg("thePickResult1"),  py::arg("thePickResult2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<SelectBasics_SelectingVolumeManager , shared_ptr<SelectBasics_SelectingVolumeManager> ,Py_SelectBasics_SelectingVolumeManager >>(m.attr("SelectBasics_SelectingVolumeManager"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetActiveSelectionType",
             (Standard_Integer (SelectBasics_SelectingVolumeManager::*)() const) static_cast<Standard_Integer (SelectBasics_SelectingVolumeManager::*)() const>(&SelectBasics_SelectingVolumeManager::GetActiveSelectionType),
             R"#(None)#" )
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & ,  SelectBasics_PickResult &  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & ,  SelectBasics_PickResult &  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by box theBox)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const NCollection_Vec3<Standard_Real> & ,  const NCollection_Vec3<Standard_Real> & ,  Standard_Boolean *  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by axis-aligned bounding box with minimum corner at point theMinPt and maximum at point theMaxPt)#"  , py::arg("theBoxMin"),  py::arg("theBoxMax"),  py::arg("theInside")=static_cast<Standard_Boolean *>(NULL))
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt & ,  SelectBasics_PickResult &  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt & ,  SelectBasics_PickResult &  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by point thePnt)#"  , py::arg("thePnt"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt &  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt &  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by point thePnt. Does not perform depth calculation, so this method is defined as helper function for inclusion test.)#"  , py::arg("thePnt"))
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const opencascade::handle<TColgp_HArray1OfPnt> & ,  Standard_Integer ,  SelectBasics_PickResult &  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const opencascade::handle<TColgp_HArray1OfPnt> & ,  Standard_Integer ,  SelectBasics_PickResult &  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by planar convex polygon, which points are stored in theArrayOfPts, taking into account sensitivity type theSensType)#"  , py::arg("theArrayOfPts"),  py::arg("theSensType"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt> & ,  Standard_Integer ,  SelectBasics_PickResult &  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)(  const NCollection_Array1<gp_Pnt> & ,  Standard_Integer ,  SelectBasics_PickResult &  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by planar convex polygon, which points are stored in theArrayOfPts, taking into account sensitivity type theSensType)#"  , py::arg("theArrayOfPts"),  py::arg("theSensType"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  SelectBasics_PickResult &  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  SelectBasics_PickResult &  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by line segment with start point at thePt1 and end point at thePt2)#"  , py::arg("thePt1"),  py::arg("thePt2"),  py::arg("thePickResult"))
        .def("Overlaps",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Integer ,  SelectBasics_PickResult &  ) const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt & ,  const gp_Pnt & ,  const gp_Pnt & ,  Standard_Integer ,  SelectBasics_PickResult &  ) const>(&SelectBasics_SelectingVolumeManager::Overlaps),
             R"#(Returns true if selecting volume is overlapped by triangle with vertices thePt1, thePt2 and thePt3, taking into account sensitivity type theSensType)#"  , py::arg("thePt1"),  py::arg("thePt2"),  py::arg("thePt3"),  py::arg("theSensType"),  py::arg("thePickResult"))
        .def("DistToGeometryCenter",
             (Standard_Real (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt &  ) const) static_cast<Standard_Real (SelectBasics_SelectingVolumeManager::*)( const gp_Pnt &  ) const>(&SelectBasics_SelectingVolumeManager::DistToGeometryCenter),
             R"#(Calculates distance from 3d projection of user-defined selection point to the given point theCOG)#"  , py::arg("theCOG"))
        .def("DetectedPoint",
             (gp_Pnt (SelectBasics_SelectingVolumeManager::*)( const Standard_Real  ) const) static_cast<gp_Pnt (SelectBasics_SelectingVolumeManager::*)( const Standard_Real  ) const>(&SelectBasics_SelectingVolumeManager::DetectedPoint),
             R"#(None)#"  , py::arg("theDepth"))
        .def("IsOverlapAllowed",
             (Standard_Boolean (SelectBasics_SelectingVolumeManager::*)() const) static_cast<Standard_Boolean (SelectBasics_SelectingVolumeManager::*)() const>(&SelectBasics_SelectingVolumeManager::IsOverlapAllowed),
             R"#(None)#" )
        .def("GetNearPickedPnt",
             (gp_Pnt (SelectBasics_SelectingVolumeManager::*)() const) static_cast<gp_Pnt (SelectBasics_SelectingVolumeManager::*)() const>(&SelectBasics_SelectingVolumeManager::GetNearPickedPnt),
             R"#(Valid only for point and rectangular selection. Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto near view frustum plane)#" )
        .def("GetFarPickedPnt",
             (gp_Pnt (SelectBasics_SelectingVolumeManager::*)() const) static_cast<gp_Pnt (SelectBasics_SelectingVolumeManager::*)() const>(&SelectBasics_SelectingVolumeManager::GetFarPickedPnt),
             R"#(Valid only for point and rectangular selection. Returns projection of 2d mouse picked point or projection of center of 2d rectangle (for point and rectangular selection correspondingly) onto far view frustum plane)#" )
        .def("GetMousePosition",
             (gp_Pnt2d (SelectBasics_SelectingVolumeManager::*)() const) static_cast<gp_Pnt2d (SelectBasics_SelectingVolumeManager::*)() const>(&SelectBasics_SelectingVolumeManager::GetMousePosition),
             R"#(Return mouse coordinates for Point selection mode.)#" )
        .def("GetPlanes",
             (void (SelectBasics_SelectingVolumeManager::*)( NCollection_Vector<NCollection_Vec4<Standard_Real> > &  ) const) static_cast<void (SelectBasics_SelectingVolumeManager::*)( NCollection_Vector<NCollection_Vec4<Standard_Real> > &  ) const>(&SelectBasics_SelectingVolumeManager::GetPlanes),
             R"#(Stores plane equation coefficients (in the following form: Ax + By + Cz + D = 0) to the given vector)#"  , py::arg("thePlaneEquations"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/SelectBasics_PickResult.hxx
// ./opencascade/SelectBasics_EntityOwner.hxx
// ./opencascade/SelectBasics_SelectingVolumeManager.hxx
// ./opencascade/SelectBasics_SensitiveEntity.hxx
// ./opencascade/SelectBasics.hxx

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
