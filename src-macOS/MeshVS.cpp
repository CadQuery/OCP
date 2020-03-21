
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TColStd_HPackedMapOfInteger.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_Drawer.hxx>
#include <Bnd_Box.hxx>
#include <MeshVS_Mesh.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <Bnd_Box2d.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_Drawer.hxx>
#include <MeshVS_Mesh.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Graphic3d_Texture2D.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <MeshVS_DataSource.hxx>
#include <TColStd_HPackedMapOfInteger.hxx>
#include <Graphic3d_AspectFillArea3d.hxx>
#include <MeshVS_Drawer.hxx>
#include <Graphic3d_MaterialAspect.hxx>
#include <Graphic3d_AspectLine3d.hxx>
#include <Graphic3d_AspectMarker3d.hxx>
#include <Graphic3d_AspectText3d.hxx>
#include <gp_Vec.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Bnd_Box2d.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_DataSource.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>

// module includes
#include <MeshVS_Array1OfSequenceOfInteger.hxx>
#include <MeshVS_Buffer.hxx>
#include <MeshVS_BuilderPriority.hxx>
#include <MeshVS_ColorHasher.hxx>
#include <MeshVS_CommonSensitiveEntity.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfColorMapOfInteger.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerColor.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerOwner.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerTwoColors.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerVector.hxx>
#include <MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger.hxx>
#include <MeshVS_DataMapOfColorMapOfInteger.hxx>
#include <MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx>
#include <MeshVS_DataMapOfIntegerAsciiString.hxx>
#include <MeshVS_DataMapOfIntegerBoolean.hxx>
#include <MeshVS_DataMapOfIntegerColor.hxx>
#include <MeshVS_DataMapOfIntegerMaterial.hxx>
#include <MeshVS_DataMapOfIntegerMeshEntityOwner.hxx>
#include <MeshVS_DataMapOfIntegerOwner.hxx>
#include <MeshVS_DataMapOfIntegerTwoColors.hxx>
#include <MeshVS_DataMapOfIntegerVector.hxx>
#include <MeshVS_DataMapOfTwoColorsMapOfInteger.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_DataSource3D.hxx>
#include <MeshVS_DeformedDataSource.hxx>
#include <MeshVS_DisplayModeFlags.hxx>
#include <MeshVS_Drawer.hxx>
#include <MeshVS_DrawerAttribute.hxx>
#include <MeshVS_DummySensitiveEntity.hxx>
#include <MeshVS_ElementalColorPrsBuilder.hxx>
#include <MeshVS_EntityType.hxx>
#include <MeshVS_HArray1OfSequenceOfInteger.hxx>
#include <MeshVS_MapIteratorOfMapOfTwoNodes.hxx>
#include <MeshVS_MapOfTwoNodes.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_MeshEntityOwner.hxx>
#include <MeshVS_MeshOwner.hxx>
#include <MeshVS_MeshPrsBuilder.hxx>
#include <MeshVS_MeshPtr.hxx>
#include <MeshVS_MeshSelectionMethod.hxx>
#include <MeshVS_NodalColorPrsBuilder.hxx>
#include <MeshVS_PrsBuilder.hxx>
#include <MeshVS_SelectionModeFlags.hxx>
#include <MeshVS_SensitiveFace.hxx>
#include <MeshVS_SensitiveMesh.hxx>
#include <MeshVS_SensitivePolyhedron.hxx>
#include <MeshVS_SensitiveQuad.hxx>
#include <MeshVS_SensitiveSegment.hxx>
#include <MeshVS_SequenceOfPrsBuilder.hxx>
#include <MeshVS_SymmetricPairHasher.hxx>
#include <MeshVS_TextPrsBuilder.hxx>
#include <MeshVS_Tool.hxx>
#include <MeshVS_TwoColors.hxx>
#include <MeshVS_TwoColorsHasher.hxx>
#include <MeshVS_TwoNodes.hxx>
#include <MeshVS_TwoNodesHasher.hxx>
#include <MeshVS_VectorPrsBuilder.hxx>

// template related includes
// ./opencascade/MeshVS_DataMapOfTwoColorsMapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfTwoColorsMapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerBoolean.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerVector.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerVector.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_TwoNodesHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfColorMapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfColorMapOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerMaterial.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerMaterial.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_SequenceOfPrsBuilder.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_Array1OfSequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerTwoColors.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerTwoColors.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerColor.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerColor.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_SensitivePolyhedron.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_SensitivePolyhedron.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerOwner.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerMeshEntityOwner.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_TwoColorsHasher.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_DataMapOfIntegerAsciiString.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_MapOfTwoNodes.hxx
#include "NCollection_tmpl.hxx"
// ./opencascade/MeshVS_MapOfTwoNodes.hxx
#include "NCollection_tmpl.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_MeshVS(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("MeshVS"));


//Python trampoline classes
    class Py_MeshVS_DataSource : public MeshVS_DataSource{
    public:
        using MeshVS_DataSource::MeshVS_DataSource;


        // public pure virtual
        Standard_Boolean GetGeom(const Standard_Integer ID,const Standard_Boolean IsElement,NCollection_Array1<Standard_Real> & Coords,Standard_Integer & NbNodes,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeom,ID,IsElement,Coords,NbNodes,Type) };
        Standard_Boolean GetGeomType(const Standard_Integer ID,const Standard_Boolean IsElement,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeomType,ID,IsElement,Type) };
        Standard_Address GetAddr(const Standard_Integer ID,const Standard_Boolean IsElement) const  override { PYBIND11_OVERLOAD_PURE(Standard_Address,MeshVS_DataSource,GetAddr,ID,IsElement) };
        Standard_Boolean GetNodesByElement(const Standard_Integer ID,NCollection_Array1<Standard_Integer> & NodeIDs,Standard_Integer & NbNodes) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetNodesByElement,ID,NodeIDs,NbNodes) };
        const TColStd_PackedMapOfInteger & GetAllNodes() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllNodes,) };
        const TColStd_PackedMapOfInteger & GetAllElements() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllElements,) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_MeshVS_PrsBuilder : public MeshVS_PrsBuilder{
    public:
        using MeshVS_PrsBuilder::MeshVS_PrsBuilder;


        // public pure virtual
        void Build(const opencascade::handle<Prs3d_Presentation> & Prs,const TColStd_PackedMapOfInteger & IDs,TColStd_PackedMapOfInteger & IDsToExclude,const Standard_Boolean IsElement,const Standard_Integer DisplayMode) const  override { PYBIND11_OVERLOAD_PURE(void,MeshVS_PrsBuilder,Build,Prs,IDs,IDsToExclude,IsElement,DisplayMode) };


        // protected pure virtual


        // private pure virtual

    };
    class Py_MeshVS_DataSource3D : public MeshVS_DataSource3D{
    public:
        using MeshVS_DataSource3D::MeshVS_DataSource3D;


        // public pure virtual

        Standard_Boolean GetGeom(const Standard_Integer ID,const Standard_Boolean IsElement,NCollection_Array1<Standard_Real> & Coords,Standard_Integer & NbNodes,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeom,ID,IsElement,Coords,NbNodes,Type) };
        Standard_Boolean GetGeomType(const Standard_Integer ID,const Standard_Boolean IsElement,MeshVS_EntityType & Type) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetGeomType,ID,IsElement,Type) };
        Standard_Address GetAddr(const Standard_Integer ID,const Standard_Boolean IsElement) const  override { PYBIND11_OVERLOAD_PURE(Standard_Address,MeshVS_DataSource,GetAddr,ID,IsElement) };
        Standard_Boolean GetNodesByElement(const Standard_Integer ID,NCollection_Array1<Standard_Integer> & NodeIDs,Standard_Integer & NbNodes) const  override { PYBIND11_OVERLOAD_PURE(Standard_Boolean,MeshVS_DataSource,GetNodesByElement,ID,NodeIDs,NbNodes) };
        const TColStd_PackedMapOfInteger & GetAllNodes() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllNodes,) };
        const TColStd_PackedMapOfInteger & GetAllElements() const  override { PYBIND11_OVERLOAD_PURE(const TColStd_PackedMapOfInteger &,MeshVS_DataSource,GetAllElements,) };

        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<MeshVS_Buffer , shared_ptr<MeshVS_Buffer> >>(m.attr("MeshVS_Buffer"))
    // constructors
        .def(py::init< const Standard_Size >()  , py::arg("theSize") )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_CommonSensitiveEntity ,opencascade::handle<MeshVS_CommonSensitiveEntity> , Select3D_SensitiveSet>>(m.attr("MeshVS_CommonSensitiveEntity"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_CommonSensitiveEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_CommonSensitiveEntity::*)() const>(&MeshVS_CommonSensitiveEntity::DynamicType),
             R"#(None)#" )
        .def("NbSubElements",
             (Standard_Integer (MeshVS_CommonSensitiveEntity::*)() ) static_cast<Standard_Integer (MeshVS_CommonSensitiveEntity::*)() >(&MeshVS_CommonSensitiveEntity::NbSubElements),
             R"#(Number of elements.)#" )
        .def("Size",
             (Standard_Integer (MeshVS_CommonSensitiveEntity::*)() const) static_cast<Standard_Integer (MeshVS_CommonSensitiveEntity::*)() const>(&MeshVS_CommonSensitiveEntity::Size),
             R"#(Returns the amount of sub-entities of the complex entity)#" )
        .def("Box",
             (Select3D_BndBox3d (MeshVS_CommonSensitiveEntity::*)( const Standard_Integer ) const) static_cast<Select3D_BndBox3d (MeshVS_CommonSensitiveEntity::*)( const Standard_Integer ) const>(&MeshVS_CommonSensitiveEntity::Box),
             R"#(Returns bounding box of sub-entity with index theIdx in sub-entity list)#"  , py::arg("theIdx"))
        .def("Center",
             (Standard_Real (MeshVS_CommonSensitiveEntity::*)( const Standard_Integer , const Standard_Integer ) const) static_cast<Standard_Real (MeshVS_CommonSensitiveEntity::*)( const Standard_Integer , const Standard_Integer ) const>(&MeshVS_CommonSensitiveEntity::Center),
             R"#(Returns geometry center of sensitive entity index theIdx along the given axis theAxis)#"  , py::arg("theIdx"),  py::arg("theAxis"))
        .def("Swap",
             (void (MeshVS_CommonSensitiveEntity::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (MeshVS_CommonSensitiveEntity::*)( const Standard_Integer , const Standard_Integer ) >(&MeshVS_CommonSensitiveEntity::Swap),
             R"#(Swaps items with indexes theIdx1 and theIdx2)#"  , py::arg("theIdx1"),  py::arg("theIdx2"))
        .def("BoundingBox",
             (Select3D_BndBox3d (MeshVS_CommonSensitiveEntity::*)() ) static_cast<Select3D_BndBox3d (MeshVS_CommonSensitiveEntity::*)() >(&MeshVS_CommonSensitiveEntity::BoundingBox),
             R"#(Returns bounding box of the triangulation. If location transformation is set, it will be applied)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (MeshVS_CommonSensitiveEntity::*)() const) static_cast<gp_Pnt (MeshVS_CommonSensitiveEntity::*)() const>(&MeshVS_CommonSensitiveEntity::CenterOfGeometry),
             R"#(Returns center of a mesh)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (MeshVS_CommonSensitiveEntity::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (MeshVS_CommonSensitiveEntity::*)() >(&MeshVS_CommonSensitiveEntity::GetConnected),
             R"#(Create a copy.)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_CommonSensitiveEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_DataSource ,opencascade::handle<MeshVS_DataSource>,Py_MeshVS_DataSource , Standard_Transient>>(m.attr("MeshVS_DataSource"))
    // constructors
    // custom constructors
    // methods
        .def("GetGeom",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean , NCollection_Array1<Standard_Real> & , Standard_Integer & , MeshVS_EntityType & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean , NCollection_Array1<Standard_Real> & , Standard_Integer & , MeshVS_EntityType & ) const>(&MeshVS_DataSource::GetGeom),
             R"#(Returns geometry information about node or element ID is the numerical identificator of node or element IsElement indicates this ID describe node ( if Standard_False ) or element ( if Standard_True ) Coords is an array of co-ordinates of node(s). For node it is only 3 numbers: X, Y, Z in the strict order For element it is 3*n numbers, where n is number of this element vertices The order is strict also: X1, Y1, Z1, X2,...., where Xi, Yi, Zi are co-ordinates of vertices NbNodes is number of nodes. It is recommended this parameter to be set to 1 for node. Type is type of node or element (from enumeration). It is recommended this parameter to be set to MeshVS_ET_Node for node.)#"  , py::arg("ID"),  py::arg("IsElement"),  py::arg("Coords"),  py::arg("NbNodes"),  py::arg("Type"))
        .def("GetGeomType",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean , MeshVS_EntityType & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean , MeshVS_EntityType & ) const>(&MeshVS_DataSource::GetGeomType),
             R"#(This method is similar to GetGeom, but returns only element or node type.)#"  , py::arg("ID"),  py::arg("IsElement"),  py::arg("Type"))
        .def("Get3DGeom",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , Standard_Integer & , opencascade::handle<MeshVS_HArray1OfSequenceOfInteger> & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , Standard_Integer & , opencascade::handle<MeshVS_HArray1OfSequenceOfInteger> & ) const>(&MeshVS_DataSource::Get3DGeom),
             R"#(This method returns topology information about 3D-element Returns false if element with ID isn't 3D or because other troubles)#"  , py::arg("ID"),  py::arg("NbNodes"),  py::arg("Data"))
        .def("GetAddr",
             (Standard_Address (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_Address (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean ) const>(&MeshVS_DataSource::GetAddr),
             R"#(This method returns pointer which represents element or node data structure. This address will be saved in MeshVS_MeshEntityOwner, so that you can access to data structure fast by the method Owner(). In the redefined method you can return NULL. ID is the numerical identificator of node or element IsElement indicates this ID describe node ( if Standard_False ) or element ( if Standard_True ))#"  , py::arg("ID"),  py::arg("IsElement"))
        .def("GetNodesByElement",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , NCollection_Array1<Standard_Integer> & , Standard_Integer & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , NCollection_Array1<Standard_Integer> & , Standard_Integer & ) const>(&MeshVS_DataSource::GetNodesByElement),
             R"#(This method returns information about nodes this element consist of. ID is the numerical identificator of element. NodeIDs is the output array of nodes IDs in correct order, the same as coordinates returned by GetGeom(). NbNodes is number of nodes (number of items set in NodeIDs). Returns False if element does not exist)#"  , py::arg("ID"),  py::arg("NodeIDs"),  py::arg("NbNodes"))
        .def("GetAllNodes",
             (const TColStd_PackedMapOfInteger & (MeshVS_DataSource::*)() const) static_cast<const TColStd_PackedMapOfInteger & (MeshVS_DataSource::*)() const>(&MeshVS_DataSource::GetAllNodes),
             R"#(This method returns map of all nodes the object consist of.)#" )
        .def("GetAllElements",
             (const TColStd_PackedMapOfInteger & (MeshVS_DataSource::*)() const) static_cast<const TColStd_PackedMapOfInteger & (MeshVS_DataSource::*)() const>(&MeshVS_DataSource::GetAllElements),
             R"#(This method returns map of all elements the object consist of.)#" )
        .def("GetNormal",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Integer , Standard_Real & , Standard_Real & , Standard_Real & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Integer , Standard_Real & , Standard_Real & , Standard_Real & ) const>(&MeshVS_DataSource::GetNormal),
             R"#(This method calculates normal of face, which is using for correct reflection presentation. There is default method, for advance reflection this method can be redefined. Id is the numerical identificator of only element! Max is maximal number of nodes an element can consist of nx, ny, nz are values whose represent co-ordinates of normal (will be returned) In the redefined method you can return normal with length more then 1, but in this case the appearance of element will be more bright than usual. For ordinary brightness you must return normal with length 1)#"  , py::arg("Id"),  py::arg("Max"),  py::arg("nx"),  py::arg("ny"),  py::arg("nz"))
        .def("GetNodeNormal",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Integer , Standard_Real & , Standard_Real & , Standard_Real & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Integer , Standard_Real & , Standard_Real & , Standard_Real & ) const>(&MeshVS_DataSource::GetNodeNormal),
             R"#(This method return normal of node ranknode of face Id, which is using for smooth shading presentation. Returns false if normal isn't defined.)#"  , py::arg("ranknode"),  py::arg("ElementId"),  py::arg("nx"),  py::arg("ny"),  py::arg("nz"))
        .def("GetNormalsByElement",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean , const Standard_Integer , opencascade::handle<TColStd_HArray1OfReal> & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , const Standard_Boolean , const Standard_Integer , opencascade::handle<TColStd_HArray1OfReal> & ) const>(&MeshVS_DataSource::GetNormalsByElement),
             R"#(This method puts components of normal vectors at each node of a mesh face (at each face of a mesh volume) into the output array. Returns false if some problem was detected during calculation of normals. Id is an identifier of the mesh element. IsNodal, when true, means that normals at mesh element nodes are needed. If nodal normals are not available, or IsNodal is false, or the mesh element is a volume, then the output array contents depend on the element type: face: a normal calculated by GetNormal() is duplicated for each node of the face; volume: normals to all faces of the volume are computed (not for each node!). MaxNodes is maximal number of nodes an element can consist of. Normals contains the result.)#"  , py::arg("Id"),  py::arg("IsNodal"),  py::arg("MaxNodes"),  py::arg("Normals"))
        .def("GetAllGroups",
             (void (MeshVS_DataSource::*)( TColStd_PackedMapOfInteger & ) const) static_cast<void (MeshVS_DataSource::*)( TColStd_PackedMapOfInteger & ) const>(&MeshVS_DataSource::GetAllGroups),
             R"#(This method returns map of all groups the object contains.)#"  , py::arg("Ids"))
        .def("GetGroup",
             (Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , MeshVS_EntityType & , TColStd_PackedMapOfInteger & ) const) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const Standard_Integer , MeshVS_EntityType & , TColStd_PackedMapOfInteger & ) const>(&MeshVS_DataSource::GetGroup),
             R"#(This method returns map of all group elements.)#"  , py::arg("Id"),  py::arg("Type"),  py::arg("Ids"))
        .def("GetGroupAddr",
             (Standard_Address (MeshVS_DataSource::*)( const Standard_Integer ) const) static_cast<Standard_Address (MeshVS_DataSource::*)( const Standard_Integer ) const>(&MeshVS_DataSource::GetGroupAddr),
             R"#(This method returns pointer which represents group data structure. This address will be saved in MeshVS_MeshOwner, so that you can access to data structure fast by the method Owner(). In the redefined method you can return NULL. ID is the numerical identificator of group)#"  , py::arg("ID"))
        .def("IsAdvancedSelectionEnabled",
             (Standard_Boolean (MeshVS_DataSource::*)() const) static_cast<Standard_Boolean (MeshVS_DataSource::*)() const>(&MeshVS_DataSource::IsAdvancedSelectionEnabled),
             R"#(Returns True if advanced mesh selection is enabled. Default implementation returns False. It should be redefined to return True for advanced mesh selection activation.)#" )
        .def("GetBoundingBox",
             (Bnd_Box (MeshVS_DataSource::*)() const) static_cast<Bnd_Box (MeshVS_DataSource::*)() const>(&MeshVS_DataSource::GetBoundingBox),
             R"#(Returns the bounding box of the whole mesh. It is used in advanced selection mode to define roughly the sensitive area of the mesh. It can be redefined to get access to a box computed in advance.)#" )
        .def("GetDetectedEntities",
             (Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & , const Standard_Real , const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & , Standard_Real & ) ) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & , const Standard_Real , const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & , Standard_Real & ) >(&MeshVS_DataSource::GetDetectedEntities),
             R"#(Returns maps of entities (nodes and elements) detected by mouse click at the point (X,Y) on the current view plane, with the tolerance aTol. DMin - is out argument should return actual detection tolerance. Returns True if something is detected. It should be redefined if the advanced mesh selection is activated. Default implementation returns False.)#"  , py::arg("Prs"),  py::arg("X"),  py::arg("Y"),  py::arg("aTol"),  py::arg("Nodes"),  py::arg("Elements"),  py::arg("DMin"))
        .def("GetDetectedEntities",
             (Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & ) ) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , const Standard_Real , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & ) >(&MeshVS_DataSource::GetDetectedEntities),
             R"#(Returns maps of entities (nodes and elements) detected by mouse selection with rectangular box (XMin, YMin, XMax, YMax) on the current veiw plane, with the tolerance aTol. Returns True if something is detected. It should be redefined if the advanced mesh selection is activated. Default implementation returns False.)#"  , py::arg("Prs"),  py::arg("XMin"),  py::arg("YMin"),  py::arg("XMax"),  py::arg("YMax"),  py::arg("aTol"),  py::arg("Nodes"),  py::arg("Elements"))
        .def("GetDetectedEntities",
             (Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & ,  const NCollection_Array1<gp_Pnt2d> & , const Bnd_Box2d & , const Standard_Real , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & ) ) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & ,  const NCollection_Array1<gp_Pnt2d> & , const Bnd_Box2d & , const Standard_Real , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & ) >(&MeshVS_DataSource::GetDetectedEntities),
             R"#(Returns maps of entities (nodes and elements) detected by mouse selection with the polyline <Polyline> on the current veiw plane, with the tolerance aTol. Returns True if something is detected. It should be redefined if the advanced mesh selection is activated. Default implementation returns False.)#"  , py::arg("Prs"),  py::arg("Polyline"),  py::arg("aBox"),  py::arg("aTol"),  py::arg("Nodes"),  py::arg("Elements"))
        .def("GetDetectedEntities",
             (Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & ) ) static_cast<Standard_Boolean (MeshVS_DataSource::*)( const opencascade::handle<MeshVS_Mesh> & , opencascade::handle<TColStd_HPackedMapOfInteger> & , opencascade::handle<TColStd_HPackedMapOfInteger> & ) >(&MeshVS_DataSource::GetDetectedEntities),
             R"#(Filter out the maps of mesh entities so as to keep only the entities that are allowed to be selected according to the current context. Returns True if any of the maps has been changed. It should be redefined if the advanced mesh selection is activated. Default implementation returns False.)#"  , py::arg("Prs"),  py::arg("Nodes"),  py::arg("Elements"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_DataSource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_DataSource::*)() const>(&MeshVS_DataSource::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_DataSource::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<MeshVS_Drawer ,opencascade::handle<MeshVS_Drawer>>(m,"MeshVS_Drawer");

    static_cast<py::class_<MeshVS_Drawer ,opencascade::handle<MeshVS_Drawer> , Standard_Transient>>(m.attr("MeshVS_Drawer"))
    // constructors
    // custom constructors
    // methods
        .def("Assign",
             (void (MeshVS_Drawer::*)( const opencascade::handle<MeshVS_Drawer> & ) ) static_cast<void (MeshVS_Drawer::*)( const opencascade::handle<MeshVS_Drawer> & ) >(&MeshVS_Drawer::Assign),
             R"#(This method copies other drawer contents to this.)#"  , py::arg("aDrawer"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_Drawer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_Drawer::*)() const>(&MeshVS_Drawer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_Drawer::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_DummySensitiveEntity ,opencascade::handle<MeshVS_DummySensitiveEntity> , Select3D_SensitiveEntity>>(m.attr("MeshVS_DummySensitiveEntity"))
    // constructors
    // custom constructors
    // methods
        .def("Matches",
             (Standard_Boolean (MeshVS_DummySensitiveEntity::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (MeshVS_DummySensitiveEntity::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&MeshVS_DummySensitiveEntity::Matches),
             R"#(None)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("NbSubElements",
             (Standard_Integer (MeshVS_DummySensitiveEntity::*)() ) static_cast<Standard_Integer (MeshVS_DummySensitiveEntity::*)() >(&MeshVS_DummySensitiveEntity::NbSubElements),
             R"#(None)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (MeshVS_DummySensitiveEntity::*)() ) static_cast<Select3D_BndBox3d (MeshVS_DummySensitiveEntity::*)() >(&MeshVS_DummySensitiveEntity::BoundingBox),
             R"#(None)#" )
        .def("BVH",
             (void (MeshVS_DummySensitiveEntity::*)() ) static_cast<void (MeshVS_DummySensitiveEntity::*)() >(&MeshVS_DummySensitiveEntity::BVH),
             R"#(None)#" )
        .def("Clear",
             (void (MeshVS_DummySensitiveEntity::*)() ) static_cast<void (MeshVS_DummySensitiveEntity::*)() >(&MeshVS_DummySensitiveEntity::Clear),
             R"#(None)#" )
        .def("HasInitLocation",
             (Standard_Boolean (MeshVS_DummySensitiveEntity::*)() const) static_cast<Standard_Boolean (MeshVS_DummySensitiveEntity::*)() const>(&MeshVS_DummySensitiveEntity::HasInitLocation),
             R"#(None)#" )
        .def("InvInitLocation",
             (gp_GTrsf (MeshVS_DummySensitiveEntity::*)() const) static_cast<gp_GTrsf (MeshVS_DummySensitiveEntity::*)() const>(&MeshVS_DummySensitiveEntity::InvInitLocation),
             R"#(None)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (MeshVS_DummySensitiveEntity::*)() const) static_cast<gp_Pnt (MeshVS_DummySensitiveEntity::*)() const>(&MeshVS_DummySensitiveEntity::CenterOfGeometry),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_DummySensitiveEntity::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_DummySensitiveEntity::*)() const>(&MeshVS_DummySensitiveEntity::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_DummySensitiveEntity::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_HArray1OfSequenceOfInteger ,opencascade::handle<MeshVS_HArray1OfSequenceOfInteger> , MeshVS_Array1OfSequenceOfInteger, Standard_Transient>>(m.attr("MeshVS_HArray1OfSequenceOfInteger"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theLower"),  py::arg("theUpper") )
        .def(py::init< const Standard_Integer,const Standard_Integer, const NCollection_Sequence<int> & >()  , py::arg("theLower"),  py::arg("theUpper"),  py::arg("theValue") )
        .def(py::init<  const NCollection_Array1<TColStd_SequenceOfInteger> & >()  , py::arg("theOther") )
    // custom constructors
    // methods
        .def("Array1",
             (const MeshVS_Array1OfSequenceOfInteger & (MeshVS_HArray1OfSequenceOfInteger::*)() const) static_cast<const MeshVS_Array1OfSequenceOfInteger & (MeshVS_HArray1OfSequenceOfInteger::*)() const>(&MeshVS_HArray1OfSequenceOfInteger::Array1),
             R"#(None)#" )
        .def("ChangeArray1",
             (MeshVS_Array1OfSequenceOfInteger & (MeshVS_HArray1OfSequenceOfInteger::*)() ) static_cast<MeshVS_Array1OfSequenceOfInteger & (MeshVS_HArray1OfSequenceOfInteger::*)() >(&MeshVS_HArray1OfSequenceOfInteger::ChangeArray1),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_HArray1OfSequenceOfInteger::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_HArray1OfSequenceOfInteger::*)() const>(&MeshVS_HArray1OfSequenceOfInteger::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_HArray1OfSequenceOfInteger::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&MeshVS_HArray1OfSequenceOfInteger::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_Mesh ,opencascade::handle<MeshVS_Mesh> , AIS_InteractiveObject>>(m.attr("MeshVS_Mesh"))
    // constructors
    // custom constructors
    // methods
        .def("AcceptDisplayMode",
             (Standard_Boolean (MeshVS_Mesh::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (MeshVS_Mesh::*)( const Standard_Integer ) const>(&MeshVS_Mesh::AcceptDisplayMode),
             R"#(Returns true for supported display modes basing on a list of defined builders.)#"  , py::arg("theMode"))
        .def("Compute",
             (void (MeshVS_Mesh::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Presentation> & , const Standard_Integer ) ) static_cast<void (MeshVS_Mesh::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Presentation> & , const Standard_Integer ) >(&MeshVS_Mesh::Compute),
             R"#(Computes presentation using builders added to sequence. Each builder computes own part of mesh presentation according to its type.)#"  , py::arg("PM"),  py::arg("Prs"),  py::arg("DisplayMode"))
        .def("ComputeSelection",
             (void (MeshVS_Mesh::*)( const opencascade::handle<SelectMgr_Selection> & , const Standard_Integer ) ) static_cast<void (MeshVS_Mesh::*)( const opencascade::handle<SelectMgr_Selection> & , const Standard_Integer ) >(&MeshVS_Mesh::ComputeSelection),
             R"#(Computes selection according to SelectMode)#"  , py::arg("Sel"),  py::arg("SelectMode"))
        .def("HilightSelected",
             (void (MeshVS_Mesh::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > & ) ) static_cast<void (MeshVS_Mesh::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & ,  const NCollection_Sequence<opencascade::handle<SelectMgr_EntityOwner> > & ) >(&MeshVS_Mesh::HilightSelected),
             R"#(Draw selected owners presentation)#"  , py::arg("PM"),  py::arg("Owners"))
        .def("HilightOwnerWithColor",
             (void (MeshVS_Mesh::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const opencascade::handle<SelectMgr_EntityOwner> & ) ) static_cast<void (MeshVS_Mesh::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const opencascade::handle<SelectMgr_EntityOwner> & ) >(&MeshVS_Mesh::HilightOwnerWithColor),
             R"#(Draw hilighted owner presentation)#"  , py::arg("thePM"),  py::arg("theColor"),  py::arg("theOwner"))
        .def("ClearSelected",
             (void (MeshVS_Mesh::*)() ) static_cast<void (MeshVS_Mesh::*)() >(&MeshVS_Mesh::ClearSelected),
             R"#(Clears internal selection presentation)#" )
        .def("IsWholeMeshOwner",
             (Standard_Boolean (MeshVS_Mesh::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const) static_cast<Standard_Boolean (MeshVS_Mesh::*)( const opencascade::handle<SelectMgr_EntityOwner> & ) const>(&MeshVS_Mesh::IsWholeMeshOwner),
             R"#(Returns True if the given owner represents a whole mesh.)#"  , py::arg("theOwner"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_Mesh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_Mesh::*)() const>(&MeshVS_Mesh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_Mesh::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_MeshEntityOwner ,opencascade::handle<MeshVS_MeshEntityOwner> , SelectMgr_EntityOwner>>(m.attr("MeshVS_MeshEntityOwner"))
    // constructors
    // custom constructors
    // methods
        .def("IsHilighted",
             (Standard_Boolean (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) const) static_cast<Standard_Boolean (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) const>(&MeshVS_MeshEntityOwner::IsHilighted),
             R"#(Returns true if owner is hilighted)#"  , py::arg("PM"),  py::arg("Mode")=static_cast<const Standard_Integer>(0))
        .def("HilightWithColor",
             (void (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) ) static_cast<void (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) >(&MeshVS_MeshEntityOwner::HilightWithColor),
             R"#(Hilights owner with the certain color)#"  , py::arg("thePM"),  py::arg("theStyle"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Unhilight",
             (void (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&MeshVS_MeshEntityOwner::Unhilight),
             R"#(Strip hilight of owner)#"  , py::arg("PM"),  py::arg("Mode")=static_cast<const Standard_Integer>(0))
        .def("Clear",
             (void (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (MeshVS_MeshEntityOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&MeshVS_MeshEntityOwner::Clear),
             R"#(None)#"  , py::arg("PM"),  py::arg("Mode")=static_cast<const Standard_Integer>(0))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_MeshEntityOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_MeshEntityOwner::*)() const>(&MeshVS_MeshEntityOwner::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_MeshEntityOwner::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_MeshOwner ,opencascade::handle<MeshVS_MeshOwner> , SelectMgr_EntityOwner>>(m.attr("MeshVS_MeshOwner"))
    // constructors
    // custom constructors
    // methods
        .def("AddSelectedEntities",
             (void (MeshVS_MeshOwner::*)( const opencascade::handle<TColStd_HPackedMapOfInteger> & , const opencascade::handle<TColStd_HPackedMapOfInteger> & ) ) static_cast<void (MeshVS_MeshOwner::*)( const opencascade::handle<TColStd_HPackedMapOfInteger> & , const opencascade::handle<TColStd_HPackedMapOfInteger> & ) >(&MeshVS_MeshOwner::AddSelectedEntities),
             R"#(Saves ids of selected mesh entities)#"  , py::arg("Nodes"),  py::arg("Elems"))
        .def("ClearSelectedEntities",
             (void (MeshVS_MeshOwner::*)() ) static_cast<void (MeshVS_MeshOwner::*)() >(&MeshVS_MeshOwner::ClearSelectedEntities),
             R"#(Clears ids of selected mesh entities)#" )
        .def("HilightWithColor",
             (void (MeshVS_MeshOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) ) static_cast<void (MeshVS_MeshOwner::*)( const opencascade::handle<PrsMgr_PresentationManager3d> & , const opencascade::handle<Prs3d_Drawer> & , const Standard_Integer ) >(&MeshVS_MeshOwner::HilightWithColor),
             R"#(None)#"  , py::arg("thePM"),  py::arg("theColor"),  py::arg("theMode")=static_cast<const Standard_Integer>(0))
        .def("Unhilight",
             (void (MeshVS_MeshOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) ) static_cast<void (MeshVS_MeshOwner::*)( const opencascade::handle<PrsMgr_PresentationManager> & , const Standard_Integer ) >(&MeshVS_MeshOwner::Unhilight),
             R"#(None)#"  , py::arg("PM"),  py::arg("Mode")=static_cast<const Standard_Integer>(0))
        .def("IsForcedHilight",
             (Standard_Boolean (MeshVS_MeshOwner::*)() const) static_cast<Standard_Boolean (MeshVS_MeshOwner::*)() const>(&MeshVS_MeshOwner::IsForcedHilight),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_MeshOwner::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_MeshOwner::*)() const>(&MeshVS_MeshOwner::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_MeshOwner::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_PrsBuilder ,opencascade::handle<MeshVS_PrsBuilder>,Py_MeshVS_PrsBuilder , Standard_Transient>>(m.attr("MeshVS_PrsBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (MeshVS_PrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (MeshVS_PrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const>(&MeshVS_PrsBuilder::Build),
             R"#(Builds presentation of certain type of data. Prs is presentation object which this method constructs. IDs is set of numeric identificators forming object appearance. IDsToExclude is set of IDs to exclude from processing. If some entity has been excluded, it is not processed by other builders. IsElement indicates, IDs is identificators of nodes or elements. DisplayMode is numeric constant describing display mode (see MeshVS_DisplayModeFlags.hxx))#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("IsElement"),  py::arg("DisplayMode"))
        .def("CustomBuild",
             (void (MeshVS_PrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Integer ) const) static_cast<void (MeshVS_PrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Integer ) const>(&MeshVS_PrsBuilder::CustomBuild),
             R"#(This method is called to build presentation of custom elements (they have MeshVS_ET_0D type). IDs is set of numeric identificators of elements for custom building. IDsToExclude is set of IDs to exclude from processing. If some entity has been excluded, it is not processed by other builders. DisplayMode is numeric constant describing display mode (see MeshVS_DisplayModeFlags.hxx))#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("DisplayMode"))
        .def("CustomSensitiveEntity",
             (opencascade::handle<Select3D_SensitiveEntity> (MeshVS_PrsBuilder::*)( const opencascade::handle<SelectMgr_EntityOwner> & , const Standard_Integer ) const) static_cast<opencascade::handle<Select3D_SensitiveEntity> (MeshVS_PrsBuilder::*)( const opencascade::handle<SelectMgr_EntityOwner> & , const Standard_Integer ) const>(&MeshVS_PrsBuilder::CustomSensitiveEntity),
             R"#(This method is called to build sensitive of custom elements ( they have MeshVS_ET_0D type ))#"  , py::arg("Owner"),  py::arg("SelectMode"))
        .def("TestFlags",
             (Standard_Boolean (MeshVS_PrsBuilder::*)( const Standard_Integer ) const) static_cast<Standard_Boolean (MeshVS_PrsBuilder::*)( const Standard_Integer ) const>(&MeshVS_PrsBuilder::TestFlags),
             R"#(Test whether display mode has flags assigned with this builder. This method has default implementation and can be redefined for advance behavior Returns Standard_True only if display mode is appropriate for this builder)#"  , py::arg("DisplayMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_PrsBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_PrsBuilder::*)() const>(&MeshVS_PrsBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_PrsBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_SensitiveFace ,opencascade::handle<MeshVS_SensitiveFace> , Select3D_SensitiveFace>>(m.attr("MeshVS_SensitiveFace"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_SensitiveFace::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_SensitiveFace::*)() const>(&MeshVS_SensitiveFace::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_SensitiveFace::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_SensitiveMesh ,opencascade::handle<MeshVS_SensitiveMesh> , Select3D_SensitiveEntity>>(m.attr("MeshVS_SensitiveMesh"))
    // constructors
    // custom constructors
    // methods
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (MeshVS_SensitiveMesh::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (MeshVS_SensitiveMesh::*)() >(&MeshVS_SensitiveMesh::GetConnected),
             R"#(None)#" )
        .def("Matches",
             (Standard_Boolean (MeshVS_SensitiveMesh::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (MeshVS_SensitiveMesh::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&MeshVS_SensitiveMesh::Matches),
             R"#(Checks whether sensitive overlaps current selecting volume.)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("NbSubElements",
             (Standard_Integer (MeshVS_SensitiveMesh::*)() ) static_cast<Standard_Integer (MeshVS_SensitiveMesh::*)() >(&MeshVS_SensitiveMesh::NbSubElements),
             R"#(Returns the amount of mesh nodes)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (MeshVS_SensitiveMesh::*)() ) static_cast<Select3D_BndBox3d (MeshVS_SensitiveMesh::*)() >(&MeshVS_SensitiveMesh::BoundingBox),
             R"#(Returns bounding box of mesh)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (MeshVS_SensitiveMesh::*)() const) static_cast<gp_Pnt (MeshVS_SensitiveMesh::*)() const>(&MeshVS_SensitiveMesh::CenterOfGeometry),
             R"#(Returns center of mesh)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_SensitiveMesh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_SensitiveMesh::*)() const>(&MeshVS_SensitiveMesh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_SensitiveMesh::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_SensitivePolyhedron ,opencascade::handle<MeshVS_SensitivePolyhedron> , Select3D_SensitiveEntity>>(m.attr("MeshVS_SensitivePolyhedron"))
    // constructors
    // custom constructors
    // methods
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (MeshVS_SensitivePolyhedron::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (MeshVS_SensitivePolyhedron::*)() >(&MeshVS_SensitivePolyhedron::GetConnected),
             R"#(None)#" )
        .def("Matches",
             (Standard_Boolean (MeshVS_SensitivePolyhedron::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (MeshVS_SensitivePolyhedron::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&MeshVS_SensitivePolyhedron::Matches),
             R"#(None)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("NbSubElements",
             (Standard_Integer (MeshVS_SensitivePolyhedron::*)() ) static_cast<Standard_Integer (MeshVS_SensitivePolyhedron::*)() >(&MeshVS_SensitivePolyhedron::NbSubElements),
             R"#(Returns the amount of nodes of polyhedron)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (MeshVS_SensitivePolyhedron::*)() ) static_cast<Select3D_BndBox3d (MeshVS_SensitivePolyhedron::*)() >(&MeshVS_SensitivePolyhedron::BoundingBox),
             R"#(None)#" )
        .def("CenterOfGeometry",
             (gp_Pnt (MeshVS_SensitivePolyhedron::*)() const) static_cast<gp_Pnt (MeshVS_SensitivePolyhedron::*)() const>(&MeshVS_SensitivePolyhedron::CenterOfGeometry),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_SensitivePolyhedron::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_SensitivePolyhedron::*)() const>(&MeshVS_SensitivePolyhedron::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_SensitivePolyhedron::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_SensitiveQuad ,opencascade::handle<MeshVS_SensitiveQuad> , Select3D_SensitiveEntity>>(m.attr("MeshVS_SensitiveQuad"))
    // constructors
    // custom constructors
    // methods
        .def("NbSubElements",
             (Standard_Integer (MeshVS_SensitiveQuad::*)() ) static_cast<Standard_Integer (MeshVS_SensitiveQuad::*)() >(&MeshVS_SensitiveQuad::NbSubElements),
             R"#(Returns the amount of sub-entities in sensitive)#" )
        .def("GetConnected",
             (opencascade::handle<Select3D_SensitiveEntity> (MeshVS_SensitiveQuad::*)() ) static_cast<opencascade::handle<Select3D_SensitiveEntity> (MeshVS_SensitiveQuad::*)() >(&MeshVS_SensitiveQuad::GetConnected),
             R"#(Returns a copy of this sensitive quadrangle)#" )
        .def("Matches",
             (Standard_Boolean (MeshVS_SensitiveQuad::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) ) static_cast<Standard_Boolean (MeshVS_SensitiveQuad::*)( SelectBasics_SelectingVolumeManager & , SelectBasics_PickResult & ) >(&MeshVS_SensitiveQuad::Matches),
             R"#(Checks whether the box overlaps current selecting volume)#"  , py::arg("theMgr"),  py::arg("thePickResult"))
        .def("CenterOfGeometry",
             (gp_Pnt (MeshVS_SensitiveQuad::*)() const) static_cast<gp_Pnt (MeshVS_SensitiveQuad::*)() const>(&MeshVS_SensitiveQuad::CenterOfGeometry),
             R"#(Returns center of the box)#" )
        .def("BoundingBox",
             (Select3D_BndBox3d (MeshVS_SensitiveQuad::*)() ) static_cast<Select3D_BndBox3d (MeshVS_SensitiveQuad::*)() >(&MeshVS_SensitiveQuad::BoundingBox),
             R"#(Returns coordinates of the box)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_SensitiveQuad::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_SensitiveQuad::*)() const>(&MeshVS_SensitiveQuad::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_SensitiveQuad::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_SensitiveSegment ,opencascade::handle<MeshVS_SensitiveSegment> , Select3D_SensitiveSegment>>(m.attr("MeshVS_SensitiveSegment"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_SensitiveSegment::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_SensitiveSegment::*)() const>(&MeshVS_SensitiveSegment::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_SensitiveSegment::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<MeshVS_SymmetricPairHasher , shared_ptr<MeshVS_SymmetricPairHasher>>(m,"MeshVS_SymmetricPairHasher");

    static_cast<py::class_<MeshVS_SymmetricPairHasher , shared_ptr<MeshVS_SymmetricPairHasher> >>(m.attr("MeshVS_SymmetricPairHasher"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("HashCode_s",
                    (Standard_Integer (*)(  const std::pair<Standard_Integer, Standard_Integer> & , const Standard_Integer ) ) static_cast<Standard_Integer (*)(  const std::pair<Standard_Integer, Standard_Integer> & , const Standard_Integer ) >(&MeshVS_SymmetricPairHasher::HashCode),
                    R"#(Computes a hash code for the node pair, in the range [1, theUpperBound])#"  , py::arg("theNodePair"),  py::arg("theUpperBound"))
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)(  const std::pair<Standard_Integer, Standard_Integer> & ,  const std::pair<Standard_Integer, Standard_Integer> & ) ) static_cast<Standard_Boolean (*)(  const std::pair<Standard_Integer, Standard_Integer> & ,  const std::pair<Standard_Integer, Standard_Integer> & ) >(&MeshVS_SymmetricPairHasher::IsEqual),
                    R"#(None)#"  , py::arg("thePair1"),  py::arg("thePair2"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<MeshVS_Tool , shared_ptr<MeshVS_Tool>>(m,"MeshVS_Tool");

    static_cast<py::class_<MeshVS_Tool , shared_ptr<MeshVS_Tool> >>(m.attr("MeshVS_Tool"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<MeshVS_TwoColors , shared_ptr<MeshVS_TwoColors>>(m,"MeshVS_TwoColors");

    static_cast<py::class_<MeshVS_TwoColors , shared_ptr<MeshVS_TwoColors> >>(m.attr("MeshVS_TwoColors"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_TwoNodes , shared_ptr<MeshVS_TwoNodes> >>(m.attr("MeshVS_TwoNodes"))
    // constructors
        .def(py::init< Standard_Integer,Standard_Integer >()  , py::arg("aFirst")=static_cast<Standard_Integer>(0),  py::arg("aSecond")=static_cast<Standard_Integer>(0) )
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_DataSource3D ,opencascade::handle<MeshVS_DataSource3D>,Py_MeshVS_DataSource3D , MeshVS_DataSource>>(m.attr("MeshVS_DataSource3D"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_DataSource3D::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_DataSource3D::*)() const>(&MeshVS_DataSource3D::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_DataSource3D::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_DeformedDataSource ,opencascade::handle<MeshVS_DeformedDataSource> , MeshVS_DataSource>>(m.attr("MeshVS_DeformedDataSource"))
    // constructors
    // custom constructors
    // methods
        .def("GetGeom",
             (Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , const Standard_Boolean , NCollection_Array1<Standard_Real> & , Standard_Integer & , MeshVS_EntityType & ) const) static_cast<Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , const Standard_Boolean , NCollection_Array1<Standard_Real> & , Standard_Integer & , MeshVS_EntityType & ) const>(&MeshVS_DeformedDataSource::GetGeom),
             R"#(None)#"  , py::arg("ID"),  py::arg("IsElement"),  py::arg("Coords"),  py::arg("NbNodes"),  py::arg("Type"))
        .def("GetGeomType",
             (Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , const Standard_Boolean , MeshVS_EntityType & ) const) static_cast<Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , const Standard_Boolean , MeshVS_EntityType & ) const>(&MeshVS_DeformedDataSource::GetGeomType),
             R"#(None)#"  , py::arg("ID"),  py::arg("IsElement"),  py::arg("Type"))
        .def("Get3DGeom",
             (Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , Standard_Integer & , opencascade::handle<MeshVS_HArray1OfSequenceOfInteger> & ) const) static_cast<Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , Standard_Integer & , opencascade::handle<MeshVS_HArray1OfSequenceOfInteger> & ) const>(&MeshVS_DeformedDataSource::Get3DGeom),
             R"#(None)#"  , py::arg("ID"),  py::arg("NbNodes"),  py::arg("Data"))
        .def("GetAddr",
             (Standard_Address (MeshVS_DeformedDataSource::*)( const Standard_Integer , const Standard_Boolean ) const) static_cast<Standard_Address (MeshVS_DeformedDataSource::*)( const Standard_Integer , const Standard_Boolean ) const>(&MeshVS_DeformedDataSource::GetAddr),
             R"#(None)#"  , py::arg("ID"),  py::arg("IsElement"))
        .def("GetNodesByElement",
             (Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , NCollection_Array1<Standard_Integer> & , Standard_Integer & ) const) static_cast<Standard_Boolean (MeshVS_DeformedDataSource::*)( const Standard_Integer , NCollection_Array1<Standard_Integer> & , Standard_Integer & ) const>(&MeshVS_DeformedDataSource::GetNodesByElement),
             R"#(None)#"  , py::arg("ID"),  py::arg("NodeIDs"),  py::arg("NbNodes"))
        .def("GetAllNodes",
             (const TColStd_PackedMapOfInteger & (MeshVS_DeformedDataSource::*)() const) static_cast<const TColStd_PackedMapOfInteger & (MeshVS_DeformedDataSource::*)() const>(&MeshVS_DeformedDataSource::GetAllNodes),
             R"#(None)#" )
        .def("GetAllElements",
             (const TColStd_PackedMapOfInteger & (MeshVS_DeformedDataSource::*)() const) static_cast<const TColStd_PackedMapOfInteger & (MeshVS_DeformedDataSource::*)() const>(&MeshVS_DeformedDataSource::GetAllElements),
             R"#(None)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_DeformedDataSource::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_DeformedDataSource::*)() const>(&MeshVS_DeformedDataSource::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_DeformedDataSource::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_ElementalColorPrsBuilder ,opencascade::handle<MeshVS_ElementalColorPrsBuilder> , MeshVS_PrsBuilder>>(m.attr("MeshVS_ElementalColorPrsBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (MeshVS_ElementalColorPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (MeshVS_ElementalColorPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const>(&MeshVS_ElementalColorPrsBuilder::Build),
             R"#(Builds presentation of elements with assigned colors.)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("IsElement"),  py::arg("DisplayMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_ElementalColorPrsBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_ElementalColorPrsBuilder::*)() const>(&MeshVS_ElementalColorPrsBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_ElementalColorPrsBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_MeshPrsBuilder ,opencascade::handle<MeshVS_MeshPrsBuilder> , MeshVS_PrsBuilder>>(m.attr("MeshVS_MeshPrsBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const>(&MeshVS_MeshPrsBuilder::Build),
             R"#(Builds base mesh presentation by calling the methods below)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("IsElement"),  py::arg("DisplayMode"))
        .def("BuildNodes",
             (void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Integer ) const) static_cast<void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Integer ) const>(&MeshVS_MeshPrsBuilder::BuildNodes),
             R"#(Builds nodes presentation)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("DisplayMode"))
        .def("BuildElements",
             (void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Integer ) const) static_cast<void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Integer ) const>(&MeshVS_MeshPrsBuilder::BuildElements),
             R"#(Builds elements presentation)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("DisplayMode"))
        .def("BuildHilightPrs",
             (void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , const Standard_Boolean ) const) static_cast<void (MeshVS_MeshPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , const Standard_Boolean ) const>(&MeshVS_MeshPrsBuilder::BuildHilightPrs),
             R"#(Builds presentation of hilighted entity)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IsElement"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_MeshPrsBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_MeshPrsBuilder::*)() const>(&MeshVS_MeshPrsBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_MeshPrsBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_NodalColorPrsBuilder ,opencascade::handle<MeshVS_NodalColorPrsBuilder> , MeshVS_PrsBuilder>>(m.attr("MeshVS_NodalColorPrsBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (MeshVS_NodalColorPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (MeshVS_NodalColorPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const>(&MeshVS_NodalColorPrsBuilder::Build),
             R"#(Builds presentation of nodes with assigned color.)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("IsElement"),  py::arg("DisplayMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_NodalColorPrsBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_NodalColorPrsBuilder::*)() const>(&MeshVS_NodalColorPrsBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_NodalColorPrsBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_TextPrsBuilder ,opencascade::handle<MeshVS_TextPrsBuilder> , MeshVS_PrsBuilder>>(m.attr("MeshVS_TextPrsBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (MeshVS_TextPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (MeshVS_TextPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const>(&MeshVS_TextPrsBuilder::Build),
             R"#(Builds presentation of text data)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("IsElement"),  py::arg("theDisplayMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_TextPrsBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_TextPrsBuilder::*)() const>(&MeshVS_TextPrsBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_TextPrsBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<MeshVS_VectorPrsBuilder ,opencascade::handle<MeshVS_VectorPrsBuilder> , MeshVS_PrsBuilder>>(m.attr("MeshVS_VectorPrsBuilder"))
    // constructors
    // custom constructors
    // methods
        .def("Build",
             (void (MeshVS_VectorPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const) static_cast<void (MeshVS_VectorPrsBuilder::*)( const opencascade::handle<Prs3d_Presentation> & , const TColStd_PackedMapOfInteger & , TColStd_PackedMapOfInteger & , const Standard_Boolean , const Standard_Integer ) const>(&MeshVS_VectorPrsBuilder::Build),
             R"#(Builds vector data presentation)#"  , py::arg("Prs"),  py::arg("IDs"),  py::arg("IDsToExclude"),  py::arg("IsElement"),  py::arg("theDisplayMode"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (MeshVS_VectorPrsBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (MeshVS_VectorPrsBuilder::*)() const>(&MeshVS_VectorPrsBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&MeshVS_VectorPrsBuilder::get_type_name),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/MeshVS_DeformedDataSource.hxx
// ./opencascade/MeshVS_DataMapOfTwoColorsMapOfInteger.hxx
// ./opencascade/MeshVS_TwoColors.hxx
// ./opencascade/MeshVS_DataMapOfIntegerBoolean.hxx
// ./opencascade/MeshVS_Drawer.hxx
// ./opencascade/MeshVS_Mesh.hxx
// ./opencascade/MeshVS_DataMapOfIntegerVector.hxx
// ./opencascade/MeshVS_DummySensitiveEntity.hxx
// ./opencascade/MeshVS_DataSource.hxx
// ./opencascade/MeshVS_TwoNodesHasher.hxx
// ./opencascade/MeshVS_DataMapOfColorMapOfInteger.hxx
// ./opencascade/MeshVS_MeshEntityOwner.hxx
// ./opencascade/MeshVS_PrsBuilder.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerOwner.hxx
// ./opencascade/MeshVS_DataMapOfIntegerMaterial.hxx
// ./opencascade/MeshVS_NodalColorPrsBuilder.hxx
// ./opencascade/MeshVS_SequenceOfPrsBuilder.hxx
// ./opencascade/MeshVS_MeshOwner.hxx
// ./opencascade/MeshVS_Tool.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfColorMapOfInteger.hxx
// ./opencascade/MeshVS_CommonSensitiveEntity.hxx
// ./opencascade/MeshVS_MapIteratorOfMapOfTwoNodes.hxx
// ./opencascade/MeshVS_Array1OfSequenceOfInteger.hxx
// ./opencascade/MeshVS_DataSource3D.hxx
// ./opencascade/MeshVS_DisplayModeFlags.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerAsciiString.hxx
// ./opencascade/MeshVS_HArray1OfSequenceOfInteger.hxx
// ./opencascade/MeshVS_SymmetricPairHasher.hxx
// ./opencascade/MeshVS_SensitiveSegment.hxx
// ./opencascade/MeshVS_TwoNodes.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const MeshVS_TwoNodes & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const MeshVS_TwoNodes & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for two nodes, in the range [1, theUpperBound])#"  , py::arg("theTwoNodes"),  py::arg("theUpperBound"));
// ./opencascade/MeshVS_DataMapOfIntegerTwoColors.hxx
// ./opencascade/MeshVS_SensitiveQuad.hxx
// ./opencascade/MeshVS_ColorHasher.hxx
// ./opencascade/MeshVS_VectorPrsBuilder.hxx
// ./opencascade/MeshVS_DataMapOfIntegerColor.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial.hxx
// ./opencascade/MeshVS_TextPrsBuilder.hxx
// ./opencascade/MeshVS_SensitivePolyhedron.hxx
// ./opencascade/MeshVS_SensitiveFace.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerColor.hxx
// ./opencascade/MeshVS_ElementalColorPrsBuilder.hxx
// ./opencascade/MeshVS_MeshSelectionMethod.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerBoolean.hxx
// ./opencascade/MeshVS_SensitiveMesh.hxx
// ./opencascade/MeshVS_BuilderPriority.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerVector.hxx
// ./opencascade/MeshVS_DataMapOfIntegerOwner.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfTwoColorsMapOfInteger.hxx
// ./opencascade/MeshVS_MeshPtr.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerTwoColors.hxx
// ./opencascade/MeshVS_EntityType.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfIntegerMeshEntityOwner.hxx
// ./opencascade/MeshVS_DrawerAttribute.hxx
// ./opencascade/MeshVS_DataMapOfHArray1OfSequenceOfInteger.hxx
// ./opencascade/MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger.hxx
// ./opencascade/MeshVS_DataMapOfIntegerMeshEntityOwner.hxx
// ./opencascade/MeshVS_TwoColorsHasher.hxx
// ./opencascade/MeshVS_DataMapOfIntegerAsciiString.hxx
// ./opencascade/MeshVS_SelectionModeFlags.hxx
// ./opencascade/MeshVS_MapOfTwoNodes.hxx
// ./opencascade/MeshVS_MeshPrsBuilder.hxx
// ./opencascade/MeshVS_Buffer.hxx

// Additional functions

// operators

// register typdefs
    register_template_NCollection_DataMap<MeshVS_TwoColors, TColStd_MapOfInteger, MeshVS_TwoColorsHasher>(m,"MeshVS_DataMapOfTwoColorsMapOfInteger");
    register_template_NCollection_DataMap<Standard_Integer, Standard_Boolean, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerBoolean");
    register_template_NCollection_DataMap<Standard_Integer, gp_Vec, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerVector");
    register_template_NCollection_DefaultHasher<MeshVS_TwoNodes>(m,"MeshVS_TwoNodesHasher");
    register_template_NCollection_DataMap<Quantity_Color, TColStd_MapOfInteger, Quantity_ColorHasher>(m,"MeshVS_DataMapOfColorMapOfInteger");
    register_template_NCollection_DataMap<Standard_Integer, Graphic3d_MaterialAspect, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerMaterial");
    register_template_NCollection_Sequence<opencascade::handle<MeshVS_PrsBuilder> >(m,"MeshVS_SequenceOfPrsBuilder");
    register_template_NCollection_Array1<TColStd_SequenceOfInteger>(m,"MeshVS_Array1OfSequenceOfInteger");
    register_template_NCollection_DataMap<Standard_Integer, MeshVS_TwoColors, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerTwoColors");
    register_template_NCollection_DataMap<Standard_Integer, Quantity_Color, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerColor");
    register_template_NCollection_List<opencascade::handle<TColgp_HArray1OfPnt> >(m,"MeshVS_PolyhedronVerts");
    register_template_NCollection_DefaultHasher<MeshVS_TwoColors>(m,"MeshVS_TwoColorsHasher");
    register_template_NCollection_DataMap<Standard_Integer, TCollection_AsciiString, TColStd_MapIntegerHasher>(m,"MeshVS_DataMapOfIntegerAsciiString");
    register_template_NCollection_Map<MeshVS_TwoNodes, MeshVS_TwoNodesHasher>(m,"MeshVS_MapOfTwoNodes");


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
