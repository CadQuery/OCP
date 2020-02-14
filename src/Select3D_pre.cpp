
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Poly_Triangulation.hxx>
#include <Geom_Circle.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Select3D_SensitiveEntity.hxx>

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
// ./opencascade/Select3D_BVHBuilder3d.hxx
#include "BVH.hxx"
// ./opencascade/Select3D_EntitySequence.hxx
#include "NCollection.hxx"
// ./opencascade/Select3D_EntitySequence.hxx
#include "NCollection.hxx"
// ./opencascade/Select3D_InteriorSensitivePointSet.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_Select3D_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Select3D", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Select3D_TypeOfSensitivity>(m, "Select3D_TypeOfSensitivity",R"#(Provides values for type of sensitivity in 3D. These are used to specify whether it is the interior, the boundary, or the exterior of a 3D sensitive entity which is sensitive.)#")
        .value("Select3D_TOS_INTERIOR",Select3D_TypeOfSensitivity::Select3D_TOS_INTERIOR)
        .value("Select3D_TOS_BOUNDARY",Select3D_TypeOfSensitivity::Select3D_TOS_BOUNDARY).export_values();

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

// pre-register typdefs
    preregister_template_BVH_Builder<Standard_Real, 3>(m,"Select3D_BVHBuilder3d");  
    preregister_template_NCollection_Sequence<opencascade::handle<Select3D_SensitiveEntity> >(m,"Select3D_EntitySequence");  
    preregister_template_NCollection_Vector<opencascade::handle<Select3D_SensitivePoly> >(m,"Select3D_VectorOfHPoly");  

// classes forward declarations only
    py::class_<Select3D_BVHIndexBuffer ,opencascade::handle<Select3D_BVHIndexBuffer>  , Graphic3d_Buffer >(m,"Select3D_BVHIndexBuffer",R"#(Index buffer for BVH tree.Index buffer for BVH tree.)#");
    py::class_<Select3D_Pnt , shared_ptr<Select3D_Pnt>  >(m,"Select3D_Pnt",R"#(None)#");
    py::class_<Select3D_PointData , shared_ptr<Select3D_PointData>  >(m,"Select3D_PointData",R"#(None)#");
    py::class_<Select3D_SensitiveEntity ,opencascade::handle<Select3D_SensitiveEntity> ,Py_Select3D_SensitiveEntity , Standard_Transient >(m,"Select3D_SensitiveEntity",R"#(Abstract framework to define 3D sensitive entities.Abstract framework to define 3D sensitive entities.)#");
    py::class_<Select3D_SensitiveBox ,opencascade::handle<Select3D_SensitiveBox>  , Select3D_SensitiveEntity >(m,"Select3D_SensitiveBox",R"#(A framework to define selection by a sensitive box.A framework to define selection by a sensitive box.)#");
    py::class_<Select3D_SensitiveFace ,opencascade::handle<Select3D_SensitiveFace>  , Select3D_SensitiveEntity >(m,"Select3D_SensitiveFace",R"#(Sensitive Entity to make a face selectable. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.Sensitive Entity to make a face selectable. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.)#");
    py::class_<Select3D_SensitivePoint ,opencascade::handle<Select3D_SensitivePoint>  , Select3D_SensitiveEntity >(m,"Select3D_SensitivePoint",R"#(A framework to define sensitive 3D points.A framework to define sensitive 3D points.)#");
    py::class_<Select3D_SensitiveSegment ,opencascade::handle<Select3D_SensitiveSegment>  , Select3D_SensitiveEntity >(m,"Select3D_SensitiveSegment",R"#(A framework to define sensitive zones along a segment One gives the 3D start and end pointA framework to define sensitive zones along a segment One gives the 3D start and end point)#");
    py::class_<Select3D_SensitiveSet ,opencascade::handle<Select3D_SensitiveSet> ,Py_Select3D_SensitiveSet , Select3D_SensitiveEntity >(m,"Select3D_SensitiveSet",R"#(This class is base class for handling overlap detection of complex sensitive entities. It provides an interface for building BVH tree for some set of entities. Thereby, each iteration of overlap detection is a traverse of BVH tree in fact. To use speed-up hierarchical structure in a custom complex sensitive entity, it is necessary to make that custom entity a descendant of this class and organize sub-entities in some container which allows referencing to elements by index. Note that methods taking index as a parameter are used for BVH build and the range of given index is [0; Size() - 1]. For example of usage see Select3D_SensitiveTriangulation.This class is base class for handling overlap detection of complex sensitive entities. It provides an interface for building BVH tree for some set of entities. Thereby, each iteration of overlap detection is a traverse of BVH tree in fact. To use speed-up hierarchical structure in a custom complex sensitive entity, it is necessary to make that custom entity a descendant of this class and organize sub-entities in some container which allows referencing to elements by index. Note that methods taking index as a parameter are used for BVH build and the range of given index is [0; Size() - 1]. For example of usage see Select3D_SensitiveTriangulation.)#");
    py::class_<Select3D_SensitiveTriangle ,opencascade::handle<Select3D_SensitiveTriangle>  , Select3D_SensitiveEntity >(m,"Select3D_SensitiveTriangle",R"#(A framework to define selection of triangles in a view. This comes into play in the detection of meshing and triangulation in surfaces. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.A framework to define selection of triangles in a view. This comes into play in the detection of meshing and triangulation in surfaces. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.)#");
    py::class_<Select3D_InteriorSensitivePointSet ,opencascade::handle<Select3D_InteriorSensitivePointSet>  , Select3D_SensitiveSet >(m,"Select3D_InteriorSensitivePointSet",R"#(This class handles the selection of arbitrary point set with internal type of sensitivity. The main principle is to split the point set given onto planar convex polygons and search for the overlap with one or more of them through traverse of BVH tree.This class handles the selection of arbitrary point set with internal type of sensitivity. The main principle is to split the point set given onto planar convex polygons and search for the overlap with one or more of them through traverse of BVH tree.)#");
    py::class_<Select3D_SensitiveGroup ,opencascade::handle<Select3D_SensitiveGroup>  , Select3D_SensitiveSet >(m,"Select3D_SensitiveGroup",R"#(A framework to define selection of a sensitive group by a sensitive entity which is a set of 3D sensitive entities. Remark: 2 modes are possible for rectangle selection the group is considered selected 1) when all the entities inside are selected in the rectangle 2) only one entity inside is selected by the rectangle By default the "Match All entities" mode is set.A framework to define selection of a sensitive group by a sensitive entity which is a set of 3D sensitive entities. Remark: 2 modes are possible for rectangle selection the group is considered selected 1) when all the entities inside are selected in the rectangle 2) only one entity inside is selected by the rectangle By default the "Match All entities" mode is set.)#");
    py::class_<Select3D_SensitivePoly ,opencascade::handle<Select3D_SensitivePoly>  , Select3D_SensitiveSet >(m,"Select3D_SensitivePoly",R"#(Sensitive Entity to make a face selectable. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions from its member Select3D_PointData myPolyg.Sensitive Entity to make a face selectable. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions from its member Select3D_PointData myPolyg.)#");
    py::class_<Select3D_SensitivePrimitiveArray ,opencascade::handle<Select3D_SensitivePrimitiveArray>  , Select3D_SensitiveSet >(m,"Select3D_SensitivePrimitiveArray",R"#(Sensitive for triangulation or point set defined by Primitive Array. The primitives can be optionally combined into patches within BVH tree to reduce its building time in expense of extra traverse time.Sensitive for triangulation or point set defined by Primitive Array. The primitives can be optionally combined into patches within BVH tree to reduce its building time in expense of extra traverse time.)#");
    py::class_<Select3D_SensitiveTriangulation ,opencascade::handle<Select3D_SensitiveTriangulation>  , Select3D_SensitiveSet >(m,"Select3D_SensitiveTriangulation",R"#(A framework to define selection of a sensitive entity made of a set of triangles.A framework to define selection of a sensitive entity made of a set of triangles.)#");
    py::class_<Select3D_SensitiveWire ,opencascade::handle<Select3D_SensitiveWire>  , Select3D_SensitiveSet >(m,"Select3D_SensitiveWire",R"#(A framework to define selection of a wire owner by an elastic wire band.A framework to define selection of a wire owner by an elastic wire band.)#");
    py::class_<Select3D_SensitiveCircle ,opencascade::handle<Select3D_SensitiveCircle>  , Select3D_SensitivePoly >(m,"Select3D_SensitiveCircle",R"#(A framework to define sensitive 3D arcs and circles. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.A framework to define sensitive 3D arcs and circles. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.)#");
    py::class_<Select3D_SensitiveCurve ,opencascade::handle<Select3D_SensitiveCurve>  , Select3D_SensitivePoly >(m,"Select3D_SensitiveCurve",R"#(A framework to define a sensitive 3D curve. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.A framework to define a sensitive 3D curve. In some cases this class can raise Standard_ConstructionError and Standard_OutOfRange exceptions. For more details see Select3D_SensitivePoly.)#");

};

// user-defined post-inclusion per module

// user-defined post
