
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Windows specific
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <SelectMgr_EntityOwner.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <Poly_Triangulation.hxx>
#include <Geom_Circle.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <SelectMgr_EntityOwner.hxx>

// module includes
#include <Select3D_BndBox3d.hxx>
#include <Select3D_BVHBuilder3d.hxx>
#include <Select3D_BVHIndexBuffer.hxx>
#include <Select3D_EntitySequence.hxx>
#include <Select3D_IndexedMapOfEntity.hxx>
#include <Select3D_InteriorSensitivePointSet.hxx>
#include <Select3D_Pnt.hxx>
#include <Select3D_PointData.hxx>
#include <Select3D_SensitiveBox.hxx>
#include <Select3D_SensitiveCircle.hxx>
#include <Select3D_SensitiveCurve.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <Select3D_SensitiveFace.hxx>
#include <Select3D_SensitiveGroup.hxx>
#include <Select3D_SensitivePoint.hxx>
#include <Select3D_SensitivePoly.hxx>
#include <Select3D_SensitivePrimitiveArray.hxx>
#include <Select3D_SensitiveSegment.hxx>
#include <Select3D_SensitiveSet.hxx>
#include <Select3D_SensitiveTriangle.hxx>
#include <Select3D_SensitiveTriangulation.hxx>
#include <Select3D_SensitiveWire.hxx>
#include <Select3D_TypeOfSensitivity.hxx>

// template related includes
// ./opencascade\Select3D_BVHBuilder3d.hxx
#include "BVH_tmpl.hxx"
// ./opencascade\Select3D_EntitySequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Select3D_EntitySequence.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade\Select3D_InteriorSensitivePointSet.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Select3D(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("Select3D"));


//Python trampoline classes
    class Py_Select3D_SensitiveEntity : public Select3D_SensitiveEntity{
    public:
        using Select3D_SensitiveEntity::Select3D_SensitiveEntity;


        // public pure virtual
        Standard_Boolean Matches(SelectBasics_SelectingVolumeManager & theMgr,SelectBasics_PickResult & thePickResult) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Select3D_SensitiveEntity,Matches,theMgr,thePickResult) };
        Standard_Integer NbSubElements() override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Select3D_SensitiveEntity,NbSubElements,) };
        Select3D_BndBox3d BoundingBox() override { PYBIND11_OVERLOAD_PURE(Select3D_BndBox3d,Select3D_SensitiveEntity,BoundingBox,) };
        gp_Pnt CenterOfGeometry() const  override { PYBIND11_OVERLOAD_PURE(gp_Pnt,Select3D_SensitiveEntity,CenterOfGeometry,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_Select3D_SensitiveSet : public Select3D_SensitiveSet{
    public:
        using Select3D_SensitiveSet::Select3D_SensitiveSet;


        // public pure virtual
        Standard_Integer Size() const  override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Select3D_SensitiveSet,Size,) };
        Select3D_BndBox3d Box(const Standard_Integer theIdx) const  override { PYBIND11_OVERLOAD_PURE(Select3D_BndBox3d,Select3D_SensitiveSet,Box,theIdx) };
        Standard_Real Center(const Standard_Integer theIdx,const Standard_Integer theAxis) const  override { PYBIND11_OVERLOAD_PURE(Standard_Real,Select3D_SensitiveSet,Center,theIdx,theAxis) };
        void Swap(const Standard_Integer theIdx1,const Standard_Integer theIdx2) override { PYBIND11_OVERLOAD_PURE(void,Select3D_SensitiveSet,Swap,theIdx1,theIdx2) };

        Standard_Integer NbSubElements() override { PYBIND11_OVERLOAD_PURE(Standard_Integer,Select3D_SensitiveEntity,NbSubElements,) };

        // protected pure virtual
        Standard_Boolean overlapsElement(SelectBasics_PickResult & thePickResult,SelectBasics_SelectingVolumeManager & theMgr,Standard_Integer theElemIdx,Standard_Boolean theIsFullInside) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Select3D_SensitiveSet,overlapsElement,thePickResult,theMgr,theElemIdx,theIsFullInside) };
        Standard_Boolean elementIsInside(SelectBasics_SelectingVolumeManager & theMgr,Standard_Integer theElemIdx,Standard_Boolean theIsFullInside) override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,Select3D_SensitiveSet,elementIsInside,theMgr,theElemIdx,theIsFullInside) };
        Standard_Real distanceToCOG(SelectBasics_SelectingVolumeManager & theMgr) override { PYBIND11_OVERLOAD_PURE(Standard_Real,Select3D_SensitiveSet,distanceToCOG,theMgr) };


        // private pure virtual

    };

// classes


    static_cast<py::class_<Select3D_BVHIndexBuffer ,opencascade::handle<Select3D_BVHIndexBuffer> , Graphic3d_Buffer>>(m.attr("Select3D_BVHIndexBuffer"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_BaseAllocator> & >()  , py::arg("theAlloc") )
    // custom constructors
    // methods
        .def("HasPatches",
             (bool (Select3D_BVHIndexBuffer::*)() const) static_cast<bool (Select3D_BVHIndexBuffer::*)() const>(&Select3D_BVHIndexBuffer::HasPatches),
             R"#(None)#" )
        .def("Init",
             (bool (Select3D_BVHIndexBuffer::*)( const Standard_Integer , const bool ) ) static_cast<bool (Select3D_BVHIndexBuffer::*)( const Standard_Integer , const bool ) >(&Select3D_BVHIndexBuffer::Init),
             R"#(Allocates new empty index array)#"  , py::arg("theNbElems"),  py::arg("theHasPatches"))
        .def("Index",
             (Standard_Integer (Select3D_BVHIndexBuffer::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Select3D_BVHIndexBuffer::*)( const Standard_Integer ) const>(&Select3D_BVHIndexBuffer::Index),
             R"#(Access index at specified position)#"  , py::arg("theIndex"))
        .def("PatchSize",
             (Standard_Integer (Select3D_BVHIndexBuffer::*)( const Standard_Integer ) const) static_cast<Standard_Integer (Select3D_BVHIndexBuffer::*)( const Standard_Integer ) const>(&Select3D_BVHIndexBuffer::PatchSize),
             R"#(Access index at specified position)#"  , py::arg("theIndex"))
        .def("SetIndex",
             (void (Select3D_BVHIndexBuffer::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_BVHIndexBuffer::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_BVHIndexBuffer::SetIndex),
             R"#(Change index at specified position)#"  , py::arg("theIndex"),  py::arg("theValue"))
        .def("SetIndex",
             (void (Select3D_BVHIndexBuffer::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_BVHIndexBuffer::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&Select3D_BVHIndexBuffer::SetIndex),
             R"#(Change index at specified position)#"  , py::arg("theIndex"),  py::arg("theValue"),  py::arg("thePatchSize"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_BVHIndexBuffer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_BVHIndexBuffer::*)() const>(&Select3D_BVHIndexBuffer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_BVHIndexBuffer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_BVHIndexBuffer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<Select3D_Pnt , shared_ptr<Select3D_Pnt>>(m,"Select3D_Pnt");

    static_cast<py::class_<Select3D_Pnt , shared_ptr<Select3D_Pnt> >>(m.attr("Select3D_Pnt"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_PointData , shared_ptr<Select3D_PointData> >>(m.attr("Select3D_PointData"))
    // constructors
        .def(py::init< const Standard_Integer >()  , py::arg("theNbPoints") )
    // custom constructors
    // methods
        .def("SetPnt",
             (void (Select3D_PointData::*)( const Standard_Integer , const Select3D_Pnt & ) ) static_cast<void (Select3D_PointData::*)( const Standard_Integer , const Select3D_Pnt & ) >(&Select3D_PointData::SetPnt),
             R"#(None)#"  , py::arg("theIndex"),  py::arg("theValue"))
        .def("SetPnt",
             (void (Select3D_PointData::*)( const Standard_Integer , const gp_Pnt & ) ) static_cast<void (Select3D_PointData::*)( const Standard_Integer , const gp_Pnt & ) >(&Select3D_PointData::SetPnt),
             R"#(None)#"  , py::arg("theIndex"),  py::arg("theValue"))
        .def("Pnt",
             (const Select3D_Pnt & (Select3D_PointData::*)( const Standard_Integer ) const) static_cast<const Select3D_Pnt & (Select3D_PointData::*)( const Standard_Integer ) const>(&Select3D_PointData::Pnt),
             R"#(None)#"  , py::arg("theIndex"))
        .def("Pnt3d",
             (gp_Pnt (Select3D_PointData::*)( const Standard_Integer ) const) static_cast<gp_Pnt (Select3D_PointData::*)( const Standard_Integer ) const>(&Select3D_PointData::Pnt3d),
             R"#(None)#"  , py::arg("theIndex"))
        .def("Size",
             (Standard_Integer (Select3D_PointData::*)() const) static_cast<Standard_Integer (Select3D_PointData::*)() const>(&Select3D_PointData::Size),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveEntity ,opencascade::handle<Select3D_SensitiveEntity>,Py_Select3D_SensitiveEntity , Standard_Transient>>(m.attr("Select3D_SensitiveEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveEntity::*)() const>(&Select3D_SensitiveEntity::DynamicType),
             R"#(None)#" )
        .def("OwnerId",
             (const opencascade::handle<SelectMgr_EntityOwner> & (Select3D_SensitiveEntity::*)() const) static_cast<const opencascade::handle<SelectMgr_EntityOwner> & (Select3D_SensitiveEntity::*)() const>(&Select3D_SensitiveEntity::OwnerId),
             R"#(Returns pointer to owner of the entity)#" )
        .def("Set",
             (void (Select3D_SensitiveEntity::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) ) static_cast<void (Select3D_SensitiveEntity::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) >(&Select3D_SensitiveEntity::Set),
             R"#(Sets owner of the entity)#"  , py::arg("theOwnerId"))
        .def("SensitivityFactor",
             (Standard_Integer (Select3D_SensitiveEntity::*)() const) static_cast<Standard_Integer (Select3D_SensitiveEntity::*)() const>(&Select3D_SensitiveEntity::SensitivityFactor),
             R"#(allows a better sensitivity for a specific entity in selection algorithms useful for small sized entities.)#" )
        .def("SetSensitivityFactor",
             (void (Select3D_SensitiveEntity::*)( const Standard_Integer ) ) static_cast<void (Select3D_SensitiveEntity::*)( const Standard_Integer ) >(&Select3D_SensitiveEntity::SetSensitivityFactor),
             R"#(Allows to manage sensitivity of a particular sensitive entity)#"  , py::arg("theNewSens"))
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveEntity::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveEntity::*)() >(&Select3D_SensitiveEntity::GetConnected),
             R"#(Originally this method intended to return sensitive entity with new location aLocation, but currently sensitive entities do not hold a location, instead HasLocation() and Location() methods call corresponding entity owner's methods. Thus all entities returned by GetConnected() share the same location propagated from corresponding selectable object. You must redefine this function for any type of sensitive entity which can accept another connected sensitive entity.)#" )
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveEntity::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveEntity::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveEntity::Matches),
             R"#(Checks whether sensitive overlaps current selecting volume. Stores minimum depth, distance to center of geometry and closest point detected into thePickResult)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveEntity::*)() ) static_cast<Standard_Integer (Select3D_SensitiveEntity::*)() >(&Select3D_SensitiveEntity::NbSubElements),
             R"#(Returns the number of sub-entities or elements in sensitive entity. Is used to determine if entity is complex and needs to pre-build BVH at the creation of sensitive entity step or is light-weighted so the tree can be build on demand with unnoticeable delay.)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveEntity::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveEntity::*)() >(&Select3D_SensitiveEntity::BoundingBox),
             R"#(Returns bounding box of a sensitive with transformation applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveEntity::*)() const) static_cast<gp_Pnt (Select3D_SensitiveEntity::*)() const>(&Select3D_SensitiveEntity::CenterOfGeometry),
             R"#(Returns center of a sensitive with transformation applied)#" )
        .def("BVH",
             (void (Select3D_SensitiveEntity::*)() ) static_cast<void (Select3D_SensitiveEntity::*)() >(&Select3D_SensitiveEntity::BVH),
             R"#(Builds BVH tree for a sensitive if needed)#" )
        .def("Clear",
             (void (Select3D_SensitiveEntity::*)() ) static_cast<void (Select3D_SensitiveEntity::*)() >(&Select3D_SensitiveEntity::Clear),
             R"#(Clears up all resources and memory)#" )
        .def("HasInitLocation",
             (Standard_Boolean (Select3D_SensitiveEntity::*)() const) static_cast<Standard_Boolean (Select3D_SensitiveEntity::*)() const>(&Select3D_SensitiveEntity::HasInitLocation),
             R"#(Returns true if the shape corresponding to the entity has init location)#" )
        .def("InvInitLocation",
             (gp_GTrsf (Select3D_SensitiveEntity::*)() const) static_cast<gp_GTrsf (Select3D_SensitiveEntity::*)() const>(&Select3D_SensitiveEntity::InvInitLocation),
             R"#(Returns inversed location transformation matrix if the shape corresponding to this entity has init location set. Otherwise, returns identity matrix.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveEntity::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveEntity::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveBox ,opencascade::handle<Select3D_SensitiveBox> , Select3D_SensitiveEntity>>(m.attr("Select3D_SensitiveBox"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const Bnd_Box & >()  , py::arg("theOwnerId"),  py::arg("theBox") )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real >()  , py::arg("theOwnerId"),  py::arg("theXMin"),  py::arg("theYMin"),  py::arg("theZMin"),  py::arg("theXMax"),  py::arg("theYMax"),  py::arg("theZMax") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveBox::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveBox::*)() const>(&Select3D_SensitiveBox::DynamicType),
             R"#(None)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveBox::*)() ) static_cast<Standard_Integer (Select3D_SensitiveBox::*)() >(&Select3D_SensitiveBox::NbSubElements),
             R"#(Returns the amount of sub-entities in sensitive)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveBox::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveBox::*)() >(&Select3D_SensitiveBox::GetConnected),
             R"#(None)#" )
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveBox::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveBox::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveBox::Matches),
             R"#(Checks whether the box overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("Box",
             (Bnd_Box (Select3D_SensitiveBox::*)() const) static_cast<Bnd_Box (Select3D_SensitiveBox::*)() const>(&Select3D_SensitiveBox::Box),
             R"#(None)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveBox::*)() const) static_cast<gp_Pnt (Select3D_SensitiveBox::*)() const>(&Select3D_SensitiveBox::CenterOfGeometry),
             R"#(Returns center of the box. If location transformation is set, it will be applied)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveBox::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveBox::*)() >(&Select3D_SensitiveBox::BoundingBox),
             R"#(Returns coordinates of the box. If location transformation is set, it will be applied)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveBox::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveBox::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveFace ,opencascade::handle<Select3D_SensitiveFace> , Select3D_SensitiveEntity>>(m.attr("Select3D_SensitiveFace"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &, const NCollection_Array1<gp_Pnt> &,const Select3D_TypeOfSensitivity >()  , py::arg("theOwnerId"),  py::arg("thePoints"),  py::arg("theType") )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<TColgp_HArray1OfPnt> &,const Select3D_TypeOfSensitivity >()  , py::arg("theOwnerId"),  py::arg("thePoints"),  py::arg("theType") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveFace::*)() const>(&Select3D_SensitiveFace::DynamicType),
             R"#(None)#" )
        .def("GetPoints",
             (void (Select3D_SensitiveFace::*)( opencascade::handle<TColgp_HArray1OfPnt> & ) ) static_cast<void (Select3D_SensitiveFace::*)( opencascade::handle<TColgp_HArray1OfPnt> & ) >(&Select3D_SensitiveFace::GetPoints),
             R"#(Initializes the given array theHArrayOfPnt by 3d coordinates of vertices of the face)#"  , py::arg("theHArrayOfPnt"))
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveFace::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveFace::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveFace::Matches),
             R"#(Checks whether the face overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveFace::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveFace::*)() >(&Select3D_SensitiveFace::GetConnected),
             R"#(None)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveFace::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveFace::*)() >(&Select3D_SensitiveFace::BoundingBox),
             R"#(Returns bounding box of the face. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveFace::*)() const) static_cast<gp_Pnt (Select3D_SensitiveFace::*)() const>(&Select3D_SensitiveFace::CenterOfGeometry),
             R"#(Returns center of the face. If location transformation is set, it will be applied)#" )
        .def("BVH",
             (void (Select3D_SensitiveFace::*)() ) static_cast<void (Select3D_SensitiveFace::*)() >(&Select3D_SensitiveFace::BVH),
             R"#(Builds BVH tree for the face)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveFace::*)() ) static_cast<Standard_Integer (Select3D_SensitiveFace::*)() >(&Select3D_SensitiveFace::NbSubElements),
             R"#(Returns the amount of sub-entities (points or planar convex polygons))#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveFace::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveFace::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitivePoint ,opencascade::handle<Select3D_SensitivePoint> , Select3D_SensitiveEntity>>(m.attr("Select3D_SensitivePoint"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const gp_Pnt & >()  , py::arg("theOwnerId"),  py::arg("thePoint") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitivePoint::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitivePoint::*)() const>(&Select3D_SensitivePoint::DynamicType),
             R"#(None)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitivePoint::*)() ) static_cast<Standard_Integer (Select3D_SensitivePoint::*)() >(&Select3D_SensitivePoint::NbSubElements),
             R"#(Returns the amount of sub-entities in sensitive)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitivePoint::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitivePoint::*)() >(&Select3D_SensitivePoint::GetConnected),
             R"#(None)#" )
        .def("Matches",
             (Standard_Boolean (Select3D_SensitivePoint::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitivePoint::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitivePoint::Matches),
             R"#(Checks whether the point overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("Point",
             (const gp_Pnt & (Select3D_SensitivePoint::*)() const) static_cast<const gp_Pnt & (Select3D_SensitivePoint::*)() const>(&Select3D_SensitivePoint::Point),
             R"#(Returns the point used at the time of construction.)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitivePoint::*)() const) static_cast<gp_Pnt (Select3D_SensitivePoint::*)() const>(&Select3D_SensitivePoint::CenterOfGeometry),
             R"#(Returns center of point. If location transformation is set, it will be applied)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitivePoint::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitivePoint::*)() >(&Select3D_SensitivePoint::BoundingBox),
             R"#(Returns bounding box of the point. If location transformation is set, it will be applied)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitivePoint::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitivePoint::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveSegment ,opencascade::handle<Select3D_SensitiveSegment> , Select3D_SensitiveEntity>>(m.attr("Select3D_SensitiveSegment"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const gp_Pnt &,const gp_Pnt & >()  , py::arg("theOwnerId"),  py::arg("theFirstPnt"),  py::arg("theLastPnt") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveSegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveSegment::*)() const>(&Select3D_SensitiveSegment::DynamicType),
             R"#(None)#" )
        .def("SetStartPoint",
             (void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) ) static_cast<void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) >(&Select3D_SensitiveSegment::SetStartPoint),
             R"#(changes the start Point of the Segment;)#"  , py::arg("thePnt"))
        .def("SetEndPoint",
             (void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) ) static_cast<void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) >(&Select3D_SensitiveSegment::SetEndPoint),
             R"#(changes the end point of the segment)#"  , py::arg("thePnt"))
        .def("StartPoint",
             (const gp_Pnt & (Select3D_SensitiveSegment::*)() const) static_cast<const gp_Pnt & (Select3D_SensitiveSegment::*)() const>(&Select3D_SensitiveSegment::StartPoint),
             R"#(gives the 3D start Point of the Segment)#" )
        .def("EndPoint",
             (const gp_Pnt & (Select3D_SensitiveSegment::*)() const) static_cast<const gp_Pnt & (Select3D_SensitiveSegment::*)() const>(&Select3D_SensitiveSegment::EndPoint),
             R"#(gives the 3D End Point of the Segment)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveSegment::*)() ) static_cast<Standard_Integer (Select3D_SensitiveSegment::*)() >(&Select3D_SensitiveSegment::NbSubElements),
             R"#(Returns the amount of points)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveSegment::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveSegment::*)() >(&Select3D_SensitiveSegment::GetConnected),
             R"#(None)#" )
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveSegment::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveSegment::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveSegment::Matches),
             R"#(Checks whether the segment overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveSegment::*)() const) static_cast<gp_Pnt (Select3D_SensitiveSegment::*)() const>(&Select3D_SensitiveSegment::CenterOfGeometry),
             R"#(Returns center of the segment. If location transformation is set, it will be applied)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveSegment::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveSegment::*)() >(&Select3D_SensitiveSegment::BoundingBox),
             R"#(Returns bounding box of the segment. If location transformation is set, it will be applied)#" )
        .def("StartPoint",
             (void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) ) static_cast<void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) >(&Select3D_SensitiveSegment::StartPoint),
             R"#(changes the start Point of the Segment;)#"  , py::arg("thePnt"))
        .def("EndPoint",
             (void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) ) static_cast<void (Select3D_SensitiveSegment::*)( const gp_Pnt & ) >(&Select3D_SensitiveSegment::EndPoint),
             R"#(changes the end point of the segment)#"  , py::arg("thePnt"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveSegment::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveSegment::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveSet ,opencascade::handle<Select3D_SensitiveSet>,Py_Select3D_SensitiveSet , Select3D_SensitiveEntity>>(m.attr("Select3D_SensitiveSet"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> & >()  , py::arg("theOwnerId") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveSet::*)() const>(&Select3D_SensitiveSet::DynamicType),
             R"#(None)#" )
        .def("Size",
             (Standard_Integer (Select3D_SensitiveSet::*)() const) static_cast<Standard_Integer (Select3D_SensitiveSet::*)() const>(&Select3D_SensitiveSet::Size),
             R"#(Returns the amount of sub-entities of the complex entity)#" )
        .def("Box",
             (Select3D_BndBox3d (Select3D_SensitiveSet::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (Select3D_SensitiveSet::*)( const Standard_Integer ) const>(&Select3D_SensitiveSet::Box),
             R"#(Returns bounding box of sub-entity with index theIdx in sub-entity list)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Select3D_SensitiveSet::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Select3D_SensitiveSet::*)( const Standard_Integer , const Standard_Integer ) const>(&Select3D_SensitiveSet::Center),
             R"#(Returns geometry center of sensitive entity index theIdx along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Select3D_SensitiveSet::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_SensitiveSet::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_SensitiveSet::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveSet::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveSet::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveSet::Matches),
             R"#(Checks whether one or more entities of the set overlap current selecting volume. Implements the traverse of BVH tree built for the set)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("BVH",
             (void (Select3D_SensitiveSet::*)() ) static_cast<void (Select3D_SensitiveSet::*)() >(&Select3D_SensitiveSet::BVH),
             R"#(Builds BVH tree for sensitive set. Must be called manually to build BVH tree for any sensitive set in case if its content was initialized not in a constructor, but element by element)#" )
        .def("SetBuilder",
             (void (Select3D_SensitiveSet::*)( const opencascade::handle<Select3D_BVHBuilder3d> & ) ) static_cast<void (Select3D_SensitiveSet::*)( const opencascade::handle<Select3D_BVHBuilder3d> & ) >(&Select3D_SensitiveSet::SetBuilder),
             R"#(Sets the method (builder) used to construct BVH.)#"  , py::arg("theBuilder"))
        .def("MarkDirty",
             (void (Select3D_SensitiveSet::*)() ) static_cast<void (Select3D_SensitiveSet::*)() >(&Select3D_SensitiveSet::MarkDirty),
             R"#(Marks BVH tree of the set as outdated. It will be rebuild at the next call of BVH())#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveSet::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveSet::*)() >(&Select3D_SensitiveSet::BoundingBox),
             R"#(Returns bounding box of the whole set. This method should be redefined in Select3D_SensitiveSet descendants)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveSet::*)() const) static_cast<gp_Pnt (Select3D_SensitiveSet::*)() const>(&Select3D_SensitiveSet::CenterOfGeometry),
             R"#(Returns center of the whole set. This method should be redefined in Select3D_SensitiveSet descendants)#" )
        .def("Clear",
             (void (Select3D_SensitiveSet::*)() ) static_cast<void (Select3D_SensitiveSet::*)() >(&Select3D_SensitiveSet::Clear),
             R"#(Destroys cross-reference to avoid memory leak)#" )
        .def("GetLeafNodeSize",
             (Standard_Integer (Select3D_SensitiveSet::*)() const) static_cast<Standard_Integer (Select3D_SensitiveSet::*)() const>(&Select3D_SensitiveSet::GetLeafNodeSize),
             R"#(Returns a number of nodes in 1 BVH leaf)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveSet::get_type_descriptor),
                    R"#(None)#" )
        .def_static("DefaultBVHBuilder_s",
                    (const opencascade::handle<Select3D_BVHBuilder3d> & (*)() ) static_cast<const opencascade::handle<Select3D_BVHBuilder3d> & (*)() >(&Select3D_SensitiveSet::DefaultBVHBuilder),
                    R"#(Return global instance to default BVH builder.)#" )
        .def_static("SetDefaultBVHBuilder_s",
                    (void (*)( const opencascade::handle<Select3D_BVHBuilder3d> & ) ) static_cast<void (*)( const opencascade::handle<Select3D_BVHBuilder3d> & ) >(&Select3D_SensitiveSet::SetDefaultBVHBuilder),
                    R"#(Assign new BVH builder to be used by default for new sensitive sets (assigning is NOT thread-safe!).)#"  , py::arg("theBuilder"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveTriangle ,opencascade::handle<Select3D_SensitiveTriangle> , Select3D_SensitiveEntity>>(m.attr("Select3D_SensitiveTriangle"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const gp_Pnt &,const gp_Pnt &,const gp_Pnt &,const Select3D_TypeOfSensitivity >()  , py::arg("theOwnerId"),  py::arg("thePnt0"),  py::arg("thePnt1"),  py::arg("thePnt2"),  py::arg("theType")=static_cast<const Select3D_TypeOfSensitivity>(Select3D_TOS_INTERIOR) )
    // custom constructors
    // methods
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveTriangle::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveTriangle::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveTriangle::Matches),
             R"#(Checks whether the triangle overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("Points3D",
             (void (Select3D_SensitiveTriangle::*)( gp_Pnt & , gp_Pnt & , gp_Pnt & ) const) static_cast<void (Select3D_SensitiveTriangle::*)( gp_Pnt & , gp_Pnt & , gp_Pnt & ) const>(&Select3D_SensitiveTriangle::Points3D),
             R"#(Returns the 3D points P1, P2, P3 used at the time of construction.)#"  , py::arg("thePnt0"),  py::arg("thePnt1"),  py::arg("thePnt2"))
        .def("Center3D",
             (gp_Pnt (Select3D_SensitiveTriangle::*)() const) static_cast<gp_Pnt (Select3D_SensitiveTriangle::*)() const>(&Select3D_SensitiveTriangle::Center3D),
             R"#(Returns the center point of the sensitive triangle created at construction time.)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveTriangle::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveTriangle::*)() >(&Select3D_SensitiveTriangle::GetConnected),
             R"#(Returns the copy of this)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveTriangle::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveTriangle::*)() >(&Select3D_SensitiveTriangle::BoundingBox),
             R"#(Returns bounding box of the triangle. If location transformation is set, it will be applied)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveTriangle::*)() ) static_cast<Standard_Integer (Select3D_SensitiveTriangle::*)() >(&Select3D_SensitiveTriangle::NbSubElements),
             R"#(Returns the amount of points)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveTriangle::*)() const) static_cast<gp_Pnt (Select3D_SensitiveTriangle::*)() const>(&Select3D_SensitiveTriangle::CenterOfGeometry),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveTriangle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveTriangle::*)() const>(&Select3D_SensitiveTriangle::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveTriangle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveTriangle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_InteriorSensitivePointSet ,opencascade::handle<Select3D_InteriorSensitivePointSet> , Select3D_SensitiveSet>>(m.attr("Select3D_InteriorSensitivePointSet"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &, const NCollection_Array1<gp_Pnt> & >()  , py::arg("theOwnerId"),  py::arg("thePoints") )
    // custom constructors
    // methods
        .def("GetPoints",
             (void (Select3D_InteriorSensitivePointSet::*)( opencascade::handle<TColgp_HArray1OfPnt> & ) ) static_cast<void (Select3D_InteriorSensitivePointSet::*)( opencascade::handle<TColgp_HArray1OfPnt> & ) >(&Select3D_InteriorSensitivePointSet::GetPoints),
             R"#(Initializes the given array theHArrayOfPnt by 3d coordinates of vertices of the whole point set)#"  , py::arg("theHArrayOfPnt"))
        .def("Size",
             (Standard_Integer (Select3D_InteriorSensitivePointSet::*)() const) static_cast<Standard_Integer (Select3D_InteriorSensitivePointSet::*)() const>(&Select3D_InteriorSensitivePointSet::Size),
             R"#(Returns the length of vector of planar convex polygons)#" )
        .def("Box",
             (Select3D_BndBox3d (Select3D_InteriorSensitivePointSet::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (Select3D_InteriorSensitivePointSet::*)( const Standard_Integer ) const>(&Select3D_InteriorSensitivePointSet::Box),
             R"#(Returns bounding box of planar convex polygon with index theIdx)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Select3D_InteriorSensitivePointSet::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Select3D_InteriorSensitivePointSet::*)( const Standard_Integer , const Standard_Integer ) const>(&Select3D_InteriorSensitivePointSet::Center),
             R"#(Returns geometry center of planar convex polygon with index theIdx in the vector along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Select3D_InteriorSensitivePointSet::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_InteriorSensitivePointSet::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_InteriorSensitivePointSet::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2 in the vector)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_InteriorSensitivePointSet::*)() ) static_cast<Select3D_BndBox3d (Select3D_InteriorSensitivePointSet::*)() >(&Select3D_InteriorSensitivePointSet::BoundingBox),
             R"#(Returns bounding box of the point set. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_InteriorSensitivePointSet::*)() const) static_cast<gp_Pnt (Select3D_InteriorSensitivePointSet::*)() const>(&Select3D_InteriorSensitivePointSet::CenterOfGeometry),
             R"#(Returns center of the point set. If location transformation is set, it will be applied)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_InteriorSensitivePointSet::*)() ) static_cast<Standard_Integer (Select3D_InteriorSensitivePointSet::*)() >(&Select3D_InteriorSensitivePointSet::NbSubElements),
             R"#(Returns the amount of points in set)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_InteriorSensitivePointSet::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_InteriorSensitivePointSet::*)() const>(&Select3D_InteriorSensitivePointSet::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_InteriorSensitivePointSet::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_InteriorSensitivePointSet::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveGroup ,opencascade::handle<Select3D_SensitiveGroup> , Select3D_SensitiveSet>>(m.attr("Select3D_SensitiveGroup"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("theIsMustMatchAll")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,NCollection_Sequence<opencascade::handle<Select3D_SensitiveEntity> > &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("theEntities"),  py::arg("theIsMustMatchAll")=static_cast<const Standard_Boolean>(Standard_True) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveGroup::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::DynamicType),
             R"#(None)#" )
        .def("Entities",
             (const Select3D_IndexedMapOfEntity & (Select3D_SensitiveGroup::*)() const) static_cast<const Select3D_IndexedMapOfEntity & (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::Entities),
             R"#(Gets group content)#" )
        .def("SubEntity",
             (const opencascade::handle<Select3D_SensitiveEntity> & (Select3D_SensitiveGroup::*)( const Standard_Integer ) const) static_cast<const opencascade::handle<Select3D_SensitiveEntity> & (Select3D_SensitiveGroup::*)( const Standard_Integer ) const>(&Select3D_SensitiveGroup::SubEntity),
             R"#(Access entity by index [1, NbSubElements()].)#"  , py::arg("theIndex"))
        .def("LastDetectedEntity",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveGroup::*)() const) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::LastDetectedEntity),
             R"#(Return last detected entity.)#" )
        .def("LastDetectedEntityIndex",
             (Standard_Integer (Select3D_SensitiveGroup::*)() const) static_cast<Standard_Integer (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::LastDetectedEntityIndex),
             R"#(Return index of last detected entity.)#" )
        .def("Add",
             (void (Select3D_SensitiveGroup::*)( NCollection_Sequence<opencascade::handle<Select3D_SensitiveEntity> > & ) ) static_cast<void (Select3D_SensitiveGroup::*)( NCollection_Sequence<opencascade::handle<Select3D_SensitiveEntity> > & ) >(&Select3D_SensitiveGroup::Add),
             R"#(Adds the list of sensitive entities LL to the empty sensitive group object created at construction time.)#"  , py::arg("theEntities"))
        .def("Add",
             (void (Select3D_SensitiveGroup::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) ) static_cast<void (Select3D_SensitiveGroup::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) >(&Select3D_SensitiveGroup::Add),
             R"#(Adds the sensitive entity aSensitive to the non-empty sensitive group object created at construction time.)#"  , py::arg("theSensitive"))
        .def("Remove",
             (void (Select3D_SensitiveGroup::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) ) static_cast<void (Select3D_SensitiveGroup::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) >(&Select3D_SensitiveGroup::Remove),
             R"#(None)#"  , py::arg("theSensitive"))
        .def("Clear",
             (void (Select3D_SensitiveGroup::*)() ) static_cast<void (Select3D_SensitiveGroup::*)() >(&Select3D_SensitiveGroup::Clear),
             R"#(Removes all sensitive entities from the list used at the time of construction, or added using the function Add.)#" )
        .def("IsIn",
             (Standard_Boolean (Select3D_SensitiveGroup::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) const) static_cast<Standard_Boolean (Select3D_SensitiveGroup::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) const>(&Select3D_SensitiveGroup::IsIn),
             R"#(Returns true if the sensitive entity aSensitive is in the list used at the time of construction, or added using the function Add.)#"  , py::arg("theSensitive"))
        .def("SetMatchType",
             (void (Select3D_SensitiveGroup::*)( const Standard_Boolean ) ) static_cast<void (Select3D_SensitiveGroup::*)( const Standard_Boolean ) >(&Select3D_SensitiveGroup::SetMatchType),
             R"#(Sets the requirement that all sensitive entities in the list used at the time of construction, or added using the function Add must be matched.)#"  , py::arg("theIsMustMatchAll"))
        .def("MustMatchAll",
             (Standard_Boolean (Select3D_SensitiveGroup::*)() const) static_cast<Standard_Boolean (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::MustMatchAll),
             R"#(Returns true if all sensitive entities in the list used at the time of construction, or added using the function Add must be matched.)#" )
        .def("ToCheckOverlapAll",
             (Standard_Boolean (Select3D_SensitiveGroup::*)() const) static_cast<Standard_Boolean (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::ToCheckOverlapAll),
             R"#(Returns TRUE if all sensitive entities should be checked within rectangular/polygonal selection, FALSE by default. Can be useful for sensitive entities holding detection results as class property.)#" )
        .def("SetCheckOverlapAll",
             (void (Select3D_SensitiveGroup::*)( Standard_Boolean ) ) static_cast<void (Select3D_SensitiveGroup::*)( Standard_Boolean ) >(&Select3D_SensitiveGroup::SetCheckOverlapAll),
             R"#(Returns TRUE if all sensitive entities should be checked within rectangular/polygonal selection, FALSE by default. Can be useful for sensitive entities holding detection results as class property.)#"  , py::arg("theToCheckAll"))
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveGroup::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveGroup::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveGroup::Matches),
             R"#(Checks whether the group overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveGroup::*)() ) static_cast<Standard_Integer (Select3D_SensitiveGroup::*)() >(&Select3D_SensitiveGroup::NbSubElements),
             R"#(Returns the amount of sub-entities)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveGroup::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveGroup::*)() >(&Select3D_SensitiveGroup::GetConnected),
             R"#(None)#" )
        .def("Set",
             (void (Select3D_SensitiveGroup::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) ) static_cast<void (Select3D_SensitiveGroup::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) >(&Select3D_SensitiveGroup::Set),
             R"#(Sets the owner for all entities in group)#"  , py::arg("theOwnerId"))
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveGroup::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveGroup::*)() >(&Select3D_SensitiveGroup::BoundingBox),
             R"#(Returns bounding box of the group. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveGroup::*)() const) static_cast<gp_Pnt (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::CenterOfGeometry),
             R"#(Returns center of entity set. If location transformation is set, it will be applied)#" )
        .def("Box",
             (Select3D_BndBox3d (Select3D_SensitiveGroup::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (Select3D_SensitiveGroup::*)( const Standard_Integer ) const>(&Select3D_SensitiveGroup::Box),
             R"#(Returns bounding box of sensitive entity with index theIdx)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Select3D_SensitiveGroup::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Select3D_SensitiveGroup::*)( const Standard_Integer , const Standard_Integer ) const>(&Select3D_SensitiveGroup::Center),
             R"#(Returns geometry center of sensitive entity index theIdx in the vector along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Select3D_SensitiveGroup::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_SensitiveGroup::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_SensitiveGroup::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2 in the vector)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("Size",
             (Standard_Integer (Select3D_SensitiveGroup::*)() const) static_cast<Standard_Integer (Select3D_SensitiveGroup::*)() const>(&Select3D_SensitiveGroup::Size),
             R"#(Returns the length of vector of sensitive entities)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveGroup::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveGroup::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitivePoly ,opencascade::handle<Select3D_SensitivePoly> , Select3D_SensitiveSet>>(m.attr("Select3D_SensitivePoly"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &, const NCollection_Array1<gp_Pnt> &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("thePoints"),  py::arg("theIsBVHEnabled") )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<TColgp_HArray1OfPnt> &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("thePoints"),  py::arg("theIsBVHEnabled") )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const Standard_Boolean,const Standard_Integer >()  , py::arg("theOwnerId"),  py::arg("theIsBVHEnabled"),  py::arg("theNbPnts")=static_cast<const Standard_Integer>(6) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitivePoly::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitivePoly::*)() const>(&Select3D_SensitivePoly::DynamicType),
             R"#(None)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitivePoly::*)() ) static_cast<Standard_Integer (Select3D_SensitivePoly::*)() >(&Select3D_SensitivePoly::NbSubElements),
             R"#(Returns the amount of segments in poly)#" )
        .def("Points3D",
             (void (Select3D_SensitivePoly::*)( opencascade::handle<TColgp_HArray1OfPnt> & ) ) static_cast<void (Select3D_SensitivePoly::*)( opencascade::handle<TColgp_HArray1OfPnt> & ) >(&Select3D_SensitivePoly::Points3D),
             R"#(Returns the 3D points of the array used at construction time.)#"  , py::arg("theHArrayOfPnt"))
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitivePoly::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitivePoly::*)() >(&Select3D_SensitivePoly::BoundingBox),
             R"#(Returns bounding box of a polygon. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitivePoly::*)() const) static_cast<gp_Pnt (Select3D_SensitivePoly::*)() const>(&Select3D_SensitivePoly::CenterOfGeometry),
             R"#(Returns center of the point set. If location transformation is set, it will be applied)#" )
        .def("Size",
             (Standard_Integer (Select3D_SensitivePoly::*)() const) static_cast<Standard_Integer (Select3D_SensitivePoly::*)() const>(&Select3D_SensitivePoly::Size),
             R"#(Returns the amount of segments of the poly)#" )
        .def("Box",
             (Select3D_BndBox3d (Select3D_SensitivePoly::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (Select3D_SensitivePoly::*)( const Standard_Integer ) const>(&Select3D_SensitivePoly::Box),
             R"#(Returns bounding box of segment with index theIdx)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Select3D_SensitivePoly::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Select3D_SensitivePoly::*)( const Standard_Integer , const Standard_Integer ) const>(&Select3D_SensitivePoly::Center),
             R"#(Returns geometry center of sensitive entity index theIdx in the vector along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Select3D_SensitivePoly::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_SensitivePoly::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_SensitivePoly::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2 in the vector)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitivePoly::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitivePoly::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitivePrimitiveArray ,opencascade::handle<Select3D_SensitivePrimitiveArray> , Select3D_SensitiveSet>>(m.attr("Select3D_SensitivePrimitiveArray"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> & >()  , py::arg("theOwnerId") )
    // custom constructors
    // methods
        .def("PatchSizeMax",
             (Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const) static_cast<Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::PatchSizeMax),
             R"#(Return patch size limit (1 by default).)#" )
        .def("SetPatchSizeMax",
             (void (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer ) >(&Select3D_SensitivePrimitiveArray::SetPatchSizeMax),
             R"#(Assign patch size limit. Should be set before initialization.)#"  , py::arg("thePatchSizeMax"))
        .def("PatchDistance",
             (float (Select3D_SensitivePrimitiveArray::*)() const) static_cast<float (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::PatchDistance),
             R"#(Maximum allowed distance between consequential elements in patch (ShortRealLast() by default). Has no effect on indexed triangulation.)#" )
        .def("SetPatchDistance",
             (void (Select3D_SensitivePrimitiveArray::*)( const float ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( const float ) >(&Select3D_SensitivePrimitiveArray::SetPatchDistance),
             R"#(Assign patch distance limit. Should be set before initialization.)#"  , py::arg("thePatchDistMax"))
        .def("InitTriangulation",
             (bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const Standard_Integer , const Standard_Integer , const bool , const Standard_Integer ) ) static_cast<bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const Standard_Integer , const Standard_Integer , const bool , const Standard_Integer ) >(&Select3D_SensitivePrimitiveArray::InitTriangulation),
             R"#(Initialize the sensitive object from triangualtion. The sub-triangulation can be specified by arguments theIndexLower and theIndexUpper (these are for iterating theIndices, not to restrict the actual index values!).)#"  , py::arg("theVerts"),  py::arg("theIndices"),  py::arg("theInitLoc"),  py::arg("theIndexLower"),  py::arg("theIndexUpper"),  py::arg("theToEvalMinMax")=static_cast<const bool>(true),  py::arg("theNbGroups")=static_cast<const Standard_Integer>(1))
        .def("InitTriangulation",
             (bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const bool , const Standard_Integer ) ) static_cast<bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const bool , const Standard_Integer ) >(&Select3D_SensitivePrimitiveArray::InitTriangulation),
             R"#(Initialize the sensitive object from triangualtion.)#"  , py::arg("theVerts"),  py::arg("theIndices"),  py::arg("theInitLoc"),  py::arg("theToEvalMinMax")=static_cast<const bool>(true),  py::arg("theNbGroups")=static_cast<const Standard_Integer>(1))
        .def("InitPoints",
             (bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const Standard_Integer , const Standard_Integer , const bool , const Standard_Integer ) ) static_cast<bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const Standard_Integer , const Standard_Integer , const bool , const Standard_Integer ) >(&Select3D_SensitivePrimitiveArray::InitPoints),
             R"#(Initialize the sensitive object from point set. The sub-set of points can be specified by arguments theIndexLower and theIndexUpper (these are for iterating theIndices, not to restrict the actual index values!).)#"  , py::arg("theVerts"),  py::arg("theIndices"),  py::arg("theInitLoc"),  py::arg("theIndexLower"),  py::arg("theIndexUpper"),  py::arg("theToEvalMinMax")=static_cast<const bool>(true),  py::arg("theNbGroups")=static_cast<const Standard_Integer>(1))
        .def("InitPoints",
             (bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const bool , const Standard_Integer ) ) static_cast<bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const opencascade::handle<Graphic3d_IndexBuffer> & , const TopLoc_Location & , const bool , const Standard_Integer ) >(&Select3D_SensitivePrimitiveArray::InitPoints),
             R"#(Initialize the sensitive object from point set.)#"  , py::arg("theVerts"),  py::arg("theIndices"),  py::arg("theInitLoc"),  py::arg("theToEvalMinMax")=static_cast<const bool>(true),  py::arg("theNbGroups")=static_cast<const Standard_Integer>(1))
        .def("InitPoints",
             (bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const TopLoc_Location & , const bool , const Standard_Integer ) ) static_cast<bool (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<Graphic3d_Buffer> & , const TopLoc_Location & , const bool , const Standard_Integer ) >(&Select3D_SensitivePrimitiveArray::InitPoints),
             R"#(Initialize the sensitive object from point set.)#"  , py::arg("theVerts"),  py::arg("theInitLoc"),  py::arg("theToEvalMinMax")=static_cast<const bool>(true),  py::arg("theNbGroups")=static_cast<const Standard_Integer>(1))
        .def("SetMinMax",
             (void (Select3D_SensitivePrimitiveArray::*)( double , double , double , double , double , double ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( double , double , double , double , double , double ) >(&Select3D_SensitivePrimitiveArray::SetMinMax),
             R"#(Assign new not transformed bounding box.)#"  , py::arg("theMinX"),  py::arg("theMinY"),  py::arg("theMinZ"),  py::arg("theMaxX"),  py::arg("theMaxY"),  py::arg("theMaxZ"))
        .def("ToDetectElements",
             (bool (Select3D_SensitivePrimitiveArray::*)() const) static_cast<bool (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::ToDetectElements),
             R"#(Return flag to keep index of last topmost detected element, TRUE by default.)#" )
        .def("SetDetectElements",
             (void (Select3D_SensitivePrimitiveArray::*)( bool ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( bool ) >(&Select3D_SensitivePrimitiveArray::SetDetectElements),
             R"#(Setup keeping of the index of last topmost detected element (axis picking).)#"  , py::arg("theToDetect"))
        .def("ToDetectElementMap",
             (bool (Select3D_SensitivePrimitiveArray::*)() const) static_cast<bool (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::ToDetectElementMap),
             R"#(Return flag to keep index map of last detected elements, FALSE by default (rectangle selection).)#" )
        .def("SetDetectElementMap",
             (void (Select3D_SensitivePrimitiveArray::*)( bool ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( bool ) >(&Select3D_SensitivePrimitiveArray::SetDetectElementMap),
             R"#(Setup keeping of the index map of last detected elements (rectangle selection).)#"  , py::arg("theToDetect"))
        .def("ToDetectNodes",
             (bool (Select3D_SensitivePrimitiveArray::*)() const) static_cast<bool (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::ToDetectNodes),
             R"#(Return flag to keep index of last topmost detected node, FALSE by default.)#" )
        .def("SetDetectNodes",
             (void (Select3D_SensitivePrimitiveArray::*)( bool ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( bool ) >(&Select3D_SensitivePrimitiveArray::SetDetectNodes),
             R"#(Setup keeping of the index of last topmost detected node (for axis picking).)#"  , py::arg("theToDetect"))
        .def("ToDetectNodeMap",
             (bool (Select3D_SensitivePrimitiveArray::*)() const) static_cast<bool (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::ToDetectNodeMap),
             R"#(Return flag to keep index map of last detected nodes, FALSE by default (rectangle selection).)#" )
        .def("SetDetectNodeMap",
             (void (Select3D_SensitivePrimitiveArray::*)( bool ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( bool ) >(&Select3D_SensitivePrimitiveArray::SetDetectNodeMap),
             R"#(Setup keeping of the index map of last detected nodes (rectangle selection).)#"  , py::arg("theToDetect"))
        .def("ToDetectEdges",
             (bool (Select3D_SensitivePrimitiveArray::*)() const) static_cast<bool (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::ToDetectEdges),
             R"#(Return flag to keep index of last topmost detected edge, FALSE by default.)#" )
        .def("SetDetectEdges",
             (void (Select3D_SensitivePrimitiveArray::*)( bool ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( bool ) >(&Select3D_SensitivePrimitiveArray::SetDetectEdges),
             R"#(Setup keeping of the index of last topmost detected edge (axis picking).)#"  , py::arg("theToDetect"))
        .def("LastDetectedElement",
             (Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const) static_cast<Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::LastDetectedElement),
             R"#(Return last topmost detected element or -1 if undefined (axis picking).)#" )
        .def("LastDetectedElementMap",
             (const opencascade::handle<TColStd_HPackedMapOfInteger> & (Select3D_SensitivePrimitiveArray::*)() const) static_cast<const opencascade::handle<TColStd_HPackedMapOfInteger> & (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::LastDetectedElementMap),
             R"#(Return the index map of last detected elements (rectangle selection).)#" )
        .def("LastDetectedNode",
             (Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const) static_cast<Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::LastDetectedNode),
             R"#(Return last topmost detected node or -1 if undefined (axis picking).)#" )
        .def("LastDetectedNodeMap",
             (const opencascade::handle<TColStd_HPackedMapOfInteger> & (Select3D_SensitivePrimitiveArray::*)() const) static_cast<const opencascade::handle<TColStd_HPackedMapOfInteger> & (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::LastDetectedNodeMap),
             R"#(Return the index map of last detected nodes (rectangle selection).)#" )
        .def("LastDetectedEdgeNode1",
             (Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const) static_cast<Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::LastDetectedEdgeNode1),
             R"#(Return the first node of last topmost detected edge or -1 if undefined (axis picking).)#" )
        .def("LastDetectedEdgeNode2",
             (Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const) static_cast<Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::LastDetectedEdgeNode2),
             R"#(Return the second node of last topmost detected edge or -1 if undefined (axis picking).)#" )
        .def("Matches",
             (Standard_Boolean (Select3D_SensitivePrimitiveArray::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitivePrimitiveArray::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitivePrimitiveArray::Matches),
             R"#(Checks whether the sensitive entity is overlapped by current selecting volume.)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitivePrimitiveArray::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitivePrimitiveArray::*)() >(&Select3D_SensitivePrimitiveArray::GetConnected),
             R"#(None)#" )
        .def("Size",
             (Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const) static_cast<Standard_Integer (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::Size),
             R"#(Returns the length of array of triangles or edges)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitivePrimitiveArray::*)() ) static_cast<Standard_Integer (Select3D_SensitivePrimitiveArray::*)() >(&Select3D_SensitivePrimitiveArray::NbSubElements),
             R"#(Returns the amount of nodes in triangulation)#" )
        .def("Box",
             (Select3D_BndBox3d (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer ) const>(&Select3D_SensitivePrimitiveArray::Box),
             R"#(Returns bounding box of triangle/edge with index theIdx)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer , const Standard_Integer ) const>(&Select3D_SensitivePrimitiveArray::Center),
             R"#(Returns geometry center of triangle/edge with index theIdx in array along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_SensitivePrimitiveArray::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2 in array)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitivePrimitiveArray::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitivePrimitiveArray::*)() >(&Select3D_SensitivePrimitiveArray::BoundingBox),
             R"#(Returns bounding box of the triangulation. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitivePrimitiveArray::*)() const) static_cast<gp_Pnt (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::CenterOfGeometry),
             R"#(Returns center of triangulation. If location transformation is set, it will be applied)#" )
        .def("HasInitLocation",
             (Standard_Boolean (Select3D_SensitivePrimitiveArray::*)() const) static_cast<Standard_Boolean (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::HasInitLocation),
             R"#(Returns true if the shape corresponding to the entity has init location)#" )
        .def("InvInitLocation",
             (gp_GTrsf (Select3D_SensitivePrimitiveArray::*)() const) static_cast<gp_GTrsf (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::InvInitLocation),
             R"#(Returns inversed location transformation matrix if the shape corresponding to this entity has init location set. Otherwise, returns identity matrix.)#" )
        .def("Set",
             (void (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) ) static_cast<void (Select3D_SensitivePrimitiveArray::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) >(&Select3D_SensitivePrimitiveArray::Set),
             R"#(Sets the owner for all entities in group)#"  , py::arg("theOwnerId"))
        .def("BVH",
             (void (Select3D_SensitivePrimitiveArray::*)() ) static_cast<void (Select3D_SensitivePrimitiveArray::*)() >(&Select3D_SensitivePrimitiveArray::BVH),
             R"#(Builds BVH tree for sensitive set.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitivePrimitiveArray::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitivePrimitiveArray::*)() const>(&Select3D_SensitivePrimitiveArray::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitivePrimitiveArray::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitivePrimitiveArray::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveTriangulation ,opencascade::handle<Select3D_SensitiveTriangulation> , Select3D_SensitiveSet>>(m.attr("Select3D_SensitiveTriangulation"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<Poly_Triangulation> &,const TopLoc_Location &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("theTrg"),  py::arg("theInitLoc"),  py::arg("theIsInterior")=static_cast<const Standard_Boolean>(Standard_True) )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<Poly_Triangulation> &,const TopLoc_Location &,const opencascade::handle<TColStd_HArray1OfInteger> &,const gp_Pnt &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("theTrg"),  py::arg("theInitLoc"),  py::arg("theFreeEdges"),  py::arg("theCOG"),  py::arg("theIsInterior") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveTriangulation::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveTriangulation::*)() const>(&Select3D_SensitiveTriangulation::DynamicType),
             R"#(None)#" )
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveTriangulation::*)() ) static_cast<Standard_Integer (Select3D_SensitiveTriangulation::*)() >(&Select3D_SensitiveTriangulation::NbSubElements),
             R"#(Returns the amount of nodes in triangulation)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveTriangulation::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveTriangulation::*)() >(&Select3D_SensitiveTriangulation::GetConnected),
             R"#(None)#" )
        .def("Triangulation",
             (const opencascade::handle<Poly_Triangulation> & (Select3D_SensitiveTriangulation::*)() const) static_cast<const opencascade::handle<Poly_Triangulation> & (Select3D_SensitiveTriangulation::*)() const>(&Select3D_SensitiveTriangulation::Triangulation),
             R"#(None)#" )
        .def("Size",
             (Standard_Integer (Select3D_SensitiveTriangulation::*)() const) static_cast<Standard_Integer (Select3D_SensitiveTriangulation::*)() const>(&Select3D_SensitiveTriangulation::Size),
             R"#(Returns the length of array of triangles or edges)#" )
        .def("Box",
             (Select3D_BndBox3d (Select3D_SensitiveTriangulation::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (Select3D_SensitiveTriangulation::*)( const Standard_Integer ) const>(&Select3D_SensitiveTriangulation::Box),
             R"#(Returns bounding box of triangle/edge with index theIdx)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Select3D_SensitiveTriangulation::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Select3D_SensitiveTriangulation::*)( const Standard_Integer , const Standard_Integer ) const>(&Select3D_SensitiveTriangulation::Center),
             R"#(Returns geometry center of triangle/edge with index theIdx in array along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Select3D_SensitiveTriangulation::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_SensitiveTriangulation::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_SensitiveTriangulation::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2 in array)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveTriangulation::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveTriangulation::*)() >(&Select3D_SensitiveTriangulation::BoundingBox),
             R"#(Returns bounding box of the triangulation. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveTriangulation::*)() const) static_cast<gp_Pnt (Select3D_SensitiveTriangulation::*)() const>(&Select3D_SensitiveTriangulation::CenterOfGeometry),
             R"#(Returns center of triangulation. If location transformation is set, it will be applied)#" )
        .def("HasInitLocation",
             (Standard_Boolean (Select3D_SensitiveTriangulation::*)() const) static_cast<Standard_Boolean (Select3D_SensitiveTriangulation::*)() const>(&Select3D_SensitiveTriangulation::HasInitLocation),
             R"#(Returns true if the shape corresponding to the entity has init location)#" )
        .def("InvInitLocation",
             (gp_GTrsf (Select3D_SensitiveTriangulation::*)() const) static_cast<gp_GTrsf (Select3D_SensitiveTriangulation::*)() const>(&Select3D_SensitiveTriangulation::InvInitLocation),
             R"#(Returns inversed location transformation matrix if the shape corresponding to this entity has init location set. Otherwise, returns identity matrix.)#" )
        .def("GetInitLocation",
             (const TopLoc_Location & (Select3D_SensitiveTriangulation::*)() const) static_cast<const TopLoc_Location & (Select3D_SensitiveTriangulation::*)() const>(&Select3D_SensitiveTriangulation::GetInitLocation),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveTriangulation::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveTriangulation::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveWire ,opencascade::handle<Select3D_SensitiveWire> , Select3D_SensitiveSet>>(m.attr("Select3D_SensitiveWire"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> & >()  , py::arg("theOwnerId") )
    // custom constructors
    // methods
        .def("Add",
             (void (Select3D_SensitiveWire::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) ) static_cast<void (Select3D_SensitiveWire::*)( const opencascade::handle<Select3D_SensitiveEntity> & ) >(&Select3D_SensitiveWire::Add),
             R"#(Adds the sensitive entity theSensitive to this framework.)#"  , py::arg("theSensitive"))
        .def("NbSubElements",
             (Standard_Integer (Select3D_SensitiveWire::*)() ) static_cast<Standard_Integer (Select3D_SensitiveWire::*)() >(&Select3D_SensitiveWire::NbSubElements),
             R"#(Returns the amount of sub-entities)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveWire::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveWire::*)() >(&Select3D_SensitiveWire::GetConnected),
             R"#(None)#" )
        .def("GetEdges",
             (const NCollection_Vector<opencascade::handle<Select3D_SensitiveEntity> > & (Select3D_SensitiveWire::*)() ) static_cast<const NCollection_Vector<opencascade::handle<Select3D_SensitiveEntity> > & (Select3D_SensitiveWire::*)() >(&Select3D_SensitiveWire::GetEdges),
             R"#(returns the sensitive edges stored in this wire)#" )
        .def("Set",
             (void (Select3D_SensitiveWire::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) ) static_cast<void (Select3D_SensitiveWire::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) >(&Select3D_SensitiveWire::Set),
             R"#(Sets the owner for all entities in wire)#"  , py::arg("theOwnerId"))
        .def("GetLastDetected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveWire::*)() const) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveWire::*)() const>(&Select3D_SensitiveWire::GetLastDetected),
             R"#(None)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (Select3D_SensitiveWire::*)() ) static_cast<Select3D_BndBox3d (Select3D_SensitiveWire::*)() >(&Select3D_SensitiveWire::BoundingBox),
             R"#(Returns bounding box of the wire. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveWire::*)() const) static_cast<gp_Pnt (Select3D_SensitiveWire::*)() const>(&Select3D_SensitiveWire::CenterOfGeometry),
             R"#(Returns center of the wire. If location transformation is set, it will be applied)#" )
        .def("Size",
             (Standard_Integer (Select3D_SensitiveWire::*)() const) static_cast<Standard_Integer (Select3D_SensitiveWire::*)() const>(&Select3D_SensitiveWire::Size),
             R"#(Returns the length of vector of sensitive entities)#" )
        .def("Box",
             (Select3D_BndBox3d (Select3D_SensitiveWire::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (Select3D_SensitiveWire::*)( const Standard_Integer ) const>(&Select3D_SensitiveWire::Box),
             R"#(Returns bounding box of sensitive entity with index theIdx)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (Select3D_SensitiveWire::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (Select3D_SensitiveWire::*)( const Standard_Integer , const Standard_Integer ) const>(&Select3D_SensitiveWire::Center),
             R"#(Returns geometry center of sensitive entity index theIdx in the vector along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (Select3D_SensitiveWire::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (Select3D_SensitiveWire::*)( const Standard_Integer , const Standard_Integer ) >(&Select3D_SensitiveWire::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2 in the vector)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveWire::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveWire::*)() const>(&Select3D_SensitiveWire::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveWire::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveWire::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveCircle ,opencascade::handle<Select3D_SensitiveCircle> , Select3D_SensitivePoly>>(m.attr("Select3D_SensitiveCircle"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<Geom_Circle> &,const Standard_Boolean,const Standard_Integer >()  , py::arg("theOwnerId"),  py::arg("theCircle"),  py::arg("theIsFilled")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theNbPnts")=static_cast<const Standard_Integer>(12) )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<Geom_Circle> &,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Integer >()  , py::arg("theOwnerId"),  py::arg("theCircle"),  py::arg("theU1"),  py::arg("theU2"),  py::arg("theIsFilled")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theNbPnts")=static_cast<const Standard_Integer>(12) )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<TColgp_HArray1OfPnt> &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("thePnts3d"),  py::arg("theIsFilled")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &, const NCollection_Array1<gp_Pnt> &,const Standard_Boolean >()  , py::arg("theOwnerId"),  py::arg("thePnts3d"),  py::arg("theIsFilled")=static_cast<const Standard_Boolean>(Standard_False) )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveCircle::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveCircle::*)() const>(&Select3D_SensitiveCircle::DynamicType),
             R"#(None)#" )
        .def("Matches",
             (Standard_Boolean (Select3D_SensitiveCircle::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (Select3D_SensitiveCircle::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&Select3D_SensitiveCircle::Matches),
             R"#(Checks whether the circle overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("GetPoint3d",
             (gp_Pnt (Select3D_SensitiveCircle::*)( const Standard_Integer ) const) static_cast<gp_Pnt (Select3D_SensitiveCircle::*)( const Standard_Integer ) const>(&Select3D_SensitiveCircle::GetPoint3d),
             R"#(None)#"  , py::arg("thePntIdx"))
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveCircle::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveCircle::*)() >(&Select3D_SensitiveCircle::GetConnected),
             R"#(None)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (Select3D_SensitiveCircle::*)() const) static_cast<gp_Pnt (Select3D_SensitiveCircle::*)() const>(&Select3D_SensitiveCircle::CenterOfGeometry),
             R"#(Returns center of the circle. If location transformation is set, it will be applied)#" )
        .def("BVH",
             (void (Select3D_SensitiveCircle::*)() ) static_cast<void (Select3D_SensitiveCircle::*)() >(&Select3D_SensitiveCircle::BVH),
             R"#(Builds BVH tree for a circle's edge segments if needed)#" )
    // methods using call by reference i.s.o. return
        .def("ArrayBounds",
             []( Select3D_SensitiveCircle &self   ){ Standard_Integer  theLow; Standard_Integer  theUp; self.ArrayBounds(theLow,theUp); return std::make_tuple(theLow,theUp); },
             R"#(None)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveCircle::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveCircle::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<Select3D_SensitiveCurve ,opencascade::handle<Select3D_SensitiveCurve> , Select3D_SensitivePoly>>(m.attr("Select3D_SensitiveCurve"))
    // constructors
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<Geom_Curve> &,const Standard_Integer >()  , py::arg("theOwnerId"),  py::arg("theCurve"),  py::arg("theNbPnts")=static_cast<const Standard_Integer>(17) )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &,const opencascade::handle<TColgp_HArray1OfPnt> & >()  , py::arg("theOwnerId"),  py::arg("thePoints") )
        .def(py::init< const opencascade::handle<SelectMgr_EntityOwner> &, const NCollection_Array1<gp_Pnt> & >()  , py::arg("theOwnerId"),  py::arg("thePoints") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (Select3D_SensitiveCurve::*)() const) static_cast<const opencascade::handle<Standard_Type> & (Select3D_SensitiveCurve::*)() const>(&Select3D_SensitiveCurve::DynamicType),
             R"#(None)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveCurve::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (Select3D_SensitiveCurve::*)() >(&Select3D_SensitiveCurve::GetConnected),
             R"#(Returns the copy of this)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&Select3D_SensitiveCurve::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&Select3D_SensitiveCurve::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\Select3D_SensitiveEntity.hxx
// ./opencascade\Select3D_BndBox3d.hxx
// ./opencascade\Select3D_TypeOfSensitivity.hxx
// ./opencascade\Select3D_SensitiveGroup.hxx
// ./opencascade\Select3D_SensitiveCurve.hxx
// ./opencascade\Select3D_BVHIndexBuffer.hxx
// ./opencascade\Select3D_SensitivePrimitiveArray.hxx
// ./opencascade\Select3D_SensitiveTriangle.hxx
// ./opencascade\Select3D_PointData.hxx
// ./opencascade\Select3D_BVHBuilder3d.hxx
// ./opencascade\Select3D_SensitivePoly.hxx
// ./opencascade\Select3D_SensitiveFace.hxx
// ./opencascade\Select3D_IndexedMapOfEntity.hxx
// ./opencascade\Select3D_SensitiveTriangulation.hxx
// ./opencascade\Select3D_SensitiveSegment.hxx
// ./opencascade\Select3D_SensitiveCircle.hxx
// ./opencascade\Select3D_EntitySequence.hxx
// ./opencascade\Select3D_SensitiveSet.hxx
// ./opencascade\Select3D_SensitiveBox.hxx
// ./opencascade\Select3D_InteriorSensitivePointSet.hxx
// ./opencascade\Select3D_Pnt.hxx
// ./opencascade\Select3D_SensitivePoint.hxx
// ./opencascade\Select3D_SensitiveWire.hxx

// Additional functions

// operators

// register typdefs
    register_template_BVH_Builder<Standard_Real, 3>(m,"Select3D_BVHBuilder3d");
    register_template_NCollection_Sequence<opencascade::handle<Select3D_SensitiveEntity> >(m,"Select3D_EntitySequence");
    register_template_NCollection_Vector<opencascade::handle<Select3D_SensitivePoly> >(m,"Select3D_VectorOfHPoly");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
