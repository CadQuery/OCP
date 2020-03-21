
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
#include <IGESToBRep_IGESBoundary.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Trsf2d.hxx>
#include <TopoDS_Vertex.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESGeom_OffsetCurve.hxx>
#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESGeom_Boundary.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <ShapeExtend_WireData.hxx>
#include <TopoDS_Shape.hxx>
#include <IGESGeom_RuledSurface.hxx>
#include <IGESGeom_SurfaceOfRevolution.hxx>
#include <IGESGeom_TabulatedCylinder.hxx>
#include <IGESGeom_OffsetSurface.hxx>
#include <IGESGeom_TrimmedSurface.hxx>
#include <IGESGeom_BoundedSurface.hxx>
#include <IGESGeom_Plane.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESBasic_SingleParent.hxx>
#include <gp_Pln.hxx>
#include <gp_Trsf.hxx>
#include <gp_Trsf2d.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Transfer_TransientProcess.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESToBRep_Actor.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Geom_Surface.hxx>
#include <Geom_Plane.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <IGESGeom_BSplineSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <IGESGeom_BSplineCurve.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_ConicArc.hxx>
#include <Geom_BSplineCurve.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <IGESGeom_Line.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <Geom_Transformation.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESData_IGESEntity.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <IGESToBRep_CurveAndSurface.hxx>
#include <IGESToBRep_BasicSurface.hxx>
#include <IGESToBRep_BasicCurve.hxx>
#include <IGESToBRep_TopoSurface.hxx>
#include <IGESToBRep_TopoCurve.hxx>
#include <IGESToBRep_BRepEntity.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <IGESToBRep_Reader.hxx>
#include <IGESToBRep_Actor.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Vertex.hxx>
#include <IGESSolid_VertexList.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_Loop.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Trsf2d.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <Geom_Surface.hxx>
#include <IGESData_IGESModel.hxx>
#include <TopoDS_Shape.hxx>
#include <Message_Msg.hxx>

// module includes
#include <IGESToBRep.hxx>
#include <IGESToBRep_Actor.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESToBRep_BasicCurve.hxx>
#include <IGESToBRep_BasicSurface.hxx>
#include <IGESToBRep_BRepEntity.hxx>
#include <IGESToBRep_CurveAndSurface.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <IGESToBRep_Reader.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <IGESToBRep_TopoCurve.hxx>
#include <IGESToBRep_TopoSurface.hxx>

// template related includes


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module

// Module definiiton
void register_IGESToBRep(py::module &main_module) {


py::module m = static_cast<py::module>(main_module.attr("IGESToBRep"));


//Python trampoline classes

// classes

    // default constructor
    register_default_constructor<IGESToBRep , shared_ptr<IGESToBRep>>(m,"IGESToBRep");

    static_cast<py::class_<IGESToBRep , shared_ptr<IGESToBRep> >>(m.attr("IGESToBRep"))
    // constructors
    // custom constructors
    // methods
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("Init_s",
                    (void (*)() ) static_cast<void (*)() >(&IGESToBRep::Init),
                    R"#(Creates and initializes default AlgoContainer.)#" )
        .def_static("SetAlgoContainer_s",
                    (void (*)( const opencascade::handle<IGESToBRep_AlgoContainer> & ) ) static_cast<void (*)( const opencascade::handle<IGESToBRep_AlgoContainer> & ) >(&IGESToBRep::SetAlgoContainer),
                    R"#(Sets default AlgoContainer)#"  , py::arg("aContainer"))
        .def_static("AlgoContainer_s",
                    (opencascade::handle<IGESToBRep_AlgoContainer> (*)() ) static_cast<opencascade::handle<IGESToBRep_AlgoContainer> (*)() >(&IGESToBRep::AlgoContainer),
                    R"#(Returns default AlgoContainer)#" )
        .def_static("IsCurveAndSurface_s",
                    (Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep::IsCurveAndSurface),
                    R"#(Return True if the IGESEntity can be transfered by TransferCurveAndSurface. ex: All IGESEntity from IGESGeom)#"  , py::arg("start"))
        .def_static("IsBasicCurve_s",
                    (Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep::IsBasicCurve),
                    R"#(Return True if the IGESEntity can be transfered by TransferBasicCurve. ex: CircularArc, ConicArc, Line, CopiousData, BSplineCurve, SplineCurve... from IGESGeom : 104,110,112,126)#"  , py::arg("start"))
        .def_static("IsBasicSurface_s",
                    (Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep::IsBasicSurface),
                    R"#(Return True if the IGESEntity can be transfered by TransferBasicSurface. ex: BSplineSurface, SplineSurface... from IGESGeom : 114,128)#"  , py::arg("start"))
        .def_static("IsTopoCurve_s",
                    (Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep::IsTopoCurve),
                    R"#(Return True if the IGESEntity can be transfered by TransferTopoCurve. ex: all Curves from IGESGeom : all basic curves,102,130,142,144)#"  , py::arg("start"))
        .def_static("IsTopoSurface_s",
                    (Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep::IsTopoSurface),
                    R"#(Return True if the IGESEntity can be transfered by TransferTopoSurface. ex: All Surfaces from IGESGeom : all basic surfaces,108,118,120,122,141,143)#"  , py::arg("start"))
        .def_static("IsBRepEntity_s",
                    (Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<Standard_Boolean (*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep::IsBRepEntity),
                    R"#(Return True if the IGESEntity can be transfered by TransferBRepEntity. ex: VertexList, EdgeList, Loop, Face, Shell, Manifold Solid BRep Object from IGESSolid : 502, 504, 508, 510, 514, 186.)#"  , py::arg("start"))
        .def_static("IGESCurveToSequenceOfIGESCurve_s",
                    (Standard_Integer (*)( const opencascade::handle<IGESData_IGESEntity> & , opencascade::handle<TColStd_HSequenceOfTransient> & ) ) static_cast<Standard_Integer (*)( const opencascade::handle<IGESData_IGESEntity> & , opencascade::handle<TColStd_HSequenceOfTransient> & ) >(&IGESToBRep::IGESCurveToSequenceOfIGESCurve),
                    R"#(None)#"  , py::arg("curve"),  py::arg("sequence"))
        .def_static("TransferPCurve_s",
                    (Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Face & ) ) static_cast<Standard_Boolean (*)( const TopoDS_Edge & , const TopoDS_Edge & , const TopoDS_Face & ) >(&IGESToBRep::TransferPCurve),
                    R"#(None)#"  , py::arg("fromedge"),  py::arg("toedge"),  py::arg("face"))
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_Actor ,opencascade::handle<IGESToBRep_Actor> , Transfer_ActorOfTransientProcess>>(m.attr("IGESToBRep_Actor"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetModel",
             (void (IGESToBRep_Actor::*)( const opencascade::handle<Interface_InterfaceModel> & ) ) static_cast<void (IGESToBRep_Actor::*)( const opencascade::handle<Interface_InterfaceModel> & ) >(&IGESToBRep_Actor::SetModel),
             R"#(None)#"  , py::arg("model"))
        .def("SetContinuity",
             (void (IGESToBRep_Actor::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_Actor::*)( const Standard_Integer ) >(&IGESToBRep_Actor::SetContinuity),
             R"#(---Purpose By default continuity = 0 if continuity = 1 : try C1 if continuity = 2 : try C2)#"  , py::arg("continuity")=static_cast<const Standard_Integer>(0))
        .def("GetContinuity",
             (Standard_Integer (IGESToBRep_Actor::*)() const) static_cast<Standard_Integer (IGESToBRep_Actor::*)() const>(&IGESToBRep_Actor::GetContinuity),
             R"#(Return "thecontinuity")#" )
        .def("Recognize",
             (Standard_Boolean (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & ) ) static_cast<Standard_Boolean (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & ) >(&IGESToBRep_Actor::Recognize),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer",
             (opencascade::handle<Transfer_Binder> (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<opencascade::handle<Transfer_Binder> (IGESToBRep_Actor::*)( const opencascade::handle<Standard_Transient> & , const opencascade::handle<Transfer_TransientProcess> & ) >(&IGESToBRep_Actor::Transfer),
             R"#(None)#"  , py::arg("start"),  py::arg("TP"))
        .def("UsedTolerance",
             (Standard_Real (IGESToBRep_Actor::*)() const) static_cast<Standard_Real (IGESToBRep_Actor::*)() const>(&IGESToBRep_Actor::UsedTolerance),
             R"#(Returns the tolerance which was actually used, either from the file or from statics)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_Actor::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_Actor::*)() const>(&IGESToBRep_Actor::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_Actor::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESToBRep_Actor::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_AlgoContainer ,opencascade::handle<IGESToBRep_AlgoContainer> , Standard_Transient>>(m.attr("IGESToBRep_AlgoContainer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("SetToolContainer",
             (void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) ) static_cast<void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) >(&IGESToBRep_AlgoContainer::SetToolContainer),
             R"#(Sets ToolContainer)#"  , py::arg("TC"))
        .def("ToolContainer",
             (opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const) static_cast<opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const>(&IGESToBRep_AlgoContainer::ToolContainer),
             R"#(Returns ToolContainer)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_AlgoContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_AlgoContainer::*)() const>(&IGESToBRep_AlgoContainer::DynamicType),
             R"#(None)#" )
        .def("SetToolContainer",
             (void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) ) static_cast<void (IGESToBRep_AlgoContainer::*)( const opencascade::handle<IGESToBRep_ToolContainer> & ) >(&IGESToBRep_AlgoContainer::SetToolContainer),
             R"#(Sets ToolContainer)#"  , py::arg("TC"))
        .def("ToolContainer",
             (opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const) static_cast<opencascade::handle<IGESToBRep_ToolContainer> (IGESToBRep_AlgoContainer::*)() const>(&IGESToBRep_AlgoContainer::ToolContainer),
             R"#(Returns ToolContainer)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_AlgoContainer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESToBRep_AlgoContainer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_CurveAndSurface , shared_ptr<IGESToBRep_CurveAndSurface> >>(m.attr("IGESToBRep_CurveAndSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("eps"),  py::arg("epsGeom"),  py::arg("epsCoeff"),  py::arg("mode"),  py::arg("modeapprox"),  py::arg("optimized") )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESToBRep_CurveAndSurface::*)() ) static_cast<void (IGESToBRep_CurveAndSurface::*)() >(&IGESToBRep_CurveAndSurface::Init),
             R"#(Initializes the field of the tool CurveAndSurface with default creating values.)#" )
        .def("SetEpsilon",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsilon),
             R"#(Changes the value of "myEps")#"  , py::arg("eps"))
        .def("GetEpsilon",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsilon),
             R"#(Returns the value of "myEps")#" )
        .def("SetEpsCoeff",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsCoeff),
             R"#(Changes the value of "myEpsCoeff")#"  , py::arg("eps"))
        .def("GetEpsCoeff",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsCoeff),
             R"#(Returns the value of "myEpsCoeff")#" )
        .def("SetEpsGeom",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsGeom),
             R"#(Changes the value of "myEpsGeom")#"  , py::arg("eps"))
        .def("GetEpsGeom",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsGeom),
             R"#(Returns the value of "myEpsGeom")#" )
        .def("SetMinTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMinTol),
             R"#(Changes the value of "myMinTol")#"  , py::arg("mintol"))
        .def("SetMaxTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMaxTol),
             R"#(Changes the value of "myMaxTol")#"  , py::arg("maxtol"))
        .def("UpdateMinMaxTol",
             (void (IGESToBRep_CurveAndSurface::*)() ) static_cast<void (IGESToBRep_CurveAndSurface::*)() >(&IGESToBRep_CurveAndSurface::UpdateMinMaxTol),
             R"#(Sets values of "myMinTol" and "myMaxTol" as follows myMaxTol = Max ("read.maxprecision.val", myEpsGeom * myUnitFactor) myMinTol = Precision::Confusion() Remark: This method is automatically invoked each time the values of "myEpsGeom" or "myUnitFactor" are changed)#" )
        .def("GetMinTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMinTol),
             R"#(Returns the value of "myMinTol")#" )
        .def("GetMaxTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMaxTol),
             R"#(Returns the value of "myMaxTol")#" )
        .def("SetModeApprox",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeApprox),
             R"#(Changes the value of "myModeApprox")#"  , py::arg("mode"))
        .def("GetModeApprox",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeApprox),
             R"#(Returns the value of "myModeApprox")#" )
        .def("SetModeTransfer",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeTransfer),
             R"#(Changes the value of "myModeIsTopo")#"  , py::arg("mode"))
        .def("GetModeTransfer",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeTransfer),
             R"#(Returns the value of "myModeIsTopo")#" )
        .def("SetOptimized",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetOptimized),
             R"#(Changes the value of "myContIsOpti")#"  , py::arg("optimized"))
        .def("GetOptimized",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetOptimized),
             R"#(Returns the value of "myContIsOpti")#" )
        .def("GetUnitFactor",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetUnitFactor),
             R"#(Returns the value of " myUnitFactor")#" )
        .def("SetSurfaceCurve",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetSurfaceCurve),
             R"#(Changes the value of "mySurfaceCurve")#"  , py::arg("ival"))
        .def("GetSurfaceCurve",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetSurfaceCurve),
             R"#(Returns the value of " mySurfaceCurve" 0 = value in file , 2 = kepp 2d and compute 3d 3 = keep 3d and compute 2d)#" )
        .def("SetModel",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESModel> & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESModel> & ) >(&IGESToBRep_CurveAndSurface::SetModel),
             R"#(Set the value of "myModel")#"  , py::arg("model"))
        .def("GetModel",
             (opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModel),
             R"#(Returns the value of "myModel")#" )
        .def("SetContinuity",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetContinuity),
             R"#(Changes the value of "myContinuity" if continuity = 0 do nothing else if continuity = 1 try C1 if continuity = 2 try C2)#"  , py::arg("continuity"))
        .def("GetContinuity",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetContinuity),
             R"#(Returns the value of "myContinuity")#" )
        .def("SetTransferProcess",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) >(&IGESToBRep_CurveAndSurface::SetTransferProcess),
             R"#(Set the value of "myMsgReg")#"  , py::arg("TP"))
        .def("GetTransferProcess",
             (opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetTransferProcess),
             R"#(Returns the value of "myMsgReg")#" )
        .def("TransferCurveAndSurface",
             (TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_CurveAndSurface::TransferCurveAndSurface),
             R"#(Returns the result of the transfert of any IGES Curve or Surface Entity. If the transfer has failed, this member return a NullEntity.)#"  , py::arg("start"))
        .def("TransferGeometry",
             (TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_CurveAndSurface::TransferGeometry),
             R"#(Returns the result of the transfert the geometry of any IGESEntity. If the transfer has failed, this member return a NullEntity.)#"  , py::arg("start"))
        .def("SendFail",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendFail),
             R"#(Records a new Fail message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendWarning",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendWarning),
             R"#(Records a new Warning message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendMsg",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendMsg),
             R"#(Records a new Information message from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
        .def("HasShapeResult",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESToBRep_CurveAndSurface::HasShapeResult),
             R"#(Returns True if start was already treated and has a result in "myMap" else returns False.)#"  , py::arg("start"))
        .def("GetShapeResult",
             (TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESToBRep_CurveAndSurface::GetShapeResult),
             R"#(Returns the result of the transfer of the IGESEntity "start" contained in "myMap" . (if HasShapeResult is True).)#"  , py::arg("start"))
        .def("SetShapeResult",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Shape & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Shape & ) >(&IGESToBRep_CurveAndSurface::SetShapeResult),
             R"#(set in "myMap" the result of the transfer of the IGESEntity "start".)#"  , py::arg("start"),  py::arg("result"))
        .def("NbShapeResult",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) const>(&IGESToBRep_CurveAndSurface::NbShapeResult),
             R"#(Returns the number of shapes results contained in "myMap" for the IGESEntity start ( type VertexList or EdgeList).)#"  , py::arg("start"))
        .def("GetShapeResult",
             (TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer ) const) static_cast<TopoDS_Shape (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Standard_Integer ) const>(&IGESToBRep_CurveAndSurface::GetShapeResult),
             R"#(Returns the numth result of the IGESEntity start (type VertexList or EdgeList) in "myMap". (if NbShapeResult is not null).)#"  , py::arg("start"),  py::arg("num"))
        .def("AddShapeResult",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Shape & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Shape & ) >(&IGESToBRep_CurveAndSurface::AddShapeResult),
             R"#(set in "myMap" the result of the transfer of the entity of the IGESEntity start ( type VertexList or EdgeList).)#"  , py::arg("start"),  py::arg("result"))
        .def("SetSurface",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Geom_Surface> & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Geom_Surface> & ) >(&IGESToBRep_CurveAndSurface::SetSurface),
             R"#(None)#"  , py::arg("theSurface"))
        .def("Surface",
             (opencascade::handle<Geom_Surface> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<Geom_Surface> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::Surface),
             R"#(None)#" )
        .def("GetUVResolution",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() ) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() >(&IGESToBRep_CurveAndSurface::GetUVResolution),
             R"#(None)#" )
        .def("SetEpsilon",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsilon),
             R"#(Changes the value of "myEps")#"  , py::arg("eps"))
        .def("GetEpsilon",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsilon),
             R"#(Returns the value of "myEps")#" )
        .def("SetEpsCoeff",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetEpsCoeff),
             R"#(Changes the value of "myEpsCoeff")#"  , py::arg("eps"))
        .def("GetEpsCoeff",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsCoeff),
             R"#(Returns the value of "myEpsCoeff")#" )
        .def("GetEpsGeom",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetEpsGeom),
             R"#(Returns the value of "myEpsGeom")#" )
        .def("SetMinTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMinTol),
             R"#(Changes the value of "myMinTol")#"  , py::arg("mintol"))
        .def("SetMaxTol",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Real ) >(&IGESToBRep_CurveAndSurface::SetMaxTol),
             R"#(Changes the value of "myMaxTol")#"  , py::arg("maxtol"))
        .def("GetMinTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMinTol),
             R"#(Returns the value of "myMinTol")#" )
        .def("GetMaxTol",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetMaxTol),
             R"#(Returns the value of "myMaxTol")#" )
        .def("SetModeApprox",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeApprox),
             R"#(Changes the value of "myModeApprox")#"  , py::arg("mode"))
        .def("GetModeApprox",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeApprox),
             R"#(Returns the value of "myModeApprox")#" )
        .def("SetModeTransfer",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetModeTransfer),
             R"#(Changes the value of "myModeIsTopo")#"  , py::arg("mode"))
        .def("GetModeTransfer",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModeTransfer),
             R"#(Returns the value of "myModeIsTopo")#" )
        .def("SetOptimized",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Boolean ) >(&IGESToBRep_CurveAndSurface::SetOptimized),
             R"#(Changes the value of "myContIsOpti")#"  , py::arg("optimized"))
        .def("GetOptimized",
             (Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Boolean (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetOptimized),
             R"#(Returns the value of "myContIsOpti")#" )
        .def("GetUnitFactor",
             (Standard_Real (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Real (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetUnitFactor),
             R"#(Returns the value of " myUnitFactor")#" )
        .def("SetSurfaceCurve",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetSurfaceCurve),
             R"#(Changes the value of "mySurfaceCurve")#"  , py::arg("ival"))
        .def("GetSurfaceCurve",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetSurfaceCurve),
             R"#(Returns the value of " mySurfaceCurve" 0 = value in file , 2 = kepp 2d and compute 3d 3 = keep 3d and compute 2d)#" )
        .def("GetModel",
             (opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetModel),
             R"#(Returns the value of "myModel")#" )
        .def("SetContinuity",
             (void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const Standard_Integer ) >(&IGESToBRep_CurveAndSurface::SetContinuity),
             R"#(Changes the value of "myContinuity" if continuity = 0 do nothing else if continuity = 1 try C1 if continuity = 2 try C2)#"  , py::arg("continuity"))
        .def("GetContinuity",
             (Standard_Integer (IGESToBRep_CurveAndSurface::*)() const) static_cast<Standard_Integer (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetContinuity),
             R"#(Returns the value of "myContinuity")#" )
        .def("SetTransferProcess",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<Transfer_TransientProcess> & ) >(&IGESToBRep_CurveAndSurface::SetTransferProcess),
             R"#(Set the value of "myMsgReg")#"  , py::arg("TP"))
        .def("GetTransferProcess",
             (opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (IGESToBRep_CurveAndSurface::*)() const>(&IGESToBRep_CurveAndSurface::GetTransferProcess),
             R"#(Returns the value of "myMsgReg")#" )
        .def("SendFail",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendFail),
             R"#(Records a new Fail message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendWarning",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendWarning),
             R"#(Records a new Warning message)#"  , py::arg("start"),  py::arg("amsg"))
        .def("SendMsg",
             (void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) ) static_cast<void (IGESToBRep_CurveAndSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , const Message_Msg & ) >(&IGESToBRep_CurveAndSurface::SendMsg),
             R"#(Records a new Information message from the definition of a Msg (Original+Value))#"  , py::arg("start"),  py::arg("amsg"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_IGESBoundary ,opencascade::handle<IGESToBRep_IGESBoundary> , Standard_Transient>>(m.attr("IGESToBRep_IGESBoundary"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
    // custom constructors
    // methods
        .def("Init",
             (void (IGESToBRep_IGESBoundary::*)( const IGESToBRep_CurveAndSurface & , const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real , const Standard_Integer ) ) static_cast<void (IGESToBRep_IGESBoundary::*)( const IGESToBRep_CurveAndSurface & , const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real , const Standard_Integer ) >(&IGESToBRep_IGESBoundary::Init),
             R"#(Inits the object with parameters common for all types of IGES boundaries. <CS>: object to be used for retrieving translation parameters and sending messages, <entity>: boundary entity to be processed, <face>, <trans>, <uFact>: as for IGESToBRep_TopoCurve <filepreference>: preferred representation (2 or 3) given in the IGES file)#"  , py::arg("CS"),  py::arg("entity"),  py::arg("face"),  py::arg("trans"),  py::arg("uFact"),  py::arg("filepreference"))
        .def("WireData",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData),
             R"#(Returns the resulting wire)#" )
        .def("WireData3d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData3d),
             R"#(Returns the wire from 3D curves (edges contain 3D curves and may contain pcurves))#" )
        .def("WireData2d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData2d),
             R"#(Returns the the wire from 2D curves (edges contain pcurves only))#" )
        .def("Transfer",
             (Standard_Boolean (IGESToBRep_IGESBoundary::*)( Standard_Boolean & , Standard_Boolean & , Standard_Boolean & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Boolean , const opencascade::handle<IGESData_HArray1OfIGESEntity> & , const Standard_Integer ) ) static_cast<Standard_Boolean (IGESToBRep_IGESBoundary::*)( Standard_Boolean & , Standard_Boolean & , Standard_Boolean & , const opencascade::handle<IGESData_IGESEntity> & , const Standard_Boolean , const opencascade::handle<IGESData_HArray1OfIGESEntity> & , const Standard_Integer ) >(&IGESToBRep_IGESBoundary::Transfer),
             R"#(Translates 141 and 142 entities. Returns True if the curve has been successfully translated, otherwise returns False. <okCurve..>: flags that indicate whether corresponding representation has been successfully translated (must be set to True before first call), <curve3d>: model space curve for 142 and current model space curve for 141, <toreverse3d>: False for 142 and current orientation flag for 141, <curves2d>: 1 parameter space curve for 142 or list of them for current model space curves for 141, <number>: 1 for 142 and rank number of model space curve for 141.)#"  , py::arg("okCurve"),  py::arg("okCurve3d"),  py::arg("okCurve2d"),  py::arg("curve3d"),  py::arg("toreverse3d"),  py::arg("curves2d"),  py::arg("number"))
        .def("Transfer",
             (Standard_Boolean (IGESToBRep_IGESBoundary::*)( Standard_Boolean & , Standard_Boolean & , Standard_Boolean & , const opencascade::handle<ShapeExtend_WireData> & , const opencascade::handle<IGESData_HArray1OfIGESEntity> & , const Standard_Boolean , const Standard_Integer , opencascade::handle<ShapeExtend_WireData> & ) ) static_cast<Standard_Boolean (IGESToBRep_IGESBoundary::*)( Standard_Boolean & , Standard_Boolean & , Standard_Boolean & , const opencascade::handle<ShapeExtend_WireData> & , const opencascade::handle<IGESData_HArray1OfIGESEntity> & , const Standard_Boolean , const Standard_Integer , opencascade::handle<ShapeExtend_WireData> & ) >(&IGESToBRep_IGESBoundary::Transfer),
             R"#(Translates 508 entity. Returns True if the curve has been successfully translated, otherwise returns False. Input object IGESBoundary must be created and initialized before. <okCurve..>: flags that indicate whether corresponding representation has been successfully translated (must be set to True before first call), <curve3d>: result of translation of current edge, <curves2d>: list of parameter space curves for edge, <toreverse2d>: orientation flag of current edge in respect to its model space curve, <number>: rank number of edge, <lsewd>: returns the result of translation of current edge.)#"  , py::arg("okCurve"),  py::arg("okCurve3d"),  py::arg("okCurve2d"),  py::arg("curve3d"),  py::arg("curves2d"),  py::arg("toreverse2d"),  py::arg("number"),  py::arg("lsewd"))
        .def("Check",
             (void (IGESToBRep_IGESBoundary::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) ) static_cast<void (IGESToBRep_IGESBoundary::*)( const Standard_Boolean , const Standard_Boolean , const Standard_Boolean , const Standard_Boolean ) >(&IGESToBRep_IGESBoundary::Check),
             R"#(Checks result of translation of IGES boundary entities (types 141, 142 or 508). Checks consistency of 2D and 3D representations and keeps only one if they are inconsistent. <result>: result of translation (returned by Transfer), <checkclosure>: False for 142 without parent 144 entity, otherwise True, <okCurve3d>, <okCurve2d>: those returned by Transfer.)#"  , py::arg("result"),  py::arg("checkclosure"),  py::arg("okCurve3d"),  py::arg("okCurve2d"))
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_IGESBoundary::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::DynamicType),
             R"#(None)#" )
        .def("WireData",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData),
             R"#(Returns the resulting wire)#" )
        .def("WireData3d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData3d),
             R"#(Returns the wire from 3D curves (edges contain 3D curves and may contain pcurves))#" )
        .def("WireData2d",
             (opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const) static_cast<opencascade::handle<ShapeExtend_WireData> (IGESToBRep_IGESBoundary::*)() const>(&IGESToBRep_IGESBoundary::WireData2d),
             R"#(Returns the the wire from 2D curves (edges contain pcurves only))#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_IGESBoundary::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESToBRep_IGESBoundary::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_Reader , shared_ptr<IGESToBRep_Reader> >>(m.attr("IGESToBRep_Reader"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("LoadFile",
             (Standard_Integer (IGESToBRep_Reader::*)( const Standard_CString ) ) static_cast<Standard_Integer (IGESToBRep_Reader::*)( const Standard_CString ) >(&IGESToBRep_Reader::LoadFile),
             R"#(Loads a Model from a file.Returns 0 if success. returns 1 if the file could not be opened, returns -1 if an error occurred while the file was being loaded.)#"  , py::arg("filename"))
        .def("SetModel",
             (void (IGESToBRep_Reader::*)( const opencascade::handle<IGESData_IGESModel> & ) ) static_cast<void (IGESToBRep_Reader::*)( const opencascade::handle<IGESData_IGESModel> & ) >(&IGESToBRep_Reader::SetModel),
             R"#(Specifies a Model to work on Also clears the result and Done status, sets TransientProcess)#"  , py::arg("model"))
        .def("Model",
             (opencascade::handle<IGESData_IGESModel> (IGESToBRep_Reader::*)() const) static_cast<opencascade::handle<IGESData_IGESModel> (IGESToBRep_Reader::*)() const>(&IGESToBRep_Reader::Model),
             R"#(Returns the Model to be worked on.)#" )
        .def("SetTransientProcess",
             (void (IGESToBRep_Reader::*)( const opencascade::handle<Transfer_TransientProcess> & ) ) static_cast<void (IGESToBRep_Reader::*)( const opencascade::handle<Transfer_TransientProcess> & ) >(&IGESToBRep_Reader::SetTransientProcess),
             R"#(Allows to set an already defined TransientProcess (to be called after LoadFile or SetModel))#"  , py::arg("TP"))
        .def("TransientProcess",
             (opencascade::handle<Transfer_TransientProcess> (IGESToBRep_Reader::*)() const) static_cast<opencascade::handle<Transfer_TransientProcess> (IGESToBRep_Reader::*)() const>(&IGESToBRep_Reader::TransientProcess),
             R"#(Returns the TransientProcess)#" )
        .def("Actor",
             (opencascade::handle<IGESToBRep_Actor> (IGESToBRep_Reader::*)() const) static_cast<opencascade::handle<IGESToBRep_Actor> (IGESToBRep_Reader::*)() const>(&IGESToBRep_Reader::Actor),
             R"#(Returns "theActor")#" )
        .def("Clear",
             (void (IGESToBRep_Reader::*)() ) static_cast<void (IGESToBRep_Reader::*)() >(&IGESToBRep_Reader::Clear),
             R"#(Clears the results between two translation operations.)#" )
        .def("Check",
             (Standard_Boolean (IGESToBRep_Reader::*)( const Standard_Boolean ) const) static_cast<Standard_Boolean (IGESToBRep_Reader::*)( const Standard_Boolean ) const>(&IGESToBRep_Reader::Check),
             R"#(Checks the IGES file that was loaded into memory. Displays error messages in the default message file if withprint is true. Returns True if no fail message was found and False if there was at least one fail message.)#"  , py::arg("withprint"))
        .def("TransferRoots",
             (void (IGESToBRep_Reader::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_Reader::*)( const Standard_Boolean ) >(&IGESToBRep_Reader::TransferRoots),
             R"#(Translates root entities in an IGES file. Standard_True is the default value and means that only visible root entities are translated. Standard_False translates all of the roots (visible and invisible).)#"  , py::arg("onlyvisible")=static_cast<const Standard_Boolean>(Standard_True))
        .def("Transfer",
             (Standard_Boolean (IGESToBRep_Reader::*)( const Standard_Integer ) ) static_cast<Standard_Boolean (IGESToBRep_Reader::*)( const Standard_Integer ) >(&IGESToBRep_Reader::Transfer),
             R"#(Transfers an Entity given its rank in the Model (Root or not) Returns True if it is recognized as Geom-Topol. (But it can have failed : see IsDone))#"  , py::arg("num"))
        .def("IsDone",
             (Standard_Boolean (IGESToBRep_Reader::*)() const) static_cast<Standard_Boolean (IGESToBRep_Reader::*)() const>(&IGESToBRep_Reader::IsDone),
             R"#(Returns True if the LAST Transfer/TransferRoots was a success)#" )
        .def("UsedTolerance",
             (Standard_Real (IGESToBRep_Reader::*)() const) static_cast<Standard_Real (IGESToBRep_Reader::*)() const>(&IGESToBRep_Reader::UsedTolerance),
             R"#(Returns the Tolerance which has been actually used, converted in millimeters (either that from File or that from Session, according the mode))#" )
        .def("NbShapes",
             (Standard_Integer (IGESToBRep_Reader::*)() const) static_cast<Standard_Integer (IGESToBRep_Reader::*)() const>(&IGESToBRep_Reader::NbShapes),
             R"#(Returns the number of shapes produced by the translation.)#" )
        .def("Shape",
             (TopoDS_Shape (IGESToBRep_Reader::*)( const Standard_Integer ) const) static_cast<TopoDS_Shape (IGESToBRep_Reader::*)( const Standard_Integer ) const>(&IGESToBRep_Reader::Shape),
             R"#(Returns the num the resulting shape in a translation operation.)#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("OneShape",
             (TopoDS_Shape (IGESToBRep_Reader::*)() const) static_cast<TopoDS_Shape (IGESToBRep_Reader::*)() const>(&IGESToBRep_Reader::OneShape),
             R"#(Returns all of the results in a single shape which is: - a null shape if there are no results, - a shape if there is one result, - a compound containing the resulting shapes if there are several.)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_ToolContainer ,opencascade::handle<IGESToBRep_ToolContainer> , Standard_Transient>>(m.attr("IGESToBRep_ToolContainer"))
    // constructors
        .def(py::init<  >()  )
    // custom constructors
    // methods
        .def("IGESBoundary",
             (opencascade::handle<IGESToBRep_IGESBoundary> (IGESToBRep_ToolContainer::*)() const) static_cast<opencascade::handle<IGESToBRep_IGESBoundary> (IGESToBRep_ToolContainer::*)() const>(&IGESToBRep_ToolContainer::IGESBoundary),
             R"#(Returns IGESToBRep_IGESBoundary)#" )
        .def("DynamicType",
             (const opencascade::handle<Standard_Type> & (IGESToBRep_ToolContainer::*)() const) static_cast<const opencascade::handle<Standard_Type> & (IGESToBRep_ToolContainer::*)() const>(&IGESToBRep_ToolContainer::DynamicType),
             R"#(None)#" )
    // methods using call by reference i.s.o. return
    // static methods
        .def_static("get_type_name_s",
                    (const char * (*)() ) static_cast<const char * (*)() >(&IGESToBRep_ToolContainer::get_type_name),
                    R"#(None)#" )
        .def_static("get_type_descriptor_s",
                    (const opencascade::handle<Standard_Type> & (*)() ) static_cast<const opencascade::handle<Standard_Type> & (*)() >(&IGESToBRep_ToolContainer::get_type_descriptor),
                    R"#(None)#" )
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_BRepEntity , shared_ptr<IGESToBRep_BRepEntity> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_BRepEntity"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("eps"),  py::arg("epsGeom"),  py::arg("epsCoeff"),  py::arg("mode"),  py::arg("modeapprox"),  py::arg("optimized") )
    // custom constructors
    // methods
        .def("TransferBRepEntity",
             (TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_BRepEntity::TransferBRepEntity),
             R"#(Transfer the BRepEntity" : Face, Shell or ManifoldSolid.)#"  , py::arg("start"))
        .def("TransferVertex",
             (TopoDS_Vertex (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_VertexList> & , const Standard_Integer ) ) static_cast<TopoDS_Vertex (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_VertexList> & , const Standard_Integer ) >(&IGESToBRep_BRepEntity::TransferVertex),
             R"#(Transfer the entity number "index" of the VertexList "start")#"  , py::arg("start"),  py::arg("index"))
        .def("TransferEdge",
             (TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_EdgeList> & , const Standard_Integer ) ) static_cast<TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_EdgeList> & , const Standard_Integer ) >(&IGESToBRep_BRepEntity::TransferEdge),
             R"#(Transfer the entity number "index" of the EdgeList "start".)#"  , py::arg("start"),  py::arg("index"))
        .def("TransferLoop",
             (TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_Loop> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) ) static_cast<TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_Loop> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) >(&IGESToBRep_BRepEntity::TransferLoop),
             R"#(Transfer the Loop Entity)#"  , py::arg("start"),  py::arg("Face"),  py::arg("trans"),  py::arg("uFact"))
        .def("TransferFace",
             (TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_Face> & ) ) static_cast<TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_Face> & ) >(&IGESToBRep_BRepEntity::TransferFace),
             R"#(Transfer the Face Entity)#"  , py::arg("start"))
        .def("TransferShell",
             (TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_Shell> & ) ) static_cast<TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_Shell> & ) >(&IGESToBRep_BRepEntity::TransferShell),
             R"#(Transfer the Shell Entity)#"  , py::arg("start"))
        .def("TransferManifoldSolid",
             (TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ) ) static_cast<TopoDS_Shape (IGESToBRep_BRepEntity::*)( const opencascade::handle<IGESSolid_ManifoldSolid> & ) >(&IGESToBRep_BRepEntity::TransferManifoldSolid),
             R"#(Transfer the ManifoldSolid Entity)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_BasicCurve , shared_ptr<IGESToBRep_BasicCurve> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_BasicCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("eps"),  py::arg("epsGeom"),  py::arg("epsCoeff"),  py::arg("mode"),  py::arg("modeapprox"),  py::arg("optimized") )
    // custom constructors
    // methods
        .def("TransferBasicCurve",
             (opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_BasicCurve::TransferBasicCurve),
             R"#(Transfert a IGESEntity which answer True to the member : IGESToBRep::IsBasicCurve(IGESEntity). If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("Transfer2dBasicCurve",
             (opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_BasicCurve::Transfer2dBasicCurve),
             R"#(Transfert a IGESEntity which answer True to the member : IGESToBRep::IsBasicCurve(IGESEntity). The IGESEntity must be a curve UV and its associed TRSF must be planar .If this Entity could not be converted, this member returns a NullEntity.)#"  , py::arg("start"))
        .def("TransferBSplineCurve",
             (opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & ) ) static_cast<opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & ) >(&IGESToBRep_BasicCurve::TransferBSplineCurve),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dBSplineCurve",
             (opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_BSplineCurve> & ) >(&IGESToBRep_BasicCurve::Transfer2dBSplineCurve),
             R"#(None)#"  , py::arg("start"))
        .def("TransferCircularArc",
             (opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CircularArc> & ) ) static_cast<opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CircularArc> & ) >(&IGESToBRep_BasicCurve::TransferCircularArc),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dCircularArc",
             (opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CircularArc> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CircularArc> & ) >(&IGESToBRep_BasicCurve::Transfer2dCircularArc),
             R"#(None)#"  , py::arg("start"))
        .def("TransferConicArc",
             (opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_ConicArc> & ) ) static_cast<opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_ConicArc> & ) >(&IGESToBRep_BasicCurve::TransferConicArc),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dConicArc",
             (opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_ConicArc> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_ConicArc> & ) >(&IGESToBRep_BasicCurve::Transfer2dConicArc),
             R"#(None)#"  , py::arg("start"))
        .def("TransferCopiousData",
             (opencascade::handle<Geom_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CopiousData> & ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CopiousData> & ) >(&IGESToBRep_BasicCurve::TransferCopiousData),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dCopiousData",
             (opencascade::handle<Geom2d_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CopiousData> & ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_CopiousData> & ) >(&IGESToBRep_BasicCurve::Transfer2dCopiousData),
             R"#(None)#"  , py::arg("start"))
        .def("TransferLine",
             (opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_Line> & ) ) static_cast<opencascade::handle<Geom_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_Line> & ) >(&IGESToBRep_BasicCurve::TransferLine),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dLine",
             (opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_Line> & ) ) static_cast<opencascade::handle<Geom2d_Curve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_Line> & ) >(&IGESToBRep_BasicCurve::Transfer2dLine),
             R"#(None)#"  , py::arg("start"))
        .def("TransferSplineCurve",
             (opencascade::handle<Geom_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & ) ) static_cast<opencascade::handle<Geom_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & ) >(&IGESToBRep_BasicCurve::TransferSplineCurve),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dSplineCurve",
             (opencascade::handle<Geom2d_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & ) ) static_cast<opencascade::handle<Geom2d_BSplineCurve> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_SplineCurve> & ) >(&IGESToBRep_BasicCurve::Transfer2dSplineCurve),
             R"#(None)#"  , py::arg("start"))
        .def("TransferTransformation",
             (opencascade::handle<Geom_Transformation> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & ) ) static_cast<opencascade::handle<Geom_Transformation> (IGESToBRep_BasicCurve::*)( const opencascade::handle<IGESGeom_TransformationMatrix> & ) >(&IGESToBRep_BasicCurve::TransferTransformation),
             R"#(None)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_BasicSurface , shared_ptr<IGESToBRep_BasicSurface> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_BasicSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("eps"),  py::arg("epsGeom"),  py::arg("epsCoeff"),  py::arg("mode"),  py::arg("modeapprox"),  py::arg("optimized") )
    // custom constructors
    // methods
        .def("TransferBasicSurface",
             (opencascade::handle<Geom_Surface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<opencascade::handle<Geom_Surface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_BasicSurface::TransferBasicSurface),
             R"#(Returns Surface from Geom if the last transfer has succeded.)#"  , py::arg("start"))
        .def("TransferPlaneSurface",
             (opencascade::handle<Geom_Plane> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ) ) static_cast<opencascade::handle<Geom_Plane> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_PlaneSurface> & ) >(&IGESToBRep_BasicSurface::TransferPlaneSurface),
             R"#(Returns Plane from Geom if the transfer has succeded.)#"  , py::arg("start"))
        .def("TransferRigthCylindricalSurface",
             (opencascade::handle<Geom_CylindricalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ) ) static_cast<opencascade::handle<Geom_CylindricalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_CylindricalSurface> & ) >(&IGESToBRep_BasicSurface::TransferRigthCylindricalSurface),
             R"#(Returns CylindricalSurface from Geom if the transfer has succeded.)#"  , py::arg("start"))
        .def("TransferRigthConicalSurface",
             (opencascade::handle<Geom_ConicalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ) ) static_cast<opencascade::handle<Geom_ConicalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_ConicalSurface> & ) >(&IGESToBRep_BasicSurface::TransferRigthConicalSurface),
             R"#(Returns ConicalSurface from Geom if the transfer has succeded.)#"  , py::arg("start"))
        .def("TransferSphericalSurface",
             (opencascade::handle<Geom_SphericalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ) ) static_cast<opencascade::handle<Geom_SphericalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_SphericalSurface> & ) >(&IGESToBRep_BasicSurface::TransferSphericalSurface),
             R"#(Returns SphericalSurface from Geom if the transfer has succeded.)#"  , py::arg("start"))
        .def("TransferToroidalSurface",
             (opencascade::handle<Geom_ToroidalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ) ) static_cast<opencascade::handle<Geom_ToroidalSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESSolid_ToroidalSurface> & ) >(&IGESToBRep_BasicSurface::TransferToroidalSurface),
             R"#(Returns SphericalSurface from Geom if the transfer has succeded.)#"  , py::arg("start"))
        .def("TransferSplineSurface",
             (opencascade::handle<Geom_BSplineSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESGeom_SplineSurface> & ) >(&IGESToBRep_BasicSurface::TransferSplineSurface),
             R"#(Returns BSplineSurface from Geom if the transfer has succeded.)#"  , py::arg("start"))
        .def("TransferBSplineSurface",
             (opencascade::handle<Geom_BSplineSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & ) ) static_cast<opencascade::handle<Geom_BSplineSurface> (IGESToBRep_BasicSurface::*)( const opencascade::handle<IGESGeom_BSplineSurface> & ) >(&IGESToBRep_BasicSurface::TransferBSplineSurface),
             R"#(Returns BSplineSurface from Geom if the transfer has succeded.)#"  , py::arg("start"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_TopoCurve , shared_ptr<IGESToBRep_TopoCurve> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_TopoCurve"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
        .def(py::init< const IGESToBRep_TopoCurve & >()  , py::arg("CS") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("eps"),  py::arg("epsGeom"),  py::arg("epsCoeff"),  py::arg("mode"),  py::arg("modeapprox"),  py::arg("optimized") )
    // custom constructors
    // methods
        .def("TransferTopoCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_TopoCurve::TransferTopoCurve),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dTopoCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) >(&IGESToBRep_TopoCurve::Transfer2dTopoCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("face"),  py::arg("trans"),  py::arg("uFact"))
        .def("TransferTopoBasicCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_TopoCurve::TransferTopoBasicCurve),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dTopoBasicCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESData_IGESEntity> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) >(&IGESToBRep_TopoCurve::Transfer2dTopoBasicCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("face"),  py::arg("trans"),  py::arg("uFact"))
        .def("TransferPoint",
             (TopoDS_Vertex (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_Point> & ) ) static_cast<TopoDS_Vertex (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_Point> & ) >(&IGESToBRep_TopoCurve::TransferPoint),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dPoint",
             (TopoDS_Vertex (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_Point> & ) ) static_cast<TopoDS_Vertex (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_Point> & ) >(&IGESToBRep_TopoCurve::Transfer2dPoint),
             R"#(None)#"  , py::arg("start"))
        .def("TransferCompositeCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & ) >(&IGESToBRep_TopoCurve::TransferCompositeCurve),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dCompositeCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_CompositeCurve> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) >(&IGESToBRep_TopoCurve::Transfer2dCompositeCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("face"),  py::arg("trans"),  py::arg("uFact"))
        .def("TransferOffsetCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & ) >(&IGESToBRep_TopoCurve::TransferOffsetCurve),
             R"#(None)#"  , py::arg("start"))
        .def("Transfer2dOffsetCurve",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_OffsetCurve> & , const TopoDS_Face & , const gp_Trsf2d & , const Standard_Real ) >(&IGESToBRep_TopoCurve::Transfer2dOffsetCurve),
             R"#(None)#"  , py::arg("start"),  py::arg("face"),  py::arg("trans"),  py::arg("uFact"))
        .def("TransferCurveOnSurface",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_CurveOnSurface> & ) >(&IGESToBRep_TopoCurve::TransferCurveOnSurface),
             R"#(None)#"  , py::arg("start"))
        .def("TransferCurveOnFace",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( TopoDS_Face & , const opencascade::handle<IGESGeom_CurveOnSurface> & , const gp_Trsf2d & , const Standard_Real , const Standard_Boolean ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( TopoDS_Face & , const opencascade::handle<IGESGeom_CurveOnSurface> & , const gp_Trsf2d & , const Standard_Real , const Standard_Boolean ) >(&IGESToBRep_TopoCurve::TransferCurveOnFace),
             R"#(Transfers a CurveOnSurface directly on a face to trim it. The CurveOnSurface have to be defined Outer or Inner.)#"  , py::arg("face"),  py::arg("start"),  py::arg("trans"),  py::arg("uFact"),  py::arg("IsCurv"))
        .def("TransferBoundary",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_Boundary> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( const opencascade::handle<IGESGeom_Boundary> & ) >(&IGESToBRep_TopoCurve::TransferBoundary),
             R"#(None)#"  , py::arg("start"))
        .def("TransferBoundaryOnFace",
             (TopoDS_Shape (IGESToBRep_TopoCurve::*)( TopoDS_Face & , const opencascade::handle<IGESGeom_Boundary> & , const gp_Trsf2d & , const Standard_Real ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoCurve::*)( TopoDS_Face & , const opencascade::handle<IGESGeom_Boundary> & , const gp_Trsf2d & , const Standard_Real ) >(&IGESToBRep_TopoCurve::TransferBoundaryOnFace),
             R"#(Transfers a Boundary directly on a face to trim it.)#"  , py::arg("face"),  py::arg("start"),  py::arg("trans"),  py::arg("uFact"))
        .def("ApproxBSplineCurve",
             (void (IGESToBRep_TopoCurve::*)( const opencascade::handle<Geom_BSplineCurve> & ) ) static_cast<void (IGESToBRep_TopoCurve::*)( const opencascade::handle<Geom_BSplineCurve> & ) >(&IGESToBRep_TopoCurve::ApproxBSplineCurve),
             R"#(None)#"  , py::arg("start"))
        .def("NbCurves",
             (Standard_Integer (IGESToBRep_TopoCurve::*)() const) static_cast<Standard_Integer (IGESToBRep_TopoCurve::*)() const>(&IGESToBRep_TopoCurve::NbCurves),
             R"#(Returns the count of Curves in "TheCurves")#" )
        .def("Curve",
             (opencascade::handle<Geom_Curve> (IGESToBRep_TopoCurve::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom_Curve> (IGESToBRep_TopoCurve::*)( const Standard_Integer ) const>(&IGESToBRep_TopoCurve::Curve),
             R"#(Returns a Curve given its rank, by default the first one (null Curvee if out of range) in "TheCurves")#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("Approx2dBSplineCurve",
             (void (IGESToBRep_TopoCurve::*)( const opencascade::handle<Geom2d_BSplineCurve> & ) ) static_cast<void (IGESToBRep_TopoCurve::*)( const opencascade::handle<Geom2d_BSplineCurve> & ) >(&IGESToBRep_TopoCurve::Approx2dBSplineCurve),
             R"#(None)#"  , py::arg("start"))
        .def("NbCurves2d",
             (Standard_Integer (IGESToBRep_TopoCurve::*)() const) static_cast<Standard_Integer (IGESToBRep_TopoCurve::*)() const>(&IGESToBRep_TopoCurve::NbCurves2d),
             R"#(Returns the count of Curves in "TheCurves2d")#" )
        .def("Curve2d",
             (opencascade::handle<Geom2d_Curve> (IGESToBRep_TopoCurve::*)( const Standard_Integer ) const) static_cast<opencascade::handle<Geom2d_Curve> (IGESToBRep_TopoCurve::*)( const Standard_Integer ) const>(&IGESToBRep_TopoCurve::Curve2d),
             R"#(Returns a Curve given its rank, by default the first one (null Curvee if out of range) in "TheCurves2d")#"  , py::arg("num")=static_cast<const Standard_Integer>(1))
        .def("SetBadCase",
             (void (IGESToBRep_TopoCurve::*)( const Standard_Boolean ) ) static_cast<void (IGESToBRep_TopoCurve::*)( const Standard_Boolean ) >(&IGESToBRep_TopoCurve::SetBadCase),
             R"#(Sets TheBadCase flag)#"  , py::arg("value"))
        .def("BadCase",
             (Standard_Boolean (IGESToBRep_TopoCurve::*)() const) static_cast<Standard_Boolean (IGESToBRep_TopoCurve::*)() const>(&IGESToBRep_TopoCurve::BadCase),
             R"#(Returns TheBadCase flag)#" )
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;


    static_cast<py::class_<IGESToBRep_TopoSurface , shared_ptr<IGESToBRep_TopoSurface> , IGESToBRep_CurveAndSurface>>(m.attr("IGESToBRep_TopoSurface"))
    // constructors
        .def(py::init<  >()  )
        .def(py::init< const IGESToBRep_CurveAndSurface & >()  , py::arg("CS") )
        .def(py::init< const Standard_Real,const Standard_Real,const Standard_Real,const Standard_Boolean,const Standard_Boolean,const Standard_Boolean >()  , py::arg("eps"),  py::arg("epsGeom"),  py::arg("epsCoeff"),  py::arg("mode"),  py::arg("modeapprox"),  py::arg("optimized") )
    // custom constructors
    // methods
        .def("TransferTopoSurface",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_TopoSurface::TransferTopoSurface),
             R"#(None)#"  , py::arg("start"))
        .def("TransferTopoBasicSurface",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESData_IGESEntity> & ) >(&IGESToBRep_TopoSurface::TransferTopoBasicSurface),
             R"#(None)#"  , py::arg("start"))
        .def("TransferRuledSurface",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_RuledSurface> & ) >(&IGESToBRep_TopoSurface::TransferRuledSurface),
             R"#(None)#"  , py::arg("start"))
        .def("TransferSurfaceOfRevolution",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_SurfaceOfRevolution> & ) >(&IGESToBRep_TopoSurface::TransferSurfaceOfRevolution),
             R"#(None)#"  , py::arg("start"))
        .def("TransferTabulatedCylinder",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_TabulatedCylinder> & ) >(&IGESToBRep_TopoSurface::TransferTabulatedCylinder),
             R"#(None)#"  , py::arg("start"))
        .def("TransferOffsetSurface",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_OffsetSurface> & ) >(&IGESToBRep_TopoSurface::TransferOffsetSurface),
             R"#(None)#"  , py::arg("start"))
        .def("TransferTrimmedSurface",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_TrimmedSurface> & ) >(&IGESToBRep_TopoSurface::TransferTrimmedSurface),
             R"#(None)#"  , py::arg("start"))
        .def("TransferBoundedSurface",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_BoundedSurface> & ) >(&IGESToBRep_TopoSurface::TransferBoundedSurface),
             R"#(None)#"  , py::arg("start"))
        .def("TransferPlane",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_Plane> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESGeom_Plane> & ) >(&IGESToBRep_TopoSurface::TransferPlane),
             R"#(None)#"  , py::arg("start"))
        .def("TransferPerforate",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESBasic_SingleParent> & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESBasic_SingleParent> & ) >(&IGESToBRep_TopoSurface::TransferPerforate),
             R"#(None)#"  , py::arg("start"))
        .def("ParamSurface",
             (TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , gp_Trsf2d & , Standard_Real & ) ) static_cast<TopoDS_Shape (IGESToBRep_TopoSurface::*)( const opencascade::handle<IGESData_IGESEntity> & , gp_Trsf2d & , Standard_Real & ) >(&IGESToBRep_TopoSurface::ParamSurface),
             R"#(None)#"  , py::arg("start"),  py::arg("trans"),  py::arg("uFact"))
    // methods using call by reference i.s.o. return
    // static methods
    // static methods using call by reference i.s.o. return
    // operators
    // additional methods and static methods
;

// functions
// ./opencascade\IGESToBRep_ToolContainer.hxx
// ./opencascade\IGESToBRep_TopoCurve.hxx
// ./opencascade\IGESToBRep_IGESBoundary.hxx
// ./opencascade\IGESToBRep_TopoSurface.hxx
// ./opencascade\IGESToBRep_AlgoContainer.hxx
// ./opencascade\IGESToBRep_Actor.hxx
// ./opencascade\IGESToBRep_Reader.hxx
// ./opencascade\IGESToBRep_BasicSurface.hxx
// ./opencascade\IGESToBRep_BasicCurve.hxx
// ./opencascade\IGESToBRep.hxx
// ./opencascade\IGESToBRep_BRepEntity.hxx
// ./opencascade\IGESToBRep_CurveAndSurface.hxx

// Additional functions

// operators

// register typdefs


// exceptions

// user-defined post-inclusion per module in the body

};

// user-defined post-inclusion per module

// user-defined post
