
// std lib related includes
#include <tuple>

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;


// Standard Handle
#include <Standard_Handle.hxx>


// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <gp_Circ2d.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <Adaptor3d_HSurface.hxx>
#include <CSLib_Class2d.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Poly_Polygon3D.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Box.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <BRepMesh_DiscretRoot.hxx>

// module includes
#include <BRepMesh_Circle.hxx>
#include <BRepMesh_CircleInspector.hxx>
#include <BRepMesh_CircleTool.hxx>
#include <BRepMesh_Classifier.hxx>
#include <BRepMesh_Context.hxx>
#include <BRepMesh_CurveTessellator.hxx>
#include <BRepMesh_DataStructureOfDelaun.hxx>
#include <BRepMesh_Deflection.hxx>
#include <BRepMesh_DegreeOfFreedom.hxx>
#include <BRepMesh_Delaun.hxx>
#include <BRepMesh_DiscretFactory.hxx>
#include <BRepMesh_DiscretRoot.hxx>
#include <BRepMesh_Edge.hxx>
#include <BRepMesh_EdgeDiscret.hxx>
#include <BRepMesh_EdgeParameterProvider.hxx>
#include <BRepMesh_EdgeTessellationExtractor.hxx>
#include <BRepMesh_FaceChecker.hxx>
#include <BRepMesh_FaceDiscret.hxx>
#include <BRepMesh_FactoryError.hxx>
#include <BRepMesh_FastDiscret.hxx>
#include <BRepMesh_GeomTool.hxx>
#include <BRepMesh_IncrementalMesh.hxx>
#include <BRepMesh_MeshAlgoFactory.hxx>
#include <BRepMesh_MeshTool.hxx>
#include <BRepMesh_ModelBuilder.hxx>
#include <BRepMesh_ModelHealer.hxx>
#include <BRepMesh_ModelPostProcessor.hxx>
#include <BRepMesh_ModelPreProcessor.hxx>
#include <BRepMesh_OrientedEdge.hxx>
#include <BRepMesh_PairOfIndex.hxx>
#include <BRepMesh_PluginEntryType.hxx>
#include <BRepMesh_PluginMacro.hxx>
#include <BRepMesh_SelectorOfDataStructureOfDelaun.hxx>
#include <BRepMesh_ShapeTool.hxx>
#include <BRepMesh_ShapeVisitor.hxx>
#include <BRepMesh_Triangle.hxx>
#include <BRepMesh_Vertex.hxx>
#include <BRepMesh_VertexInspector.hxx>
#include <BRepMesh_VertexTool.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
#include <IMeshData_Wire.hxx>

// Module definiiton
void register_BRepMesh(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("BRepMesh"));


//Python trampoline classes
    class Py_BRepMesh_DiscretRoot : public BRepMesh_DiscretRoot{
    public:
        using BRepMesh_DiscretRoot::BRepMesh_DiscretRoot;


        // public pure virtual
        void Perform() override { PYBIND11_OVERLOAD_PURE(void,BRepMesh_DiscretRoot,Perform,) };


        // protected pure virtual


        // private pure virtual

    };

// classes


    static_cast<py::class_<BRepMesh_Circle , shared_ptr<BRepMesh_Circle> >>(m.attr("BRepMesh_Circle"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const Standard_Real >()  , py::arg("theLocation"),  py::arg("theRadius") )
    // custom constructors
    // methods
        .def("SetLocation",
             (void (BRepMesh_Circle::*)( const gp_XY & ) ) static_cast<void (BRepMesh_Circle::*)( const gp_XY & ) >(&BRepMesh_Circle::SetLocation),
             R"#(Sets location of a circle.)#"  , py::arg("theLocation"))
        .def("SetRadius",
             (void (BRepMesh_Circle::*)( const Standard_Real ) ) static_cast<void (BRepMesh_Circle::*)( const Standard_Real ) >(&BRepMesh_Circle::SetRadius),
             R"#(Sets radius of a circle.)#"  , py::arg("theRadius"))
        .def("Location",
             (const gp_XY & (BRepMesh_Circle::*)() const) static_cast<const gp_XY & (BRepMesh_Circle::*)() const>(&BRepMesh_Circle::Location),
             R"#(Returns location of a circle.)#" )
        .def("Radius",
             (const Standard_Real & (BRepMesh_Circle::*)() const) static_cast<const Standard_Real & (BRepMesh_Circle::*)() const>(&BRepMesh_Circle::Radius),
             R"#(Returns radius of a circle.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_CircleInspector , shared_ptr<BRepMesh_CircleInspector> , NCollection_CellFilter_InspectorXY>>(m.attr("BRepMesh_CircleInspector"))
    // constructors
        .def(py::init< const Standard_Real,const Standard_Integer,const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theTolerance"),  py::arg("theReservedSize"),  py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Bind",
             (void (BRepMesh_CircleInspector::*)( const Standard_Integer , const BRepMesh_Circle & ) ) static_cast<void (BRepMesh_CircleInspector::*)( const Standard_Integer , const BRepMesh_Circle & ) >(&BRepMesh_CircleInspector::Bind),
             R"#(Adds the circle to vector of circles at the given position.)#"  , py::arg("theIndex"),  py::arg("theCircle"))
        .def("Circles",
             (const IMeshData::VectorOfCircle & (BRepMesh_CircleInspector::*)() const) static_cast<const IMeshData::VectorOfCircle & (BRepMesh_CircleInspector::*)() const>(&BRepMesh_CircleInspector::Circles),
             R"#(Resutns vector of registered circles.)#" )
        .def("Circle",
             (BRepMesh_Circle & (BRepMesh_CircleInspector::*)( const Standard_Integer ) ) static_cast<BRepMesh_Circle & (BRepMesh_CircleInspector::*)( const Standard_Integer ) >(&BRepMesh_CircleInspector::Circle),
             R"#(Returns circle with the given index.)#"  , py::arg("theIndex"))
        .def("SetPoint",
             (void (BRepMesh_CircleInspector::*)( const gp_XY & ) ) static_cast<void (BRepMesh_CircleInspector::*)( const gp_XY & ) >(&BRepMesh_CircleInspector::SetPoint),
             R"#(Set reference point to be checked.)#"  , py::arg("thePoint"))
        .def("GetShotCircles",
             (IMeshData::ListOfInteger & (BRepMesh_CircleInspector::*)() ) static_cast<IMeshData::ListOfInteger & (BRepMesh_CircleInspector::*)() >(&BRepMesh_CircleInspector::GetShotCircles),
             R"#(Returns list of circles shot by the reference point.)#" )
        .def("Inspect",
             (NCollection_CellFilter_Action (BRepMesh_CircleInspector::*)( const Standard_Integer ) ) static_cast<NCollection_CellFilter_Action (BRepMesh_CircleInspector::*)( const Standard_Integer ) >(&BRepMesh_CircleInspector::Inspect),
             R"#(Performs inspection of a circle with the given index.)#"  , py::arg("theTargetIndex"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_Integer , const Standard_Integer ) >(&BRepMesh_CircleInspector::IsEqual),
                    R"#(Checks indices for equlity.)#"  , py::arg("theIndex"),  py::arg("theTargetIndex"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_CircleTool , shared_ptr<BRepMesh_CircleTool> >>(m.attr("BRepMesh_CircleTool"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theAllocator") )
        .def(py::init< const Standard_Integer,const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theReservedSize"),  py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Init",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer ) >(&BRepMesh_CircleTool::Init),
             R"#(Initializes the tool.)#"  , py::arg(""))
        .def("SetCellSize",
             (void (BRepMesh_CircleTool::*)( const Standard_Real ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Real ) >(&BRepMesh_CircleTool::SetCellSize),
             R"#(Sets new size for cell filter.)#"  , py::arg("theSize"))
        .def("SetCellSize",
             (void (BRepMesh_CircleTool::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Real , const Standard_Real ) >(&BRepMesh_CircleTool::SetCellSize),
             R"#(Sets new size for cell filter.)#"  , py::arg("theSizeX"),  py::arg("theSizeY"))
        .def("SetMinMaxSize",
             (void (BRepMesh_CircleTool::*)( const gp_XY & , const gp_XY & ) ) static_cast<void (BRepMesh_CircleTool::*)( const gp_XY & , const gp_XY & ) >(&BRepMesh_CircleTool::SetMinMaxSize),
             R"#(Sets limits of inspection area.)#"  , py::arg("theMin"),  py::arg("theMax"))
        .def("IsEmpty",
             (Standard_Boolean (BRepMesh_CircleTool::*)() const) static_cast<Standard_Boolean (BRepMesh_CircleTool::*)() const>(&BRepMesh_CircleTool::IsEmpty),
             R"#(Retruns true if cell filter contains no circle.)#" )
        .def("Bind",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer , const gp_Circ2d & ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer , const gp_Circ2d & ) >(&BRepMesh_CircleTool::Bind),
             R"#(Binds the circle to the tool.)#"  , py::arg("theIndex"),  py::arg("theCircle"))
        .def("Bind",
             (Standard_Boolean (BRepMesh_CircleTool::*)( const Standard_Integer , const gp_XY & , const gp_XY & , const gp_XY & ) ) static_cast<Standard_Boolean (BRepMesh_CircleTool::*)( const Standard_Integer , const gp_XY & , const gp_XY & , const gp_XY & ) >(&BRepMesh_CircleTool::Bind),
             R"#(Computes circle on three points and bind it to the tool.)#"  , py::arg("theIndex"),  py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("thePoint3"))
        .def("MocBind",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer ) >(&BRepMesh_CircleTool::MocBind),
             R"#(Binds implicit zero circle.)#"  , py::arg("theIndex"))
        .def("Delete",
             (void (BRepMesh_CircleTool::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_CircleTool::*)( const Standard_Integer ) >(&BRepMesh_CircleTool::Delete),
             R"#(Deletes a circle from the tool.)#"  , py::arg("theIndex"))
        .def("Select",
             (IMeshData::ListOfInteger & (BRepMesh_CircleTool::*)( const gp_XY & ) ) static_cast<IMeshData::ListOfInteger & (BRepMesh_CircleTool::*)( const gp_XY & ) >(&BRepMesh_CircleTool::Select),
             R"#(Select the circles shot by the given point.)#"  , py::arg("thePoint"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MakeCircle_s",
                    (Standard_Boolean (*)( const gp_XY & , const gp_XY & , const gp_XY & , gp_XY & , Standard_Real & ) ) static_cast<Standard_Boolean (*)( const gp_XY & , const gp_XY & , const gp_XY & , gp_XY & , Standard_Real & ) >(&BRepMesh_CircleTool::MakeCircle),
                    R"#(Computes circle on three points.)#"  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("thePoint3"),  py::arg("theLocation"),  py::arg("theRadius"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_Classifier ,opencascade::handle<BRepMesh_Classifier> , Standard_Transient>>(m.attr("BRepMesh_Classifier"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Perform",
             (TopAbs_State (BRepMesh_Classifier::*)( const gp_Pnt2d & ) const) static_cast<TopAbs_State (BRepMesh_Classifier::*)( const gp_Pnt2d & ) const>(&BRepMesh_Classifier::Perform),
             R"#(Performs classification of the given point regarding to face internals.)#"  , py::arg("thePoint"))
        .def("RegisterWire",
             (void (BRepMesh_Classifier::*)( const NCollection_Sequence<const gp_Pnt2d *> & , const std::pair<Standard_Real, Standard_Real> & , const std::pair<Standard_Real, Standard_Real> & , const std::pair<Standard_Real, Standard_Real> & ) ) static_cast<void (BRepMesh_Classifier::*)( const NCollection_Sequence<const gp_Pnt2d *> & , const std::pair<Standard_Real, Standard_Real> & , const std::pair<Standard_Real, Standard_Real> & , const std::pair<Standard_Real, Standard_Real> & ) >(&BRepMesh_Classifier::RegisterWire),
             R"#(Registers wire specified by sequence of points for further classification of points.)#"  , py::arg("theWire"),  py::arg("theTolUV"),  py::arg("theRangeU"),  py::arg("theRangeV"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_Classifier::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_Classifier::*)() const>(&BRepMesh_Classifier::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_Classifier::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_Classifier::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_Context ,opencascade::handle<BRepMesh_Context> >>(m.attr("BRepMesh_Context"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_Context::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_Context::*)() const>(&BRepMesh_Context::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_Context::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_Context::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_CurveTessellator ,opencascade::handle<BRepMesh_CurveTessellator> >>(m.attr("BRepMesh_CurveTessellator"))
    // constructors
        .def(py::init<  const opencascade::handle<IMeshData_Edge> &,const IMeshTools_Parameters & >()  , py::arg("theEdge"),  py::arg("theParameters") )
        .def(py::init<  const opencascade::handle<IMeshData_Edge> &,const TopAbs_Orientation, const opencascade::handle<IMeshData_Face> &,const IMeshTools_Parameters & >()  , py::arg("theEdge"),  py::arg("theOrientation"),  py::arg("theFace"),  py::arg("theParameters") )
    // custom constructors
    // methods
        .def("PointsNb",
             (Standard_Integer (BRepMesh_CurveTessellator::*)() const) static_cast<Standard_Integer (BRepMesh_CurveTessellator::*)() const>(&BRepMesh_CurveTessellator::PointsNb),
             R"#(Returns number of tessellation points.)#" )
        .def("Value",
             (Standard_Boolean (BRepMesh_CurveTessellator::*)( const Standard_Integer , gp_Pnt & , Standard_Real & ) const) static_cast<Standard_Boolean (BRepMesh_CurveTessellator::*)( const Standard_Integer , gp_Pnt & , Standard_Real & ) const>(&BRepMesh_CurveTessellator::Value),
             R"#(Returns parameters of solution with the given index.)#"  , py::arg("theIndex"),  py::arg("thePoint"),  py::arg("theParameter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_CurveTessellator::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_CurveTessellator::*)() const>(&BRepMesh_CurveTessellator::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_CurveTessellator::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_CurveTessellator::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_DataStructureOfDelaun ,opencascade::handle<BRepMesh_DataStructureOfDelaun> , Standard_Transient>>(m.attr("BRepMesh_DataStructureOfDelaun"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_IncAllocator> &,const Standard_Integer >()  , py::arg("theAllocator"),  py::arg("theReservedNodeSize")=static_cast<const Standard_Integer>(100) )
    // custom constructors
    // methods
        .def("NbNodes",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::NbNodes),
             R"#(Returns number of nodes.)#" )
        .def("AddNode",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex & , const Standard_Boolean ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex & , const Standard_Boolean ) >(&BRepMesh_DataStructureOfDelaun::AddNode),
             R"#(Adds node to the mesh if it is not already in the mesh.)#"  , py::arg("theNode"),  py::arg("isForceAdd")=static_cast<const Standard_Boolean>(Standard_False))
        .def("IndexOf",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex & ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Vertex & ) >(&BRepMesh_DataStructureOfDelaun::IndexOf),
             R"#(Finds the index of the given node.)#"  , py::arg("theNode"))
        .def("GetNode",
             (const BRepMesh_Vertex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) ) static_cast<const BRepMesh_Vertex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) >(&BRepMesh_DataStructureOfDelaun::GetNode),
             R"#(Get node by the index.)#"  , py::arg("theIndex"))
        .def("SubstituteNode",
             (Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const BRepMesh_Vertex & ) ) static_cast<Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const BRepMesh_Vertex & ) >(&BRepMesh_DataStructureOfDelaun::SubstituteNode),
             R"#(Substitutes the node with the given index by new one.)#"  , py::arg("theIndex"),  py::arg("theNewNode"))
        .def("RemoveNode",
             (void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const Standard_Boolean ) >(&BRepMesh_DataStructureOfDelaun::RemoveNode),
             R"#(Removes node from the mesh in case if it has no connected links and its type is Free.)#"  , py::arg("theIndex"),  py::arg("isForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("LinksConnectedTo",
             (const IMeshData::ListOfInteger & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) const) static_cast<const IMeshData::ListOfInteger & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) const>(&BRepMesh_DataStructureOfDelaun::LinksConnectedTo),
             R"#(Get list of links attached to the node with the given index.)#"  , py::arg("theIndex"))
        .def("NbLinks",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::NbLinks),
             R"#(Returns number of links.)#" )
        .def("AddLink",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge & ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge & ) >(&BRepMesh_DataStructureOfDelaun::AddLink),
             R"#(Adds link to the mesh if it is not already in the mesh.)#"  , py::arg("theLink"))
        .def("IndexOf",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge & ) const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Edge & ) const>(&BRepMesh_DataStructureOfDelaun::IndexOf),
             R"#(Finds the index of the given link.)#"  , py::arg("theLink"))
        .def("GetLink",
             (const BRepMesh_Edge & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) ) static_cast<const BRepMesh_Edge & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) >(&BRepMesh_DataStructureOfDelaun::GetLink),
             R"#(Get link by the index.)#"  , py::arg("theIndex"))
        .def("LinksOfDomain",
             (const IMeshData::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const IMeshData::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::LinksOfDomain),
             R"#(Returns map of indices of links registered in mesh.)#" )
        .def("SubstituteLink",
             (Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const BRepMesh_Edge & ) ) static_cast<Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const BRepMesh_Edge & ) >(&BRepMesh_DataStructureOfDelaun::SubstituteLink),
             R"#(Substitutes the link with the given index by new one.)#"  , py::arg("theIndex"),  py::arg("theNewLink"))
        .def("RemoveLink",
             (void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const Standard_Boolean ) ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const Standard_Boolean ) >(&BRepMesh_DataStructureOfDelaun::RemoveLink),
             R"#(Removes link from the mesh in case if it has no connected elements and its type is Free.)#"  , py::arg("theIndex"),  py::arg("isForce")=static_cast<const Standard_Boolean>(Standard_False))
        .def("ElementsConnectedTo",
             (const BRepMesh_PairOfIndex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) const) static_cast<const BRepMesh_PairOfIndex & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) const>(&BRepMesh_DataStructureOfDelaun::ElementsConnectedTo),
             R"#(Returns indices of elements conected to the link with the given index.)#"  , py::arg("theLinkIndex"))
        .def("NbElements",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::NbElements),
             R"#(Returns number of links.)#" )
        .def("AddElement",
             (Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Triangle & ) ) static_cast<Standard_Integer (BRepMesh_DataStructureOfDelaun::*)( const BRepMesh_Triangle & ) >(&BRepMesh_DataStructureOfDelaun::AddElement),
             R"#(Adds element to the mesh if it is not already in the mesh.)#"  , py::arg("theElement"))
        .def("GetElement",
             (const BRepMesh_Triangle & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) ) static_cast<const BRepMesh_Triangle & (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) >(&BRepMesh_DataStructureOfDelaun::GetElement),
             R"#(Get element by the index.)#"  , py::arg("theIndex"))
        .def("ElementsOfDomain",
             (const IMeshData::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const IMeshData::MapOfInteger & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::ElementsOfDomain),
             R"#(Returns map of indices of elements registered in mesh.)#" )
        .def("SubstituteElement",
             (Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const BRepMesh_Triangle & ) ) static_cast<Standard_Boolean (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer , const BRepMesh_Triangle & ) >(&BRepMesh_DataStructureOfDelaun::SubstituteElement),
             R"#(Substitutes the element with the given index by new one.)#"  , py::arg("theIndex"),  py::arg("theNewElement"))
        .def("RemoveElement",
             (void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( const Standard_Integer ) >(&BRepMesh_DataStructureOfDelaun::RemoveElement),
             R"#(Removes element from the mesh.)#"  , py::arg("theIndex"))
        .def("Dump",
             (void (BRepMesh_DataStructureOfDelaun::*)( Standard_CString ) ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( Standard_CString ) >(&BRepMesh_DataStructureOfDelaun::Dump),
             R"#(None)#"  , py::arg("theFileNameStr"))
        .def("Statistics",
             (void (BRepMesh_DataStructureOfDelaun::*)( std::ostream & ) const) static_cast<void (BRepMesh_DataStructureOfDelaun::*)( std::ostream & ) const>(&BRepMesh_DataStructureOfDelaun::Statistics),
             R"#(Dumps information about this structure.)#"  , py::arg("theStream"))
        .def("Allocator",
             (const opencascade::handle<NCollection_IncAllocator> & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const opencascade::handle<NCollection_IncAllocator> & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::Allocator),
             R"#(Returns memory allocator used by the structure.)#" )
        .def("Data",
             (const opencascade::handle<BRepMesh_VertexTool> & (BRepMesh_DataStructureOfDelaun::*)() ) static_cast<const opencascade::handle<BRepMesh_VertexTool> & (BRepMesh_DataStructureOfDelaun::*)() >(&BRepMesh_DataStructureOfDelaun::Data),
             R"#(Gives the data structure for initialization of cell size and tolerance.)#" )
        .def("ClearDomain",
             (void (BRepMesh_DataStructureOfDelaun::*)() ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)() >(&BRepMesh_DataStructureOfDelaun::ClearDomain),
             R"#(Removes all elements.)#" )
        .def("ClearDeleted",
             (void (BRepMesh_DataStructureOfDelaun::*)() ) static_cast<void (BRepMesh_DataStructureOfDelaun::*)() >(&BRepMesh_DataStructureOfDelaun::ClearDeleted),
             R"#(Substitutes deleted items by the last one from corresponding map to have only non-deleted elements, links or nodes in the structure.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_DataStructureOfDelaun::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_DataStructureOfDelaun::*)() const>(&BRepMesh_DataStructureOfDelaun::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_DataStructureOfDelaun::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_DataStructureOfDelaun::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepMesh_Deflection ,opencascade::handle<BRepMesh_Deflection>>(m,"BRepMesh_Deflection");

    static_cast<py::class_<BRepMesh_Deflection ,opencascade::handle<BRepMesh_Deflection> , Standard_Transient>>(m.attr("BRepMesh_Deflection"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_Deflection::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_Deflection::*)() const>(&BRepMesh_Deflection::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("ComputeAbsoluteDeflection_s",
                    (Standard_Real (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) ) static_cast<Standard_Real (*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) >(&BRepMesh_Deflection::ComputeAbsoluteDeflection),
                    R"#(Returns absolute deflection for theShape with respect to the relative deflection and theMaxShapeSize.)#"  , py::arg("theShape"),  py::arg("theRelativeDeflection"),  py::arg("theMaxShapeSize"))
        .def_static("ComputeDeflection_s",
                    (void (*)(  const opencascade::handle<IMeshData_Edge> & , const Standard_Real , const IMeshTools_Parameters & ) ) static_cast<void (*)(  const opencascade::handle<IMeshData_Edge> & , const Standard_Real , const IMeshTools_Parameters & ) >(&BRepMesh_Deflection::ComputeDeflection),
                    R"#(Computes and updates deflection of the given discrete edge.)#"  , py::arg("theDEdge"),  py::arg("theMaxShapeSize"),  py::arg("theParameters"))
        .def_static("ComputeDeflection_s",
                    (void (*)(  const opencascade::handle<IMeshData_Wire> & , const IMeshTools_Parameters & ) ) static_cast<void (*)(  const opencascade::handle<IMeshData_Wire> & , const IMeshTools_Parameters & ) >(&BRepMesh_Deflection::ComputeDeflection),
                    R"#(Computes and updates deflection of the given discrete wire.)#"  , py::arg("theDWire"),  py::arg("theParameters"))
        .def_static("ComputeDeflection_s",
                    (void (*)(  const opencascade::handle<IMeshData_Face> & , const IMeshTools_Parameters & ) ) static_cast<void (*)(  const opencascade::handle<IMeshData_Face> & , const IMeshTools_Parameters & ) >(&BRepMesh_Deflection::ComputeDeflection),
                    R"#(Computes and updates deflection of the given discrete face.)#"  , py::arg("theDFace"),  py::arg("theParameters"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_Deflection::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_Deflection::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_DiscretFactory , shared_ptr_nodelete<BRepMesh_DiscretFactory> >>(m.attr("BRepMesh_DiscretFactory"))
    // constructors
    // custom constructors
    // methods
        .def("Names",
             (const TColStd_MapOfAsciiString & (BRepMesh_DiscretFactory::*)() const) static_cast<const TColStd_MapOfAsciiString & (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::Names),
             R"#(Returns the list of registered meshing algorithms.)#" )
        .def("SetDefaultName",
             (Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & ) ) static_cast<Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & ) >(&BRepMesh_DiscretFactory::SetDefaultName),
             R"#(Setup meshing algorithm by name. Returns TRUE if requested tool is available. On fail Factory will continue to use previous algo.)#"  , py::arg("theName"))
        .def("DefaultName",
             (const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const) static_cast<const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::DefaultName),
             R"#(Returns name for current meshing algorithm.)#" )
        .def("SetFunctionName",
             (Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & ) ) static_cast<Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & ) >(&BRepMesh_DiscretFactory::SetFunctionName),
             R"#(Advanced function. Changes function name to retrieve from plugin. Returns TRUE if requested tool is available. On fail Factory will continue to use previous algo.)#"  , py::arg("theFuncName"))
        .def("FunctionName",
             (const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const) static_cast<const TCollection_AsciiString & (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::FunctionName),
             R"#(Returns function name that should be exported by plugin.)#" )
        .def("ErrorStatus",
             (BRepMesh_FactoryError (BRepMesh_DiscretFactory::*)() const) static_cast<BRepMesh_FactoryError (BRepMesh_DiscretFactory::*)() const>(&BRepMesh_DiscretFactory::ErrorStatus),
             R"#(Returns error status for last meshing algorithm switch.)#" )
        .def("SetDefault",
             (Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) ) static_cast<Standard_Boolean (BRepMesh_DiscretFactory::*)( const TCollection_AsciiString & , const TCollection_AsciiString & ) >(&BRepMesh_DiscretFactory::SetDefault),
             R"#(Setup meshing algorithm that should be created by this Factory. Returns TRUE if requested tool is available. On fail Factory will continue to use previous algo. Call ::ErrorStatus() method to retrieve fault reason.)#"  , py::arg("theName"),  py::arg("theFuncName")=static_cast<const TCollection_AsciiString &>("DISCRETALGO"))
        .def("Discret",
             (opencascade::handle<BRepMesh_DiscretRoot> (BRepMesh_DiscretFactory::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) ) static_cast<opencascade::handle<BRepMesh_DiscretRoot> (BRepMesh_DiscretFactory::*)( const TopoDS_Shape & , const Standard_Real , const Standard_Real ) >(&BRepMesh_DiscretFactory::Discret),
             R"#(Returns triangulation algorithm instance.)#"  , py::arg("theShape"),  py::arg("theLinDeflection"),  py::arg("theAngDeflection"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Get_s",
                    (BRepMesh_DiscretFactory & (*)() ) static_cast<BRepMesh_DiscretFactory & (*)() >(&BRepMesh_DiscretFactory::Get),
                    R"#(Returns the global factory instance.)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_DiscretRoot ,opencascade::handle<BRepMesh_DiscretRoot>,Py_BRepMesh_DiscretRoot , Standard_Transient>>(m.attr("BRepMesh_DiscretRoot"))
    // constructors
    // custom constructors
    // methods
        .def("SetShape",
             (void (BRepMesh_DiscretRoot::*)( const TopoDS_Shape & ) ) static_cast<void (BRepMesh_DiscretRoot::*)( const TopoDS_Shape & ) >(&BRepMesh_DiscretRoot::SetShape),
             R"#(Set the shape to triangulate.)#"  , py::arg("theShape"))
        .def("Shape",
             (const TopoDS_Shape & (BRepMesh_DiscretRoot::*)() const) static_cast<const TopoDS_Shape & (BRepMesh_DiscretRoot::*)() const>(&BRepMesh_DiscretRoot::Shape),
             R"#(None)#" )
        .def("IsDone",
             (Standard_Boolean (BRepMesh_DiscretRoot::*)() const) static_cast<Standard_Boolean (BRepMesh_DiscretRoot::*)() const>(&BRepMesh_DiscretRoot::IsDone),
             R"#(Returns true if triangualtion was performed and has success.)#" )
        .def("Perform",
             (void (BRepMesh_DiscretRoot::*)() ) static_cast<void (BRepMesh_DiscretRoot::*)() >(&BRepMesh_DiscretRoot::Perform),
             R"#(Compute triangulation for set shape.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_DiscretRoot::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_DiscretRoot::*)() const>(&BRepMesh_DiscretRoot::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_DiscretRoot::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_DiscretRoot::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_EdgeDiscret ,opencascade::handle<BRepMesh_EdgeDiscret> >>(m.attr("BRepMesh_EdgeDiscret"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_EdgeDiscret::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_EdgeDiscret::*)() const>(&BRepMesh_EdgeDiscret::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("CreateEdgeTessellator_s",
                    (opencascade::handle<IMeshTools_CurveTessellator> (*)(  const opencascade::handle<IMeshData_Edge> & , const IMeshTools_Parameters & ) ) static_cast<opencascade::handle<IMeshTools_CurveTessellator> (*)(  const opencascade::handle<IMeshData_Edge> & , const IMeshTools_Parameters & ) >(&BRepMesh_EdgeDiscret::CreateEdgeTessellator),
                    R"#(Creates instance of free edge tessellator.)#"  , py::arg("theDEdge"),  py::arg("theParameters"))
        .def_static("CreateEdgeTessellator_s",
                    (opencascade::handle<IMeshTools_CurveTessellator> (*)(  const opencascade::handle<IMeshData_Edge> & , const TopAbs_Orientation ,  const opencascade::handle<IMeshData_Face> & , const IMeshTools_Parameters & ) ) static_cast<opencascade::handle<IMeshTools_CurveTessellator> (*)(  const opencascade::handle<IMeshData_Edge> & , const TopAbs_Orientation ,  const opencascade::handle<IMeshData_Face> & , const IMeshTools_Parameters & ) >(&BRepMesh_EdgeDiscret::CreateEdgeTessellator),
                    R"#(Creates instance of edge tessellator.)#"  , py::arg("theDEdge"),  py::arg("theOrientation"),  py::arg("theDFace"),  py::arg("theParameters"))
        .def_static("CreateEdgeTessellationExtractor_s",
                    (opencascade::handle<IMeshTools_CurveTessellator> (*)(  const opencascade::handle<IMeshData_Edge> & ,  const opencascade::handle<IMeshData_Face> & ) ) static_cast<opencascade::handle<IMeshTools_CurveTessellator> (*)(  const opencascade::handle<IMeshData_Edge> & ,  const opencascade::handle<IMeshData_Face> & ) >(&BRepMesh_EdgeDiscret::CreateEdgeTessellationExtractor),
                    R"#(Creates instance of tessellation extractor.)#"  , py::arg("theDEdge"),  py::arg("theDFace"))
        .def_static("Tessellate3d_s",
                    (void (*)(  const opencascade::handle<IMeshData_Edge> & , const opencascade::handle<IMeshTools_CurveTessellator> & , const Standard_Boolean ) ) static_cast<void (*)(  const opencascade::handle<IMeshData_Edge> & , const opencascade::handle<IMeshTools_CurveTessellator> & , const Standard_Boolean ) >(&BRepMesh_EdgeDiscret::Tessellate3d),
                    R"#(Updates 3d discrete edge model using the given tessellation tool.)#"  , py::arg("theDEdge"),  py::arg("theTessellator"),  py::arg("theUpdateEnds"))
        .def_static("Tessellate2d_s",
                    (void (*)(  const opencascade::handle<IMeshData_Edge> & , const Standard_Boolean ) ) static_cast<void (*)(  const opencascade::handle<IMeshData_Edge> & , const Standard_Boolean ) >(&BRepMesh_EdgeDiscret::Tessellate2d),
                    R"#(Updates 2d discrete edge model using tessellation of 3D curve.)#"  , py::arg("theDEdge"),  py::arg("theUpdateEnds"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_EdgeDiscret::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_EdgeDiscret::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_EdgeTessellationExtractor ,opencascade::handle<BRepMesh_EdgeTessellationExtractor> >>(m.attr("BRepMesh_EdgeTessellationExtractor"))
    // constructors
        .def(py::init<  const opencascade::handle<IMeshData_Edge> &, const opencascade::handle<IMeshData_Face> & >()  , py::arg("theEdge"),  py::arg("theFace") )
    // custom constructors
    // methods
        .def("PointsNb",
             (Standard_Integer (BRepMesh_EdgeTessellationExtractor::*)() const) static_cast<Standard_Integer (BRepMesh_EdgeTessellationExtractor::*)() const>(&BRepMesh_EdgeTessellationExtractor::PointsNb),
             R"#(Returns number of tessellation points.)#" )
        .def("Value",
             (Standard_Boolean (BRepMesh_EdgeTessellationExtractor::*)( const Standard_Integer , gp_Pnt & , Standard_Real & ) const) static_cast<Standard_Boolean (BRepMesh_EdgeTessellationExtractor::*)( const Standard_Integer , gp_Pnt & , Standard_Real & ) const>(&BRepMesh_EdgeTessellationExtractor::Value),
             R"#(Returns parameters of solution with the given index.)#"  , py::arg("theIndex"),  py::arg("thePoint"),  py::arg("theParameter"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_EdgeTessellationExtractor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_EdgeTessellationExtractor::*)() const>(&BRepMesh_EdgeTessellationExtractor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_EdgeTessellationExtractor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_EdgeTessellationExtractor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_FaceChecker ,opencascade::handle<BRepMesh_FaceChecker> , Standard_Transient>>(m.attr("BRepMesh_FaceChecker"))
    // constructors
        .def(py::init<  const opencascade::handle<IMeshData_Face> &,const IMeshTools_Parameters & >()  , py::arg("theFace"),  py::arg("theParameters") )
    // custom constructors
    // methods
        .def("Perform",
             (Standard_Boolean (BRepMesh_FaceChecker::*)() ) static_cast<Standard_Boolean (BRepMesh_FaceChecker::*)() >(&BRepMesh_FaceChecker::Perform),
             R"#(Performs check wires of the face for intersections.)#" )
        .def("GetIntersectingEdges",
             (const opencascade::handle<IMeshData::MapOfIEdgePtr> & (BRepMesh_FaceChecker::*)() const) static_cast<const opencascade::handle<IMeshData::MapOfIEdgePtr> & (BRepMesh_FaceChecker::*)() const>(&BRepMesh_FaceChecker::GetIntersectingEdges),
             R"#(Returns intersecting edges.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_FaceChecker::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_FaceChecker::*)() const>(&BRepMesh_FaceChecker::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_FaceChecker::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_FaceChecker::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_FaceDiscret ,opencascade::handle<BRepMesh_FaceDiscret> >>(m.attr("BRepMesh_FaceDiscret"))
    // constructors
        .def(py::init< const opencascade::handle<IMeshTools_MeshAlgoFactory> & >()  , py::arg("theAlgoFactory") )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_FaceDiscret::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_FaceDiscret::*)() const>(&BRepMesh_FaceDiscret::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_FaceDiscret::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_FaceDiscret::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepMesh_FastDiscret , shared_ptr<BRepMesh_FastDiscret>>(m,"BRepMesh_FastDiscret");

    static_cast<py::class_<BRepMesh_FastDiscret , shared_ptr<BRepMesh_FastDiscret> >>(m.attr("BRepMesh_FastDiscret"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_GeomTool , shared_ptr<BRepMesh_GeomTool> >>(m.attr("BRepMesh_GeomTool"))
    // constructors
        .def(py::init< const BRepAdaptor_Curve &,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("theCurve"),  py::arg("theFirstParam"),  py::arg("theLastParam"),  py::arg("theLinDeflection"),  py::arg("theAngDeflection"),  py::arg("theMinPointsNb")=static_cast<const Standard_Integer>(2),  py::arg("theMinSize")=static_cast<const Standard_Real>(Precision :: Confusion ( )) )
        .def(py::init< const opencascade::handle<BRepAdaptor_HSurface> &,const GeomAbs_IsoType,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Integer,const Standard_Real >()  , py::arg("theSurface"),  py::arg("theIsoType"),  py::arg("theParamIso"),  py::arg("theFirstParam"),  py::arg("theLastParam"),  py::arg("theLinDeflection"),  py::arg("theAngDeflection"),  py::arg("theMinPointsNb")=static_cast<const Standard_Integer>(2),  py::arg("theMinSize")=static_cast<const Standard_Real>(Precision :: Confusion ( )) )
    // custom constructors
    // methods
        .def("AddPoint",
             (Standard_Integer (BRepMesh_GeomTool::*)( const gp_Pnt & , const Standard_Real , const Standard_Boolean ) ) static_cast<Standard_Integer (BRepMesh_GeomTool::*)( const gp_Pnt & , const Standard_Real , const Standard_Boolean ) >(&BRepMesh_GeomTool::AddPoint),
             R"#(Adds point to already calculated points (or replaces existing).)#"  , py::arg("thePoint"),  py::arg("theParam"),  py::arg("theIsReplace")=static_cast<const Standard_Boolean>(Standard_True))
        .def("NbPoints",
             (Standard_Integer (BRepMesh_GeomTool::*)() const) static_cast<Standard_Integer (BRepMesh_GeomTool::*)() const>(&BRepMesh_GeomTool::NbPoints),
             R"#(Returns number of discretization points.)#" )
        .def("Value",
             (Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer , const Standard_Real , Standard_Real & , gp_Pnt & , gp_Pnt2d & ) const) static_cast<Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer , const Standard_Real , Standard_Real & , gp_Pnt & , gp_Pnt2d & ) const>(&BRepMesh_GeomTool::Value),
             R"#(Gets parameters of discretization point with the given index.)#"  , py::arg("theIndex"),  py::arg("theIsoParam"),  py::arg("theParam"),  py::arg("thePoint"),  py::arg("theUV"))
        .def("Value",
             (Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer , const opencascade::handle<BRepAdaptor_HSurface> & , Standard_Real & , gp_Pnt & , gp_Pnt2d & ) const) static_cast<Standard_Boolean (BRepMesh_GeomTool::*)( const Standard_Integer , const opencascade::handle<BRepAdaptor_HSurface> & , Standard_Real & , gp_Pnt & , gp_Pnt2d & ) const>(&BRepMesh_GeomTool::Value),
             R"#(Gets parameters of discretization point with the given index.)#"  , py::arg("theIndex"),  py::arg("theSurface"),  py::arg("theParam"),  py::arg("thePoint"),  py::arg("theUV"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Normal_s",
                    (Standard_Boolean (*)( const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Dir & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<BRepAdaptor_HSurface> & , const Standard_Real , const Standard_Real , gp_Pnt & , gp_Dir & ) >(&BRepMesh_GeomTool::Normal),
                    R"#(Computes normal to the given surface at the specified position in parametric space.)#"  , py::arg("theSurface"),  py::arg("theParamU"),  py::arg("theParamV"),  py::arg("thePoint"),  py::arg("theNormal"))
        .def_static("IntSegSeg_s",
                    (BRepMesh_GeomTool::IntFlag (*)( const gp_XY & , const gp_XY & , const gp_XY & , const gp_XY & , const Standard_Boolean , const Standard_Boolean , gp_Pnt2d & ) ) static_cast<BRepMesh_GeomTool::IntFlag (*)( const gp_XY & , const gp_XY & , const gp_XY & , const gp_XY & , const Standard_Boolean , const Standard_Boolean , gp_Pnt2d & ) >(&BRepMesh_GeomTool::IntSegSeg),
                    R"#(Checks intersection between the two segments. Checks that intersection point lies within ranges of both segments.)#"  , py::arg("theStartPnt1"),  py::arg("theEndPnt1"),  py::arg("theStartPnt2"),  py::arg("theEndPnt2"),  py::arg("isConsiderEndPointTouch"),  py::arg("isConsiderPointOnSegment"),  py::arg("theIntPnt"))
        .def_static("SquareDeflectionOfSegment_s",
                    (Standard_Real (*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & ) ) static_cast<Standard_Real (*)( const gp_Pnt & , const gp_Pnt & , const gp_Pnt & ) >(&BRepMesh_GeomTool::SquareDeflectionOfSegment),
                    R"#(Compute deflection of the given segment.)#"  , py::arg("theFirstPoint"),  py::arg("theLastPoint"),  py::arg("theMidPoint"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_MeshAlgoFactory ,opencascade::handle<BRepMesh_MeshAlgoFactory> >>(m.attr("BRepMesh_MeshAlgoFactory"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("GetAlgo",
             (opencascade::handle<IMeshTools_MeshAlgo> (BRepMesh_MeshAlgoFactory::*)( const GeomAbs_SurfaceType , const IMeshTools_Parameters & ) const) static_cast<opencascade::handle<IMeshTools_MeshAlgo> (BRepMesh_MeshAlgoFactory::*)( const GeomAbs_SurfaceType , const IMeshTools_Parameters & ) const>(&BRepMesh_MeshAlgoFactory::GetAlgo),
             R"#(Creates instance of meshing algorithm for the given type of surface.)#"  , py::arg("theSurfaceType"),  py::arg("theParameters"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_MeshAlgoFactory::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_MeshAlgoFactory::*)() const>(&BRepMesh_MeshAlgoFactory::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_MeshAlgoFactory::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_MeshAlgoFactory::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_MeshTool ,opencascade::handle<BRepMesh_MeshTool> , Standard_Transient>>(m.attr("BRepMesh_MeshTool"))
    // constructors
        .def(py::init< const opencascade::handle<BRepMesh_DataStructureOfDelaun> & >()  , py::arg("theStructure") )
    // custom constructors
    // methods
        .def("GetStructure",
             (const opencascade::handle<BRepMesh_DataStructureOfDelaun> & (BRepMesh_MeshTool::*)() const) static_cast<const opencascade::handle<BRepMesh_DataStructureOfDelaun> & (BRepMesh_MeshTool::*)() const>(&BRepMesh_MeshTool::GetStructure),
             R"#(Returns data structure manipulated by this tool.)#" )
        .def("DumpTriangles",
             (void (BRepMesh_MeshTool::*)( const Standard_CString , NCollection_Shared<TColStd_PackedMapOfInteger> * ) ) static_cast<void (BRepMesh_MeshTool::*)( const Standard_CString , NCollection_Shared<TColStd_PackedMapOfInteger> * ) >(&BRepMesh_MeshTool::DumpTriangles),
             R"#(Dumps triangles to specified file.)#"  , py::arg("theFileName"),  py::arg("theTriangles"))
        .def("AddAndLegalizeTriangle",
             (void (BRepMesh_MeshTool::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepMesh_MeshTool::*)( const Standard_Integer , const Standard_Integer , const Standard_Integer ) >(&BRepMesh_MeshTool::AddAndLegalizeTriangle),
             R"#(Adds new triangle with specified nodes to mesh. Legalizes triangle in case if it violates circle criteria.)#"  , py::arg("thePoint1"),  py::arg("thePoint2"),  py::arg("thePoint3"))
        .def("Legalize",
             (void (BRepMesh_MeshTool::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_MeshTool::*)( const Standard_Integer ) >(&BRepMesh_MeshTool::Legalize),
             R"#(Performs legalization of triangles connected to the specified link.)#"  , py::arg("theLinkIndex"))
        .def("EraseItemsConnectedTo",
             (void (BRepMesh_MeshTool::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_MeshTool::*)( const Standard_Integer ) >(&BRepMesh_MeshTool::EraseItemsConnectedTo),
             R"#(Erases all elements connected to the specified artificial node. In addition, erases the artificial node itself.)#"  , py::arg("theNodeIndex"))
        .def("CleanFrontierLinks",
             (void (BRepMesh_MeshTool::*)() ) static_cast<void (BRepMesh_MeshTool::*)() >(&BRepMesh_MeshTool::CleanFrontierLinks),
             R"#(Cleans frontier links from triangles to the right.)#" )
        .def("EraseTriangles",
             (void (BRepMesh_MeshTool::*)(  const NCollection_Shared<TColStd_PackedMapOfInteger> & , NCollection_Shared<NCollection_DataMap<Standard_Integer, Standard_Integer> > & ) ) static_cast<void (BRepMesh_MeshTool::*)(  const NCollection_Shared<TColStd_PackedMapOfInteger> & , NCollection_Shared<NCollection_DataMap<Standard_Integer, Standard_Integer> > & ) >(&BRepMesh_MeshTool::EraseTriangles),
             R"#(Erases the given set of triangles. Fills map of loop edges forming the countour surrounding the erased triangles.)#"  , py::arg("theTriangles"),  py::arg("theLoopEdges"))
        .def("EraseTriangle",
             (void (BRepMesh_MeshTool::*)( const Standard_Integer , NCollection_Shared<NCollection_DataMap<Standard_Integer, Standard_Integer> > & ) ) static_cast<void (BRepMesh_MeshTool::*)( const Standard_Integer , NCollection_Shared<NCollection_DataMap<Standard_Integer, Standard_Integer> > & ) >(&BRepMesh_MeshTool::EraseTriangle),
             R"#(Erases triangle with the given index and adds the free edges into the map. When an edge is suppressed more than one time it is destroyed.)#"  , py::arg("theTriangleIndex"),  py::arg("theLoopEdges"))
        .def("EraseFreeLinks",
             (void (BRepMesh_MeshTool::*)() ) static_cast<void (BRepMesh_MeshTool::*)() >(&BRepMesh_MeshTool::EraseFreeLinks),
             R"#(Erases all links that have no elements connected to them.)#" )
        .def("EraseFreeLinks",
             (void (BRepMesh_MeshTool::*)(  const NCollection_Shared<NCollection_DataMap<Standard_Integer, Standard_Integer> > & ) ) static_cast<void (BRepMesh_MeshTool::*)(  const NCollection_Shared<NCollection_DataMap<Standard_Integer, Standard_Integer> > & ) >(&BRepMesh_MeshTool::EraseFreeLinks),
             R"#(Erases links from the specified map that have no elements connected to them.)#"  , py::arg("theLinks"))
        .def("GetEdgesByType",
             (opencascade::handle<IMeshData::MapOfInteger> (BRepMesh_MeshTool::*)( const BRepMesh_DegreeOfFreedom ) const) static_cast<opencascade::handle<IMeshData::MapOfInteger> (BRepMesh_MeshTool::*)( const BRepMesh_DegreeOfFreedom ) const>(&BRepMesh_MeshTool::GetEdgesByType),
             R"#(Gives the list of edges with type defined by input parameter.)#"  , py::arg("theEdgeType"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_MeshTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_MeshTool::*)() const>(&BRepMesh_MeshTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("AddLink",
             []( BRepMesh_MeshTool &self , const Standard_Integer theFirstNode,const Standard_Integer theLastNode ){ Standard_Integer  theLinkIndex; Standard_Boolean  theLinkOri; self.AddLink(theFirstNode,theLastNode,theLinkIndex,theLinkOri); return std::make_tuple(theLinkIndex,theLinkOri); },
             R"#(Adds new link to mesh. Updates link index and link orientaion parameters.)#"  , py::arg("theFirstNode"),  py::arg("theLastNode"))
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_MeshTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_MeshTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_ModelBuilder ,opencascade::handle<BRepMesh_ModelBuilder> >>(m.attr("BRepMesh_ModelBuilder"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_ModelBuilder::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_ModelBuilder::*)() const>(&BRepMesh_ModelBuilder::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_ModelBuilder::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_ModelBuilder::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_ModelHealer ,opencascade::handle<BRepMesh_ModelHealer> >>(m.attr("BRepMesh_ModelHealer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_ModelHealer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_ModelHealer::*)() const>(&BRepMesh_ModelHealer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_ModelHealer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_ModelHealer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_ModelPostProcessor ,opencascade::handle<BRepMesh_ModelPostProcessor> >>(m.attr("BRepMesh_ModelPostProcessor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_ModelPostProcessor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_ModelPostProcessor::*)() const>(&BRepMesh_ModelPostProcessor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_ModelPostProcessor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_ModelPostProcessor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_ModelPreProcessor ,opencascade::handle<BRepMesh_ModelPreProcessor> >>(m.attr("BRepMesh_ModelPreProcessor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_ModelPreProcessor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_ModelPreProcessor::*)() const>(&BRepMesh_ModelPreProcessor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_ModelPreProcessor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_ModelPreProcessor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_OrientedEdge , shared_ptr<BRepMesh_OrientedEdge> >>(m.attr("BRepMesh_OrientedEdge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer >()  , py::arg("theFirstNode"),  py::arg("theLastNode") )
    // custom constructors
    // methods
        .def("FirstNode",
             (Standard_Integer (BRepMesh_OrientedEdge::*)() const) static_cast<Standard_Integer (BRepMesh_OrientedEdge::*)() const>(&BRepMesh_OrientedEdge::FirstNode),
             R"#(Returns index of first node of the Link.)#" )
        .def("LastNode",
             (Standard_Integer (BRepMesh_OrientedEdge::*)() const) static_cast<Standard_Integer (BRepMesh_OrientedEdge::*)() const>(&BRepMesh_OrientedEdge::LastNode),
             R"#(Returns index of last node of the Link.)#" )
        .def("HashCode",
             (Standard_Integer (BRepMesh_OrientedEdge::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepMesh_OrientedEdge::*)( const Standard_Integer ) const>(&BRepMesh_OrientedEdge::HashCode),
             R"#(Computes a hash code for this oriented edge, in the range [1, theUpperBound])#"  , py::arg("theUpperBound"))
        .def("IsEqual",
             (Standard_Boolean (BRepMesh_OrientedEdge::*)( const BRepMesh_OrientedEdge & ) const) static_cast<Standard_Boolean (BRepMesh_OrientedEdge::*)( const BRepMesh_OrientedEdge & ) const>(&BRepMesh_OrientedEdge::IsEqual),
             R"#(Checks this and other edge for equality.)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_PairOfIndex , shared_ptr<BRepMesh_PairOfIndex> >>(m.attr("BRepMesh_PairOfIndex"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("Clear",
             (void (BRepMesh_PairOfIndex::*)() ) static_cast<void (BRepMesh_PairOfIndex::*)() >(&BRepMesh_PairOfIndex::Clear),
             R"#(Clears indices.)#" )
        .def("Append",
             (void (BRepMesh_PairOfIndex::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_PairOfIndex::*)( const Standard_Integer ) >(&BRepMesh_PairOfIndex::Append),
             R"#(Appends index to the pair.)#"  , py::arg("theIndex"))
        .def("Prepend",
             (void (BRepMesh_PairOfIndex::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_PairOfIndex::*)( const Standard_Integer ) >(&BRepMesh_PairOfIndex::Prepend),
             R"#(Prepends index to the pair.)#"  , py::arg("theIndex"))
        .def("IsEmpty",
             (Standard_Boolean (BRepMesh_PairOfIndex::*)() const) static_cast<Standard_Boolean (BRepMesh_PairOfIndex::*)() const>(&BRepMesh_PairOfIndex::IsEmpty),
             R"#(Returns is pair is empty.)#" )
        .def("Extent",
             (Standard_Integer (BRepMesh_PairOfIndex::*)() const) static_cast<Standard_Integer (BRepMesh_PairOfIndex::*)() const>(&BRepMesh_PairOfIndex::Extent),
             R"#(Returns number of initialized indeces.)#" )
        .def("FirstIndex",
             (Standard_Integer (BRepMesh_PairOfIndex::*)() const) static_cast<Standard_Integer (BRepMesh_PairOfIndex::*)() const>(&BRepMesh_PairOfIndex::FirstIndex),
             R"#(Returns first index of pair.)#" )
        .def("LastIndex",
             (Standard_Integer (BRepMesh_PairOfIndex::*)() const) static_cast<Standard_Integer (BRepMesh_PairOfIndex::*)() const>(&BRepMesh_PairOfIndex::LastIndex),
             R"#(Returns last index of pair)#" )
        .def("Index",
             (Standard_Integer (BRepMesh_PairOfIndex::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepMesh_PairOfIndex::*)( const Standard_Integer ) const>(&BRepMesh_PairOfIndex::Index),
             R"#(Returns index corresponding to the given position in the pair.)#"  , py::arg("thePairPos"))
        .def("SetIndex",
             (void (BRepMesh_PairOfIndex::*)( const Standard_Integer , const Standard_Integer ) ) static_cast<void (BRepMesh_PairOfIndex::*)( const Standard_Integer , const Standard_Integer ) >(&BRepMesh_PairOfIndex::SetIndex),
             R"#(Sets index corresponding to the given position in the pair.)#"  , py::arg("thePairPos"),  py::arg("theIndex"))
        .def("RemoveIndex",
             (void (BRepMesh_PairOfIndex::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_PairOfIndex::*)( const Standard_Integer ) >(&BRepMesh_PairOfIndex::RemoveIndex),
             R"#(Remove index from the given position.)#"  , py::arg("thePairPos"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_SelectorOfDataStructureOfDelaun ,opencascade::handle<BRepMesh_SelectorOfDataStructureOfDelaun> , Standard_Transient>>(m.attr("BRepMesh_SelectorOfDataStructureOfDelaun"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const opencascade::handle<BRepMesh_DataStructureOfDelaun> & >()  , py::arg("theMesh") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const opencascade::handle<BRepMesh_DataStructureOfDelaun> & ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const opencascade::handle<BRepMesh_DataStructureOfDelaun> & ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::Initialize),
             R"#(Initializes selector by the mesh.)#"  , py::arg("theMesh"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Vertex & ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Vertex & ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Selects all neighboring elements of the given node.)#"  , py::arg("theNode"))
        .def("NeighboursOfNode",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOfNode),
             R"#(Selects all neighboring elements of node with the given index.)#"  , py::arg("theNodeIndex"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Edge & ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Edge & ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Selects all neighboring elements of the given link.)#"  , py::arg("theLink"))
        .def("NeighboursOfLink",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOfLink),
             R"#(Selects all neighboring elements of link with the given index.)#"  , py::arg("theLinkIndex"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle & ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle & ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Selects all neighboring elements of the given element.)#"  , py::arg("theElement"))
        .def("NeighboursOfElement",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const Standard_Integer ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOfElement),
             R"#(Selects all neighboring elements by nodes of the given element.)#"  , py::arg("theElementIndex"))
        .def("NeighboursByEdgeOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle & ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_Triangle & ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursByEdgeOf),
             R"#(Selects all neighboring elements by links of the given element.)#"  , py::arg("theElement"))
        .def("NeighboursOf",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_SelectorOfDataStructureOfDelaun & ) ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)( const BRepMesh_SelectorOfDataStructureOfDelaun & ) >(&BRepMesh_SelectorOfDataStructureOfDelaun::NeighboursOf),
             R"#(Adds a level of neighbours by edge to the selector.)#"  , py::arg(""))
        .def("AddNeighbours",
             (void (BRepMesh_SelectorOfDataStructureOfDelaun::*)() ) static_cast<void (BRepMesh_SelectorOfDataStructureOfDelaun::*)() >(&BRepMesh_SelectorOfDataStructureOfDelaun::AddNeighbours),
             R"#(Adds a level of neighbours by edge the selector.)#" )
        .def("Nodes",
             (const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::Nodes),
             R"#(Returns selected nodes.)#" )
        .def("Links",
             (const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::Links),
             R"#(Returns selected links.)#" )
        .def("Elements",
             (const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::Elements),
             R"#(Returns selected elements.)#" )
        .def("FrontierLinks",
             (const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const IMeshData::MapOfInteger & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::FrontierLinks),
             R"#(Gives the list of incices of frontier links.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_SelectorOfDataStructureOfDelaun::*)() const>(&BRepMesh_SelectorOfDataStructureOfDelaun::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_SelectorOfDataStructureOfDelaun::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_SelectorOfDataStructureOfDelaun::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

    // default constructor
    register_default_constructor<BRepMesh_ShapeTool ,opencascade::handle<BRepMesh_ShapeTool>>(m,"BRepMesh_ShapeTool");

    static_cast<py::class_<BRepMesh_ShapeTool ,opencascade::handle<BRepMesh_ShapeTool> , Standard_Transient>>(m.attr("BRepMesh_ShapeTool"))
    // constructors
    // custom constructors
    // methods
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_ShapeTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_ShapeTool::*)() const>(&BRepMesh_ShapeTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("MaxFaceTolerance_s",
                    (Standard_Real (*)( const TopoDS_Face & ) ) static_cast<Standard_Real (*)( const TopoDS_Face & ) >(&BRepMesh_ShapeTool::MaxFaceTolerance),
                    R"#(Returns maximum tolerance of the given face. Considers tolerances of edges and vertices contained in the given face.)#"  , py::arg("theFace"))
        .def_static("CheckAndUpdateFlags_s",
                    (void (*)(  const opencascade::handle<IMeshData_Edge> & ,  const opencascade::handle<IMeshData_PCurve> & ) ) static_cast<void (*)(  const opencascade::handle<IMeshData_Edge> & ,  const opencascade::handle<IMeshData_PCurve> & ) >(&BRepMesh_ShapeTool::CheckAndUpdateFlags),
                    R"#(Checks same parameter, same range and degenerativity attributes using geometrical data of the given edge and updates edge model by computed parameters in case of worst case - it can drop flags same parameter and same range to False but never to True if it is already set to False. In contrary, it can also drop degenerated flag to True, but never to False if it is already set to True.)#"  , py::arg("theEdge"),  py::arg("thePCurve"))
        .def_static("AddInFace_s",
                    (void (*)( const TopoDS_Face & , opencascade::handle<Poly_Triangulation> & ) ) static_cast<void (*)( const TopoDS_Face & , opencascade::handle<Poly_Triangulation> & ) >(&BRepMesh_ShapeTool::AddInFace),
                    R"#(Stores the given triangulation into the given face.)#"  , py::arg("theFace"),  py::arg("theTriangulation"))
        .def_static("NullifyFace_s",
                    (void (*)( const TopoDS_Face & ) ) static_cast<void (*)( const TopoDS_Face & ) >(&BRepMesh_ShapeTool::NullifyFace),
                    R"#(Nullifies triangulation stored in the face.)#"  , py::arg("theFace"))
        .def_static("NullifyEdge_s",
                    (void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) ) static_cast<void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) >(&BRepMesh_ShapeTool::NullifyEdge),
                    R"#(Nullifies polygon on triangulation stored in the edge.)#"  , py::arg("theEdge"),  py::arg("theTriangulation"),  py::arg("theLocation"))
        .def_static("NullifyEdge_s",
                    (void (*)( const TopoDS_Edge & , const TopLoc_Location & ) ) static_cast<void (*)( const TopoDS_Edge & , const TopLoc_Location & ) >(&BRepMesh_ShapeTool::NullifyEdge),
                    R"#(Nullifies 3d polygon stored in the edge.)#"  , py::arg("theEdge"),  py::arg("theLocation"))
        .def_static("UpdateEdge_s",
                    (void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) ) static_cast<void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) >(&BRepMesh_ShapeTool::UpdateEdge),
                    R"#(Updates the given edge by the given tessellated representation.)#"  , py::arg("theEdge"),  py::arg("thePolygon"),  py::arg("theTriangulation"),  py::arg("theLocation"))
        .def_static("UpdateEdge_s",
                    (void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) ) static_cast<void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_Polygon3D> & ) >(&BRepMesh_ShapeTool::UpdateEdge),
                    R"#(Updates the given edge by the given tessellated representation.)#"  , py::arg("theEdge"),  py::arg("thePolygon"))
        .def_static("UpdateEdge_s",
                    (void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) ) static_cast<void (*)( const TopoDS_Edge & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_PolygonOnTriangulation> & , const opencascade::handle<Poly_Triangulation> & , const TopLoc_Location & ) >(&BRepMesh_ShapeTool::UpdateEdge),
                    R"#(Updates the given seam edge by the given tessellated representations.)#"  , py::arg("theEdge"),  py::arg("thePolygon1"),  py::arg("thePolygon2"),  py::arg("theTriangulation"),  py::arg("theLocation"))
        .def_static("UseLocation_s",
                    (gp_Pnt (*)( const gp_Pnt & , const TopLoc_Location & ) ) static_cast<gp_Pnt (*)( const gp_Pnt & , const TopLoc_Location & ) >(&BRepMesh_ShapeTool::UseLocation),
                    R"#(Applies location to the given point and return result.)#"  , py::arg("thePnt"),  py::arg("theLoc"))
        .def_static("UVPoints_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , gp_Pnt2d & , gp_Pnt2d & , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , gp_Pnt2d & , gp_Pnt2d & , const Standard_Boolean ) >(&BRepMesh_ShapeTool::UVPoints),
                    R"#(Gets the strict UV locations of the extremities of the edge using pcurve.)#"  , py::arg("theEdge"),  py::arg("theFace"),  py::arg("theFirstPoint2d"),  py::arg("theLastPoint2d"),  py::arg("isConsiderOrientation")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Range_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Face & , opencascade::handle<Geom2d_Curve> & , Standard_Real & , Standard_Real & , const Standard_Boolean ) >(&BRepMesh_ShapeTool::Range),
                    R"#(Gets the parametric range of the given edge on the given face.)#"  , py::arg("theEdge"),  py::arg("theFace"),  py::arg("thePCurve"),  py::arg("theFirstParam"),  py::arg("theLastParam"),  py::arg("isConsiderOrientation")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("Range_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , Standard_Real & , Standard_Real & , const Standard_Boolean ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , opencascade::handle<Geom_Curve> & , Standard_Real & , Standard_Real & , const Standard_Boolean ) >(&BRepMesh_ShapeTool::Range),
                    R"#(Gets the 3d range of the given edge.)#"  , py::arg("theEdge"),  py::arg("theCurve"),  py::arg("theFirstParam"),  py::arg("theLastParam"),  py::arg("isConsiderOrientation")=static_cast<const Standard_Boolean>(Standard_False))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_ShapeTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_ShapeTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
        .def_static("BoxMaxDimension_s",
                    []( const Bnd_Box & theBox ){ Standard_Real  theMaxDimension; BRepMesh_ShapeTool::BoxMaxDimension(theBox,theMaxDimension); return std::make_tuple(theMaxDimension); },
                    R"#(Gets the maximum dimension of the given bounding box. If the given bounding box is void leaves the resulting value unchanged.)#"  , py::arg("theBox"))
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_ShapeVisitor ,opencascade::handle<BRepMesh_ShapeVisitor> >>(m.attr("BRepMesh_ShapeVisitor"))
    // constructors
        .def(py::init< const opencascade::handle<IMeshData_Model> & >()  , py::arg("theModel") )
    // custom constructors
    // methods
        .def("Visit",
             (void (BRepMesh_ShapeVisitor::*)( const TopoDS_Face & ) ) static_cast<void (BRepMesh_ShapeVisitor::*)( const TopoDS_Face & ) >(&BRepMesh_ShapeVisitor::Visit),
             R"#(Handles TopoDS_Face object.)#"  , py::arg("theFace"))
        .def("Visit",
             (void (BRepMesh_ShapeVisitor::*)( const TopoDS_Edge & ) ) static_cast<void (BRepMesh_ShapeVisitor::*)( const TopoDS_Edge & ) >(&BRepMesh_ShapeVisitor::Visit),
             R"#(Handles TopoDS_Edge object.)#"  , py::arg("theEdge"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_ShapeVisitor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_ShapeVisitor::*)() const>(&BRepMesh_ShapeVisitor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_ShapeVisitor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_ShapeVisitor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_Vertex , shared_ptr<BRepMesh_Vertex> >>(m.attr("BRepMesh_Vertex"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const gp_XY &,const Standard_Integer,const BRepMesh_DegreeOfFreedom >()  , py::arg("theUV"),  py::arg("theLocation3d"),  py::arg("theMovability") )
        .def(py::init< const Standard_Real,const Standard_Real,const BRepMesh_DegreeOfFreedom >()  , py::arg("theU"),  py::arg("theV"),  py::arg("theMovability") )
    // custom constructors
    // methods
        .def("Initialize",
             (void (BRepMesh_Vertex::*)( const gp_XY & , const Standard_Integer , const BRepMesh_DegreeOfFreedom ) ) static_cast<void (BRepMesh_Vertex::*)( const gp_XY & , const Standard_Integer , const BRepMesh_DegreeOfFreedom ) >(&BRepMesh_Vertex::Initialize),
             R"#(Initializes vertex associated with point in 3d space.)#"  , py::arg("theUV"),  py::arg("theLocation3d"),  py::arg("theMovability"))
        .def("Coord",
             (const gp_XY & (BRepMesh_Vertex::*)() const) static_cast<const gp_XY & (BRepMesh_Vertex::*)() const>(&BRepMesh_Vertex::Coord),
             R"#(Returns position of the vertex in parametric space.)#" )
        .def("ChangeCoord",
             (gp_XY & (BRepMesh_Vertex::*)() ) static_cast<gp_XY & (BRepMesh_Vertex::*)() >(&BRepMesh_Vertex::ChangeCoord),
             R"#(Returns position of the vertex in parametric space for modification.)#" )
        .def("Location3d",
             (Standard_Integer (BRepMesh_Vertex::*)() const) static_cast<Standard_Integer (BRepMesh_Vertex::*)() const>(&BRepMesh_Vertex::Location3d),
             R"#(Returns index of 3d point associated with the vertex.)#" )
        .def("Movability",
             (BRepMesh_DegreeOfFreedom (BRepMesh_Vertex::*)() const) static_cast<BRepMesh_DegreeOfFreedom (BRepMesh_Vertex::*)() const>(&BRepMesh_Vertex::Movability),
             R"#(Returns movability of the vertex.)#" )
        .def("SetMovability",
             (void (BRepMesh_Vertex::*)( const BRepMesh_DegreeOfFreedom ) ) static_cast<void (BRepMesh_Vertex::*)( const BRepMesh_DegreeOfFreedom ) >(&BRepMesh_Vertex::SetMovability),
             R"#(Sets movability of the vertex.)#"  , py::arg("theMovability"))
        .def("HashCode",
             (Standard_Integer (BRepMesh_Vertex::*)( const Standard_Integer ) const) static_cast<Standard_Integer (BRepMesh_Vertex::*)( const Standard_Integer ) const>(&BRepMesh_Vertex::HashCode),
             R"#(Computes a hash code for this vertex, in the range [1, theUpperBound])#"  , py::arg("theUpperBound"))
        .def("IsEqual",
             (Standard_Boolean (BRepMesh_Vertex::*)( const BRepMesh_Vertex & ) const) static_cast<Standard_Boolean (BRepMesh_Vertex::*)( const BRepMesh_Vertex & ) const>(&BRepMesh_Vertex::IsEqual),
             R"#(Checks for equality with another vertex.)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_VertexInspector , shared_ptr<BRepMesh_VertexInspector> , NCollection_CellFilter_InspectorXY>>(m.attr("BRepMesh_VertexInspector"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("Add",
             (Standard_Integer (BRepMesh_VertexInspector::*)( const BRepMesh_Vertex & ) ) static_cast<Standard_Integer (BRepMesh_VertexInspector::*)( const BRepMesh_Vertex & ) >(&BRepMesh_VertexInspector::Add),
             R"#(Registers the given vertex.)#"  , py::arg("theVertex"))
        .def("SetTolerance",
             (void (BRepMesh_VertexInspector::*)( const Standard_Real ) ) static_cast<void (BRepMesh_VertexInspector::*)( const Standard_Real ) >(&BRepMesh_VertexInspector::SetTolerance),
             R"#(Sets the tolerance to be used for identification of coincident vertices equal for both dimensions.)#"  , py::arg("theTolerance"))
        .def("SetTolerance",
             (void (BRepMesh_VertexInspector::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepMesh_VertexInspector::*)( const Standard_Real , const Standard_Real ) >(&BRepMesh_VertexInspector::SetTolerance),
             R"#(Sets the tolerance to be used for identification of coincident vertices.)#"  , py::arg("theToleranceX"),  py::arg("theToleranceY"))
        .def("Clear",
             (void (BRepMesh_VertexInspector::*)() ) static_cast<void (BRepMesh_VertexInspector::*)() >(&BRepMesh_VertexInspector::Clear),
             R"#(Clear inspector's internal data structures.)#" )
        .def("Delete",
             (void (BRepMesh_VertexInspector::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_VertexInspector::*)( const Standard_Integer ) >(&BRepMesh_VertexInspector::Delete),
             R"#(Deletes vertex with the given index.)#"  , py::arg("theIndex"))
        .def("NbVertices",
             (Standard_Integer (BRepMesh_VertexInspector::*)() const) static_cast<Standard_Integer (BRepMesh_VertexInspector::*)() const>(&BRepMesh_VertexInspector::NbVertices),
             R"#(Returns number of registered vertices.)#" )
        .def("GetVertex",
             (BRepMesh_Vertex & (BRepMesh_VertexInspector::*)( Standard_Integer ) ) static_cast<BRepMesh_Vertex & (BRepMesh_VertexInspector::*)( Standard_Integer ) >(&BRepMesh_VertexInspector::GetVertex),
             R"#(Returns vertex with the given index.)#"  , py::arg("theIndex"))
        .def("SetPoint",
             (void (BRepMesh_VertexInspector::*)( const gp_XY & ) ) static_cast<void (BRepMesh_VertexInspector::*)( const gp_XY & ) >(&BRepMesh_VertexInspector::SetPoint),
             R"#(Set reference point to be checked.)#"  , py::arg("thePoint"))
        .def("GetCoincidentPoint",
             (Standard_Integer (BRepMesh_VertexInspector::*)() const) static_cast<Standard_Integer (BRepMesh_VertexInspector::*)() const>(&BRepMesh_VertexInspector::GetCoincidentPoint),
             R"#(Returns index of point coinciding with regerence one.)#" )
        .def("GetListOfDelPoints",
             (const IMeshData::ListOfInteger & (BRepMesh_VertexInspector::*)() const) static_cast<const IMeshData::ListOfInteger & (BRepMesh_VertexInspector::*)() const>(&BRepMesh_VertexInspector::GetListOfDelPoints),
             R"#(Returns list with indexes of vertices that have movability attribute equal to BRepMesh_Deleted and can be replaced with another node.)#" )
        .def("Vertices",
             (const opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexInspector::*)() const) static_cast<const opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexInspector::*)() const>(&BRepMesh_VertexInspector::Vertices),
             R"#(Returns set of mesh vertices.)#" )
        .def("ChangeVertices",
             (opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexInspector::*)() ) static_cast<opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexInspector::*)() >(&BRepMesh_VertexInspector::ChangeVertices),
             R"#(Returns set of mesh vertices for modification.)#" )
        .def("Inspect",
             (NCollection_CellFilter_Action (BRepMesh_VertexInspector::*)( const Standard_Integer ) ) static_cast<NCollection_CellFilter_Action (BRepMesh_VertexInspector::*)( const Standard_Integer ) >(&BRepMesh_VertexInspector::Inspect),
             R"#(Performs inspection of a point with the given index.)#"  , py::arg("theTargetIndex"))
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsEqual_s",
                    (Standard_Boolean (*)( const Standard_Integer , const Standard_Integer ) ) static_cast<Standard_Boolean (*)( const Standard_Integer , const Standard_Integer ) >(&BRepMesh_VertexInspector::IsEqual),
                    R"#(Checks indices for equlity.)#"  , py::arg("theIndex"),  py::arg("theTargetIndex"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_VertexTool ,opencascade::handle<BRepMesh_VertexTool> , Standard_Transient>>(m.attr("BRepMesh_VertexTool"))
    // constructors
        .def(py::init< const opencascade::handle<NCollection_IncAllocator> & >()  , py::arg("theAllocator") )
    // custom constructors
    // methods
        .def("SetCellSize",
             (void (BRepMesh_VertexTool::*)( const Standard_Real ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real ) >(&BRepMesh_VertexTool::SetCellSize),
             R"#(Sets new size of cell for cellfilter equal in both directions.)#"  , py::arg("theSize"))
        .def("SetCellSize",
             (void (BRepMesh_VertexTool::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real , const Standard_Real ) >(&BRepMesh_VertexTool::SetCellSize),
             R"#(Sets new size of cell for cellfilter.)#"  , py::arg("theSizeX"),  py::arg("theSizeY"))
        .def("SetTolerance",
             (void (BRepMesh_VertexTool::*)( const Standard_Real ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real ) >(&BRepMesh_VertexTool::SetTolerance),
             R"#(Sets the tolerance to be used for identification of coincident vertices equal for both dimensions.)#"  , py::arg("theTolerance"))
        .def("SetTolerance",
             (void (BRepMesh_VertexTool::*)( const Standard_Real , const Standard_Real ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Real , const Standard_Real ) >(&BRepMesh_VertexTool::SetTolerance),
             R"#(Sets the tolerance to be used for identification of coincident vertices.)#"  , py::arg("theToleranceX"),  py::arg("theToleranceY"))
        .def("Add",
             (Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex & , const Standard_Boolean ) ) static_cast<Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex & , const Standard_Boolean ) >(&BRepMesh_VertexTool::Add),
             R"#(Adds vertex with empty data to the tool.)#"  , py::arg("theVertex"),  py::arg("isForceAdd"))
        .def("DeleteVertex",
             (void (BRepMesh_VertexTool::*)( const Standard_Integer ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Integer ) >(&BRepMesh_VertexTool::DeleteVertex),
             R"#(Deletes vertex with the given index from the tool.)#"  , py::arg("theIndex"))
        .def("Vertices",
             (const opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexTool::*)() const) static_cast<const opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::Vertices),
             R"#(Returns set of mesh vertices.)#" )
        .def("ChangeVertices",
             (opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexTool::*)() ) static_cast<opencascade::handle<IMeshData::VectorOfVertex> & (BRepMesh_VertexTool::*)() >(&BRepMesh_VertexTool::ChangeVertices),
             R"#(Returns set of mesh vertices.)#" )
        .def("FindKey",
             (const BRepMesh_Vertex & (BRepMesh_VertexTool::*)( const Standard_Integer ) ) static_cast<const BRepMesh_Vertex & (BRepMesh_VertexTool::*)( const Standard_Integer ) >(&BRepMesh_VertexTool::FindKey),
             R"#(Returns vertex by the given index.)#"  , py::arg("theIndex"))
        .def("FindIndex",
             (Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex & ) ) static_cast<Standard_Integer (BRepMesh_VertexTool::*)( const BRepMesh_Vertex & ) >(&BRepMesh_VertexTool::FindIndex),
             R"#(Returns index of the given vertex.)#"  , py::arg("theVertex"))
        .def("Extent",
             (Standard_Integer (BRepMesh_VertexTool::*)() const) static_cast<Standard_Integer (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::Extent),
             R"#(Returns a number of vertices.)#" )
        .def("IsEmpty",
             (Standard_Boolean (BRepMesh_VertexTool::*)() const) static_cast<Standard_Boolean (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::IsEmpty),
             R"#(Returns True when the map contains no keys.)#" )
        .def("Substitute",
             (void (BRepMesh_VertexTool::*)( const Standard_Integer , const BRepMesh_Vertex & ) ) static_cast<void (BRepMesh_VertexTool::*)( const Standard_Integer , const BRepMesh_Vertex & ) >(&BRepMesh_VertexTool::Substitute),
             R"#(Substitutes vertex with the given by the given vertex with attributes.)#"  , py::arg("theIndex"),  py::arg("theVertex"))
        .def("RemoveLast",
             (void (BRepMesh_VertexTool::*)() ) static_cast<void (BRepMesh_VertexTool::*)() >(&BRepMesh_VertexTool::RemoveLast),
             R"#(Remove last node from the structure.)#" )
        .def("GetListOfDelNodes",
             (const IMeshData::ListOfInteger & (BRepMesh_VertexTool::*)() const) static_cast<const IMeshData::ListOfInteger & (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::GetListOfDelNodes),
             R"#(Returns the list with indexes of vertices that have movability attribute equal to BRepMesh_Deleted and can be replaced with another node.)#" )
        .def("Statistics",
             (void (BRepMesh_VertexTool::*)( std::ostream & ) const) static_cast<void (BRepMesh_VertexTool::*)( std::ostream & ) const>(&BRepMesh_VertexTool::Statistics),
             R"#(Prints statistics.)#"  , py::arg("theStream"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_VertexTool::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_VertexTool::*)() const>(&BRepMesh_VertexTool::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
        .def("GetTolerance",
             []( BRepMesh_VertexTool &self   ){ Standard_Real  theToleranceX; Standard_Real  theToleranceY; self.GetTolerance(theToleranceX,theToleranceY); return std::make_tuple(theToleranceX,theToleranceY); },
             R"#(Gets the tolerance to be used for identification of coincident vertices.)#" )
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_VertexTool::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_VertexTool::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_Edge , shared_ptr<BRepMesh_Edge> , BRepMesh_OrientedEdge>>(m.attr("BRepMesh_Edge"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const Standard_Integer,const Standard_Integer,const BRepMesh_DegreeOfFreedom >()  , py::arg("theFirstNode"),  py::arg("theLastNode"),  py::arg("theMovability") )
    // custom constructors
    // methods
        .def("Movability",
             (BRepMesh_DegreeOfFreedom (BRepMesh_Edge::*)() const) static_cast<BRepMesh_DegreeOfFreedom (BRepMesh_Edge::*)() const>(&BRepMesh_Edge::Movability),
             R"#(Returns movability flag of the Link.)#" )
        .def("SetMovability",
             (void (BRepMesh_Edge::*)( const BRepMesh_DegreeOfFreedom ) ) static_cast<void (BRepMesh_Edge::*)( const BRepMesh_DegreeOfFreedom ) >(&BRepMesh_Edge::SetMovability),
             R"#(Sets movability flag of the Link.)#"  , py::arg("theMovability"))
        .def("IsSameOrientation",
             (Standard_Boolean (BRepMesh_Edge::*)( const BRepMesh_Edge & ) const) static_cast<Standard_Boolean (BRepMesh_Edge::*)( const BRepMesh_Edge & ) const>(&BRepMesh_Edge::IsSameOrientation),
             R"#(Checks if the given edge and this one have the same orientation.)#"  , py::arg("theOther"))
        .def("IsEqual",
             (Standard_Boolean (BRepMesh_Edge::*)( const BRepMesh_Edge & ) const) static_cast<Standard_Boolean (BRepMesh_Edge::*)( const BRepMesh_Edge & ) const>(&BRepMesh_Edge::IsEqual),
             R"#(Checks for equality with another edge.)#"  , py::arg("theOther"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<BRepMesh_IncrementalMesh ,opencascade::handle<BRepMesh_IncrementalMesh> , BRepMesh_DiscretRoot>>(m.attr("BRepMesh_IncrementalMesh"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const TopoDS_Shape &,const Standard_Real,const Standard_Boolean,const Standard_Real,const Standard_Boolean >()  , py::arg("theShape"),  py::arg("theLinDeflection"),  py::arg("isRelative")=static_cast<const Standard_Boolean>(Standard_False),  py::arg("theAngDeflection")=static_cast<const Standard_Real>(0.5),  py::arg("isInParallel")=static_cast<const Standard_Boolean>(Standard_False) )
        .def(py::init< const TopoDS_Shape &,const IMeshTools_Parameters & >()  , py::arg("theShape"),  py::arg("theParameters") )
    // custom constructors
    // methods
        .def("Perform",
             (void (BRepMesh_IncrementalMesh::*)() ) static_cast<void (BRepMesh_IncrementalMesh::*)() >(&BRepMesh_IncrementalMesh::Perform),
             R"#(Performs meshing ot the shape.)#" )
        .def("Perform",
             (void (BRepMesh_IncrementalMesh::*)( const opencascade::handle<IMeshTools_Context> & ) ) static_cast<void (BRepMesh_IncrementalMesh::*)( const opencascade::handle<IMeshTools_Context> & ) >(&BRepMesh_IncrementalMesh::Perform),
             R"#(Performs meshing using custom context;)#"  , py::arg("theContext"))
        .def("Parameters",
             (const IMeshTools_Parameters & (BRepMesh_IncrementalMesh::*)() const) static_cast<const IMeshTools_Parameters & (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::Parameters),
             R"#(Returns meshing parameters)#" )
        .def("ChangeParameters",
             (IMeshTools_Parameters & (BRepMesh_IncrementalMesh::*)() ) static_cast<IMeshTools_Parameters & (BRepMesh_IncrementalMesh::*)() >(&BRepMesh_IncrementalMesh::ChangeParameters),
             R"#(Returns modifiable meshing parameters)#" )
        .def("IsModified",
             (Standard_Boolean (BRepMesh_IncrementalMesh::*)() const) static_cast<Standard_Boolean (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::IsModified),
             R"#(Returns modified flag.)#" )
        .def("GetStatusFlags",
             (Standard_Integer (BRepMesh_IncrementalMesh::*)() const) static_cast<Standard_Integer (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::GetStatusFlags),
             R"#(Returns accumulated status flags faced during meshing.)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (BRepMesh_IncrementalMesh::*)() const) static_cast<const opencascade::handle<Standard_Type> & (BRepMesh_IncrementalMesh::*)() const>(&BRepMesh_IncrementalMesh::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("IsParallelDefault_s",
                    (Standard_Boolean (*)() ) static_cast<Standard_Boolean (*)() >(&BRepMesh_IncrementalMesh::IsParallelDefault),
                    R"#(Returns multi-threading usage flag set by default in Discret() static method (thus applied only to Mesh Factories).)#" )
        .def_static("SetParallelDefault_s",
                    (void (*)( const Standard_Boolean ) ) static_cast<void (*)( const Standard_Boolean ) >(&BRepMesh_IncrementalMesh::SetParallelDefault),
                    R"#(Setup multi-threading usage flag set by default in Discret() static method (thus applied only to Mesh Factories).)#"  , py::arg("isInParallel"))
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&BRepMesh_IncrementalMesh::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&BRepMesh_IncrementalMesh::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade/BRepMesh_ModelPostProcessor.hxx
// ./opencascade/BRepMesh_DataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_SelectorOfDataStructureOfDelaun.hxx
// ./opencascade/BRepMesh_PairOfIndex.hxx
// ./opencascade/BRepMesh_ModelPreProcessor.hxx
// ./opencascade/BRepMesh_Delaun.hxx
// ./opencascade/BRepMesh_Vertex.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const BRepMesh_Vertex & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const BRepMesh_Vertex & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given vertex, in the range [1, theUpperBound])#"  , py::arg("theVertex"),  py::arg("theUpperBound"));
// ./opencascade/BRepMesh_ModelHealer.hxx
// ./opencascade/BRepMesh_MeshAlgoFactory.hxx
// ./opencascade/BRepMesh_Circle.hxx
// ./opencascade/BRepMesh_IncrementalMesh.hxx
// ./opencascade/BRepMesh_PluginMacro.hxx
// ./opencascade/BRepMesh_VertexInspector.hxx
// ./opencascade/BRepMesh_DegreeOfFreedom.hxx
// ./opencascade/BRepMesh_ShapeVisitor.hxx
// ./opencascade/BRepMesh_MeshTool.hxx
// ./opencascade/BRepMesh_CircleTool.hxx
// ./opencascade/BRepMesh_DiscretRoot.hxx
// ./opencascade/BRepMesh_FastDiscret.hxx
// ./opencascade/BRepMesh_Context.hxx
// ./opencascade/BRepMesh_DiscretFactory.hxx
// ./opencascade/BRepMesh_ModelBuilder.hxx
// ./opencascade/BRepMesh_Triangle.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const BRepMesh_Triangle & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const BRepMesh_Triangle & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given triangle, in the range [1, theUpperBound])#"  , py::arg("theTriangle"),  py::arg("theUpperBound"));
// ./opencascade/BRepMesh_CircleInspector.hxx
// ./opencascade/BRepMesh_GeomTool.hxx
// ./opencascade/BRepMesh_OrientedEdge.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const BRepMesh_OrientedEdge & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const BRepMesh_OrientedEdge & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given oriented edge, in the range [1, theUpperBound])#"  , py::arg("theOrientedEdge"),  py::arg("theUpperBound"));
// ./opencascade/BRepMesh_FactoryError.hxx
// ./opencascade/BRepMesh_EdgeParameterProvider.hxx
// ./opencascade/BRepMesh_Classifier.hxx
// ./opencascade/BRepMesh_Edge.hxx
    m.def("HashCode",
          (Standard_Integer (*)( const BRepMesh_Edge & , const Standard_Integer ))  static_cast<Standard_Integer (*)( const BRepMesh_Edge & , const Standard_Integer )>(&HashCode),
          R"#(Computes a hash code for the given edge, in the range [1, theUpperBound])#"  , py::arg("theEdge"),  py::arg("theUpperBound"));
// ./opencascade/BRepMesh_FaceChecker.hxx
// ./opencascade/BRepMesh_FaceDiscret.hxx
// ./opencascade/BRepMesh_ShapeTool.hxx
// ./opencascade/BRepMesh_EdgeDiscret.hxx
// ./opencascade/BRepMesh_VertexTool.hxx
// ./opencascade/BRepMesh_Deflection.hxx
// ./opencascade/BRepMesh_EdgeTessellationExtractor.hxx
// ./opencascade/BRepMesh_CurveTessellator.hxx
// ./opencascade/BRepMesh_PluginEntryType.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
